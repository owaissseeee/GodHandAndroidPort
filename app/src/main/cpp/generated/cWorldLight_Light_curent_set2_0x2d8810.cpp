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

// Function: cWorldLight_Light_curent_set2
// Address: 0x2d8810 - 0x2d8a10
void cWorldLight_Light_curent_set2_0x2d8810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cWorldLight_Light_curent_set2_0x2d8810");
#endif

    switch (ctx->pc) {
        case 0x2d8870u: goto label_2d8870;
        case 0x2d889cu: goto label_2d889c;
        case 0x2d88dcu: goto label_2d88dc;
        case 0x2d8950u: goto label_2d8950;
        case 0x2d8980u: goto label_2d8980;
        case 0x2d89b4u: goto label_2d89b4;
        default: break;
    }

    ctx->pc = 0x2d8810u;

    // 0x2d8810: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d8810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2d8814: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2d8814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2d8818: 0x2442a400  addiu       $v0, $v0, -0x5C00
    ctx->pc = 0x2d8818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943744));
    // 0x2d881c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2d881cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2d8820: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2d8820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2d8824: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x2d8824u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x2d8828: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2d8828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2d882c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2d882cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d8830: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d8830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2d8834: 0x8ca20074  lw          $v0, 0x74($a1)
    ctx->pc = 0x2d8834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x2d8838: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2D8838u;
    {
        const bool branch_taken_0x2d8838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8838u;
        // 0x2d883c: 0x24684700  addiu       $t0, $v1, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 18176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8838) {
            ctx->pc = 0x2D8930u;
            goto label_2d8930;
        }
    }
    ctx->pc = 0x2D8840u;
    // 0x2d8840: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2d8840u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8844: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2d8844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d8848: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2d8848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d884c: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2d884cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d8850: 0x8d020078  lw          $v0, 0x78($t0)
    ctx->pc = 0x2d8850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 120)));
    // 0x2d8854: 0x162102a  slt         $v0, $t3, $v0
    ctx->pc = 0x2d8854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d8858: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2D8858u;
    {
        const bool branch_taken_0x2d8858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8858u;
        // 0x2d885c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8858) {
            ctx->pc = 0x2D8918u;
            goto label_2d8918;
        }
    }
    ctx->pc = 0x2D8860u;
    // 0x2d8860: 0x240d0070  addiu       $t5, $zero, 0x70
    ctx->pc = 0x2d8860u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2d8864: 0x240f00ff  addiu       $t7, $zero, 0xFF
    ctx->pc = 0x2d8864u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d8868: 0x240e00ff  addiu       $t6, $zero, 0xFF
    ctx->pc = 0x2d8868u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d886c: 0xed1018  mult        $v0, $a3, $t5
    ctx->pc = 0x2d886cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2d8870:
    // 0x2d8870: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x2d8870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2d8874: 0x94620080  lhu         $v0, 0x80($v1)
    ctx->pc = 0x2d8874u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2d8878: 0x104f0022  beq         $v0, $t7, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D8878u;
    {
        const bool branch_taken_0x2d8878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x2D887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8878u;
        // 0x2d887c: 0x24ec0001  addiu       $t4, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8878) {
            ctx->pc = 0x2D8904u;
            goto label_2d8904;
        }
    }
    ctx->pc = 0x2D8880u;
    // 0x2d8880: 0x94620082  lhu         $v0, 0x82($v1)
    ctx->pc = 0x2d8880u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x2d8884: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D8884u;
    {
        const bool branch_taken_0x2d8884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8884u;
        // 0x2d8888: 0x246200e0  addiu       $v0, $v1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8884) {
            ctx->pc = 0x2D8904u;
            goto label_2d8904;
        }
    }
    ctx->pc = 0x2D888Cu;
    // 0x2d888c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d888cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8890: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x2d8890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2d8894: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2d8894u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d8898: 0x256a0001  addiu       $t2, $t3, 0x1
    ctx->pc = 0x2d8898u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_2d889c:
    // 0x2d889c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2d889cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d88a0: 0x78900010  lq          $s0, 0x10($a0)
    ctx->pc = 0x2d88a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d88a4: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x2d88a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x2d88a8: 0x7cd00010  sq          $s0, 0x10($a2)
    ctx->pc = 0x2d88a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 16));
    // 0x2d88ac: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2d88acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2d88b0: 0x1482fffa  bne         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D88B0u;
    {
        const bool branch_taken_0x2d88b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D88B0u;
        // 0x2d88b4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d88b0) {
            ctx->pc = 0x2D889Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d889c;
        }
    }
    ctx->pc = 0x2D88B8u;
    // 0x2d88b8: 0xed1818  mult        $v1, $a3, $t5
    ctx->pc = 0x2d88b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d88bc: 0x16d3818  mult        $a3, $t3, $t5
    ctx->pc = 0x2d88bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2d88c0: 0x788b0000  lq          $t3, 0x0($a0)
    ctx->pc = 0x2d88c0u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d88c4: 0x7ccb0000  sq          $t3, 0x0($a2)
    ctx->pc = 0x2d88c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 11));
    // 0x2d88c8: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x2d88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2d88cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d88ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d88d0: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x2d88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2d88d4: 0xa44e0080  sh          $t6, 0x80($v0)
    ctx->pc = 0x2d88d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 128), (uint16_t)GPR_U32(ctx, 14));
    // 0x2d88d8: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x2d88d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_2d88dc:
    // 0x2d88dc: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2d88dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d88e0: 0x78860010  lq          $a2, 0x10($a0)
    ctx->pc = 0x2d88e0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d88e4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2d88e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2d88e8: 0x7c460010  sq          $a2, 0x10($v0)
    ctx->pc = 0x2d88e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
    // 0x2d88ec: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2d88ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2d88f0: 0x1489fffa  bne         $a0, $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D88F0u;
    {
        const bool branch_taken_0x2d88f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x2D88F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D88F0u;
        // 0x2d88f4: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d88f0) {
            ctx->pc = 0x2D88DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d88dc;
        }
    }
    ctx->pc = 0x2D88F8u;
    // 0x2d88f8: 0x78900000  lq          $s0, 0x0($a0)
    ctx->pc = 0x2d88f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d88fc: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x2d88fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8900: 0x7c500000  sq          $s0, 0x0($v0)
    ctx->pc = 0x2d8900u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 16));
