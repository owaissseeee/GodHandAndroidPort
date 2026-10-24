#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r404_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r404
{
// Function: func_00799D08
// Address: 0x799d08 - 0x799e88
void func_00799D08_0x799d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799D08_0x799d08");
#endif

    switch (ctx->pc) {
        case 0x799d48u: goto label_799d48;
        case 0x799d80u: goto label_799d80;
        case 0x799d94u: goto label_799d94;
        case 0x799da4u: goto label_799da4;
        case 0x799db8u: goto label_799db8;
        case 0x799dc8u: goto label_799dc8;
        case 0x799dd0u: goto label_799dd0;
        case 0x799df4u: goto label_799df4;
        case 0x799e00u: goto label_799e00;
        case 0x799e0cu: goto label_799e0c;
        case 0x799e2cu: goto label_799e2c;
        case 0x799e3cu: goto label_799e3c;
        case 0x799e48u: goto label_799e48;
        case 0x799e50u: goto label_799e50;
        case 0x799e58u: goto label_799e58;
        case 0x799e64u: goto label_799e64;
        default: break;
    }

    ctx->pc = 0x799d08u;

    // 0x799d08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x799d0c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799d10: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799d10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799d14: 0x24053006  addiu       $a1, $zero, 0x3006
    ctx->pc = 0x799d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12294));
    // 0x799d18: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799d1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d24: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799d28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x799d2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d30: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x799d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x799d34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799d34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d38: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x799d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x799d3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799d40: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x799D40u;
    SET_GPR_U32(ctx, 31, 0x799D48u);
    ctx->pc = 0x799D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D40u;
    // 0x799d44: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x799D40u, 0x799D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D48u;
label_799d48:
    // 0x799d48: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799d4c: 0x8c4323a4  lw          $v1, 0x23A4($v0)
    ctx->pc = 0x799d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x799d50: 0x84640bec  lh          $a0, 0xBEC($v1)
    ctx->pc = 0x799d50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 3052)));
    // 0x799d54: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x799D54u;
    {
        const bool branch_taken_0x799d54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D54u;
        // 0x799d58: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d54) {
            ctx->pc = 0x799D88u;
            goto label_799d88;
        }
    }
    ctx->pc = 0x799D5Cu;
    // 0x799d5c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799d60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799d64: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x799d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x799d68: 0x240600bb  addiu       $a2, $zero, 0xBB
    ctx->pc = 0x799d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x799d6c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799d70: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799d70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799d74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799d74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d78: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799D78u;
    SET_GPR_U32(ctx, 31, 0x799D80u);
    ctx->pc = 0x799D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D78u;
    // 0x799d7c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799D78u, 0x799D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D80u;
label_799d80:
    // 0x799d80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799D80u;
    {
        const bool branch_taken_0x799d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D80u;
        // 0x799d84: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d80) {
            ctx->pc = 0x799D94u;
            goto label_799d94;
        }
    }
    ctx->pc = 0x799D88u;
label_799d88:
    // 0x799d88: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x799d88u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x799d8c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799D8Cu;
    SET_GPR_U32(ctx, 31, 0x799D94u);
    ctx->pc = 0x799D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D8Cu;
    // 0x799d90: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799D8Cu, 0x799D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D94u;
label_799d94:
    // 0x799d94: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799d98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d9c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799D9Cu;
    SET_GPR_U32(ctx, 31, 0x799DA4u);
    ctx->pc = 0x799DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D9Cu;
    // 0x799da0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799D9Cu, 0x799DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DA4u;
label_799da4:
    // 0x799da4: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x799da4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x799da8: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x799da8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x799dac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x799DACu;
    {
        const bool branch_taken_0x799dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DACu;
        // 0x799db0: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dac) {
            ctx->pc = 0x799DC8u;
            goto label_799dc8;
        }
    }
    ctx->pc = 0x799DB4u;
    // 0x799db4: 0x0  nop
    ctx->pc = 0x799db4u;
    // NOP
