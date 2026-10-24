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

// Function: func_00155800
// Address: 0x155800 - 0x155ae8
void func_00155800_0x155800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00155800_0x155800");
#endif

    switch (ctx->pc) {
        case 0x1558c0u: goto label_1558c0;
        default: break;
    }

    ctx->pc = 0x155800u;

    // 0x155800: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x155800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x155804: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x155804u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155808: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x155808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x15580c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x15580cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x155810: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x155810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x155814: 0x3c180100  lui         $t8, 0x100
    ctx->pc = 0x155814u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)256 << 16));
    // 0x155818: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x155818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x15581c: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x15581cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
    // 0x155820: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x155820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x155824: 0x3c0b0100  lui         $t3, 0x100
    ctx->pc = 0x155824u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)256 << 16));
    // 0x155828: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x155828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x15582c: 0x3c136c02  lui         $s3, 0x6C02
    ctx->pc = 0x15582cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)27650 << 16));
    // 0x155830: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x155830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x155834: 0x3c126c00  lui         $s2, 0x6C00
    ctx->pc = 0x155834u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)27648 << 16));
    // 0x155838: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x155838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x15583c: 0x3c116d00  lui         $s1, 0x6D00
    ctx->pc = 0x15583cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)27904 << 16));
    // 0x155840: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x155840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x155844: 0x3c106e00  lui         $s0, 0x6E00
    ctx->pc = 0x155844u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28160 << 16));
    // 0x155848: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x155848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x15584c: 0x3c196500  lui         $t9, 0x6500
    ctx->pc = 0x15584cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)25856 << 16));
    // 0x155850: 0x37180404  ori         $t8, $t8, 0x404
    ctx->pc = 0x155850u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)1028);
    // 0x155854: 0x36738000  ori         $s3, $s3, 0x8000
    ctx->pc = 0x155854u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32768);
    // 0x155858: 0x8da30388  lw          $v1, 0x388($t5)
    ctx->pc = 0x155858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 904)));
    // 0x15585c: 0x341ec0bb  ori         $fp, $zero, 0xC0BB
    ctx->pc = 0x15585cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49339);
    // 0x155860: 0x1ef3bc  dsll32      $fp, $fp, 14
    ctx->pc = 0x155860u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << (32 + 14));
    // 0x155864: 0x3c150100  lui         $s5, 0x100
    ctx->pc = 0x155864u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)256 << 16));
    // 0x155868: 0x3c143000  lui         $s4, 0x3000
    ctx->pc = 0x155868u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)12288 << 16));
    // 0x15586c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x15586cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x155870: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x155870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x155874: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x155874u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x155878: 0x356b0103  ori         $t3, $t3, 0x103
    ctx->pc = 0x155878u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)259);
    // 0x15587c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x15587cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x155880: 0x36528002  ori         $s2, $s2, 0x8002
    ctx->pc = 0x155880u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32770);
    // 0x155884: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x155884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155888: 0x36318002  ori         $s1, $s1, 0x8002
    ctx->pc = 0x155888u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32770);
    // 0x15588c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155890: 0x3610c003  ori         $s0, $s0, 0xC003
    ctx->pc = 0x155890u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)49155);
    // 0x155894: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x155894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x155898: 0x37398004  ori         $t9, $t9, 0x8004
    ctx->pc = 0x155898u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)32772);
    // 0x15589c: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x15589cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x1558a0: 0x3c161700  lui         $s6, 0x1700
    ctx->pc = 0x1558a0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)5888 << 16));
    // 0x1558a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1558a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1558a8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1558a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1558ac: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1558acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1558b0: 0x824821  addu        $t1, $a0, $v0
    ctx->pc = 0x1558b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1558b4: 0x944a0014  lhu         $t2, 0x14($v0)
    ctx->pc = 0x1558b4u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1558b8: 0xa27821  addu        $t7, $a1, $v0
    ctx->pc = 0x1558b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1558bc: 0x627021  addu        $t6, $v1, $v0
    ctx->pc = 0x1558bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1558c0:
    // 0x1558c0: 0x29420026  slti        $v0, $t2, 0x26
    ctx->pc = 0x1558c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)38) ? 1 : 0);
    // 0x1558c4: 0x24070026  addiu       $a3, $zero, 0x26
    ctx->pc = 0x1558c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1558c8: 0x142380b  movn        $a3, $t2, $v0
    ctx->pc = 0x1558c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 10));
    // 0x1558cc: 0xacd80008  sw          $t8, 0x8($a2)
    ctx->pc = 0x1558ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 24));
    // 0x1558d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1558d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1558d4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1558d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1558d8: 0xacd3000c  sw          $s3, 0xC($a2)
    ctx->pc = 0x1558d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 19));
    // 0x1558dc: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1558dcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x1558e0: 0x34e28000  ori         $v0, $a3, 0x8000
    ctx->pc = 0x1558e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x1558e4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1558e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1558e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1558e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1558ec: 0x2203e  dsrl32      $a0, $v0, 0
    ctx->pc = 0x1558ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1558f0: 0x3402c0f9  ori         $v0, $zero, 0xC0F9
    ctx->pc = 0x1558f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49401);
    // 0x1558f4: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x1558f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x1558f8: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1558f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1558fc: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x1558fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x155900: 0x8da20380  lw          $v0, 0x380($t5)
    ctx->pc = 0x155900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 896)));
    // 0x155904: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x155904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x155908: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x155908u;
    {
        const bool branch_taken_0x155908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155908u;
        // 0x15590c: 0x24050412  addiu       $a1, $zero, 0x412 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155908) {
            ctx->pc = 0x155920u;
            goto label_155920;
        }
    }
    ctx->pc = 0x155910u;
    // 0x155910: 0x3403c0b9  ori         $v1, $zero, 0xC0B9
    ctx->pc = 0x155910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49337);
    // 0x155914: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x155914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x155918: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x155918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15591c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x15591cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_155920:
    // 0x155920: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x155920u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x155924: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x155924u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x155928: 0x3402c0fb  ori         $v0, $zero, 0xC0FB
    ctx->pc = 0x155928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49403);
    // 0x15592c: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x15592cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x155930: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x155930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x155934: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x155934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x155938: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x155938u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x15593c: 0x8da20380  lw          $v0, 0x380($t5)
    ctx->pc = 0x15593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 896)));
    // 0x155940: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x155940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x155944: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x155944u;
    {
        const bool branch_taken_0x155944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155944u;
        // 0x155948: 0x9e1025  or          $v0, $a0, $fp (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155944) {
            ctx->pc = 0x155950u;
            goto label_155950;
        }
    }
    ctx->pc = 0x15594Cu;
    // 0x15594c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x15594cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_155950:
    // 0x155950: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x155950u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x155954: 0x24e70007  addiu       $a3, $a3, 0x7
    ctx->pc = 0x155954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x155958: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x155958u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x15595c: 0x738c2  srl         $a3, $a3, 3
    ctx->pc = 0x15595cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
    // 0x155960: 0x8da20380  lw          $v0, 0x380($t5)
    ctx->pc = 0x155960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 896)));
    // 0x155964: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x155964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x155968: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x155968u;
    {
        const bool branch_taken_0x155968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155968u;
        // 0x15596c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155968) {
            ctx->pc = 0x155994u;
            goto label_155994;
        }
    }
    ctx->pc = 0x155970u;
    // 0x155970: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x155970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x155974: 0x12c2024  and         $a0, $t1, $t4
    ctx->pc = 0x155974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 12));
    // 0x155978: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x155978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x15597c: 0x72cc0  sll         $a1, $a3, 19
    ctx->pc = 0x15597cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 19));
    // 0x155980: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x155980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x155984: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x155984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x155988: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x155988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x15598c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15598Cu;
    {
        const bool branch_taken_0x15598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15598Cu;
        // 0x155990: 0xb21825  or          $v1, $a1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15598c) {
            ctx->pc = 0x1559B4u;
            goto label_1559b4;
        }
    }
    ctx->pc = 0x155994u;
