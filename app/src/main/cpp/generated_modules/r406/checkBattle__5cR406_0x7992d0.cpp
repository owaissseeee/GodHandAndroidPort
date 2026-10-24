#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r406_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r406
{
// Function: checkBattle__5cR406
// Address: 0x7992d0 - 0x7998d8
void checkBattle__5cR406_0x7992d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkBattle__5cR406_0x7992d0");
#endif

    switch (ctx->pc) {
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
        default: break;
    }

    ctx->pc = 0x7992d0u;

label_7992d0:
    // 0x7992d0: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
label_7992d4:
    // 0x7992d4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_7992d8:
    // 0x7992d8: 0x7fb10360  sq          $s1, 0x360($sp)
    ctx->pc = 0x7992d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 17));
label_7992dc:
    // 0x7992dc: 0x7fb00370  sq          $s0, 0x370($sp)
    ctx->pc = 0x7992dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 16));
label_7992e0:
    // 0x7992e0: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
label_7992e4:
    // 0x7992e4: 0x7fb20350  sq          $s2, 0x350($sp)
    ctx->pc = 0x7992e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 18));
label_7992e8:
    // 0x7992e8: 0x7fb30340  sq          $s3, 0x340($sp)
    ctx->pc = 0x7992e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 19));
label_7992ec:
    // 0x7992ec: 0x7fb40330  sq          $s4, 0x330($sp)
    ctx->pc = 0x7992ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 20));
label_7992f0:
    // 0x7992f0: 0x7fb50320  sq          $s5, 0x320($sp)
    ctx->pc = 0x7992f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 21));
label_7992f4:
    // 0x7992f4: 0x7fb60310  sq          $s6, 0x310($sp)
    ctx->pc = 0x7992f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 22));
label_7992f8:
    // 0x7992f8: 0x7fb70300  sq          $s7, 0x300($sp)
    ctx->pc = 0x7992f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 23));
label_7992fc:
    // 0x7992fc: 0x7fbe02f0  sq          $fp, 0x2F0($sp)
    ctx->pc = 0x7992fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 30));
label_799300:
    // 0x799300: 0xffbf02e0  sd          $ra, 0x2E0($sp)
    ctx->pc = 0x799300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 31));
label_799304:
    // 0x799304: 0xe7b50388  swc1        $f21, 0x388($sp)
    ctx->pc = 0x799304u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 904), bits); }
label_799308:
    // 0x799308: 0xe7b40380  swc1        $f20, 0x380($sp)
    ctx->pc = 0x799308u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
label_79930c:
    // 0x79930c: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79930cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_799310:
    // 0x799310: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799314:
    // 0x799314: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
label_799318:
    if (ctx->pc == 0x799318u) {
        ctx->pc = 0x799318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799314u;
        // 0x799318: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79931Cu;
        goto label_79931c;
    }
    ctx->pc = 0x799314u;
    {
        const bool branch_taken_0x799314 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x799318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799314u;
        // 0x799318: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799314) {
            ctx->pc = 0x7993F0u;
            goto label_7993f0;
        }
    }
    ctx->pc = 0x79931Cu;
label_79931c:
    // 0x79931c: 0xc0b6dac  jal         func_2DB6B0
label_799320:
    if (ctx->pc == 0x799320u) {
        ctx->pc = 0x799324u;
        goto label_799324;
    }
    ctx->pc = 0x79931Cu;
    SET_GPR_U32(ctx, 31, 0x799324u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79931Cu, 0x799324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799324u;
label_799324:
    // 0x799324: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_799328:
    // 0x799328: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_79932c:
    // 0x79932c: 0x3c013f4f  lui         $at, 0x3F4F
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16207 << 16));
label_799330:
    // 0x799330: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x799330u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_799334:
    // 0x799334: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_799338:
    // 0x799338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79933c:
    // 0x79933c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_799340:
    // 0x799340: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_799344:
    // 0x799344: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799348:
    // 0x799348: 0x3c013f05  lui         $at, 0x3F05
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16133 << 16));
label_79934c:
    // 0x79934c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x79934cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_799350:
    // 0x799350: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799354:
    // 0x799354: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x799354u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_799358:
    // 0x799358: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x799358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_79935c:
    // 0x79935c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x79935cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_799360:
    // 0x799360: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x799360u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_799364:
    // 0x799364: 0x3c01bfc1  lui         $at, 0xBFC1
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49089 << 16));
label_799368:
    // 0x799368: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x799368u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_79936c:
    // 0x79936c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79936cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_799370:
    // 0x799370: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799374:
    // 0x799374: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_799378:
    // 0x799378: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_79937c:
    // 0x79937c: 0x60f809  jalr        $v1
label_799380:
    if (ctx->pc == 0x799380u) {
        ctx->pc = 0x799380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79937Cu;
        // 0x799380: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799384u;
        goto label_799384;
    }
    ctx->pc = 0x79937Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799384u);
        ctx->pc = 0x799380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79937Cu;
        // 0x799380: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79937Cu, 0x799384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799384u;
label_799384:
    // 0x799384: 0x8e060214  lw          $a2, 0x214($s0)
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799388:
    // 0x799388: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79938c:
    // 0x79938c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x79938cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799390:
    // 0x799390: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x799390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_799394:
    // 0x799394: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x799394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_799398:
    // 0x799398: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x799398u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_79939c:
    // 0x79939c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x79939cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_7993a0:
    // 0x7993a0: 0xe475000c  swc1        $f21, 0xC($v1)
    ctx->pc = 0x7993a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_7993a4:
    // 0x7993a4: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_7993a8:
    // 0x7993a8: 0x40f809  jalr        $v0
label_7993ac:
    if (ctx->pc == 0x7993ACu) {
        ctx->pc = 0x7993ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A8u;
        // 0x7993ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993B0u;
        goto label_7993b0;
    }
    ctx->pc = 0x7993A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7993B0u);
        ctx->pc = 0x7993ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A8u;
        // 0x7993ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993A8u, 0x7993B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7993B0u;
