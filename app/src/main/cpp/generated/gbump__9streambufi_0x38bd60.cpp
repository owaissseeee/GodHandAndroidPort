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

// Function: gbump__9streambufi
// Address: 0x38bd60 - 0x38bd90
void gbump__9streambufi_0x38bd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gbump__9streambufi_0x38bd60");
#endif

    ctx->pc = 0x38bd60u;

    // 0x38bd60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38bd64: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38bd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x38bd68: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x38BD68u;
    {
        const bool branch_taken_0x38bd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bd68) {
            ctx->pc = 0x38BD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38BD68u;
            // 0x38bd6c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38BD80u;
            goto label_38bd80;
        }
    }
    ctx->pc = 0x38BD70u;
    // 0x38bd70: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x38bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x38bd74: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x38bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x38bd78: 0x3e00008  jr          $ra
    ctx->pc = 0x38BD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BD78u;
        // 0x38bd7c: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BD80u;
label_38bd80:
    // 0x38bd80: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x38bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x38bd84: 0x3e00008  jr          $ra
    ctx->pc = 0x38BD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BD84u;
        // 0x38bd88: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BD8Cu;
    // 0x38bd8c: 0x0  nop
    ctx->pc = 0x38bd8cu;
    // NOP
    ctx->pc = 0x38bd90u;
}
