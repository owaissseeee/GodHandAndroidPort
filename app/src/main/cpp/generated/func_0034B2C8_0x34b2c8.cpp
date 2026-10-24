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

// Function: func_0034B2C8
// Address: 0x34b2c8 - 0x34b2f0
void func_0034B2C8_0x34b2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034B2C8_0x34b2c8");
#endif

    switch (ctx->pc) {
        case 0x34b2dcu: goto label_34b2dc;
        default: break;
    }

    ctx->pc = 0x34b2c8u;

    // 0x34b2c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b2cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34b2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34b2d0: 0x8c822004  lw          $v0, 0x2004($a0)
    ctx->pc = 0x34b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x34b2d4: 0xc0ca7aa  jal         func_329EA8
    ctx->pc = 0x34B2D4u;
    SET_GPR_U32(ctx, 31, 0x34B2DCu);
    ctx->pc = 0x34B2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B2D4u;
    // 0x34b2d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329EA8u, 0x34B2D4u, 0x34B2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B2DCu;
label_34b2dc:
    // 0x34b2dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34b2dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b2e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34b2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x34B2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B2E4u;
        // 0x34b2e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B2ECu;
    // 0x34b2ec: 0x0  nop
    ctx->pc = 0x34b2ecu;
    // NOP
    ctx->pc = 0x34b2f0u;
}
