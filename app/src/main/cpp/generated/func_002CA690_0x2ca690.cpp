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

// Function: func_002CA690
// Address: 0x2ca690 - 0x2ca6b0
void func_002CA690_0x2ca690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CA690_0x2ca690");
#endif

    switch (ctx->pc) {
        case 0x2ca6a0u: goto label_2ca6a0;
        default: break;
    }

    ctx->pc = 0x2ca690u;

    // 0x2ca690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca698: 0xc0c9770  jal         func_325DC0
    ctx->pc = 0x2CA698u;
    SET_GPR_U32(ctx, 31, 0x2CA6A0u);
    ctx->pc = 0x2CA69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA698u;
    // 0x2ca69c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325DC0u, 0x2CA698u, 0x2CA6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA6A0u;
label_2ca6a0:
    // 0x2ca6a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA6A4u;
        // 0x2ca6a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA6ACu;
    // 0x2ca6ac: 0x0  nop
    ctx->pc = 0x2ca6acu;
    // NOP
    ctx->pc = 0x2ca6b0u;
}
