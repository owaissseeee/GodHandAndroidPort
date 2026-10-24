#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r702_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r702
{
// Function: func_00799370
// Address: 0x799370 - 0x799860
void func_00799370_0x799370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799370_0x799370");
#endif

    switch (ctx->pc) {
        case 0x799370u: goto label_799370;
        case 0x799374u: goto label_799374;
        case 0x799378u: goto label_799378;
        case 0x79937cu: goto label_79937c;
        case 0x799380u: goto label_799380;
        case 0x799384u: goto label_799384;
        case 0x799388u: goto label_799388;
        case 0x79938cu: goto label_79938c;
        case 0x799390u: goto label_799390;
        case 0x799394u: goto label_799394;
        case 0x799398u: goto label_799398;
        case 0x79939cu: goto label_79939c;
        case 0x7993a0u: goto label_7993a0;
        case 0x7993a4u: goto label_7993a4;
        case 0x7993a8u: goto label_7993a8;
        case 0x7993acu: goto label_7993ac;
        case 0x7993b0u: goto label_7993b0;
        case 0x7993b4u: goto label_7993b4;
        case 0x7993b8u: goto label_7993b8;
        case 0x7993bcu: goto label_7993bc;
        case 0x7993c0u: goto label_7993c0;
        case 0x7993c4u: goto label_7993c4;
        case 0x7993c8u: goto label_7993c8;
        case 0x7993ccu: goto label_7993cc;
        case 0x7993d0u: goto label_7993d0;
        case 0x7993d4u: goto label_7993d4;
        case 0x7993d8u: goto label_7993d8;
        case 0x7993dcu: goto label_7993dc;
        case 0x7993e0u: goto label_7993e0;
        case 0x7993e4u: goto label_7993e4;
        case 0x7993e8u: goto label_7993e8;
        case 0x7993ecu: goto label_7993ec;
        case 0x7993f0u: goto label_7993f0;
        case 0x7993f4u: goto label_7993f4;
        case 0x7993f8u: goto label_7993f8;
        case 0x7993fcu: goto label_7993fc;
        case 0x799400u: goto label_799400;
        case 0x799404u: goto label_799404;
        case 0x799408u: goto label_799408;
        case 0x79940cu: goto label_79940c;
        case 0x799410u: goto label_799410;
        case 0x799414u: goto label_799414;
        case 0x799418u: goto label_799418;
        case 0x79941cu: goto label_79941c;
        case 0x799420u: goto label_799420;
        case 0x799424u: goto label_799424;
        case 0x799428u: goto label_799428;
        case 0x79942cu: goto label_79942c;
        case 0x799430u: goto label_799430;
        case 0x799434u: goto label_799434;
        case 0x799438u: goto label_799438;
        case 0x79943cu: goto label_79943c;
        case 0x799440u: goto label_799440;
        case 0x799444u: goto label_799444;
        case 0x799448u: goto label_799448;
        case 0x79944cu: goto label_79944c;
        case 0x799450u: goto label_799450;
        case 0x799454u: goto label_799454;
        case 0x799458u: goto label_799458;
        case 0x79945cu: goto label_79945c;
        case 0x799460u: goto label_799460;
        case 0x799464u: goto label_799464;
        case 0x799468u: goto label_799468;
        case 0x79946cu: goto label_79946c;
        case 0x799470u: goto label_799470;
        case 0x799474u: goto label_799474;
        case 0x799478u: goto label_799478;
        case 0x79947cu: goto label_79947c;
        case 0x799480u: goto label_799480;
        case 0x799484u: goto label_799484;
        case 0x799488u: goto label_799488;
        case 0x79948cu: goto label_79948c;
        case 0x799490u: goto label_799490;
        case 0x799494u: goto label_799494;
        case 0x799498u: goto label_799498;
        case 0x79949cu: goto label_79949c;
        case 0x7994a0u: goto label_7994a0;
        case 0x7994a4u: goto label_7994a4;
        case 0x7994a8u: goto label_7994a8;
        case 0x7994acu: goto label_7994ac;
        case 0x7994b0u: goto label_7994b0;
        case 0x7994b4u: goto label_7994b4;
        case 0x7994b8u: goto label_7994b8;
        case 0x7994bcu: goto label_7994bc;
        case 0x7994c0u: goto label_7994c0;
        case 0x7994c4u: goto label_7994c4;
        case 0x7994c8u: goto label_7994c8;
        case 0x7994ccu: goto label_7994cc;
        case 0x7994d0u: goto label_7994d0;
        case 0x7994d4u: goto label_7994d4;
        case 0x7994d8u: goto label_7994d8;
        case 0x7994dcu: goto label_7994dc;
        case 0x7994e0u: goto label_7994e0;
        case 0x7994e4u: goto label_7994e4;
        case 0x7994e8u: goto label_7994e8;
        case 0x7994ecu: goto label_7994ec;
        case 0x7994f0u: goto label_7994f0;
        case 0x7994f4u: goto label_7994f4;
        case 0x7994f8u: goto label_7994f8;
        case 0x7994fcu: goto label_7994fc;
        case 0x799500u: goto label_799500;
        case 0x799504u: goto label_799504;
        case 0x799508u: goto label_799508;
        case 0x79950cu: goto label_79950c;
        case 0x799510u: goto label_799510;
        case 0x799514u: goto label_799514;
        case 0x799518u: goto label_799518;
        case 0x79951cu: goto label_79951c;
        case 0x799520u: goto label_799520;
        case 0x799524u: goto label_799524;
        case 0x799528u: goto label_799528;
        case 0x79952cu: goto label_79952c;
        case 0x799530u: goto label_799530;
        case 0x799534u: goto label_799534;
        case 0x799538u: goto label_799538;
        case 0x79953cu: goto label_79953c;
        case 0x799540u: goto label_799540;
        case 0x799544u: goto label_799544;
        case 0x799548u: goto label_799548;
        case 0x79954cu: goto label_79954c;
        case 0x799550u: goto label_799550;
        case 0x799554u: goto label_799554;
        case 0x799558u: goto label_799558;
        case 0x79955cu: goto label_79955c;
        case 0x799560u: goto label_799560;
        case 0x799564u: goto label_799564;
        case 0x799568u: goto label_799568;
        case 0x79956cu: goto label_79956c;
        case 0x799570u: goto label_799570;
        case 0x799574u: goto label_799574;
        case 0x799578u: goto label_799578;
        case 0x79957cu: goto label_79957c;
        case 0x799580u: goto label_799580;
        case 0x799584u: goto label_799584;
        case 0x799588u: goto label_799588;
        case 0x79958cu: goto label_79958c;
        case 0x799590u: goto label_799590;
        case 0x799594u: goto label_799594;
        case 0x799598u: goto label_799598;
        case 0x79959cu: goto label_79959c;
        case 0x7995a0u: goto label_7995a0;
        case 0x7995a4u: goto label_7995a4;
        case 0x7995a8u: goto label_7995a8;
        case 0x7995acu: goto label_7995ac;
        case 0x7995b0u: goto label_7995b0;
        case 0x7995b4u: goto label_7995b4;
        case 0x7995b8u: goto label_7995b8;
        case 0x7995bcu: goto label_7995bc;
        case 0x7995c0u: goto label_7995c0;
        case 0x7995c4u: goto label_7995c4;
        case 0x7995c8u: goto label_7995c8;
        case 0x7995ccu: goto label_7995cc;
        case 0x7995d0u: goto label_7995d0;
        case 0x7995d4u: goto label_7995d4;
        case 0x7995d8u: goto label_7995d8;
        case 0x7995dcu: goto label_7995dc;
        case 0x7995e0u: goto label_7995e0;
        case 0x7995e4u: goto label_7995e4;
        case 0x7995e8u: goto label_7995e8;
        case 0x7995ecu: goto label_7995ec;
        case 0x7995f0u: goto label_7995f0;
        case 0x7995f4u: goto label_7995f4;
        case 0x7995f8u: goto label_7995f8;
        case 0x7995fcu: goto label_7995fc;
        case 0x799600u: goto label_799600;
        case 0x799604u: goto label_799604;
        case 0x799608u: goto label_799608;
        case 0x79960cu: goto label_79960c;
        case 0x799610u: goto label_799610;
        case 0x799614u: goto label_799614;
        case 0x799618u: goto label_799618;
        case 0x79961cu: goto label_79961c;
        case 0x799620u: goto label_799620;
        case 0x799624u: goto label_799624;
        case 0x799628u: goto label_799628;
        case 0x79962cu: goto label_79962c;
        case 0x799630u: goto label_799630;
        case 0x799634u: goto label_799634;
        case 0x799638u: goto label_799638;
        case 0x79963cu: goto label_79963c;
        case 0x799640u: goto label_799640;
        case 0x799644u: goto label_799644;
        case 0x799648u: goto label_799648;
        case 0x79964cu: goto label_79964c;
        case 0x799650u: goto label_799650;
        case 0x799654u: goto label_799654;
        case 0x799658u: goto label_799658;
        case 0x79965cu: goto label_79965c;
        case 0x799660u: goto label_799660;
        case 0x799664u: goto label_799664;
        case 0x799668u: goto label_799668;
        case 0x79966cu: goto label_79966c;
        case 0x799670u: goto label_799670;
        case 0x799674u: goto label_799674;
        case 0x799678u: goto label_799678;
        case 0x79967cu: goto label_79967c;
        case 0x799680u: goto label_799680;
        case 0x799684u: goto label_799684;
        case 0x799688u: goto label_799688;
        case 0x79968cu: goto label_79968c;
        case 0x799690u: goto label_799690;
        case 0x799694u: goto label_799694;
        case 0x799698u: goto label_799698;
        case 0x79969cu: goto label_79969c;
        case 0x7996a0u: goto label_7996a0;
        case 0x7996a4u: goto label_7996a4;
        case 0x7996a8u: goto label_7996a8;
        case 0x7996acu: goto label_7996ac;
        case 0x7996b0u: goto label_7996b0;
        case 0x7996b4u: goto label_7996b4;
        case 0x7996b8u: goto label_7996b8;
        case 0x7996bcu: goto label_7996bc;
        case 0x7996c0u: goto label_7996c0;
        case 0x7996c4u: goto label_7996c4;
        case 0x7996c8u: goto label_7996c8;
        case 0x7996ccu: goto label_7996cc;
        case 0x7996d0u: goto label_7996d0;
        case 0x7996d4u: goto label_7996d4;
        case 0x7996d8u: goto label_7996d8;
        case 0x7996dcu: goto label_7996dc;
        case 0x7996e0u: goto label_7996e0;
        case 0x7996e4u: goto label_7996e4;
        case 0x7996e8u: goto label_7996e8;
        case 0x7996ecu: goto label_7996ec;
        case 0x7996f0u: goto label_7996f0;
        case 0x7996f4u: goto label_7996f4;
        case 0x7996f8u: goto label_7996f8;
        case 0x7996fcu: goto label_7996fc;
        case 0x799700u: goto label_799700;
        case 0x799704u: goto label_799704;
        case 0x799708u: goto label_799708;
        case 0x79970cu: goto label_79970c;
        case 0x799710u: goto label_799710;
        case 0x799714u: goto label_799714;
        case 0x799718u: goto label_799718;
        case 0x79971cu: goto label_79971c;
        case 0x799720u: goto label_799720;
        case 0x799724u: goto label_799724;
        case 0x799728u: goto label_799728;
        case 0x79972cu: goto label_79972c;
        case 0x799730u: goto label_799730;
        case 0x799734u: goto label_799734;
        case 0x799738u: goto label_799738;
        case 0x79973cu: goto label_79973c;
        case 0x799740u: goto label_799740;
        case 0x799744u: goto label_799744;
        case 0x799748u: goto label_799748;
        case 0x79974cu: goto label_79974c;
        case 0x799750u: goto label_799750;
        case 0x799754u: goto label_799754;
        case 0x799758u: goto label_799758;
        case 0x79975cu: goto label_79975c;
        case 0x799760u: goto label_799760;
        case 0x799764u: goto label_799764;
        case 0x799768u: goto label_799768;
        case 0x79976cu: goto label_79976c;
        case 0x799770u: goto label_799770;
        case 0x799774u: goto label_799774;
        case 0x799778u: goto label_799778;
        case 0x79977cu: goto label_79977c;
        case 0x799780u: goto label_799780;
        case 0x799784u: goto label_799784;
        case 0x799788u: goto label_799788;
        case 0x79978cu: goto label_79978c;
        case 0x799790u: goto label_799790;
        case 0x799794u: goto label_799794;
        case 0x799798u: goto label_799798;
        case 0x79979cu: goto label_79979c;
        case 0x7997a0u: goto label_7997a0;
        case 0x7997a4u: goto label_7997a4;
        case 0x7997a8u: goto label_7997a8;
        case 0x7997acu: goto label_7997ac;
        case 0x7997b0u: goto label_7997b0;
        case 0x7997b4u: goto label_7997b4;
        case 0x7997b8u: goto label_7997b8;
        case 0x7997bcu: goto label_7997bc;
        case 0x7997c0u: goto label_7997c0;
        case 0x7997c4u: goto label_7997c4;
        case 0x7997c8u: goto label_7997c8;
        case 0x7997ccu: goto label_7997cc;
        case 0x7997d0u: goto label_7997d0;
        case 0x7997d4u: goto label_7997d4;
        case 0x7997d8u: goto label_7997d8;
        case 0x7997dcu: goto label_7997dc;
        case 0x7997e0u: goto label_7997e0;
        case 0x7997e4u: goto label_7997e4;
        case 0x7997e8u: goto label_7997e8;
        case 0x7997ecu: goto label_7997ec;
        case 0x7997f0u: goto label_7997f0;
        case 0x7997f4u: goto label_7997f4;
        case 0x7997f8u: goto label_7997f8;
        case 0x7997fcu: goto label_7997fc;
        case 0x799800u: goto label_799800;
        case 0x799804u: goto label_799804;
        case 0x799808u: goto label_799808;
        case 0x79980cu: goto label_79980c;
        case 0x799810u: goto label_799810;
        case 0x799814u: goto label_799814;
        case 0x799818u: goto label_799818;
        case 0x79981cu: goto label_79981c;
        case 0x799820u: goto label_799820;
        case 0x799824u: goto label_799824;
        case 0x799828u: goto label_799828;
        case 0x79982cu: goto label_79982c;
        case 0x799830u: goto label_799830;
        case 0x799834u: goto label_799834;
        case 0x799838u: goto label_799838;
        case 0x79983cu: goto label_79983c;
        case 0x799840u: goto label_799840;
        case 0x799844u: goto label_799844;
        case 0x799848u: goto label_799848;
        case 0x79984cu: goto label_79984c;
        case 0x799850u: goto label_799850;
        case 0x799854u: goto label_799854;
        case 0x799858u: goto label_799858;
        case 0x79985cu: goto label_79985c;
        default: break;
    }

    ctx->pc = 0x799370u;

label_799370:
    // 0x799370: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_799374:
    // 0x799374: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x799374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_799378:
    // 0x799378: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x799378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_79937c:
    // 0x79937c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79937cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799380:
    // 0x799380: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x799380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_799384:
    // 0x799384: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x799384u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799388:
    // 0x799388: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x799388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_79938c:
    // 0x79938c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x79938cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_799390:
    // 0x799390: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x799390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_799394:
    // 0x799394: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x799394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_799398:
    // 0x799398: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x799398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_79939c:
    // 0x79939c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_7993a0:
    // 0x7993a0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x7993a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_7993a4:
    // 0x7993a4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_7993a8:
    // 0x7993a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7993a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7993ac:
    // 0x7993ac: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x7993acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_7993b0:
    // 0x7993b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7993b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7993b4:
    // 0x7993b4: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
label_7993b8:
    // 0x7993b8: 0xc0b0a92  jal         func_2C2A48
label_7993bc:
    if (ctx->pc == 0x7993BCu) {
        ctx->pc = 0x7993BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B8u;
        // 0x7993bc: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993C0u;
        goto label_7993c0;
    }
    ctx->pc = 0x7993B8u;
    SET_GPR_U32(ctx, 31, 0x7993C0u);
    ctx->pc = 0x7993BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B8u;
    // 0x7993bc: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x7993B8u, 0x7993C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C0u;
label_7993c0:
    // 0x7993c0: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
label_7993c4:
    // 0x7993c4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_7993c8:
    // 0x7993c8: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x7993c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
label_7993cc:
    // 0x7993cc: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x7993ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_7993d0:
    // 0x7993d0: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_7993d4:
    // 0x7993d4: 0x2e22000a  sltiu       $v0, $s1, 0xA
    ctx->pc = 0x7993d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_7993d8:
    // 0x7993d8: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
label_7993dc:
    if (ctx->pc == 0x7993DCu) {
        ctx->pc = 0x7993DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993D8u;
        // 0x7993dc: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993E0u;
        goto label_7993e0;
    }
    ctx->pc = 0x7993D8u;
    {
        const bool branch_taken_0x7993d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993D8u;
        // 0x7993dc: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993d8) {
            ctx->pc = 0x799758u;
            goto label_799758;
        }
    }
    ctx->pc = 0x7993E0u;
