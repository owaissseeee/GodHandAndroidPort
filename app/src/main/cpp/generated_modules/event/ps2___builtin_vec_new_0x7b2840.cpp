#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: __builtin_vec_new
// Address: 0x7b2840 - 0x7b2868
void ps2___builtin_vec_new_0x7b2840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___builtin_vec_new_0x7b2840");
#endif

    switch (ctx->pc) {
        case 0x7b2858u: goto label_7b2858;
        default: break;
    }

    ctx->pc = 0x7b2840u;

    // 0x7b2840: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7b2840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7b2844: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7b2844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7b2848: 0x8c463cf0  lw          $a2, 0x3CF0($v0)
    ctx->pc = 0x7b2848u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C3CF0u));
    // 0x7b284c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b284cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b2850: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x7B2850u;
    SET_GPR_U32(ctx, 31, 0x7B2858u);
    ctx->pc = 0x7B2854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2850u;
    // 0x7b2854: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x7B2850u, 0x7B2858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2858u;
label_7b2858:
    // 0x7b2858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b2858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b285c: 0x3e00008  jr          $ra
    ctx->pc = 0x7B285Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B2860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B285Cu;
        // 0x7b2860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B285Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B2864u;
    // 0x7b2864: 0x0  nop
    ctx->pc = 0x7b2864u;
    // NOP
    ctx->pc = 0x7b2868u;
}
} // namespace gh_event
