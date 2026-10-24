#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: func_0079AB48
// Address: 0x79ab48 - 0x79ad30
void func_0079AB48_0x79ab48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AB48_0x79ab48");
#endif

    switch (ctx->pc) {
        case 0x79aba0u: goto label_79aba0;
        case 0x79abd0u: goto label_79abd0;
        case 0x79abf8u: goto label_79abf8;
        case 0x79ac28u: goto label_79ac28;
        case 0x79ac50u: goto label_79ac50;
        case 0x79ac58u: goto label_79ac58;
        case 0x79ac80u: goto label_79ac80;
        case 0x79ac90u: goto label_79ac90;
        case 0x79ac98u: goto label_79ac98;
        case 0x79acb0u: goto label_79acb0;
        case 0x79acb8u: goto label_79acb8;
        case 0x79ace0u: goto label_79ace0;
        case 0x79acf8u: goto label_79acf8;
        case 0x79ad08u: goto label_79ad08;
        case 0x79ad10u: goto label_79ad10;
        default: break;
    }

    ctx->pc = 0x79ab48u;

    // 0x79ab48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79ab48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79ab4c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79ab50: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79ab50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79ab54: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79ab54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79ab58: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79ab58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79ab5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x79ab5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab60: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x79ab60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x79ab64: 0x2448de28  addiu       $t0, $v0, -0x21D8
    ctx->pc = 0x79ab64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958632));
    // 0x79ab68: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x79ab68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x79ab6c: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x79ab6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79ab70: 0x8046de28  lb          $a2, -0x21D8($v0)
    ctx->pc = 0x79ab70u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x79DE28u));
    // 0x79ab74: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x79ab74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab78: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79ab78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79ab7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x79ab7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79ab84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ab84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79ab88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab8c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x79AB8Cu;
    {
        const bool branch_taken_0x79ab8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB8Cu;
        // 0x79ab90: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab8c) {
            ctx->pc = 0x79ABC8u;
            goto label_79abc8;
        }
    }
    ctx->pc = 0x79AB94u;
    // 0x79ab94: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x79ab94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab98: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ab98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ab9c: 0x0  nop
    ctx->pc = 0x79ab9cu;
    // NOP
label_79aba0:
    // 0x79aba0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79aba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79aba4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79aba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79aba8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79aba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79abac: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79abacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79abb0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79abb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79abb4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79ABB4u;
    {
        const bool branch_taken_0x79abb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABB4u;
        // 0x79abb8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abb4) {
            ctx->pc = 0x79ABC8u;
            goto label_79abc8;
        }
    }
    ctx->pc = 0x79ABBCu;
    // 0x79abbc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79abbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79abc0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79ABC0u;
    {
        const bool branch_taken_0x79abc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79abc0) {
            ctx->pc = 0x79ABC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ABC0u;
            // 0x79abc4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ABA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aba0;
        }
    }
    ctx->pc = 0x79ABC8u;
label_79abc8:
    // 0x79abc8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79ABC8u;
    SET_GPR_U32(ctx, 31, 0x79ABD0u);
    ctx->pc = 0x79ABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABC8u;
    // 0x79abcc: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79ABC8u, 0x79ABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABD0u;
label_79abd0:
    // 0x79abd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79abd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79abd4: 0x26884c58  addiu       $t0, $s4, 0x4C58
    ctx->pc = 0x79abd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 19544));
    // 0x79abd8: 0x8202de30  lb          $v0, -0x21D0($s0)
    ctx->pc = 0x79abd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294958640)));
    // 0x79abdc: 0x2603de30  addiu       $v1, $s0, -0x21D0
    ctx->pc = 0x79abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958640));
    // 0x79abe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79abe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79abe4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79ABE4u;
    {
        const bool branch_taken_0x79abe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABE4u;
        // 0x79abe8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abe4) {
            ctx->pc = 0x79AC20u;
            goto label_79ac20;
        }
    }
    ctx->pc = 0x79ABECu;
    // 0x79abec: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79abecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79abf0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79abf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79abf4: 0x0  nop
    ctx->pc = 0x79abf4u;
    // NOP
