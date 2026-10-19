cmake_minimum_required(VERSION 3.16)
set(CMAKE_TOOLCHAIN_FILE "$ENV{VITASDK}/share/vita.toolchain.cmake" CACHE PATH "toolchain file")
project(LBPParticleFix C)
include("$ENV{VITASDK}/share/vita.cmake" REQUIRED)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wl,-q -Wall -O2 -nostdlib -std=gnu11")

add_executable(LBPParticleFix main.c)
target_link_libraries(LBPParticleFix taihen_stub SceLibKernel_stub SceIofilemgr_stub gcc)
vita_create_self(LBPParticleFix.suprx LBPParticleFix CONFIG exports.yml UNSAFE)
