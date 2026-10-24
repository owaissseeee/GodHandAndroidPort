#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: __5cR501
// Address: 0x799290 - 0x799938
void ps2___5cR501_0x799290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___5cR501_0x799290");
#endif

    switch (ctx->pc) {
        case 0x799290u: goto label_799290;
        case 0x799294u: goto label_799294;
        case 0x799298u: goto label_799298;
        case 0x79929cu: goto label_79929c;
        case 0x7992a0u: goto label_7992a0;
        case 0x7992a4u: goto label_7992a4;
        case 0x7992a8u: goto label_7992a8;
        case 0x7992acu: goto label_7992ac;
        case 0x7992b0u: goto label_7992b0;
        case 0x7992b4u: goto label_7992b4;
        case 0x7992b8u: goto label_7992b8;
        case 0x7992bcu: goto label_7992bc;
        case 0x7992c0u: goto label_7992c0;
        case 0x7992c4u: goto label_7992c4;
        case 0x7992c8u: goto label_7992c8;
        case 0x7992ccu: goto label_7992cc;
        case 0x7992d0u: goto label_7992d0;
        case 0x7992d4u: goto label_7992d4;
        case 0x7992d8u: goto label_7992d8;
        case 0x7992dcu: goto label_7992dc;
        case 0x7992e0u: goto label_7992e0;
        case 0x7992e4u: goto label_7992e4;
        case 0x7992e8u: goto label_7992e8;
        case 0x7992ecu: goto label_7992ec;
        case 0x7992f0u: goto label_7992f0;
        case 0x7992f4u: goto label_7992f4;
        case 0x7992f8u: goto label_7992f8;
        case 0x7992fcu: goto label_7992fc;
        case 0x799300u: goto label_799300;
        case 0x799304u: goto label_799304;
        case 0x799308u: goto label_799308;
        case 0x79930cu: goto label_79930c;
        case 0x799310u: goto label_799310;
        case 0x799314u: goto label_799314;
        case 0x799318u: goto label_799318;
        case 0x79931cu: goto label_79931c;
        case 0x799320u: goto label_799320;
        case 0x799324u: goto label_799324;
        case 0x799328u: goto label_799328;
        case 0x79932cu: goto label_79932c;
        case 0x799330u: goto label_799330;
        case 0x799334u: goto label_799334;
        case 0x799338u: goto label_799338;
        case 0x79933cu: goto label_79933c;
        case 0x799340u: goto label_799340;
        case 0x799344u: goto label_799344;
        case 0x799348u: goto label_799348;
        case 0x79934cu: goto label_79934c;
        case 0x799350u: goto label_799350;
        case 0x799354u: goto label_799354;
        case 0x799358u: goto label_799358;
        case 0x79935cu: goto label_79935c;
        case 0x799360u: goto label_799360;
        case 0x799364u: goto label_799364;
        case 0x799368u: goto label_799368;
        case 0x79936cu: goto label_79936c;
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
        default: break;
    }

    ctx->pc = 0x799290u;

label_799290:
    // 0x799290: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_799294:
    // 0x799294: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x799294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_799298:
    // 0x799298: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x799298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_79929c:
    // 0x79929c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x79929cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_7992a0:
    // 0x7992a0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x7992a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_7992a4:
    // 0x7992a4: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x7992a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_7992a8:
    // 0x7992a8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x7992a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_7992ac:
    // 0x7992ac: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x7992acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_7992b0:
    // 0x7992b0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x7992b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_7992b4:
    // 0x7992b4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x7992b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_7992b8:
    // 0x7992b8: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x7992b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_7992bc:
    // 0x7992bc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x7992bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_7992c0:
    // 0x7992c0: 0xc0aa770  jal         func_2A9DC0
label_7992c4:
    if (ctx->pc == 0x7992C4u) {
        ctx->pc = 0x7992C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C0u;
        // 0x7992c4: 0x262402f0  addiu       $a0, $s1, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992C8u;
        goto label_7992c8;
    }
    ctx->pc = 0x7992C0u;
    SET_GPR_U32(ctx, 31, 0x7992C8u);
    ctx->pc = 0x7992C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992C0u;
    // 0x7992c4: 0x262402f0  addiu       $a0, $s1, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x7992C0u, 0x7992C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992C8u;
label_7992c8:
    // 0x7992c8: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_7992cc:
    // 0x7992cc: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_7992d0:
    // 0x7992d0: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936152)));
label_7992d4:
    // 0x7992d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7992d8:
    // 0x7992d8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x7992d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_7992dc:
    // 0x7992dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_7992e0:
    if (ctx->pc == 0x7992E0u) {
        ctx->pc = 0x7992E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992DCu;
        // 0x7992e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992E4u;
        goto label_7992e4;
    }
    ctx->pc = 0x7992DCu;
    {
        const bool branch_taken_0x7992dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992DCu;
        // 0x7992e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992dc) {
            ctx->pc = 0x7992ECu;
            goto label_7992ec;
        }
    }
    ctx->pc = 0x7992E4u;
label_7992e4:
    // 0x7992e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_7992e8:
    if (ctx->pc == 0x7992E8u) {
        ctx->pc = 0x7992E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992E4u;
        // 0x7992e8: 0xae220340  sw          $v0, 0x340($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992ECu;
        goto label_7992ec;
    }
    ctx->pc = 0x7992E4u;
    {
        const bool branch_taken_0x7992e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992E4u;
        // 0x7992e8: 0xae220340  sw          $v0, 0x340($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992e4) {
            ctx->pc = 0x7992F0u;
            goto label_7992f0;
        }
    }
    ctx->pc = 0x7992ECu;
label_7992ec:
    // 0x7992ec: 0xae200340  sw          $zero, 0x340($s1)
    ctx->pc = 0x7992ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 832), GPR_U32(ctx, 0));
label_7992f0:
    // 0x7992f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x7992f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_7992f4:
    // 0x7992f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7992f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7992f8:
    // 0x7992f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7992fc:
    // 0x7992fc: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_799300:
    // 0x799300: 0xa62202e0  sh          $v0, 0x2E0($s1)
    ctx->pc = 0x799300u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 736), (uint16_t)GPR_U32(ctx, 2));
label_799304:
    // 0x799304: 0xc0e94bc  jal         func_3A52F0
label_799308:
    if (ctx->pc == 0x799308u) {
        ctx->pc = 0x799308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799304u;
        // 0x799308: 0x26300280  addiu       $s0, $s1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79930Cu;
        goto label_79930c;
    }
    ctx->pc = 0x799304u;
    SET_GPR_U32(ctx, 31, 0x79930Cu);
    ctx->pc = 0x799308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799304u;
    // 0x799308: 0x26300280  addiu       $s0, $s1, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x799304u, 0x79930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79930Cu;
label_79930c:
    // 0x79930c: 0x263702f0  addiu       $s7, $s1, 0x2F0
    ctx->pc = 0x79930cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
label_799310:
    // 0x799310: 0xafb00054  sw          $s0, 0x54($sp)
    ctx->pc = 0x799310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 16));
label_799314:
    // 0x799314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799318:
    // 0x799318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79931c:
    // 0x79931c: 0xc0e94bc  jal         func_3A52F0
