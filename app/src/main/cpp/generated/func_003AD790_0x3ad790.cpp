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

// Function: func_003AD790
// Address: 0x3ad790 - 0x3adda8
void func_003AD790_0x3ad790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AD790_0x3ad790");
#endif

    switch (ctx->pc) {
        case 0x3ad820u: goto label_3ad820;
        case 0x3ad848u: goto label_3ad848;
        case 0x3ad8b4u: goto label_3ad8b4;
        case 0x3ad8d8u: goto label_3ad8d8;
        case 0x3ad8f8u: goto label_3ad8f8;
        case 0x3ad91cu: goto label_3ad91c;
        case 0x3ad944u: goto label_3ad944;
        case 0x3ad950u: goto label_3ad950;
        case 0x3ad960u: goto label_3ad960;
        case 0x3ad988u: goto label_3ad988;
        case 0x3ad998u: goto label_3ad998;
        case 0x3ad9a4u: goto label_3ad9a4;
        case 0x3ad9c0u: goto label_3ad9c0;
        case 0x3ad9e4u: goto label_3ad9e4;
        case 0x3ada0cu: goto label_3ada0c;
        case 0x3ada18u: goto label_3ada18;
        case 0x3ada24u: goto label_3ada24;
        case 0x3ada3cu: goto label_3ada3c;
        case 0x3ada48u: goto label_3ada48;
        case 0x3ada54u: goto label_3ada54;
        case 0x3ada64u: goto label_3ada64;
        case 0x3ada80u: goto label_3ada80;
        case 0x3adab4u: goto label_3adab4;
        case 0x3adadcu: goto label_3adadc;
        case 0x3adae8u: goto label_3adae8;
        case 0x3adb0cu: goto label_3adb0c;
        case 0x3adb18u: goto label_3adb18;
        case 0x3adb40u: goto label_3adb40;
        case 0x3adb64u: goto label_3adb64;
        case 0x3adb70u: goto label_3adb70;
        case 0x3adb94u: goto label_3adb94;
        case 0x3adba0u: goto label_3adba0;
        case 0x3adbc4u: goto label_3adbc4;
        case 0x3adbd0u: goto label_3adbd0;
        case 0x3adbdcu: goto label_3adbdc;
        case 0x3adbf4u: goto label_3adbf4;
        case 0x3adc00u: goto label_3adc00;
        case 0x3adc14u: goto label_3adc14;
        case 0x3adc20u: goto label_3adc20;
        case 0x3adc2cu: goto label_3adc2c;
        case 0x3adc54u: goto label_3adc54;
        case 0x3adc64u: goto label_3adc64;
        case 0x3adc70u: goto label_3adc70;
        case 0x3adc98u: goto label_3adc98;
        case 0x3adca4u: goto label_3adca4;
        case 0x3adcb0u: goto label_3adcb0;
        case 0x3adcbcu: goto label_3adcbc;
        case 0x3adcecu: goto label_3adcec;
        case 0x3adcfcu: goto label_3adcfc;
        case 0x3add08u: goto label_3add08;
        case 0x3add30u: goto label_3add30;
        case 0x3add3cu: goto label_3add3c;
        case 0x3add48u: goto label_3add48;
        case 0x3add58u: goto label_3add58;
        case 0x3add64u: goto label_3add64;
        case 0x3add74u: goto label_3add74;
        default: break;
    }

    ctx->pc = 0x3ad790u;

    // 0x3ad790: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3ad790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3ad794: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3ad794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad798: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3ad798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3ad79c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3ad79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3ad7a0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3ad7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3ad7a4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3ad7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3ad7a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ad7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3ad7ac: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3ad7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3ad7b0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3ad7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3ad7b4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3ad7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3ad7b8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3ad7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3ad7bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ad7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ad7c0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3ad7c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad7c4: 0x2983f  dsra32      $s3, $v0, 0
    ctx->pc = 0x3ad7c4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ad7c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3ad7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ad7cc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3ad7ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3ad7d0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3ad7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x3ad7d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ad7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3ad7d8: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x3ad7d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3ad7dc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3AD7DCu;
    {
        const bool branch_taken_0x3ad7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7DCu;
        // 0x3ad7e0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad7dc) {
            ctx->pc = 0x3AD828u;
            goto label_3ad828;
        }
    }
    ctx->pc = 0x3AD7E4u;
    // 0x3ad7e4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3ad7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3ad7e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ad7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3ad7ec: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x3ad7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x3ad7f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ad7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3ad7f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD7F4u;
    {
        const bool branch_taken_0x3ad7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7F4u;
        // 0x3ad7f8: 0x3c030046  lui         $v1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad7f4) {
            ctx->pc = 0x3AD808u;
            goto label_3ad808;
        }
    }
    ctx->pc = 0x3AD7FCu;
    // 0x3ad7fc: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x3AD7FCu;
    {
        const bool branch_taken_0x3ad7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7FCu;
        // 0x3ad800: 0xdc62fc60  ld          $v0, -0x3A0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294966368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad7fc) {
            ctx->pc = 0x3ADD74u;
            goto label_3add74;
        }
    }
    ctx->pc = 0x3AD804u;
    // 0x3ad804: 0x0  nop
    ctx->pc = 0x3ad804u;
    // NOP
