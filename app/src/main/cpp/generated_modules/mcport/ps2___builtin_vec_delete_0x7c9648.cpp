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
// Function: __builtin_vec_delete
// Address: 0x7c9648 - 0x7c9670
void ps2___builtin_vec_delete_0x7c9648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___builtin_vec_delete_0x7c9648");
#endif

    switch (ctx->pc) {
        case 0x7c9660u: goto label_7c9660;
        default: break;
    }

    ctx->pc = 0x7c9648u;

    // 0x7c9648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c9648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c964c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x7c964cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9650: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C9650u;
    {
        const bool branch_taken_0x7c9650 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9650u;
        // 0x7c9654: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9650) {
            ctx->pc = 0x7C9660u;
            goto label_7c9660;
        }
    }
    ctx->pc = 0x7C9658u;
    // 0x7c9658: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x7C9658u;
    SET_GPR_U32(ctx, 31, 0x7C9660u);
    ctx->pc = 0x7C965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C9658u;
    // 0x7c965c: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x7C9658u, 0x7C9660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9660u;
label_7c9660:
    // 0x7c9660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c9660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c9664: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9664u;
        // 0x7c9668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C966Cu;
    // 0x7c966c: 0x0  nop
    ctx->pc = 0x7c966cu;
    // NOP
    ctx->pc = 0x7c9670u;
}
} // namespace gh_mcport
