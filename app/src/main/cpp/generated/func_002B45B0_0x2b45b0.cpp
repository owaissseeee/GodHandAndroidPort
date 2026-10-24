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

// Function: func_002B45B0
// Address: 0x2b45b0 - 0x2b45c8
void func_002B45B0_0x2b45b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B45B0_0x2b45b0");
#endif

    ctx->pc = 0x2b45b0u;

    // 0x2b45b0: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x2b45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x2b45b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b45b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b45b8: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B45B8u;
    {
        const bool branch_taken_0x2b45b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b45b8) {
            ctx->pc = 0x2B45BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B45B8u;
            // 0x2b45bc: 0xac8000b8  sw          $zero, 0xB8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B45C0u;
            goto label_2b45c0;
        }
    }
    ctx->pc = 0x2B45C0u;
label_2b45c0:
    // 0x2b45c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B45C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B45C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B45C8u;
}
