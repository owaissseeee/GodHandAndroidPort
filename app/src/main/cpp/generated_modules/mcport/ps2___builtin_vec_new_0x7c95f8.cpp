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
// Function: __builtin_vec_new
// Address: 0x7c95f8 - 0x7c9620
void ps2___builtin_vec_new_0x7c95f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___builtin_vec_new_0x7c95f8");
#endif

    switch (ctx->pc) {
        case 0x7c9610u: goto label_7c9610;
        default: break;
    }

    ctx->pc = 0x7c95f8u;

    // 0x7c95f8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7c95f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7c95fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c95fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c9600: 0x8c463cf0  lw          $a2, 0x3CF0($v0)
    ctx->pc = 0x7c9600u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C3CF0u));
    // 0x7c9604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c9604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c9608: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x7C9608u;
    SET_GPR_U32(ctx, 31, 0x7C9610u);
    ctx->pc = 0x7C960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C9608u;
    // 0x7c960c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x7C9608u, 0x7C9610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9610u;
label_7c9610:
    // 0x7c9610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c9610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c9614: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9614u;
        // 0x7c9618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C961Cu;
    // 0x7c961c: 0x0  nop
    ctx->pc = 0x7c961cu;
    // NOP
    ctx->pc = 0x7c9620u;
}
} // namespace gh_mcport
