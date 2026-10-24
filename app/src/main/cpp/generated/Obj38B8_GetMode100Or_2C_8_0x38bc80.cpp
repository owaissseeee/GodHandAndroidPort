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

// Function: Obj38B8_GetMode100Or_2C_8
// Address: 0x38bc80 - 0x38bca0
void Obj38B8_GetMode100Or_2C_8_0x38bc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj38B8_GetMode100Or_2C_8_0x38bc80");
#endif

    ctx->pc = 0x38bc80u;

    // 0x38bc80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38bc84: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38bc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x38bc88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38BC88u;
    {
        const bool branch_taken_0x38bc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bc88) {
            ctx->pc = 0x38BC98u;
            goto label_38bc98;
        }
    }
    ctx->pc = 0x38BC90u;
    // 0x38bc90: 0x3e00008  jr          $ra
    ctx->pc = 0x38BC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BC90u;
        // 0x38bc94: 0x8c82002c  lw          $v0, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BC98u;
label_38bc98:
    // 0x38bc98: 0x3e00008  jr          $ra
    ctx->pc = 0x38BC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BC98u;
        // 0x38bc9c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BCA0u;
}
