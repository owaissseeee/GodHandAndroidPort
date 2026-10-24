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

// Function: _IO_marker_delta
// Address: 0x38d080 - 0x38d0b8
void ps2__IO_marker_delta_0x38d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_marker_delta_0x38d080");
#endif

    ctx->pc = 0x38d080u;

    // 0x38d080: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x38d080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38d084: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x38D084u;
    {
        const bool branch_taken_0x38d084 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d084) {
            ctx->pc = 0x38D088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D084u;
            // 0x38d088: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D094u;
            goto label_38d094;
        }
    }
    ctx->pc = 0x38D08Cu;
    // 0x38d08c: 0x3e00008  jr          $ra
    ctx->pc = 0x38D08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D08Cu;
        // 0x38d090: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D094u;
label_38d094:
    // 0x38d094: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38d094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x38d098: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x38D098u;
    {
        const bool branch_taken_0x38d098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d098) {
            ctx->pc = 0x38D09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D098u;
            // 0x38d09c: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D0A4u;
            goto label_38d0a4;
        }
    }
    ctx->pc = 0x38D0A0u;
    // 0x38d0a0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x38d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_38d0a4:
    // 0x38d0a4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x38d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x38d0a8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x38d0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38d0ac: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x38d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38d0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x38D0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D0B0u;
        // 0x38d0b4: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D0B8u;
}
