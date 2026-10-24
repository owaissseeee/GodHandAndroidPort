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

// Function: Obj38B8_GetMode100Or_2C_8_v2
// Address: 0x38be40 - 0x38be60
void Obj38B8_GetMode100Or_2C_8_v2_0x38be40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj38B8_GetMode100Or_2C_8_v2_0x38be40");
#endif

    ctx->pc = 0x38be40u;

    // 0x38be40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38be40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38be44: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38be44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x38be48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38BE48u;
    {
        const bool branch_taken_0x38be48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38be48) {
            ctx->pc = 0x38BE58u;
            goto label_38be58;
        }
    }
    ctx->pc = 0x38BE50u;
    // 0x38be50: 0x3e00008  jr          $ra
    ctx->pc = 0x38BE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE50u;
        // 0x38be54: 0x8c82002c  lw          $v0, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BE58u;
label_38be58:
    // 0x38be58: 0x3e00008  jr          $ra
    ctx->pc = 0x38BE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE58u;
        // 0x38be5c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BE60u;
}
