#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r800_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r800
{
// Function: execGondola__5cR800
// Address: 0x7993a8 - 0x799a48
void execGondola__5cR800_0x7993a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("execGondola__5cR800_0x7993a8");
#endif

    switch (ctx->pc) {
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
        case 0x799860u: goto label_799860;
        case 0x799864u: goto label_799864;
        case 0x799868u: goto label_799868;
        case 0x79986cu: goto label_79986c;
        case 0x799870u: goto label_799870;
        case 0x799874u: goto label_799874;
        case 0x799878u: goto label_799878;
        case 0x79987cu: goto label_79987c;
        case 0x799880u: goto label_799880;
        case 0x799884u: goto label_799884;
        case 0x799888u: goto label_799888;
        case 0x79988cu: goto label_79988c;
        case 0x799890u: goto label_799890;
        case 0x799894u: goto label_799894;
        case 0x799898u: goto label_799898;
        case 0x79989cu: goto label_79989c;
        case 0x7998a0u: goto label_7998a0;
        case 0x7998a4u: goto label_7998a4;
        case 0x7998a8u: goto label_7998a8;
        case 0x7998acu: goto label_7998ac;
        case 0x7998b0u: goto label_7998b0;
        case 0x7998b4u: goto label_7998b4;
        case 0x7998b8u: goto label_7998b8;
        case 0x7998bcu: goto label_7998bc;
        case 0x7998c0u: goto label_7998c0;
        case 0x7998c4u: goto label_7998c4;
        case 0x7998c8u: goto label_7998c8;
        case 0x7998ccu: goto label_7998cc;
        case 0x7998d0u: goto label_7998d0;
        case 0x7998d4u: goto label_7998d4;
        case 0x7998d8u: goto label_7998d8;
        case 0x7998dcu: goto label_7998dc;
        case 0x7998e0u: goto label_7998e0;
        case 0x7998e4u: goto label_7998e4;
        case 0x7998e8u: goto label_7998e8;
        case 0x7998ecu: goto label_7998ec;
        case 0x7998f0u: goto label_7998f0;
        case 0x7998f4u: goto label_7998f4;
        case 0x7998f8u: goto label_7998f8;
        case 0x7998fcu: goto label_7998fc;
        case 0x799900u: goto label_799900;
        case 0x799904u: goto label_799904;
        case 0x799908u: goto label_799908;
        case 0x79990cu: goto label_79990c;
        case 0x799910u: goto label_799910;
        case 0x799914u: goto label_799914;
        case 0x799918u: goto label_799918;
        case 0x79991cu: goto label_79991c;
        case 0x799920u: goto label_799920;
        case 0x799924u: goto label_799924;
        case 0x799928u: goto label_799928;
        case 0x79992cu: goto label_79992c;
        case 0x799930u: goto label_799930;
        case 0x799934u: goto label_799934;
        case 0x799938u: goto label_799938;
        case 0x79993cu: goto label_79993c;
        case 0x799940u: goto label_799940;
        case 0x799944u: goto label_799944;
        case 0x799948u: goto label_799948;
        case 0x79994cu: goto label_79994c;
        case 0x799950u: goto label_799950;
        case 0x799954u: goto label_799954;
        case 0x799958u: goto label_799958;
        case 0x79995cu: goto label_79995c;
        case 0x799960u: goto label_799960;
        case 0x799964u: goto label_799964;
        case 0x799968u: goto label_799968;
        case 0x79996cu: goto label_79996c;
        case 0x799970u: goto label_799970;
        case 0x799974u: goto label_799974;
        case 0x799978u: goto label_799978;
        case 0x79997cu: goto label_79997c;
        case 0x799980u: goto label_799980;
        case 0x799984u: goto label_799984;
        case 0x799988u: goto label_799988;
        case 0x79998cu: goto label_79998c;
        case 0x799990u: goto label_799990;
        case 0x799994u: goto label_799994;
        case 0x799998u: goto label_799998;
        case 0x79999cu: goto label_79999c;
        case 0x7999a0u: goto label_7999a0;
        case 0x7999a4u: goto label_7999a4;
        case 0x7999a8u: goto label_7999a8;
        case 0x7999acu: goto label_7999ac;
        case 0x7999b0u: goto label_7999b0;
        case 0x7999b4u: goto label_7999b4;
        case 0x7999b8u: goto label_7999b8;
        case 0x7999bcu: goto label_7999bc;
        case 0x7999c0u: goto label_7999c0;
        case 0x7999c4u: goto label_7999c4;
        case 0x7999c8u: goto label_7999c8;
        case 0x7999ccu: goto label_7999cc;
        case 0x7999d0u: goto label_7999d0;
        case 0x7999d4u: goto label_7999d4;
        case 0x7999d8u: goto label_7999d8;
        case 0x7999dcu: goto label_7999dc;
        case 0x7999e0u: goto label_7999e0;
        case 0x7999e4u: goto label_7999e4;
        case 0x7999e8u: goto label_7999e8;
        case 0x7999ecu: goto label_7999ec;
        case 0x7999f0u: goto label_7999f0;
        case 0x7999f4u: goto label_7999f4;
        case 0x7999f8u: goto label_7999f8;
        case 0x7999fcu: goto label_7999fc;
        case 0x799a00u: goto label_799a00;
        case 0x799a04u: goto label_799a04;
        case 0x799a08u: goto label_799a08;
        case 0x799a0cu: goto label_799a0c;
        case 0x799a10u: goto label_799a10;
        case 0x799a14u: goto label_799a14;
        case 0x799a18u: goto label_799a18;
        case 0x799a1cu: goto label_799a1c;
        case 0x799a20u: goto label_799a20;
        case 0x799a24u: goto label_799a24;
        case 0x799a28u: goto label_799a28;
        case 0x799a2cu: goto label_799a2c;
        case 0x799a30u: goto label_799a30;
        case 0x799a34u: goto label_799a34;
        case 0x799a38u: goto label_799a38;
        case 0x799a3cu: goto label_799a3c;
        case 0x799a40u: goto label_799a40;
        case 0x799a44u: goto label_799a44;
        default: break;
    }

    ctx->pc = 0x7993a8u;

label_7993a8:
    // 0x7993a8: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_7993ac:
    // 0x7993ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7993acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7993b0:
    // 0x7993b0: 0x7fb00200  sq          $s0, 0x200($sp)
    ctx->pc = 0x7993b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 16));
label_7993b4:
    // 0x7993b4: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_7993b8:
    // 0x7993b8: 0x7fb70190  sq          $s7, 0x190($sp)
    ctx->pc = 0x7993b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 23));
label_7993bc:
    // 0x7993bc: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_7993c0:
    // 0x7993c0: 0x7fb101f0  sq          $s1, 0x1F0($sp)
    ctx->pc = 0x7993c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 17));
label_7993c4:
    // 0x7993c4: 0x7fb201e0  sq          $s2, 0x1E0($sp)
    ctx->pc = 0x7993c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 18));
label_7993c8:
    // 0x7993c8: 0x7fb301d0  sq          $s3, 0x1D0($sp)
    ctx->pc = 0x7993c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 19));
label_7993cc:
    // 0x7993cc: 0x7fb401c0  sq          $s4, 0x1C0($sp)
    ctx->pc = 0x7993ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 20));
label_7993d0:
    // 0x7993d0: 0x7fb501b0  sq          $s5, 0x1B0($sp)
    ctx->pc = 0x7993d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 21));
label_7993d4:
    // 0x7993d4: 0x7fb601a0  sq          $s6, 0x1A0($sp)
    ctx->pc = 0x7993d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 22));
label_7993d8:
    // 0x7993d8: 0x7fbe0180  sq          $fp, 0x180($sp)
    ctx->pc = 0x7993d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 30));
label_7993dc:
    // 0x7993dc: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x7993dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
label_7993e0:
    // 0x7993e0: 0xc0b0e6c  jal         func_2C39B0
label_7993e4:
    if (ctx->pc == 0x7993E4u) {
        ctx->pc = 0x7993E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993E0u;
        // 0x7993e4: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993E8u;
        goto label_7993e8;
    }
    ctx->pc = 0x7993E0u;
    SET_GPR_U32(ctx, 31, 0x7993E8u);
    ctx->pc = 0x7993E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E0u;
    // 0x7993e4: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x7993E0u, 0x7993E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993E8u;