label_799320:
    if (ctx->pc == 0x799320u) {
        ctx->pc = 0x799320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79931Cu;
        // 0x799320: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799324u;
        goto label_799324;
    }
    ctx->pc = 0x79931Cu;
    SET_GPR_U32(ctx, 31, 0x799324u);
    ctx->pc = 0x799320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79931Cu;
    // 0x799320: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x79931Cu, 0x799324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799324u;
label_799324:
    // 0x799324: 0x263002a8  addiu       $s0, $s1, 0x2A8
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 680));
label_799328:
    // 0x799328: 0xafb00058  sw          $s0, 0x58($sp)
    ctx->pc = 0x799328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 16));
label_79932c:
    // 0x79932c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79932cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799330:
    // 0x799330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799334:
    // 0x799334: 0xc0e94bc  jal         func_3A52F0
label_799338:
    if (ctx->pc == 0x799338u) {
        ctx->pc = 0x799338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799334u;
        // 0x799338: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79933Cu;
        goto label_79933c;
    }
    ctx->pc = 0x799334u;
    SET_GPR_U32(ctx, 31, 0x79933Cu);
    ctx->pc = 0x799338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799334u;
    // 0x799338: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x799334u, 0x79933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79933Cu;
label_79933c:
    // 0x79933c: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
label_799340:
    // 0x799340: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_799344:
    // 0x799344: 0xae2002e4  sw          $zero, 0x2E4($s1)
    ctx->pc = 0x799344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 740), GPR_U32(ctx, 0));
label_799348:
    // 0x799348: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79934c:
    // 0x79934c: 0x27be0050  addiu       $fp, $sp, 0x50
    ctx->pc = 0x79934cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_799350:
    // 0x799350: 0x2455d880  addiu       $s5, $v0, -0x2780
    ctx->pc = 0x799350u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
label_799354:
    // 0x799354: 0x24131388  addiu       $s3, $zero, 0x1388
    ctx->pc = 0x799354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
label_799358:
    // 0x799358: 0x26300344  addiu       $s0, $s1, 0x344
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 836));
label_79935c:
    // 0x79935c: 0x2412000e  addiu       $s2, $zero, 0xE
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_799360:
    // 0x799360: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x799360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_799364:
    // 0x799364: 0xc0c3ea6  jal         func_30FA98
label_799368:
    if (ctx->pc == 0x799368u) {
        ctx->pc = 0x799368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799364u;
        // 0x799368: 0x240403b2  addiu       $a0, $zero, 0x3B2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 946));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79936Cu;
        goto label_79936c;
    }
    ctx->pc = 0x799364u;
    SET_GPR_U32(ctx, 31, 0x79936Cu);
    ctx->pc = 0x799368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799364u;
    // 0x799368: 0x240403b2  addiu       $a0, $zero, 0x3B2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 946));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x799364u, 0x79936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79936Cu;
label_79936c:
    // 0x79936c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79936cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799370:
    // 0x799370: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_799374:
    if (ctx->pc == 0x799374u) {
        ctx->pc = 0x799374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799370u;
        // 0x799374: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799378u;
        goto label_799378;
    }
    ctx->pc = 0x799370u;
    {
        const bool branch_taken_0x799370 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x799374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799370u;
        // 0x799374: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799370) {
            ctx->pc = 0x7993BCu;
            goto label_7993bc;
        }
    }
    ctx->pc = 0x799378u;
label_799378:
    // 0x799378: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_79937c:
    // 0x79937c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_799380:
    // 0x799380: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_799384:
    // 0x799384: 0x40f809  jalr        $v0
label_799388:
    if (ctx->pc == 0x799388u) {
        ctx->pc = 0x799388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799384u;
        // 0x799388: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79938Cu;
        goto label_79938c;
    }
    ctx->pc = 0x799384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79938Cu);
        ctx->pc = 0x799388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799384u;
        // 0x799388: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799384u, 0x79938Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79938Cu;
label_79938c:
    // 0x79938c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799390:
    // 0x799390: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x799390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_799394:
    // 0x799394: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x799394u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_799398:
    // 0x799398: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x799398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_79939c:
    // 0x79939c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_7993a0:
    // 0x7993a0: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x7993a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_7993a4:
    // 0x7993a4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x7993a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_7993a8:
    // 0x7993a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7993ac:
    // 0x7993ac: 0x60f809  jalr        $v1
label_7993b0:
    if (ctx->pc == 0x7993B0u) {
        ctx->pc = 0x7993B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ACu;
        // 0x7993b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993B4u;
        goto label_7993b4;
    }
    ctx->pc = 0x7993ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7993B4u);
        ctx->pc = 0x7993B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ACu;
        // 0x7993b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993ACu, 0x7993B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7993B4u;
label_7993b4:
    // 0x7993b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_7993b8:
    // 0x7993b8: 0xa45302ae  sh          $s3, 0x2AE($v0)
    ctx->pc = 0x7993b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 686), (uint16_t)GPR_U32(ctx, 19));
label_7993bc:
    // 0x7993bc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_7993c0:
    // 0x7993c0: 0x641ffe7  bgez        $s2, . + 4 + (-0x19 << 2)
label_7993c4:
    if (ctx->pc == 0x7993C4u) {
        ctx->pc = 0x7993C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C0u;
        // 0x7993c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993C8u;
        goto label_7993c8;
    }
    ctx->pc = 0x7993C0u;
    {
        const bool branch_taken_0x7993c0 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x7993C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C0u;
        // 0x7993c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993c0) {
            ctx->pc = 0x799360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799360;
        }
    }
    ctx->pc = 0x7993C8u;
label_7993c8:
    // 0x7993c8: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x7993c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_7993cc:
    // 0x7993cc: 0xc0c3ea6  jal         func_30FA98
label_7993d0:
    if (ctx->pc == 0x7993D0u) {
        ctx->pc = 0x7993D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993CCu;
        // 0x7993d0: 0x24040427  addiu       $a0, $zero, 0x427 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1063));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993D4u;
        goto label_7993d4;
    }
    ctx->pc = 0x7993CCu;
    SET_GPR_U32(ctx, 31, 0x7993D4u);
    ctx->pc = 0x7993D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993CCu;
    // 0x7993d0: 0x24040427  addiu       $a0, $zero, 0x427 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1063));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x7993CCu, 0x7993D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D4u;
label_7993d4:
    // 0x7993d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7993d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7993d8:
    // 0x7993d8: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
label_7993dc:
    if (ctx->pc == 0x7993DCu) {
        ctx->pc = 0x7993DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993D8u;
        // 0x7993dc: 0xae250388  sw          $a1, 0x388($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 904), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993E0u;
        goto label_7993e0;
    }
    ctx->pc = 0x7993D8u;
    {
        const bool branch_taken_0x7993d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993D8u;
        // 0x7993dc: 0xae250388  sw          $a1, 0x388($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 904), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993d8) {
            ctx->pc = 0x799440u;
            goto label_799440;
        }
    }
    ctx->pc = 0x7993E0u;
label_7993e0:
    // 0x7993e0: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x7993e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_7993e4:
    // 0x7993e4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_7993e8:
    // 0x7993e8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_7993ec:
    // 0x7993ec: 0x40f809  jalr        $v0
label_7993f0:
    if (ctx->pc == 0x7993F0u) {
        ctx->pc = 0x7993F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ECu;
        // 0x7993f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993F4u;
        goto label_7993f4;
    }
    ctx->pc = 0x7993ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7993F4u);
        ctx->pc = 0x7993F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ECu;
        // 0x7993f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993ECu, 0x7993F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7993F4u;
