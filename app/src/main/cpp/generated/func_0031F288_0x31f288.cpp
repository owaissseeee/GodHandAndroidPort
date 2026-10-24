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

// Function: func_0031F288
// Address: 0x31f288 - 0x31f2a8
void func_0031F288_0x31f288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031F288_0x31f288");
#endif

    switch (ctx->pc) {
        case 0x31f298u: goto label_31f298;
        default: break;
    }

    ctx->pc = 0x31f288u;

    // 0x31f288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31f288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31f28c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f290: 0xc0c7b84  jal         func_31EE10
    ctx->pc = 0x31F290u;
    SET_GPR_U32(ctx, 31, 0x31F298u);
    ctx->pc = 0x31EE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE10u, 0x31F290u, 0x31F298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F298u;
label_31f298:
    // 0x31f298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f29c: 0x3e00008  jr          $ra
    ctx->pc = 0x31F29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F29Cu;
        // 0x31f2a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F2A4u;
    // 0x31f2a4: 0x0  nop
    ctx->pc = 0x31f2a4u;
    // NOP
    ctx->pc = 0x31f2a8u;
}
