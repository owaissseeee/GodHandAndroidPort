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

// Function: func_002BEAA8
// Address: 0x2beaa8 - 0x2beb00
void func_002BEAA8_0x2beaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BEAA8_0x2beaa8");
#endif

    switch (ctx->pc) {
        case 0x2bead0u: goto label_2bead0;
        default: break;
    }

    ctx->pc = 0x2beaa8u;

    // 0x2beaa8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2beaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2beaac: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BEAACu;
    {
        const bool branch_taken_0x2beaac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAACu;
        // 0x2beab0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beaac) {
            ctx->pc = 0x2BEAF4u;
            goto label_2beaf4;
        }
    }
    ctx->pc = 0x2BEAB4u;
    // 0x2beab4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2beab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2beab8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BEAB8u;
    {
        const bool branch_taken_0x2beab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAB8u;
        // 0x2beabc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beab8) {
            ctx->pc = 0x2BEAF4u;
            goto label_2beaf4;
        }
    }
    ctx->pc = 0x2BEAC0u;
    // 0x2beac0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2beac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2beac4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2beac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beac8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2beac8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beacc: 0x0  nop
    ctx->pc = 0x2beaccu;
    // NOP
label_2bead0:
    // 0x2bead0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2bead0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bead4: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BEAD4u;
    {
        const bool branch_taken_0x2bead4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2BEAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAD4u;
        // 0x2bead8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bead4) {
            ctx->pc = 0x2BEAE4u;
            goto label_2beae4;
        }
    }
    ctx->pc = 0x2BEADCu;
    // 0x2beadc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEADCu;
        // 0x2beae0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEAE4u;
label_2beae4:
    // 0x2beae4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2beae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2beae8: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x2beae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2beaec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2BEAECu;
    {
        const bool branch_taken_0x2beaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAECu;
        // 0x2beaf0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beaec) {
            ctx->pc = 0x2BEAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bead0;
        }
    }
    ctx->pc = 0x2BEAF4u;
label_2beaf4:
    // 0x2beaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAF4u;
        // 0x2beaf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEAFCu;
    // 0x2beafc: 0x0  nop
    ctx->pc = 0x2beafcu;
    // NOP
    ctx->pc = 0x2beb00u;
}
