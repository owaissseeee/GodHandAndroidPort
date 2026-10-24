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

// Function: func_0036A3C0
// Address: 0x36a3c0 - 0x36a3e8
void func_0036A3C0_0x36a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036A3C0_0x36a3c0");
#endif

    ctx->pc = 0x36a3c0u;

    // 0x36a3c0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A3C0u;
    {
        const bool branch_taken_0x36a3c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A3C0u;
        // 0x36a3c4: 0x248403ec  addiu       $a0, $a0, 0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1004));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a3c0) {
            ctx->pc = 0x36A3D0u;
            goto label_36a3d0;
        }
    }
    ctx->pc = 0x36A3C8u;
    // 0x36a3c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36a3cc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x36a3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_36a3d0:
    // 0x36a3d0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A3D0u;
    {
        const bool branch_taken_0x36a3d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a3d0) {
            ctx->pc = 0x36A3E0u;
            goto label_36a3e0;
        }
    }
    ctx->pc = 0x36A3D8u;
    // 0x36a3d8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x36a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36a3dc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x36a3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_36a3e0:
    // 0x36a3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x36A3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A3E8u;
}
