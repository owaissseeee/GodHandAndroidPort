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

// Function: func_0033FB48
// Address: 0x33fb48 - 0x33fb60
void func_0033FB48_0x33fb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033FB48_0x33fb48");
#endif

    ctx->pc = 0x33fb48u;

    // 0x33fb48: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x33fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x33fb4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33fb50: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x33FB50u;
    {
        const bool branch_taken_0x33fb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x33fb50) {
            ctx->pc = 0x33FB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FB50u;
            // 0x33fb54: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FB58u;
            goto label_33fb58;
        }
    }
    ctx->pc = 0x33FB58u;
label_33fb58:
    // 0x33fb58: 0x3e00008  jr          $ra
    ctx->pc = 0x33FB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FB60u;
}
