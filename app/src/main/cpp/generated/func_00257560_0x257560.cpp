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

// Function: func_00257560
// Address: 0x257560 - 0x257948
void func_00257560_0x257560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00257560_0x257560");
#endif

    switch (ctx->pc) {
        case 0x257560u: goto label_257560;
        case 0x257564u: goto label_257564;
        case 0x257568u: goto label_257568;
        case 0x25756cu: goto label_25756c;
        case 0x257570u: goto label_257570;
        case 0x257574u: goto label_257574;
        case 0x257578u: goto label_257578;
        case 0x25757cu: goto label_25757c;
        case 0x257580u: goto label_257580;
        case 0x257584u: goto label_257584;
        case 0x257588u: goto label_257588;
        case 0x25758cu: goto label_25758c;
        case 0x257590u: goto label_257590;
        case 0x257594u: goto label_257594;
        case 0x257598u: goto label_257598;
        case 0x25759cu: goto label_25759c;
        case 0x2575a0u: goto label_2575a0;
        case 0x2575a4u: goto label_2575a4;
        case 0x2575a8u: goto label_2575a8;
        case 0x2575acu: goto label_2575ac;
        case 0x2575b0u: goto label_2575b0;
        case 0x2575b4u: goto label_2575b4;
        case 0x2575b8u: goto label_2575b8;
        case 0x2575bcu: goto label_2575bc;
        case 0x2575c0u: goto label_2575c0;
        case 0x2575c4u: goto label_2575c4;
        case 0x2575c8u: goto label_2575c8;
        case 0x2575ccu: goto label_2575cc;
        case 0x2575d0u: goto label_2575d0;
        case 0x2575d4u: goto label_2575d4;
        case 0x2575d8u: goto label_2575d8;
        case 0x2575dcu: goto label_2575dc;
        case 0x2575e0u: goto label_2575e0;
        case 0x2575e4u: goto label_2575e4;
        case 0x2575e8u: goto label_2575e8;
        case 0x2575ecu: goto label_2575ec;
        case 0x2575f0u: goto label_2575f0;
        case 0x2575f4u: goto label_2575f4;
        case 0x2575f8u: goto label_2575f8;
        case 0x2575fcu: goto label_2575fc;
        case 0x257600u: goto label_257600;
        case 0x257604u: goto label_257604;
        case 0x257608u: goto label_257608;
        case 0x25760cu: goto label_25760c;
        case 0x257610u: goto label_257610;
        case 0x257614u: goto label_257614;
        case 0x257618u: goto label_257618;
        case 0x25761cu: goto label_25761c;
        case 0x257620u: goto label_257620;
        case 0x257624u: goto label_257624;
        case 0x257628u: goto label_257628;
        case 0x25762cu: goto label_25762c;
        case 0x257630u: goto label_257630;
        case 0x257634u: goto label_257634;
        case 0x257638u: goto label_257638;
        case 0x25763cu: goto label_25763c;
        case 0x257640u: goto label_257640;
        case 0x257644u: goto label_257644;
        case 0x257648u: goto label_257648;
        case 0x25764cu: goto label_25764c;
        case 0x257650u: goto label_257650;
        case 0x257654u: goto label_257654;
        case 0x257658u: goto label_257658;
        case 0x25765cu: goto label_25765c;
        case 0x257660u: goto label_257660;
        case 0x257664u: goto label_257664;
        case 0x257668u: goto label_257668;
        case 0x25766cu: goto label_25766c;
        case 0x257670u: goto label_257670;
        case 0x257674u: goto label_257674;
        case 0x257678u: goto label_257678;
        case 0x25767cu: goto label_25767c;
        case 0x257680u: goto label_257680;
        case 0x257684u: goto label_257684;
        case 0x257688u: goto label_257688;
        case 0x25768cu: goto label_25768c;
        case 0x257690u: goto label_257690;
        case 0x257694u: goto label_257694;
        case 0x257698u: goto label_257698;
        case 0x25769cu: goto label_25769c;
        case 0x2576a0u: goto label_2576a0;
        case 0x2576a4u: goto label_2576a4;
        case 0x2576a8u: goto label_2576a8;
        case 0x2576acu: goto label_2576ac;
        case 0x2576b0u: goto label_2576b0;
        case 0x2576b4u: goto label_2576b4;
        case 0x2576b8u: goto label_2576b8;
        case 0x2576bcu: goto label_2576bc;
        case 0x2576c0u: goto label_2576c0;
        case 0x2576c4u: goto label_2576c4;
        case 0x2576c8u: goto label_2576c8;
        case 0x2576ccu: goto label_2576cc;
        case 0x2576d0u: goto label_2576d0;
        case 0x2576d4u: goto label_2576d4;
        case 0x2576d8u: goto label_2576d8;
        case 0x2576dcu: goto label_2576dc;
        case 0x2576e0u: goto label_2576e0;
        case 0x2576e4u: goto label_2576e4;
        case 0x2576e8u: goto label_2576e8;
        case 0x2576ecu: goto label_2576ec;
        case 0x2576f0u: goto label_2576f0;
        case 0x2576f4u: goto label_2576f4;
        case 0x2576f8u: goto label_2576f8;
        case 0x2576fcu: goto label_2576fc;
        case 0x257700u: goto label_257700;
        case 0x257704u: goto label_257704;
        case 0x257708u: goto label_257708;
        case 0x25770cu: goto label_25770c;
        case 0x257710u: goto label_257710;
        case 0x257714u: goto label_257714;
        case 0x257718u: goto label_257718;
        case 0x25771cu: goto label_25771c;
        case 0x257720u: goto label_257720;
        case 0x257724u: goto label_257724;
        case 0x257728u: goto label_257728;
        case 0x25772cu: goto label_25772c;
        case 0x257730u: goto label_257730;
        case 0x257734u: goto label_257734;
        case 0x257738u: goto label_257738;
        case 0x25773cu: goto label_25773c;
        case 0x257740u: goto label_257740;
        case 0x257744u: goto label_257744;
        case 0x257748u: goto label_257748;
        case 0x25774cu: goto label_25774c;
        case 0x257750u: goto label_257750;
        case 0x257754u: goto label_257754;
        case 0x257758u: goto label_257758;
        case 0x25775cu: goto label_25775c;
        case 0x257760u: goto label_257760;
        case 0x257764u: goto label_257764;
        case 0x257768u: goto label_257768;
        case 0x25776cu: goto label_25776c;
        case 0x257770u: goto label_257770;
        case 0x257774u: goto label_257774;
        case 0x257778u: goto label_257778;
        case 0x25777cu: goto label_25777c;
        case 0x257780u: goto label_257780;
        case 0x257784u: goto label_257784;
        case 0x257788u: goto label_257788;
        case 0x25778cu: goto label_25778c;
        case 0x257790u: goto label_257790;
        case 0x257794u: goto label_257794;
        case 0x257798u: goto label_257798;
        case 0x25779cu: goto label_25779c;
        case 0x2577a0u: goto label_2577a0;
        case 0x2577a4u: goto label_2577a4;
        case 0x2577a8u: goto label_2577a8;
        case 0x2577acu: goto label_2577ac;
        case 0x2577b0u: goto label_2577b0;
        case 0x2577b4u: goto label_2577b4;
        case 0x2577b8u: goto label_2577b8;
        case 0x2577bcu: goto label_2577bc;
        case 0x2577c0u: goto label_2577c0;
        case 0x2577c4u: goto label_2577c4;
        case 0x2577c8u: goto label_2577c8;
        case 0x2577ccu: goto label_2577cc;
        case 0x2577d0u: goto label_2577d0;
        case 0x2577d4u: goto label_2577d4;
        case 0x2577d8u: goto label_2577d8;
        case 0x2577dcu: goto label_2577dc;
        case 0x2577e0u: goto label_2577e0;
        case 0x2577e4u: goto label_2577e4;
        case 0x2577e8u: goto label_2577e8;
        case 0x2577ecu: goto label_2577ec;
        case 0x2577f0u: goto label_2577f0;
        case 0x2577f4u: goto label_2577f4;
        case 0x2577f8u: goto label_2577f8;
        case 0x2577fcu: goto label_2577fc;
        case 0x257800u: goto label_257800;
        case 0x257804u: goto label_257804;
        case 0x257808u: goto label_257808;
        case 0x25780cu: goto label_25780c;
        case 0x257810u: goto label_257810;
        case 0x257814u: goto label_257814;
        case 0x257818u: goto label_257818;
        case 0x25781cu: goto label_25781c;
        case 0x257820u: goto label_257820;
        case 0x257824u: goto label_257824;
        case 0x257828u: goto label_257828;
        case 0x25782cu: goto label_25782c;
        case 0x257830u: goto label_257830;
        case 0x257834u: goto label_257834;
        case 0x257838u: goto label_257838;
        case 0x25783cu: goto label_25783c;
        case 0x257840u: goto label_257840;
        case 0x257844u: goto label_257844;
        case 0x257848u: goto label_257848;
        case 0x25784cu: goto label_25784c;
        case 0x257850u: goto label_257850;
        case 0x257854u: goto label_257854;
        case 0x257858u: goto label_257858;
        case 0x25785cu: goto label_25785c;
        case 0x257860u: goto label_257860;
        case 0x257864u: goto label_257864;
        case 0x257868u: goto label_257868;
        case 0x25786cu: goto label_25786c;
        case 0x257870u: goto label_257870;
        case 0x257874u: goto label_257874;
        case 0x257878u: goto label_257878;
        case 0x25787cu: goto label_25787c;
        case 0x257880u: goto label_257880;
        case 0x257884u: goto label_257884;
        case 0x257888u: goto label_257888;
        case 0x25788cu: goto label_25788c;
        case 0x257890u: goto label_257890;
        case 0x257894u: goto label_257894;
        case 0x257898u: goto label_257898;
        case 0x25789cu: goto label_25789c;
        case 0x2578a0u: goto label_2578a0;
        case 0x2578a4u: goto label_2578a4;
        case 0x2578a8u: goto label_2578a8;
        case 0x2578acu: goto label_2578ac;
        case 0x2578b0u: goto label_2578b0;
        case 0x2578b4u: goto label_2578b4;
        case 0x2578b8u: goto label_2578b8;
        case 0x2578bcu: goto label_2578bc;
        case 0x2578c0u: goto label_2578c0;
        case 0x2578c4u: goto label_2578c4;
        case 0x2578c8u: goto label_2578c8;
        case 0x2578ccu: goto label_2578cc;
        case 0x2578d0u: goto label_2578d0;
        case 0x2578d4u: goto label_2578d4;
        case 0x2578d8u: goto label_2578d8;
        case 0x2578dcu: goto label_2578dc;
        case 0x2578e0u: goto label_2578e0;
        case 0x2578e4u: goto label_2578e4;
        case 0x2578e8u: goto label_2578e8;
        case 0x2578ecu: goto label_2578ec;
        case 0x2578f0u: goto label_2578f0;
        case 0x2578f4u: goto label_2578f4;
        case 0x2578f8u: goto label_2578f8;
        case 0x2578fcu: goto label_2578fc;
        case 0x257900u: goto label_257900;
        case 0x257904u: goto label_257904;
        case 0x257908u: goto label_257908;
        case 0x25790cu: goto label_25790c;
        case 0x257910u: goto label_257910;
        case 0x257914u: goto label_257914;
        case 0x257918u: goto label_257918;
        case 0x25791cu: goto label_25791c;
        case 0x257920u: goto label_257920;
        case 0x257924u: goto label_257924;
        case 0x257928u: goto label_257928;
        case 0x25792cu: goto label_25792c;
        case 0x257930u: goto label_257930;
        case 0x257934u: goto label_257934;
        case 0x257938u: goto label_257938;
        case 0x25793cu: goto label_25793c;
        case 0x257940u: goto label_257940;
        case 0x257944u: goto label_257944;
        default: break;
    }

    ctx->pc = 0x257560u;

