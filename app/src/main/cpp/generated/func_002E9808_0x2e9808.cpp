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

// Function: func_002E9808
// Address: 0x2e9808 - 0x2e9af0
void func_002E9808_0x2e9808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E9808_0x2e9808");
#endif

    switch (ctx->pc) {
        case 0x2e987cu: goto label_2e987c;
        case 0x2e9abcu: goto label_2e9abc;
        default: break;
    }

    ctx->pc = 0x2e9808u;

    // 0x2e9808: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e9808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e980c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e980cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9810: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2e9810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2e9814: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2e9814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2e9818: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2e9818u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e981c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2e981cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2e9820: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2e9820u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9824: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2e9824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2e9828: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2e9828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2e982c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2e982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2e9830: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e9830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e9834: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2e9834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2e9838: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2e9838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2e983c: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E983Cu;
    {
        const bool branch_taken_0x2e983c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E983Cu;
        // 0x2e9840: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e983c) {
            ctx->pc = 0x2E9858u;
            goto label_2e9858;
        }
    }
    ctx->pc = 0x2E9844u;
    // 0x2e9844: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e9844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9848: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9848u;
    {
        const bool branch_taken_0x2e9848 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9848u;
        // 0x2e984c: 0x24103900  addiu       $s0, $zero, 0x3900 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9848) {
            ctx->pc = 0x2E9860u;
            goto label_2e9860;
        }
    }
    ctx->pc = 0x2E9850u;
    // 0x2e9850: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9850u;
    {
        const bool branch_taken_0x2e9850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9850u;
        // 0x2e9854: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9850) {
            ctx->pc = 0x2E9868u;
            goto label_2e9868;
        }
    }
    ctx->pc = 0x2E9858u;
label_2e9858:
    // 0x2e9858: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9858u;
    {
        const bool branch_taken_0x2e9858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9858u;
        // 0x2e985c: 0x24103a00  addiu       $s0, $zero, 0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9858) {
            ctx->pc = 0x2E9864u;
            goto label_2e9864;
        }
    }
    ctx->pc = 0x2E9860u;
label_2e9860:
    // 0x2e9860: 0x24103b00  addiu       $s0, $zero, 0x3B00
    ctx->pc = 0x2e9860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15104));
label_2e9864:
    // 0x2e9864: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e9864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9868:
    // 0x2e9868: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e9868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e986c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e986cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9870: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2e9870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e9874: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x2E9874u;
    SET_GPR_U32(ctx, 31, 0x2E987Cu);
    ctx->pc = 0x2E9878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9874u;
    // 0x2e9878: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x2E9874u, 0x2E987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E987Cu;
