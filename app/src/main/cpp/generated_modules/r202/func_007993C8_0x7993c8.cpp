#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r202_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r202
{
// Function: func_007993C8
// Address: 0x7993c8 - 0x799480
void func_007993C8_0x7993c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007993C8_0x7993c8");
#endif

    switch (ctx->pc) {
        case 0x7993f8u: goto label_7993f8;
        case 0x799408u: goto label_799408;
        case 0x799410u: goto label_799410;
        case 0x799434u: goto label_799434;
        case 0x799454u: goto label_799454;
        case 0x799460u: goto label_799460;
        default: break;
    }

    ctx->pc = 0x7993c8u;

    // 0x7993c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7993c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7993cc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7993ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7993d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7993d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7993d4: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x7993d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x7993d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7993d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7993dc: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    // 0x7993e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x7993e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x7993e4: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x7993e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7993e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7993ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7993ECu;
    {
        const bool branch_taken_0x7993ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ECu;
        // 0x7993f0: 0x3c130074  lui         $s3, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993ec) {
            ctx->pc = 0x799408u;
            goto label_799408;
        }
    }
    ctx->pc = 0x7993F4u;
    // 0x7993f4: 0x0  nop
    ctx->pc = 0x7993f4u;
    // NOP
label_7993f8:
    // 0x7993f8: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7993fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799400: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799400u;
    SET_GPR_U32(ctx, 31, 0x799408u);
    ctx->pc = 0x799404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799400u;
    // 0x799404: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799400u, 0x799408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799408u;
label_799408:
    // 0x799408: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x799408u;
    SET_GPR_U32(ctx, 31, 0x799410u);
    ctx->pc = 0x79940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799408u;
    // 0x79940c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x799408u, 0x799410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799410u;
label_799410:
    // 0x799410: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799410u;
    {
        const bool branch_taken_0x799410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799410u;
        // 0x799414: 0x8e238658  lw          $v1, -0x79A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799410) {
            ctx->pc = 0x7993F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993f8;
        }
    }
    ctx->pc = 0x799418u;
    // 0x799418: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x799418u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x79941c: 0x26446af0  addiu       $a0, $s2, 0x6AF0
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 27376));
    // 0x799420: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x799424: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799428: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79942c: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x79942Cu;
    SET_GPR_U32(ctx, 31, 0x799434u);
    ctx->pc = 0x799430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79942Cu;
    // 0x799430: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x79942Cu, 0x799434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799434u;
label_799434:
    // 0x799434: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799438: 0x26667b00  addiu       $a2, $s3, 0x7B00
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 31488));
    // 0x79943c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x79943cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799440: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799444: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799444u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799448: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79944c: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x79944Cu;
    SET_GPR_U32(ctx, 31, 0x799454u);
    ctx->pc = 0x799450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79944Cu;
    // 0x799450: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x79944Cu, 0x799454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799454u;
label_799454:
    // 0x799454: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799458: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799458u;
    SET_GPR_U32(ctx, 31, 0x799460u);
    ctx->pc = 0x79945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799458u;
    // 0x79945c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799458u, 0x799460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799460u;
label_799460:
    // 0x799460: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799464: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799468: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x799468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79946c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79946cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799474: 0x3e00008  jr          $ra
    ctx->pc = 0x799474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799474u;
        // 0x799478: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79947Cu;
    // 0x79947c: 0x0  nop
    ctx->pc = 0x79947cu;
    // NOP
    ctx->pc = 0x799480u;
}
} // namespace gh_r202
