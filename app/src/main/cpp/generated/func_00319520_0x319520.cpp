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

// Function: func_00319520
// Address: 0x319520 - 0x319848
void func_00319520_0x319520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00319520_0x319520");
#endif

    switch (ctx->pc) {
        case 0x319520u: goto label_319520;
        case 0x319524u: goto label_319524;
        case 0x319528u: goto label_319528;
        case 0x31952cu: goto label_31952c;
        case 0x319530u: goto label_319530;
        case 0x319534u: goto label_319534;
        case 0x319538u: goto label_319538;
        case 0x31953cu: goto label_31953c;
        case 0x319540u: goto label_319540;
        case 0x319544u: goto label_319544;
        case 0x319548u: goto label_319548;
        case 0x31954cu: goto label_31954c;
        case 0x319550u: goto label_319550;
        case 0x319554u: goto label_319554;
        case 0x319558u: goto label_319558;
        case 0x31955cu: goto label_31955c;
        case 0x319560u: goto label_319560;
        case 0x319564u: goto label_319564;
        case 0x319568u: goto label_319568;
        case 0x31956cu: goto label_31956c;
        case 0x319570u: goto label_319570;
        case 0x319574u: goto label_319574;
        case 0x319578u: goto label_319578;
        case 0x31957cu: goto label_31957c;
        case 0x319580u: goto label_319580;
        case 0x319584u: goto label_319584;
        case 0x319588u: goto label_319588;
        case 0x31958cu: goto label_31958c;
        case 0x319590u: goto label_319590;
        case 0x319594u: goto label_319594;
        case 0x319598u: goto label_319598;
        case 0x31959cu: goto label_31959c;
        case 0x3195a0u: goto label_3195a0;
        case 0x3195a4u: goto label_3195a4;
        case 0x3195a8u: goto label_3195a8;
        case 0x3195acu: goto label_3195ac;
        case 0x3195b0u: goto label_3195b0;
        case 0x3195b4u: goto label_3195b4;
        case 0x3195b8u: goto label_3195b8;
        case 0x3195bcu: goto label_3195bc;
        case 0x3195c0u: goto label_3195c0;
        case 0x3195c4u: goto label_3195c4;
        case 0x3195c8u: goto label_3195c8;
        case 0x3195ccu: goto label_3195cc;
        case 0x3195d0u: goto label_3195d0;
        case 0x3195d4u: goto label_3195d4;
        case 0x3195d8u: goto label_3195d8;
        case 0x3195dcu: goto label_3195dc;
        case 0x3195e0u: goto label_3195e0;
        case 0x3195e4u: goto label_3195e4;
        case 0x3195e8u: goto label_3195e8;
        case 0x3195ecu: goto label_3195ec;
        case 0x3195f0u: goto label_3195f0;
        case 0x3195f4u: goto label_3195f4;
        case 0x3195f8u: goto label_3195f8;
        case 0x3195fcu: goto label_3195fc;
        case 0x319600u: goto label_319600;
        case 0x319604u: goto label_319604;
        case 0x319608u: goto label_319608;
        case 0x31960cu: goto label_31960c;
        case 0x319610u: goto label_319610;
        case 0x319614u: goto label_319614;
        case 0x319618u: goto label_319618;
        case 0x31961cu: goto label_31961c;
        case 0x319620u: goto label_319620;
        case 0x319624u: goto label_319624;
        case 0x319628u: goto label_319628;
        case 0x31962cu: goto label_31962c;
        case 0x319630u: goto label_319630;
        case 0x319634u: goto label_319634;
        case 0x319638u: goto label_319638;
        case 0x31963cu: goto label_31963c;
        case 0x319640u: goto label_319640;
        case 0x319644u: goto label_319644;
        case 0x319648u: goto label_319648;
        case 0x31964cu: goto label_31964c;
        case 0x319650u: goto label_319650;
        case 0x319654u: goto label_319654;
        case 0x319658u: goto label_319658;
        case 0x31965cu: goto label_31965c;
        case 0x319660u: goto label_319660;
        case 0x319664u: goto label_319664;
        case 0x319668u: goto label_319668;
        case 0x31966cu: goto label_31966c;
        case 0x319670u: goto label_319670;
        case 0x319674u: goto label_319674;
        case 0x319678u: goto label_319678;
        case 0x31967cu: goto label_31967c;
        case 0x319680u: goto label_319680;
        case 0x319684u: goto label_319684;
        case 0x319688u: goto label_319688;
        case 0x31968cu: goto label_31968c;
        case 0x319690u: goto label_319690;
        case 0x319694u: goto label_319694;
        case 0x319698u: goto label_319698;
        case 0x31969cu: goto label_31969c;
        case 0x3196a0u: goto label_3196a0;
        case 0x3196a4u: goto label_3196a4;
        case 0x3196a8u: goto label_3196a8;
        case 0x3196acu: goto label_3196ac;
        case 0x3196b0u: goto label_3196b0;
        case 0x3196b4u: goto label_3196b4;
        case 0x3196b8u: goto label_3196b8;
        case 0x3196bcu: goto label_3196bc;
        case 0x3196c0u: goto label_3196c0;
        case 0x3196c4u: goto label_3196c4;
        case 0x3196c8u: goto label_3196c8;
        case 0x3196ccu: goto label_3196cc;
        case 0x3196d0u: goto label_3196d0;
        case 0x3196d4u: goto label_3196d4;
        case 0x3196d8u: goto label_3196d8;
        case 0x3196dcu: goto label_3196dc;
        case 0x3196e0u: goto label_3196e0;
        case 0x3196e4u: goto label_3196e4;
        case 0x3196e8u: goto label_3196e8;
        case 0x3196ecu: goto label_3196ec;
        case 0x3196f0u: goto label_3196f0;
        case 0x3196f4u: goto label_3196f4;
        case 0x3196f8u: goto label_3196f8;
        case 0x3196fcu: goto label_3196fc;
        case 0x319700u: goto label_319700;
        case 0x319704u: goto label_319704;
        case 0x319708u: goto label_319708;
        case 0x31970cu: goto label_31970c;
        case 0x319710u: goto label_319710;
        case 0x319714u: goto label_319714;
        case 0x319718u: goto label_319718;
        case 0x31971cu: goto label_31971c;
        case 0x319720u: goto label_319720;
        case 0x319724u: goto label_319724;
        case 0x319728u: goto label_319728;
        case 0x31972cu: goto label_31972c;
        case 0x319730u: goto label_319730;
        case 0x319734u: goto label_319734;
        case 0x319738u: goto label_319738;
        case 0x31973cu: goto label_31973c;
        case 0x319740u: goto label_319740;
        case 0x319744u: goto label_319744;
        case 0x319748u: goto label_319748;
        case 0x31974cu: goto label_31974c;
        case 0x319750u: goto label_319750;
        case 0x319754u: goto label_319754;
        case 0x319758u: goto label_319758;
        case 0x31975cu: goto label_31975c;
        case 0x319760u: goto label_319760;
        case 0x319764u: goto label_319764;
        case 0x319768u: goto label_319768;
        case 0x31976cu: goto label_31976c;
        case 0x319770u: goto label_319770;
        case 0x319774u: goto label_319774;
        case 0x319778u: goto label_319778;
        case 0x31977cu: goto label_31977c;
        case 0x319780u: goto label_319780;
        case 0x319784u: goto label_319784;
        case 0x319788u: goto label_319788;
        case 0x31978cu: goto label_31978c;
        case 0x319790u: goto label_319790;
        case 0x319794u: goto label_319794;
        case 0x319798u: goto label_319798;
        case 0x31979cu: goto label_31979c;
        case 0x3197a0u: goto label_3197a0;
        case 0x3197a4u: goto label_3197a4;
        case 0x3197a8u: goto label_3197a8;
        case 0x3197acu: goto label_3197ac;
        case 0x3197b0u: goto label_3197b0;
        case 0x3197b4u: goto label_3197b4;
        case 0x3197b8u: goto label_3197b8;
        case 0x3197bcu: goto label_3197bc;
        case 0x3197c0u: goto label_3197c0;
        case 0x3197c4u: goto label_3197c4;
        case 0x3197c8u: goto label_3197c8;
        case 0x3197ccu: goto label_3197cc;
        case 0x3197d0u: goto label_3197d0;
        case 0x3197d4u: goto label_3197d4;
        case 0x3197d8u: goto label_3197d8;
        case 0x3197dcu: goto label_3197dc;
        case 0x3197e0u: goto label_3197e0;
        case 0x3197e4u: goto label_3197e4;
        case 0x3197e8u: goto label_3197e8;
        case 0x3197ecu: goto label_3197ec;
        case 0x3197f0u: goto label_3197f0;
        case 0x3197f4u: goto label_3197f4;
        case 0x3197f8u: goto label_3197f8;
        case 0x3197fcu: goto label_3197fc;
        case 0x319800u: goto label_319800;
        case 0x319804u: goto label_319804;
        case 0x319808u: goto label_319808;
        case 0x31980cu: goto label_31980c;
        case 0x319810u: goto label_319810;
        case 0x319814u: goto label_319814;
        case 0x319818u: goto label_319818;
        case 0x31981cu: goto label_31981c;
        case 0x319820u: goto label_319820;
        case 0x319824u: goto label_319824;
        case 0x319828u: goto label_319828;
        case 0x31982cu: goto label_31982c;
        case 0x319830u: goto label_319830;
        case 0x319834u: goto label_319834;
        case 0x319838u: goto label_319838;
        case 0x31983cu: goto label_31983c;
        case 0x319840u: goto label_319840;
        case 0x319844u: goto label_319844;
        default: break;
    }

    ctx->pc = 0x319520u;

