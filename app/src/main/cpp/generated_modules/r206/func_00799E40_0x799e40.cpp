#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: func_00799E40
// Address: 0x799e40 - 0x79a020
void func_00799E40_0x799e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799E40_0x799e40");
#endif

    switch (ctx->pc) {
        case 0x799e88u: goto label_799e88;
        case 0x799eb8u: goto label_799eb8;
        case 0x799ee0u: goto label_799ee0;
        case 0x799f10u: goto label_799f10;
        case 0x799f2cu: goto label_799f2c;
        case 0x799f38u: goto label_799f38;
        case 0x799f48u: goto label_799f48;
        case 0x799f50u: goto label_799f50;
        case 0x799f60u: goto label_799f60;
        case 0x799f68u: goto label_799f68;
        case 0x799f78u: goto label_799f78;
        case 0x799f80u: goto label_799f80;
        case 0x799f90u: goto label_799f90;
        case 0x799f98u: goto label_799f98;
        case 0x799fa8u: goto label_799fa8;
        case 0x799fccu: goto label_799fcc;
        case 0x799fdcu: goto label_799fdc;
        case 0x799fe4u: goto label_799fe4;
        case 0x799fecu: goto label_799fec;
        case 0x79a000u: goto label_79a000;
        default: break;
    }

    ctx->pc = 0x799e40u;

    // 0x799e40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799e44: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799e48: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x799e4c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799e50: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799e54: 0x2446ac28  addiu       $a2, $v0, -0x53D8
    ctx->pc = 0x799e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945832));
    // 0x799e58: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x799e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x799e5c: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x799e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x799e60: 0x8044ac28  lb          $a0, -0x53D8($v0)
    ctx->pc = 0x799e60u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79AC28u));
    // 0x799e64: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x799e64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799e6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799e74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e78: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799e78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799e7c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x799E7Cu;
    {
        const bool branch_taken_0x799e7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E7Cu;
        // 0x799e80: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e7c) {
            ctx->pc = 0x799EB0u;
            goto label_799eb0;
        }
    }
    ctx->pc = 0x799E84u;
    // 0x799e84: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799e84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799e88:
    // 0x799e88: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799e88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799e8c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799e90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799e94: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799e98: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799e98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799e9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799E9Cu;
    {
        const bool branch_taken_0x799e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E9Cu;
        // 0x799ea0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e9c) {
            ctx->pc = 0x799EB0u;
            goto label_799eb0;
        }
    }
    ctx->pc = 0x799EA4u;
    // 0x799ea4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799ea4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799ea8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799EA8u;
    {
        const bool branch_taken_0x799ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799ea8) {
            ctx->pc = 0x799EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799EA8u;
            // 0x799eac: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e88;
        }
    }
    ctx->pc = 0x799EB0u;
label_799eb0:
    // 0x799eb0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799EB0u;
    SET_GPR_U32(ctx, 31, 0x799EB8u);
    ctx->pc = 0x799EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EB0u;
    // 0x799eb4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799EB0u, 0x799EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EB8u;
label_799eb8:
    // 0x799eb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x799eb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ebc: 0x26684c58  addiu       $t0, $s3, 0x4C58
    ctx->pc = 0x799ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19544));
    // 0x799ec0: 0x8202ac30  lb          $v0, -0x53D0($s0)
    ctx->pc = 0x799ec0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294945840)));
    // 0x799ec4: 0x2603ac30  addiu       $v1, $s0, -0x53D0
    ctx->pc = 0x799ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945840));
    // 0x799ec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ecc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799ECCu;
    {
        const bool branch_taken_0x799ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ECCu;
        // 0x799ed0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ecc) {
            ctx->pc = 0x799F08u;
            goto label_799f08;
        }
    }
    ctx->pc = 0x799ED4u;
    // 0x799ed4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ed8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799ed8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799edc: 0x0  nop
    ctx->pc = 0x799edcu;
    // NOP
label_799ee0:
    // 0x799ee0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799ee4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799ee8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799eec: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799ef0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799ef0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799ef4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799EF4u;
    {
        const bool branch_taken_0x799ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EF4u;
        // 0x799ef8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ef4) {
            ctx->pc = 0x799F08u;
            goto label_799f08;
        }
    }
    ctx->pc = 0x799EFCu;
    // 0x799efc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799efcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799f00: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799F00u;
    {
        const bool branch_taken_0x799f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799f00) {
            ctx->pc = 0x799F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F00u;
            // 0x799f04: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ee0;
        }
    }
    ctx->pc = 0x799F08u;
label_799f08:
    // 0x799f08: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799F08u;
    SET_GPR_U32(ctx, 31, 0x799F10u);
    ctx->pc = 0x799F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F08u;
    // 0x799f0c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799F08u, 0x799F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F10u;
label_799f10:
    // 0x799f10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f14: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x799F14u;
    {
        const bool branch_taken_0x799f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F14u;
        // 0x799f18: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f14) {
            ctx->pc = 0x799F40u;
            goto label_799f40;
        }
    }
    ctx->pc = 0x799F1Cu;
    // 0x799f1c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x799F1Cu;
    {
        const bool branch_taken_0x799f1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x799f1c) {
            ctx->pc = 0x799F40u;
            goto label_799f40;
        }
    }
    ctx->pc = 0x799F24u;
    // 0x799f24: 0xc0693a2  jal         func_1A4E88
    ctx->pc = 0x799F24u;
    SET_GPR_U32(ctx, 31, 0x799F2Cu);
    ctx->pc = 0x799F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F24u;
    // 0x799f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E88u, 0x799F24u, 0x799F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F2Cu;
