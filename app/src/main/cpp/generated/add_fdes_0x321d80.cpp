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

// Function: add_fdes
// Address: 0x321d80 - 0x321e08
void add_fdes_0x321d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("add_fdes_0x321d80");
#endif

    switch (ctx->pc) {
        case 0x321d98u: goto label_321d98;
        default: break;
    }

    ctx->pc = 0x321d80u;

    // 0x321d80: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x321d80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321d84: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x321d84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321d88: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x321d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x321d8c: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x321d8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x321d90: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x321D90u;
    {
        const bool branch_taken_0x321d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D90u;
        // 0x321d94: 0x8cea0000  lw          $t2, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d90) {
            ctx->pc = 0x321DFCu;
            goto label_321dfc;
        }
    }
    ctx->pc = 0x321D98u;
label_321d98:
    // 0x321d98: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x321d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x321d9c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x321D9Cu;
    {
        const bool branch_taken_0x321d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321d9c) {
            ctx->pc = 0x321DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321D9Cu;
            // 0x321da0: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321DECu;
            goto label_321dec;
        }
    }
    ctx->pc = 0x321DA4u;
    // 0x321da4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x321da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x321da8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x321DA8u;
    {
        const bool branch_taken_0x321da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321da8) {
            ctx->pc = 0x321DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321DA8u;
            // 0x321dac: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321DECu;
            goto label_321dec;
        }
    }
    ctx->pc = 0x321DB0u;
    // 0x321db0: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x321db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x321db4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x321db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x321db8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x321db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x321dbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x321dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321dc0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x321dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x321dc4: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x321dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x321dc8: 0xad640004  sw          $a0, 0x4($t3)
    ctx->pc = 0x321dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 4));
    // 0x321dcc: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x321dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x321dd0: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x321dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x321dd4: 0x69282b  sltu        $a1, $v1, $t1
    ctx->pc = 0x321dd4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x321dd8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x321dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x321ddc: 0x65480b  movn        $t1, $v1, $a1
    ctx->pc = 0x321ddcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x321de0: 0x144102b  sltu        $v0, $t2, $a0
    ctx->pc = 0x321de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x321de4: 0x82500b  movn        $t2, $a0, $v0
    ctx->pc = 0x321de4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 4));
    // 0x321de8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x321de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_321dec:
    // 0x321dec: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x321decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x321df0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x321df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x321df4: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x321DF4u;
    {
        const bool branch_taken_0x321df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x321DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DF4u;
        // 0x321df8: 0x24480004  addiu       $t0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321df4) {
            ctx->pc = 0x321D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321d98;
        }
    }
    ctx->pc = 0x321DFCu;
label_321dfc:
    // 0x321dfc: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x321dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x321e00: 0x3e00008  jr          $ra
    ctx->pc = 0x321E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E00u;
        // 0x321e04: 0xacea0000  sw          $t2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321E08u;
}
