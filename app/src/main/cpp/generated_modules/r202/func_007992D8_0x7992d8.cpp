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
// Function: func_007992D8
// Address: 0x7992d8 - 0x7993c8
void func_007992D8_0x7992d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007992D8_0x7992d8");
#endif

    switch (ctx->pc) {
        case 0x799320u: goto label_799320;
        case 0x79932cu: goto label_79932c;
        case 0x799338u: goto label_799338;
        case 0x799348u: goto label_799348;
        case 0x799350u: goto label_799350;
        case 0x799374u: goto label_799374;
        case 0x799388u: goto label_799388;
        case 0x799398u: goto label_799398;
        case 0x7993a4u: goto label_7993a4;
        default: break;
    }

    ctx->pc = 0x7992d8u;

    // 0x7992d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7992dc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x7992e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7992e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7992e4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7992e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7992e8: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x7992ec: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7992ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7992f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7992f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7992f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x7992f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7992f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7992fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7992fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799300: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799304: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799308: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x799308u;
    {
        const bool branch_taken_0x799308 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x79930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799308u;
        // 0x79930c: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799308) {
            ctx->pc = 0x79932Cu;
            goto label_79932c;
        }
    }
    ctx->pc = 0x799310u;
    // 0x799310: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799314: 0x26659480  addiu       $a1, $s3, -0x6B80
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939776));
    // 0x799318: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799318u;
    SET_GPR_U32(ctx, 31, 0x799320u);
    ctx->pc = 0x79931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799318u;
    // 0x79931c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799318u, 0x799320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799320u;
label_799320:
    // 0x799320: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799324: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799324u;
    SET_GPR_U32(ctx, 31, 0x79932Cu);
    ctx->pc = 0x799328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799324u;
    // 0x799328: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799324u, 0x79932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79932Cu;
label_79932c:
    // 0x79932c: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x799330: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799330u;
    {
        const bool branch_taken_0x799330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799330u;
        // 0x799334: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799330) {
            ctx->pc = 0x799348u;
            goto label_799348;
        }
    }
    ctx->pc = 0x799338u;
label_799338:
    // 0x799338: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79933c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799340: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799340u;
    SET_GPR_U32(ctx, 31, 0x799348u);
    ctx->pc = 0x799344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799340u;
    // 0x799344: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799340u, 0x799348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799348u;
label_799348:
    // 0x799348: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x799348u;
    SET_GPR_U32(ctx, 31, 0x799350u);
    ctx->pc = 0x79934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799348u;
    // 0x79934c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x799348u, 0x799350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799350u;
label_799350:
    // 0x799350: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799350u;
    {
        const bool branch_taken_0x799350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799350u;
        // 0x799354: 0x8e838658  lw          $v1, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799350) {
            ctx->pc = 0x799338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799338;
        }
    }
    ctx->pc = 0x799358u;
    // 0x799358: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x79935c: 0x26246af0  addiu       $a0, $s1, 0x6AF0
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 27376));
    // 0x799360: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x799364: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799368: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79936c: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x79936Cu;
    SET_GPR_U32(ctx, 31, 0x799374u);
    ctx->pc = 0x799370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79936Cu;
    // 0x799370: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x79936Cu, 0x799374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799374u;
label_799374:
    // 0x799374: 0x8e44264c  lw          $a0, 0x264C($s2)
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9804)));
    // 0x799378: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79937c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79937cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799380: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799380u;
    SET_GPR_U32(ctx, 31, 0x799388u);
    ctx->pc = 0x799384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799380u;
    // 0x799384: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799380u, 0x799388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799388u;
label_799388:
    // 0x799388: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79938c: 0x26659480  addiu       $a1, $s3, -0x6B80
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939776));
    // 0x799390: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799390u;
    SET_GPR_U32(ctx, 31, 0x799398u);
    ctx->pc = 0x799394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799390u;
    // 0x799394: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799390u, 0x799398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799398u;
label_799398:
    // 0x799398: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x799398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79939c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79939Cu;
    SET_GPR_U32(ctx, 31, 0x7993A4u);
    ctx->pc = 0x7993A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79939Cu;
    // 0x7993a0: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79939Cu, 0x7993A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A4u;
label_7993a4:
    // 0x7993a4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7993a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7993a8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7993a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7993ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7993acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7993b0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7993b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7993b4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7993b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7993b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7993b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7993bc: 0x3e00008  jr          $ra
    ctx->pc = 0x7993BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7993C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993BCu;
        // 0x7993c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7993C4u;
    // 0x7993c4: 0x0  nop
    ctx->pc = 0x7993c4u;
    // NOP
    ctx->pc = 0x7993c8u;
}
} // namespace gh_r202
