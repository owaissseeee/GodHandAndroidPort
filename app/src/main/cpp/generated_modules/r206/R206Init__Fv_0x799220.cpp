#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: R206Init__Fv
// Address: 0x799220 - 0x7997f8
void R206Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R206Init__Fv_0x799220");
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
        default: break;
    }

    ctx->pc = 0x799220u;

label_799220:
    // 0x799220: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_799224:
    // 0x799224: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_799228:
    // 0x799228: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_79922c:
    // 0x79922c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_799230:
    // 0x799230: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799230u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
label_799234:
    // 0x799234: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x799234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_799238:
    // 0x799238: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x799238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_79923c:
    // 0x79923c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x79923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_799240:
    // 0x799240: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x799240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_799244:
    // 0x799244: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x799244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_799248:
    // 0x799248: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x799248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_79924c:
    // 0x79924c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x79924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_799250:
    // 0x799250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_799254:
    // 0x799254: 0xc1e6460  jal         func_799180
label_799258:
    if (ctx->pc == 0x799258u) {
        ctx->pc = 0x799258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799254u;
        // 0x799258: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79925Cu;
        goto label_79925c;
    }
    ctx->pc = 0x799254u;
    SET_GPR_U32(ctx, 31, 0x79925Cu);
    ctx->pc = 0x799258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799254u;
    // 0x799258: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799254u, 0x79925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79925Cu;
label_79925c:
    // 0x79925c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_799260:
    // 0x799260: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799264:
    // 0x799264: 0x2471ea60  addiu       $s1, $v1, -0x15A0
    ctx->pc = 0x799264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961760));
label_799268:
    // 0x799268: 0xae02aca0  sw          $v0, -0x5360($s0)
    ctx->pc = 0x799268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294945952), GPR_U32(ctx, 2));
label_79926c:
    // 0x79926c: 0x24e7a680  addiu       $a3, $a3, -0x5980
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944384));
label_799270:
    // 0x799270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799274:
    // 0x799274: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799278:
    // 0x799278: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79927c:
    // 0x79927c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79927cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799280:
    // 0x799280: 0xc0b09e4  jal         func_2C2790
label_799284:
    if (ctx->pc == 0x799284u) {
        ctx->pc = 0x799284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799280u;
        // 0x799284: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799288u;
        goto label_799288;
    }
    ctx->pc = 0x799280u;
    SET_GPR_U32(ctx, 31, 0x799288u);
    ctx->pc = 0x799284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799280u;
    // 0x799284: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799280u, 0x799288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799288u;
label_799288:
    // 0x799288: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79928c:
    // 0x79928c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79928cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799290:
    // 0x799290: 0x24e7a6b8  addiu       $a3, $a3, -0x5948
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944440));
label_799294:
    // 0x799294: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_799298:
    // 0x799298: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79929c:
    // 0x79929c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79929cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7992a0:
    // 0x7992a0: 0xc0b09e4  jal         func_2C2790
label_7992a4:
    if (ctx->pc == 0x7992A4u) {
        ctx->pc = 0x7992A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992A0u;
        // 0x7992a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992A8u;
        goto label_7992a8;
    }
    ctx->pc = 0x7992A0u;
    SET_GPR_U32(ctx, 31, 0x7992A8u);
    ctx->pc = 0x7992A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992A0u;
    // 0x7992a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7992A0u, 0x7992A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992A8u;
label_7992a8:
    // 0x7992a8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_7992ac:
    // 0x7992ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7992acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7992b0:
    // 0x7992b0: 0x24e7a6f8  addiu       $a3, $a3, -0x5908
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944504));
label_7992b4:
    // 0x7992b4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_7992b8:
    // 0x7992b8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7992bc:
    // 0x7992bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7992bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7992c0:
    // 0x7992c0: 0xc0b09e4  jal         func_2C2790
label_7992c4:
    if (ctx->pc == 0x7992C4u) {
        ctx->pc = 0x7992C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C0u;
        // 0x7992c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992C8u;
        goto label_7992c8;
    }
    ctx->pc = 0x7992C0u;
    SET_GPR_U32(ctx, 31, 0x7992C8u);
    ctx->pc = 0x7992C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992C0u;
    // 0x7992c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7992C0u, 0x7992C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992C8u;
label_7992c8:
    // 0x7992c8: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_7992cc:
    // 0x7992cc: 0x8c828658  lw          $v0, -0x79A8($a0)
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936152)));
label_7992d0:
    // 0x7992d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7992d4:
    // 0x7992d4: 0x4600011  bltz        $v1, . + 4 + (0x11 << 2)
label_7992d8:
    if (ctx->pc == 0x7992D8u) {
        ctx->pc = 0x7992D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992D4u;
        // 0x7992d8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992DCu;
        goto label_7992dc;
    }
    ctx->pc = 0x7992D4u;
    {
        const bool branch_taken_0x7992d4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x7992D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992D4u;
        // 0x7992d8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992d4) {
            ctx->pc = 0x79931Cu;
            goto label_79931c;
        }
    }
    ctx->pc = 0x7992DCu;
label_7992dc:
    // 0x7992dc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_7992e0:
    // 0x7992e0: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_7992e4:
    // 0x7992e4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7992e8:
    // 0x7992e8: 0xc0b0e24  jal         func_2C3890
label_7992ec:
    if (ctx->pc == 0x7992ECu) {
        ctx->pc = 0x7992ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992E8u;
        // 0x7992ec: 0x24a59800  addiu       $a1, $a1, -0x6800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992F0u;
        goto label_7992f0;
    }
    ctx->pc = 0x7992E8u;
    SET_GPR_U32(ctx, 31, 0x7992F0u);
    ctx->pc = 0x7992ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E8u;
    // 0x7992ec: 0x24a59800  addiu       $a1, $a1, -0x6800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992E8u, 0x7992F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992F0u;
label_7992f0:
    // 0x7992f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7992f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7992f4:
    // 0x7992f4: 0xc0b0a54  jal         func_2C2950
