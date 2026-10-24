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

// Function: func_0033EBD0
// Address: 0x33ebd0 - 0x33ee30
void func_0033EBD0_0x33ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033EBD0_0x33ebd0");
#endif

    switch (ctx->pc) {
        case 0x33ec28u: goto label_33ec28;
        default: break;
    }

    ctx->pc = 0x33ebd0u;

    // 0x33ebd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33ebd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x33ebd4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x33ebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x33ebd8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x33ebd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ebdc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33ebdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x33ebe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33ebe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ebe4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x33ebe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x33ebe8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33ebe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ebec: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x33ebecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x33ebf0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x33ebf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ebf4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x33ebf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x33ebf8: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x33ebf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ebfc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x33ebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x33ec00: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x33ec00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ec04: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x33ec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x33ec08: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x33ec08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ec0c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x33ec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x33ec10: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x33ec10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ec14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x33ec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x33ec18: 0x27a70001  addiu       $a3, $sp, 0x1
    ctx->pc = 0x33ec18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x33ec1c: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x33ec1cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x33ec20: 0xc0cfa88  jal         func_33EA20
    ctx->pc = 0x33EC20u;
    SET_GPR_U32(ctx, 31, 0x33EC28u);
    ctx->pc = 0x33EC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EC20u;
    // 0x33ec24: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EA20u, 0x33EC20u, 0x33EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EC28u;
label_33ec28:
    // 0x33ec28: 0x54400077  bnel        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x33EC28u;
    {
        const bool branch_taken_0x33ec28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ec28) {
            ctx->pc = 0x33EC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33EC28u;
            // 0x33ec2c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33EE08u;
            goto label_33ee08;
        }
    }
    ctx->pc = 0x33EC30u;
    // 0x33ec30: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x33ec30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ec34: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x33ec34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x33ec38: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x33ec38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x33ec3c: 0x38670004  xori        $a3, $v1, 0x4
    ctx->pc = 0x33ec3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x33ec40: 0x87300a  movz        $a2, $a0, $a3
    ctx->pc = 0x33ec40u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x33ec44: 0x226182a  slt         $v1, $s1, $a2
    ctx->pc = 0x33ec44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x33ec48: 0x5460006e  bnel        $v1, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x33EC48u;
    {
        const bool branch_taken_0x33ec48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ec48) {
            ctx->pc = 0x33EC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33EC48u;
            // 0x33ec4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33EE04u;
            goto label_33ee04;
        }
    }
    ctx->pc = 0x33EC50u;
    // 0x33ec50: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x33ec50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33ec54: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x33ec54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x33ec58: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x33ec58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33ec5c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x33ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x33ec60: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33ec60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33ec64: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33ec64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33ec68: 0x14650027  bne         $v1, $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x33EC68u;
    {
        const bool branch_taken_0x33ec68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x33EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC68u;
        // 0x33ec6c: 0x240eff00  addiu       $t6, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ec68) {
            ctx->pc = 0x33ED08u;
            goto label_33ed08;
        }
    }
    ctx->pc = 0x33EC70u;
    // 0x33ec70: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x33ec70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x33ec74: 0x24c5fffc  addiu       $a1, $a2, -0x4
    ctx->pc = 0x33ec74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x33ec78: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x33ec78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x33ec7c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x33ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33ec80: 0x6e1824  and         $v1, $v1, $t6
    ctx->pc = 0x33ec80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
    // 0x33ec84: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33ec84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x33ec88: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x33ec88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x33ec8c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x33ec8cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x33ec90: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x33ec90u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x33ec94: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33EC94u;
    {
        const bool branch_taken_0x33ec94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC94u;
        // 0x33ec98: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ec94) {
            ctx->pc = 0x33ECA8u;
            goto label_33eca8;
        }
    }
    ctx->pc = 0x33EC9Cu;
    // 0x33ec9c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x33EC9Cu;
    {
        const bool branch_taken_0x33ec9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EC9Cu;
        // 0x33eca0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ec9c) {
            ctx->pc = 0x33EE04u;
            goto label_33ee04;
        }
    }
    ctx->pc = 0x33ECA4u;
    // 0x33eca4: 0x0  nop
    ctx->pc = 0x33eca4u;
    // NOP