label_799f2c:
    // 0x799f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f30: 0xc0693cc  jal         func_1A4F30
    ctx->pc = 0x799F30u;
    SET_GPR_U32(ctx, 31, 0x799F38u);
    ctx->pc = 0x799F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F30u;
    // 0x799f34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F30u, 0x799F30u, 0x799F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F38u;
label_799f38:
    // 0x799f38: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x799F38u;
    {
        const bool branch_taken_0x799f38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F38u;
        // 0x799f3c: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f38) {
            ctx->pc = 0x799F60u;
            goto label_799f60;
        }
    }
    ctx->pc = 0x799F40u;
label_799f40:
    // 0x799f40: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799F40u;
    SET_GPR_U32(ctx, 31, 0x799F48u);
    ctx->pc = 0x799F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F40u;
    // 0x799f44: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799F40u, 0x799F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F48u;
label_799f48:
    // 0x799f48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799F48u;
    {
        const bool branch_taken_0x799f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799f48) {
            ctx->pc = 0x799F60u;
            goto label_799f60;
        }
    }
    ctx->pc = 0x799F50u;
label_799f50:
    // 0x799f50: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799f54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f58: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799F58u;
    SET_GPR_U32(ctx, 31, 0x799F60u);
    ctx->pc = 0x799F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F58u;
    // 0x799f5c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F58u, 0x799F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F60u;
label_799f60:
    // 0x799f60: 0xc0693c4  jal         func_1A4F10
    ctx->pc = 0x799F60u;
    SET_GPR_U32(ctx, 31, 0x799F68u);
    ctx->pc = 0x799F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F60u;
    // 0x799f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x799F60u, 0x799F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F68u;
label_799f68:
    // 0x799f68: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799F68u;
    {
        const bool branch_taken_0x799f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F68u;
        // 0x799f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f68) {
            ctx->pc = 0x799F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f50;
        }
    }
    ctx->pc = 0x799F70u;
    // 0x799f70: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x799F70u;
    SET_GPR_U32(ctx, 31, 0x799F78u);
    ctx->pc = 0x799F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F70u;
    // 0x799f74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x799F70u, 0x799F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F78u;
label_799f78:
    // 0x799f78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799F78u;
    {
        const bool branch_taken_0x799f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F78u;
        // 0x799f7c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f78) {
            ctx->pc = 0x799F90u;
            goto label_799f90;
        }
    }
    ctx->pc = 0x799F80u;
label_799f80:
    // 0x799f80: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799f84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f88: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799F88u;
    SET_GPR_U32(ctx, 31, 0x799F90u);
    ctx->pc = 0x799F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F88u;
    // 0x799f8c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F88u, 0x799F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F90u;
label_799f90:
    // 0x799f90: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x799F90u;
    SET_GPR_U32(ctx, 31, 0x799F98u);
    ctx->pc = 0x799F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F90u;
    // 0x799f94: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x799F90u, 0x799F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F98u;
label_799f98:
    // 0x799f98: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799F98u;
    {
        const bool branch_taken_0x799f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F98u;
        // 0x799f9c: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f98) {
            ctx->pc = 0x799F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f80;
        }
    }
    ctx->pc = 0x799FA0u;
    // 0x799fa0: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799FA0u;
    SET_GPR_U32(ctx, 31, 0x799FA8u);
    ctx->pc = 0x799FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FA0u;
    // 0x799fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799FA0u, 0x799FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FA8u;
label_799fa8:
    // 0x799fa8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799fac: 0x240600ba  addiu       $a2, $zero, 0xBA
    ctx->pc = 0x799facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x799fb0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799fb4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799fb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799fb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fbc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799fbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799fc4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799FC4u;
    SET_GPR_U32(ctx, 31, 0x799FCCu);
    ctx->pc = 0x799FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FC4u;
    // 0x799fc8: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799FC4u, 0x799FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FCCu;
label_799fcc:
    // 0x799fcc: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799fd0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799fd4: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799FD4u;
    SET_GPR_U32(ctx, 31, 0x799FDCu);
    ctx->pc = 0x799FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FD4u;
    // 0x799fd8: 0x24a5ac60  addiu       $a1, $a1, -0x53A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799FD4u, 0x799FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FDCu;
label_799fdc:
    // 0x799fdc: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799FDCu;
    SET_GPR_U32(ctx, 31, 0x799FE4u);
    ctx->pc = 0x799FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FDCu;
    // 0x799fe0: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799FDCu, 0x799FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FE4u;
label_799fe4:
    // 0x799fe4: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799FE4u;
    SET_GPR_U32(ctx, 31, 0x799FECu);
    ctx->pc = 0x799FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FE4u;
    // 0x799fe8: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799FE4u, 0x799FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FECu;
label_799fec:
    // 0x799fec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x799fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799ff0: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x799ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
    // 0x799ff4: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x799ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799ff8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799FF8u;
    SET_GPR_U32(ctx, 31, 0x79A000u);
    ctx->pc = 0x799FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF8u;
    // 0x799ffc: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799FF8u, 0x79A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A000u;
label_79a000:
    // 0x79a000: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a004: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79a004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a008: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79a008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a00c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79a00cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a014: 0x3e00008  jr          $ra
    ctx->pc = 0x79A014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A014u;
        // 0x79a018: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A01Cu;
    // 0x79a01c: 0x0  nop
    ctx->pc = 0x79a01cu;
    // NOP
    ctx->pc = 0x79a020u;
}
} // namespace gh_r206