label_319520:
    // 0x319520: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x319520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_319524:
    // 0x319524: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x319524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
label_319528:
    // 0x319528: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x319528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_31952c:
    // 0x31952c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31952cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_319530:
    // 0x319530: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x319530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_319534:
    // 0x319534: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x319534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_319538:
    // 0x319538: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x319538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_31953c:
    // 0x31953c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x31953cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_319540:
    // 0x319540: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x319540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_319544:
    // 0x319544: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x319544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_319548:
    // 0x319548: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x319548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_31954c:
    // 0x31954c: 0xae230250  sw          $v1, 0x250($s1)
    ctx->pc = 0x31954cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
label_319550:
    // 0x319550: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x319550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_319554:
    // 0x319554: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x319554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_319558:
    // 0x319558: 0x40f809  jalr        $v0
label_31955c:
    if (ctx->pc == 0x31955Cu) {
        ctx->pc = 0x31955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319558u;
        // 0x31955c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319560u;
        goto label_319560;
    }
    ctx->pc = 0x319558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x319560u);
        ctx->pc = 0x31955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319558u;
        // 0x31955c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319558u, 0x319560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x319560u;
label_319560:
    // 0x319560: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_319564:
    if (ctx->pc == 0x319564u) {
        ctx->pc = 0x319564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319560u;
        // 0x319564: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319568u;
        goto label_319568;
    }
    ctx->pc = 0x319560u;
    {
        const bool branch_taken_0x319560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319560u;
        // 0x319564: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319560) {
            ctx->pc = 0x319574u;
            goto label_319574;
        }
    }
    ctx->pc = 0x319568u;