label_7993f4:
    // 0x7993f4: 0x8e240388  lw          $a0, 0x388($s1)
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
label_7993f8:
    // 0x7993f8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_7993fc:
    // 0x7993fc: 0x2463d880  addiu       $v1, $v1, -0x2780
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957184));
label_799400:
    // 0x799400: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_799404:
    // 0x799404: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x799404u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_799408:
    // 0x799408: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_79940c:
    // 0x79940c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_799410:
    // 0x799410: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x799410u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_799414:
    // 0x799414: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x799414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_799418:
    // 0x799418: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x799418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_79941c:
    // 0x79941c: 0xc0f809  jalr        $a2
label_799420:
    if (ctx->pc == 0x799420u) {
        ctx->pc = 0x799420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79941Cu;
        // 0x799420: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799424u;
        goto label_799424;
    }
    ctx->pc = 0x79941Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x799424u);
        ctx->pc = 0x799420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79941Cu;
        // 0x799420: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79941Cu, 0x799424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799424u;
label_799424:
    // 0x799424: 0x8e230388  lw          $v1, 0x388($s1)
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
label_799428:
    // 0x799428: 0x24021388  addiu       $v0, $zero, 0x1388
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
label_79942c:
    // 0x79942c: 0xa46202ae  sh          $v0, 0x2AE($v1)
    ctx->pc = 0x79942cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 686), (uint16_t)GPR_U32(ctx, 2));
label_799430:
    // 0x799430: 0x8e240388  lw          $a0, 0x388($s1)
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
label_799434:
    // 0x799434: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_799438:
    // 0x799438: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_79943c:
    // 0x79943c: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x79943cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_799440:
    // 0x799440: 0xae200380  sw          $zero, 0x380($s1)
    ctx->pc = 0x799440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 0));
label_799444:
    // 0x799444: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_799448:
    // 0x799448: 0xa220038c  sb          $zero, 0x38C($s1)
    ctx->pc = 0x799448u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 908), (uint8_t)GPR_U32(ctx, 0));
label_79944c:
    // 0x79944c: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x79944cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_799450:
    // 0x799450: 0xae200394  sw          $zero, 0x394($s1)
    ctx->pc = 0x799450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 916), GPR_U32(ctx, 0));
label_799454:
    // 0x799454: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
label_799458:
    // 0x799458: 0x3c06007a  lui         $a2, 0x7A
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)122 << 16));
label_79945c:
    // 0x79945c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79945cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799460:
    // 0x799460: 0x8c437a8c  lw          $v1, 0x7A8C($v0)
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31372)));
label_799464:
    // 0x799464: 0x24c60788  addiu       $a2, $a2, 0x788
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1928));
label_799468:
    // 0x799468: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79946c:
    // 0x79946c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x79946cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_799470:
    // 0x799470: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x799470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9096)));
label_799474:
    // 0x799474: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x799474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
label_799478:
    // 0x799478: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x799478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_79947c:
    // 0x79947c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_799480:
    // 0x799480: 0xac437a8c  sw          $v1, 0x7A8C($v0)
    ctx->pc = 0x799480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31372), GPR_U32(ctx, 3));
label_799484:
    // 0x799484: 0xc0ab3ea  jal         func_2ACFA8
label_799488:
    if (ctx->pc == 0x799488u) {
        ctx->pc = 0x799488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799484u;
        // 0x799488: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79948Cu;
        goto label_79948c;
    }
    ctx->pc = 0x799484u;
    SET_GPR_U32(ctx, 31, 0x79948Cu);
    ctx->pc = 0x799488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799484u;
    // 0x799488: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x799484u, 0x79948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79948Cu;
label_79948c:
    // 0x79948c: 0x26103f20  addiu       $s0, $s0, 0x3F20
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
label_799490:
    // 0x799490: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
label_799494:
    // 0x799494: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799494u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799498:
    // 0x799498: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799498u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79949c:
    // 0x79949c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79949cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994a0:
    // 0x7994a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x7994a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994a4:
    // 0x7994a4: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x7994a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
label_7994a8:
    // 0x7994a8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x7994a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_7994ac:
    // 0x7994ac: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x7994acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_7994b0:
    // 0x7994b0: 0xc08032c  jal         func_200CB0
label_7994b4:
    if (ctx->pc == 0x7994B4u) {
        ctx->pc = 0x7994B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B0u;
        // 0x7994b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994B8u;
        goto label_7994b8;
    }
    ctx->pc = 0x7994B0u;
    SET_GPR_U32(ctx, 31, 0x7994B8u);
    ctx->pc = 0x7994B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B0u;
    // 0x7994b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x7994B0u, 0x7994B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B8u;
label_7994b8:
    // 0x7994b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7994b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7994bc:
    // 0x7994bc: 0xc080458  jal         func_201160
label_7994c0:
    if (ctx->pc == 0x7994C0u) {
        ctx->pc = 0x7994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994BCu;
        // 0x7994c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994C4u;
        goto label_7994c4;
    }
    ctx->pc = 0x7994BCu;
    SET_GPR_U32(ctx, 31, 0x7994C4u);
    ctx->pc = 0x7994C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994BCu;
    // 0x7994c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x7994BCu, 0x7994C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994C4u;
label_7994c4:
    // 0x7994c4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_7994c8:
    // 0x7994c8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_7994cc:
    // 0x7994cc: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9092)));
label_7994d0:
    // 0x7994d0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_7994d4:
    // 0x7994d4: 0xc0ab33e  jal         func_2ACCF8
label_7994d8:
    if (ctx->pc == 0x7994D8u) {
        ctx->pc = 0x7994D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D4u;
        // 0x7994d8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994DCu;
        goto label_7994dc;
    }
    ctx->pc = 0x7994D4u;
    SET_GPR_U32(ctx, 31, 0x7994DCu);
    ctx->pc = 0x7994D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D4u;
    // 0x7994d8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x7994D4u, 0x7994DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994DCu;
label_7994dc:
    // 0x7994dc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x7994dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_7994e0:
    // 0x7994e0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x7994e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_7994e4:
    // 0x7994e4: 0xc0aa7a8  jal         func_2A9EA0
label_7994e8:
    if (ctx->pc == 0x7994E8u) {
        ctx->pc = 0x7994E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994E4u;
        // 0x7994e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994ECu;
        goto label_7994ec;
    }
    ctx->pc = 0x7994E4u;
    SET_GPR_U32(ctx, 31, 0x7994ECu);
    ctx->pc = 0x7994E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E4u;
    // 0x7994e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x7994E4u, 0x7994ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994ECu;
label_7994ec:
    // 0x7994ec: 0xc0aaefa  jal         func_2ABBE8
label_7994f0:
    if (ctx->pc == 0x7994F0u) {
        ctx->pc = 0x7994F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994ECu;
        // 0x7994f0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994F4u;
        goto label_7994f4;
    }
    ctx->pc = 0x7994ECu;
    SET_GPR_U32(ctx, 31, 0x7994F4u);
    ctx->pc = 0x7994F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994ECu;
    // 0x7994f0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x7994ECu, 0x7994F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994F4u;
