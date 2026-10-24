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

// Function: func_00208268
// Address: 0x208268 - 0x208858
void func_00208268_0x208268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00208268_0x208268");
#endif

    switch (ctx->pc) {
        case 0x20828cu: goto label_20828c;
        case 0x2082a4u: goto label_2082a4;
        case 0x2082bcu: goto label_2082bc;
        case 0x208324u: goto label_208324;
        case 0x208368u: goto label_208368;
        case 0x2083acu: goto label_2083ac;
        case 0x2083f0u: goto label_2083f0;
        case 0x208434u: goto label_208434;
        case 0x208478u: goto label_208478;
        case 0x2084bcu: goto label_2084bc;
        case 0x208500u: goto label_208500;
        case 0x208544u: goto label_208544;
        case 0x208588u: goto label_208588;
        case 0x2085ccu: goto label_2085cc;
        case 0x208610u: goto label_208610;
        case 0x208654u: goto label_208654;
        case 0x208698u: goto label_208698;
        case 0x2086dcu: goto label_2086dc;
        case 0x208720u: goto label_208720;
        case 0x208760u: goto label_208760;
        case 0x2087a0u: goto label_2087a0;
        case 0x2087e4u: goto label_2087e4;
        case 0x20881cu: goto label_20881c;
        case 0x208840u: goto label_208840;
        default: break;
    }

    ctx->pc = 0x208268u;

    // 0x208268: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x208268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20826c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20826cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x208270: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x208270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x208274: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x208274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x208278: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x208278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20827c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20827cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208280: 0x8e250564  lw          $a1, 0x564($s1)
    ctx->pc = 0x208280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x208284: 0xc0b77a8  jal         func_2DDEA0
    ctx->pc = 0x208284u;
    SET_GPR_U32(ctx, 31, 0x20828Cu);
    ctx->pc = 0x208288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208284u;
    // 0x208288: 0x962402fe  lhu         $a0, 0x2FE($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDEA0u, 0x208284u, 0x20828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20828Cu;
label_20828c:
    // 0x20828c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20828cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208290: 0x8e240304  lw          $a0, 0x304($s1)
    ctx->pc = 0x208290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208294: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x208294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x208298: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x208298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20829c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x20829Cu;
    SET_GPR_U32(ctx, 31, 0x2082A4u);
    ctx->pc = 0x2082A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20829Cu;
    // 0x2082a0: 0x24a5fd50  addiu       $a1, $a1, -0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x20829Cu, 0x2082A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2082A4u;
label_2082a4:
    // 0x2082a4: 0x8e240304  lw          $a0, 0x304($s1)
    ctx->pc = 0x2082a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2082a8: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x2082a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x2082ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2082acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2082b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2082b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2082b4: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2082B4u;
    SET_GPR_U32(ctx, 31, 0x2082BCu);
    ctx->pc = 0x2082B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2082B4u;
    // 0x2082b8: 0x24a5fd58  addiu       $a1, $a1, -0x2A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2082B4u, 0x2082BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2082BCu;