label_319568:
    // 0x319568: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x319568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_31956c:
    // 0x31956c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_319570:
    // 0x319570: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x319570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_319574:
    // 0x319574: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x319574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_319578:
    // 0x319578: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x319578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_31957c:
    // 0x31957c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x31957cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_319580:
    // 0x319580: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x319580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_319584:
    // 0x319584: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_319588:
    if (ctx->pc == 0x319588u) {
        ctx->pc = 0x319588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319584u;
        // 0x319588: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31958Cu;
        goto label_31958c;
    }
    ctx->pc = 0x319584u;
    {
        const bool branch_taken_0x319584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x319588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319584u;
        // 0x319588: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319584) {
            ctx->pc = 0x3195E0u;
            goto label_3195e0;
        }
    }
    ctx->pc = 0x31958Cu;
label_31958c:
    // 0x31958c: 0x26230100  addiu       $v1, $s1, 0x100
    ctx->pc = 0x31958cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_319590:
    // 0x319590: 0x8c44aff0  lw          $a0, -0x5010($v0)
    ctx->pc = 0x319590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
label_319594:
    // 0x319594: 0x24820220  addiu       $v0, $a0, 0x220
    ctx->pc = 0x319594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
label_319598:
    // 0x319598: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_31959c:
    if (ctx->pc == 0x31959Cu) {
        ctx->pc = 0x31959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319598u;
        // 0x31959c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3195A0u;
        goto label_3195a0;
    }
    ctx->pc = 0x319598u;
    {
        const bool branch_taken_0x319598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x319598) {
            ctx->pc = 0x31959Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319598u;
            // 0x31959c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3195BCu;
            goto label_3195bc;
        }
    }
    ctx->pc = 0x3195A0u;
