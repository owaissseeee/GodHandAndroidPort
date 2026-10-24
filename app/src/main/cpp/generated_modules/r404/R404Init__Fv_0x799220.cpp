#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r404_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r404
{
// Function: R404Init__Fv
// Address: 0x799220 - 0x799b70
void R404Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R404Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799220u: goto label_799220;
        case 0x799224u: goto label_799224;
        case 0x799228u: goto label_799228;
        case 0x79922cu: goto label_79922c;
        case 0x799230u: goto label_799230;
        case 0x799234u: goto label_799234;
        case 0x799238u: goto label_799238;
        case 0x79923cu: goto label_79923c;
        case 0x799240u: goto label_799240;
        case 0x799244u: goto label_799244;
        case 0x799248u: goto label_799248;
        case 0x79924cu: goto label_79924c;
        case 0x799250u: goto label_799250;
        case 0x799254u: goto label_799254;
        case 0x799258u: goto label_799258;
        case 0x79925cu: goto label_79925c;
        case 0x799260u: goto label_799260;
        case 0x799264u: goto label_799264;
        case 0x799268u: goto label_799268;
        case 0x79926cu: goto label_79926c;
        case 0x799270u: goto label_799270;
        case 0x799274u: goto label_799274;
        case 0x799278u: goto label_799278;
        case 0x79927cu: goto label_79927c;
        case 0x799280u: goto label_799280;
        case 0x799284u: goto label_799284;
        case 0x799288u: goto label_799288;
        case 0x79928cu: goto label_79928c;
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
        case 0x799a48u: goto label_799a48;
        case 0x799a4cu: goto label_799a4c;
        case 0x799a50u: goto label_799a50;
        case 0x799a54u: goto label_799a54;
        case 0x799a58u: goto label_799a58;
        case 0x799a5cu: goto label_799a5c;
        case 0x799a60u: goto label_799a60;
        case 0x799a64u: goto label_799a64;
        case 0x799a68u: goto label_799a68;
        case 0x799a6cu: goto label_799a6c;
        case 0x799a70u: goto label_799a70;
        case 0x799a74u: goto label_799a74;
        case 0x799a78u: goto label_799a78;
        case 0x799a7cu: goto label_799a7c;
        case 0x799a80u: goto label_799a80;
        case 0x799a84u: goto label_799a84;
        case 0x799a88u: goto label_799a88;
        case 0x799a8cu: goto label_799a8c;
        case 0x799a90u: goto label_799a90;
        case 0x799a94u: goto label_799a94;
        case 0x799a98u: goto label_799a98;
        case 0x799a9cu: goto label_799a9c;
        case 0x799aa0u: goto label_799aa0;
        case 0x799aa4u: goto label_799aa4;
        case 0x799aa8u: goto label_799aa8;
        case 0x799aacu: goto label_799aac;
        case 0x799ab0u: goto label_799ab0;
        case 0x799ab4u: goto label_799ab4;
        case 0x799ab8u: goto label_799ab8;
        case 0x799abcu: goto label_799abc;
        case 0x799ac0u: goto label_799ac0;
        case 0x799ac4u: goto label_799ac4;
        case 0x799ac8u: goto label_799ac8;
        case 0x799accu: goto label_799acc;
        case 0x799ad0u: goto label_799ad0;
        case 0x799ad4u: goto label_799ad4;
        case 0x799ad8u: goto label_799ad8;
        case 0x799adcu: goto label_799adc;
        case 0x799ae0u: goto label_799ae0;
        case 0x799ae4u: goto label_799ae4;
        case 0x799ae8u: goto label_799ae8;
        case 0x799aecu: goto label_799aec;
        case 0x799af0u: goto label_799af0;
        case 0x799af4u: goto label_799af4;
        case 0x799af8u: goto label_799af8;
        case 0x799afcu: goto label_799afc;
        case 0x799b00u: goto label_799b00;
        case 0x799b04u: goto label_799b04;
        case 0x799b08u: goto label_799b08;
        case 0x799b0cu: goto label_799b0c;
        case 0x799b10u: goto label_799b10;
        case 0x799b14u: goto label_799b14;
        case 0x799b18u: goto label_799b18;
        case 0x799b1cu: goto label_799b1c;
        case 0x799b20u: goto label_799b20;
        case 0x799b24u: goto label_799b24;
        case 0x799b28u: goto label_799b28;
        case 0x799b2cu: goto label_799b2c;
        case 0x799b30u: goto label_799b30;
        case 0x799b34u: goto label_799b34;
        case 0x799b38u: goto label_799b38;
        case 0x799b3cu: goto label_799b3c;
        case 0x799b40u: goto label_799b40;
        case 0x799b44u: goto label_799b44;
        case 0x799b48u: goto label_799b48;
        case 0x799b4cu: goto label_799b4c;
        case 0x799b50u: goto label_799b50;
        case 0x799b54u: goto label_799b54;
        case 0x799b58u: goto label_799b58;
        case 0x799b5cu: goto label_799b5c;
        case 0x799b60u: goto label_799b60;
        case 0x799b64u: goto label_799b64;
        case 0x799b68u: goto label_799b68;
        case 0x799b6cu: goto label_799b6c;
        default: break;
    }

    ctx->pc = 0x799220u;

label_799220:
    // 0x799220: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_799224:
    // 0x799224: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_799228:
    // 0x799228: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_79922c:
    // 0x79922c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_799230:
    // 0x799230: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799230u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
label_799234:
    // 0x799234: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x799234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_799238:
    // 0x799238: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x799238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79923c:
    // 0x79923c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x79923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_799240:
    // 0x799240: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x799240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_799244:
    // 0x799244: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x799244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_799248:
    // 0x799248: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x799248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_79924c:
    // 0x79924c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x79924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_799250:
    // 0x799250: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x799250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_799254:
    // 0x799254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799258:
    // 0x799258: 0xc1e6460  jal         func_799180
label_79925c:
    if (ctx->pc == 0x79925Cu) {
        ctx->pc = 0x79925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799258u;
        // 0x79925c: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x799260u;
        goto label_799260;
    }
    ctx->pc = 0x799258u;
    SET_GPR_U32(ctx, 31, 0x799260u);
    ctx->pc = 0x79925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799258u;
    // 0x79925c: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799258u, 0x799260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799260u;
label_799260:
    // 0x799260: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_799264:
    // 0x799264: 0xae02ad00  sw          $v0, -0x5300($s0)
    ctx->pc = 0x799264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294946048), GPR_U32(ctx, 2));
label_799268:
    // 0x799268: 0x8c828658  lw          $v0, -0x79A8($a0)
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936152)));
label_79926c:
    // 0x79926c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799270:
    // 0x799270: 0x460000f  bltz        $v1, . + 4 + (0xF << 2)
label_799274:
    if (ctx->pc == 0x799274u) {
        ctx->pc = 0x799274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799270u;
        // 0x799274: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799278u;
        goto label_799278;
    }
    ctx->pc = 0x799270u;
    {
        const bool branch_taken_0x799270 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x799274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799270u;
        // 0x799274: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799270) {
            ctx->pc = 0x7992B0u;
            goto label_7992b0;
        }
    }
    ctx->pc = 0x799278u;
label_799278:
    // 0x799278: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79927c:
    // 0x79927c: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799280:
    // 0x799280: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
label_799284:
    // 0x799284: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799288:
    // 0x799288: 0x24e79d08  addiu       $a3, $a3, -0x62F8
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941960));
label_79928c:
    // 0x79928c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799290:
    // 0x799290: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799290u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799294:
    // 0x799294: 0xc0b09e4  jal         func_2C2790
label_799298:
    if (ctx->pc == 0x799298u) {
        ctx->pc = 0x799298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799294u;
        // 0x799298: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79929Cu;
        goto label_79929c;
    }
    ctx->pc = 0x799294u;
    SET_GPR_U32(ctx, 31, 0x79929Cu);
    ctx->pc = 0x799298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799294u;
    // 0x799298: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799294u, 0x79929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79929Cu;
label_79929c:
    // 0x79929c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79929cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7992a0:
    // 0x7992a0: 0xc1e67a2  jal         func_799E88
label_7992a4:
    if (ctx->pc == 0x7992A4u) {
        ctx->pc = 0x7992A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992A0u;
        // 0x7992a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992A8u;
        goto label_7992a8;
    }
    ctx->pc = 0x7992A0u;
    SET_GPR_U32(ctx, 31, 0x7992A8u);
    ctx->pc = 0x7992A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992A0u;
    // 0x7992a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799E88u, 0x7992A0u, 0x7992A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992A8u;
label_7992a8:
    // 0x7992a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_7992ac:
    if (ctx->pc == 0x7992ACu) {
        ctx->pc = 0x7992ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992A8u;
        // 0x7992ac: 0x8e24ad00  lw          $a0, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992B0u;
        goto label_7992b0;
    }
    ctx->pc = 0x7992A8u;
    {
        const bool branch_taken_0x7992a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992A8u;
        // 0x7992ac: 0x8e24ad00  lw          $a0, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992a8) {
            ctx->pc = 0x7992C0u;
            goto label_7992c0;
        }
    }
    ctx->pc = 0x7992B0u;
label_7992b0:
    // 0x7992b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7992b4:
    // 0x7992b4: 0xc1e67a2  jal         func_799E88
label_7992b8:
    if (ctx->pc == 0x7992B8u) {
        ctx->pc = 0x7992B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992B4u;
        // 0x7992b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992BCu;
        goto label_7992bc;
    }
    ctx->pc = 0x7992B4u;
    SET_GPR_U32(ctx, 31, 0x7992BCu);
    ctx->pc = 0x7992B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992B4u;
    // 0x7992b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799E88u, 0x7992B4u, 0x7992BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992BCu;
label_7992bc:
    // 0x7992bc: 0x8e24ad00  lw          $a0, -0x5300($s1)
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_7992c0:
    // 0x7992c0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x7992c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_7992c4:
    // 0x7992c4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x7992c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_7992c8:
    // 0x7992c8: 0x8e828658  lw          $v0, -0x79A8($s4)
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
label_7992cc:
    // 0x7992cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7992d0:
    // 0x7992d0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x7992d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_7992d4:
    // 0x7992d4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_7992d8:
    if (ctx->pc == 0x7992D8u) {
        ctx->pc = 0x7992D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992D4u;
        // 0x7992d8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992DCu;
        goto label_7992dc;
    }
    ctx->pc = 0x7992D4u;
    {
        const bool branch_taken_0x7992d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992D4u;
        // 0x7992d8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992d4) {
            ctx->pc = 0x7992F4u;
            goto label_7992f4;
        }
    }
    ctx->pc = 0x7992DCu;
