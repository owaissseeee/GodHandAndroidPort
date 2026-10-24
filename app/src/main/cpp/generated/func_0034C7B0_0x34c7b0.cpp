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

// Function: func_0034C7B0
// Address: 0x34c7b0 - 0x34c7d0
void func_0034C7B0_0x34c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034C7B0_0x34c7b0");
#endif

    ctx->pc = 0x34c7b0u;

    // 0x34c7b0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x34c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34c7b4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x34c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34c7b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c7bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34c7c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c7c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x34c7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34c7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x34C7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C7C8u;
        // 0x34c7cc: 0x8c82132c  lw          $v0, 0x132C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4908)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C7D0u;
}
