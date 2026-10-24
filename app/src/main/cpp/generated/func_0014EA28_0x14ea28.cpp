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

// Function: func_0014EA28
// Address: 0x14ea28 - 0x14ea50
void func_0014EA28_0x14ea28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014EA28_0x14ea28");
#endif

    switch (ctx->pc) {
        case 0x14ea44u: goto label_14ea44;
        default: break;
    }

    ctx->pc = 0x14ea28u;

    // 0x14ea28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14ea28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14ea2c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x14ea30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ea30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ea34: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x14ea34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea38: 0x2442ebe8  addiu       $v0, $v0, -0x1418
    ctx->pc = 0x14ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962152));
    // 0x14ea3c: 0xc053974  jal         func_14E5D0
    ctx->pc = 0x14EA3Cu;
    SET_GPR_U32(ctx, 31, 0x14EA44u);
    ctx->pc = 0x14EA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA3Cu;
    // 0x14ea40: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E5D0u, 0x14EA3Cu, 0x14EA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA44u;
label_14ea44:
    // 0x14ea44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ea44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ea48: 0x3e00008  jr          $ra
    ctx->pc = 0x14EA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA48u;
        // 0x14ea4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EA50u;
}