label_7992dc:
    // 0x7992dc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x7992dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_7992e0:
    // 0x7992e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_7992e4:
    if (ctx->pc == 0x7992E4u) {
        ctx->pc = 0x7992E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992E0u;
        // 0x7992e4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992E8u;
        goto label_7992e8;
    }
    ctx->pc = 0x7992E0u;
    {
        const bool branch_taken_0x7992e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992E0u;
        // 0x7992e4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992e0) {
            ctx->pc = 0x7992F4u;
            goto label_7992f4;
        }
    }
    ctx->pc = 0x7992E8u;
label_7992e8:
    // 0x7992e8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x7992e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_7992ec:
    // 0x7992ec: 0x144000e7  bnez        $v0, . + 4 + (0xE7 << 2)
label_7992f0:
    if (ctx->pc == 0x7992F0u) {
        ctx->pc = 0x7992F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992ECu;
        // 0x7992f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992F4u;
        goto label_7992f4;
    }
    ctx->pc = 0x7992ECu;
    {
        const bool branch_taken_0x7992ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7992F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992ECu;
        // 0x7992f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992ec) {
            ctx->pc = 0x79968Cu;
            goto label_79968c;
        }
    }
    ctx->pc = 0x7992F4u;
label_7992f4:
    // 0x7992f4: 0x8e828658  lw          $v0, -0x79A8($s4)
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
label_7992f8:
    // 0x7992f8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_7992fc:
    // 0x7992fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799300:
    // 0x799300: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_799304:
    // 0x799304: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
label_799308:
    if (ctx->pc == 0x799308u) {
        ctx->pc = 0x799308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799304u;
        // 0x799308: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79930Cu;
        goto label_79930c;
    }
    ctx->pc = 0x799304u;
    {
        const bool branch_taken_0x799304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799304u;
        // 0x799308: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799304) {
            ctx->pc = 0x7993BCu;
            goto label_7993bc;
        }
    }
    ctx->pc = 0x79930Cu;
label_79930c:
    // 0x79930c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79930cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_799310:
    // 0x799310: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799314:
    // 0x799314: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
label_799318:
    // 0x799318: 0x24e7a260  addiu       $a3, $a3, -0x5DA0
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943328));
label_79931c:
    // 0x79931c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_799320:
    // 0x799320: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799324:
    // 0x799324: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799328:
    // 0x799328: 0xc0b09e4  jal         func_2C2790
label_79932c:
    if (ctx->pc == 0x79932Cu) {
        ctx->pc = 0x79932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799328u;
        // 0x79932c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799330u;
        goto label_799330;
    }
    ctx->pc = 0x799328u;
    SET_GPR_U32(ctx, 31, 0x799330u);
    ctx->pc = 0x79932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799328u;
    // 0x79932c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799328u, 0x799330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799330u;
label_799330:
    // 0x799330: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
label_799334:
    // 0x799334: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799338:
    // 0x799338: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
label_79933c:
    // 0x79933c: 0x8044aba0  lb          $a0, -0x5460($v0)
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294945696)));
label_799340:
    // 0x799340: 0x2446aba0  addiu       $a2, $v0, -0x5460
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945696));
label_799344:
    // 0x799344: 0x24684c38  addiu       $t0, $v1, 0x4C38
    ctx->pc = 0x799344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
label_799348:
    // 0x799348: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x799348u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79934c:
    // 0x79934c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79934cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799350:
    // 0x799350: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799354:
    // 0x799354: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x799354u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
label_799358:
    // 0x799358: 0x3c150075  lui         $s5, 0x75
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)117 << 16));
label_79935c:
    // 0x79935c: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
label_799360:
    // 0x799360: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
label_799364:
    // 0x799364: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_799368:
    if (ctx->pc == 0x799368u) {
        ctx->pc = 0x799368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799364u;
        // 0x799368: 0x3c1e007a  lui         $fp, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79936Cu;
        goto label_79936c;
    }
    ctx->pc = 0x799364u;
    {
        const bool branch_taken_0x799364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799364u;
        // 0x799368: 0x3c1e007a  lui         $fp, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799364) {
            ctx->pc = 0x799398u;
            goto label_799398;
        }
    }
    ctx->pc = 0x79936Cu;
label_79936c:
    // 0x79936c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799370:
    // 0x799370: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799374:
    // 0x799374: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799378:
    // 0x799378: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79937c:
    // 0x79937c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79937cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799380:
    // 0x799380: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799380u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_799384:
    // 0x799384: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799388:
    if (ctx->pc == 0x799388u) {
        ctx->pc = 0x799388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799384u;
        // 0x799388: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79938Cu;
        goto label_79938c;
    }
    ctx->pc = 0x799384u;
    {
        const bool branch_taken_0x799384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799384u;
        // 0x799388: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799384) {
            ctx->pc = 0x799398u;
            goto label_799398;
        }
    }
    ctx->pc = 0x79938Cu;
label_79938c:
    // 0x79938c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799390:
    // 0x799390: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_799394:
    if (ctx->pc == 0x799394u) {
        ctx->pc = 0x799394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799390u;
        // 0x799394: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799398u;
        goto label_799398;
    }
    ctx->pc = 0x799390u;
    {
        const bool branch_taken_0x799390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799390) {
            ctx->pc = 0x799394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799390u;
            // 0x799394: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799370;
        }
    }
    ctx->pc = 0x799398u;
label_799398:
    // 0x799398: 0xc0b1508  jal         func_2C5420
label_79939c:
    if (ctx->pc == 0x79939Cu) {
        ctx->pc = 0x79939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799398u;
        // 0x79939c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993A0u;
        goto label_7993a0;
    }
    ctx->pc = 0x799398u;
    SET_GPR_U32(ctx, 31, 0x7993A0u);
    ctx->pc = 0x79939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799398u;
    // 0x79939c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799398u, 0x7993A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A0u;
label_7993a0:
    // 0x7993a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7993a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7993a4:
    // 0x7993a4: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_7993a8:
    if (ctx->pc == 0x7993A8u) {
        ctx->pc = 0x7993A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A4u;
        // 0x7993a8: 0x8e828658  lw          $v0, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993ACu;
        goto label_7993ac;
    }
    ctx->pc = 0x7993A4u;
    {
        const bool branch_taken_0x7993a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A4u;
        // 0x7993a8: 0x8e828658  lw          $v0, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993a4) {
            ctx->pc = 0x79944Cu;
            goto label_79944c;
        }
    }
    ctx->pc = 0x7993ACu;
label_7993ac:
    // 0x7993ac: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_7993b0:
    // 0x7993b0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x7993b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_7993b4:
    // 0x7993b4: 0x10000024  b           . + 4 + (0x24 << 2)
label_7993b8:
    if (ctx->pc == 0x7993B8u) {
        ctx->pc = 0x7993B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B4u;
        // 0x7993b8: 0xac620250  sw          $v0, 0x250($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993BCu;
        goto label_7993bc;
    }
    ctx->pc = 0x7993B4u;
    {
        const bool branch_taken_0x7993b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B4u;
        // 0x7993b8: 0xac620250  sw          $v0, 0x250($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993b4) {
            ctx->pc = 0x799448u;
            goto label_799448;
        }
    }
    ctx->pc = 0x7993BCu;
label_7993bc:
    // 0x7993bc: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
label_7993c0:
    // 0x7993c0: 0x8044aba0  lb          $a0, -0x5460($v0)
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294945696)));
label_7993c4:
    // 0x7993c4: 0x2446aba0  addiu       $a2, $v0, -0x5460
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945696));
label_7993c8:
    // 0x7993c8: 0x24684c38  addiu       $t0, $v1, 0x4C38
    ctx->pc = 0x7993c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
label_7993cc:
    // 0x7993cc: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x7993ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7993d0:
    // 0x7993d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7993d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7993d4:
    // 0x7993d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7993d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7993d8:
    // 0x7993d8: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
label_7993dc:
    // 0x7993dc: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
label_7993e0:
    // 0x7993e0: 0x3c150075  lui         $s5, 0x75
    ctx->pc = 0x7993e0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)117 << 16));
label_7993e4:
    // 0x7993e4: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
label_7993e8:
    // 0x7993e8: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
label_7993ec:
    // 0x7993ec: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_7993f0:
    if (ctx->pc == 0x7993F0u) {
        ctx->pc = 0x7993F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ECu;
        // 0x7993f0: 0x3c1e007a  lui         $fp, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993F4u;
        goto label_7993f4;
    }
    ctx->pc = 0x7993ECu;
    {
        const bool branch_taken_0x7993ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ECu;
        // 0x7993f0: 0x3c1e007a  lui         $fp, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993ec) {
            ctx->pc = 0x799420u;
            goto label_799420;
        }
    }
    ctx->pc = 0x7993F4u;
label_7993f4:
    // 0x7993f4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7993f8:
    // 0x7993f8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_7993fc:
    // 0x7993fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799400:
    // 0x799400: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_799404:
    // 0x799404: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799408:
    // 0x799408: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799408u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79940c:
    // 0x79940c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799410:
    if (ctx->pc == 0x799410u) {
        ctx->pc = 0x799410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79940Cu;
        // 0x799410: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799414u;
        goto label_799414;
    }
    ctx->pc = 0x79940Cu;
    {
        const bool branch_taken_0x79940c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79940Cu;
        // 0x799410: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79940c) {
            ctx->pc = 0x799420u;
            goto label_799420;
        }
    }
    ctx->pc = 0x799414u;
label_799414:
    // 0x799414: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799418:
    // 0x799418: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79941c:
    if (ctx->pc == 0x79941Cu) {
        ctx->pc = 0x79941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799418u;
        // 0x79941c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799420u;
        goto label_799420;
    }
    ctx->pc = 0x799418u;
    {
        const bool branch_taken_0x799418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799418) {
            ctx->pc = 0x79941Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799418u;
            // 0x79941c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7993F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993f8;
        }
    }
    ctx->pc = 0x799420u;
label_799420:
    // 0x799420: 0xc0b1508  jal         func_2C5420
label_799424:
    if (ctx->pc == 0x799424u) {
        ctx->pc = 0x799424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799420u;
        // 0x799424: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799428u;
        goto label_799428;
    }
    ctx->pc = 0x799420u;
    SET_GPR_U32(ctx, 31, 0x799428u);
    ctx->pc = 0x799424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799420u;
    // 0x799424: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799420u, 0x799428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799428u;
