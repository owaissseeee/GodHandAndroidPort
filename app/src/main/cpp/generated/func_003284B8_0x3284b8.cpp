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

// Function: func_003284B8
// Address: 0x3284b8 - 0x3288e0
void func_003284B8_0x3284b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003284B8_0x3284b8");
#endif

    switch (ctx->pc) {
        case 0x3284b8u: goto label_3284b8;
        case 0x3284bcu: goto label_3284bc;
        case 0x3284c0u: goto label_3284c0;
        case 0x3284c4u: goto label_3284c4;
        case 0x3284c8u: goto label_3284c8;
        case 0x3284ccu: goto label_3284cc;
        case 0x3284d0u: goto label_3284d0;
        case 0x3284d4u: goto label_3284d4;
        case 0x3284d8u: goto label_3284d8;
        case 0x3284dcu: goto label_3284dc;
        case 0x3284e0u: goto label_3284e0;
        case 0x3284e4u: goto label_3284e4;
        case 0x3284e8u: goto label_3284e8;
        case 0x3284ecu: goto label_3284ec;
        case 0x3284f0u: goto label_3284f0;
        case 0x3284f4u: goto label_3284f4;
        case 0x3284f8u: goto label_3284f8;
        case 0x3284fcu: goto label_3284fc;
        case 0x328500u: goto label_328500;
        case 0x328504u: goto label_328504;
        case 0x328508u: goto label_328508;
        case 0x32850cu: goto label_32850c;
        case 0x328510u: goto label_328510;
        case 0x328514u: goto label_328514;
        case 0x328518u: goto label_328518;
        case 0x32851cu: goto label_32851c;
        case 0x328520u: goto label_328520;
        case 0x328524u: goto label_328524;
        case 0x328528u: goto label_328528;
        case 0x32852cu: goto label_32852c;
        case 0x328530u: goto label_328530;
        case 0x328534u: goto label_328534;
        case 0x328538u: goto label_328538;
        case 0x32853cu: goto label_32853c;
        case 0x328540u: goto label_328540;
        case 0x328544u: goto label_328544;
        case 0x328548u: goto label_328548;
        case 0x32854cu: goto label_32854c;
        case 0x328550u: goto label_328550;
        case 0x328554u: goto label_328554;
        case 0x328558u: goto label_328558;
        case 0x32855cu: goto label_32855c;
        case 0x328560u: goto label_328560;
        case 0x328564u: goto label_328564;
        case 0x328568u: goto label_328568;
        case 0x32856cu: goto label_32856c;
        case 0x328570u: goto label_328570;
        case 0x328574u: goto label_328574;
        case 0x328578u: goto label_328578;
        case 0x32857cu: goto label_32857c;
        case 0x328580u: goto label_328580;
        case 0x328584u: goto label_328584;
        case 0x328588u: goto label_328588;
        case 0x32858cu: goto label_32858c;
        case 0x328590u: goto label_328590;
        case 0x328594u: goto label_328594;
        case 0x328598u: goto label_328598;
        case 0x32859cu: goto label_32859c;
        case 0x3285a0u: goto label_3285a0;
        case 0x3285a4u: goto label_3285a4;
        case 0x3285a8u: goto label_3285a8;
        case 0x3285acu: goto label_3285ac;
        case 0x3285b0u: goto label_3285b0;
        case 0x3285b4u: goto label_3285b4;
        case 0x3285b8u: goto label_3285b8;
        case 0x3285bcu: goto label_3285bc;
        case 0x3285c0u: goto label_3285c0;
        case 0x3285c4u: goto label_3285c4;
        case 0x3285c8u: goto label_3285c8;
        case 0x3285ccu: goto label_3285cc;
        case 0x3285d0u: goto label_3285d0;
        case 0x3285d4u: goto label_3285d4;
        case 0x3285d8u: goto label_3285d8;
        case 0x3285dcu: goto label_3285dc;
        case 0x3285e0u: goto label_3285e0;
        case 0x3285e4u: goto label_3285e4;
        case 0x3285e8u: goto label_3285e8;
        case 0x3285ecu: goto label_3285ec;
        case 0x3285f0u: goto label_3285f0;
        case 0x3285f4u: goto label_3285f4;
        case 0x3285f8u: goto label_3285f8;
        case 0x3285fcu: goto label_3285fc;
        case 0x328600u: goto label_328600;
        case 0x328604u: goto label_328604;
        case 0x328608u: goto label_328608;
        case 0x32860cu: goto label_32860c;
        case 0x328610u: goto label_328610;
        case 0x328614u: goto label_328614;
        case 0x328618u: goto label_328618;
        case 0x32861cu: goto label_32861c;
        case 0x328620u: goto label_328620;
        case 0x328624u: goto label_328624;
        case 0x328628u: goto label_328628;
        case 0x32862cu: goto label_32862c;
        case 0x328630u: goto label_328630;
        case 0x328634u: goto label_328634;
        case 0x328638u: goto label_328638;
        case 0x32863cu: goto label_32863c;
        case 0x328640u: goto label_328640;
        case 0x328644u: goto label_328644;
        case 0x328648u: goto label_328648;
        case 0x32864cu: goto label_32864c;
        case 0x328650u: goto label_328650;
        case 0x328654u: goto label_328654;
        case 0x328658u: goto label_328658;
        case 0x32865cu: goto label_32865c;
        case 0x328660u: goto label_328660;
        case 0x328664u: goto label_328664;
        case 0x328668u: goto label_328668;
        case 0x32866cu: goto label_32866c;
        case 0x328670u: goto label_328670;
        case 0x328674u: goto label_328674;
        case 0x328678u: goto label_328678;
        case 0x32867cu: goto label_32867c;
        case 0x328680u: goto label_328680;
        case 0x328684u: goto label_328684;
        case 0x328688u: goto label_328688;
        case 0x32868cu: goto label_32868c;
        case 0x328690u: goto label_328690;
        case 0x328694u: goto label_328694;
        case 0x328698u: goto label_328698;
        case 0x32869cu: goto label_32869c;
        case 0x3286a0u: goto label_3286a0;
        case 0x3286a4u: goto label_3286a4;
        case 0x3286a8u: goto label_3286a8;
        case 0x3286acu: goto label_3286ac;
        case 0x3286b0u: goto label_3286b0;
        case 0x3286b4u: goto label_3286b4;
        case 0x3286b8u: goto label_3286b8;
        case 0x3286bcu: goto label_3286bc;
        case 0x3286c0u: goto label_3286c0;
        case 0x3286c4u: goto label_3286c4;
        case 0x3286c8u: goto label_3286c8;
        case 0x3286ccu: goto label_3286cc;
        case 0x3286d0u: goto label_3286d0;
        case 0x3286d4u: goto label_3286d4;
        case 0x3286d8u: goto label_3286d8;
        case 0x3286dcu: goto label_3286dc;
        case 0x3286e0u: goto label_3286e0;
        case 0x3286e4u: goto label_3286e4;
        case 0x3286e8u: goto label_3286e8;
        case 0x3286ecu: goto label_3286ec;
        case 0x3286f0u: goto label_3286f0;
        case 0x3286f4u: goto label_3286f4;
        case 0x3286f8u: goto label_3286f8;
        case 0x3286fcu: goto label_3286fc;
        case 0x328700u: goto label_328700;
        case 0x328704u: goto label_328704;
        case 0x328708u: goto label_328708;
        case 0x32870cu: goto label_32870c;
        case 0x328710u: goto label_328710;
        case 0x328714u: goto label_328714;
        case 0x328718u: goto label_328718;
        case 0x32871cu: goto label_32871c;
        case 0x328720u: goto label_328720;
        case 0x328724u: goto label_328724;
        case 0x328728u: goto label_328728;
        case 0x32872cu: goto label_32872c;
        case 0x328730u: goto label_328730;
        case 0x328734u: goto label_328734;
        case 0x328738u: goto label_328738;
        case 0x32873cu: goto label_32873c;
        case 0x328740u: goto label_328740;
        case 0x328744u: goto label_328744;
        case 0x328748u: goto label_328748;
        case 0x32874cu: goto label_32874c;
        case 0x328750u: goto label_328750;
        case 0x328754u: goto label_328754;
        case 0x328758u: goto label_328758;
        case 0x32875cu: goto label_32875c;
        case 0x328760u: goto label_328760;
        case 0x328764u: goto label_328764;
        case 0x328768u: goto label_328768;
        case 0x32876cu: goto label_32876c;
        case 0x328770u: goto label_328770;
        case 0x328774u: goto label_328774;
        case 0x328778u: goto label_328778;
        case 0x32877cu: goto label_32877c;
        case 0x328780u: goto label_328780;
        case 0x328784u: goto label_328784;
        case 0x328788u: goto label_328788;
        case 0x32878cu: goto label_32878c;
        case 0x328790u: goto label_328790;
        case 0x328794u: goto label_328794;
        case 0x328798u: goto label_328798;
        case 0x32879cu: goto label_32879c;
        case 0x3287a0u: goto label_3287a0;
        case 0x3287a4u: goto label_3287a4;
        case 0x3287a8u: goto label_3287a8;
        case 0x3287acu: goto label_3287ac;
        case 0x3287b0u: goto label_3287b0;
        case 0x3287b4u: goto label_3287b4;
        case 0x3287b8u: goto label_3287b8;
        case 0x3287bcu: goto label_3287bc;
        case 0x3287c0u: goto label_3287c0;
        case 0x3287c4u: goto label_3287c4;
        case 0x3287c8u: goto label_3287c8;
        case 0x3287ccu: goto label_3287cc;
        case 0x3287d0u: goto label_3287d0;
        case 0x3287d4u: goto label_3287d4;
        case 0x3287d8u: goto label_3287d8;
        case 0x3287dcu: goto label_3287dc;
        case 0x3287e0u: goto label_3287e0;
        case 0x3287e4u: goto label_3287e4;
        case 0x3287e8u: goto label_3287e8;
        case 0x3287ecu: goto label_3287ec;
        case 0x3287f0u: goto label_3287f0;
        case 0x3287f4u: goto label_3287f4;
        case 0x3287f8u: goto label_3287f8;
        case 0x3287fcu: goto label_3287fc;
        case 0x328800u: goto label_328800;
        case 0x328804u: goto label_328804;
        case 0x328808u: goto label_328808;
        case 0x32880cu: goto label_32880c;
        case 0x328810u: goto label_328810;
        case 0x328814u: goto label_328814;
        case 0x328818u: goto label_328818;
        case 0x32881cu: goto label_32881c;
        case 0x328820u: goto label_328820;
        case 0x328824u: goto label_328824;
        case 0x328828u: goto label_328828;
        case 0x32882cu: goto label_32882c;
        case 0x328830u: goto label_328830;
        case 0x328834u: goto label_328834;
        case 0x328838u: goto label_328838;
        case 0x32883cu: goto label_32883c;
        case 0x328840u: goto label_328840;
        case 0x328844u: goto label_328844;
        case 0x328848u: goto label_328848;
        case 0x32884cu: goto label_32884c;
        case 0x328850u: goto label_328850;
        case 0x328854u: goto label_328854;
        case 0x328858u: goto label_328858;
        case 0x32885cu: goto label_32885c;
        case 0x328860u: goto label_328860;
        case 0x328864u: goto label_328864;
        case 0x328868u: goto label_328868;
        case 0x32886cu: goto label_32886c;
        case 0x328870u: goto label_328870;
        case 0x328874u: goto label_328874;
        case 0x328878u: goto label_328878;
        case 0x32887cu: goto label_32887c;
        case 0x328880u: goto label_328880;
        case 0x328884u: goto label_328884;
        case 0x328888u: goto label_328888;
        case 0x32888cu: goto label_32888c;
        case 0x328890u: goto label_328890;
        case 0x328894u: goto label_328894;
        case 0x328898u: goto label_328898;
        case 0x32889cu: goto label_32889c;
        case 0x3288a0u: goto label_3288a0;
        case 0x3288a4u: goto label_3288a4;
        case 0x3288a8u: goto label_3288a8;
        case 0x3288acu: goto label_3288ac;
        case 0x3288b0u: goto label_3288b0;
        case 0x3288b4u: goto label_3288b4;
        case 0x3288b8u: goto label_3288b8;
        case 0x3288bcu: goto label_3288bc;
        case 0x3288c0u: goto label_3288c0;
        case 0x3288c4u: goto label_3288c4;
        case 0x3288c8u: goto label_3288c8;
        case 0x3288ccu: goto label_3288cc;
        case 0x3288d0u: goto label_3288d0;
        case 0x3288d4u: goto label_3288d4;
        case 0x3288d8u: goto label_3288d8;
        case 0x3288dcu: goto label_3288dc;
        default: break;
    }

    ctx->pc = 0x3284b8u;