label_7994f4:
    // 0x7994f4: 0x3c0f0075  lui         $t7, 0x75
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)117 << 16));
label_7994f8:
    // 0x7994f8: 0x262e02b8  addiu       $t6, $s1, 0x2B8
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 696));
label_7994fc:
    // 0x7994fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7994fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799500:
    // 0x799500: 0x8de34c38  lw          $v1, 0x4C38($t7)
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 19512)));
label_799504:
    // 0x799504: 0x0  nop
    ctx->pc = 0x799504u;
    // NOP
label_799508:
    // 0x799508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79950c:
    // 0x79950c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_799510:
    // 0x799510: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799514:
    // 0x799514: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x799514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_799518:
    // 0x799518: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_79951c:
    if (ctx->pc == 0x79951Cu) {
        ctx->pc = 0x79951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799518u;
        // 0x79951c: 0x24a90001  addiu       $t1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799520u;
        goto label_799520;
    }
    ctx->pc = 0x799518u;
    {
        const bool branch_taken_0x799518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799518u;
        // 0x79951c: 0x24a90001  addiu       $t1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799518) {
            ctx->pc = 0x799590u;
            goto label_799590;
        }
    }
    ctx->pc = 0x799520u;
label_799520:
    // 0x799520: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x799520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_799524:
    // 0x799524: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_799528:
    // 0x799528: 0x1c24021  addu        $t0, $t6, $v0
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_79952c:
    // 0x79952c: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x79952cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_799530:
    // 0x799530: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x799530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_799534:
    // 0x799534: 0x240d0dac  addiu       $t5, $zero, 0xDAC
    ctx->pc = 0x799534u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 3500));
label_799538:
    // 0x799538: 0x240c00fa  addiu       $t4, $zero, 0xFA
    ctx->pc = 0x799538u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_79953c:
    // 0x79953c: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_799540:
    // 0x799540: 0x3c0a0075  lui         $t2, 0x75
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)117 << 16));
label_799544:
    // 0x799544: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_799548:
    // 0x799548: 0x906202fd  lbu         $v0, 0x2FD($v1)
    ctx->pc = 0x799548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 765)));
label_79954c:
    // 0x79954c: 0x5447000b  bnel        $v0, $a3, . + 4 + (0xB << 2)
label_799550:
    if (ctx->pc == 0x799550u) {
        ctx->pc = 0x799550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79954Cu;
        // 0x799550: 0x8d434c38  lw          $v1, 0x4C38($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 19512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799554u;
        goto label_799554;
    }
    ctx->pc = 0x79954Cu;
    {
        const bool branch_taken_0x79954c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x79954c) {
            ctx->pc = 0x799550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79954Cu;
            // 0x799550: 0x8d434c38  lw          $v1, 0x4C38($t2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 19512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79957Cu;
            goto label_79957c;
        }
    }
    ctx->pc = 0x799554u;
label_799554:
    // 0x799554: 0xa46d02ae  sh          $t5, 0x2AE($v1)
    ctx->pc = 0x799554u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 686), (uint16_t)GPR_U32(ctx, 13));
label_799558:
    // 0x799558: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79955c:
    // 0x79955c: 0xa06c02b0  sb          $t4, 0x2B0($v1)
    ctx->pc = 0x79955cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 688), (uint8_t)GPR_U32(ctx, 12));
label_799560:
    // 0x799560: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x799560u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_799564:
    // 0x799564: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_799568:
    // 0x799568: 0x8c620320  lw          $v0, 0x320($v1)
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
label_79956c:
    // 0x79956c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x79956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799570:
    // 0x799570: 0x10cb0007  beq         $a2, $t3, . + 4 + (0x7 << 2)
label_799574:
    if (ctx->pc == 0x799574u) {
        ctx->pc = 0x799574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799570u;
        // 0x799574: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x799578u;
        goto label_799578;
    }
    ctx->pc = 0x799570u;
    {
        const bool branch_taken_0x799570 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 11));
        ctx->pc = 0x799574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799570u;
        // 0x799574: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799570) {
            ctx->pc = 0x799590u;
            goto label_799590;
        }
    }
    ctx->pc = 0x799578u;
label_799578:
    // 0x799578: 0x8d434c38  lw          $v1, 0x4C38($t2)
    ctx->pc = 0x799578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 19512)));
label_79957c:
    // 0x79957c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_799580:
    // 0x799580: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_799584:
    // 0x799584: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x799584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_799588:
    // 0x799588: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_79958c:
    if (ctx->pc == 0x79958Cu) {
        ctx->pc = 0x79958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799588u;
        // 0x79958c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799590u;
        goto label_799590;
    }
    ctx->pc = 0x799588u;
    {
        const bool branch_taken_0x799588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799588) {
            ctx->pc = 0x79958Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799588u;
            // 0x79958c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799548;
        }
    }
    ctx->pc = 0x799590u;
label_799590:
    // 0x799590: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x799590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_799594:
    // 0x799594: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x799594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
label_799598:
    // 0x799598: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_79959c:
    if (ctx->pc == 0x79959Cu) {
        ctx->pc = 0x79959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799598u;
        // 0x79959c: 0x8de34c38  lw          $v1, 0x4C38($t7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 19512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995A0u;
        goto label_7995a0;
    }
    ctx->pc = 0x799598u;
    {
        const bool branch_taken_0x799598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799598u;
        // 0x79959c: 0x8de34c38  lw          $v1, 0x4C38($t7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 19512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799598) {
            ctx->pc = 0x799508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799508;
        }
    }
    ctx->pc = 0x7995A0u;
label_7995a0:
    // 0x7995a0: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x7995a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
label_7995a4:
    // 0x7995a4: 0x8fb00054  lw          $s0, 0x54($sp)
    ctx->pc = 0x7995a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_7995a8:
    // 0x7995a8: 0x8c834c38  lw          $v1, 0x4C38($a0)
    ctx->pc = 0x7995a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 19512)));
label_7995ac:
    // 0x7995ac: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x7995acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_7995b0:
    // 0x7995b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7995b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7995b4:
    // 0x7995b4: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_7995b8:
    // 0x7995b8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_7995bc:
    // 0x7995bc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7995c0:
    // 0x7995c0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x7995c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7995c4:
    // 0x7995c4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_7995c8:
    if (ctx->pc == 0x7995C8u) {
        ctx->pc = 0x7995C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C4u;
        // 0x7995c8: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995CCu;
        goto label_7995cc;
    }
    ctx->pc = 0x7995C4u;
    {
        const bool branch_taken_0x7995c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C4u;
        // 0x7995c8: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995c4) {
            ctx->pc = 0x799620u;
            goto label_799620;
        }
    }
    ctx->pc = 0x7995CCu;
label_7995cc:
    // 0x7995cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_7995d0:
    // 0x7995d0: 0x906202fd  lbu         $v0, 0x2FD($v1)
    ctx->pc = 0x7995d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 765)));
label_7995d4:
    // 0x7995d4: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
label_7995d8:
    if (ctx->pc == 0x7995D8u) {
        ctx->pc = 0x7995D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D4u;
        // 0x7995d8: 0x8d034c38  lw          $v1, 0x4C38($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 19512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995DCu;
        goto label_7995dc;
    }
    ctx->pc = 0x7995D4u;
    {
        const bool branch_taken_0x7995d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x7995d4) {
            ctx->pc = 0x7995D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7995D4u;
            // 0x7995d8: 0x8d034c38  lw          $v1, 0x4C38($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 19512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995ECu;
            goto label_7995ec;
        }
    }
    ctx->pc = 0x7995DCu;
