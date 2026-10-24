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

// Function: func_00306A88
// Address: 0x306a88 - 0x306aa8
void func_00306A88_0x306a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00306A88_0x306a88");
#endif

    switch (ctx->pc) {
        case 0x306a98u: goto label_306a98;
        default: break;
    }

    ctx->pc = 0x306a88u;

    // 0x306a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x306a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x306a8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x306a90: 0xc0c1aaa  jal         func_306AA8
    ctx->pc = 0x306A90u;
    SET_GPR_U32(ctx, 31, 0x306A98u);
    ctx->pc = 0x306AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306AA8u, 0x306A90u, 0x306A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A98u;
label_306a98:
    // 0x306a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x306A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A9Cu;
        // 0x306aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306AA4u;
    // 0x306aa4: 0x0  nop
    ctx->pc = 0x306aa4u;
    // NOP
    ctx->pc = 0x306aa8u;
}