label_7993e0:
    // 0x7993e0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x7993e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_7993e4:
    // 0x7993e4: 0x2442a330  addiu       $v0, $v0, -0x5CD0
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943536));
label_7993e8:
    // 0x7993e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_7993ec:
    // 0x7993ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_7993f0:
    // 0x7993f0: 0x800008  jr          $a0
label_7993f4:
    if (ctx->pc == 0x7993F4u) {
        ctx->pc = 0x7993F8u;
        goto label_7993f8;
    }
    ctx->pc = 0x7993F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7993F8u: goto label_7993f8;
            case 0x799464u: goto label_799464;
            case 0x7994B0u: goto label_7994b0;
            case 0x799508u: goto label_799508;
            case 0x799520u: goto label_799520;
            case 0x79959Cu: goto label_79959c;
            case 0x7995BCu: goto label_7995bc;
            case 0x7995F0u: goto label_7995f0;
            case 0x7996A8u: goto label_7996a8;
            case 0x799748u: goto label_799748;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7993F8u;
label_7993f8:
    // 0x7993f8: 0xc0b0fa2  jal         func_2C3E88
label_7993fc:
    if (ctx->pc == 0x7993FCu) {
        ctx->pc = 0x7993FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F8u;
        // 0x7993fc: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799400u;
        goto label_799400;
    }
    ctx->pc = 0x7993F8u;
    SET_GPR_U32(ctx, 31, 0x799400u);
    ctx->pc = 0x7993FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F8u;
    // 0x7993fc: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x7993F8u, 0x799400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799400u;
