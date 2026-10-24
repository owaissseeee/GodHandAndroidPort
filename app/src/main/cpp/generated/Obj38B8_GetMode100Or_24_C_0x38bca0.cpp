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

// Function: Obj38B8_GetMode100Or_24_C
// Address: 0x38bca0 - 0x38bcc0
void Obj38B8_GetMode100Or_24_C_0x38bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj38B8_GetMode100Or_24_C_0x38bca0");
#endif

    ctx->pc = 0x38bca0u;

    // 0x38bca0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38bca4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38bca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x38bca8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38BCA8u;
    {
        const bool branch_taken_0x38bca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bca8) {
            ctx->pc = 0x38BCB8u;
            goto label_38bcb8;
        }
    }
    ctx->pc = 0x38BCB0u;
    // 0x38bcb0: 0x3e00008  jr          $ra
    ctx->pc = 0x38BCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCB0u;
        // 0x38bcb4: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BCB8u;
label_38bcb8:
    // 0x38bcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x38BCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCB8u;
        // 0x38bcbc: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BCC0u;
}
