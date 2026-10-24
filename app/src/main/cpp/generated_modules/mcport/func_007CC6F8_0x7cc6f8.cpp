#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CC6F8
// Address: 0x7cc6f8 - 0x7cc780
void func_007CC6F8_0x7cc6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CC6F8_0x7cc6f8");
#endif

    switch (ctx->pc) {
        case 0x7cc710u: goto label_7cc710;
        default: break;
    }

    ctx->pc = 0x7cc6f8u;

    // 0x7cc6f8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x7cc6f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc6fc: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x7cc6fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc700: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x7cc700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x7cc704: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x7cc704u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7cc708: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x7CC708u;
    {
        const bool branch_taken_0x7cc708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC708u;
        // 0x7cc70c: 0x8cea0000  lw          $t2, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc708) {
            ctx->pc = 0x7CC774u;
            goto label_7cc774;
        }
    }
    ctx->pc = 0x7CC710u;
label_7cc710:
    // 0x7cc710: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x7cc710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x7cc714: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x7CC714u;
    {
        const bool branch_taken_0x7cc714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7cc714) {
            ctx->pc = 0x7CC718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CC714u;
            // 0x7cc718: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CC764u;
            goto label_7cc764;
        }
    }
    ctx->pc = 0x7CC71Cu;
    // 0x7cc71c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x7cc71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x7cc720: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x7CC720u;
    {
        const bool branch_taken_0x7cc720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7cc720) {
            ctx->pc = 0x7CC724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CC720u;
            // 0x7cc724: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CC764u;
            goto label_7cc764;
        }
    }
    ctx->pc = 0x7CC728u;
    // 0x7cc728: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x7cc728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x7cc72c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x7cc72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x7cc730: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x7cc730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x7cc734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7cc734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7cc738: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7cc738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x7cc73c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x7cc73cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x7cc740: 0xad640004  sw          $a0, 0x4($t3)
    ctx->pc = 0x7cc740u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 4));
    // 0x7cc744: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x7cc744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x7cc748: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x7cc748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x7cc74c: 0x69282b  sltu        $a1, $v1, $t1
    ctx->pc = 0x7cc74cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x7cc750: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x7cc750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x7cc754: 0x65480b  movn        $t1, $v1, $a1
    ctx->pc = 0x7cc754u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x7cc758: 0x144102b  sltu        $v0, $t2, $a0
    ctx->pc = 0x7cc758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x7cc75c: 0x82500b  movn        $t2, $a0, $v0
    ctx->pc = 0x7cc75cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 4));
    // 0x7cc760: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x7cc760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_7cc764:
    // 0x7cc764: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x7cc764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x7cc768: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7cc768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7cc76c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x7CC76Cu;
    {
        const bool branch_taken_0x7cc76c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC76Cu;
        // 0x7cc770: 0x24480004  addiu       $t0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc76c) {
            ctx->pc = 0x7CC710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cc710;
        }
    }
    ctx->pc = 0x7CC774u;
label_7cc774:
    // 0x7cc774: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x7cc774u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x7cc778: 0x3e00008  jr          $ra
    ctx->pc = 0x7CC778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC778u;
        // 0x7cc77c: 0xacea0000  sw          $t2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CC778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CC780u;
}
} // namespace gh_mcport