label_799400:
    // 0x799400: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799404:
    // 0x799404: 0xc0b0e6c  jal         func_2C39B0
label_799408:
    if (ctx->pc == 0x799408u) {
        ctx->pc = 0x799408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799404u;
        // 0x799408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79940Cu;
        goto label_79940c;
    }
    ctx->pc = 0x799404u;
    SET_GPR_U32(ctx, 31, 0x79940Cu);
    ctx->pc = 0x799408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799404u;
    // 0x799408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799404u, 0x79940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79940Cu;
label_79940c:
    // 0x79940c: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799410:
    // 0x799410: 0xc0b141a  jal         func_2C5068
label_799414:
    if (ctx->pc == 0x799414u) {
        ctx->pc = 0x799414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799410u;
        // 0x799414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799418u;
        goto label_799418;
    }
    ctx->pc = 0x799410u;
    SET_GPR_U32(ctx, 31, 0x799418u);
    ctx->pc = 0x799414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799410u;
    // 0x799414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5068u, 0x799410u, 0x799418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799418u;
label_799418:
    // 0x799418: 0xc0b6dac  jal         func_2DB6B0
label_79941c:
    if (ctx->pc == 0x79941Cu) {
        ctx->pc = 0x799420u;
        goto label_799420;
    }
    ctx->pc = 0x799418u;
    SET_GPR_U32(ctx, 31, 0x799420u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799418u, 0x799420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799420u;
label_799420:
    // 0x799420: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799424:
    // 0x799424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799428:
    // 0x799428: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_79942c:
    // 0x79942c: 0x8c660064  lw          $a2, 0x64($v1)
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_799430:
    // 0x799430: 0xc0f809  jalr        $a2
label_799434:
    if (ctx->pc == 0x799434u) {
        ctx->pc = 0x799434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799430u;
        // 0x799434: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799438u;
        goto label_799438;
    }
    ctx->pc = 0x799430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x799438u);
        ctx->pc = 0x799434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799430u;
        // 0x799434: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799430u, 0x799438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799438u;
label_799438:
    // 0x799438: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_79943c:
    // 0x79943c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79943cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799440:
    // 0x799440: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
label_799444:
    // 0x799444: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_799448:
    // 0x799448: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79944c:
    // 0x79944c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79944cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799450:
    // 0x799450: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_799454:
    // 0x799454: 0xc0c1c82  jal         func_307208
label_799458:
    if (ctx->pc == 0x799458u) {
        ctx->pc = 0x799458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799454u;
        // 0x799458: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79945Cu;
        goto label_79945c;
    }
    ctx->pc = 0x799454u;
    SET_GPR_U32(ctx, 31, 0x79945Cu);
    ctx->pc = 0x799458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799454u;
    // 0x799458: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x799454u, 0x79945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79945Cu;
label_79945c:
    // 0x79945c: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_799460:
    if (ctx->pc == 0x799460u) {
        ctx->pc = 0x799460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79945Cu;
        // 0x799460: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799464u;
        goto label_799464;
    }
    ctx->pc = 0x79945Cu;
    {
        const bool branch_taken_0x79945c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79945Cu;
        // 0x799460: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79945c) {
            ctx->pc = 0x799740u;
            goto label_799740;
        }
    }
    ctx->pc = 0x799464u;
label_799464:
    // 0x799464: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_799468:
    // 0x799468: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x799468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 29836)));
label_79946c:
    // 0x79946c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_799470:
    // 0x799470: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_799474:
    // 0x799474: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