label_2d8904:
    // 0x2d8904: 0x8d020078  lw          $v0, 0x78($t0)
    ctx->pc = 0x2d8904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 120)));
    // 0x2d8908: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x2d8908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d890c: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x2d890cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d8910: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2D8910u;
    {
        const bool branch_taken_0x2d8910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8910u;
        // 0x2d8914: 0xed1018  mult        $v0, $a3, $t5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8910) {
            ctx->pc = 0x2D8870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8870;
        }
    }
    ctx->pc = 0x2D8918u;
label_2d8918:
    // 0x2d8918: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2d8918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2d891c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x2d891cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x2d8920: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2d8920u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x2d8924: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2d8924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2d8928: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8928u;
    {
        const bool branch_taken_0x2d8928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8928) {
            ctx->pc = 0x2D892Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8928u;
            // 0x2d892c: 0xad0b0078  sw          $t3, 0x78($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 120), GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8938u;
            goto label_2d8938;
        }
    }
    ctx->pc = 0x2D8930u;
label_2d8930:
    // 0x2d8930: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2D8930u;
    {
        const bool branch_taken_0x2d8930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8930u;
        // 0x2d8934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8930) {
            ctx->pc = 0x2D89F8u;
            goto label_2d89f8;
        }
    }
    ctx->pc = 0x2D8938u;
