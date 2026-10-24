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

// Function: sceCdSync
// Address: 0x398da0 - 0x398e40
void sceCdSync_0x398da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceCdSync_0x398da0");
#endif

    switch (ctx->pc) {
        case 0x398dccu: goto label_398dcc;
        case 0x398dd8u: goto label_398dd8;
        case 0x398de0u: goto label_398de0;
        case 0x398df4u: goto label_398df4;
        case 0x398e20u: goto label_398e20;
        default: break;
    }

    ctx->pc = 0x398da0u;

    // 0x398da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x398da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x398da4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x398da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x398da8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x398da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x398dac: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x398DACu;
    {
        const bool branch_taken_0x398dac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x398DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DACu;
        // 0x398db0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398dac) {
            ctx->pc = 0x398E04u;
            goto label_398e04;
        }
    }
    ctx->pc = 0x398DB4u;
    // 0x398db4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x398db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x398db8: 0x8c438650  lw          $v1, -0x79B0($v0)
    ctx->pc = 0x398db8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F8650u));
    // 0x398dbc: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x398DBCu;
    {
        const bool branch_taken_0x398dbc = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x398DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DBCu;
        // 0x398dc0: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398dbc) {
            ctx->pc = 0x398DCCu;
            goto label_398dcc;
        }
    }
    ctx->pc = 0x398DC4u;
    // 0x398dc4: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x398DC4u;
    SET_GPR_U32(ctx, 31, 0x398DCCu);
    ctx->pc = 0x398DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398DC4u;
    // 0x398dc8: 0x2484e2a0  addiu       $a0, $a0, -0x1D60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x398DC4u, 0x398DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398DCCu;
label_398dcc:
    // 0x398dcc: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x398dccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x398dd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x398DD0u;
    {
        const bool branch_taken_0x398dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DD0u;
        // 0x398dd4: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398dd0) {
            ctx->pc = 0x398DE0u;
            goto label_398de0;
        }
    }
    ctx->pc = 0x398DD8u;
label_398dd8:
    // 0x398dd8: 0xc0ec2b8  jal         func_3B0AE0
    ctx->pc = 0x398DD8u;
    SET_GPR_U32(ctx, 31, 0x398DE0u);
    ctx->pc = 0x398DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398DD8u;
    // 0x398ddc: 0x24040fa0  addiu       $a0, $zero, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0AE0u, 0x398DD8u, 0x398DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398DE0u;
label_398de0:
    // 0x398de0: 0x8e228674  lw          $v0, -0x798C($s1)
    ctx->pc = 0x398de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936180)));
    // 0x398de4: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x398DE4u;
    {
        const bool branch_taken_0x398de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398de4) {
            ctx->pc = 0x398DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398dd8;
        }
    }
    ctx->pc = 0x398DECu;
    // 0x398dec: 0xc0eccca  jal         func_3B3328
    ctx->pc = 0x398DECu;
    SET_GPR_U32(ctx, 31, 0x398DF4u);
    ctx->pc = 0x398DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398DECu;
    // 0x398df0: 0x26049810  addiu       $a0, $s0, -0x67F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3328u, 0x398DECu, 0x398DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398DF4u;
label_398df4:
    // 0x398df4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x398DF4u;
    {
        const bool branch_taken_0x398df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DF4u;
        // 0x398df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398df4) {
            ctx->pc = 0x398DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398dd8;
        }
    }
    ctx->pc = 0x398DFCu;
    // 0x398dfc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x398DFCu;
    {
        const bool branch_taken_0x398dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398DFCu;
        // 0x398e00: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398dfc) {
            ctx->pc = 0x398E30u;
            goto label_398e30;
        }
    }
    ctx->pc = 0x398E04u;
label_398e04:
    // 0x398e04: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x398e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x398e08: 0x8c438674  lw          $v1, -0x798C($v0)
    ctx->pc = 0x398e08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F8674u));
    // 0x398e0c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x398E0Cu;
    {
        const bool branch_taken_0x398e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x398E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E0Cu;
        // 0x398e10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398e0c) {
            ctx->pc = 0x398E2Cu;
            goto label_398e2c;
        }
    }
    ctx->pc = 0x398E14u;
    // 0x398e14: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x398e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x398e18: 0xc0eccca  jal         func_3B3328
    ctx->pc = 0x398E18u;
    SET_GPR_U32(ctx, 31, 0x398E20u);
    ctx->pc = 0x398E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398E18u;
    // 0x398e1c: 0x24849810  addiu       $a0, $a0, -0x67F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3328u, 0x398E18u, 0x398E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398E20u;
label_398e20:
    // 0x398e20: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x398E20u;
    {
        const bool branch_taken_0x398e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E20u;
        // 0x398e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398e20) {
            ctx->pc = 0x398E2Cu;
            goto label_398e2c;
        }
    }
    ctx->pc = 0x398E28u;
    // 0x398e28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x398e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398e2c:
    // 0x398e2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x398e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_398e30:
    // 0x398e30: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x398e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x398e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398e38: 0x3e00008  jr          $ra
    ctx->pc = 0x398E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E38u;
        // 0x398e3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398E40u;
}
