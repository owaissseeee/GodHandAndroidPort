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

// Function: cur_ptr__7filebuf
// Address: 0x38b810 - 0x38b858
void cur_ptr__7filebuf_0x38b810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cur_ptr__7filebuf_0x38b810");
#endif

    ctx->pc = 0x38b810u;

    // 0x38b810: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x38b810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38b814: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x38b814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x38b818: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x38B818u;
    {
        const bool branch_taken_0x38b818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b818) {
            ctx->pc = 0x38B81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B818u;
            // 0x38b81c: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B824u;
            goto label_38b824;
        }
    }
    ctx->pc = 0x38B820u;
    // 0x38b820: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x38b820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_38b824:
    // 0x38b824: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x38B824u;
    {
        const bool branch_taken_0x38b824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b824) {
            ctx->pc = 0x38B828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B824u;
            // 0x38b828: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B830u;
            goto label_38b830;
        }
    }
    ctx->pc = 0x38B82Cu;
    // 0x38b82c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x38b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_38b830:
    // 0x38b830: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38B830u;
    {
        const bool branch_taken_0x38b830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x38B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B830u;
        // 0x38b834: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b830) {
            ctx->pc = 0x38B850u;
            goto label_38b850;
        }
    }
    ctx->pc = 0x38B838u;
    // 0x38b838: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38B838u;
    {
        const bool branch_taken_0x38b838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b838) {
            ctx->pc = 0x38B848u;
            goto label_38b848;
        }
    }
    ctx->pc = 0x38B840u;
    // 0x38b840: 0x3e00008  jr          $ra
    ctx->pc = 0x38B840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B840u;
        // 0x38b844: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B848u;
label_38b848:
    // 0x38b848: 0x3e00008  jr          $ra
    ctx->pc = 0x38B848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B848u;
        // 0x38b84c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B850u;
label_38b850:
    // 0x38b850: 0x3e00008  jr          $ra
    ctx->pc = 0x38B850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B850u;
        // 0x38b854: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B858u;
}
