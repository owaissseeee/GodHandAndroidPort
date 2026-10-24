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

// Function: cRoomSave_getFree
// Address: 0x2bf108 - 0x2bf130
void cRoomSave_getFree_0x2bf108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cRoomSave_getFree_0x2bf108");
#endif

    ctx->pc = 0x2bf108u;

    // 0x2bf108: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x2bf108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2bf10c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF10Cu;
    {
        const bool branch_taken_0x2bf10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF10Cu;
        // 0x2bf110: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf10c) {
            ctx->pc = 0x2BF124u;
            goto label_2bf124;
        }
    }
    ctx->pc = 0x2BF114u;
    // 0x2bf114: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2bf114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bf118: 0x24421610  addiu       $v0, $v0, 0x1610
    ctx->pc = 0x2bf118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x2bf11c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF11Cu;
        // 0x2bf120: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF124u;
label_2bf124:
    // 0x2bf124: 0x24421618  addiu       $v0, $v0, 0x1618
    ctx->pc = 0x2bf124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5656));
    // 0x2bf128: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF128u;
        // 0x2bf12c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF130u;
}
