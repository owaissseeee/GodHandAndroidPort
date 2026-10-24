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

// Function: func_00193928
// Address: 0x193928 - 0x193948
void func_00193928_0x193928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00193928_0x193928");
#endif

    switch (ctx->pc) {
        case 0x193938u: goto label_193938;
        default: break;
    }

    ctx->pc = 0x193928u;

    // 0x193928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19392c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19392cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193930: 0xc070a74  jal         func_1C29D0
    ctx->pc = 0x193930u;
    SET_GPR_U32(ctx, 31, 0x193938u);
    ctx->pc = 0x1C29D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C29D0u, 0x193930u, 0x193938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193938u;
label_193938:
    // 0x193938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19393c: 0x3e00008  jr          $ra
    ctx->pc = 0x19393Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19393Cu;
        // 0x193940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19393Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193944u;
    // 0x193944: 0x0  nop
    ctx->pc = 0x193944u;
    // NOP
    ctx->pc = 0x193948u;
}