label_257560:
    // 0x257560: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x257560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_257564:
    // 0x257564: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x257564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_257568:
    // 0x257568: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x257568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_25756c:
    // 0x25756c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25756cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_257570:
    // 0x257570: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x257570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_257574:
    // 0x257574: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x257574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_257578:
    // 0x257578: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x257578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_25757c:
    // 0x25757c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25757cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_257580:
    // 0x257580: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x257580u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_257584:
    // 0x257584: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x257584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_257588:
    // 0x257588: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x257588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_25758c:
    // 0x25758c: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x25758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_257590:
    // 0x257590: 0x40f809  jalr        $v0
label_257594:
    if (ctx->pc == 0x257594u) {
        ctx->pc = 0x257594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257590u;
        // 0x257594: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257598u;
        goto label_257598;
    }
    ctx->pc = 0x257590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x257598u);
        ctx->pc = 0x257594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257590u;
        // 0x257594: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257590u, 0x257598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x257598u;
label_257598:
    // 0x257598: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x257598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_25759c:
    // 0x25759c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25759cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2575a0:
    // 0x2575a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2575a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2575a4:
    // 0x2575a4: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x2575a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_2575a8:
    // 0x2575a8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2575ac:
    if (ctx->pc == 0x2575ACu) {
        ctx->pc = 0x2575ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575A8u;
        // 0x2575ac: 0xe640054c  swc1        $f0, 0x54C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2575B0u;
        goto label_2575b0;
    }
    ctx->pc = 0x2575A8u;
    {
        const bool branch_taken_0x2575a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2575ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575A8u;
        // 0x2575ac: 0xe640054c  swc1        $f0, 0x54C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2575a8) {
            ctx->pc = 0x2575C4u;
            goto label_2575c4;
        }
    }
    ctx->pc = 0x2575B0u;
label_2575b0:
    // 0x2575b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2575b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2575b4:
    // 0x2575b4: 0x106200b0  beq         $v1, $v0, . + 4 + (0xB0 << 2)
