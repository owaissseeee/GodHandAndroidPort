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

// Function: func_00345D10
// Address: 0x345d10 - 0x345d40
void func_00345D10_0x345d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00345D10_0x345d10");
#endif

    ctx->pc = 0x345d10u;

    // 0x345d10: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x345d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x345d14: 0x3e00008  jr          $ra
    ctx->pc = 0x345D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345D14u;
        // 0x345d18: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345D1Cu;
    // 0x345d1c: 0x0  nop
    ctx->pc = 0x345d1cu;
    // NOP
    // 0x345d20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x345d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x345d24: 0x0  nop
    ctx->pc = 0x345d24u;
    // NOP
    // 0x345d28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x345d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x345d2c: 0x0  nop
    ctx->pc = 0x345d2cu;
    // NOP
    // 0x345d30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x345d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x345d34: 0x0  nop
    ctx->pc = 0x345d34u;
    // NOP
    // 0x345d38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x345d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x345d3c: 0x0  nop
    ctx->pc = 0x345d3cu;
    // NOP
    ctx->pc = 0x345d40u;
}
