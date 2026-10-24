#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r201_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r201
{
// Function: R201Init__Fv
// Address: 0x799220 - 0x7997d0
void R201Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R201Init__Fv_0x799220");
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
        default: break;
    }

    ctx->pc = 0x799220u;

label_799220:
    // 0x799220: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_799224:
    // 0x799224: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_799228:
    // 0x799228: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_79922c:
    // 0x79922c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_799230:
    // 0x799230: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799230u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_799234:
    // 0x799234: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x799234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_799238:
    // 0x799238: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x799238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_79923c:
    // 0x79923c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x79923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_799240:
    // 0x799240: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x799240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_799244:
    // 0x799244: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x799244u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
label_799248:
    // 0x799248: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x799248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_79924c:
    // 0x79924c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x79924cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799250:
    // 0x799250: 0xc1e6460  jal         func_799180
label_799254:
    if (ctx->pc == 0x799254u) {
        ctx->pc = 0x799254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799250u;
        // 0x799254: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x799258u;
        goto label_799258;
    }
    ctx->pc = 0x799250u;
    SET_GPR_U32(ctx, 31, 0x799258u);
    ctx->pc = 0x799254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799250u;
    // 0x799254: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799250u, 0x799258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799258u;
label_799258:
    // 0x799258: 0x8e04d6e8  lw          $a0, -0x2918($s0)
    ctx->pc = 0x799258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956776)));
label_79925c:
    // 0x79925c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_799260:
    // 0x799260: 0xac62bd80  sw          $v0, -0x4280($v1)
    ctx->pc = 0x799260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950272), GPR_U32(ctx, 2));
label_799264:
    // 0x799264: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x799264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799268:
    // 0x799268: 0x24841e90  addiu       $a0, $a0, 0x1E90
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7824));
label_79926c:
    // 0x79926c: 0xc04fccc  jal         func_13F330
label_799270:
    if (ctx->pc == 0x799270u) {
        ctx->pc = 0x799270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79926Cu;
        // 0x799270: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799274u;
        goto label_799274;
    }
    ctx->pc = 0x79926Cu;
    SET_GPR_U32(ctx, 31, 0x799274u);
    ctx->pc = 0x799270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79926Cu;
    // 0x799270: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F330u, 0x79926Cu, 0x799274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799274u;
label_799274:
    // 0x799274: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799278:
    // 0x799278: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
label_79927c:
    // 0x79927c: 0x8044bca0  lb          $a0, -0x4360($v0)
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950048)));
label_799280:
    // 0x799280: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799284:
    // 0x799284: 0x2446bca0  addiu       $a2, $v0, -0x4360
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950048));
label_799288:
    // 0x799288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79928c:
    // 0x79928c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x79928cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799290:
    // 0x799290: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
label_799294:
    // 0x799294: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_799298:
    if (ctx->pc == 0x799298u) {
        ctx->pc = 0x799298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799294u;
        // 0x799298: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79929Cu;
        goto label_79929c;
    }
    ctx->pc = 0x799294u;
    {
        const bool branch_taken_0x799294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799294u;
        // 0x799298: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799294) {
            ctx->pc = 0x7992C8u;
            goto label_7992c8;
        }
    }
    ctx->pc = 0x79929Cu;
label_79929c:
    // 0x79929c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7992a0:
    // 0x7992a0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_7992a4:
    // 0x7992a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_7992a8:
    // 0x7992a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_7992ac:
    // 0x7992ac: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7992acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_7992b0:
    // 0x7992b0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7992b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_7992b4:
    // 0x7992b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7992b8:
    if (ctx->pc == 0x7992B8u) {
        ctx->pc = 0x7992B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992B4u;
        // 0x7992b8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992BCu;
        goto label_7992bc;
    }
    ctx->pc = 0x7992B4u;
    {
        const bool branch_taken_0x7992b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992B4u;
        // 0x7992b8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992b4) {
            ctx->pc = 0x7992C8u;
            goto label_7992c8;
        }
    }
    ctx->pc = 0x7992BCu;
label_7992bc:
    // 0x7992bc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7992c0:
    // 0x7992c0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_7992c4:
    if (ctx->pc == 0x7992C4u) {
        ctx->pc = 0x7992C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C0u;
        // 0x7992c4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992C8u;
        goto label_7992c8;
    }
    ctx->pc = 0x7992C0u;
    {
        const bool branch_taken_0x7992c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7992c0) {
            ctx->pc = 0x7992C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7992C0u;
            // 0x7992c4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7992A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7992a0;
        }
    }
    ctx->pc = 0x7992C8u;
label_7992c8:
    // 0x7992c8: 0xc053f66  jal         func_14FD98
label_7992cc:
    if (ctx->pc == 0x7992CCu) {
        ctx->pc = 0x7992CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C8u;
        // 0x7992cc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992D0u;
        goto label_7992d0;
    }
    ctx->pc = 0x7992C8u;
    SET_GPR_U32(ctx, 31, 0x7992D0u);
    ctx->pc = 0x7992CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992C8u;
    // 0x7992cc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7992C8u, 0x7992D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992D0u;