label_799478:
    if (ctx->pc == 0x799478u) {
        ctx->pc = 0x79947Cu;
        goto label_79947c;
    }
    ctx->pc = 0x799474u;
    {
        const bool branch_taken_0x799474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799474) {
            ctx->pc = 0x799758u;
            goto label_799758;
        }
    }
    ctx->pc = 0x79947Cu;
label_79947c:
    // 0x79947c: 0xc0b6dac  jal         func_2DB6B0
label_799480:
    if (ctx->pc == 0x799480u) {
        ctx->pc = 0x799484u;
        goto label_799484;
    }
    ctx->pc = 0x79947Cu;
    SET_GPR_U32(ctx, 31, 0x799484u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79947Cu, 0x799484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799484u;
label_799484:
    // 0x799484: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799488:
    // 0x799488: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79948c:
    // 0x79948c: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_799490:
    // 0x799490: 0x8c660064  lw          $a2, 0x64($v1)
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_799494:
    // 0x799494: 0xc0f809  jalr        $a2
label_799498:
    if (ctx->pc == 0x799498u) {
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79949Cu;
        goto label_79949c;
    }
    ctx->pc = 0x799494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x79949Cu);
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799494u, 0x79949Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79949Cu;
label_79949c:
    // 0x79949c: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_7994a0:
    // 0x7994a0: 0xc0b141a  jal         func_2C5068
label_7994a4:
    if (ctx->pc == 0x7994A4u) {
        ctx->pc = 0x7994A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A0u;
        // 0x7994a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994A8u;
        goto label_7994a8;
    }
    ctx->pc = 0x7994A0u;
    SET_GPR_U32(ctx, 31, 0x7994A8u);
    ctx->pc = 0x7994A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994A0u;
    // 0x7994a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5068u, 0x7994A0u, 0x7994A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A8u;
label_7994a8:
    // 0x7994a8: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_7994ac:
    if (ctx->pc == 0x7994ACu) {
        ctx->pc = 0x7994ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A8u;
        // 0x7994ac: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994B0u;
        goto label_7994b0;
    }
    ctx->pc = 0x7994A8u;
    {
        const bool branch_taken_0x7994a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A8u;
        // 0x7994ac: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994a8) {
            ctx->pc = 0x799740u;
            goto label_799740;
        }
    }
    ctx->pc = 0x7994B0u;
label_7994b0:
    // 0x7994b0: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x7994b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_7994b4:
    // 0x7994b4: 0xc0b0fb6  jal         func_2C3ED8
label_7994b8:
    if (ctx->pc == 0x7994B8u) {
        ctx->pc = 0x7994B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B4u;
        // 0x7994b8: 0x26a5a320  addiu       $a1, $s5, -0x5CE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994BCu;
        goto label_7994bc;
    }
    ctx->pc = 0x7994B4u;
    SET_GPR_U32(ctx, 31, 0x7994BCu);
    ctx->pc = 0x7994B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B4u;
    // 0x7994b8: 0x26a5a320  addiu       $a1, $s5, -0x5CE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x7994B4u, 0x7994BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994BCu;
label_7994bc:
    // 0x7994bc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_7994c0:
    // 0x7994c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7994c4:
    // 0x7994c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7994c8:
    // 0x7994c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7994c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994cc:
    // 0x7994cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7994ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994d0:
    // 0x7994d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7994d4:
    // 0x7994d4: 0xc0c194a  jal         func_306528
label_7994d8:
    if (ctx->pc == 0x7994D8u) {
        ctx->pc = 0x7994D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D4u;
        // 0x7994d8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994DCu;
        goto label_7994dc;
    }
    ctx->pc = 0x7994D4u;
    SET_GPR_U32(ctx, 31, 0x7994DCu);
    ctx->pc = 0x7994D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D4u;
    // 0x7994d8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x7994D4u, 0x7994DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994DCu;
label_7994dc:
    // 0x7994dc: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x7994dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_7994e0:
    // 0x7994e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7994e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994e4:
    // 0x7994e4: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
label_7994e8:
    // 0x7994e8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_7994ec:
    // 0x7994ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7994ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994f0:
    // 0x7994f0: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
label_7994f4:
    // 0x7994f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7994f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994f8:
    // 0x7994f8: 0xc0c1c82  jal         func_307208
label_7994fc:
    if (ctx->pc == 0x7994FCu) {
        ctx->pc = 0x7994FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F8u;
        // 0x7994fc: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799500u;
        goto label_799500;
    }
    ctx->pc = 0x7994F8u;
    SET_GPR_U32(ctx, 31, 0x799500u);
    ctx->pc = 0x7994FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994F8u;
    // 0x7994fc: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x7994F8u, 0x799500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799500u;
label_799500:
    // 0x799500: 0x1000008f  b           . + 4 + (0x8F << 2)
label_799504:
    if (ctx->pc == 0x799504u) {
        ctx->pc = 0x799504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799500u;
        // 0x799504: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799508u;
        goto label_799508;
    }
    ctx->pc = 0x799500u;
    {
        const bool branch_taken_0x799500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799500u;
        // 0x799504: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799500) {
            ctx->pc = 0x799740u;
            goto label_799740;
        }
    }
    ctx->pc = 0x799508u;
label_799508:
    // 0x799508: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x799508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_79950c:
    // 0x79950c: 0x9043748c  lbu         $v1, 0x748C($v0)
    ctx->pc = 0x79950cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 29836)));
label_799510:
    // 0x799510: 0x14600091  bnez        $v1, . + 4 + (0x91 << 2)
label_799514:
    if (ctx->pc == 0x799514u) {
        ctx->pc = 0x799514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799510u;
        // 0x799514: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799518u;
        goto label_799518;
    }
    ctx->pc = 0x799510u;
    {
        const bool branch_taken_0x799510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799510u;
        // 0x799514: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799510) {
            ctx->pc = 0x799758u;
            goto label_799758;
        }
    }
    ctx->pc = 0x799518u;
label_799518:
    // 0x799518: 0x1000008f  b           . + 4 + (0x8F << 2)
label_79951c:
    if (ctx->pc == 0x79951Cu) {
        ctx->pc = 0x79951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799518u;
        // 0x79951c: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799520u;
        goto label_799520;
    }
    ctx->pc = 0x799518u;
    {
        const bool branch_taken_0x799518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799518u;
        // 0x79951c: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799518) {
            ctx->pc = 0x799758u;
            goto label_799758;
        }
    }
    ctx->pc = 0x799520u;
label_799520:
    // 0x799520: 0xc1e6618  jal         func_799860
label_799524:
    if (ctx->pc == 0x799524u) {
        ctx->pc = 0x799528u;
        goto label_799528;
    }
    ctx->pc = 0x799520u;
    SET_GPR_U32(ctx, 31, 0x799528u);
    ctx->pc = 0x799860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799860u, 0x799520u, 0x799528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799528u;
label_799528:
    // 0x799528: 0xc0b101e  jal         func_2C4078
label_79952c:
    if (ctx->pc == 0x79952Cu) {
        ctx->pc = 0x79952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799528u;
        // 0x79952c: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799530u;
        goto label_799530;
    }
    ctx->pc = 0x799528u;
    SET_GPR_U32(ctx, 31, 0x799530u);
    ctx->pc = 0x79952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799528u;
    // 0x79952c: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799528u, 0x799530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799530u;
label_799530:
    // 0x799530: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x799530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_799534:
    // 0x799534: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799538:
    // 0x799538: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799538u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79953c:
    // 0x79953c: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_799540:
    // 0x799540: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_799544:
    // 0x799544: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_799548:
    // 0x799548: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