label_799428:
    // 0x799428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79942c:
    // 0x79942c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_799430:
    if (ctx->pc == 0x799430u) {
        ctx->pc = 0x799430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79942Cu;
        // 0x799430: 0x8e828658  lw          $v0, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799434u;
        goto label_799434;
    }
    ctx->pc = 0x79942Cu;
    {
        const bool branch_taken_0x79942c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79942Cu;
        // 0x799430: 0x8e828658  lw          $v0, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79942c) {
            ctx->pc = 0x79944Cu;
            goto label_79944c;
        }
    }
    ctx->pc = 0x799434u;
label_799434:
    // 0x799434: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_799438:
    // 0x799438: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_79943c:
    // 0x79943c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x79943cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_799440:
    // 0x799440: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x799440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_799444:
    // 0x799444: 0xac830250  sw          $v1, 0x250($a0)
    ctx->pc = 0x799444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
label_799448:
    // 0x799448: 0x8e828658  lw          $v0, -0x79A8($s4)
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
label_79944c:
    // 0x79944c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x79944cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_799450:
    // 0x799450: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799454:
    // 0x799454: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_799458:
    // 0x799458: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
label_79945c:
    if (ctx->pc == 0x79945Cu) {
        ctx->pc = 0x79945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799458u;
        // 0x79945c: 0x8202aba8  lb          $v0, -0x5458($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294945704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799460u;
        goto label_799460;
    }
    ctx->pc = 0x799458u;
    {
        const bool branch_taken_0x799458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799458u;
        // 0x79945c: 0x8202aba8  lb          $v0, -0x5458($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294945704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799458) {
            ctx->pc = 0x7994F4u;
            goto label_7994f4;
        }
    }
    ctx->pc = 0x799460u;
label_799460:
    // 0x799460: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_799464:
    // 0x799464: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799468:
    // 0x799468: 0x24e7a3d8  addiu       $a3, $a3, -0x5C28
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943704));
label_79946c:
    // 0x79946c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_799470:
    // 0x799470: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799474:
    // 0x799474: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
label_799478:
    // 0x799478: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79947c:
    // 0x79947c: 0xc0b09e4  jal         func_2C2790
label_799480:
    if (ctx->pc == 0x799480u) {
        ctx->pc = 0x799480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79947Cu;
        // 0x799480: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799484u;
        goto label_799484;
    }
    ctx->pc = 0x79947Cu;
    SET_GPR_U32(ctx, 31, 0x799484u);
    ctx->pc = 0x799480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79947Cu;
    // 0x799480: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x79947Cu, 0x799484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799484u;
label_799484:
    // 0x799484: 0x8202aba8  lb          $v0, -0x5458($s0)
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294945704)));
label_799488:
    // 0x799488: 0x26684c38  addiu       $t0, $s3, 0x4C38
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19512));
label_79948c:
    // 0x79948c: 0x2603aba8  addiu       $v1, $s0, -0x5458
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945704));
label_799490:
    // 0x799490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799494:
    // 0x799494: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799498:
    if (ctx->pc == 0x799498u) {
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79949Cu;
        goto label_79949c;
    }
    ctx->pc = 0x799494u;
    {
        const bool branch_taken_0x799494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799494) {
            ctx->pc = 0x7994D0u;
            goto label_7994d0;
        }
    }
    ctx->pc = 0x79949Cu;
label_79949c:
    // 0x79949c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79949cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7994a0:
    // 0x7994a0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7994a4:
    // 0x7994a4: 0x0  nop
    ctx->pc = 0x7994a4u;
    // NOP
label_7994a8:
    // 0x7994a8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_7994ac:
    // 0x7994ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7994acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_7994b0:
    // 0x7994b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7994b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_7994b4:
    // 0x7994b4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7994b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_7994b8:
    // 0x7994b8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7994b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_7994bc:
    // 0x7994bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7994c0:
    if (ctx->pc == 0x7994C0u) {
        ctx->pc = 0x7994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994BCu;
        // 0x7994c0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994C4u;
        goto label_7994c4;
    }
    ctx->pc = 0x7994BCu;
    {
        const bool branch_taken_0x7994bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994BCu;
        // 0x7994c0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994bc) {
            ctx->pc = 0x7994D0u;
            goto label_7994d0;
        }
    }
    ctx->pc = 0x7994C4u;
label_7994c4:
    // 0x7994c4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7994c8:
    // 0x7994c8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_7994cc:
    if (ctx->pc == 0x7994CCu) {
        ctx->pc = 0x7994CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994C8u;
        // 0x7994cc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994D0u;
        goto label_7994d0;
    }
    ctx->pc = 0x7994C8u;
    {
        const bool branch_taken_0x7994c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7994c8) {
            ctx->pc = 0x7994CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7994C8u;
            // 0x7994cc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7994A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994a8;
        }
    }
    ctx->pc = 0x7994D0u;
label_7994d0:
    // 0x7994d0: 0xc0b1508  jal         func_2C5420
label_7994d4:
    if (ctx->pc == 0x7994D4u) {
        ctx->pc = 0x7994D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D0u;
        // 0x7994d4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994D8u;
        goto label_7994d8;
    }
    ctx->pc = 0x7994D0u;
    SET_GPR_U32(ctx, 31, 0x7994D8u);
    ctx->pc = 0x7994D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D0u;
    // 0x7994d4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x7994D0u, 0x7994D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994D8u;
label_7994d8:
    // 0x7994d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7994d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7994dc:
    // 0x7994dc: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_7994e0:
    if (ctx->pc == 0x7994E0u) {
        ctx->pc = 0x7994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994DCu;
        // 0x7994e0: 0x8e828658  lw          $v0, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994E4u;
        goto label_7994e4;
    }
    ctx->pc = 0x7994DCu;
    {
        const bool branch_taken_0x7994dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994DCu;
        // 0x7994e0: 0x8e828658  lw          $v0, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994dc) {
            ctx->pc = 0x799564u;
            goto label_799564;
        }
    }
    ctx->pc = 0x7994E4u;
label_7994e4:
    // 0x7994e4: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_7994e8:
    // 0x7994e8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x7994e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_7994ec:
    // 0x7994ec: 0x1000001c  b           . + 4 + (0x1C << 2)
label_7994f0:
    if (ctx->pc == 0x7994F0u) {
        ctx->pc = 0x7994F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994ECu;
        // 0x7994f0: 0xac620250  sw          $v0, 0x250($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994F4u;
        goto label_7994f4;
    }
    ctx->pc = 0x7994ECu;
    {
        const bool branch_taken_0x7994ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994ECu;
        // 0x7994f0: 0xac620250  sw          $v0, 0x250($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994ec) {
            ctx->pc = 0x799560u;
            goto label_799560;
        }
    }
    ctx->pc = 0x7994F4u;
label_7994f4:
    // 0x7994f4: 0x26684c38  addiu       $t0, $s3, 0x4C38
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19512));
label_7994f8:
    // 0x7994f8: 0x2603aba8  addiu       $v1, $s0, -0x5458
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945704));
label_7994fc:
    // 0x7994fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7994fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799500:
    // 0x799500: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_799504:
    if (ctx->pc == 0x799504u) {
        ctx->pc = 0x799504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799500u;
        // 0x799504: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799508u;
        goto label_799508;
    }
    ctx->pc = 0x799500u;
    {
        const bool branch_taken_0x799500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799500u;
        // 0x799504: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799500) {
            ctx->pc = 0x799538u;
            goto label_799538;
        }
    }
    ctx->pc = 0x799508u;
label_799508:
    // 0x799508: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79950c:
    // 0x79950c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799510:
    // 0x799510: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799514:
    // 0x799514: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799518:
    // 0x799518: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79951c:
    // 0x79951c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79951cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799520:
    // 0x799520: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799520u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_799524:
    // 0x799524: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799528:
    if (ctx->pc == 0x799528u) {
        ctx->pc = 0x799528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799524u;
        // 0x799528: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79952Cu;
        goto label_79952c;
    }
    ctx->pc = 0x799524u;
    {
        const bool branch_taken_0x799524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799524u;
        // 0x799528: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799524) {
            ctx->pc = 0x799538u;
            goto label_799538;
        }
    }
    ctx->pc = 0x79952Cu;
label_79952c:
    // 0x79952c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79952cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799530:
    // 0x799530: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_799534:
    if (ctx->pc == 0x799534u) {
        ctx->pc = 0x799534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799530u;
        // 0x799534: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799538u;
        goto label_799538;
    }
    ctx->pc = 0x799530u;
    {
        const bool branch_taken_0x799530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799530) {
            ctx->pc = 0x799534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799530u;
            // 0x799534: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799510;
        }
    }
    ctx->pc = 0x799538u;
label_799538:
    // 0x799538: 0xc0b1508  jal         func_2C5420
label_79953c:
    if (ctx->pc == 0x79953Cu) {
        ctx->pc = 0x79953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799538u;
        // 0x79953c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799540u;
        goto label_799540;
    }
    ctx->pc = 0x799538u;
    SET_GPR_U32(ctx, 31, 0x799540u);
    ctx->pc = 0x79953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799538u;
    // 0x79953c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799538u, 0x799540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799540u;
label_799540:
    // 0x799540: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799544:
    // 0x799544: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_799548:
    if (ctx->pc == 0x799548u) {
        ctx->pc = 0x799548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799544u;
        // 0x799548: 0x8e828658  lw          $v0, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79954Cu;
        goto label_79954c;
    }
    ctx->pc = 0x799544u;
    {
        const bool branch_taken_0x799544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799544u;
        // 0x799548: 0x8e828658  lw          $v0, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799544) {
            ctx->pc = 0x799564u;
            goto label_799564;
        }
    }
    ctx->pc = 0x79954Cu;
label_79954c:
    // 0x79954c: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_799550:
    // 0x799550: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x799550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_799554:
    // 0x799554: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x799554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_799558:
    // 0x799558: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x799558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79955c:
    // 0x79955c: 0xac830250  sw          $v1, 0x250($a0)
    ctx->pc = 0x79955cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
label_799560:
    // 0x799560: 0x8e828658  lw          $v0, -0x79A8($s4)
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
label_799564:
    // 0x799564: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_799568:
    // 0x799568: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_79956c:
    // 0x79956c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79956cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_799570:
    // 0x799570: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