label_7992d0:
    // 0x7992d0: 0x8e43bd80  lw          $v1, -0x4280($s2)
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_7992d4:
    // 0x7992d4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x7992d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_7992d8:
    // 0x7992d8: 0x8e42bd80  lw          $v0, -0x4280($s2)
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_7992dc:
    // 0x7992dc: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_7992e0:
    // 0x7992e0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_7992e4:
    if (ctx->pc == 0x7992E4u) {
        ctx->pc = 0x7992E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992E0u;
        // 0x7992e4: 0x8202bca8  lb          $v0, -0x4358($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294950056)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992E8u;
        goto label_7992e8;
    }
    ctx->pc = 0x7992E0u;
    {
        const bool branch_taken_0x7992e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992E0u;
        // 0x7992e4: 0x8202bca8  lb          $v0, -0x4358($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294950056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992e0) {
            ctx->pc = 0x799308u;
            goto label_799308;
        }
    }
    ctx->pc = 0x7992E8u;
label_7992e8:
    // 0x7992e8: 0xc06b646  jal         func_1AD918
label_7992ec:
    if (ctx->pc == 0x7992ECu) {
        ctx->pc = 0x7992F0u;
        goto label_7992f0;
    }
    ctx->pc = 0x7992E8u;
    SET_GPR_U32(ctx, 31, 0x7992F0u);
    ctx->pc = 0x1AD918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD918u, 0x7992E8u, 0x7992F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992F0u;
label_7992f0:
    // 0x7992f0: 0x8e42bd80  lw          $v0, -0x4280($s2)
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_7992f4:
    // 0x7992f4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_7992f8:
    // 0x7992f8: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_7992fc:
    // 0x7992fc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x7992fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_799300:
    // 0x799300: 0xac830250  sw          $v1, 0x250($a0)
    ctx->pc = 0x799300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
label_799304:
    // 0x799304: 0x8202bca8  lb          $v0, -0x4358($s0)
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294950056)));
label_799308:
    // 0x799308: 0x26284c58  addiu       $t0, $s1, 0x4C58
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
label_79930c:
    // 0x79930c: 0x2603bca8  addiu       $v1, $s0, -0x4358
    ctx->pc = 0x79930cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950056));
label_799310:
    // 0x799310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799314:
    // 0x799314: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799318:
    if (ctx->pc == 0x799318u) {
        ctx->pc = 0x799318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799314u;
        // 0x799318: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79931Cu;
        goto label_79931c;
    }
    ctx->pc = 0x799314u;
    {
        const bool branch_taken_0x799314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799314u;
        // 0x799318: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799314) {
            ctx->pc = 0x799350u;
            goto label_799350;
        }
    }
    ctx->pc = 0x79931Cu;
label_79931c:
    // 0x79931c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79931cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799320:
    // 0x799320: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799324:
    // 0x799324: 0x0  nop
    ctx->pc = 0x799324u;
    // NOP
label_799328:
    // 0x799328: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79932c:
    // 0x79932c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799330:
    // 0x799330: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_799334:
    // 0x799334: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799338:
    // 0x799338: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799338u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79933c:
    // 0x79933c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799340:
    if (ctx->pc == 0x799340u) {
        ctx->pc = 0x799340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79933Cu;
        // 0x799340: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799344u;
        goto label_799344;
    }
    ctx->pc = 0x79933Cu;
    {
        const bool branch_taken_0x79933c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79933Cu;
        // 0x799340: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79933c) {
            ctx->pc = 0x799350u;
            goto label_799350;
        }
    }
    ctx->pc = 0x799344u;
label_799344:
    // 0x799344: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799344u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799348:
    // 0x799348: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79934c:
    if (ctx->pc == 0x79934Cu) {
        ctx->pc = 0x79934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799348u;
        // 0x79934c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799350u;
        goto label_799350;
    }
    ctx->pc = 0x799348u;
    {
        const bool branch_taken_0x799348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799348) {
            ctx->pc = 0x79934Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799348u;
            // 0x79934c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799328;
        }
    }
    ctx->pc = 0x799350u;
label_799350:
    // 0x799350: 0xc053f66  jal         func_14FD98
label_799354:
    if (ctx->pc == 0x799354u) {
        ctx->pc = 0x799354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799350u;
        // 0x799354: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799358u;
        goto label_799358;
    }
    ctx->pc = 0x799350u;
    SET_GPR_U32(ctx, 31, 0x799358u);
    ctx->pc = 0x799354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799350u;
    // 0x799354: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799350u, 0x799358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799358u;
label_799358:
    // 0x799358: 0x8e43bd80  lw          $v1, -0x4280($s2)
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_79935c:
    // 0x79935c: 0x26284c58  addiu       $t0, $s1, 0x4C58
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
label_799360:
    // 0x799360: 0x2684bcb0  addiu       $a0, $s4, -0x4350
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950064));
label_799364:
    // 0x799364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799368:
    // 0x799368: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x799368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_79936c:
    // 0x79936c: 0x8282bcb0  lb          $v0, -0x4350($s4)
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294950064)));
label_799370:
    // 0x799370: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_799374:
    if (ctx->pc == 0x799374u) {
        ctx->pc = 0x799374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799370u;
        // 0x799374: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799378u;
        goto label_799378;
    }
    ctx->pc = 0x799370u;
    {
        const bool branch_taken_0x799370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799370u;
        // 0x799374: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799370) {
            ctx->pc = 0x7993A8u;
            goto label_7993a8;
        }
    }
    ctx->pc = 0x799378u;
