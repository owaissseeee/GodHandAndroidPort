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

// Function: func_002ABC18
// Address: 0x2abc18 - 0x2abc30
void func_002ABC18_0x2abc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002ABC18_0x2abc18");
#endif

    ctx->pc = 0x2abc18u;

    // 0x2abc18: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2abc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2abc1c: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x2abc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x2abc20: 0xa4a000a0  sh          $zero, 0xA0($a1)
    ctx->pc = 0x2abc20u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 0));
    // 0x2abc24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2abc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2abc28: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC28u;
        // 0x2abc2c: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABC30u;
}