label_7993e8:
    // 0x7993e8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_7993ec:
    // 0x7993ec: 0x2406010e  addiu       $a2, $zero, 0x10E
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
label_7993f0:
    // 0x7993f0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7993f4:
    // 0x7993f4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7993f8:
    // 0x7993f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7993f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7993fc:
    // 0x7993fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x7993fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799400:
    // 0x799400: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799404:
    // 0x799404: 0xc0b2e28  jal         func_2CB8A0
label_799408:
    if (ctx->pc == 0x799408u) {
        ctx->pc = 0x799408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799404u;
        // 0x799408: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79940Cu;
        goto label_79940c;
    }
    ctx->pc = 0x799404u;
    SET_GPR_U32(ctx, 31, 0x79940Cu);
    ctx->pc = 0x799408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799404u;
    // 0x799408: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799404u, 0x79940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79940Cu;
label_79940c:
    // 0x79940c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_799410:
    // 0x799410: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799414:
    // 0x799414: 0xc0b0fb6  jal         func_2C3ED8
label_799418:
    if (ctx->pc == 0x799418u) {
        ctx->pc = 0x799418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799414u;
        // 0x799418: 0x24a59d20  addiu       $a1, $a1, -0x62E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79941Cu;
        goto label_79941c;
    }
    ctx->pc = 0x799414u;
    SET_GPR_U32(ctx, 31, 0x79941Cu);
    ctx->pc = 0x799418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799414u;
    // 0x799418: 0x24a59d20  addiu       $a1, $a1, -0x62E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799414u, 0x79941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79941Cu;
label_79941c:
    // 0x79941c: 0xc0b6dac  jal         func_2DB6B0
label_799420:
    if (ctx->pc == 0x799420u) {
        ctx->pc = 0x799424u;
        goto label_799424;
    }
    ctx->pc = 0x79941Cu;
    SET_GPR_U32(ctx, 31, 0x799424u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79941Cu, 0x799424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799424u;
label_799424:
    // 0x799424: 0xc04b036  jal         func_12C0D8
label_799428:
    if (ctx->pc == 0x799428u) {
        ctx->pc = 0x799428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799424u;
        // 0x799428: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79942Cu;
        goto label_79942c;
    }
    ctx->pc = 0x799424u;
    SET_GPR_U32(ctx, 31, 0x79942Cu);
    ctx->pc = 0x799428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799424u;
    // 0x799428: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0D8u, 0x799424u, 0x79942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79942Cu;
label_79942c:
    // 0x79942c: 0xc0b6dac  jal         func_2DB6B0
label_799430:
    if (ctx->pc == 0x799430u) {
        ctx->pc = 0x799434u;
        goto label_799434;
    }
    ctx->pc = 0x79942Cu;
    SET_GPR_U32(ctx, 31, 0x799434u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79942Cu, 0x799434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799434u;
label_799434:
    // 0x799434: 0xc0b6dac  jal         func_2DB6B0
label_799438:
    if (ctx->pc == 0x799438u) {
        ctx->pc = 0x799438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799434u;
        // 0x799438: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79943Cu;
        goto label_79943c;
    }
    ctx->pc = 0x799434u;
    SET_GPR_U32(ctx, 31, 0x79943Cu);
    ctx->pc = 0x799438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799434u;
    // 0x799438: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799434u, 0x79943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79943Cu;
label_79943c:
    // 0x79943c: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79943cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799440:
    // 0x799440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799444:
    // 0x799444: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_799448:
    // 0x799448: 0x8c660064  lw          $a2, 0x64($v1)
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_79944c:
    // 0x79944c: 0xc0f809  jalr        $a2
label_799450:
    if (ctx->pc == 0x799450u) {
        ctx->pc = 0x799450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79944Cu;
        // 0x799450: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799454u;
        goto label_799454;
    }
    ctx->pc = 0x79944Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x799454u);
        ctx->pc = 0x799450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79944Cu;
        // 0x799450: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79944Cu, 0x799454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799454u;
label_799454:
    // 0x799454: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
label_799458:
    // 0x799458: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_79945c:
    if (ctx->pc == 0x79945Cu) {
        ctx->pc = 0x799460u;
        goto label_799460;
    }
    ctx->pc = 0x799458u;
    {
        const bool branch_taken_0x799458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799458) {
            ctx->pc = 0x79946Cu;
            goto label_79946c;
        }
    }
    ctx->pc = 0x799460u;
label_799460:
    // 0x799460: 0x8e0206a0  lw          $v0, 0x6A0($s0)
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
label_799464:
    // 0x799464: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_799468:
    if (ctx->pc == 0x799468u) {
        ctx->pc = 0x799468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799464u;
        // 0x799468: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79946Cu;
        goto label_79946c;
    }
    ctx->pc = 0x799464u;
    {
        const bool branch_taken_0x799464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799464u;
        // 0x799468: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799464) {
            ctx->pc = 0x799480u;
            goto label_799480;
        }
    }
    ctx->pc = 0x79946Cu;
label_79946c:
    // 0x79946c: 0xc04ab18  jal         func_12AC60
label_799470:
    if (ctx->pc == 0x799470u) {
        ctx->pc = 0x799470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79946Cu;
        // 0x799470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799474u;
        goto label_799474;
    }
    ctx->pc = 0x79946Cu;
    SET_GPR_U32(ctx, 31, 0x799474u);
    ctx->pc = 0x799470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79946Cu;
    // 0x799470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC60u, 0x79946Cu, 0x799474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799474u;
label_799474:
    // 0x799474: 0xc04ae7c  jal         func_12B9F0
label_799478:
    if (ctx->pc == 0x799478u) {
        ctx->pc = 0x799478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799474u;
        // 0x799478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79947Cu;
        goto label_79947c;
    }
    ctx->pc = 0x799474u;
    SET_GPR_U32(ctx, 31, 0x79947Cu);
    ctx->pc = 0x799478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799474u;
    // 0x799478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B9F0u, 0x799474u, 0x79947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79947Cu;
label_79947c:
    // 0x79947c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799480:
    // 0x799480: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
label_799484:
    // 0x799484: 0x80449d28  lb          $a0, -0x62D8($v0)
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294941992)));
label_799488:
    // 0x799488: 0x24469d28  addiu       $a2, $v0, -0x62D8
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941992));
label_79948c:
    // 0x79948c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x79948cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799490:
    // 0x799490: 0x24684c38  addiu       $t0, $v1, 0x4C38
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
label_799494:
    // 0x799494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799498:
    // 0x799498: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79949c:
    // 0x79949c: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
label_7994a0:
    // 0x7994a0: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
label_7994a4:
    // 0x7994a4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_7994a8:
    if (ctx->pc == 0x7994A8u) {
        ctx->pc = 0x7994A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A4u;
        // 0x7994a8: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994ACu;
        goto label_7994ac;
    }
    ctx->pc = 0x7994A4u;
    {
        const bool branch_taken_0x7994a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A4u;
        // 0x7994a8: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994a4) {
            ctx->pc = 0x7994D8u;
            goto label_7994d8;
        }
    }
    ctx->pc = 0x7994ACu;
label_7994ac:
    // 0x7994ac: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7994acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7994b0:
    // 0x7994b0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7994b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_7994b4:
    // 0x7994b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_7994b8:
    // 0x7994b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_7994bc:
    // 0x7994bc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7994bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_7994c0:
    // 0x7994c0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7994c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_7994c4:
    // 0x7994c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7994c8:
    if (ctx->pc == 0x7994C8u) {
        ctx->pc = 0x7994C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994C4u;
        // 0x7994c8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994CCu;
        goto label_7994cc;
    }
    ctx->pc = 0x7994C4u;
    {
        const bool branch_taken_0x7994c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994C4u;
        // 0x7994c8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994c4) {
            ctx->pc = 0x7994D8u;
            goto label_7994d8;
        }
    }
    ctx->pc = 0x7994CCu;
label_7994cc:
    // 0x7994cc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7994d0:
    // 0x7994d0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_7994d4:
    if (ctx->pc == 0x7994D4u) {
        ctx->pc = 0x7994D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D0u;
        // 0x7994d4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994D8u;
        goto label_7994d8;
    }
    ctx->pc = 0x7994D0u;
    {
        const bool branch_taken_0x7994d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7994d0) {
            ctx->pc = 0x7994D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7994D0u;
            // 0x7994d4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7994B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994b0;
        }
    }
    ctx->pc = 0x7994D8u;
