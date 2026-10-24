#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: r6xx_setLever__FPCc14eR6xx_Obj_Statff
// Address: 0x79ad90 - 0x79af18
void r6xx_setLever__FPCc14eR6xx_Obj_Statff_0x79ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_setLever__FPCc14eR6xx_Obj_Statff_0x79ad90");
#endif

    switch (ctx->pc) {
        case 0x79add8u: goto label_79add8;
        case 0x79ae08u: goto label_79ae08;
        case 0x79ae50u: goto label_79ae50;
        case 0x79ae7cu: goto label_79ae7c;
        case 0x79ae8cu: goto label_79ae8c;
        case 0x79ae9cu: goto label_79ae9c;
        case 0x79aeacu: goto label_79aeac;
        case 0x79aec0u: goto label_79aec0;
        case 0x79aed4u: goto label_79aed4;
        case 0x79aee8u: goto label_79aee8;
        case 0x79aefcu: goto label_79aefc;
        default: break;
    }

    ctx->pc = 0x79ad90u;

    // 0x79ad90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79ad94: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79ad98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79ad98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79ad9c: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79ad9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79ada0: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x79ada0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x79ada4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x79ada4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ada8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x79ada8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79adac: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x79adacu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x79adb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79adb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79adb4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x79adb4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x79adb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79adb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79adbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79adbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79adc0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79adc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79adc4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x79ADC4u;
    {
        const bool branch_taken_0x79adc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADC4u;
        // 0x79adc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adc4) {
            ctx->pc = 0x79AE00u;
            goto label_79ae00;
        }
    }
    ctx->pc = 0x79ADCCu;
    // 0x79adcc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79adccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79add0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79add0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79add4: 0x0  nop
    ctx->pc = 0x79add4u;
    // NOP
label_79add8:
    // 0x79add8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79add8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79addc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79addcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79ade0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79ade0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79ade4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79ade4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79ade8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79ade8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79adec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79ADECu;
    {
        const bool branch_taken_0x79adec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADECu;
        // 0x79adf0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adec) {
            ctx->pc = 0x79AE00u;
            goto label_79ae00;
        }
    }
    ctx->pc = 0x79ADF4u;
    // 0x79adf4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79adf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79adf8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79ADF8u;
    {
        const bool branch_taken_0x79adf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79adf8) {
            ctx->pc = 0x79ADFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ADF8u;
            // 0x79adfc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ADD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79add8;
        }
    }
    ctx->pc = 0x79AE00u;
label_79ae00:
    // 0x79ae00: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79AE00u;
    SET_GPR_U32(ctx, 31, 0x79AE08u);
    ctx->pc = 0x79AE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE00u;
    // 0x79ae04: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79AE00u, 0x79AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE08u;
label_79ae08:
    // 0x79ae08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79ae08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae0c: 0x5200003c  beql        $s0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x79AE0Cu;
    {
        const bool branch_taken_0x79ae0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ae0c) {
            ctx->pc = 0x79AE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AE0Cu;
            // 0x79ae10: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AF00u;
            goto label_79af00;
        }
    }
    ctx->pc = 0x79AE14u;
    // 0x79ae14: 0x3c01c479  lui         $at, 0xC479
    ctx->pc = 0x79ae14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50297 << 16));
    // 0x79ae18: 0x3421f99a  ori         $at, $at, 0xF99A
    ctx->pc = 0x79ae18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63898);
    // 0x79ae1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79ae1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79ae20: 0x0  nop
    ctx->pc = 0x79ae20u;
    // NOP
    // 0x79ae24: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x79ae24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79ae28: 0x0  nop
    ctx->pc = 0x79ae28u;
    // NOP
    // 0x79ae2c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x79AE2Cu;
    {
        const bool branch_taken_0x79ae2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE2Cu;
        // 0x79ae30: 0x2e220008  sltiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae2c) {
            ctx->pc = 0x79AE54u;
            goto label_79ae54;
        }
    }
    ctx->pc = 0x79AE34u;
    // 0x79ae34: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x79ae34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79ae38: 0x0  nop
    ctx->pc = 0x79ae38u;
    // NOP
    // 0x79ae3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x79AE3Cu;
    {
        const bool branch_taken_0x79ae3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE3Cu;
        // 0x79ae40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae3c) {
            ctx->pc = 0x79AE54u;
            goto label_79ae54;
        }
    }
    ctx->pc = 0x79AE44u;
    // 0x79ae44: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x79ae44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x79ae48: 0xc0693f8  jal         func_1A4FE0
    ctx->pc = 0x79AE48u;
    SET_GPR_U32(ctx, 31, 0x79AE50u);
    ctx->pc = 0x79AE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE48u;
    // 0x79ae4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FE0u, 0x79AE48u, 0x79AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE50u;
label_79ae50:
    // 0x79ae50: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x79ae50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79ae54:
    // 0x79ae54: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x79AE54u;
    {
        const bool branch_taken_0x79ae54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE54u;
        // 0x79ae58: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae54) {
            ctx->pc = 0x79AEFCu;
            goto label_79aefc;
        }
    }
    ctx->pc = 0x79AE5Cu;
    // 0x79ae5c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x79ae60: 0x2442b540  addiu       $v0, $v0, -0x4AC0
    ctx->pc = 0x79ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948160));
    // 0x79ae64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79ae68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79ae6c: 0x800008  jr          $a0
    ctx->pc = 0x79AE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79AE74u: goto label_79ae74;
            case 0x79AE84u: goto label_79ae84;
            case 0x79AE94u: goto label_79ae94;
            case 0x79AEA4u: goto label_79aea4;
            case 0x79AEB4u: goto label_79aeb4;
            case 0x79AEC8u: goto label_79aec8;
            case 0x79AEDCu: goto label_79aedc;
            case 0x79AEF0u: goto label_79aef0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79AE74u;