label_799378:
    // 0x799378: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x799378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_79937c:
    // 0x79937c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799380:
    // 0x799380: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799384:
    // 0x799384: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799388:
    // 0x799388: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79938c:
    // 0x79938c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79938cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799390:
    // 0x799390: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799390u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_799394:
    // 0x799394: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799398:
    if (ctx->pc == 0x799398u) {
        ctx->pc = 0x799398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799394u;
        // 0x799398: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79939Cu;
        goto label_79939c;
    }
    ctx->pc = 0x799394u;
    {
        const bool branch_taken_0x799394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799394u;
        // 0x799398: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799394) {
            ctx->pc = 0x7993A8u;
            goto label_7993a8;
        }
    }
    ctx->pc = 0x79939Cu;
label_79939c:
    // 0x79939c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7993a0:
    // 0x7993a0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_7993a4:
    if (ctx->pc == 0x7993A4u) {
        ctx->pc = 0x7993A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A0u;
        // 0x7993a4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993A8u;
        goto label_7993a8;
    }
    ctx->pc = 0x7993A0u;
    {
        const bool branch_taken_0x7993a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7993a0) {
            ctx->pc = 0x7993A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7993A0u;
            // 0x7993a4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799380;
        }
    }
    ctx->pc = 0x7993A8u;
label_7993a8:
    // 0x7993a8: 0xc053f66  jal         func_14FD98
label_7993ac:
    if (ctx->pc == 0x7993ACu) {
        ctx->pc = 0x7993ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A8u;
        // 0x7993ac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993B0u;
        goto label_7993b0;
    }
    ctx->pc = 0x7993A8u;
    SET_GPR_U32(ctx, 31, 0x7993B0u);
    ctx->pc = 0x7993ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A8u;
    // 0x7993ac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7993A8u, 0x7993B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B0u;
label_7993b0:
    // 0x7993b0: 0x8e43bd80  lw          $v1, -0x4280($s2)
    ctx->pc = 0x7993b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_7993b4:
    // 0x7993b4: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x7993b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_7993b8:
    // 0x7993b8: 0x8e42bd80  lw          $v0, -0x4280($s2)
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_7993bc:
    // 0x7993bc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_7993c0:
    // 0x7993c0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_7993c4:
    if (ctx->pc == 0x7993C4u) {
        ctx->pc = 0x7993C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C0u;
        // 0x7993c4: 0x8c430018  lw          $v1, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993C8u;
        goto label_7993c8;
    }
    ctx->pc = 0x7993C0u;
    {
        const bool branch_taken_0x7993c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7993c0) {
            ctx->pc = 0x7993C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7993C0u;
            // 0x7993c4: 0x8c430018  lw          $v1, 0x18($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7993DCu;
            goto label_7993dc;
        }
    }
    ctx->pc = 0x7993C8u;
label_7993c8:
    // 0x7993c8: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x7993c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_7993cc:
    // 0x7993cc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x7993ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_7993d0:
    // 0x7993d0: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x7993d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_7993d4:
    // 0x7993d4: 0x8e42bd80  lw          $v0, -0x4280($s2)
    ctx->pc = 0x7993d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_7993d8:
    // 0x7993d8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_7993dc:
    // 0x7993dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7993e0:
    if (ctx->pc == 0x7993E0u) {
        ctx->pc = 0x7993E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993DCu;
        // 0x7993e0: 0x3c110058  lui         $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993E4u;
        goto label_7993e4;
    }
    ctx->pc = 0x7993DCu;
    {
        const bool branch_taken_0x7993dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993DCu;
        // 0x7993e0: 0x3c110058  lui         $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993dc) {
            ctx->pc = 0x7993F0u;
            goto label_7993f0;
        }
    }
    ctx->pc = 0x7993E4u;
label_7993e4:
    // 0x7993e4: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_7993e8:
    // 0x7993e8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x7993e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_7993ec:
    // 0x7993ec: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x7993ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_7993f0:
    // 0x7993f0: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
label_7993f4:
    // 0x7993f4: 0x26310d20  addiu       $s1, $s1, 0xD20
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3360));
label_7993f8:
    // 0x7993f8: 0x26104220  addiu       $s0, $s0, 0x4220
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16928));
label_7993fc:
    // 0x7993fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7993fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799400:
    // 0x799400: 0x24050359  addiu       $a1, $zero, 0x359
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 857));
label_799404:
    // 0x799404: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x799404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799408:
    // 0x799408: 0xc07fa28  jal         func_1FE8A0
label_79940c:
    if (ctx->pc == 0x79940Cu) {
        ctx->pc = 0x79940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799408u;
        // 0x79940c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799410u;
        goto label_799410;
    }
    ctx->pc = 0x799408u;
    SET_GPR_U32(ctx, 31, 0x799410u);
    ctx->pc = 0x79940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799408u;
    // 0x79940c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x799408u, 0x799410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799410u;
