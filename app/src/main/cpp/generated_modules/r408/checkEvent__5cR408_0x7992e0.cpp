#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r408_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r408
{
// Function: checkEvent__5cR408
// Address: 0x7992e0 - 0x799b28
void checkEvent__5cR408_0x7992e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkEvent__5cR408_0x7992e0");
#endif

    switch (ctx->pc) {
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
        default: break;
    }

    ctx->pc = 0x7992e0u;

label_7992e0:
    // 0x7992e0: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
label_7992e4:
    // 0x7992e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7992e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7992e8:
    // 0x7992e8: 0x7fb10230  sq          $s1, 0x230($sp)
    ctx->pc = 0x7992e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 17));
label_7992ec:
    // 0x7992ec: 0x7fb20220  sq          $s2, 0x220($sp)
    ctx->pc = 0x7992ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 18));
label_7992f0:
    // 0x7992f0: 0x3c11005d  lui         $s1, 0x5D
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
label_7992f4:
    // 0x7992f4: 0x7fb30210  sq          $s3, 0x210($sp)
    ctx->pc = 0x7992f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 19));
label_7992f8:
    // 0x7992f8: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
label_7992fc:
    // 0x7992fc: 0x2633ae50  addiu       $s3, $s1, -0x51B0
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946384));
label_799300:
    // 0x799300: 0x7fb00240  sq          $s0, 0x240($sp)
    ctx->pc = 0x799300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 16));
label_799304:
    // 0x799304: 0x7fb40200  sq          $s4, 0x200($sp)
    ctx->pc = 0x799304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 20));
label_799308:
    // 0x799308: 0x2645a020  addiu       $a1, $s2, -0x5FE0
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942752));
label_79930c:
    // 0x79930c: 0x7fb501f0  sq          $s5, 0x1F0($sp)
    ctx->pc = 0x79930cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 21));
label_799310:
    // 0x799310: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_799314:
    // 0x799314: 0x7fb601e0  sq          $s6, 0x1E0($sp)
    ctx->pc = 0x799314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 22));
label_799318:
    // 0x799318: 0x7fb701d0  sq          $s7, 0x1D0($sp)
    ctx->pc = 0x799318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 23));
label_79931c:
    // 0x79931c: 0x7fbe01c0  sq          $fp, 0x1C0($sp)
    ctx->pc = 0x79931cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 30));
label_799320:
    // 0x799320: 0xffbf01b0  sd          $ra, 0x1B0($sp)
    ctx->pc = 0x799320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
label_799324:
    // 0x799324: 0xc04ccb4  jal         func_1332D0
label_799328:
    if (ctx->pc == 0x799328u) {
        ctx->pc = 0x799328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799324u;
        // 0x799328: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79932Cu;
        goto label_79932c;
    }
    ctx->pc = 0x799324u;
    SET_GPR_U32(ctx, 31, 0x79932Cu);
    ctx->pc = 0x799328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799324u;
    // 0x799328: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799324u, 0x79932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79932Cu;
label_79932c:
    // 0x79932c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79932cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_799330:
    // 0x799330: 0x2605a028  addiu       $a1, $s0, -0x5FD8
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942760));
label_799334:
    // 0x799334: 0xc04ccb4  jal         func_1332D0
label_799338:
    if (ctx->pc == 0x799338u) {
        ctx->pc = 0x799338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799334u;
        // 0x799338: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79933Cu;
        goto label_79933c;
    }
    ctx->pc = 0x799334u;
    SET_GPR_U32(ctx, 31, 0x79933Cu);
    ctx->pc = 0x799338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799334u;
    // 0x799338: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799334u, 0x79933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79933Cu;
label_79933c:
    // 0x79933c: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
label_799340:
    // 0x799340: 0x27a2004c  addiu       $v0, $sp, 0x4C
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_799344:
    // 0x799344: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x799344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_799348:
    // 0x799348: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
label_79934c:
    // 0x79934c: 0x3c1e0075  lui         $fp, 0x75
    ctx->pc = 0x79934cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)117 << 16));
label_799350:
    // 0x799350: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x799350u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
label_799354:
    // 0x799354: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x799354u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799358:
    // 0x799358: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_79935c:
    // 0x79935c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_799360:
    // 0x799360: 0x3c170074  lui         $s7, 0x74
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)116 << 16));
label_799364:
    // 0x799364: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x799364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
label_799368:
    // 0x799368: 0x10000004  b           . + 4 + (0x4 << 2)
label_79936c:
    if (ctx->pc == 0x79936Cu) {
        ctx->pc = 0x79936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799368u;
        // 0x79936c: 0xafa301a0  sw          $v1, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799370u;
        goto label_799370;
    }
    ctx->pc = 0x799368u;
    {
        const bool branch_taken_0x799368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799368u;
        // 0x79936c: 0xafa301a0  sw          $v1, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799368) {
            ctx->pc = 0x79937Cu;
            goto label_79937c;
        }
    }
    ctx->pc = 0x799370u;
label_799370:
    // 0x799370: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799374:
    // 0x799374: 0xc0b56a8  jal         func_2D5AA0
label_799378:
    if (ctx->pc == 0x799378u) {
        ctx->pc = 0x799378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799374u;
        // 0x799378: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79937Cu;
        goto label_79937c;
    }
    ctx->pc = 0x799374u;
    SET_GPR_U32(ctx, 31, 0x79937Cu);
    ctx->pc = 0x799378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799374u;
    // 0x799378: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799374u, 0x79937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79937Cu;
label_79937c:
    // 0x79937c: 0x26c4ea60  addiu       $a0, $s6, -0x15A0
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
label_799380:
    // 0x799380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799384:
    // 0x799384: 0xc0b0aa6  jal         func_2C2A98
label_799388:
    if (ctx->pc == 0x799388u) {
        ctx->pc = 0x799388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799384u;
        // 0x799388: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79938Cu;
        goto label_79938c;
    }
    ctx->pc = 0x799384u;
    SET_GPR_U32(ctx, 31, 0x79938Cu);
    ctx->pc = 0x799388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799384u;
    // 0x799388: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799384u, 0x79938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79938Cu;
label_79938c:
    // 0x79938c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799390:
    // 0x799390: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
label_799394:
    if (ctx->pc == 0x799394u) {
        ctx->pc = 0x799394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799390u;
        // 0x799394: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799398u;
        goto label_799398;
    }
    ctx->pc = 0x799390u;
    {
        const bool branch_taken_0x799390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799390u;
        // 0x799394: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799390) {
            ctx->pc = 0x799370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799370;
        }
    }
    ctx->pc = 0x799398u;
label_799398:
    // 0x799398: 0x10000005  b           . + 4 + (0x5 << 2)
label_79939c:
    if (ctx->pc == 0x79939Cu) {
        ctx->pc = 0x79939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799398u;
        // 0x79939c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993A0u;
        goto label_7993a0;
    }
    ctx->pc = 0x799398u;
    {
        const bool branch_taken_0x799398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799398u;
        // 0x79939c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799398) {
            ctx->pc = 0x7993B0u;
            goto label_7993b0;
        }
    }
    ctx->pc = 0x7993A0u;
label_7993a0:
    // 0x7993a0: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_7993a4:
    // 0x7993a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7993a8:
    // 0x7993a8: 0xc0b56a8  jal         func_2D5AA0
label_7993ac:
    if (ctx->pc == 0x7993ACu) {
        ctx->pc = 0x7993ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A8u;
        // 0x7993ac: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993B0u;
        goto label_7993b0;
    }
    ctx->pc = 0x7993A8u;
    SET_GPR_U32(ctx, 31, 0x7993B0u);
    ctx->pc = 0x7993ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A8u;
    // 0x7993ac: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7993A8u, 0x7993B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B0u;
label_7993b0:
    // 0x7993b0: 0xc0b0f90  jal         func_2C3E40
label_7993b4:
    if (ctx->pc == 0x7993B4u) {
        ctx->pc = 0x7993B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B0u;
        // 0x7993b4: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993B8u;
        goto label_7993b8;
    }
    ctx->pc = 0x7993B0u;
    SET_GPR_U32(ctx, 31, 0x7993B8u);
    ctx->pc = 0x7993B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B0u;
    // 0x7993b4: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x7993B0u, 0x7993B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B8u;
label_7993b8:
    // 0x7993b8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_7993bc:
    if (ctx->pc == 0x7993BCu) {
        ctx->pc = 0x7993BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B8u;
        // 0x7993bc: 0x8262a030  lb          $v0, -0x5FD0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294942768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993C0u;
        goto label_7993c0;
    }
    ctx->pc = 0x7993B8u;
    {
        const bool branch_taken_0x7993b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B8u;
        // 0x7993bc: 0x8262a030  lb          $v0, -0x5FD0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294942768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993b8) {
            ctx->pc = 0x7993A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993a0;
        }
    }
    ctx->pc = 0x7993C0u;
label_7993c0:
    // 0x7993c0: 0x27c84c58  addiu       $t0, $fp, 0x4C58
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 19544));
label_7993c4:
    // 0x7993c4: 0x2663a030  addiu       $v1, $s3, -0x5FD0
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942768));
label_7993c8:
    // 0x7993c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7993c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7993cc:
    // 0x7993cc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_7993d0:
    if (ctx->pc == 0x7993D0u) {
        ctx->pc = 0x7993D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993CCu;
        // 0x7993d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993D4u;
        goto label_7993d4;
    }
    ctx->pc = 0x7993CCu;
    {
        const bool branch_taken_0x7993cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993CCu;
        // 0x7993d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993cc) {
            ctx->pc = 0x799408u;
            goto label_799408;
        }
    }
    ctx->pc = 0x7993D4u;
label_7993d4:
    // 0x7993d4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7993d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7993d8:
    // 0x7993d8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7993dc:
    // 0x7993dc: 0x0  nop
    ctx->pc = 0x7993dcu;
    // NOP