label_2e987c:
    // 0x2e987c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2e987cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9880: 0x13c0008e  beqz        $fp, . + 4 + (0x8E << 2)
    ctx->pc = 0x2E9880u;
    {
        const bool branch_taken_0x2e9880 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9880u;
        // 0x2e9884: 0x324200ff  andi        $v0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9880) {
            ctx->pc = 0x2E9ABCu;
            goto label_2e9abc;
        }
    }
    ctx->pc = 0x2E9888u;
    // 0x2e9888: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x2e9888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2e988c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2e988cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2e9890: 0x102142  srl         $a0, $s0, 5
    ctx->pc = 0x2e9890u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x2e9894: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2e9894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2e9898: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x2e9898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2e989c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2e989cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2e98a0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e98a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e98a4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2e98a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2e98a8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2e98a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2e98ac: 0xffc40030  sd          $a0, 0x30($fp)
    ctx->pc = 0x2e98acu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 48), GPR_U64(ctx, 4));
    // 0x2e98b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2e98b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2e98b4: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x2e98b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2e98b8: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x2e98b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x2e98bc: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x2e98bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x2e98c0: 0xffc40038  sd          $a0, 0x38($fp)
    ctx->pc = 0x2e98c0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 56), GPR_U64(ctx, 4));
    // 0x2e98c4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2e98c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2e98c8: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2e98c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x2e98cc: 0x2419000e  addiu       $t9, $zero, 0xE
    ctx->pc = 0x2e98ccu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e98d0: 0x3414a000  ori         $s4, $zero, 0xA000
    ctx->pc = 0x2e98d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2e98d4: 0x14a738  dsll        $s4, $s4, 28
    ctx->pc = 0x2e98d4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 28);
    // 0x2e98d8: 0x36948000  ori         $s4, $s4, 0x8000
    ctx->pc = 0x2e98d8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32768);
    // 0x2e98dc: 0x14a4f8  dsll        $s4, $s4, 19
    ctx->pc = 0x2e98dcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 19);
    // 0x2e98e0: 0x3405a000  ori         $a1, $zero, 0xA000
    ctx->pc = 0x2e98e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2e98e4: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x2e98e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x2e98e8: 0x34a5a000  ori         $a1, $a1, 0xA000
    ctx->pc = 0x2e98e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40960);
    // 0x2e98ec: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x2e98ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x2e98f0: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x2e98f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e98f4: 0x73b7c  dsll32      $a3, $a3, 13
    ctx->pc = 0x2e98f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 13));
    // 0x2e98f8: 0x34e78004  ori         $a3, $a3, 0x8004
    ctx->pc = 0x2e98f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32772);
    // 0x2e98fc: 0x34089d00  ori         $t0, $zero, 0x9D00
    ctx->pc = 0x2e98fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40192);
    // 0x2e9900: 0x84478  dsll        $t0, $t0, 17
    ctx->pc = 0x2e9900u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 17);
    // 0x2e9904: 0x350800f8  ori         $t0, $t0, 0xF8
    ctx->pc = 0x2e9904u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)248);
    // 0x2e9908: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x2e9908u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x2e990c: 0x240a0047  addiu       $t2, $zero, 0x47
    ctx->pc = 0x2e990cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2e9910: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x2e9910u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e9914: 0xc6638  dsll        $t4, $t4, 24
    ctx->pc = 0x2e9914u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 24);
    // 0x2e9918: 0x358c0044  ori         $t4, $t4, 0x44
    ctx->pc = 0x2e9918u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)68);
    // 0x2e991c: 0x240e0042  addiu       $t6, $zero, 0x42
    ctx->pc = 0x2e991cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2e9920: 0x34108800  ori         $s0, $zero, 0x8800
    ctx->pc = 0x2e9920u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x2e9924: 0x1083fc  dsll32      $s0, $s0, 15
    ctx->pc = 0x2e9924u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 15));
    // 0x2e9928: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x2e9928u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x2e992c: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x2e992cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2e9930: 0xffc50018  sd          $a1, 0x18($fp)
    ctx->pc = 0x2e9930u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 24), GPR_U64(ctx, 5));
    // 0x2e9934: 0x27cd0080  addiu       $t5, $fp, 0x80
    ctx->pc = 0x2e9934u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
    // 0x2e9938: 0xffc70020  sd          $a3, 0x20($fp)
    ctx->pc = 0x2e9938u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 32), GPR_U64(ctx, 7));
    // 0x2e993c: 0x24025510  addiu       $v0, $zero, 0x5510
    ctx->pc = 0x2e993cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21776));
    // 0x2e9940: 0xffc80040  sd          $t0, 0x40($fp)
    ctx->pc = 0x2e9940u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 64), GPR_U64(ctx, 8));
    // 0x2e9944: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2e9944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e9948: 0xffca0058  sd          $t2, 0x58($fp)
    ctx->pc = 0x2e9948u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 88), GPR_U64(ctx, 10));
    // 0x2e994c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2e994cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2e9950: 0xffcc0060  sd          $t4, 0x60($fp)
    ctx->pc = 0x2e9950u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 96), GPR_U64(ctx, 12));
    // 0x2e9954: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2e9954u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2e9958: 0xffce0068  sd          $t6, 0x68($fp)
    ctx->pc = 0x2e9958u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 104), GPR_U64(ctx, 14));
    // 0x2e995c: 0x240b0800  addiu       $t3, $zero, 0x800
    ctx->pc = 0x2e995cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2e9960: 0xffd00080  sd          $s0, 0x80($fp)
    ctx->pc = 0x2e9960u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 128), GPR_U64(ctx, 16));
    // 0x2e9964: 0x3412ffff  ori         $s2, $zero, 0xFFFF
    ctx->pc = 0x2e9964u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e9968: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x2e9968u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2e996c: 0xffc40048  sd          $a0, 0x48($fp)
    ctx->pc = 0x2e996cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 72), GPR_U64(ctx, 4));
    // 0x2e9970: 0x240c0880  addiu       $t4, $zero, 0x880
    ctx->pc = 0x2e9970u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2176));
    // 0x2e9974: 0xffc90050  sd          $t1, 0x50($fp)
    ctx->pc = 0x2e9974u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 80), GPR_U64(ctx, 9));
    // 0x2e9978: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x2e9978u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e997c: 0x139afc  dsll32      $s3, $s3, 11
    ctx->pc = 0x2e997cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 11));
    // 0x2e9980: 0x36738000  ori         $s3, $s3, 0x8000
    ctx->pc = 0x2e9980u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32768);
    // 0x2e9984: 0xffc00008  sd          $zero, 0x8($fp)
    ctx->pc = 0x2e9984u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 0));
    // 0x2e9988: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2e9988u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e998c: 0x10837c  dsll32      $s0, $s0, 13
    ctx->pc = 0x2e998cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 13));
    // 0x2e9990: 0x36108003  ori         $s0, $s0, 0x8003
    ctx->pc = 0x2e9990u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32771);
    // 0x2e9994: 0xffc00010  sd          $zero, 0x10($fp)
    ctx->pc = 0x2e9994u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 16), GPR_U64(ctx, 0));
    // 0x2e9998: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x2e9998u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e999c: 0xffd90028  sd          $t9, 0x28($fp)
    ctx->pc = 0x2e999cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 40), GPR_U64(ctx, 25));
    // 0x2e99a0: 0x24180070  addiu       $t8, $zero, 0x70
    ctx->pc = 0x2e99a0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2e99a4: 0xffc00070  sd          $zero, 0x70($fp)
    ctx->pc = 0x2e99a4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 112), GPR_U64(ctx, 0));
    // 0x2e99a8: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x2e99a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e99ac: 0xffd40078  sd          $s4, 0x78($fp)
    ctx->pc = 0x2e99acu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 120), GPR_U64(ctx, 20));
    // 0x2e99b0: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2e99b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x2e99b4: 0xfda30010  sd          $v1, 0x10($t5)
    ctx->pc = 0x2e99b4u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 16), GPR_U64(ctx, 3));
    // 0x2e99b8: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x2e99b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x2e99bc: 0xfda60018  sd          $a2, 0x18($t5)
    ctx->pc = 0x2e99bcu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 24), GPR_U64(ctx, 6));
    // 0x2e99c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e99c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99c4: 0xfda20008  sd          $v0, 0x8($t5)
    ctx->pc = 0x2e99c4u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 2));
    // 0x2e99c8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e99c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99cc: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2e99ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e99d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99d4: 0x8e22118c  lw          $v0, 0x118C($s1)
    ctx->pc = 0x2e99d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2e99d8: 0x8de91180  lw          $t1, 0x1180($t7)
    ctx->pc = 0x2e99d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4480)));
    // 0x2e99dc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2e99dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e99e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e99e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e99e4: 0x957c2  srl         $t2, $t1, 31
    ctx->pc = 0x2e99e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x2e99e8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2e99e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e99ec: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2e99ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2e99f0: 0x1621023  subu        $v0, $t3, $v0
    ctx->pc = 0x2e99f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2e99f4: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x2e99f4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
    // 0x2e99f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e99fc: 0x1695823  subu        $t3, $t3, $t1
    ctx->pc = 0x2e99fcu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2e9a00: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x2e9a00u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x2e9a04: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e9a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e9a08: 0x1621025  or          $v0, $t3, $v0
    ctx->pc = 0x2e9a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x2e9a0c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x2e9a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x2e9a10: 0xfda20020  sd          $v0, 0x20($t5)
    ctx->pc = 0x2e9a10u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 32), GPR_U64(ctx, 2));
    // 0x2e9a14: 0x8e23118c  lw          $v1, 0x118C($s1)
    ctx->pc = 0x2e9a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4492)));
    // 0x2e9a18: 0x8de91180  lw          $t1, 0x1180($t7)
    ctx->pc = 0x2e9a18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4480)));
    // 0x2e9a1c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2e9a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e9a20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e9a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e9a24: 0x957c2  srl         $t2, $t1, 31
    ctx->pc = 0x2e9a24u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x2e9a28: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2e9a28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e9a2c: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2e9a2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2e9a30: 0x1831823  subu        $v1, $t4, $v1
    ctx->pc = 0x2e9a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2e9a34: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x2e9a34u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
    // 0x2e9a38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e9a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e9a3c: 0x1896023  subu        $t4, $t4, $t1
    ctx->pc = 0x2e9a3cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x2e9a40: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x2e9a40u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x2e9a44: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e9a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e9a48: 0x1831825  or          $v1, $t4, $v1
    ctx->pc = 0x2e9a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x2e9a4c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x2e9a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x2e9a50: 0xfda30028  sd          $v1, 0x28($t5)
    ctx->pc = 0x2e9a50u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 40), GPR_U64(ctx, 3));
    // 0x2e9a54: 0xffd300b0  sd          $s3, 0xB0($fp)
    ctx->pc = 0x2e9a54u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 176), GPR_U64(ctx, 19));
    // 0x2e9a58: 0xffd400c8  sd          $s4, 0xC8($fp)
    ctx->pc = 0x2e9a58u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 200), GPR_U64(ctx, 20));
    // 0x2e9a5c: 0xffd000d0  sd          $s0, 0xD0($fp)
    ctx->pc = 0x2e9a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 208), GPR_U64(ctx, 16));
    // 0x2e9a60: 0xffd900d8  sd          $t9, 0xD8($fp)
    ctx->pc = 0x2e9a60u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 216), GPR_U64(ctx, 25));
    // 0x2e9a64: 0xffc000b8  sd          $zero, 0xB8($fp)
    ctx->pc = 0x2e9a64u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 184), GPR_U64(ctx, 0));
    // 0x2e9a68: 0xffc000c0  sd          $zero, 0xC0($fp)
    ctx->pc = 0x2e9a68u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 192), GPR_U64(ctx, 0));
    // 0x2e9a6c: 0x8de31180  lw          $v1, 0x1180($t7)
    ctx->pc = 0x2e9a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4480)));
    // 0x2e9a70: 0x1c3702a  slt         $t6, $t6, $v1
    ctx->pc = 0x2e9a70u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e9a74: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2e9a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2e9a78: 0x6e100b  movn        $v0, $v1, $t6
    ctx->pc = 0x2e9a78u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2e9a7c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2e9a7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2e9a80: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e9a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e9a84: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x2e9a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x2e9a88: 0xffc200e0  sd          $v0, 0xE0($fp)
    ctx->pc = 0x2e9a88u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 224), GPR_U64(ctx, 2));
    // 0x2e9a8c: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2e9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2e9a90: 0xa7d70000  sh          $s7, 0x0($fp)
    ctx->pc = 0x2e9a90u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 23));
    // 0x2e9a94: 0xffc200e8  sd          $v0, 0xE8($fp)
    ctx->pc = 0x2e9a94u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 232), GPR_U64(ctx, 2));
    // 0x2e9a98: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x2e9a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x2e9a9c: 0x344200f8  ori         $v0, $v0, 0xF8
    ctx->pc = 0x2e9a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)248);
    // 0x2e9aa0: 0xffc00100  sd          $zero, 0x100($fp)
    ctx->pc = 0x2e9aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 256), GPR_U64(ctx, 0));
    // 0x2e9aa4: 0xffc200f0  sd          $v0, 0xF0($fp)
    ctx->pc = 0x2e9aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 240), GPR_U64(ctx, 2));
    // 0x2e9aa8: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x2e9aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2e9aac: 0xffc200f8  sd          $v0, 0xF8($fp)
    ctx->pc = 0x2e9aacu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 248), GPR_U64(ctx, 2));
    // 0x2e9ab0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x2e9ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2e9ab4: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x2E9AB4u;
    SET_GPR_U32(ctx, 31, 0x2E9ABCu);
    ctx->pc = 0x2E9AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9AB4u;
    // 0x2e9ab8: 0xffc20108  sd          $v0, 0x108($fp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 30), 264), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x2E9AB4u, 0x2E9ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9ABCu;
label_2e9abc:
    // 0x2e9abc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2e9abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e9ac0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2e9ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e9ac4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2e9ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e9ac8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2e9ac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e9acc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e9accu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e9ad0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2e9ad0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e9ad4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2e9ad4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e9ad8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2e9ad8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9adc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2e9adcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9AE4u;
        // 0x2e9ae8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9AECu;
    // 0x2e9aec: 0x0  nop
    ctx->pc = 0x2e9aecu;
    // NOP
    ctx->pc = 0x2e9af0u;
}