label_799410:
    // 0x799410: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_799414:
    // 0x799414: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_799418:
    // 0x799418: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x799418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79941c:
    // 0x79941c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799420:
    // 0x799420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799424:
    // 0x799424: 0xc07fa28  jal         func_1FE8A0
label_799428:
    if (ctx->pc == 0x799428u) {
        ctx->pc = 0x799428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799424u;
        // 0x799428: 0x2405035c  addiu       $a1, $zero, 0x35C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79942Cu;
        goto label_79942c;
    }
    ctx->pc = 0x799424u;
    SET_GPR_U32(ctx, 31, 0x79942Cu);
    ctx->pc = 0x799428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799424u;
    // 0x799428: 0x2405035c  addiu       $a1, $zero, 0x35C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x799424u, 0x79942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79942Cu;
label_79942c:
    // 0x79942c: 0x8e43bd80  lw          $v1, -0x4280($s2)
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_799430:
    // 0x799430: 0x2404035c  addiu       $a0, $zero, 0x35C
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
label_799434:
    // 0x799434: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x799434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_799438:
    // 0x799438: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x799438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_79943c:
    // 0x79943c: 0x8e42bd80  lw          $v0, -0x4280($s2)
    ctx->pc = 0x79943cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_799440:
    // 0x799440: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x799440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_799444:
    // 0x799444: 0x8e43bd80  lw          $v1, -0x4280($s2)
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_799448:
    // 0x799448: 0xc0c3ea6  jal         func_30FA98
label_79944c:
    if (ctx->pc == 0x79944Cu) {
        ctx->pc = 0x79944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799448u;
        // 0x79944c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799450u;
        goto label_799450;
    }
    ctx->pc = 0x799448u;
    SET_GPR_U32(ctx, 31, 0x799450u);
    ctx->pc = 0x79944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799448u;
    // 0x79944c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x799448u, 0x799450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799450u;
label_799450:
    // 0x799450: 0x8e43bd80  lw          $v1, -0x4280($s2)
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_799454:
    // 0x799454: 0x24040359  addiu       $a0, $zero, 0x359
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 857));
label_799458:
    // 0x799458: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x799458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_79945c:
    // 0x79945c: 0xc0c3ea6  jal         func_30FA98
label_799460:
    if (ctx->pc == 0x799460u) {
        ctx->pc = 0x799460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79945Cu;
        // 0x799460: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799464u;
        goto label_799464;
    }
    ctx->pc = 0x79945Cu;
    SET_GPR_U32(ctx, 31, 0x799464u);
    ctx->pc = 0x799460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79945Cu;
    // 0x799460: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x79945Cu, 0x799464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799464u;
label_799464:
    // 0x799464: 0x8e43bd80  lw          $v1, -0x4280($s2)
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_799468:
    // 0x799468: 0x24040359  addiu       $a0, $zero, 0x359
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 857));
label_79946c:
    // 0x79946c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x79946cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_799470:
    // 0x799470: 0xc0c3ea6  jal         func_30FA98
label_799474:
    if (ctx->pc == 0x799474u) {
        ctx->pc = 0x799474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799470u;
        // 0x799474: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799478u;
        goto label_799478;
    }
    ctx->pc = 0x799470u;
    SET_GPR_U32(ctx, 31, 0x799478u);
    ctx->pc = 0x799474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799470u;
    // 0x799474: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x799470u, 0x799478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799478u;
label_799478:
    // 0x799478: 0x8e43bd80  lw          $v1, -0x4280($s2)
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_79947c:
    // 0x79947c: 0x3c013d13  lui         $at, 0x3D13
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15635 << 16));
label_799480:
    // 0x799480: 0x3421dd98  ori         $at, $at, 0xDD98
    ctx->pc = 0x799480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56728);
label_799484:
    // 0x799484: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799488:
    // 0x799488: 0x3c014009  lui         $at, 0x4009
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16393 << 16));
label_79948c:
    // 0x79948c: 0x34217f63  ori         $at, $at, 0x7F63
    ctx->pc = 0x79948cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32611);
label_799490:
    // 0x799490: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_799494:
    // 0x799494: 0x3c014203  lui         $at, 0x4203
    ctx->pc = 0x799494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16899 << 16));
label_799498:
    // 0x799498: 0x342102de  ori         $at, $at, 0x2DE
    ctx->pc = 0x799498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)734);
label_79949c:
    // 0x79949c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79949cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_7994a0:
    // 0x7994a0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x7994a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_7994a4:
    // 0x7994a4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x7994a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_7994a8:
    // 0x7994a8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x7994a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_7994ac:
    // 0x7994ac: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x7994acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_7994b0:
    // 0x7994b0: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x7994b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_7994b4:
    // 0x7994b4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x7994b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_7994b8:
    // 0x7994b8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x7994b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_7994bc:
    // 0x7994bc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x7994bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_7994c0:
    // 0x7994c0: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x7994c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_7994c4:
    // 0x7994c4: 0x8e42bd80  lw          $v0, -0x4280($s2)
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_7994c8:
    // 0x7994c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7994cc:
    // 0x7994cc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_7994d0:
    if (ctx->pc == 0x7994D0u) {
        ctx->pc = 0x7994D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994CCu;
        // 0x7994d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
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
        // 0x7994d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994cc) {
            ctx->pc = 0x799514u;
            goto label_799514;
        }
    }
    ctx->pc = 0x7994D4u;