label_7993b0:
    // 0x7993b0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x7993b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_7993b4:
    // 0x7993b4: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_7993b8:
    // 0x7993b8: 0xc0a58dc  jal         func_296370
label_7993bc:
    if (ctx->pc == 0x7993BCu) {
        ctx->pc = 0x7993BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B8u;
        // 0x7993bc: 0x24446af0  addiu       $a0, $v0, 0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993C0u;
        goto label_7993c0;
    }
    ctx->pc = 0x7993B8u;
    SET_GPR_U32(ctx, 31, 0x7993C0u);
    ctx->pc = 0x7993BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B8u;
    // 0x7993bc: 0x24446af0  addiu       $a0, $v0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x7993B8u, 0x7993C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C0u;
label_7993c0:
    // 0x7993c0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_7993c4:
    // 0x7993c4: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
label_7993c8:
    // 0x7993c8: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x7993c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_7993cc:
    // 0x7993cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7993ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7993d0:
    // 0x7993d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7993d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7993d4:
    // 0x7993d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7993d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7993d8:
    // 0x7993d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7993dc:
    // 0x7993dc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x7993dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_7993e0:
    // 0x7993e0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x7993e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_7993e4:
    // 0x7993e4: 0xc0b016c  jal         func_2C05B0
label_7993e8:
    if (ctx->pc == 0x7993E8u) {
        ctx->pc = 0x7993E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993E4u;
        // 0x7993e8: 0x8d04264c  lw          $a0, 0x264C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9804)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993ECu;
        goto label_7993ec;
    }
    ctx->pc = 0x7993E4u;
    SET_GPR_U32(ctx, 31, 0x7993ECu);
    ctx->pc = 0x7993E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E4u;
    // 0x7993e8: 0x8d04264c  lw          $a0, 0x264C($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x7993E4u, 0x7993ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993ECu;
label_7993ec:
    // 0x7993ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7993f0:
    // 0x7993f0: 0xc0b6cac  jal         func_2DB2B0
label_7993f4:
    if (ctx->pc == 0x7993F4u) {
        ctx->pc = 0x7993F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F0u;
        // 0x7993f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993F8u;
        goto label_7993f8;
    }
    ctx->pc = 0x7993F0u;
    SET_GPR_U32(ctx, 31, 0x7993F8u);
    ctx->pc = 0x7993F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F0u;
    // 0x7993f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7993F0u, 0x7993F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993F8u;
label_7993f8:
    // 0x7993f8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_7993fc:
    // 0x7993fc: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_799400:
    // 0x799400: 0xc0b42ae  jal         func_2D0AB8
label_799404:
    if (ctx->pc == 0x799404u) {
        ctx->pc = 0x799404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799400u;
        // 0x799404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799408u;
        goto label_799408;
    }
    ctx->pc = 0x799400u;
    SET_GPR_U32(ctx, 31, 0x799408u);
    ctx->pc = 0x799404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799400u;
    // 0x799404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x799400u, 0x799408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799408u;
label_799408:
    // 0x799408: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799408u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_79940c:
    // 0x79940c: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
label_799410:
    // 0x799410: 0x3c120074  lui         $s2, 0x74
    ctx->pc = 0x799410u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
label_799414:
    // 0x799414: 0x3c15005d  lui         $s5, 0x5D
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)93 << 16));
label_799418:
    // 0x799418: 0x3c1e003c  lui         $fp, 0x3C
    ctx->pc = 0x799418u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
label_79941c:
    // 0x79941c: 0x3c170075  lui         $s7, 0x75
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)117 << 16));
label_799420:
    // 0x799420: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
label_799424:
    // 0x799424: 0x10000005  b           . + 4 + (0x5 << 2)
label_799428:
    if (ctx->pc == 0x799428u) {
        ctx->pc = 0x799428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799424u;
        // 0x799428: 0x3c16007a  lui         $s6, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79942Cu;
        goto label_79942c;
    }
    ctx->pc = 0x799424u;
    {
        const bool branch_taken_0x799424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799424u;
        // 0x799428: 0x3c16007a  lui         $s6, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799424) {
            ctx->pc = 0x79943Cu;
            goto label_79943c;
        }
    }
    ctx->pc = 0x79942Cu;
label_79942c:
    // 0x79942c: 0x0  nop
    ctx->pc = 0x79942cu;
    // NOP
label_799430:
    // 0x799430: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799434:
    // 0x799434: 0xc0b56a8  jal         func_2D5AA0
label_799438:
    if (ctx->pc == 0x799438u) {
        ctx->pc = 0x799438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799434u;
        // 0x799438: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79943Cu;
        goto label_79943c;
    }
    ctx->pc = 0x799434u;
    SET_GPR_U32(ctx, 31, 0x79943Cu);
    ctx->pc = 0x799438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799434u;
    // 0x799438: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799434u, 0x79943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79943Cu;
label_79943c:
    // 0x79943c: 0xc0a5772  jal         func_295DC8
label_799440:
    if (ctx->pc == 0x799440u) {
        ctx->pc = 0x799440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79943Cu;
        // 0x799440: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799444u;
        goto label_799444;
    }
    ctx->pc = 0x79943Cu;
    SET_GPR_U32(ctx, 31, 0x799444u);
    ctx->pc = 0x799440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79943Cu;
    // 0x799440: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x79943Cu, 0x799444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799444u;
label_799444:
    // 0x799444: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799448:
    // 0x799448: 0xc0a5780  jal         func_295E00
label_79944c:
    if (ctx->pc == 0x79944Cu) {
        ctx->pc = 0x79944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799448u;
        // 0x79944c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799450u;
        goto label_799450;
    }
    ctx->pc = 0x799448u;
    SET_GPR_U32(ctx, 31, 0x799450u);
    ctx->pc = 0x79944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799448u;
    // 0x79944c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E00u, 0x799448u, 0x799450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799450u;
