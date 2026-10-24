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

// Function: __moddi3
// Address: 0x3b8820 - 0x3b8e88
void ps2___moddi3_0x3b8820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___moddi3_0x3b8820");
#endif

    ctx->pc = 0x3b8820u;

    // 0x3b8820: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3b8820u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8824: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b8824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b8828: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3b8828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3b882c: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x3b882cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x3b8830: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x3b8830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3b8834: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3b8834u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3b8838: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3B8838u;
    {
        const bool branch_taken_0x3b8838 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3B883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8838u;
        // 0x3b883c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8838) {
            ctx->pc = 0x3B8894u;
            goto label_3b8894;
        }
    }
    ctx->pc = 0x3B8840u;
    // 0x3b8840: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x3b8840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3b8844: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3b8844u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b8848: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b8848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b884c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b884cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b8850: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3b8850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3b8854: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x3b8854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3b8858: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3b8858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3b885c: 0x41823  negu        $v1, $a0
    ctx->pc = 0x3b885cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x3b8860: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3b8860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3b8864: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3b8864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3b8868: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3b8868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3b886c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3b886cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3b8870: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x3b8870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b8874: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3b8874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3b8878: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3b8878u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b887c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3b887cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b8880: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x3b8880u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x3b8884: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3b8884u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b8888: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b8888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b888c: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x3b888cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3b8890: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x3b8890u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
label_3b8894:
    // 0x3b8894: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x3b8894u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3b8898: 0x4810013  bgez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B8898u;
    {
        const bool branch_taken_0x3b8898 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3B889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8898u;
        // 0x3b889c: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8898) {
            ctx->pc = 0x3B88E8u;
            goto label_3b88e8;
        }
    }
    ctx->pc = 0x3B88A0u;
    // 0x3b88a0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x3b88a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3b88a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3b88a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b88a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b88a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b88ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b88acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b88b0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3b88b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3b88b4: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x3b88b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x3b88b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3b88b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3b88bc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3b88bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3b88c0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3b88c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x3b88c4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3b88c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3b88c8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3b88c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3b88cc: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x3b88ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3b88d0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b88d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b88d4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3b88d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3b88d8: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x3b88d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x3b88dc: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x3b88dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3b88e0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3b88e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3b88e4: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x3b88e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_3b88e8:
    // 0x3b88e8: 0x8603c  dsll32      $t4, $t0, 0
    ctx->pc = 0x3b88e8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3b88ec: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x3b88ecu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x3b88f0: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x3b88f0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3b88f4: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x3b88f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3b88f8: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x3b88f8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x3b88fc: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x3b88fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3b8900: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x3b8900u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x3b8904: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x3B8904u;
    {
        const bool branch_taken_0x3b8904 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8904u;
        // 0x3b8908: 0x3a0c82d  daddu       $t9, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8904) {
            ctx->pc = 0x3B8BD4u;
            goto label_3b8bd4;
        }
    }
    ctx->pc = 0x3B890Cu;
    // 0x3b890c: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x3b890cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b8910: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3B8910u;
    {
        const bool branch_taken_0x3b8910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8910u;
        // 0x3b8914: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8910) {
            ctx->pc = 0x3B89A0u;
            goto label_3b89a0;
        }
    }
    ctx->pc = 0x3B8918u;
    // 0x3b8918: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3b8918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b891c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B891Cu;
    {
        const bool branch_taken_0x3b891c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B891Cu;
        // 0x3b8920: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b891c) {
            ctx->pc = 0x3B8938u;
            goto label_3b8938;
        }
    }
    ctx->pc = 0x3B8924u;
    // 0x3b8924: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x3b8924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3b8928: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3b8928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b892c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B892Cu;
    {
        const bool branch_taken_0x3b892c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B892Cu;
        // 0x3b8930: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b892c) {
            ctx->pc = 0x3B8950u;
            goto label_3b8950;
        }
    }
    ctx->pc = 0x3B8934u;
    // 0x3b8934: 0x0  nop
    ctx->pc = 0x3b8934u;
    // NOP