label_7992f8:
    if (ctx->pc == 0x7992F8u) {
        ctx->pc = 0x7992F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992F4u;
        // 0x7992f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992FCu;
        goto label_7992fc;
    }
    ctx->pc = 0x7992F4u;
    SET_GPR_U32(ctx, 31, 0x7992FCu);
    ctx->pc = 0x7992F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992F4u;
    // 0x7992f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x7992F4u, 0x7992FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992FCu;
label_7992fc:
    // 0x7992fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7992fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799300:
    // 0x799300: 0xc0b0a54  jal         func_2C2950
label_799304:
    if (ctx->pc == 0x799304u) {
        ctx->pc = 0x799304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799300u;
        // 0x799304: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799308u;
        goto label_799308;
    }
    ctx->pc = 0x799300u;
    SET_GPR_U32(ctx, 31, 0x799308u);
    ctx->pc = 0x799304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799300u;
    // 0x799304: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799300u, 0x799308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799308u;
label_799308:
    // 0x799308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79930c:
    // 0x79930c: 0xc0b0a54  jal         func_2C2950
label_799310:
    if (ctx->pc == 0x799310u) {
        ctx->pc = 0x799310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79930Cu;
        // 0x799310: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799314u;
        goto label_799314;
    }
    ctx->pc = 0x79930Cu;
    SET_GPR_U32(ctx, 31, 0x799314u);
    ctx->pc = 0x799310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79930Cu;
    // 0x799310: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79930Cu, 0x799314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799314u;
label_799314:
    // 0x799314: 0x1000000b  b           . + 4 + (0xB << 2)
label_799318:
    if (ctx->pc == 0x799318u) {
        ctx->pc = 0x799318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799314u;
        // 0x799318: 0x3c03005f  lui         $v1, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79931Cu;
        goto label_79931c;
    }
    ctx->pc = 0x799314u;
    {
        const bool branch_taken_0x799314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799314u;
        // 0x799318: 0x3c03005f  lui         $v1, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799314) {
            ctx->pc = 0x799344u;
            goto label_799344;
        }
    }
    ctx->pc = 0x79931Cu;
label_79931c:
    // 0x79931c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79931cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799320:
    // 0x799320: 0xc0b0a7e  jal         func_2C29F8
label_799324:
    if (ctx->pc == 0x799324u) {
        ctx->pc = 0x799324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799320u;
        // 0x799324: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799328u;
        goto label_799328;
    }
    ctx->pc = 0x799320u;
    SET_GPR_U32(ctx, 31, 0x799328u);
    ctx->pc = 0x799324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799320u;
    // 0x799324: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799320u, 0x799328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799328u;
label_799328:
    // 0x799328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79932c:
    // 0x79932c: 0xc0b0a7e  jal         func_2C29F8
label_799330:
    if (ctx->pc == 0x799330u) {
        ctx->pc = 0x799330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79932Cu;
        // 0x799330: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799334u;
        goto label_799334;
    }
    ctx->pc = 0x79932Cu;
    SET_GPR_U32(ctx, 31, 0x799334u);
    ctx->pc = 0x799330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79932Cu;
    // 0x799330: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79932Cu, 0x799334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799334u;
label_799334:
    // 0x799334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799338:
    // 0x799338: 0xc0b0a7e  jal         func_2C29F8
label_79933c:
    if (ctx->pc == 0x79933Cu) {
        ctx->pc = 0x79933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799338u;
        // 0x79933c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799340u;
        goto label_799340;
    }
    ctx->pc = 0x799338u;
    SET_GPR_U32(ctx, 31, 0x799340u);
    ctx->pc = 0x79933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799338u;
    // 0x79933c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799338u, 0x799340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799340u;
label_799340:
    // 0x799340: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_799344:
    // 0x799344: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x799344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_799348:
    // 0x799348: 0x8c628658  lw          $v0, -0x79A8($v1)
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936152)));
label_79934c:
    // 0x79934c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799350:
    // 0x799350: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_799354:
    // 0x799354: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
label_799358:
    if (ctx->pc == 0x799358u) {
        ctx->pc = 0x799358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799354u;
        // 0x799358: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79935Cu;
        goto label_79935c;
    }
    ctx->pc = 0x799354u;
    {
        const bool branch_taken_0x799354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799354u;
        // 0x799358: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799354) {
            ctx->pc = 0x799400u;
            goto label_799400;
        }
    }
    ctx->pc = 0x79935Cu;
label_79935c:
    // 0x79935c: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
label_799360:
    // 0x799360: 0x8044ac20  lb          $a0, -0x53E0($v0)
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294945824)));
label_799364:
    // 0x799364: 0x2446ac20  addiu       $a2, $v0, -0x53E0
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945824));
label_799368:
    // 0x799368: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
label_79936c:
    // 0x79936c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x79936cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799370:
    // 0x799370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799374:
    // 0x799374: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799378:
    // 0x799378: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
label_79937c:
    // 0x79937c: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
label_799380:
    // 0x799380: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
label_799384:
    // 0x799384: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
label_799388:
    // 0x799388: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
label_79938c:
    // 0x79938c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_799390:
    if (ctx->pc == 0x799390u) {
        ctx->pc = 0x799390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79938Cu;
        // 0x799390: 0x3c1e007a  lui         $fp, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799394u;
        goto label_799394;
    }
    ctx->pc = 0x79938Cu;
    {
        const bool branch_taken_0x79938c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79938Cu;
        // 0x799390: 0x3c1e007a  lui         $fp, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79938c) {
            ctx->pc = 0x7993C0u;
            goto label_7993c0;
        }
    }
    ctx->pc = 0x799394u;