label_2575b8:
    if (ctx->pc == 0x2575B8u) {
        ctx->pc = 0x2575B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575B4u;
        // 0x2575b8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2575BCu;
        goto label_2575bc;
    }
    ctx->pc = 0x2575B4u;
    {
        const bool branch_taken_0x2575b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2575B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575B4u;
        // 0x2575b8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2575b4) {
            ctx->pc = 0x257878u;
            goto label_257878;
        }
    }
    ctx->pc = 0x2575BCu;
label_2575bc:
    // 0x2575bc: 0x100000db  b           . + 4 + (0xDB << 2)
label_2575c0:
    if (ctx->pc == 0x2575C0u) {
        ctx->pc = 0x2575C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575BCu;
        // 0x2575c0: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2575C4u;
        goto label_2575c4;
    }
    ctx->pc = 0x2575BCu;
    {
        const bool branch_taken_0x2575bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2575C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575BCu;
        // 0x2575c0: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2575bc) {
            ctx->pc = 0x25792Cu;
            goto label_25792c;
        }
    }
    ctx->pc = 0x2575C4u;
label_2575c4:
    // 0x2575c4: 0xc09ac7a  jal         func_26B1E8
label_2575c8:
    if (ctx->pc == 0x2575C8u) {
        ctx->pc = 0x2575C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575C4u;
        // 0x2575c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2575CCu;
        goto label_2575cc;
    }
    ctx->pc = 0x2575C4u;
    SET_GPR_U32(ctx, 31, 0x2575CCu);
    ctx->pc = 0x2575C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2575C4u;
    // 0x2575c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x2575C4u, 0x2575CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2575CCu;
label_2575cc:
    // 0x2575cc: 0xc09d91a  jal         func_276468
label_2575d0:
    if (ctx->pc == 0x2575D0u) {
        ctx->pc = 0x2575D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575CCu;
        // 0x2575d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2575D4u;
        goto label_2575d4;
    }
    ctx->pc = 0x2575CCu;
    SET_GPR_U32(ctx, 31, 0x2575D4u);
    ctx->pc = 0x2575D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2575CCu;
    // 0x2575d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2575CCu, 0x2575D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2575D4u;
label_2575d4:
    // 0x2575d4: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x2575d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2575d8:
    // 0x2575d8: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x2575d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_2575dc:
    // 0x2575dc: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x2575dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
label_2575e0:
    // 0x2575e0: 0x2c830075  sltiu       $v1, $a0, 0x75
    ctx->pc = 0x2575e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
label_2575e4:
    // 0x2575e4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2575e8:
    if (ctx->pc == 0x2575E8u) {
        ctx->pc = 0x2575E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575E4u;
        // 0x2575e8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2575ECu;
        goto label_2575ec;
    }
    ctx->pc = 0x2575E4u;
    {
        const bool branch_taken_0x2575e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2575E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575E4u;
        // 0x2575e8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2575e4) {
            ctx->pc = 0x257604u;
            goto label_257604;
        }
    }
    ctx->pc = 0x2575ECu;
label_2575ec:
    // 0x2575ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2575ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2575f0:
    // 0x2575f0: 0x24422250  addiu       $v0, $v0, 0x2250
    ctx->pc = 0x2575f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8784));
label_2575f4:
    // 0x2575f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2575f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2575f8:
    // 0x2575f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2575f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2575fc:
    // 0x2575fc: 0x800008  jr          $a0
label_257600:
    if (ctx->pc == 0x257600u) {
        ctx->pc = 0x257604u;
        goto label_257604;
    }
    ctx->pc = 0x2575FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x257604u: goto label_257604;
            case 0x257630u: goto label_257630;
            case 0x25765Cu: goto label_25765c;
            case 0x257688u: goto label_257688;
            case 0x2576B8u: goto label_2576b8;
            case 0x2576C8u: goto label_2576c8;
            case 0x2576F4u: goto label_2576f4;
            case 0x257720u: goto label_257720;
            case 0x25774Cu: goto label_25774c;
            case 0x25775Cu: goto label_25775c;
            case 0x25776Cu: goto label_25776c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2575FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x257604u;
label_257604:
    // 0x257604: 0xc0c73f8  jal         func_31CFE0
label_257608:
    if (ctx->pc == 0x257608u) {
        ctx->pc = 0x25760Cu;
        goto label_25760c;
    }
    ctx->pc = 0x257604u;
    SET_GPR_U32(ctx, 31, 0x25760Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x257604u, 0x25760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25760Cu;
label_25760c:
    // 0x25760c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25760cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_257610:
    // 0x257610: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_257614:
    if (ctx->pc == 0x257614u) {
        ctx->pc = 0x257614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257610u;
        // 0x257614: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257618u;
        goto label_257618;
    }
    ctx->pc = 0x257610u;
    {
        const bool branch_taken_0x257610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257610u;
        // 0x257614: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257610) {
            ctx->pc = 0x257624u;
            goto label_257624;
        }
    }
    ctx->pc = 0x257618u;
label_257618:
    // 0x257618: 0x8c430340  lw          $v1, 0x340($v0)
    ctx->pc = 0x257618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 832)));
label_25761c:
    // 0x25761c: 0x1000005d  b           . + 4 + (0x5D << 2)
label_257620:
    if (ctx->pc == 0x257620u) {
        ctx->pc = 0x257620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25761Cu;
        // 0x257620: 0x8c440344  lw          $a0, 0x344($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 836)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257624u;
        goto label_257624;
    }
    ctx->pc = 0x25761Cu;
    {
        const bool branch_taken_0x25761c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25761Cu;
        // 0x257620: 0x8c440344  lw          $a0, 0x344($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25761c) {
            ctx->pc = 0x257794u;
            goto label_257794;
        }
    }
    ctx->pc = 0x257624u;
label_257624:
    // 0x257624: 0x8c430338  lw          $v1, 0x338($v0)
    ctx->pc = 0x257624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
label_257628:
    // 0x257628: 0x1000005a  b           . + 4 + (0x5A << 2)
label_25762c:
    if (ctx->pc == 0x25762Cu) {
        ctx->pc = 0x25762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257628u;
        // 0x25762c: 0x8c44033c  lw          $a0, 0x33C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257630u;
        goto label_257630;
    }
    ctx->pc = 0x257628u;
    {
        const bool branch_taken_0x257628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257628u;
        // 0x25762c: 0x8c44033c  lw          $a0, 0x33C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257628) {
            ctx->pc = 0x257794u;
            goto label_257794;
        }
    }
    ctx->pc = 0x257630u;
label_257630:
    // 0x257630: 0xc0c73f8  jal         func_31CFE0