label_7994d4:
    // 0x7994d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x7994d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_7994d8:
    // 0x7994d8: 0xac6209f0  sw          $v0, 0x9F0($v1)
    ctx->pc = 0x7994d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2544), GPR_U32(ctx, 2));
label_7994dc:
    // 0x7994dc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x7994dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_7994e0:
    // 0x7994e0: 0xac6509ec  sw          $a1, 0x9EC($v1)
    ctx->pc = 0x7994e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2540), GPR_U32(ctx, 5));
label_7994e4:
    // 0x7994e4: 0x8e42bd80  lw          $v0, -0x4280($s2)
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_7994e8:
    // 0x7994e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7994ec:
    // 0x7994ec: 0xac6409f8  sw          $a0, 0x9F8($v1)
    ctx->pc = 0x7994ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2552), GPR_U32(ctx, 4));
label_7994f0:
    // 0x7994f0: 0xac6509f4  sw          $a1, 0x9F4($v1)
    ctx->pc = 0x7994f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2548), GPR_U32(ctx, 5));
label_7994f4:
    // 0x7994f4: 0x8e42bd80  lw          $v0, -0x4280($s2)
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_7994f8:
    // 0x7994f8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7994fc:
    // 0x7994fc: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x7994fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_799500:
    // 0x799500: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_799504:
    // 0x799504: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_799508:
    // 0x799508: 0x40f809  jalr        $v0
label_79950c:
    if (ctx->pc == 0x79950Cu) {
        ctx->pc = 0x79950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799508u;
        // 0x79950c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799510u;
        goto label_799510;
    }
    ctx->pc = 0x799508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799510u);
        ctx->pc = 0x79950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799508u;
        // 0x79950c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799508u, 0x799510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799510u;
label_799510:
    // 0x799510: 0x8e42bd80  lw          $v0, -0x4280($s2)
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_799514:
    // 0x799514: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x799514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_799518:
    // 0x799518: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_79951c:
    if (ctx->pc == 0x79951Cu) {
        ctx->pc = 0x79951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799518u;
        // 0x79951c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799520u;
        goto label_799520;
    }
    ctx->pc = 0x799518u;
    {
        const bool branch_taken_0x799518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799518u;
        // 0x79951c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799518) {
            ctx->pc = 0x79955Cu;
            goto label_79955c;
        }
    }
    ctx->pc = 0x799520u;
label_799520:
    // 0x799520: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x799520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799524:
    // 0x799524: 0xac6209f0  sw          $v0, 0x9F0($v1)
    ctx->pc = 0x799524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2544), GPR_U32(ctx, 2));
label_799528:
    // 0x799528: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_79952c:
    // 0x79952c: 0xac6509ec  sw          $a1, 0x9EC($v1)
    ctx->pc = 0x79952cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2540), GPR_U32(ctx, 5));
label_799530:
    // 0x799530: 0x8e42bd80  lw          $v0, -0x4280($s2)
    ctx->pc = 0x799530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_799534:
    // 0x799534: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x799534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_799538:
    // 0x799538: 0xac6409f8  sw          $a0, 0x9F8($v1)
    ctx->pc = 0x799538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2552), GPR_U32(ctx, 4));
label_79953c:
    // 0x79953c: 0xac6509f4  sw          $a1, 0x9F4($v1)
    ctx->pc = 0x79953cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2548), GPR_U32(ctx, 5));
label_799540:
    // 0x799540: 0x8e42bd80  lw          $v0, -0x4280($s2)
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_799544:
    // 0x799544: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_799548:
    // 0x799548: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_79954c:
    // 0x79954c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_799550:
    // 0x799550: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x799550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_799554:
    // 0x799554: 0x40f809  jalr        $v0
label_799558:
    if (ctx->pc == 0x799558u) {
        ctx->pc = 0x799558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799554u;
        // 0x799558: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79955Cu;
        goto label_79955c;
    }
    ctx->pc = 0x799554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79955Cu);
        ctx->pc = 0x799558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799554u;
        // 0x799558: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799554u, 0x79955Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79955Cu;
label_79955c:
    // 0x79955c: 0x8e42bd80  lw          $v0, -0x4280($s2)
    ctx->pc = 0x79955cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_799560:
    // 0x799560: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_799564:
    // 0x799564: 0x10a00046  beqz        $a1, . + 4 + (0x46 << 2)
label_799568:
    if (ctx->pc == 0x799568u) {
        ctx->pc = 0x799568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799564u;
        // 0x799568: 0x8ea7d6e8  lw          $a3, -0x2918($s5) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79956Cu;
        goto label_79956c;
    }
    ctx->pc = 0x799564u;
    {
        const bool branch_taken_0x799564 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x799568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799564u;
        // 0x799568: 0x8ea7d6e8  lw          $a3, -0x2918($s5) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799564) {
            ctx->pc = 0x799680u;
            goto label_799680;
        }
    }
    ctx->pc = 0x79956Cu;