label_3284b8:
    // 0x3284b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3284b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3284bc:
    // 0x3284bc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3284bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_3284c0:
    // 0x3284c0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3284c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_3284c4:
    // 0x3284c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3284c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3284c8:
    // 0x3284c8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3284c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_3284cc:
    // 0x3284cc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3284ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_3284d0:
    // 0x3284d0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3284d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_3284d4:
    // 0x3284d4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x3284d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_3284d8:
    // 0x3284d8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3284d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3284dc:
    // 0x3284dc: 0xc0cc33c  jal         func_330CF0
label_3284e0:
    if (ctx->pc == 0x3284E0u) {
        ctx->pc = 0x3284E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284DCu;
        // 0x3284e0: 0x8e740004  lw          $s4, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3284E4u;
        goto label_3284e4;
    }
    ctx->pc = 0x3284DCu;
    SET_GPR_U32(ctx, 31, 0x3284E4u);
    ctx->pc = 0x3284E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3284DCu;
    // 0x3284e0: 0x8e740004  lw          $s4, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330CF0u, 0x3284DCu, 0x3284E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3284E4u;
label_3284e4:
    // 0x3284e4: 0xc0ca40a  jal         func_329028
label_3284e8:
    if (ctx->pc == 0x3284E8u) {
        ctx->pc = 0x3284E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284E4u;
        // 0x3284e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3284ECu;
        goto label_3284ec;
    }
    ctx->pc = 0x3284E4u;
    SET_GPR_U32(ctx, 31, 0x3284ECu);
    ctx->pc = 0x3284E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3284E4u;
    // 0x3284e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329028u, 0x3284E4u, 0x3284ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3284ECu;
