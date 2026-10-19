/*
 * LBPParticleFix: swaps LittleBigPlanet Vita's three particle shaders for
 * versions with 960x544 screen constants (fix by sackboydjso), so particles
 * draw correctly when VitaGrafix renders the game at native resolution.
 * Hooks sceGxmShaderPatcherRegisterProgram; nothing on disk is changed.
 */
#include <psp2/kernel/modulemgr.h>
#include <psp2/kernel/clib.h>
#include <psp2/io/fcntl.h>
#include <psp2/io/stat.h>
#include <taihen.h>
#include <stdint.h>
#include "shaders.h"

#define LOG_DIR "ux0:data/LBPParticleFix"
#define LOG_PATH LOG_DIR "/log.txt"
#define MAX_DIFF_WORDS 16

static SceUID hook = -1;
static tai_hook_ref_t register_ref;

static void log_line(const char *fmt, ...) {
  char buf[256];
  va_list args;
  va_start(args, fmt);
  int len = sceClibVsnprintf(buf, sizeof(buf), fmt, args);
  va_end(args);
  SceUID fd = sceIoOpen(LOG_PATH, SCE_O_WRONLY | SCE_O_CREAT | SCE_O_APPEND, 0666);
  if (fd < 0)
    return;
  sceIoWrite(fd, buf, len < (int)sizeof(buf) ? len : (int)sizeof(buf) - 1);
  sceIoClose(fd);
}

static int diff_words(const uint8_t *a, const uint8_t *b, uint32_t size) {
  int diffs = 0;
  for (uint32_t i = 0; i + 4 <= size; i += 4)
    if (*(const uint32_t *)(a + i) != *(const uint32_t *)(b + i))
      diffs++;
  return diffs;
}

static int register_patched(void *patcher, const void *program, void *id) {
  const uint8_t *p = program;
  if (p && p[0] == 'G' && p[1] == 'X' && p[2] == 'P' && p[3] == 0) {
    uint32_t size = *(const uint32_t *)(p + 8);
    for (unsigned i = 0; i < sizeof(fixes) / sizeof(fixes[0]); i++) {
      if (size != fixes[i].size)
        continue;
      int diffs = diff_words(p, fixes[i].gxp, size);
      if (diffs <= MAX_DIFF_WORDS) {
        log_line("swapped %s (%d words differed)\n", fixes[i].name, diffs);
        program = fixes[i].gxp;
        break;
      }
      log_line("size of %s but %d words differ: left alone\n", fixes[i].name, diffs);
    }
  }
  return TAI_CONTINUE(int, register_ref, patcher, program, id);
}

int _start(SceSize args, void *argp) __attribute__((weak, alias("module_start")));
int module_start(SceSize args, void *argp) {
  sceIoMkdir(LOG_DIR, 0777);
  sceIoRemove(LOG_PATH);
  // SceGxm library, sceGxmShaderPatcherRegisterProgram
  hook = taiHookFunctionImport(&register_ref, TAI_MAIN_MODULE, 0xF76B66BD, 0x2B528462, register_patched);
  log_line("LBPParticleFix loaded, hook %08x\n", hook);
  return SCE_KERNEL_START_SUCCESS;
}

int module_stop(SceSize args, void *argp) {
  if (hook >= 0)
    taiHookRelease(hook, register_ref);
  return SCE_KERNEL_STOP_SUCCESS;
}
