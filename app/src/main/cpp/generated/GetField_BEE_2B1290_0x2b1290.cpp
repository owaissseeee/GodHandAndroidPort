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

// Function: GetField_BEE_2B1290
// Address: 0x2b1290 - 0x2b12a0
void GetField_BEE_2B1290_0x2b1290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetField_BEE_2B1290_0x2b1290");
#endif

    ctx->pc = 0x2b1290u;

    // 0x2b1290: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b1290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b1294: 0x8c4323a4  lw          $v1, 0x23A4($v0)
    ctx->pc = 0x2b1294u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x2b1298: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1298u;
        // 0x2b129c: 0x94620bee  lhu         $v0, 0xBEE($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3054)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B12A0u;
}