label_3ad808:
    // 0x3ad808: 0x6600037  bltz        $s3, . + 4 + (0x37 << 2)
    ctx->pc = 0x3AD808u;
    {
        const bool branch_taken_0x3ad808 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x3AD80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD808u;
        // 0x3ad80c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad808) {
            ctx->pc = 0x3AD8E8u;
            goto label_3ad8e8;
        }
    }
    ctx->pc = 0x3AD810u;
    // 0x3ad810: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x3ad810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x3ad814: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3ad814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3ad818: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3AD818u;
    SET_GPR_U32(ctx, 31, 0x3AD820u);
    ctx->pc = 0x3AD81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD818u;
    // 0x3ad81c: 0x241effca  addiu       $fp, $zero, -0x36 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3AD818u, 0x3AD820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD820u;
label_3ad820:
    // 0x3ad820: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3ad820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad824: 0x2983f  dsra32      $s3, $v0, 0
    ctx->pc = 0x3ad824u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 2) >> (32 + 0));
label_3ad828:
    // 0x3ad828: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x3ad828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x3ad82c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ad82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3ad830: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x3ad830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3ad834: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AD834u;
    {
        const bool branch_taken_0x3ad834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD834u;
        // 0x3ad838: 0x3c10000f  lui         $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad834) {
            ctx->pc = 0x3AD850u;
            goto label_3ad850;
        }
    }
    ctx->pc = 0x3AD83Cu;
    // 0x3ad83c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3ad83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad840: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3AD840u;
    SET_GPR_U32(ctx, 31, 0x3AD848u);
    ctx->pc = 0x3AD844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD840u;
    // 0x3ad844: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3AD840u, 0x3AD848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD848u;
label_3ad848:
    // 0x3ad848: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x3AD848u;
    {
        const bool branch_taken_0x3ad848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD848u;
        // 0x3ad84c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad848) {
            ctx->pc = 0x3ADD78u;
            goto label_3add78;
        }
    }
    ctx->pc = 0x3AD850u;
label_3ad850:
    // 0x3ad850: 0x132503  sra         $a0, $s3, 20
    ctx->pc = 0x3ad850u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 20));
    // 0x3ad854: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x3ad854u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x3ad858: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x3ad858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x3ad85c: 0x34425f64  ori         $v0, $v0, 0x5F64
    ctx->pc = 0x3ad85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24420);
    // 0x3ad860: 0x2709824  and         $s3, $s3, $s0
    ctx->pc = 0x3ad860u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x3ad864: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3ad864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3ad868: 0x27c3fc01  addiu       $v1, $fp, -0x3FF
    ctx->pc = 0x3ad868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966273));
    // 0x3ad86c: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x3ad86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x3ad870: 0x64f021  addu        $fp, $v1, $a0
    ctx->pc = 0x3ad870u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ad874: 0x45a024  and         $s4, $v0, $a1
    ctx->pc = 0x3ad874u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x3ad878: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3ad878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad87c: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x3ad87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x3ad880: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ad880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ad884: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3ad884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3ad888: 0x2821026  xor         $v0, $s4, $v0
    ctx->pc = 0x3ad888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 2));
    // 0x3ad88c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3ad88cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3ad890: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x3ad890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x3ad894: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ad894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ad898: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x3ad898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3ad89c: 0x141d03  sra         $v1, $s4, 20
    ctx->pc = 0x3ad89cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 20), 20));
    // 0x3ad8a0: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3ad8a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3ad8a4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3ad8a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3ad8a8: 0x3c3f021  addu        $fp, $fp, $v1
    ctx->pc = 0x3ad8a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x3ad8ac: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3AD8ACu;
    SET_GPR_U32(ctx, 31, 0x3AD8B4u);
    ctx->pc = 0x3AD8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD8ACu;
    // 0x3ad8b0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3AD8ACu, 0x3AD8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD8B4u;