label_799394:
    // 0x799394: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799394u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799398:
    // 0x799398: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79939c:
    // 0x79939c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_7993a0:
    // 0x7993a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_7993a4:
    // 0x7993a4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7993a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_7993a8:
    // 0x7993a8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7993a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_7993ac:
    // 0x7993ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7993b0:
    if (ctx->pc == 0x7993B0u) {
        ctx->pc = 0x7993B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ACu;
        // 0x7993b0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993B4u;
        goto label_7993b4;
    }
    ctx->pc = 0x7993ACu;
    {
        const bool branch_taken_0x7993ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ACu;
        // 0x7993b0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993ac) {
            ctx->pc = 0x7993C0u;
            goto label_7993c0;
        }
    }
    ctx->pc = 0x7993B4u;
label_7993b4:
    // 0x7993b4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7993b8:
    // 0x7993b8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_7993bc:
    if (ctx->pc == 0x7993BCu) {
        ctx->pc = 0x7993BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B8u;
        // 0x7993bc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993C0u;
        goto label_7993c0;
    }
    ctx->pc = 0x7993B8u;
    {
        const bool branch_taken_0x7993b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7993b8) {
            ctx->pc = 0x7993BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7993B8u;
            // 0x7993bc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799398;
        }
    }
    ctx->pc = 0x7993C0u;
label_7993c0:
    // 0x7993c0: 0xc053f66  jal         func_14FD98
label_7993c4:
    if (ctx->pc == 0x7993C4u) {
        ctx->pc = 0x7993C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C0u;
        // 0x7993c4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993C8u;
        goto label_7993c8;
    }
    ctx->pc = 0x7993C0u;
    SET_GPR_U32(ctx, 31, 0x7993C8u);
    ctx->pc = 0x7993C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993C0u;
    // 0x7993c4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7993C0u, 0x7993C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C8u;
label_7993c8:
    // 0x7993c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7993c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7993cc:
    // 0x7993cc: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_7993d0:
    if (ctx->pc == 0x7993D0u) {
        ctx->pc = 0x7993D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993CCu;
        // 0x7993d0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993D4u;
        goto label_7993d4;
    }
    ctx->pc = 0x7993CCu;
    {
        const bool branch_taken_0x7993cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993CCu;
        // 0x7993d0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993cc) {
            ctx->pc = 0x7993E4u;
            goto label_7993e4;
        }
    }
    ctx->pc = 0x7993D4u;
label_7993d4:
    // 0x7993d4: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x7993d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
label_7993d8:
    // 0x7993d8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x7993d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_7993dc:
    // 0x7993dc: 0xae0205b8  sw          $v0, 0x5B8($s0)
    ctx->pc = 0x7993dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
label_7993e0:
    // 0x7993e0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7993e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_7993e4:
    // 0x7993e4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_7993e8:
    // 0x7993e8: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_7993ec:
    // 0x7993ec: 0x24a59a10  addiu       $a1, $a1, -0x65F0
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941200));
label_7993f0:
    // 0x7993f0: 0xc0b0e24  jal         func_2C3890
label_7993f4:
    if (ctx->pc == 0x7993F4u) {
        ctx->pc = 0x7993F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F0u;
        // 0x7993f4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993F8u;
        goto label_7993f8;
    }
    ctx->pc = 0x7993F0u;
    SET_GPR_U32(ctx, 31, 0x7993F8u);
    ctx->pc = 0x7993F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F0u;
    // 0x7993f4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7993F0u, 0x7993F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993F8u;
label_7993f8:
    // 0x7993f8: 0x10000028  b           . + 4 + (0x28 << 2)
label_7993fc:
    if (ctx->pc == 0x7993FCu) {
        ctx->pc = 0x7993FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F8u;
        // 0x7993fc: 0x8222ac28  lb          $v0, -0x53D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294945832)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799400u;
        goto label_799400;
    }
    ctx->pc = 0x7993F8u;
    {
        const bool branch_taken_0x7993f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F8u;
        // 0x7993fc: 0x8222ac28  lb          $v0, -0x53D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294945832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993f8) {
            ctx->pc = 0x79949Cu;
            goto label_79949c;
        }
    }
    ctx->pc = 0x799400u;
label_799400:
    // 0x799400: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
label_799404:
    // 0x799404: 0x8044ac20  lb          $a0, -0x53E0($v0)
    ctx->pc = 0x799404u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294945824)));
label_799408:
    // 0x799408: 0x2446ac20  addiu       $a2, $v0, -0x53E0
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945824));
label_79940c:
    // 0x79940c: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
label_799410:
    // 0x799410: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x799410u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799414:
    // 0x799414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799418:
    // 0x799418: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79941c:
    // 0x79941c: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
label_799420:
    // 0x799420: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
label_799424:
    // 0x799424: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
label_799428:
    // 0x799428: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
label_79942c:
    // 0x79942c: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
label_799430:
    // 0x799430: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_799434:
    if (ctx->pc == 0x799434u) {
        ctx->pc = 0x799434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799430u;
        // 0x799434: 0x3c1e007a  lui         $fp, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799438u;
        goto label_799438;
    }
    ctx->pc = 0x799430u;
    {
        const bool branch_taken_0x799430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799430u;
        // 0x799434: 0x3c1e007a  lui         $fp, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799430) {
            ctx->pc = 0x799468u;
            goto label_799468;
        }
    }
    ctx->pc = 0x799438u;
label_799438:
    // 0x799438: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79943c:
    // 0x79943c: 0x0  nop
    ctx->pc = 0x79943cu;
    // NOP
label_799440:
    // 0x799440: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799444:
    // 0x799444: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799448:
    // 0x799448: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79944c:
    // 0x79944c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79944cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799450:
    // 0x799450: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799450u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_799454:
    // 0x799454: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799458:
    if (ctx->pc == 0x799458u) {
        ctx->pc = 0x799458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799454u;
        // 0x799458: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79945Cu;
        goto label_79945c;
    }
    ctx->pc = 0x799454u;
    {
        const bool branch_taken_0x799454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799454u;
        // 0x799458: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799454) {
            ctx->pc = 0x799468u;
            goto label_799468;
        }
    }
    ctx->pc = 0x79945Cu;