label_79ae74:
    // 0x79ae74: 0xc069352  jal         func_1A4D48
    ctx->pc = 0x79AE74u;
    SET_GPR_U32(ctx, 31, 0x79AE7Cu);
    ctx->pc = 0x79AE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE74u;
    // 0x79ae78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4D48u, 0x79AE74u, 0x79AE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE7Cu;
label_79ae7c:
    // 0x79ae7c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x79AE7Cu;
    {
        const bool branch_taken_0x79ae7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE7Cu;
        // 0x79ae80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae7c) {
            ctx->pc = 0x79AF00u;
            goto label_79af00;
        }
    }
    ctx->pc = 0x79AE84u;
label_79ae84:
    // 0x79ae84: 0xc069380  jal         func_1A4E00
    ctx->pc = 0x79AE84u;
    SET_GPR_U32(ctx, 31, 0x79AE8Cu);
    ctx->pc = 0x79AE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE84u;
    // 0x79ae88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E00u, 0x79AE84u, 0x79AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE8Cu;
label_79ae8c:
    // 0x79ae8c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x79AE8Cu;
    {
        const bool branch_taken_0x79ae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE8Cu;
        // 0x79ae90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae8c) {
            ctx->pc = 0x79AF00u;
            goto label_79af00;
        }
    }
    ctx->pc = 0x79AE94u;
label_79ae94:
    // 0x79ae94: 0xc06936a  jal         func_1A4DA8
    ctx->pc = 0x79AE94u;
    SET_GPR_U32(ctx, 31, 0x79AE9Cu);
    ctx->pc = 0x79AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE94u;
    // 0x79ae98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DA8u, 0x79AE94u, 0x79AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE9Cu;
label_79ae9c:
    // 0x79ae9c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x79AE9Cu;
    {
        const bool branch_taken_0x79ae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE9Cu;
        // 0x79aea0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae9c) {
            ctx->pc = 0x79AF00u;
            goto label_79af00;
        }
    }
    ctx->pc = 0x79AEA4u;
label_79aea4:
    // 0x79aea4: 0xc0693a2  jal         func_1A4E88
    ctx->pc = 0x79AEA4u;
    SET_GPR_U32(ctx, 31, 0x79AEACu);
    ctx->pc = 0x79AEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEA4u;
    // 0x79aea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E88u, 0x79AEA4u, 0x79AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEACu;
label_79aeac:
    // 0x79aeac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x79AEACu;
    {
        const bool branch_taken_0x79aeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEACu;
        // 0x79aeb0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aeac) {
            ctx->pc = 0x79AF00u;
            goto label_79af00;
        }
    }
    ctx->pc = 0x79AEB4u;
label_79aeb4:
    // 0x79aeb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aeb8: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79AEB8u;
    SET_GPR_U32(ctx, 31, 0x79AEC0u);
    ctx->pc = 0x79AEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEB8u;
    // 0x79aebc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79AEB8u, 0x79AEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEC0u;
label_79aec0:
    // 0x79aec0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x79AEC0u;
    {
        const bool branch_taken_0x79aec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEC0u;
        // 0x79aec4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aec0) {
            ctx->pc = 0x79AF00u;
            goto label_79af00;
        }
    }
    ctx->pc = 0x79AEC8u;
label_79aec8:
    // 0x79aec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aecc: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79AECCu;
    SET_GPR_U32(ctx, 31, 0x79AED4u);
    ctx->pc = 0x79AED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AECCu;
    // 0x79aed0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79AECCu, 0x79AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AED4u;
label_79aed4:
    // 0x79aed4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79AED4u;
    {
        const bool branch_taken_0x79aed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AED4u;
        // 0x79aed8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aed4) {
            ctx->pc = 0x79AF00u;
            goto label_79af00;
        }
    }
    ctx->pc = 0x79AEDCu;
label_79aedc:
    // 0x79aedc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aee0: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x79AEE0u;
    SET_GPR_U32(ctx, 31, 0x79AEE8u);
    ctx->pc = 0x79AEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEE0u;
    // 0x79aee4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x79AEE0u, 0x79AEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEE8u;
label_79aee8:
    // 0x79aee8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79AEE8u;
    {
        const bool branch_taken_0x79aee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEE8u;
        // 0x79aeec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aee8) {
            ctx->pc = 0x79AF00u;
            goto label_79af00;
        }
    }
    ctx->pc = 0x79AEF0u;
label_79aef0:
    // 0x79aef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aef4: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x79AEF4u;
    SET_GPR_U32(ctx, 31, 0x79AEFCu);
    ctx->pc = 0x79AEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEF4u;
    // 0x79aef8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x79AEF4u, 0x79AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEFCu;
label_79aefc:
    // 0x79aefc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79aefcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79af00:
    // 0x79af00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79af00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79af04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79af04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79af08: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x79af08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79af0c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x79af0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79af10: 0x3e00008  jr          $ra
    ctx->pc = 0x79AF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF10u;
        // 0x79af14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AF18u;
}
} // namespace gh_r604