label_7995dc:
    // 0x7995dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x7995dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_7995e0:
    // 0x7995e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7995e4:
    // 0x7995e4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_7995e8:
    // 0x7995e8: 0x8d034c38  lw          $v1, 0x4C38($t0)
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 19512)));
label_7995ec:
    // 0x7995ec: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x7995ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_7995f0:
    // 0x7995f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x7995f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_7995f4:
    // 0x7995f4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x7995f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7995f8:
    // 0x7995f8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_7995fc:
    if (ctx->pc == 0x7995FCu) {
        ctx->pc = 0x7995FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F8u;
        // 0x7995fc: 0x3c070075  lui         $a3, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799600u;
        goto label_799600;
    }
    ctx->pc = 0x7995F8u;
    {
        const bool branch_taken_0x7995f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7995f8) {
            ctx->pc = 0x7995FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7995F8u;
            // 0x7995fc: 0x3c070075  lui         $a3, 0x75 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799624u;
            goto label_799624;
        }
    }
    ctx->pc = 0x799600u;
label_799600:
    // 0x799600: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x799600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_799604:
    // 0x799604: 0x906202fd  lbu         $v0, 0x2FD($v1)
    ctx->pc = 0x799604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 765)));
label_799608:
    // 0x799608: 0x5446fff8  bnel        $v0, $a2, . + 4 + (-0x8 << 2)
label_79960c:
    if (ctx->pc == 0x79960Cu) {
        ctx->pc = 0x79960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799608u;
        // 0x79960c: 0x8d034c38  lw          $v1, 0x4C38($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 19512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799610u;
        goto label_799610;
    }
    ctx->pc = 0x799608u;
    {
        const bool branch_taken_0x799608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x799608) {
            ctx->pc = 0x79960Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799608u;
            // 0x79960c: 0x8d034c38  lw          $v1, 0x4C38($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 19512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995ec;
        }
    }
    ctx->pc = 0x799610u;
label_799610:
    // 0x799610: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x799610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_799614:
    // 0x799614: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_799618:
    // 0x799618: 0x14a7fff3  bne         $a1, $a3, . + 4 + (-0xD << 2)
label_79961c:
    if (ctx->pc == 0x79961Cu) {
        ctx->pc = 0x79961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799618u;
        // 0x79961c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799620u;
        goto label_799620;
    }
    ctx->pc = 0x799618u;
    {
        const bool branch_taken_0x799618 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x79961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799618u;
        // 0x79961c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799618) {
            ctx->pc = 0x7995E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995e8;
        }
    }
    ctx->pc = 0x799620u;
label_799620:
    // 0x799620: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x799620u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
label_799624:
    // 0x799624: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x799624u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_799628:
    // 0x799628: 0x8ce24c38  lw          $v0, 0x4C38($a3)
    ctx->pc = 0x799628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 19512)));
label_79962c:
    // 0x79962c: 0x24f24c38  addiu       $s2, $a3, 0x4C38
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 19512));
label_799630:
    // 0x799630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799634:
    // 0x799634: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x799634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_799638:
    // 0x799638: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_79963c:
    // 0x79963c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x79963cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799640:
    // 0x799640: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x799640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_799644:
    // 0x799644: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x799644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_799648:
    // 0x799648: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_79964c:
    if (ctx->pc == 0x79964Cu) {
        ctx->pc = 0x79964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799648u;
        // 0x79964c: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799650u;
        goto label_799650;
    }
    ctx->pc = 0x799648u;
    {
        const bool branch_taken_0x799648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799648u;
        // 0x79964c: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799648) {
            ctx->pc = 0x7996A8u;
            goto label_7996a8;
        }
    }
    ctx->pc = 0x799650u;
label_799650:
    // 0x799650: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x799650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_799654:
    // 0x799654: 0x906202fd  lbu         $v0, 0x2FD($v1)
    ctx->pc = 0x799654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 765)));
label_799658:
    // 0x799658: 0x54460006  bnel        $v0, $a2, . + 4 + (0x6 << 2)
label_79965c:
    if (ctx->pc == 0x79965Cu) {
        ctx->pc = 0x79965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799658u;
        // 0x79965c: 0x8ce34c38  lw          $v1, 0x4C38($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 19512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799660u;
        goto label_799660;
    }
    ctx->pc = 0x799658u;
    {
        const bool branch_taken_0x799658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x799658) {
            ctx->pc = 0x79965Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799658u;
            // 0x79965c: 0x8ce34c38  lw          $v1, 0x4C38($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 19512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799674u;
            goto label_799674;
        }
    }
    ctx->pc = 0x799660u;
label_799660:
    // 0x799660: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x799660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_799664:
    // 0x799664: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799668:
    // 0x799668: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_79966c:
    // 0x79966c: 0x0  nop
    ctx->pc = 0x79966cu;
    // NOP
label_799670:
    // 0x799670: 0x8ce34c38  lw          $v1, 0x4C38($a3)
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 19512)));
label_799674:
    // 0x799674: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x799674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_799678:
    // 0x799678: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x799678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_79967c:
    // 0x79967c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x79967cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_799680:
    // 0x799680: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_799684:
    if (ctx->pc == 0x799684u) {
        ctx->pc = 0x799684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799680u;
        // 0x799684: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799688u;
        goto label_799688;
    }
    ctx->pc = 0x799680u;
    {
        const bool branch_taken_0x799680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799680) {
            ctx->pc = 0x799684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799680u;
            // 0x799684: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7996ACu;
            goto label_7996ac;
        }
    }
    ctx->pc = 0x799688u;
label_799688:
    // 0x799688: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x799688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_79968c:
    // 0x79968c: 0x906202fd  lbu         $v0, 0x2FD($v1)
    ctx->pc = 0x79968cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 765)));
label_799690:
    // 0x799690: 0x5446fff8  bnel        $v0, $a2, . + 4 + (-0x8 << 2)
label_799694:
    if (ctx->pc == 0x799694u) {
        ctx->pc = 0x799694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799690u;
        // 0x799694: 0x8ce34c38  lw          $v1, 0x4C38($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 19512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799698u;
        goto label_799698;
    }
    ctx->pc = 0x799690u;
    {
        const bool branch_taken_0x799690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x799690) {
            ctx->pc = 0x799694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799690u;
            // 0x799694: 0x8ce34c38  lw          $v1, 0x4C38($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 19512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799674u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799674;
        }
    }
    ctx->pc = 0x799698u;
label_799698:
    // 0x799698: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x799698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_79969c:
    // 0x79969c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79969cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_7996a0:
    // 0x7996a0: 0x14a8fff3  bne         $a1, $t0, . + 4 + (-0xD << 2)
label_7996a4:
    if (ctx->pc == 0x7996A4u) {
        ctx->pc = 0x7996A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A0u;
        // 0x7996a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996A8u;
        goto label_7996a8;
    }
    ctx->pc = 0x7996A0u;
    {
        const bool branch_taken_0x7996a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        ctx->pc = 0x7996A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A0u;
        // 0x7996a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996a0) {
            ctx->pc = 0x799670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799670;
        }
    }
    ctx->pc = 0x7996A8u;