label_79945c:
    // 0x79945c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79945cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799460:
    // 0x799460: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_799464:
    if (ctx->pc == 0x799464u) {
        ctx->pc = 0x799464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799460u;
        // 0x799464: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799468u;
        goto label_799468;
    }
    ctx->pc = 0x799460u;
    {
        const bool branch_taken_0x799460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799460) {
            ctx->pc = 0x799464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799460u;
            // 0x799464: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799440;
        }
    }
    ctx->pc = 0x799468u;
label_799468:
    // 0x799468: 0xc053f66  jal         func_14FD98
label_79946c:
    if (ctx->pc == 0x79946Cu) {
        ctx->pc = 0x79946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799468u;
        // 0x79946c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799470u;
        goto label_799470;
    }
    ctx->pc = 0x799468u;
    SET_GPR_U32(ctx, 31, 0x799470u);
    ctx->pc = 0x79946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799468u;
    // 0x79946c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799468u, 0x799470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799470u;
label_799470:
    // 0x799470: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799474:
    // 0x799474: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
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
    {
        const bool branch_taken_0x799474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799474u;
        // 0x799478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799474) {
            ctx->pc = 0x799498u;
            goto label_799498;
        }
    }
    ctx->pc = 0x79947Cu;
label_79947c:
    // 0x79947c: 0xc06dda0  jal         func_1B7680
label_799480:
    if (ctx->pc == 0x799480u) {
        ctx->pc = 0x799480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79947Cu;
        // 0x799480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799484u;
        goto label_799484;
    }
    ctx->pc = 0x79947Cu;
    SET_GPR_U32(ctx, 31, 0x799484u);
    ctx->pc = 0x799480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79947Cu;
    // 0x799480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7680u, 0x79947Cu, 0x799484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799484u;
label_799484:
    // 0x799484: 0x8e0205a0  lw          $v0, 0x5A0($s0)
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
label_799488:
    // 0x799488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79948c:
    // 0x79948c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x79948cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_799490:
    // 0x799490: 0xc0c49c2  jal         func_312708
label_799494:
    if (ctx->pc == 0x799494u) {
        ctx->pc = 0x799494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799490u;
        // 0x799494: 0xae0205a0  sw          $v0, 0x5A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799498u;
        goto label_799498;
    }
    ctx->pc = 0x799490u;
    SET_GPR_U32(ctx, 31, 0x799498u);
    ctx->pc = 0x799494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799490u;
    // 0x799494: 0xae0205a0  sw          $v0, 0x5A0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x799490u, 0x799498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799498u;
label_799498:
    // 0x799498: 0x8222ac28  lb          $v0, -0x53D8($s1)
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294945832)));
label_79949c:
    // 0x79949c: 0x26684c58  addiu       $t0, $s3, 0x4C58
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19544));
label_7994a0:
    // 0x7994a0: 0x2623ac28  addiu       $v1, $s1, -0x53D8
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945832));
label_7994a4:
    // 0x7994a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7994a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994a8:
    // 0x7994a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_7994ac:
    if (ctx->pc == 0x7994ACu) {
        ctx->pc = 0x7994ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A8u;
        // 0x7994ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994B0u;
        goto label_7994b0;
    }
    ctx->pc = 0x7994A8u;
    {
        const bool branch_taken_0x7994a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A8u;
        // 0x7994ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994a8) {
            ctx->pc = 0x7994E0u;
            goto label_7994e0;
        }
    }
    ctx->pc = 0x7994B0u;
label_7994b0:
    // 0x7994b0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7994b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7994b4:
    // 0x7994b4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7994b8:
    // 0x7994b8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_7994bc:
    // 0x7994bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_7994c0:
    // 0x7994c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_7994c4:
    // 0x7994c4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7994c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_7994c8:
    // 0x7994c8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7994c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_7994cc:
    // 0x7994cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7994d0:
    if (ctx->pc == 0x7994D0u) {
        ctx->pc = 0x7994D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994CCu;
        // 0x7994d0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994D4u;
        goto label_7994d4;
    }
    ctx->pc = 0x7994CCu;
    {
        const bool branch_taken_0x7994cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994CCu;
        // 0x7994d0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994cc) {
            ctx->pc = 0x7994E0u;
            goto label_7994e0;
        }
    }
    ctx->pc = 0x7994D4u;
label_7994d4:
    // 0x7994d4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7994d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7994d8:
    // 0x7994d8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_7994dc:
    if (ctx->pc == 0x7994DCu) {
        ctx->pc = 0x7994DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D8u;
        // 0x7994dc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994E0u;
        goto label_7994e0;
    }
    ctx->pc = 0x7994D8u;
    {
        const bool branch_taken_0x7994d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7994d8) {
            ctx->pc = 0x7994DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7994D8u;
            // 0x7994dc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7994B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994b8;
        }
    }
    ctx->pc = 0x7994E0u;
label_7994e0:
    // 0x7994e0: 0xc053f66  jal         func_14FD98
label_7994e4:
    if (ctx->pc == 0x7994E4u) {
        ctx->pc = 0x7994E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994E0u;
        // 0x7994e4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994E8u;
        goto label_7994e8;
    }
    ctx->pc = 0x7994E0u;
    SET_GPR_U32(ctx, 31, 0x7994E8u);
    ctx->pc = 0x7994E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E0u;
    // 0x7994e4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7994E0u, 0x7994E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E8u;
label_7994e8:
    // 0x7994e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7994e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7994ec:
    // 0x7994ec: 0x26684c58  addiu       $t0, $s3, 0x4C58
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19544));
label_7994f0:
    // 0x7994f0: 0x8282ac30  lb          $v0, -0x53D0($s4)
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294945840)));
label_7994f4:
    // 0x7994f4: 0x2683ac30  addiu       $v1, $s4, -0x53D0
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945840));
label_7994f8:
    // 0x7994f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7994f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994fc:
    // 0x7994fc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799500:
    if (ctx->pc == 0x799500u) {
        ctx->pc = 0x799500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994FCu;
        // 0x799500: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799504u;
        goto label_799504;
    }
    ctx->pc = 0x7994FCu;
    {
        const bool branch_taken_0x7994fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994FCu;
        // 0x799500: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994fc) {
            ctx->pc = 0x799538u;
            goto label_799538;
        }
    }
    ctx->pc = 0x799504u;