label_257634:
    if (ctx->pc == 0x257634u) {
        ctx->pc = 0x257638u;
        goto label_257638;
    }
    ctx->pc = 0x257630u;
    SET_GPR_U32(ctx, 31, 0x257638u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x257630u, 0x257638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257638u;
label_257638:
    // 0x257638: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x257638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25763c:
    // 0x25763c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_257640:
    if (ctx->pc == 0x257640u) {
        ctx->pc = 0x257640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25763Cu;
        // 0x257640: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257644u;
        goto label_257644;
    }
    ctx->pc = 0x25763Cu;
    {
        const bool branch_taken_0x25763c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25763Cu;
        // 0x257640: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25763c) {
            ctx->pc = 0x257650u;
            goto label_257650;
        }
    }
    ctx->pc = 0x257644u;
label_257644:
    // 0x257644: 0x8c430acc  lw          $v1, 0xACC($v0)
    ctx->pc = 0x257644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2764)));
label_257648:
    // 0x257648: 0x10000052  b           . + 4 + (0x52 << 2)
label_25764c:
    if (ctx->pc == 0x25764Cu) {
        ctx->pc = 0x25764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257648u;
        // 0x25764c: 0x8c440ad0  lw          $a0, 0xAD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257650u;
        goto label_257650;
    }
    ctx->pc = 0x257648u;
    {
        const bool branch_taken_0x257648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257648u;
        // 0x25764c: 0x8c440ad0  lw          $a0, 0xAD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257648) {
            ctx->pc = 0x257794u;
            goto label_257794;
        }
    }
    ctx->pc = 0x257650u;
label_257650:
    // 0x257650: 0x8c430ad4  lw          $v1, 0xAD4($v0)
    ctx->pc = 0x257650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2772)));
label_257654:
    // 0x257654: 0x1000004f  b           . + 4 + (0x4F << 2)
label_257658:
    if (ctx->pc == 0x257658u) {
        ctx->pc = 0x257658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257654u;
        // 0x257658: 0x8c440ad8  lw          $a0, 0xAD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25765Cu;
        goto label_25765c;
    }
    ctx->pc = 0x257654u;
    {
        const bool branch_taken_0x257654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257654u;
        // 0x257658: 0x8c440ad8  lw          $a0, 0xAD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257654) {
            ctx->pc = 0x257794u;
            goto label_257794;
        }
    }
    ctx->pc = 0x25765Cu;
label_25765c:
    // 0x25765c: 0xc0c73f8  jal         func_31CFE0
label_257660:
    if (ctx->pc == 0x257660u) {
        ctx->pc = 0x257664u;
        goto label_257664;
    }
    ctx->pc = 0x25765Cu;
    SET_GPR_U32(ctx, 31, 0x257664u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25765Cu, 0x257664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257664u;
label_257664:
    // 0x257664: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x257664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_257668:
    // 0x257668: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25766c:
    if (ctx->pc == 0x25766Cu) {
        ctx->pc = 0x25766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257668u;
        // 0x25766c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257670u;
        goto label_257670;
    }
    ctx->pc = 0x257668u;
    {
        const bool branch_taken_0x257668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257668u;
        // 0x25766c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257668) {
            ctx->pc = 0x25767Cu;
            goto label_25767c;
        }
    }
    ctx->pc = 0x257670u;
label_257670:
    // 0x257670: 0x8c4331a4  lw          $v1, 0x31A4($v0)
    ctx->pc = 0x257670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12708)));
label_257674:
    // 0x257674: 0x10000047  b           . + 4 + (0x47 << 2)
label_257678:
    if (ctx->pc == 0x257678u) {
        ctx->pc = 0x257678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257674u;
        // 0x257678: 0x8c4431a8  lw          $a0, 0x31A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12712)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25767Cu;
        goto label_25767c;
    }
    ctx->pc = 0x257674u;
    {
        const bool branch_taken_0x257674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257674u;
        // 0x257678: 0x8c4431a8  lw          $a0, 0x31A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257674) {
            ctx->pc = 0x257794u;
            goto label_257794;
        }
    }
    ctx->pc = 0x25767Cu;
label_25767c:
    // 0x25767c: 0x8c4331a4  lw          $v1, 0x31A4($v0)
    ctx->pc = 0x25767cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12708)));
label_257680:
    // 0x257680: 0x10000044  b           . + 4 + (0x44 << 2)
label_257684:
    if (ctx->pc == 0x257684u) {
        ctx->pc = 0x257684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257680u;
        // 0x257684: 0x8c4431a8  lw          $a0, 0x31A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12712)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257688u;
        goto label_257688;
    }
    ctx->pc = 0x257680u;
    {
        const bool branch_taken_0x257680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257680u;
        // 0x257684: 0x8c4431a8  lw          $a0, 0x31A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257680) {
            ctx->pc = 0x257794u;
            goto label_257794;
        }
    }
    ctx->pc = 0x257688u;
label_257688:
    // 0x257688: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x257688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_25768c:
    // 0x25768c: 0x8e470740  lw          $a3, 0x740($s2)
    ctx->pc = 0x25768cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1856)));
label_257690:
    // 0x257690: 0x8c4333b0  lw          $v1, 0x33B0($v0)
    ctx->pc = 0x257690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13232)));
label_257694:
    // 0x257694: 0x8c4433b4  lw          $a0, 0x33B4($v0)
    ctx->pc = 0x257694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13236)));
label_257698:
    // 0x257698: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x257698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25769c:
    // 0x25769c: 0x10e0003f  beqz        $a3, . + 4 + (0x3F << 2)
label_2576a0:
    if (ctx->pc == 0x2576A0u) {
        ctx->pc = 0x2576A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25769Cu;
        // 0x2576a0: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2576A4u;
        goto label_2576a4;
    }
    ctx->pc = 0x25769Cu;
    {
        const bool branch_taken_0x25769c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2576A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25769Cu;
        // 0x2576a0: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25769c) {
            ctx->pc = 0x25779Cu;
            goto label_25779c;
        }
    }
    ctx->pc = 0x2576A4u;
label_2576a4:
    // 0x2576a4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2576a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2576a8:
    // 0x2576a8: 0xc09f734  jal         func_27DCD0
label_2576ac:
    if (ctx->pc == 0x2576ACu) {
        ctx->pc = 0x2576ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576A8u;
        // 0x2576ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2576B0u;
        goto label_2576b0;
    }
    ctx->pc = 0x2576A8u;
    SET_GPR_U32(ctx, 31, 0x2576B0u);
    ctx->pc = 0x2576ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2576A8u;
    // 0x2576ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCD0u, 0x2576A8u, 0x2576B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2576B0u;
label_2576b0:
    // 0x2576b0: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2576b4:
    if (ctx->pc == 0x2576B4u) {
        ctx->pc = 0x2576B8u;
        goto label_2576b8;
    }
    ctx->pc = 0x2576B0u;
    {
        const bool branch_taken_0x2576b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2576b0) {
            ctx->pc = 0x25779Cu;
            goto label_25779c;
        }
    }
    ctx->pc = 0x2576B8u;
label_2576b8:
    // 0x2576b8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2576b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2576bc:
    // 0x2576bc: 0x8c433988  lw          $v1, 0x3988($v0)
    ctx->pc = 0x2576bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14728)));
