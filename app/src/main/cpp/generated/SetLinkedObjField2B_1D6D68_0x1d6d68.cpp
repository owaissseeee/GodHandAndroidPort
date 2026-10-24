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

// Function: SetLinkedObjField2B_1D6D68
// Address: 0x1d6d68 - 0x1d6db0
void SetLinkedObjField2B_1D6D68_0x1d6d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetLinkedObjField2B_1D6D68_0x1d6d68");
#endif

    ctx->pc = 0x1d6d68u;

    // 0x1d6d68: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6D68u;
    {
        const bool branch_taken_0x1d6d68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D68u;
        // 0x1d6d6c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d68) {
            ctx->pc = 0x1D6D8Cu;
            goto label_1d6d8c;
        }
    }
    ctx->pc = 0x1D6D70u;
    // 0x1d6d70: 0x8c4401d8  lw          $a0, 0x1D8($v0)
    ctx->pc = 0x1d6d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 472)));
    // 0x1d6d74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d6d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d6d78: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d6d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d6d7c: 0xa083002b  sb          $v1, 0x2B($a0)
    ctx->pc = 0x1d6d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 43), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d6d80: 0x8c420254  lw          $v0, 0x254($v0)
    ctx->pc = 0x1d6d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
    // 0x1d6d84: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D84u;
        // 0x1d6d88: 0xa045002b  sb          $a1, 0x2B($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6D8Cu;
label_1d6d8c:
    // 0x1d6d8c: 0x244301d4  addiu       $v1, $v0, 0x1D4
    ctx->pc = 0x1d6d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 468));
    // 0x1d6d90: 0x24450250  addiu       $a1, $v0, 0x250
    ctx->pc = 0x1d6d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x1d6d94: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d6d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d6d98: 0x90640078  lbu         $a0, 0x78($v1)
    ctx->pc = 0x1d6d98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x1d6d9c: 0xa044002b  sb          $a0, 0x2B($v0)
    ctx->pc = 0x1d6d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d6da0: 0x90a30078  lbu         $v1, 0x78($a1)
    ctx->pc = 0x1d6da0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x1d6da4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1d6da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d6da8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DA8u;
        // 0x1d6dac: 0xa043002b  sb          $v1, 0x2B($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6DB0u;
}
