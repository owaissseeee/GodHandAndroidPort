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

// Function: func_0031CDC0
// Address: 0x31cdc0 - 0x31ce38
void func_0031CDC0_0x31cdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031CDC0_0x31cdc0");
#endif

    switch (ctx->pc) {
        case 0x31cdd0u: goto label_31cdd0;
        case 0x31ce00u: goto label_31ce00;
        default: break;
    }

    ctx->pc = 0x31cdc0u;

    // 0x31cdc0: 0x54800008  bnel        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x31CDC0u;
    {
        const bool branch_taken_0x31cdc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cdc0) {
            ctx->pc = 0x31CDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CDC0u;
            // 0x31cdc4: 0x8c8a0000  lw          $t2, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CDE4u;
            goto label_31cde4;
        }
    }
    ctx->pc = 0x31CDC8u;
    // 0x31cdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x31CDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CDC8u;
        // 0x31cdcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CDD0u;
label_31cdd0:
    // 0x31cdd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31cdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31cdd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31cdd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31cddc: 0x3e00008  jr          $ra
    ctx->pc = 0x31CDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CDDCu;
        // 0x31cde0: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CDE4u;
label_31cde4:
    // 0x31cde4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31cde4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cde8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31cdec: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x31cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x31cdf0: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x31CDF0u;
    {
        const bool branch_taken_0x31cdf0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CDF0u;
        // 0x31cdf4: 0x824821  addu        $t1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cdf0) {
            ctx->pc = 0x31CE30u;
            goto label_31ce30;
        }
    }
    ctx->pc = 0x31CDF8u;
    // 0x31cdf8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x31cdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31cdfc: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x31cdfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_31ce00:
    // 0x31ce00: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x31ce00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x31ce04: 0x11050004  beq         $t0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31CE04u;
    {
        const bool branch_taken_0x31ce04 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x31ce04) {
            ctx->pc = 0x31CE18u;
            goto label_31ce18;
        }
    }
    ctx->pc = 0x31CE0Cu;
    // 0x31ce0c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x31ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31ce10: 0x55020004  bnel        $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31CE10u;
    {
        const bool branch_taken_0x31ce10 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x31ce10) {
            ctx->pc = 0x31CE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CE10u;
            // 0x31ce14: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CE24u;
            goto label_31ce24;
        }
    }
    ctx->pc = 0x31CE18u;
label_31ce18:
    // 0x31ce18: 0x1167ffed  beq         $t3, $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x31CE18u;
    {
        const bool branch_taken_0x31ce18 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 7));
        ctx->pc = 0x31CE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE18u;
        // 0x31ce1c: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ce18) {
            ctx->pc = 0x31CDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31cdd0;
        }
    }
    ctx->pc = 0x31CE20u;
    // 0x31ce20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31ce24:
    // 0x31ce24: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x31ce24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31ce28: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x31CE28u;
    {
        const bool branch_taken_0x31ce28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE28u;
        // 0x31ce2c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ce28) {
            ctx->pc = 0x31CE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ce00;
        }
    }
    ctx->pc = 0x31CE30u;
label_31ce30:
    // 0x31ce30: 0x3e00008  jr          $ra
    ctx->pc = 0x31CE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE30u;
        // 0x31ce34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CE38u;
}