label_3ad8b4:
    // 0x3ad8b4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3ad8b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad8b8: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x3ad8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x3ad8bc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x3ad8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x3ad8c0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x3ad8c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ad8c4: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x3AD8C4u;
    {
        const bool branch_taken_0x3ad8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8C4u;
        // 0x3ad8c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad8c4) {
            ctx->pc = 0x3ADA2Cu;
            goto label_3ada2c;
        }
    }
    ctx->pc = 0x3AD8CCu;
    // 0x3ad8cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ad8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad8d0: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3AD8D0u;
    SET_GPR_U32(ctx, 31, 0x3AD8D8u);
    ctx->pc = 0x3AD8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD8D0u;
    // 0x3ad8d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3AD8D0u, 0x3AD8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD8D8u;
label_3ad8d8:
    // 0x3ad8d8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3AD8D8u;
    {
        const bool branch_taken_0x3ad8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8D8u;
        // 0x3ad8dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad8d8) {
            ctx->pc = 0x3AD958u;
            goto label_3ad958;
        }
    }
    ctx->pc = 0x3AD8E0u;
    // 0x3ad8e0: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AD8E0u;
    {
        const bool branch_taken_0x3ad8e0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad8e0) {
            ctx->pc = 0x3AD8F0u;
            goto label_3ad8f0;
        }
    }
    ctx->pc = 0x3AD8E8u;
label_3ad8e8:
    // 0x3ad8e8: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x3AD8E8u;
    {
        const bool branch_taken_0x3ad8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8E8u;
        // 0x3ad8ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad8e8) {
            ctx->pc = 0x3ADD74u;
            goto label_3add74;
        }
    }
    ctx->pc = 0x3AD8F0u;
label_3ad8f0:
    // 0x3ad8f0: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x3AD8F0u;
    SET_GPR_U32(ctx, 31, 0x3AD8F8u);
    ctx->pc = 0x3AD8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD8F0u;
    // 0x3ad8f4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x3AD8F0u, 0x3AD8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD8F8u;
label_3ad8f8:
    // 0x3ad8f8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3ad8f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad8fc: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x3ad8fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x3ad900: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3ad900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3ad904: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x3ad904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x3ad908: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3ad908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3ad90c: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x3ad90cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x3ad910: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x3ad910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x3ad914: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3AD914u;
    SET_GPR_U32(ctx, 31, 0x3AD91Cu);
    ctx->pc = 0x3AD918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD914u;
    // 0x3ad918: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3AD914u, 0x3AD91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD91Cu;
label_3ad91c:
    // 0x3ad91c: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x3ad91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x3ad920: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3ad920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3ad924: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x3ad924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x3ad928: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3ad928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3ad92c: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x3ad92cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x3ad930: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x3ad930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x3ad934: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x3ad934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x3ad938: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ad938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad93c: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3AD93Cu;
    SET_GPR_U32(ctx, 31, 0x3AD944u);
    ctx->pc = 0x3AD940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD93Cu;
    // 0x3ad940: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3AD93Cu, 0x3AD944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD944u;
label_3ad944:
    // 0x3ad944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ad944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad948: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3AD948u;
    SET_GPR_U32(ctx, 31, 0x3AD950u);
    ctx->pc = 0x3AD94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD948u;
    // 0x3ad94c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3AD948u, 0x3AD950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD950u;
label_3ad950:
    // 0x3ad950: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x3AD950u;
    {
        const bool branch_taken_0x3ad950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD950u;
        // 0x3ad954: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad950) {
            ctx->pc = 0x3ADD78u;
            goto label_3add78;
        }
    }
    ctx->pc = 0x3AD958u;
label_3ad958:
    // 0x3ad958: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3AD958u;
    SET_GPR_U32(ctx, 31, 0x3AD960u);
    ctx->pc = 0x3AD95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD958u;
    // 0x3ad95c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3AD958u, 0x3AD960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD960u;
label_3ad960:
    // 0x3ad960: 0x3405ff55  ori         $a1, $zero, 0xFF55
    ctx->pc = 0x3ad960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65365);
    // 0x3ad964: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3ad964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3ad968: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x3ad968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x3ad96c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3ad96cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3ad970: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x3ad970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x3ad974: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3ad974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3ad978: 0x34a51555  ori         $a1, $a1, 0x1555
    ctx->pc = 0x3ad978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5461);
    // 0x3ad97c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ad97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad980: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3AD980u;
    SET_GPR_U32(ctx, 31, 0x3AD988u);
    ctx->pc = 0x3AD984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD980u;
    // 0x3ad984: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3AD980u, 0x3AD988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD988u;
label_3ad988:
    // 0x3ad988: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x3ad988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3ad98c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x3ad98cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x3ad990: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3AD990u;
    SET_GPR_U32(ctx, 31, 0x3AD998u);
    ctx->pc = 0x3AD994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD990u;
    // 0x3ad994: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3AD990u, 0x3AD998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD998u;
