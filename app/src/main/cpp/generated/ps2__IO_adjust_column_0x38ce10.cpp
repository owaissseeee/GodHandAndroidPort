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

// Function: _IO_adjust_column
// Address: 0x38ce10 - 0x38ce58
void ps2__IO_adjust_column_0x38ce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_adjust_column_0x38ce10");
#endif

    switch (ctx->pc) {
        case 0x38ce30u: goto label_38ce30;
        default: break;
    }

    ctx->pc = 0x38ce10u;

    // 0x38ce10: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x38ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x38ce14: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x38ce14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x38ce18: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x38CE18u;
    {
        const bool branch_taken_0x38ce18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE18u;
        // 0x38ce1c: 0x31027  nor         $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ce18) {
            ctx->pc = 0x38CE50u;
            goto label_38ce50;
        }
    }
    ctx->pc = 0x38CE20u;
    // 0x38ce20: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x38ce20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x38ce24: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x38ce24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38ce28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x38ce2c: 0x0  nop
    ctx->pc = 0x38ce2cu;
    // NOP
label_38ce30:
    // 0x38ce30: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x38ce30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38ce34: 0x14480003  bne         $v0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38CE34u;
    {
        const bool branch_taken_0x38ce34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x38CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE34u;
        // 0x38ce38: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ce34) {
            ctx->pc = 0x38CE44u;
            goto label_38ce44;
        }
    }
    ctx->pc = 0x38CE3Cu;
    // 0x38ce3c: 0x3e00008  jr          $ra
    ctx->pc = 0x38CE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE3Cu;
        // 0x38ce40: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CE44u;
label_38ce44:
    // 0x38ce44: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x38ce44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x38ce48: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x38CE48u;
    {
        const bool branch_taken_0x38ce48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE48u;
        // 0x38ce4c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ce48) {
            ctx->pc = 0x38CE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ce30;
        }
    }
    ctx->pc = 0x38CE50u;
label_38ce50:
    // 0x38ce50: 0x3e00008  jr          $ra
    ctx->pc = 0x38CE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE50u;
        // 0x38ce54: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CE58u;
}