label_799574:
    if (ctx->pc == 0x799574u) {
        ctx->pc = 0x799574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799570u;
        // 0x799574: 0x8242abb0  lb          $v0, -0x5450($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294945712)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799578u;
        goto label_799578;
    }
    ctx->pc = 0x799570u;
    {
        const bool branch_taken_0x799570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799570u;
        // 0x799574: 0x8242abb0  lb          $v0, -0x5450($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294945712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799570) {
            ctx->pc = 0x79960Cu;
            goto label_79960c;
        }
    }
    ctx->pc = 0x799578u;
label_799578:
    // 0x799578: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79957c:
    // 0x79957c: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799580:
    // 0x799580: 0x24e7a550  addiu       $a3, $a3, -0x5AB0
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944080));
label_799584:
    // 0x799584: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_799588:
    // 0x799588: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79958c:
    // 0x79958c: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
label_799590:
    // 0x799590: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799594:
    // 0x799594: 0xc0b09e4  jal         func_2C2790
label_799598:
    if (ctx->pc == 0x799598u) {
        ctx->pc = 0x799598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799594u;
        // 0x799598: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79959Cu;
        goto label_79959c;
    }
    ctx->pc = 0x799594u;
    SET_GPR_U32(ctx, 31, 0x79959Cu);
    ctx->pc = 0x799598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799594u;
    // 0x799598: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799594u, 0x79959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79959Cu;
label_79959c:
    // 0x79959c: 0x8242abb0  lb          $v0, -0x5450($s2)
    ctx->pc = 0x79959cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294945712)));
label_7995a0:
    // 0x7995a0: 0x26684c38  addiu       $t0, $s3, 0x4C38
    ctx->pc = 0x7995a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19512));
label_7995a4:
    // 0x7995a4: 0x2643abb0  addiu       $v1, $s2, -0x5450
    ctx->pc = 0x7995a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945712));
label_7995a8:
    // 0x7995a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7995a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7995ac:
    // 0x7995ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_7995b0:
    if (ctx->pc == 0x7995B0u) {
        ctx->pc = 0x7995B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ACu;
        // 0x7995b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995B4u;
        goto label_7995b4;
    }
    ctx->pc = 0x7995ACu;
    {
        const bool branch_taken_0x7995ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ACu;
        // 0x7995b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995ac) {
            ctx->pc = 0x7995E8u;
            goto label_7995e8;
        }
    }
    ctx->pc = 0x7995B4u;
label_7995b4:
    // 0x7995b4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7995b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7995b8:
    // 0x7995b8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7995bc:
    // 0x7995bc: 0x0  nop
    ctx->pc = 0x7995bcu;
    // NOP
label_7995c0:
    // 0x7995c0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7995c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_7995c4:
    // 0x7995c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_7995c8:
    // 0x7995c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7995c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_7995cc:
    // 0x7995cc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7995ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_7995d0:
    // 0x7995d0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7995d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_7995d4:
    // 0x7995d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7995d8:
    if (ctx->pc == 0x7995D8u) {
        ctx->pc = 0x7995D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D4u;
        // 0x7995d8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995DCu;
        goto label_7995dc;
    }
    ctx->pc = 0x7995D4u;
    {
        const bool branch_taken_0x7995d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D4u;
        // 0x7995d8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995d4) {
            ctx->pc = 0x7995E8u;
            goto label_7995e8;
        }
    }
    ctx->pc = 0x7995DCu;
label_7995dc:
    // 0x7995dc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7995dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7995e0:
    // 0x7995e0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_7995e4:
    if (ctx->pc == 0x7995E4u) {
        ctx->pc = 0x7995E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E0u;
        // 0x7995e4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995E8u;
        goto label_7995e8;
    }
    ctx->pc = 0x7995E0u;
    {
        const bool branch_taken_0x7995e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7995e0) {
            ctx->pc = 0x7995E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7995E0u;
            // 0x7995e4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995c0;
        }
    }
    ctx->pc = 0x7995E8u;
label_7995e8:
    // 0x7995e8: 0xc0b1508  jal         func_2C5420
label_7995ec:
    if (ctx->pc == 0x7995ECu) {
        ctx->pc = 0x7995ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E8u;
        // 0x7995ec: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995F0u;
        goto label_7995f0;
    }
    ctx->pc = 0x7995E8u;
    SET_GPR_U32(ctx, 31, 0x7995F0u);
    ctx->pc = 0x7995ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995E8u;
    // 0x7995ec: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x7995E8u, 0x7995F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F0u;
label_7995f0:
    // 0x7995f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7995f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7995f4:
    // 0x7995f4: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_7995f8:
    if (ctx->pc == 0x7995F8u) {
        ctx->pc = 0x7995F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F4u;
        // 0x7995f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995FCu;
        goto label_7995fc;
    }
    ctx->pc = 0x7995F4u;
    {
        const bool branch_taken_0x7995f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F4u;
        // 0x7995f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995f4) {
            ctx->pc = 0x79967Cu;
            goto label_79967c;
        }
    }
    ctx->pc = 0x7995FCu;
label_7995fc:
    // 0x7995fc: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x7995fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_799600:
    // 0x799600: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_799604:
    // 0x799604: 0x1000001d  b           . + 4 + (0x1D << 2)
label_799608:
    if (ctx->pc == 0x799608u) {
        ctx->pc = 0x799608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799604u;
        // 0x799608: 0xac620250  sw          $v0, 0x250($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79960Cu;
        goto label_79960c;
    }
    ctx->pc = 0x799604u;
    {
        const bool branch_taken_0x799604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799604u;
        // 0x799608: 0xac620250  sw          $v0, 0x250($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799604) {
            ctx->pc = 0x79967Cu;
            goto label_79967c;
        }
    }
    ctx->pc = 0x79960Cu;
label_79960c:
    // 0x79960c: 0x26684c38  addiu       $t0, $s3, 0x4C38
    ctx->pc = 0x79960cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19512));
label_799610:
    // 0x799610: 0x2643abb0  addiu       $v1, $s2, -0x5450
    ctx->pc = 0x799610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945712));
label_799614:
    // 0x799614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799618:
    // 0x799618: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_79961c:
    if (ctx->pc == 0x79961Cu) {
        ctx->pc = 0x79961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799618u;
        // 0x79961c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799620u;
        goto label_799620;
    }
    ctx->pc = 0x799618u;
    {
        const bool branch_taken_0x799618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799618u;
        // 0x79961c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799618) {
            ctx->pc = 0x799650u;
            goto label_799650;
        }
    }
    ctx->pc = 0x799620u;
label_799620:
    // 0x799620: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799624:
    // 0x799624: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799624u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799628:
    // 0x799628: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799628u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79962c:
    // 0x79962c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799630:
    // 0x799630: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_799634:
    // 0x799634: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799638:
    // 0x799638: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799638u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79963c:
    // 0x79963c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799640:
    if (ctx->pc == 0x799640u) {
        ctx->pc = 0x799640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79963Cu;
        // 0x799640: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799644u;
        goto label_799644;
    }
    ctx->pc = 0x79963Cu;
    {
        const bool branch_taken_0x79963c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79963Cu;
        // 0x799640: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79963c) {
            ctx->pc = 0x799650u;
            goto label_799650;
        }
    }
    ctx->pc = 0x799644u;
label_799644:
    // 0x799644: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799644u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799648:
    // 0x799648: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79964c:
    if (ctx->pc == 0x79964Cu) {
        ctx->pc = 0x79964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799648u;
        // 0x79964c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799650u;
        goto label_799650;
    }
    ctx->pc = 0x799648u;
    {
        const bool branch_taken_0x799648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799648) {
            ctx->pc = 0x79964Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799648u;
            // 0x79964c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799628;
        }
    }
    ctx->pc = 0x799650u;
label_799650:
    // 0x799650: 0xc0b1508  jal         func_2C5420
label_799654:
    if (ctx->pc == 0x799654u) {
        ctx->pc = 0x799654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799650u;
        // 0x799654: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799658u;
        goto label_799658;
    }
    ctx->pc = 0x799650u;
    SET_GPR_U32(ctx, 31, 0x799658u);
    ctx->pc = 0x799654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799650u;
    // 0x799654: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799650u, 0x799658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799658u;
label_799658:
    // 0x799658: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79965c:
    // 0x79965c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_799660:
    if (ctx->pc == 0x799660u) {
        ctx->pc = 0x799660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79965Cu;
        // 0x799660: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799664u;
        goto label_799664;
    }
    ctx->pc = 0x79965Cu;
    {
        const bool branch_taken_0x79965c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79965c) {
            ctx->pc = 0x799660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79965Cu;
            // 0x799660: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79967Cu;
            goto label_79967c;
        }
    }
    ctx->pc = 0x799664u;
label_799664:
    // 0x799664: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_799668:
    // 0x799668: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_79966c:
    // 0x79966c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x79966cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_799670:
    // 0x799670: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x799670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_799674:
    // 0x799674: 0xac830250  sw          $v1, 0x250($a0)
    ctx->pc = 0x799674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
label_799678:
    // 0x799678: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x799678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79967c:
    // 0x79967c: 0xc1e69fa  jal         func_79A7E8
label_799680:
    if (ctx->pc == 0x799680u) {
        ctx->pc = 0x799680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79967Cu;
        // 0x799680: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799684u;
        goto label_799684;
    }
    ctx->pc = 0x79967Cu;
    SET_GPR_U32(ctx, 31, 0x799684u);
    ctx->pc = 0x799680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79967Cu;
    // 0x799680: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A7E8u, 0x79967Cu, 0x799684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799684u;
label_799684:
    // 0x799684: 0x10000023  b           . + 4 + (0x23 << 2)
label_799688:
    if (ctx->pc == 0x799688u) {
        ctx->pc = 0x799688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799684u;
        // 0x799688: 0x8e828658  lw          $v0, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79968Cu;
        goto label_79968c;
    }
    ctx->pc = 0x799684u;
    {
        const bool branch_taken_0x799684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799684u;
        // 0x799688: 0x8e828658  lw          $v0, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799684) {
            ctx->pc = 0x799714u;
            goto label_799714;
        }
    }
    ctx->pc = 0x79968Cu;
label_79968c:
    // 0x79968c: 0xc1e69fa  jal         func_79A7E8
label_799690:
    if (ctx->pc == 0x799690u) {
        ctx->pc = 0x799690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79968Cu;
        // 0x799690: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799694u;
        goto label_799694;
    }
    ctx->pc = 0x79968Cu;
    SET_GPR_U32(ctx, 31, 0x799694u);
    ctx->pc = 0x799690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79968Cu;
    // 0x799690: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A7E8u, 0x79968Cu, 0x799694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799694u;
label_799694:
    // 0x799694: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x799694u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
label_799698:
    // 0x799698: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79969c:
    // 0x79969c: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79969cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
