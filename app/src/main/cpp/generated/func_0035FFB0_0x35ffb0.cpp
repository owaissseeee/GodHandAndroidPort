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

// Function: func_0035FFB0
// Address: 0x35ffb0 - 0x35ffd8
void func_0035FFB0_0x35ffb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035FFB0_0x35ffb0");
#endif

    ctx->pc = 0x35ffb0u;

    // 0x35ffb0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35FFB0u;
    {
        const bool branch_taken_0x35ffb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ffb0) {
            ctx->pc = 0x35FFD0u;
            goto label_35ffd0;
        }
    }
    ctx->pc = 0x35FFB8u;
    // 0x35ffb8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x35ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x35ffbc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x35ffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x35ffc0: 0x2463e800  addiu       $v1, $v1, -0x1800
    ctx->pc = 0x35ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961152));
    // 0x35ffc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EE800u));
    // 0x35ffc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35ffcc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35ffccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EE800u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE800u, _value); } while (0);
label_35ffd0:
    // 0x35ffd0: 0x3e00008  jr          $ra
    ctx->pc = 0x35FFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FFD8u;
}
