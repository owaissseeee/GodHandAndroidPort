#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r701_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r701
{
// Function: func_00799D28
// Address: 0x799d28 - 0x799ea8
void func_00799D28_0x799d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799D28_0x799d28");
#endif

    switch (ctx->pc) {
        case 0x799db0u: goto label_799db0;
        case 0x799de0u: goto label_799de0;
        case 0x799df8u: goto label_799df8;
        case 0x799e04u: goto label_799e04;
        case 0x799e10u: goto label_799e10;
        case 0x799e1cu: goto label_799e1c;
        case 0x799e28u: goto label_799e28;
        case 0x799e34u: goto label_799e34;
        case 0x799e3cu: goto label_799e3c;
        case 0x799e68u: goto label_799e68;
        case 0x799e74u: goto label_799e74;
        case 0x799e80u: goto label_799e80;
        case 0x799e8cu: goto label_799e8c;
        default: break;
    }

    ctx->pc = 0x799d28u;

    // 0x799d28: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x799d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x799d2c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799d30: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x799d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x799d34: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x799d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x799d38: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x799d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x799d3c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x799d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x799d40: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x799d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x799d44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x799d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x799d48: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x799d48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799d4c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799d50: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799d54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799D54u;
    {
        const bool branch_taken_0x799d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D54u;
        // 0x799d58: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d54) {
            ctx->pc = 0x799D68u;
            goto label_799d68;
        }
    }
    ctx->pc = 0x799D5Cu;
    // 0x799d5c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799d60: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x799D60u;
    {
        const bool branch_taken_0x799d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D60u;
        // 0x799d64: 0x8c432f84  lw          $v1, 0x2F84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d60) {
            ctx->pc = 0x799E14u;
            goto label_799e14;
        }
    }
    ctx->pc = 0x799D68u;
label_799d68:
    // 0x799d68: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799d6c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799d70: 0x2448aaa0  addiu       $t0, $v0, -0x5560
    ctx->pc = 0x799d70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945440));
    // 0x799d74: 0x8046aaa0  lb          $a2, -0x5560($v0)
    ctx->pc = 0x799d74u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x79AAA0u));
    // 0x799d78: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x799d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799d7c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x799d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799d80: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799d84: 0xa3a50000  sb          $a1, 0x0($sp)
    ctx->pc = 0x799d84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x799d88: 0x24494c58  addiu       $t1, $v0, 0x4C58
    ctx->pc = 0x799d88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799d8c: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x799d90: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x799d90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x799d94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d9c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799da0: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x799DA0u;
    {
        const bool branch_taken_0x799da0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DA0u;
        // 0x799da4: 0x3c120058  lui         $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799da0) {
            ctx->pc = 0x799DD8u;
            goto label_799dd8;
        }
    }
    ctx->pc = 0x799DA8u;
    // 0x799da8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x799da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dac: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799dacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799db0:
    // 0x799db0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799db4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799db8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799dbc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799dc0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799dc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799dc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799DC4u;
    {
        const bool branch_taken_0x799dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DC4u;
        // 0x799dc8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dc4) {
            ctx->pc = 0x799DD8u;
            goto label_799dd8;
        }
    }
    ctx->pc = 0x799DCCu;
    // 0x799dcc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799dccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799dd0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799DD0u;
    {
        const bool branch_taken_0x799dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799dd0) {
            ctx->pc = 0x799DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799DD0u;
            // 0x799dd4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799db0;
        }
    }
    ctx->pc = 0x799DD8u;
label_799dd8:
    // 0x799dd8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799DD8u;
    SET_GPR_U32(ctx, 31, 0x799DE0u);
    ctx->pc = 0x799DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DD8u;
    // 0x799ddc: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799DD8u, 0x799DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DE0u;
