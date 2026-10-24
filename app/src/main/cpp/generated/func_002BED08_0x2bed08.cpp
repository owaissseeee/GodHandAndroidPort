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

// Function: func_002BED08
// Address: 0x2bed08 - 0x2bed60
void func_002BED08_0x2bed08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BED08_0x2bed08");
#endif

    switch (ctx->pc) {
        case 0x2bed18u: goto label_2bed18;
        case 0x2bed38u: goto label_2bed38;
        default: break;
    }

    ctx->pc = 0x2bed08u;

    // 0x2bed08: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BED08u;
    {
        const bool branch_taken_0x2bed08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bed08) {
            ctx->pc = 0x2BED0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BED08u;
            // 0x2bed0c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BED2Cu;
            goto label_2bed2c;
        }
    }
    ctx->pc = 0x2BED10u;
    // 0x2bed10: 0x3e00008  jr          $ra
    ctx->pc = 0x2BED10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED10u;
        // 0x2bed14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BED10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BED18u;
label_2bed18:
    // 0x2bed18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bed18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bed1c: 0x90620618  lbu         $v0, 0x618($v1)
    ctx->pc = 0x2bed1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1560)));
    // 0x2bed20: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bed20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bed24: 0x3e00008  jr          $ra
    ctx->pc = 0x2BED24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED24u;
        // 0x2bed28: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BED24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BED2Cu;
label_2bed2c:
    // 0x2bed2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bed2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bed30: 0x24860610  addiu       $a2, $a0, 0x610
    ctx->pc = 0x2bed30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1552));
    // 0x2bed34: 0x0  nop
    ctx->pc = 0x2bed34u;
    // NOP
label_2bed38:
    // 0x2bed38: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2bed38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bed3c: 0x1045fff6  beq         $v0, $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BED3Cu;
    {
        const bool branch_taken_0x2bed3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED3Cu;
        // 0x2bed40: 0x71900  sll         $v1, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed3c) {
            ctx->pc = 0x2BED18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bed18;
        }
    }
    ctx->pc = 0x2BED44u;
    // 0x2bed44: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2bed44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2bed48: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x2bed48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2bed4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BED4Cu;
    {
        const bool branch_taken_0x2bed4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED4Cu;
        // 0x2bed50: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed4c) {
            ctx->pc = 0x2BED38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bed38;
        }
    }
    ctx->pc = 0x2BED54u;
    // 0x2bed54: 0x3e00008  jr          $ra
    ctx->pc = 0x2BED54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED54u;
        // 0x2bed58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BED54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BED5Cu;
    // 0x2bed5c: 0x0  nop
    ctx->pc = 0x2bed5cu;
    // NOP
    ctx->pc = 0x2bed60u;
}