label_3b8938:
    // 0x3b8938: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3b8938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3b893c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3b893cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3b8940: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3b8940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b8944: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3b8944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b8948: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3b8948u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3b894c: 0x0  nop
    ctx->pc = 0x3b894cu;
    // NOP
label_3b8950:
    // 0x3b8950: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b8950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b8954: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x3b8954u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x3b8958: 0x24420518  addiu       $v0, $v0, 0x518
    ctx->pc = 0x3b8958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1304));
    // 0x3b895c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3b895cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b8960: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b8960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3b8964: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3b8964u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b8968: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b8968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b896c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x3b896cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3b8970: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8970u;
    {
        const bool branch_taken_0x3b8970 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8970u;
        // 0x3b8974: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8970) {
            ctx->pc = 0x3B898Cu;
            goto label_3b898c;
        }
    }
    ctx->pc = 0x3B8978u;
    // 0x3b8978: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x3b8978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b897c: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x3b897cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x3b8980: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x3b8980u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b8984: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x3b8984u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b8988: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x3b8988u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_3b898c:
    // 0x3b898c: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x3b898cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3b8990: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x3b8990u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3b8994: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x3B8994u;
    {
        const bool branch_taken_0x3b8994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8994u;
        // 0x3b8998: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8994) {
            ctx->pc = 0x3B8B18u;
            goto label_3b8b18;
        }
    }
    ctx->pc = 0x3B899Cu;
    // 0x3b899c: 0x0  nop
    ctx->pc = 0x3b899cu;
    // NOP
label_3b89a0:
    // 0x3b89a0: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B89A0u;
    {
        const bool branch_taken_0x3b89a0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B89A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B89A0u;
        // 0x3b89a4: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b89a0) {
            ctx->pc = 0x3B89C8u;
            goto label_3b89c8;
        }
    }
    ctx->pc = 0x3B89A8u;
    // 0x3b89a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b89a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b89ac: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B89ACu;
    {
        const bool branch_taken_0x3b89ac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b89ac) {
            ctx->pc = 0x3B89B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B89ACu;
            // 0x3b89b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B89B4u;
            goto label_3b89b4;
        }
    }
    ctx->pc = 0x3B89B4u;
label_3b89b4:
    // 0x3b89b4: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x3b89b4u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3b89b8: 0x1012  mflo        $v0
    ctx->pc = 0x3b89b8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b89bc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3b89bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b89c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3b89c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3b89c4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3b89c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_3b89c8:
    // 0x3b89c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B89C8u;
    {
        const bool branch_taken_0x3b89c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B89CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B89C8u;
        // 0x3b89cc: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b89c8) {
            ctx->pc = 0x3B89E0u;
            goto label_3b89e0;
        }
    }
    ctx->pc = 0x3B89D0u;
    // 0x3b89d0: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x3b89d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3b89d4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3b89d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b89d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B89D8u;
    {
        const bool branch_taken_0x3b89d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B89DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B89D8u;
        // 0x3b89dc: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b89d8) {
            ctx->pc = 0x3B89F8u;
            goto label_3b89f8;
        }
    }
    ctx->pc = 0x3B89E0u;
label_3b89e0:
    // 0x3b89e0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3b89e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3b89e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3b89e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3b89e8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3b89e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b89ec: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3b89ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b89f0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3b89f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3b89f4: 0x0  nop
    ctx->pc = 0x3b89f4u;
    // NOP
