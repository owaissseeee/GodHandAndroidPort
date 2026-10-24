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

// Function: func_00344E58
// Address: 0x344e58 - 0x344e88
void func_00344E58_0x344e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00344E58_0x344e58");
#endif

    ctx->pc = 0x344e58u;

    // 0x344e58: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x344e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x344e5c: 0x8486000c  lh          $a2, 0xC($a0)
    ctx->pc = 0x344e5cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x344e60: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x344e60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x344e64: 0x8483000e  lh          $v1, 0xE($a0)
    ctx->pc = 0x344e64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x344e68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x344e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x344e6c: 0xaca60014  sw          $a2, 0x14($a1)
    ctx->pc = 0x344e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 6));
    // 0x344e70: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x344e70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x344e74: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x344e74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x344e78: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x344e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x344e7c: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x344e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x344e80: 0x3e00008  jr          $ra
    ctx->pc = 0x344E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E80u;
        // 0x344e84: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344E88u;
}