label_7996a0:
    // 0x7996a0: 0x8044abb8  lb          $a0, -0x5448($v0)
    ctx->pc = 0x7996a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294945720)));
label_7996a4:
    // 0x7996a4: 0x2446abb8  addiu       $a2, $v0, -0x5448
    ctx->pc = 0x7996a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945720));
label_7996a8:
    // 0x7996a8: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
label_7996ac:
    // 0x7996ac: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x7996acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7996b0:
    // 0x7996b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7996b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7996b4:
    // 0x7996b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7996b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7996b8:
    // 0x7996b8: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x7996b8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
label_7996bc:
    // 0x7996bc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_7996c0:
    if (ctx->pc == 0x7996C0u) {
        ctx->pc = 0x7996C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996BCu;
        // 0x7996c0: 0x3c1e007a  lui         $fp, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996C4u;
        goto label_7996c4;
    }
    ctx->pc = 0x7996BCu;
    {
        const bool branch_taken_0x7996bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996BCu;
        // 0x7996c0: 0x3c1e007a  lui         $fp, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996bc) {
            ctx->pc = 0x7996F0u;
            goto label_7996f0;
        }
    }
    ctx->pc = 0x7996C4u;
label_7996c4:
    // 0x7996c4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7996c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7996c8:
    // 0x7996c8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7996c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_7996cc:
    // 0x7996cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7996ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_7996d0:
    // 0x7996d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_7996d4:
    // 0x7996d4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7996d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_7996d8:
    // 0x7996d8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7996d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_7996dc:
    // 0x7996dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7996e0:
    if (ctx->pc == 0x7996E0u) {
        ctx->pc = 0x7996E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996DCu;
        // 0x7996e0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996E4u;
        goto label_7996e4;
    }
    ctx->pc = 0x7996DCu;
    {
        const bool branch_taken_0x7996dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996DCu;
        // 0x7996e0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996dc) {
            ctx->pc = 0x7996F0u;
            goto label_7996f0;
        }
    }
    ctx->pc = 0x7996E4u;
label_7996e4:
    // 0x7996e4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7996e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7996e8:
    // 0x7996e8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_7996ec:
    if (ctx->pc == 0x7996ECu) {
        ctx->pc = 0x7996ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E8u;
        // 0x7996ec: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996F0u;
        goto label_7996f0;
    }
    ctx->pc = 0x7996E8u;
    {
        const bool branch_taken_0x7996e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7996e8) {
            ctx->pc = 0x7996ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7996E8u;
            // 0x7996ec: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7996C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996c8;
        }
    }
    ctx->pc = 0x7996F0u;
label_7996f0:
    // 0x7996f0: 0xc053f66  jal         func_14FD98
label_7996f4:
    if (ctx->pc == 0x7996F4u) {
        ctx->pc = 0x7996F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F0u;
        // 0x7996f4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996F8u;
        goto label_7996f8;
    }
    ctx->pc = 0x7996F0u;
    SET_GPR_U32(ctx, 31, 0x7996F8u);
    ctx->pc = 0x7996F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996F0u;
    // 0x7996f4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7996F0u, 0x7996F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996F8u;
label_7996f8:
    // 0x7996f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7996f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7996fc:
    // 0x7996fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_799700:
    if (ctx->pc == 0x799700u) {
        ctx->pc = 0x799700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996FCu;
        // 0x799700: 0x8e828658  lw          $v0, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799704u;
        goto label_799704;
    }
    ctx->pc = 0x7996FCu;
    {
        const bool branch_taken_0x7996fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996FCu;
        // 0x799700: 0x8e828658  lw          $v0, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996fc) {
            ctx->pc = 0x799714u;
            goto label_799714;
        }
    }
    ctx->pc = 0x799704u;
label_799704:
    // 0x799704: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x799704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_799708:
    // 0x799708: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_79970c:
    // 0x79970c: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x79970cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_799710:
    // 0x799710: 0x8e828658  lw          $v0, -0x79A8($s4)
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
label_799714:
    // 0x799714: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x799714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_799718:
    // 0x799718: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_79971c:
    // 0x79971c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79971cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_799720:
    // 0x799720: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_799724:
    if (ctx->pc == 0x799724u) {
        ctx->pc = 0x799724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799720u;
        // 0x799724: 0x82c2abc0  lb          $v0, -0x5440($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294945728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799728u;
        goto label_799728;
    }
    ctx->pc = 0x799720u;
    {
        const bool branch_taken_0x799720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799720u;
        // 0x799724: 0x82c2abc0  lb          $v0, -0x5440($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294945728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799720) {
            ctx->pc = 0x799750u;
            goto label_799750;
        }
    }
    ctx->pc = 0x799728u;
label_799728:
    // 0x799728: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79972c:
    // 0x79972c: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799730:
    // 0x799730: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
label_799734:
    // 0x799734: 0x24e79b78  addiu       $a3, $a3, -0x6488
    ctx->pc = 0x799734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941560));
label_799738:
    // 0x799738: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79973c:
    // 0x79973c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79973cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799740:
    // 0x799740: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799744:
    // 0x799744: 0xc0b09e4  jal         func_2C2790
label_799748:
    if (ctx->pc == 0x799748u) {
        ctx->pc = 0x799748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799744u;
        // 0x799748: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79974Cu;
        goto label_79974c;
    }
    ctx->pc = 0x799744u;
    SET_GPR_U32(ctx, 31, 0x79974Cu);
    ctx->pc = 0x799748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799744u;
    // 0x799748: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799744u, 0x79974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79974Cu;
label_79974c:
    // 0x79974c: 0x82c2abc0  lb          $v0, -0x5440($s6)
    ctx->pc = 0x79974cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294945728)));
label_799750:
    // 0x799750: 0x26a84c58  addiu       $t0, $s5, 0x4C58
    ctx->pc = 0x799750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19544));
label_799754:
    // 0x799754: 0x26c3abc0  addiu       $v1, $s6, -0x5440
    ctx->pc = 0x799754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945728));
label_799758:
    // 0x799758: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79975c:
    // 0x79975c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799760:
    if (ctx->pc == 0x799760u) {
        ctx->pc = 0x799760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79975Cu;
        // 0x799760: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799764u;
        goto label_799764;
    }
    ctx->pc = 0x79975Cu;
    {
        const bool branch_taken_0x79975c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79975Cu;
        // 0x799760: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79975c) {
            ctx->pc = 0x799798u;
            goto label_799798;
        }
    }
    ctx->pc = 0x799764u;
label_799764:
    // 0x799764: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799768:
    // 0x799768: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799768u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79976c:
    // 0x79976c: 0x0  nop
    ctx->pc = 0x79976cu;
    // NOP
label_799770:
    // 0x799770: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799774:
    // 0x799774: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799778:
    // 0x799778: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79977c:
    // 0x79977c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79977cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799780:
    // 0x799780: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799780u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_799784:
    // 0x799784: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799788:
    if (ctx->pc == 0x799788u) {
        ctx->pc = 0x799788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799784u;
        // 0x799788: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79978Cu;
        goto label_79978c;
    }
    ctx->pc = 0x799784u;
    {
        const bool branch_taken_0x799784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799784u;
        // 0x799788: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799784) {
            ctx->pc = 0x799798u;
            goto label_799798;
        }
    }
    ctx->pc = 0x79978Cu;
label_79978c:
    // 0x79978c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799790:
    // 0x799790: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_799794:
    if (ctx->pc == 0x799794u) {
        ctx->pc = 0x799794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799790u;
        // 0x799794: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799798u;
        goto label_799798;
    }
    ctx->pc = 0x799790u;
    {
        const bool branch_taken_0x799790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799790) {
            ctx->pc = 0x799794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799790u;
            // 0x799794: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799770;
        }
    }
    ctx->pc = 0x799798u;
label_799798:
    // 0x799798: 0xc053f66  jal         func_14FD98
label_79979c:
    if (ctx->pc == 0x79979Cu) {
        ctx->pc = 0x79979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799798u;
        // 0x79979c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997A0u;
        goto label_7997a0;
    }
    ctx->pc = 0x799798u;
    SET_GPR_U32(ctx, 31, 0x7997A0u);
    ctx->pc = 0x79979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799798u;
    // 0x79979c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799798u, 0x7997A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997A0u;
label_7997a0:
    // 0x7997a0: 0x8e23ad00  lw          $v1, -0x5300($s1)
    ctx->pc = 0x7997a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_7997a4:
    // 0x7997a4: 0x26a84c58  addiu       $t0, $s5, 0x4C58
    ctx->pc = 0x7997a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19544));
label_7997a8:
    // 0x7997a8: 0x26e4abc8  addiu       $a0, $s7, -0x5438
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294945736));
label_7997ac:
    // 0x7997ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7997acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7997b0:
    // 0x7997b0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x7997b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_7997b4:
    // 0x7997b4: 0x82e2abc8  lb          $v0, -0x5438($s7)
    ctx->pc = 0x7997b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294945736)));
label_7997b8:
    // 0x7997b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_7997bc:
    if (ctx->pc == 0x7997BCu) {
        ctx->pc = 0x7997BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B8u;
        // 0x7997bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997C0u;
        goto label_7997c0;
    }
    ctx->pc = 0x7997B8u;
    {
        const bool branch_taken_0x7997b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B8u;
        // 0x7997bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997b8) {
            ctx->pc = 0x7997F0u;
            goto label_7997f0;
        }
    }
    ctx->pc = 0x7997C0u;
label_7997c0:
    // 0x7997c0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x7997c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_7997c4:
    // 0x7997c4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7997c8:
    // 0x7997c8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7997c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_7997cc:
    // 0x7997cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7997ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_7997d0:
    // 0x7997d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7997d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_7997d4:
    // 0x7997d4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7997d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_7997d8:
    // 0x7997d8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7997d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_7997dc:
    // 0x7997dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7997e0:
    if (ctx->pc == 0x7997E0u) {
        ctx->pc = 0x7997E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997DCu;
        // 0x7997e0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997E4u;
        goto label_7997e4;
    }
    ctx->pc = 0x7997DCu;
    {
        const bool branch_taken_0x7997dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997DCu;
        // 0x7997e0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997dc) {
            ctx->pc = 0x7997F0u;
            goto label_7997f0;
        }
    }
    ctx->pc = 0x7997E4u;