label_3b89f8:
    // 0x3b89f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b89f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b89fc: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x3b89fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x3b8a00: 0x24420518  addiu       $v0, $v0, 0x518
    ctx->pc = 0x3b8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1304));
    // 0x3b8a04: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3b8a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b8a08: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b8a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3b8a0c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3b8a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b8a10: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b8a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b8a14: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x3b8a14u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3b8a18: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8A18u;
    {
        const bool branch_taken_0x3b8a18 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8A18u;
        // 0x3b8a1c: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8a18) {
            ctx->pc = 0x3B8A30u;
            goto label_3b8a30;
        }
    }
    ctx->pc = 0x3B8A20u;
    // 0x3b8a20: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x3b8a20u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x3b8a24: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x3b8a24u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3b8a28: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3B8A28u;
    {
        const bool branch_taken_0x3b8a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8A28u;
        // 0x3b8a2c: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8a28) {
            ctx->pc = 0x3B8B0Cu;
            goto label_3b8b0c;
        }
    }
    ctx->pc = 0x3B8A30u;
label_3b8a30:
    // 0x3b8a30: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x3b8a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b8a34: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x3b8a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x3b8a38: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x3b8a38u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x3b8a3c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x3b8a3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b8a40: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x3b8a40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b8a44: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x3b8a44u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b8a48: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x3b8a48u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3b8a4c: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x3b8a4cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x3b8a50: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x3b8a50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3b8a54: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3b8a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8a58: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x3b8a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x3b8a5c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B8A5Cu;
    {
        const bool branch_taken_0x3b8a5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8a5c) {
            ctx->pc = 0x3B8A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8A5Cu;
            // 0x3b8a60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8A64u;
            goto label_3b8a64;
        }
    }
    ctx->pc = 0x3B8A64u;
label_3b8a64:
    // 0x3b8a64: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x3b8a64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8a68: 0x1012  mflo        $v0
    ctx->pc = 0x3b8a68u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b8a6c: 0x1810  mfhi        $v1
    ctx->pc = 0x3b8a6cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b8a70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b8a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b8a74: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b8a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b8a78: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b8a78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b8a7c: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x3b8a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b8a80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b8a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b8a84: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b8a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8a88: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3B8A88u;
    {
        const bool branch_taken_0x3b8a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8a88) {
            ctx->pc = 0x3B8A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8A88u;
            // 0x3b8a8c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8AB4u;
            goto label_3b8ab4;
        }
    }
    ctx->pc = 0x3B8A90u;
    // 0x3b8a90: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3b8a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b8a94: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3b8a94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b8a98: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8A98u;
    {
        const bool branch_taken_0x3b8a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8a98) {
            ctx->pc = 0x3B8A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8A98u;
            // 0x3b8a9c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8AB4u;
            goto label_3b8ab4;
        }
    }
    ctx->pc = 0x3B8AA0u;
    // 0x3b8aa0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b8aa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8aa4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B8AA4u;
    {
        const bool branch_taken_0x3b8aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8aa4) {
            ctx->pc = 0x3B8AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8AA4u;
            // 0x3b8aa8: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8AB0u;
            goto label_3b8ab0;
        }
    }
    ctx->pc = 0x3B8AACu;
    // 0x3b8aac: 0x0  nop
    ctx->pc = 0x3b8aacu;
    // NOP
label_3b8ab0:
    // 0x3b8ab0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3b8ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3b8ab4:
    // 0x3b8ab4: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x3b8ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x3b8ab8: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x3b8ab8u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3b8abc: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B8ABCu;
    {
        const bool branch_taken_0x3b8abc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8abc) {
            ctx->pc = 0x3B8AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8ABCu;
            // 0x3b8ac0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8AC4u;
            goto label_3b8ac4;
        }
    }
    ctx->pc = 0x3B8AC4u;