label_7993e0:
    // 0x7993e0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7993e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_7993e4:
    // 0x7993e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_7993e8:
    // 0x7993e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_7993ec:
    // 0x7993ec: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7993ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_7993f0:
    // 0x7993f0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7993f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_7993f4:
    // 0x7993f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7993f8:
    if (ctx->pc == 0x7993F8u) {
        ctx->pc = 0x7993F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F4u;
        // 0x7993f8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993FCu;
        goto label_7993fc;
    }
    ctx->pc = 0x7993F4u;
    {
        const bool branch_taken_0x7993f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F4u;
        // 0x7993f8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993f4) {
            ctx->pc = 0x799408u;
            goto label_799408;
        }
    }
    ctx->pc = 0x7993FCu;
label_7993fc:
    // 0x7993fc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799400:
    // 0x799400: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_799404:
    if (ctx->pc == 0x799404u) {
        ctx->pc = 0x799404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799400u;
        // 0x799404: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799408u;
        goto label_799408;
    }
    ctx->pc = 0x799400u;
    {
        const bool branch_taken_0x799400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799400) {
            ctx->pc = 0x799404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799400u;
            // 0x799404: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7993E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993e0;
        }
    }
    ctx->pc = 0x799408u;
label_799408:
    // 0x799408: 0xc053f66  jal         func_14FD98
label_79940c:
    if (ctx->pc == 0x79940Cu) {
        ctx->pc = 0x79940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799408u;
        // 0x79940c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799410u;
        goto label_799410;
    }
    ctx->pc = 0x799408u;
    SET_GPR_U32(ctx, 31, 0x799410u);
    ctx->pc = 0x79940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799408u;
    // 0x79940c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799408u, 0x799410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799410u;
label_799410:
    // 0x799410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799414:
    // 0x799414: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799418:
    // 0x799418: 0xc06f768  jal         func_1BDDA0
label_79941c:
    if (ctx->pc == 0x79941Cu) {
        ctx->pc = 0x79941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799418u;
        // 0x79941c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799420u;
        goto label_799420;
    }
    ctx->pc = 0x799418u;
    SET_GPR_U32(ctx, 31, 0x799420u);
    ctx->pc = 0x79941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799418u;
    // 0x79941c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDDA0u, 0x799418u, 0x799420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799420u;
label_799420:
    // 0x799420: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799420u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_799424:
    // 0x799424: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x799424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_799428:
    // 0x799428: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x799428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_79942c:
    // 0x79942c: 0x26c4ea60  addiu       $a0, $s6, -0x15A0
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
label_799430:
    // 0x799430: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799434:
    // 0x799434: 0xc0b0a92  jal         func_2C2A48
label_799438:
    if (ctx->pc == 0x799438u) {
        ctx->pc = 0x799438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799434u;
        // 0x799438: 0x26336ab0  addiu       $s3, $s1, 0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 27312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79943Cu;
        goto label_79943c;
    }
    ctx->pc = 0x799434u;
    SET_GPR_U32(ctx, 31, 0x79943Cu);
    ctx->pc = 0x799438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799434u;
    // 0x799438: 0x26336ab0  addiu       $s3, $s1, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799434u, 0x79943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79943Cu;
label_79943c:
    // 0x79943c: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x79943cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799440:
    // 0x799440: 0xc0b0e6c  jal         func_2C39B0
label_799444:
    if (ctx->pc == 0x799444u) {
        ctx->pc = 0x799444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799440u;
        // 0x799444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799448u;
        goto label_799448;
    }
    ctx->pc = 0x799440u;
    SET_GPR_U32(ctx, 31, 0x799448u);
    ctx->pc = 0x799444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799440u;
    // 0x799444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799440u, 0x799448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799448u;
label_799448:
    // 0x799448: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79944c:
    // 0x79944c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79944cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799450:
    // 0x799450: 0xc0b0fb6  jal         func_2C3ED8
label_799454:
    if (ctx->pc == 0x799454u) {
        ctx->pc = 0x799454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799450u;
        // 0x799454: 0x2445a038  addiu       $a1, $v0, -0x5FC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799458u;
        goto label_799458;
    }
    ctx->pc = 0x799450u;
    SET_GPR_U32(ctx, 31, 0x799458u);
    ctx->pc = 0x799454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799450u;
    // 0x799454: 0x2445a038  addiu       $a1, $v0, -0x5FC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799450u, 0x799458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799458u;
label_799458:
    // 0x799458: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x799458u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_79945c:
    // 0x79945c: 0xc0a54b4  jal         func_2952D0
label_799460:
    if (ctx->pc == 0x799460u) {
        ctx->pc = 0x799460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79945Cu;
        // 0x799460: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799464u;
        goto label_799464;
    }
    ctx->pc = 0x79945Cu;
    SET_GPR_U32(ctx, 31, 0x799464u);
    ctx->pc = 0x799460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79945Cu;
    // 0x799460: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79945Cu, 0x799464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799464u;
label_799464:
    // 0x799464: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_799468:
    if (ctx->pc == 0x799468u) {
        ctx->pc = 0x799468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799464u;
        // 0x799468: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79946Cu;
        goto label_79946c;
    }
    ctx->pc = 0x799464u;
    {
        const bool branch_taken_0x799464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799464u;
        // 0x799468: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799464) {
            ctx->pc = 0x799478u;
            goto label_799478;
        }
    }
    ctx->pc = 0x79946Cu;
label_79946c:
    // 0x79946c: 0xc06f6fe  jal         func_1BDBF8
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
    ctx->pc = 0x1BDBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBF8u, 0x79946Cu, 0x799474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799474u;
label_799474:
    // 0x799474: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799478:
    // 0x799478: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_79947c:
    // 0x79947c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_799480:
    // 0x799480: 0x247064f0  addiu       $s0, $v1, 0x64F0
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25840));
label_799484:
    // 0x799484: 0xc0b56a8  jal         func_2D5AA0
label_799488:
    if (ctx->pc == 0x799488u) {
        ctx->pc = 0x799488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799484u;
        // 0x799488: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79948Cu;
        goto label_79948c;
    }
    ctx->pc = 0x799484u;
    SET_GPR_U32(ctx, 31, 0x79948Cu);
    ctx->pc = 0x799488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799484u;
    // 0x799488: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799484u, 0x79948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79948Cu;
label_79948c:
    // 0x79948c: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x79948cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_799490:
    // 0x799490: 0xc0a421a  jal         func_290868
label_799494:
    if (ctx->pc == 0x799494u) {
        ctx->pc = 0x799494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799490u;
        // 0x799494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799498u;
        goto label_799498;
    }
    ctx->pc = 0x799490u;
    SET_GPR_U32(ctx, 31, 0x799498u);
    ctx->pc = 0x799494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799490u;
    // 0x799494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799490u, 0x799498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799498u;
label_799498:
    // 0x799498: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_79949c:
    if (ctx->pc == 0x79949Cu) {
        ctx->pc = 0x79949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799498u;
        // 0x79949c: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994A0u;
        goto label_7994a0;
    }
    ctx->pc = 0x799498u;
    {
        const bool branch_taken_0x799498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799498u;
        // 0x79949c: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799498) {
            ctx->pc = 0x7994B4u;
            goto label_7994b4;
        }
    }
    ctx->pc = 0x7994A0u;
label_7994a0:
    // 0x7994a0: 0xc0a421a  jal         func_290868
label_7994a4:
    if (ctx->pc == 0x7994A4u) {
        ctx->pc = 0x7994A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A0u;
        // 0x7994a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994A8u;
        goto label_7994a8;
    }
    ctx->pc = 0x7994A0u;
    SET_GPR_U32(ctx, 31, 0x7994A8u);
    ctx->pc = 0x7994A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994A0u;
    // 0x7994a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x7994A0u, 0x7994A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A8u;
label_7994a8:
    // 0x7994a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7994a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7994ac:
    // 0x7994ac: 0xc0a2520  jal         func_289480
label_7994b0:
    if (ctx->pc == 0x7994B0u) {
        ctx->pc = 0x7994B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994ACu;
        // 0x7994b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994B4u;
        goto label_7994b4;
    }
    ctx->pc = 0x7994ACu;
    SET_GPR_U32(ctx, 31, 0x7994B4u);
    ctx->pc = 0x7994B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994ACu;
    // 0x7994b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289480u, 0x7994ACu, 0x7994B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B4u;
label_7994b4:
    // 0x7994b4: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_7994b8:
    // 0x7994b8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_7994bc:
    // 0x7994bc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x7994bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994c0:
    // 0x7994c0: 0xc0b56a8  jal         func_2D5AA0
label_7994c4:
    if (ctx->pc == 0x7994C4u) {
        ctx->pc = 0x7994C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994C0u;
        // 0x7994c4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994C8u;
        goto label_7994c8;
    }
    ctx->pc = 0x7994C0u;
    SET_GPR_U32(ctx, 31, 0x7994C8u);
    ctx->pc = 0x7994C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994C0u;
    // 0x7994c4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994C0u, 0x7994C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994C8u;
label_7994c8:
    // 0x7994c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7994cc:
    // 0x7994cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7994d0:
    // 0x7994d0: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x7994d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_7994d4:
    // 0x7994d4: 0xc0a54b4  jal         func_2952D0
label_7994d8:
    if (ctx->pc == 0x7994D8u) {
        ctx->pc = 0x7994D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D4u;
        // 0x7994d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994DCu;
        goto label_7994dc;
    }
    ctx->pc = 0x7994D4u;
    SET_GPR_U32(ctx, 31, 0x7994DCu);
    ctx->pc = 0x7994D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D4u;
    // 0x7994d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7994D4u, 0x7994DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994DCu;
label_7994dc:
    // 0x7994dc: 0xc0a56ae  jal         func_295AB8
label_7994e0:
    if (ctx->pc == 0x7994E0u) {
        ctx->pc = 0x7994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994DCu;
        // 0x7994e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994E4u;
        goto label_7994e4;
    }
    ctx->pc = 0x7994DCu;
    SET_GPR_U32(ctx, 31, 0x7994E4u);
    ctx->pc = 0x7994E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994DCu;
    // 0x7994e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x7994DCu, 0x7994E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E4u;
label_7994e4:
    // 0x7994e4: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_7994e8:
    // 0x7994e8: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x7994e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_7994ec:
    // 0x7994ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7994ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_7994f0:
    // 0x7994f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7994f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7994f4:
    // 0x7994f4: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_7994f8:
    // 0x7994f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7994f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994fc:
    // 0x7994fc: 0xc0a57e0  jal         func_295F80