label_33eca8:
    // 0x33eca8: 0x240d0014  addiu       $t5, $zero, 0x14
    ctx->pc = 0x33eca8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x33ecac: 0x67680a  movz        $t5, $v1, $a3
    ctx->pc = 0x33ecacu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
    // 0x33ecb0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x33ecb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ecb4: 0x20d3021  addu        $a2, $s0, $t5
    ctx->pc = 0x33ecb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x33ecb8: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x33ecb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x33ecbc: 0x20d3821  addu        $a3, $s0, $t5
    ctx->pc = 0x33ecbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x33ecc0: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x33ecc0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x33ecc4: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x33ecc4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33ecc8: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x33ecc8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33eccc: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x33ecccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x33ecd0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x33ecd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x33ecd4: 0x90e60001  lbu         $a2, 0x1($a3)
    ctx->pc = 0x33ecd4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x33ecd8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x33ecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x33ecdc: 0x8e2024  and         $a0, $a0, $t6
    ctx->pc = 0x33ecdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 14));
    // 0x33ece0: 0xae2824  and         $a1, $a1, $t6
    ctx->pc = 0x33ece0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 14));
    // 0x33ece4: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x33ece4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x33ece8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x33ece8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x33ecec: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x33ececu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x33ecf0: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x33ecf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x33ecf4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x33ecf4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x33ecf8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x33ecf8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x33ecfc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x33ecfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x33ed00: 0x10880003  beq         $a0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33ED00u;
    {
        const bool branch_taken_0x33ed00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x33ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED00u;
        // 0x33ed04: 0xa6460000  sh          $a2, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ed00) {
            ctx->pc = 0x33ED10u;
            goto label_33ed10;
        }
    }
    ctx->pc = 0x33ED08u;
label_33ed08:
    // 0x33ed08: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x33ED08u;
    {
        const bool branch_taken_0x33ed08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ED08u;
        // 0x33ed0c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ed08) {
            ctx->pc = 0x33EE04u;
            goto label_33ee04;
        }
    }
    ctx->pc = 0x33ED10u;
label_33ed10:
    // 0x33ed10: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x33ed10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x33ed14: 0x3c0900ff  lui         $t1, 0xFF
    ctx->pc = 0x33ed14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)255 << 16));
    // 0x33ed18: 0x20d5021  addu        $t2, $s0, $t5
    ctx->pc = 0x33ed18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x33ed1c: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x33ed1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x33ed20: 0x20d1821  addu        $v1, $s0, $t5
    ctx->pc = 0x33ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x33ed24: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x33ed24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x33ed28: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x33ed28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33ed2c: 0x20d5821  addu        $t3, $s0, $t5
    ctx->pc = 0x33ed2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x33ed30: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x33ed30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x33ed34: 0x95470000  lhu         $a3, 0x0($t2)
    ctx->pc = 0x33ed34u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x33ed38: 0x53203  sra         $a2, $a1, 8
    ctx->pc = 0x33ed38u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 8));
    // 0x33ed3c: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x33ed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x33ed40: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x33ed40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x33ed44: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x33ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x33ed48: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x33ed48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x33ed4c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x33ed4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x33ed50: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x33ed50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x33ed54: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x33ed54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x33ed58: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33ed58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33ed5c: 0x20d6021  addu        $t4, $s0, $t5
    ctx->pc = 0x33ed5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x33ed60: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x33ed60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x33ed64: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x33ed64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x33ed68: 0x91480001  lbu         $t0, 0x1($t2)
    ctx->pc = 0x33ed68u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x33ed6c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x33ed6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x33ed70: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x33ed70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x33ed74: 0xee3824  and         $a3, $a3, $t6
    ctx->pc = 0x33ed74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 14));
    // 0x33ed78: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x33ed78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x33ed7c: 0x53203  sra         $a2, $a1, 8
    ctx->pc = 0x33ed7cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 8));
    // 0x33ed80: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x33ed80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x33ed84: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x33ed84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x33ed88: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x33ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x33ed8c: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x33ed8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x33ed90: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x33ed90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x33ed94: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x33ed94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x33ed98: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x33ed98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x33ed9c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33ed9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33eda0: 0xa6c80000  sh          $t0, 0x0($s6)
    ctx->pc = 0x33eda0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x33eda4: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x33eda4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x33eda8: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x33eda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x33edac: 0x43203  sra         $a2, $a0, 8
    ctx->pc = 0x33edacu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 8));
    // 0x33edb0: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x33edb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x33edb4: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x33edb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x33edb8: 0x41e02  srl         $v1, $a0, 24
    ctx->pc = 0x33edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x33edbc: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x33edbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x33edc0: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x33edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x33edc4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x33edc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x33edc8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33edc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33edcc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x33edccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x33edd0: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x33edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x33edd4: 0x8da40004  lw          $a0, 0x4($t5)
    ctx->pc = 0x33edd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x33edd8: 0x43203  sra         $a2, $a0, 8
    ctx->pc = 0x33edd8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 8));
    // 0x33eddc: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x33eddcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x33ede0: 0x41e02  srl         $v1, $a0, 24
    ctx->pc = 0x33ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x33ede4: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x33ede4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x33ede8: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x33ede8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x33edec: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x33edecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x33edf0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33edf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33edf4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x33edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33edf8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x33edf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x33edfc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x33edfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x33ee00: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33ee00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_33ee04:
    // 0x33ee04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33ee04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33ee08:
    // 0x33ee08: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33ee08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ee0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x33ee0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33ee10: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x33ee10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33ee14: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x33ee14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33ee18: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x33ee18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ee1c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x33ee1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33ee20: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x33ee20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33ee24: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x33ee24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33ee28: 0x3e00008  jr          $ra
    ctx->pc = 0x33EE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE28u;
        // 0x33ee2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EE30u;
}
