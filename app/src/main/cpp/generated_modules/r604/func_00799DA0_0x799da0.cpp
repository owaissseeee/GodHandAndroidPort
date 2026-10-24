#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: func_00799DA0
// Address: 0x799da0 - 0x799e60
void func_00799DA0_0x799da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799DA0_0x799da0");
#endif

    switch (ctx->pc) {
        case 0x799dd0u: goto label_799dd0;
        case 0x799ddcu: goto label_799ddc;
        case 0x799decu: goto label_799dec;
        case 0x799dfcu: goto label_799dfc;
        case 0x799e08u: goto label_799e08;
        case 0x799e14u: goto label_799e14;
        case 0x799e1cu: goto label_799e1c;
        case 0x799e24u: goto label_799e24;
        case 0x799e44u: goto label_799e44;
        default: break;
    }

    ctx->pc = 0x799da0u;

    // 0x799da0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799da4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799da8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799dac: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799dacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799db0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799db4: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x799db4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x799db8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x799db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x799dbc: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x799dbcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x799dc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799dc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799DC4u;
    {
        const bool branch_taken_0x799dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DC4u;
        // 0x799dc8: 0x3c13005f  lui         $s3, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dc4) {
            ctx->pc = 0x799DDCu;
            goto label_799ddc;
        }
    }
    ctx->pc = 0x799DCCu;
    // 0x799dcc: 0x0  nop
    ctx->pc = 0x799dccu;
    // NOP
label_799dd0:
    // 0x799dd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799dd4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799DD4u;
    SET_GPR_U32(ctx, 31, 0x799DDCu);
    ctx->pc = 0x799DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DD4u;
    // 0x799dd8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799DD4u, 0x799DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DDCu;
label_799ddc:
    // 0x799ddc: 0x2624ea60  addiu       $a0, $s1, -0x15A0
    ctx->pc = 0x799ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x799de0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x799de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799de4: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799DE4u;
    SET_GPR_U32(ctx, 31, 0x799DECu);
    ctx->pc = 0x799DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DE4u;
    // 0x799de8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799DE4u, 0x799DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DECu;
label_799dec:
    // 0x799dec: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x799DECu;
    {
        const bool branch_taken_0x799dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DECu;
        // 0x799df0: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dec) {
            ctx->pc = 0x799DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799dd0;
        }
    }
    ctx->pc = 0x799DF4u;
    // 0x799df4: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x799DF4u;
    SET_GPR_U32(ctx, 31, 0x799DFCu);
    ctx->pc = 0x799DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DF4u;
    // 0x799df8: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799DF4u, 0x799DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DFCu;
label_799dfc:
    // 0x799dfc: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799e00: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799E00u;
    SET_GPR_U32(ctx, 31, 0x799E08u);
    ctx->pc = 0x799E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E00u;
    // 0x799e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799E00u, 0x799E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E08u;
label_799e08:
    // 0x799e08: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799e0c: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799E0Cu;
    SET_GPR_U32(ctx, 31, 0x799E14u);
    ctx->pc = 0x799E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E0Cu;
    // 0x799e10: 0x2645b488  addiu       $a1, $s2, -0x4B78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294947976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799E0Cu, 0x799E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E14u;
label_799e14:
    // 0x799e14: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799E14u;
    SET_GPR_U32(ctx, 31, 0x799E1Cu);
    ctx->pc = 0x799E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E14u;
    // 0x799e18: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799E14u, 0x799E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E1Cu;
label_799e1c:
    // 0x799e1c: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799E1Cu;
    SET_GPR_U32(ctx, 31, 0x799E24u);
    ctx->pc = 0x799E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E1Cu;
    // 0x799e20: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799E1Cu, 0x799E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E24u;
label_799e24:
    // 0x799e24: 0x8e648658  lw          $a0, -0x79A8($s3)
    ctx->pc = 0x799e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x799e28: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x799e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x799e2c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799e30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799e34: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799e34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x799e38: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x799e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799e3c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799E3Cu;
    SET_GPR_U32(ctx, 31, 0x799E44u);
    ctx->pc = 0x799E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E3Cu;
    // 0x799e40: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799E3Cu, 0x799E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E44u;
label_799e44:
    // 0x799e44: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799e48: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799e4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x799e4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799e50: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x799e50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799e58: 0x3e00008  jr          $ra
    ctx->pc = 0x799E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E58u;
        // 0x799e5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799E60u;
}
} // namespace gh_r604