label_799500:
    if (ctx->pc == 0x799500u) {
        ctx->pc = 0x799500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994FCu;
        // 0x799500: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799504u;
        goto label_799504;
    }
    ctx->pc = 0x7994FCu;
    SET_GPR_U32(ctx, 31, 0x799504u);
    ctx->pc = 0x799500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994FCu;
    // 0x799500: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x7994FCu, 0x799504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799504u;
label_799504:
    // 0x799504: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799508:
    // 0x799508: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x799508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_79950c:
    // 0x79950c: 0xc0b56a8  jal         func_2D5AA0
label_799510:
    if (ctx->pc == 0x799510u) {
        ctx->pc = 0x799510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79950Cu;
        // 0x799510: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799514u;
        goto label_799514;
    }
    ctx->pc = 0x79950Cu;
    SET_GPR_U32(ctx, 31, 0x799514u);
    ctx->pc = 0x799510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79950Cu;
    // 0x799510: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79950Cu, 0x799514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799514u;
label_799514:
    // 0x799514: 0xc0b101e  jal         func_2C4078
label_799518:
    if (ctx->pc == 0x799518u) {
        ctx->pc = 0x799518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799514u;
        // 0x799518: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79951Cu;
        goto label_79951c;
    }
    ctx->pc = 0x799514u;
    SET_GPR_U32(ctx, 31, 0x79951Cu);
    ctx->pc = 0x799518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799514u;
    // 0x799518: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799514u, 0x79951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79951Cu;
label_79951c:
    // 0x79951c: 0xc0b0f04  jal         func_2C3C10
label_799520:
    if (ctx->pc == 0x799520u) {
        ctx->pc = 0x799520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79951Cu;
        // 0x799520: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799524u;
        goto label_799524;
    }
    ctx->pc = 0x79951Cu;
    SET_GPR_U32(ctx, 31, 0x799524u);
    ctx->pc = 0x799520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79951Cu;
    // 0x799520: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79951Cu, 0x799524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799524u;
label_799524:
    // 0x799524: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799528:
    // 0x799528: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79952c:
    // 0x79952c: 0x24459b28  addiu       $a1, $v0, -0x64D8
    ctx->pc = 0x79952cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941480));
label_799530:
    // 0x799530: 0xc0b0e24  jal         func_2C3890
label_799534:
    if (ctx->pc == 0x799534u) {
        ctx->pc = 0x799534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799530u;
        // 0x799534: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799538u;
        goto label_799538;
    }
    ctx->pc = 0x799530u;
    SET_GPR_U32(ctx, 31, 0x799538u);
    ctx->pc = 0x799534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799530u;
    // 0x799534: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799530u, 0x799538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799538u;
label_799538:
    // 0x799538: 0x8ee27a8c  lw          $v0, 0x7A8C($s7)
    ctx->pc = 0x799538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 31372)));
label_79953c:
    // 0x79953c: 0x0  nop
    ctx->pc = 0x79953cu;
    // NOP
label_799540:
    // 0x799540: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_799544:
    // 0x799544: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_799548:
    // 0x799548: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_79954c:
    if (ctx->pc == 0x79954Cu) {
        ctx->pc = 0x799550u;
        goto label_799550;
    }
    ctx->pc = 0x799548u;
    {
        const bool branch_taken_0x799548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799548) {
            ctx->pc = 0x799604u;
            goto label_799604;
        }
    }
    ctx->pc = 0x799550u;
label_799550:
    // 0x799550: 0xc0a572a  jal         func_295CA8
label_799554:
    if (ctx->pc == 0x799554u) {
        ctx->pc = 0x799554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799550u;
        // 0x799554: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799558u;
        goto label_799558;
    }
    ctx->pc = 0x799550u;
    SET_GPR_U32(ctx, 31, 0x799558u);
    ctx->pc = 0x799554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799550u;
    // 0x799554: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799550u, 0x799558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799558u;
label_799558:
    // 0x799558: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79955c:
    // 0x79955c: 0x14440029  bne         $v0, $a0, . + 4 + (0x29 << 2)
label_799560:
    if (ctx->pc == 0x799560u) {
        ctx->pc = 0x799560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79955Cu;
        // 0x799560: 0x8ee27a8c  lw          $v0, 0x7A8C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 31372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799564u;
        goto label_799564;
    }
    ctx->pc = 0x79955Cu;
    {
        const bool branch_taken_0x79955c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x799560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79955Cu;
        // 0x799560: 0x8ee27a8c  lw          $v0, 0x7A8C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79955c) {
            ctx->pc = 0x799604u;
            goto label_799604;
        }
    }
    ctx->pc = 0x799564u;
label_799564:
    // 0x799564: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_799568:
    // 0x799568: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79956c:
    // 0x79956c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79956cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799570:
    // 0x799570: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_799574:
    // 0x799574: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_799578:
    // 0x799578: 0xaee27a8c  sw          $v0, 0x7A8C($s7)
    ctx->pc = 0x799578u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 31372), GPR_U32(ctx, 2));
label_79957c:
    // 0x79957c: 0x24709f80  addiu       $s0, $v1, -0x6080
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942592));
label_799580:
    // 0x799580: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x799580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_799584:
    // 0x799584: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_799588:
    // 0x799588: 0x246464f0  addiu       $a0, $v1, 0x64F0
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25840));
label_79958c:
    // 0x79958c: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x79958cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_799590:
    // 0x799590: 0xc0a421a  jal         func_290868
label_799594:
    if (ctx->pc == 0x799594u) {
        ctx->pc = 0x799594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799590u;
        // 0x799594: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799598u;
        goto label_799598;
    }
    ctx->pc = 0x799590u;
    SET_GPR_U32(ctx, 31, 0x799598u);
    ctx->pc = 0x799594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799590u;
    // 0x799594: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799590u, 0x799598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799598u;
label_799598:
    // 0x799598: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_79959c:
    if (ctx->pc == 0x79959Cu) {
        ctx->pc = 0x79959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799598u;
        // 0x79959c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995A0u;
        goto label_7995a0;
    }
    ctx->pc = 0x799598u;
    {
        const bool branch_taken_0x799598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799598) {
            ctx->pc = 0x79959Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799598u;
            // 0x79959c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995F8u;
            goto label_7995f8;
        }
    }
    ctx->pc = 0x7995A0u;
label_7995a0:
    // 0x7995a0: 0xc0a572a  jal         func_295CA8
label_7995a4:
    if (ctx->pc == 0x7995A4u) {
        ctx->pc = 0x7995A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A0u;
        // 0x7995a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995A8u;
        goto label_7995a8;
    }
    ctx->pc = 0x7995A0u;
    SET_GPR_U32(ctx, 31, 0x7995A8u);
    ctx->pc = 0x7995A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995A0u;
    // 0x7995a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7995A0u, 0x7995A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995A8u;
label_7995a8:
    // 0x7995a8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_7995ac:
    if (ctx->pc == 0x7995ACu) {
        ctx->pc = 0x7995ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A8u;
        // 0x7995ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995B0u;
        goto label_7995b0;
    }
    ctx->pc = 0x7995A8u;
    {
        const bool branch_taken_0x7995a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7995a8) {
            ctx->pc = 0x7995ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7995A8u;
            // 0x7995ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995F8u;
            goto label_7995f8;
        }
    }
    ctx->pc = 0x7995B0u;
label_7995b0:
    // 0x7995b0: 0xc0a5772  jal         func_295DC8
label_7995b4:
    if (ctx->pc == 0x7995B4u) {
        ctx->pc = 0x7995B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B0u;
        // 0x7995b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995B8u;
        goto label_7995b8;
    }
    ctx->pc = 0x7995B0u;
    SET_GPR_U32(ctx, 31, 0x7995B8u);
    ctx->pc = 0x7995B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995B0u;
    // 0x7995b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x7995B0u, 0x7995B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B8u;
label_7995b8:
    // 0x7995b8: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
label_7995bc:
    if (ctx->pc == 0x7995BCu) {
        ctx->pc = 0x7995BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B8u;
        // 0x7995bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995C0u;
        goto label_7995c0;
    }
    ctx->pc = 0x7995B8u;
    {
        const bool branch_taken_0x7995b8 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x7995b8) {
            ctx->pc = 0x7995BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7995B8u;
            // 0x7995bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995F8u;
            goto label_7995f8;
        }
    }
    ctx->pc = 0x7995C0u;
label_7995c0:
    // 0x7995c0: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x7995c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_7995c4:
    // 0x7995c4: 0x26c4ea60  addiu       $a0, $s6, -0x15A0
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
label_7995c8:
    // 0x7995c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x7995c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_7995cc:
    // 0x7995cc: 0xc0b0a92  jal         func_2C2A48
label_7995d0:
    if (ctx->pc == 0x7995D0u) {
        ctx->pc = 0x7995D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995CCu;
        // 0x7995d0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995D4u;
        goto label_7995d4;
    }
    ctx->pc = 0x7995CCu;
    SET_GPR_U32(ctx, 31, 0x7995D4u);
    ctx->pc = 0x7995D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995CCu;
    // 0x7995d0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x7995CCu, 0x7995D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995D4u;
label_7995d4:
    // 0x7995d4: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_7995d8:
    // 0x7995d8: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x7995d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_7995dc:
    // 0x7995dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7995dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_7995e0:
    // 0x7995e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7995e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7995e4:
    // 0x7995e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x7995e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_7995e8:
    // 0x7995e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7995ec:
    // 0x7995ec: 0xc0a57e0  jal         func_295F80
label_7995f0:
    if (ctx->pc == 0x7995F0u) {
        ctx->pc = 0x7995F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ECu;
        // 0x7995f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995F4u;
        goto label_7995f4;
    }
    ctx->pc = 0x7995ECu;
    SET_GPR_U32(ctx, 31, 0x7995F4u);
    ctx->pc = 0x7995F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995ECu;
    // 0x7995f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x7995ECu, 0x7995F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F4u;
