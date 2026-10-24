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

// Function: func_003A7C28
// Address: 0x3a7c28 - 0x3a7c48
void func_003A7C28_0x3a7c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A7C28_0x3a7c28");
#endif

    switch (ctx->pc) {
        case 0x3a7c38u: goto label_3a7c38;
        default: break;
    }

    ctx->pc = 0x3a7c28u;

    // 0x3a7c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a7c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a7c2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a7c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a7c30: 0xc0ea3f8  jal         func_3A8FE0
    ctx->pc = 0x3A7C30u;
    SET_GPR_U32(ctx, 31, 0x3A7C38u);
    ctx->pc = 0x3A7C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7C30u;
    // 0x3a7c34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8FE0u, 0x3A7C30u, 0x3A7C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7C38u;
label_3a7c38:
    // 0x3a7c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a7c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7C3Cu;
        // 0x3a7c40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7C44u;
    // 0x3a7c44: 0x0  nop
    ctx->pc = 0x3a7c44u;
    // NOP
    ctx->pc = 0x3a7c48u;
}