label_3b8ac4:
    // 0x3b8ac4: 0x1012  mflo        $v0
    ctx->pc = 0x3b8ac4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b8ac8: 0x1810  mfhi        $v1
    ctx->pc = 0x3b8ac8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b8acc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b8accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b8ad0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b8ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b8ad4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b8ad4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b8ad8: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x3b8ad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b8adc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b8adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b8ae0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b8ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8ae4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B8AE4u;
    {
        const bool branch_taken_0x3b8ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8ae4) {
            ctx->pc = 0x3B8AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8AE4u;
            // 0x3b8ae8: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8B0Cu;
            goto label_3b8b0c;
        }
    }
    ctx->pc = 0x3B8AECu;
    // 0x3b8aec: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3b8aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b8af0: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3b8af0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b8af4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8AF4u;
    {
        const bool branch_taken_0x3b8af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8AF4u;
        // 0x3b8af8: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8af4) {
            ctx->pc = 0x3B8B0Cu;
            goto label_3b8b0c;
        }
    }
    ctx->pc = 0x3B8AFCu;
    // 0x3b8afc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b8afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8b00: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B8B00u;
    {
        const bool branch_taken_0x3b8b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8b00) {
            ctx->pc = 0x3B8B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8B00u;
            // 0x3b8b04: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8B08u;
            goto label_3b8b08;
        }
    }
    ctx->pc = 0x3B8B08u;
label_3b8b08:
    // 0x3b8b08: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x3b8b08u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3b8b0c:
    // 0x3b8b0c: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x3b8b0cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x3b8b10: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x3b8b10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8b14: 0x0  nop
    ctx->pc = 0x3b8b14u;
    // NOP
label_3b8b18:
    // 0x3b8b18: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x3b8b18u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x3b8b1c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B8B1Cu;
    {
        const bool branch_taken_0x3b8b1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8b1c) {
            ctx->pc = 0x3B8B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8B1Cu;
            // 0x3b8b20: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8B24u;
            goto label_3b8b24;
        }
    }
    ctx->pc = 0x3B8B24u;
label_3b8b24:
    // 0x3b8b24: 0x1012  mflo        $v0
    ctx->pc = 0x3b8b24u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b8b28: 0x1810  mfhi        $v1
    ctx->pc = 0x3b8b28u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b8b2c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b8b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b8b30: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b8b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b8b34: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b8b34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b8b38: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x3b8b38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b8b3c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b8b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b8b40: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b8b40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8b44: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B8B44u;
    {
        const bool branch_taken_0x3b8b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8b44) {
            ctx->pc = 0x3B8B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8B44u;
            // 0x3b8b48: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8B6Cu;
            goto label_3b8b6c;
        }
    }
    ctx->pc = 0x3B8B4Cu;
    // 0x3b8b4c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3b8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b8b50: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3b8b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b8b54: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8B54u;
    {
        const bool branch_taken_0x3b8b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8b54) {
            ctx->pc = 0x3B8B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8B54u;
            // 0x3b8b58: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8B6Cu;
            goto label_3b8b6c;
        }
    }
    ctx->pc = 0x3B8B5Cu;
    // 0x3b8b5c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b8b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8b60: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B8B60u;
    {
        const bool branch_taken_0x3b8b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8b60) {
            ctx->pc = 0x3B8B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8B60u;
            // 0x3b8b64: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8B68u;
            goto label_3b8b68;
        }
    }
    ctx->pc = 0x3B8B68u;
label_3b8b68:
    // 0x3b8b68: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3b8b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3b8b6c:
    // 0x3b8b6c: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x3b8b6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x3b8b70: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x3b8b70u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3b8b74: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B8B74u;
    {
        const bool branch_taken_0x3b8b74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8b74) {
            ctx->pc = 0x3B8B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8B74u;
            // 0x3b8b78: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8B7Cu;
            goto label_3b8b7c;
        }
    }
    ctx->pc = 0x3B8B7Cu;
