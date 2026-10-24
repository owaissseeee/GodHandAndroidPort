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

// Function: BlackJack_UpdateBetState
// Address: 0x1d1d38 - 0x1d1f30
void BlackJack_UpdateBetState_0x1d1d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdateBetState_0x1d1d38");
#endif

    switch (ctx->pc) {
        case 0x1d1d70u: goto label_1d1d70;
        case 0x1d1d7cu: goto label_1d1d7c;
        case 0x1d1db8u: goto label_1d1db8;
        case 0x1d1dc4u: goto label_1d1dc4;
        case 0x1d1de8u: goto label_1d1de8;
        case 0x1d1e28u: goto label_1d1e28;
        case 0x1d1e38u: goto label_1d1e38;
        case 0x1d1e68u: goto label_1d1e68;
        case 0x1d1e9cu: goto label_1d1e9c;
        case 0x1d1eb4u: goto label_1d1eb4;
        case 0x1d1ec0u: goto label_1d1ec0;
        case 0x1d1eccu: goto label_1d1ecc;
        case 0x1d1ee4u: goto label_1d1ee4;
        case 0x1d1f1cu: goto label_1d1f1c;
        default: break;
    }

    ctx->pc = 0x1d1d38u;

    // 0x1d1d38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1d3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d1d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d1d40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1d44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d48: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d1d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d1d4c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1D4Cu;
    {
        const bool branch_taken_0x1d1d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D4Cu;
        // 0x1d1d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d4c) {
            ctx->pc = 0x1D1D64u;
            goto label_1d1d64;
        }
    }
    ctx->pc = 0x1D1D54u;
    // 0x1d1d54: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D1D54u;
    {
        const bool branch_taken_0x1d1d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D54u;
        // 0x1d1d58: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d54) {
            ctx->pc = 0x1D1D8Cu;
            goto label_1d1d8c;
        }
    }
    ctx->pc = 0x1D1D5Cu;
    // 0x1d1d5c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1D1D5Cu;
    {
        const bool branch_taken_0x1d1d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D5Cu;
        // 0x1d1d60: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d5c) {
            ctx->pc = 0x1D1F20u;
            goto label_1d1f20;
        }
    }
    ctx->pc = 0x1D1D64u;
label_1d1d64:
    // 0x1d1d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d68: 0xc075574  jal         func_1D55D0
    ctx->pc = 0x1D1D68u;
    SET_GPR_U32(ctx, 31, 0x1D1D70u);
    ctx->pc = 0x1D1D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D68u;
    // 0x1d1d6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D55D0u, 0x1D1D68u, 0x1D1D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D70u;
label_1d1d70:
    // 0x1d1d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d74: 0xc075666  jal         func_1D5998
    ctx->pc = 0x1D1D74u;
    SET_GPR_U32(ctx, 31, 0x1D1D7Cu);
    ctx->pc = 0x1D1D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D74u;
    // 0x1d1d78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5998u, 0x1D1D74u, 0x1D1D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D7Cu;
label_1d1d7c:
    // 0x1d1d7c: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d1d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d1d80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1d84: 0xae021808  sw          $v0, 0x1808($s0)
    ctx->pc = 0x1d1d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
    // 0x1d1d88: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1d1d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_1d1d8c:
    // 0x1d1d8c: 0x3404cc00  ori         $a0, $zero, 0xCC00
    ctx->pc = 0x1d1d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1d1d90: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1d1d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1d1d94: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x1d1d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x1d1d98: 0x422b8  dsll        $a0, $a0, 10
    ctx->pc = 0x1d1d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 10);
    // 0x1d1d9c: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1d1d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1d1da0: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x1d1da0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1d1da4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d1da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d1da8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D1DA8u;
    {
        const bool branch_taken_0x1d1da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DA8u;
        // 0x1d1dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1da8) {
            ctx->pc = 0x1D1E04u;
            goto label_1d1e04;
        }
    }
    ctx->pc = 0x1D1DB0u;
    // 0x1d1db0: 0xc075574  jal         func_1D55D0
    ctx->pc = 0x1D1DB0u;
    SET_GPR_U32(ctx, 31, 0x1D1DB8u);
    ctx->pc = 0x1D1DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1DB0u;
    // 0x1d1db4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D55D0u, 0x1D1DB0u, 0x1D1DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1DB8u;
