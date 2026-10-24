#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: func_0079ABD0
// Address: 0x79abd0 - 0x79ad90
void func_0079ABD0_0x79abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079ABD0_0x79abd0");
#endif

    switch (ctx->pc) {
        case 0x79ac18u: goto label_79ac18;
        case 0x79ac40u: goto label_79ac40;
        case 0x79ac70u: goto label_79ac70;
        case 0x79aca8u: goto label_79aca8;
        case 0x79acbcu: goto label_79acbc;
        case 0x79acccu: goto label_79accc;
        case 0x79ace4u: goto label_79ace4;
        case 0x79acfcu: goto label_79acfc;
        case 0x79ad10u: goto label_79ad10;
        case 0x79ad24u: goto label_79ad24;
        case 0x79ad34u: goto label_79ad34;
        case 0x79ad38u: goto label_79ad38;
        case 0x79ad58u: goto label_79ad58;
        default: break;
    }

    ctx->pc = 0x79abd0u;

    // 0x79abd0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79abd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79abd4: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79abd8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x79abd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x79abdc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79abe0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x79abe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x79abe4: 0x24714c58  addiu       $s1, $v1, 0x4C58
    ctx->pc = 0x79abe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79abe8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x79abe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x79abec: 0x2452c118  addiu       $s2, $v0, -0x3EE8
    ctx->pc = 0x79abecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951192));
    // 0x79abf0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x79abf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x79abf4: 0x4b880  sll         $s7, $a0, 2
    ctx->pc = 0x79abf4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x79abf8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x79abf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x79abfc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79abfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac00: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x79ac00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x79ac04: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x79ac04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x79ac08: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x79ac08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x79ac0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79ac0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79ac10: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x79ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79ac14: 0x0  nop
    ctx->pc = 0x79ac14u;
    // NOP
label_79ac18:
    // 0x79ac18: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x79ac18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79ac1c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x79ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x79ac20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ac20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79ac28: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x79ac28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79ac2c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79AC2Cu;
    {
        const bool branch_taken_0x79ac2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC2Cu;
        // 0x79ac30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac2c) {
            ctx->pc = 0x79AC68u;
            goto label_79ac68;
        }
    }
    ctx->pc = 0x79AC34u;
    // 0x79ac34: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79ac34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac38: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ac38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ac3c: 0x0  nop
    ctx->pc = 0x79ac3cu;
    // NOP
label_79ac40:
    // 0x79ac40: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79ac44: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79ac44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79ac48: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79ac48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79ac4c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79ac4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79ac50: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79ac50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79ac54: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AC54u;
    {
        const bool branch_taken_0x79ac54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC54u;
        // 0x79ac58: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac54) {
            ctx->pc = 0x79AC68u;
            goto label_79ac68;
        }
    }
    ctx->pc = 0x79AC5Cu;
    // 0x79ac5c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ac5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ac60: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AC60u;
    {
        const bool branch_taken_0x79ac60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ac60) {
            ctx->pc = 0x79AC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AC60u;
            // 0x79ac64: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ac40;
        }
    }
    ctx->pc = 0x79AC68u;
label_79ac68:
    // 0x79ac68: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79AC68u;
    SET_GPR_U32(ctx, 31, 0x79AC70u);
    ctx->pc = 0x79AC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC68u;
    // 0x79ac6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79AC68u, 0x79AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC70u;
label_79ac70:
    // 0x79ac70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x79ac70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac74: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AC74u;
    {
        const bool branch_taken_0x79ac74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ac74) {
            ctx->pc = 0x79AC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AC74u;
            // 0x79ac78: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AC8Cu;
            goto label_79ac8c;
        }
    }
    ctx->pc = 0x79AC7Cu;
    // 0x79ac7c: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x79ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x79ac80: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x79ac80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x79ac84: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x79ac84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x79ac88: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x79ac88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79ac8c:
    // 0x79ac8c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x79ac8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x79ac90: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x79AC90u;
    {
        const bool branch_taken_0x79ac90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC90u;
        // 0x79ac94: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac90) {
            ctx->pc = 0x79AC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ac18;
        }
    }
    ctx->pc = 0x79AC98u;
    // 0x79ac98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ac9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ac9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aca0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79ACA0u;
    SET_GPR_U32(ctx, 31, 0x79ACA8u);
    ctx->pc = 0x79ACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACA0u;
    // 0x79aca4: 0x3c11005d  lui         $s1, 0x5D (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79ACA0u, 0x79ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACA8u;
label_79aca8:
    // 0x79aca8: 0x2631ae50  addiu       $s1, $s1, -0x51B0
    ctx->pc = 0x79aca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946384));
    // 0x79acac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79acacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79acb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acb4: 0xc04cccc  jal         func_133330
    ctx->pc = 0x79ACB4u;
    SET_GPR_U32(ctx, 31, 0x79ACBCu);
    ctx->pc = 0x79ACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACB4u;
    // 0x79acb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x79ACB4u, 0x79ACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACBCu;
