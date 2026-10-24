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

// Function: func_003837E8
// Address: 0x3837e8 - 0x383848
void func_003837E8_0x3837e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003837E8_0x3837e8");
#endif

    switch (ctx->pc) {
        case 0x383808u: goto label_383808;
        case 0x383820u: goto label_383820;
        default: break;
    }

    ctx->pc = 0x3837e8u;

    // 0x3837e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3837e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3837ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3837ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3837f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3837f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3837f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3837f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3837f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3837f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3837fc: 0x26110370  addiu       $s1, $s0, 0x370
    ctx->pc = 0x3837fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    // 0x383800: 0xc0c9132  jal         func_3244C8
    ctx->pc = 0x383800u;
    SET_GPR_U32(ctx, 31, 0x383808u);
    ctx->pc = 0x383804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383800u;
    // 0x383804: 0x8e2400f4  lw          $a0, 0xF4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3244C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3244C8u, 0x383800u, 0x383808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383808u;
label_383808:
    // 0x383808: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x383808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38380c: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x38380Cu;
    {
        const bool branch_taken_0x38380c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38380c) {
            ctx->pc = 0x383810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38380Cu;
            // 0x383810: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383838u;
            goto label_383838;
        }
    }
    ctx->pc = 0x383814u;
    // 0x383814: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x383814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383818: 0xc0dff4a  jal         func_37FD28
    ctx->pc = 0x383818u;
    SET_GPR_U32(ctx, 31, 0x383820u);
    ctx->pc = 0x38381Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383818u;
    // 0x38381c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FD28u, 0x383818u, 0x383820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383820u;
label_383820:
    // 0x383820: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x383820u;
    {
        const bool branch_taken_0x383820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383820u;
        // 0x383824: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383820) {
            ctx->pc = 0x383830u;
            goto label_383830;
        }
    }
    ctx->pc = 0x383828u;
    // 0x383828: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x383828u;
    {
        const bool branch_taken_0x383828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383828u;
        // 0x38382c: 0xa2000002  sb          $zero, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383828) {
            ctx->pc = 0x383834u;
            goto label_383834;
        }
    }
    ctx->pc = 0x383830u;
label_383830:
    // 0x383830: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x383830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_383834:
    // 0x383834: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x383834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_383838:
    // 0x383838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x383838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38383c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38383cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383840: 0x3e00008  jr          $ra
    ctx->pc = 0x383840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383840u;
        // 0x383844: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383848u;
}
