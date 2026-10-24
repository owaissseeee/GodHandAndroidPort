#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __builtin_delete
// Address: 0x7c9620 - 0x7c9648
void ps2___builtin_delete_0x7c9620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___builtin_delete_0x7c9620");
#endif

    switch (ctx->pc) {
        case 0x7c9638u: goto label_7c9638;
        default: break;
    }

    ctx->pc = 0x7c9620u;

    // 0x7c9620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c9620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c9624: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x7c9624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9628: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C9628u;
    {
        const bool branch_taken_0x7c9628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9628u;
        // 0x7c962c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9628) {
            ctx->pc = 0x7C9638u;
            goto label_7c9638;
        }
    }
    ctx->pc = 0x7C9630u;
    // 0x7c9630: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x7C9630u;
    SET_GPR_U32(ctx, 31, 0x7C9638u);
    ctx->pc = 0x7C9634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C9630u;
    // 0x7c9634: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x7C9630u, 0x7C9638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9638u;
label_7c9638:
    // 0x7c9638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c9638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c963c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C963Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C963Cu;
        // 0x7c9640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C963Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9644u;
    // 0x7c9644: 0x0  nop
    ctx->pc = 0x7c9644u;
    // NOP
    ctx->pc = 0x7c9648u;
}
} // namespace gh_mcport