label_799450:
    // 0x799450: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_799454:
    // 0x799454: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799458:
    // 0x799458: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_79945c:
    // 0x79945c: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x79945cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_799460:
    // 0x799460: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_799464:
    if (ctx->pc == 0x799464u) {
        ctx->pc = 0x799464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799460u;
        // 0x799464: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799468u;
        goto label_799468;
    }
    ctx->pc = 0x799460u;
    {
        const bool branch_taken_0x799460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799460u;
        // 0x799464: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799460) {
            ctx->pc = 0x799430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799430;
        }
    }
    ctx->pc = 0x799468u;
label_799468:
    // 0x799468: 0x26467a84  addiu       $a2, $s2, 0x7A84
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 31364));
label_79946c:
    // 0x79946c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_799470:
    // 0x799470: 0x8cc5fff4  lw          $a1, -0xC($a2)
    ctx->pc = 0x799470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967284)));
label_799474:
    // 0x799474: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x799474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_799478:
    // 0x799478: 0x8e447a84  lw          $a0, 0x7A84($s2)
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31364)));
label_79947c:
    // 0x79947c: 0x3c114000  lui         $s1, 0x4000
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16384 << 16));
label_799480:
    // 0x799480: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x799480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_799484:
    // 0x799484: 0x24d0fa1c  addiu       $s0, $a2, -0x5E4
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965788));
label_799488:
    // 0x799488: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x799488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_79948c:
    // 0x79948c: 0x26a3ac90  addiu       $v1, $s5, -0x5370
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945936));
label_799490:
    // 0x799490: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x799490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
label_799494:
    // 0x799494: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x799494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_799498:
    // 0x799498: 0xa46201b0  sh          $v0, 0x1B0($v1)
    ctx->pc = 0x799498u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 432), (uint16_t)GPR_U32(ctx, 2));
label_79949c:
    // 0x79949c: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x79949cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
label_7994a0:
    // 0x7994a0: 0xae447a84  sw          $a0, 0x7A84($s2)
    ctx->pc = 0x7994a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 31364), GPR_U32(ctx, 4));
label_7994a4:
    // 0x7994a4: 0xc0b6dac  jal         func_2DB6B0
label_7994a8:
    if (ctx->pc == 0x7994A8u) {
        ctx->pc = 0x7994A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A4u;
        // 0x7994a8: 0xacc5fff4  sw          $a1, -0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294967284), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994ACu;
        goto label_7994ac;
    }
    ctx->pc = 0x7994A4u;
    SET_GPR_U32(ctx, 31, 0x7994ACu);
    ctx->pc = 0x7994A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994A4u;
    // 0x7994a8: 0xacc5fff4  sw          $a1, -0xC($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967284), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7994A4u, 0x7994ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994ACu;
label_7994ac:
    // 0x7994ac: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x7994acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
label_7994b0:
    // 0x7994b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7994b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_7994b4:
    // 0x7994b4: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_7994b8:
    // 0x7994b8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_7994bc:
    // 0x7994bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x7994bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_7994c0:
    // 0x7994c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7994c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7994c4:
    // 0x7994c4: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_7994c8:
    // 0x7994c8: 0xe441054c  swc1        $f1, 0x54C($v0)
    ctx->pc = 0x7994c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1356), bits); }
label_7994cc:
    // 0x7994cc: 0xe6000574  swc1        $f0, 0x574($s0)
    ctx->pc = 0x7994ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
label_7994d0:
    // 0x7994d0: 0x8e427a84  lw          $v0, 0x7A84($s2)
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31364)));
label_7994d4:
    // 0x7994d4: 0x8e832f84  lw          $v1, 0x2F84($s4)
    ctx->pc = 0x7994d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_7994d8:
    // 0x7994d8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x7994d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_7994dc:
    // 0x7994dc: 0xae427a84  sw          $v0, 0x7A84($s2)
    ctx->pc = 0x7994dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 31364), GPR_U32(ctx, 2));
label_7994e0:
    // 0x7994e0: 0xc0b56a8  jal         func_2D5AA0
label_7994e4:
    if (ctx->pc == 0x7994E4u) {
        ctx->pc = 0x7994E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994E0u;
        // 0x7994e4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994E8u;
        goto label_7994e8;
    }
    ctx->pc = 0x7994E0u;
    SET_GPR_U32(ctx, 31, 0x7994E8u);
    ctx->pc = 0x7994E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E0u;
    // 0x7994e4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994E0u, 0x7994E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E8u;
label_7994e8:
    // 0x7994e8: 0x8e437a84  lw          $v1, 0x7A84($s2)
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31364)));
label_7994ec:
    // 0x7994ec: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
label_7994f0:
    // 0x7994f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x7994f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_7994f4:
    // 0x7994f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_7994f8:
    // 0x7994f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7994f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7994fc:
    // 0x7994fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x7994fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_799500:
    // 0x799500: 0x3c06dfff  lui         $a2, 0xDFFF
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57343 << 16));
label_799504:
    // 0x799504: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_799508:
    // 0x799508: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x799508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_79950c:
    // 0x79950c: 0x8c478658  lw          $a3, -0x79A8($v0)
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_799510:
    // 0x799510: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_799514:
    // 0x799514: 0xe6000574  swc1        $f0, 0x574($s0)
    ctx->pc = 0x799514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
label_799518:
    // 0x799518: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_79951c:
    // 0x79951c: 0xae437a84  sw          $v1, 0x7A84($s2)
    ctx->pc = 0x79951cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 31364), GPR_U32(ctx, 3));
label_799520:
    // 0x799520: 0x24446af0  addiu       $a0, $v0, 0x6AF0
    ctx->pc = 0x799520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
label_799524:
    // 0x799524: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_799528:
    // 0x799528: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x799528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_79952c:
    // 0x79952c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x79952cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_799530:
    // 0x799530: 0x8fc3d6e8  lw          $v1, -0x2918($fp)
    ctx->pc = 0x799530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294956776)));
