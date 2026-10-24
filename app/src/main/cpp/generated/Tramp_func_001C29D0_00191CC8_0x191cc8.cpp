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

// Function: Tramp_func_001C29D0_00191CC8
// Address: 0x191cc8 - 0x191ce8
void Tramp_func_001C29D0_00191CC8_0x191cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001C29D0_00191CC8_0x191cc8");
#endif

    switch (ctx->pc) {
        case 0x191cd8u: goto label_191cd8;
        default: break;
    }

    ctx->pc = 0x191cc8u;

    // 0x191cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191ccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191cd0: 0xc070a74  jal         func_1C29D0
    ctx->pc = 0x191CD0u;
    SET_GPR_U32(ctx, 31, 0x191CD8u);
    ctx->pc = 0x1C29D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C29D0u, 0x191CD0u, 0x191CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191CD8u;
label_191cd8:
    // 0x191cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x191CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CDCu;
        // 0x191ce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191CE4u;
    // 0x191ce4: 0x0  nop
    ctx->pc = 0x191ce4u;
    // NOP
    ctx->pc = 0x191ce8u;
}