label_79956c:
    // 0x79956c: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_799570:
    // 0x799570: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x799570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_799574:
    // 0x799574: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_799578:
    // 0x799578: 0x40f809  jalr        $v0
label_79957c:
    if (ctx->pc == 0x79957Cu) {
        ctx->pc = 0x79957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799578u;
        // 0x79957c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799580u;
        goto label_799580;
    }
    ctx->pc = 0x799578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799580u);
        ctx->pc = 0x79957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799578u;
        // 0x79957c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799578u, 0x799580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799580u;
label_799580:
    // 0x799580: 0x8e43bd80  lw          $v1, -0x4280($s2)
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_799584:
    // 0x799584: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799588:
    // 0x799588: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_79958c:
    // 0x79958c: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_799590:
    // 0x799590: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_799594:
    // 0x799594: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x799594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_799598:
    // 0x799598: 0x60f809  jalr        $v1
label_79959c:
    if (ctx->pc == 0x79959Cu) {
        ctx->pc = 0x79959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799598u;
        // 0x79959c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995A0u;
        goto label_7995a0;
    }
    ctx->pc = 0x799598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7995A0u);
        ctx->pc = 0x79959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799598u;
        // 0x79959c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799598u, 0x7995A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7995A0u;
label_7995a0:
    // 0x7995a0: 0x8e42bd80  lw          $v0, -0x4280($s2)
    ctx->pc = 0x7995a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_7995a4:
    // 0x7995a4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x7995a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_7995a8:
    // 0x7995a8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x7995a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_7995ac:
    // 0x7995ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x7995acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_7995b0:
    // 0x7995b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7995b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7995b4:
    // 0x7995b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7995b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7995b8:
    // 0x7995b8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_7995bc:
    // 0x7995bc: 0x8c660214  lw          $a2, 0x214($v1)
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_7995c0:
    // 0x7995c0: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x7995c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_7995c4:
    // 0x7995c4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x7995c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_7995c8:
    // 0x7995c8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x7995c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_7995cc:
    // 0x7995cc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x7995ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_7995d0:
    // 0x7995d0: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x7995d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_7995d4:
    // 0x7995d4: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_7995d8:
    // 0x7995d8: 0x40f809  jalr        $v0
label_7995dc:
    if (ctx->pc == 0x7995DCu) {
        ctx->pc = 0x7995DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D8u;
        // 0x7995dc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995E0u;
        goto label_7995e0;
    }
    ctx->pc = 0x7995D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7995E0u);
        ctx->pc = 0x7995DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D8u;
        // 0x7995dc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995D8u, 0x7995E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7995E0u;
label_7995e0:
    // 0x7995e0: 0x8e43bd80  lw          $v1, -0x4280($s2)
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_7995e4:
    // 0x7995e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7995e8:
    // 0x7995e8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_7995ec:
    if (ctx->pc == 0x7995ECu) {
        ctx->pc = 0x7995ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E8u;
        // 0x7995ec: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995F0u;
        goto label_7995f0;
    }
    ctx->pc = 0x7995E8u;
    {
        const bool branch_taken_0x7995e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7995e8) {
            ctx->pc = 0x7995ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7995E8u;
            // 0x7995ec: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799620u;
            goto label_799620;
        }
    }
    ctx->pc = 0x7995F0u;
label_7995f0:
    // 0x7995f0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x7995f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_7995f4:
    // 0x7995f4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x7995f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_7995f8:
    // 0x7995f8: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x7995f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_7995fc:
    // 0x7995fc: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x7995fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_799600:
    // 0x799600: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x799600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_799604:
    // 0x799604: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799608:
    // 0x799608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79960c:
    // 0x79960c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x79960cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_799610:
    // 0x799610: 0xc06b96c  jal         func_1AE5B0
label_799614:
    if (ctx->pc == 0x799614u) {
        ctx->pc = 0x799614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799610u;
        // 0x799614: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799618u;
        goto label_799618;
    }
    ctx->pc = 0x799610u;
    SET_GPR_U32(ctx, 31, 0x799618u);
    ctx->pc = 0x799614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799610u;
    // 0x799614: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE5B0u, 0x799610u, 0x799618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799618u;
label_799618:
    // 0x799618: 0x8e43bd80  lw          $v1, -0x4280($s2)
    ctx->pc = 0x799618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_79961c:
    // 0x79961c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x79961cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_799620:
    // 0x799620: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_799624:
    if (ctx->pc == 0x799624u) {
        ctx->pc = 0x799624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799620u;
        // 0x799624: 0x8e42bd80  lw          $v0, -0x4280($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799628u;
        goto label_799628;
    }
    ctx->pc = 0x799620u;
    {
        const bool branch_taken_0x799620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799620u;
        // 0x799624: 0x8e42bd80  lw          $v0, -0x4280($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799620) {
            ctx->pc = 0x79966Cu;
            goto label_79966c;
        }
    }
    ctx->pc = 0x799628u;
