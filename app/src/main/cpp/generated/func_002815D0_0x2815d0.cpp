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

// Function: func_002815D0
// Address: 0x2815d0 - 0x2815e8
void func_002815D0_0x2815d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002815D0_0x2815d0");
#endif

    ctx->pc = 0x2815d0u;

    // 0x2815d0: 0x8c821560  lw          $v0, 0x1560($a0)
    ctx->pc = 0x2815d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5472)));
    // 0x2815d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2815d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2815d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2815D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2815DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815D8u;
        // 0x2815dc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2815D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2815E0u;
    // 0x2815e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2815e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2815e4: 0x0  nop
    ctx->pc = 0x2815e4u;
    // NOP
    ctx->pc = 0x2815e8u;
}
