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

// Function: EIntr
// Address: 0x3b63f0 - 0x3b6408
void EIntr_0x3b63f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EIntr_0x3b63f0");
#endif

    ctx->pc = 0x3b63f0u;

    // 0x3b63f0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3b63f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3b63f4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3b63f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3b63f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3b63f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3b63fc: 0x42000038  ei
    ctx->pc = 0x3b63fcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3b6400: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6400u;
        // 0x3b6404: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6408u;
}