label_79954c:
    // 0x79954c: 0xc0c1c82  jal         func_307208
label_799550:
    if (ctx->pc == 0x799550u) {
        ctx->pc = 0x799550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79954Cu;
        // 0x799550: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799554u;
        goto label_799554;
    }
    ctx->pc = 0x79954Cu;
    SET_GPR_U32(ctx, 31, 0x799554u);
    ctx->pc = 0x799550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79954Cu;
    // 0x799550: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79954Cu, 0x799554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799554u;
label_799554:
    // 0x799554: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799558:
    // 0x799558: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79955c:
    // 0x79955c: 0xc0b56a8  jal         func_2D5AA0
label_799560:
    if (ctx->pc == 0x799560u) {
        ctx->pc = 0x799560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79955Cu;
        // 0x799560: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799564u;
        goto label_799564;
    }
    ctx->pc = 0x79955Cu;
    SET_GPR_U32(ctx, 31, 0x799564u);
    ctx->pc = 0x799560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79955Cu;
    // 0x799560: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79955Cu, 0x799564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799564u;
label_799564:
    // 0x799564: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799568:
    // 0x799568: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79956c:
    // 0x79956c: 0xc0c185a  jal         func_306168
label_799570:
    if (ctx->pc == 0x799570u) {
        ctx->pc = 0x799570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79956Cu;
        // 0x799570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799574u;
        goto label_799574;
    }
    ctx->pc = 0x79956Cu;
    SET_GPR_U32(ctx, 31, 0x799574u);
    ctx->pc = 0x799570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79956Cu;
    // 0x799570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306168u, 0x79956Cu, 0x799574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799574u;
label_799574:
    // 0x799574: 0xc0b6dac  jal         func_2DB6B0
label_799578:
    if (ctx->pc == 0x799578u) {
        ctx->pc = 0x79957Cu;
        goto label_79957c;
    }
    ctx->pc = 0x799574u;
    SET_GPR_U32(ctx, 31, 0x79957Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799574u, 0x79957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79957Cu;
label_79957c:
    // 0x79957c: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799580:
    // 0x799580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799584:
    // 0x799584: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_799588:
    // 0x799588: 0x8c660064  lw          $a2, 0x64($v1)
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_79958c:
    // 0x79958c: 0xc0f809  jalr        $a2
label_799590:
    if (ctx->pc == 0x799590u) {
        ctx->pc = 0x799590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79958Cu;
        // 0x799590: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799594u;
        goto label_799594;
    }
    ctx->pc = 0x79958Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x799594u);
        ctx->pc = 0x799590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79958Cu;
        // 0x799590: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79958Cu, 0x799594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799594u;
label_799594:
    // 0x799594: 0x1000006a  b           . + 4 + (0x6A << 2)
label_799598:
    if (ctx->pc == 0x799598u) {
        ctx->pc = 0x799598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799594u;
        // 0x799598: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79959Cu;
        goto label_79959c;
    }
    ctx->pc = 0x799594u;
    {
        const bool branch_taken_0x799594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799594u;
        // 0x799598: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799594) {
            ctx->pc = 0x799740u;
            goto label_799740;
        }
    }
    ctx->pc = 0x79959Cu;
label_79959c:
    // 0x79959c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79959cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_7995a0:
    // 0x7995a0: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x7995a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 29836)));
label_7995a4:
    // 0x7995a4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x7995a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_7995a8:
    // 0x7995a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7995a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_7995ac:
    // 0x7995ac: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
label_7995b0:
    if (ctx->pc == 0x7995B0u) {
        ctx->pc = 0x7995B4u;
        goto label_7995b4;
    }
    ctx->pc = 0x7995ACu;
    {
        const bool branch_taken_0x7995ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7995ac) {
            ctx->pc = 0x799758u;
            goto label_799758;
        }
    }
    ctx->pc = 0x7995B4u;
label_7995b4:
    // 0x7995b4: 0x1000005f  b           . + 4 + (0x5F << 2)
label_7995b8:
    if (ctx->pc == 0x7995B8u) {
        ctx->pc = 0x7995BCu;
        goto label_7995bc;
    }
    ctx->pc = 0x7995B4u;
    {
        const bool branch_taken_0x7995b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7995b4) {
            ctx->pc = 0x799734u;
            goto label_799734;
        }
    }
    ctx->pc = 0x7995BCu;
label_7995bc:
    // 0x7995bc: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_7995c0:
    // 0x7995c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7995c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7995c4:
    // 0x7995c4: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
label_7995c8:
    // 0x7995c8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x7995c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_7995cc:
    // 0x7995cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7995ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7995d0:
    // 0x7995d0: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x7995d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
label_7995d4:
    // 0x7995d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7995d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7995d8:
    // 0x7995d8: 0xc0c1c82  jal         func_307208
label_7995dc:
    if (ctx->pc == 0x7995DCu) {
        ctx->pc = 0x7995DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D8u;
        // 0x7995dc: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995E0u;
        goto label_7995e0;
    }
    ctx->pc = 0x7995D8u;
    SET_GPR_U32(ctx, 31, 0x7995E0u);
    ctx->pc = 0x7995DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995D8u;
    // 0x7995dc: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x7995D8u, 0x7995E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995E0u;
label_7995e0:
    // 0x7995e0: 0xc1e6700  jal         func_799C00
label_7995e4:
    if (ctx->pc == 0x7995E4u) {
        ctx->pc = 0x7995E8u;
        goto label_7995e8;
    }
    ctx->pc = 0x7995E0u;
    SET_GPR_U32(ctx, 31, 0x7995E8u);
    ctx->pc = 0x799C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799C00u, 0x7995E0u, 0x7995E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995E8u;
label_7995e8:
    // 0x7995e8: 0x10000055  b           . + 4 + (0x55 << 2)
label_7995ec:
    if (ctx->pc == 0x7995ECu) {
        ctx->pc = 0x7995ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E8u;
        // 0x7995ec: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995F0u;
        goto label_7995f0;
    }
    ctx->pc = 0x7995E8u;
    {
        const bool branch_taken_0x7995e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E8u;
        // 0x7995ec: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995e8) {
            ctx->pc = 0x799740u;
            goto label_799740;
        }
    }
    ctx->pc = 0x7995F0u;
label_7995f0:
    // 0x7995f0: 0xc1e6776  jal         func_799DD8
label_7995f4:
    if (ctx->pc == 0x7995F4u) {
        ctx->pc = 0x7995F8u;
        goto label_7995f8;
    }
    ctx->pc = 0x7995F0u;
    SET_GPR_U32(ctx, 31, 0x7995F8u);
    ctx->pc = 0x799DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799DD8u, 0x7995F0u, 0x7995F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F8u;
label_7995f8:
    // 0x7995f8: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_7995fc:
    if (ctx->pc == 0x7995FCu) {
        ctx->pc = 0x7995FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F8u;
        // 0x7995fc: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799600u;
        goto label_799600;
    }
    ctx->pc = 0x7995F8u;
    {
        const bool branch_taken_0x7995f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F8u;
        // 0x7995fc: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995f8) {
            ctx->pc = 0x799758u;
            goto label_799758;
        }
    }
    ctx->pc = 0x799600u;
label_799600:
    // 0x799600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799604:
    // 0x799604: 0x24508658  addiu       $s0, $v0, -0x79A8
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
label_799608:
    // 0x799608: 0xc0afc42  jal         func_2BF108