label_79acbc:
    // 0x79acbc: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79acbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79acc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x79acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79acc4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79ACC4u;
    SET_GPR_U32(ctx, 31, 0x79ACCCu);
    ctx->pc = 0x79ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACC4u;
    // 0x79acc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79ACC4u, 0x79ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACCCu;
label_79accc:
    // 0x79accc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79acccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79acd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acd4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79acd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79acd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79acd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79acdc: 0xc04cccc  jal         func_133330
    ctx->pc = 0x79ACDCu;
    SET_GPR_U32(ctx, 31, 0x79ACE4u);
    ctx->pc = 0x79ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACDCu;
    // 0x79ace0: 0x24160009  addiu       $s6, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x79ACDCu, 0x79ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACE4u;
label_79ace4:
    // 0x79ace4: 0x2415000d  addiu       $s5, $zero, 0xD
    ctx->pc = 0x79ace4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79ace8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79ace8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79acecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79acf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79acf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acf4: 0xc04cccc  jal         func_133330
    ctx->pc = 0x79ACF4u;
    SET_GPR_U32(ctx, 31, 0x79ACFCu);
    ctx->pc = 0x79ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACF4u;
    // 0x79acf8: 0x2414000e  addiu       $s4, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x79ACF4u, 0x79ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACFCu;
label_79acfc:
    // 0x79acfc: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x79acfcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x79ad00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79ad00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79ad04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad08: 0xc04cccc  jal         func_133330
    ctx->pc = 0x79AD08u;
    SET_GPR_U32(ctx, 31, 0x79AD10u);
    ctx->pc = 0x79AD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD08u;
    // 0x79ad0c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x79AD08u, 0x79AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD10u;
label_79ad10:
    // 0x79ad10: 0x2610c100  addiu       $s0, $s0, -0x3F00
    ctx->pc = 0x79ad10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951168));
    // 0x79ad14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ad14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ad18: 0x2f08021  addu        $s0, $s7, $s0
    ctx->pc = 0x79ad18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x79ad1c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79AD1Cu;
    SET_GPR_U32(ctx, 31, 0x79AD24u);
    ctx->pc = 0x79AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD1Cu;
    // 0x79ad20: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79AD1Cu, 0x79AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD24u;
label_79ad24:
    // 0x79ad24: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x79ad24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79ad28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79ad28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad2c: 0xc04cccc  jal         func_133330
    ctx->pc = 0x79AD2Cu;
    SET_GPR_U32(ctx, 31, 0x79AD34u);
    ctx->pc = 0x79AD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD2Cu;
    // 0x79ad30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x79AD2Cu, 0x79AD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD34u;
label_79ad34:
    // 0x79ad34: 0x0  nop
    ctx->pc = 0x79ad34u;
    // NOP
label_79ad38:
    // 0x79ad38: 0x52560008  beql        $s2, $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x79AD38u;
    {
        const bool branch_taken_0x79ad38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        if (branch_taken_0x79ad38) {
            ctx->pc = 0x79AD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AD38u;
            // 0x79ad3c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD5Cu;
            goto label_79ad5c;
        }
    }
    ctx->pc = 0x79AD40u;
    // 0x79ad40: 0x12550005  beq         $s2, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AD40u;
    {
        const bool branch_taken_0x79ad40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x79AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD40u;
        // 0x79ad44: 0x3245ffff  andi        $a1, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad40) {
            ctx->pc = 0x79AD58u;
            goto label_79ad58;
        }
    }
    ctx->pc = 0x79AD48u;
    // 0x79ad48: 0x12540003  beq         $s2, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AD48u;
    {
        const bool branch_taken_0x79ad48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x79AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD48u;
        // 0x79ad4c: 0x2664ea60  addiu       $a0, $s3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad48) {
            ctx->pc = 0x79AD58u;
            goto label_79ad58;
        }
    }
    ctx->pc = 0x79AD50u;
    // 0x79ad50: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79AD50u;
    SET_GPR_U32(ctx, 31, 0x79AD58u);
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79AD50u, 0x79AD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD58u;
label_79ad58:
    // 0x79ad58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x79ad58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_79ad5c:
    // 0x79ad5c: 0x2a42000f  slti        $v0, $s2, 0xF
    ctx->pc = 0x79ad5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x79ad60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x79AD60u;
    {
        const bool branch_taken_0x79ad60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD60u;
        // 0x79ad64: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad60) {
            ctx->pc = 0x79AD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ad38;
        }
    }
    ctx->pc = 0x79AD68u;
    // 0x79ad68: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79ad68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79ad6c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79ad6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79ad70: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x79ad70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79ad74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x79ad74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79ad78: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x79ad78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79ad7c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x79ad7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79ad80: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x79ad80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79ad84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ad84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ad88: 0x3e00008  jr          $ra
    ctx->pc = 0x79AD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD88u;
        // 0x79ad8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AD90u;
}
} // namespace gh_r700