label_799504:
    // 0x799504: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799508:
    // 0x799508: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799508u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79950c:
    // 0x79950c: 0x0  nop
    ctx->pc = 0x79950cu;
    // NOP
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
    // 0x799538: 0xc053f66  jal         func_14FD98
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
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799538u, 0x799540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799540u;
label_799540:
    // 0x799540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799544:
    // 0x799544: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_799548:
    if (ctx->pc == 0x799548u) {
        ctx->pc = 0x799548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799544u;
        // 0x799548: 0x82a2ac38  lb          $v0, -0x53C8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294945848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79954Cu;
        goto label_79954c;
    }
    ctx->pc = 0x799544u;
    {
        const bool branch_taken_0x799544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799544u;
        // 0x799548: 0x82a2ac38  lb          $v0, -0x53C8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294945848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799544) {
            ctx->pc = 0x79956Cu;
            goto label_79956c;
        }
    }
    ctx->pc = 0x79954Cu;
label_79954c:
    // 0x79954c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_799550:
    if (ctx->pc == 0x799550u) {
        ctx->pc = 0x799550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79954Cu;
        // 0x799550: 0x26684c58  addiu       $t0, $s3, 0x4C58 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799554u;
        goto label_799554;
    }
    ctx->pc = 0x79954Cu;
    {
        const bool branch_taken_0x79954c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79954Cu;
        // 0x799550: 0x26684c58  addiu       $t0, $s3, 0x4C58 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79954c) {
            ctx->pc = 0x799570u;
            goto label_799570;
        }
    }
    ctx->pc = 0x799554u;
label_799554:
    // 0x799554: 0xc0693a2  jal         func_1A4E88
label_799558:
    if (ctx->pc == 0x799558u) {
        ctx->pc = 0x799558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799554u;
        // 0x799558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79955Cu;
        goto label_79955c;
    }
    ctx->pc = 0x799554u;
    SET_GPR_U32(ctx, 31, 0x79955Cu);
    ctx->pc = 0x799558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799554u;
    // 0x799558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E88u, 0x799554u, 0x79955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79955Cu;
label_79955c:
    // 0x79955c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79955cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799560:
    // 0x799560: 0xc0693cc  jal         func_1A4F30
label_799564:
    if (ctx->pc == 0x799564u) {
        ctx->pc = 0x799564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799560u;
        // 0x799564: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799568u;
        goto label_799568;
    }
    ctx->pc = 0x799560u;
    SET_GPR_U32(ctx, 31, 0x799568u);
    ctx->pc = 0x799564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799560u;
    // 0x799564: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F30u, 0x799560u, 0x799568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799568u;
label_799568:
    // 0x799568: 0x82a2ac38  lb          $v0, -0x53C8($s5)
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294945848)));
label_79956c:
    // 0x79956c: 0x26684c58  addiu       $t0, $s3, 0x4C58
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19544));
label_799570:
    // 0x799570: 0x26a3ac38  addiu       $v1, $s5, -0x53C8
    ctx->pc = 0x799570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945848));
label_799574:
    // 0x799574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799578:
    // 0x799578: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_79957c:
    if (ctx->pc == 0x79957Cu) {
        ctx->pc = 0x79957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799578u;
        // 0x79957c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799580u;
        goto label_799580;
    }
    ctx->pc = 0x799578u;
    {
        const bool branch_taken_0x799578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799578u;
        // 0x79957c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799578) {
            ctx->pc = 0x7995B0u;
            goto label_7995b0;
        }
    }
    ctx->pc = 0x799580u;
label_799580:
    // 0x799580: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799584:
    // 0x799584: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799588:
    // 0x799588: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79958c:
    // 0x79958c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799590:
    // 0x799590: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_799594:
    // 0x799594: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799598:
    // 0x799598: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799598u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79959c:
    // 0x79959c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7995a0:
    if (ctx->pc == 0x7995A0u) {
        ctx->pc = 0x7995A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79959Cu;
        // 0x7995a0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995A4u;
        goto label_7995a4;
    }
    ctx->pc = 0x79959Cu;
    {
        const bool branch_taken_0x79959c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79959Cu;
        // 0x7995a0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79959c) {
            ctx->pc = 0x7995B0u;
            goto label_7995b0;
        }
    }
    ctx->pc = 0x7995A4u;
label_7995a4:
    // 0x7995a4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7995a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7995a8:
    // 0x7995a8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_7995ac:
    if (ctx->pc == 0x7995ACu) {
        ctx->pc = 0x7995ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A8u;
        // 0x7995ac: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
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
            // 0x7995ac: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799588;
        }
    }
    ctx->pc = 0x7995B0u;
label_7995b0:
    // 0x7995b0: 0xc053f66  jal         func_14FD98
label_7995b4:
    if (ctx->pc == 0x7995B4u) {
        ctx->pc = 0x7995B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B0u;
        // 0x7995b4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995B8u;
        goto label_7995b8;
    }
    ctx->pc = 0x7995B0u;
    SET_GPR_U32(ctx, 31, 0x7995B8u);
    ctx->pc = 0x7995B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995B0u;
    // 0x7995b4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7995B0u, 0x7995B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B8u;
label_7995b8:
    // 0x7995b8: 0x8e43aca0  lw          $v1, -0x5360($s2)
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945952)));
label_7995bc:
    // 0x7995bc: 0x26684c58  addiu       $t0, $s3, 0x4C58
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19544));
label_7995c0:
    // 0x7995c0: 0x26c4ac40  addiu       $a0, $s6, -0x53C0
    ctx->pc = 0x7995c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945856));
