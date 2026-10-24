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

// Function: func_00143670
// Address: 0x143670 - 0x143998
void func_00143670_0x143670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00143670_0x143670");
#endif

    switch (ctx->pc) {
        case 0x14372cu: goto label_14372c;
        case 0x143740u: goto label_143740;
        case 0x143758u: goto label_143758;
        case 0x143778u: goto label_143778;
        case 0x1437c4u: goto label_1437c4;
        case 0x1437fcu: goto label_1437fc;
        case 0x143810u: goto label_143810;
        case 0x143858u: goto label_143858;
        case 0x1438fcu: goto label_1438fc;
        case 0x143964u: goto label_143964;
        default: break;
    }

    ctx->pc = 0x143670u;

    // 0x143670: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x143670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x143674: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x143674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x143678: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x143678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x14367c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14367cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143680: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x143680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x143684: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x143684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x143688: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x143688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x14368c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14368cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x143690: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x143690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x143694: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x143694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x143698: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x143698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x14369c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x14369cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1436a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1436a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1436a4: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x1436a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1436a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1436a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1436ac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1436acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1436b0: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1436b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x1436b4: 0x8e460094  lw          $a2, 0x94($s2)
    ctx->pc = 0x1436b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1436b8: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x1436b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1436bc: 0x8cc30084  lw          $v1, 0x84($a2)
    ctx->pc = 0x1436bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
    // 0x1436c0: 0x246503e8  addiu       $a1, $v1, 0x3E8
    ctx->pc = 0x1436c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
    // 0x1436c4: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1436c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1436c8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1436C8u;
    {
        const bool branch_taken_0x1436c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1436c8) {
            ctx->pc = 0x1436CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1436C8u;
            // 0x1436cc: 0xacc50084  sw          $a1, 0x84($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1436FCu;
            goto label_1436fc;
        }
    }
    ctx->pc = 0x1436D0u;
    // 0x1436d0: 0x24650064  addiu       $a1, $v1, 0x64
    ctx->pc = 0x1436d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1436d4: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1436d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1436d8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1436D8u;
    {
        const bool branch_taken_0x1436d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1436d8) {
            ctx->pc = 0x1436DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1436D8u;
            // 0x1436dc: 0xacc50084  sw          $a1, 0x84($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1436FCu;
            goto label_1436fc;
        }
    }
    ctx->pc = 0x1436E0u;
    // 0x1436e0: 0x2465000a  addiu       $a1, $v1, 0xA
    ctx->pc = 0x1436e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1436e4: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1436e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1436e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1436E8u;
    {
        const bool branch_taken_0x1436e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1436ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436E8u;
        // 0x1436ec: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1436e8) {
            ctx->pc = 0x1436F8u;
            goto label_1436f8;
        }
    }
    ctx->pc = 0x1436F0u;
    // 0x1436f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1436F0u;
    {
        const bool branch_taken_0x1436f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1436F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436F0u;
        // 0x1436f4: 0xacc50084  sw          $a1, 0x84($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1436f0) {
            ctx->pc = 0x1436FCu;
            goto label_1436fc;
        }
    }
    ctx->pc = 0x1436F8u;
label_1436f8:
    // 0x1436f8: 0xacc20084  sw          $v0, 0x84($a2)
    ctx->pc = 0x1436f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 2));
label_1436fc:
    // 0x1436fc: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x1436fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x143700: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x143700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x143704: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x143704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x143708: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x143708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14370c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14370Cu;
    {
        const bool branch_taken_0x14370c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14370c) {
            ctx->pc = 0x143710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14370Cu;
            // 0x143710: 0xac830084  sw          $v1, 0x84($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143714u;
            goto label_143714;
        }
    }
    ctx->pc = 0x143714u;
