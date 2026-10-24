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

// Function: InsertAlarm
// Address: 0x3b6db8 - 0x3b6e40
void InsertAlarm_0x3b6db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InsertAlarm_0x3b6db8");
#endif

    switch (ctx->pc) {
        case 0x3b6de8u: goto label_3b6de8;
        default: break;
    }

    ctx->pc = 0x3b6db8u;

    // 0x3b6db8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3b6db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6dbc: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x3b6dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x3b6dc0: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x3b6dc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3b6dc4: 0x2525be90  addiu       $a1, $t1, -0x4170
    ctx->pc = 0x3b6dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294950544));
    // 0x3b6dc8: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x3b6dc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3b6dcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b6dccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6dd0: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x3b6dd0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3b6dd4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3b6dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3b6dd8: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x3b6dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBEA8u));
    // 0x3b6ddc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6DDCu;
    {
        const bool branch_taken_0x3b6ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6DDCu;
        // 0x3b6de0: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6ddc) {
            ctx->pc = 0x3B6DECu;
            goto label_3b6dec;
        }
    }
    ctx->pc = 0x3B6DE4u;
    // 0x3b6de4: 0x0  nop
    ctx->pc = 0x3b6de4u;
    // NOP
label_3b6de8:
    // 0x3b6de8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3b6de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3b6dec:
    // 0x3b6dec: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3B6DECu;
    {
        const bool branch_taken_0x3b6dec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6dec) {
            ctx->pc = 0x3B6DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6DECu;
            // 0x3b6df0: 0xacc80004  sw          $t0, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6E18u;
            goto label_3b6e18;
        }
    }
    ctx->pc = 0x3B6DF4u;
    // 0x3b6df4: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x3b6df4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3b6df8: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x3b6df8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3b6dfc: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x3b6dfcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3b6e00: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3b6e00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3b6e04: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x3b6e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x3b6e08: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x3b6e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b6e0c: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3B6E0Cu;
    {
        const bool branch_taken_0x3b6e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6e0c) {
            ctx->pc = 0x3B6E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6E0Cu;
            // 0x3b6e10: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6de8;
        }
    }
    ctx->pc = 0x3B6E14u;
    // 0x3b6e14: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x3b6e14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
label_3b6e18:
    // 0x3b6e18: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B6E18u;
    {
        const bool branch_taken_0x3b6e18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6E18u;
        // 0x3b6e1c: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6e18) {
            ctx->pc = 0x3B6E24u;
            goto label_3b6e24;
        }
    }
    ctx->pc = 0x3B6E20u;
    // 0x3b6e20: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x3b6e20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_3b6e24:
    // 0x3b6e24: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6E24u;
    {
        const bool branch_taken_0x3b6e24 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6E24u;
        // 0x3b6e28: 0x2522be90  addiu       $v0, $t1, -0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294950544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6e24) {
            ctx->pc = 0x3B6E34u;
            goto label_3b6e34;
        }
    }
    ctx->pc = 0x3B6E2Cu;
    // 0x3b6e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6E2Cu;
        // 0x3b6e30: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6E34u;
label_3b6e34:
    // 0x3b6e34: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6E34u;
        // 0x3b6e38: 0xac460018  sw          $a2, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6E3Cu;
    // 0x3b6e3c: 0x0  nop
    ctx->pc = 0x3b6e3cu;
    // NOP
    ctx->pc = 0x3b6e40u;
}