label_7994d8:
    // 0x7994d8: 0xc0b1508  jal         func_2C5420
label_7994dc:
    if (ctx->pc == 0x7994DCu) {
        ctx->pc = 0x7994DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D8u;
        // 0x7994dc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994E0u;
        goto label_7994e0;
    }
    ctx->pc = 0x7994D8u;
    SET_GPR_U32(ctx, 31, 0x7994E0u);
    ctx->pc = 0x7994DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D8u;
    // 0x7994dc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x7994D8u, 0x7994E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E0u;
label_7994e0:
    // 0x7994e0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x7994e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7994e4:
    // 0x7994e4: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
label_7994e8:
    // 0x7994e8: 0x82029d30  lb          $v0, -0x62D0($s0)
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294942000)));
label_7994ec:
    // 0x7994ec: 0x26039d30  addiu       $v1, $s0, -0x62D0
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942000));
label_7994f0:
    // 0x7994f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7994f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994f4:
    // 0x7994f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_7994f8:
    if (ctx->pc == 0x7994F8u) {
        ctx->pc = 0x7994F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F4u;
        // 0x7994f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994FCu;
        goto label_7994fc;
    }
    ctx->pc = 0x7994F4u;
    {
        const bool branch_taken_0x7994f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F4u;
        // 0x7994f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994f4) {
            ctx->pc = 0x799530u;
            goto label_799530;
        }
    }
    ctx->pc = 0x7994FCu;
label_7994fc:
    // 0x7994fc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7994fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799500:
    // 0x799500: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799504:
    // 0x799504: 0x0  nop
    ctx->pc = 0x799504u;
    // NOP
label_799508:
    // 0x799508: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79950c:
    // 0x79950c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799510:
    // 0x799510: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_799514:
    // 0x799514: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799518:
    // 0x799518: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79951c:
    // 0x79951c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799520:
    if (ctx->pc == 0x799520u) {
        ctx->pc = 0x799520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79951Cu;
        // 0x799520: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799524u;
        goto label_799524;
    }
    ctx->pc = 0x79951Cu;
    {
        const bool branch_taken_0x79951c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79951Cu;
        // 0x799520: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79951c) {
            ctx->pc = 0x799530u;
            goto label_799530;
        }
    }
    ctx->pc = 0x799524u;
label_799524:
    // 0x799524: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799528:
    // 0x799528: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79952c:
    if (ctx->pc == 0x79952Cu) {
        ctx->pc = 0x79952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799528u;
        // 0x79952c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799530u;
        goto label_799530;
    }
    ctx->pc = 0x799528u;
    {
        const bool branch_taken_0x799528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799528) {
            ctx->pc = 0x79952Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799528u;
            // 0x79952c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799508;
        }
    }
    ctx->pc = 0x799530u;
label_799530:
    // 0x799530: 0xc0b1508  jal         func_2C5420
label_799534:
    if (ctx->pc == 0x799534u) {
        ctx->pc = 0x799534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799530u;
        // 0x799534: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799538u;
        goto label_799538;
    }
    ctx->pc = 0x799530u;
    SET_GPR_U32(ctx, 31, 0x799538u);
    ctx->pc = 0x799534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799530u;
    // 0x799534: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799530u, 0x799538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799538u;
label_799538:
    // 0x799538: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x799538u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79953c:
    // 0x79953c: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
label_799540:
    // 0x799540: 0x82429d38  lb          $v0, -0x62C8($s2)
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294942008)));
label_799544:
    // 0x799544: 0x26439d38  addiu       $v1, $s2, -0x62C8
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942008));
label_799548:
    // 0x799548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79954c:
    // 0x79954c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799550:
    if (ctx->pc == 0x799550u) {
        ctx->pc = 0x799550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79954Cu;
        // 0x799550: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799554u;
        goto label_799554;
    }
    ctx->pc = 0x79954Cu;
    {
        const bool branch_taken_0x79954c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79954Cu;
        // 0x799550: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79954c) {
            ctx->pc = 0x799588u;
            goto label_799588;
        }
    }
    ctx->pc = 0x799554u;
label_799554:
    // 0x799554: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799558:
    // 0x799558: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79955c:
    // 0x79955c: 0x0  nop
    ctx->pc = 0x79955cu;
    // NOP
label_799560:
    // 0x799560: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799564:
    // 0x799564: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799568:
    // 0x799568: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79956c:
    // 0x79956c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799570:
    // 0x799570: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799570u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_799574:
    // 0x799574: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799578:
    if (ctx->pc == 0x799578u) {
        ctx->pc = 0x799578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799574u;
        // 0x799578: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79957Cu;
        goto label_79957c;
    }
    ctx->pc = 0x799574u;
    {
        const bool branch_taken_0x799574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799574u;
        // 0x799578: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799574) {
            ctx->pc = 0x799588u;
            goto label_799588;
        }
    }
    ctx->pc = 0x79957Cu;
label_79957c:
    // 0x79957c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799580:
    // 0x799580: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_799584:
    if (ctx->pc == 0x799584u) {
        ctx->pc = 0x799584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799580u;
        // 0x799584: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799588u;
        goto label_799588;
    }
    ctx->pc = 0x799580u;
    {
        const bool branch_taken_0x799580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799580) {
            ctx->pc = 0x799584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799580u;
            // 0x799584: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799560;
        }
    }
    ctx->pc = 0x799588u;
label_799588:
    // 0x799588: 0xc0b1508  jal         func_2C5420
label_79958c:
    if (ctx->pc == 0x79958Cu) {
        ctx->pc = 0x79958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799588u;
        // 0x79958c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799590u;
        goto label_799590;
    }
    ctx->pc = 0x799588u;
    SET_GPR_U32(ctx, 31, 0x799590u);
    ctx->pc = 0x79958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799588u;
    // 0x79958c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799588u, 0x799590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799590u;
label_799590:
    // 0x799590: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x799590u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799594:
    // 0x799594: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x799594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
label_799598:
    // 0x799598: 0x82629d40  lb          $v0, -0x62C0($s3)
    ctx->pc = 0x799598u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294942016)));
label_79959c:
    // 0x79959c: 0x26639d40  addiu       $v1, $s3, -0x62C0
    ctx->pc = 0x79959cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942016));
label_7995a0:
    // 0x7995a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7995a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7995a4:
    // 0x7995a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_7995a8:
    if (ctx->pc == 0x7995A8u) {
        ctx->pc = 0x7995A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A4u;
        // 0x7995a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995ACu;
        goto label_7995ac;
    }
    ctx->pc = 0x7995A4u;
    {
        const bool branch_taken_0x7995a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A4u;
        // 0x7995a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995a4) {
            ctx->pc = 0x7995E0u;
            goto label_7995e0;
        }
    }
    ctx->pc = 0x7995ACu;
label_7995ac:
    // 0x7995ac: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7995acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7995b0:
    // 0x7995b0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7995b4:
    // 0x7995b4: 0x0  nop
    ctx->pc = 0x7995b4u;
    // NOP
label_7995b8:
    // 0x7995b8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_7995bc:
    // 0x7995bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_7995c0:
    // 0x7995c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7995c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_7995c4:
    // 0x7995c4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7995c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_7995c8:
    // 0x7995c8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7995c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_7995cc:
    // 0x7995cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7995d0:
    if (ctx->pc == 0x7995D0u) {
        ctx->pc = 0x7995D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995CCu;
        // 0x7995d0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995D4u;
        goto label_7995d4;
    }
    ctx->pc = 0x7995CCu;
    {
        const bool branch_taken_0x7995cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995CCu;
        // 0x7995d0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995cc) {
            ctx->pc = 0x7995E0u;
            goto label_7995e0;
        }
    }
    ctx->pc = 0x7995D4u;
label_7995d4:
    // 0x7995d4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7995d8:
    // 0x7995d8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_7995dc:
    if (ctx->pc == 0x7995DCu) {
        ctx->pc = 0x7995DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D8u;
        // 0x7995dc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995E0u;
        goto label_7995e0;
    }
    ctx->pc = 0x7995D8u;
    {
        const bool branch_taken_0x7995d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7995d8) {
            ctx->pc = 0x7995DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7995D8u;
            // 0x7995dc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995b8;
        }
    }
    ctx->pc = 0x7995E0u;