label_3195a0:
    // 0x3195a0: 0xc4800220  lwc1        $f0, 0x220($a0)
    ctx->pc = 0x3195a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3195a4:
    // 0x3195a4: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x3195a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
label_3195a8:
    // 0x3195a8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3195a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3195ac:
    // 0x3195ac: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3195acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3195b0:
    // 0x3195b0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3195b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3195b4:
    // 0x3195b4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3195b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3195b8:
    // 0x3195b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3195b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3195bc:
    // 0x3195bc: 0xc05404a  jal         func_150128
label_3195c0:
    if (ctx->pc == 0x3195C0u) {
        ctx->pc = 0x3195C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195BCu;
        // 0x3195c0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3195C4u;
        goto label_3195c4;
    }
    ctx->pc = 0x3195BCu;
    SET_GPR_U32(ctx, 31, 0x3195C4u);
    ctx->pc = 0x3195C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3195BCu;
    // 0x3195c0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x3195BCu, 0x3195C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3195C4u;
label_3195c4:
    // 0x3195c4: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x3195c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_3195c8:
    // 0x3195c8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x3195c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_3195cc:
    // 0x3195cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3195ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3195d0:
    // 0x3195d0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3195d4:
    if (ctx->pc == 0x3195D4u) {
        ctx->pc = 0x3195D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195D0u;
        // 0x3195d4: 0x8e220320  lw          $v0, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3195D8u;
        goto label_3195d8;
    }
    ctx->pc = 0x3195D0u;
    {
        const bool branch_taken_0x3195d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3195d0) {
            ctx->pc = 0x3195D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3195D0u;
            // 0x3195d4: 0x8e220320  lw          $v0, 0x320($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3195E4u;
            goto label_3195e4;
        }
    }
    ctx->pc = 0x3195D8u;
label_3195d8:
    // 0x3195d8: 0xc0527ae  jal         func_149EB8
label_3195dc:
    if (ctx->pc == 0x3195DCu) {
        ctx->pc = 0x3195DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195D8u;
        // 0x3195dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3195E0u;
        goto label_3195e0;
    }
    ctx->pc = 0x3195D8u;
    SET_GPR_U32(ctx, 31, 0x3195E0u);
    ctx->pc = 0x3195DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3195D8u;
    // 0x3195dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x3195D8u, 0x3195E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3195E0u;
label_3195e0:
    // 0x3195e0: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x3195e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_3195e4:
    // 0x3195e4: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x3195e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_3195e8:
    // 0x3195e8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x3195e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_3195ec:
    // 0x3195ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3195ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3195f0:
    // 0x3195f0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_3195f4:
    if (ctx->pc == 0x3195F4u) {
        ctx->pc = 0x3195F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195F0u;
        // 0x3195f4: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3195F8u;
        goto label_3195f8;
    }
    ctx->pc = 0x3195F0u;
    {
        const bool branch_taken_0x3195f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3195F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195F0u;
        // 0x3195f4: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3195f0) {
            ctx->pc = 0x31962Cu;
            goto label_31962c;
        }
    }
    ctx->pc = 0x3195F8u;
label_3195f8:
    // 0x3195f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3195f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3195fc:
    // 0x3195fc: 0x8c43aff0  lw          $v1, -0x5010($v0)
    ctx->pc = 0x3195fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
label_319600:
    // 0x319600: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x319600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_319604:
    // 0x319604: 0xc4600224  lwc1        $f0, 0x224($v1)
    ctx->pc = 0x319604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319608:
    // 0x319608: 0xc05404a  jal         func_150128
