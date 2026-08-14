# patchlist.txt

Collection of patches for [VitaGrafix](https://github.com/Electry/VitaGrafix) - a taiHEN plugin that allows you to change resolution and FPS cap of some of the PlayStation Vita games.

**Required VitaGrafix:** v5.0.1 (or newer)


## Installation
1. Download raw **[patchlist.txt](https://raw.githubusercontent.com/Electry/VitaGrafixPatchlist/master/patchlist.txt)**
    - optionally download files in **[patch/](https://github.com/Electry/VitaGrafixPatchlist/tree/master/patch)** folder, these are separated due to their larger size (100+ lines for one game)
2. Copy it to *ux0:/data/VitaGrafix/*
    - *patch/* files go into *ux0:/data/VitaGrafix/patch/*
3. Configure your game by editing *ux0:/data/VitaGrafix/config.txt* or by using [VitaGrafixConfigurator](https://github.com/Kirezar/VitaGrafixConfigurator)

## Legend

**PATCH AVAILABILITY**<br>
✅ - patch available<br>
🟡 - patch available with unresolved issues<br>
❌ - patch not available<br>
⛔ - patch not available, it was already looked at and deemed too hard to do to fix all issues to acceptable level<br>

**FEATURE AVAILABILITY**<br>
✅ - configurable<br>
🟡 - configurable - has issues<br>
❌ - not configurable - missing support<br>
⚪ - not configurable - deemed unnecessary (e.g. =FB - scales with framebuffer automatically)<br>

**GAME QUIRKS**<br>
🎛️ - Memory reallocation required - RAM/VRAM must be freed elsewhere to make room for larger display buffer(s)<br>
🖼️ - UI elements use static sizing - must be manually resized for different resolutions<br>
🌤️ - Graphics effects are baked-in - must be manually adjusted to render properly at different resolutions or FPS<br>
🔐 - Internal FPS lock - must be removed or adjusted to allow higher FPS<br>
⏱️ - Gameplay speed is tied to framerate - must be adjusted to work correctly at different FPS<br>
👆 - Touch input alignment required - must be adjusted to calculate correct coordinates at different resolutions<br>
🎮 - Button polling needs adjustment - must be adjusted to not miss button presses at different FPS<br>
🏁 - MSAA configuration is supported (experimental) - supports configuring off/2x/4x MSAA modes<br>

## Patchlist

<details>
<summary>List of all analysed games (CLICK TO OPEN)</summary>
<h6>

| NAME | TITLE ID (AVAILABILITY, FINGERPRINT, VERSION) | FRAME <br> BUFFER | INTERNAL <br> RES. | FPS <br> LIMIT | QUIRKS |
| ---- | --------------------------------------------- | ----------------- | ------------------ | -------------- | ------ |
| Akiba's Beat | `PCSB01066` EU <br> └ ❌ v1.00 | ⚪960x544 | ⚪960x544 | ❌∞ | |
| Akiba's Trip: Undead & Undressed | `PCSB00640` EU <br> └ ❌ v1.00 | ⚪960x544 | ⚪960x544 | ❌30 | |
| Amnesia: Memories | `PCSB00740` EU <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Angry Birds Trilogy | `PCSB00402` EU <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Assassin's Creed III: Liberation | `PCSB00074` EU <br> └ ✅ `0xBC2441CC` v1.02 <br> `PCSE00053` US <br> └ ✅ `0xBC2441CC` v1.02 <br> `PCSG00116` JP <br> └ ✅ `0xBC2441CC` v1.01 | ⚪960x544 | ✅720x408 | ✅30 | |
| Asphalt: Injection | `PCSB00040` EU <br> └ ✅ `0x61A666FB` v1.00 <br> `PCSE00007` US <br> └ ✅ `0xA8F00ABD` v1.00 | ✅720x408 | ⚪=FB | ✅50 | |
| Atelier Ayesha Plus: The Alchemist of Dusk | `PCSE00584` US <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Atelier Escha & Logy Plus: Alchemists of the Dusk Sky | `PCSB00906` EU <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Atelier Firis: The Alchemist and the Mysterious Journey | `PCSB01087` EU <br> └ ✅ `0xCA8D14AC` v1.01 <br> `PCSE01044` US <br> └ ✅ `0x79850565` v1.01 <br> `PCSG00929` JP <br> └ ✅ `0xD07894DD` v1.10 <br> `PCSH10026` AS <br> └ ✅ `0xA6FFD15B` v1.01 | ⚪960x544 | ✅960x442 | ⚪60 |
| Atelier Lydie & Soeur: Fushigi na Kaiga no Renkinjutsu Samurai | `PCSG01116` JP <br> └ ✅ `0xFDABB61E` v1.06 | ⚪960x544 | ✅960x442 | ⚪60 | |
| Atelier Meruru Plus: The Apprentice of Arland | `PCSB00377` EU <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Atelier Rorona Plus: The Alchemist of Arland | `PCSB00582` EU <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Atelier Shallie Plus: Alchemists of the Dusk Sea | `PCSB01043` EU <br> └ ✅ `0x251D6E5D` v1.00 <br> `PCSE00998` US <br> └ ✅ `0xA7A41140` v1.00 <br> `PCSG00821` JP <br> └ ✅ `0x5DEA3511` v1.03 | ⚪960x544 | ✅960x408 | ⚪60 | |
| Atelier Sophie: The Alchemist of the Mysterious Book | `PCSB00973` EU <br> └ ✅ `0x6E045C8F` v1.01 <br> `PCSE00892` US <br> └ ✅ `0xDCD6A75F` v1.01 <br> `PCSG00694` JP <br> └ ✅ `0x907247B3` v1.05 <br> `PCSH00220` AS <br> └ ✅ `0xF7F81A8F` v1.01 | ⚪960x544 | ✅960x442 | ⚪60 | |
| Atelier Totori Plus: The Adventurer of Arland | `PCSB00291` EU <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| BADLAND: Game of the Year Edition | `PCSB00669` EU <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Blue Reflection: Maboroshi ni Mau - Shoujo no Ken | `PCSG00987` JP <br> └ ✅ `0xB2361C99` v1.05 | ⚪960x544 | ✅960x442 | ⚪60 | |
| Borderlands 2 | `PCSF00570` EU <br> └ ✅ `0x8440E1AE` v1.07 <br> `PCSF00576` EU <br> └ ✅ `0x8440E1AE` v1.07 <br> `PCSE00383` US <br> └ ✅ `0x8440E1AE` v1.09 <br> `PCSG00400` JP <br> └ ✅ `0x83B4A1A2` v1.03 | ✅960x544 | ⚪=FB | ⚪60 | |
| Call of Duty: Black Ops Declassified | `PCSB00213` EU <br> └ ❌ v1.02 | ⚪960x544 | ❌720x408 | ❌30 | |
| Catherine: Full Body | `PCSG01179` JP <br> └ ✅ `0x193F08A5` v1.03 | ⚪960x544 | ✅720x408 | ❌30 | |
| Child of Light | `PCSB00598` EU <br> └ ❌ v1.00 | ⚪960x544 | ⚪960x544 | ❌30 | |
| Danganronpa: Trigger Happy Havoc | `PCSB00346` EU <br> └ ❌ v1.00 | ⚪960x544 | ⚪960x544 | ❌30 | |
| Dead Nation | `PCSF00427` EU <br> └ ❌ v1.01 | ⚪960x544 | ⚪960x544 | ❌30 | |
| Dead or Alive 5 Plus | `PCSB00296` EU <br> └ ✅ `0xA1B33BC8` v1.01 <br> `PCSE00235` US <br> └ ✅ `0xA1B33BC8` v1.01 <br> `PCSG00167` JP <br> └ ✅ `0xA1B33BC8` v1.01 | ⚪960x544 | ✅720x408 | ⚪60 | |
| Dead or Alive Xtreme 3: Venus | `PCSG00773` JP <br> └ ✅ `0x15935EBA` v1.16 <br> `PCSH00250` AS <br> └ ✅ `0x754CBECE` v1.15 <br> `PCSH00281` AS <br> └ ✅ `0x17294EAC` v1.15 | ⚪960x544 | ✅736x416 <br> ⟷640x368 | ❌30 | |
| Deception IV: Blood Ties <br> Kagero: Darkside Princess | `PCSB00499` EU <br> └ ✅ `0x31CA7FEA` v1.00 <br> `PCSE00401` US <br> └ ✅ `0x31CA7FEA` v1.00 <br> `PCSG00304` JP <br> └ ✅ `0x505CBA3F` v1.02 | ⚪960x544 | ✅960x544 <br> ⟷720x408 <br> ⟷640x368 | ❌30 | |
| Deception IV: The Nightmare Princess <br> Kagero: Mou Hitori no Princess | `PCSB00829` EU <br> └ ✅ `0xA189B87F` v1.02 <br> `PCSE00743` US <br> └ ✅ `0x073775D6` v1.01 <br> `PCSG00565` JP <br> └ ✅ `0xA189B87F` v1.05 | ⚪960x544 | ✅960x544 <br> ⟷720x408 <br> ⟷640x368 | ❌30 | |
| Disney Epic Mickey 2: The Power of Two | `PCSF00308` EU <br> └ ✅ `0xE13F06A1` v1.00 <br> `PCSF00309` EU <br> └ ✅ `0xE13F06A1` v1.00 <br> `PCSA00110` US <br> └ ✅ `0xE13F06A1` v1.00 | ⚪960x544 | ✅720x408 | ❌30 | |
| Dragon Ball Z: Battle of Z | `PCSB00396` EU <br> └ ✅ `0x1592C04C` v1.01 <br> `PCSE00305` US <br> └ ✅ `0x2EB183FF` v1.01 <br> `PCSG00213` JP <br> └ ✅ `0x0B6BA1EA` v1.01 | ❓ | ✅704x448 | ❓ | |
| Dragon Quest Builders | `PCSB00981` EU <br> └ ✅ `0x1F8CD7CE` v1.00 <br> `PCSE00912` US <br> └ ✅ `0x1C5AA1D1` v1.00 <br> `PCSG00697` JP <br> └ ✅ `0x7087C461` v1.03 <br> `PCSH00221` AS <br> └ ✅ `0x7E953878` v1.00 | ⚪960x544 | ✅720x408 | ✅60 | |
| Dragon Quest Heroes II: Futago no Ou to Yogen no Owari | `PCSG00820` JP <br> └ ❌ v1.09 | ⚪960x544 | ⚪960x544 | ❌30 | |
| Dungeon Hunter: Alliance | `PCSB00041` EU <br> └ ✅ `0x68447424` v1.00 <br> `PCSE00008` US <br> └ ✅ `0x0FC000EE` v1.00 | ⚪960x544 | ✅702x408 | ⚪60 | |
| Everybody's Golf | `PCSF00006` EU <br> └ ❌ v1.09 | ❌640x368 | ❌640x368 | ❌30 | |
| Fantasy Hero: Unsigned Legacy | `PCSB00663` EU <br> └ ✅ `0xA52698D1` v1.00 <br> `PCSE00536` US <br> └ ✅ `0x39C7F8A6` v1.01 <br> `PCSG00280` JP <br> └ ✅ `0xBAC2487D` v1.10 <br> `PCSH00157` AS <br> └ ✅ `0xE9609E2F` v1.00 | ✅720x408 | ⚪=FB | ⚪60 | |
| Farming Simulator 18 | `PCSE01035` US <br> └ ❌ v1.00 | ⚪960x544 | ⚪960x544 | ❌30 | |
| Fate/EXTELLA (The Umbral Star) | `PCSB01030` EU <br> └ ✅ `0x3156133A` v1.01 <br> `PCSE00928` US <br> └ ✅ `0xEF934DB7` v1.01 <br> `PCSH00299` AS <br> └ ✅ `0x4E5BE9F4` v1.01 <br> `PCSG00600` JP <br> └ ✅ `0xB3BD9279` v1.03 | ⚪960x544 | ✅720x408 | ❌30 | |
| Fate/EXTELLA LINK | `PCSE01254` US <br> └ ✅ `0x69300D95` v1.01 <br> `PCSG01091` JP <br> └ ✅ `0xA46AF105` v1.08 <br> `PCSH10121` AS <br> └ ✅ `0x31BBD3ED` v1.03 | ⚪960x544 | ✅720x408 | ❌30 | |
| F1 2011 | `PCSB00027` EU <br> └ ✅ `0xCE789828` v1.00 <br> `PCSE00002` US <br> └ ✅ `0x4FA39897` v1.00 | ⚪960x544 | ✅640x384 | ⚪60 | |
| Fez | `PCSB00456` EU <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| FIFA 15 | `PCSE00481` US <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| flower | `PCSF00349` EU <br> └ ❌ v1.00 | ⚪960x544 | ❌768x544 | ⚪60 | |
| Gintama Ranbu | `PCSG01073` JP <br> └ ❌ v1.06 | ⚪960x544 | ❌Dynamic | ❌30 | |
| Girls und Panzer: Senshado, Kiwamemasu! | `PCSG00339` JP <br> └ ❌ v1.00 | ⚪960x544 | ⚪960x544 | ❌20 | |
| God of War Collection: God of War | `PCSF00438` EU <br> └ ✅ `0x8638FFED` v1.00 <br> `PCSA00126` US <br> └ ✅ `0x126F65C5` v1.00 <br> `PCSC00059` JP <br> └ ✅ `0x990F8128` v1.00 | ✅720x408 | ⚪=FB | ✅30 | |
| God of War Collection: God of War II | `PCSF00438` EU <br> └ ✅ `0x6531F96A` v1.00 <br> `PCSA00126` US <br> └ ✅ `0x0064EC7E` v1.00 <br> `PCSC00059` JP <br> └ ✅ `0x395A00F6` v1.00 | ✅720x408 | ⚪=FB | ✅30 | |
| Gravity Rush | `PCSF00024` EU <br> └ ❌ v1.00 | ❌720x408 | ❌720x408 | ❌30 | |
| Gundam Breaker | `PCSG00126` JP <br> └ ❌ v1.02 | ⚪960x544 | ❌640x384 | ❌30 | |
| Gundam Breaker 2 | `PCSG00412` JP <br> └ ✅ `0xED0CCF84` v1.03 <br> `PCSH00132` AS <br> └ ✅ `0x52E6D297` v1.03 | ⚪960x544 | ✅720x408 | ❌30 | |
| Gundam Breaker 3 | `PCSG00760` JP <br> └ ❌ v1.30 | ⚪960x544 | ❌720x408 | ❌30 | |
| Hatsune Miku: Project Diva f | `PCSB00419` EU <br> └ 🟡 `0x544807B3` v1.00 <br> `PCSE00326` US <br> └ 🟡 `0x1BA9AC18` v1.00 <br> `PCSG00074` JP <br> └ 🟡 `0xD3BDB4F5` v1.01 | ⚪960x544 | ✅640x352 | 🟡30 | [#120](https://github.com/Electry/VitaGrafix/issues/120), [#81](https://github.com/Electry/VitaGrafix/issues/81) |
| Hatsune Miku: Project Diva f 2nd | `PCSB00554` EU <br> └ 🟡 `0xDB737975` v1.00 <br> `PCSE00434` US <br> └ 🟡 `0x31DAC716` v1.00 <br> `PCSG00205` JP <br> └ 🟡 `0x4AAABD3D` v1.01 <br> `PCSH00088` AS <br> └ 🟡 `0xB499AC54` v1.00 | ⚪960x544 | ✅720x408 | 🟡30 | [#120](https://github.com/Electry/VitaGrafix/issues/120), [#80](https://github.com/Electry/VitaGrafix/issues/80) |
| Hatsune Miku: Project Diva X | `PCSB01007` EU <br> └ ✅ `0x0A3FF027` v1.00 <br> `PCSE00867` US <br> └ ✅ `0x0A3FF027` v1.00 <br> `PCSH00176` AS <br> └ ✅ `0x5C1C7A68` v1.00 <br> `PCSG00683` JP <br> └ ✅ `0xCAF82C1B` v1.00 | ⚪960x544 | ✅720x408 | ❌30 | |
| Helldivers | `PCSF00465` EU <br> └ 🟡 `0x32DF0B56` v7.01 <br> `PCSA00134` US <br> └ 🟡 `0x32DF0B56` v7.01 <br> `PCSC00078` JP <br> └ 🟡 `0x32DF0B56` v7.01 <br> `PCSD00086` AS <br> └ 🟡 `0x32DF0B56` v7.01 <br> `PCSD00097` AS <br> └ 🟡 `0x32DF0B56` v7.01 | 🟡960x544 | ⚪=FB | ⚪60 | [#82](https://github.com/Electry/VitaGrafixPatchlist/issues/82) |
| Hotline Miami | `PCSB00318` EU <br> └ ⚪ v1.01 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| I am Setsuna | `PCSG00756` JP <br> └ ✅ `0x89B603C7` v1.00 | ⚪960x544 | ⚪960x544 | ✅30 | |
| Injustice: Gods Among Us | `PCSB00356` EU <br> └ 🟡 `0x9E662913` v1.01 <br> `PCSE00271` US <br> └ 🟡 `0xF48FF509` v1.01 | 🟡720x408 | ⚪=FB | ⚪60 | [#82](https://github.com/Electry/VitaGrafixPatchlist/issues/82) |
| Jak and Daxter: The Precursor Legacy | `PCSF00247` EU <br> └ ✅ `0x109D6AD5` v1.00 <br> `PCSF00248` EU <br> └ ✅ `0x109D6AD5` v1.00 <br> `PCSA00080` US <br> └ ✅ `0x109D6AD5` v1.00 | ✅720x408 | ⚪=FB | ✅20 | |
| Jak II | `PCSF00247` EU <br> └ ✅ `0x15059015` v1.00 <br> `PCSF00249` EU <br> └ ✅ `0x15059015` v1.00 <br> `PCSA00080` US <br> └ ✅ `0x15059015` v1.00 | ✅720x408 | ⚪=FB | ❌30 | |
| Jak 3 | `PCSF00247` EU <br> └ ✅ `0x790EBAD9` v1.00 <br> `PCSF00250` EU <br> └ ✅ `0x790EBAD9` v1.00 <br> `PCSA00080` US <br> └ ✅ `0x790EBAD9` v1.00 | ✅720x408 | ⚪=FB | ❌30 | |
| J-Stars Victory Vs | `PCSG00300` JP <br> └ ✅ `0xA11C13E2` v1.02 | ⚪960x544 | ✅768x448 | ❌30 | |
| J-Stars Victory Vs+ | `PCSB00713` EU <br> └ ✅ `0x52574668` v1.00 <br> `PCSE00595` US <br> └ ✅ `0x60650340` v1.02 <br> `PCSH00136` AS <br> └ ✅ `0x86EAD93B` v1.00 | ⚪960x544 | ✅768x448 | ❌30 | |
| Kidou Senshi Gundam Seed: Battle Destiny | `PCSG00040` JP <br> └ ✅ `0x657F506B` v1.01 | ⚪960x544 | ✅704x384 | ✅30 | |
| Killzone: Mercenary | `PCSF00243` EU <br> └ ✅ `0x8659827D` v1.12 <br> `PCSF00403` EU <br> └ ✅ `0x6C74F8E9` v1.12 <br> `PCSA00107` US <br> └ ✅ `0x0F9D3B7C` v1.12 <br> `PCSC00045` JP <br> └ ✅ `0x0C47E0C8` v1.12 <br> `PCSD00071` AS <br> └ ✅ `0x8870DB01` v1.12 | ⚪960x544 | ✅960x544* <br> *\*dynamic* | ✅30 | |
| LEGO Batman 2: DC Super Heroes | `PCSB00133` EU <br> └ ❌ v1.00 | ❌640x368 | ❌640x368 | ❌30 | |
| LEGO Batman 3: Beyond Gotham | `PCSB00563` EU <br> └ ✅ `0x91AE1FF9` v1.01 <br> `PCSE00442` US <br> └ ✅ `0xEBB7DA06` v1.01 | ⚪960x544 | ✅640x368 | ❌30 | |
| LEGO Harry Potter: Years 5–7 | `PCSB00103` EU <br> └ 🟡 `0x10842FA7` v1.00 <br> `PCSE00057` US <br> └ 🟡 `0xE9D1D998` v1.01 | 🟡640x368 | ⚪=FB | ❌30 | [#3](https://github.com/Electry/VitaGrafixPatchlist/issues/3) |
| LEGO Jurassic World | `PCSB00703` EU <br> └ ✅ `0xE8AFEE20` v1.00 <br> `PCSE00587` US <br> └ ✅ `0xAFB89A72` v1.00 | ⚪960x544 | ✅640x368 | ❌30 | |
| LEGO Legends of Chima: Laval's Journey | `PCSB00304` EU <br> └ ❌ v1.00 | ❌720x408 | ❌640x368 | ❌30 | |
| LEGO Marvel Super Heroes: Universe in Peril | `PCSB00315` EU <br> └ ✅ `0xA9235749` v1.00 <br> `PCSE00250` US <br> └ ✅ `0x9644D69D` v1.00 | ⚪960x544 | ✅640x368 | ❌30 | |
| LEGO Marvel's Avengers | `PCSB00764` EU <br> └ ✅ `0x356EBF5C` v1.00 <br> `PCSE00670` US <br> └ ✅ `0xC87160F3` v1.00 | ⚪960x544 | ✅640x368 | ❌30 | |
| LEGO Ninjago: Nindroids | `PCSB00500` EU <br> └ ❌ v1.00 | ⚪960x544 | ⚪960x544 | ❌30 | |
| LEGO Ninjago: Shadow of Ronin | `PCSB00706` EU <br> └ ✅ `0xB178EFFD` v1.00 <br> `PCSE00534` US <br> └ ✅ `0xD6EAF718` v1.01 | ⚪960x544 | ✅640x368 | ❌30 | |
| LEGO Star Wars: The Force Awakens | `PCSB00877` EU <br> └ ✅ `0x0C927256` v1.00 <br> `PCSE00791` US <br> └ ✅ `0x405C0E5E` v1.00 | ⚪960x544 | ✅640x368 | ❌30 | |
| LEGO The Hobbit | `PCSB00503` EU <br> └ ✅ `0x49FEA6D2` v1.02 <br> `PCSE00390` US <br> └ ✅ `0x2D2DE73B` v1.00 | ⚪960x544 | ✅640x368 | ❌30 | |
| LEGO The Lord of the Rings | `PCSB00125` EU <br> └ ❌ v1.00 | ❌640x368 | ❌640x368 | ❌30 | |
| LIMBO | `PCSB00336` EU <br> └ ❌ v1.00 | ⚪960x544 | ⚪960x544 | ❌30 | |
| LittleBigPlanet | `PCSF00021` EU <br> └ 🟡 `0x0714AF6B` v1.22 <br> `PCSA00017` US <br> └ 🟡 `0x0714AF6B` v1.22 <br> `PCSC00013` JP <br> └ 🟡 `0x0714AF6B` v1.22 <br> `PCSD00006` AS <br> └ 🟡 `0x0714AF6B` v1.22 | ⚪960x544 | 🟡720x408 | ❌30 | [#24](https://github.com/Electry/VitaGrafix/issues/24) |
| Lumines: Electronic Symphony | `PCSB00061` EU <br> └ ✅ `0x805B6438` v1.02 <br> `PCSE00009` US <br> └ ✅ `0x870C9A3D` v1.01 <br> `PCSG00014` JP <br> └ ✅ `0x3B868E2D` v1.01 | ⚪960x544 | ⚪960x544 | ✅30 | |
| Macross Delta Scramble | `PCSG00947` JP <br> └ ✅ `0x01BBD637` v1.02 | ⚪960x544 | ✅800x448 | ❌30 | |
| Mahouka Koukou no Rettousei: Out of Order | `PCSG00456` JP <br> └ ✅ `0x0104460F` v1.02 | ⚪960x544 | ✅720x408 | ✅30 | |
| Metal Gear Solid HD Collection | `PCSE00020` US <br> └ ❌ v1.00 | ⚪960x544 | ❌720x448 | ❌30 | |
| Minecraft: PlayStation Vita Edition | `PCSB00560` EU <br> └ ✅ `0x85DDDE28` v1.83 <br> `PCSE00491` US <br> └ ✅ `0x85DDDE28` v1.83 <br> `PCSG00302` JP <br> └ ✅ `0x85DDDE28` v1.83 | ✅720x408 | ⚪=FB | ✅60 | |
| Miracle Girls Festival | `PCSG00610` JP <br> └ ✅ `0x2A0BE571` v1.00 | ⚪960x544 | ✅720x408 | ❌30 | |
| MLB 15: The Show | `PCSA00511` US <br> └ ❌ v1.01 | ❌720x408 | ❌720x408 | ⚪60 | |
| Mobile Suit Gundam: Extreme VS-Force | `PCSE00915` US <br> └ ❌ v1.04 | ❌720x408 | ❌720x408 | ❌30 | |
| Mortal Kombat | `PCSB00106` EU <br> └ [⬇️](https://raw.githubusercontent.com/Electry/VitaGrafixPatchlist/master/patch/PCSB00106.txt) `0x2AA8AC12` v1.00* <br> `PCSE00023` US <br> └ [⬇️](https://raw.githubusercontent.com/Electry/VitaGrafixPatchlist/master/patch/PCSE00023.txt) `0xAB5E7564` v1.00* <br> *\*requires extra patch/ files* | ✅640x368 | ⚪=FB | ⚪60 | |
| MotoGP 13 | `PCSB00316` EU <br> └ ✅ `0x0BCB4421` v1.02 <br> `PCSE00409` US <br> └ ✅ `0xC88435BD` v1.00 | ⚪960x544 | ✅704x448 | ❓ | |
| MotoGP 14 | `PCSB00498` EU <br> └ ✅ `0x7467CF36` v1.01 <br> `PCSE00529` US <br> └ ✅ `0x0BCBC928` v1.00 | ⚪960x544 | ✅704x448 | ❌30 | |
| MUD - FIM Motocross World Championship | `PCSB00182` EU <br> └ ✅ `0x216C1258` v1.00 <br> `PCSE00219` US <br> └ ✅ `0x12FD8947` v1.00 | ⚪960x544 | ✅704x448 | ❌30 | |
| MXGP: The Official Motocross Videogame | `PCSB00470` EU <br> └ ✅ `0xE4028AA3` v1.00 <br> `PCSE00530` US <br> └ ✅ `0xD33CA0EC` v1.00 | ⚪960x544 | ✅704x448 | ❌30 | |
| Need for Speed: Most Wanted | `PCSB00183` EU <br> └ ✅ `0x36DC8D31` v1.01 <br> `PCSE00089` US <br> └ ✅ `0x36DC8D31` v1.01 <br> `PCSG00106` JP <br> └ ✅ `0x36DC8D31` v1.01 | ⚪960x544 | ✅640x368 | ❌30 | |
| Nelke to Densetsu no Renkinjutsushi Tachi: Aratana Daichi no Atelier | `PCSG01223` JP <br> └ ✅ `0x12B8EB7E` v1.06 | ⚪960x544 | ✅960x442 | ⚪60 | |
| Ninja Gaiden Sigma 2 Plus | `PCSB00294` EU <br> └ ✅ `0x4C9B46C4` v1.00 <br> `PCSE00233` US <br> └ ✅ `0x9194A548` v1.00 <br> `PCSG00157` JP <br> └ ✅ `0x897AD547` v1.00 | ⚪960x544 | ✅864x480 <br> ⟷640x416 | ❌30 | |
| Ninja Gaiden Sigma Plus | `PCSB00097` EU <br> └ ❌ v1.00 | ⚪960x544 | ❌Dynamic | ❌30 | |
| Oddworld: Abe's Oddysee - New 'n' Tasty | `PCSB00502` EU <br> └ ❌ v1.00 | ⚪960x544 | ⚪960x544 | ❌30 | |
| Oddworld: Munch's Oddysee HD | `PCSB00275` EU <br> └ ✅ `0x4761DCC0` v1.02 <br> `PCSE00369` US <br> └ ✅ `0x4761DCC0` v1.02 | ⚪960x544 | ⚪960x544 | ✅30 | |
| Oddworld: Stranger's Wrath HD | `PCSB00180` EU <br> └ ⚪ v1.02 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| One Piece: Burning Blood | `PCSB00893` EU <br> └ ✅ `0x7E194F84` v1.08 <br> `PCSE00808` US <br> └ ✅ `0xFF8DE562` v1.08 <br> `PCSH00202` AS <br> └ ✅ `0x378EE338` v1.08 | ⚪960x544 | ✅704x384 | ❌30 | |
| Persona 4 Golden | `PCSB00245` EU <br> └ ✅ `0x4BB9AE7C` v1.00 <br> `PCSE00120` US <br> └ ✅ `0xB8EBED65` v1.00 <br> `PCSG00004` JP <br> └ ✅ `0x8C503A79` v1.01 <br> `PCSG00563` JP <br> └ ✅ `0x8C503A79` v1.00 <br> `PCSH00021` AS <br> └ ✅ `0x96BBD787` v1.00 | ⚪960x544 | ✅840x476 | ❌30 | |
| Persona 4: Dancing All Night | `PCSB00867` EU <br> └ ❌ v1.01 | ⚪960x544 | ⚪960x544 | ❌30 | |
| Phantasy Star Nova | `PCSG00351` JP <br> └ ✅ `0xADCF21BE` v1.05 <br> `PCSH00143` AS <br> └ ✅ `0xF1E54902` v1.01 | ⚪960x544 | ✅960x544 | ❌30 | |
| Plants vs. Zombies | `PCSF00105` EU <br> └ ⚪ v1.01 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Project Root | `PCSB00650` EU <br> └ ✅ `0x5001CEBE` v1.00 <br> `PCSE00486` US <br> └ ✅ `0x5001CEBE` v1.00 <br> `PCSG00783` JP <br> └ ✅ `0x88F8E42C` v1.00 | ⚪960x544 | ⚪960x544 | ✅30 | |
| Puddle | `PCSB00025` EU <br> └ ❌ v1.00 | ⚪960x544 | ⚪960x544 | ❌∞ | |
| Puella Magi Madoka Magica: The Battle Pentagram | `PCSG00214` JP <br> └ ✅ `0x86F56009` v1.00 | ⚪960x544 | ✅704x448 | ✅30 | |
| Ragnarok Odyssey ACE | `PCSB00471` EU <br> └ ❌ v1.11 | ⚪960x544 | ⚪960x544 | ❌30 | |
| Ratchet & Clank | `PCSF00484` EU <br> └ ✅ `0x0A02A884` v1.00 <br> `PCSF00482` EU <br> └ ✅ `0x0A02A884` v1.00 <br> `PCSA00133` US <br> └ ✅ `0xD06E468A` v1.00 | ✅720x408 | ⚪=FB | ❌30 | |
| Ratchet & Clank 2: Locked and Loaded / Going Commando | `PCSF00485` EU <br> └ ✅ `0x7A1D621C` v1.00 <br> `PCSF00482` EU <br> └ ✅ `0x7A1D621C` v1.00 <br> `PCSA00133` US <br> └ ✅ `0x7A1D621C` v1.00 | ✅720x408 | ⚪=FB | ❌30 | |
| Ratchet & Clank 3 / Up Your Arsenal | `PCSF00486` EU <br> └ ✅ `0xCF835E57` v1.00 <br> `PCSF00482` EU <br> └ ✅ `0xCF835E57` v1.00 <br> `PCSA00133` US <br> └ ✅ `0xCF835E57` v1.00 | ✅720x408 | ⚪=FB | ❌30 | |
| Ratchet & Clank: QForce / Full Frontal Assault | `PCSF00191` EU <br> └ ✅ `0x26E4BF15` v1.01 <br> `PCSA00086` US <br> └ ✅ `0x26E4BF15` v1.01 <br> `PCSC00041` JP <br> └ ✅ `0x26E4BF15` v1.01 | ✅720x408 | ⚪=FB | ⚪60 | |
| Rayman Legends | `PCSB00360` EU <br> └ ⚪ v1.01 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Rayman Origins | `PCSB00079` EU <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Real Boxing | `PCSB00365` EU <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Resident Evil: Revelations 2 | `PCSF00728` EU <br> └ ✅ `0x6321F4D3` v1.04 <br> `PCSE00608` US <br> └ ✅ `0x05510E0F` v1.04 <br> `PCSG00594` JP <br> └ ✅ `0x1AF1E91B` v1.04 <br> `PCSH00187` AS <br> └ ✅ `0x2302049E` v1.04 | ⚪960x544 | ✅720x408 | ❌30 | |
| Resistance: Burning Skies | `PCSF00003` EU <br> └ ⚪ v1.02 | ⚪960x544 | ❌720x408 | ❌30 | |
| RESOGUN | `PCSF00262` EU <br> └ ✅ `0x67CD2E83` v1.01 <br> `PCSA00103` US <br> └ ✅ `0x871F1F8C` v1.01 <br> `PCSC00088` JP <br> └ ✅ `0x9C16CEBD` v1.00 | ✅720x408 | ⚪=FB | ❌30 | |
| Retro City Rampage | `PCSB00203` EU <br> └ ⚪ v1.01 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Ridge Racer | `PCSB00048` EU <br> └ ✅ `0xBD286F0F` v1.02 <br> `PCSE00001` US <br> └ ✅ `0x7E9EDCA3` v1.02 <br> `PCSG00001` JP <br> └ ✅ `0xEB2D8835` v1.04 | ⚪960x544 | ✅720x408 | ❌30 | |
| Secret of Mana | `PCSB01163` EU <br> └ ⚪ v1.03 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Senran Kagura Shinovi Versus | `PCSB00601` EU <br> └ ❌ v1.00 | ⚪960x544 | ⚪960x544 | ❌30 | |
| Silent Hill: Book of Memories | `PCSB00115` EU <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Sine Mora | `PCSB00161` EU <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Skullgirls: 2nd Encore | `PCSB00859` EU <br> └ ❌ v1.03 | ❌640x368 | ❌640x368 | ⚪60 | |
| Sly Cooper and the Thievius Raccoonus | `PCSF00269` EU <br> └ ✅ `0x15BCA5BA` v1.00 <br> `PCSF00338` EU <br> └ ✅ `0x15BCA5BA` v1.00 <br> `PCSA00095` US <br> └ ✅ `0x605D1DB1` v1.00 <br> `PCSA00096` US <br> └ ✅ `0x605D1DB1` v1.00 | ✅720x408 | ⚪=FB | ✅30 | |
| Sly Cooper 2: Band of Thieves | `PCSF00270` EU <br> └ ✅ `0x7288E791` v1.00 <br> `PCSF00338` EU <br> └ ✅ `0x7288E791` v1.00 <br> `PCSA00095` US <br> └ ✅ `0xDCD6B8BC` v1.00 <br> `PCSA00097` US <br> └ ✅ `0xDCD6B8BC` v1.00 | ✅960x544 | ⚪=FB | ✅30 | |
| Sly Cooper 3: Honor Among Thieves | `PCSF00271` EU <br> └ ✅ `0xCE18232F` v1.00 <br> `PCSA00098` US <br> └ ✅ `0xAC2A8892` v1.00 | ✅960x544 | ⚪=FB | ✅30 | |
| Sly Cooper: Thieves in Time | `PCSF00156` EU <br> └ ✅ `0xFAC82F85` v1.01 <br> `PCSF00206` EU <br> └ ✅ `0x56380F69` v1.01 <br> `PCSF00207` EU <br> └ ✅ `0xFFF2D9ED` v1.01 <br> `PCSF00208` EU <br> └ ✅ `0xB67BAF52` v1.01 <br> `PCSF00209` EU <br> └ ✅ `0x10EF2E89` v1.01 <br> `PCSA00068` US <br> └ ✅ `0x008B0E65` v1.01 | ⚪960x544 | ⚪960x544 | ✅30 | |
| Sonic & All-Stars Racing Transformed | `PCSB00190` EU <br> └ ❌ v1.01 | ⚪960x544 | ⚪960x544 | ❌30 | |
| Soul Sacrifice | `PCSF00178` EU <br> └ ✅ `0xA0374454` v1.30 <br> `PCSA00092` US <br> └ ✅ `0x1A6AC246` v1.30 <br> `PCSD00065` AS <br> └ ✅ `0x406FCC54` v1.32 <br> `PCSC00039` JP <br> └ ✅ `0xAA214AD2` v1.33 | ⚪960x544 | ✅720x408 | ❌30 | |
| Soul Sacrifice Delta | `PCSF00532` EU <br> └ ✅ `0xA01008DF` v1.30 <br> `PCSA00152` US <br> └ ✅ `0xD66AEBF4` v1.30 <br> `PCSD00079` AS <br> └ ✅ `0xAE2CCD8C` v1.30 <br> `PCSC00049` JP <br> └ ✅ `0x7607439D` v1.30 | ⚪960x544 | ✅720x408 | ❌30 | |
| Sound Shapes | `PCSF00076` EU <br> └ ⚪ v1.14 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Spy Hunter | `PCSB00166` EU <br> └ 🟡 `0x4D752CEE` v1.00 <br> `PCSE00068` US <br> └ 🟡 `0x9BB899D3` v1.00 | ❓640x368 | ⚪=FB | ❓30 | 🏁 |
| Stardew Valley | `PCSE01235` US <br> └ ⚪ v1.02 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Stealth Inc 2: A Game of Clones | `PCSB00690` EU <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Stealth Inc: A Clone in the Dark | `PCSB00317` EU <br> └ ⚪ v1.01 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| SteamWorld Dig | `PCSB00542` EU <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| SteamWorld Dig 2 | `PCSB01114` EU <br> └ ⚪ v1.01 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| SteamWorld Heist | `PCSB00693` EU <br> └ ✅ `0xBD7CD4EB` v1.02 <br> `PCSE00583` US <br> └ ✅ `0x51AB9D2C` v1.02 | ⚪960x544 | ⚪960x544 | ✅30 | |
| Steins;Gate | `PCSB00724` EU <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Steins;Gate 0 | `PCSB01012` EU <br> └ ❌ v1.02 | ⚪960x544 | ❌960x540 | ⚪60 | |
| Street Fighter X Tekken | `PCSB00144` EU <br> └ ✅ `0x4C4DB951` v1.08 <br> `PCSE00005` US <br> └ ✅ `0x0EA3CB3D` v1.08 <br> `PCSG00063` JP <br> └ ✅ `0xAAE7FEDF` v1.08 | ⚪960x544 | ✅640x480 | ⚪60 | |
| Summon Night 6: Lost Borders | `PCSB01013` EU <br> └ ✅ `0x243B98A5` v1.00 <br> `PCSE00951` US <br> └ ✅ `0x88F34BB1` v1.00 <br> `PCSG00827` JP <br> └ ✅ `0x3CD87445` v1.03 <br> `PCSH00225` AS <br> └ ✅ `0x919479D7` v1.03 | ⚪960x544 | ⚪960x544 | ❌30 | 🏁 |
| Super Meat Boy | `PCSB00881` EU <br> └ ⚪ v1.02 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| SUPERBEAT: XONiC | `PCSB00891` EU <br> └ ⚪ v1.01 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Supremacy MMA: Unrestricted | `PCSE00012` US <br> └ ✅ `0x860FE0A7` v1.00 | ⚪960x544 | ✅720x408 | ⚪60 | |
| Sword Art Online: Hollow Realization | `PCSB00972` EU <br> └ ❌ v3.20 | ⚪960x544 | ⚪960x544 | ❌30 | |
| Tales of Hearts R | `PCSB00550` EU <br> └ ❌ v1.00 | ⚪960x544 | ⚪960x544 | ❌30 | |
| Tearaway | `PCSF00476` EU <br> └ ❌ v1.01 | ⚪960x544 | ⚪960x544 | ❌30 | |
| Terraria | `PCSB00405` EU <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| The Amazing Spider-Man | `PCSB00428` EU <br> └ ✅ `0xE5988D4F` v1.00 <br> `PCSE00333` US <br> └ ✅ `0x1D3E0BEB` v1.00 | ⚪960x544 | ✅704x400 | ✅60 | |
| The Bard's Tale: Remastered and Resnarkled | `PCSB01041` EU <br> └ ⚪ v1.03 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| The Binding of Isaac: Rebirth | `PCSB00676` EU <br> └ ❌ v1.05 | ⚪960x544 | ❌480x270 | ⚪60 | |
| The Legend of Heroes: Trails of Cold Steel <br> Eiyuu Densetsu: Sen no Kiseki | `PCSB00866` EU <br> └ ✅ `0xE20FCB02` v1.01 <br> `PCSE00786` US <br> └ ✅ `0xB3793E83` v1.02 <br> `PCSG00195` JP <br> └ ✅ `0xDFC34B16` v1.03 <br> `PCSH00074` AS <br> └ ✅ `0xAEF049DB` v1.03 | ⚪960x544 | ✅720x408 | ❌30 | |
| The Legend of Heroes: Trails of Cold Steel II <br> Eiyuu Densetsu: Sen no Kiseki II | `PCSB01016` EU <br> └ ✅ `0xBEE60BC5` v1.00 <br> `PCSE00896` US <br> └ ✅ `0x56DB15C5` v1.01 <br> `PCSG00354` JP <br> └ ✅ `0x2998B4C3` v1.03 <br> `PCSH00075` AS <br> └ ✅ `0xF1242A81` v1.03 | ⚪960x544 | ✅720x408 | ❌30 | 🏁 |
| The LEGO Movie Videogame | `PCSB00553` EU <br> └ ✅ `0x13E568EA` v1.00 <br> `PCSE00353` US <br> └ ✅ `0x3B221402` v1.02 | ⚪960x544 | ✅640x368 | ❌30 | |
| The Walking Dead: A Telltale Games Series - The Complete First Season | `PCSB00411` EU <br> └ ⚪ v1.00 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Tokyo Xanadu | `PCSB01062` EU <br> └ ✅ `0x061171E4` v1.00 <br> `PCSE00893` US <br> └ ✅ `0x9420F248` v1.00 <br> `PCSG00608` JP <br> └ ✅ `0x95ACFA1D` v1.04 <br> `PCSH10009` AS <br> └ ✅ `0x2BE0554C` v1.00 | ⚪960x544 | ✅720x408 | ❌30 | 🏁 |
| Touch My Katamari | `PCSB00047` EU <br> └ ❌ v1.01 | ⚪960x544 | ⚪960x544 | ❌30 | |
| Ukiyo no Roushi | `PCSG00480` JP <br> └ ✅ `0xF0C9262A` v1.00 | ⚪960x544 | ✅704x384 | ✅30 | |
| Uncharted: Golden Abyss | `PCSF00001` EU <br> └ [⬇️](https://raw.githubusercontent.com/Electry/VitaGrafixPatchlist/master/patch/PCSF00001.txt) `0x65389A26` v1.03* <br> `PCSF00012` EU <br> └ [⬇️](https://raw.githubusercontent.com/Electry/VitaGrafixPatchlist/master/patch/PCSF00001.txt) `0x65389A26` v1.03* <br> `PCSA00029` US <br> └ [⬇️](https://raw.githubusercontent.com/Electry/VitaGrafixPatchlist/master/patch/PCSF00001.txt) `0x65389A26` v1.03* <br> `PCSD00001` AS <br> └ [⬇️](https://raw.githubusercontent.com/Electry/VitaGrafixPatchlist/master/patch/PCSF00001.txt) `0x65389A26` v1.03* <br> *\*requires extra patch/ files* | ⚪960x544 | ✅768x384 | ❌30 | |
| Undertale | `PCSB01157` EU <br> └ ❌ v1.08 | ⚪960x544 | ❌640x480 | ❌30 | |
| Unit 13 | `PCSF00034` EU <br> └ ❌ v1.01 | ⚪960x544 | ❌720x408 | ❌30 | |
| Urban Trial Freestyle | `PCSB00038` EU <br> └ ✅ `0x108ADE86` v1.00 <br> `PCSE00051` US <br> └ ✅ `0x9A5EDEF3` v1.00 <br> `PCSG00231` JP <br> └ ✅ `0x21F97838` v1.00 | ✅720x408 | ⚪=FB | ❌30 | |
| Utawarerumono: Mask of Deception / Itsuwari no Kamen | `PCSB01093` EU <br> └ ✅ `0x2312FDE0` v1.00 <br> `PCSE00959` US <br> └ ✅ `0xCBA0BA49` v1.00 <br> `PCSG00617` JP <br> └ ✅ `0xE415725A` v1.02 | ⚪960x544 | ✅672x384 | ❓ | |
| Utawarerumono: Mask of Truth / Futari no Hakuoro | `PCSB01145` EU <br> └ ✅ `0x1E7004BB` v1.00 <br> `PCSE01102` US <br> └ ✅ `0xD7BF5875` v1.00 <br> `PCSG00838` JP <br> └ ✅ `0x7AF4E467` v1.04 | ⚪960x544 | ✅672x384 | ❓ | |
| Utawarerumono: Chiriyuku Mono he no Komoriuta | `PCSG01079` JP <br> └ ✅ `0x9F4464E5` v1.02 | ⚪960x544 | ✅672x384 | ❓ | |
| VA-11 Hall-A | `PCSE00756` US <br> └ ❌ v1.00 | ⚪960x544 | ⚪960x544 | ❌30 | |
| Valhalla Knights 3 | `PCSB00432` EU <br> └ ✅ `0xB8A6AB75` v1.00 <br> `PCSE00244` US <br> └ ✅ `0xCFF942CC` v1.00 <br> `PCSG00076` JP <br> └ ✅ `0x5348EC8D` v1.03 | ⚪960x544 | ✅640x384 | ❌30 | |
| Valhalla Knights 3 GOLD | `PCSG00307` JP <br> └ ✅ `0x2A62D92D` v1.05 | ⚪960x544 | ✅640x384 | ✅30 | |
| Valkyria Revolution | `PCSE01003` US <br> └ ❌ v1.00 | ⚪960x544 | ⚪960x544 | ❌30 | |
| Velocity 2X | `PCSB00410` EU <br> └ ⚪ v1.04 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Velocity Ultra | `PCSB00302` EU <br> └ ⚪ v1.01 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Virtua Tennis 4: World Tour Edition | `PCSB00031` EU <br> └ ⚪ v1.01 | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Wipeout 2048 | `PCSF00007` EU <br> └ ✅ `0x17143672` v1.04 <br> `PCSA00015` US <br> └ ✅ `0xA6FBB425` v1.04 <br> `PCSC00006` JP <br> └ ✅ `0xD4C31BD2` v1.04 <br> `PCSD00005` AS <br> └ ✅ `0xB4214500` v1.04 | ⚪960x544 | ✅960x544 <br> ⟷(+13x) | ✅30 | |
| World of Final Fantasy | `PCSB00951` EU <br> └ 🟡 `0xCD1EA543` v1.03 <br> `PCSE00880` US <br> └ 🟡 `0xB38C2C5B` v1.03 <br> `PCSH00223` AS <br> └ 🟡 `0x54CCA75F` v1.03 <br> `PCSG00709` JP <br> └ 🟡 `0x8D3086B3` v1.03 | ⚪960x544 | 🟡640x384 | ❌30 | |
| WRC 3: FIA World Rally Championship | `PCSB00204` EU <br> └ ✅ `0x27C05300` v1.01 <br> `PCSE00242` US <br> └ ✅ `0xA61A732F` v1.01 | ⚪960x544 | ✅704x448 | ❌30 | |
| WRC 4: FIA World Rally Championship | `PCSB00345` EU <br> └ ✅ `0x29E282EB` v1.01 <br> `PCSE00411` US <br> └ ✅ `0x6DBA55F1` v1.00 <br> `PCSG00376` JP <br> └ ✅ `0x5927ABE0` v1.00 | ⚪960x544 | ✅704x448 | ❌30 | |
| WRC 5: FIA World Rally Championship | `PCSB00762` EU <br> └ ✅ `0xEBAC5899` v1.00 <br> `PCSE00667` US <br> └ ✅ `0x16469373` v1.00 | ✅960x544 | ⚪=FB | ⚪60 | |
| XCOM: Enemy Unknown Plus | `PCSB00742` EU <br> └ ❌ v1.00 | ⚪960x544 | ⚪960x544 | ❌30 | |
| Yoru no Nai Kuni (Nights of Azure) | `PCSG00557` JP <br> └ ❌ v1.04 | ⚪960x544 | ❌Dynamic | ⚪60 | |
| Yoru no Nai Kuni 2: Shingetsu no Hanayome (Nights of Azure 2) | `PCSG00986` JP <br> └ ❌ v1.02 | ⚪960x544 | ❌840x442 | ❌30 | |
| Ys: Memories of Celceta | `PCSB00497` EU <br> └ ✅ `0x4F6CDE39` v1.00 <br> `PCSE00245` US <br> └ ✅ `0x87BCEF3B` v1.00 <br> `PCSH00181` AS <br> └ ✅ `0xE3BC452F` v1.00 <br> `PCSG00105` JP <br> └ ✅ `0x55D819BD` v1.02 | ⚪960x544 | ✅720x408 | ❌30 | |
| Ys Origin | `PCSB01081` EU <br> └ ✅ `0x3A2C2B78` v1.02 <br> `PCSE01033` US <br> └ ✅ `0x77611E13` v1.02 <br> `PCSH10049` AS <br> └ ✅ `0x145A65BD` v1.00 | ⚪960x544 | ⚪960x544 | ✅30 | |
| Ys VIII: Lacrimosa of Dana | `PCSB01128` EU <br> └ ✅ `0x804268F1` v1.02 <br> `PCSE01103` US <br> └ ✅ `0x804268F1` v1.02 <br> `PCSG00881` JP <br> └ ✅ `0xC2D25375` v1.02 <br> `PCSH00297` AS <br> └ ✅ `0xB4F97187` v1.02 | ⚪960x544 | ✅960x512 <br> ⟷840x476 <br> ⟷720x320 | ✅30 | |

</h6>
</details>

---

Adding support a game requires manual disassembly of game's binary to find addresses in the game code where the resolution is set. Some are easy to patch, others plainly impossible.

## FAQ
- Encountered a bug? Feel free to open a Github issue [here](https://github.com/Electry/VitaGrafixPatchlist/issues).
- Found a new patch? I'll gladly include it in here :) Just open a new issue or create a merge request.
