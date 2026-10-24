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

// Function: func_0034C7D0
// Address: 0x34c7d0 - 0x34c7f0
void func_0034C7D0_0x34c7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034C7D0_0x34c7d0");
#endif

    ctx->pc = 0x34c7d0u;

    // 0x34c7d0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x34c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34c7d4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x34c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34c7d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c7dc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34c7e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c7e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x34c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34c7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x34C7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C7E8u;
        // 0x34c7ec: 0x8c821344  lw          $v0, 0x1344($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C7F0u;
}