label_7996a8:
    // 0x7996a8: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_7996ac:
    // 0x7996ac: 0xc0b6cac  jal         func_2DB2B0
label_7996b0:
    if (ctx->pc == 0x7996B0u) {
        ctx->pc = 0x7996B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996ACu;
        // 0x7996b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996B4u;
        goto label_7996b4;
    }
    ctx->pc = 0x7996ACu;
    SET_GPR_U32(ctx, 31, 0x7996B4u);
    ctx->pc = 0x7996B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996ACu;
    // 0x7996b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7996ACu, 0x7996B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996B4u;
label_7996b4:
    // 0x7996b4: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x7996b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
label_7996b8:
    // 0x7996b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7996b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7996bc:
    // 0x7996bc: 0xc0b6cac  jal         func_2DB2B0
label_7996c0:
    if (ctx->pc == 0x7996C0u) {
        ctx->pc = 0x7996C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996BCu;
        // 0x7996c0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996C4u;
        goto label_7996c4;
    }
    ctx->pc = 0x7996BCu;
    SET_GPR_U32(ctx, 31, 0x7996C4u);
    ctx->pc = 0x7996C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996BCu;
    // 0x7996c0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7996BCu, 0x7996C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C4u;
label_7996c4:
    // 0x7996c4: 0x2610ae50  addiu       $s0, $s0, -0x51B0
    ctx->pc = 0x7996c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
label_7996c8:
    // 0x7996c8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7996c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_7996cc:
    // 0x7996cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7996d0:
    // 0x7996d0: 0x24a50798  addiu       $a1, $a1, 0x798
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1944));
label_7996d4:
    // 0x7996d4: 0xc04ccb4  jal         func_1332D0
label_7996d8:
    if (ctx->pc == 0x7996D8u) {
        ctx->pc = 0x7996D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D4u;
        // 0x7996d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996DCu;
        goto label_7996dc;
    }
    ctx->pc = 0x7996D4u;
    SET_GPR_U32(ctx, 31, 0x7996DCu);
    ctx->pc = 0x7996D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D4u;
    // 0x7996d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x7996D4u, 0x7996DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996DCu;
label_7996dc:
    // 0x7996dc: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_7996e0:
    // 0x7996e0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7996e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_7996e4:
    // 0x7996e4: 0x24a5a1f8  addiu       $a1, $a1, -0x5E08
    ctx->pc = 0x7996e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943224));
label_7996e8:
    // 0x7996e8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7996e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7996ec:
    // 0x7996ec: 0xc0b0e48  jal         func_2C3920
label_7996f0:
    if (ctx->pc == 0x7996F0u) {
        ctx->pc = 0x7996F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996ECu;
        // 0x7996f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996F4u;
        goto label_7996f4;
    }
    ctx->pc = 0x7996ECu;
    SET_GPR_U32(ctx, 31, 0x7996F4u);
    ctx->pc = 0x7996F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996ECu;
    // 0x7996f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x7996ECu, 0x7996F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996F4u;
label_7996f4:
    // 0x7996f4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7996f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_7996f8:
    // 0x7996f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7996fc:
    // 0x7996fc: 0x24a507a8  addiu       $a1, $a1, 0x7A8
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1960));
label_799700:
    // 0x799700: 0xc04ccb4  jal         func_1332D0
label_799704:
    if (ctx->pc == 0x799704u) {
        ctx->pc = 0x799704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799700u;
        // 0x799704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799708u;
        goto label_799708;
    }
    ctx->pc = 0x799700u;
    SET_GPR_U32(ctx, 31, 0x799708u);
    ctx->pc = 0x799704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799700u;
    // 0x799704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799700u, 0x799708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799708u;
label_799708:
    // 0x799708: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79970c:
    // 0x79970c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79970cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799710:
    // 0x799710: 0x24430748  addiu       $v1, $v0, 0x748
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1864));
label_799714:
    // 0x799714: 0x80420748  lb          $v0, 0x748($v0)
    ctx->pc = 0x799714u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1864)));
label_799718:
    // 0x799718: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_79971c:
    if (ctx->pc == 0x79971Cu) {
        ctx->pc = 0x79971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799718u;
        // 0x79971c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799720u;
        goto label_799720;
    }
    ctx->pc = 0x799718u;
    {
        const bool branch_taken_0x799718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799718u;
        // 0x79971c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799718) {
            ctx->pc = 0x799750u;
            goto label_799750;
        }
    }
    ctx->pc = 0x799720u;
label_799720:
    // 0x799720: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799724:
    // 0x799724: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799728:
    // 0x799728: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79972c:
    // 0x79972c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799730:
    // 0x799730: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_799734:
    // 0x799734: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799738:
    // 0x799738: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799738u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79973c:
    // 0x79973c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799740:
    if (ctx->pc == 0x799740u) {
        ctx->pc = 0x799740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79973Cu;
        // 0x799740: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799744u;
        goto label_799744;
    }
    ctx->pc = 0x79973Cu;
    {
        const bool branch_taken_0x79973c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79973Cu;
        // 0x799740: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79973c) {
            ctx->pc = 0x799750u;
            goto label_799750;
        }
    }
    ctx->pc = 0x799744u;
label_799744:
    // 0x799744: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799744u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799748:
    // 0x799748: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79974c:
    if (ctx->pc == 0x79974Cu) {
        ctx->pc = 0x79974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799748u;
        // 0x79974c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799750u;
        goto label_799750;
    }
    ctx->pc = 0x799748u;
    {
        const bool branch_taken_0x799748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799748) {
            ctx->pc = 0x79974Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799748u;
            // 0x79974c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799728;
        }
    }
    ctx->pc = 0x799750u;
label_799750:
    // 0x799750: 0xc0b1508  jal         func_2C5420
label_799754:
    if (ctx->pc == 0x799754u) {
        ctx->pc = 0x799754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799750u;
        // 0x799754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799758u;
        goto label_799758;
    }
    ctx->pc = 0x799750u;
    SET_GPR_U32(ctx, 31, 0x799758u);
    ctx->pc = 0x799754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799750u;
    // 0x799754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799750u, 0x799758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799758u;
label_799758:
    // 0x799758: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
label_79975c:
    // 0x79975c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79975cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799760:
    // 0x799760: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x799760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799764:
    // 0x799764: 0x24684c38  addiu       $t0, $v1, 0x4C38
    ctx->pc = 0x799764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
label_799768:
    // 0x799768: 0x80820750  lb          $v0, 0x750($a0)
    ctx->pc = 0x799768u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1872)));
label_79976c:
    // 0x79976c: 0x24830750  addiu       $v1, $a0, 0x750
    ctx->pc = 0x79976cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1872));
label_799770:
    // 0x799770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799774:
    // 0x799774: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799778:
    if (ctx->pc == 0x799778u) {
        ctx->pc = 0x799778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799774u;
        // 0x799778: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79977Cu;
        goto label_79977c;
    }
    ctx->pc = 0x799774u;
    {
        const bool branch_taken_0x799774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799774u;
        // 0x799778: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799774) {
            ctx->pc = 0x7997B0u;
            goto label_7997b0;
        }
    }
    ctx->pc = 0x79977Cu;
label_79977c:
    // 0x79977c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79977cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799780:
    // 0x799780: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799784:
    // 0x799784: 0x0  nop
    ctx->pc = 0x799784u;
    // NOP
