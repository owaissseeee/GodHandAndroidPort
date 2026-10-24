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

// Function: func_002AE3D0
// Address: 0x2ae3d0 - 0x2ae3f0
void func_002AE3D0_0x2ae3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AE3D0_0x2ae3d0");
#endif

    ctx->pc = 0x2ae3d0u;

    // 0x2ae3d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ae3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ae3d4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2ae3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae3d8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2ae3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2ae3dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ae3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3E0u;
        // 0x2ae3e4: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE3E8u;
    // 0x2ae3e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ae3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ae3ec: 0x0  nop
    ctx->pc = 0x2ae3ecu;
    // NOP
    ctx->pc = 0x2ae3f0u;
}
