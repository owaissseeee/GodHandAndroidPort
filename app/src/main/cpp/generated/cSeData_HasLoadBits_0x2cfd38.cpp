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

// Function: cSeData_HasLoadBits
// Address: 0x2cfd38 - 0x2cfd50
void cSeData_HasLoadBits_0x2cfd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_HasLoadBits_0x2cfd38");
#endif

    ctx->pc = 0x2cfd38u;

    // 0x2cfd38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2cfd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cfd3c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2cfd3cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2cfd40: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2cfd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2cfd44: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD44u;
        // 0x2cfd48: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFD4Cu;
    // 0x2cfd4c: 0x0  nop
    ctx->pc = 0x2cfd4cu;
    // NOP
    ctx->pc = 0x2cfd50u;
}