label_7995e0:
    // 0x7995e0: 0xc0b1508  jal         func_2C5420
label_7995e4:
    if (ctx->pc == 0x7995E4u) {
        ctx->pc = 0x7995E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E0u;
        // 0x7995e4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995E8u;
        goto label_7995e8;
    }
    ctx->pc = 0x7995E0u;
    SET_GPR_U32(ctx, 31, 0x7995E8u);
    ctx->pc = 0x7995E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995E0u;
    // 0x7995e4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x7995E0u, 0x7995E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995E8u;
label_7995e8:
    // 0x7995e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x7995e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7995ec:
    // 0x7995ec: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x7995ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
label_7995f0:
    // 0x7995f0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7995f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_7995f4:
    // 0x7995f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7995f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7995f8:
    // 0x7995f8: 0x24439d48  addiu       $v1, $v0, -0x62B8
    ctx->pc = 0x7995f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942024));
label_7995fc:
    // 0x7995fc: 0x80429d48  lb          $v0, -0x62B8($v0)
    ctx->pc = 0x7995fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294942024)));
label_799600:
    // 0x799600: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_799604:
    if (ctx->pc == 0x799604u) {
        ctx->pc = 0x799604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799600u;
        // 0x799604: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799608u;
        goto label_799608;
    }
    ctx->pc = 0x799600u;
    {
        const bool branch_taken_0x799600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799600u;
        // 0x799604: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799600) {
            ctx->pc = 0x799638u;
            goto label_799638;
        }
    }
    ctx->pc = 0x799608u;
label_799608:
    // 0x799608: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79960c:
    // 0x79960c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79960cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799610:
    // 0x799610: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799614:
    // 0x799614: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799618:
    // 0x799618: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79961c:
    // 0x79961c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79961cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799620:
    // 0x799620: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799620u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_799624:
    // 0x799624: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799628:
    if (ctx->pc == 0x799628u) {
        ctx->pc = 0x799628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799624u;
        // 0x799628: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79962Cu;
        goto label_79962c;
    }
    ctx->pc = 0x799624u;
    {
        const bool branch_taken_0x799624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799624u;
        // 0x799628: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799624) {
            ctx->pc = 0x799638u;
            goto label_799638;
        }
    }
    ctx->pc = 0x79962Cu;
label_79962c:
    // 0x79962c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799630:
    // 0x799630: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_799634:
    if (ctx->pc == 0x799634u) {
        ctx->pc = 0x799634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799630u;
        // 0x799634: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799638u;
        goto label_799638;
    }
    ctx->pc = 0x799630u;
    {
        const bool branch_taken_0x799630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799630) {
            ctx->pc = 0x799634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799630u;
            // 0x799634: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799610;
        }
    }
    ctx->pc = 0x799638u;
label_799638:
    // 0x799638: 0xc0b1508  jal         func_2C5420
label_79963c:
    if (ctx->pc == 0x79963Cu) {
        ctx->pc = 0x79963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799638u;
        // 0x79963c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799640u;
        goto label_799640;
    }
    ctx->pc = 0x799638u;
    SET_GPR_U32(ctx, 31, 0x799640u);
    ctx->pc = 0x79963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799638u;
    // 0x79963c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799638u, 0x799640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799640u;
label_799640:
    // 0x799640: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799644:
    // 0x799644: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x799644u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799648:
    // 0x799648: 0x80829d50  lb          $v0, -0x62B0($a0)
    ctx->pc = 0x799648u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294942032)));
label_79964c:
    // 0x79964c: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
label_799650:
    // 0x799650: 0x24839d50  addiu       $v1, $a0, -0x62B0
    ctx->pc = 0x799650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942032));
label_799654:
    // 0x799654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799658:
    // 0x799658: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_79965c:
    if (ctx->pc == 0x79965Cu) {
        ctx->pc = 0x79965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799658u;
        // 0x79965c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799660u;
        goto label_799660;
    }
    ctx->pc = 0x799658u;
    {
        const bool branch_taken_0x799658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799658u;
        // 0x79965c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799658) {
            ctx->pc = 0x799690u;
            goto label_799690;
        }
    }
    ctx->pc = 0x799660u;
label_799660:
    // 0x799660: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799664:
    // 0x799664: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799668:
    // 0x799668: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79966c:
    // 0x79966c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79966cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799670:
    // 0x799670: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_799674:
    // 0x799674: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799678:
    // 0x799678: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799678u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79967c:
    // 0x79967c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799680:
    if (ctx->pc == 0x799680u) {
        ctx->pc = 0x799680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79967Cu;
        // 0x799680: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799684u;
        goto label_799684;
    }
    ctx->pc = 0x79967Cu;
    {
        const bool branch_taken_0x79967c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79967Cu;
        // 0x799680: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79967c) {
            ctx->pc = 0x799690u;
            goto label_799690;
        }
    }
    ctx->pc = 0x799684u;
label_799684:
    // 0x799684: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799684u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799688:
    // 0x799688: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79968c:
    if (ctx->pc == 0x79968Cu) {
        ctx->pc = 0x79968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799688u;
        // 0x79968c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799690u;
        goto label_799690;
    }
    ctx->pc = 0x799688u;
    {
        const bool branch_taken_0x799688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799688) {
            ctx->pc = 0x79968Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799688u;
            // 0x79968c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799668;
        }
    }
    ctx->pc = 0x799690u;
label_799690:
    // 0x799690: 0xc0b1508  jal         func_2C5420
label_799694:
    if (ctx->pc == 0x799694u) {
        ctx->pc = 0x799694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799690u;
        // 0x799694: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799698u;
        goto label_799698;
    }
    ctx->pc = 0x799690u;
    SET_GPR_U32(ctx, 31, 0x799698u);
    ctx->pc = 0x799694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799690u;
    // 0x799694: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799690u, 0x799698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799698u;
label_799698:
    // 0x799698: 0x13c000d0  beqz        $fp, . + 4 + (0xD0 << 2)
label_79969c:
    if (ctx->pc == 0x79969Cu) {
        ctx->pc = 0x79969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799698u;
        // 0x79969c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996A0u;
        goto label_7996a0;
    }
    ctx->pc = 0x799698u;
    {
        const bool branch_taken_0x799698 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x79969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799698u;
        // 0x79969c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799698) {
            ctx->pc = 0x7999DCu;
            goto label_7999dc;
        }
    }
    ctx->pc = 0x7996A0u;
label_7996a0:
    // 0x7996a0: 0x12c000ce  beqz        $s6, . + 4 + (0xCE << 2)
label_7996a4:
    if (ctx->pc == 0x7996A4u) {
        ctx->pc = 0x7996A8u;
        goto label_7996a8;
    }
    ctx->pc = 0x7996A0u;
    {
        const bool branch_taken_0x7996a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x7996a0) {
            ctx->pc = 0x7999DCu;
            goto label_7999dc;
        }
    }
    ctx->pc = 0x7996A8u;
label_7996a8:
    // 0x7996a8: 0x12a000cc  beqz        $s5, . + 4 + (0xCC << 2)
label_7996ac:
    if (ctx->pc == 0x7996ACu) {
        ctx->pc = 0x7996B0u;
        goto label_7996b0;
    }
    ctx->pc = 0x7996A8u;
    {
        const bool branch_taken_0x7996a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x7996a8) {
            ctx->pc = 0x7999DCu;
            goto label_7999dc;
        }
    }
    ctx->pc = 0x7996B0u;
label_7996b0:
    // 0x7996b0: 0x128000ca  beqz        $s4, . + 4 + (0xCA << 2)
label_7996b4:
    if (ctx->pc == 0x7996B4u) {
        ctx->pc = 0x7996B8u;
        goto label_7996b8;
    }
    ctx->pc = 0x7996B0u;
    {
        const bool branch_taken_0x7996b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x7996b0) {
            ctx->pc = 0x7999DCu;
            goto label_7999dc;
        }
    }
    ctx->pc = 0x7996B8u;
label_7996b8:
    // 0x7996b8: 0x126000c8  beqz        $s3, . + 4 + (0xC8 << 2)
label_7996bc:
    if (ctx->pc == 0x7996BCu) {
        ctx->pc = 0x7996C0u;
        goto label_7996c0;
    }
    ctx->pc = 0x7996B8u;
    {
        const bool branch_taken_0x7996b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x7996b8) {
            ctx->pc = 0x7999DCu;
            goto label_7999dc;
        }
    }
    ctx->pc = 0x7996C0u;