label_799788:
    // 0x799788: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799788u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79978c:
    // 0x79978c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799790:
    // 0x799790: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_799794:
    // 0x799794: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799798:
    // 0x799798: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799798u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79979c:
    // 0x79979c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7997a0:
    if (ctx->pc == 0x7997A0u) {
        ctx->pc = 0x7997A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79979Cu;
        // 0x7997a0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997A4u;
        goto label_7997a4;
    }
    ctx->pc = 0x79979Cu;
    {
        const bool branch_taken_0x79979c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79979Cu;
        // 0x7997a0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79979c) {
            ctx->pc = 0x7997B0u;
            goto label_7997b0;
        }
    }
    ctx->pc = 0x7997A4u;
label_7997a4:
    // 0x7997a4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7997a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7997a8:
    // 0x7997a8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_7997ac:
    if (ctx->pc == 0x7997ACu) {
        ctx->pc = 0x7997ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A8u;
        // 0x7997ac: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997B0u;
        goto label_7997b0;
    }
    ctx->pc = 0x7997A8u;
    {
        const bool branch_taken_0x7997a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7997a8) {
            ctx->pc = 0x7997ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7997A8u;
            // 0x7997ac: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799788;
        }
    }
    ctx->pc = 0x7997B0u;
label_7997b0:
    // 0x7997b0: 0xc0b1508  jal         func_2C5420
label_7997b4:
    if (ctx->pc == 0x7997B4u) {
        ctx->pc = 0x7997B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B0u;
        // 0x7997b4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997B8u;
        goto label_7997b8;
    }
    ctx->pc = 0x7997B0u;
    SET_GPR_U32(ctx, 31, 0x7997B8u);
    ctx->pc = 0x7997B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997B0u;
    // 0x7997b4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x7997B0u, 0x7997B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997B8u;
label_7997b8:
    // 0x7997b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7997b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7997bc:
    // 0x7997bc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x7997bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7997c0:
    // 0x7997c0: 0xc05404a  jal         func_150128
label_7997c4:
    if (ctx->pc == 0x7997C4u) {
        ctx->pc = 0x7997C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997C0u;
        // 0x7997c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997C8u;
        goto label_7997c8;
    }
    ctx->pc = 0x7997C0u;
    SET_GPR_U32(ctx, 31, 0x7997C8u);
    ctx->pc = 0x7997C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997C0u;
    // 0x7997c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x7997C0u, 0x7997C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997C8u;
label_7997c8:
    // 0x7997c8: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x7997c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
label_7997cc:
    // 0x7997cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7997ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7997d0:
    // 0x7997d0: 0x3c01bd56  lui         $at, 0xBD56
    ctx->pc = 0x7997d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48470 << 16));
label_7997d4:
    // 0x7997d4: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x7997d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
label_7997d8:
    // 0x7997d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7997d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7997dc:
    // 0x7997dc: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x7997dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
label_7997e0:
    // 0x7997e0: 0xc0527ae  jal         func_149EB8
label_7997e4:
    if (ctx->pc == 0x7997E4u) {
        ctx->pc = 0x7997E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E0u;
        // 0x7997e4: 0xe6400100  swc1        $f0, 0x100($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997E8u;
        goto label_7997e8;
    }
    ctx->pc = 0x7997E0u;
    SET_GPR_U32(ctx, 31, 0x7997E8u);
    ctx->pc = 0x7997E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997E0u;
    // 0x7997e4: 0xe6400100  swc1        $f0, 0x100($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x7997E0u, 0x7997E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997E8u;
label_7997e8:
    // 0x7997e8: 0xc0527ae  jal         func_149EB8
label_7997ec:
    if (ctx->pc == 0x7997ECu) {
        ctx->pc = 0x7997ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E8u;
        // 0x7997ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997F0u;
        goto label_7997f0;
    }
    ctx->pc = 0x7997E8u;
    SET_GPR_U32(ctx, 31, 0x7997F0u);
    ctx->pc = 0x7997ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997E8u;
    // 0x7997ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x7997E8u, 0x7997F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997F0u;
label_7997f0:
    // 0x7997f0: 0x8e230340  lw          $v1, 0x340($s1)
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_7997f4:
    // 0x7997f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_7997f8:
    // 0x7997f8: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_7997fc:
    if (ctx->pc == 0x7997FCu) {
        ctx->pc = 0x7997FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997F8u;
        // 0x7997fc: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799800u;
        goto label_799800;
    }
    ctx->pc = 0x7997F8u;
    {
        const bool branch_taken_0x7997f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7997FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997F8u;
        // 0x7997fc: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997f8) {
            ctx->pc = 0x79982Cu;
            goto label_79982c;
        }
    }
    ctx->pc = 0x799800u;
label_799800:
    // 0x799800: 0xc1e6ac2  jal         func_79AB08
label_799804:
    if (ctx->pc == 0x799804u) {
        ctx->pc = 0x799804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799800u;
        // 0x799804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799808u;
        goto label_799808;
    }
    ctx->pc = 0x799800u;
    SET_GPR_U32(ctx, 31, 0x799808u);
    ctx->pc = 0x799804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799800u;
    // 0x799804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB08u, 0x799800u, 0x799808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799808u;
label_799808:
    // 0x799808: 0xc1e6ada  jal         func_79AB68
label_79980c:
    if (ctx->pc == 0x79980Cu) {
        ctx->pc = 0x79980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799808u;
        // 0x79980c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799810u;
        goto label_799810;
    }
    ctx->pc = 0x799808u;
    SET_GPR_U32(ctx, 31, 0x799810u);
    ctx->pc = 0x79980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799808u;
    // 0x79980c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB68u, 0x799808u, 0x799810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799810u;
label_799810:
    // 0x799810: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799814:
    // 0x799814: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x799814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_799818:
    // 0x799818: 0x24a5b4c0  addiu       $a1, $a1, -0x4B40
    ctx->pc = 0x799818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948032));
label_79981c:
    // 0x79981c: 0xc0b0e24  jal         func_2C3890
label_799820:
    if (ctx->pc == 0x799820u) {
        ctx->pc = 0x799820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79981Cu;
        // 0x799820: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799824u;
        goto label_799824;
    }
    ctx->pc = 0x79981Cu;
    SET_GPR_U32(ctx, 31, 0x799824u);
    ctx->pc = 0x799820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79981Cu;
    // 0x799820: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79981Cu, 0x799824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799824u;
label_799824:
    // 0x799824: 0x10000036  b           . + 4 + (0x36 << 2)
label_799828:
    if (ctx->pc == 0x799828u) {
        ctx->pc = 0x799828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799824u;
        // 0x799828: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79982Cu;
        goto label_79982c;
    }
    ctx->pc = 0x799824u;
    {
        const bool branch_taken_0x799824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799824u;
        // 0x799828: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799824) {
            ctx->pc = 0x799900u;
            goto label_799900;
        }
    }
    ctx->pc = 0x79982Cu;
label_79982c:
    // 0x79982c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799830:
    // 0x799830: 0x24a5acf0  addiu       $a1, $a1, -0x5310
    ctx->pc = 0x799830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946032));
label_799834:
    // 0x799834: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x799834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799838:
    // 0x799838: 0xc0b0e48  jal         func_2C3920
