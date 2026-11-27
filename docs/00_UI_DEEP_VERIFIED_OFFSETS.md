# God Hand (`SLUS-21503`) — Deep Verified UI, Menu, Subscreen & Overlay Offsets

**Scanned directly from the workspace recompiled sources: `app/src/main/cpp/generated_unity/` (65 unity batches -> 10,553 `boot_elf` functions in `recomp/godhand_functions.csv` + 46 skipped `.data` stubs in `recomp/godhand_data_section_functions.txt` + `register_functions.cpp`), `app/src/main/cpp/generated_modules_unity/` (81 unity batches -> 2,379 functions + 81 `*_pack.cpp` files across 81 `.rel` modules), `build/SLUS_215.03`, and `recomp/`.**  
Every address and struct offset below was verified directly from the recompiled MIPS instructions and ELF vtables — zero guessing.

---

## 1. Global Menu Command Word (`GameWork + 0x1A0` / `0x1B0`)
- **`0x00747640`** (`GameWork + 0x1A0`, `uint64_t`): Edge-triggered menu command word (`kTrg`)
- **`0x00747650`** (`GameWork + 0x1B0`, `uint64_t`): Repeating menu command word (`kRep`)
- **Verified Bitmasks:**
  - `kOk` (Confirm / Cross or Circle) = `1ull << 28` (`0x0000000010000000ull`)
  - `kCancel` (Back / **Triangle**) = `1ull << 29` (`0x0000000020000000ull`)
  - `kStart` = `1ull << 21` (`0x0000000000200000ull`)
  - `kUp` = `0x0001000001000000ull` · `kDown` = `0x0002000002000000ull`
  - `kLeft` = `0x0004000008000000ull` · `kRight` = `0x0008000004000000ull`
- **Screen State Flags:**
  - `0x00747A50` (`uint16_t`): `GameWork::kRoom` (`0x0020` = Title Screen `r020`)
  - `0x00747A84` (`uint32_t`): `GameWork::Sta` (`0x08000000` = `kSubScr`, `0x00004000` = `kTitle`, `0x00000080` = `kWipe`, `0x80000000` = `kCockpit`, `0x10000000` = `kTalk`, `0x00000040` = `kSoftEvent`)
  - `0x00747470` (`classFADE`): `+0x1C` bit 0 = fade active/drawn

---

## 2. `cSubScr` Subscreen Manager (`*(uint32_t*)0x003BD930`, typically `0x00566E50`)
*Verified from `func_0015FD98_0x15fd98.cpp`, `func_0015FD18_0x15fd18.cpp`, `cSubScr_SubScrOn_0x160020.cpp`, `func_001601D8_0x1601d8.cpp`, and `func_001612C8_0x1612c8.cpp`.*

- **`cSubScr + 0x00..+0x44`**: 9 `(kKind, submanager_ptr)` pairs (`i = 0..8`) queried by `func_0015FD18`
- **`cSubScr + 0x48`** (`int32_t`): `kKind` (`-1` = closed, `0..8` = active subscreen)
- **`cSubScr + 0x50`** (`int16_t`): `kOpen` (`1` written on open at `0x160138`, `> 0` while open)
- **`cSubScr + 0xEE8`** (`int32_t[9]`): `kStack`, **`+0xF0C`** (`uint8_t[9]`): saved submanager `+0x64` flags, **`+0xF15`** (`uint8_t`): `kDepth`

### Complete Verified `cSubScr` Embedded Submanager Table (`func_0015FD98`)
*Every submanager has a 1-byte flag at `submanager + 0x64` written by `cSubScr_SubScrOn` (`0x1600EC..0x16012C`). Never treat `+0x374`/`+0x684` as base pointers!*