label_155994:
    // 0x155994: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x155994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x155998: 0x12c2024  and         $a0, $t1, $t4
    ctx->pc = 0x155998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 12));
    // 0x15599c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x15599cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x1559a0: 0x72cc0  sll         $a1, $a3, 19
    ctx->pc = 0x1559a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 19));
    // 0x1559a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1559a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1559a8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1559a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1559ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1559acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1559b0: 0xb11825  or          $v1, $a1, $s1
    ctx->pc = 0x1559b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
label_1559b4:
    // 0x1559b4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1559b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1559b8: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1559b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1559bc: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1559bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x1559c0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1559c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1559c4: 0xaccb0008  sw          $t3, 0x8($a2)
    ctx->pc = 0x1559c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 11));
    // 0x1559c8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1559c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1559cc: 0x1cc2024  and         $a0, $t6, $t4
    ctx->pc = 0x1559ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) & GPR_U64(ctx, 12));
    // 0x1559d0: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x1559d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x1559d4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1559d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1559d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1559d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1559dc: 0x1ec1024  and         $v0, $t7, $t4
    ctx->pc = 0x1559dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & GPR_U64(ctx, 12));
    // 0x1559e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1559e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1559e4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1559e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1559e8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1559e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1559ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1559ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1559f0: 0x1102825  or          $a1, $t0, $s0
    ctx->pc = 0x1559f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 16));
    // 0x1559f4: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x1559f4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x1559f8: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x1559f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x1559fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1559fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x155a00: 0xaccb0008  sw          $t3, 0x8($a2)
    ctx->pc = 0x155a00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 11));
    // 0x155a04: 0x1191025  or          $v0, $t0, $t9
    ctx->pc = 0x155a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 25));
    // 0x155a08: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x155a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x155a0c: 0x254affdc  addiu       $t2, $t2, -0x24
    ctx->pc = 0x155a0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967260));
    // 0x155a10: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x155a10u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x155a14: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x155a14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x155a18: 0xaccb0008  sw          $t3, 0x8($a2)
    ctx->pc = 0x155a18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 11));
    // 0x155a1c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x155a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x155a20: 0xfcd70000  sd          $s7, 0x0($a2)
    ctx->pc = 0x155a20u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 23));
    // 0x155a24: 0xacd60008  sw          $s6, 0x8($a2)
    ctx->pc = 0x155a24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 22));
    // 0x155a28: 0xacd8000c  sw          $t8, 0xC($a2)
    ctx->pc = 0x155a28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 24));
    // 0x155a2c: 0x8da20380  lw          $v0, 0x380($t5)
    ctx->pc = 0x155a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 896)));
    // 0x155a30: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x155a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x155a34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155A34u;
    {
        const bool branch_taken_0x155a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A34u;
        // 0x155a38: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a34) {
            ctx->pc = 0x155A44u;
            goto label_155a44;
        }
    }
    ctx->pc = 0x155A3Cu;
    // 0x155a3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x155A3Cu;
    {
        const bool branch_taken_0x155a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A3Cu;
        // 0x155a40: 0x25290240  addiu       $t1, $t1, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a3c) {
            ctx->pc = 0x155A48u;
            goto label_155a48;
        }
    }
    ctx->pc = 0x155A44u;
