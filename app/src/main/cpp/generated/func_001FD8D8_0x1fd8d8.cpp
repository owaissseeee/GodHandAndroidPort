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

// Function: func_001FD8D8
// Address: 0x1fd8d8 - 0x1fd908
void func_001FD8D8_0x1fd8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FD8D8_0x1fd8d8");
#endif

    switch (ctx->pc) {
        case 0x1fd8e8u: goto label_1fd8e8;
        default: break;
    }

    ctx->pc = 0x1fd8d8u;

    // 0x1fd8d8: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x1fd8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1fd8dc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD8DCu;
    {
        const bool branch_taken_0x1fd8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd8dc) {
            ctx->pc = 0x1FD900u;
            goto label_1fd900;
        }
    }
    ctx->pc = 0x1FD8E4u;
    // 0x1fd8e4: 0x8462002c  lh          $v0, 0x2C($v1)
    ctx->pc = 0x1fd8e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
label_1fd8e8:
    // 0x1fd8e8: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD8E8u;
    {
        const bool branch_taken_0x1fd8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fd8e8) {
            ctx->pc = 0x1FD8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD8E8u;
            // 0x1fd8ec: 0x8c630024  lw          $v1, 0x24($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD8F8u;
            goto label_1fd8f8;
        }
    }
    ctx->pc = 0x1FD8F0u;
    // 0x1fd8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8F0u;
        // 0x1fd8f4: 0x8c620028  lw          $v0, 0x28($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD8F8u;
label_1fd8f8:
    // 0x1fd8f8: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FD8F8u;
    {
        const bool branch_taken_0x1fd8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd8f8) {
            ctx->pc = 0x1FD8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD8F8u;
            // 0x1fd8fc: 0x8462002c  lh          $v0, 0x2C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd8e8;
        }
    }
    ctx->pc = 0x1FD900u;
label_1fd900:
    // 0x1fd900: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD900u;
        // 0x1fd904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD908u;
}
