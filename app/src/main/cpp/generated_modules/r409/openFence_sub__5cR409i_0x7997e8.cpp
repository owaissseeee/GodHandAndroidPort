#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: openFence_sub__5cR409i
// Address: 0x7997e8 - 0x799870
void openFence_sub__5cR409i_0x7997e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("openFence_sub__5cR409i_0x7997e8");
#endif

    switch (ctx->pc) {
        case 0x799814u: goto label_799814;
        case 0x799830u: goto label_799830;
        case 0x79984cu: goto label_79984c;
        case 0x799858u: goto label_799858;
        default: break;
    }

    ctx->pc = 0x7997e8u;

    // 0x7997e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7997ec: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7997ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7997f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7997f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7997f4: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x7997f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7997f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7997fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7997fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799800: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799800u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799804: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79980c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79980Cu;
    SET_GPR_U32(ctx, 31, 0x799814u);
    ctx->pc = 0x799810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79980Cu;
    // 0x799810: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79980Cu, 0x799814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799814u;
label_799814:
    // 0x799814: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x799814u;
    {
        const bool branch_taken_0x799814 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x799818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799814u;
        // 0x799818: 0x3c04005d  lui         $a0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799814) {
            ctx->pc = 0x799838u;
            goto label_799838;
        }
    }
    ctx->pc = 0x79981Cu;
    // 0x79981c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79981cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799820: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x799820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x799824: 0x24a5c020  addiu       $a1, $a1, -0x3FE0
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950944));
    // 0x799828: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799828u;
    SET_GPR_U32(ctx, 31, 0x799830u);
    ctx->pc = 0x79982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799828u;
    // 0x79982c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799828u, 0x799830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799830u;
label_799830:
    // 0x799830: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x799830u;
    {
        const bool branch_taken_0x799830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799830u;
        // 0x799834: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799830) {
            ctx->pc = 0x799850u;
            goto label_799850;
        }
    }
    ctx->pc = 0x799838u;
label_799838:
    // 0x799838: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79983c: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x79983cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x799840: 0x24a5c028  addiu       $a1, $a1, -0x3FD8
    ctx->pc = 0x799840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950952));
    // 0x799844: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799844u;
    SET_GPR_U32(ctx, 31, 0x79984Cu);
    ctx->pc = 0x799848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799844u;
    // 0x799848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799844u, 0x79984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79984Cu;
label_79984c:
    // 0x79984c: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799850:
    // 0x799850: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799850u;
    SET_GPR_U32(ctx, 31, 0x799858u);
    ctx->pc = 0x799854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799850u;
    // 0x799854: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799850u, 0x799858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799858u;
label_799858:
    // 0x799858: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79985c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79985cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799864: 0x3e00008  jr          $ra
    ctx->pc = 0x799864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799864u;
        // 0x799868: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79986Cu;
    // 0x79986c: 0x0  nop
    ctx->pc = 0x79986cu;
    // NOP
    ctx->pc = 0x799870u;
}
} // namespace gh_r409