| `kKind` | Submanager Base in `cSubScr` | Size | `+0x64` Flag in `cSubScr` | Verified RTTI Class, Input Handler & Key Offsets |
| :--- | :--- | ---: | :--- | :--- |
| `0` | **`cSubScr + 0x60`** | `0x2B0` | — | **`cSubScrMenu` (Pause Root, `func_00165EB8`)**: `+0x5A` state, `+0x60` result, `+0x2A0` / `+0x2A2` / `+0x2A3` / `+0x2A4` cursor/selection |
| `1` | **`cSubScr + 0x310`** | `0x310` | `+0x374` | **`cSubScrWaza` (Techniques, `func_0016DF38`)**: `+0x5A` state (`0`=slots, `1`=move picker, `2`=leaving), `+0x25C` (`s8`) slot cursor (`-1`=RETURN), `+0x284` (`s8`) column (`0`=left chain), **`+0x25E` (`u16`) move-list visible row (`0..7`)**, **`+0x260` (`u16`) move-list scroll top (`+1/-1`, page `+8/-8`)**, `+0x262` |
| `2` | **`cSubScr + 0x620`** | `0x110` | `+0x684` | **`cSubScrGodReel` (God Reel, `func_00162298`)**: `+0x5A` state, `+0x60` result, `+0xEC..+0xF0` |
| `3` | **`cSubScr + 0x730`** | `0x150` | `+0x794` | **`cSubScrMap` (Map & Status, `func_00164140`)**: dispatches to `ModeObj_pollInputBits` (`0x1641B8`), `func_00164238`, `func_001643F8` (`+0x5B`, `+0x5C`, `+0x60`, `+0x130`, `+0x134`, `+0x136`) |
| `4` | **`cSubScr + 0x880`** | `0x140` | `+0x8E4` | **`cSubScrOption` (Pause Options, `func_00166BB8`)**: `+0x5A` state, `+0x60` result, `+0xC8`, **`+0x130`** (cursor), **`+0x131`** (reset Y/N) |
| `5` | **`cSubScr + 0x9C0`** | `0x120` | `+0xA24` | **`cSubScrOptionT` (Title Options, `func_00167908`)**: `+0x5A` state, `+0x60` result, **`+0x110`** (cursor) |
| `6` | **`cSubScr + 0xAE0`** | `0xC0` | `+0xB44` | **`cSubScrBonus` (Bonus, `func_00161990`)**: `+0x60` result, `+0xBC` |
| `7` | **`cSubScr + 0xC40`** | `0x290` | `+0xCA4` | **`cSubScrShopMain` (Shop Main & Roulette)**: span to `+0xED0`; Move `func_00168AB8` (`+0x5A`, `+0x5B`, `+0x60`, `+0x1B4`, `+0x202`, `+0x204`; reads `0x00747A80` `Dsp` & `.rodata` `0x0041FE50`), Input `func_0016AE38` -> `func_0016B1F8` (`+0x5A`, `+0x60`, `+0x1B4`, **`+0x1D0`**, **`+0x1D2`**, **`+0x1D4`**) |
| `8` | **`cSubScr + 0xBA0`** | `0xA0` | `+0xC04` | **`cSubScrShopEntrance` (Shop Entrance, `func_001682C8`)**: `+0x5A` state, `+0x60` result, `+0x91` |

### All Verified Subscreen Input Handlers (`0x161600..0x16F800` Reading `GameWork + 0x1A0` / `0x1B0`) & `cSubScrShopMain` Move
| Address | Function | Class / Role | State / Cursor / Scroll Offsets Written | Menu SFX IDs Used |
| :--- | :--- | :--- | :--- | :--- |
| `0x00161990` | `func_00161990` | `cSubScrBonus` Input | `+0x60`, `+0xBC` | `0x15E`, `0x15F`, `0x161` |
| `0x00162298` | `func_00162298` | `cSubScrGodReel` Input | `+0x5A`, `+0x60`, `+0xEC..+0xF0` | `0x15E`, `0x15F`, `0x160`, `0x161` |
| `0x00164140` | `func_00164140` / `0x1641B8` (`ModeObj_pollInputBits`) | `cSubScrMap` Input | calls `0x1641B8` (`+0x60`), `0x164238`, `0x1643F8` | `0x161` |
| `0x00164238` | `func_00164238` | `cSubScrMap` Input | `+0x5B`, `+0x5C`, `+0x60`, `+0x130`, `+0x134`, `+0x136` | `0x15E`, `0x15F` |
| `0x001643F8` | `func_001643F8` | `cSubScrMap` Input | `+0x60`, `+0x130`, `+0x134`, `+0x136` | `0x15E`, `0x15F` |
| `0x00165EB8` | `func_00165EB8` | `cSubScrMenu` (Pause Root) Input | `+0x5A`, `+0x60`, `+0x2A0`, `+0x2A2`, `+0x2A3`, `+0x2A4` | `0x15E`, `0x15F`, `0x161`, `0x164` |
| `0x00166BB8` | `func_00166BB8` | `cSubScrOption` (Pause Options) Input | `+0x5A`, `+0x60`, `+0xC8`, **`+0x130`** (cursor), **`+0x131`** (reset Y/N) | `0x15E`, `0x15F`, `0x161` |
| `0x00167908` | `func_00167908` | `cSubScrOptionT` (Title Options) Input | `+0x5A`, `+0x60`, **`+0x110`** (cursor) | `0x15E`, `0x15F`, `0x161` |
| `0x001682C8` | `func_001682C8` | `cSubScrShopEntrance` Input | `+0x5A`, `+0x60`, `+0x91` | `0x15E`, `0x15F`, `0x161` |
| `0x00168AB8` | `func_00168AB8` | `cSubScrShopMain` Move (no `kTrg`/`kRep`) | `+0x5A`, `+0x5B`, `+0x60`, `+0x1B4`, `+0x202`, `+0x204` | — |
| `0x0016AE38` | `func_0016AE38` -> `0x16B1F8` | `cSubScrShopMain` (Roulette) Input | `+0x5A`, `+0x60`, `+0x1B4`, **`+0x1D0`**, **`+0x1D2`**, **`+0x1D4`** | `0x15E`, `0x15F`, `0x161` |
| `0x0016DF38` | `func_0016DF38` | `cSubScrWaza` (Techniques) Input | `+0x5A`, `+0x60`, **`+0x25C`** (slot), **`+0x25E`** (list row), **`+0x260`** (list scroll), `+0x262`, **`+0x284`** (col) | `0x15E`, `0x15F`, `0x161` |