label_799534:
    // 0x799534: 0x8c621e60  lw          $v0, 0x1E60($v1)
    ctx->pc = 0x799534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7776)));
label_799538:
    // 0x799538: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x799538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_79953c:
    // 0x79953c: 0xc0a58dc  jal         func_296370
label_799540:
    if (ctx->pc == 0x799540u) {
        ctx->pc = 0x799540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79953Cu;
        // 0x799540: 0xac621e60  sw          $v0, 0x1E60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 7776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799544u;
        goto label_799544;
    }
    ctx->pc = 0x79953Cu;
    SET_GPR_U32(ctx, 31, 0x799544u);
    ctx->pc = 0x799540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79953Cu;
    // 0x799540: 0xac621e60  sw          $v0, 0x1E60($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 7776), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x79953Cu, 0x799544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799544u;
label_799544:
    // 0x799544: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_799548:
    // 0x799548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79954c:
    // 0x79954c: 0xc0b42ae  jal         func_2D0AB8
label_799550:
    if (ctx->pc == 0x799550u) {
        ctx->pc = 0x799550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79954Cu;
        // 0x799550: 0x2444ee00  addiu       $a0, $v0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799554u;
        goto label_799554;
    }
    ctx->pc = 0x79954Cu;
    SET_GPR_U32(ctx, 31, 0x799554u);
    ctx->pc = 0x799550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79954Cu;
    // 0x799550: 0x2444ee00  addiu       $a0, $v0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x79954Cu, 0x799554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799554u;
label_799554:
    // 0x799554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799558:
    // 0x799558: 0xc0b6cac  jal         func_2DB2B0
label_79955c:
    if (ctx->pc == 0x79955Cu) {
        ctx->pc = 0x79955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799558u;
        // 0x79955c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799560u;
        goto label_799560;
    }
    ctx->pc = 0x799558u;
    SET_GPR_U32(ctx, 31, 0x799560u);
    ctx->pc = 0x79955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799558u;
    // 0x79955c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799558u, 0x799560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799560u;
label_799560:
    // 0x799560: 0x82629bb0  lb          $v0, -0x6450($s3)
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294941616)));
label_799564:
    // 0x799564: 0x26e84c38  addiu       $t0, $s7, 0x4C38
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 19512));
label_799568:
    // 0x799568: 0x26639bb0  addiu       $v1, $s3, -0x6450
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941616));
label_79956c:
    // 0x79956c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79956cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799570:
    // 0x799570: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_799574:
    if (ctx->pc == 0x799574u) {
        ctx->pc = 0x799574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799570u;
        // 0x799574: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799578u;
        goto label_799578;
    }
    ctx->pc = 0x799570u;
    {
        const bool branch_taken_0x799570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799570u;
        // 0x799574: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799570) {
            ctx->pc = 0x7995A8u;
            goto label_7995a8;
        }
    }
    ctx->pc = 0x799578u;
label_799578:
    // 0x799578: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79957c:
    // 0x79957c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799580:
    // 0x799580: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799584:
    // 0x799584: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799588:
    // 0x799588: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79958c:
    // 0x79958c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79958cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799590:
    // 0x799590: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799590u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_799594:
    // 0x799594: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799598:
    if (ctx->pc == 0x799598u) {
        ctx->pc = 0x799598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799594u;
        // 0x799598: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79959Cu;
        goto label_79959c;
    }
    ctx->pc = 0x799594u;
    {
        const bool branch_taken_0x799594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799594u;
        // 0x799598: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799594) {
            ctx->pc = 0x7995A8u;
            goto label_7995a8;
        }
    }
    ctx->pc = 0x79959Cu;
label_79959c:
    // 0x79959c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79959cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7995a0:
    // 0x7995a0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_7995a4:
    if (ctx->pc == 0x7995A4u) {
        ctx->pc = 0x7995A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A0u;
        // 0x7995a4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995A8u;
        goto label_7995a8;
    }
    ctx->pc = 0x7995A0u;
    {
        const bool branch_taken_0x7995a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7995a0) {
            ctx->pc = 0x7995A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7995A0u;
            // 0x7995a4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799580;
        }
    }
    ctx->pc = 0x7995A8u;
label_7995a8:
    // 0x7995a8: 0xc0b1508  jal         func_2C5420
label_7995ac:
    if (ctx->pc == 0x7995ACu) {
        ctx->pc = 0x7995ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A8u;
        // 0x7995ac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995B0u;
        goto label_7995b0;
    }
    ctx->pc = 0x7995A8u;
    SET_GPR_U32(ctx, 31, 0x7995B0u);
    ctx->pc = 0x7995ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995A8u;
    // 0x7995ac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x7995A8u, 0x7995B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B0u;
label_7995b0:
    // 0x7995b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x7995b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7995b4:
    // 0x7995b4: 0x26e84c38  addiu       $t0, $s7, 0x4C38
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 19512));
label_7995b8:
    // 0x7995b8: 0x82c29bb8  lb          $v0, -0x6448($s6)
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294941624)));
label_7995bc:
    // 0x7995bc: 0x26c39bb8  addiu       $v1, $s6, -0x6448
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941624));
label_7995c0:
    // 0x7995c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7995c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7995c4:
    // 0x7995c4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_7995c8:
    if (ctx->pc == 0x7995C8u) {
        ctx->pc = 0x7995C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C4u;
        // 0x7995c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
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
        // 0x7995c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995c4) {
            ctx->pc = 0x799600u;
            goto label_799600;
        }
    }
    ctx->pc = 0x7995CCu;
label_7995cc:
    // 0x7995cc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7995ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7995d0:
    // 0x7995d0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7995d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7995d4:
    // 0x7995d4: 0x0  nop
    ctx->pc = 0x7995d4u;
    // NOP
