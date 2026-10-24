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

// Function: func_0035B0D8
// Address: 0x35b0d8 - 0x35b0e8
void func_0035B0D8_0x35b0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035B0D8_0x35b0d8");
#endif

    ctx->pc = 0x35b0d8u;

    // 0x35b0d8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x35b0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x35b0dc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x35b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x35b0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x35B0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B0E0u;
        // 0x35b0e4: 0xac850d30  sw          $a1, 0xD30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3376), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B0E8u;
}
