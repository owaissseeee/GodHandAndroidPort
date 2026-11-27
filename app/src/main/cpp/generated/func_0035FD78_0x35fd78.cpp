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

// Function: func_0035FD78
// Address: 0x35fd78 - 0x35fd98
void func_0035FD78_0x35fd78(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035FD78_0x35fd78");
#endif


    // 0x35fd78: 0x3e00008  jr          $ra
    ctx->pc = 0x35FD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD78u;
        // 0x35fd7c: 0x8c820064  lw          $v0, 0x64($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x35fd80: 0x27bd0020  addiu       $sp, $sp, 0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35fd84: 0x0  nop
    // NOP
    // 0x35fd88: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x35fd88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x35fd8c: 0x0  nop
    // NOP
    // 0x35fd90: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x35fd90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x35fd94: 0x0  nop
    // NOP
    ctx->pc = 0x35fd98u;
}