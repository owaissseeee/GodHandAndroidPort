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

// Function: func_003545D8
// Address: 0x3545d8 - 0x3545f8
void func_003545D8_0x3545d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003545D8_0x3545d8");
#endif

    switch (ctx->pc) {
        case 0x3545ecu: goto label_3545ec;
        default: break;
    }

    ctx->pc = 0x3545d8u;

    // 0x3545d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3545d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3545dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3545dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3545e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3545e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3545e4: 0xc0d30e4  jal         func_34C390
    ctx->pc = 0x3545E4u;
    SET_GPR_U32(ctx, 31, 0x3545ECu);
    ctx->pc = 0x3545E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3545E4u;
    // 0x3545e8: 0x8c851fc8  lw          $a1, 0x1FC8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C390u, 0x3545E4u, 0x3545ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3545ECu;
label_3545ec:
    // 0x3545ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3545ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3545f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3545F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3545F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545F0u;
        // 0x3545f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3545F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3545F8u;
}
