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

// Function: func_002D36E8
// Address: 0x2d36e8 - 0x2d3710
void func_002D36E8_0x2d36e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D36E8_0x2d36e8");
#endif

    ctx->pc = 0x2d36e8u;

    // 0x2d36e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d36e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d36ec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2d36ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2d36f0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2d36f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2d36f4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2d36f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2d36f8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2d36f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2d36fc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2d36fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2d3700: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3700u;
        // 0x2d3704: 0xac8000a8  sw          $zero, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3708u;
    // 0x2d3708: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d3708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d370c: 0x0  nop
    ctx->pc = 0x2d370cu;
    // NOP
    ctx->pc = 0x2d3710u;
}