label_1d1db8:
    // 0x1d1db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1dbc: 0xc07563c  jal         func_1D58F0
    ctx->pc = 0x1D1DBCu;
    SET_GPR_U32(ctx, 31, 0x1D1DC4u);
    ctx->pc = 0x1D1DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1DBCu;
    // 0x1d1dc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D58F0u, 0x1D1DBCu, 0x1D1DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1DC4u;
label_1d1dc4:
    // 0x1d1dc4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d1dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d1dc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1dcc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d1dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d1dd0: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1d1dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d1dd4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d1dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1dd8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d1dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1ddc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d1ddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1de0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D1DE0u;
    SET_GPR_U32(ctx, 31, 0x1D1DE8u);
    ctx->pc = 0x1D1DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1DE0u;
    // 0x1d1de4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D1DE0u, 0x1D1DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1DE8u;
label_1d1de8:
    // 0x1d1de8: 0x8e031814  lw          $v1, 0x1814($s0)
    ctx->pc = 0x1d1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d1dec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D1DECu;
    {
        const bool branch_taken_0x1d1dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DECu;
        // 0x1d1df0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1dec) {
            ctx->pc = 0x1D1DF8u;
            goto label_1d1df8;
        }
    }
    ctx->pc = 0x1D1DF4u;
    // 0x1d1df4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d1df8:
    // 0x1d1df8: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d1df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d1dfc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1D1DFCu;
    {
        const bool branch_taken_0x1d1dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DFCu;
        // 0x1d1e00: 0xae021804  sw          $v0, 0x1804($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1dfc) {
            ctx->pc = 0x1D1F1Cu;
            goto label_1d1f1c;
        }
    }
    ctx->pc = 0x1D1E04u;
label_1d1e04:
    // 0x1d1e04: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x1d1e04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x1d1e08: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1d1e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1d1e0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d1e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d1e10: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D1E10u;
    {
        const bool branch_taken_0x1d1e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E10u;
        // 0x1d1e14: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e10) {
            ctx->pc = 0x1D1E70u;
            goto label_1d1e70;
        }
    }
    ctx->pc = 0x1D1E18u;
    // 0x1d1e18: 0x8e051814  lw          $a1, 0x1814($s0)
    ctx->pc = 0x1d1e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d1e1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1e20: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1D1E20u;
    SET_GPR_U32(ctx, 31, 0x1D1E28u);
    ctx->pc = 0x1D1E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E20u;
    // 0x1d1e24: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1D1E20u, 0x1D1E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E28u;
label_1d1e28:
    // 0x1d1e28: 0xae001814  sw          $zero, 0x1814($s0)
    ctx->pc = 0x1d1e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6164), GPR_U32(ctx, 0));
    // 0x1d1e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1e30: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D1E30u;
    SET_GPR_U32(ctx, 31, 0x1D1E38u);
    ctx->pc = 0x1D1E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E30u;
    // 0x1d1e34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D1E30u, 0x1D1E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E38u;
label_1d1e38:
    // 0x1d1e38: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d1e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d1e3c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d1e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d1e40: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d1e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d1e44: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d1e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d1e48: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d1e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
    // 0x1d1e4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1e50: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1d1e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1d1e54: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d1e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1e58: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d1e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1e5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d1e5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1e60: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D1E60u;
    SET_GPR_U32(ctx, 31, 0x1D1E68u);
    ctx->pc = 0x1D1E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E60u;
    // 0x1d1e64: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D1E60u, 0x1D1E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E68u;
label_1d1e68:
    // 0x1d1e68: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1D1E68u;
    {
        const bool branch_taken_0x1d1e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E68u;
        // 0x1d1e6c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e68) {
            ctx->pc = 0x1D1F20u;
            goto label_1d1f20;
        }
    }
    ctx->pc = 0x1D1E70u;