label_3ad998:
    // 0x3ad998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ad998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad99c: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3AD99Cu;
    SET_GPR_U32(ctx, 31, 0x3AD9A4u);
    ctx->pc = 0x3AD9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD99Cu;
    // 0x3ad9a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3AD99Cu, 0x3AD9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD9A4u;
label_3ad9a4:
    // 0x3ad9a4: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD9A4u;
    {
        const bool branch_taken_0x3ad9a4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD9A4u;
        // 0x3ad9a8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad9a4) {
            ctx->pc = 0x3AD9B8u;
            goto label_3ad9b8;
        }
    }
    ctx->pc = 0x3AD9ACu;
    // 0x3ad9ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ad9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad9b0: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x3AD9B0u;
    {
        const bool branch_taken_0x3ad9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD9B0u;
        // 0x3ad9b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad9b0) {
            ctx->pc = 0x3ADD6Cu;
            goto label_3add6c;
        }
    }
    ctx->pc = 0x3AD9B8u;
label_3ad9b8:
    // 0x3ad9b8: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x3AD9B8u;
    SET_GPR_U32(ctx, 31, 0x3AD9C0u);
    ctx->pc = 0x3AD9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD9B8u;
    // 0x3ad9bc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x3AD9B8u, 0x3AD9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD9C0u;
label_3ad9c0:
    // 0x3ad9c0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3ad9c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad9c4: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x3ad9c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x3ad9c8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3ad9c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3ad9cc: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x3ad9ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x3ad9d0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3ad9d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3ad9d4: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x3ad9d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x3ad9d8: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x3ad9d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x3ad9dc: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3AD9DCu;
    SET_GPR_U32(ctx, 31, 0x3AD9E4u);
    ctx->pc = 0x3AD9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD9DCu;
    // 0x3ad9e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3AD9DCu, 0x3AD9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD9E4u;
label_3ad9e4:
    // 0x3ad9e4: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x3ad9e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x3ad9e8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3ad9e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3ad9ec: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x3ad9ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x3ad9f0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3ad9f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3ad9f4: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x3ad9f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x3ad9f8: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x3ad9f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x3ad9fc: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x3ad9fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x3ada00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ada00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ada04: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADA04u;
    SET_GPR_U32(ctx, 31, 0x3ADA0Cu);
    ctx->pc = 0x3ADA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA04u;
    // 0x3ada08: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADA04u, 0x3ADA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA0Cu;
label_3ada0c:
    // 0x3ada0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ada0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ada10: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3ADA10u;
    SET_GPR_U32(ctx, 31, 0x3ADA18u);
    ctx->pc = 0x3ADA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA10u;
    // 0x3ada14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3ADA10u, 0x3ADA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA18u;
label_3ada18:
    // 0x3ada18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ada18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ada1c: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3ADA1Cu;
    SET_GPR_U32(ctx, 31, 0x3ADA24u);
    ctx->pc = 0x3ADA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA1Cu;
    // 0x3ada20: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3ADA1Cu, 0x3ADA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA24u;
label_3ada24:
    // 0x3ada24: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x3ADA24u;
    {
        const bool branch_taken_0x3ada24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA24u;
        // 0x3ada28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ada24) {
            ctx->pc = 0x3ADD68u;
            goto label_3add68;
        }
    }
    ctx->pc = 0x3ADA2Cu;
label_3ada2c:
    // 0x3ada2c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x3ada2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3ada30: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3ada30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3ada34: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3ADA34u;
    SET_GPR_U32(ctx, 31, 0x3ADA3Cu);
    ctx->pc = 0x3ADA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA34u;
    // 0x3ada38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3ADA34u, 0x3ADA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA3Cu;
label_3ada3c:
    // 0x3ada3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ada3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ada40: 0xc0c797c  jal         func_31E5F0
    ctx->pc = 0x3ADA40u;
    SET_GPR_U32(ctx, 31, 0x3ADA48u);
    ctx->pc = 0x3ADA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA40u;
    // 0x3ada44: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E5F0u, 0x3ADA40u, 0x3ADA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA48u;
label_3ada48:
    // 0x3ada48: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3ada48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ada4c: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x3ADA4Cu;
    SET_GPR_U32(ctx, 31, 0x3ADA54u);
    ctx->pc = 0x3ADA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA4Cu;
    // 0x3ada50: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x3ADA4Cu, 0x3ADA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA54u;
label_3ada54:
    // 0x3ada54: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3ada54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ada58: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3ada58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ada5c: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADA5Cu;
    SET_GPR_U32(ctx, 31, 0x3ADA64u);
    ctx->pc = 0x3ADA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA5Cu;
    // 0x3ada60: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADA5Cu, 0x3ADA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA64u;
