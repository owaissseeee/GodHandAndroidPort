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

// Function: cSeData_Init
// Address: 0x2cf2d0 - 0x2cf310
void cSeData_Init_0x2cf2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_Init_0x2cf2d0");
#endif

    ctx->pc = 0x2cf2d0u;

    // 0x2cf2d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cf2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cf2d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cf2d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf2d8: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x2cf2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x2cf2dc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2cf2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2cf2e0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2cf2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2cf2e4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2cf2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2cf2e8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2cf2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2cf2ec: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2cf2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2cf2f0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2cf2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2cf2f4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2cf2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2cf2f8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2cf2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2cf2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF2FCu;
        // 0x2cf300: 0xac830028  sw          $v1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF304u;
    // 0x2cf304: 0x0  nop
    ctx->pc = 0x2cf304u;
    // NOP
    // 0x2cf308: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2cf308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cf30c: 0x0  nop
    ctx->pc = 0x2cf30cu;
    // NOP
    ctx->pc = 0x2cf310u;
}