label_2082bc:
    // 0x2082bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2082bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2082c0: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x2082c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2082c4: 0x2444fe00  addiu       $a0, $v0, -0x200
    ctx->pc = 0x2082c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x2082c8: 0x2c830075  sltiu       $v1, $a0, 0x75
    ctx->pc = 0x2082c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x2082cc: 0x10600153  beqz        $v1, . + 4 + (0x153 << 2)
    ctx->pc = 0x2082CCu;
    {
        const bool branch_taken_0x2082cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2082D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082CCu;
        // 0x2082d0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082cc) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x2082D4u;
    // 0x2082d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2082d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2082d8: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x2082d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
    // 0x2082dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2082dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2082e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2082e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2082e4: 0x800008  jr          $a0
    ctx->pc = 0x2082E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2082ECu: goto label_2082ec;
            case 0x208330u: goto label_208330;
            case 0x208374u: goto label_208374;
            case 0x2083B8u: goto label_2083b8;
            case 0x2083FCu: goto label_2083fc;
            case 0x208440u: goto label_208440;
            case 0x208484u: goto label_208484;
            case 0x2084C8u: goto label_2084c8;
            case 0x20850Cu: goto label_20850c;
            case 0x208550u: goto label_208550;
            case 0x208594u: goto label_208594;
            case 0x2085D8u: goto label_2085d8;
            case 0x20861Cu: goto label_20861c;
            case 0x208660u: goto label_208660;
            case 0x2086A4u: goto label_2086a4;
            case 0x2086E8u: goto label_2086e8;
            case 0x2087ACu: goto label_2087ac;
            case 0x20881Cu: goto label_20881c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2082E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2082ECu;
label_2082ec:
    // 0x2082ec: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x2082ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x2082f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2082f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2082f4: 0x10400149  beqz        $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x2082F4u;
    {
        const bool branch_taken_0x2082f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2082F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082F4u;
        // 0x2082f8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082f4) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x2082FCu;
    // 0x2082fc: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x2082fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x208300: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x208300u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208308: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x208308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20830c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20830cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208310: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x208310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x208314: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208318: 0x8d060044  lw          $a2, 0x44($t0)
    ctx->pc = 0x208318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x20831c: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x20831Cu;
    SET_GPR_U32(ctx, 31, 0x208324u);
    ctx->pc = 0x208320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20831Cu;
    // 0x208320: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x20831Cu, 0x208324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208324u;
label_208324:
    // 0x208324: 0x24030227  addiu       $v1, $zero, 0x227
    ctx->pc = 0x208324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 551));
    // 0x208328: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x208328u;
    {
        const bool branch_taken_0x208328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208328u;
        // 0x20832c: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208328) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x208330u;
label_208330:
    // 0x208330: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x208330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x208334: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x208334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x208338: 0x10400138  beqz        $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x208338u;
    {
        const bool branch_taken_0x208338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208338u;
        // 0x20833c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208338) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x208340u;
    // 0x208340: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x208340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x208344: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x208344u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20834c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20834cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x208350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208354: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x208354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x208358: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20835c: 0x8d060048  lw          $a2, 0x48($t0)
    ctx->pc = 0x20835cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x208360: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x208360u;
    SET_GPR_U32(ctx, 31, 0x208368u);
    ctx->pc = 0x208364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208360u;
    // 0x208364: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x208360u, 0x208368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208368u;
label_208368:
    // 0x208368: 0x24030228  addiu       $v1, $zero, 0x228
    ctx->pc = 0x208368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x20836c: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x20836Cu;
    {
        const bool branch_taken_0x20836c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20836Cu;
        // 0x208370: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20836c) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x208374u;
label_208374:
    // 0x208374: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x208374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x208378: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x208378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20837c: 0x10400127  beqz        $v0, . + 4 + (0x127 << 2)
    ctx->pc = 0x20837Cu;
    {
        const bool branch_taken_0x20837c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20837Cu;
        // 0x208380: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20837c) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x208384u;
    // 0x208384: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x208384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x208388: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x208388u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x20838c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20838cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208390: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x208390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x208394: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208398: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x208398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x20839c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20839cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083a0: 0x8d06004c  lw          $a2, 0x4C($t0)
    ctx->pc = 0x2083a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x2083a4: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x2083A4u;
    SET_GPR_U32(ctx, 31, 0x2083ACu);
    ctx->pc = 0x2083A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2083A4u;
    // 0x2083a8: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x2083A4u, 0x2083ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2083ACu;
label_2083ac:
    // 0x2083ac: 0x24030229  addiu       $v1, $zero, 0x229
    ctx->pc = 0x2083acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
    // 0x2083b0: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x2083B0u;
    {
        const bool branch_taken_0x2083b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083B0u;
        // 0x2083b4: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083b0) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x2083B8u;
label_2083b8:
    // 0x2083b8: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x2083b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x2083bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2083bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2083c0: 0x10400116  beqz        $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x2083C0u;
    {
        const bool branch_taken_0x2083c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083C0u;
        // 0x2083c4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083c0) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x2083C8u;
    // 0x2083c8: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x2083c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x2083cc: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x2083ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2083d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2083d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2083d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2083d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2083d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083dc: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x2083dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x2083e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2083e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083e4: 0x8d060050  lw          $a2, 0x50($t0)
    ctx->pc = 0x2083e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x2083e8: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x2083E8u;
    SET_GPR_U32(ctx, 31, 0x2083F0u);
    ctx->pc = 0x2083ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2083E8u;
    // 0x2083ec: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x2083E8u, 0x2083F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2083F0u;
label_2083f0:
    // 0x2083f0: 0x2403022a  addiu       $v1, $zero, 0x22A
    ctx->pc = 0x2083f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 554));
    // 0x2083f4: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x2083F4u;
    {
        const bool branch_taken_0x2083f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083F4u;
        // 0x2083f8: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083f4) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x2083FCu;
label_2083fc:
    // 0x2083fc: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x2083fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x208400: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x208400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x208404: 0x10400105  beqz        $v0, . + 4 + (0x105 << 2)
    ctx->pc = 0x208404u;
    {
        const bool branch_taken_0x208404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208404u;
        // 0x208408: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208404) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x20840Cu;
    // 0x20840c: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x20840cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x208410: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x208410u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208418: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x208418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20841c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20841cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208420: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x208420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x208424: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208428: 0x8d060054  lw          $a2, 0x54($t0)
    ctx->pc = 0x208428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
    // 0x20842c: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x20842Cu;
    SET_GPR_U32(ctx, 31, 0x208434u);
    ctx->pc = 0x208430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20842Cu;
    // 0x208430: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x20842Cu, 0x208434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208434u;
label_208434:
    // 0x208434: 0x2403022b  addiu       $v1, $zero, 0x22B
    ctx->pc = 0x208434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 555));
    // 0x208438: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x208438u;
    {
        const bool branch_taken_0x208438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208438u;
        // 0x20843c: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208438) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x208440u;
label_208440:
    // 0x208440: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x208440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x208444: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x208444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x208448: 0x104000f4  beqz        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x208448u;
    {
        const bool branch_taken_0x208448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208448u;
        // 0x20844c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208448) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x208450u;
    // 0x208450: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x208450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x208454: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x208454u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20845c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20845cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x208460: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208464: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x208464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x208468: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20846c: 0x8d060064  lw          $a2, 0x64($t0)
    ctx->pc = 0x20846cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 100)));
    // 0x208470: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x208470u;
    SET_GPR_U32(ctx, 31, 0x208478u);
    ctx->pc = 0x208474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208470u;
    // 0x208474: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x208470u, 0x208478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208478u;
label_208478:
    // 0x208478: 0x2403024a  addiu       $v1, $zero, 0x24A
    ctx->pc = 0x208478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 586));
    // 0x20847c: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x20847Cu;
    {
        const bool branch_taken_0x20847c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20847Cu;
        // 0x208480: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20847c) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x208484u;
label_208484:
    // 0x208484: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x208484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x208488: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x208488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20848c: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x20848Cu;
    {
        const bool branch_taken_0x20848c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20848Cu;
        // 0x208490: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20848c) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x208494u;
    // 0x208494: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x208494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x208498: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x208498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x20849c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20849cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2084a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2084a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2084a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2084a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2084a8: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x2084a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x2084ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2084acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2084b0: 0x8d060058  lw          $a2, 0x58($t0)
    ctx->pc = 0x2084b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x2084b4: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x2084B4u;
    SET_GPR_U32(ctx, 31, 0x2084BCu);
    ctx->pc = 0x2084B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2084B4u;
    // 0x2084b8: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x2084B4u, 0x2084BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2084BCu;
label_2084bc:
    // 0x2084bc: 0x2403022c  addiu       $v1, $zero, 0x22C
    ctx->pc = 0x2084bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    // 0x2084c0: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x2084C0u;
    {
        const bool branch_taken_0x2084c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2084C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084C0u;
        // 0x2084c4: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084c0) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x2084C8u;
label_2084c8:
    // 0x2084c8: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x2084c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x2084cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2084ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2084d0: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x2084D0u;
    {
        const bool branch_taken_0x2084d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2084D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084D0u;
        // 0x2084d4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084d0) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x2084D8u;
    // 0x2084d8: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x2084d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x2084dc: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x2084dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2084e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2084e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2084e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2084e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2084e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2084e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2084ec: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x2084ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x2084f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2084f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2084f4: 0x8d060070  lw          $a2, 0x70($t0)
    ctx->pc = 0x2084f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 112)));
    // 0x2084f8: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x2084F8u;
    SET_GPR_U32(ctx, 31, 0x208500u);
    ctx->pc = 0x2084FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2084F8u;
    // 0x2084fc: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x2084F8u, 0x208500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208500u;
label_208500:
    // 0x208500: 0x2403022e  addiu       $v1, $zero, 0x22E
    ctx->pc = 0x208500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 558));
    // 0x208504: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x208504u;
    {
        const bool branch_taken_0x208504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208504u;
        // 0x208508: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208504) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x20850Cu;
label_20850c:
    // 0x20850c: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x20850cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x208510: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x208510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x208514: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x208514u;
    {
        const bool branch_taken_0x208514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208514u;
        // 0x208518: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208514) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x20851Cu;
    // 0x20851c: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x20851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x208520: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x208520u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208528: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x208528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20852c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20852cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208530: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x208530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x208534: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208538: 0x8d060068  lw          $a2, 0x68($t0)
    ctx->pc = 0x208538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 104)));
    // 0x20853c: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x20853Cu;
    SET_GPR_U32(ctx, 31, 0x208544u);
    ctx->pc = 0x208540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20853Cu;
    // 0x208540: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x20853Cu, 0x208544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208544u;