label_7996c0:
    // 0x7996c0: 0x124000c6  beqz        $s2, . + 4 + (0xC6 << 2)
label_7996c4:
    if (ctx->pc == 0x7996C4u) {
        ctx->pc = 0x7996C8u;
        goto label_7996c8;
    }
    ctx->pc = 0x7996C0u;
    {
        const bool branch_taken_0x7996c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7996c0) {
            ctx->pc = 0x7999DCu;
            goto label_7999dc;
        }
    }
    ctx->pc = 0x7996C8u;
label_7996c8:
    // 0x7996c8: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x7996c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_7996cc:
    // 0x7996cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7996ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7996d0:
    // 0x7996d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_7996d4:
    // 0x7996d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7996d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_7996d8:
    // 0x7996d8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x7996d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_7996dc:
    // 0x7996dc: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x7996dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_7996e0:
    // 0x7996e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7996e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_7996e4:
    // 0x7996e4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x7996e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_7996e8:
    // 0x7996e8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x7996e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_7996ec:
    // 0x7996ec: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x7996ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_7996f0:
    // 0x7996f0: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x7996f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_7996f4:
    // 0x7996f4: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x7996f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
label_7996f8:
    // 0x7996f8: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x7996f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_7996fc:
    // 0x7996fc: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x7996fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
label_799700:
    // 0x799700: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x799700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
label_799704:
    // 0x799704: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x799704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
label_799708:
    // 0x799708: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x799708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
label_79970c:
    // 0x79970c: 0xfba000f0  sqc2        $vf0, 0xF0($sp)
    ctx->pc = 0x79970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[0]));
label_799710:
    // 0x799710: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x799710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
label_799714:
    // 0x799714: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x799714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
label_799718:
    // 0x799718: 0xfba00120  sqc2        $vf0, 0x120($sp)
    ctx->pc = 0x799718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[0]));
label_79971c:
    // 0x79971c: 0xfba00130  sqc2        $vf0, 0x130($sp)
    ctx->pc = 0x79971cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[0]));
label_799720:
    // 0x799720: 0x27b0001c  addiu       $s0, $sp, 0x1C
    ctx->pc = 0x799720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_799724:
    // 0x799724: 0xa3a00010  sb          $zero, 0x10($sp)
    ctx->pc = 0x799724u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
label_799728:
    // 0x799728: 0xa3a00011  sb          $zero, 0x11($sp)
    ctx->pc = 0x799728u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 0));
label_79972c:
    // 0x79972c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799730:
    // 0x799730: 0xa3a00012  sb          $zero, 0x12($sp)
    ctx->pc = 0x799730u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 0));
label_799734:
    // 0x799734: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x799734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799738:
    // 0x799738: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x799738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_79973c:
    // 0x79973c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x79973cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799740:
    // 0x799740: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x799740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_799744:
    // 0x799744: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x799744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_799748:
    // 0x799748: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x799748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_79974c:
    // 0x79974c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x79974cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_799750:
    // 0x799750: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x799750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_799754:
    // 0x799754: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x799754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
label_799758:
    // 0x799758: 0xafa00144  sw          $zero, 0x144($sp)
    ctx->pc = 0x799758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 0));
label_79975c:
    // 0x79975c: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x79975cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
label_799760:
    // 0x799760: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x799760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
label_799764:
    // 0x799764: 0x0  nop
    ctx->pc = 0x799764u;
    // NOP
label_799768:
    // 0x799768: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x799768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_79976c:
    // 0x79976c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79976cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_799770:
    // 0x799770: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x799770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_799774:
    // 0x799774: 0x0  nop
    ctx->pc = 0x799774u;
    // NOP
label_799778:
    // 0x799778: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_79977c:
    if (ctx->pc == 0x79977Cu) {
        ctx->pc = 0x79977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799778u;
        // 0x79977c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799780u;
        goto label_799780;
    }
    ctx->pc = 0x799778u;
    {
        const bool branch_taken_0x799778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799778u;
        // 0x79977c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799778) {
            ctx->pc = 0x799768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799768;
        }
    }
    ctx->pc = 0x799780u;
label_799780:
    // 0x799780: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_799784:
    // 0x799784: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_799788:
    // 0x799788: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79978c:
    // 0x79978c: 0x2407005a  addiu       $a3, $zero, 0x5A
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_799790:
    // 0x799790: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x799790u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799794:
    // 0x799794: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x799794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_799798:
    // 0x799798: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x799798u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_79979c:
    // 0x79979c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79979cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7997a0:
    // 0x7997a0: 0xc071a26  jal         func_1C6898
label_7997a4:
    if (ctx->pc == 0x7997A4u) {
        ctx->pc = 0x7997A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A0u;
        // 0x7997a4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997A8u;
        goto label_7997a8;
    }
    ctx->pc = 0x7997A0u;
    SET_GPR_U32(ctx, 31, 0x7997A8u);
    ctx->pc = 0x7997A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997A0u;
    // 0x7997a4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x7997A0u, 0x7997A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997A8u;
label_7997a8:
    // 0x7997a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_7997ac:
    // 0x7997ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7997acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_7997b0:
    // 0x7997b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x7997b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_7997b4:
    // 0x7997b4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x7997b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_7997b8:
    // 0x7997b8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x7997b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_7997bc:
    // 0x7997bc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x7997bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_7997c0:
    // 0x7997c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7997c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7997c4:
    // 0x7997c4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_7997c8:
    // 0x7997c8: 0xc071f54  jal         func_1C7D50
label_7997cc:
    if (ctx->pc == 0x7997CCu) {
        ctx->pc = 0x7997CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997C8u;
        // 0x7997cc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997D0u;
        goto label_7997d0;
    }
    ctx->pc = 0x7997C8u;
    SET_GPR_U32(ctx, 31, 0x7997D0u);
    ctx->pc = 0x7997CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997C8u;
    // 0x7997cc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x7997C8u, 0x7997D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997D0u;
label_7997d0:
    // 0x7997d0: 0xc0b6dac  jal         func_2DB6B0
label_7997d4:
    if (ctx->pc == 0x7997D4u) {
        ctx->pc = 0x7997D8u;
        goto label_7997d8;
    }
    ctx->pc = 0x7997D0u;
    SET_GPR_U32(ctx, 31, 0x7997D8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7997D0u, 0x7997D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997D8u;
label_7997d8:
    // 0x7997d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7997d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7997dc:
    // 0x7997dc: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_7997e0:
    if (ctx->pc == 0x7997E0u) {
        ctx->pc = 0x7997E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997DCu;
        // 0x7997e0: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997E4u;
        goto label_7997e4;
    }
    ctx->pc = 0x7997DCu;
    {
        const bool branch_taken_0x7997dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997DCu;
        // 0x7997e0: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997dc) {
            ctx->pc = 0x79981Cu;
            goto label_79981c;
        }
    }
    ctx->pc = 0x7997E4u;
label_7997e4:
    // 0x7997e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_7997e8:
    if (ctx->pc == 0x7997E8u) {
        ctx->pc = 0x7997E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E4u;
        // 0x7997e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997ECu;
        goto label_7997ec;
    }
    ctx->pc = 0x7997E4u;
    {
        const bool branch_taken_0x7997e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7997E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E4u;
        // 0x7997e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997e4) {
            ctx->pc = 0x7997F8u;
            goto label_7997f8;
        }
    }
    ctx->pc = 0x7997ECu;
label_7997ec:
    // 0x7997ec: 0x1000000b  b           . + 4 + (0xB << 2)
label_7997f0:
    if (ctx->pc == 0x7997F0u) {
        ctx->pc = 0x7997F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997ECu;
        // 0x7997f0: 0xafa5001c  sw          $a1, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997F4u;
        goto label_7997f4;
    }
    ctx->pc = 0x7997ECu;
    {
        const bool branch_taken_0x7997ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997ECu;
        // 0x7997f0: 0xafa5001c  sw          $a1, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997ec) {
            ctx->pc = 0x79981Cu;
            goto label_79981c;
        }
    }
    ctx->pc = 0x7997F4u;
label_7997f4:
    // 0x7997f4: 0x0  nop
    ctx->pc = 0x7997f4u;
    // NOP
