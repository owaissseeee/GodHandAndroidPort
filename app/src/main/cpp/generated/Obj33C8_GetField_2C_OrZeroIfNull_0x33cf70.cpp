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

// Function: Obj33C8_GetField_2C_OrZeroIfNull
// Address: 0x33cf70 - 0x33cf88
void Obj33C8_GetField_2C_OrZeroIfNull_0x33cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj33C8_GetField_2C_OrZeroIfNull_0x33cf70");
#endif

    ctx->pc = 0x33cf70u;

    // 0x33cf70: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33CF70u;
    {
        const bool branch_taken_0x33cf70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF70u;
        // 0x33cf74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cf70) {
            ctx->pc = 0x33CF7Cu;
            goto label_33cf7c;
        }
    }
    ctx->pc = 0x33CF78u;
    // 0x33cf78: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x33cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_33cf7c:
    // 0x33cf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x33CF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CF84u;
    // 0x33cf84: 0x0  nop
    ctx->pc = 0x33cf84u;
    // NOP
    ctx->pc = 0x33cf88u;
}