label_3ada64:
    // 0x3ada64: 0x3c03fff9  lui         $v1, 0xFFF9
    ctx->pc = 0x3ada64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65529 << 16));
    // 0x3ada68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ada68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ada6c: 0x3463eb86  ori         $v1, $v1, 0xEB86
    ctx->pc = 0x3ada6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60294);
    // 0x3ada70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ada70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ada74: 0x263a021  addu        $s4, $s3, $v1
    ctx->pc = 0x3ada74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x3ada78: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADA78u;
    SET_GPR_U32(ctx, 31, 0x3ADA80u);
    ctx->pc = 0x3ADA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA78u;
    // 0x3ada7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADA78u, 0x3ADA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA80u;
label_3ada80:
    // 0x3ada80: 0x3c100006  lui         $s0, 0x6
    ctx->pc = 0x3ada80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)6 << 16));
    // 0x3ada84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ada84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ada88: 0x3610b851  ori         $s0, $s0, 0xB851
    ctx->pc = 0x3ada88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)47185);
    // 0x3ada8c: 0x3405ff0e  ori         $a1, $zero, 0xFF0E
    ctx->pc = 0x3ada8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65294);
    // 0x3ada90: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3ada90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3ada94: 0x34a5d04e  ori         $a1, $a1, 0xD04E
    ctx->pc = 0x3ada94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53326);
    // 0x3ada98: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3ada98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3ada9c: 0x34a583c6  ori         $a1, $a1, 0x83C6
    ctx->pc = 0x3ada9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33734);
    // 0x3adaa0: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3adaa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3adaa4: 0x34a5069f  ori         $a1, $a1, 0x69F
    ctx->pc = 0x3adaa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1695);
    // 0x3adaa8: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x3adaa8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x3adaac: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADAACu;
    SET_GPR_U32(ctx, 31, 0x3ADAB4u);
    ctx->pc = 0x3ADAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADAACu;
    // 0x3adab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADAACu, 0x3ADAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADAB4u;
label_3adab4:
    // 0x3adab4: 0x290a025  or          $s4, $s4, $s0
    ctx->pc = 0x3adab4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 16));
    // 0x3adab8: 0x3405ff31  ori         $a1, $zero, 0xFF31
    ctx->pc = 0x3adab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65329);
    // 0x3adabc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3adabcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3adac0: 0x34a5c714  ori         $a1, $a1, 0xC714
    ctx->pc = 0x3adac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50964);
    // 0x3adac4: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3adac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3adac8: 0x34a5ec73  ori         $a1, $a1, 0xEC73
    ctx->pc = 0x3adac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60531);
    // 0x3adacc: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3adaccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3adad0: 0x34a518af  ori         $a1, $a1, 0x18AF
    ctx->pc = 0x3adad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6319);
    // 0x3adad4: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3ADAD4u;
    SET_GPR_U32(ctx, 31, 0x3ADADCu);
    ctx->pc = 0x3ADAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADAD4u;
    // 0x3adad8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3ADAD4u, 0x3ADADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADADCu;
label_3adadc:
    // 0x3adadc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3adadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adae0: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADAE0u;
    SET_GPR_U32(ctx, 31, 0x3ADAE8u);
    ctx->pc = 0x3ADAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADAE0u;
    // 0x3adae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADAE0u, 0x3ADAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADAE8u;
label_3adae8:
    // 0x3adae8: 0x3405ff66  ori         $a1, $zero, 0xFF66
    ctx->pc = 0x3adae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65382);
    // 0x3adaec: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3adaecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3adaf0: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x3adaf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x3adaf4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3adaf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3adaf8: 0x34a5ccbf  ori         $a1, $a1, 0xCCBF
    ctx->pc = 0x3adaf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52415);
    // 0x3adafc: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3adafcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3adb00: 0x34a51a04  ori         $a1, $a1, 0x1A04
    ctx->pc = 0x3adb00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6660);
    // 0x3adb04: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3ADB04u;
    SET_GPR_U32(ctx, 31, 0x3ADB0Cu);
    ctx->pc = 0x3ADB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB04u;
    // 0x3adb08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3ADB04u, 0x3ADB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADB0Cu;
label_3adb0c:
    // 0x3adb0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3adb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adb10: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADB10u;
    SET_GPR_U32(ctx, 31, 0x3ADB18u);
    ctx->pc = 0x3ADB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB10u;
    // 0x3adb14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADB10u, 0x3ADB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADB18u;
