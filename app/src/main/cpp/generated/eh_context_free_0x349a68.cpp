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

// Function: eh_context_free
// Address: 0x349a68 - 0x349aa0
void eh_context_free_0x349a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eh_context_free_0x349a68");
#endif

    ctx->pc = 0x349a68u;

    // 0x349a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349a6c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x349A6Cu;
    {
        const bool branch_taken_0x349a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x349A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A6Cu;
        // 0x349a70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349a6c) {
            ctx->pc = 0x349A80u;
            goto label_349a80;
        }
    }
    ctx->pc = 0x349A74u;
    // 0x349a74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349a78: 0x80ca320  j           func_328C80
    ctx->pc = 0x349A78u;
    ctx->pc = 0x349A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349A78u;
    // 0x349a7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C80u, 0x349A78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x349A80u;
label_349a80:
    // 0x349a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349a84: 0x3e00008  jr          $ra
    ctx->pc = 0x349A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A84u;
        // 0x349a88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349A8Cu;
    // 0x349a8c: 0x0  nop
    ctx->pc = 0x349a8cu;
    // NOP
    // 0x349a90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x349a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x349a94: 0x0  nop
    ctx->pc = 0x349a94u;
    // NOP
    // 0x349a98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x349a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x349a9c: 0x0  nop
    ctx->pc = 0x349a9cu;
    // NOP
    ctx->pc = 0x349aa0u;
}
