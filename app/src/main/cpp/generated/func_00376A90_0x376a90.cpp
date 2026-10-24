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

// Function: func_00376A90
// Address: 0x376a90 - 0x376ae0
void func_00376A90_0x376a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00376A90_0x376a90");
#endif

    switch (ctx->pc) {
        case 0x376aa0u: goto label_376aa0;
        case 0x376ab0u: goto label_376ab0;
        default: break;
    }

    ctx->pc = 0x376a90u;

    // 0x376a90: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x376a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x376a94: 0x24430850  addiu       $v1, $v0, 0x850
    ctx->pc = 0x376a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2128));
    // 0x376a98: 0x24652a00  addiu       $a1, $v1, 0x2A00
    ctx->pc = 0x376a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10752));
    // 0x376a9c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x376a9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x770850u));
label_376aa0:
    // 0x376aa0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x376AA0u;
    {
        const bool branch_taken_0x376aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376aa0) {
            ctx->pc = 0x376AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376AA0u;
            // 0x376aa4: 0x246300e0  addiu       $v1, $v1, 0xE0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376ACCu;
            goto label_376acc;
        }
    }
    ctx->pc = 0x376AA8u;
    // 0x376aa8: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x376AA8u;
    {
        const bool branch_taken_0x376aa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x376aa8) {
            ctx->pc = 0x376AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376AA8u;
            // 0x376aac: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376AB8u;
            goto label_376ab8;
        }
    }
    ctx->pc = 0x376AB0u;
label_376ab0:
    // 0x376ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x376AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376AB0u;
        // 0x376ab4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376AB8u;
label_376ab8:
    // 0x376ab8: 0x0  nop
    ctx->pc = 0x376ab8u;
    // NOP
    // 0x376abc: 0x0  nop
    ctx->pc = 0x376abcu;
    // NOP
    // 0x376ac0: 0x1044fffb  beq         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x376AC0u;
    {
        const bool branch_taken_0x376ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x376ac0) {
            ctx->pc = 0x376AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376ab0;
        }
    }
    ctx->pc = 0x376AC8u;
    // 0x376ac8: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x376ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_376acc:
    // 0x376acc: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x376accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x376ad0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x376AD0u;
    {
        const bool branch_taken_0x376ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x376ad0) {
            ctx->pc = 0x376AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376AD0u;
            // 0x376ad4: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376aa0;
        }
    }
    ctx->pc = 0x376AD8u;
    // 0x376ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x376AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376AD8u;
        // 0x376adc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376AE0u;
}