label_7995f4:
    // 0x7995f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x7995f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_7995f8:
    // 0x7995f8: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x7995f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_7995fc:
    // 0x7995fc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_799600:
    if (ctx->pc == 0x799600u) {
        ctx->pc = 0x799600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995FCu;
        // 0x799600: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799604u;
        goto label_799604;
    }
    ctx->pc = 0x7995FCu;
    {
        const bool branch_taken_0x7995fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995FCu;
        // 0x799600: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995fc) {
            ctx->pc = 0x799580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799580;
        }
    }
    ctx->pc = 0x799604u;
label_799604:
    // 0x799604: 0xc0a572a  jal         func_295CA8
label_799608:
    if (ctx->pc == 0x799608u) {
        ctx->pc = 0x799608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799604u;
        // 0x799608: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79960Cu;
        goto label_79960c;
    }
    ctx->pc = 0x799604u;
    SET_GPR_U32(ctx, 31, 0x79960Cu);
    ctx->pc = 0x799608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799604u;
    // 0x799608: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799604u, 0x79960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79960Cu;
label_79960c:
    // 0x79960c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_799610:
    if (ctx->pc == 0x799610u) {
        ctx->pc = 0x799610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79960Cu;
        // 0x799610: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799614u;
        goto label_799614;
    }
    ctx->pc = 0x79960Cu;
    {
        const bool branch_taken_0x79960c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79960Cu;
        // 0x799610: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79960c) {
            ctx->pc = 0x799664u;
            goto label_799664;
        }
    }
    ctx->pc = 0x799614u;
label_799614:
    // 0x799614: 0xc0a56ae  jal         func_295AB8
label_799618:
    if (ctx->pc == 0x799618u) {
        ctx->pc = 0x799618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799614u;
        // 0x799618: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79961Cu;
        goto label_79961c;
    }
    ctx->pc = 0x799614u;
    SET_GPR_U32(ctx, 31, 0x79961Cu);
    ctx->pc = 0x799618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799614u;
    // 0x799618: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799614u, 0x79961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79961Cu;
label_79961c:
    // 0x79961c: 0x26c4ea60  addiu       $a0, $s6, -0x15A0
    ctx->pc = 0x79961cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
label_799620:
    // 0x799620: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799624:
    // 0x799624: 0xc0b0bc2  jal         func_2C2F08
label_799628:
    if (ctx->pc == 0x799628u) {
        ctx->pc = 0x799628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799624u;
        // 0x799628: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79962Cu;
        goto label_79962c;
    }
    ctx->pc = 0x799624u;
    SET_GPR_U32(ctx, 31, 0x79962Cu);
    ctx->pc = 0x799628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799624u;
    // 0x799628: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F08u, 0x799624u, 0x79962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79962Cu;
label_79962c:
    // 0x79962c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799630:
    // 0x799630: 0x10440032  beq         $v0, $a0, . + 4 + (0x32 << 2)
label_799634:
    if (ctx->pc == 0x799634u) {
        ctx->pc = 0x799634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799630u;
        // 0x799634: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799638u;
        goto label_799638;
    }
    ctx->pc = 0x799630u;
    {
        const bool branch_taken_0x799630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x799634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799630u;
        // 0x799634: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799630) {
            ctx->pc = 0x7996FCu;
            goto label_7996fc;
        }
    }
    ctx->pc = 0x799638u;
label_799638:
    // 0x799638: 0x1000002c  b           . + 4 + (0x2C << 2)
label_79963c:
    if (ctx->pc == 0x79963Cu) {
        ctx->pc = 0x79963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799638u;
        // 0x79963c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799640u;
        goto label_799640;
    }
    ctx->pc = 0x799638u;
    {
        const bool branch_taken_0x799638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799638u;
        // 0x79963c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799638) {
            ctx->pc = 0x7996ECu;
            goto label_7996ec;
        }
    }
    ctx->pc = 0x799640u;
label_799640:
    // 0x799640: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x799640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_799644:
    // 0x799644: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799648:
    // 0x799648: 0xc0a56e0  jal         func_295B80
label_79964c:
    if (ctx->pc == 0x79964Cu) {
        ctx->pc = 0x79964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799648u;
        // 0x79964c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799650u;
        goto label_799650;
    }
    ctx->pc = 0x799648u;
    SET_GPR_U32(ctx, 31, 0x799650u);
    ctx->pc = 0x79964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799648u;
    // 0x79964c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x799648u, 0x799650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799650u;
label_799650:
    // 0x799650: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x799650u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_799654:
    // 0x799654: 0xc0a421a  jal         func_290868
label_799658:
    if (ctx->pc == 0x799658u) {
        ctx->pc = 0x799658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799654u;
        // 0x799658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79965Cu;
        goto label_79965c;
    }
    ctx->pc = 0x799654u;
    SET_GPR_U32(ctx, 31, 0x79965Cu);
    ctx->pc = 0x799658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799654u;
    // 0x799658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799654u, 0x79965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79965Cu;
label_79965c:
    // 0x79965c: 0x10000020  b           . + 4 + (0x20 << 2)
label_799660:
    if (ctx->pc == 0x799660u) {
        ctx->pc = 0x799660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79965Cu;
        // 0x799660: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799664u;
        goto label_799664;
    }
    ctx->pc = 0x79965Cu;
    {
        const bool branch_taken_0x79965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79965Cu;
        // 0x799660: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79965c) {
            ctx->pc = 0x7996E0u;
            goto label_7996e0;
        }
    }
    ctx->pc = 0x799664u;
label_799664:
    // 0x799664: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x799664u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799668:
    // 0x799668: 0x245164f0  addiu       $s1, $v0, 0x64F0
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
label_79966c:
    // 0x79966c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x79966cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799670:
    // 0x799670: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799674:
    // 0x799674: 0x24509f80  addiu       $s0, $v0, -0x6080
    ctx->pc = 0x799674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942592));
label_799678:
    // 0x799678: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x799678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_79967c:
    // 0x79967c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79967cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799680:
    // 0x799680: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x799680u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_799684:
    // 0x799684: 0xc0a421a  jal         func_290868
label_799688:
    if (ctx->pc == 0x799688u) {
        ctx->pc = 0x799688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799684u;
        // 0x799688: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79968Cu;
        goto label_79968c;
    }
    ctx->pc = 0x799684u;
    SET_GPR_U32(ctx, 31, 0x79968Cu);
    ctx->pc = 0x799688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799684u;
    // 0x799688: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799684u, 0x79968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79968Cu;
label_79968c:
    // 0x79968c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_799690:
    if (ctx->pc == 0x799690u) {
        ctx->pc = 0x799690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79968Cu;
        // 0x799690: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799694u;
        goto label_799694;
    }
    ctx->pc = 0x79968Cu;
    {
        const bool branch_taken_0x79968c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79968c) {
            ctx->pc = 0x799690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79968Cu;
            // 0x799690: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7996D4u;
            goto label_7996d4;
        }
    }
    ctx->pc = 0x799694u;
label_799694:
    // 0x799694: 0xc0a572a  jal         func_295CA8
label_799698:
    if (ctx->pc == 0x799698u) {
        ctx->pc = 0x799698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799694u;
        // 0x799698: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79969Cu;
        goto label_79969c;
    }
    ctx->pc = 0x799694u;
    SET_GPR_U32(ctx, 31, 0x79969Cu);
    ctx->pc = 0x799698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799694u;
    // 0x799698: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799694u, 0x79969Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79969Cu;
label_79969c:
    // 0x79969c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_7996a0:
    if (ctx->pc == 0x7996A0u) {
        ctx->pc = 0x7996A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79969Cu;
        // 0x7996a0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996A4u;
        goto label_7996a4;
    }
    ctx->pc = 0x79969Cu;
    {
        const bool branch_taken_0x79969c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79969c) {
            ctx->pc = 0x7996A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79969Cu;
            // 0x7996a0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7996D4u;
            goto label_7996d4;
        }
    }
    ctx->pc = 0x7996A4u;
label_7996a4:
    // 0x7996a4: 0xc0a5772  jal         func_295DC8
label_7996a8:
    if (ctx->pc == 0x7996A8u) {
        ctx->pc = 0x7996A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A4u;
        // 0x7996a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996ACu;
        goto label_7996ac;
    }
    ctx->pc = 0x7996A4u;
    SET_GPR_U32(ctx, 31, 0x7996ACu);
    ctx->pc = 0x7996A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996A4u;
    // 0x7996a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x7996A4u, 0x7996ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996ACu;
label_7996ac:
    // 0x7996ac: 0x58400009  blezl       $v0, . + 4 + (0x9 << 2)
label_7996b0:
    if (ctx->pc == 0x7996B0u) {
        ctx->pc = 0x7996B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996ACu;
        // 0x7996b0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996B4u;
        goto label_7996b4;
    }
    ctx->pc = 0x7996ACu;
    {
        const bool branch_taken_0x7996ac = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x7996ac) {
            ctx->pc = 0x7996B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7996ACu;
            // 0x7996b0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7996D4u;
            goto label_7996d4;
        }
    }
    ctx->pc = 0x7996B4u;
label_7996b4:
    // 0x7996b4: 0xc0a56ae  jal         func_295AB8
label_7996b8:
    if (ctx->pc == 0x7996B8u) {
        ctx->pc = 0x7996B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B4u;
        // 0x7996b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996BCu;
        goto label_7996bc;
    }
    ctx->pc = 0x7996B4u;
    SET_GPR_U32(ctx, 31, 0x7996BCu);
    ctx->pc = 0x7996B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996B4u;
    // 0x7996b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x7996B4u, 0x7996BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996BCu;
label_7996bc:
    // 0x7996bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7996bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7996c0:
    // 0x7996c0: 0x26c4ea60  addiu       $a0, $s6, -0x15A0
    ctx->pc = 0x7996c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
label_7996c4:
    // 0x7996c4: 0xc0b0bc2  jal         func_2C2F08
label_7996c8:
    if (ctx->pc == 0x7996C8u) {
        ctx->pc = 0x7996C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C4u;
        // 0x7996c8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996CCu;
        goto label_7996cc;
    }
    ctx->pc = 0x7996C4u;
    SET_GPR_U32(ctx, 31, 0x7996CCu);
    ctx->pc = 0x7996C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C4u;
    // 0x7996c8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F08u, 0x7996C4u, 0x7996CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996CCu;
