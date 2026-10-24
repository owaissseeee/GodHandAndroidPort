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

// Function: func_0033B010
// Address: 0x33b010 - 0x33b050
void func_0033B010_0x33b010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033B010_0x33b010");
#endif

    ctx->pc = 0x33b010u;

    // 0x33b010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33b014: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x33b014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x33b018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33b018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33b01c: 0x24638dcc  addiu       $v1, $v1, -0x7234
    ctx->pc = 0x33b01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938060));
    // 0x33b020: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33b020u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E8DCCu));
    // 0x33b024: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33b024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33b028: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33B028u;
    {
        const bool branch_taken_0x33b028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B028u;
        // 0x33b02c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b028) {
            ctx->pc = 0x33B040u;
            goto label_33b040;
        }
    }
    ctx->pc = 0x33B030u;
    // 0x33b030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b034: 0x80cc97e  j           func_3325F8
    ctx->pc = 0x33B034u;
    ctx->pc = 0x33B038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B034u;
    // 0x33b038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3325F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3325F8u, 0x33B034u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33B03Cu;
    // 0x33b03c: 0x0  nop
    ctx->pc = 0x33b03cu;
    // NOP
label_33b040:
    // 0x33b040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b044: 0x3e00008  jr          $ra
    ctx->pc = 0x33B044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B044u;
        // 0x33b048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B04Cu;
    // 0x33b04c: 0x0  nop
    ctx->pc = 0x33b04cu;
    // NOP
    ctx->pc = 0x33b050u;
}