label_3b8b7c:
    // 0x3b8b7c: 0x1012  mflo        $v0
    ctx->pc = 0x3b8b7cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b8b80: 0x1810  mfhi        $v1
    ctx->pc = 0x3b8b80u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b8b84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b8b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b8b88: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b8b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b8b8c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b8b8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b8b90: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x3b8b90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b8b94: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b8b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b8b98: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b8b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b8b9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B8B9Cu;
    {
        const bool branch_taken_0x3b8b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8b9c) {
            ctx->pc = 0x3B8BBCu;
            goto label_3b8bbc;
        }
    }
    ctx->pc = 0x3B8BA4u;
    // 0x3b8ba4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3b8ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b8ba8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3b8ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b8bac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B8BACu;
    {
        const bool branch_taken_0x3b8bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8BACu;
        // 0x3b8bb0: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8bac) {
            ctx->pc = 0x3B8BBCu;
            goto label_3b8bbc;
        }
    }
    ctx->pc = 0x3B8BB4u;
    // 0x3b8bb4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B8BB4u;
    {
        const bool branch_taken_0x3b8bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8bb4) {
            ctx->pc = 0x3B8BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8BB4u;
            // 0x3b8bb8: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8BBCu;
            goto label_3b8bbc;
        }
    }
    ctx->pc = 0x3B8BBCu;
label_3b8bbc:
    // 0x3b8bbc: 0x13200097  beqz        $t9, . + 4 + (0x97 << 2)
    ctx->pc = 0x3B8BBCu;
    {
        const bool branch_taken_0x3b8bbc = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8BBCu;
        // 0x3b8bc0: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8bbc) {
            ctx->pc = 0x3B8E1Cu;
            goto label_3b8e1c;
        }
    }
    ctx->pc = 0x3B8BC4u;
    // 0x3b8bc4: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x3b8bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b8bc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3b8bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3b8bcc: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x3B8BCCu;
    {
        const bool branch_taken_0x3b8bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8BCCu;
        // 0x3b8bd0: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8bcc) {
            ctx->pc = 0x3B8E18u;
            goto label_3b8e18;
        }
    }
    ctx->pc = 0x3B8BD4u;
label_3b8bd4:
    // 0x3b8bd4: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x3b8bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b8bd8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8BD8u;
    {
        const bool branch_taken_0x3b8bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8BD8u;
        // 0x3b8bdc: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8bd8) {
            ctx->pc = 0x3B8BF4u;
            goto label_3b8bf4;
        }
    }
    ctx->pc = 0x3B8BE0u;
    // 0x3b8be0: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x3b8be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3b8be4: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x3b8be4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3b8be8: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x3b8be8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x3b8bec: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x3B8BECu;
    {
        const bool branch_taken_0x3b8bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8BECu;
        // 0x3b8bf0: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8bec) {
            ctx->pc = 0x3B8E1Cu;
            goto label_3b8e1c;
        }
    }
    ctx->pc = 0x3B8BF4u;
label_3b8bf4:
    // 0x3b8bf4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3b8bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3b8bf8: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x3b8bf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b8bfc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8BFCu;
    {
        const bool branch_taken_0x3b8bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8BFCu;
        // 0x3b8c00: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8bfc) {
            ctx->pc = 0x3B8C18u;
            goto label_3b8c18;
        }
    }
    ctx->pc = 0x3B8C04u;
    // 0x3b8c04: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x3b8c04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3b8c08: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3b8c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b8c0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B8C0Cu;
    {
        const bool branch_taken_0x3b8c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8C0Cu;
        // 0x3b8c10: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8c0c) {
            ctx->pc = 0x3B8C30u;
            goto label_3b8c30;
        }
    }
    ctx->pc = 0x3B8C14u;
    // 0x3b8c14: 0x0  nop
    ctx->pc = 0x3b8c14u;
    // NOP
label_3b8c18:
    // 0x3b8c18: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x3b8c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3b8c1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3b8c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3b8c20: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3b8c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b8c24: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x3b8c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b8c28: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x3b8c28u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x3b8c2c: 0x0  nop
    ctx->pc = 0x3b8c2cu;
    // NOP
