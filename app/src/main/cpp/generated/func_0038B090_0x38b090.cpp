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

// Function: func_0038B090
// Address: 0x38b090 - 0x38b0b0
void func_0038B090_0x38b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038B090_0x38b090");
#endif

    switch (ctx->pc) {
        case 0x38b0a0u: goto label_38b0a0;
        default: break;
    }

    ctx->pc = 0x38b090u;

    // 0x38b090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38b094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38b094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38b098: 0xc0e30e8  jal         func_38C3A0
    ctx->pc = 0x38B098u;
    SET_GPR_U32(ctx, 31, 0x38B0A0u);
    ctx->pc = 0x38C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C3A0u, 0x38B098u, 0x38B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B0A0u;
label_38b0a0:
    // 0x38b0a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38b0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x38B0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B0A4u;
        // 0x38b0a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B0ACu;
    // 0x38b0ac: 0x0  nop
    ctx->pc = 0x38b0acu;
    // NOP
    ctx->pc = 0x38b0b0u;
}