label_2576c0:
    // 0x2576c0: 0x10000034  b           . + 4 + (0x34 << 2)
label_2576c4:
    if (ctx->pc == 0x2576C4u) {
        ctx->pc = 0x2576C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576C0u;
        // 0x2576c4: 0x8c44398c  lw          $a0, 0x398C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14732)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2576C8u;
        goto label_2576c8;
    }
    ctx->pc = 0x2576C0u;
    {
        const bool branch_taken_0x2576c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2576C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576C0u;
        // 0x2576c4: 0x8c44398c  lw          $a0, 0x398C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2576c0) {
            ctx->pc = 0x257794u;
            goto label_257794;
        }
    }
    ctx->pc = 0x2576C8u;
label_2576c8:
    // 0x2576c8: 0xc0c73f8  jal         func_31CFE0
label_2576cc:
    if (ctx->pc == 0x2576CCu) {
        ctx->pc = 0x2576D0u;
        goto label_2576d0;
    }
    ctx->pc = 0x2576C8u;
    SET_GPR_U32(ctx, 31, 0x2576D0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2576C8u, 0x2576D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2576D0u;
label_2576d0:
    // 0x2576d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2576d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2576d4:
    // 0x2576d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2576d8:
    if (ctx->pc == 0x2576D8u) {
        ctx->pc = 0x2576D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576D4u;
        // 0x2576d8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2576DCu;
        goto label_2576dc;
    }
    ctx->pc = 0x2576D4u;
    {
        const bool branch_taken_0x2576d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2576D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576D4u;
        // 0x2576d8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2576d4) {
            ctx->pc = 0x2576E8u;
            goto label_2576e8;
        }
    }
    ctx->pc = 0x2576DCu;
label_2576dc:
    // 0x2576dc: 0x8c431768  lw          $v1, 0x1768($v0)
    ctx->pc = 0x2576dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5992)));
label_2576e0:
    // 0x2576e0: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2576e4:
    if (ctx->pc == 0x2576E4u) {
        ctx->pc = 0x2576E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576E0u;
        // 0x2576e4: 0x8c44176c  lw          $a0, 0x176C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5996)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2576E8u;
        goto label_2576e8;
    }
    ctx->pc = 0x2576E0u;
    {
        const bool branch_taken_0x2576e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2576E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576E0u;
        // 0x2576e4: 0x8c44176c  lw          $a0, 0x176C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2576e0) {
            ctx->pc = 0x257794u;
            goto label_257794;
        }
    }
    ctx->pc = 0x2576E8u;
label_2576e8:
    // 0x2576e8: 0x8c431760  lw          $v1, 0x1760($v0)
    ctx->pc = 0x2576e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5984)));
label_2576ec:
    // 0x2576ec: 0x10000029  b           . + 4 + (0x29 << 2)
label_2576f0:
    if (ctx->pc == 0x2576F0u) {
        ctx->pc = 0x2576F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576ECu;
        // 0x2576f0: 0x8c441764  lw          $a0, 0x1764($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5988)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2576F4u;
        goto label_2576f4;
    }
    ctx->pc = 0x2576ECu;
    {
        const bool branch_taken_0x2576ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2576F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576ECu;
        // 0x2576f0: 0x8c441764  lw          $a0, 0x1764($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2576ec) {
            ctx->pc = 0x257794u;
            goto label_257794;
        }
    }
    ctx->pc = 0x2576F4u;
label_2576f4:
    // 0x2576f4: 0xc0c73f8  jal         func_31CFE0
label_2576f8:
    if (ctx->pc == 0x2576F8u) {
        ctx->pc = 0x2576FCu;
        goto label_2576fc;
    }
    ctx->pc = 0x2576F4u;
    SET_GPR_U32(ctx, 31, 0x2576FCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2576F4u, 0x2576FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2576FCu;
label_2576fc:
    // 0x2576fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2576fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_257700:
    // 0x257700: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_257704:
    if (ctx->pc == 0x257704u) {
        ctx->pc = 0x257704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257700u;
        // 0x257704: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257708u;
        goto label_257708;
    }
    ctx->pc = 0x257700u;
    {
        const bool branch_taken_0x257700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257700u;
        // 0x257704: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257700) {
            ctx->pc = 0x257714u;
            goto label_257714;
        }
    }
    ctx->pc = 0x257708u;
label_257708:
    // 0x257708: 0x8c431768  lw          $v1, 0x1768($v0)
    ctx->pc = 0x257708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5992)));
label_25770c:
    // 0x25770c: 0x10000021  b           . + 4 + (0x21 << 2)
label_257710:
    if (ctx->pc == 0x257710u) {
        ctx->pc = 0x257710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25770Cu;
        // 0x257710: 0x8c44176c  lw          $a0, 0x176C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5996)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257714u;
        goto label_257714;
    }
    ctx->pc = 0x25770Cu;
    {
        const bool branch_taken_0x25770c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25770Cu;
        // 0x257710: 0x8c44176c  lw          $a0, 0x176C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25770c) {
            ctx->pc = 0x257794u;
            goto label_257794;
        }
    }
    ctx->pc = 0x257714u;
label_257714:
    // 0x257714: 0x8c431760  lw          $v1, 0x1760($v0)
    ctx->pc = 0x257714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5984)));
label_257718:
    // 0x257718: 0x1000001e  b           . + 4 + (0x1E << 2)
label_25771c:
    if (ctx->pc == 0x25771Cu) {
        ctx->pc = 0x25771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257718u;
        // 0x25771c: 0x8c441764  lw          $a0, 0x1764($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5988)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257720u;
        goto label_257720;
    }
    ctx->pc = 0x257718u;
    {
        const bool branch_taken_0x257718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257718u;
        // 0x25771c: 0x8c441764  lw          $a0, 0x1764($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257718) {
            ctx->pc = 0x257794u;
            goto label_257794;
        }
    }
    ctx->pc = 0x257720u;
label_257720:
    // 0x257720: 0xc0c73f8  jal         func_31CFE0
label_257724:
    if (ctx->pc == 0x257724u) {
        ctx->pc = 0x257728u;
        goto label_257728;
    }
    ctx->pc = 0x257720u;
    SET_GPR_U32(ctx, 31, 0x257728u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x257720u, 0x257728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257728u;
label_257728:
    // 0x257728: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x257728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25772c:
    // 0x25772c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_257730:
    if (ctx->pc == 0x257730u) {
        ctx->pc = 0x257730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25772Cu;
        // 0x257730: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257734u;
        goto label_257734;
    }
    ctx->pc = 0x25772Cu;
    {
        const bool branch_taken_0x25772c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25772Cu;
        // 0x257730: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25772c) {
            ctx->pc = 0x257740u;
            goto label_257740;
        }
    }
    ctx->pc = 0x257734u;
label_257734:
    // 0x257734: 0x8c430f0c  lw          $v1, 0xF0C($v0)
    ctx->pc = 0x257734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3852)));
label_257738:
    // 0x257738: 0x10000016  b           . + 4 + (0x16 << 2)