label_3b8c30:
    // 0x3b8c30: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b8c34: 0xc92006  srlv        $a0, $t1, $a2
    ctx->pc = 0x3b8c34u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b8c38: 0x24420518  addiu       $v0, $v0, 0x518
    ctx->pc = 0x3b8c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1304));
    // 0x3b8c3c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3b8c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b8c40: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b8c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3b8c44: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3b8c44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b8c48: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3b8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3b8c4c: 0xa36823  subu        $t5, $a1, $v1
    ctx->pc = 0x3b8c4cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3b8c50: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B8C50u;
    {
        const bool branch_taken_0x3b8c50 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8C50u;
        // 0x3b8c54: 0xad7023  subu        $t6, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8c50) {
            ctx->pc = 0x3B8C98u;
            goto label_3b8c98;
        }
    }
    ctx->pc = 0x3B8C58u;
    // 0x3b8c58: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x3b8c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3b8c5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B8C5Cu;
    {
        const bool branch_taken_0x3b8c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8C5Cu;
        // 0x3b8c60: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8c5c) {
            ctx->pc = 0x3B8C70u;
            goto label_3b8c70;
        }
    }
    ctx->pc = 0x3B8C64u;
    // 0x3b8c64: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x3b8c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b8c68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8C68u;
    {
        const bool branch_taken_0x3b8c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8c68) {
            ctx->pc = 0x3B8C80u;
            goto label_3b8c80;
        }
    }
    ctx->pc = 0x3B8C70u;
label_3b8c70:
    // 0x3b8c70: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x3b8c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3b8c74: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x3b8c74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3b8c78: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x3b8c78u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b8c7c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x3b8c7cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b8c80:
    // 0x3b8c80: 0x13200066  beqz        $t9, . + 4 + (0x66 << 2)
    ctx->pc = 0x3B8C80u;
    {
        const bool branch_taken_0x3b8c80 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8C80u;
        // 0x3b8c84: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8c80) {
            ctx->pc = 0x3B8E1Cu;
            goto label_3b8e1c;
        }
    }
    ctx->pc = 0x3B8C88u;
    // 0x3b8c88: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x3b8c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3b8c8c: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x3b8c8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3b8c90: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x3B8C90u;
    {
        const bool branch_taken_0x3b8c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8C90u;
        // 0x3b8c94: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8c90) {
            ctx->pc = 0x3B8E18u;
            goto label_3b8e18;
        }
    }
    ctx->pc = 0x3B8C98u;
label_3b8c98:
    // 0x3b8c98: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x3b8c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b8c9c: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x3b8c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x3b8ca0: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x3b8ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x3b8ca4: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x3b8ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x3b8ca8: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x3b8ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b8cac: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x3b8cacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b8cb0: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x3b8cb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3b8cb4: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x3b8cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b8cb8: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x3b8cb8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b8cbc: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x3b8cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x3b8cc0: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x3b8cc0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x3b8cc4: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x3b8cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x3b8cc8: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x3b8cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x3b8ccc: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B8CCCu;
    {
        const bool branch_taken_0x3b8ccc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8ccc) {
            ctx->pc = 0x3B8CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8CCCu;
            // 0x3b8cd0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8CD4u;
            goto label_3b8cd4;
        }
    }
    ctx->pc = 0x3B8CD4u;
