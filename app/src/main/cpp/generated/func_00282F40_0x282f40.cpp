#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_00282F40
// Address: 0x282f40 - 0x283070
void func_00282F40_0x282f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00282F40_0x282f40");
#endif

    ctx->pc = 0x282f40u;

    // 0x282f40: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x282f40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x282f44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x282f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x282f48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x282f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f4c: 0x4c00002  bltz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x282F4Cu;
    {
        const bool branch_taken_0x282f4c = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x282F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F4Cu;
        // 0x282f50: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f4c) {
            ctx->pc = 0x282F58u;
            goto label_282f58;
        }
    }
    ctx->pc = 0x282F54u;
    // 0x282f54: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x282f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_282f58:
    // 0x282f58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x282f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x282f5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x282F5Cu;
    {
        const bool branch_taken_0x282f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F5Cu;
        // 0x282f60: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f5c) {
            ctx->pc = 0x282F74u;
            goto label_282f74;
        }
    }
    ctx->pc = 0x282F64u;
    // 0x282f64: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x282f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x282f68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282f6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x282F6Cu;
    {
        const bool branch_taken_0x282f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F6Cu;
        // 0x282f70: 0x8c490000  lw          $t1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f6c) {
            ctx->pc = 0x282F78u;
            goto label_282f78;
        }
    }
    ctx->pc = 0x282F74u;
label_282f74:
    // 0x282f74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282f74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282f78:
    // 0x282f78: 0x1120003b  beqz        $t1, . + 4 + (0x3B << 2)
    ctx->pc = 0x282F78u;
    {
        const bool branch_taken_0x282f78 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x282f78) {
            ctx->pc = 0x283068u;
            goto label_283068;
        }
    }
    ctx->pc = 0x282F80u;
    // 0x282f80: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x282f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x282f84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x282F84u;
    {
        const bool branch_taken_0x282f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F84u;
        // 0x282f88: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f84) {
            ctx->pc = 0x282F98u;
            goto label_282f98;
        }
    }
    ctx->pc = 0x282F8Cu;
    // 0x282f8c: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x282f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x282f90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x282F90u;
    {
        const bool branch_taken_0x282f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F90u;
        // 0x282f94: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f90) {
            ctx->pc = 0x282F9Cu;
            goto label_282f9c;
        }
    }
    ctx->pc = 0x282F98u;
label_282f98:
    // 0x282f98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x282f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282f9c:
    // 0x282f9c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x282F9Cu;
    {
        const bool branch_taken_0x282f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282f9c) {
            ctx->pc = 0x283068u;
            goto label_283068;
        }
    }
    ctx->pc = 0x282FA4u;
    // 0x282fa4: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x282fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x282fa8: 0xac490148  sw          $t1, 0x148($v0)
    ctx->pc = 0x282fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 9));
    // 0x282fac: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x282facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x282fb0: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x282fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x282fb4: 0x10670007  beq         $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x282FB4u;
    {
        const bool branch_taken_0x282fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x282FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282FB4u;
        // 0x282fb8: 0xac400108  sw          $zero, 0x108($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282fb4) {
            ctx->pc = 0x282FD4u;
            goto label_282fd4;
        }
    }
    ctx->pc = 0x282FBCu;
    // 0x282fbc: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x282fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282fc0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x282fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x282fc4: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x282fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282fc8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x282fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x282fcc: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x282fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282fd0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x282fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_282fd4:
    // 0x282fd4: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x282fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x282fd8: 0x50680008  beql        $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x282FD8u;
    {
        const bool branch_taken_0x282fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x282fd8) {
            ctx->pc = 0x282FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282FD8u;
            // 0x282fdc: 0xac861584  sw          $a2, 0x1584($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 5508), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282FFCu;
            goto label_282ffc;
        }
    }
    ctx->pc = 0x282FE0u;
    // 0x282fe0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x282fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282fe4: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x282fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x282fe8: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x282fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282fec: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x282fecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x282ff0: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x282ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282ff4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x282ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x282ff8: 0xac861584  sw          $a2, 0x1584($a0)
    ctx->pc = 0x282ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5508), GPR_U32(ctx, 6));
label_282ffc:
    // 0x282ffc: 0x24821590  addiu       $v0, $a0, 0x1590
    ctx->pc = 0x282ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
    // 0x283000: 0x10470007  beq         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x283000u;
    {
        const bool branch_taken_0x283000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x283004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283000u;
        // 0x283004: 0xac851580  sw          $a1, 0x1580($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5504), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283000) {
            ctx->pc = 0x283020u;
            goto label_283020;
        }
    }
    ctx->pc = 0x283008u;
    // 0x283008: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x283008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28300c: 0xe4801590  swc1        $f0, 0x1590($a0)
    ctx->pc = 0x28300cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5520), bits); }
    // 0x283010: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x283010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283014: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x283014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x283018: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x283018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28301c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28301cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_283020:
    // 0x283020: 0x248215a0  addiu       $v0, $a0, 0x15A0
    ctx->pc = 0x283020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5536));
    // 0x283024: 0x10480007  beq         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x283024u;
    {
        const bool branch_taken_0x283024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x283028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283024u;
        // 0x283028: 0x24830110  addiu       $v1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283024) {
            ctx->pc = 0x283044u;
            goto label_283044;
        }
    }
    ctx->pc = 0x28302Cu;
    // 0x28302c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x28302cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283030: 0xe48015a0  swc1        $f0, 0x15A0($a0)
    ctx->pc = 0x283030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5536), bits); }
    // 0x283034: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x283034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283038: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x283038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28303c: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x28303cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283040: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x283040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_283044:
    // 0x283044: 0x24a20110  addiu       $v0, $a1, 0x110
    ctx->pc = 0x283044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x283048: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x283048u;
    {
        const bool branch_taken_0x283048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x283048) {
            ctx->pc = 0x283068u;
            goto label_283068;
        }
    }
    ctx->pc = 0x283050u;
    // 0x283050: 0xc4a00110  lwc1        $f0, 0x110($a1)
    ctx->pc = 0x283050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283054: 0xe4800110  swc1        $f0, 0x110($a0)
    ctx->pc = 0x283054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
    // 0x283058: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x283058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28305c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x28305cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x283060: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x283060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283064: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x283064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_283068:
    // 0x283068: 0x3e00008  jr          $ra
    ctx->pc = 0x283068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283068u;
        // 0x28306c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283070u;
}
