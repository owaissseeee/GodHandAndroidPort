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

// Function: BlackJack_ClearBlackJackCamera
// Address: 0x1d4578 - 0x1d45a0
void BlackJack_ClearBlackJackCamera_0x1d4578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_ClearBlackJackCamera_0x1d4578");
#endif

    switch (ctx->pc) {
        case 0x1d4590u: goto label_1d4590;
        default: break;
    }

    ctx->pc = 0x1d4578u;

    // 0x1d4578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d4578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d457c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d457cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1d4580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4588: 0xc04e350  jal         func_138D40
    ctx->pc = 0x1D4588u;
    SET_GPR_U32(ctx, 31, 0x1D4590u);
    ctx->pc = 0x1D458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4588u;
    // 0x1d458c: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D40u, 0x1D4588u, 0x1D4590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4590u;
label_1d4590:
    // 0x1d4590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4594: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4594u;
        // 0x1d4598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D459Cu;
    // 0x1d459c: 0x0  nop
    ctx->pc = 0x1d459cu;
    // NOP
    ctx->pc = 0x1d45a0u;
}