label_7997e4:
    // 0x7997e4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7997e8:
    // 0x7997e8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_7997ec:
    if (ctx->pc == 0x7997ECu) {
        ctx->pc = 0x7997ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E8u;
        // 0x7997ec: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997F0u;
        goto label_7997f0;
    }
    ctx->pc = 0x7997E8u;
    {
        const bool branch_taken_0x7997e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7997e8) {
            ctx->pc = 0x7997ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7997E8u;
            // 0x7997ec: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7997C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997c8;
        }
    }
    ctx->pc = 0x7997F0u;
label_7997f0:
    // 0x7997f0: 0xc053f66  jal         func_14FD98
label_7997f4:
    if (ctx->pc == 0x7997F4u) {
        ctx->pc = 0x7997F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997F0u;
        // 0x7997f4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997F8u;
        goto label_7997f8;
    }
    ctx->pc = 0x7997F0u;
    SET_GPR_U32(ctx, 31, 0x7997F8u);
    ctx->pc = 0x7997F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997F0u;
    // 0x7997f4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7997F0u, 0x7997F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997F8u;
label_7997f8:
    // 0x7997f8: 0x8e23ad00  lw          $v1, -0x5300($s1)
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_7997fc:
    // 0x7997fc: 0x26a84c58  addiu       $t0, $s5, 0x4C58
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19544));
label_799800:
    // 0x799800: 0x27c4abd0  addiu       $a0, $fp, -0x5430
    ctx->pc = 0x799800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294945744));
label_799804:
    // 0x799804: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799808:
    // 0x799808: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x799808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_79980c:
    // 0x79980c: 0x83c2abd0  lb          $v0, -0x5430($fp)
    ctx->pc = 0x79980cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294945744)));
label_799810:
    // 0x799810: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_799814:
    if (ctx->pc == 0x799814u) {
        ctx->pc = 0x799814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799810u;
        // 0x799814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799818u;
        goto label_799818;
    }
    ctx->pc = 0x799810u;
    {
        const bool branch_taken_0x799810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799810u;
        // 0x799814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799810) {
            ctx->pc = 0x799848u;
            goto label_799848;
        }
    }
    ctx->pc = 0x799818u;
label_799818:
    // 0x799818: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x799818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_79981c:
    // 0x79981c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79981cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799820:
    // 0x799820: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799820u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799824:
    // 0x799824: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799828:
    // 0x799828: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79982c:
    // 0x79982c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79982cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799830:
    // 0x799830: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799830u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_799834:
    // 0x799834: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799838:
    if (ctx->pc == 0x799838u) {
        ctx->pc = 0x799838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799834u;
        // 0x799838: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79983Cu;
        goto label_79983c;
    }
    ctx->pc = 0x799834u;
    {
        const bool branch_taken_0x799834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799834u;
        // 0x799838: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799834) {
            ctx->pc = 0x799848u;
            goto label_799848;
        }
    }
    ctx->pc = 0x79983Cu;
label_79983c:
    // 0x79983c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79983cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799840:
    // 0x799840: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_799844:
    if (ctx->pc == 0x799844u) {
        ctx->pc = 0x799844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799840u;
        // 0x799844: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799848u;
        goto label_799848;
    }
    ctx->pc = 0x799840u;
    {
        const bool branch_taken_0x799840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799840) {
            ctx->pc = 0x799844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799840u;
            // 0x799844: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799820;
        }
    }
    ctx->pc = 0x799848u;
label_799848:
    // 0x799848: 0xc053f66  jal         func_14FD98
label_79984c:
    if (ctx->pc == 0x79984Cu) {
        ctx->pc = 0x79984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799848u;
        // 0x79984c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799850u;
        goto label_799850;
    }
    ctx->pc = 0x799848u;
    SET_GPR_U32(ctx, 31, 0x799850u);
    ctx->pc = 0x79984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799848u;
    // 0x79984c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799848u, 0x799850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799850u;
label_799850:
    // 0x799850: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_799854:
    // 0x799854: 0x26a84c58  addiu       $t0, $s5, 0x4C58
    ctx->pc = 0x799854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19544));
label_799858:
    // 0x799858: 0x2464abd8  addiu       $a0, $v1, -0x5428
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945752));
label_79985c:
    // 0x79985c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79985cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799860:
    // 0x799860: 0x8e23ad00  lw          $v1, -0x5300($s1)
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_799864:
    // 0x799864: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x799864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_799868:
    // 0x799868: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79986c:
    // 0x79986c: 0x8062abd8  lb          $v0, -0x5428($v1)
    ctx->pc = 0x79986cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294945752)));
label_799870:
    // 0x799870: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_799874:
    if (ctx->pc == 0x799874u) {
        ctx->pc = 0x799874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799870u;
        // 0x799874: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799878u;
        goto label_799878;
    }
    ctx->pc = 0x799870u;
    {
        const bool branch_taken_0x799870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799870u;
        // 0x799874: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799870) {
            ctx->pc = 0x7998A8u;
            goto label_7998a8;
        }
    }
    ctx->pc = 0x799878u;
label_799878:
    // 0x799878: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x799878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_79987c:
    // 0x79987c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799880:
    // 0x799880: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799884:
    // 0x799884: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799888:
    // 0x799888: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79988c:
    // 0x79988c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79988cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799890:
    // 0x799890: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799890u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_799894:
    // 0x799894: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799898:
    if (ctx->pc == 0x799898u) {
        ctx->pc = 0x799898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799894u;
        // 0x799898: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79989Cu;
        goto label_79989c;
    }
    ctx->pc = 0x799894u;
    {
        const bool branch_taken_0x799894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799894u;
        // 0x799898: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799894) {
            ctx->pc = 0x7998A8u;
            goto label_7998a8;
        }
    }
    ctx->pc = 0x79989Cu;
label_79989c:
    // 0x79989c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79989cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7998a0:
    // 0x7998a0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_7998a4:
    if (ctx->pc == 0x7998A4u) {
        ctx->pc = 0x7998A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A0u;
        // 0x7998a4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998A8u;
        goto label_7998a8;
    }
    ctx->pc = 0x7998A0u;
    {
        const bool branch_taken_0x7998a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7998a0) {
            ctx->pc = 0x7998A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7998A0u;
            // 0x7998a4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799880;
        }
    }
    ctx->pc = 0x7998A8u;
label_7998a8:
    // 0x7998a8: 0xc053f66  jal         func_14FD98
label_7998ac:
    if (ctx->pc == 0x7998ACu) {
        ctx->pc = 0x7998ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A8u;
        // 0x7998ac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998B0u;
        goto label_7998b0;
    }
    ctx->pc = 0x7998A8u;
    SET_GPR_U32(ctx, 31, 0x7998B0u);
    ctx->pc = 0x7998ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998A8u;
    // 0x7998ac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7998A8u, 0x7998B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998B0u;
label_7998b0:
    // 0x7998b0: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x7998b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_7998b4:
    // 0x7998b4: 0x26a84c58  addiu       $t0, $s5, 0x4C58
    ctx->pc = 0x7998b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19544));
label_7998b8:
    // 0x7998b8: 0x2464abe0  addiu       $a0, $v1, -0x5420
    ctx->pc = 0x7998b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945760));
label_7998bc:
    // 0x7998bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7998bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7998c0:
    // 0x7998c0: 0x8e23ad00  lw          $v1, -0x5300($s1)
    ctx->pc = 0x7998c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_7998c4:
    // 0x7998c4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x7998c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_7998c8:
    // 0x7998c8: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x7998c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_7998cc:
    // 0x7998cc: 0x8062abe0  lb          $v0, -0x5420($v1)
    ctx->pc = 0x7998ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294945760)));
label_7998d0:
    // 0x7998d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_7998d4:
    if (ctx->pc == 0x7998D4u) {
        ctx->pc = 0x7998D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D0u;
        // 0x7998d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998D8u;
        goto label_7998d8;
    }
    ctx->pc = 0x7998D0u;
    {
        const bool branch_taken_0x7998d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D0u;
        // 0x7998d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998d0) {
            ctx->pc = 0x799908u;
            goto label_799908;
        }
    }
    ctx->pc = 0x7998D8u;
label_7998d8:
    // 0x7998d8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x7998d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_7998dc:
    // 0x7998dc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7998e0:
    // 0x7998e0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7998e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_7998e4:
    // 0x7998e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7998e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_7998e8:
    // 0x7998e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_7998ec:
    // 0x7998ec: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7998ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_7998f0:
    // 0x7998f0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7998f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_7998f4:
    // 0x7998f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7998f8:
    if (ctx->pc == 0x7998F8u) {
        ctx->pc = 0x7998F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F4u;
        // 0x7998f8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998FCu;
        goto label_7998fc;
    }
    ctx->pc = 0x7998F4u;
    {
        const bool branch_taken_0x7998f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F4u;
        // 0x7998f8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998f4) {
            ctx->pc = 0x799908u;
            goto label_799908;
        }
    }
    ctx->pc = 0x7998FCu;
label_7998fc:
    // 0x7998fc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7998fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799900:
    // 0x799900: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_799904:
    if (ctx->pc == 0x799904u) {
        ctx->pc = 0x799904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799900u;
        // 0x799904: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799908u;
        goto label_799908;
    }
    ctx->pc = 0x799900u;
    {
        const bool branch_taken_0x799900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799900) {
            ctx->pc = 0x799904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799900u;
            // 0x799904: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7998E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998e0;
        }
    }
    ctx->pc = 0x799908u;
label_799908:
    // 0x799908: 0xc053f66  jal         func_14FD98
label_79990c:
    if (ctx->pc == 0x79990Cu) {
        ctx->pc = 0x79990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799908u;
        // 0x79990c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799910u;
        goto label_799910;
    }
    ctx->pc = 0x799908u;
    SET_GPR_U32(ctx, 31, 0x799910u);
    ctx->pc = 0x79990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799908u;
    // 0x79990c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799908u, 0x799910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799910u;
label_799910:
    // 0x799910: 0x8e23ad00  lw          $v1, -0x5300($s1)
    ctx->pc = 0x799910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_799914:
    // 0x799914: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x799914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_799918:
    // 0x799918: 0x8e22ad00  lw          $v0, -0x5300($s1)
    ctx->pc = 0x799918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_79991c:
    // 0x79991c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x79991cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799920:
    // 0x799920: 0x50a0002b  beql        $a1, $zero, . + 4 + (0x2B << 2)
label_799924:
    if (ctx->pc == 0x799924u) {
        ctx->pc = 0x799924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799920u;
        // 0x799924: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799928u;
        goto label_799928;
    }
    ctx->pc = 0x799920u;
    {
        const bool branch_taken_0x799920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x799920) {
            ctx->pc = 0x799924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799920u;
            // 0x799924: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7999D0u;
            goto label_7999d0;
        }
    }
    ctx->pc = 0x799928u;