label_7995c4:
    // 0x7995c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7995c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7995c8:
    // 0x7995c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x7995c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_7995cc:
    // 0x7995cc: 0x82c2ac40  lb          $v0, -0x53C0($s6)
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294945856)));
label_7995d0:
    // 0x7995d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_7995d4:
    if (ctx->pc == 0x7995D4u) {
        ctx->pc = 0x7995D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D0u;
        // 0x7995d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995D8u;
        goto label_7995d8;
    }
    ctx->pc = 0x7995D0u;
    {
        const bool branch_taken_0x7995d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D0u;
        // 0x7995d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995d0) {
            ctx->pc = 0x799608u;
            goto label_799608;
        }
    }
    ctx->pc = 0x7995D8u;
label_7995d8:
    // 0x7995d8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x7995d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_7995dc:
    // 0x7995dc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7995dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7995e0:
    // 0x7995e0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_7995e4:
    // 0x7995e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_7995e8:
    // 0x7995e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_7995ec:
    // 0x7995ec: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7995ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_7995f0:
    // 0x7995f0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7995f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_7995f4:
    // 0x7995f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7995f8:
    if (ctx->pc == 0x7995F8u) {
        ctx->pc = 0x7995F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F4u;
        // 0x7995f8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
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
        // 0x7995f8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995f4) {
            ctx->pc = 0x799608u;
            goto label_799608;
        }
    }
    ctx->pc = 0x7995FCu;
label_7995fc:
    // 0x7995fc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7995fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799600:
    // 0x799600: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_799604:
    if (ctx->pc == 0x799604u) {
        ctx->pc = 0x799604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799600u;
        // 0x799604: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799608u;
        goto label_799608;
    }
    ctx->pc = 0x799600u;
    {
        const bool branch_taken_0x799600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799600) {
            ctx->pc = 0x799604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799600u;
            // 0x799604: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995e0;
        }
    }
    ctx->pc = 0x799608u;
label_799608:
    // 0x799608: 0xc053f66  jal         func_14FD98
label_79960c:
    if (ctx->pc == 0x79960Cu) {
        ctx->pc = 0x79960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799608u;
        // 0x79960c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799610u;
        goto label_799610;
    }
    ctx->pc = 0x799608u;
    SET_GPR_U32(ctx, 31, 0x799610u);
    ctx->pc = 0x79960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799608u;
    // 0x79960c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799608u, 0x799610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799610u;
label_799610:
    // 0x799610: 0x8e43aca0  lw          $v1, -0x5360($s2)
    ctx->pc = 0x799610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945952)));
label_799614:
    // 0x799614: 0x26684c58  addiu       $t0, $s3, 0x4C58
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19544));
label_799618:
    // 0x799618: 0x26e4ac48  addiu       $a0, $s7, -0x53B8
    ctx->pc = 0x799618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294945864));
label_79961c:
    // 0x79961c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79961cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799620:
    // 0x799620: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_799624:
    // 0x799624: 0x82e2ac48  lb          $v0, -0x53B8($s7)
    ctx->pc = 0x799624u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294945864)));
label_799628:
    // 0x799628: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_79962c:
    if (ctx->pc == 0x79962Cu) {
        ctx->pc = 0x79962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799628u;
        // 0x79962c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799630u;
        goto label_799630;
    }
    ctx->pc = 0x799628u;
    {
        const bool branch_taken_0x799628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799628u;
        // 0x79962c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799628) {
            ctx->pc = 0x799660u;
            goto label_799660;
        }
    }
    ctx->pc = 0x799630u;
label_799630:
    // 0x799630: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x799630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_799634:
    // 0x799634: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799634u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799638:
    // 0x799638: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79963c:
    // 0x79963c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79963cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799640:
    // 0x799640: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_799644:
    // 0x799644: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799648:
    // 0x799648: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79964c:
    // 0x79964c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799650:
    if (ctx->pc == 0x799650u) {
        ctx->pc = 0x799650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79964Cu;
        // 0x799650: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799654u;
        goto label_799654;
    }
    ctx->pc = 0x79964Cu;
    {
        const bool branch_taken_0x79964c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79964Cu;
        // 0x799650: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79964c) {
            ctx->pc = 0x799660u;
            goto label_799660;
        }
    }
    ctx->pc = 0x799654u;
label_799654:
    // 0x799654: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799658:
    // 0x799658: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79965c:
    if (ctx->pc == 0x79965Cu) {
        ctx->pc = 0x79965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799658u;
        // 0x79965c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799660u;
        goto label_799660;
    }
    ctx->pc = 0x799658u;
    {
        const bool branch_taken_0x799658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799658) {
            ctx->pc = 0x79965Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799658u;
            // 0x79965c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799638;
        }
    }
    ctx->pc = 0x799660u;
label_799660:
    // 0x799660: 0xc053f66  jal         func_14FD98
label_799664:
    if (ctx->pc == 0x799664u) {
        ctx->pc = 0x799664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799660u;
        // 0x799664: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799668u;
        goto label_799668;
    }
    ctx->pc = 0x799660u;
    SET_GPR_U32(ctx, 31, 0x799668u);
    ctx->pc = 0x799664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799660u;
    // 0x799664: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799660u, 0x799668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799668u;
label_799668:
    // 0x799668: 0x8e43aca0  lw          $v1, -0x5360($s2)
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945952)));
label_79966c:
    // 0x79966c: 0x26684c58  addiu       $t0, $s3, 0x4C58
    ctx->pc = 0x79966cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19544));
label_799670:
    // 0x799670: 0x27c4ac50  addiu       $a0, $fp, -0x53B0
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294945872));
label_799674:
    // 0x799674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799678:
    // 0x799678: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x799678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_79967c:
    // 0x79967c: 0x83c2ac50  lb          $v0, -0x53B0($fp)
    ctx->pc = 0x79967cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294945872)));
label_799680:
    // 0x799680: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_799684:
    if (ctx->pc == 0x799684u) {
        ctx->pc = 0x799684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799680u;
        // 0x799684: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799688u;
        goto label_799688;
    }
    ctx->pc = 0x799680u;
    {
        const bool branch_taken_0x799680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799680u;
        // 0x799684: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799680) {
            ctx->pc = 0x7996B8u;
            goto label_7996b8;
        }
    }
    ctx->pc = 0x799688u;
