# Agent Usage Guide — God Hand (`SLUS-21503`) Deep Function Maps

Use these files before editing or hooking ANY PS2 function in `GodHandAndroidPort`:
1. Start with `00_UI_DEEP_VERIFIED_OFFSETS.md` for verified `cSubScr`, Pause Root, Techniques, Options, Roulette, and `r020` Title offsets.
2. Open the specific category file (`01`..`11`) for the subsystem you are working on, or `12_unclassified_needs_review.md` for items without deterministic proof.
3. Every row includes exact deterministically verified columns:
   - **Tags**:
     - `LEAF`: Zero external calls, zero `j26` relocations, zero `jalr`/non-switch `jr`, and zero syscalls (intra-function jump-table `switch` does NOT clear `LEAF`).
     - `VTABLE`: Performs an indirect call (`jalr`) or non-local indirect jump (`jr` outside intra-function switch tables).
     - `MENU_INPUT`: Directly references `GameWork::kTrg` (`0x00747640`..`0x00747647`) or `GameWork::kRep` (`0x00747650`..`0x00747657`).
     - `SFX`: Directly calls `cSnd_SeCall*` (`0x2B46F0`, `0x2CB8A0`, `0x2CB968`, `0x2CBA48`), `cSnd_SeStop`, `cSnd_SeFade*`, `cSnd_SeVoiceCallAll`, or `cSndSeVoice_Play/Stop`.
     - `DMA/GS_HW`: Accesses real EE/VU/GS hardware registers (`0x10000000..0x1000FFFF`, `0x11000000..0x1100FFFF`, or `0x12000000..0x12001FFF`).
     - `VU0_SIMD`: Contains COP2/VU0 vector MIPS instructions (`v*`, `lqc2`, `sqc2`, `qm*c2`, `ct*c2`, `cf*c2`).
     - `FPU`: Contains COP1 single-precision FPU ops (`*.s`, `mtc1`/`mfc1`/`bc1*`) or non-stack `lwc1`/`swc1`.
     - `LOOP`: Contains an intra-function backward branch/jump (`target_pc <= branch_pc`).
     - `SYSCALL`: Contains an EE `syscall` instruction / `GuestBranchKind::Syscall`.
     - `STUB/GETTER`: `LEAF`, `Size <= 32`, non-`LOOP`, non-`SYSCALL`.
   - **What It Does**: Verified non-stack/non-global object offsets (`+0x25E(u16)`), `lui+addiu` globals, `.rodata` strings, hardware refs, and callees.
   - **Evidence**: Exact deterministic proof (ELF vtable/RTTI, symbol name, TU address bracket, overlay module identity, or verified call-graph link).
   - **Callers / Callees**: Full untruncated caller (`←`) and callee (`→`) symbols including cross-module calls and `boot_elf` `j26` relocations (`reloc:...`).
4. Never guess offsets or behavior not verified in the table — open the cited `.cpp` file in `app/src/main/cpp/generated/` or `generated_modules/<module>/` to inspect exact MIPS lines.