label_799628:
    // 0x799628: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x799628u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_79962c:
    // 0x79962c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79962cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_799630:
    // 0x799630: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_799634:
    // 0x799634: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x799634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_799638:
    // 0x799638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79963c:
    // 0x79963c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x79963cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_799640:
    // 0x799640: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x799640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_799644:
    // 0x799644: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x799644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799648:
    // 0x799648: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x799648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79964c:
    // 0x79964c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x79964cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799650:
    // 0x799650: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x799650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_799654:
    // 0x799654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799658:
    // 0x799658: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x799658u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_79965c:
    // 0x79965c: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x79965cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_799660:
    // 0x799660: 0xc06b96c  jal         func_1AE5B0
label_799664:
    if (ctx->pc == 0x799664u) {
        ctx->pc = 0x799664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799660u;
        // 0x799664: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799668u;
        goto label_799668;
    }
    ctx->pc = 0x799660u;
    SET_GPR_U32(ctx, 31, 0x799668u);
    ctx->pc = 0x799664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799660u;
    // 0x799664: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE5B0u, 0x799660u, 0x799668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799668u;
label_799668:
    // 0x799668: 0x8e42bd80  lw          $v0, -0x4280($s2)
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950272)));
label_79966c:
    // 0x79966c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x79966cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_799670:
    // 0x799670: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_799674:
    // 0x799674: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x799674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_799678:
    // 0x799678: 0xac830250  sw          $v1, 0x250($a0)
    ctx->pc = 0x799678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
label_79967c:
    // 0x79967c: 0x8ea7d6e8  lw          $a3, -0x2918($s5)
    ctx->pc = 0x79967cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956776)));
label_799680:
    // 0x799680: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x799680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_799684:
    // 0x799684: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x799684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_799688:
    // 0x799688: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x799688u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
label_79968c:
    // 0x79968c: 0x8ce21f20  lw          $v0, 0x1F20($a3)
    ctx->pc = 0x79968cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 7968)));
label_799690:
    // 0x799690: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
label_799694:
    // 0x799694: 0x2652ea60  addiu       $s2, $s2, -0x15A0
    ctx->pc = 0x799694u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
label_799698:
    // 0x799698: 0x261098a8  addiu       $s0, $s0, -0x6758
    ctx->pc = 0x799698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940840));
label_79969c:
    // 0x79969c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79969cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_7996a0:
    // 0x7996a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7996a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7996a4:
    // 0x7996a4: 0xace21f20  sw          $v0, 0x1F20($a3)
    ctx->pc = 0x7996a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7968), GPR_U32(ctx, 2));
label_7996a8:
    // 0x7996a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7996a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7996ac:
    // 0x7996ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x7996acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7996b0:
    // 0x7996b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7996b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7996b4:
    // 0x7996b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7996b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7996b8:
    // 0x7996b8: 0xc0b09e4  jal         func_2C2790
label_7996bc:
    if (ctx->pc == 0x7996BCu) {
        ctx->pc = 0x7996BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B8u;
        // 0x7996bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996C0u;
        goto label_7996c0;
    }
    ctx->pc = 0x7996B8u;
    SET_GPR_U32(ctx, 31, 0x7996C0u);
    ctx->pc = 0x7996BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996B8u;
    // 0x7996bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7996B8u, 0x7996C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C0u;
label_7996c0:
    // 0x7996c0: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x7996c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
label_7996c4:
    // 0x7996c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x7996c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7996c8:
    // 0x7996c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7996c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7996cc:
    // 0x7996cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7996ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7996d0:
    // 0x7996d0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7996d4:
    // 0x7996d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x7996d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7996d8:
    // 0x7996d8: 0xc0b09e4  jal         func_2C2790
label_7996dc:
    if (ctx->pc == 0x7996DCu) {
        ctx->pc = 0x7996DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D8u;
        // 0x7996dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996E0u;
        goto label_7996e0;
    }
    ctx->pc = 0x7996D8u;
    SET_GPR_U32(ctx, 31, 0x7996E0u);
    ctx->pc = 0x7996DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D8u;
    // 0x7996dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7996D8u, 0x7996E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996E0u;
label_7996e0:
    // 0x7996e0: 0x26319b08  addiu       $s1, $s1, -0x64F8
    ctx->pc = 0x7996e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941448));
label_7996e4:
    // 0x7996e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7996e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7996e8:
    // 0x7996e8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x7996e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7996ec:
    // 0x7996ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7996ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7996f0:
    // 0x7996f0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7996f4:
    // 0x7996f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7996f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7996f8:
    // 0x7996f8: 0xc0b09e4  jal         func_2C2790
label_7996fc:
    if (ctx->pc == 0x7996FCu) {
        ctx->pc = 0x7996FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F8u;
        // 0x7996fc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799700u;
        goto label_799700;
    }
    ctx->pc = 0x7996F8u;
    SET_GPR_U32(ctx, 31, 0x799700u);
    ctx->pc = 0x7996FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996F8u;
    // 0x7996fc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7996F8u, 0x799700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799700u;
label_799700:
    // 0x799700: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x799700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799704:
    // 0x799704: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799708:
    // 0x799708: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79970c:
    // 0x79970c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79970cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799710:
    // 0x799710: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799714:
    // 0x799714: 0xc0b09e4  jal         func_2C2790