label_7996cc:
    // 0x7996cc: 0x1054ffdc  beq         $v0, $s4, . + 4 + (-0x24 << 2)
label_7996d0:
    if (ctx->pc == 0x7996D0u) {
        ctx->pc = 0x7996D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996CCu;
        // 0x7996d0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996D4u;
        goto label_7996d4;
    }
    ctx->pc = 0x7996CCu;
    {
        const bool branch_taken_0x7996cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x7996D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996CCu;
        // 0x7996d0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996cc) {
            ctx->pc = 0x799640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799640;
        }
    }
    ctx->pc = 0x7996D4u;
label_7996d4:
    // 0x7996d4: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x7996d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_7996d8:
    // 0x7996d8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_7996dc:
    if (ctx->pc == 0x7996DCu) {
        ctx->pc = 0x7996DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D8u;
        // 0x7996dc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996E0u;
        goto label_7996e0;
    }
    ctx->pc = 0x7996D8u;
    {
        const bool branch_taken_0x7996d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D8u;
        // 0x7996dc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996d8) {
            ctx->pc = 0x799678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799678;
        }
    }
    ctx->pc = 0x7996E0u;
label_7996e0:
    // 0x7996e0: 0x17c00006  bnez        $fp, . + 4 + (0x6 << 2)
label_7996e4:
    if (ctx->pc == 0x7996E4u) {
        ctx->pc = 0x7996E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E0u;
        // 0x7996e4: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996E8u;
        goto label_7996e8;
    }
    ctx->pc = 0x7996E0u;
    {
        const bool branch_taken_0x7996e0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E0u;
        // 0x7996e4: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996e0) {
            ctx->pc = 0x7996FCu;
            goto label_7996fc;
        }
    }
    ctx->pc = 0x7996E8u;
label_7996e8:
    // 0x7996e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7996e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7996ec:
    // 0x7996ec: 0xc0b56a8  jal         func_2D5AA0
label_7996f0:
    if (ctx->pc == 0x7996F0u) {
        ctx->pc = 0x7996F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996ECu;
        // 0x7996f0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996F4u;
        goto label_7996f4;
    }
    ctx->pc = 0x7996ECu;
    SET_GPR_U32(ctx, 31, 0x7996F4u);
    ctx->pc = 0x7996F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996ECu;
    // 0x7996f0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7996ECu, 0x7996F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996F4u;
label_7996f4:
    // 0x7996f4: 0x1000ff92  b           . + 4 + (-0x6E << 2)
label_7996f8:
    if (ctx->pc == 0x7996F8u) {
        ctx->pc = 0x7996F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F4u;
        // 0x7996f8: 0x8ee27a8c  lw          $v0, 0x7A8C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 31372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996FCu;
        goto label_7996fc;
    }
    ctx->pc = 0x7996F4u;
    {
        const bool branch_taken_0x7996f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F4u;
        // 0x7996f8: 0x8ee27a8c  lw          $v0, 0x7A8C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996f4) {
            ctx->pc = 0x799540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799540;
        }
    }
    ctx->pc = 0x7996FCu;
label_7996fc:
    // 0x7996fc: 0xc0a572a  jal         func_295CA8
label_799700:
    if (ctx->pc == 0x799700u) {
        ctx->pc = 0x799700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996FCu;
        // 0x799700: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799704u;
        goto label_799704;
    }
    ctx->pc = 0x7996FCu;
    SET_GPR_U32(ctx, 31, 0x799704u);
    ctx->pc = 0x799700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996FCu;
    // 0x799700: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7996FCu, 0x799704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799704u;
label_799704:
    // 0x799704: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_799708:
    if (ctx->pc == 0x799708u) {
        ctx->pc = 0x799708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799704u;
        // 0x799708: 0x3c04005d  lui         $a0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79970Cu;
        goto label_79970c;
    }
    ctx->pc = 0x799704u;
    {
        const bool branch_taken_0x799704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799704) {
            ctx->pc = 0x799708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799704u;
            // 0x799708: 0x3c04005d  lui         $a0, 0x5D (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799728u;
            goto label_799728;
        }
    }
    ctx->pc = 0x79970Cu;
label_79970c:
    // 0x79970c: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x79970cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_799710:
    // 0x799710: 0x8c648658  lw          $a0, -0x79A8($v1)
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936152)));
label_799714:
    // 0x799714: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x799714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_799718:
    // 0x799718: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_79971c:
    // 0x79971c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79971cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_799720:
    // 0x799720: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_799724:
    // 0x799724: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_799728:
    // 0x799728: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79972c:
    // 0x79972c: 0x2490ae50  addiu       $s0, $a0, -0x51B0
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
label_799730:
    // 0x799730: 0x2445a020  addiu       $a1, $v0, -0x5FE0
    ctx->pc = 0x799730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942752));
label_799734:
    // 0x799734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799738:
    // 0x799738: 0xc04ccb4  jal         func_1332D0
label_79973c:
    if (ctx->pc == 0x79973Cu) {
        ctx->pc = 0x79973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799738u;
        // 0x79973c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799740u;
        goto label_799740;
    }
    ctx->pc = 0x799738u;
    SET_GPR_U32(ctx, 31, 0x799740u);
    ctx->pc = 0x79973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799738u;
    // 0x79973c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799738u, 0x799740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799740u;
label_799740:
    // 0x799740: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_799744:
    // 0x799744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799748:
    // 0x799748: 0x2465a028  addiu       $a1, $v1, -0x5FD8
    ctx->pc = 0x799748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942760));
label_79974c:
    // 0x79974c: 0xc04ccb4  jal         func_1332D0
label_799750:
    if (ctx->pc == 0x799750u) {
        ctx->pc = 0x799750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79974Cu;
        // 0x799750: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799754u;
        goto label_799754;
    }
    ctx->pc = 0x79974Cu;
    SET_GPR_U32(ctx, 31, 0x799754u);
    ctx->pc = 0x799750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79974Cu;
    // 0x799750: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79974Cu, 0x799754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799754u;
label_799754:
    // 0x799754: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_799758:
    // 0x799758: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x799758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_79975c:
    // 0x79975c: 0x8c448658  lw          $a0, -0x79A8($v0)
    ctx->pc = 0x79975cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_799760:
    // 0x799760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799764:
    // 0x799764: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_799768:
    // 0x799768: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79976c:
    // 0x79976c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79976cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_799770:
    // 0x799770: 0xc0b0e6c  jal         func_2C39B0
label_799774:
    if (ctx->pc == 0x799774u) {
        ctx->pc = 0x799774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799770u;
        // 0x799774: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799778u;
        goto label_799778;
    }
    ctx->pc = 0x799770u;
    SET_GPR_U32(ctx, 31, 0x799778u);
    ctx->pc = 0x799774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799770u;
    // 0x799774: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799770u, 0x799778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799778u;
label_799778:
    // 0x799778: 0xc0a572a  jal         func_295CA8
label_79977c:
    if (ctx->pc == 0x79977Cu) {
        ctx->pc = 0x79977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799778u;
        // 0x79977c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799780u;
        goto label_799780;
    }
    ctx->pc = 0x799778u;
    SET_GPR_U32(ctx, 31, 0x799780u);
    ctx->pc = 0x79977Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799778u;
    // 0x79977c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799778u, 0x799780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799780u;
label_799780:
    // 0x799780: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_799784:
    if (ctx->pc == 0x799784u) {
        ctx->pc = 0x799788u;
        goto label_799788;
    }
    ctx->pc = 0x799780u;
    {
        const bool branch_taken_0x799780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799780) {
            ctx->pc = 0x7997B4u;
            goto label_7997b4;
        }
    }
    ctx->pc = 0x799788u;
label_799788:
    // 0x799788: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79978c:
    // 0x79978c: 0xc0a56f0  jal         func_295BC0
label_799790:
    if (ctx->pc == 0x799790u) {
        ctx->pc = 0x799790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79978Cu;
        // 0x799790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799794u;
        goto label_799794;
    }
    ctx->pc = 0x79978Cu;
    SET_GPR_U32(ctx, 31, 0x799794u);
    ctx->pc = 0x799790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79978Cu;
    // 0x799790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79978Cu, 0x799794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799794u;
label_799794:
    // 0x799794: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799798:
    // 0x799798: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79979c:
    // 0x79979c: 0xc0b0fb6  jal         func_2C3ED8
label_7997a0:
    if (ctx->pc == 0x7997A0u) {
        ctx->pc = 0x7997A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79979Cu;
        // 0x7997a0: 0x24a5a040  addiu       $a1, $a1, -0x5FC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997A4u;
        goto label_7997a4;
    }
    ctx->pc = 0x79979Cu;
    SET_GPR_U32(ctx, 31, 0x7997A4u);
    ctx->pc = 0x7997A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79979Cu;
    // 0x7997a0: 0x24a5a040  addiu       $a1, $a1, -0x5FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79979Cu, 0x7997A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997A4u;
label_7997a4:
    // 0x7997a4: 0x8ea32f84  lw          $v1, 0x2F84($s5)
    ctx->pc = 0x7997a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_7997a8:
    // 0x7997a8: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_7997ac:
    // 0x7997ac: 0xc0b56a8  jal         func_2D5AA0
label_7997b0:
    if (ctx->pc == 0x7997B0u) {
        ctx->pc = 0x7997B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997ACu;
        // 0x7997b0: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997B4u;
        goto label_7997b4;
    }
    ctx->pc = 0x7997ACu;
    SET_GPR_U32(ctx, 31, 0x7997B4u);
    ctx->pc = 0x7997B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997ACu;
    // 0x7997b0: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7997ACu, 0x7997B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997B4u;
label_7997b4:
    // 0x7997b4: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
label_7997b8:
    if (ctx->pc == 0x7997B8u) {
        ctx->pc = 0x7997B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B4u;
        // 0x7997b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997BCu;
        goto label_7997bc;
    }
    ctx->pc = 0x7997B4u;
    {
        const bool branch_taken_0x7997b4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B4u;
        // 0x7997b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997b4) {
            ctx->pc = 0x7997D0u;
            goto label_7997d0;
        }
    }
    ctx->pc = 0x7997BCu;