label_7997f8:
    // 0x7997f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_7997fc:
    // 0x7997fc: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x7997fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_799800:
    // 0x799800: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_799804:
    if (ctx->pc == 0x799804u) {
        ctx->pc = 0x799804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799800u;
        // 0x799804: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799808u;
        goto label_799808;
    }
    ctx->pc = 0x799800u;
    {
        const bool branch_taken_0x799800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799800u;
        // 0x799804: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799800) {
            ctx->pc = 0x79981Cu;
            goto label_79981c;
        }
    }
    ctx->pc = 0x799808u;
label_799808:
    // 0x799808: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_79980c:
    // 0x79980c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79980cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799810:
    // 0x799810: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_799814:
    if (ctx->pc == 0x799814u) {
        ctx->pc = 0x799814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799810u;
        // 0x799814: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799818u;
        goto label_799818;
    }
    ctx->pc = 0x799810u;
    {
        const bool branch_taken_0x799810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799810) {
            ctx->pc = 0x799814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799810u;
            // 0x799814: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7997FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997fc;
        }
    }
    ctx->pc = 0x799818u;
label_799818:
    // 0x799818: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x799818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_79981c:
    // 0x79981c: 0x12c0000f  beqz        $s6, . + 4 + (0xF << 2)
label_799820:
    if (ctx->pc == 0x799820u) {
        ctx->pc = 0x799820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79981Cu;
        // 0x799820: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799824u;
        goto label_799824;
    }
    ctx->pc = 0x79981Cu;
    {
        const bool branch_taken_0x79981c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x799820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79981Cu;
        // 0x799820: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79981c) {
            ctx->pc = 0x79985Cu;
            goto label_79985c;
        }
    }
    ctx->pc = 0x799824u;
label_799824:
    // 0x799824: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_799828:
    if (ctx->pc == 0x799828u) {
        ctx->pc = 0x799828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799824u;
        // 0x799828: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79982Cu;
        goto label_79982c;
    }
    ctx->pc = 0x799824u;
    {
        const bool branch_taken_0x799824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799824u;
        // 0x799828: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799824) {
            ctx->pc = 0x799838u;
            goto label_799838;
        }
    }
    ctx->pc = 0x79982Cu;
label_79982c:
    // 0x79982c: 0x1000000b  b           . + 4 + (0xB << 2)
label_799830:
    if (ctx->pc == 0x799830u) {
        ctx->pc = 0x799830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79982Cu;
        // 0x799830: 0xafb6001c  sw          $s6, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799834u;
        goto label_799834;
    }
    ctx->pc = 0x79982Cu;
    {
        const bool branch_taken_0x79982c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79982Cu;
        // 0x799830: 0xafb6001c  sw          $s6, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79982c) {
            ctx->pc = 0x79985Cu;
            goto label_79985c;
        }
    }
    ctx->pc = 0x799834u;
label_799834:
    // 0x799834: 0x0  nop
    ctx->pc = 0x799834u;
    // NOP
label_799838:
    // 0x799838: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x799838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_79983c:
    // 0x79983c: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x79983cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_799840:
    // 0x799840: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_799844:
    if (ctx->pc == 0x799844u) {
        ctx->pc = 0x799844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799840u;
        // 0x799844: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799848u;
        goto label_799848;
    }
    ctx->pc = 0x799840u;
    {
        const bool branch_taken_0x799840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799840u;
        // 0x799844: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799840) {
            ctx->pc = 0x79985Cu;
            goto label_79985c;
        }
    }
    ctx->pc = 0x799848u;
label_799848:
    // 0x799848: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x799848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_79984c:
    // 0x79984c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79984cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799850:
    // 0x799850: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_799854:
    if (ctx->pc == 0x799854u) {
        ctx->pc = 0x799854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799850u;
        // 0x799854: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799858u;
        goto label_799858;
    }
    ctx->pc = 0x799850u;
    {
        const bool branch_taken_0x799850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799850) {
            ctx->pc = 0x799854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799850u;
            // 0x799854: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79983Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79983c;
        }
    }
    ctx->pc = 0x799858u;
label_799858:
    // 0x799858: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x799858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_79985c:
    // 0x79985c: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
label_799860:
    if (ctx->pc == 0x799860u) {
        ctx->pc = 0x799860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79985Cu;
        // 0x799860: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799864u;
        goto label_799864;
    }
    ctx->pc = 0x79985Cu;
    {
        const bool branch_taken_0x79985c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x799860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79985Cu;
        // 0x799860: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79985c) {
            ctx->pc = 0x79989Cu;
            goto label_79989c;
        }
    }
    ctx->pc = 0x799864u;
label_799864:
    // 0x799864: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_799868:
    if (ctx->pc == 0x799868u) {
        ctx->pc = 0x799868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799864u;
        // 0x799868: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79986Cu;
        goto label_79986c;
    }
    ctx->pc = 0x799864u;
    {
        const bool branch_taken_0x799864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799864u;
        // 0x799868: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799864) {
            ctx->pc = 0x799878u;
            goto label_799878;
        }
    }
    ctx->pc = 0x79986Cu;
label_79986c:
    // 0x79986c: 0x1000000b  b           . + 4 + (0xB << 2)
label_799870:
    if (ctx->pc == 0x799870u) {
        ctx->pc = 0x799870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79986Cu;
        // 0x799870: 0xafb5001c  sw          $s5, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799874u;
        goto label_799874;
    }
    ctx->pc = 0x79986Cu;
    {
        const bool branch_taken_0x79986c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79986Cu;
        // 0x799870: 0xafb5001c  sw          $s5, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79986c) {
            ctx->pc = 0x79989Cu;
            goto label_79989c;
        }
    }
    ctx->pc = 0x799874u;
label_799874:
    // 0x799874: 0x0  nop
    ctx->pc = 0x799874u;
    // NOP
label_799878:
    // 0x799878: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x799878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_79987c:
    // 0x79987c: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x79987cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_799880:
    // 0x799880: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_799884:
    if (ctx->pc == 0x799884u) {
        ctx->pc = 0x799884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799880u;
        // 0x799884: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799888u;
        goto label_799888;
    }
    ctx->pc = 0x799880u;
    {
        const bool branch_taken_0x799880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799880u;
        // 0x799884: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799880) {
            ctx->pc = 0x79989Cu;
            goto label_79989c;
        }
    }
    ctx->pc = 0x799888u;
label_799888:
    // 0x799888: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x799888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_79988c:
    // 0x79988c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79988cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799890:
    // 0x799890: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_799894:
    if (ctx->pc == 0x799894u) {
        ctx->pc = 0x799894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799890u;
        // 0x799894: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799898u;
        goto label_799898;
    }
    ctx->pc = 0x799890u;
    {
        const bool branch_taken_0x799890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799890) {
            ctx->pc = 0x799894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799890u;
            // 0x799894: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79987Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79987c;
        }
    }
    ctx->pc = 0x799898u;
label_799898:
    // 0x799898: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x799898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_79989c:
    // 0x79989c: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
label_7998a0:
    if (ctx->pc == 0x7998A0u) {
        ctx->pc = 0x7998A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79989Cu;
        // 0x7998a0: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998A4u;
        goto label_7998a4;
    }
    ctx->pc = 0x79989Cu;
    {
        const bool branch_taken_0x79989c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79989Cu;
        // 0x7998a0: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79989c) {
            ctx->pc = 0x7998DCu;
            goto label_7998dc;
        }
    }
    ctx->pc = 0x7998A4u;
label_7998a4:
    // 0x7998a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_7998a8:
    if (ctx->pc == 0x7998A8u) {
        ctx->pc = 0x7998A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A4u;
        // 0x7998a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998ACu;
        goto label_7998ac;
    }
    ctx->pc = 0x7998A4u;
    {
        const bool branch_taken_0x7998a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A4u;
        // 0x7998a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998a4) {
            ctx->pc = 0x7998B8u;
            goto label_7998b8;
        }
    }
    ctx->pc = 0x7998ACu;
label_7998ac:
    // 0x7998ac: 0x1000000b  b           . + 4 + (0xB << 2)
