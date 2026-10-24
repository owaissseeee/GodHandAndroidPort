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

// Function: func_002C0E68
// Address: 0x2c0e68 - 0x2c0e78
void func_002C0E68_0x2c0e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C0E68_0x2c0e68");
#endif

    ctx->pc = 0x2c0e68u;

    // 0x2c0e68: 0x90820034  lbu         $v0, 0x34($a0)
    ctx->pc = 0x2c0e68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2c0e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E6Cu;
        // 0x2c0e70: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0E74u;
    // 0x2c0e74: 0x0  nop
    ctx->pc = 0x2c0e74u;
    // NOP
    ctx->pc = 0x2c0e78u;
}