label_208544:
    // 0x208544: 0x2403022f  addiu       $v1, $zero, 0x22F
    ctx->pc = 0x208544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    // 0x208548: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x208548u;
    {
        const bool branch_taken_0x208548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208548u;
        // 0x20854c: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208548) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x208550u;
label_208550:
    // 0x208550: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x208550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x208554: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x208554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x208558: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x208558u;
    {
        const bool branch_taken_0x208558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208558u;
        // 0x20855c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208558) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x208560u;
    // 0x208560: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x208560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x208564: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x208564u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20856c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20856cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x208570: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208574: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x208574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x208578: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20857c: 0x8d060074  lw          $a2, 0x74($t0)
    ctx->pc = 0x20857cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
    // 0x208580: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x208580u;
    SET_GPR_U32(ctx, 31, 0x208588u);
    ctx->pc = 0x208584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208580u;
    // 0x208584: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x208580u, 0x208588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208588u;
label_208588:
    // 0x208588: 0x2403024c  addiu       $v1, $zero, 0x24C
    ctx->pc = 0x208588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 588));
    // 0x20858c: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x20858Cu;
    {
        const bool branch_taken_0x20858c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20858Cu;
        // 0x208590: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20858c) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x208594u;
label_208594:
    // 0x208594: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x208594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x208598: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x208598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20859c: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x20859Cu;
    {
        const bool branch_taken_0x20859c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2085A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20859Cu;
        // 0x2085a0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20859c) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x2085A4u;
    // 0x2085a4: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x2085a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x2085a8: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x2085a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2085ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2085acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2085b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2085b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2085b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085b8: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x2085b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x2085bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2085bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085c0: 0x8d060088  lw          $a2, 0x88($t0)
    ctx->pc = 0x2085c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 136)));
    // 0x2085c4: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x2085C4u;
    SET_GPR_U32(ctx, 31, 0x2085CCu);
    ctx->pc = 0x2085C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2085C4u;
    // 0x2085c8: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x2085C4u, 0x2085CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2085CCu;
