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

// Function: cCoreSave_isGoldFull
// Address: 0x1fa8e0 - 0x1fa908
void cCoreSave_isGoldFull_0x1fa8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_isGoldFull_0x1fa8e0");
#endif

    ctx->pc = 0x1fa8e0u;

    // 0x1fa8e0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fa8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa8e4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA8E4u;
    {
        const bool branch_taken_0x1fa8e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8E4u;
        // 0x1fa8e8: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa8e4) {
            ctx->pc = 0x1FA8FCu;
            goto label_1fa8fc;
        }
    }
    ctx->pc = 0x1FA8ECu;
    // 0x1fa8ec: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1fa8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1fa8f0: 0x3442423e  ori         $v0, $v0, 0x423E
    ctx->pc = 0x1fa8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16958);
    // 0x1fa8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8F4u;
        // 0x1fa8f8: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA8FCu;
label_1fa8fc:
    // 0x1fa8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8FCu;
        // 0x1fa900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA904u;
    // 0x1fa904: 0x0  nop
    ctx->pc = 0x1fa904u;
    // NOP
    ctx->pc = 0x1fa908u;
}