label_2d8938:
    // 0x2d8938: 0x8ca20070  lw          $v0, 0x70($a1)
    ctx->pc = 0x2d8938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x2d893c: 0x1840002d  blez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2D893Cu;
    {
        const bool branch_taken_0x2d893c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2D8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D893Cu;
        // 0x2d8940: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d893c) {
            ctx->pc = 0x2D89F4u;
            goto label_2d89f4;
        }
    }
    ctx->pc = 0x2D8944u;
    // 0x2d8944: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x2d8944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2d8948: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x2d8948u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d894c: 0xc72018  mult        $a0, $a2, $a3
    ctx->pc = 0x2d894cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2d8950:
    // 0x2d8950: 0x8ca30074  lw          $v1, 0x74($a1)
    ctx->pc = 0x2d8950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x2d8954: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d8954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d8958: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2d8958u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d895c: 0x10490021  beq         $v0, $t1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D895Cu;
    {
        const bool branch_taken_0x2d895c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x2D8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D895Cu;
        // 0x2d8960: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d895c) {
            ctx->pc = 0x2D89E4u;
            goto label_2d89e4;
        }
    }
    ctx->pc = 0x2D8964u;
    // 0x2d8964: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x2d8964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2d8968: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D8968u;
    {
        const bool branch_taken_0x2d8968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8968u;
        // 0x2d896c: 0x24830060  addiu       $v1, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8968) {
            ctx->pc = 0x2D89A4u;
            goto label_2d89a4;
        }
    }
    ctx->pc = 0x2D8970u;
    // 0x2d8970: 0x8d020078  lw          $v0, 0x78($t0)
    ctx->pc = 0x2d8970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 120)));
    // 0x2d8974: 0x475018  mult        $t2, $v0, $a3
    ctx->pc = 0x2d8974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2d8978: 0x1481021  addu        $v0, $t2, $t0
    ctx->pc = 0x2d8978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2d897c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2d897cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_2d8980:
    // 0x2d8980: 0x788b0000  lq          $t3, 0x0($a0)
    ctx->pc = 0x2d8980u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8984: 0x788c0010  lq          $t4, 0x10($a0)
    ctx->pc = 0x2d8984u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d8988: 0x7c4b0000  sq          $t3, 0x0($v0)
    ctx->pc = 0x2d8988u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 11));
    // 0x2d898c: 0x7c4c0010  sq          $t4, 0x10($v0)
    ctx->pc = 0x2d898cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 12));
    // 0x2d8990: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2d8990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2d8994: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D8994u;
    {
        const bool branch_taken_0x2d8994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8994u;
        // 0x2d8998: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8994) {
            ctx->pc = 0x2D8980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8980;
        }
    }
    ctx->pc = 0x2D899Cu;
    // 0x2d899c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D899Cu;
    {
        const bool branch_taken_0x2d899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d899c) {
            ctx->pc = 0x2D89D0u;
            goto label_2d89d0;
        }
    }
    ctx->pc = 0x2D89A4u;
label_2d89a4:
    // 0x2d89a4: 0x8d020078  lw          $v0, 0x78($t0)
    ctx->pc = 0x2d89a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 120)));
    // 0x2d89a8: 0x475018  mult        $t2, $v0, $a3
    ctx->pc = 0x2d89a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2d89ac: 0x1481021  addu        $v0, $t2, $t0
    ctx->pc = 0x2d89acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2d89b0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2d89b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_2d89b4:
    // 0x2d89b4: 0x788b0000  lq          $t3, 0x0($a0)
    ctx->pc = 0x2d89b4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d89b8: 0x788c0010  lq          $t4, 0x10($a0)
    ctx->pc = 0x2d89b8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d89bc: 0x7c4b0000  sq          $t3, 0x0($v0)
    ctx->pc = 0x2d89bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 11));
    // 0x2d89c0: 0x7c4c0010  sq          $t4, 0x10($v0)
    ctx->pc = 0x2d89c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 12));
    // 0x2d89c4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2d89c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2d89c8: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D89C8u;
    {
        const bool branch_taken_0x2d89c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D89CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D89C8u;
        // 0x2d89cc: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d89c8) {
            ctx->pc = 0x2D89B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d89b4;
        }
    }
    ctx->pc = 0x2D89D0u;
label_2d89d0:
    // 0x2d89d0: 0x78910000  lq          $s1, 0x0($a0)
    ctx->pc = 0x2d89d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d89d4: 0x7c510000  sq          $s1, 0x0($v0)
    ctx->pc = 0x2d89d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 17));
    // 0x2d89d8: 0x8d020078  lw          $v0, 0x78($t0)
    ctx->pc = 0x2d89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 120)));
    // 0x2d89dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d89dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d89e0: 0xad020078  sw          $v0, 0x78($t0)
    ctx->pc = 0x2d89e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 120), GPR_U32(ctx, 2));
label_2d89e4:
    // 0x2d89e4: 0x8ca20070  lw          $v0, 0x70($a1)
    ctx->pc = 0x2d89e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x2d89e8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2d89e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d89ec: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2D89ECu;
    {
        const bool branch_taken_0x2d89ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D89ECu;
        // 0x2d89f0: 0xc72018  mult        $a0, $a2, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d89ec) {
            ctx->pc = 0x2D8950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8950;
        }
    }
    ctx->pc = 0x2D89F4u;
label_2d89f4:
    // 0x2d89f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2d89f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d89f8:
    // 0x2d89f8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2d89f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d89fc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2d89fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d8a00: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2d8a00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d8a04: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A04u;
        // 0x2d8a08: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8A0Cu;
    // 0x2d8a0c: 0x0  nop
    ctx->pc = 0x2d8a0cu;
    // NOP
    ctx->pc = 0x2d8a10u;
}
