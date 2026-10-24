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

// Function: func_0039ADA8
// Address: 0x39ada8 - 0x39adc0
void func_0039ADA8_0x39ada8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0039ADA8_0x39ada8");
#endif

    ctx->pc = 0x39ada8u;

    // 0x39ada8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x39ada8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x39adac: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x39adacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x39adb0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x39adb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x39adb4: 0x3e00008  jr          $ra
    ctx->pc = 0x39ADB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ADB4u;
        // 0x39adb8: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39ADB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39ADBCu;
    // 0x39adbc: 0x0  nop
    ctx->pc = 0x39adbcu;
    // NOP
    ctx->pc = 0x39adc0u;
}