label_7997bc:
    // 0x7997bc: 0x8fc20214  lw          $v0, 0x214($fp)
    ctx->pc = 0x7997bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 532)));
label_7997c0:
    // 0x7997c0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x7997c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_7997c4:
    // 0x7997c4: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_7997c8:
    // 0x7997c8: 0x60f809  jalr        $v1
label_7997cc:
    if (ctx->pc == 0x7997CCu) {
        ctx->pc = 0x7997CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997C8u;
        // 0x7997cc: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997D0u;
        goto label_7997d0;
    }
    ctx->pc = 0x7997C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7997D0u);
        ctx->pc = 0x7997CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997C8u;
        // 0x7997cc: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997C8u, 0x7997D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7997D0u;
label_7997d0:
    // 0x7997d0: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x7997d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_7997d4:
    // 0x7997d4: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x7997d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_7997d8:
    // 0x7997d8: 0xc0b0fb6  jal         func_2C3ED8
label_7997dc:
    if (ctx->pc == 0x7997DCu) {
        ctx->pc = 0x7997DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997D8u;
        // 0x7997dc: 0x2465a048  addiu       $a1, $v1, -0x5FB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997E0u;
        goto label_7997e0;
    }
    ctx->pc = 0x7997D8u;
    SET_GPR_U32(ctx, 31, 0x7997E0u);
    ctx->pc = 0x7997DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997D8u;
    // 0x7997dc: 0x2465a048  addiu       $a1, $v1, -0x5FB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x7997D8u, 0x7997E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997E0u;
label_7997e0:
    // 0x7997e0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x7997e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_7997e4:
    // 0x7997e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7997e8:
    // 0x7997e8: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_7997ec:
    // 0x7997ec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7997ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7997f0:
    // 0x7997f0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7997f4:
    // 0x7997f4: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_7997f8:
    // 0x7997f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7997f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7997fc:
    // 0x7997fc: 0xc0b2e28  jal         func_2CB8A0
label_799800:
    if (ctx->pc == 0x799800u) {
        ctx->pc = 0x799800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997FCu;
        // 0x799800: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799804u;
        goto label_799804;
    }
    ctx->pc = 0x7997FCu;
    SET_GPR_U32(ctx, 31, 0x799804u);
    ctx->pc = 0x799800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997FCu;
    // 0x799800: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7997FCu, 0x799804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799804u;
label_799804:
    // 0x799804: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
label_799808:
    // 0x799808: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79980c:
    // 0x79980c: 0x24684c38  addiu       $t0, $v1, 0x4C38
    ctx->pc = 0x79980cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
label_799810:
    // 0x799810: 0x8082a050  lb          $v0, -0x5FB0($a0)
    ctx->pc = 0x799810u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294942800)));
label_799814:
    // 0x799814: 0x2483a050  addiu       $v1, $a0, -0x5FB0
    ctx->pc = 0x799814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942800));
label_799818:
    // 0x799818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79981c:
    // 0x79981c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799820:
    if (ctx->pc == 0x799820u) {
        ctx->pc = 0x799820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79981Cu;
        // 0x799820: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799824u;
        goto label_799824;
    }
    ctx->pc = 0x79981Cu;
    {
        const bool branch_taken_0x79981c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79981Cu;
        // 0x799820: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79981c) {
            ctx->pc = 0x799858u;
            goto label_799858;
        }
    }
    ctx->pc = 0x799824u;
label_799824:
    // 0x799824: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799828:
    // 0x799828: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79982c:
    // 0x79982c: 0x0  nop
    ctx->pc = 0x79982cu;
    // NOP
label_799830:
    // 0x799830: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799834:
    // 0x799834: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799838:
    // 0x799838: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79983c:
    // 0x79983c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79983cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799840:
    // 0x799840: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799840u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_799844:
    // 0x799844: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799848:
    if (ctx->pc == 0x799848u) {
        ctx->pc = 0x799848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799844u;
        // 0x799848: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79984Cu;
        goto label_79984c;
    }
    ctx->pc = 0x799844u;
    {
        const bool branch_taken_0x799844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799844u;
        // 0x799848: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799844) {
            ctx->pc = 0x799858u;
            goto label_799858;
        }
    }
    ctx->pc = 0x79984Cu;
label_79984c:
    // 0x79984c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79984cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799850:
    // 0x799850: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_799854:
    if (ctx->pc == 0x799854u) {
        ctx->pc = 0x799854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799850u;
        // 0x799854: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799858u;
        goto label_799858;
    }
    ctx->pc = 0x799850u;
    {
        const bool branch_taken_0x799850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799850) {
            ctx->pc = 0x799854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799850u;
            // 0x799854: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799830;
        }
    }
    ctx->pc = 0x799858u;
label_799858:
    // 0x799858: 0xc0b1508  jal         func_2C5420
label_79985c:
    if (ctx->pc == 0x79985Cu) {
        ctx->pc = 0x79985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799858u;
        // 0x79985c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799860u;
        goto label_799860;
    }
    ctx->pc = 0x799858u;
    SET_GPR_U32(ctx, 31, 0x799860u);
    ctx->pc = 0x79985Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799858u;
    // 0x79985c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799858u, 0x799860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799860u;
label_799860:
    // 0x799860: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799864:
    // 0x799864: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x799864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
label_799868:
    // 0x799868: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x799868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_79986c:
    // 0x79986c: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x79986cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
label_799870:
    // 0x799870: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x799870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
label_799874:
    // 0x799874: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x799874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
label_799878:
    // 0x799878: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x799878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
label_79987c:
    // 0x79987c: 0xfba000f0  sqc2        $vf0, 0xF0($sp)
    ctx->pc = 0x79987cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[0]));
label_799880:
    // 0x799880: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x799880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
label_799884:
    // 0x799884: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x799884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
label_799888:
    // 0x799888: 0xfba00120  sqc2        $vf0, 0x120($sp)
    ctx->pc = 0x799888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[0]));
label_79988c:
    // 0x79988c: 0xfba00130  sqc2        $vf0, 0x130($sp)
    ctx->pc = 0x79988cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[0]));
label_799890:
    // 0x799890: 0xfba00140  sqc2        $vf0, 0x140($sp)
    ctx->pc = 0x799890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[0]));
label_799894:
    // 0x799894: 0xfba00150  sqc2        $vf0, 0x150($sp)
    ctx->pc = 0x799894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[0]));
label_799898:
    // 0x799898: 0xfba00160  sqc2        $vf0, 0x160($sp)
    ctx->pc = 0x799898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[0]));
label_79989c:
    // 0x79989c: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x79989cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
label_7998a0:
    // 0x7998a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7998a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7998a4:
    // 0x7998a4: 0x8fa301a4  lw          $v1, 0x1A4($sp)
    ctx->pc = 0x7998a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_7998a8:
    // 0x7998a8: 0xa3a00041  sb          $zero, 0x41($sp)
    ctx->pc = 0x7998a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 0));
label_7998ac:
    // 0x7998ac: 0xa3a00042  sb          $zero, 0x42($sp)
    ctx->pc = 0x7998acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 0));
label_7998b0:
    // 0x7998b0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x7998b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_7998b4:
    // 0x7998b4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x7998b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_7998b8:
    // 0x7998b8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x7998b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_7998bc:
    // 0x7998bc: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x7998bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_7998c0:
    // 0x7998c0: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x7998c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_7998c4:
    // 0x7998c4: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x7998c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_7998c8:
    // 0x7998c8: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x7998c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
label_7998cc:
    // 0x7998cc: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x7998ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
label_7998d0:
    // 0x7998d0: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x7998d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
label_7998d4:
    // 0x7998d4: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x7998d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
label_7998d8:
    // 0x7998d8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x7998d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_7998dc:
    // 0x7998dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_7998e0:
    // 0x7998e0: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x7998e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_7998e4:
    // 0x7998e4: 0x0  nop
    ctx->pc = 0x7998e4u;
    // NOP
label_7998e8:
    // 0x7998e8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_7998ec:
    if (ctx->pc == 0x7998ECu) {
        ctx->pc = 0x7998ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E8u;
        // 0x7998ec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998F0u;
        goto label_7998f0;
    }
    ctx->pc = 0x7998E8u;
    {
        const bool branch_taken_0x7998e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E8u;
        // 0x7998ec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998e8) {
            ctx->pc = 0x7998D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998d8;
        }
    }
    ctx->pc = 0x7998F0u;
label_7998f0:
    // 0x7998f0: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x7998f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
label_7998f4:
    // 0x7998f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7998f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7998f8:
    // 0x7998f8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7998f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7998fc:
    // 0x7998fc: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x7998fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_799900:
    // 0x799900: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x799900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_799904:
    // 0x799904: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x799904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_799908:
    // 0x799908: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x799908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79990c:
    // 0x79990c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x79990cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_799910:
    // 0x799910: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x799910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799914:
    // 0x799914: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x799914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_799918:
    // 0x799918: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799918u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_79991c:
    // 0x79991c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79991cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799920:
    // 0x799920: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_799924:
    // 0x799924: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799928:
    // 0x799928: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x799928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_79992c:
    // 0x79992c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x79992cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_799930:
    // 0x799930: 0xc071a26  jal         func_1C6898
label_799934:
    if (ctx->pc == 0x799934u) {
        ctx->pc = 0x799934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799930u;
        // 0x799934: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x799938u;
        goto label_799938;
    }
    ctx->pc = 0x799930u;
    SET_GPR_U32(ctx, 31, 0x799938u);
    ctx->pc = 0x799934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799930u;
    // 0x799934: 0xe640000c  swc1        $f0, 0xC($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x799930u, 0x799938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799938u;
label_799938:
    // 0x799938: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_79993c:
    // 0x79993c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79993cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799940:
    // 0x799940: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x799940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_799944:
    // 0x799944: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x799944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_799948:
    // 0x799948: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_79994c:
    // 0x79994c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_799950:
    // 0x799950: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_799954:
    // 0x799954: 0xc071f54  jal         func_1C7D50
