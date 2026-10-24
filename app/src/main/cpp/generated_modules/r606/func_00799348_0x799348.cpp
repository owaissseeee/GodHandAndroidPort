#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: func_00799348
// Address: 0x799348 - 0x799408
void func_00799348_0x799348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799348_0x799348");
#endif

    switch (ctx->pc) {
        case 0x799378u: goto label_799378;
        case 0x799380u: goto label_799380;
        case 0x7993a8u: goto label_7993a8;
        case 0x7993b8u: goto label_7993b8;
        case 0x7993c8u: goto label_7993c8;
        case 0x7993d0u: goto label_7993d0;
        case 0x7993f8u: goto label_7993f8;
        default: break;
    }

    ctx->pc = 0x799348u;

    // 0x799348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79934c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79934cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799350: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799358: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79935c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799360: 0x481000d  bgez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x799360u;
    {
        const bool branch_taken_0x799360 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x799364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799360u;
        // 0x799364: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799360) {
            ctx->pc = 0x799398u;
            goto label_799398;
        }
    }
    ctx->pc = 0x799368u;
    // 0x799368: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799368u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x79936c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x79936cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799370: 0xa3b00000  sb          $s0, 0x0($sp)
    ctx->pc = 0x799370u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x799374: 0x0  nop
    ctx->pc = 0x799374u;
    // NOP
label_799378:
    // 0x799378: 0xc0a56ce  jal         func_295B38
    ctx->pc = 0x799378u;
    SET_GPR_U32(ctx, 31, 0x799380u);
    ctx->pc = 0x79937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799378u;
    // 0x79937c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x799378u, 0x799380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799380u;
label_799380:
    // 0x799380: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x799384: 0x2a02000e  slti        $v0, $s0, 0xE
    ctx->pc = 0x799384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x799388: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799388u;
    {
        const bool branch_taken_0x799388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799388) {
            ctx->pc = 0x79938Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799388u;
            // 0x79938c: 0xa3b00000  sb          $s0, 0x0($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799378;
        }
    }
    ctx->pc = 0x799390u;
    // 0x799390: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x799390u;
    {
        const bool branch_taken_0x799390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799390u;
        // 0x799394: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799390) {
            ctx->pc = 0x7993FCu;
            goto label_7993fc;
        }
    }
    ctx->pc = 0x799398u;
label_799398:
    // 0x799398: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79939c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79939cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x7993a0: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x7993A0u;
    SET_GPR_U32(ctx, 31, 0x7993A8u);
    ctx->pc = 0x7993A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A0u;
    // 0x7993a4: 0x240503d9  addiu       $a1, $zero, 0x3D9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x7993A0u, 0x7993A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A8u;
label_7993a8:
    // 0x7993a8: 0x2410000e  addiu       $s0, $zero, 0xE
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x7993ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7993acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993b0: 0xc0a57b8  jal         func_295EE0
    ctx->pc = 0x7993B0u;
    SET_GPR_U32(ctx, 31, 0x7993B8u);
    ctx->pc = 0x7993B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B0u;
    // 0x7993b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295EE0u, 0x7993B0u, 0x7993B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B8u;
label_7993b8:
    // 0x7993b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7993b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993bc: 0xa3b00000  sb          $s0, 0x0($sp)
    ctx->pc = 0x7993bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x7993c0: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x7993C0u;
    SET_GPR_U32(ctx, 31, 0x7993C8u);
    ctx->pc = 0x7993C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993C0u;
    // 0x7993c4: 0x240503d0  addiu       $a1, $zero, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x7993C0u, 0x7993C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C8u;
label_7993c8:
    // 0x7993c8: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7993C8u;
    SET_GPR_U32(ctx, 31, 0x7993D0u);
    ctx->pc = 0x7993CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993C8u;
    // 0x7993cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7993C8u, 0x7993D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D0u;
label_7993d0:
    // 0x7993d0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x7993D0u;
    {
        const bool branch_taken_0x7993d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7993d0) {
            ctx->pc = 0x7993D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7993D0u;
            // 0x7993d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7993FCu;
            goto label_7993fc;
        }
    }
    ctx->pc = 0x7993D8u;
    // 0x7993d8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7993dc: 0x24041002  addiu       $a0, $zero, 0x1002
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    // 0x7993e0: 0x8ca2a980  lw          $v0, -0x5680($a1)
    ctx->pc = 0x7993e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79A980u));
    // 0x7993e4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x7993e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x7993e8: 0x8ca3a980  lw          $v1, -0x5680($a1)
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79A980u));
    // 0x7993ec: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x7993ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x7993f0: 0xc1e692a  jal         func_79A4A8
    ctx->pc = 0x7993F0u;
    SET_GPR_U32(ctx, 31, 0x7993F8u);
    ctx->pc = 0x7993F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F0u;
    // 0x7993f4: 0x8ca4a980  lw          $a0, -0x5680($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294945152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A4A8u, 0x7993F0u, 0x7993F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993F8u;
label_7993f8:
    // 0x7993f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7993f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7993fc:
    // 0x7993fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7993fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799400: 0x3e00008  jr          $ra
    ctx->pc = 0x799400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799400u;
        // 0x799404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799408u;
}
} // namespace gh_r606