label_1d1e70:
    // 0x1d1e70: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1d1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1d1e74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d1e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d1e78: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D1E78u;
    {
        const bool branch_taken_0x1d1e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1e78) {
            ctx->pc = 0x1D1E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1E78u;
            // 0x1d1e7c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1F20u;
            goto label_1d1f20;
        }
    }
    ctx->pc = 0x1D1E80u;
    // 0x1d1e80: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d1e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d1e84: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D1E84u;
    {
        const bool branch_taken_0x1d1e84 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E84u;
        // 0x1d1e88: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e84) {
            ctx->pc = 0x1D1EECu;
            goto label_1d1eec;
        }
    }
    ctx->pc = 0x1D1E8Cu;
    // 0x1d1e8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1e90: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1d1e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1d1e94: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1D1E94u;
    SET_GPR_U32(ctx, 31, 0x1D1E9Cu);
    ctx->pc = 0x1D1E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E94u;
    // 0x1d1e98: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1D1E94u, 0x1D1E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E9Cu;
label_1d1e9c:
    // 0x1d1e9c: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d1e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d1ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ea4: 0x2442ff9c  addiu       $v0, $v0, -0x64
    ctx->pc = 0x1d1ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x1d1ea8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1eac: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D1EACu;
    SET_GPR_U32(ctx, 31, 0x1D1EB4u);
    ctx->pc = 0x1D1EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1EACu;
    // 0x1d1eb0: 0xae021814  sw          $v0, 0x1814($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D1EACu, 0x1D1EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1EB4u;
label_1d1eb4:
    // 0x1d1eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1eb8: 0xc0754d8  jal         func_1D5360
    ctx->pc = 0x1D1EB8u;
    SET_GPR_U32(ctx, 31, 0x1D1EC0u);
    ctx->pc = 0x1D1EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1EB8u;
    // 0x1d1ebc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5360u, 0x1D1EB8u, 0x1D1EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1EC0u;
label_1d1ec0:
    // 0x1d1ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ec4: 0xc07550c  jal         func_1D5430
    ctx->pc = 0x1D1EC4u;
    SET_GPR_U32(ctx, 31, 0x1D1ECCu);
    ctx->pc = 0x1D1EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1EC4u;
    // 0x1d1ec8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5430u, 0x1D1EC4u, 0x1D1ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1ECCu;
label_1d1ecc:
    // 0x1d1ecc: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d1eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d1ed0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D1ED0u;
    {
        const bool branch_taken_0x1d1ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1ED0u;
        // 0x1d1ed4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ed0) {
            ctx->pc = 0x1D1EFCu;
            goto label_1d1efc;
        }
    }
    ctx->pc = 0x1D1ED8u;
    // 0x1d1ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1edc: 0xc075540  jal         func_1D5500
    ctx->pc = 0x1D1EDCu;
    SET_GPR_U32(ctx, 31, 0x1D1EE4u);
    ctx->pc = 0x1D1EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1EDCu;
    // 0x1d1ee0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5500u, 0x1D1EDCu, 0x1D1EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1EE4u;
label_1d1ee4:
    // 0x1d1ee4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1EE4u;
    {
        const bool branch_taken_0x1d1ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1EE4u;
        // 0x1d1ee8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ee4) {
            ctx->pc = 0x1D1EFCu;
            goto label_1d1efc;
        }
    }
    ctx->pc = 0x1D1EECu;
label_1d1eec:
    // 0x1d1eec: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d1eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d1ef0: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d1ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d1ef4: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d1ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
    // 0x1d1ef8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d1ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d1efc:
    // 0x1d1efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f00: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d1f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d1f04: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1d1f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1d1f08: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d1f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1f0c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d1f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1f10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d1f10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f14: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D1F14u;
    SET_GPR_U32(ctx, 31, 0x1D1F1Cu);
    ctx->pc = 0x1D1F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F14u;
    // 0x1d1f18: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D1F14u, 0x1D1F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F1Cu;
label_1d1f1c:
    // 0x1d1f1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d1f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1f20:
    // 0x1d1f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1f24: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F24u;
        // 0x1d1f28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1F2Cu;
    // 0x1d1f2c: 0x0  nop
    ctx->pc = 0x1d1f2cu;
    // NOP
    ctx->pc = 0x1d1f30u;
}
