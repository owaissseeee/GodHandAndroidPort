#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r704_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r704
{
// Function: func_00799380
// Address: 0x799380 - 0x799438
void func_00799380_0x799380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799380_0x799380");
#endif

    switch (ctx->pc) {
        case 0x7993b0u: goto label_7993b0;
        case 0x7993c0u: goto label_7993c0;
        case 0x7993c8u: goto label_7993c8;
        case 0x7993ecu: goto label_7993ec;
        case 0x79940cu: goto label_79940c;
        case 0x799418u: goto label_799418;
        default: break;
    }

    ctx->pc = 0x799380u;

    // 0x799380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799384: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799388: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79938c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799390: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799394: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x799394u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    // 0x799398: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x799398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79939c: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x7993a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7993a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7993a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7993A4u;
    {
        const bool branch_taken_0x7993a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A4u;
        // 0x7993a8: 0x3c130074  lui         $s3, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993a4) {
            ctx->pc = 0x7993C0u;
            goto label_7993c0;
        }
    }
    ctx->pc = 0x7993ACu;
    // 0x7993ac: 0x0  nop
    ctx->pc = 0x7993acu;
    // NOP
label_7993b0:
    // 0x7993b0: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x7993b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7993b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7993b8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7993B8u;
    SET_GPR_U32(ctx, 31, 0x7993C0u);
    ctx->pc = 0x7993BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B8u;
    // 0x7993bc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7993B8u, 0x7993C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C0u;
label_7993c0:
    // 0x7993c0: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x7993C0u;
    SET_GPR_U32(ctx, 31, 0x7993C8u);
    ctx->pc = 0x7993C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993C0u;
    // 0x7993c4: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x7993C0u, 0x7993C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C8u;
label_7993c8:
    // 0x7993c8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7993C8u;
    {
        const bool branch_taken_0x7993c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C8u;
        // 0x7993cc: 0x8e238658  lw          $v1, -0x79A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993c8) {
            ctx->pc = 0x7993B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993b0;
        }
    }
    ctx->pc = 0x7993D0u;
    // 0x7993d0: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x7993d4: 0x26446af0  addiu       $a0, $s2, 0x6AF0
    ctx->pc = 0x7993d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 27376));
    // 0x7993d8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x7993dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7993e0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x7993e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x7993e4: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x7993E4u;
    SET_GPR_U32(ctx, 31, 0x7993ECu);
    ctx->pc = 0x7993E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E4u;
    // 0x7993e8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x7993E4u, 0x7993ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993ECu;
label_7993ec:
    // 0x7993ec: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7993f0: 0x26667b00  addiu       $a2, $s3, 0x7B00
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 31488));
    // 0x7993f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x7993f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7993f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7993f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7993fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799400: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799404: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x799404u;
    SET_GPR_U32(ctx, 31, 0x79940Cu);
    ctx->pc = 0x799408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799404u;
    // 0x799408: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x799404u, 0x79940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79940Cu;
label_79940c:
    // 0x79940c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799410: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799410u;
    SET_GPR_U32(ctx, 31, 0x799418u);
    ctx->pc = 0x799414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799410u;
    // 0x799414: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799410u, 0x799418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799418u;
label_799418:
    // 0x799418: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79941c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79941cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799420: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x799420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799424: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x799424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79942c: 0x3e00008  jr          $ra
    ctx->pc = 0x79942Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79942Cu;
        // 0x799430: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79942Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799434u;
    // 0x799434: 0x0  nop
    ctx->pc = 0x799434u;
    // NOP
    ctx->pc = 0x799438u;
}
} // namespace gh_r704
