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

// Function: func_0031BD78
// Address: 0x31bd78 - 0x31bd88
void func_0031BD78_0x31bd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031BD78_0x31bd78");
#endif

    ctx->pc = 0x31bd78u;

    // 0x31bd78: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x31bd78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x31bd7c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x31bd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31bd80: 0x3e00008  jr          $ra
    ctx->pc = 0x31BD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD80u;
        // 0x31bd84: 0xa0800160  sb          $zero, 0x160($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 352), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BD88u;
}