label_7998b0:
    if (ctx->pc == 0x7998B0u) {
        ctx->pc = 0x7998B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998ACu;
        // 0x7998b0: 0xafb4001c  sw          $s4, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998B4u;
        goto label_7998b4;
    }
    ctx->pc = 0x7998ACu;
    {
        const bool branch_taken_0x7998ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998ACu;
        // 0x7998b0: 0xafb4001c  sw          $s4, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998ac) {
            ctx->pc = 0x7998DCu;
            goto label_7998dc;
        }
    }
    ctx->pc = 0x7998B4u;
label_7998b4:
    // 0x7998b4: 0x0  nop
    ctx->pc = 0x7998b4u;
    // NOP
label_7998b8:
    // 0x7998b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7998b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_7998bc:
    // 0x7998bc: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x7998bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_7998c0:
    // 0x7998c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_7998c4:
    if (ctx->pc == 0x7998C4u) {
        ctx->pc = 0x7998C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C0u;
        // 0x7998c4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998C8u;
        goto label_7998c8;
    }
    ctx->pc = 0x7998C0u;
    {
        const bool branch_taken_0x7998c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C0u;
        // 0x7998c4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998c0) {
            ctx->pc = 0x7998DCu;
            goto label_7998dc;
        }
    }
    ctx->pc = 0x7998C8u;
label_7998c8:
    // 0x7998c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x7998c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_7998cc:
    // 0x7998cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7998ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7998d0:
    // 0x7998d0: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_7998d4:
    if (ctx->pc == 0x7998D4u) {
        ctx->pc = 0x7998D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D0u;
        // 0x7998d4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998D8u;
        goto label_7998d8;
    }
    ctx->pc = 0x7998D0u;
    {
        const bool branch_taken_0x7998d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x7998d0) {
            ctx->pc = 0x7998D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7998D0u;
            // 0x7998d4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7998BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998bc;
        }
    }
    ctx->pc = 0x7998D8u;
label_7998d8:
    // 0x7998d8: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x7998d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_7998dc:
    // 0x7998dc: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_7998e0:
    if (ctx->pc == 0x7998E0u) {
        ctx->pc = 0x7998E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998DCu;
        // 0x7998e0: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998E4u;
        goto label_7998e4;
    }
    ctx->pc = 0x7998DCu;
    {
        const bool branch_taken_0x7998dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998DCu;
        // 0x7998e0: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998dc) {
            ctx->pc = 0x79991Cu;
            goto label_79991c;
        }
    }
    ctx->pc = 0x7998E4u;
label_7998e4:
    // 0x7998e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_7998e8:
    if (ctx->pc == 0x7998E8u) {
        ctx->pc = 0x7998E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E4u;
        // 0x7998e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998ECu;
        goto label_7998ec;
    }
    ctx->pc = 0x7998E4u;
    {
        const bool branch_taken_0x7998e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E4u;
        // 0x7998e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998e4) {
            ctx->pc = 0x7998F8u;
            goto label_7998f8;
        }
    }
    ctx->pc = 0x7998ECu;
label_7998ec:
    // 0x7998ec: 0x1000000b  b           . + 4 + (0xB << 2)
label_7998f0:
    if (ctx->pc == 0x7998F0u) {
        ctx->pc = 0x7998F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998ECu;
        // 0x7998f0: 0xafb3001c  sw          $s3, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998F4u;
        goto label_7998f4;
    }
    ctx->pc = 0x7998ECu;
    {
        const bool branch_taken_0x7998ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998ECu;
        // 0x7998f0: 0xafb3001c  sw          $s3, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998ec) {
            ctx->pc = 0x79991Cu;
            goto label_79991c;
        }
    }
    ctx->pc = 0x7998F4u;
label_7998f4:
    // 0x7998f4: 0x0  nop
    ctx->pc = 0x7998f4u;
    // NOP
label_7998f8:
    // 0x7998f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7998f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_7998fc:
    // 0x7998fc: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x7998fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_799900:
    // 0x799900: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_799904:
    if (ctx->pc == 0x799904u) {
        ctx->pc = 0x799904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799900u;
        // 0x799904: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799908u;
        goto label_799908;
    }
    ctx->pc = 0x799900u;
    {
        const bool branch_taken_0x799900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799900u;
        // 0x799904: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799900) {
            ctx->pc = 0x79991Cu;
            goto label_79991c;
        }
    }
    ctx->pc = 0x799908u;
label_799908:
    // 0x799908: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x799908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_79990c:
    // 0x79990c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799910:
    // 0x799910: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_799914:
    if (ctx->pc == 0x799914u) {
        ctx->pc = 0x799914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799910u;
        // 0x799914: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799918u;
        goto label_799918;
    }
    ctx->pc = 0x799910u;
    {
        const bool branch_taken_0x799910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799910) {
            ctx->pc = 0x799914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799910u;
            // 0x799914: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7998FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998fc;
        }
    }
    ctx->pc = 0x799918u;
label_799918:
    // 0x799918: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x799918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_79991c:
    // 0x79991c: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_799920:
    if (ctx->pc == 0x799920u) {
        ctx->pc = 0x799920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79991Cu;
        // 0x799920: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799924u;
        goto label_799924;
    }
    ctx->pc = 0x79991Cu;
    {
        const bool branch_taken_0x79991c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x799920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79991Cu;
        // 0x799920: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79991c) {
            ctx->pc = 0x79995Cu;
            goto label_79995c;
        }
    }
    ctx->pc = 0x799924u;
label_799924:
    // 0x799924: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_799928:
    if (ctx->pc == 0x799928u) {
        ctx->pc = 0x799928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799924u;
        // 0x799928: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79992Cu;
        goto label_79992c;
    }
    ctx->pc = 0x799924u;
    {
        const bool branch_taken_0x799924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799924u;
        // 0x799928: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799924) {
            ctx->pc = 0x799938u;
            goto label_799938;
        }
    }
    ctx->pc = 0x79992Cu;
label_79992c:
    // 0x79992c: 0x1000000b  b           . + 4 + (0xB << 2)
label_799930:
    if (ctx->pc == 0x799930u) {
        ctx->pc = 0x799930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79992Cu;
        // 0x799930: 0xafb2001c  sw          $s2, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799934u;
        goto label_799934;
    }
    ctx->pc = 0x79992Cu;
    {
        const bool branch_taken_0x79992c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79992Cu;
        // 0x799930: 0xafb2001c  sw          $s2, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79992c) {
            ctx->pc = 0x79995Cu;
            goto label_79995c;
        }
    }
    ctx->pc = 0x799934u;
label_799934:
    // 0x799934: 0x0  nop
    ctx->pc = 0x799934u;
    // NOP
label_799938:
    // 0x799938: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x799938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_79993c:
    // 0x79993c: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x79993cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_799940:
    // 0x799940: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_799944:
    if (ctx->pc == 0x799944u) {
        ctx->pc = 0x799944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799940u;
        // 0x799944: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799948u;
        goto label_799948;
    }
    ctx->pc = 0x799940u;
    {
        const bool branch_taken_0x799940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799940u;
        // 0x799944: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799940) {
            ctx->pc = 0x79995Cu;
            goto label_79995c;
        }
    }
    ctx->pc = 0x799948u;
label_799948:
    // 0x799948: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_79994c:
    // 0x79994c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799950:
    // 0x799950: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_799954:
    if (ctx->pc == 0x799954u) {
        ctx->pc = 0x799954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799950u;
        // 0x799954: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799958u;
        goto label_799958;
    }
    ctx->pc = 0x799950u;
    {
        const bool branch_taken_0x799950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799950) {
            ctx->pc = 0x799954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799950u;
            // 0x799954: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79993Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79993c;
        }
    }
    ctx->pc = 0x799958u;
label_799958:
    // 0x799958: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x799958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_79995c:
    // 0x79995c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x79995cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799960:
    // 0x799960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799964:
    // 0x799964: 0x0  nop
    ctx->pc = 0x799964u;
    // NOP
label_799968:
    // 0x799968: 0xc070fce  jal         func_1C3F38
label_79996c:
    if (ctx->pc == 0x79996Cu) {
        ctx->pc = 0x79996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799968u;
        // 0x79996c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799970u;
        goto label_799970;
    }
    ctx->pc = 0x799968u;
    SET_GPR_U32(ctx, 31, 0x799970u);
    ctx->pc = 0x79996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799968u;
    // 0x79996c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x799968u, 0x799970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799970u;
label_799970:
    // 0x799970: 0x8ee32f84  lw          $v1, 0x2F84($s7)
    ctx->pc = 0x799970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
