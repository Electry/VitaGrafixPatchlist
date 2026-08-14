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
⚪ - not configurable - deemed unnecessary (*=FB* - scales with framebuffer automatically)<br>

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
| Akiba's Beat | `PCSB01066` (❌EU v1.00) | ⚪960x544 | ⚪960x544 | ❌∞ | |
| Akiba's Trip: Undead & Undressed | `PCSB00640` (❌EU v1.00) | ⚪960x544 | ⚪960x544 | ❌30 | |
| Amnesia: Memories | `PCSB00740` (⚪EU v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Angry Birds Trilogy | `PCSB00402` (⚪EU v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Assassin's Creed III: Liberation | `PCSB00074` (✅`0xBC2441CC` EU v1.02) <br> `PCSE00053` (✅`0xBC2441CC` US v1.02) <br> `PCSG00116` (✅`0xBC2441CC` JP v1.01) | ⚪960x544 | ✅720x408 | ✅30 | |
| Asphalt: Injection | `PCSB00040` (✅`0x61A666FB` EU v1.00) <br> `PCSE00007` (✅`0xA8F00ABD` US v1.00) | ✅720x408 | ⚪*=FB* | ✅50 | |
| Atelier Ayesha Plus: The Alchemist of Dusk | `PCSE00584` (⚪US v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Atelier Escha & Logy Plus: Alchemists of the Dusk Sky | `PCSB00906` (⚪EU v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Atelier Firis: The Alchemist and the Mysterious Journey | `PCSB01087` (✅`0xCA8D14AC` EU v1.01) <br> `PCSE01044` (✅`0x79850565` US v1.01) <br> `PCSG00929` (✅`0xD07894DD` JP v1.10) <br> `PCSH10026` (✅`0xA6FFD15B` AS v1.01) | ⚪960x544 | ✅960x442 | ⚪60 |
| Atelier Lydie & Soeur: Fushigi na Kaiga no Renkinjutsu Samurai | `PCSG01116` (✅`0xFDABB61E` JP v1.06) | ⚪960x544 | ✅960x442 | ⚪60 | |
| Atelier Meruru Plus: The Apprentice of Arland | `PCSB00377` (⚪EU v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Atelier Rorona Plus: The Alchemist of Arland | `PCSB00582` (⚪EU v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Atelier Shallie Plus: Alchemists of the Dusk Sea | `PCSB01043` (✅`0x251D6E5D` EU v1.00) <br> `PCSE00998` (✅`0xA7A41140` US v1.00) <br> `PCSG00821` (✅`0x5DEA3511` JP v1.03) | ⚪960x544 | ✅960x408 | ⚪60 | |
| Atelier Sophie: The Alchemist of the Mysterious Book | `PCSB00973` (✅`0x6E045C8F` EU v1.01) <br> `PCSE00892` (✅`0xDCD6A75F` US v1.01) <br> `PCSG00694` (✅`0x907247B3` JP v1.05) <br> `PCSH00220` (✅`0xF7F81A8F` AS v1.01) | ⚪960x544 | ✅960x442 | ⚪60 | |
| Atelier Totori Plus: The Adventurer of Arland | `PCSB00291` (⚪EU v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| BADLAND: Game of the Year Edition | `PCSB00669` (⚪EU v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Blue Reflection: Maboroshi ni Mau - Shoujo no Ken | `PCSG00987` (✅`0xB2361C99` JP v1.05) | ⚪960x544 | ✅960x442 | ⚪60 | |
| Borderlands 2 | `PCSF00570` (✅`0x8440E1AE` EU v1.07) <br> `PCSF00576` (✅`0x8440E1AE` EU v1.07) <br> `PCSE00383` (✅`0x8440E1AE` US v1.09) <br> `PCSG00400` (✅`0x83B4A1A2` JP v1.03) | ✅960x544 | ⚪*=FB* | ⚪60 | |
| Call of Duty: Black Ops Declassified | `PCSB00213` (❌EU v1.02) | ⚪960x544 | ❌720x408 | ❌30 | |
| Catherine: Full Body | `PCSG01179` (✅`0x193F08A5` JP v1.03) | ⚪960x544 | ✅720x408 | ❌30 | |
| Child of Light | `PCSB00598` (❌EU v1.00) | ⚪960x544 | ⚪960x544 | ❌30 | |
| Danganronpa: Trigger Happy Havoc | `PCSB00346` (❌EU v1.00) | ⚪960x544 | ⚪960x544 | ❌30 | |
| Dead Nation | `PCSF00427` (❌EU v1.01) | ⚪960x544 | ⚪960x544 | ❌30 | |
| Dead or Alive 5 Plus | `PCSB00296` (✅`0xA1B33BC8` EU v1.01) <br> `PCSE00235` (✅`0xA1B33BC8` US v1.01) <br> `PCSG00167` (✅`0xA1B33BC8` JP v1.01) | ⚪960x544 | ✅720x408 | ⚪60 | |
| Dead or Alive Xtreme 3: Venus | `PCSG00773` (✅`0x15935EBA` JP v1.16) <br> `PCSH00250` (✅`0x754CBECE` AS v1.15) <br> `PCSH00281` (✅`0x17294EAC` AS v1.15) | ⚪960x544 | ✅736x416 <br> ⟷640x368 | ❌30 | |
| Deception IV: Blood Ties <br> Kagero: Darkside Princess | `PCSB00499` (✅`0x31CA7FEA` EU v1.00) <br> `PCSE00401` (✅`0x31CA7FEA` US v1.00) <br> `PCSG00304` (✅`0x505CBA3F` JP v1.02) | ⚪960x544 | ✅960x544 <br> ⟷720x408 <br> ⟷640x368 | ❌30 | |
| Deception IV: The Nightmare Princess <br> Kagero: Mou Hitori no Princess | `PCSB00829` (✅`0xA189B87F` EU v1.02) <br> `PCSE00743` (✅`0x073775D6` US v1.01) <br> `PCSG00565` (✅`0xA189B87F` JP v1.05) | ⚪960x544 | ✅960x544 <br> ⟷720x408 <br> ⟷640x368 | ❌30 | |
| Disney Epic Mickey 2: The Power of Two | `PCSF00308` (✅`0xE13F06A1` EU v1.00) <br> `PCSF00309` (✅`0xE13F06A1` EU v1.00) <br> `PCSA00110` (✅`0xE13F06A1` US v1.00) | ⚪960x544 | ✅720x408 | ❌30 | |
| Dragon Ball Z: Battle of Z | `PCSB00396` (✅`0x1592C04C` EU v1.01) <br> `PCSE00305` (✅`0x2EB183FF` US v1.01) <br> `PCSG00213` (✅`0x0B6BA1EA` JP v1.01) | ❓ | ✅704x448 | ❓ | |
| Dragon Quest Builders | `PCSB00981` (✅`0x1F8CD7CE` EU v1.00) <br> `PCSE00912` (✅`0x1C5AA1D1` US v1.00) <br> `PCSG00697` (✅`0x7087C461` JP v1.03) <br> `PCSH00221` (✅`0x7E953878` AS v1.00) | ⚪960x544 | ✅720x408 | ✅60 | |
| Dragon Quest Heroes II: Futago no Ou to Yogen no Owari | `PCSG00820` (❌JP v1.09) | ⚪960x544 | ⚪960x544 | ❌30 | |
| Dungeon Hunter: Alliance | `PCSB00041` (✅`0x68447424` EU v1.00) <br> `PCSE00008` (✅`0x0FC000EE` US v1.00) | ⚪960x544 | ✅702x408 | ⚪60 | |
| Everybody's Golf | `PCSF00006` (❌EU v1.09) | ❌640x368 | ❌640x368 | ❌30 | |
| Fantasy Hero: Unsigned Legacy | `PCSB00663` (✅`0xA52698D1` EU v1.00) <br> `PCSE00536` (✅`0x39C7F8A6` US v1.01) <br> `PCSG00280` (✅`0xBAC2487D` JP v1.10) <br> `PCSH00157` (✅`0xE9609E2F` AS v1.00) | ✅720x408 | ⚪*=FB* | ⚪60 | |
| Farming Simulator 18 | `PCSE01035` (❌US v1.00) | ⚪960x544 | ⚪960x544 | ❌30 | |
| Fate/EXTELLA (The Umbral Star) | `PCSB01030` (✅`0x3156133A` EU v1.01) <br> `PCSE00928` (✅`0xEF934DB7` US v1.01) <br> `PCSH00299` (✅`0x4E5BE9F4` AS v1.01) <br> `PCSG00600` (✅`0xB3BD9279` JP v1.03) | ⚪960x544 | ✅720x408 | ❌30 | |
| Fate/EXTELLA LINK | `PCSE01254` (✅`0x69300D95` US v1.01) <br> `PCSG01091` (✅`0xA46AF105` JP v1.08) <br> `PCSH10121` (✅`0x31BBD3ED` AS v1.03) | ⚪960x544 | ✅720x408 | ❌30 | |
| F1 2011 | `PCSB00027` (✅`0xCE789828` EU v1.00) <br> `PCSE00002` (✅`0x4FA39897` US v1.00) | ⚪960x544 | ✅640x384 | ⚪60 | |
| Fez | `PCSB00456` (⚪EU v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| FIFA 15 | `PCSE00481` (⚪US v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| flower | `PCSF00349` (❌EU v1.00) | ⚪960x544 | ❌768x544 | ⚪60 | |
| Gintama Ranbu | `PCSG01073` (❌JP v1.06) | ⚪960x544 | ❌Dynamic | ❌30 | |
| Girls und Panzer: Senshado, Kiwamemasu! | `PCSG00339` (❌JP v1.00) | ⚪960x544 | ⚪960x544 | ❌20 | |
| God of War Collection: God of War | `PCSF00438` (✅`0x8638FFED` EU v1.00) <br> `PCSA00126` (✅`0x126F65C5` US v1.00) <br> `PCSC00059` (✅`0x990F8128` JP v1.00) | ✅720x408 | ⚪*=FB* | ✅30 | |
| God of War Collection: God of War II | `PCSF00438` (✅`0x6531F96A` EU v1.00) <br> `PCSA00126` (✅`0x0064EC7E` US v1.00) <br> `PCSC00059` (✅`0x395A00F6` JP v1.00) | ✅720x408 | ⚪*=FB* | ✅30 | |
| Gravity Rush | `PCSF00024` (❌EU v1.00) | ❌720x408 | ❌720x408 | ❌30 | |
| Gundam Breaker | `PCSG00126` (❌JP v1.02) | ⚪960x544 | ❌640x384 | ❌30 | |
| Gundam Breaker 2 | `PCSG00412` (✅`0xED0CCF84` JP v1.03) <br> `PCSH00132` (✅`0x52E6D297` AS v1.03) | ⚪960x544 | ✅720x408 | ❌30 | |
| Gundam Breaker 3 | `PCSG00760` (❌JP v1.30) | ⚪960x544 | ❌720x408 | ❌30 | |
| Hatsune Miku: Project Diva f | `PCSB00419` (🟡`0x544807B3` EU v1.00) <br> `PCSE00326` (🟡`0x1BA9AC18` US v1.00) <br> `PCSG00074` (🟡`0xD3BDB4F5` JP v1.01) | ⚪960x544 | ✅640x352 | 🟡30 | [#120](https://github.com/Electry/VitaGrafix/issues/120), [#81](https://github.com/Electry/VitaGrafix/issues/81) |
| Hatsune Miku: Project Diva f 2nd | `PCSB00554` (🟡`0xDB737975` EU v1.00) <br> `PCSE00434` (🟡`0x31DAC716` US v1.00) <br> `PCSG00205` (🟡`0x4AAABD3D` JP v1.01) <br> `PCSH00088` (🟡`0xB499AC54` AS v1.00) | ⚪960x544 | ✅720x408 | 🟡30 | [#120](https://github.com/Electry/VitaGrafix/issues/120), [#80](https://github.com/Electry/VitaGrafix/issues/80) |
| Hatsune Miku: Project Diva X | `PCSB01007` (✅`0x0A3FF027` EU v1.00) <br> `PCSE00867` (✅`0x0A3FF027` US v1.00) <br> `PCSH00176` (✅`0x5C1C7A68` AS v1.00) <br> `PCSG00683` (✅`0xCAF82C1B` JP v1.00) | ⚪960x544 | ✅720x408 | ❌30 | |
| Helldivers | `PCSF00465` (🟡`0x32DF0B56` EU v7.01) <br> `PCSA00134` (🟡`0x32DF0B56` US v7.01) <br> `PCSC00078` (🟡`0x32DF0B56` JP v7.01) <br> `PCSD00086` (🟡`0x32DF0B56` AS v7.01) <br> `PCSD00097` (🟡`0x32DF0B56` AS v7.01) | 🟡960x544 | ⚪*=FB* | ⚪60 | [#82](https://github.com/Electry/VitaGrafixPatchlist/issues/82) |
| Hotline Miami | `PCSB00318` (⚪EU v1.01) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| I am Setsuna | `PCSG00756` (✅`0x89B603C7` JP v1.00) | ⚪960x544 | ⚪960x544 | ✅30 | |
| Injustice: Gods Among Us | `PCSB00356` (🟡`0x9E662913` EU v1.01) <br> `PCSE00271` (🟡`0xF48FF509` US v1.01) | 🟡720x408 | ⚪*=FB* | ⚪60 | [#82](https://github.com/Electry/VitaGrafixPatchlist/issues/82) |
| Jak and Daxter: The Precursor Legacy | `PCSF00247` (✅`0x109D6AD5` EU v1.00) <br> `PCSF00248` (✅`0x109D6AD5` EU v1.00) <br> `PCSA00080` (✅`0x109D6AD5` US v1.00) | ✅720x408 | ⚪*=FB* | ✅20 | |
| Jak II | `PCSF00247` (✅`0x15059015` EU v1.00) <br> `PCSF00249` (✅`0x15059015` EU v1.00) <br> `PCSA00080` (✅`0x15059015` US v1.00) | ✅720x408 | ⚪*=FB* | ❌30 | |
| Jak 3 | `PCSF00247` (✅`0x790EBAD9` EU v1.00) <br> `PCSF00250` (✅`0x790EBAD9` EU v1.00) <br> `PCSA00080` (✅`0x790EBAD9` US v1.00) | ✅720x408 | ⚪*=FB* | ❌30 | |
| J-Stars Victory Vs | `PCSG00300` (✅`0xA11C13E2` JP v1.02) | ⚪960x544 | ✅768x448 | ❌30 | |
| J-Stars Victory Vs+ | `PCSB00713` (✅`0x52574668` EU v1.00) <br> `PCSE00595` (✅`0x60650340` US v1.02) <br> `PCSH00136` (✅`0x86EAD93B` AS v1.00) | ⚪960x544 | ✅768x448 | ❌30 | |
| Kidou Senshi Gundam Seed: Battle Destiny | `PCSG00040` (✅`0x657F506B` JP v1.01) | ⚪960x544 | ✅704x384 | ✅30 | |
| Killzone: Mercenary | `PCSF00243` (✅`0x8659827D` EU v1.12) <br> `PCSF00403` (✅`0x6C74F8E9` EU v1.12) <br> `PCSA00107` (✅`0x0F9D3B7C` US v1.12) <br> `PCSC00045` (✅`0x0C47E0C8` JP v1.12) <br> `PCSD00071` (✅`0x8870DB01` AS v1.12) | ⚪960x544 | ✅960x544* <br> *\*dynamic* | ✅30 | |
| LEGO Batman 2: DC Super Heroes | `PCSB00133` (❌EU v1.00) | ❌640x368 | ❌640x368 | ❌30 | |
| LEGO Batman 3: Beyond Gotham | `PCSB00563` (✅`0x91AE1FF9` EU v1.01) <br> `PCSE00442` (✅`0xEBB7DA06` US v1.01) | ⚪960x544 | ✅640x368 | ❌30 | |
| LEGO Harry Potter: Years 5–7 | `PCSB00103` (🟡`0x10842FA7` EU v1.00) <br> `PCSE00057` (🟡`0xE9D1D998` US v1.01) | 🟡640x368 | ⚪*=FB* | ❌30 | [#3](https://github.com/Electry/VitaGrafixPatchlist/issues/3) |
| LEGO Jurassic World | `PCSB00703` (✅`0xE8AFEE20` EU v1.00) <br> `PCSE00587` (✅`0xAFB89A72` US v1.00) | ⚪960x544 | ✅640x368 | ❌30 | |
| LEGO Legends of Chima: Laval's Journey | `PCSB00304` (❌EU v1.00) | ❌720x408 | ❌640x368 | ❌30 | |
| LEGO Marvel Super Heroes: Universe in Peril | `PCSB00315` (✅`0xA9235749` EU v1.00) <br> `PCSE00250` (✅`0x9644D69D` US v1.00) | ⚪960x544 | ✅640x368 | ❌30 | |
| LEGO Marvel's Avengers | `PCSB00764` (✅`0x356EBF5C` EU v1.00) <br> `PCSE00670` (✅`0xC87160F3` US v1.00) | ⚪960x544 | ✅640x368 | ❌30 | |
| LEGO Ninjago: Nindroids | `PCSB00500` (❌EU v1.00) | ⚪960x544 | ⚪960x544 | ❌30 | |
| LEGO Ninjago: Shadow of Ronin | `PCSB00706` (✅`0xB178EFFD` EU v1.00) <br> `PCSE00534` (✅`0xD6EAF718` US v1.01) | ⚪960x544 | ✅640x368 | ❌30 | |
| LEGO Star Wars: The Force Awakens | `PCSB00877` (✅`0x0C927256` EU v1.00) <br> `PCSE00791` (✅`0x405C0E5E` US v1.00) | ⚪960x544 | ✅640x368 | ❌30 | |
| LEGO The Hobbit | `PCSB00503` (✅`0x49FEA6D2` EU v1.02) <br> `PCSE00390` (✅`0x2D2DE73B` US v1.00) | ⚪960x544 | ✅640x368 | ❌30 | |
| LEGO The Lord of the Rings | `PCSB00125` (❌EU v1.00) | ❌640x368 | ❌640x368 | ❌30 | |
| LIMBO | `PCSB00336` (❌EU v1.00) | ⚪960x544 | ⚪960x544 | ❌30 | |
| LittleBigPlanet | `PCSF00021` (🟡`0x0714AF6B` EU v1.22) <br> `PCSA00017` (🟡`0x0714AF6B` US v1.22) <br> `PCSC00013` (🟡`0x0714AF6B` JP v1.22) <br> `PCSD00006` (🟡`0x0714AF6B` AS v1.22) | ⚪960x544 | 🟡720x408 | ❌30 | [#24](https://github.com/Electry/VitaGrafix/issues/24) |
| Lumines: Electronic Symphony | `PCSB00061` (✅`0x805B6438` EU v1.02) <br> `PCSE00009` (✅`0x870C9A3D` US v1.01) <br> `PCSG00014` (✅`0x3B868E2D` JP v1.01) | ⚪960x544 | ⚪960x544 | ✅30 | |
| Macross Delta Scramble | `PCSG00947` (✅`0x01BBD637` JP v1.02) | ⚪960x544 | ✅800x448 | ❌30 | |
| Mahouka Koukou no Rettousei: Out of Order | `PCSG00456` (✅`0x0104460F` JP v1.02) | ⚪960x544 | ✅720x408 | ✅30 | |
| Metal Gear Solid HD Collection | `PCSE00020` (❌US v1.00) | ⚪960x544 | ❌720x448 | ❌30 | |
| Minecraft: PlayStation Vita Edition | `PCSB00560` (✅`0x85DDDE28` EU v1.83) <br> `PCSE00491` (✅`0x85DDDE28` US v1.83) <br> `PCSG00302` (✅`0x85DDDE28` JP v1.83) | ✅720x408 | ⚪*=FB* | ✅60 | |
| Miracle Girls Festival | `PCSG00610` (✅`0x2A0BE571` JP v1.00) | ⚪960x544 | ✅720x408 | ❌30 | |
| MLB 15: The Show | `PCSA00511` (❌US v1.01) | ❌720x408 | ❌720x408 | ⚪60 | |
| Mobile Suit Gundam: Extreme VS-Force | `PCSE00915` (❌US v1.04) | ❌720x408 | ❌720x408 | ❌30 | |
| Mortal Kombat | `PCSB00106` ([⬇️](https://raw.githubusercontent.com/Electry/VitaGrafixPatchlist/master/patch/PCSB00106.txt)`0x2AA8AC12` EU v1.00)* <br> `PCSE00023` ([⬇️](https://raw.githubusercontent.com/Electry/VitaGrafixPatchlist/master/patch/PCSE00023.txt)`0xAB5E7564` US v1.00)* <br> *\*requires additional patch/ files* | ✅640x368 | ⚪*=FB* | ⚪60 | |
| MotoGP 13 | `PCSB00316` (✅`0x0BCB4421` EU v1.02) <br> `PCSE00409` (✅`0xC88435BD` US v1.00) | ⚪960x544 | ✅704x448 | ❓ | |
| MotoGP 14 | `PCSB00498` (✅`0x7467CF36` EU v1.01) <br> `PCSE00529` (✅`0x0BCBC928` US v1.00) | ⚪960x544 | ✅704x448 | ❌30 | |
| MUD - FIM Motocross World Championship | `PCSB00182` (✅`0x216C1258` EU v1.00) <br> `PCSE00219` (✅`0x12FD8947` US v1.00) | ⚪960x544 | ✅704x448 | ❌30 | |
| MXGP: The Official Motocross Videogame | `PCSB00470` (✅`0xE4028AA3` EU v1.00) <br> `PCSE00530` (✅`0xD33CA0EC` US v1.00) | ⚪960x544 | ✅704x448 | ❌30 | |
| Need for Speed: Most Wanted | `PCSB00183` (✅`0x36DC8D31` EU v1.01) <br> `PCSE00089` (✅`0x36DC8D31` US v1.01) <br> `PCSG00106` (✅`0x36DC8D31` JP v1.01) | ⚪960x544 | ✅640x368 | ❌30 | |
| Nelke to Densetsu no Renkinjutsushi Tachi: Aratana Daichi no Atelier | `PCSG01223` (✅`0x12B8EB7E` JP v1.06) | ⚪960x544 | ✅960x442 | ⚪60 | |
| Ninja Gaiden Sigma 2 Plus | `PCSB00294` (✅`0x4C9B46C4` EU v1.00) <br> `PCSE00233` (✅`0x9194A548` US v1.00) <br> `PCSG00157` (✅`0x897AD547` JP v1.00) | ⚪960x544 | ✅864x480 <br> ⟷640x416 | ❌30 | |
| Ninja Gaiden Sigma Plus | `PCSB00097` (❌EU v1.00) | ⚪960x544 | ❌Dynamic | ❌30 | |
| Oddworld: Abe's Oddysee - New 'n' Tasty | `PCSB00502` (❌EU v1.00) | ⚪960x544 | ⚪960x544 | ❌30 | |
| Oddworld: Munch's Oddysee HD | `PCSB00275` (✅`0x4761DCC0` EU v1.02) <br> `PCSE00369` (✅`0x4761DCC0` US v1.02) | ⚪960x544 | ⚪960x544 | ✅30 | |
| Oddworld: Stranger's Wrath HD | `PCSB00180` (⚪EU v1.02) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| One Piece: Burning Blood | `PCSB00893` (✅`0x7E194F84` EU v1.08) <br> `PCSE00808` (✅`0xFF8DE562` US v1.08) <br> `PCSH00202` (✅`0x378EE338` AS v1.08) | ⚪960x544 | ✅704x384 | ❌30 | |
| Persona 4 Golden | `PCSB00245` (✅`0x4BB9AE7C` EU v1.00) <br> `PCSE00120` (✅`0xB8EBED65` US v1.00) <br> `PCSG00004` (✅`0x8C503A79` JP v1.01) <br> `PCSG00563` (✅`0x8C503A79` JP v1.00) <br> `PCSH00021` (✅`0x96BBD787` AS v1.00) | ⚪960x544 | ✅840x476 | ❌30 | |
| Persona 4: Dancing All Night | `PCSB00867` (❌EU v1.01) | ⚪960x544 | ⚪960x544 | ❌30 | |
| Phantasy Star Nova | `PCSG00351` (✅`0xADCF21BE` JP v1.05) <br> `PCSH00143` (✅`0xF1E54902` AS v1.01) | ⚪960x544 | ✅960x544 | ❌30 | |
| Plants vs. Zombies | `PCSF00105` (⚪EU v1.01) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Project Root | `PCSB00650` (✅`0x5001CEBE` EU v1.00) <br> `PCSE00486` (✅`0x5001CEBE` US v1.00) <br> `PCSG00783` (✅`0x88F8E42C` JP v1.00) | ⚪960x544 | ⚪960x544 | ✅30 | |
| Puddle | `PCSB00025` (❌EU v1.00) | ⚪960x544 | ⚪960x544 | ❌∞ | |
| Puella Magi Madoka Magica: The Battle Pentagram | `PCSG00214` (✅`0x86F56009` JP v1.00) | ⚪960x544 | ✅704x448 | ✅30 | |
| Ragnarok Odyssey ACE | `PCSB00471` (❌EU v1.11) | ⚪960x544 | ⚪960x544 | ❌30 | |
| Ratchet & Clank | `PCSF00484` (✅`0x0A02A884` EU v1.00) <br> `PCSF00482` (✅`0x0A02A884` EU v1.00) <br> `PCSA00133` (✅`0xD06E468A` US v1.00) | ✅720x408 | ⚪*=FB* | ❌30 | |
| Ratchet & Clank 2: Locked and Loaded / Going Commando | `PCSF00485` (✅`0x7A1D621C` EU v1.00) <br> `PCSF00482` (✅`0x7A1D621C` EU v1.00) <br> `PCSA00133` (✅`0x7A1D621C` US v1.00) | ✅720x408 | ⚪*=FB* | ❌30 | |
| Ratchet & Clank 3 / Up Your Arsenal | `PCSF00486` (✅`0xCF835E57` EU v1.00) <br> `PCSF00482` (✅`0xCF835E57` EU v1.00) <br> `PCSA00133` (✅`0xCF835E57` US v1.00) | ✅720x408 | ⚪*=FB* | ❌30 | |
| Ratchet & Clank: QForce / Full Frontal Assault | `PCSF00191` (✅`0x26E4BF15` EU v1.01) <br> `PCSA00086` (✅`0x26E4BF15` US v1.01) <br> `PCSC00041` (✅`0x26E4BF15` JP v1.01) | ✅720x408 | ⚪*=FB* | ⚪60 | |
| Rayman Legends | `PCSB00360` (⚪EU v1.01) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Rayman Origins | `PCSB00079` (⚪EU v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Real Boxing | `PCSB00365` (⚪EU v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Resident Evil: Revelations 2 | `PCSF00728` (✅`0x6321F4D3` EU v1.04) <br> `PCSE00608` (✅`0x05510E0F` US v1.04) <br> `PCSG00594` (✅`0x1AF1E91B` JP v1.04) <br> `PCSH00187` (✅`0x2302049E` AS v1.04) | ⚪960x544 | ✅720x408 | ❌30 | |
| Resistance: Burning Skies | `PCSF00003` (⚪EU v1.02) | ⚪960x544 | ❌720x408 | ❌30 | |
| RESOGUN | `PCSF00262` (✅`0x67CD2E83` EU v1.01) <br> `PCSA00103` (✅`0x871F1F8C` US v1.01) <br> `PCSC00088` (✅`0x9C16CEBD` JP v1.00) | ✅720x408 | ⚪*=FB* | ❌30 | |
| Retro City Rampage | `PCSB00203` (⚪EU v1.01) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Ridge Racer | `PCSB00048` (✅`0xBD286F0F` EU v1.02) <br> `PCSE00001` (✅`0x7E9EDCA3` US v1.02) <br> `PCSG00001` (✅`0xEB2D8835` JP v1.04) | ⚪960x544 | ✅720x408 | ❌30 | |
| Secret of Mana | `PCSB01163` (⚪EU v1.03) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Senran Kagura Shinovi Versus | `PCSB00601` (❌EU v1.00) | ⚪960x544 | ⚪960x544 | ❌30 | |
| Silent Hill: Book of Memories | `PCSB00115` (⚪EU v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Sine Mora | `PCSB00161` (⚪EU v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Skullgirls: 2nd Encore | `PCSB00859` (❌EU v1.03) | ❌640x368 | ❌640x368 | ⚪60 | |
| Sly Cooper and the Thievius Raccoonus | `PCSF00269` (✅`0x15BCA5BA` EU v1.00) <br> `PCSF00338` (✅`0x15BCA5BA` EU v1.00) <br> `PCSA00095` (✅`0x605D1DB1` US v1.00) <br> `PCSA00096` (✅`0x605D1DB1` US v1.00) | ✅720x408 | ⚪*=FB* | ✅30 | |
| Sly Cooper 2: Band of Thieves | `PCSF00270` (✅`0x7288E791` EU v1.00) <br> `PCSF00338` (✅`0x7288E791` EU v1.00) <br> `PCSA00095` (✅`0xDCD6B8BC` US v1.00) <br> `PCSA00097` (✅`0xDCD6B8BC` US v1.00) | ✅960x544 | ⚪*=FB* | ✅30 | |
| Sly Cooper 3: Honor Among Thieves | `PCSF00271` (✅`0xCE18232F` EU v1.00) <br> `PCSA00098` (✅`0xAC2A8892` US v1.00) | ✅960x544 | ⚪*=FB* | ✅30 | |
| Sly Cooper: Thieves in Time | `PCSF00156` (✅`0xFAC82F85` EU v1.01) <br> `PCSF00206` (✅`0x56380F69` EU v1.01) <br> `PCSF00207` (✅`0xFFF2D9ED` EU v1.01) <br> `PCSF00208` (✅`0xB67BAF52` EU v1.01) <br> `PCSF00209` (✅`0x10EF2E89` EU v1.01) <br> `PCSA00068` (✅`0x008B0E65` US v1.01) | ⚪960x544 | ⚪960x544 | ✅30 | |
| Sonic & All-Stars Racing Transformed | `PCSB00190` (❌EU v1.01) | ⚪960x544 | ⚪960x544 | ❌30 | |
| Soul Sacrifice | `PCSF00178` (✅`0xA0374454` EU v1.30) <br> `PCSA00092` (✅`0x1A6AC246` US v1.30) <br> `PCSD00065` (✅`0x406FCC54` AS v1.32) <br> `PCSC00039` (✅`0xAA214AD2` JP v1.33) | ⚪960x544 | ✅720x408 | ❌30 | |
| Soul Sacrifice Delta | `PCSF00532` (✅`0xA01008DF` EU v1.30) <br> `PCSA00152` (✅`0xD66AEBF4` US v1.30) <br> `PCSD00079` (✅`0xAE2CCD8C` AS v1.30) <br> `PCSC00049` (✅`0x7607439D` JP v1.30) | ⚪960x544 | ✅720x408 | ❌30 | |
| Sound Shapes | `PCSF00076` (⚪EU v1.14) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Spy Hunter | `PCSB00166` (🟡`0x4D752CEE` EU v1.00) <br> `PCSE00068` (🟡`0x9BB899D3` US v1.00) | ❓640x368 | ⚪*=FB* | ❓30 | 🏁 |
| Stardew Valley | `PCSE01235` (⚪US v1.02) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Stealth Inc 2: A Game of Clones | `PCSB00690` (⚪EU v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Stealth Inc: A Clone in the Dark | `PCSB00317` (⚪EU v1.01) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| SteamWorld Dig | `PCSB00542` (⚪EU v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| SteamWorld Dig 2 | `PCSB01114` (⚪EU v1.01) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| SteamWorld Heist | `PCSB00693` (✅`0xBD7CD4EB` EU v1.02) <br> `PCSE00583` (✅`0x51AB9D2C` US v1.02) | ⚪960x544 | ⚪960x544 | ✅30 | |
| Steins;Gate | `PCSB00724` (⚪EU v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Steins;Gate 0 | `PCSB01012` (❌EU v1.02) | ⚪960x544 | ❌960x540 | ⚪60 | |
| Street Fighter X Tekken | `PCSB00144` (✅`0x4C4DB951` EU v1.08) <br> `PCSE00005` (✅`0x0EA3CB3D` US v1.08) <br> `PCSG00063` (✅`0xAAE7FEDF` JP v1.08) | ⚪960x544 | ✅640x480 | ⚪60 | |
| Summon Night 6: Lost Borders | `PCSB01013` (✅`0x243B98A5` EU v1.00) <br> `PCSE00951` (✅`0x88F34BB1` US v1.00) <br> `PCSG00827` (✅`0x3CD87445` JP v1.03) <br> `PCSH00225` (✅`0x919479D7` AS v1.03) | ⚪960x544 | ⚪960x544 | ❌30 | 🏁 |
| Super Meat Boy | `PCSB00881` (⚪EU v1.02) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| SUPERBEAT: XONiC | `PCSB00891` (⚪EU v1.01) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Supremacy MMA: Unrestricted | `PCSE00012` (✅`0x860FE0A7` US v1.00) | ⚪960x544 | ✅720x408 | ⚪60 | |
| Sword Art Online: Hollow Realization | `PCSB00972` (❌EU v3.20) | ⚪960x544 | ⚪960x544 | ❌30 | |
| Tales of Hearts R | `PCSB00550` (❌EU v1.00) | ⚪960x544 | ⚪960x544 | ❌30 | |
| Tearaway | `PCSF00476` (❌EU v1.01) | ⚪960x544 | ⚪960x544 | ❌30 | |
| Terraria | `PCSB00405` (⚪EU v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| The Amazing Spider-Man | `PCSB00428` (✅`0xE5988D4F` EU v1.00) <br> `PCSE00333` (✅`0x1D3E0BEB` US v1.00) | ⚪960x544 | ✅704x400 | ✅60 | |
| The Bard's Tale: Remastered and Resnarkled | `PCSB01041` (⚪EU v1.03) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| The Binding of Isaac: Rebirth | `PCSB00676` (❌EU v1.05) | ⚪960x544 | ❌480x270 | ⚪60 | |
| The Legend of Heroes: Trails of Cold Steel <br> Eiyuu Densetsu: Sen no Kiseki | `PCSB00866` (✅`0xE20FCB02` EU v1.01) <br> `PCSE00786` (✅`0xB3793E83` US v1.02) <br> `PCSG00195` (✅`0xDFC34B16` JP v1.03) <br> `PCSH00074` (✅`0xAEF049DB` AS v1.03) | ⚪960x544 | ✅720x408 | ❌30 | |
| The Legend of Heroes: Trails of Cold Steel II <br> Eiyuu Densetsu: Sen no Kiseki II | `PCSB01016` (✅`0xBEE60BC5` EU v1.00) <br> `PCSE00896` (✅`0x56DB15C5` US v1.01) <br> `PCSG00354` (✅`0x2998B4C3` JP v1.03) <br> `PCSH00075` (✅`0xF1242A81` AS v1.03) | ⚪960x544 | ✅720x408 | ❌30 | 🏁 |
| The LEGO Movie Videogame | `PCSB00553` (✅`0x13E568EA` EU v1.00) <br> `PCSE00353` (✅`0x3B221402` US v1.02) | ⚪960x544 | ✅640x368 | ❌30 | |
| The Walking Dead: A Telltale Games Series - The Complete First Season | `PCSB00411` (⚪EU v1.00) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Tokyo Xanadu | `PCSB01062` (✅`0x061171E4` EU v1.00) <br> `PCSE00893` (✅`0x9420F248` US v1.00) <br> `PCSG00608` (✅`0x95ACFA1D` JP v1.04) <br> `PCSH10009` (✅`0x2BE0554C` AS v1.00) | ⚪960x544 | ✅720x408 | ❌30 | 🏁 |
| Touch My Katamari | `PCSB00047` (❌EU v1.01) | ⚪960x544 | ⚪960x544 | ❌30 | |
| Ukiyo no Roushi | `PCSG00480` (✅`0xF0C9262A` JP v1.00) | ⚪960x544 | ✅704x384 | ✅30 | |
| Uncharted: Golden Abyss | `PCSF00001` ([⬇️](https://raw.githubusercontent.com/Electry/VitaGrafixPatchlist/master/patch/PCSF00001.txt)`0x65389A26` EU v1.03)* <br> `PCSF00012` ([⬇️](https://raw.githubusercontent.com/Electry/VitaGrafixPatchlist/master/patch/PCSF00001.txt)`0x65389A26` EU v1.03)* <br> `PCSA00029` ([⬇️](https://raw.githubusercontent.com/Electry/VitaGrafixPatchlist/master/patch/PCSF00001.txt)`0x65389A26` US v1.03)* <br> `PCSD00001` ([⬇️](https://raw.githubusercontent.com/Electry/VitaGrafixPatchlist/master/patch/PCSF00001.txt)`0x65389A26` AS v1.03)* <br> *\*requires additional patch/ files* | ⚪960x544 | ✅768x384 | ❌30 | |
| Undertale | `PCSB01157` (❌EU v1.08) | ⚪960x544 | ❌640x480 | ❌30 | |
| Unit 13 | `PCSF00034` (❌EU v1.01) | ⚪960x544 | ❌720x408 | ❌30 | |
| Urban Trial Freestyle | `PCSB00038` (✅`0x108ADE86` EU v1.00) <br> `PCSE00051` (✅`0x9A5EDEF3` US v1.00) <br> `PCSG00231` (✅`0x21F97838` JP v1.00) | ✅720x408 | ⚪*=FB* | ❌30 | |
| Utawarerumono: Mask of Deception / Itsuwari no Kamen | `PCSB01093` (✅`0x2312FDE0` EU v1.00) <br> `PCSE00959` (✅`0xCBA0BA49` US v1.00) <br> `PCSG00617` (✅`0xE415725A` JP v1.02) | ⚪960x544 | ✅672x384 | ❓ | |
| Utawarerumono: Mask of Truth / Futari no Hakuoro | `PCSB01145` (✅`0x1E7004BB` EU v1.00) <br> `PCSE01102` (✅`0xD7BF5875` US v1.00) <br> `PCSG00838` (✅`0x7AF4E467` JP v1.04) | ⚪960x544 | ✅672x384 | ❓ | |
| Utawarerumono: Chiriyuku Mono he no Komoriuta | `PCSG01079` (✅`0x9F4464E5` JP v1.02) | ⚪960x544 | ✅672x384 | ❓ | |
| VA-11 Hall-A | `PCSE00756` (❌US v1.00) | ⚪960x544 | ⚪960x544 | ❌30 | |
| Valhalla Knights 3 | `PCSB00432` (✅`0xB8A6AB75` EU v1.00) <br> `PCSE00244` (✅`0xCFF942CC` US v1.00) <br> `PCSG00076` (✅`0x5348EC8D` JP v1.03) | ⚪960x544 | ✅640x384 | ❌30 | |
| Valhalla Knights 3 GOLD | `PCSG00307` (✅`0x2A62D92D` JP v1.05) | ⚪960x544 | ✅640x384 | ✅30 | |
| Valkyria Revolution | `PCSE01003` (❌US v1.00) | ⚪960x544 | ⚪960x544 | ❌30 | |
| Velocity 2X | `PCSB00410` (⚪EU v1.04) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Velocity Ultra | `PCSB00302` (⚪EU v1.01) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Virtua Tennis 4: World Tour Edition | `PCSB00031` (⚪EU v1.01) | ⚪960x544 | ⚪960x544 | ⚪60 | |
| Wipeout 2048 | `PCSF00007` (✅`0x17143672` EU v1.04) <br> `PCSA00015` (✅`0xA6FBB425` US v1.04) <br> `PCSC00006` (✅`0xD4C31BD2` JP v1.04) <br> `PCSD00005` (✅`0xB4214500` AS v1.04) | ⚪960x544 | ✅960x544 <br> ⟷(+13x) | ✅30 | |
| World of Final Fantasy | `PCSB00951` (🟡`0xCD1EA543` EU v1.03) <br> `PCSE00880` (🟡`0xB38C2C5B` US v1.03) <br> `PCSH00223` (🟡`0x54CCA75F` AS v1.03) <br> `PCSG00709` (🟡`0x8D3086B3` JP v1.03) | ⚪960x544 | 🟡640x384 | ❌30 | |
| WRC 3: FIA World Rally Championship | `PCSB00204` (✅`0x27C05300` EU v1.01) <br> `PCSE00242` (✅`0xA61A732F` US v1.01) | ⚪960x544 | ✅704x448 | ❌30 | |
| WRC 4: FIA World Rally Championship | `PCSB00345` (✅`0x29E282EB` EU v1.01) <br> `PCSE00411` (✅`0x6DBA55F1` US v1.00) <br> `PCSG00376` (✅`0x5927ABE0` JP v1.00) | ⚪960x544 | ✅704x448 | ❌30 | |
| WRC 5: FIA World Rally Championship | `PCSB00762` (✅`0xEBAC5899` EU v1.00) <br> `PCSE00667` (✅`0x16469373` US v1.00) | ✅960x544 | ⚪*=FB* | ⚪60 | |
| XCOM: Enemy Unknown Plus | `PCSB00742` (❌EU v1.00) | ⚪960x544 | ⚪960x544 | ❌30 | |
| Yoru no Nai Kuni (Nights of Azure) | `PCSG00557` (❌JP v1.04) | ⚪960x544 | ❌Dynamic | ⚪60 | |
| Yoru no Nai Kuni 2: Shingetsu no Hanayome (Nights of Azure 2) | `PCSG00986` (❌JP v1.02) | ⚪960x544 | ❌840x442 | ❌30 | |
| Ys: Memories of Celceta | `PCSB00497` (✅`0x4F6CDE39` EU v1.00) <br> `PCSE00245` (✅`0x87BCEF3B` US v1.00) <br> `PCSH00181` (✅`0xE3BC452F` AS v1.00) <br> `PCSG00105` (✅`0x55D819BD` JP v1.02) | ⚪960x544 | ✅720x408 | ❌30 | |
| Ys Origin | `PCSB01081` (✅`0x3A2C2B78` EU v1.02) <br> `PCSE01033` (✅`0x77611E13` US v1.02) <br> `PCSH10049` (✅`0x145A65BD` AS v1.00) | ⚪960x544 | ⚪960x544 | ✅30 | |
| Ys VIII: Lacrimosa of Dana | `PCSB01128` (✅`0x804268F1` EU v1.02) <br> `PCSE01103` (✅`0x804268F1` US v1.02) <br> `PCSG00881` (✅`0xC2D25375` JP v1.02) <br> `PCSH00297` (✅`0xB4F97187` AS v1.02) | ⚪960x544 | ✅960x512 <br> ⟷840x476 <br> ⟷720x320 | ✅30 | |

</h6>
</details>

---

Adding support a game requires manual disassembly of game's binary to find addresses in the game code where the resolution is set. Some are easy to patch, others plainly impossible.

## FAQ
- Encountered a bug? Feel free to open a Github issue [here](https://github.com/Electry/VitaGrafixPatchlist/issues).
- Found a new patch? I'll gladly include it in here :) Just open a new issue or create a merge request.
