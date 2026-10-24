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

// Function: func_0038B440
// Address: 0x38b440 - 0x38b460
void func_0038B440_0x38b440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038B440_0x38b440");
#endif

    switch (ctx->pc) {
        case 0x38b450u: goto label_38b450;
        default: break;
    }

    ctx->pc = 0x38b440u;

    // 0x38b440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38b440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38b444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38b444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38b448: 0xc0e38fc  jal         func_38E3F0
    ctx->pc = 0x38B448u;
    SET_GPR_U32(ctx, 31, 0x38B450u);
    ctx->pc = 0x38E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E3F0u, 0x38B448u, 0x38B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B450u;
label_38b450:
    // 0x38b450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38b450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b454: 0x3e00008  jr          $ra
    ctx->pc = 0x38B454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B454u;
        // 0x38b458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B45Cu;
    // 0x38b45c: 0x0  nop
    ctx->pc = 0x38b45cu;
    // NOP
    ctx->pc = 0x38b460u;
}