label_79960c:
    if (ctx->pc == 0x79960Cu) {
        ctx->pc = 0x79960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799608u;
        // 0x79960c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799610u;
        goto label_799610;
    }
    ctx->pc = 0x799608u;
    SET_GPR_U32(ctx, 31, 0x799610u);
    ctx->pc = 0x79960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799608u;
    // 0x79960c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799608u, 0x799610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799610u;
label_799610:
    // 0x799610: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799614:
    // 0x799614: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x799614u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_799618:
    // 0x799618: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79961c:
    if (ctx->pc == 0x79961Cu) {
        ctx->pc = 0x79961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799618u;
        // 0x79961c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799620u;
        goto label_799620;
    }
    ctx->pc = 0x799618u;
    {
        const bool branch_taken_0x799618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799618u;
        // 0x79961c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799618) {
            ctx->pc = 0x799644u;
            goto label_799644;
        }
    }
    ctx->pc = 0x799620u;
label_799620:
    // 0x799620: 0xc0afc42  jal         func_2BF108
label_799624:
    if (ctx->pc == 0x799624u) {
        ctx->pc = 0x799624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799620u;
        // 0x799624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799628u;
        goto label_799628;
    }
    ctx->pc = 0x799620u;
    SET_GPR_U32(ctx, 31, 0x799628u);
    ctx->pc = 0x799624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799620u;
    // 0x799624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799620u, 0x799628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799628u;
label_799628:
    // 0x799628: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79962c:
    // 0x79962c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799630:
    // 0x799630: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_799634:
    // 0x799634: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_799638:
    // 0x799638: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x799638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_79963c:
    // 0x79963c: 0x10000016  b           . + 4 + (0x16 << 2)
label_799640:
    if (ctx->pc == 0x799640u) {
        ctx->pc = 0x799640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79963Cu;
        // 0x799640: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799644u;
        goto label_799644;
    }
    ctx->pc = 0x79963Cu;
    {
        const bool branch_taken_0x79963c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79963Cu;
        // 0x799640: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79963c) {
            ctx->pc = 0x799698u;
            goto label_799698;
        }
    }
    ctx->pc = 0x799644u;
label_799644:
    // 0x799644: 0x2664ee00  addiu       $a0, $s3, -0x1200
    ctx->pc = 0x799644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962688));
label_799648:
    // 0x799648: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79964c:
    // 0x79964c: 0x240600be  addiu       $a2, $zero, 0xBE
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
label_799650:
    // 0x799650: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799654:
    // 0x799654: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799658:
    // 0x799658: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799658u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79965c:
    // 0x79965c: 0xc0b2e28  jal         func_2CB8A0
label_799660:
    if (ctx->pc == 0x799660u) {
        ctx->pc = 0x799660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79965Cu;
        // 0x799660: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799664u;
        goto label_799664;
    }
    ctx->pc = 0x79965Cu;
    SET_GPR_U32(ctx, 31, 0x799664u);
    ctx->pc = 0x799660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79965Cu;
    // 0x799660: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79965Cu, 0x799664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799664u;
label_799664:
    // 0x799664: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799668:
    // 0x799668: 0x10000004  b           . + 4 + (0x4 << 2)
label_79966c:
    if (ctx->pc == 0x79966Cu) {
        ctx->pc = 0x79966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799668u;
        // 0x79966c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799670u;
        goto label_799670;
    }
    ctx->pc = 0x799668u;
    {
        const bool branch_taken_0x799668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799668u;
        // 0x79966c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799668) {
            ctx->pc = 0x79967Cu;
            goto label_79967c;
        }
    }
    ctx->pc = 0x799670u;
label_799670:
    // 0x799670: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799674:
    // 0x799674: 0xc0b56a8  jal         func_2D5AA0
label_799678:
    if (ctx->pc == 0x799678u) {
        ctx->pc = 0x799678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799674u;
        // 0x799678: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79967Cu;
        goto label_79967c;
    }
    ctx->pc = 0x799674u;
    SET_GPR_U32(ctx, 31, 0x79967Cu);
    ctx->pc = 0x799678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799674u;
    // 0x799678: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799674u, 0x79967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79967Cu;
label_79967c:
    // 0x79967c: 0x2664ee00  addiu       $a0, $s3, -0x1200
    ctx->pc = 0x79967cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962688));
label_799680:
    // 0x799680: 0xc0b2f3c  jal         func_2CBCF0
label_799684:
    if (ctx->pc == 0x799684u) {
        ctx->pc = 0x799684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799680u;
        // 0x799684: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799688u;
        goto label_799688;
    }
    ctx->pc = 0x799680u;
    SET_GPR_U32(ctx, 31, 0x799688u);
    ctx->pc = 0x799684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799680u;
    // 0x799684: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBCF0u, 0x799680u, 0x799688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799688u;
label_799688:
    // 0x799688: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_79968c:
    if (ctx->pc == 0x79968Cu) {
        ctx->pc = 0x79968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799688u;
        // 0x79968c: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799690u;
        goto label_799690;
    }
    ctx->pc = 0x799688u;
    {
        const bool branch_taken_0x799688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799688u;
        // 0x79968c: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799688) {
            ctx->pc = 0x799670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799670;
        }
    }
    ctx->pc = 0x799690u;
label_799690:
    // 0x799690: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_799694:
    // 0x799694: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x799694u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_799698:
    // 0x799698: 0xc0b56a8  jal         func_2D5AA0
label_79969c:
    if (ctx->pc == 0x79969Cu) {
        ctx->pc = 0x79969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799698u;
        // 0x79969c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996A0u;
        goto label_7996a0;
    }
    ctx->pc = 0x799698u;
    SET_GPR_U32(ctx, 31, 0x7996A0u);
    ctx->pc = 0x79969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799698u;
    // 0x79969c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799698u, 0x7996A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996A0u;
label_7996a0:
    // 0x7996a0: 0x1000002d  b           . + 4 + (0x2D << 2)
label_7996a4:
    if (ctx->pc == 0x7996A4u) {
        ctx->pc = 0x7996A8u;
        goto label_7996a8;
    }
    ctx->pc = 0x7996A0u;
    {
        const bool branch_taken_0x7996a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7996a0) {
            ctx->pc = 0x799758u;
            goto label_799758;
        }
    }
    ctx->pc = 0x7996A8u;
label_7996a8:
    // 0x7996a8: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_7996ac:
    // 0x7996ac: 0xc0b0fa2  jal         func_2C3E88
label_7996b0:
    if (ctx->pc == 0x7996B0u) {
        ctx->pc = 0x7996B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996ACu;
        // 0x7996b0: 0x2670ee00  addiu       $s0, $s3, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996B4u;
        goto label_7996b4;
    }
    ctx->pc = 0x7996ACu;
    SET_GPR_U32(ctx, 31, 0x7996B4u);
    ctx->pc = 0x7996B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996ACu;
    // 0x7996b0: 0x2670ee00  addiu       $s0, $s3, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x7996ACu, 0x7996B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996B4u;
label_7996b4:
    // 0x7996b4: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x7996b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_7996b8:
    // 0x7996b8: 0xc0b0e6c  jal         func_2C39B0
label_7996bc:
    if (ctx->pc == 0x7996BCu) {
        ctx->pc = 0x7996BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B8u;
        // 0x7996bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996C0u;
        goto label_7996c0;
    }
    ctx->pc = 0x7996B8u;
    SET_GPR_U32(ctx, 31, 0x7996C0u);
    ctx->pc = 0x7996BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996B8u;
    // 0x7996bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x7996B8u, 0x7996C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C0u;