label_3adb18:
    // 0x3adb18: 0x3405ff0b  ori         $a1, $zero, 0xFF0B
    ctx->pc = 0x3adb18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65291);
    // 0x3adb1c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3adb1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3adb20: 0x34a5c44b  ori         $a1, $a1, 0xC44B
    ctx->pc = 0x3adb20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50251);
    // 0x3adb24: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3adb24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3adb28: 0x34a5f9f2  ori         $a1, $a1, 0xF9F2
    ctx->pc = 0x3adb28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63986);
    // 0x3adb2c: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3adb2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3adb30: 0x34a51244  ori         $a1, $a1, 0x1244
    ctx->pc = 0x3adb30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4676);
    // 0x3adb34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3adb34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adb38: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADB38u;
    SET_GPR_U32(ctx, 31, 0x3ADB40u);
    ctx->pc = 0x3ADB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB38u;
    // 0x3adb3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADB38u, 0x3ADB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADB40u;
label_3adb40:
    // 0x3adb40: 0x3405ff1d  ori         $a1, $zero, 0xFF1D
    ctx->pc = 0x3adb40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65309);
    // 0x3adb44: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x3adb44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x3adb48: 0x34a5cc92  ori         $a1, $a1, 0xCC92
    ctx->pc = 0x3adb48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52370);
    // 0x3adb4c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3adb4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3adb50: 0x34a5d960  ori         $a1, $a1, 0xD960
    ctx->pc = 0x3adb50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55648);
    // 0x3adb54: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x3adb54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x3adb58: 0x34a503de  ori         $a1, $a1, 0x3DE
    ctx->pc = 0x3adb58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)990);
    // 0x3adb5c: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3ADB5Cu;
    SET_GPR_U32(ctx, 31, 0x3ADB64u);
    ctx->pc = 0x3ADB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB5Cu;
    // 0x3adb60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3ADB5Cu, 0x3ADB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADB64u;
label_3adb64:
    // 0x3adb64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3adb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adb68: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADB68u;
    SET_GPR_U32(ctx, 31, 0x3ADB70u);
    ctx->pc = 0x3ADB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB68u;
    // 0x3adb6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADB68u, 0x3ADB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADB70u;
label_3adb70:
    // 0x3adb70: 0x3405ff49  ori         $a1, $zero, 0xFF49
    ctx->pc = 0x3adb70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65353);
    // 0x3adb74: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x3adb74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
    // 0x3adb78: 0x34a59249  ori         $a1, $a1, 0x9249
    ctx->pc = 0x3adb78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37449);
    // 0x3adb7c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3adb7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3adb80: 0x34a58452  ori         $a1, $a1, 0x8452
    ctx->pc = 0x3adb80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33874);
    // 0x3adb84: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x3adb84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x3adb88: 0x34a50359  ori         $a1, $a1, 0x359
    ctx->pc = 0x3adb88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)857);
    // 0x3adb8c: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3ADB8Cu;
    SET_GPR_U32(ctx, 31, 0x3ADB94u);
    ctx->pc = 0x3ADB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB8Cu;
    // 0x3adb90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3ADB8Cu, 0x3ADB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADB94u;
label_3adb94:
    // 0x3adb94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3adb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adb98: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADB98u;
    SET_GPR_U32(ctx, 31, 0x3ADBA0u);
    ctx->pc = 0x3ADB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB98u;
    // 0x3adb9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADB98u, 0x3ADBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADBA0u;
label_3adba0:
    // 0x3adba0: 0x3405ff95  ori         $a1, $zero, 0xFF95
    ctx->pc = 0x3adba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65429);
    // 0x3adba4: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3adba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3adba8: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x3adba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x3adbac: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3adbacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3adbb0: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x3adbb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x3adbb4: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3adbb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3adbb8: 0x34a51593  ori         $a1, $a1, 0x1593
    ctx->pc = 0x3adbb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5523);
    // 0x3adbbc: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3ADBBCu;
    SET_GPR_U32(ctx, 31, 0x3ADBC4u);
    ctx->pc = 0x3ADBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADBBCu;
    // 0x3adbc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3ADBBCu, 0x3ADBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADBC4u;
label_3adbc4:
    // 0x3adbc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3adbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adbc8: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADBC8u;
    SET_GPR_U32(ctx, 31, 0x3ADBD0u);
    ctx->pc = 0x3ADBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADBC8u;
    // 0x3adbcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADBC8u, 0x3ADBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADBD0u;
label_3adbd0:
    // 0x3adbd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3adbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adbd4: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3ADBD4u;
    SET_GPR_U32(ctx, 31, 0x3ADBDCu);
    ctx->pc = 0x3ADBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADBD4u;
    // 0x3adbd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3ADBD4u, 0x3ADBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADBDCu;
