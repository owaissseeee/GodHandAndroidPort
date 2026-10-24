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

// Function: func_002F7D88
// Address: 0x2f7d88 - 0x2f7e30
void func_002F7D88_0x2f7d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F7D88_0x2f7d88");
#endif

    switch (ctx->pc) {
        case 0x2f7dc0u: goto label_2f7dc0;
        case 0x2f7dd4u: goto label_2f7dd4;
        case 0x2f7de8u: goto label_2f7de8;
        case 0x2f7dfcu: goto label_2f7dfc;
        case 0x2f7e10u: goto label_2f7e10;
        case 0x2f7e1cu: goto label_2f7e1c;
        default: break;
    }

    ctx->pc = 0x2f7d88u;

    // 0x2f7d88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f7d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f7d8c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2f7d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2f7d90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f7d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2f7d94: 0x2442f7d0  addiu       $v0, $v0, -0x830
    ctx->pc = 0x2f7d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x2f7d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f7d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f7d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f7d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f7da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f7da4: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x2f7da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x2f7da8: 0x8e030364  lw          $v1, 0x364($s0)
    ctx->pc = 0x2f7da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x2f7dac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7DACu;
    {
        const bool branch_taken_0x2f7dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7DACu;
        // 0x2f7db0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7dac) {
            ctx->pc = 0x2F7DC0u;
            goto label_2f7dc0;
        }
    }
    ctx->pc = 0x2F7DB4u;
    // 0x2f7db4: 0x8c64ffe0  lw          $a0, -0x20($v1)
    ctx->pc = 0x2f7db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x2f7db8: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2F7DB8u;
    SET_GPR_U32(ctx, 31, 0x2F7DC0u);
    ctx->pc = 0x2F7DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7DB8u;
    // 0x2f7dbc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2F7DB8u, 0x2F7DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7DC0u;
label_2f7dc0:
    // 0x2f7dc0: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x2f7dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x2f7dc4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7DC4u;
    {
        const bool branch_taken_0x2f7dc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7dc4) {
            ctx->pc = 0x2F7DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7DC4u;
            // 0x2f7dc8: 0x8e05036c  lw          $a1, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7DD8u;
            goto label_2f7dd8;
        }
    }
    ctx->pc = 0x2F7DCCu;
    // 0x2f7dcc: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2F7DCCu;
    SET_GPR_U32(ctx, 31, 0x2F7DD4u);
    ctx->pc = 0x2F7DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7DCCu;
    // 0x2f7dd0: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2F7DCCu, 0x2F7DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7DD4u;
label_2f7dd4:
    // 0x2f7dd4: 0x8e05036c  lw          $a1, 0x36C($s0)
    ctx->pc = 0x2f7dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_2f7dd8:
    // 0x2f7dd8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7DD8u;
    {
        const bool branch_taken_0x2f7dd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7dd8) {
            ctx->pc = 0x2F7DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7DD8u;
            // 0x2f7ddc: 0x8e050370  lw          $a1, 0x370($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7DECu;
            goto label_2f7dec;
        }
    }
    ctx->pc = 0x2F7DE0u;
    // 0x2f7de0: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2F7DE0u;
    SET_GPR_U32(ctx, 31, 0x2F7DE8u);
    ctx->pc = 0x2F7DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7DE0u;
    // 0x2f7de4: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2F7DE0u, 0x2F7DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7DE8u;
label_2f7de8:
    // 0x2f7de8: 0x8e050370  lw          $a1, 0x370($s0)
    ctx->pc = 0x2f7de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
label_2f7dec:
    // 0x2f7dec: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7DECu;
    {
        const bool branch_taken_0x2f7dec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7dec) {
            ctx->pc = 0x2F7DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7DECu;
            // 0x2f7df0: 0x8e050360  lw          $a1, 0x360($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7E00u;
            goto label_2f7e00;
        }
    }
    ctx->pc = 0x2F7DF4u;
    // 0x2f7df4: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2F7DF4u;
    SET_GPR_U32(ctx, 31, 0x2F7DFCu);
    ctx->pc = 0x2F7DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7DF4u;
    // 0x2f7df8: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2F7DF4u, 0x2F7DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7DFCu;
label_2f7dfc:
    // 0x2f7dfc: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x2f7dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
label_2f7e00:
    // 0x2f7e00: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7E00u;
    {
        const bool branch_taken_0x2f7e00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7E00u;
        // 0x2f7e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7e00) {
            ctx->pc = 0x2F7E14u;
            goto label_2f7e14;
        }
    }
    ctx->pc = 0x2F7E08u;
    // 0x2f7e08: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2F7E08u;
    SET_GPR_U32(ctx, 31, 0x2F7E10u);
    ctx->pc = 0x2F7E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7E08u;
    // 0x2f7e0c: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2F7E08u, 0x2F7E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7E10u;
label_2f7e10:
    // 0x2f7e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7e14:
    // 0x2f7e14: 0xc0baf14  jal         func_2EBC50
    ctx->pc = 0x2F7E14u;
    SET_GPR_U32(ctx, 31, 0x2F7E1Cu);
    ctx->pc = 0x2F7E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7E14u;
    // 0x2f7e18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBC50u, 0x2F7E14u, 0x2F7E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7E1Cu;
label_2f7e1c:
    // 0x2f7e1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f7e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7e20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f7e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7e24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f7e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7e28: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7E28u;
        // 0x2f7e2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7E30u;
}
