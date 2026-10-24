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

// Function: func_001D6C70
// Address: 0x1d6c70 - 0x1d6c90
void func_001D6C70_0x1d6c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D6C70_0x1d6c70");
#endif

    switch (ctx->pc) {
        case 0x1d6c84u: goto label_1d6c84;
        default: break;
    }

    ctx->pc = 0x1d6c70u;

    // 0x1d6c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d6c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6c74: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d6c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6c7c: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6C7Cu;
    SET_GPR_U32(ctx, 31, 0x1D6C84u);
    ctx->pc = 0x1D6C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6C7Cu;
    // 0x1d6c80: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6C7Cu, 0x1D6C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C84u;
label_1d6c84:
    // 0x1d6c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6c88: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C88u;
        // 0x1d6c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6C90u;
}