label_7995d8:
    // 0x7995d8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7995d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_7995dc:
    // 0x7995dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7995dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_7995e0:
    // 0x7995e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_7995e4:
    // 0x7995e4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7995e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_7995e8:
    // 0x7995e8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7995e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_7995ec:
    // 0x7995ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7995f0:
    if (ctx->pc == 0x7995F0u) {
        ctx->pc = 0x7995F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ECu;
        // 0x7995f0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995F4u;
        goto label_7995f4;
    }
    ctx->pc = 0x7995ECu;
    {
        const bool branch_taken_0x7995ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ECu;
        // 0x7995f0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995ec) {
            ctx->pc = 0x799600u;
            goto label_799600;
        }
    }
    ctx->pc = 0x7995F4u;
label_7995f4:
    // 0x7995f4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7995f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7995f8:
    // 0x7995f8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_7995fc:
    if (ctx->pc == 0x7995FCu) {
        ctx->pc = 0x7995FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F8u;
        // 0x7995fc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799600u;
        goto label_799600;
    }
    ctx->pc = 0x7995F8u;
    {
        const bool branch_taken_0x7995f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7995f8) {
            ctx->pc = 0x7995FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7995F8u;
            // 0x7995fc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995d8;
        }
    }
    ctx->pc = 0x799600u;
label_799600:
    // 0x799600: 0xc0b1508  jal         func_2C5420
label_799604:
    if (ctx->pc == 0x799604u) {
        ctx->pc = 0x799604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799600u;
        // 0x799604: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799608u;
        goto label_799608;
    }
    ctx->pc = 0x799600u;
    SET_GPR_U32(ctx, 31, 0x799608u);
    ctx->pc = 0x799604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799600u;
    // 0x799604: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799600u, 0x799608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799608u;
label_799608:
    // 0x799608: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x799608u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79960c:
    // 0x79960c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79960cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799610:
    // 0x799610: 0xc0b6cac  jal         func_2DB2B0
label_799614:
    if (ctx->pc == 0x799614u) {
        ctx->pc = 0x799614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799610u;
        // 0x799614: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799618u;
        goto label_799618;
    }
    ctx->pc = 0x799610u;
    SET_GPR_U32(ctx, 31, 0x799618u);
    ctx->pc = 0x799614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799610u;
    // 0x799614: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799610u, 0x799618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799618u;
label_799618:
    // 0x799618: 0x12a00092  beqz        $s5, . + 4 + (0x92 << 2)
label_79961c:
    if (ctx->pc == 0x79961Cu) {
        ctx->pc = 0x79961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799618u;
        // 0x79961c: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799620u;
        goto label_799620;
    }
    ctx->pc = 0x799618u;
    {
        const bool branch_taken_0x799618 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x79961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799618u;
        // 0x79961c: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799618) {
            ctx->pc = 0x799864u;
            goto label_799864;
        }
    }
    ctx->pc = 0x799620u;
label_799620:
    // 0x799620: 0x12600091  beqz        $s3, . + 4 + (0x91 << 2)
label_799624:
    if (ctx->pc == 0x799624u) {
        ctx->pc = 0x799624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799620u;
        // 0x799624: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799628u;
        goto label_799628;
    }
    ctx->pc = 0x799620u;
    {
        const bool branch_taken_0x799620 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x799624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799620u;
        // 0x799624: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799620) {
            ctx->pc = 0x799868u;
            goto label_799868;
        }
    }
    ctx->pc = 0x799628u;
label_799628:
    // 0x799628: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x799628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_79962c:
    // 0x79962c: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x79962cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_799630:
    // 0x799630: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x799630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
label_799634:
    // 0x799634: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x799634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_799638:
    // 0x799638: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x799638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
label_79963c:
    // 0x79963c: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x79963cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
label_799640:
    // 0x799640: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x799640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
label_799644:
    // 0x799644: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x799644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
label_799648:
    // 0x799648: 0xfba000f0  sqc2        $vf0, 0xF0($sp)
    ctx->pc = 0x799648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[0]));
label_79964c:
    // 0x79964c: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x79964cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
label_799650:
    // 0x799650: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x799650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
label_799654:
    // 0x799654: 0xfba00120  sqc2        $vf0, 0x120($sp)
    ctx->pc = 0x799654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[0]));
label_799658:
    // 0x799658: 0xfba00130  sqc2        $vf0, 0x130($sp)
    ctx->pc = 0x799658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[0]));
label_79965c:
    // 0x79965c: 0xfba00140  sqc2        $vf0, 0x140($sp)
    ctx->pc = 0x79965cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[0]));
label_799660:
    // 0x799660: 0xa3a00020  sb          $zero, 0x20($sp)
    ctx->pc = 0x799660u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 0));
label_799664:
    // 0x799664: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799668:
    // 0x799668: 0xa3a00021  sb          $zero, 0x21($sp)
    ctx->pc = 0x799668u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 0));
label_79966c:
    // 0x79966c: 0x27a5018c  addiu       $a1, $sp, 0x18C
    ctx->pc = 0x79966cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_799670:
    // 0x799670: 0xa3a00022  sb          $zero, 0x22($sp)
    ctx->pc = 0x799670u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 0));
label_799674:
    // 0x799674: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x799674u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_799678:
    // 0x799678: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x799678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_79967c:
    // 0x79967c: 0x27b10180  addiu       $s1, $sp, 0x180
    ctx->pc = 0x79967cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_799680:
    // 0x799680: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x799680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_799684:
    // 0x799684: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x799684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799688:
    // 0x799688: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x799688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_79968c:
    // 0x79968c: 0x27a3002c  addiu       $v1, $sp, 0x2C
    ctx->pc = 0x79968cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_799690:
    // 0x799690: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x799690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_799694:
    // 0x799694: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x799694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_799698:
    // 0x799698: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x799698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_79969c:
    // 0x79969c: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x79969cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_7996a0:
    // 0x7996a0: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x7996a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
label_7996a4:
    // 0x7996a4: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x7996a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
label_7996a8:
    // 0x7996a8: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x7996a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_7996ac:
    // 0x7996ac: 0x0  nop
    ctx->pc = 0x7996acu;
    // NOP
