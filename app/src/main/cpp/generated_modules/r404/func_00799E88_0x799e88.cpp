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
// Function: func_00799E88
// Address: 0x799e88 - 0x79a020
void func_00799E88_0x799e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799E88_0x799e88");
#endif

    switch (ctx->pc) {
        case 0x799ee0u: goto label_799ee0;
        case 0x799f10u: goto label_799f10;
        case 0x799f38u: goto label_799f38;
        case 0x799f68u: goto label_799f68;
        case 0x799f88u: goto label_799f88;
        case 0x799f94u: goto label_799f94;
        case 0x799fa4u: goto label_799fa4;
        case 0x799fb4u: goto label_799fb4;
        case 0x799fc0u: goto label_799fc0;
        case 0x799fccu: goto label_799fcc;
        case 0x799fdcu: goto label_799fdc;
        case 0x799fe8u: goto label_799fe8;
        case 0x799ff4u: goto label_799ff4;
        case 0x79a000u: goto label_79a000;
        default: break;
    }

    ctx->pc = 0x799e88u;

    // 0x799e88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x799e8c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799e90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x799e94: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x799e98: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799e9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x799e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ea0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x799ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x799ea4: 0x2448abf0  addiu       $t0, $v0, -0x5410
    ctx->pc = 0x799ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945776));
    // 0x799ea8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x799ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x799eac: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x799eacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x799eb0: 0x8046abf0  lb          $a2, -0x5410($v0)
    ctx->pc = 0x799eb0u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x79ABF0u));
    // 0x799eb4: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x799eb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799eb8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799ebc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x799ebcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ec8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799ec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ecc: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x799ECCu;
    {
        const bool branch_taken_0x799ecc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x799ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ECCu;
        // 0x799ed0: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ecc) {
            ctx->pc = 0x799F08u;
            goto label_799f08;
        }
    }
    ctx->pc = 0x799ED4u;
    // 0x799ed4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x799ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
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
    // 0x799f0c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799F08u, 0x799F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F10u;
label_799f10:
    // 0x799f10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f14: 0x26884c58  addiu       $t0, $s4, 0x4C58
    ctx->pc = 0x799f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 19544));
    // 0x799f18: 0x8202abf8  lb          $v0, -0x5408($s0)
    ctx->pc = 0x799f18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294945784)));
    // 0x799f1c: 0x2603abf8  addiu       $v1, $s0, -0x5408
    ctx->pc = 0x799f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945784));
    // 0x799f20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f24: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799F24u;
    {
        const bool branch_taken_0x799f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F24u;
        // 0x799f28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f24) {
            ctx->pc = 0x799F60u;
            goto label_799f60;
        }
    }
    ctx->pc = 0x799F2Cu;
    // 0x799f2c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f30: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799f30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799f34: 0x0  nop
    ctx->pc = 0x799f34u;
    // NOP
label_799f38:
    // 0x799f38: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799f38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799f3c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799f40: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799f44: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799f48: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799f48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799f4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799F4Cu;
    {
        const bool branch_taken_0x799f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F4Cu;
        // 0x799f50: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f4c) {
            ctx->pc = 0x799F60u;
            goto label_799f60;
        }
    }
    ctx->pc = 0x799F54u;
    // 0x799f54: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799f54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799f58: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799F58u;
    {
        const bool branch_taken_0x799f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799f58) {
            ctx->pc = 0x799F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F58u;
            // 0x799f5c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f38;
        }
    }
    ctx->pc = 0x799F60u;
label_799f60:
    // 0x799f60: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799F60u;
    SET_GPR_U32(ctx, 31, 0x799F68u);
    ctx->pc = 0x799F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F60u;
    // 0x799f64: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799F60u, 0x799F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F68u;
