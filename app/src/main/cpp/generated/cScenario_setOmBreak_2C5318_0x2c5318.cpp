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

// Function: cScenario_setOmBreak_2C5318
// Address: 0x2c5318 - 0x2c5338
void cScenario_setOmBreak_2C5318_0x2c5318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_setOmBreak_2C5318_0x2c5318");
#endif

    switch (ctx->pc) {
        case 0x2c532cu: goto label_2c532c;
        default: break;
    }

    ctx->pc = 0x2c5318u;

    // 0x2c5318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c5318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c531c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x2c531cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x2c5320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c5320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c5324: 0xc0afb2c  jal         func_2BECB0
    ctx->pc = 0x2C5324u;
    SET_GPR_U32(ctx, 31, 0x2C532Cu);
    ctx->pc = 0x2C5328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5324u;
    // 0x2c5328: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BECB0u, 0x2C5324u, 0x2C532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C532Cu;
label_2c532c:
    // 0x2c532c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c532cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5330: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5330u;
        // 0x2c5334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5338u;
}
