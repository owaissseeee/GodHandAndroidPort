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

// Function: func_00383DD0
// Address: 0x383dd0 - 0x383e40
void func_00383DD0_0x383dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00383DD0_0x383dd0");
#endif

    switch (ctx->pc) {
        case 0x383e08u: goto label_383e08;
        default: break;
    }

    ctx->pc = 0x383dd0u;

    // 0x383dd0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x383dd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x383dd4: 0x24a3001c  addiu       $v1, $a1, 0x1C
    ctx->pc = 0x383dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x383dd8: 0x24a20026  addiu       $v0, $a1, 0x26
    ctx->pc = 0x383dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 38));
    // 0x383ddc: 0x8ca700ac  lw          $a3, 0xAC($a1)
    ctx->pc = 0x383ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 172)));
    // 0x383de0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x383de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383de4: 0x18e00013  blez        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x383DE4u;
    {
        const bool branch_taken_0x383de4 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x383DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383DE4u;
        // 0x383de8: 0x46180b  movn        $v1, $v0, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383de4) {
            ctx->pc = 0x383E34u;
            goto label_383e34;
        }
    }
    ctx->pc = 0x383DECu;
    // 0x383dec: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x383decu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x383df0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x383df0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383df4: 0x24660002  addiu       $a2, $v1, 0x2
    ctx->pc = 0x383df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x383df8: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x383df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x383dfc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x383dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x383e00: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x383e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x383e04: 0x0  nop
    ctx->pc = 0x383e04u;
    // NOP
label_383e08:
    // 0x383e08: 0x10870007  beq         $a0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x383E08u;
    {
        const bool branch_taken_0x383e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x383E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E08u;
        // 0x383e0c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383e08) {
            ctx->pc = 0x383E28u;
            goto label_383e28;
        }
    }
    ctx->pc = 0x383E10u;
    // 0x383e10: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x383e10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x383e14: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x383e14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x383e18: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x383E18u;
    {
        const bool branch_taken_0x383e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x383E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E18u;
        // 0x383e1c: 0x88102a  slt         $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383e18) {
            ctx->pc = 0x383E2Cu;
            goto label_383e2c;
        }
    }
    ctx->pc = 0x383E20u;
    // 0x383e20: 0x3e00008  jr          $ra
    ctx->pc = 0x383E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E20u;
        // 0x383e24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383E28u;
label_383e28:
    // 0x383e28: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x383e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_383e2c:
    // 0x383e2c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x383E2Cu;
    {
        const bool branch_taken_0x383e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E2Cu;
        // 0x383e30: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383e2c) {
            ctx->pc = 0x383E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383e08;
        }
    }
    ctx->pc = 0x383E34u;
label_383e34:
    // 0x383e34: 0x3e00008  jr          $ra
    ctx->pc = 0x383E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E34u;
        // 0x383e38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383E3Cu;
    // 0x383e3c: 0x0  nop
    ctx->pc = 0x383e3cu;
    // NOP
    ctx->pc = 0x383e40u;
}