label_799958:
    if (ctx->pc == 0x799958u) {
        ctx->pc = 0x799958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799954u;
        // 0x799958: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79995Cu;
        goto label_79995c;
    }
    ctx->pc = 0x799954u;
    SET_GPR_U32(ctx, 31, 0x79995Cu);
    ctx->pc = 0x799958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799954u;
    // 0x799958: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x799954u, 0x79995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79995Cu;
label_79995c:
    // 0x79995c: 0x10000005  b           . + 4 + (0x5 << 2)
label_799960:
    if (ctx->pc == 0x799960u) {
        ctx->pc = 0x799964u;
        goto label_799964;
    }
    ctx->pc = 0x79995Cu;
    {
        const bool branch_taken_0x79995c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79995c) {
            ctx->pc = 0x799974u;
            goto label_799974;
        }
    }
    ctx->pc = 0x799964u;
label_799964:
    // 0x799964: 0x0  nop
    ctx->pc = 0x799964u;
    // NOP
label_799968:
    // 0x799968: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79996c:
    // 0x79996c: 0xc0b56a8  jal         func_2D5AA0
label_799970:
    if (ctx->pc == 0x799970u) {
        ctx->pc = 0x799970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79996Cu;
        // 0x799970: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799974u;
        goto label_799974;
    }
    ctx->pc = 0x79996Cu;
    SET_GPR_U32(ctx, 31, 0x799974u);
    ctx->pc = 0x799970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79996Cu;
    // 0x799970: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79996Cu, 0x799974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799974u;
label_799974:
    // 0x799974: 0xc070fce  jal         func_1C3F38
label_799978:
    if (ctx->pc == 0x799978u) {
        ctx->pc = 0x799978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799974u;
        // 0x799978: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79997Cu;
        goto label_79997c;
    }
    ctx->pc = 0x799974u;
    SET_GPR_U32(ctx, 31, 0x79997Cu);
    ctx->pc = 0x799978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799974u;
    // 0x799978: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x799974u, 0x79997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79997Cu;
label_79997c:
    // 0x79997c: 0x1050fffa  beq         $v0, $s0, . + 4 + (-0x6 << 2)
label_799980:
    if (ctx->pc == 0x799980u) {
        ctx->pc = 0x799980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79997Cu;
        // 0x799980: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799984u;
        goto label_799984;
    }
    ctx->pc = 0x79997Cu;
    {
        const bool branch_taken_0x79997c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x799980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79997Cu;
        // 0x799980: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79997c) {
            ctx->pc = 0x799968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799968;
        }
    }
    ctx->pc = 0x799984u;
label_799984:
    // 0x799984: 0xc0b101e  jal         func_2C4078
label_799988:
    if (ctx->pc == 0x799988u) {
        ctx->pc = 0x799988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799984u;
        // 0x799988: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79998Cu;
        goto label_79998c;
    }
    ctx->pc = 0x799984u;
    SET_GPR_U32(ctx, 31, 0x79998Cu);
    ctx->pc = 0x799988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799984u;
    // 0x799988: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799984u, 0x79998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79998Cu;
label_79998c:
    // 0x79998c: 0xc0b0f04  jal         func_2C3C10
label_799990:
    if (ctx->pc == 0x799990u) {
        ctx->pc = 0x799990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79998Cu;
        // 0x799990: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799994u;
        goto label_799994;
    }
    ctx->pc = 0x79998Cu;
    SET_GPR_U32(ctx, 31, 0x799994u);
    ctx->pc = 0x799990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79998Cu;
    // 0x799990: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79998Cu, 0x799994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799994u;
label_799994:
    // 0x799994: 0x13c00010  beqz        $fp, . + 4 + (0x10 << 2)
label_799998:
    if (ctx->pc == 0x799998u) {
        ctx->pc = 0x79999Cu;
        goto label_79999c;
    }
    ctx->pc = 0x799994u;
    {
        const bool branch_taken_0x799994 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x799994) {
            ctx->pc = 0x7999D8u;
            goto label_7999d8;
        }
    }
    ctx->pc = 0x79999Cu;
label_79999c:
    // 0x79999c: 0xc0b6dac  jal         func_2DB6B0
label_7999a0:
    if (ctx->pc == 0x7999A0u) {
        ctx->pc = 0x7999A4u;
        goto label_7999a4;
    }
    ctx->pc = 0x79999Cu;
    SET_GPR_U32(ctx, 31, 0x7999A4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79999Cu, 0x7999A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999A4u;
label_7999a4:
    // 0x7999a4: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x7999a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_7999a8:
    // 0x7999a8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x7999a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_7999ac:
    // 0x7999ac: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x7999acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_7999b0:
    // 0x7999b0: 0xa0f809  jalr        $a1
label_7999b4:
    if (ctx->pc == 0x7999B4u) {
        ctx->pc = 0x7999B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999B0u;
        // 0x7999b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999B8u;
        goto label_7999b8;
    }
    ctx->pc = 0x7999B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x7999B8u);
        ctx->pc = 0x7999B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999B0u;
        // 0x7999b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999B0u, 0x7999B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7999B8u;
label_7999b8:
    // 0x7999b8: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x7999b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_7999bc:
    // 0x7999bc: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x7999bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_7999c0:
    // 0x7999c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7999c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_7999c4:
    // 0x7999c4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x7999c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_7999c8:
    // 0x7999c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7999c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7999cc:
    // 0x7999cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7999ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7999d0:
    // 0x7999d0: 0xc09ba62  jal         func_26E988
label_7999d4:
    if (ctx->pc == 0x7999D4u) {
        ctx->pc = 0x7999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D0u;
        // 0x7999d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999D8u;
        goto label_7999d8;
    }
    ctx->pc = 0x7999D0u;
    SET_GPR_U32(ctx, 31, 0x7999D8u);
    ctx->pc = 0x7999D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999D0u;
    // 0x7999d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E988u, 0x7999D0u, 0x7999D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999D8u;
label_7999d8:
    // 0x7999d8: 0xc0a572a  jal         func_295CA8
label_7999dc:
    if (ctx->pc == 0x7999DCu) {
        ctx->pc = 0x7999DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D8u;
        // 0x7999dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999E0u;
        goto label_7999e0;
    }
    ctx->pc = 0x7999D8u;
    SET_GPR_U32(ctx, 31, 0x7999E0u);
    ctx->pc = 0x7999DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999D8u;
    // 0x7999dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7999D8u, 0x7999E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E0u;
label_7999e0:
    // 0x7999e0: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_7999e4:
    if (ctx->pc == 0x7999E4u) {
        ctx->pc = 0x7999E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999E0u;
        // 0x7999e4: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999E8u;
        goto label_7999e8;
    }
    ctx->pc = 0x7999E0u;
    {
        const bool branch_taken_0x7999e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7999E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999E0u;
        // 0x7999e4: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999e0) {
            ctx->pc = 0x799AF0u;
            goto label_799af0;
        }
    }
    ctx->pc = 0x7999E8u;
label_7999e8:
    // 0x7999e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_7999ec:
    if (ctx->pc == 0x7999ECu) {
        ctx->pc = 0x7999ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999E8u;
        // 0x7999ec: 0x3c11005d  lui         $s1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999F0u;
        goto label_7999f0;
    }
    ctx->pc = 0x7999E8u;
    {
        const bool branch_taken_0x7999e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999E8u;
        // 0x7999ec: 0x3c11005d  lui         $s1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999e8) {
            ctx->pc = 0x799A00u;
            goto label_799a00;
        }
    }
    ctx->pc = 0x7999F0u;
label_7999f0:
    // 0x7999f0: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x7999f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_7999f4:
    // 0x7999f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7999f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7999f8:
    // 0x7999f8: 0xc0b56a8  jal         func_2D5AA0
label_7999fc:
    if (ctx->pc == 0x7999FCu) {
        ctx->pc = 0x7999FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F8u;
        // 0x7999fc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A00u;
        goto label_799a00;
    }
    ctx->pc = 0x7999F8u;
    SET_GPR_U32(ctx, 31, 0x799A00u);
    ctx->pc = 0x7999FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999F8u;
    // 0x7999fc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7999F8u, 0x799A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A00u;
label_799a00:
    // 0x799a00: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_799a04:
    // 0x799a04: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x799a04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_799a08:
    // 0x799a08: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x799a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
label_799a0c:
    // 0x799a0c: 0xc0a421a  jal         func_290868
label_799a10:
    if (ctx->pc == 0x799A10u) {
        ctx->pc = 0x799A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A0Cu;
        // 0x799a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A14u;
        goto label_799a14;
    }
    ctx->pc = 0x799A0Cu;
    SET_GPR_U32(ctx, 31, 0x799A14u);
    ctx->pc = 0x799A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A0Cu;
    // 0x799a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799A0Cu, 0x799A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A14u;
label_799a14:
    // 0x799a14: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_799a18:
    if (ctx->pc == 0x799A18u) {
        ctx->pc = 0x799A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A14u;
        // 0x799a18: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A1Cu;
        goto label_799a1c;
    }
    ctx->pc = 0x799A14u;
    {
        const bool branch_taken_0x799a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A14u;
        // 0x799a18: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a14) {
            ctx->pc = 0x7999F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999f0;
        }
    }
    ctx->pc = 0x799A1Cu;
label_799a1c:
    // 0x799a1c: 0xc0a421a  jal         func_290868
label_799a20:
    if (ctx->pc == 0x799A20u) {
        ctx->pc = 0x799A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A1Cu;
        // 0x799a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A24u;
        goto label_799a24;
    }
    ctx->pc = 0x799A1Cu;
    SET_GPR_U32(ctx, 31, 0x799A24u);
    ctx->pc = 0x799A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A1Cu;
    // 0x799a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799A1Cu, 0x799A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A24u;
label_799a24:
    // 0x799a24: 0xc0a25a8  jal         func_2896A0
label_799a28:
    if (ctx->pc == 0x799A28u) {
        ctx->pc = 0x799A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A24u;
        // 0x799a28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A2Cu;
        goto label_799a2c;
    }
    ctx->pc = 0x799A24u;
    SET_GPR_U32(ctx, 31, 0x799A2Cu);
    ctx->pc = 0x799A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A24u;
    // 0x799a28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2896A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2896A0u, 0x799A24u, 0x799A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A2Cu;
