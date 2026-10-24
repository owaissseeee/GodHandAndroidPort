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
// Function: _$_15cR301CannonBall
// Address: 0x79b0f0 - 0x79b118
void ps2____15cR301CannonBall_0x79b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____15cR301CannonBall_0x79b0f0");
#endif

    switch (ctx->pc) {
        case 0x79b108u: goto label_79b108;
        default: break;
    }

    ctx->pc = 0x79b0f0u;

    // 0x79b0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79b0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79b0f4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x79b0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x79b0f8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B0F8u;
    {
        const bool branch_taken_0x79b0f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0F8u;
        // 0x79b0fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0f8) {
            ctx->pc = 0x79B108u;
            goto label_79b108;
        }
    }
    ctx->pc = 0x79B100u;
    // 0x79b100: 0xc1e6474  jal         func_7991D0
    ctx->pc = 0x79B100u;
    SET_GPR_U32(ctx, 31, 0x79B108u);
    ctx->pc = 0x7991D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7991D0u, 0x79B100u, 0x79B108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B108u;
label_79b108:
    // 0x79b108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b10c: 0x3e00008  jr          $ra
    ctx->pc = 0x79B10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B10Cu;
        // 0x79b110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B114u;
    // 0x79b114: 0x0  nop
    ctx->pc = 0x79b114u;
    // NOP
    ctx->pc = 0x79b118u;
}
} // namespace gh_r301
