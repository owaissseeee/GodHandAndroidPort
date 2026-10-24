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

// Function: func_00155D98
// Address: 0x155d98 - 0x155dc8
void func_00155D98_0x155d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00155D98_0x155d98");
#endif

    ctx->pc = 0x155d98u;

    // 0x155d98: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x155d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x155d9c: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x155d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x155da0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x155da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155da4: 0x3e00008  jr          $ra
    ctx->pc = 0x155DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DA4u;
        // 0x155da8: 0xfc850050  sd          $a1, 0x50($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155DACu;
    // 0x155dac: 0x0  nop
    ctx->pc = 0x155dacu;
    // NOP
    // 0x155db0: 0x0  nop
    ctx->pc = 0x155db0u;
    // NOP
    // 0x155db4: 0x0  nop
    ctx->pc = 0x155db4u;
    // NOP
    // 0x155db8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x155db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x155dbc: 0x0  nop
    ctx->pc = 0x155dbcu;
    // NOP
    // 0x155dc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x155dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x155dc4: 0x0  nop
    ctx->pc = 0x155dc4u;
    // NOP
    ctx->pc = 0x155dc8u;
}
