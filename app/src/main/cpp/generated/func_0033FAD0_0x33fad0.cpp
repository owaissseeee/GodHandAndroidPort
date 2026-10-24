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

// Function: func_0033FAD0
// Address: 0x33fad0 - 0x33fb00
void func_0033FAD0_0x33fad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033FAD0_0x33fad0");
#endif

    ctx->pc = 0x33fad0u;

    // 0x33fad0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x33fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x33fad4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33FAD4u;
    {
        const bool branch_taken_0x33fad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FAD4u;
        // 0x33fad8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fad4) {
            ctx->pc = 0x33FAF8u;
            goto label_33faf8;
        }
    }
    ctx->pc = 0x33FADCu;
    // 0x33fadc: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x33fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x33fae0: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x33fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x33fae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fae8: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x33fae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x33faec: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x33faecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x33faf0: 0x3e00008  jr          $ra
    ctx->pc = 0x33FAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FAF0u;
        // 0x33faf4: 0xac870020  sw          $a3, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FAF8u;
label_33faf8:
    // 0x33faf8: 0x3e00008  jr          $ra
    ctx->pc = 0x33FAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FAF8u;
        // 0x33fafc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FB00u;
}