label_799974:
    // 0x799974: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799978:
    // 0x799978: 0xc0b56a8  jal         func_2D5AA0
label_79997c:
    if (ctx->pc == 0x79997Cu) {
        ctx->pc = 0x79997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799978u;
        // 0x79997c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799980u;
        goto label_799980;
    }
    ctx->pc = 0x799978u;
    SET_GPR_U32(ctx, 31, 0x799980u);
    ctx->pc = 0x79997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799978u;
    // 0x79997c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799978u, 0x799980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799980u;
label_799980:
    // 0x799980: 0x2e02003c  sltiu       $v0, $s0, 0x3C
    ctx->pc = 0x799980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_799984:
    // 0x799984: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_799988:
    if (ctx->pc == 0x799988u) {
        ctx->pc = 0x799988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799984u;
        // 0x799988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79998Cu;
        goto label_79998c;
    }
    ctx->pc = 0x799984u;
    {
        const bool branch_taken_0x799984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799984) {
            ctx->pc = 0x799988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799984u;
            // 0x799988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799968;
        }
    }
    ctx->pc = 0x79998Cu;
label_79998c:
    // 0x79998c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79998cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_799990:
    // 0x799990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799994:
    // 0x799994: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x799994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
label_799998:
    // 0x799998: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x799998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79999c:
    // 0x79999c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79999cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7999a0:
    // 0x7999a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7999a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7999a4:
    // 0x7999a4: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x7999a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_7999a8:
    // 0x7999a8: 0x240a001e  addiu       $t2, $zero, 0x1E
    ctx->pc = 0x7999a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_7999ac:
    // 0x7999ac: 0xc0c1c82  jal         func_307208
label_7999b0:
    if (ctx->pc == 0x7999B0u) {
        ctx->pc = 0x7999B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999ACu;
        // 0x7999b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999B4u;
        goto label_7999b4;
    }
    ctx->pc = 0x7999ACu;
    SET_GPR_U32(ctx, 31, 0x7999B4u);
    ctx->pc = 0x7999B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999ACu;
    // 0x7999b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x7999ACu, 0x7999B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999B4u;
label_7999b4:
    // 0x7999b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7999b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7999b8:
    // 0x7999b8: 0xc070fce  jal         func_1C3F38
label_7999bc:
    if (ctx->pc == 0x7999BCu) {
        ctx->pc = 0x7999BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999B8u;
        // 0x7999bc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999C0u;
        goto label_7999c0;
    }
    ctx->pc = 0x7999B8u;
    SET_GPR_U32(ctx, 31, 0x7999C0u);
    ctx->pc = 0x7999BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B8u;
    // 0x7999bc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x7999B8u, 0x7999C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999C0u;
label_7999c0:
    // 0x7999c0: 0x8ee32f84  lw          $v1, 0x2F84($s7)
    ctx->pc = 0x7999c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
label_7999c4:
    // 0x7999c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7999c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7999c8:
    // 0x7999c8: 0xc0b56a8  jal         func_2D5AA0
label_7999cc:
    if (ctx->pc == 0x7999CCu) {
        ctx->pc = 0x7999CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999C8u;
        // 0x7999cc: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999D0u;
        goto label_7999d0;
    }
    ctx->pc = 0x7999C8u;
    SET_GPR_U32(ctx, 31, 0x7999D0u);
    ctx->pc = 0x7999CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999C8u;
    // 0x7999cc: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7999C8u, 0x7999D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999D0u;
label_7999d0:
    // 0x7999d0: 0x2e02001e  sltiu       $v0, $s0, 0x1E
    ctx->pc = 0x7999d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_7999d4:
    // 0x7999d4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_7999d8:
    if (ctx->pc == 0x7999D8u) {
        ctx->pc = 0x7999D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D4u;
        // 0x7999d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999DCu;
        goto label_7999dc;
    }
    ctx->pc = 0x7999D4u;
    {
        const bool branch_taken_0x7999d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7999d4) {
            ctx->pc = 0x7999D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7999D4u;
            // 0x7999d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7999B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999b8;
        }
    }
    ctx->pc = 0x7999DCu;
label_7999dc:
    // 0x7999dc: 0xc0b0f04  jal         func_2C3C10
label_7999e0:
    if (ctx->pc == 0x7999E0u) {
        ctx->pc = 0x7999E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999DCu;
        // 0x7999e0: 0x8ee42f84  lw          $a0, 0x2F84($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999E4u;
        goto label_7999e4;
    }
    ctx->pc = 0x7999DCu;
    SET_GPR_U32(ctx, 31, 0x7999E4u);
    ctx->pc = 0x7999E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999DCu;
    // 0x7999e0: 0x8ee42f84  lw          $a0, 0x2F84($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x7999DCu, 0x7999E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E4u;
label_7999e4:
    // 0x7999e4: 0x8ee42f84  lw          $a0, 0x2F84($s7)
    ctx->pc = 0x7999e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
label_7999e8:
    // 0x7999e8: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x7999e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
label_7999ec:
    // 0x7999ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x7999ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_7999f0:
    // 0x7999f0: 0x24c67b00  addiu       $a2, $a2, 0x7B00
    ctx->pc = 0x7999f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31488));
label_7999f4:
    // 0x7999f4: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x7999f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_7999f8:
    // 0x7999f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7999f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7999fc:
    // 0x7999fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7999fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799a00:
    // 0x799a00: 0xc0b1152  jal         func_2C4548
label_799a04:
    if (ctx->pc == 0x799A04u) {
        ctx->pc = 0x799A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A00u;
        // 0x799a04: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A08u;
        goto label_799a08;
    }
    ctx->pc = 0x799A00u;
    SET_GPR_U32(ctx, 31, 0x799A08u);
    ctx->pc = 0x799A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A00u;
    // 0x799a04: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x799A00u, 0x799A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A08u;
label_799a08:
    // 0x799a08: 0x8ee22f84  lw          $v0, 0x2F84($s7)
    ctx->pc = 0x799a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
label_799a0c:
    // 0x799a0c: 0xc0b5692  jal         func_2D5A48
label_799a10:
    if (ctx->pc == 0x799A10u) {
        ctx->pc = 0x799A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A0Cu;
        // 0x799a10: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A14u;
        goto label_799a14;
    }
    ctx->pc = 0x799A0Cu;
    SET_GPR_U32(ctx, 31, 0x799A14u);
    ctx->pc = 0x799A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A0Cu;
    // 0x799a10: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799A0Cu, 0x799A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A14u;
label_799a14:
    // 0x799a14: 0x7bb00200  lq          $s0, 0x200($sp)
    ctx->pc = 0x799a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_799a18:
    // 0x799a18: 0x7bb101f0  lq          $s1, 0x1F0($sp)
    ctx->pc = 0x799a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_799a1c:
    // 0x799a1c: 0x7bb201e0  lq          $s2, 0x1E0($sp)
    ctx->pc = 0x799a1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_799a20:
    // 0x799a20: 0x7bb301d0  lq          $s3, 0x1D0($sp)
    ctx->pc = 0x799a20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_799a24:
    // 0x799a24: 0x7bb401c0  lq          $s4, 0x1C0($sp)
    ctx->pc = 0x799a24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_799a28:
    // 0x799a28: 0x7bb501b0  lq          $s5, 0x1B0($sp)
    ctx->pc = 0x799a28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_799a2c:
    // 0x799a2c: 0x7bb601a0  lq          $s6, 0x1A0($sp)
    ctx->pc = 0x799a2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_799a30:
    // 0x799a30: 0x7bb70190  lq          $s7, 0x190($sp)
    ctx->pc = 0x799a30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_799a34:
    // 0x799a34: 0x7bbe0180  lq          $fp, 0x180($sp)
    ctx->pc = 0x799a34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_799a38:
    // 0x799a38: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x799a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_799a3c:
    // 0x799a3c: 0x3e00008  jr          $ra
label_799a40:
    if (ctx->pc == 0x799A40u) {
        ctx->pc = 0x799A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A3Cu;
        // 0x799a40: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A44u;
        goto label_799a44;
    }
    ctx->pc = 0x799A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A3Cu;
        // 0x799a40: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A44u;
label_799a44:
    // 0x799a44: 0x0  nop
    ctx->pc = 0x799a44u;
    // NOP
    ctx->pc = 0x799a48u;
}
} // namespace gh_r800
