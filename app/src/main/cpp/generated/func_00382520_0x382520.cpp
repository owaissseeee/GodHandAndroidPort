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

// Function: func_00382520
// Address: 0x382520 - 0x3825a8
void func_00382520_0x382520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00382520_0x382520");
#endif

    switch (ctx->pc) {
        case 0x382540u: goto label_382540;
        case 0x382578u: goto label_382578;
        default: break;
    }

    ctx->pc = 0x382520u;

    // 0x382520: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x382520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x382524: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x382524u;
    {
        const bool branch_taken_0x382524 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x382528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382524u;
        // 0x382528: 0x24a40030  addiu       $a0, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382524) {
            ctx->pc = 0x382548u;
            goto label_382548;
        }
    }
    ctx->pc = 0x38252Cu;
    // 0x38252c: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x38252cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x382530: 0x24a60022  addiu       $a2, $a1, 0x22
    ctx->pc = 0x382530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 34));
    // 0x382534: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x382534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x382538: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x382538u;
    {
        const bool branch_taken_0x382538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382538u;
        // 0x38253c: 0x24420022  addiu       $v0, $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382538) {
            ctx->pc = 0x382558u;
            goto label_382558;
        }
    }
    ctx->pc = 0x382540u;
label_382540:
    // 0x382540: 0x3e00008  jr          $ra
    ctx->pc = 0x382540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382540u;
        // 0x382544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382548u;
label_382548:
    // 0x382548: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x382548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x38254c: 0x24a60018  addiu       $a2, $a1, 0x18
    ctx->pc = 0x38254cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x382550: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x382550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x382554: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x382554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_382558:
    // 0x382558: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x382558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x38255c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x38255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x382560: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x382560u;
    {
        const bool branch_taken_0x382560 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x382564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382560u;
        // 0x382564: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382560) {
            ctx->pc = 0x38259Cu;
            goto label_38259c;
        }
    }
    ctx->pc = 0x382568u;
    // 0x382568: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x382568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x38256c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x38256cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382570: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x382570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x382574: 0x0  nop
    ctx->pc = 0x382574u;
    // NOP
label_382578:
    // 0x382578: 0x10880005  beq         $a0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x382578u;
    {
        const bool branch_taken_0x382578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x38257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382578u;
        // 0x38257c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382578) {
            ctx->pc = 0x382590u;
            goto label_382590;
        }
    }
    ctx->pc = 0x382580u;
    // 0x382580: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x382580u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x382584: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x382584u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x382588: 0x1462ffed  bne         $v1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x382588u;
    {
        const bool branch_taken_0x382588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x382588) {
            ctx->pc = 0x382540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382540;
        }
    }
    ctx->pc = 0x382590u;
label_382590:
    // 0x382590: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x382590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x382594: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x382594u;
    {
        const bool branch_taken_0x382594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382594u;
        // 0x382598: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382594) {
            ctx->pc = 0x382578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382578;
        }
    }
    ctx->pc = 0x38259Cu;
label_38259c:
    // 0x38259c: 0x3e00008  jr          $ra
    ctx->pc = 0x38259Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3825A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38259Cu;
        // 0x3825a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38259Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3825A4u;
    // 0x3825a4: 0x0  nop
    ctx->pc = 0x3825a4u;
    // NOP
    ctx->pc = 0x3825a8u;
}
