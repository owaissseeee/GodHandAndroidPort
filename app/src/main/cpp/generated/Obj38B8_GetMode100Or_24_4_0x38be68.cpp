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

// Function: Obj38B8_GetMode100Or_24_4
// Address: 0x38be68 - 0x38be88
void Obj38B8_GetMode100Or_24_4_0x38be68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj38B8_GetMode100Or_24_4_0x38be68");
#endif

    ctx->pc = 0x38be68u;

    // 0x38be68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38be6c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38be6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x38be70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38BE70u;
    {
        const bool branch_taken_0x38be70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38be70) {
            ctx->pc = 0x38BE80u;
            goto label_38be80;
        }
    }
    ctx->pc = 0x38BE78u;
    // 0x38be78: 0x3e00008  jr          $ra
    ctx->pc = 0x38BE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE78u;
        // 0x38be7c: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BE80u;
label_38be80:
    // 0x38be80: 0x3e00008  jr          $ra
    ctx->pc = 0x38BE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE80u;
        // 0x38be84: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BE88u;
}