label_25773c:
    if (ctx->pc == 0x25773Cu) {
        ctx->pc = 0x25773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257738u;
        // 0x25773c: 0x8c440f10  lw          $a0, 0xF10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257740u;
        goto label_257740;
    }
    ctx->pc = 0x257738u;
    {
        const bool branch_taken_0x257738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257738u;
        // 0x25773c: 0x8c440f10  lw          $a0, 0xF10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257738) {
            ctx->pc = 0x257794u;
            goto label_257794;
        }
    }
    ctx->pc = 0x257740u;
label_257740:
    // 0x257740: 0x8c430f14  lw          $v1, 0xF14($v0)
    ctx->pc = 0x257740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3860)));
label_257744:
    // 0x257744: 0x10000013  b           . + 4 + (0x13 << 2)
label_257748:
    if (ctx->pc == 0x257748u) {
        ctx->pc = 0x257748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257744u;
        // 0x257748: 0x8c440f18  lw          $a0, 0xF18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25774Cu;
        goto label_25774c;
    }
    ctx->pc = 0x257744u;
    {
        const bool branch_taken_0x257744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257744u;
        // 0x257748: 0x8c440f18  lw          $a0, 0xF18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257744) {
            ctx->pc = 0x257794u;
            goto label_257794;
        }
    }
    ctx->pc = 0x25774Cu;
label_25774c:
    // 0x25774c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25774cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_257750:
    // 0x257750: 0x8c431d08  lw          $v1, 0x1D08($v0)
    ctx->pc = 0x257750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_257754:
    // 0x257754: 0x1000000f  b           . + 4 + (0xF << 2)
label_257758:
    if (ctx->pc == 0x257758u) {
        ctx->pc = 0x257758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257754u;
        // 0x257758: 0x8c441d0c  lw          $a0, 0x1D0C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25775Cu;
        goto label_25775c;
    }
    ctx->pc = 0x257754u;
    {
        const bool branch_taken_0x257754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257754u;
        // 0x257758: 0x8c441d0c  lw          $a0, 0x1D0C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257754) {
            ctx->pc = 0x257794u;
            goto label_257794;
        }
    }
    ctx->pc = 0x25775Cu;
label_25775c:
    // 0x25775c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_257760:
    // 0x257760: 0x8c432e4c  lw          $v1, 0x2E4C($v0)
    ctx->pc = 0x257760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11852)));
label_257764:
    // 0x257764: 0x1000000b  b           . + 4 + (0xB << 2)
label_257768:
    if (ctx->pc == 0x257768u) {
        ctx->pc = 0x257768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257764u;
        // 0x257768: 0x8c442e50  lw          $a0, 0x2E50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25776Cu;
        goto label_25776c;
    }
    ctx->pc = 0x257764u;
    {
        const bool branch_taken_0x257764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257764u;
        // 0x257768: 0x8c442e50  lw          $a0, 0x2E50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257764) {
            ctx->pc = 0x257794u;
            goto label_257794;
        }
    }
    ctx->pc = 0x25776Cu;
label_25776c:
    // 0x25776c: 0xc0c73f8  jal         func_31CFE0
label_257770:
    if (ctx->pc == 0x257770u) {
        ctx->pc = 0x257774u;
        goto label_257774;
    }
    ctx->pc = 0x25776Cu;
    SET_GPR_U32(ctx, 31, 0x257774u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25776Cu, 0x257774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257774u;
label_257774:
    // 0x257774: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x257774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_257778:
    // 0x257778: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25777c:
    if (ctx->pc == 0x25777Cu) {
        ctx->pc = 0x25777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257778u;
        // 0x25777c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257780u;
        goto label_257780;
    }
    ctx->pc = 0x257778u;
    {
        const bool branch_taken_0x257778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257778u;
        // 0x25777c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257778) {
            ctx->pc = 0x25778Cu;
            goto label_25778c;
        }
    }
    ctx->pc = 0x257780u;
label_257780:
    // 0x257780: 0x8c431340  lw          $v1, 0x1340($v0)
    ctx->pc = 0x257780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4928)));
label_257784:
    // 0x257784: 0x10000003  b           . + 4 + (0x3 << 2)
label_257788:
    if (ctx->pc == 0x257788u) {
        ctx->pc = 0x257788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257784u;
        // 0x257788: 0x8c441344  lw          $a0, 0x1344($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4932)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25778Cu;
        goto label_25778c;
    }
    ctx->pc = 0x257784u;
    {
        const bool branch_taken_0x257784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257784u;
        // 0x257788: 0x8c441344  lw          $a0, 0x1344($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257784) {
            ctx->pc = 0x257794u;
            goto label_257794;
        }
    }
    ctx->pc = 0x25778Cu;
label_25778c:
    // 0x25778c: 0x8c431338  lw          $v1, 0x1338($v0)
    ctx->pc = 0x25778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
label_257790:
    // 0x257790: 0x8c44133c  lw          $a0, 0x133C($v0)
    ctx->pc = 0x257790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4924)));
label_257794:
    // 0x257794: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x257794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_257798:
    // 0x257798: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x257798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25779c:
    // 0x25779c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25779cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2577a0:
    // 0x2577a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2577a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2577a4:
    // 0x2577a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2577a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2577a8:
    // 0x2577a8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2577a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2577ac:
    // 0x2577ac: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2577acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2577b0:
    // 0x2577b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2577b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2577b4:
    // 0x2577b4: 0xc0aa15e  jal         func_2A8578
label_2577b8:
    if (ctx->pc == 0x2577B8u) {
        ctx->pc = 0x2577B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2577B4u;
        // 0x2577b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2577BCu;
        goto label_2577bc;
    }
    ctx->pc = 0x2577B4u;
    SET_GPR_U32(ctx, 31, 0x2577BCu);
    ctx->pc = 0x2577B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2577B4u;
    // 0x2577b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2577B4u, 0x2577BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2577BCu;
label_2577bc:
    // 0x2577bc: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2577bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_2577c0:
    // 0x2577c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2577c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2577c4:
    // 0x2577c4: 0xc05657c  jal         func_1595F0
label_2577c8:
    if (ctx->pc == 0x2577C8u) {
        ctx->pc = 0x2577C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2577C4u;
        // 0x2577c8: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2577CCu;
        goto label_2577cc;
    }
    ctx->pc = 0x2577C4u;
    SET_GPR_U32(ctx, 31, 0x2577CCu);
    ctx->pc = 0x2577C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2577C4u;
    // 0x2577c8: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2577C4u, 0x2577CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2577CCu;
label_2577cc:
    // 0x2577cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2577ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2577d0:
    // 0x2577d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2577d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2577d4:
    // 0x2577d4: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2577d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_2577d8:
    // 0x2577d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2577d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2577dc:
    // 0x2577dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2577dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2577e0:
    // 0x2577e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2577e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2577e4:
    // 0x2577e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2577e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2577e8:
    // 0x2577e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2577e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2577ec:
    // 0x2577ec: 0xc0b2e92  jal         func_2CBA48
