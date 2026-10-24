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

// Function: func_0036CB98
// Address: 0x36cb98 - 0x36cbc0
void func_0036CB98_0x36cb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CB98_0x36cb98");
#endif

    ctx->pc = 0x36cb98u;

    // 0x36cb98: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36CB98u;
    {
        const bool branch_taken_0x36cb98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cb98) {
            ctx->pc = 0x36CBB8u;
            goto label_36cbb8;
        }
    }
    ctx->pc = 0x36CBA0u;
    // 0x36cba0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36cba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x36cba4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x36cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x36cba8: 0x24631ec8  addiu       $v1, $v1, 0x1EC8
    ctx->pc = 0x36cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7880));
    // 0x36cbac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F1EC8u));
    // 0x36cbb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x36cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x36cbb4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36cbb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F1EC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F1EC8u, _value); } while (0);
label_36cbb8:
    // 0x36cbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x36CBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CBC0u;
}