label_7996b0:
    // 0x7996b0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x7996b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_7996b4:
    // 0x7996b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7996b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_7996b8:
    // 0x7996b8: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x7996b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_7996bc:
    // 0x7996bc: 0x0  nop
    ctx->pc = 0x7996bcu;
    // NOP
label_7996c0:
    // 0x7996c0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_7996c4:
    if (ctx->pc == 0x7996C4u) {
        ctx->pc = 0x7996C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C0u;
        // 0x7996c4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996C8u;
        goto label_7996c8;
    }
    ctx->pc = 0x7996C0u;
    {
        const bool branch_taken_0x7996c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C0u;
        // 0x7996c4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996c0) {
            ctx->pc = 0x7996B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996b0;
        }
    }
    ctx->pc = 0x7996C8u;
label_7996c8:
    // 0x7996c8: 0xfba001d0  sqc2        $vf0, 0x1D0($sp)
    ctx->pc = 0x7996c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[0]));
label_7996cc:
    // 0x7996cc: 0xfba001e0  sqc2        $vf0, 0x1E0($sp)
    ctx->pc = 0x7996ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[0]));
label_7996d0:
    // 0x7996d0: 0xfba001f0  sqc2        $vf0, 0x1F0($sp)
    ctx->pc = 0x7996d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[0]));
label_7996d4:
    // 0x7996d4: 0xfba00200  sqc2        $vf0, 0x200($sp)
    ctx->pc = 0x7996d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[0]));
label_7996d8:
    // 0x7996d8: 0xfba00210  sqc2        $vf0, 0x210($sp)
    ctx->pc = 0x7996d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[0]));
label_7996dc:
    // 0x7996dc: 0xfba00220  sqc2        $vf0, 0x220($sp)
    ctx->pc = 0x7996dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[0]));
label_7996e0:
    // 0x7996e0: 0xfba00230  sqc2        $vf0, 0x230($sp)
    ctx->pc = 0x7996e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[0]));
label_7996e4:
    // 0x7996e4: 0xfba00240  sqc2        $vf0, 0x240($sp)
    ctx->pc = 0x7996e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[0]));
label_7996e8:
    // 0x7996e8: 0xfba00250  sqc2        $vf0, 0x250($sp)
    ctx->pc = 0x7996e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[0]));
label_7996ec:
    // 0x7996ec: 0xfba00260  sqc2        $vf0, 0x260($sp)
    ctx->pc = 0x7996ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[0]));
label_7996f0:
    // 0x7996f0: 0xfba00270  sqc2        $vf0, 0x270($sp)
    ctx->pc = 0x7996f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[0]));
label_7996f4:
    // 0x7996f4: 0xfba00280  sqc2        $vf0, 0x280($sp)
    ctx->pc = 0x7996f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[0]));
label_7996f8:
    // 0x7996f8: 0xfba00290  sqc2        $vf0, 0x290($sp)
    ctx->pc = 0x7996f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[0]));
label_7996fc:
    // 0x7996fc: 0xfba002a0  sqc2        $vf0, 0x2A0($sp)
    ctx->pc = 0x7996fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[0]));
label_799700:
    // 0x799700: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x799700u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
label_799704:
    // 0x799704: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x799704u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_799708:
    // 0x799708: 0xa3a00181  sb          $zero, 0x181($sp)
    ctx->pc = 0x799708u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 385), (uint8_t)GPR_U32(ctx, 0));
label_79970c:
    // 0x79970c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79970cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799710:
    // 0x799710: 0xa3a00182  sb          $zero, 0x182($sp)
    ctx->pc = 0x799710u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 0));
label_799714:
    // 0x799714: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x799714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
label_799718:
    // 0x799718: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x799718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
label_79971c:
    // 0x79971c: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x79971cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
label_799720:
    // 0x799720: 0xafa001b4  sw          $zero, 0x1B4($sp)
    ctx->pc = 0x799720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 0));
label_799724:
    // 0x799724: 0xafa001b8  sw          $zero, 0x1B8($sp)
    ctx->pc = 0x799724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 0));
label_799728:
    // 0x799728: 0xafa001bc  sw          $zero, 0x1BC($sp)
    ctx->pc = 0x799728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 0));
label_79972c:
    // 0x79972c: 0xafa002b0  sw          $zero, 0x2B0($sp)
    ctx->pc = 0x79972cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 0));
label_799730:
    // 0x799730: 0xafa002b4  sw          $zero, 0x2B4($sp)
    ctx->pc = 0x799730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 0));
label_799734:
    // 0x799734: 0xafa002b8  sw          $zero, 0x2B8($sp)
    ctx->pc = 0x799734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 0));
label_799738:
    // 0x799738: 0xafa002bc  sw          $zero, 0x2BC($sp)
    ctx->pc = 0x799738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 0));
label_79973c:
    // 0x79973c: 0x0  nop
    ctx->pc = 0x79973cu;
    // NOP
label_799740:
    // 0x799740: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x799740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_799744:
    // 0x799744: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x799744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_799748:
    // 0x799748: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x799748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79974c:
    // 0x79974c: 0x0  nop
    ctx->pc = 0x79974cu;
    // NOP
label_799750:
    // 0x799750: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_799754:
    if (ctx->pc == 0x799754u) {
        ctx->pc = 0x799754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799750u;
        // 0x799754: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799758u;
        goto label_799758;
    }
    ctx->pc = 0x799750u;
    {
        const bool branch_taken_0x799750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799750u;
        // 0x799754: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799750) {
            ctx->pc = 0x799740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799740;
        }
    }
    ctx->pc = 0x799758u;
label_799758:
    // 0x799758: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x799758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
