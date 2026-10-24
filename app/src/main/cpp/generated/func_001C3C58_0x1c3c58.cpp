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

// Function: func_001C3C58
// Address: 0x1c3c58 - 0x1c3cb8
void func_001C3C58_0x1c3c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C3C58_0x1c3c58");
#endif

    switch (ctx->pc) {
        case 0x1c3c80u: goto label_1c3c80;
        default: break;
    }

    ctx->pc = 0x1c3c58u;

    // 0x1c3c58: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3C58u;
    {
        const bool branch_taken_0x1c3c58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c58) {
            ctx->pc = 0x1C3C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3C58u;
            // 0x1c3c5c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3C68u;
            goto label_1c3c68;
        }
    }
    ctx->pc = 0x1C3C60u;
    // 0x1c3c60: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C60u;
        // 0x1c3c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3C68u;
label_1c3c68:
    // 0x1c3c68: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x1c3c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x1c3c6c: 0x34424d4f  ori         $v0, $v0, 0x4D4F
    ctx->pc = 0x1c3c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19791);
    // 0x1c3c70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1c3c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c3c74: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3C74u;
    {
        const bool branch_taken_0x1c3c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3c74) {
            ctx->pc = 0x1C3C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3C74u;
            // 0x1c3c78: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3C88u;
            goto label_1c3c88;
        }
    }
    ctx->pc = 0x1C3C7Cu;
    // 0x1c3c7c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1c3c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1c3c80:
    // 0x1c3c80: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C80u;
        // 0x1c3c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3C88u;
label_1c3c88:
    // 0x1c3c88: 0x0  nop
    ctx->pc = 0x1c3c88u;
    // NOP
    // 0x1c3c8c: 0x0  nop
    ctx->pc = 0x1c3c8cu;
    // NOP
    // 0x1c3c90: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C3C90u;
    {
        const bool branch_taken_0x1c3c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c90) {
            ctx->pc = 0x1C3C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3C90u;
            // 0x1c3c94: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3c80;
        }
    }
    ctx->pc = 0x1C3C98u;
    // 0x1c3c98: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1c3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c3c9c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1c3c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c3ca0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3CA0u;
    {
        const bool branch_taken_0x1c3ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3ca0) {
            ctx->pc = 0x1C3CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3CA0u;
            // 0x1c3ca4: 0x24a20010  addiu       $v0, $a1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3CACu;
            goto label_1c3cac;
        }
    }
    ctx->pc = 0x1C3CA8u;
    // 0x1c3ca8: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x1c3ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_1c3cac:
    // 0x1c3cac: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1c3cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1c3cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CB0u;
        // 0x1c3cb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3CB8u;
}