label_3adbdc:
    // 0x3adbdc: 0x1a800039  blez        $s4, . + 4 + (0x39 << 2)
    ctx->pc = 0x3ADBDCu;
    {
        const bool branch_taken_0x3adbdc = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x3ADBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADBDCu;
        // 0x3adbe0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adbdc) {
            ctx->pc = 0x3ADCC4u;
            goto label_3adcc4;
        }
    }
    ctx->pc = 0x3ADBE4u;
    // 0x3adbe4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3adbe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3adbe8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3adbe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3adbec: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADBECu;
    SET_GPR_U32(ctx, 31, 0x3ADBF4u);
    ctx->pc = 0x3ADBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADBECu;
    // 0x3adbf0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADBECu, 0x3ADBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADBF4u;
label_3adbf4:
    // 0x3adbf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3adbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adbf8: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADBF8u;
    SET_GPR_U32(ctx, 31, 0x3ADC00u);
    ctx->pc = 0x3ADBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADBF8u;
    // 0x3adbfc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADBF8u, 0x3ADC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADC00u;
label_3adc00:
    // 0x3adc00: 0x17c0000c  bnez        $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x3ADC00u;
    {
        const bool branch_taken_0x3adc00 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ADC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC00u;
        // 0x3adc04: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adc00) {
            ctx->pc = 0x3ADC34u;
            goto label_3adc34;
        }
    }
    ctx->pc = 0x3ADC08u;
    // 0x3adc08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3adc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adc0c: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3ADC0Cu;
    SET_GPR_U32(ctx, 31, 0x3ADC14u);
    ctx->pc = 0x3ADC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADC0Cu;
    // 0x3adc10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3ADC0Cu, 0x3ADC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADC14u;
label_3adc14:
    // 0x3adc14: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3adc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adc18: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADC18u;
    SET_GPR_U32(ctx, 31, 0x3ADC20u);
    ctx->pc = 0x3ADC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADC18u;
    // 0x3adc1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADC18u, 0x3ADC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADC20u;
label_3adc20:
    // 0x3adc20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3adc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adc24: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3ADC24u;
    SET_GPR_U32(ctx, 31, 0x3ADC2Cu);
    ctx->pc = 0x3ADC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADC24u;
    // 0x3adc28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3ADC24u, 0x3ADC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADC2Cu;
label_3adc2c:
    // 0x3adc2c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x3ADC2Cu;
    {
        const bool branch_taken_0x3adc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC2Cu;
        // 0x3adc30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adc2c) {
            ctx->pc = 0x3ADD68u;
            goto label_3add68;
        }
    }
    ctx->pc = 0x3ADC34u;
label_3adc34:
    // 0x3adc34: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x3adc34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x3adc38: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3adc38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3adc3c: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x3adc3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x3adc40: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3adc40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3adc44: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x3adc44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x3adc48: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x3adc48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x3adc4c: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADC4Cu;
    SET_GPR_U32(ctx, 31, 0x3ADC54u);
    ctx->pc = 0x3ADC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADC4Cu;
    // 0x3adc50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADC4Cu, 0x3ADC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADC54u;
label_3adc54:
    // 0x3adc54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3adc54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adc58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3adc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adc5c: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3ADC5Cu;
    SET_GPR_U32(ctx, 31, 0x3ADC64u);
    ctx->pc = 0x3ADC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADC5Cu;
    // 0x3adc60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3ADC5Cu, 0x3ADC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADC64u;
label_3adc64:
    // 0x3adc64: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3adc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adc68: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADC68u;
    SET_GPR_U32(ctx, 31, 0x3ADC70u);
    ctx->pc = 0x3ADC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADC68u;
    // 0x3adc6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADC68u, 0x3ADC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADC70u;
label_3adc70:
    // 0x3adc70: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x3adc70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x3adc74: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3adc74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3adc78: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x3adc78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x3adc7c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3adc7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3adc80: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x3adc80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x3adc84: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x3adc84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x3adc88: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x3adc88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x3adc8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3adc8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adc90: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADC90u;
    SET_GPR_U32(ctx, 31, 0x3ADC98u);
    ctx->pc = 0x3ADC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADC90u;
    // 0x3adc94: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADC90u, 0x3ADC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADC98u;
label_3adc98:
    // 0x3adc98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3adc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adc9c: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3ADC9Cu;
    SET_GPR_U32(ctx, 31, 0x3ADCA4u);
    ctx->pc = 0x3ADCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADC9Cu;
    // 0x3adca0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3ADC9Cu, 0x3ADCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADCA4u;
label_3adca4:
    // 0x3adca4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3adca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adca8: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3ADCA8u;
    SET_GPR_U32(ctx, 31, 0x3ADCB0u);
    ctx->pc = 0x3ADCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADCA8u;
    // 0x3adcac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3ADCA8u, 0x3ADCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADCB0u;
label_3adcb0:
    // 0x3adcb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3adcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adcb4: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3ADCB4u;
    SET_GPR_U32(ctx, 31, 0x3ADCBCu);
    ctx->pc = 0x3ADCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADCB4u;
    // 0x3adcb8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3ADCB4u, 0x3ADCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADCBCu;