label_79abf8:
    // 0x79abf8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79abfc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79abfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79ac00: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79ac00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79ac04: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79ac04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79ac08: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79ac08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79ac0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AC0Cu;
    {
        const bool branch_taken_0x79ac0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC0Cu;
        // 0x79ac10: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac0c) {
            ctx->pc = 0x79AC20u;
            goto label_79ac20;
        }
    }
    ctx->pc = 0x79AC14u;
    // 0x79ac14: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ac14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ac18: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AC18u;
    {
        const bool branch_taken_0x79ac18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ac18) {
            ctx->pc = 0x79AC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AC18u;
            // 0x79ac1c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ABF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79abf8;
        }
    }
    ctx->pc = 0x79AC20u;
label_79ac20:
    // 0x79ac20: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79AC20u;
    SET_GPR_U32(ctx, 31, 0x79AC28u);
    ctx->pc = 0x79AC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC20u;
    // 0x79ac24: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79AC20u, 0x79AC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC28u;
label_79ac28:
    // 0x79ac28: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x79AC28u;
    {
        const bool branch_taken_0x79ac28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC28u;
        // 0x79ac2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac28) {
            ctx->pc = 0x79AD10u;
            goto label_79ad10;
        }
    }
    ctx->pc = 0x79AC30u;
    // 0x79ac30: 0x52000038  beql        $s0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x79AC30u;
    {
        const bool branch_taken_0x79ac30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ac30) {
            ctx->pc = 0x79AC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AC30u;
            // 0x79ac34: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD14u;
            goto label_79ad14;
        }
    }
    ctx->pc = 0x79AC38u;
    // 0x79ac38: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x79AC38u;
    {
        const bool branch_taken_0x79ac38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ac38) {
            ctx->pc = 0x79ACA0u;
            goto label_79aca0;
        }
    }
    ctx->pc = 0x79AC40u;
    // 0x79ac40: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x79AC40u;
    {
        const bool branch_taken_0x79ac40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ac40) {
            ctx->pc = 0x79AC88u;
            goto label_79ac88;
        }
    }
    ctx->pc = 0x79AC48u;
    // 0x79ac48: 0xc06f6fe  jal         func_1BDBF8
    ctx->pc = 0x79AC48u;
    SET_GPR_U32(ctx, 31, 0x79AC50u);
    ctx->pc = 0x79AC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC48u;
    // 0x79ac4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBF8u, 0x79AC48u, 0x79AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC50u;
label_79ac50:
    // 0x79ac50: 0xc06f6fe  jal         func_1BDBF8
    ctx->pc = 0x79AC50u;
    SET_GPR_U32(ctx, 31, 0x79AC58u);
    ctx->pc = 0x79AC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC50u;
    // 0x79ac54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBF8u, 0x79AC50u, 0x79AC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC58u;
label_79ac58:
    // 0x79ac58: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79ac58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79ac5c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x79ac5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac60: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79ac64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79ac64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ac68: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x79ac68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x79ac6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79ac6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79ac70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79ac74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac78: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x79AC78u;
    SET_GPR_U32(ctx, 31, 0x79AC80u);
    ctx->pc = 0x79AC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC78u;
    // 0x79ac7c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x79AC78u, 0x79AC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC80u;
label_79ac80:
    // 0x79ac80: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x79AC80u;
    {
        const bool branch_taken_0x79ac80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC80u;
        // 0x79ac84: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac80) {
            ctx->pc = 0x79AD14u;
            goto label_79ad14;
        }
    }
    ctx->pc = 0x79AC88u;
label_79ac88:
    // 0x79ac88: 0xc06f712  jal         func_1BDC48
    ctx->pc = 0x79AC88u;
    SET_GPR_U32(ctx, 31, 0x79AC90u);
    ctx->pc = 0x79AC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC88u;
    // 0x79ac8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC48u, 0x79AC88u, 0x79AC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC90u;