label_799928:
    // 0x799928: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x799928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_79992c:
    // 0x79992c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79992cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_799930:
    // 0x799930: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x799930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_799934:
    // 0x799934: 0x40f809  jalr        $v0
label_799938:
    if (ctx->pc == 0x799938u) {
        ctx->pc = 0x799938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799934u;
        // 0x799938: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79993Cu;
        goto label_79993c;
    }
    ctx->pc = 0x799934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79993Cu);
        ctx->pc = 0x799938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799934u;
        // 0x799938: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799934u, 0x79993Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79993Cu;
label_79993c:
    // 0x79993c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79993cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_799940:
    // 0x799940: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x799940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_799944:
    // 0x799944: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x799944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
label_799948:
    // 0x799948: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x799948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_79994c:
    // 0x79994c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79994cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_799950:
    // 0x799950: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799954:
    // 0x799954: 0x8e23ad00  lw          $v1, -0x5300($s1)
    ctx->pc = 0x799954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_799958:
    // 0x799958: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x799958u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_79995c:
    // 0x79995c: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x79995cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799960:
    // 0x799960: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x799960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_799964:
    // 0x799964: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x799964u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_799968:
    // 0x799968: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x799968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_79996c:
    // 0x79996c: 0x60f809  jalr        $v1
label_799970:
    if (ctx->pc == 0x799970u) {
        ctx->pc = 0x799970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79996Cu;
        // 0x799970: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799974u;
        goto label_799974;
    }
    ctx->pc = 0x79996Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799974u);
        ctx->pc = 0x799970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79996Cu;
        // 0x799970: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79996Cu, 0x799974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799974u;
label_799974:
    // 0x799974: 0x8e22ad00  lw          $v0, -0x5300($s1)
    ctx->pc = 0x799974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_799978:
    // 0x799978: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79997c:
    // 0x79997c: 0xc0656e2  jal         func_195B88
label_799980:
    if (ctx->pc == 0x799980u) {
        ctx->pc = 0x799980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79997Cu;
        // 0x799980: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799984u;
        goto label_799984;
    }
    ctx->pc = 0x79997Cu;
    SET_GPR_U32(ctx, 31, 0x799984u);
    ctx->pc = 0x799980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79997Cu;
    // 0x799980: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195B88u, 0x79997Cu, 0x799984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799984u;
label_799984:
    // 0x799984: 0x8e22ad00  lw          $v0, -0x5300($s1)
    ctx->pc = 0x799984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_799988:
    // 0x799988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79998c:
    // 0x79998c: 0xc06566a  jal         func_1959A8
label_799990:
    if (ctx->pc == 0x799990u) {
        ctx->pc = 0x799990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79998Cu;
        // 0x799990: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799994u;
        goto label_799994;
    }
    ctx->pc = 0x79998Cu;
    SET_GPR_U32(ctx, 31, 0x799994u);
    ctx->pc = 0x799990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79998Cu;
    // 0x799990: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1959A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1959A8u, 0x79998Cu, 0x799994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799994u;
label_799994:
    // 0x799994: 0x8e22ad00  lw          $v0, -0x5300($s1)
    ctx->pc = 0x799994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_799998:
    // 0x799998: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x799998u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_79999c:
    // 0x79999c: 0x3c014134  lui         $at, 0x4134
    ctx->pc = 0x79999cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16692 << 16));
label_7999a0:
    // 0x7999a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x7999a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_7999a4:
    // 0x7999a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7999a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_7999a8:
    // 0x7999a8: 0x3c01420e  lui         $at, 0x420E
    ctx->pc = 0x7999a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16910 << 16));
label_7999ac:
    // 0x7999ac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x7999acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_7999b0:
    // 0x7999b0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x7999b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_7999b4:
    // 0x7999b4: 0x3c01c099  lui         $at, 0xC099
    ctx->pc = 0x7999b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49305 << 16));
label_7999b8:
    // 0x7999b8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x7999b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_7999bc:
    // 0x7999bc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x7999bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_7999c0:
    // 0x7999c0: 0xc0656dc  jal         func_195B70
label_7999c4:
    if (ctx->pc == 0x7999C4u) {
        ctx->pc = 0x7999C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999C0u;
        // 0x7999c4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999C8u;
        goto label_7999c8;
    }
    ctx->pc = 0x7999C0u;
    SET_GPR_U32(ctx, 31, 0x7999C8u);
    ctx->pc = 0x7999C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999C0u;
    // 0x7999c4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195B70u, 0x7999C0u, 0x7999C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999C8u;
label_7999c8:
    // 0x7999c8: 0x8e22ad00  lw          $v0, -0x5300($s1)
    ctx->pc = 0x7999c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_7999cc:
    // 0x7999cc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x7999ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_7999d0:
    // 0x7999d0: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
label_7999d4:
    if (ctx->pc == 0x7999D4u) {
        ctx->pc = 0x7999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D0u;
        // 0x7999d4: 0x8e22ad00  lw          $v0, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999D8u;
        goto label_7999d8;
    }
    ctx->pc = 0x7999D0u;
    {
        const bool branch_taken_0x7999d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D0u;
        // 0x7999d4: 0x8e22ad00  lw          $v0, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999d0) {
            ctx->pc = 0x799A7Cu;
            goto label_799a7c;
        }
    }
    ctx->pc = 0x7999D8u;
label_7999d8:
    // 0x7999d8: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x7999d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_7999dc:
    // 0x7999dc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x7999dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_7999e0:
    // 0x7999e0: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x7999e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_7999e4:
    // 0x7999e4: 0x40f809  jalr        $v0
label_7999e8:
    if (ctx->pc == 0x7999E8u) {
        ctx->pc = 0x7999E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999E4u;
        // 0x7999e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999ECu;
        goto label_7999ec;
    }
    ctx->pc = 0x7999E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7999ECu);
        ctx->pc = 0x7999E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999E4u;
        // 0x7999e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999E4u, 0x7999ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7999ECu;
label_7999ec:
    // 0x7999ec: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7999ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_7999f0:
    // 0x7999f0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x7999f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_7999f4:
    // 0x7999f4: 0x3c01c13b  lui         $at, 0xC13B
    ctx->pc = 0x7999f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49467 << 16));
label_7999f8:
    // 0x7999f8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x7999f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_7999fc:
    // 0x7999fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7999fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_799a00:
    // 0x799a00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799a04:
    // 0x799a04: 0x8e23ad00  lw          $v1, -0x5300($s1)
    ctx->pc = 0x799a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_799a08:
    // 0x799a08: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x799a08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_799a0c:
    // 0x799a0c: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x799a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_799a10:
    // 0x799a10: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x799a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_799a14:
    // 0x799a14: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x799a14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_799a18:
    // 0x799a18: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x799a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_799a1c:
    // 0x799a1c: 0x60f809  jalr        $v1
label_799a20:
    if (ctx->pc == 0x799A20u) {
        ctx->pc = 0x799A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A1Cu;
        // 0x799a20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A24u;
        goto label_799a24;
    }
    ctx->pc = 0x799A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799A24u);
        ctx->pc = 0x799A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A1Cu;
        // 0x799a20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A1Cu, 0x799A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799A24u;
label_799a24:
    // 0x799a24: 0x8e22ad00  lw          $v0, -0x5300($s1)
    ctx->pc = 0x799a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_799a28:
    // 0x799a28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799a2c:
    // 0x799a2c: 0xc0656e2  jal         func_195B88
label_799a30:
    if (ctx->pc == 0x799A30u) {
        ctx->pc = 0x799A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A2Cu;
        // 0x799a30: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A34u;
        goto label_799a34;
    }
    ctx->pc = 0x799A2Cu;
    SET_GPR_U32(ctx, 31, 0x799A34u);
    ctx->pc = 0x799A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A2Cu;
    // 0x799a30: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195B88u, 0x799A2Cu, 0x799A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A34u;
label_799a34:
    // 0x799a34: 0x8e22ad00  lw          $v0, -0x5300($s1)
    ctx->pc = 0x799a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_799a38:
    // 0x799a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799a3c:
    // 0x799a3c: 0xc06566a  jal         func_1959A8
label_799a40:
    if (ctx->pc == 0x799A40u) {
        ctx->pc = 0x799A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A3Cu;
        // 0x799a40: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A44u;
        goto label_799a44;
    }
    ctx->pc = 0x799A3Cu;
    SET_GPR_U32(ctx, 31, 0x799A44u);
    ctx->pc = 0x799A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A3Cu;
    // 0x799a40: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1959A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1959A8u, 0x799A3Cu, 0x799A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A44u;
label_799a44:
    // 0x799a44: 0x8e22ad00  lw          $v0, -0x5300($s1)
    ctx->pc = 0x799a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_799a48:
    // 0x799a48: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x799a48u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_799a4c:
    // 0x799a4c: 0x3c014134  lui         $at, 0x4134
    ctx->pc = 0x799a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16692 << 16));
label_799a50:
    // 0x799a50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799a50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_799a54:
    // 0x799a54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799a58:
    // 0x799a58: 0x3c01420e  lui         $at, 0x420E
    ctx->pc = 0x799a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16910 << 16));
label_799a5c:
    // 0x799a5c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x799a5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_799a60:
    // 0x799a60: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_799a64:
    // 0x799a64: 0x3c01c0e6  lui         $at, 0xC0E6
    ctx->pc = 0x799a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49382 << 16));
label_799a68:
    // 0x799a68: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x799a68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_799a6c:
    // 0x799a6c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x799a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_799a70:
    // 0x799a70: 0xc0656dc  jal         func_195B70
label_799a74:
    if (ctx->pc == 0x799A74u) {
        ctx->pc = 0x799A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A70u;
        // 0x799a74: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A78u;
        goto label_799a78;
    }
    ctx->pc = 0x799A70u;
    SET_GPR_U32(ctx, 31, 0x799A78u);
    ctx->pc = 0x799A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A70u;
    // 0x799a74: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195B70u, 0x799A70u, 0x799A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A78u;
label_799a78:
    // 0x799a78: 0x8e22ad00  lw          $v0, -0x5300($s1)
    ctx->pc = 0x799a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_799a7c:
    // 0x799a7c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x799a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_799a80:
    // 0x799a80: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_799a84:
    if (ctx->pc == 0x799A84u) {
        ctx->pc = 0x799A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A80u;
        // 0x799a84: 0x8e22ad00  lw          $v0, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A88u;
        goto label_799a88;
    }
    ctx->pc = 0x799A80u;
    {
        const bool branch_taken_0x799a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A80u;
        // 0x799a84: 0x8e22ad00  lw          $v0, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a80) {
            ctx->pc = 0x799A94u;
            goto label_799a94;
        }
    }
    ctx->pc = 0x799A88u;