label_3284ec:
    // 0x3284ec: 0x82630002  lb          $v1, 0x2($s3)
    ctx->pc = 0x3284ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_3284f0:
    // 0x3284f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3284f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3284f4:
    // 0x3284f4: 0x54620061  bnel        $v1, $v0, . + 4 + (0x61 << 2)
label_3284f8:
    if (ctx->pc == 0x3284F8u) {
        ctx->pc = 0x3284F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284F4u;
        // 0x3284f8: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3284FCu;
        goto label_3284fc;
    }
    ctx->pc = 0x3284F4u;
    {
        const bool branch_taken_0x3284f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3284f4) {
            ctx->pc = 0x3284F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3284F4u;
            // 0x3284f8: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32867Cu;
            goto label_32867c;
        }
    }
    ctx->pc = 0x3284FCu;
label_3284fc:
    // 0x3284fc: 0x5603003c  bnel        $s0, $v1, . + 4 + (0x3C << 2)
label_328500:
    if (ctx->pc == 0x328500u) {
        ctx->pc = 0x328500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284FCu;
        // 0x328500: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328504u;
        goto label_328504;
    }
    ctx->pc = 0x3284FCu;
    {
        const bool branch_taken_0x3284fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x3284fc) {
            ctx->pc = 0x328500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3284FCu;
            // 0x328500: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3285F0u;
            goto label_3285f0;
        }
    }
    ctx->pc = 0x328504u;
label_328504:
    // 0x328504: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x328504u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_328508:
    // 0x328508: 0xc0ca410  jal         func_329040
label_32850c:
    if (ctx->pc == 0x32850Cu) {
        ctx->pc = 0x32850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328508u;
        // 0x32850c: 0x26720024  addiu       $s2, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328510u;
        goto label_328510;
    }
    ctx->pc = 0x328508u;
    SET_GPR_U32(ctx, 31, 0x328510u);
    ctx->pc = 0x32850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328508u;
    // 0x32850c: 0x26720024  addiu       $s2, $s3, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329040u, 0x328508u, 0x328510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328510u;
label_328510:
    // 0x328510: 0x8e700020  lw          $s0, 0x20($s3)
    ctx->pc = 0x328510u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_328514:
    // 0x328514: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x328514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_328518:
    // 0x328518: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x328518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32851c:
    // 0x32851c: 0x1082c0  sll         $s0, $s0, 11
    ctx->pc = 0x32851cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
label_328520:
    // 0x328520: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x328520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_328524:
    // 0x328524: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x328524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_328528:
    // 0x328528: 0xc0ceb28  jal         func_33ACA0
label_32852c:
    if (ctx->pc == 0x32852Cu) {
        ctx->pc = 0x32852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328528u;
        // 0x32852c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328530u;
        goto label_328530;
    }
    ctx->pc = 0x328528u;
    SET_GPR_U32(ctx, 31, 0x328530u);
    ctx->pc = 0x32852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328528u;
    // 0x32852c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x328528u, 0x328530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328530u;
label_328530:
    // 0x328530: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x328530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_328534:
    // 0x328534: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x328534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_328538:
    // 0x328538: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x328538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32853c:
    // 0x32853c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x32853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_328540:
    // 0x328540: 0x40f809  jalr        $v0
label_328544:
    if (ctx->pc == 0x328544u) {
        ctx->pc = 0x328544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328540u;
        // 0x328544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328548u;
        goto label_328548;
    }
    ctx->pc = 0x328540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x328548u);
        ctx->pc = 0x328544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328540u;
        // 0x328544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328540u, 0x328548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328548u;
label_328548:
    // 0x328548: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x328548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_32854c:
    // 0x32854c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32854cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_328550:
    // 0x328550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x328550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328554:
    // 0x328554: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x328554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_328558:
    // 0x328558: 0x40f809  jalr        $v0
label_32855c:
    if (ctx->pc == 0x32855Cu) {
        ctx->pc = 0x32855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328558u;
        // 0x32855c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328560u;
        goto label_328560;
    }
    ctx->pc = 0x328558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x328560u);
        ctx->pc = 0x32855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328558u;
        // 0x32855c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328558u, 0x328560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328560u;
label_328560:
    // 0x328560: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x328560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_328564:
    // 0x328564: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x328564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_328568:
    // 0x328568: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x328568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_32856c:
    // 0x32856c: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x32856cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_328570:
    // 0x328570: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x328570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_328574:
    // 0x328574: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_328578:
    // 0x328578: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x328578u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
label_32857c:
    // 0x32857c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x32857cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_328580:
    // 0x328580: 0xae630058  sw          $v1, 0x58($s3)
    ctx->pc = 0x328580u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 3));
label_328584:
    // 0x328584: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x328584u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_328588:
    // 0x328588: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
label_32858c:
    if (ctx->pc == 0x32858Cu) {
        ctx->pc = 0x32858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328588u;
        // 0x32858c: 0x8e700014  lw          $s0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328590u;
        goto label_328590;
    }
    ctx->pc = 0x328588u;
    {
        const bool branch_taken_0x328588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x32858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328588u;
        // 0x32858c: 0x8e700014  lw          $s0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328588) {
            ctx->pc = 0x3285A4u;
            goto label_3285a4;
        }
    }
    ctx->pc = 0x328590u;