label_79975c:
    // 0x79975c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79975cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799760:
    // 0x799760: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x799760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_799764:
    // 0x799764: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x799764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_799768:
    // 0x799768: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79976c:
    // 0x79976c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x79976cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_799770:
    // 0x799770: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x799770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799774:
    // 0x799774: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_799778:
    // 0x799778: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79977c:
    // 0x79977c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799780:
    // 0x799780: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_799784:
    // 0x799784: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_799788:
    // 0x799788: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79978c:
    // 0x79978c: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_799790:
    // 0x799790: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x799790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_799794:
    // 0x799794: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x799794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_799798:
    // 0x799798: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799798u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_79979c:
    // 0x79979c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79979cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_7997a0:
    // 0x7997a0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x7997a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_7997a4:
    // 0x7997a4: 0xc071a26  jal         func_1C6898
label_7997a8:
    if (ctx->pc == 0x7997A8u) {
        ctx->pc = 0x7997A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A4u;
        // 0x7997a8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997ACu;
        goto label_7997ac;
    }
    ctx->pc = 0x7997A4u;
    SET_GPR_U32(ctx, 31, 0x7997ACu);
    ctx->pc = 0x7997A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997A4u;
    // 0x7997a8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x7997A4u, 0x7997ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997ACu;
label_7997ac:
    // 0x7997ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x7997acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_7997b0:
    // 0x7997b0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x7997b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7997b4:
    // 0x7997b4: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x7997b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_7997b8:
    // 0x7997b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x7997b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_7997bc:
    // 0x7997bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7997bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7997c0:
    // 0x7997c0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x7997c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_7997c4:
    // 0x7997c4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_7997c8:
    // 0x7997c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7997c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_7997cc:
    // 0x7997cc: 0xc071a26  jal         func_1C6898
label_7997d0:
    if (ctx->pc == 0x7997D0u) {
        ctx->pc = 0x7997D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997CCu;
        // 0x7997d0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997D4u;
        goto label_7997d4;
    }
    ctx->pc = 0x7997CCu;
    SET_GPR_U32(ctx, 31, 0x7997D4u);
    ctx->pc = 0x7997D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997CCu;
    // 0x7997d0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x7997CCu, 0x7997D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997D4u;
label_7997d4:
    // 0x7997d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7997d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7997d8:
    // 0x7997d8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x7997d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_7997dc:
    // 0x7997dc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x7997dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_7997e0:
    // 0x7997e0: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x7997e0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_7997e4:
    // 0x7997e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_7997e8:
    // 0x7997e8: 0xc071f54  jal         func_1C7D50
label_7997ec:
    if (ctx->pc == 0x7997ECu) {
        ctx->pc = 0x7997ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E8u;
        // 0x7997ec: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997F0u;
        goto label_7997f0;
    }
    ctx->pc = 0x7997E8u;
    SET_GPR_U32(ctx, 31, 0x7997F0u);
    ctx->pc = 0x7997ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997E8u;
    // 0x7997ec: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x7997E8u, 0x7997F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997F0u;
label_7997f0:
    // 0x7997f0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x7997f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_7997f4:
    // 0x7997f4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x7997f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_7997f8:
    // 0x7997f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7997f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7997fc:
    // 0x7997fc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_799800:
    // 0x799800: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x799800u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_799804:
    // 0x799804: 0xc071f54  jal         func_1C7D50
label_799808:
    if (ctx->pc == 0x799808u) {
        ctx->pc = 0x799808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799804u;
        // 0x799808: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79980Cu;
        goto label_79980c;
    }
    ctx->pc = 0x799804u;
    SET_GPR_U32(ctx, 31, 0x79980Cu);
    ctx->pc = 0x799808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799804u;
    // 0x799808: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x799804u, 0x79980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79980Cu;
label_79980c:
    // 0x79980c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79980cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799810:
    // 0x799810: 0xc071f28  jal         func_1C7CA0
label_799814:
    if (ctx->pc == 0x799814u) {
        ctx->pc = 0x799814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799810u;
        // 0x799814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799818u;
        goto label_799818;
    }
    ctx->pc = 0x799810u;
    SET_GPR_U32(ctx, 31, 0x799818u);
    ctx->pc = 0x799814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799810u;
    // 0x799814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x799810u, 0x799818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799818u;
label_799818:
    // 0x799818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79981c:
    // 0x79981c: 0xc071f28  jal         func_1C7CA0
label_799820:
    if (ctx->pc == 0x799820u) {
        ctx->pc = 0x799820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79981Cu;
        // 0x799820: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799824u;
        goto label_799824;
    }
    ctx->pc = 0x79981Cu;
    SET_GPR_U32(ctx, 31, 0x799824u);
    ctx->pc = 0x799820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79981Cu;
    // 0x799820: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x79981Cu, 0x799824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799824u;
label_799824:
    // 0x799824: 0x10000005  b           . + 4 + (0x5 << 2)
label_799828:
    if (ctx->pc == 0x799828u) {
        ctx->pc = 0x79982Cu;
        goto label_79982c;
    }
    ctx->pc = 0x799824u;
    {
        const bool branch_taken_0x799824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799824) {
            ctx->pc = 0x79983Cu;
            goto label_79983c;
        }
    }
    ctx->pc = 0x79982Cu;
label_79982c:
    // 0x79982c: 0x0  nop
    ctx->pc = 0x79982cu;
    // NOP
label_799830:
    // 0x799830: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799834:
    // 0x799834: 0xc0b56a8  jal         func_2D5AA0
label_799838:
    if (ctx->pc == 0x799838u) {
        ctx->pc = 0x799838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799834u;
        // 0x799838: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79983Cu;
        goto label_79983c;
    }
    ctx->pc = 0x799834u;
    SET_GPR_U32(ctx, 31, 0x79983Cu);
    ctx->pc = 0x799838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799834u;
    // 0x799838: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799834u, 0x79983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79983Cu;
label_79983c:
    // 0x79983c: 0xc070fce  jal         func_1C3F38
label_799840:
    if (ctx->pc == 0x799840u) {
        ctx->pc = 0x799840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79983Cu;
        // 0x799840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799844u;
        goto label_799844;
    }
    ctx->pc = 0x79983Cu;
    SET_GPR_U32(ctx, 31, 0x799844u);
    ctx->pc = 0x799840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79983Cu;
    // 0x799840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x79983Cu, 0x799844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799844u;
