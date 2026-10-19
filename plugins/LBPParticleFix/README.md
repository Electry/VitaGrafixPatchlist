# LBPParticleFix

Fixes the broken smoke, gas and splash particles in LittleBigPlanet when VitaGrafix runs it above 720x408 ([VitaGrafix#24](https://github.com/Electry/VitaGrafix/issues/24)).

Those particle shaders have the 720x408 screen size baked in. This plugin swaps in versions built for 960x544 (shader fix by [sackboydjso](https://youtu.be/2JieBEgf0Xs)) as the game loads them. No game files are changed.

## Install
1. Set up VitaGrafix for LittleBigPlanet as usual, e.g. `IB=960x544`.
2. Copy `LBPParticleFix.suprx` to `ur0:tai/`.
3. Add to `ur0:tai/config.txt` (or `ux0:tai/config.txt` if you use that one), using your game's title ID:
   ```
   *PCSA00017
   ur0:tai/LBPParticleFix.suprx
   ```
   Title IDs: PCSF00021 (EU), PCSA00017 (US), PCSA00549 (US Game of the Year), PCSC00013 (JP), PCSD00006 (ASIA).
4. Reboot.

`ux0:data/LBPParticleFix/log.txt` lists the shaders swapped on each launch.

Tested on the US Game of the Year edition (1.22).

## Build
With [VitaSDK](https://vitasdk.org) and taiHEN's stubs: `python3 gen_shaders.py && cmake -B build && cmake --build build`.