label_799718:
    if (ctx->pc == 0x799718u) {
        ctx->pc = 0x799718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799714u;
        // 0x799718: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79971Cu;
        goto label_79971c;
    }
    ctx->pc = 0x799714u;
    SET_GPR_U32(ctx, 31, 0x79971Cu);
    ctx->pc = 0x799718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799714u;
    // 0x799718: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799714u, 0x79971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79971Cu;
label_79971c:
    // 0x79971c: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79971cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799720:
    // 0x799720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799724:
    // 0x799724: 0x24e7a2c8  addiu       $a3, $a3, -0x5D38
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943432));
label_799728:
    // 0x799728: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x799728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_79972c:
    // 0x79972c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799730:
    // 0x799730: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799730u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799734:
    // 0x799734: 0xc0b09e4  jal         func_2C2790
label_799738:
    if (ctx->pc == 0x799738u) {
        ctx->pc = 0x799738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799734u;
        // 0x799738: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79973Cu;
        goto label_79973c;
    }
    ctx->pc = 0x799734u;
    SET_GPR_U32(ctx, 31, 0x79973Cu);
    ctx->pc = 0x799738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799734u;
    // 0x799738: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799734u, 0x79973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79973Cu;
label_79973c:
    // 0x79973c: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79973cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799740:
    // 0x799740: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799744:
    // 0x799744: 0x24e7b230  addiu       $a3, $a3, -0x4DD0
    ctx->pc = 0x799744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947376));
label_799748:
    // 0x799748: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x799748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_79974c:
    // 0x79974c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79974cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799750:
    // 0x799750: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799754:
    // 0x799754: 0xc0b09e4  jal         func_2C2790
label_799758:
    if (ctx->pc == 0x799758u) {
        ctx->pc = 0x799758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799754u;
        // 0x799758: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79975Cu;
        goto label_79975c;
    }
    ctx->pc = 0x799754u;
    SET_GPR_U32(ctx, 31, 0x79975Cu);
    ctx->pc = 0x799758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799754u;
    // 0x799758: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799754u, 0x79975Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79975Cu;
label_79975c:
    // 0x79975c: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79975cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799760:
    // 0x799760: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799764:
    // 0x799764: 0x24e7b830  addiu       $a3, $a3, -0x47D0
    ctx->pc = 0x799764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948912));
label_799768:
    // 0x799768: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x799768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_79976c:
    // 0x79976c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79976cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799770:
    // 0x799770: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799774:
    // 0x799774: 0xc0b09e4  jal         func_2C2790
label_799778:
    if (ctx->pc == 0x799778u) {
        ctx->pc = 0x799778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799774u;
        // 0x799778: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79977Cu;
        goto label_79977c;
    }
    ctx->pc = 0x799774u;
    SET_GPR_U32(ctx, 31, 0x79977Cu);
    ctx->pc = 0x799778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799774u;
    // 0x799778: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799774u, 0x79977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79977Cu;
label_79977c:
    // 0x79977c: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799780:
    // 0x799780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799784:
    // 0x799784: 0x24e7b890  addiu       $a3, $a3, -0x4770
    ctx->pc = 0x799784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949008));
label_799788:
    // 0x799788: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x799788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79978c:
    // 0x79978c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799790:
    // 0x799790: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799790u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799794:
    // 0x799794: 0xc0b09e4  jal         func_2C2790
label_799798:
    if (ctx->pc == 0x799798u) {
        ctx->pc = 0x799798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799794u;
        // 0x799798: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79979Cu;
        goto label_79979c;
    }
    ctx->pc = 0x799794u;
    SET_GPR_U32(ctx, 31, 0x79979Cu);
    ctx->pc = 0x799798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799794u;
    // 0x799798: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799794u, 0x79979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79979Cu;
label_79979c:
    // 0x79979c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79979cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7997a0:
    // 0x7997a0: 0xc0b0a7e  jal         func_2C29F8
label_7997a4:
    if (ctx->pc == 0x7997A4u) {
        ctx->pc = 0x7997A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A0u;
        // 0x7997a4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997A8u;
        goto label_7997a8;
    }
    ctx->pc = 0x7997A0u;
    SET_GPR_U32(ctx, 31, 0x7997A8u);
    ctx->pc = 0x7997A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997A0u;
    // 0x7997a4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x7997A0u, 0x7997A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997A8u;
label_7997a8:
    // 0x7997a8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x7997a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_7997ac:
    // 0x7997ac: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x7997acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_7997b0:
    // 0x7997b0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x7997b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_7997b4:
    // 0x7997b4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x7997b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_7997b8:
    // 0x7997b8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x7997b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7997bc:
    // 0x7997bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x7997bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7997c0:
    // 0x7997c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7997c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_7997c4:
    // 0x7997c4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x7997c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_7997c8:
    // 0x7997c8: 0x3e00008  jr          $ra
label_7997cc:
    if (ctx->pc == 0x7997CCu) {
        ctx->pc = 0x7997CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997C8u;
        // 0x7997cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997D0u;
        goto label_fallthrough_0x7997c8;
    }
    ctx->pc = 0x7997C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7997CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997C8u;
        // 0x7997cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7997c8:
    ctx->pc = 0x7997D0u;
}
} // namespace gh_r201
