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

// Function: func_00341F00
// Address: 0x341f00 - 0x3420e0
void func_00341F00_0x341f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00341F00_0x341f00");
#endif

    switch (ctx->pc) {
        case 0x341f70u: goto label_341f70;
        case 0x341fd0u: goto label_341fd0;
        default: break;
    }

    ctx->pc = 0x341f00u;

    // 0x341f00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x341f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x341f04: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x341f04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x341f08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x341f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x341f0c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x341f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x341f10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x341f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x341f14: 0x88c03  sra         $s1, $t0, 16
    ctx->pc = 0x341f14u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 8), 16));
    // 0x341f18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x341f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x341f1c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x341f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341f20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x341f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x341f24: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x341f24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341f28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x341f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x341f2c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x341f2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341f30: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x341f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x341f34: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x341f34u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x341f38: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x341f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x341f3c: 0xbb403  sra         $s6, $t3, 16
    ctx->pc = 0x341f3cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 11), 16));
    // 0x341f40: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x341f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x341f44: 0x98403  sra         $s0, $t1, 16
    ctx->pc = 0x341f44u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 9), 16));
    // 0x341f48: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x341f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x341f4c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x341f4cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341f50: 0x87b50050  lh          $s5, 0x50($sp)
    ctx->pc = 0x341f50u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x341f54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x341f54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341f58: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x341f58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x341f5c: 0x1a600051  blez        $s3, . + 4 + (0x51 << 2)
    ctx->pc = 0x341F5Cu;
    {
        const bool branch_taken_0x341f5c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x341F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F5Cu;
        // 0x341f60: 0x868e0002  lh          $t6, 0x2($s4) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341f5c) {
            ctx->pc = 0x3420A4u;
            goto label_3420a4;
        }
    }
    ctx->pc = 0x341F64u;
    // 0x341f64: 0x241eff00  addiu       $fp, $zero, -0x100
    ctx->pc = 0x341f64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x341f68: 0x3c170045  lui         $s7, 0x45
    ctx->pc = 0x341f68u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)69 << 16));
    // 0x341f6c: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x341f6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_341f70:
    // 0x341f70: 0x91a40001  lbu         $a0, 0x1($t5)
    ctx->pc = 0x341f70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x341f74: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x341f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x341f78: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x341f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x341f7c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x341f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x341f80: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x341f80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x341f84: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x341f84u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x341f88: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x341f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x341f8c: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x341F8Cu;
    {
        const bool branch_taken_0x341f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x341F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F8Cu;
        // 0x341f90: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341f8c) {
            ctx->pc = 0x3420B0u;
            goto label_3420b0;
        }
    }
    ctx->pc = 0x341F94u;
    // 0x341f94: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x341f94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x341f98: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x341f98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x341f9c: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x341f9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x341fa0: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x341fa0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x341fa4: 0x563818  mult        $a3, $v0, $s6
    ctx->pc = 0x341fa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x341fa8: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x341fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x341fac: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x341facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x341fb0: 0x24197fff  addiu       $t9, $zero, 0x7FFF
    ctx->pc = 0x341fb0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x341fb4: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x341fb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x341fb8: 0x26eb7060  addiu       $t3, $s7, 0x7060
    ctx->pc = 0x341fb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 23), 28768));
    // 0x341fbc: 0xf51821  addu        $v1, $a3, $s5
    ctx->pc = 0x341fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
    // 0x341fc0: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x341fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x341fc4: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x341fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x341fc8: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x341fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x341fcc: 0x0  nop
    ctx->pc = 0x341fccu;
    // NOP