label_79ac90:
    // 0x79ac90: 0xc06f712  jal         func_1BDC48
    ctx->pc = 0x79AC90u;
    SET_GPR_U32(ctx, 31, 0x79AC98u);
    ctx->pc = 0x79AC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC90u;
    // 0x79ac94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC48u, 0x79AC90u, 0x79AC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC98u;
label_79ac98:
    // 0x79ac98: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x79AC98u;
    {
        const bool branch_taken_0x79ac98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC98u;
        // 0x79ac9c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac98) {
            ctx->pc = 0x79AD14u;
            goto label_79ad14;
        }
    }
    ctx->pc = 0x79ACA0u;
label_79aca0:
    // 0x79aca0: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x79ACA0u;
    {
        const bool branch_taken_0x79aca0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x79aca0) {
            ctx->pc = 0x79AD00u;
            goto label_79ad00;
        }
    }
    ctx->pc = 0x79ACA8u;
    // 0x79aca8: 0xc06f708  jal         func_1BDC20
    ctx->pc = 0x79ACA8u;
    SET_GPR_U32(ctx, 31, 0x79ACB0u);
    ctx->pc = 0x79ACACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACA8u;
    // 0x79acac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC20u, 0x79ACA8u, 0x79ACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACB0u;
label_79acb0:
    // 0x79acb0: 0xc06f708  jal         func_1BDC20
    ctx->pc = 0x79ACB0u;
    SET_GPR_U32(ctx, 31, 0x79ACB8u);
    ctx->pc = 0x79ACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACB0u;
    // 0x79acb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC20u, 0x79ACB0u, 0x79ACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACB8u;
label_79acb8:
    // 0x79acb8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79acbc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79acbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79acc0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79acc4: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x79acc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x79acc8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x79acc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79accc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79acccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acd0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79acd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acd4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79acd4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acd8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x79ACD8u;
    SET_GPR_U32(ctx, 31, 0x79ACE0u);
    ctx->pc = 0x79ACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACD8u;
    // 0x79acdc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x79ACD8u, 0x79ACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACE0u;
label_79ace0:
    // 0x79ace0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79ace4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79ace4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79ace8: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x79ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79acec: 0x24a5ad30  addiu       $a1, $a1, -0x52D0
    ctx->pc = 0x79acecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946096));
    // 0x79acf0: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79ACF0u;
    SET_GPR_U32(ctx, 31, 0x79ACF8u);
    ctx->pc = 0x79ACF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACF0u;
    // 0x79acf4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79ACF0u, 0x79ACF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACF8u;
label_79acf8:
    // 0x79acf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79ACF8u;
    {
        const bool branch_taken_0x79acf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACF8u;
        // 0x79acfc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acf8) {
            ctx->pc = 0x79AD14u;
            goto label_79ad14;
        }
    }
    ctx->pc = 0x79AD00u;
label_79ad00:
    // 0x79ad00: 0xc06f73a  jal         func_1BDCE8
    ctx->pc = 0x79AD00u;
    SET_GPR_U32(ctx, 31, 0x79AD08u);
    ctx->pc = 0x79AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD00u;
    // 0x79ad04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDCE8u, 0x79AD00u, 0x79AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD08u;
label_79ad08:
    // 0x79ad08: 0xc06f73a  jal         func_1BDCE8
    ctx->pc = 0x79AD08u;
    SET_GPR_U32(ctx, 31, 0x79AD10u);
    ctx->pc = 0x79AD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD08u;
    // 0x79ad0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDCE8u, 0x79AD08u, 0x79AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD10u;
label_79ad10:
    // 0x79ad10: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79ad10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79ad14:
    // 0x79ad14: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79ad14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79ad18: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79ad18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79ad1c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79ad1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79ad20: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x79ad20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79ad24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ad24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ad28: 0x3e00008  jr          $ra
    ctx->pc = 0x79AD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD28u;
        // 0x79ad2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AD30u;
}
} // namespace gh_r301
