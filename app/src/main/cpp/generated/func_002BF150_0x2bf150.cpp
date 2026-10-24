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

// Function: func_002BF150
// Address: 0x2bf150 - 0x2bf170
void func_002BF150_0x2bf150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BF150_0x2bf150");
#endif

    switch (ctx->pc) {
        case 0x2bf160u: goto label_2bf160;
        default: break;
    }

    ctx->pc = 0x2bf150u;

    // 0x2bf150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf158: 0xc0afc5c  jal         func_2BF170
    ctx->pc = 0x2BF158u;
    SET_GPR_U32(ctx, 31, 0x2BF160u);
    ctx->pc = 0x2BF170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF170u, 0x2BF158u, 0x2BF160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF160u;
label_2bf160:
    // 0x2bf160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf164: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF164u;
        // 0x2bf168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF16Cu;
    // 0x2bf16c: 0x0  nop
    ctx->pc = 0x2bf16cu;
    // NOP
    ctx->pc = 0x2bf170u;
}
