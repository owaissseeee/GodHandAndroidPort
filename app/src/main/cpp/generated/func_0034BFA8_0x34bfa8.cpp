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

// Function: func_0034BFA8
// Address: 0x34bfa8 - 0x34bfc8
void func_0034BFA8_0x34bfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034BFA8_0x34bfa8");
#endif

    ctx->pc = 0x34bfa8u;

    // 0x34bfa8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x34bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x34bfac: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x34bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x34bfb0: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x34bfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x34bfb4: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x34bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x34bfb8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x34bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x34bfbc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x34bfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x34bfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x34BFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BFC0u;
        // 0x34bfc4: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BFC8u;
}