label_143714:
    // 0x143714: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x143714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x143718: 0x265701b0  addiu       $s7, $s2, 0x1B0
    ctx->pc = 0x143718u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    // 0x14371c: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x14371cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x143720: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x143720u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143724: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x143724u;
    SET_GPR_U32(ctx, 31, 0x14372Cu);
    ctx->pc = 0x143728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143724u;
    // 0x143728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x143724u, 0x14372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14372Cu;
label_14372c:
    // 0x14372c: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x14372cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x143730: 0x10430035  beq         $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x143730u;
    {
        const bool branch_taken_0x143730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x143730) {
            ctx->pc = 0x143808u;
            goto label_143808;
        }
    }
    ctx->pc = 0x143738u;
    // 0x143738: 0xc07ea16  jal         func_1FA858
    ctx->pc = 0x143738u;
    SET_GPR_U32(ctx, 31, 0x143740u);
    ctx->pc = 0x14373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143738u;
    // 0x14373c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA858u, 0x143738u, 0x143740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143740u;
label_143740:
    // 0x143740: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x143740u;
    {
        const bool branch_taken_0x143740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143740u;
        // 0x143744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143740) {
            ctx->pc = 0x143808u;
            goto label_143808;
        }
    }
    ctx->pc = 0x143748u;
    // 0x143748: 0x8e450098  lw          $a1, 0x98($s2)
    ctx->pc = 0x143748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x14374c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14374cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143750: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x143750u;
    SET_GPR_U32(ctx, 31, 0x143758u);
    ctx->pc = 0x143754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143750u;
    // 0x143754: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x143750u, 0x143758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143758u;
label_143758:
    // 0x143758: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x143758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14375c: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x14375cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x143760: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x143760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x143764: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x143764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x143768: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x143768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x14376c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14376cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x143770: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x143770u;
    {
        const bool branch_taken_0x143770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143770u;
        // 0x143774: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143770) {
            ctx->pc = 0x1437E4u;
            goto label_1437e4;
        }
    }
    ctx->pc = 0x143778u;
label_143778:
    // 0x143778: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x143778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14377c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14377Cu;
    {
        const bool branch_taken_0x14377c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14377Cu;
        // 0x143780: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14377c) {
            ctx->pc = 0x1437E0u;
            goto label_1437e0;
        }
    }
    ctx->pc = 0x143784u;
    // 0x143784: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x143784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x143788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14378c: 0x2913818  mult        $a3, $s4, $s1
    ctx->pc = 0x14378cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x143790: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x143790u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x143794: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x143794u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x143798: 0x2533021  addu        $a2, $s2, $s3
    ctx->pc = 0x143798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x14379c: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x14379cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1437a0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1437a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1437a4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1437a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1437a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437ac: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1437acu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1437b0: 0x0  nop
    ctx->pc = 0x1437b0u;
    // NOP
    // 0x1437b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1437b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1437b8: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x1437b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x1437bc: 0xc07ea0e  jal         func_1FA838
    ctx->pc = 0x1437BCu;
    SET_GPR_U32(ctx, 31, 0x1437C4u);
    ctx->pc = 0x1437C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1437BCu;
    // 0x1437c0: 0xa0c201a0  sb          $v0, 0x1A0($a2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 6), 416), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA838u, 0x1437BCu, 0x1437C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437C4u;
label_1437c4:
    // 0x1437c4: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1437c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1437c8: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x1437c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1437cc: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x1437ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
    // 0x1437d0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1437d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1437d4: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x1437d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1437d8: 0xa4710180  sh          $s1, 0x180($v1)
    ctx->pc = 0x1437d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 384), (uint16_t)GPR_U32(ctx, 17));
    // 0x1437dc: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x1437dcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1437e0:
    // 0x1437e0: 0x3293ffff  andi        $s3, $s4, 0xFFFF
    ctx->pc = 0x1437e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_1437e4:
    // 0x1437e4: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x1437e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1437e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1437E8u;
    {
        const bool branch_taken_0x1437e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1437e8) {
            ctx->pc = 0x143808u;
            goto label_143808;
        }
    }
    ctx->pc = 0x1437F0u;
    // 0x1437f0: 0x27d59b70  addiu       $s5, $fp, -0x6490
    ctx->pc = 0x1437f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941552));
    // 0x1437f4: 0xc07ea16  jal         func_1FA858
    ctx->pc = 0x1437F4u;
    SET_GPR_U32(ctx, 31, 0x1437FCu);
    ctx->pc = 0x1437F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1437F4u;
    // 0x1437f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA858u, 0x1437F4u, 0x1437FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437FCu;
