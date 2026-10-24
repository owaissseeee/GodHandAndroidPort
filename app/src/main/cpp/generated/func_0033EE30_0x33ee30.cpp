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

// Function: func_0033EE30
// Address: 0x33ee30 - 0x33f050
void func_0033EE30_0x33ee30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033EE30_0x33ee30");
#endif

    switch (ctx->pc) {
        case 0x33ee78u: goto label_33ee78;
        default: break;
    }

    ctx->pc = 0x33ee30u;

    // 0x33ee30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33ee30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33ee34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x33ee34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x33ee38: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33ee38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ee3c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33ee3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x33ee40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33ee40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ee44: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x33ee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x33ee48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33ee48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ee4c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x33ee4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x33ee50: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x33ee50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ee54: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x33ee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x33ee58: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x33ee58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ee5c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x33ee5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x33ee60: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x33ee60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ee64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33ee64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33ee68: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x33ee68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ee6c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x33ee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x33ee70: 0xc0cfa88  jal         func_33EA20
    ctx->pc = 0x33EE70u;
    SET_GPR_U32(ctx, 31, 0x33EE78u);
    ctx->pc = 0x33EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EE70u;
    // 0x33ee74: 0x27a70001  addiu       $a3, $sp, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EA20u, 0x33EE70u, 0x33EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EE78u;
label_33ee78:
    // 0x33ee78: 0x5440006c  bnel        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x33EE78u;
    {
        const bool branch_taken_0x33ee78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ee78) {
            ctx->pc = 0x33EE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33EE78u;
            // 0x33ee7c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F02Cu;
            goto label_33f02c;
        }
    }
    ctx->pc = 0x33EE80u;
    // 0x33ee80: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x33ee80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ee84: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x33ee84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x33ee88: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x33ee88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x33ee8c: 0x38670004  xori        $a3, $v1, 0x4
    ctx->pc = 0x33ee8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x33ee90: 0x87300a  movz        $a2, $a0, $a3
    ctx->pc = 0x33ee90u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x33ee94: 0x226182a  slt         $v1, $s1, $a2
    ctx->pc = 0x33ee94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x33ee98: 0x54600063  bnel        $v1, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x33EE98u;
    {
        const bool branch_taken_0x33ee98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ee98) {
            ctx->pc = 0x33EE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33EE98u;
            // 0x33ee9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F028u;
            goto label_33f028;
        }
    }
    ctx->pc = 0x33EEA0u;
    // 0x33eea0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x33eea0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33eea4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x33eea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x33eea8: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x33eea8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33eeac: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x33eeacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x33eeb0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33eeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33eeb4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33eeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33eeb8: 0x1465002b  bne         $v1, $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x33EEB8u;
    {
        const bool branch_taken_0x33eeb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x33EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EEB8u;
        // 0x33eebc: 0x240aff00  addiu       $t2, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eeb8) {
            ctx->pc = 0x33EF68u;
            goto label_33ef68;
        }
    }
    ctx->pc = 0x33EEC0u;
    // 0x33eec0: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x33eec0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x33eec4: 0x24c5fffc  addiu       $a1, $a2, -0x4
    ctx->pc = 0x33eec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x33eec8: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x33eec8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x33eecc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x33eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33eed0: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x33eed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x33eed4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33eed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x33eed8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x33eed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x33eedc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x33eedcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x33eee0: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x33eee0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x33eee4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33EEE4u;
    {
        const bool branch_taken_0x33eee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EEE4u;
        // 0x33eee8: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eee4) {
            ctx->pc = 0x33EEF8u;
            goto label_33eef8;
        }
    }
    ctx->pc = 0x33EEECu;
    // 0x33eeec: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x33EEECu;
    {
        const bool branch_taken_0x33eeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EEECu;
        // 0x33eef0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eeec) {
            ctx->pc = 0x33F028u;
            goto label_33f028;
        }
    }
    ctx->pc = 0x33EEF4u;
    // 0x33eef4: 0x0  nop
    ctx->pc = 0x33eef4u;
    // NOP