label_155a44:
    // 0x155a44: 0x25290120  addiu       $t1, $t1, 0x120
    ctx->pc = 0x155a44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 288));
label_155a48:
    // 0x155a48: 0x25ef0090  addiu       $t7, $t7, 0x90
    ctx->pc = 0x155a48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 144));
    // 0x155a4c: 0x1d40ff9c  bgtz        $t2, . + 4 + (-0x64 << 2)
    ctx->pc = 0x155A4Cu;
    {
        const bool branch_taken_0x155a4c = (GPR_S64(ctx, 10) > 0);
        ctx->pc = 0x155A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A4Cu;
        // 0x155a50: 0x25ce0090  addiu       $t6, $t6, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a4c) {
            ctx->pc = 0x1558C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1558c0;
        }
    }
    ctx->pc = 0x155A54u;
    // 0x155a54: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x155a54u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x155a58: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x155a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x155a5c: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x155a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x155a60: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x155a60u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x155a64: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x155a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x155a68: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x155a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x155a6c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x155a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155a70: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x155a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x155a74: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x155a74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x155a78: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x155a78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x155a7c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x155a7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155a80: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x155a80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155a84: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x155a84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155a88: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x155a88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155a8c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x155a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x155a90: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x155a90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x155a94: 0x3e00008  jr          $ra
    ctx->pc = 0x155A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A94u;
        // 0x155a98: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155A9Cu;
    // 0x155a9c: 0x0  nop
    ctx->pc = 0x155a9cu;
    // NOP
    // 0x155aa0: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x155aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x155aa4: 0x0  nop
    ctx->pc = 0x155aa4u;
    // NOP
    // 0x155aa8: 0x0  nop
    ctx->pc = 0x155aa8u;
    // NOP
    // 0x155aac: 0x0  nop
    ctx->pc = 0x155aacu;
    // NOP
    // 0x155ab0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x155ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x155ab4: 0x0  nop
    ctx->pc = 0x155ab4u;
    // NOP
    // 0x155ab8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x155ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x155abc: 0x0  nop
    ctx->pc = 0x155abcu;
    // NOP
    // 0x155ac0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x155ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x155ac4: 0x0  nop
    ctx->pc = 0x155ac4u;
    // NOP
    // 0x155ac8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x155ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x155acc: 0x0  nop
    ctx->pc = 0x155accu;
    // NOP
    // 0x155ad0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x155ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x155ad4: 0x0  nop
    ctx->pc = 0x155ad4u;
    // NOP
    // 0x155ad8: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x155ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x155adc: 0x0  nop
    ctx->pc = 0x155adcu;
    // NOP
    // 0x155ae0: 0x0  nop
    ctx->pc = 0x155ae0u;
    // NOP
    // 0x155ae4: 0x0  nop
    ctx->pc = 0x155ae4u;
    // NOP
    ctx->pc = 0x155ae8u;
}