label_799db8:
    // 0x799db8: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799dbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799dc0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799DC0u;
    SET_GPR_U32(ctx, 31, 0x799DC8u);
    ctx->pc = 0x799DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DC0u;
    // 0x799dc4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799DC0u, 0x799DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DC8u;
label_799dc8:
    // 0x799dc8: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x799DC8u;
    SET_GPR_U32(ctx, 31, 0x799DD0u);
    ctx->pc = 0x799DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DC8u;
    // 0x799dcc: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x799DC8u, 0x799DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DD0u;
label_799dd0:
    // 0x799dd0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799DD0u;
    {
        const bool branch_taken_0x799dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DD0u;
        // 0x799dd4: 0x8e038658  lw          $v1, -0x79A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dd0) {
            ctx->pc = 0x799DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799db8;
        }
    }
    ctx->pc = 0x799DD8u;
    // 0x799dd8: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x799dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x799ddc: 0x2644ea60  addiu       $a0, $s2, -0x15A0
    ctx->pc = 0x799ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
    // 0x799de0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799de4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799de8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x799dec: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799DECu;
    SET_GPR_U32(ctx, 31, 0x799DF4u);
    ctx->pc = 0x799DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DECu;
    // 0x799df0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799DECu, 0x799DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DF4u;
label_799df4:
    // 0x799df4: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799df8: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799DF8u;
    SET_GPR_U32(ctx, 31, 0x799E00u);
    ctx->pc = 0x799DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DF8u;
    // 0x799dfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799DF8u, 0x799E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E00u;
label_799e00:
    // 0x799e00: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799e04: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799E04u;
    SET_GPR_U32(ctx, 31, 0x799E0Cu);
    ctx->pc = 0x799E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E04u;
    // 0x799e08: 0x2665abe8  addiu       $a1, $s3, -0x5418 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294945768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799E04u, 0x799E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E0Cu;
label_799e0c:
    // 0x799e0c: 0x240600b9  addiu       $a2, $zero, 0xB9
    ctx->pc = 0x799e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x799e10: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799e14: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799e18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799e18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e1c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799e1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e20: 0x2684ee00  addiu       $a0, $s4, -0x1200
    ctx->pc = 0x799e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
    // 0x799e24: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799E24u;
    SET_GPR_U32(ctx, 31, 0x799E2Cu);
    ctx->pc = 0x799E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E24u;
    // 0x799e28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799E24u, 0x799E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E2Cu;
label_799e2c:
    // 0x799e2c: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x799e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799e30: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x799e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799e34: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799E34u;
    SET_GPR_U32(ctx, 31, 0x799E3Cu);
    ctx->pc = 0x799E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E34u;
    // 0x799e38: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799E34u, 0x799E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E3Cu;
label_799e3c:
    // 0x799e3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e40: 0xc1e67a2  jal         func_799E88
    ctx->pc = 0x799E40u;
    SET_GPR_U32(ctx, 31, 0x799E48u);
    ctx->pc = 0x799E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E40u;
    // 0x799e44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799E88u, 0x799E40u, 0x799E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E48u;
label_799e48:
    // 0x799e48: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799E48u;
    SET_GPR_U32(ctx, 31, 0x799E50u);
    ctx->pc = 0x799E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E48u;
    // 0x799e4c: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799E48u, 0x799E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E50u;
label_799e50:
    // 0x799e50: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799E50u;
    SET_GPR_U32(ctx, 31, 0x799E58u);
    ctx->pc = 0x799E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E50u;
    // 0x799e54: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799E50u, 0x799E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E58u;
label_799e58:
    // 0x799e58: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799e5c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799E5Cu;
    SET_GPR_U32(ctx, 31, 0x799E64u);
    ctx->pc = 0x799E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E5Cu;
    // 0x799e60: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799E5Cu, 0x799E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E64u;
label_799e64:
    // 0x799e64: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799e68: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x799e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799e6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x799e6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799e70: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x799e70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799e74: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x799e74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x799E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E7Cu;
        // 0x799e80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799E84u;
    // 0x799e84: 0x0  nop
    ctx->pc = 0x799e84u;
    // NOP
    ctx->pc = 0x799e88u;
}
} // namespace gh_r404