label_3b8cd4:
    // 0x3b8cd4: 0x1012  mflo        $v0
    ctx->pc = 0x3b8cd4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b8cd8: 0x1810  mfhi        $v1
    ctx->pc = 0x3b8cd8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b8cdc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3b8cdcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8ce0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b8ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b8ce4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b8ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b8ce8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b8ce8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b8cec: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x3b8cecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b8cf0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b8cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b8cf4: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x3b8cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b8cf8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3B8CF8u;
    {
        const bool branch_taken_0x3b8cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8cf8) {
            ctx->pc = 0x3B8CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8CF8u;
            // 0x3b8cfc: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8D2Cu;
            goto label_3b8d2c;
        }
    }
    ctx->pc = 0x3B8D00u;
    // 0x3b8d00: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3b8d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3b8d04: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x3b8d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b8d08: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B8D08u;
    {
        const bool branch_taken_0x3b8d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8D08u;
        // 0x3b8d0c: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8d08) {
            ctx->pc = 0x3B8D28u;
            goto label_3b8d28;
        }
    }
    ctx->pc = 0x3B8D10u;
    // 0x3b8d10: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x3b8d10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b8d14: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8D14u;
    {
        const bool branch_taken_0x3b8d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8d14) {
            ctx->pc = 0x3B8D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8D14u;
            // 0x3b8d18: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8D2Cu;
            goto label_3b8d2c;
        }
    }
    ctx->pc = 0x3B8D1Cu;
    // 0x3b8d1c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3b8d1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3b8d20: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3b8d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3b8d24: 0x0  nop
    ctx->pc = 0x3b8d24u;
    // NOP
label_3b8d28:
    // 0x3b8d28: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x3b8d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3b8d2c:
    // 0x3b8d2c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B8D2Cu;
    {
        const bool branch_taken_0x3b8d2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8d2c) {
            ctx->pc = 0x3B8D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8D2Cu;
            // 0x3b8d30: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8D34u;
            goto label_3b8d34;
        }
    }
    ctx->pc = 0x3B8D34u;
label_3b8d34:
    // 0x3b8d34: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x3b8d34u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3b8d38: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x3b8d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x3b8d3c: 0x1012  mflo        $v0
    ctx->pc = 0x3b8d3cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b8d40: 0x1810  mfhi        $v1
    ctx->pc = 0x3b8d40u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b8d44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3b8d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8d48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b8d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b8d4c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b8d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b8d50: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b8d50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b8d54: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x3b8d54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b8d58: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x3b8d58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b8d5c: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x3b8d5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b8d60: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B8D60u;
    {
        const bool branch_taken_0x3b8d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8D60u;
        // 0x3b8d64: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8d60) {
            ctx->pc = 0x3B8D90u;
            goto label_3b8d90;
        }
    }
    ctx->pc = 0x3B8D68u;
    // 0x3b8d68: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x3b8d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3b8d6c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x3b8d6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b8d70: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8D70u;
    {
        const bool branch_taken_0x3b8d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8D70u;
        // 0x3b8d74: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8d70) {
            ctx->pc = 0x3B8D8Cu;
            goto label_3b8d8c;
        }
    }
    ctx->pc = 0x3B8D78u;
    // 0x3b8d78: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x3b8d78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b8d7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B8D7Cu;
    {
        const bool branch_taken_0x3b8d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8D7Cu;
        // 0x3b8d80: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8d7c) {
            ctx->pc = 0x3B8D90u;
            goto label_3b8d90;
        }
    }
    ctx->pc = 0x3B8D84u;
    // 0x3b8d84: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3b8d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3b8d88: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x3b8d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_3b8d8c:
    // 0x3b8d8c: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x3b8d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_3b8d90:
    // 0x3b8d90: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x3b8d90u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3b8d94: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3b8d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3b8d98: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3b8d98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b8d9c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3b8d9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8da0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3b8da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3b8da4: 0x480019  multu       $v0, $t0
    ctx->pc = 0x3b8da4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b8da8: 0x3810  mfhi        $a3
    ctx->pc = 0x3b8da8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x3b8dac: 0x3012  mflo        $a2
    ctx->pc = 0x3b8dacu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3b8db0: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x3b8db0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b8db4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8DB4u;
    {
        const bool branch_taken_0x3b8db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8DB4u;
        // 0x3b8db8: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8db4) {
            ctx->pc = 0x3B8DD0u;
            goto label_3b8dd0;
        }
    }
    ctx->pc = 0x3B8DBCu;
    // 0x3b8dbc: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B8DBCu;
    {
        const bool branch_taken_0x3b8dbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x3B8DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8DBCu;
        // 0x3b8dc0: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8dbc) {
            ctx->pc = 0x3B8DE0u;
            goto label_3b8de0;
        }
    }
    ctx->pc = 0x3B8DC4u;
    // 0x3b8dc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8DC4u;
    {
        const bool branch_taken_0x3b8dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8dc4) {
            ctx->pc = 0x3B8DE0u;
            goto label_3b8de0;
        }
    }
    ctx->pc = 0x3B8DCCu;
    // 0x3b8dcc: 0x0  nop
    ctx->pc = 0x3b8dccu;
    // NOP