label_328590:
    // 0x328590: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x328590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_328594:
    // 0x328594: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_328598:
    if (ctx->pc == 0x328598u) {
        ctx->pc = 0x328598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328594u;
        // 0x328598: 0x8e620058  lw          $v0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32859Cu;
        goto label_32859c;
    }
    ctx->pc = 0x328594u;
    {
        const bool branch_taken_0x328594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328594) {
            ctx->pc = 0x328598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328594u;
            // 0x328598: 0x8e620058  lw          $v0, 0x58($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3285A8u;
            goto label_3285a8;
        }
    }
    ctx->pc = 0x32859Cu;
label_32859c:
    // 0x32859c: 0x40f809  jalr        $v0
label_3285a0:
    if (ctx->pc == 0x3285A0u) {
        ctx->pc = 0x3285A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32859Cu;
        // 0x3285a0: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3285A4u;
        goto label_3285a4;
    }
    ctx->pc = 0x32859Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3285A4u);
        ctx->pc = 0x3285A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32859Cu;
        // 0x3285a0: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32859Cu, 0x3285A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3285A4u;
label_3285a4:
    // 0x3285a4: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x3285a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3285a8:
    // 0x3285a8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3285a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3285ac:
    // 0x3285ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3285b0:
    if (ctx->pc == 0x3285B0u) {
        ctx->pc = 0x3285B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285ACu;
        // 0x3285b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3285B4u;
        goto label_3285b4;
    }
    ctx->pc = 0x3285ACu;
    {
        const bool branch_taken_0x3285ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3285B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285ACu;
        // 0x3285b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3285ac) {
            ctx->pc = 0x3285E4u;
            goto label_3285e4;
        }
    }
    ctx->pc = 0x3285B4u;
label_3285b4:
    // 0x3285b4: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x3285b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3285b8:
    // 0x3285b8: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x3285b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_3285bc:
    // 0x3285bc: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x3285bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
label_3285c0:
    // 0x3285c0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3285c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3285c4:
    // 0x3285c4: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_3285c8:
    if (ctx->pc == 0x3285C8u) {
        ctx->pc = 0x3285C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285C4u;
        // 0x3285c8: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3285CCu;
        goto label_3285cc;
    }
    ctx->pc = 0x3285C4u;
    {
        const bool branch_taken_0x3285c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3285c4) {
            ctx->pc = 0x3285C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3285C4u;
            // 0x3285c8: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328678u;
            goto label_328678;
        }
    }
    ctx->pc = 0x3285CCu;
label_3285cc:
    // 0x3285cc: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3285ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_3285d0:
    // 0x3285d0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x3285d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_3285d4:
    // 0x3285d4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3285d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3285d8:
    // 0x3285d8: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_3285dc:
    if (ctx->pc == 0x3285DCu) {
        ctx->pc = 0x3285DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285D8u;
        // 0x3285dc: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3285E0u;
        goto label_3285e0;
    }
    ctx->pc = 0x3285D8u;
    {
        const bool branch_taken_0x3285d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3285d8) {
            ctx->pc = 0x3285DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3285D8u;
            // 0x3285dc: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328678u;
            goto label_328678;
        }
    }
    ctx->pc = 0x3285E0u;
label_3285e0:
    // 0x3285e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3285e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3285e4:
    // 0x3285e4: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x3285e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_3285e8:
    // 0x3285e8: 0x10000023  b           . + 4 + (0x23 << 2)
label_3285ec:
    if (ctx->pc == 0x3285ECu) {
        ctx->pc = 0x3285ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285E8u;
        // 0x3285ec: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3285F0u;
        goto label_3285f0;
    }
    ctx->pc = 0x3285E8u;
    {
        const bool branch_taken_0x3285e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3285ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285E8u;
        // 0x3285ec: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3285e8) {
            ctx->pc = 0x328678u;
            goto label_328678;
        }
    }
    ctx->pc = 0x3285F0u;
label_3285f0:
    // 0x3285f0: 0x1602001f  bne         $s0, $v0, . + 4 + (0x1F << 2)
label_3285f4:
    if (ctx->pc == 0x3285F4u) {
        ctx->pc = 0x3285F8u;
        goto label_3285f8;
    }
    ctx->pc = 0x3285F0u;
    {
        const bool branch_taken_0x3285f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3285f0) {
            ctx->pc = 0x328670u;
            goto label_328670;
        }
    }
    ctx->pc = 0x3285F8u;
label_3285f8:
    // 0x3285f8: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x3285f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_3285fc:
    // 0x3285fc: 0xc0ca410  jal         func_329040
label_328600:
    if (ctx->pc == 0x328600u) {
        ctx->pc = 0x328600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285FCu;
        // 0x328600: 0x26700024  addiu       $s0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328604u;
        goto label_328604;
    }
    ctx->pc = 0x3285FCu;
    SET_GPR_U32(ctx, 31, 0x328604u);
    ctx->pc = 0x328600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3285FCu;
    // 0x328600: 0x26700024  addiu       $s0, $s3, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329040u, 0x3285FCu, 0x328604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328604u;
label_328604:
    // 0x328604: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x328604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_328608:
    // 0x328608: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x328608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32860c:
    // 0x32860c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32860cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328610:
    // 0x328610: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x328610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_328614:
    // 0x328614: 0x40f809  jalr        $v0
label_328618:
    if (ctx->pc == 0x328618u) {
        ctx->pc = 0x328618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328614u;
        // 0x328618: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32861Cu;
        goto label_32861c;
    }
    ctx->pc = 0x328614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32861Cu);
        ctx->pc = 0x328618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328614u;
        // 0x328618: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328614u, 0x32861Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32861Cu;
label_32861c:
    // 0x32861c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x32861cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_328620:
    // 0x328620: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x328620u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_328624:
    // 0x328624: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x328624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_328628:
    // 0x328628: 0x8c4204c8  lw          $v0, 0x4C8($v0)
    ctx->pc = 0x328628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1224)));
label_32862c:
    // 0x32862c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_328630:
    if (ctx->pc == 0x328630u) {
        ctx->pc = 0x328630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32862Cu;
        // 0x328630: 0x8e63004c  lw          $v1, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328634u;
        goto label_328634;
    }
    ctx->pc = 0x32862Cu;
    {
        const bool branch_taken_0x32862c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x328630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32862Cu;
        // 0x328630: 0x8e63004c  lw          $v1, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32862c) {
            ctx->pc = 0x328650u;
            goto label_328650;
        }
    }
    ctx->pc = 0x328634u;