label_31960c:
    if (ctx->pc == 0x31960Cu) {
        ctx->pc = 0x31960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319608u;
        // 0x31960c: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x319610u;
        goto label_319610;
    }
    ctx->pc = 0x319608u;
    SET_GPR_U32(ctx, 31, 0x319610u);
    ctx->pc = 0x31960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319608u;
    // 0x31960c: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x319608u, 0x319610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319610u;
label_319610:
    // 0x319610: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x319610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_319614:
    // 0x319614: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x319614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_319618:
    // 0x319618: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x319618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_31961c:
    // 0x31961c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_319620:
    if (ctx->pc == 0x319620u) {
        ctx->pc = 0x319620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31961Cu;
        // 0x319620: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319624u;
        goto label_319624;
    }
    ctx->pc = 0x31961Cu;
    {
        const bool branch_taken_0x31961c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31961c) {
            ctx->pc = 0x319620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31961Cu;
            // 0x319620: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319630u;
            goto label_319630;
        }
    }
    ctx->pc = 0x319624u;
label_319624:
    // 0x319624: 0xc0527ae  jal         func_149EB8
label_319628:
    if (ctx->pc == 0x319628u) {
        ctx->pc = 0x319628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319624u;
        // 0x319628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31962Cu;
        goto label_31962c;
    }
    ctx->pc = 0x319624u;
    SET_GPR_U32(ctx, 31, 0x31962Cu);
    ctx->pc = 0x319628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319624u;
    // 0x319628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x319624u, 0x31962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31962Cu;
label_31962c:
    // 0x31962c: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x31962cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_319630:
    // 0x319630: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x319630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_319634:
    // 0x319634: 0x2117a  dsrl        $v0, $v0, 5
    ctx->pc = 0x319634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 5);
label_319638:
    // 0x319638: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x319638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_31963c:
    // 0x31963c: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_319640:
    if (ctx->pc == 0x319640u) {
        ctx->pc = 0x319640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31963Cu;
        // 0x319640: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319644u;
        goto label_319644;
    }
    ctx->pc = 0x31963Cu;
    {
        const bool branch_taken_0x31963c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31963Cu;
        // 0x319640: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31963c) {
            ctx->pc = 0x319834u;
            goto label_319834;
        }
    }
    ctx->pc = 0x319644u;
label_319644:
    // 0x319644: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x319644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_319648:
    // 0x319648: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x319648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_31964c:
    // 0x31964c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x31964cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_319650:
    // 0x319650: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x319650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_319654:
    // 0x319654: 0x2610d8c0  addiu       $s0, $s0, -0x2740
    ctx->pc = 0x319654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957248));
label_319658:
    // 0x319658: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x319658u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_31965c:
    // 0x31965c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x31965cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_319660:
    // 0x319660: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x319660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_319664:
    // 0x319664: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x319664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_319668:
    // 0x319668: 0x26260100  addiu       $a2, $s1, 0x100
    ctx->pc = 0x319668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_31966c:
    // 0x31966c: 0xc05420c  jal         func_150830
label_319670:
    if (ctx->pc == 0x319670u) {
        ctx->pc = 0x319670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31966Cu;
        // 0x319670: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319674u;
        goto label_319674;
    }
    ctx->pc = 0x31966Cu;
    SET_GPR_U32(ctx, 31, 0x319674u);
    ctx->pc = 0x319670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31966Cu;
    // 0x319670: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150830u, 0x31966Cu, 0x319674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319674u;
label_319674:
    // 0x319674: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x319674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_319678:
    // 0x319678: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x319678u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_31967c:
    // 0x31967c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x31967cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_319680:
    // 0x319680: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x319680u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
label_319684:
    // 0x319684: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x319684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_319688:
    // 0x319688: 0x8e06aff0  lw          $a2, -0x5010($s0)
    ctx->pc = 0x319688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946800)));
label_31968c:
    // 0x31968c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31968cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_319690:
    // 0x319690: 0xc05420c  jal         func_150830