label_799de0:
    // 0x799de0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799de4: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x799DE4u;
    {
        const bool branch_taken_0x799de4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x799DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DE4u;
        // 0x799de8: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799de4) {
            ctx->pc = 0x799E34u;
            goto label_799e34;
        }
    }
    ctx->pc = 0x799DECu;
    // 0x799dec: 0x26506ab0  addiu       $s0, $s2, 0x6AB0
    ctx->pc = 0x799decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 27312));
    // 0x799df0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799DF0u;
    SET_GPR_U32(ctx, 31, 0x799DF8u);
    ctx->pc = 0x799DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DF0u;
    // 0x799df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799DF0u, 0x799DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DF8u;
label_799df8:
    // 0x799df8: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x799df8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799dfc: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799DFCu;
    SET_GPR_U32(ctx, 31, 0x799E04u);
    ctx->pc = 0x799E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DFCu;
    // 0x799e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799DFCu, 0x799E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E04u;
label_799e04:
    // 0x799e04: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x799e04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799e08: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799E08u;
    SET_GPR_U32(ctx, 31, 0x799E10u);
    ctx->pc = 0x799E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E08u;
    // 0x799e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799E08u, 0x799E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E10u;
label_799e10:
    // 0x799e10: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x799e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799e14:
    // 0x799e14: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799E14u;
    SET_GPR_U32(ctx, 31, 0x799E1Cu);
    ctx->pc = 0x799E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E14u;
    // 0x799e18: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799E14u, 0x799E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E1Cu;
label_799e1c:
    // 0x799e1c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x799E1Cu;
    {
        const bool branch_taken_0x799e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E1Cu;
        // 0x799e20: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e1c) {
            ctx->pc = 0x799E90u;
            goto label_799e90;
        }
    }
    ctx->pc = 0x799E24u;
    // 0x799e24: 0x0  nop
    ctx->pc = 0x799e24u;
    // NOP
label_799e28:
    // 0x799e28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799e2c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799E2Cu;
    SET_GPR_U32(ctx, 31, 0x799E34u);
    ctx->pc = 0x799E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E2Cu;
    // 0x799e30: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799E2Cu, 0x799E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E34u;
label_799e34:
    // 0x799e34: 0xc06b6a0  jal         func_1ADA80
    ctx->pc = 0x799E34u;
    SET_GPR_U32(ctx, 31, 0x799E3Cu);
    ctx->pc = 0x799E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E34u;
    // 0x799e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADA80u, 0x799E34u, 0x799E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E3Cu;
label_799e3c:
    // 0x799e3c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x799E3Cu;
    {
        const bool branch_taken_0x799e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E3Cu;
        // 0x799e40: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e3c) {
            ctx->pc = 0x799E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e28;
        }
    }
    ctx->pc = 0x799E44u;
    // 0x799e44: 0x8e638658  lw          $v1, -0x79A8($s3)
    ctx->pc = 0x799e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x799e48: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x799e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x799e4c: 0x26506ab0  addiu       $s0, $s2, 0x6AB0
    ctx->pc = 0x799e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 27312));
    // 0x799e50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e58: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x799e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x799e5c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x799e60: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799E60u;
    SET_GPR_U32(ctx, 31, 0x799E68u);
    ctx->pc = 0x799E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E60u;
    // 0x799e64: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799E60u, 0x799E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E68u;
label_799e68:
    // 0x799e68: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x799e68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799e6c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799E6Cu;
    SET_GPR_U32(ctx, 31, 0x799E74u);
    ctx->pc = 0x799E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E6Cu;
    // 0x799e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799E6Cu, 0x799E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E74u;
label_799e74:
    // 0x799e74: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x799e74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799e78: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799E78u;
    SET_GPR_U32(ctx, 31, 0x799E80u);
    ctx->pc = 0x799E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E78u;
    // 0x799e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799E78u, 0x799E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E80u;
label_799e80:
    // 0x799e80: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x799e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799e84: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799E84u;
    SET_GPR_U32(ctx, 31, 0x799E8Cu);
    ctx->pc = 0x799E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E84u;
    // 0x799e88: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799E84u, 0x799E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E8Cu;
label_799e8c:
    // 0x799e8c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x799e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_799e90:
    // 0x799e90: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x799e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799e94: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x799e94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799e98: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x799e98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799e9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x799EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EA0u;
        // 0x799ea4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799EA8u;
}
} // namespace gh_r701
