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

// Function: cBgmData_IsEmpty
// Address: 0x2cff78 - 0x2cff90
void cBgmData_IsEmpty_0x2cff78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cBgmData_IsEmpty_0x2cff78");
#endif

    ctx->pc = 0x2cff78u;

    // 0x2cff78: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2cff78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cff7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF7Cu;
        // 0x2cff80: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFF84u;
    // 0x2cff84: 0x0  nop
    ctx->pc = 0x2cff84u;
    // NOP
    // 0x2cff88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2cff88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cff8c: 0x0  nop
    ctx->pc = 0x2cff8cu;
    // NOP
    ctx->pc = 0x2cff90u;
}