label_319694:
    if (ctx->pc == 0x319694u) {
        ctx->pc = 0x319694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319690u;
        // 0x319694: 0x24c60220  addiu       $a2, $a2, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319698u;
        goto label_319698;
    }
    ctx->pc = 0x319690u;
    SET_GPR_U32(ctx, 31, 0x319698u);
    ctx->pc = 0x319694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319690u;
    // 0x319694: 0x24c60220  addiu       $a2, $a2, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150830u, 0x319690u, 0x319698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319698u;
label_319698:
    // 0x319698: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x319698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_31969c:
    // 0x31969c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x31969cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3196a0:
    // 0x3196a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3196a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3196a4:
    // 0x3196a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3196a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3196a8:
    // 0x3196a8: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x3196a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3196ac:
    // 0x3196ac: 0xc4420030  lwc1        $f2, 0x30($v0)
    ctx->pc = 0x3196acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3196b0:
    // 0x3196b0: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x3196b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3196b4:
    // 0x3196b4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3196b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3196b8:
    // 0x3196b8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3196b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3196bc:
    // 0x3196bc: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x3196bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3196c0:
    // 0x3196c0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x3196c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_3196c4:
    // 0x3196c4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3196c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3196c8:
    // 0x3196c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3196c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3196cc:
    // 0x3196cc: 0xe643000c  swc1        $f3, 0xC($s2)
    ctx->pc = 0x3196ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3196d0:
    // 0x3196d0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x3196d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3196d4:
    // 0x3196d4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x3196d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_3196d8:
    // 0x3196d8: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x3196d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3196dc:
    // 0x3196dc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x3196dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_3196e0:
    // 0x3196e0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x3196e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_3196e4:
    // 0x3196e4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x3196e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3196e8:
    // 0x3196e8: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x3196e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_3196ec:
    // 0x3196ec: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x3196ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3196f0:
    // 0x3196f0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x3196f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_3196f4:
    // 0x3196f4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x3196f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3196f8:
    // 0x3196f8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3196f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3196fc:
    // 0x3196fc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x3196fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_319700:
    // 0x319700: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x319700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_319704:
    // 0x319704: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x319704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_319708:
    // 0x319708: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x319708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31970c:
    // 0x31970c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x31970cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_319710:
    // 0x319710: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x319710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319714:
    // 0x319714: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x319714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_319718:
    // 0x319718: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x319718u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_31971c:
    // 0x31971c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x31971cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_319720:
    // 0x319720: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x319720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_319724:
    // 0x319724: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x319724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319728:
    // 0x319728: 0x0  nop
    ctx->pc = 0x319728u;
    // NOP
label_31972c:
    // 0x31972c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_319730:
    if (ctx->pc == 0x319730u) {
        ctx->pc = 0x319730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31972Cu;
        // 0x319730: 0x46002806  mov.s       $f0, $f5 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319734u;
        goto label_319734;
    }
    ctx->pc = 0x31972Cu;
    {
        const bool branch_taken_0x31972c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31972c) {
            ctx->pc = 0x319730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31972Cu;
            // 0x319730: 0x46002806  mov.s       $f0, $f5 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x319734u;
            goto label_319734;
        }
    }
    ctx->pc = 0x319734u;
label_319734:
    // 0x319734: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x319734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319738:
    // 0x319738: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x319738u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_31973c:
    // 0x31973c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x31973cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_319740:
    // 0x319740: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x319740u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_319744:
    // 0x319744: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x319744u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_319748:
    // 0x319748: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x319748u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_31974c:
    // 0x31974c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x31974cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_319750:
    // 0x319750: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x319750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_319754:
    // 0x319754: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x319754u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_319758:
    // 0x319758: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x319758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_31975c:
    // 0x31975c: 0x8e02aff0  lw          $v0, -0x5010($s0)
    ctx->pc = 0x31975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946800)));
label_319760:
    // 0x319760: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x319760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_319764:
    // 0x319764: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x319764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