label_799a2c:
    // 0x799a2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799a30:
    // 0x799a30: 0x1443fff0  bne         $v0, $v1, . + 4 + (-0x10 << 2)
label_799a34:
    if (ctx->pc == 0x799A34u) {
        ctx->pc = 0x799A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A30u;
        // 0x799a34: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A38u;
        goto label_799a38;
    }
    ctx->pc = 0x799A30u;
    {
        const bool branch_taken_0x799a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A30u;
        // 0x799a34: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a30) {
            ctx->pc = 0x7999F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999f4;
        }
    }
    ctx->pc = 0x799A38u;
label_799a38:
    // 0x799a38: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x799a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_799a3c:
    // 0x799a3c: 0xc0b56a8  jal         func_2D5AA0
label_799a40:
    if (ctx->pc == 0x799A40u) {
        ctx->pc = 0x799A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A3Cu;
        // 0x799a40: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A44u;
        goto label_799a44;
    }
    ctx->pc = 0x799A3Cu;
    SET_GPR_U32(ctx, 31, 0x799A44u);
    ctx->pc = 0x799A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A3Cu;
    // 0x799a40: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799A3Cu, 0x799A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A44u;
label_799a44:
    // 0x799a44: 0x2624b000  addiu       $a0, $s1, -0x5000
    ctx->pc = 0x799a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946816));
label_799a48:
    // 0x799a48: 0xc621b000  lwc1        $f1, -0x5000($s1)
    ctx->pc = 0x799a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_799a4c:
    // 0x799a4c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x799a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799a50:
    // 0x799a50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x799a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_799a54:
    // 0x799a54: 0x0  nop
    ctx->pc = 0x799a54u;
    // NOP
label_799a58:
    // 0x799a58: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_799a5c:
    if (ctx->pc == 0x799A5Cu) {
        ctx->pc = 0x799A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A58u;
        // 0x799a5c: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A60u;
        goto label_799a60;
    }
    ctx->pc = 0x799A58u;
    {
        const bool branch_taken_0x799a58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A58u;
        // 0x799a5c: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a58) {
            ctx->pc = 0x799A88u;
            goto label_799a88;
        }
    }
    ctx->pc = 0x799A60u;
label_799a60:
    // 0x799a60: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x799a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
label_799a64:
    // 0x799a64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799a68:
    // 0x799a68: 0xc0aa65e  jal         func_2A9978
label_799a6c:
    if (ctx->pc == 0x799A6Cu) {
        ctx->pc = 0x799A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A68u;
        // 0x799a6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A70u;
        goto label_799a70;
    }
    ctx->pc = 0x799A68u;
    SET_GPR_U32(ctx, 31, 0x799A70u);
    ctx->pc = 0x799A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A68u;
    // 0x799a6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x799A68u, 0x799A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A70u;
label_799a70:
    // 0x799a70: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799a74:
    // 0x799a74: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x799a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_799a78:
    // 0x799a78: 0xc0b56a8  jal         func_2D5AA0
label_799a7c:
    if (ctx->pc == 0x799A7Cu) {
        ctx->pc = 0x799A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A78u;
        // 0x799a7c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A80u;
        goto label_799a80;
    }
    ctx->pc = 0x799A78u;
    SET_GPR_U32(ctx, 31, 0x799A80u);
    ctx->pc = 0x799A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A78u;
    // 0x799a7c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799A78u, 0x799A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A80u;
label_799a80:
    // 0x799a80: 0x1000001b  b           . + 4 + (0x1B << 2)
label_799a84:
    if (ctx->pc == 0x799A84u) {
        ctx->pc = 0x799A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A80u;
        // 0x799a84: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A88u;
        goto label_799a88;
    }
    ctx->pc = 0x799A80u;
    {
        const bool branch_taken_0x799a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A80u;
        // 0x799a84: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a80) {
            ctx->pc = 0x799AF0u;
            goto label_799af0;
        }
    }
    ctx->pc = 0x799A88u;
label_799a88:
    // 0x799a88: 0x241103e8  addiu       $s1, $zero, 0x3E8
    ctx->pc = 0x799a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_799a8c:
    // 0x799a8c: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x799a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
label_799a90:
    // 0x799a90: 0xc07e9b0  jal         func_1FA6C0
label_799a94:
    if (ctx->pc == 0x799A94u) {
        ctx->pc = 0x799A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A90u;
        // 0x799a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A98u;
        goto label_799a98;
    }
    ctx->pc = 0x799A90u;
    SET_GPR_U32(ctx, 31, 0x799A98u);
    ctx->pc = 0x799A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A90u;
    // 0x799a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x799A90u, 0x799A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A98u;
label_799a98:
    // 0x799a98: 0x240307d0  addiu       $v1, $zero, 0x7D0
    ctx->pc = 0x799a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_799a9c:
    // 0x799a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799aa0:
    // 0x799aa0: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x799aa0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_799aa4:
    // 0x799aa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799aa8:
    // 0x799aa8: 0xc07e9d4  jal         func_1FA750
label_799aac:
    if (ctx->pc == 0x799AACu) {
        ctx->pc = 0x799AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA8u;
        // 0x799aac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AB0u;
        goto label_799ab0;
    }
    ctx->pc = 0x799AA8u;
    SET_GPR_U32(ctx, 31, 0x799AB0u);
    ctx->pc = 0x799AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AA8u;
    // 0x799aac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x799AA8u, 0x799AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AB0u;
label_799ab0:
    // 0x799ab0: 0xc0b6dac  jal         func_2DB6B0
label_799ab4:
    if (ctx->pc == 0x799AB4u) {
        ctx->pc = 0x799AB8u;
        goto label_799ab8;
    }
    ctx->pc = 0x799AB0u;
    SET_GPR_U32(ctx, 31, 0x799AB8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799AB0u, 0x799AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AB8u;
label_799ab8:
    // 0x799ab8: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x799ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_799abc:
    // 0x799abc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x799abcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_799ac0:
    // 0x799ac0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x799ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_799ac4:
    // 0x799ac4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_799ac8:
    // 0x799ac8: 0x3231ffff  andi        $s1, $s1, 0xFFFF
    ctx->pc = 0x799ac8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_799acc:
    // 0x799acc: 0x8c50d6e8  lw          $s0, -0x2918($v0)
    ctx->pc = 0x799accu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
label_799ad0:
    // 0x799ad0: 0xc0b6dac  jal         func_2DB6B0
label_799ad4:
    if (ctx->pc == 0x799AD4u) {
        ctx->pc = 0x799AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AD0u;
        // 0x799ad4: 0x261015c0  addiu       $s0, $s0, 0x15C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AD8u;
        goto label_799ad8;
    }
    ctx->pc = 0x799AD0u;
    SET_GPR_U32(ctx, 31, 0x799AD8u);
    ctx->pc = 0x799AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AD0u;
    // 0x799ad4: 0x261015c0  addiu       $s0, $s0, 0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799AD0u, 0x799AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AD8u;
label_799ad8:
    // 0x799ad8: 0x844702ac  lh          $a3, 0x2AC($v0)
    ctx->pc = 0x799ad8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 684)));
label_799adc:
    // 0x799adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799ae0:
    // 0x799ae0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x799ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799ae4:
    // 0x799ae4: 0xc04f8be  jal         func_13E2F8
label_799ae8:
    if (ctx->pc == 0x799AE8u) {
        ctx->pc = 0x799AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AE4u;
        // 0x799ae8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AECu;
        goto label_799aec;
    }
    ctx->pc = 0x799AE4u;
    SET_GPR_U32(ctx, 31, 0x799AECu);
    ctx->pc = 0x799AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AE4u;
    // 0x799ae8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E2F8u, 0x799AE4u, 0x799AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AECu;
label_799aec:
    // 0x799aec: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799af0:
    // 0x799af0: 0xc0b5692  jal         func_2D5A48
label_799af4:
    if (ctx->pc == 0x799AF4u) {
        ctx->pc = 0x799AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AF0u;
        // 0x799af4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AF8u;
        goto label_799af8;
    }
    ctx->pc = 0x799AF0u;
    SET_GPR_U32(ctx, 31, 0x799AF8u);
    ctx->pc = 0x799AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AF0u;
    // 0x799af4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799AF0u, 0x799AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AF8u;
label_799af8:
    // 0x799af8: 0x7bb00240  lq          $s0, 0x240($sp)
    ctx->pc = 0x799af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_799afc:
    // 0x799afc: 0x7bb10230  lq          $s1, 0x230($sp)
    ctx->pc = 0x799afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_799b00:
    // 0x799b00: 0x7bb20220  lq          $s2, 0x220($sp)
    ctx->pc = 0x799b00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_799b04:
    // 0x799b04: 0x7bb30210  lq          $s3, 0x210($sp)
    ctx->pc = 0x799b04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_799b08:
    // 0x799b08: 0x7bb40200  lq          $s4, 0x200($sp)
    ctx->pc = 0x799b08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_799b0c:
    // 0x799b0c: 0x7bb501f0  lq          $s5, 0x1F0($sp)
    ctx->pc = 0x799b0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_799b10:
    // 0x799b10: 0x7bb601e0  lq          $s6, 0x1E0($sp)
    ctx->pc = 0x799b10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_799b14:
    // 0x799b14: 0x7bb701d0  lq          $s7, 0x1D0($sp)
    ctx->pc = 0x799b14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_799b18:
    // 0x799b18: 0x7bbe01c0  lq          $fp, 0x1C0($sp)
    ctx->pc = 0x799b18u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_799b1c:
    // 0x799b1c: 0xdfbf01b0  ld          $ra, 0x1B0($sp)
    ctx->pc = 0x799b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_799b20:
    // 0x799b20: 0x3e00008  jr          $ra
label_799b24:
    if (ctx->pc == 0x799B24u) {
        ctx->pc = 0x799B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B20u;
        // 0x799b24: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B28u;
        goto label_fallthrough_0x799b20;
    }
    ctx->pc = 0x799B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B20u;
        // 0x799b24: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799b20:
    ctx->pc = 0x799B28u;
}
} // namespace gh_r408