label_2577f0:
    if (ctx->pc == 0x2577F0u) {
        ctx->pc = 0x2577F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2577ECu;
        // 0x2577f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2577F4u;
        goto label_2577f4;
    }
    ctx->pc = 0x2577ECu;
    SET_GPR_U32(ctx, 31, 0x2577F4u);
    ctx->pc = 0x2577F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2577ECu;
    // 0x2577f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2577ECu, 0x2577F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2577F4u;
label_2577f4:
    // 0x2577f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2577f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2577f8:
    // 0x2577f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2577f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2577fc:
    // 0x2577fc: 0x24060112  addiu       $a2, $zero, 0x112
    ctx->pc = 0x2577fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
label_257800:
    // 0x257800: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x257800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_257804:
    // 0x257804: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x257804u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257808:
    // 0x257808: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x257808u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25780c:
    // 0x25780c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25780cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257810:
    // 0x257810: 0xc0b2e92  jal         func_2CBA48
label_257814:
    if (ctx->pc == 0x257814u) {
        ctx->pc = 0x257814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257810u;
        // 0x257814: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257818u;
        goto label_257818;
    }
    ctx->pc = 0x257810u;
    SET_GPR_U32(ctx, 31, 0x257818u);
    ctx->pc = 0x257814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257810u;
    // 0x257814: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x257810u, 0x257818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257818u;
label_257818:
    // 0x257818: 0x924317c1  lbu         $v1, 0x17C1($s2)
    ctx->pc = 0x257818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6081)));
label_25781c:
    // 0x25781c: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_257820:
    if (ctx->pc == 0x257820u) {
        ctx->pc = 0x257820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25781Cu;
        // 0x257820: 0x8642054a  lh          $v0, 0x54A($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257824u;
        goto label_257824;
    }
    ctx->pc = 0x25781Cu;
    {
        const bool branch_taken_0x25781c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25781c) {
            ctx->pc = 0x257820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25781Cu;
            // 0x257820: 0x8642054a  lh          $v0, 0x54A($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257844u;
            goto label_257844;
        }
    }
    ctx->pc = 0x257824u;
label_257824:
    // 0x257824: 0x86420548  lh          $v0, 0x548($s2)
    ctx->pc = 0x257824u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1352)));
label_257828:
    // 0x257828: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x257828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_25782c:
    // 0x25782c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_257830:
    if (ctx->pc == 0x257830u) {
        ctx->pc = 0x257830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25782Cu;
        // 0x257830: 0x96440548  lhu         $a0, 0x548($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257834u;
        goto label_257834;
    }
    ctx->pc = 0x25782Cu;
    {
        const bool branch_taken_0x25782c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25782Cu;
        // 0x257830: 0x96440548  lhu         $a0, 0x548($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25782c) {
            ctx->pc = 0x25783Cu;
            goto label_25783c;
        }
    }
    ctx->pc = 0x257834u;
label_257834:
    // 0x257834: 0x10000002  b           . + 4 + (0x2 << 2)
label_257838:
    if (ctx->pc == 0x257838u) {
        ctx->pc = 0x257838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257834u;
        // 0x257838: 0xa644054a  sh          $a0, 0x54A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25783Cu;
        goto label_25783c;
    }
    ctx->pc = 0x257834u;
    {
        const bool branch_taken_0x257834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257834u;
        // 0x257838: 0xa644054a  sh          $a0, 0x54A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257834) {
            ctx->pc = 0x257840u;
            goto label_257840;
        }
    }
    ctx->pc = 0x25783Cu;
label_25783c:
    // 0x25783c: 0xa640054a  sh          $zero, 0x54A($s2)
    ctx->pc = 0x25783cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1354), (uint16_t)GPR_U32(ctx, 0));
label_257840:
    // 0x257840: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x257840u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
label_257844:
    // 0x257844: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_257848:
    if (ctx->pc == 0x257848u) {
        ctx->pc = 0x257848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257844u;
        // 0x257848: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25784Cu;
        goto label_25784c;
    }
    ctx->pc = 0x257844u;
    {
        const bool branch_taken_0x257844 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x257844) {
            ctx->pc = 0x257848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257844u;
            // 0x257848: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257870u;
            goto label_257870;
        }
    }
    ctx->pc = 0x25784Cu;
label_25784c:
    // 0x25784c: 0xc09c9be  jal         func_2726F8
label_257850:
    if (ctx->pc == 0x257850u) {
        ctx->pc = 0x257850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25784Cu;
        // 0x257850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257854u;
        goto label_257854;
    }
    ctx->pc = 0x25784Cu;
    SET_GPR_U32(ctx, 31, 0x257854u);
    ctx->pc = 0x257850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25784Cu;
    // 0x257850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2726F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2726F8u, 0x25784Cu, 0x257854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257854u;
label_257854:
    // 0x257854: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x257854u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
label_257858:
    // 0x257858: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
label_25785c:
    if (ctx->pc == 0x25785Cu) {
        ctx->pc = 0x25785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257858u;
        // 0x25785c: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257860u;
        goto label_257860;
    }
    ctx->pc = 0x257858u;
    {
        const bool branch_taken_0x257858 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x257858) {
            ctx->pc = 0x25785Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257858u;
            // 0x25785c: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257870u;
            goto label_257870;
        }
    }
    ctx->pc = 0x257860u;
label_257860:
    // 0x257860: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x257860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_257864:
    // 0x257864: 0xc07f59a  jal         func_1FD668
label_257868:
    if (ctx->pc == 0x257868u) {
        ctx->pc = 0x257868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257864u;
        // 0x257868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25786Cu;
        goto label_25786c;
    }
    ctx->pc = 0x257864u;
    SET_GPR_U32(ctx, 31, 0x25786Cu);
    ctx->pc = 0x257868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257864u;
    // 0x257868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x257864u, 0x25786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25786Cu;
label_25786c:
    // 0x25786c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x25786cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_257870:
    // 0x257870: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x257870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_257874:
    // 0x257874: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x257874u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_257878:
    // 0x257878: 0x96420434  lhu         $v0, 0x434($s2)
    ctx->pc = 0x257878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
label_25787c:
    // 0x25787c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25787cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_257880:
    // 0x257880: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x257880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_257884:
    // 0x257884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x257884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_257888:
    // 0x257888: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x257888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_25788c:
    // 0x25788c: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x25788cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
label_257890:
    // 0x257890: 0xc055f06  jal         func_157C18
label_257894:
    if (ctx->pc == 0x257894u) {
        ctx->pc = 0x257894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257890u;
        // 0x257894: 0xa6420434  sh          $v0, 0x434($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257898u;
        goto label_257898;
    }
    ctx->pc = 0x257890u;
    SET_GPR_U32(ctx, 31, 0x257898u);
    ctx->pc = 0x257894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257890u;
    // 0x257894: 0xa6420434  sh          $v0, 0x434($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x257890u, 0x257898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257898u;