label_328634:
    // 0x328634: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x328634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_328638:
    // 0x328638: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_32863c:
    if (ctx->pc == 0x32863Cu) {
        ctx->pc = 0x32863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328638u;
        // 0x32863c: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328640u;
        goto label_328640;
    }
    ctx->pc = 0x328638u;
    {
        const bool branch_taken_0x328638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328638u;
        // 0x32863c: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328638) {
            ctx->pc = 0x328654u;
            goto label_328654;
        }
    }
    ctx->pc = 0x328640u;
label_328640:
    // 0x328640: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x328640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_328644:
    // 0x328644: 0x1000000c  b           . + 4 + (0xC << 2)
label_328648:
    if (ctx->pc == 0x328648u) {
        ctx->pc = 0x328648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328644u;
        // 0x328648: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32864Cu;
        goto label_32864c;
    }
    ctx->pc = 0x328644u;
    {
        const bool branch_taken_0x328644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328644u;
        // 0x328648: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328644) {
            ctx->pc = 0x328678u;
            goto label_328678;
        }
    }
    ctx->pc = 0x32864Cu;
label_32864c:
    // 0x32864c: 0x0  nop
    ctx->pc = 0x32864cu;
    // NOP
label_328650:
    // 0x328650: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x328650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_328654:
    // 0x328654: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x328654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_328658:
    // 0x328658: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x328658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_32865c:
    // 0x32865c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_328660:
    if (ctx->pc == 0x328660u) {
        ctx->pc = 0x328660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32865Cu;
        // 0x328660: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328664u;
        goto label_328664;
    }
    ctx->pc = 0x32865Cu;
    {
        const bool branch_taken_0x32865c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32865c) {
            ctx->pc = 0x328660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32865Cu;
            // 0x328660: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32867Cu;
            goto label_32867c;
        }
    }
    ctx->pc = 0x328664u;
label_328664:
    // 0x328664: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x328664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_328668:
    // 0x328668: 0x10000003  b           . + 4 + (0x3 << 2)
label_32866c:
    if (ctx->pc == 0x32866Cu) {
        ctx->pc = 0x32866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328668u;
        // 0x32866c: 0xae62004c  sw          $v0, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328670u;
        goto label_328670;
    }
    ctx->pc = 0x328668u;
    {
        const bool branch_taken_0x328668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328668u;
        // 0x32866c: 0xae62004c  sw          $v0, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328668) {
            ctx->pc = 0x328678u;
            goto label_328678;
        }
    }
    ctx->pc = 0x328670u;
label_328670:
    // 0x328670: 0xc0ca410  jal         func_329040
label_328674:
    if (ctx->pc == 0x328674u) {
        ctx->pc = 0x328678u;
        goto label_328678;
    }
    ctx->pc = 0x328670u;
    SET_GPR_U32(ctx, 31, 0x328678u);
    ctx->pc = 0x329040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329040u, 0x328670u, 0x328678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328678u;
label_328678:
    // 0x328678: 0x82630001  lb          $v1, 0x1($s3)
    ctx->pc = 0x328678u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_32867c:
    // 0x32867c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32867cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_328680:
    // 0x328680: 0x1062008f  beq         $v1, $v0, . + 4 + (0x8F << 2)
label_328684:
    if (ctx->pc == 0x328684u) {
        ctx->pc = 0x328684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328680u;
        // 0x328684: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328688u;
        goto label_328688;
    }
    ctx->pc = 0x328680u;
    {
        const bool branch_taken_0x328680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x328684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328680u;
        // 0x328684: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328680) {
            ctx->pc = 0x3288C0u;
            goto label_3288c0;
        }
    }
    ctx->pc = 0x328688u;
label_328688:
    // 0x328688: 0x82620002  lb          $v0, 0x2($s3)
    ctx->pc = 0x328688u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_32868c:
    // 0x32868c: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
label_328690:
    if (ctx->pc == 0x328690u) {
        ctx->pc = 0x328690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32868Cu;
        // 0x328690: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328694u;
        goto label_328694;
    }
    ctx->pc = 0x32868Cu;
    {
        const bool branch_taken_0x32868c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32868Cu;
        // 0x328690: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32868c) {
            ctx->pc = 0x3288C4u;
            goto label_3288c4;
        }
    }
    ctx->pc = 0x328694u;
label_328694:
    // 0x328694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_328698:
    // 0x328698: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x328698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_32869c:
    // 0x32869c: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x32869cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
label_3286a0:
    // 0x3286a0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3286a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3286a4:
    // 0x3286a4: 0xc0ca410  jal         func_329040
label_3286a8:
    if (ctx->pc == 0x3286A8u) {
        ctx->pc = 0x3286A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286A4u;
        // 0x3286a8: 0xae600028  sw          $zero, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3286ACu;
        goto label_3286ac;
    }
    ctx->pc = 0x3286A4u;
    SET_GPR_U32(ctx, 31, 0x3286ACu);
    ctx->pc = 0x3286A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3286A4u;
    // 0x3286a8: 0xae600028  sw          $zero, 0x28($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329040u, 0x3286A4u, 0x3286ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3286ACu;
label_3286ac:
    // 0x3286ac: 0x82620044  lb          $v0, 0x44($s3)
    ctx->pc = 0x3286acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
label_3286b0:
    // 0x3286b0: 0x50510082  beql        $v0, $s1, . + 4 + (0x82 << 2)
label_3286b4:
    if (ctx->pc == 0x3286B4u) {
        ctx->pc = 0x3286B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286B0u;
        // 0x3286b4: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3286B8u;
        goto label_3286b8;
    }
    ctx->pc = 0x3286B0u;
    {
        const bool branch_taken_0x3286b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x3286b0) {
            ctx->pc = 0x3286B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3286B0u;
            // 0x3286b4: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3288BCu;
            goto label_3288bc;
        }
    }
    ctx->pc = 0x3286B8u;
label_3286b8:
    // 0x3286b8: 0x82620048  lb          $v0, 0x48($s3)
    ctx->pc = 0x3286b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 72)));
label_3286bc:
    // 0x3286bc: 0x5051007f  beql        $v0, $s1, . + 4 + (0x7F << 2)
