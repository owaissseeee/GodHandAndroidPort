#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_00799818
// Address: 0x799818 - 0x7998d0
void func_00799818_0x799818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799818_0x799818");
#endif

    switch (ctx->pc) {
        case 0x799840u: goto label_799840;
        case 0x799850u: goto label_799850;
        case 0x79985cu: goto label_79985c;
        case 0x79986cu: goto label_79986c;
        case 0x79988cu: goto label_79988c;
        case 0x79989cu: goto label_79989c;
        case 0x7998acu: goto label_7998ac;
        case 0x7998b8u: goto label_7998b8;
        default: break;
    }

    ctx->pc = 0x799818u;

    // 0x799818: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79981c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79981cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799820: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799824: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799828: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79982c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799830: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799834: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799838: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799838u;
    SET_GPR_U32(ctx, 31, 0x799840u);
    ctx->pc = 0x79983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799838u;
    // 0x79983c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799838u, 0x799840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799840u;
label_799840:
    // 0x799840: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x799840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799844: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799844u;
    {
        const bool branch_taken_0x799844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799844u;
        // 0x799848: 0x3c110060  lui         $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799844) {
            ctx->pc = 0x79985Cu;
            goto label_79985c;
        }
    }
    ctx->pc = 0x79984Cu;
    // 0x79984c: 0x0  nop
    ctx->pc = 0x79984cu;
    // NOP
label_799850:
    // 0x799850: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799854: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799854u;
    SET_GPR_U32(ctx, 31, 0x79985Cu);
    ctx->pc = 0x799858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799854u;
    // 0x799858: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799854u, 0x79985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79985Cu;
label_79985c:
    // 0x79985c: 0x2624ea60  addiu       $a0, $s1, -0x15A0
    ctx->pc = 0x79985cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x799860: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x799864: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799864u;
    SET_GPR_U32(ctx, 31, 0x79986Cu);
    ctx->pc = 0x799868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799864u;
    // 0x799868: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799864u, 0x79986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79986Cu;
label_79986c:
    // 0x79986c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79986cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799874: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x799874u;
    {
        const bool branch_taken_0x799874 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x799878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799874u;
        // 0x799878: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799874) {
            ctx->pc = 0x799850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799850;
        }
    }
    ctx->pc = 0x79987Cu;
    // 0x79987c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799880: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799884: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799884u;
    SET_GPR_U32(ctx, 31, 0x79988Cu);
    ctx->pc = 0x799888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799884u;
    // 0x799888: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799884u, 0x79988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79988Cu;
label_79988c:
    // 0x79988c: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79988Cu;
    {
        const bool branch_taken_0x79988c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x799890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79988Cu;
        // 0x799890: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79988c) {
            ctx->pc = 0x7998B0u;
            goto label_7998b0;
        }
    }
    ctx->pc = 0x799894u;
    // 0x799894: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x799894u;
    SET_GPR_U32(ctx, 31, 0x79989Cu);
    ctx->pc = 0x799898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799894u;
    // 0x799898: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799894u, 0x79989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79989Cu;
label_79989c:
    // 0x79989c: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79989Cu;
    {
        const bool branch_taken_0x79989c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x7998A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79989Cu;
        // 0x7998a0: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79989c) {
            ctx->pc = 0x7998B0u;
            goto label_7998b0;
        }
    }
    ctx->pc = 0x7998A4u;
    // 0x7998a4: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x7998A4u;
    SET_GPR_U32(ctx, 31, 0x7998ACu);
    ctx->pc = 0x7998A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998A4u;
    // 0x7998a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x7998A4u, 0x7998ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998ACu;
label_7998ac:
    // 0x7998ac: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x7998acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_7998b0:
    // 0x7998b0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7998B0u;
    SET_GPR_U32(ctx, 31, 0x7998B8u);
    ctx->pc = 0x7998B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998B0u;
    // 0x7998b4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7998B0u, 0x7998B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998B8u;
label_7998b8:
    // 0x7998b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7998b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7998bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7998bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7998c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7998c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7998c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7998c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7998c8: 0x3e00008  jr          $ra
    ctx->pc = 0x7998C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C8u;
        // 0x7998cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998D0u;
}
} // namespace gh_r102