label_799844:
    // 0x799844: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799848:
    // 0x799848: 0xc070fce  jal         func_1C3F38
label_79984c:
    if (ctx->pc == 0x79984Cu) {
        ctx->pc = 0x79984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799848u;
        // 0x79984c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799850u;
        goto label_799850;
    }
    ctx->pc = 0x799848u;
    SET_GPR_U32(ctx, 31, 0x799850u);
    ctx->pc = 0x79984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799848u;
    // 0x79984c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x799848u, 0x799850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799850u;
label_799850:
    // 0x799850: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
label_799854:
    if (ctx->pc == 0x799854u) {
        ctx->pc = 0x799854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799850u;
        // 0x799854: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799858u;
        goto label_799858;
    }
    ctx->pc = 0x799850u;
    {
        const bool branch_taken_0x799850 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x799850) {
            ctx->pc = 0x799854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799850u;
            // 0x799854: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
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
    // 0x799858: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_79985c:
    if (ctx->pc == 0x79985Cu) {
        ctx->pc = 0x79985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799858u;
        // 0x79985c: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799860u;
        goto label_799860;
    }
    ctx->pc = 0x799858u;
    {
        const bool branch_taken_0x799858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799858u;
        // 0x79985c: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799858) {
            ctx->pc = 0x799830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799830;
        }
    }
    ctx->pc = 0x799860u;
label_799860:
    // 0x799860: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_799864:
    // 0x799864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799868:
    // 0x799868: 0x2450ae50  addiu       $s0, $v0, -0x51B0
    ctx->pc = 0x799868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946384));
label_79986c:
    // 0x79986c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79986cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799870:
    // 0x799870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799874:
    // 0x799874: 0xc04ccb4  jal         func_1332D0
label_799878:
    if (ctx->pc == 0x799878u) {
        ctx->pc = 0x799878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799874u;
        // 0x799878: 0x24459ba0  addiu       $a1, $v0, -0x6460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79987Cu;
        goto label_79987c;
    }
    ctx->pc = 0x799874u;
    SET_GPR_U32(ctx, 31, 0x79987Cu);
    ctx->pc = 0x799878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799874u;
    // 0x799878: 0x24459ba0  addiu       $a1, $v0, -0x6460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799874u, 0x79987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79987Cu;
label_79987c:
    // 0x79987c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799880:
    // 0x799880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799884:
    // 0x799884: 0x24459ba8  addiu       $a1, $v0, -0x6458
    ctx->pc = 0x799884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941608));
label_799888:
    // 0x799888: 0xc04ccb4  jal         func_1332D0
label_79988c:
    if (ctx->pc == 0x79988Cu) {
        ctx->pc = 0x79988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799888u;
        // 0x79988c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799890u;
        goto label_799890;
    }
    ctx->pc = 0x799888u;
    SET_GPR_U32(ctx, 31, 0x799890u);
    ctx->pc = 0x79988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799888u;
    // 0x79988c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799888u, 0x799890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799890u;
label_799890:
    // 0x799890: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x799890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_799894:
    // 0x799894: 0xc0b5692  jal         func_2D5A48
label_799898:
    if (ctx->pc == 0x799898u) {
        ctx->pc = 0x799898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799894u;
        // 0x799898: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79989Cu;
        goto label_79989c;
    }
    ctx->pc = 0x799894u;
    SET_GPR_U32(ctx, 31, 0x79989Cu);
    ctx->pc = 0x799898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799894u;
    // 0x799898: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799894u, 0x79989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79989Cu;
label_79989c:
    // 0x79989c: 0x7bb00370  lq          $s0, 0x370($sp)
    ctx->pc = 0x79989cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_7998a0:
    // 0x7998a0: 0x7bb10360  lq          $s1, 0x360($sp)
    ctx->pc = 0x7998a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 864)));
label_7998a4:
    // 0x7998a4: 0x7bb20350  lq          $s2, 0x350($sp)
    ctx->pc = 0x7998a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_7998a8:
    // 0x7998a8: 0x7bb30340  lq          $s3, 0x340($sp)
    ctx->pc = 0x7998a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 832)));
label_7998ac:
    // 0x7998ac: 0x7bb40330  lq          $s4, 0x330($sp)
    ctx->pc = 0x7998acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 816)));
label_7998b0:
    // 0x7998b0: 0x7bb50320  lq          $s5, 0x320($sp)
    ctx->pc = 0x7998b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_7998b4:
    // 0x7998b4: 0x7bb60310  lq          $s6, 0x310($sp)
    ctx->pc = 0x7998b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_7998b8:
    // 0x7998b8: 0x7bb70300  lq          $s7, 0x300($sp)
    ctx->pc = 0x7998b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_7998bc:
    // 0x7998bc: 0x7bbe02f0  lq          $fp, 0x2F0($sp)
    ctx->pc = 0x7998bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_7998c0:
    // 0x7998c0: 0xdfbf02e0  ld          $ra, 0x2E0($sp)
    ctx->pc = 0x7998c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 736)));
label_7998c4:
    // 0x7998c4: 0xc7b50388  lwc1        $f21, 0x388($sp)
    ctx->pc = 0x7998c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_7998c8:
    // 0x7998c8: 0xc7b40380  lwc1        $f20, 0x380($sp)
    ctx->pc = 0x7998c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_7998cc:
    // 0x7998cc: 0x3e00008  jr          $ra
label_7998d0:
    if (ctx->pc == 0x7998D0u) {
        ctx->pc = 0x7998D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998CCu;
        // 0x7998d0: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998D4u;
        goto label_7998d4;
    }
    ctx->pc = 0x7998CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998CCu;
        // 0x7998d0: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998D4u;
label_7998d4:
    // 0x7998d4: 0x0  nop
    ctx->pc = 0x7998d4u;
    // NOP
    ctx->pc = 0x7998d8u;
}
} // namespace gh_r406