label_319768:
    // 0x319768: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x319768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_31976c:
    // 0x31976c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x31976cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_319770:
    // 0x319770: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x319770u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_319774:
    // 0x319774: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x319774u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_319778:
    // 0x319778: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x319778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_31977c:
    // 0x31977c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x31977cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_319780:
    // 0x319780: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x319780u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_319784:
    // 0x319784: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x319784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_319788:
    // 0x319788: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x319788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31978c:
    // 0x31978c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x31978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319790:
    // 0x319790: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x319790u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_319794:
    // 0x319794: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x319794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_319798:
    // 0x319798: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x319798u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31979c:
    // 0x31979c: 0x0  nop
    ctx->pc = 0x31979cu;
    // NOP
label_3197a0:
    // 0x3197a0: 0x0  nop
    ctx->pc = 0x3197a0u;
    // NOP
label_3197a4:
    // 0x3197a4: 0x460c0004  c1          0xC0004
    ctx->pc = 0x3197a4u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
label_3197a8:
    // 0x3197a8: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x3197a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3197ac:
    // 0x3197ac: 0x0  nop
    ctx->pc = 0x3197acu;
    // NOP
label_3197b0:
    // 0x3197b0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_3197b4:
    if (ctx->pc == 0x3197B4u) {
        ctx->pc = 0x3197B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197B0u;
        // 0x3197b4: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3197B8u;
        goto label_3197b8;
    }
    ctx->pc = 0x3197B0u;
    {
        const bool branch_taken_0x3197b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3197B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197B0u;
        // 0x3197b4: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197b0) {
            ctx->pc = 0x3197C4u;
            goto label_3197c4;
        }
    }
    ctx->pc = 0x3197B8u;
label_3197b8:
    // 0x3197b8: 0xc0e8910  jal         func_3A2440
label_3197bc:
    if (ctx->pc == 0x3197BCu) {
        ctx->pc = 0x3197C0u;
        goto label_3197c0;
    }
    ctx->pc = 0x3197B8u;
    SET_GPR_U32(ctx, 31, 0x3197C0u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x3197B8u, 0x3197C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3197C0u;
label_3197c0:
    // 0x3197c0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3197c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3197c4:
    // 0x3197c4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x3197c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3197c8:
    // 0x3197c8: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x3197c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_3197cc:
    // 0x3197cc: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x3197ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3197d0:
    // 0x3197d0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x3197d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_3197d4:
    // 0x3197d4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x3197d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_3197d8:
    // 0x3197d8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x3197d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3197dc:
    // 0x3197dc: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x3197dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_3197e0:
    // 0x3197e0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x3197e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3197e4:
    // 0x3197e4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x3197e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_3197e8:
    // 0x3197e8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3197e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3197ec:
    // 0x3197ec: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x3197ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3197f0:
    // 0x3197f0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x3197f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_3197f4:
    // 0x3197f4: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x3197f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3197f8:
    // 0x3197f8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x3197f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3197fc:
    // 0x3197fc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3197fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_319800:
    // 0x319800: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x319800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_319804:
    // 0x319804: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x319804u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_319808:
    // 0x319808: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x319808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_31980c:
    // 0x31980c: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x31980cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_319810:
    // 0x319810: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x319810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_319814:
    // 0x319814: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_319818:
    if (ctx->pc == 0x319818u) {
        ctx->pc = 0x319818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319814u;
        // 0x319818: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31981Cu;
        goto label_31981c;
    }
    ctx->pc = 0x319814u;
    {
        const bool branch_taken_0x319814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x319818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319814u;
        // 0x319818: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319814) {
            ctx->pc = 0x319830u;
            goto label_319830;
        }
    }
    ctx->pc = 0x31981Cu;
label_31981c:
    // 0x31981c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x31981cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_319820:
    // 0x319820: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x319820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319824:
    // 0x319824: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x319824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_319828:
    // 0x319828: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x319828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31982c:
    // 0x31982c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x31982cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_319830:
    // 0x319830: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x319830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_319834:
    // 0x319834: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x319834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_319838:
    // 0x319838: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x319838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_31983c:
    // 0x31983c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x31983cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_319840:
    // 0x319840: 0x3e00008  jr          $ra
label_319844:
    if (ctx->pc == 0x319844u) {
        ctx->pc = 0x319844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319840u;
        // 0x319844: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319848u;
        goto label_fallthrough_0x319840;
    }
    ctx->pc = 0x319840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319840u;
        // 0x319844: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x319840:
    ctx->pc = 0x319848u;
}