label_2085cc:
    // 0x2085cc: 0x2403024e  addiu       $v1, $zero, 0x24E
    ctx->pc = 0x2085ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 590));
    // 0x2085d0: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2085D0u;
    {
        const bool branch_taken_0x2085d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2085D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085D0u;
        // 0x2085d4: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2085d0) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x2085D8u;
label_2085d8:
    // 0x2085d8: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x2085d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x2085dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2085dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2085e0: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2085E0u;
    {
        const bool branch_taken_0x2085e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2085E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085E0u;
        // 0x2085e4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2085e0) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x2085E8u;
    // 0x2085e8: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x2085e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x2085ec: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x2085ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2085f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2085f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2085f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2085f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2085f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085fc: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x2085fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x208600: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208604: 0x8d06006c  lw          $a2, 0x6C($t0)
    ctx->pc = 0x208604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 108)));
    // 0x208608: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x208608u;
    SET_GPR_U32(ctx, 31, 0x208610u);
    ctx->pc = 0x20860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208608u;
    // 0x20860c: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x208608u, 0x208610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208610u;
label_208610:
    // 0x208610: 0x2403024b  addiu       $v1, $zero, 0x24B
    ctx->pc = 0x208610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 587));
    // 0x208614: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x208614u;
    {
        const bool branch_taken_0x208614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208614u;
        // 0x208618: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208614) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x20861Cu;
label_20861c:
    // 0x20861c: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x20861cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x208620: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x208620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x208624: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x208624u;
    {
        const bool branch_taken_0x208624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208624u;
        // 0x208628: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208624) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x20862Cu;
    // 0x20862c: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x20862cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x208630: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x208630u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208638: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x208638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20863c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20863cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208640: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x208640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x208644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208648: 0x8d060078  lw          $a2, 0x78($t0)
    ctx->pc = 0x208648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 120)));
    // 0x20864c: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x20864Cu;
    SET_GPR_U32(ctx, 31, 0x208654u);
    ctx->pc = 0x208650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20864Cu;
    // 0x208650: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x20864Cu, 0x208654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208654u;