label_7996c0:
    // 0x7996c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7996c4:
    // 0x7996c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7996c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7996c8:
    // 0x7996c8: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x7996c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_7996cc:
    // 0x7996cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7996ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7996d0:
    // 0x7996d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7996d4:
    // 0x7996d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7996d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7996d8:
    // 0x7996d8: 0xc0b2e28  jal         func_2CB8A0
label_7996dc:
    if (ctx->pc == 0x7996DCu) {
        ctx->pc = 0x7996DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D8u;
        // 0x7996dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996E0u;
        goto label_7996e0;
    }
    ctx->pc = 0x7996D8u;
    SET_GPR_U32(ctx, 31, 0x7996E0u);
    ctx->pc = 0x7996DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D8u;
    // 0x7996dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7996D8u, 0x7996E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996E0u;
label_7996e0:
    // 0x7996e0: 0x240600c1  addiu       $a2, $zero, 0xC1
    ctx->pc = 0x7996e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_7996e4:
    // 0x7996e4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7996e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7996e8:
    // 0x7996e8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7996e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7996ec:
    // 0x7996ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7996ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7996f0:
    // 0x7996f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x7996f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7996f4:
    // 0x7996f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7996f8:
    // 0x7996f8: 0xc0b2e28  jal         func_2CB8A0
label_7996fc:
    if (ctx->pc == 0x7996FCu) {
        ctx->pc = 0x7996FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F8u;
        // 0x7996fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799700u;
        goto label_799700;
    }
    ctx->pc = 0x7996F8u;
    SET_GPR_U32(ctx, 31, 0x799700u);
    ctx->pc = 0x7996FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996F8u;
    // 0x7996fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7996F8u, 0x799700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799700u;
label_799700:
    // 0x799700: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x799700u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_799704:
    // 0x799704: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_799708:
    // 0x799708: 0xc0a54b4  jal         func_2952D0
label_79970c:
    if (ctx->pc == 0x79970Cu) {
        ctx->pc = 0x79970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799708u;
        // 0x79970c: 0x24846ab0  addiu       $a0, $a0, 0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799710u;
        goto label_799710;
    }
    ctx->pc = 0x799708u;
    SET_GPR_U32(ctx, 31, 0x799710u);
    ctx->pc = 0x79970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799708u;
    // 0x79970c: 0x24846ab0  addiu       $a0, $a0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799708u, 0x799710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799710u;
label_799710:
    // 0x799710: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799714:
    // 0x799714: 0xc0a56f0  jal         func_295BC0
label_799718:
    if (ctx->pc == 0x799718u) {
        ctx->pc = 0x799718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799714u;
        // 0x799718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79971Cu;
        goto label_79971c;
    }
    ctx->pc = 0x799714u;
    SET_GPR_U32(ctx, 31, 0x79971Cu);
    ctx->pc = 0x799718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799714u;
    // 0x799718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799714u, 0x79971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79971Cu;
label_79971c:
    // 0x79971c: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79971cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799720:
    // 0x799720: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799724:
    // 0x799724: 0xc0b0fb6  jal         func_2C3ED8
label_799728:
    if (ctx->pc == 0x799728u) {
        ctx->pc = 0x799728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799724u;
        // 0x799728: 0x24a5a328  addiu       $a1, $a1, -0x5CD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79972Cu;
        goto label_79972c;
    }
    ctx->pc = 0x799724u;
    SET_GPR_U32(ctx, 31, 0x79972Cu);
    ctx->pc = 0x799728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799724u;
    // 0x799728: 0x24a5a328  addiu       $a1, $a1, -0x5CD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799724u, 0x79972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79972Cu;
label_79972c:
    // 0x79972c: 0xc0b101e  jal         func_2C4078
label_799730:
    if (ctx->pc == 0x799730u) {
        ctx->pc = 0x799730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79972Cu;
        // 0x799730: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799734u;
        goto label_799734;
    }
    ctx->pc = 0x79972Cu;
    SET_GPR_U32(ctx, 31, 0x799734u);
    ctx->pc = 0x799730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79972Cu;
    // 0x799730: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79972Cu, 0x799734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799734u;
label_799734:
    // 0x799734: 0xc0b0f04  jal         func_2C3C10
label_799738:
    if (ctx->pc == 0x799738u) {
        ctx->pc = 0x799738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799734u;
        // 0x799738: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79973Cu;
        goto label_79973c;
    }
    ctx->pc = 0x799734u;
    SET_GPR_U32(ctx, 31, 0x79973Cu);
    ctx->pc = 0x799738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799734u;
    // 0x799738: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799734u, 0x79973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79973Cu;
label_79973c:
    // 0x79973c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x79973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_799740:
    // 0x799740: 0x10000005  b           . + 4 + (0x5 << 2)
label_799744:
    if (ctx->pc == 0x799744u) {
        ctx->pc = 0x799744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799740u;
        // 0x799744: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799748u;
        goto label_799748;
    }
    ctx->pc = 0x799740u;
    {
        const bool branch_taken_0x799740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799740u;
        // 0x799744: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799740) {
            ctx->pc = 0x799758u;
            goto label_799758;
        }
    }
    ctx->pc = 0x799748u;
label_799748:
    // 0x799748: 0xc0a572a  jal         func_295CA8
label_79974c:
    if (ctx->pc == 0x79974Cu) {
        ctx->pc = 0x79974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799748u;
        // 0x79974c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799750u;
        goto label_799750;
    }
    ctx->pc = 0x799748u;
    SET_GPR_U32(ctx, 31, 0x799750u);
    ctx->pc = 0x79974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799748u;
    // 0x79974c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799748u, 0x799750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799750u;
label_799750:
    // 0x799750: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799754:
    // 0x799754: 0x62a00b  movn        $s4, $v1, $v0
    ctx->pc = 0x799754u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_799758:
    // 0x799758: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
label_79975c:
    if (ctx->pc == 0x79975Cu) {
        ctx->pc = 0x79975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799758u;
        // 0x79975c: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799760u;
        goto label_799760;
    }
    ctx->pc = 0x799758u;
    {
        const bool branch_taken_0x799758 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x79975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799758u;
        // 0x79975c: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799758) {
            ctx->pc = 0x799774u;
            goto label_799774;
        }
    }
    ctx->pc = 0x799760u;
label_799760:
    // 0x799760: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799764:
    // 0x799764: 0xc0b56a8  jal         func_2D5AA0
label_799768:
    if (ctx->pc == 0x799768u) {
        ctx->pc = 0x799768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799764u;
        // 0x799768: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79976Cu;
        goto label_79976c;
    }
    ctx->pc = 0x799764u;
    SET_GPR_U32(ctx, 31, 0x79976Cu);
    ctx->pc = 0x799768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799764u;
    // 0x799768: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799764u, 0x79976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79976Cu;
label_79976c:
    // 0x79976c: 0x1000ff1a  b           . + 4 + (-0xE6 << 2)
label_799770:
    if (ctx->pc == 0x799770u) {
        ctx->pc = 0x799770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79976Cu;
        // 0x799770: 0x2e22000a  sltiu       $v0, $s1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799774u;
        goto label_799774;
    }
    ctx->pc = 0x79976Cu;
    {
        const bool branch_taken_0x79976c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79976Cu;
        // 0x799770: 0x2e22000a  sltiu       $v0, $s1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79976c) {
            ctx->pc = 0x7993D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993d8;
        }
    }
    ctx->pc = 0x799774u;
label_799774:
    // 0x799774: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799778:
    // 0x799778: 0xc0b0fa2  jal         func_2C3E88
