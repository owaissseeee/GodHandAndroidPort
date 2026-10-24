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

// Function: func_0033FB00
// Address: 0x33fb00 - 0x33fb20
void func_0033FB00_0x33fb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033FB00_0x33fb00");
#endif

    ctx->pc = 0x33fb00u;

    // 0x33fb00: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x33fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x33fb04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33FB04u;
    {
        const bool branch_taken_0x33fb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB04u;
        // 0x33fb08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fb04) {
            ctx->pc = 0x33FB14u;
            goto label_33fb14;
        }
    }
    ctx->pc = 0x33FB0Cu;
    // 0x33fb0c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x33fb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x33fb10: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x33fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_33fb14:
    // 0x33fb14: 0x3e00008  jr          $ra
    ctx->pc = 0x33FB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FB1Cu;
    // 0x33fb1c: 0x0  nop
    ctx->pc = 0x33fb1cu;
    // NOP
    ctx->pc = 0x33fb20u;
}