label_1437fc:
    // 0x1437fc: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x1437fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x143800: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x143800u;
    {
        const bool branch_taken_0x143800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143800u;
        // 0x143804: 0x2f31821  addu        $v1, $s7, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143800) {
            ctx->pc = 0x143778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143778;
        }
    }
    ctx->pc = 0x143808u;
label_143808:
    // 0x143808: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x143808u;
    SET_GPR_U32(ctx, 31, 0x143810u);
    ctx->pc = 0x14380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143808u;
    // 0x14380c: 0x27c49b70  addiu       $a0, $fp, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x143808u, 0x143810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143810u;
label_143810:
    // 0x143810: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x143810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x143814: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x143814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x143818: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x143818u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14381c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x14381cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x143820: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x143820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x143824: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x143824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x143828: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x143828u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14382c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x14382cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x143830: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x143830u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x143834: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x143834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x143838: 0x26490180  addiu       $t1, $s2, 0x180
    ctx->pc = 0x143838u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    // 0x14383c: 0xae420090  sw          $v0, 0x90($s2)
    ctx->pc = 0x14383cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    // 0x143840: 0x26480140  addiu       $t0, $s2, 0x140
    ctx->pc = 0x143840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
    // 0x143844: 0x26470100  addiu       $a3, $s2, 0x100
    ctx->pc = 0x143844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x143848: 0x264601a0  addiu       $a2, $s2, 0x1A0
    ctx->pc = 0x143848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
    // 0x14384c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14384cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143850: 0x1452021  addu        $a0, $t2, $a1
    ctx->pc = 0x143850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x143854: 0x0  nop
    ctx->pc = 0x143854u;
    // NOP
label_143858:
    // 0x143858: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x143858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14385c: 0x144b0021  bne         $v0, $t3, . + 4 + (0x21 << 2)
    ctx->pc = 0x14385Cu;
    {
        const bool branch_taken_0x14385c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x143860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14385Cu;
        // 0x143860: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14385c) {
            ctx->pc = 0x1438E4u;
            goto label_1438e4;
        }
    }
    ctx->pc = 0x143864u;
    // 0x143864: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x143864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x143868: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x143868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x14386c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x14386cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143870: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x143870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x143874: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x143874u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x143878: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x143878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x14387c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14387Cu;
    {
        const bool branch_taken_0x14387c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x143880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14387Cu;
        // 0x143880: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14387c) {
            ctx->pc = 0x14389Cu;
            goto label_14389c;
        }
    }
    ctx->pc = 0x143884u;
    // 0x143884: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x143884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x143888: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x143888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x14388c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14388cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143890: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x143890u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x143894: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x143894u;
    {
        const bool branch_taken_0x143894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143894u;
        // 0x143898: 0xae440090  sw          $a0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143894) {
            ctx->pc = 0x1438E0u;
            goto label_1438e0;
        }
    }
    ctx->pc = 0x14389Cu;