label_79977c:
    if (ctx->pc == 0x79977Cu) {
        ctx->pc = 0x79977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799778u;
        // 0x79977c: 0x2670ee00  addiu       $s0, $s3, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799780u;
        goto label_799780;
    }
    ctx->pc = 0x799778u;
    SET_GPR_U32(ctx, 31, 0x799780u);
    ctx->pc = 0x79977Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799778u;
    // 0x79977c: 0x2670ee00  addiu       $s0, $s3, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799778u, 0x799780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799780u;
label_799780:
    // 0x799780: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799784:
    // 0x799784: 0xc0b0e6c  jal         func_2C39B0
label_799788:
    if (ctx->pc == 0x799788u) {
        ctx->pc = 0x799788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799784u;
        // 0x799788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79978Cu;
        goto label_79978c;
    }
    ctx->pc = 0x799784u;
    SET_GPR_U32(ctx, 31, 0x79978Cu);
    ctx->pc = 0x799788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799784u;
    // 0x799788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799784u, 0x79978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79978Cu;
label_79978c:
    // 0x79978c: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799790:
    // 0x799790: 0xc0b0fb6  jal         func_2C3ED8
label_799794:
    if (ctx->pc == 0x799794u) {
        ctx->pc = 0x799794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799790u;
        // 0x799794: 0x26a5a320  addiu       $a1, $s5, -0x5CE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799798u;
        goto label_799798;
    }
    ctx->pc = 0x799790u;
    SET_GPR_U32(ctx, 31, 0x799798u);
    ctx->pc = 0x799794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799790u;
    // 0x799794: 0x26a5a320  addiu       $a1, $s5, -0x5CE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799790u, 0x799798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799798u;
label_799798:
    // 0x799798: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799798u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79979c:
    // 0x79979c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79979cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7997a0:
    // 0x7997a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7997a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7997a4:
    // 0x7997a4: 0x24060106  addiu       $a2, $zero, 0x106
    ctx->pc = 0x7997a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
label_7997a8:
    // 0x7997a8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7997ac:
    // 0x7997ac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7997acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7997b0:
    // 0x7997b0: 0xc0b2e28  jal         func_2CB8A0
label_7997b4:
    if (ctx->pc == 0x7997B4u) {
        ctx->pc = 0x7997B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B0u;
        // 0x7997b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997B8u;
        goto label_7997b8;
    }
    ctx->pc = 0x7997B0u;
    SET_GPR_U32(ctx, 31, 0x7997B8u);
    ctx->pc = 0x7997B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997B0u;
    // 0x7997b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7997B0u, 0x7997B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997B8u;
label_7997b8:
    // 0x7997b8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x7997b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_7997bc:
    // 0x7997bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7997bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7997c0:
    // 0x7997c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7997c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7997c4:
    // 0x7997c4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7997c8:
    // 0x7997c8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x7997c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_7997cc:
    // 0x7997cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7997ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7997d0:
    // 0x7997d0: 0xc0c194a  jal         func_306528
label_7997d4:
    if (ctx->pc == 0x7997D4u) {
        ctx->pc = 0x7997D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997D0u;
        // 0x7997d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997D8u;
        goto label_7997d8;
    }
    ctx->pc = 0x7997D0u;
    SET_GPR_U32(ctx, 31, 0x7997D8u);
    ctx->pc = 0x7997D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997D0u;
    // 0x7997d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x7997D0u, 0x7997D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997D8u;
label_7997d8:
    // 0x7997d8: 0xc0b101e  jal         func_2C4078
label_7997dc:
    if (ctx->pc == 0x7997DCu) {
        ctx->pc = 0x7997DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997D8u;
        // 0x7997dc: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997E0u;
        goto label_7997e0;
    }
    ctx->pc = 0x7997D8u;
    SET_GPR_U32(ctx, 31, 0x7997E0u);
    ctx->pc = 0x7997DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997D8u;
    // 0x7997dc: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x7997D8u, 0x7997E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997E0u;
label_7997e0:
    // 0x7997e0: 0xc0b0f04  jal         func_2C3C10
label_7997e4:
    if (ctx->pc == 0x7997E4u) {
        ctx->pc = 0x7997E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E0u;
        // 0x7997e4: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997E8u;
        goto label_7997e8;
    }
    ctx->pc = 0x7997E0u;
    SET_GPR_U32(ctx, 31, 0x7997E8u);
    ctx->pc = 0x7997E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997E0u;
    // 0x7997e4: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x7997E0u, 0x7997E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997E8u;
label_7997e8:
    // 0x7997e8: 0x26e4ea60  addiu       $a0, $s7, -0x15A0
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961760));
label_7997ec:
    // 0x7997ec: 0xc0b0a54  jal         func_2C2950
label_7997f0:
    if (ctx->pc == 0x7997F0u) {
        ctx->pc = 0x7997F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997ECu;
        // 0x7997f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997F4u;
        goto label_7997f4;
    }
    ctx->pc = 0x7997ECu;
    SET_GPR_U32(ctx, 31, 0x7997F4u);
    ctx->pc = 0x7997F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997ECu;
    // 0x7997f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x7997ECu, 0x7997F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997F4u;
label_7997f4:
    // 0x7997f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_7997f8:
    // 0x7997f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7997f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7997fc:
    // 0x7997fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7997fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799800:
    // 0x799800: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x799800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_799804:
    // 0x799804: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x799804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_799808:
    // 0x799808: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x799808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_79980c:
    // 0x79980c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79980cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799810:
    // 0x799810: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x799810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_799814:
    // 0x799814: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x799814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_799818:
    // 0x799818: 0xe6c0000c  swc1        $f0, 0xC($s6)
    ctx->pc = 0x799818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
label_79981c:
    // 0x79981c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79981cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799820:
    // 0x799820: 0xc0b2e5a  jal         func_2CB968
label_799824:
    if (ctx->pc == 0x799824u) {
        ctx->pc = 0x799824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799820u;
        // 0x799824: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799828u;
        goto label_799828;
    }
    ctx->pc = 0x799820u;
    SET_GPR_U32(ctx, 31, 0x799828u);
    ctx->pc = 0x799824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799820u;
    // 0x799824: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x799820u, 0x799828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799828u;
label_799828:
    // 0x799828: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79982c:
    // 0x79982c: 0xc0b5692  jal         func_2D5A48
label_799830:
    if (ctx->pc == 0x799830u) {
        ctx->pc = 0x799830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79982Cu;
        // 0x799830: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799834u;
        goto label_799834;
    }
    ctx->pc = 0x79982Cu;
    SET_GPR_U32(ctx, 31, 0x799834u);
    ctx->pc = 0x799830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79982Cu;
    // 0x799830: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79982Cu, 0x799834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799834u;
label_799834:
    // 0x799834: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x799834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_799838:
    // 0x799838: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x799838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79983c:
    // 0x79983c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x79983cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_799840:
    // 0x799840: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x799840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_799844:
    // 0x799844: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x799844u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_799848:
    // 0x799848: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x799848u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79984c:
    // 0x79984c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x79984cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_799850:
    // 0x799850: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x799850u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_799854:
    // 0x799854: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_799858:
    // 0x799858: 0x3e00008  jr          $ra
label_79985c:
    if (ctx->pc == 0x79985Cu) {
        ctx->pc = 0x79985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799858u;
        // 0x79985c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799860u;
        goto label_fallthrough_0x799858;
    }
    ctx->pc = 0x799858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799858u;
        // 0x79985c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799858:
    ctx->pc = 0x799860u;
}
} // namespace gh_r702
