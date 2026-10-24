#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: Main__15cR301CannonBall
// Address: 0x79b320 - 0x79b340
void Main__15cR301CannonBall_0x79b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Main__15cR301CannonBall_0x79b320");
#endif

    switch (ctx->pc) {
        case 0x79b330u: goto label_79b330;
        default: break;
    }

    ctx->pc = 0x79b320u;

    // 0x79b320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79b320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79b324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b328: 0xc1e6cd0  jal         func_79B340
    ctx->pc = 0x79B328u;
    SET_GPR_U32(ctx, 31, 0x79B330u);
    ctx->pc = 0x79B340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B340u, 0x79B328u, 0x79B330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B330u;
label_79b330:
    // 0x79b330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b334: 0x3e00008  jr          $ra
    ctx->pc = 0x79B334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B334u;
        // 0x79b338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B33Cu;
    // 0x79b33c: 0x0  nop
    ctx->pc = 0x79b33cu;
    // NOP
    ctx->pc = 0x79b340u;
}
} // namespace gh_r301