label_208654:
    // 0x208654: 0x2403022d  addiu       $v1, $zero, 0x22D
    ctx->pc = 0x208654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 557));
    // 0x208658: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x208658u;
    {
        const bool branch_taken_0x208658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208658u;
        // 0x20865c: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208658) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x208660u;
label_208660:
    // 0x208660: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x208660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x208664: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x208664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x208668: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x208668u;
    {
        const bool branch_taken_0x208668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208668u;
        // 0x20866c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208668) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x208670u;
    // 0x208670: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x208670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x208674: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x208674u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20867c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20867cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x208680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208684: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x208684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x208688: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20868c: 0x8d06007c  lw          $a2, 0x7C($t0)
    ctx->pc = 0x20868cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 124)));
    // 0x208690: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x208690u;
    SET_GPR_U32(ctx, 31, 0x208698u);
    ctx->pc = 0x208694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208690u;
    // 0x208694: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x208690u, 0x208698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208698u;
label_208698:
    // 0x208698: 0x2403024d  addiu       $v1, $zero, 0x24D
    ctx->pc = 0x208698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 589));
    // 0x20869c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x20869Cu;
    {
        const bool branch_taken_0x20869c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2086A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20869Cu;
        // 0x2086a0: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20869c) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x2086A4u;
label_2086a4:
    // 0x2086a4: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x2086a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x2086a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2086a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2086ac: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2086ACu;
    {
        const bool branch_taken_0x2086ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2086B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086ACu;
        // 0x2086b0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086ac) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x2086B4u;
    // 0x2086b4: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x2086b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x2086b8: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x2086b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2086bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2086bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2086c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2086c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2086c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086c8: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x2086c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x2086cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2086ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086d0: 0x8d060080  lw          $a2, 0x80($t0)
    ctx->pc = 0x2086d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x2086d4: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x2086D4u;
    SET_GPR_U32(ctx, 31, 0x2086DCu);
    ctx->pc = 0x2086D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2086D4u;
    // 0x2086d8: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x2086D4u, 0x2086DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2086DCu;
label_2086dc:
    // 0x2086dc: 0x24030243  addiu       $v1, $zero, 0x243
    ctx->pc = 0x2086dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
    // 0x2086e0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2086E0u;
    {
        const bool branch_taken_0x2086e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2086E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086E0u;
        // 0x2086e4: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086e0) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x2086E8u;
label_2086e8:
    // 0x2086e8: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x2086e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x2086ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2086ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2086f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2086F0u;
    {
        const bool branch_taken_0x2086f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2086F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086F0u;
        // 0x2086f4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086f0) {
            ctx->pc = 0x208728u;
            goto label_208728;
        }
    }
    ctx->pc = 0x2086F8u;
    // 0x2086f8: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x2086f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x2086fc: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x2086fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208704: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x208704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x208708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20870c: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x20870cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x208710: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208714: 0x8d06005c  lw          $a2, 0x5C($t0)
    ctx->pc = 0x208714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x208718: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x208718u;
    SET_GPR_U32(ctx, 31, 0x208720u);
    ctx->pc = 0x20871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208718u;
    // 0x20871c: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x208718u, 0x208720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208720u;
label_208720:
    // 0x208720: 0x24030271  addiu       $v1, $zero, 0x271
    ctx->pc = 0x208720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    // 0x208724: 0xae230564  sw          $v1, 0x564($s1)
    ctx->pc = 0x208724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
label_208728:
    // 0x208728: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x208728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x20872c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x20872cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x208730: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x208730u;
    {
        const bool branch_taken_0x208730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208730u;
        // 0x208734: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208730) {
            ctx->pc = 0x208768u;
            goto label_208768;
        }
    }
    ctx->pc = 0x208738u;
    // 0x208738: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x208738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x20873c: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x20873cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208744: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x208744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x208748: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20874c: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x20874cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x208750: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x208750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208754: 0x8d06005c  lw          $a2, 0x5C($t0)
    ctx->pc = 0x208754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x208758: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x208758u;
    SET_GPR_U32(ctx, 31, 0x208760u);
    ctx->pc = 0x20875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208758u;
    // 0x20875c: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x208758u, 0x208760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208760u;
label_208760:
    // 0x208760: 0x24030272  addiu       $v1, $zero, 0x272
    ctx->pc = 0x208760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 626));
    // 0x208764: 0xae230564  sw          $v1, 0x564($s1)
    ctx->pc = 0x208764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