label_799688:
    // 0x799688: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x799688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_79968c:
    // 0x79968c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79968cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799690:
    // 0x799690: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799694:
    // 0x799694: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799698:
    // 0x799698: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79969c:
    // 0x79969c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79969cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_7996a0:
    // 0x7996a0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7996a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_7996a4:
    // 0x7996a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7996a8:
    if (ctx->pc == 0x7996A8u) {
        ctx->pc = 0x7996A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A4u;
        // 0x7996a8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996ACu;
        goto label_7996ac;
    }
    ctx->pc = 0x7996A4u;
    {
        const bool branch_taken_0x7996a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A4u;
        // 0x7996a8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996a4) {
            ctx->pc = 0x7996B8u;
            goto label_7996b8;
        }
    }
    ctx->pc = 0x7996ACu;
label_7996ac:
    // 0x7996ac: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7996acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7996b0:
    // 0x7996b0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_7996b4:
    if (ctx->pc == 0x7996B4u) {
        ctx->pc = 0x7996B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B0u;
        // 0x7996b4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996B8u;
        goto label_7996b8;
    }
    ctx->pc = 0x7996B0u;
    {
        const bool branch_taken_0x7996b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7996b0) {
            ctx->pc = 0x7996B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7996B0u;
            // 0x7996b4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799690;
        }
    }
    ctx->pc = 0x7996B8u;
label_7996b8:
    // 0x7996b8: 0xc053f66  jal         func_14FD98
label_7996bc:
    if (ctx->pc == 0x7996BCu) {
        ctx->pc = 0x7996BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B8u;
        // 0x7996bc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996C0u;
        goto label_7996c0;
    }
    ctx->pc = 0x7996B8u;
    SET_GPR_U32(ctx, 31, 0x7996C0u);
    ctx->pc = 0x7996BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996B8u;
    // 0x7996bc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7996B8u, 0x7996C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C0u;
label_7996c0:
    // 0x7996c0: 0x8e44aca0  lw          $a0, -0x5360($s2)
    ctx->pc = 0x7996c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945952)));
label_7996c4:
    // 0x7996c4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x7996c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_7996c8:
    // 0x7996c8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x7996c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_7996cc:
    // 0x7996cc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7996ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_7996d0:
    // 0x7996d0: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_7996d4:
    // 0x7996d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7996d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7996d8:
    // 0x7996d8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x7996d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_7996dc:
    // 0x7996dc: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_7996e0:
    if (ctx->pc == 0x7996E0u) {
        ctx->pc = 0x7996E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996DCu;
        // 0x7996e0: 0x8e42aca0  lw          $v0, -0x5360($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996E4u;
        goto label_7996e4;
    }
    ctx->pc = 0x7996DCu;
    {
        const bool branch_taken_0x7996dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996DCu;
        // 0x7996e0: 0x8e42aca0  lw          $v0, -0x5360($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996dc) {
            ctx->pc = 0x7997ACu;
            goto label_7997ac;
        }
    }
    ctx->pc = 0x7996E4u;
label_7996e4:
    // 0x7996e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x7996e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7996e8:
    // 0x7996e8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_7996ec:
    if (ctx->pc == 0x7996ECu) {
        ctx->pc = 0x7996ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E8u;
        // 0x7996ec: 0x8e42aca0  lw          $v0, -0x5360($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996F0u;
        goto label_7996f0;
    }
    ctx->pc = 0x7996E8u;
    {
        const bool branch_taken_0x7996e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7996e8) {
            ctx->pc = 0x7996ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7996E8u;
            // 0x7996ec: 0x8e42aca0  lw          $v0, -0x5360($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945952)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79970Cu;
            goto label_79970c;
        }
    }
    ctx->pc = 0x7996F0u;
label_7996f0:
    // 0x7996f0: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_7996f4:
    // 0x7996f4: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x7996f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
label_7996f8:
    // 0x7996f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x7996f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_7996fc:
    // 0x7996fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7996fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799700:
    // 0x799700: 0x0  nop
    ctx->pc = 0x799700u;
    // NOP
label_799704:
    // 0x799704: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x799704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_799708:
    // 0x799708: 0x8e42aca0  lw          $v0, -0x5360($s2)
    ctx->pc = 0x799708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945952)));
label_79970c:
    // 0x79970c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x79970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799710:
    // 0x799710: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_799714:
    if (ctx->pc == 0x799714u) {
        ctx->pc = 0x799714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799710u;
        // 0x799714: 0x8e42aca0  lw          $v0, -0x5360($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799718u;
        goto label_799718;
    }
    ctx->pc = 0x799710u;
    {
        const bool branch_taken_0x799710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799710) {
            ctx->pc = 0x799714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799710u;
            // 0x799714: 0x8e42aca0  lw          $v0, -0x5360($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945952)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799734u;
            goto label_799734;
        }
    }
    ctx->pc = 0x799718u;
label_799718:
    // 0x799718: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x799718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_79971c:
    // 0x79971c: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x79971cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
label_799720:
    // 0x799720: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_799724:
    // 0x799724: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799728:
    // 0x799728: 0x0  nop
    ctx->pc = 0x799728u;
    // NOP
label_79972c:
    // 0x79972c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79972cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_799730:
    // 0x799730: 0x8e42aca0  lw          $v0, -0x5360($s2)
    ctx->pc = 0x799730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945952)));
label_799734:
    // 0x799734: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x799734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_799738:
    // 0x799738: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_79973c:
    if (ctx->pc == 0x79973Cu) {
        ctx->pc = 0x79973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799738u;
        // 0x79973c: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799740u;
        goto label_799740;
    }
    ctx->pc = 0x799738u;
    {
        const bool branch_taken_0x799738 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799738u;
        // 0x79973c: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799738) {
            ctx->pc = 0x799764u;
            goto label_799764;
        }
    }
    ctx->pc = 0x799740u;
