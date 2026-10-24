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

// Function: func_002D2DB0
// Address: 0x2d2db0 - 0x2d2dc8
void func_002D2DB0_0x2d2db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D2DB0_0x2d2db0");
#endif

    ctx->pc = 0x2d2db0u;

    // 0x2d2db0: 0x240300dc  addiu       $v1, $zero, 0xDC
    ctx->pc = 0x2d2db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x2d2db4: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x2d2db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2d2db8: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x2d2db8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2d2dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2DBCu;
        // 0x2d2dc0: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2DC4u;
    // 0x2d2dc4: 0x0  nop
    ctx->pc = 0x2d2dc4u;
    // NOP
    ctx->pc = 0x2d2dc8u;
}
