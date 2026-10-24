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

// Function: func_0015E708
// Address: 0x15e708 - 0x15e8b8
void func_0015E708_0x15e708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015E708_0x15e708");
#endif

    ctx->pc = 0x15e708u;

    // 0x15e708: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x15e708u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x15e70c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15e70cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15e710: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x15e710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x15e714: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15e714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x15e718: 0x26843  sra         $t5, $v0, 1
    ctx->pc = 0x15e718u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 2), 1));
    // 0x15e71c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15e71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15e720: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15e724: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x15e724u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e728: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x15e728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x15e72c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x15e72cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e730: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x15e730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15e734: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15E734u;
    {
        const bool branch_taken_0x15e734 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E734u;
        // 0x15e738: 0x7fb40000  sq          $s4, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e734) {
            ctx->pc = 0x15E754u;
            goto label_15e754;
        }
    }
    ctx->pc = 0x15E73Cu;
    // 0x15e73c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15e740: 0x25230003  addiu       $v1, $t1, 0x3
    ctx->pc = 0x15e740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x15e744: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x15e744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x15e748: 0x122180b  movn        $v1, $t1, $v0
    ctx->pc = 0x15e748u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
    // 0x15e74c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15E74Cu;
    {
        const bool branch_taken_0x15e74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E74Cu;
        // 0x15e750: 0x34883  sra         $t1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e74c) {
            ctx->pc = 0x15E76Cu;
            goto label_15e76c;
        }
    }
    ctx->pc = 0x15E754u;
label_15e754:
    // 0x15e754: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x15e754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x15e758: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E758u;
    {
        const bool branch_taken_0x15e758 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E758u;
        // 0x15e75c: 0x1a93818  mult        $a3, $t5, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e758) {
            ctx->pc = 0x15E770u;
            goto label_15e770;
        }
    }
    ctx->pc = 0x15E760u;
    // 0x15e760: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x15e760u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x15e764: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x15e764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x15e768: 0x24843  sra         $t1, $v0, 1
    ctx->pc = 0x15e768u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 1));