label_3286c0:
    if (ctx->pc == 0x3286C0u) {
        ctx->pc = 0x3286C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286BCu;
        // 0x3286c0: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3286C4u;
        goto label_3286c4;
    }
    ctx->pc = 0x3286BCu;
    {
        const bool branch_taken_0x3286bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x3286bc) {
            ctx->pc = 0x3286C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3286BCu;
            // 0x3286c0: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3288BCu;
            goto label_3288bc;
        }
    }
    ctx->pc = 0x3286C4u;
label_3286c4:
    // 0x3286c4: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x3286c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3286c8:
    // 0x3286c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3286cc:
    if (ctx->pc == 0x3286CCu) {
        ctx->pc = 0x3286CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286C8u;
        // 0x3286cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3286D0u;
        goto label_3286d0;
    }
    ctx->pc = 0x3286C8u;
    {
        const bool branch_taken_0x3286c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3286CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286C8u;
        // 0x3286cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3286c8) {
            ctx->pc = 0x3286E0u;
            goto label_3286e0;
        }
    }
    ctx->pc = 0x3286D0u;
label_3286d0:
    // 0x3286d0: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x3286d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_3286d4:
    // 0x3286d4: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x3286d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_3286d8:
    // 0x3286d8: 0x10000078  b           . + 4 + (0x78 << 2)
label_3286dc:
    if (ctx->pc == 0x3286DCu) {
        ctx->pc = 0x3286DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286D8u;
        // 0x3286dc: 0xae600020  sw          $zero, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3286E0u;
        goto label_3286e0;
    }
    ctx->pc = 0x3286D8u;
    {
        const bool branch_taken_0x3286d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3286DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286D8u;
        // 0x3286dc: 0xae600020  sw          $zero, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3286d8) {
            ctx->pc = 0x3288BCu;
            goto label_3288bc;
        }
    }
    ctx->pc = 0x3286E0u;
label_3286e0:
    // 0x3286e0: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_3286e4:
    if (ctx->pc == 0x3286E4u) {
        ctx->pc = 0x3286E8u;
        goto label_3286e8;
    }
    ctx->pc = 0x3286E0u;
    {
        const bool branch_taken_0x3286e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3286e0) {
            ctx->pc = 0x3286F4u;
            goto label_3286f4;
        }
    }
    ctx->pc = 0x3286E8u;
label_3286e8:
    // 0x3286e8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3286e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3286ec:
    // 0x3286ec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3286f0:
    if (ctx->pc == 0x3286F0u) {
        ctx->pc = 0x3286F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286ECu;
        // 0x3286f0: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3286F4u;
        goto label_3286f4;
    }
    ctx->pc = 0x3286ECu;
    {
        const bool branch_taken_0x3286ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3286ec) {
            ctx->pc = 0x3286F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3286ECu;
            // 0x3286f0: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328708u;
            goto label_328708;
        }
    }
    ctx->pc = 0x3286F4u;
label_3286f4:
    // 0x3286f4: 0xc0ca128  jal         func_3284A0
label_3286f8:
    if (ctx->pc == 0x3286F8u) {
        ctx->pc = 0x3286F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286F4u;
        // 0x3286f8: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3286FCu;
        goto label_3286fc;
    }
    ctx->pc = 0x3286F4u;
    SET_GPR_U32(ctx, 31, 0x3286FCu);
    ctx->pc = 0x3286F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3286F4u;
    // 0x3286f8: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3284A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3284A0u, 0x3286F4u, 0x3286FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3286FCu;
label_3286fc:
    // 0x3286fc: 0x10000070  b           . + 4 + (0x70 << 2)
label_328700:
    if (ctx->pc == 0x328700u) {
        ctx->pc = 0x328700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286FCu;
        // 0x328700: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328704u;
        goto label_328704;
    }
    ctx->pc = 0x3286FCu;
    {
        const bool branch_taken_0x3286fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286FCu;
        // 0x328700: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3286fc) {
            ctx->pc = 0x3288C0u;
            goto label_3288c0;
        }
    }
    ctx->pc = 0x328704u;
label_328704:
    // 0x328704: 0x0  nop
    ctx->pc = 0x328704u;
    // NOP
label_328708:
    // 0x328708: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x328708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32870c:
    // 0x32870c: 0x40f809  jalr        $v0
label_328710:
    if (ctx->pc == 0x328710u) {
        ctx->pc = 0x328710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32870Cu;
        // 0x328710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328714u;
        goto label_328714;
    }
    ctx->pc = 0x32870Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x328714u);
        ctx->pc = 0x328710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32870Cu;
        // 0x328710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32870Cu, 0x328714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328714u;
label_328714:
    // 0x328714: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x328714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_328718:
    // 0x328718: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x328718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_32871c:
    // 0x32871c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x32871cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_328720:
    // 0x328720: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x328720u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_328724:
    // 0x328724: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_328728:
    if (ctx->pc == 0x328728u) {
        ctx->pc = 0x328728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328724u;
        // 0x328728: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32872Cu;
        goto label_32872c;
    }
    ctx->pc = 0x328724u;
    {
        const bool branch_taken_0x328724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x328724) {
            ctx->pc = 0x328728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328724u;
            // 0x328728: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328738u;
            goto label_328738;
        }
    }
    ctx->pc = 0x32872Cu;
label_32872c:
    // 0x32872c: 0x10000063  b           . + 4 + (0x63 << 2)
label_328730:
    if (ctx->pc == 0x328730u) {
        ctx->pc = 0x328730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32872Cu;
        // 0x328730: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328734u;
        goto label_328734;
    }
    ctx->pc = 0x32872Cu;
    {
        const bool branch_taken_0x32872c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32872Cu;
        // 0x328730: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32872c) {
            ctx->pc = 0x3288BCu;
            goto label_3288bc;
        }
    }
    ctx->pc = 0x328734u;
label_328734:
    // 0x328734: 0x0  nop
    ctx->pc = 0x328734u;
    // NOP
label_328738:
    // 0x328738: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x328738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32873c:
    // 0x32873c: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x32873cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_328740:
    // 0x328740: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x328740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_328744:
    // 0x328744: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x328744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_328748:
    // 0x328748: 0x40f809  jalr        $v0
label_32874c:
    if (ctx->pc == 0x32874Cu) {
        ctx->pc = 0x32874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328748u;
        // 0x32874c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328750u;
        goto label_328750;
    }
    ctx->pc = 0x328748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x328750u);
        ctx->pc = 0x32874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328748u;
        // 0x32874c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328748u, 0x328750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328750u;