---

## 3. Title Screen Overlay (`generated_modules/r020/` — Class `cR020`, 28 functions)
*Verified directly from `Initialize__5cR020_0x7992f8.cpp`, `titlePressWait__5cR020_0x79a050.cpp`, `titleGameSel__5cR020_0x79a498.cpp`, and `titleLevelSel__5cR020_0x79b0e0.cpp`.*

- **Active Check:** `GameWork::kRoom (0x00747A50) == 0x0020` (checked in `boot_elf`: `func_00146F18`, `cCoreSave_stageInit` `0x1F9B10`) AND `(GameWork::Sta (0x00747A84) & 0x00004000) != 0` (`Initialize__5cR020` sets `Sta` bit `0x4000` and populates menu item IDs `0x20..0x25` at `cR020 + 0x50..+0x64`)
- **State Machine Bytes:** `cR020 + 0x00`, `+0x01`, `+0x02`, `+0x03` (`uint8_t`)
- **Main Menu Carousel Cursor (`titleGameSel__5cR020`, `0x79a498`):** **`cR020 + 0x14`** (`int32_t`, wraps via `+1/-1` on `kRep` Left/Right; `0x18` stores previous/anim state)
- **Difficulty Selection Cursor (`titleLevelSel__5cR020`, `0x79b0e0`):** **`cR020 + 0x1C`** (`int32_t`, wraps `0..2` via `+1/-1` on `kRep` Left/Right; `0x20` stores previous state)
- **Title SFX:** `0x15E` (Confirm), `0x160` (Blocked), `0x161` (Cancel/Back), `0x164` (Cursor tick) via `cSnd_SeCall_2CB8A0` (`0x002CB8A0`)

---

## 4. Memory Card Save/Load (`generated_modules/mcport/`) & Stage Clear / Shop (`r000`, `r021`, `r022`)
- **`mcport` (362 functions):** Full original C++ class names preserved (`cMcSys`, `cMcLoad::Control` `0x7c1610`, `cMcSave::Control` `0x7c3ff8`, `cMcBoot::Control` `0x7c0368`, `cMcSys::CursorAnim` `0x7c7948`). See `07_save_load_memorycard.md`.
- **`r000` (50 functions):** `cSkillListManager` (`AddListSkill`, `DataSort_DataNo`, `DataSort_FontNo`). See `09_minigames_shop_casino_map.md`.
- **`r021` (31 functions) & `r022` (62 functions):** Stage Clear / Results / World Map (`move_Gold`, `move_ClearTime`, `move_Continue`, `move_Dead_man`, `move_Get`, `CuntGold`). See `09_minigames_shop_casino_map.md`.
- **Menu SFX (`cSnd_SeCall_2CB8A0` / `0x002CB8A0`):** `0x15E` (OK), `0x15F` (Move), `0x160` (Error/Blocked), `0x161` (Cancel/Back), `0x164` (Tick).
