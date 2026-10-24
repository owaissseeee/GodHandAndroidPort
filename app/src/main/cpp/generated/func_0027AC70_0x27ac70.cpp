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

// Function: func_0027AC70
// Address: 0x27ac70 - 0x27ada8
void func_0027AC70_0x27ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027AC70_0x27ac70");
#endif

    switch (ctx->pc) {
        case 0x27aca8u: goto label_27aca8;
        case 0x27ad84u: goto label_27ad84;
        case 0x27ad8cu: goto label_27ad8c;
        default: break;
    }

    ctx->pc = 0x27ac70u;

    // 0x27ac70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27ac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27ac74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27ac74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac78: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x27ac78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x27ac7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27ac7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27ac80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27ac84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27ac84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27ac88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27ac8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27ac8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac90: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x27ac90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27ac94: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27ac94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x27ac98: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x27ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x27ac9c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x27ac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x27aca0: 0xc0525ce  jal         func_149738
    ctx->pc = 0x27ACA0u;
    SET_GPR_U32(ctx, 31, 0x27ACA8u);
    ctx->pc = 0x27ACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ACA0u;
    // 0x27aca4: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x27ACA0u, 0x27ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACA8u;
label_27aca8:
    // 0x27aca8: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x27ACA8u;
    {
        const bool branch_taken_0x27aca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ACA8u;
        // 0x27acac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aca8) {
            ctx->pc = 0x27AD8Cu;
            goto label_27ad8c;
        }
    }
    ctx->pc = 0x27ACB0u;
    // 0x27acb0: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x27acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x27acb4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x27acb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x27acb8: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x27acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x27acbc: 0x920602b4  lbu         $a2, 0x2B4($s0)
    ctx->pc = 0x27acbcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x27acc0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x27acc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x27acc4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x27acc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x27acc8: 0xae0202f0  sw          $v0, 0x2F0($s0)
    ctx->pc = 0x27acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
    // 0x27accc: 0xa2050531  sb          $a1, 0x531($s0)
    ctx->pc = 0x27acccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 5));
    // 0x27acd0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27acd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27acd4: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x27acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x27acd8: 0xae0021b0  sw          $zero, 0x21B0($s0)
    ctx->pc = 0x27acd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8624), GPR_U32(ctx, 0));
    // 0x27acdc: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x27ACDCu;
    {
        const bool branch_taken_0x27acdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ACDCu;
        // 0x27ace0: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27acdc) {
            ctx->pc = 0x27ACF0u;
            goto label_27acf0;
        }
    }
    ctx->pc = 0x27ACE4u;
    // 0x27ace4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x27ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x27ace8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27ACE8u;
    {
        const bool branch_taken_0x27ace8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ACE8u;
        // 0x27acec: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ace8) {
            ctx->pc = 0x27ACF4u;
            goto label_27acf4;
        }
    }
    ctx->pc = 0x27ACF0u;
label_27acf0:
    // 0x27acf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27acf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27acf4:
    // 0x27acf4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x27ACF4u;
    {
        const bool branch_taken_0x27acf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27acf4) {
            ctx->pc = 0x27AD7Cu;
            goto label_27ad7c;
        }
    }
    ctx->pc = 0x27ACFCu;
    // 0x27acfc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x27acfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x27ad00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27AD00u;
    {
        const bool branch_taken_0x27ad00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD00u;
        // 0x27ad04: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad00) {
            ctx->pc = 0x27AD14u;
            goto label_27ad14;
        }
    }
    ctx->pc = 0x27AD08u;
    // 0x27ad08: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x27ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x27ad0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27AD0Cu;
    {
        const bool branch_taken_0x27ad0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD0Cu;
        // 0x27ad10: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad0c) {
            ctx->pc = 0x27AD18u;
            goto label_27ad18;
        }
    }
    ctx->pc = 0x27AD14u;
label_27ad14:
    // 0x27ad14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27ad14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ad18:
    // 0x27ad18: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x27ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x27ad1c: 0x248300e0  addiu       $v1, $a0, 0xE0
    ctx->pc = 0x27ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x27ad20: 0xc441d880  lwc1        $f1, -0x2780($v0)
    ctx->pc = 0x27ad20u;
    { uint32_t bits = FAST_READ32(0x3BD880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ad24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27ad24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ad28: 0x2442d880  addiu       $v0, $v0, -0x2780
    ctx->pc = 0x27ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x27ad2c: 0xe48100e0  swc1        $f1, 0xE0($a0)
    ctx->pc = 0x27ad2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x27ad30: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27ad30u;
    { uint32_t bits = FAST_READ32(0x3BD884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ad34: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x27ad34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27ad38: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x27ad38u;
    { uint32_t bits = FAST_READ32(0x3BD888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ad3c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x27ad3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x27ad40: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x27ad40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x27ad44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27AD44u;
    {
        const bool branch_taken_0x27ad44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD44u;
        // 0x27ad48: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad44) {
            ctx->pc = 0x27AD58u;
            goto label_27ad58;
        }
    }
    ctx->pc = 0x27AD4Cu;
    // 0x27ad4c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x27ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x27ad50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27AD50u;
    {
        const bool branch_taken_0x27ad50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD50u;
        // 0x27ad54: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad50) {
            ctx->pc = 0x27AD5Cu;
            goto label_27ad5c;
        }
    }
    ctx->pc = 0x27AD58u;
label_27ad58:
    // 0x27ad58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27ad58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ad5c:
    // 0x27ad5c: 0xc4a0d880  lwc1        $f0, -0x2780($a1)
    ctx->pc = 0x27ad5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ad60: 0x24a3d880  addiu       $v1, $a1, -0x2780
    ctx->pc = 0x27ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957184));
    // 0x27ad64: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x27ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x27ad68: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x27ad68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x27ad6c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x27ad6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ad70: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x27ad70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x27ad74: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x27ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ad78: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x27ad78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_27ad7c:
    // 0x27ad7c: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x27AD7Cu;
    SET_GPR_U32(ctx, 31, 0x27AD84u);
    ctx->pc = 0x27AD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD7Cu;
    // 0x27ad80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x27AD7Cu, 0x27AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD84u;
label_27ad84:
    // 0x27ad84: 0xc09ec3e  jal         func_27B0F8
    ctx->pc = 0x27AD84u;
    SET_GPR_U32(ctx, 31, 0x27AD8Cu);
    ctx->pc = 0x27AD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD84u;
    // 0x27ad88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0F8u, 0x27AD84u, 0x27AD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD8Cu;
label_27ad8c:
    // 0x27ad8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27ad8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ad90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x27ad90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ad94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27ad94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ad98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27ad98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ad9c: 0x3e00008  jr          $ra
    ctx->pc = 0x27AD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD9Cu;
        // 0x27ada0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27ADA4u;
    // 0x27ada4: 0x0  nop
    ctx->pc = 0x27ada4u;
    // NOP
    ctx->pc = 0x27ada8u;
}
