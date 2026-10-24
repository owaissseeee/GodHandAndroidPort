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

// Function: Obj38B8_GetMode100Or_C_24
// Address: 0x38bc60 - 0x38bc80
void Obj38B8_GetMode100Or_C_24_0x38bc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj38B8_GetMode100Or_C_24_0x38bc60");
#endif

    ctx->pc = 0x38bc60u;

    // 0x38bc60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38bc64: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38bc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x38bc68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38BC68u;
    {
        const bool branch_taken_0x38bc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bc68) {
            ctx->pc = 0x38BC78u;
            goto label_38bc78;
        }
    }
    ctx->pc = 0x38BC70u;
    // 0x38bc70: 0x3e00008  jr          $ra
    ctx->pc = 0x38BC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BC70u;
        // 0x38bc74: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BC78u;
label_38bc78:
    // 0x38bc78: 0x3e00008  jr          $ra
    ctx->pc = 0x38BC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BC78u;
        // 0x38bc7c: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BC80u;
}