label_3b8dd0:
    // 0x3b8dd0: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x3b8dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3b8dd4: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x3b8dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3b8dd8: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x3b8dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b8ddc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3b8ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b8de0:
    // 0x3b8de0: 0x1320000e  beqz        $t9, . + 4 + (0xE << 2)
    ctx->pc = 0x3B8DE0u;
    {
        const bool branch_taken_0x3b8de0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8DE0u;
        // 0x3b8de4: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8de0) {
            ctx->pc = 0x3B8E1Cu;
            goto label_3b8e1c;
        }
    }
    ctx->pc = 0x3B8DE8u;
    // 0x3b8de8: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x3b8de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3b8dec: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x3b8decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3b8df0: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x3b8df0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b8df4: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x3b8df4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x3b8df8: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x3b8df8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b8dfc: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x3b8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b8e00: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3b8e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3b8e04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3b8e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3b8e08: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3b8e08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3b8e0c: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x3b8e0cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3b8e10: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x3b8e10u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x3b8e14: 0x0  nop
    ctx->pc = 0x3b8e14u;
    // NOP
label_3b8e18:
    // 0x3b8e18: 0xff2f0000  sd          $t7, 0x0($t9)
    ctx->pc = 0x3b8e18u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 15));
label_3b8e1c:
    // 0x3b8e1c: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3B8E1Cu;
    {
        const bool branch_taken_0x3b8e1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8E1Cu;
        // 0x3b8e20: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8e1c) {
            ctx->pc = 0x3B8E78u;
            goto label_3b8e78;
        }
    }
    ctx->pc = 0x3B8E24u;
    // 0x3b8e24: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3b8e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b8e28: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3b8e28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3b8e2c: 0x304c024  and         $t8, $t8, $a0
    ctx->pc = 0x3b8e2cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x3b8e30: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x3b8e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b8e34: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3b8e34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b8e38: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3b8e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3b8e3c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b8e3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b8e40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3b8e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3b8e44: 0x31823  negu        $v1, $v1
    ctx->pc = 0x3b8e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x3b8e48: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3b8e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3b8e4c: 0x302c025  or          $t8, $t8, $v0
    ctx->pc = 0x3b8e4cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
    // 0x3b8e50: 0x18203c  dsll32      $a0, $t8, 0
    ctx->pc = 0x3b8e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) << (32 + 0));
    // 0x3b8e54: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3b8e54u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3b8e58: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3b8e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3b8e5c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3b8e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3b8e60: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x3b8e60u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3b8e64: 0x302c024  and         $t8, $t8, $v0
    ctx->pc = 0x3b8e64u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x3b8e68: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3b8e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b8e6c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b8e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b8e70: 0x303c025  or          $t8, $t8, $v1
    ctx->pc = 0x3b8e70u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x3b8e74: 0xffb80000  sd          $t8, 0x0($sp)
    ctx->pc = 0x3b8e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 24));
label_3b8e78:
    // 0x3b8e78: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x3b8e78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b8e7c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3b8e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b8e80: 0x3e00008  jr          $ra
    ctx->pc = 0x3B8E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8E80u;
        // 0x3b8e84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8E88u;
}
