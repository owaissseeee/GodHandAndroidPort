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

// Function: FindFreeSlotIndex_140C58
// Address: 0x140c58 - 0x140c88
void FindFreeSlotIndex_140C58_0x140c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FindFreeSlotIndex_140C58_0x140c58");
#endif

    switch (ctx->pc) {
        case 0x140c60u: goto label_140c60;
        default: break;
    }

    ctx->pc = 0x140c58u;

    // 0x140c58: 0x248422f4  addiu       $a0, $a0, 0x22F4
    ctx->pc = 0x140c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8948));
    // 0x140c5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x140c5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140c60:
    // 0x140c60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x140c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x140c64: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x140C64u;
    {
        const bool branch_taken_0x140c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140c64) {
            ctx->pc = 0x140C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140C64u;
            // 0x140c68: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140C74u;
            goto label_140c74;
        }
    }
    ctx->pc = 0x140C6Cu;
    // 0x140c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x140C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C6Cu;
        // 0x140c70: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140C74u;
label_140c74:
    // 0x140c74: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x140c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x140c78: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x140C78u;
    {
        const bool branch_taken_0x140c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C78u;
        // 0x140c7c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c78) {
            ctx->pc = 0x140C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140c60;
        }
    }
    ctx->pc = 0x140C80u;
    // 0x140c80: 0x3e00008  jr          $ra
    ctx->pc = 0x140C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C80u;
        // 0x140c84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140C88u;
}
