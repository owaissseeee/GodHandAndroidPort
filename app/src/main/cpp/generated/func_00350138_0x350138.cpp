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

// Function: func_00350138
// Address: 0x350138 - 0x350150
void func_00350138_0x350138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00350138_0x350138");
#endif

    ctx->pc = 0x350138u;

    // 0x350138: 0x8c831f7c  lw          $v1, 0x1F7C($a0)
    ctx->pc = 0x350138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8060)));
    // 0x35013c: 0x3e00008  jr          $ra
    ctx->pc = 0x35013Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35013Cu;
        // 0x350140: 0x8c620020  lw          $v0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35013Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350144u;
    // 0x350144: 0x0  nop
    ctx->pc = 0x350144u;
    // NOP
    // 0x350148: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x350148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35014c: 0x0  nop
    ctx->pc = 0x35014cu;
    // NOP
    ctx->pc = 0x350150u;
}