label_257898:
    // 0x257898: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_25789c:
    if (ctx->pc == 0x25789Cu) {
        ctx->pc = 0x25789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257898u;
        // 0x25789c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2578A0u;
        goto label_2578a0;
    }
    ctx->pc = 0x257898u;
    {
        const bool branch_taken_0x257898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257898u;
        // 0x25789c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257898) {
            ctx->pc = 0x257908u;
            goto label_257908;
        }
    }
    ctx->pc = 0x2578A0u;
label_2578a0:
    // 0x2578a0: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x2578a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
label_2578a4:
    // 0x2578a4: 0x1c400014  bgtz        $v0, . + 4 + (0x14 << 2)
label_2578a8:
    if (ctx->pc == 0x2578A8u) {
        ctx->pc = 0x2578A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578A4u;
        // 0x2578a8: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2578ACu;
        goto label_2578ac;
    }
    ctx->pc = 0x2578A4u;
    {
        const bool branch_taken_0x2578a4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2578A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578A4u;
        // 0x2578a8: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578a4) {
            ctx->pc = 0x2578F8u;
            goto label_2578f8;
        }
    }
    ctx->pc = 0x2578ACu;
label_2578ac:
    // 0x2578ac: 0x8e421644  lw          $v0, 0x1644($s2)
    ctx->pc = 0x2578acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5700)));
label_2578b0:
    // 0x2578b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2578b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2578b4:
    // 0x2578b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2578b8:
    if (ctx->pc == 0x2578B8u) {
        ctx->pc = 0x2578B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578B4u;
        // 0x2578b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2578BCu;
        goto label_2578bc;
    }
    ctx->pc = 0x2578B4u;
    {
        const bool branch_taken_0x2578b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2578B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578B4u;
        // 0x2578b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578b4) {
            ctx->pc = 0x2578D4u;
            goto label_2578d4;
        }
    }
    ctx->pc = 0x2578BCu;
label_2578bc:
    // 0x2578bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2578bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2578c0:
    // 0x2578c0: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x2578c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
label_2578c4:
    // 0x2578c4: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x2578c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
label_2578c8:
    // 0x2578c8: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x2578c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_2578cc:
    // 0x2578cc: 0x10000015  b           . + 4 + (0x15 << 2)
label_2578d0:
    if (ctx->pc == 0x2578D0u) {
        ctx->pc = 0x2578D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578CCu;
        // 0x2578d0: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2578D4u;
        goto label_2578d4;
    }
    ctx->pc = 0x2578CCu;
    {
        const bool branch_taken_0x2578cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2578D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578CCu;
        // 0x2578d0: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578cc) {
            ctx->pc = 0x257924u;
            goto label_257924;
        }
    }
    ctx->pc = 0x2578D4u;
label_2578d4:
    // 0x2578d4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x2578d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_2578d8:
    // 0x2578d8: 0xc097f8c  jal         func_25FE30
label_2578dc:
    if (ctx->pc == 0x2578DCu) {
        ctx->pc = 0x2578DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578D8u;
        // 0x2578dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2578E0u;
        goto label_2578e0;
    }
    ctx->pc = 0x2578D8u;
    SET_GPR_U32(ctx, 31, 0x2578E0u);
    ctx->pc = 0x2578DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2578D8u;
    // 0x2578dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x2578D8u, 0x2578E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2578E0u;
label_2578e0:
    // 0x2578e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2578e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2578e4:
    // 0x2578e4: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x2578e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_2578e8:
    // 0x2578e8: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x2578e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
label_2578ec:
    // 0x2578ec: 0xa24302f4  sb          $v1, 0x2F4($s2)
    ctx->pc = 0x2578ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 3));
label_2578f0:
    // 0x2578f0: 0x1000000c  b           . + 4 + (0xC << 2)
label_2578f4:
    if (ctx->pc == 0x2578F4u) {
        ctx->pc = 0x2578F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578F0u;
        // 0x2578f4: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2578F8u;
        goto label_2578f8;
    }
    ctx->pc = 0x2578F0u;
    {
        const bool branch_taken_0x2578f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2578F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578F0u;
        // 0x2578f4: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578f0) {
            ctx->pc = 0x257924u;
            goto label_257924;
        }
    }
    ctx->pc = 0x2578F8u;
label_2578f8:
    // 0x2578f8: 0xc09d3fa  jal         func_274FE8
label_2578fc:
    if (ctx->pc == 0x2578FCu) {
        ctx->pc = 0x2578FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578F8u;
        // 0x2578fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257900u;
        goto label_257900;
    }
    ctx->pc = 0x2578F8u;
    SET_GPR_U32(ctx, 31, 0x257900u);
    ctx->pc = 0x2578FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2578F8u;
    // 0x2578fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x2578F8u, 0x257900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257900u;
label_257900:
    // 0x257900: 0x10000009  b           . + 4 + (0x9 << 2)
label_257904:
    if (ctx->pc == 0x257904u) {
        ctx->pc = 0x257904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257900u;
        // 0x257904: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257908u;
        goto label_257908;
    }
    ctx->pc = 0x257900u;
    {
        const bool branch_taken_0x257900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257900u;
        // 0x257904: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257900) {
            ctx->pc = 0x257928u;
            goto label_257928;
        }
    }
    ctx->pc = 0x257908u;
label_257908:
    // 0x257908: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x257908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25790c:
    // 0x25790c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25790cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_257910:
    // 0x257910: 0xc053e7c  jal         func_14F9F0
label_257914:
    if (ctx->pc == 0x257914u) {
        ctx->pc = 0x257914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257910u;
        // 0x257914: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x257918u;
        goto label_257918;
    }
    ctx->pc = 0x257910u;
    SET_GPR_U32(ctx, 31, 0x257918u);
    ctx->pc = 0x257914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257910u;
    // 0x257914: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x257910u, 0x257918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257918u;
label_257918:
    // 0x257918: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x257918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25791c:
    // 0x25791c: 0xc053e4a  jal         func_14F928
label_257920:
    if (ctx->pc == 0x257920u) {
        ctx->pc = 0x257920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25791Cu;
        // 0x257920: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x257924u;
        goto label_257924;
    }
    ctx->pc = 0x25791Cu;
    SET_GPR_U32(ctx, 31, 0x257924u);
    ctx->pc = 0x257920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25791Cu;
    // 0x257920: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25791Cu, 0x257924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257924u;
label_257924:
    // 0x257924: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x257924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_257928:
    // 0x257928: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x257928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25792c:
    // 0x25792c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25792cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_257930:
    // 0x257930: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x257930u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_257934:
    // 0x257934: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x257934u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_257938:
    // 0x257938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25793c:
    // 0x25793c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x25793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_257940:
    // 0x257940: 0x3e00008  jr          $ra
label_257944:
    if (ctx->pc == 0x257944u) {
        ctx->pc = 0x257944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257940u;
        // 0x257944: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257948u;
        goto label_fallthrough_0x257940;
    }
    ctx->pc = 0x257940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257940u;
        // 0x257944: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x257940:
    ctx->pc = 0x257948u;
}