label_208768:
    // 0x208768: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x208768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x20876c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20876cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x208770: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x208770u;
    {
        const bool branch_taken_0x208770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208770u;
        // 0x208774: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208770) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x208778u;
    // 0x208778: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x208778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x20877c: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x20877cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x208780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208784: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x208784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x208788: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20878c: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x20878cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x208790: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x208790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x208794: 0x8d06005c  lw          $a2, 0x5C($t0)
    ctx->pc = 0x208794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x208798: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x208798u;
    SET_GPR_U32(ctx, 31, 0x2087A0u);
    ctx->pc = 0x20879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208798u;
    // 0x20879c: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x208798u, 0x2087A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2087A0u;
label_2087a0:
    // 0x2087a0: 0x24030273  addiu       $v1, $zero, 0x273
    ctx->pc = 0x2087a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 627));
    // 0x2087a4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2087A4u;
    {
        const bool branch_taken_0x2087a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2087A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087A4u;
        // 0x2087a8: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2087a4) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x2087ACu;
label_2087ac:
    // 0x2087ac: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x2087acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x2087b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2087b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2087b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2087B4u;
    {
        const bool branch_taken_0x2087b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2087B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087B4u;
        // 0x2087b8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2087b4) {
            ctx->pc = 0x2087E4u;
            goto label_2087e4;
        }
    }
    ctx->pc = 0x2087BCu;
    // 0x2087bc: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x2087bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x2087c0: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x2087c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2087c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2087c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2087c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2087c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2087cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2087ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2087d0: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x2087d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x2087d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2087d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2087d8: 0x8d060094  lw          $a2, 0x94($t0)
    ctx->pc = 0x2087d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 148)));
    // 0x2087dc: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x2087DCu;
    SET_GPR_U32(ctx, 31, 0x2087E4u);
    ctx->pc = 0x2087E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087DCu;
    // 0x2087e0: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x2087DCu, 0x2087E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2087E4u;
label_2087e4:
    // 0x2087e4: 0x8e22164c  lw          $v0, 0x164C($s1)
    ctx->pc = 0x2087e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5708)));
    // 0x2087e8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2087e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2087ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2087ECu;
    {
        const bool branch_taken_0x2087ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2087F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087ECu;
        // 0x2087f0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2087ec) {
            ctx->pc = 0x20881Cu;
            goto label_20881c;
        }
    }
    ctx->pc = 0x2087F4u;
    // 0x2087f4: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x2087f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x2087f8: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x2087f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2087fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2087fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208800: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x208800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x208804: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208808: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x208808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x20880c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20880cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208810: 0x8d060094  lw          $a2, 0x94($t0)
    ctx->pc = 0x208810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 148)));
    // 0x208814: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x208814u;
    SET_GPR_U32(ctx, 31, 0x20881Cu);
    ctx->pc = 0x208818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208814u;
    // 0x208818: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x208814u, 0x20881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20881Cu;
label_20881c:
    // 0x20881c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20881Cu;
    {
        const bool branch_taken_0x20881c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x208820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20881Cu;
        // 0x208820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20881c) {
            ctx->pc = 0x20882Cu;
            goto label_20882c;
        }
    }
    ctx->pc = 0x208824u;
    // 0x208824: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x208824u;
    {
        const bool branch_taken_0x208824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208824u;
        // 0x208828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208824) {
            ctx->pc = 0x208840u;
            goto label_208840;
        }
    }
    ctx->pc = 0x20882Cu;
label_20882c:
    // 0x20882c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20882cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208830: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x208830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208834: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208838: 0xc0525ce  jal         func_149738
    ctx->pc = 0x208838u;
    SET_GPR_U32(ctx, 31, 0x208840u);
    ctx->pc = 0x20883Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208838u;
    // 0x20883c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x208838u, 0x208840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208840u;
label_208840:
    // 0x208840: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x208840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x208844: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x208844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208848: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x208848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20884c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20884cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208850: 0x3e00008  jr          $ra
    ctx->pc = 0x208850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208850u;
        // 0x208854: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208858u;
}