label_328750:
    // 0x328750: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x328750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_328754:
    // 0x328754: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x328754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_328758:
    // 0x328758: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x328758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32875c:
    // 0x32875c: 0x8e670058  lw          $a3, 0x58($s3)
    ctx->pc = 0x32875cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_328760:
    // 0x328760: 0x246407ff  addiu       $a0, $v1, 0x7FF
    ctx->pc = 0x328760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
label_328764:
    // 0x328764: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x328764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_328768:
    // 0x328768: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x328768u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_32876c:
    // 0x32876c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x32876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_328770:
    // 0x328770: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x328770u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_328774:
    // 0x328774: 0x382c3  sra         $s0, $v1, 11
    ctx->pc = 0x328774u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 11));
label_328778:
    // 0x328778: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x328778u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_32877c:
    // 0x32877c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x32877cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_328780:
    // 0x328780: 0xa3800a  movz        $s0, $a1, $v1
    ctx->pc = 0x328780u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_328784:
    // 0x328784: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x328784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_328788:
    // 0x328788: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x328788u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32878c:
    // 0x32878c: 0x8e68002c  lw          $t0, 0x2C($s3)
    ctx->pc = 0x32878cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_328790:
    // 0x328790: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x328790u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_328794:
    // 0x328794: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x328794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_328798:
    // 0x328798: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x328798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_32879c:
    // 0x32879c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x32879cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3287a0:
    // 0x3287a0: 0xc0cc2ec  jal         func_330BB0
label_3287a4:
    if (ctx->pc == 0x3287A4u) {
        ctx->pc = 0x3287A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287A0u;
        // 0x3287a4: 0x102800a  movz        $s0, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3287A8u;
        goto label_3287a8;
    }
    ctx->pc = 0x3287A0u;
    SET_GPR_U32(ctx, 31, 0x3287A8u);
    ctx->pc = 0x3287A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3287A0u;
    // 0x3287a4: 0x102800a  movz        $s0, $t0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330BB0u, 0x3287A0u, 0x3287A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3287A8u;
label_3287a8:
    // 0x3287a8: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3287a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
label_3287ac:
    // 0x3287ac: 0x8c641400  lw          $a0, 0x1400($v1)
    ctx->pc = 0x3287acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5120)));
label_3287b0:
    // 0x3287b0: 0x1491000b  bne         $a0, $s1, . + 4 + (0xB << 2)
label_3287b4:
    if (ctx->pc == 0x3287B4u) {
        ctx->pc = 0x3287B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287B0u;
        // 0x3287b4: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3287B8u;
        goto label_3287b8;
    }
    ctx->pc = 0x3287B0u;
    {
        const bool branch_taken_0x3287b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x3287B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287B0u;
        // 0x3287b4: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287b0) {
            ctx->pc = 0x3287E0u;
            goto label_3287e0;
        }
    }
    ctx->pc = 0x3287B8u;
label_3287b8:
    // 0x3287b8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3287b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_3287bc:
    // 0x3287bc: 0xac448498  sw          $a0, -0x7B68($v0)
    ctx->pc = 0x3287bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294935704), GPR_U32(ctx, 4));
label_3287c0:
    // 0x3287c0: 0x82630003  lb          $v1, 0x3($s3)
    ctx->pc = 0x3287c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_3287c4:
    // 0x3287c4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_3287c8:
    if (ctx->pc == 0x3287C8u) {
        ctx->pc = 0x3287C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287C4u;
        // 0x3287c8: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3287CCu;
        goto label_3287cc;
    }
    ctx->pc = 0x3287C4u;
    {
        const bool branch_taken_0x3287c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3287C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287C4u;
        // 0x3287c8: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287c4) {
            ctx->pc = 0x3287D8u;
            goto label_3287d8;
        }
    }
    ctx->pc = 0x3287CCu;
label_3287cc:
    // 0x3287cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_3287d0:
    if (ctx->pc == 0x3287D0u) {
        ctx->pc = 0x3287D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287CCu;
        // 0x3287d0: 0xa040849c  sb          $zero, -0x7B64($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294935708), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3287D4u;
        goto label_3287d4;
    }
    ctx->pc = 0x3287CCu;
    {
        const bool branch_taken_0x3287cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3287D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287CCu;
        // 0x3287d0: 0xa040849c  sb          $zero, -0x7B64($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294935708), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287cc) {
            ctx->pc = 0x3287DCu;
            goto label_3287dc;
        }
    }
    ctx->pc = 0x3287D4u;
label_3287d4:
    // 0x3287d4: 0x0  nop
    ctx->pc = 0x3287d4u;
    // NOP
label_3287d8:
    // 0x3287d8: 0xa044849c  sb          $a0, -0x7B64($v0)
    ctx->pc = 0x3287d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294935708), (uint8_t)GPR_U32(ctx, 4));
label_3287dc:
    // 0x3287dc: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3287dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_3287e0:
    // 0x3287e0: 0x8e65005c  lw          $a1, 0x5C($s3)
    ctx->pc = 0x3287e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_3287e4:
    // 0x3287e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3287e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3287e8:
    // 0x3287e8: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
label_3287ec:
    if (ctx->pc == 0x3287ECu) {
        ctx->pc = 0x3287ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287E8u;
        // 0x3287ec: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3287F0u;
        goto label_3287f0;
    }
    ctx->pc = 0x3287E8u;
    {
        const bool branch_taken_0x3287e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3287e8) {
            ctx->pc = 0x3287ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3287E8u;
            // 0x3287ec: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328814u;
            goto label_328814;
        }
    }
    ctx->pc = 0x3287F0u;
label_3287f0:
    // 0x3287f0: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x3287f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3287f4:
    // 0x3287f4: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x3287f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_3287f8:
    // 0x3287f8: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x3287f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_3287fc:
    // 0x3287fc: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x3287fcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_328800:
    // 0x328800: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x328800u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_328804:
    // 0x328804: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x328804u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_328808:
    // 0x328808: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x328808u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32880c:
    // 0x32880c: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x32880cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_328810:
    // 0x328810: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x328810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_328814:
    // 0x328814: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x328814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_328818:
    // 0x328818: 0xc0cc306  jal         func_330C18
label_32881c:
    if (ctx->pc == 0x32881Cu) {
        ctx->pc = 0x32881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328818u;
        // 0x32881c: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328820u;
        goto label_328820;
    }
    ctx->pc = 0x328818u;
    SET_GPR_U32(ctx, 31, 0x328820u);
    ctx->pc = 0x32881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328818u;
    // 0x32881c: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330C18u, 0x328818u, 0x328820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328820u;