label_14389c:
    // 0x14389c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x14389cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1438a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1438a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1438a4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1438a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1438a8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1438a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1438ac: 0x0  nop
    ctx->pc = 0x1438acu;
    // NOP
    // 0x1438b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1438B0u;
    {
        const bool branch_taken_0x1438b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1438B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438B0u;
        // 0x1438b4: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1438b0) {
            ctx->pc = 0x1438BCu;
            goto label_1438bc;
        }
    }
    ctx->pc = 0x1438B8u;
    // 0x1438b8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1438b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1438bc:
    // 0x1438bc: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x1438bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1438c0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1438c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1438c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1438c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1438c8: 0x0  nop
    ctx->pc = 0x1438c8u;
    // NOP
    // 0x1438cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1438ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1438d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1438d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1438d4: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1438d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x1438d8: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x1438d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1438dc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1438dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1438e0:
    // 0x1438e0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1438e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1438e4:
    // 0x1438e4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1438e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1438e8: 0x2ca30010  sltiu       $v1, $a1, 0x10
    ctx->pc = 0x1438e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1438ec: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1438ECu;
    {
        const bool branch_taken_0x1438ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1438F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438ECu;
        // 0x1438f0: 0x1452021  addu        $a0, $t2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1438ec) {
            ctx->pc = 0x143858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143858;
        }
    }
    ctx->pc = 0x1438F4u;
    // 0x1438f4: 0xc07ea08  jal         func_1FA820
    ctx->pc = 0x1438F4u;
    SET_GPR_U32(ctx, 31, 0x1438FCu);
    ctx->pc = 0x1438F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1438F4u;
    // 0x1438f8: 0x27c49b70  addiu       $a0, $fp, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA820u, 0x1438F4u, 0x1438FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438FCu;
label_1438fc:
    // 0x1438fc: 0xde4201c0  ld          $v0, 0x1C0($s2)
    ctx->pc = 0x1438fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x143900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x143900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143904: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x143904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x143908: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x143908u;
    {
        const bool branch_taken_0x143908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x143908) {
            ctx->pc = 0x14390Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143908u;
            // 0x14390c: 0x924201c0  lbu         $v0, 0x1C0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143954u;
            goto label_143954;
        }
    }
    ctx->pc = 0x143910u;
    // 0x143910: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x143910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x143914: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x143914u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x143918: 0x90640014  lbu         $a0, 0x14($v1)
    ctx->pc = 0x143918u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x14391c: 0x5480000d  bnel        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x14391Cu;
    {
        const bool branch_taken_0x14391c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x14391c) {
            ctx->pc = 0x143920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14391Cu;
            // 0x143920: 0x924201c0  lbu         $v0, 0x1C0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143954u;
            goto label_143954;
        }
    }
    ctx->pc = 0x143924u;
    // 0x143924: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x143924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x143928: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x143928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x14392c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14392cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x143930: 0x24053010  addiu       $a1, $zero, 0x3010
    ctx->pc = 0x143930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12304));
    // 0x143934: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x143934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x143938: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x143938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14393c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x14393cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x143940: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x143940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x143944: 0xa4650090  sh          $a1, 0x90($v1)
    ctx->pc = 0x143944u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x143948: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x143948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x14394c: 0xa4450090  sh          $a1, 0x90($v0)
    ctx->pc = 0x14394cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x143950: 0x924201c0  lbu         $v0, 0x1C0($s2)
    ctx->pc = 0x143950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 448)));
label_143954:
    // 0x143954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143958: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x143958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x14395c: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x14395Cu;
    SET_GPR_U32(ctx, 31, 0x143964u);
    ctx->pc = 0x143960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14395Cu;
    // 0x143960: 0xa24201c0  sb          $v0, 0x1C0($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 448), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x14395Cu, 0x143964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143964u;
label_143964:
    // 0x143964: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x143964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x143968: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x143968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14396c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x14396cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x143970: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x143970u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x143974: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x143974u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143978: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x143978u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14397c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x14397cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143980: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x143980u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143984: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x143984u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14398c: 0x3e00008  jr          $ra
    ctx->pc = 0x14398Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14398Cu;
        // 0x143990: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14398Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143994u;
    // 0x143994: 0x0  nop
    ctx->pc = 0x143994u;
    // NOP
    ctx->pc = 0x143998u;
}
