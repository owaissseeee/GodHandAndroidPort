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

// Function: func_0012BAF0
// Address: 0x12baf0 - 0x12bb38
void func_0012BAF0_0x12baf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012BAF0_0x12baf0");
#endif

    switch (ctx->pc) {
        case 0x12bb10u: goto label_12bb10;
        default: break;
    }

    ctx->pc = 0x12baf0u;

    // 0x12baf0: 0x8c8215f4  lw          $v0, 0x15F4($a0)
    ctx->pc = 0x12baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5620)));
    // 0x12baf4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x12baf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x12baf8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BAF8u;
    {
        const bool branch_taken_0x12baf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12baf8) {
            ctx->pc = 0x12BAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BAF8u;
            // 0x12bafc: 0x908202f4  lbu         $v0, 0x2F4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BB08u;
            goto label_12bb08;
        }
    }
    ctx->pc = 0x12BB00u;
    // 0x12bb00: 0x3e00008  jr          $ra
    ctx->pc = 0x12BB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB00u;
        // 0x12bb04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BB08u;
label_12bb08:
    // 0x12bb08: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BB08u;
    {
        const bool branch_taken_0x12bb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bb08) {
            ctx->pc = 0x12BB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BB08u;
            // 0x12bb0c: 0x908402f5  lbu         $a0, 0x2F5($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BB18u;
            goto label_12bb18;
        }
    }
    ctx->pc = 0x12BB10u;
label_12bb10:
    // 0x12bb10: 0x3e00008  jr          $ra
    ctx->pc = 0x12BB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB10u;
        // 0x12bb14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BB18u;
label_12bb18:
    // 0x12bb18: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x12bb18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12bb1c: 0x0  nop
    ctx->pc = 0x12bb1cu;
    // NOP
    // 0x12bb20: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12BB20u;
    {
        const bool branch_taken_0x12bb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bb20) {
            ctx->pc = 0x12BB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bb10;
        }
    }
    ctx->pc = 0x12BB28u;
    // 0x12bb28: 0x480fff9  bltz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12BB28u;
    {
        const bool branch_taken_0x12bb28 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x12BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB28u;
        // 0x12bb2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb28) {
            ctx->pc = 0x12BB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bb10;
        }
    }
    ctx->pc = 0x12BB30u;
    // 0x12bb30: 0x3e00008  jr          $ra
    ctx->pc = 0x12BB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BB38u;
}