label_328820:
    // 0x328820: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x328820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_328824:
    // 0x328824: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x328824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_328828:
    // 0x328828: 0xae640028  sw          $a0, 0x28($s3)
    ctx->pc = 0x328828u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 4));
label_32882c:
    // 0x32882c: 0xae630024  sw          $v1, 0x24($s3)
    ctx->pc = 0x32882cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
label_328830:
    // 0x328830: 0x1c400022  bgtz        $v0, . + 4 + (0x22 << 2)
label_328834:
    if (ctx->pc == 0x328834u) {
        ctx->pc = 0x328834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328830u;
        // 0x328834: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328838u;
        goto label_328838;
    }
    ctx->pc = 0x328830u;
    {
        const bool branch_taken_0x328830 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x328834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328830u;
        // 0x328834: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328830) {
            ctx->pc = 0x3288BCu;
            goto label_3288bc;
        }
    }
    ctx->pc = 0x328838u;
label_328838:
    // 0x328838: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x328838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_32883c:
    // 0x32883c: 0x26700024  addiu       $s0, $s3, 0x24
    ctx->pc = 0x32883cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
label_328840:
    // 0x328840: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x328840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_328844:
    // 0x328844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x328844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328848:
    // 0x328848: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x328848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_32884c:
    // 0x32884c: 0x40f809  jalr        $v0
label_328850:
    if (ctx->pc == 0x328850u) {
        ctx->pc = 0x328850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32884Cu;
        // 0x328850: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328854u;
        goto label_328854;
    }
    ctx->pc = 0x32884Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x328854u);
        ctx->pc = 0x328850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32884Cu;
        // 0x328850: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32884Cu, 0x328854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328854u;
label_328854:
    // 0x328854: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x328854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_328858:
    // 0x328858: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x328858u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_32885c:
    // 0x32885c: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x32885cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_328860:
    // 0x328860: 0xc0cc33c  jal         func_330CF0
label_328864:
    if (ctx->pc == 0x328864u) {
        ctx->pc = 0x328864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328860u;
        // 0x328864: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328868u;
        goto label_328868;
    }
    ctx->pc = 0x328860u;
    SET_GPR_U32(ctx, 31, 0x328868u);
    ctx->pc = 0x328864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328860u;
    // 0x328864: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330CF0u, 0x328860u, 0x328868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328868u;
label_328868:
    // 0x328868: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x328868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32886c:
    // 0x32886c: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
label_328870:
    if (ctx->pc == 0x328870u) {
        ctx->pc = 0x328870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32886Cu;
        // 0x328870: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328874u;
        goto label_328874;
    }
    ctx->pc = 0x32886Cu;
    {
        const bool branch_taken_0x32886c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32886c) {
            ctx->pc = 0x328870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32886Cu;
            // 0x328870: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3288C0u;
            goto label_3288c0;
        }
    }
    ctx->pc = 0x328874u;
label_328874:
    // 0x328874: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x328874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_328878:
    // 0x328878: 0x8c4204c8  lw          $v0, 0x4C8($v0)
    ctx->pc = 0x328878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1224)));
label_32887c:
    // 0x32887c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_328880:
    if (ctx->pc == 0x328880u) {
        ctx->pc = 0x328880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32887Cu;
        // 0x328880: 0x8e63004c  lw          $v1, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328884u;
        goto label_328884;
    }
    ctx->pc = 0x32887Cu;
    {
        const bool branch_taken_0x32887c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x328880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32887Cu;
        // 0x328880: 0x8e63004c  lw          $v1, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32887c) {
            ctx->pc = 0x3288A0u;
            goto label_3288a0;
        }
    }
    ctx->pc = 0x328884u;
label_328884:
    // 0x328884: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x328884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_328888:
    // 0x328888: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_32888c:
    if (ctx->pc == 0x32888Cu) {
        ctx->pc = 0x32888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328888u;
        // 0x32888c: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328890u;
        goto label_328890;
    }
    ctx->pc = 0x328888u;
    {
        const bool branch_taken_0x328888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328888u;
        // 0x32888c: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328888) {
            ctx->pc = 0x3288A4u;
            goto label_3288a4;
        }
    }
    ctx->pc = 0x328890u;
label_328890:
    // 0x328890: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x328890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_328894:
    // 0x328894: 0x10000009  b           . + 4 + (0x9 << 2)
label_328898:
    if (ctx->pc == 0x328898u) {
        ctx->pc = 0x328898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328894u;
        // 0x328898: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32889Cu;
        goto label_32889c;
    }
    ctx->pc = 0x328894u;
    {
        const bool branch_taken_0x328894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328894u;
        // 0x328898: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328894) {
            ctx->pc = 0x3288BCu;
            goto label_3288bc;
        }
    }
    ctx->pc = 0x32889Cu;
label_32889c:
    // 0x32889c: 0x0  nop
    ctx->pc = 0x32889cu;
    // NOP
label_3288a0:
    // 0x3288a0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3288a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_3288a4:
    // 0x3288a4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x3288a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_3288a8:
    // 0x3288a8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3288a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3288ac:
    // 0x3288ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3288b0:
    if (ctx->pc == 0x3288B0u) {
        ctx->pc = 0x3288B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288ACu;
        // 0x3288b0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3288B4u;
        goto label_3288b4;
    }
    ctx->pc = 0x3288ACu;
    {
        const bool branch_taken_0x3288ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3288B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288ACu;
        // 0x3288b0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3288ac) {
            ctx->pc = 0x3288C0u;
            goto label_3288c0;
        }
    }
    ctx->pc = 0x3288B4u;
label_3288b4:
    // 0x3288b4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3288b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3288b8:
    // 0x3288b8: 0xae62004c  sw          $v0, 0x4C($s3)
    ctx->pc = 0x3288b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
label_3288bc:
    // 0x3288bc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3288bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3288c0:
    // 0x3288c0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3288c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3288c4:
    // 0x3288c4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3288c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3288c8:
    // 0x3288c8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3288c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3288cc:
    // 0x3288cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3288ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3288d0:
    // 0x3288d0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3288d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3288d4:
    // 0x3288d4: 0x3e00008  jr          $ra
label_3288d8:
    if (ctx->pc == 0x3288D8u) {
        ctx->pc = 0x3288D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288D4u;
        // 0x3288d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3288DCu;
        goto label_3288dc;
    }
    ctx->pc = 0x3288D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3288D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288D4u;
        // 0x3288d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3288D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3288DCu;
label_3288dc:
    // 0x3288dc: 0x0  nop
    ctx->pc = 0x3288dcu;
    // NOP
    ctx->pc = 0x3288e0u;
}