label_3adcbc:
    // 0x3adcbc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3ADCBCu;
    {
        const bool branch_taken_0x3adcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADCBCu;
        // 0x3adcc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adcbc) {
            ctx->pc = 0x3ADD68u;
            goto label_3add68;
        }
    }
    ctx->pc = 0x3ADCC4u;
label_3adcc4:
    // 0x3adcc4: 0x13c00022  beqz        $fp, . + 4 + (0x22 << 2)
    ctx->pc = 0x3ADCC4u;
    {
        const bool branch_taken_0x3adcc4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADCC4u;
        // 0x3adcc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adcc4) {
            ctx->pc = 0x3ADD50u;
            goto label_3add50;
        }
    }
    ctx->pc = 0x3ADCCCu;
    // 0x3adccc: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x3adcccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x3adcd0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3adcd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3adcd4: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x3adcd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x3adcd8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3adcd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3adcdc: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x3adcdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x3adce0: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x3adce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x3adce4: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADCE4u;
    SET_GPR_U32(ctx, 31, 0x3ADCECu);
    ctx->pc = 0x3ADCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADCE4u;
    // 0x3adce8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADCE4u, 0x3ADCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADCECu;
label_3adcec:
    // 0x3adcec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3adcecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adcf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3adcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adcf4: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3ADCF4u;
    SET_GPR_U32(ctx, 31, 0x3ADCFCu);
    ctx->pc = 0x3ADCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADCF4u;
    // 0x3adcf8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3ADCF4u, 0x3ADCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADCFCu;
label_3adcfc:
    // 0x3adcfc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3adcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3add00: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADD00u;
    SET_GPR_U32(ctx, 31, 0x3ADD08u);
    ctx->pc = 0x3ADD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADD00u;
    // 0x3add04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADD00u, 0x3ADD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADD08u;
label_3add08:
    // 0x3add08: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x3add08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x3add0c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3add0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3add10: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x3add10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x3add14: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3add14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3add18: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x3add18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x3add1c: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x3add1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x3add20: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x3add20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x3add24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3add24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3add28: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADD28u;
    SET_GPR_U32(ctx, 31, 0x3ADD30u);
    ctx->pc = 0x3ADD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADD28u;
    // 0x3add2c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADD28u, 0x3ADD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADD30u;
label_3add30:
    // 0x3add30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3add30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3add34: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3ADD34u;
    SET_GPR_U32(ctx, 31, 0x3ADD3Cu);
    ctx->pc = 0x3ADD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADD34u;
    // 0x3add38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3ADD34u, 0x3ADD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADD3Cu;
label_3add3c:
    // 0x3add3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3add3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3add40: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3ADD40u;
    SET_GPR_U32(ctx, 31, 0x3ADD48u);
    ctx->pc = 0x3ADD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADD40u;
    // 0x3add44: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3ADD40u, 0x3ADD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADD48u;
label_3add48:
    // 0x3add48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3ADD48u;
    {
        const bool branch_taken_0x3add48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD48u;
        // 0x3add4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3add48) {
            ctx->pc = 0x3ADD68u;
            goto label_3add68;
        }
    }
    ctx->pc = 0x3ADD50u;
label_3add50:
    // 0x3add50: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3ADD50u;
    SET_GPR_U32(ctx, 31, 0x3ADD58u);
    ctx->pc = 0x3ADD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADD50u;
    // 0x3add54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3ADD50u, 0x3ADD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADD58u;
label_3add58:
    // 0x3add58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3add58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3add5c: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3ADD5Cu;
    SET_GPR_U32(ctx, 31, 0x3ADD64u);
    ctx->pc = 0x3ADD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADD5Cu;
    // 0x3add60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3ADD5Cu, 0x3ADD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADD64u;
label_3add64:
    // 0x3add64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3add64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3add68:
    // 0x3add68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3add68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3add6c:
    // 0x3add6c: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3ADD6Cu;
    SET_GPR_U32(ctx, 31, 0x3ADD74u);
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3ADD6Cu, 0x3ADD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADD74u;
label_3add74:
    // 0x3add74: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3add74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3add78:
    // 0x3add78: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3add78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3add7c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3add7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3add80: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3add80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3add84: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3add84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3add88: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3add88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3add8c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3add8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3add90: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3add90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3add94: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3add94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3add98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3add98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3add9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3ADD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD9Cu;
        // 0x3adda0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADDA4u;
    // 0x3adda4: 0x0  nop
    ctx->pc = 0x3adda4u;
    // NOP
    ctx->pc = 0x3adda8u;
}