label_799f68:
    // 0x799f68: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x799F68u;
    {
        const bool branch_taken_0x799f68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F68u;
        // 0x799f6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f68) {
            ctx->pc = 0x79A000u;
            goto label_79a000;
        }
    }
    ctx->pc = 0x799F70u;
    // 0x799f70: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x799F70u;
    {
        const bool branch_taken_0x799f70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F70u;
        // 0x799f74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f70) {
            ctx->pc = 0x79A000u;
            goto label_79a000;
        }
    }
    ctx->pc = 0x799F78u;
    // 0x799f78: 0x16620016  bne         $s3, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x799F78u;
    {
        const bool branch_taken_0x799f78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x799F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F78u;
        // 0x799f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f78) {
            ctx->pc = 0x799FD4u;
            goto label_799fd4;
        }
    }
    ctx->pc = 0x799F80u;
    // 0x799f80: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x799F80u;
    SET_GPR_U32(ctx, 31, 0x799F88u);
    ctx->pc = 0x799F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F80u;
    // 0x799f84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x799F80u, 0x799F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F88u;
label_799f88:
    // 0x799f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f8c: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x799F8Cu;
    SET_GPR_U32(ctx, 31, 0x799F94u);
    ctx->pc = 0x799F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F8Cu;
    // 0x799f90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x799F8Cu, 0x799F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F94u;
label_799f94:
    // 0x799f94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f9c: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x799F9Cu;
    SET_GPR_U32(ctx, 31, 0x799FA4u);
    ctx->pc = 0x799FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F9Cu;
    // 0x799fa0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x799F9Cu, 0x799FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FA4u;
label_799fa4:
    // 0x799fa4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x799fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fac: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x799FACu;
    SET_GPR_U32(ctx, 31, 0x799FB4u);
    ctx->pc = 0x799FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FACu;
    // 0x799fb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x799FACu, 0x799FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FB4u;
label_799fb4:
    // 0x799fb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fb8: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x799FB8u;
    SET_GPR_U32(ctx, 31, 0x799FC0u);
    ctx->pc = 0x799FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FB8u;
    // 0x799fbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x799FB8u, 0x799FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FC0u;
label_799fc0:
    // 0x799fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fc4: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x799FC4u;
    SET_GPR_U32(ctx, 31, 0x799FCCu);
    ctx->pc = 0x799FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FC4u;
    // 0x799fc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x799FC4u, 0x799FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FCCu;
label_799fcc:
    // 0x799fcc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x799FCCu;
    {
        const bool branch_taken_0x799fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FCCu;
        // 0x799fd0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fcc) {
            ctx->pc = 0x79A004u;
            goto label_79a004;
        }
    }
    ctx->pc = 0x799FD4u;
label_799fd4:
    // 0x799fd4: 0xc06f448  jal         func_1BD120
    ctx->pc = 0x799FD4u;
    SET_GPR_U32(ctx, 31, 0x799FDCu);
    ctx->pc = 0x799FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FD4u;
    // 0x799fd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD120u, 0x799FD4u, 0x799FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FDCu;
label_799fdc:
    // 0x799fdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x799fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fe0: 0xc06f448  jal         func_1BD120
    ctx->pc = 0x799FE0u;
    SET_GPR_U32(ctx, 31, 0x799FE8u);
    ctx->pc = 0x799FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FE0u;
    // 0x799fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD120u, 0x799FE0u, 0x799FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FE8u;
label_799fe8:
    // 0x799fe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fec: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x799FECu;
    SET_GPR_U32(ctx, 31, 0x799FF4u);
    ctx->pc = 0x799FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FECu;
    // 0x799ff0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x799FECu, 0x799FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FF4u;
label_799ff4:
    // 0x799ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ff8: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x799FF8u;
    SET_GPR_U32(ctx, 31, 0x79A000u);
    ctx->pc = 0x799FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF8u;
    // 0x799ffc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x799FF8u, 0x79A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A000u;
label_79a000:
    // 0x79a000: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79a000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79a004:
    // 0x79a004: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79a004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a008: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79a008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a00c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79a00cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a010: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x79a010u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a018: 0x3e00008  jr          $ra
    ctx->pc = 0x79A018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A018u;
        // 0x79a01c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A020u;
}
} // namespace gh_r404
