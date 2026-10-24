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

// Function: func_002D42E0
// Address: 0x2d42e0 - 0x2d42f8
void func_002D42E0_0x2d42e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D42E0_0x2d42e0");
#endif

    ctx->pc = 0x2d42e0u;

    // 0x2d42e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d42e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D42E4u;
    {
        const bool branch_taken_0x2d42e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D42E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D42E4u;
        // 0x2d42e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d42e4) {
            ctx->pc = 0x2D42F0u;
            goto label_2d42f0;
        }
    }
    ctx->pc = 0x2D42ECu;
    // 0x2d42ec: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x2d42ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
label_2d42f0:
    // 0x2d42f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D42F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D42F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D42F8u;
}