label_79983c:
    if (ctx->pc == 0x79983Cu) {
        ctx->pc = 0x79983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799838u;
        // 0x79983c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799840u;
        goto label_799840;
    }
    ctx->pc = 0x799838u;
    SET_GPR_U32(ctx, 31, 0x799840u);
    ctx->pc = 0x79983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799838u;
    // 0x79983c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x799838u, 0x799840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799840u;
label_799840:
    // 0x799840: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_799844:
    if (ctx->pc == 0x799844u) {
        ctx->pc = 0x799844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799840u;
        // 0x799844: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799848u;
        goto label_799848;
    }
    ctx->pc = 0x799840u;
    {
        const bool branch_taken_0x799840 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x799844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799840u;
        // 0x799844: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799840) {
            ctx->pc = 0x799864u;
            goto label_799864;
        }
    }
    ctx->pc = 0x799848u;
label_799848:
    // 0x799848: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x799848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_79984c:
    // 0x79984c: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x79984cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_799850:
    // 0x799850: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x799850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_799854:
    // 0x799854: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x799854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_799858:
    // 0x799858: 0x90620050  lbu         $v0, 0x50($v1)
    ctx->pc = 0x799858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
label_79985c:
    // 0x79985c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x79985cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_799860:
    // 0x799860: 0xa0620050  sb          $v0, 0x50($v1)
    ctx->pc = 0x799860u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 2));
label_799864:
    // 0x799864: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_799868:
    // 0x799868: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79986c:
    // 0x79986c: 0x24a59e68  addiu       $a1, $a1, -0x6198
    ctx->pc = 0x79986cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942312));
label_799870:
    // 0x799870: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x799870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799874:
    // 0x799874: 0xc0b0e48  jal         func_2C3920
label_799878:
    if (ctx->pc == 0x799878u) {
        ctx->pc = 0x799878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799874u;
        // 0x799878: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79987Cu;
        goto label_79987c;
    }
    ctx->pc = 0x799874u;
    SET_GPR_U32(ctx, 31, 0x79987Cu);
    ctx->pc = 0x799878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799874u;
    // 0x799878: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x799874u, 0x79987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79987Cu;
label_79987c:
    // 0x79987c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_799880:
    if (ctx->pc == 0x799880u) {
        ctx->pc = 0x799880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79987Cu;
        // 0x799880: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799884u;
        goto label_799884;
    }
    ctx->pc = 0x79987Cu;
    {
        const bool branch_taken_0x79987c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x799880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79987Cu;
        // 0x799880: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79987c) {
            ctx->pc = 0x7998A0u;
            goto label_7998a0;
        }
    }
    ctx->pc = 0x799884u;
label_799884:
    // 0x799884: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x799884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_799888:
    // 0x799888: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x799888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_79988c:
    // 0x79988c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x79988cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_799890:
    // 0x799890: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x799890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_799894:
    // 0x799894: 0x90620050  lbu         $v0, 0x50($v1)
    ctx->pc = 0x799894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
label_799898:
    // 0x799898: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x799898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_79989c:
    // 0x79989c: 0xa0620050  sb          $v0, 0x50($v1)
    ctx->pc = 0x79989cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 2));
label_7998a0:
    // 0x7998a0: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x7998a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_7998a4:
    // 0x7998a4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7998a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_7998a8:
    // 0x7998a8: 0x24a59938  addiu       $a1, $a1, -0x66C8
    ctx->pc = 0x7998a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940984));
label_7998ac:
    // 0x7998ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x7998acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7998b0:
    // 0x7998b0: 0xc0b0e48  jal         func_2C3920
label_7998b4:
    if (ctx->pc == 0x7998B4u) {
        ctx->pc = 0x7998B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998B0u;
        // 0x7998b4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998B8u;
        goto label_7998b8;
    }
    ctx->pc = 0x7998B0u;
    SET_GPR_U32(ctx, 31, 0x7998B8u);
    ctx->pc = 0x7998B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998B0u;
    // 0x7998b4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x7998B0u, 0x7998B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998B8u;
label_7998b8:
    // 0x7998b8: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_7998bc:
    if (ctx->pc == 0x7998BCu) {
        ctx->pc = 0x7998BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998B8u;
        // 0x7998bc: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998C0u;
        goto label_7998c0;
    }
    ctx->pc = 0x7998B8u;
    {
        const bool branch_taken_0x7998b8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x7998BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998B8u;
        // 0x7998bc: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998b8) {
            ctx->pc = 0x7998DCu;
            goto label_7998dc;
        }
    }
    ctx->pc = 0x7998C0u;
label_7998c0:
    // 0x7998c0: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x7998c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_7998c4:
    // 0x7998c4: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x7998c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_7998c8:
    // 0x7998c8: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x7998c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_7998cc:
    // 0x7998cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x7998ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_7998d0:
    // 0x7998d0: 0x90620050  lbu         $v0, 0x50($v1)
    ctx->pc = 0x7998d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
label_7998d4:
    // 0x7998d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7998d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_7998d8:
    // 0x7998d8: 0xa0620050  sb          $v0, 0x50($v1)
    ctx->pc = 0x7998d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 2));
label_7998dc:
    // 0x7998dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7998e0:
    // 0x7998e0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7998e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_7998e4:
    // 0x7998e4: 0xa2220398  sb          $v0, 0x398($s1)
    ctx->pc = 0x7998e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 920), (uint8_t)GPR_U32(ctx, 2));
label_7998e8:
    // 0x7998e8: 0x24a5b878  addiu       $a1, $a1, -0x4788
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948984));
label_7998ec:
    // 0x7998ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x7998ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7998f0:
    // 0x7998f0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7998f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7998f4:
    // 0x7998f4: 0xc0b0e48  jal         func_2C3920
label_7998f8:
    if (ctx->pc == 0x7998F8u) {
        ctx->pc = 0x7998F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F4u;
        // 0x7998f8: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998FCu;
        goto label_7998fc;
    }
    ctx->pc = 0x7998F4u;
    SET_GPR_U32(ctx, 31, 0x7998FCu);
    ctx->pc = 0x7998F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998F4u;
    // 0x7998f8: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x7998F4u, 0x7998FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998FCu;
label_7998fc:
    // 0x7998fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x7998fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799900:
    // 0x799900: 0xa2200399  sb          $zero, 0x399($s1)
    ctx->pc = 0x799900u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 921), (uint8_t)GPR_U32(ctx, 0));
label_799904:
    // 0x799904: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x799904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_799908:
    // 0x799908: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x799908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_79990c:
    // 0x79990c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x79990cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_799910:
    // 0x799910: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x799910u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_799914:
    // 0x799914: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x799914u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_799918:
    // 0x799918: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x799918u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79991c:
    // 0x79991c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x79991cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_799920:
    // 0x799920: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x799920u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_799924:
    // 0x799924: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x799924u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_799928:
    // 0x799928: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x799928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_79992c:
    // 0x79992c: 0x3e00008  jr          $ra
label_799930:
    if (ctx->pc == 0x799930u) {
        ctx->pc = 0x799930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79992Cu;
        // 0x799930: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799934u;
        goto label_799934;
    }
    ctx->pc = 0x79992Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79992Cu;
        // 0x799930: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79992Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799934u;
label_799934:
    // 0x799934: 0x0  nop
    ctx->pc = 0x799934u;
    // NOP
    ctx->pc = 0x799938u;
}
} // namespace gh_r501