label_799a88:
    // 0x799a88: 0xc06566a  jal         func_1959A8
label_799a8c:
    if (ctx->pc == 0x799A8Cu) {
        ctx->pc = 0x799A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A88u;
        // 0x799a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A90u;
        goto label_799a90;
    }
    ctx->pc = 0x799A88u;
    SET_GPR_U32(ctx, 31, 0x799A90u);
    ctx->pc = 0x799A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A88u;
    // 0x799a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1959A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1959A8u, 0x799A88u, 0x799A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A90u;
label_799a90:
    // 0x799a90: 0x8e22ad00  lw          $v0, -0x5300($s1)
    ctx->pc = 0x799a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_799a94:
    // 0x799a94: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x799a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_799a98:
    // 0x799a98: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_799a9c:
    if (ctx->pc == 0x799A9Cu) {
        ctx->pc = 0x799A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A98u;
        // 0x799a9c: 0x8e22ad00  lw          $v0, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AA0u;
        goto label_799aa0;
    }
    ctx->pc = 0x799A98u;
    {
        const bool branch_taken_0x799a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A98u;
        // 0x799a9c: 0x8e22ad00  lw          $v0, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a98) {
            ctx->pc = 0x799AACu;
            goto label_799aac;
        }
    }
    ctx->pc = 0x799AA0u;
label_799aa0:
    // 0x799aa0: 0xc06566a  jal         func_1959A8
label_799aa4:
    if (ctx->pc == 0x799AA4u) {
        ctx->pc = 0x799AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA0u;
        // 0x799aa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AA8u;
        goto label_799aa8;
    }
    ctx->pc = 0x799AA0u;
    SET_GPR_U32(ctx, 31, 0x799AA8u);
    ctx->pc = 0x799AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AA0u;
    // 0x799aa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1959A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1959A8u, 0x799AA0u, 0x799AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AA8u;
label_799aa8:
    // 0x799aa8: 0x8e22ad00  lw          $v0, -0x5300($s1)
    ctx->pc = 0x799aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_799aac:
    // 0x799aac: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x799aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_799ab0:
    // 0x799ab0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_799ab4:
    if (ctx->pc == 0x799AB4u) {
        ctx->pc = 0x799AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AB0u;
        // 0x799ab4: 0x8e22ad00  lw          $v0, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AB8u;
        goto label_799ab8;
    }
    ctx->pc = 0x799AB0u;
    {
        const bool branch_taken_0x799ab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AB0u;
        // 0x799ab4: 0x8e22ad00  lw          $v0, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ab0) {
            ctx->pc = 0x799AC4u;
            goto label_799ac4;
        }
    }
    ctx->pc = 0x799AB8u;
label_799ab8:
    // 0x799ab8: 0xc06566a  jal         func_1959A8
label_799abc:
    if (ctx->pc == 0x799ABCu) {
        ctx->pc = 0x799ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AB8u;
        // 0x799abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AC0u;
        goto label_799ac0;
    }
    ctx->pc = 0x799AB8u;
    SET_GPR_U32(ctx, 31, 0x799AC0u);
    ctx->pc = 0x799ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AB8u;
    // 0x799abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1959A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1959A8u, 0x799AB8u, 0x799AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AC0u;
label_799ac0:
    // 0x799ac0: 0x8e22ad00  lw          $v0, -0x5300($s1)
    ctx->pc = 0x799ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_799ac4:
    // 0x799ac4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x799ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799ac8:
    // 0x799ac8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_799acc:
    if (ctx->pc == 0x799ACCu) {
        ctx->pc = 0x799ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AC8u;
        // 0x799acc: 0x8e22ad00  lw          $v0, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AD0u;
        goto label_799ad0;
    }
    ctx->pc = 0x799AC8u;
    {
        const bool branch_taken_0x799ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AC8u;
        // 0x799acc: 0x8e22ad00  lw          $v0, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ac8) {
            ctx->pc = 0x799ADCu;
            goto label_799adc;
        }
    }
    ctx->pc = 0x799AD0u;
label_799ad0:
    // 0x799ad0: 0xc0656cc  jal         func_195B30
label_799ad4:
    if (ctx->pc == 0x799AD4u) {
        ctx->pc = 0x799AD8u;
        goto label_799ad8;
    }
    ctx->pc = 0x799AD0u;
    SET_GPR_U32(ctx, 31, 0x799AD8u);
    ctx->pc = 0x195B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195B30u, 0x799AD0u, 0x799AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AD8u;
label_799ad8:
    // 0x799ad8: 0x8e22ad00  lw          $v0, -0x5300($s1)
    ctx->pc = 0x799ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_799adc:
    // 0x799adc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x799adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_799ae0:
    // 0x799ae0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_799ae4:
    if (ctx->pc == 0x799AE4u) {
        ctx->pc = 0x799AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AE0u;
        // 0x799ae4: 0x8e22ad00  lw          $v0, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AE8u;
        goto label_799ae8;
    }
    ctx->pc = 0x799AE0u;
    {
        const bool branch_taken_0x799ae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AE0u;
        // 0x799ae4: 0x8e22ad00  lw          $v0, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ae0) {
            ctx->pc = 0x799AF4u;
            goto label_799af4;
        }
    }
    ctx->pc = 0x799AE8u;
label_799ae8:
    // 0x799ae8: 0xc0656cc  jal         func_195B30
label_799aec:
    if (ctx->pc == 0x799AECu) {
        ctx->pc = 0x799AF0u;
        goto label_799af0;
    }
    ctx->pc = 0x799AE8u;
    SET_GPR_U32(ctx, 31, 0x799AF0u);
    ctx->pc = 0x195B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195B30u, 0x799AE8u, 0x799AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AF0u;
label_799af0:
    // 0x799af0: 0x8e22ad00  lw          $v0, -0x5300($s1)
    ctx->pc = 0x799af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_799af4:
    // 0x799af4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x799af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_799af8:
    // 0x799af8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_799afc:
    if (ctx->pc == 0x799AFCu) {
        ctx->pc = 0x799AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AF8u;
        // 0x799afc: 0x8e22ad00  lw          $v0, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B00u;
        goto label_799b00;
    }
    ctx->pc = 0x799AF8u;
    {
        const bool branch_taken_0x799af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AF8u;
        // 0x799afc: 0x8e22ad00  lw          $v0, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799af8) {
            ctx->pc = 0x799B0Cu;
            goto label_799b0c;
        }
    }
    ctx->pc = 0x799B00u;
label_799b00:
    // 0x799b00: 0xc0656cc  jal         func_195B30
label_799b04:
    if (ctx->pc == 0x799B04u) {
        ctx->pc = 0x799B08u;
        goto label_799b08;
    }
    ctx->pc = 0x799B00u;
    SET_GPR_U32(ctx, 31, 0x799B08u);
    ctx->pc = 0x195B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195B30u, 0x799B00u, 0x799B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B08u;
label_799b08:
    // 0x799b08: 0x8e22ad00  lw          $v0, -0x5300($s1)
    ctx->pc = 0x799b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_799b0c:
    // 0x799b0c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x799b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_799b10:
    // 0x799b10: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_799b14:
    if (ctx->pc == 0x799B14u) {
        ctx->pc = 0x799B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B10u;
        // 0x799b14: 0x8e22ad00  lw          $v0, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B18u;
        goto label_799b18;
    }
    ctx->pc = 0x799B10u;
    {
        const bool branch_taken_0x799b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B10u;
        // 0x799b14: 0x8e22ad00  lw          $v0, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b10) {
            ctx->pc = 0x799B24u;
            goto label_799b24;
        }
    }
    ctx->pc = 0x799B18u;
label_799b18:
    // 0x799b18: 0xc0656cc  jal         func_195B30
label_799b1c:
    if (ctx->pc == 0x799B1Cu) {
        ctx->pc = 0x799B20u;
        goto label_799b20;
    }
    ctx->pc = 0x799B18u;
    SET_GPR_U32(ctx, 31, 0x799B20u);
    ctx->pc = 0x195B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195B30u, 0x799B18u, 0x799B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B20u;
label_799b20:
    // 0x799b20: 0x8e22ad00  lw          $v0, -0x5300($s1)
    ctx->pc = 0x799b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_799b24:
    // 0x799b24: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x799b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_799b28:
    // 0x799b28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_799b2c:
    if (ctx->pc == 0x799B2Cu) {
        ctx->pc = 0x799B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B28u;
        // 0x799b2c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B30u;
        goto label_799b30;
    }
    ctx->pc = 0x799B28u;
    {
        const bool branch_taken_0x799b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B28u;
        // 0x799b2c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b28) {
            ctx->pc = 0x799B3Cu;
            goto label_799b3c;
        }
    }
    ctx->pc = 0x799B30u;
label_799b30:
    // 0x799b30: 0xc0656cc  jal         func_195B30
label_799b34:
    if (ctx->pc == 0x799B34u) {
        ctx->pc = 0x799B38u;
        goto label_799b38;
    }
    ctx->pc = 0x799B30u;
    SET_GPR_U32(ctx, 31, 0x799B38u);
    ctx->pc = 0x195B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195B30u, 0x799B30u, 0x799B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B38u;
label_799b38:
    // 0x799b38: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x799b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_799b3c:
    // 0x799b3c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x799b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_799b40:
    // 0x799b40: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x799b40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_799b44:
    // 0x799b44: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x799b44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_799b48:
    // 0x799b48: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x799b48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_799b4c:
    // 0x799b4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x799b4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_799b50:
    // 0x799b50: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x799b50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_799b54:
    // 0x799b54: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x799b54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_799b58:
    // 0x799b58: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x799b58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_799b5c:
    // 0x799b5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799b60:
    // 0x799b60: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x799b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_799b64:
    // 0x799b64: 0x3e00008  jr          $ra
label_799b68:
    if (ctx->pc == 0x799B68u) {
        ctx->pc = 0x799B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B64u;
        // 0x799b68: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B6Cu;
        goto label_799b6c;
    }
    ctx->pc = 0x799B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B64u;
        // 0x799b68: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B6Cu;
label_799b6c:
    // 0x799b6c: 0x0  nop
    ctx->pc = 0x799b6cu;
    // NOP
    ctx->pc = 0x799b70u;
}
} // namespace gh_r404