label_33eef8:
    // 0x33eef8: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x33eef8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x33eefc: 0x67480a  movz        $t1, $v1, $a3
    ctx->pc = 0x33eefcu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x33ef00: 0x3c084149  lui         $t0, 0x4149
    ctx->pc = 0x33ef00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16713 << 16));
    // 0x33ef04: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x33ef04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x33ef08: 0x35084e46  ori         $t0, $t0, 0x4E46
    ctx->pc = 0x33ef08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20038);
    // 0x33ef0c: 0x2092821  addu        $a1, $s0, $t1
    ctx->pc = 0x33ef0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x33ef10: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x33ef10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x33ef14: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x33ef14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33ef18: 0x25260014  addiu       $a2, $t1, 0x14
    ctx->pc = 0x33ef18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
    // 0x33ef1c: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x33ef1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x33ef20: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x33ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33ef24: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x33ef24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x33ef28: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33ef28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x33ef2c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x33ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x33ef30: 0xc4480b  movn        $t1, $a2, $a0
    ctx->pc = 0x33ef30u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 6));
    // 0x33ef34: 0x2092821  addu        $a1, $s0, $t1
    ctx->pc = 0x33ef34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x33ef38: 0x90a60001  lbu         $a2, 0x1($a1)
    ctx->pc = 0x33ef38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x33ef3c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x33ef3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33ef40: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x33ef40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x33ef44: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x33ef44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x33ef48: 0x90a70003  lbu         $a3, 0x3($a1)
    ctx->pc = 0x33ef48u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x33ef4c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x33ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x33ef50: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x33ef50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x33ef54: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x33ef54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x33ef58: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x33ef58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x33ef5c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33ef5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33ef60: 0x10680003  beq         $v1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33EF60u;
    {
        const bool branch_taken_0x33ef60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x33EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EF60u;
        // 0x33ef64: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ef60) {
            ctx->pc = 0x33EF70u;
            goto label_33ef70;
        }
    }
    ctx->pc = 0x33EF68u;
label_33ef68:
    // 0x33ef68: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x33EF68u;
    {
        const bool branch_taken_0x33ef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EF68u;
        // 0x33ef6c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ef68) {
            ctx->pc = 0x33F028u;
            goto label_33f028;
        }
    }
    ctx->pc = 0x33EF70u;
label_33ef70:
    // 0x33ef70: 0x2091821  addu        $v1, $s0, $t1
    ctx->pc = 0x33ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x33ef74: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x33ef74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x33ef78: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x33ef78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33ef7c: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x33ef7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
    // 0x33ef80: 0x2094021  addu        $t0, $s0, $t1
    ctx->pc = 0x33ef80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x33ef84: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x33ef84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x33ef88: 0x53203  sra         $a2, $a1, 8
    ctx->pc = 0x33ef88u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 8));
    // 0x33ef8c: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x33ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x33ef90: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x33ef90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x33ef94: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x33ef94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x33ef98: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x33ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x33ef9c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x33ef9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x33efa0: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x33efa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x33efa4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x33efa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x33efa8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33efa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33efac: 0x2092821  addu        $a1, $s0, $t1
    ctx->pc = 0x33efacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x33efb0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x33efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x33efb4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x33efb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x33efb8: 0x2093021  addu        $a2, $s0, $t1
    ctx->pc = 0x33efb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x33efbc: 0x1303821  addu        $a3, $t1, $s0
    ctx->pc = 0x33efbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x33efc0: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x33efc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x33efc4: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x33efc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x33efc8: 0x6904000f  ldl         $a0, 0xF($t0)
    ctx->pc = 0x33efc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x33efcc: 0x6d040008  ldr         $a0, 0x8($t0)
    ctx->pc = 0x33efccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x33efd0: 0xb2830007  sdl         $v1, 0x7($s4)
    ctx->pc = 0x33efd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33efd4: 0xb6830000  sdr         $v1, 0x0($s4)
    ctx->pc = 0x33efd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33efd8: 0xb284000f  sdl         $a0, 0xF($s4)
    ctx->pc = 0x33efd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33efdc: 0xb6840008  sdr         $a0, 0x8($s4)
    ctx->pc = 0x33efdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33efe0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x33efe0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33efe4: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x33efe4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x33efe8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x33efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33efec: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x33efecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x33eff0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33eff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x33eff4: 0xa6a40000  sh          $a0, 0x0($s5)
    ctx->pc = 0x33eff4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x33eff8: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x33eff8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33effc: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x33effcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x33f000: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x33f000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33f004: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x33f004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x33f008: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33f008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x33f00c: 0xa6640000  sh          $a0, 0x0($s3)
    ctx->pc = 0x33f00cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x33f010: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x33f010u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x33f014: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x33f014u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x33f018: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x33f018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33f01c: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x33f01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x33f020: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33f020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x33f024: 0xa6640002  sh          $a0, 0x2($s3)
    ctx->pc = 0x33f024u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 4));
label_33f028:
    // 0x33f028: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33f028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33f02c:
    // 0x33f02c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33f02cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f030: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x33f030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f034: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x33f034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f038: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x33f038u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f03c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x33f03cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33f040: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33f040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33f044: 0x3e00008  jr          $ra
    ctx->pc = 0x33F044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F044u;
        // 0x33f048: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F04Cu;
    // 0x33f04c: 0x0  nop
    ctx->pc = 0x33f04cu;
    // NOP
    ctx->pc = 0x33f050u;
}