label_341fd0:
    // 0x341fd0: 0x91a30000  lbu         $v1, 0x0($t5)
    ctx->pc = 0x341fd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x341fd4: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x341fd4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x341fd8: 0x20e1018  mult        $v0, $s0, $t6
    ctx->pc = 0x341fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x341fdc: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x341fdcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341fe0: 0x72252018  mult1       $a0, $s1, $a1
    ctx->pc = 0x341fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x341fe4: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x341fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x341fe8: 0x32f03  sra         $a1, $v1, 28
    ctx->pc = 0x341fe8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 28));
    // 0x341fec: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x341fecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x341ff0: 0xaf2818  mult        $a1, $a1, $t7
    ctx->pc = 0x341ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x341ff4: 0x20ec018  mult        $t8, $s0, $t6
    ctx->pc = 0x341ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
    // 0x341ff8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x341ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x341ffc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x341ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x342000: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x342000u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x342004: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x342004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x342008: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x342008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x34200c: 0x4b6021  addu        $t4, $v0, $t3
    ctx->pc = 0x34200cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x342010: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x342010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x342014: 0x28838000  slti        $v1, $a0, -0x8000
    ctx->pc = 0x342014u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x342018: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x342018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34201c: 0x324282a  slt         $a1, $t9, $a0
    ctx->pc = 0x34201cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x342020: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x342020u;
    {
        const bool branch_taken_0x342020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342020u;
        // 0x342024: 0x38630000  xori        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342020) {
            ctx->pc = 0x342034u;
            goto label_342034;
        }
    }
    ctx->pc = 0x342028u;
    // 0x342028: 0x325200b  movn        $a0, $t9, $a1
    ctx->pc = 0x342028u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 25));
    // 0x34202c: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x34202cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x342030: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x342030u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_342034:
    // 0x342034: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x342034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342038: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x342038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x34203c: 0x2251018  mult        $v0, $s1, $a1
    ctx->pc = 0x34203cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x342040: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x342040u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x342044: 0x6f2018  mult        $a0, $v1, $t7
    ctx->pc = 0x342044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x342048: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x342048u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34204c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x34204cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x342050: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x342050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x342054: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x342054u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x342058: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x342058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34205c: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x34205cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x342060: 0x28828000  slti        $v0, $a0, -0x8000
    ctx->pc = 0x342060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x342064: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x342064u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x342068: 0x324282a  slt         $a1, $t9, $a0
    ctx->pc = 0x342068u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34206c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34206Cu;
    {
        const bool branch_taken_0x34206c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x342070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34206Cu;
        // 0x342070: 0x384c0000  xori        $t4, $v0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34206c) {
            ctx->pc = 0x342080u;
            goto label_342080;
        }
    }
    ctx->pc = 0x342074u;
    // 0x342074: 0x325200b  movn        $a0, $t9, $a1
    ctx->pc = 0x342074u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 25));
    // 0x342078: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x342078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x34207c: 0x4c200b  movn        $a0, $v0, $t4
    ctx->pc = 0x34207cu;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_342080:
    // 0x342080: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x342080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342084: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x342084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x342088: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x342088u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x34208c: 0x4e1ffd0  bgez        $a3, . + 4 + (-0x30 << 2)
    ctx->pc = 0x34208Cu;
    {
        const bool branch_taken_0x34208c = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x342090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34208Cu;
        // 0x342090: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34208c) {
            ctx->pc = 0x341FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341fd0;
        }
    }
    ctx->pc = 0x342094u;
    // 0x342094: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x342094u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x342098: 0x153102a  slt         $v0, $t2, $s3
    ctx->pc = 0x342098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x34209c: 0x5440ffb4  bnel        $v0, $zero, . + 4 + (-0x4C << 2)
    ctx->pc = 0x34209Cu;
    {
        const bool branch_taken_0x34209c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34209c) {
            ctx->pc = 0x3420A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34209Cu;
            // 0x3420a0: 0x95a30000  lhu         $v1, 0x0($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341f70;
        }
    }
    ctx->pc = 0x3420A4u;
label_3420a4:
    // 0x3420a4: 0xa68e0002  sh          $t6, 0x2($s4)
    ctx->pc = 0x3420a4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 14));
    // 0x3420a8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3420a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3420ac: 0xa6850000  sh          $a1, 0x0($s4)
    ctx->pc = 0x3420acu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 5));
label_3420b0:
    // 0x3420b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3420b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3420b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3420b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3420b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3420b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3420bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3420bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3420c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3420c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3420c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3420c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3420c8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3420c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3420cc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x3420ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3420d0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x3420d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3420d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3420D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3420D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420D4u;
        // 0x3420d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3420D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3420DCu;
    // 0x3420dc: 0x0  nop
    ctx->pc = 0x3420dcu;
    // NOP
    ctx->pc = 0x3420e0u;
}