label_799740:
    // 0x799740: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x799740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_799744:
    // 0x799744: 0x24a5ac80  addiu       $a1, $a1, -0x5380
    ctx->pc = 0x799744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945920));
label_799748:
    // 0x799748: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x799748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_79974c:
    // 0x79974c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x79974cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_799750:
    // 0x799750: 0x60f809  jalr        $v1
label_799754:
    if (ctx->pc == 0x799754u) {
        ctx->pc = 0x799754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799750u;
        // 0x799754: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799758u;
        goto label_799758;
    }
    ctx->pc = 0x799750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799758u);
        ctx->pc = 0x799754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799750u;
        // 0x799754: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799750u, 0x799758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799758u;
label_799758:
    // 0x799758: 0x8e42aca0  lw          $v0, -0x5360($s2)
    ctx->pc = 0x799758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945952)));
label_79975c:
    // 0x79975c: 0xc06c2c2  jal         func_1B0B08
label_799760:
    if (ctx->pc == 0x799760u) {
        ctx->pc = 0x799760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79975Cu;
        // 0x799760: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799764u;
        goto label_799764;
    }
    ctx->pc = 0x79975Cu;
    SET_GPR_U32(ctx, 31, 0x799764u);
    ctx->pc = 0x799760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79975Cu;
    // 0x799760: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0B08u, 0x79975Cu, 0x799764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799764u;
label_799764:
    // 0x799764: 0x8e42aca0  lw          $v0, -0x5360($s2)
    ctx->pc = 0x799764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945952)));
label_799768:
    // 0x799768: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x799768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_79976c:
    // 0x79976c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_799770:
    if (ctx->pc == 0x799770u) {
        ctx->pc = 0x799770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79976Cu;
        // 0x799770: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799774u;
        goto label_799774;
    }
    ctx->pc = 0x79976Cu;
    {
        const bool branch_taken_0x79976c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x799770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79976Cu;
        // 0x799770: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79976c) {
            ctx->pc = 0x799798u;
            goto label_799798;
        }
    }
    ctx->pc = 0x799774u;
label_799774:
    // 0x799774: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x799774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_799778:
    // 0x799778: 0x24a5ac90  addiu       $a1, $a1, -0x5370
    ctx->pc = 0x799778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945936));
label_79977c:
    // 0x79977c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_799780:
    // 0x799780: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_799784:
    // 0x799784: 0x60f809  jalr        $v1
label_799788:
    if (ctx->pc == 0x799788u) {
        ctx->pc = 0x799788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799784u;
        // 0x799788: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79978Cu;
        goto label_79978c;
    }
    ctx->pc = 0x799784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79978Cu);
        ctx->pc = 0x799788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799784u;
        // 0x799788: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799784u, 0x79978Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79978Cu;
label_79978c:
    // 0x79978c: 0x8e42aca0  lw          $v0, -0x5360($s2)
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945952)));
label_799790:
    // 0x799790: 0xc06c2c2  jal         func_1B0B08
label_799794:
    if (ctx->pc == 0x799794u) {
        ctx->pc = 0x799794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799790u;
        // 0x799794: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799798u;
        goto label_799798;
    }
    ctx->pc = 0x799790u;
    SET_GPR_U32(ctx, 31, 0x799798u);
    ctx->pc = 0x799794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799790u;
    // 0x799794: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0B08u, 0x799790u, 0x799798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799798u;
label_799798:
    // 0x799798: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x799798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_79979c:
    // 0x79979c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79979cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7997a0:
    // 0x7997a0: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x7997a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
label_7997a4:
    // 0x7997a4: 0xc04cccc  jal         func_133330
label_7997a8:
    if (ctx->pc == 0x7997A8u) {
        ctx->pc = 0x7997A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A4u;
        // 0x7997a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997ACu;
        goto label_7997ac;
    }
    ctx->pc = 0x7997A4u;
    SET_GPR_U32(ctx, 31, 0x7997ACu);
    ctx->pc = 0x7997A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997A4u;
    // 0x7997a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x7997A4u, 0x7997ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997ACu;
label_7997ac:
    // 0x7997ac: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x7997acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_7997b0:
    // 0x7997b0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7997b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_7997b4:
    // 0x7997b4: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x7997b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
label_7997b8:
    // 0x7997b8: 0x24459e40  addiu       $a1, $v0, -0x61C0
    ctx->pc = 0x7997b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942272));
label_7997bc:
    // 0x7997bc: 0xc0b0e24  jal         func_2C3890
label_7997c0:
    if (ctx->pc == 0x7997C0u) {
        ctx->pc = 0x7997C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997BCu;
        // 0x7997c0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997C4u;
        goto label_7997c4;
    }
    ctx->pc = 0x7997BCu;
    SET_GPR_U32(ctx, 31, 0x7997C4u);
    ctx->pc = 0x7997C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997BCu;
    // 0x7997c0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7997BCu, 0x7997C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997C4u;
label_7997c4:
    // 0x7997c4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x7997c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_7997c8:
    // 0x7997c8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x7997c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_7997cc:
    // 0x7997cc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x7997ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_7997d0:
    // 0x7997d0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x7997d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7997d4:
    // 0x7997d4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x7997d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7997d8:
    // 0x7997d8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x7997d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7997dc:
    // 0x7997dc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x7997dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7997e0:
    // 0x7997e0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x7997e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7997e4:
    // 0x7997e4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x7997e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7997e8:
    // 0x7997e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7997e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7997ec:
    // 0x7997ec: 0x3e00008  jr          $ra
label_7997f0:
    if (ctx->pc == 0x7997F0u) {
        ctx->pc = 0x7997F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997ECu;
        // 0x7997f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997F4u;
        goto label_7997f4;
    }
    ctx->pc = 0x7997ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7997F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997ECu;
        // 0x7997f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7997F4u;
label_7997f4:
    // 0x7997f4: 0x0  nop
    ctx->pc = 0x7997f4u;
    // NOP
    ctx->pc = 0x7997f8u;
}
} // namespace gh_r206