label_15e76c:
    // 0x15e76c: 0x1a93818  mult        $a3, $t5, $t1
    ctx->pc = 0x15e76cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_15e770:
    // 0x15e770: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15e770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15e774: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x15e774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x15e778: 0x4d102a  slt         $v0, $v0, $t5
    ctx->pc = 0x15e778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x15e77c: 0x25a3003f  addiu       $v1, $t5, 0x3F
    ctx->pc = 0x15e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 63));
    // 0x15e780: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x15e780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x15e784: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15e784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15e788: 0x1a2180b  movn        $v1, $t5, $v0
    ctx->pc = 0x15e788u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 13));
    // 0x15e78c: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x15e78cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
    // 0x15e790: 0x1442024  and         $a0, $t2, $a0
    ctx->pc = 0x15e790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x15e794: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x15e794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x15e798: 0x34e68000  ori         $a2, $a3, 0x8000
    ctx->pc = 0x15e798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x15e79c: 0x8503c  dsll32      $t2, $t0, 0
    ctx->pc = 0x15e79cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) << (32 + 0));
    // 0x15e7a0: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x15e7a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x15e7a4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x15e7a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x15e7a8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x15e7a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x15e7ac: 0x3c131100  lui         $s3, 0x1100
    ctx->pc = 0x15e7acu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4352 << 16));
    // 0x15e7b0: 0x2414000e  addiu       $s4, $zero, 0xE
    ctx->pc = 0x15e7b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15e7b4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15e7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15e7b8: 0x9583c  dsll32      $t3, $t1, 0
    ctx->pc = 0x15e7b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 0));
    // 0x15e7bc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15e7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x15e7c0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x15e7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15e7c4: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x15e7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x15e7c8: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x15e7c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x15e7cc: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x15e7ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x15e7d0: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x15e7d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x15e7d4: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x15e7d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15e7d8: 0x118b7c  dsll32      $s1, $s1, 13
    ctx->pc = 0x15e7d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 13));
    // 0x15e7dc: 0x36318001  ori         $s1, $s1, 0x8001
    ctx->pc = 0x15e7dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32769);
    // 0x15e7e0: 0x241200ff  addiu       $s2, $zero, 0xFF
    ctx->pc = 0x15e7e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15e7e4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x15e7e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x15e7e8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x15e7e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x15e7ec: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x15e7ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x15e7f0: 0x1ab5825  or          $t3, $t5, $t3
    ctx->pc = 0x15e7f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) | GPR_U64(ctx, 11));
    // 0x15e7f4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x15e7f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x15e7f8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x15e7f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x15e7fc: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x15e7fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x15e800: 0xff100080  sd          $s0, 0x80($t8)
    ctx->pc = 0x15e800u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 128), GPR_U64(ctx, 16));
    // 0x15e804: 0xaf130088  sw          $s3, 0x88($t8)
    ctx->pc = 0x15e804u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 136), GPR_U32(ctx, 19));
    // 0x15e808: 0x3c095000  lui         $t1, 0x5000
    ctx->pc = 0x15e808u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20480 << 16));
    // 0x15e80c: 0xff110090  sd          $s1, 0x90($t8)
    ctx->pc = 0x15e80cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 144), GPR_U64(ctx, 17));
    // 0x15e810: 0x3c0c5000  lui         $t4, 0x5000
    ctx->pc = 0x15e810u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)20480 << 16));
    // 0x15e814: 0xff140098  sd          $s4, 0x98($t8)
    ctx->pc = 0x15e814u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 152), GPR_U64(ctx, 20));
    // 0x15e818: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x15e818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x15e81c: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x15e81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x15e820: 0xff1200a0  sd          $s2, 0xA0($t8)
    ctx->pc = 0x15e820u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 160), GPR_U64(ctx, 18));
    // 0x15e824: 0x35290006  ori         $t1, $t1, 0x6
    ctx->pc = 0x15e824u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)6);
    // 0x15e828: 0xaf130008  sw          $s3, 0x8($t8)
    ctx->pc = 0x15e828u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 19));
    // 0x15e82c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15e82cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15e830: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x15e830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x15e834: 0x34848004  ori         $a0, $a0, 0x8004
    ctx->pc = 0x15e834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32772);
    // 0x15e838: 0xff140018  sd          $s4, 0x18($t8)
    ctx->pc = 0x15e838u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 20));
    // 0x15e83c: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x15e83cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x15e840: 0x240d0051  addiu       $t5, $zero, 0x51
    ctx->pc = 0x15e840u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x15e844: 0x240e0052  addiu       $t6, $zero, 0x52
    ctx->pc = 0x15e844u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x15e848: 0x240f0053  addiu       $t7, $zero, 0x53
    ctx->pc = 0x15e848u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x15e84c: 0x358c0002  ori         $t4, $t4, 0x2
    ctx->pc = 0x15e84cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)2);
    // 0x15e850: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x15e850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x15e854: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15e854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e858: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15e858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e85c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e85cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e860: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x15e860u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e864: 0x7bb40000  lq          $s4, 0x0($sp)
    ctx->pc = 0x15e864u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e868: 0xff0200a8  sd          $v0, 0xA8($t8)
    ctx->pc = 0x15e868u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 168), GPR_U64(ctx, 2));
    // 0x15e86c: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x15e86cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x15e870: 0xaf09000c  sw          $t1, 0xC($t8)
    ctx->pc = 0x15e870u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 9));
    // 0x15e874: 0xff040010  sd          $a0, 0x10($t8)
    ctx->pc = 0x15e874u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 16), GPR_U64(ctx, 4));
    // 0x15e878: 0xff0a0020  sd          $t2, 0x20($t8)
    ctx->pc = 0x15e878u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 32), GPR_U64(ctx, 10));
    // 0x15e87c: 0xff080028  sd          $t0, 0x28($t8)
    ctx->pc = 0x15e87cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 40), GPR_U64(ctx, 8));
    // 0x15e880: 0xff0d0038  sd          $t5, 0x38($t8)
    ctx->pc = 0x15e880u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 56), GPR_U64(ctx, 13));
    // 0x15e884: 0xff0b0040  sd          $t3, 0x40($t8)
    ctx->pc = 0x15e884u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 11));
    // 0x15e888: 0xff0e0048  sd          $t6, 0x48($t8)
    ctx->pc = 0x15e888u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 14));
    // 0x15e88c: 0xff0f0058  sd          $t7, 0x58($t8)
    ctx->pc = 0x15e88cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 88), GPR_U64(ctx, 15));
    // 0x15e890: 0xff060060  sd          $a2, 0x60($t8)
    ctx->pc = 0x15e890u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 96), GPR_U64(ctx, 6));
    // 0x15e894: 0xff050070  sd          $a1, 0x70($t8)
    ctx->pc = 0x15e894u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 112), GPR_U64(ctx, 5));
    // 0x15e898: 0xaf07007c  sw          $a3, 0x7C($t8)
    ctx->pc = 0x15e898u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 124), GPR_U32(ctx, 7));
    // 0x15e89c: 0xaf0c008c  sw          $t4, 0x8C($t8)
    ctx->pc = 0x15e89cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 140), GPR_U32(ctx, 12));
    // 0x15e8a0: 0xff000030  sd          $zero, 0x30($t8)
    ctx->pc = 0x15e8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 48), GPR_U64(ctx, 0));
    // 0x15e8a4: 0xff000050  sd          $zero, 0x50($t8)
    ctx->pc = 0x15e8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 80), GPR_U64(ctx, 0));
    // 0x15e8a8: 0xff000068  sd          $zero, 0x68($t8)
    ctx->pc = 0x15e8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 104), GPR_U64(ctx, 0));
    // 0x15e8ac: 0xaf000078  sw          $zero, 0x78($t8)
    ctx->pc = 0x15e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 120), GPR_U32(ctx, 0));
    // 0x15e8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x15E8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8B0u;
        // 0x15e8b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E8B8u;
}
