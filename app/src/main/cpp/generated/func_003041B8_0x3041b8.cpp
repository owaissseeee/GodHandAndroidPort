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

// Function: func_003041B8
// Address: 0x3041b8 - 0x304830
void func_003041B8_0x3041b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003041B8_0x3041b8");
#endif

    switch (ctx->pc) {
        case 0x3041b8u: goto label_3041b8;
        case 0x3041bcu: goto label_3041bc;
        case 0x3041c0u: goto label_3041c0;
        case 0x3041c4u: goto label_3041c4;
        case 0x3041c8u: goto label_3041c8;
        case 0x3041ccu: goto label_3041cc;
        case 0x3041d0u: goto label_3041d0;
        case 0x3041d4u: goto label_3041d4;
        case 0x3041d8u: goto label_3041d8;
        case 0x3041dcu: goto label_3041dc;
        case 0x3041e0u: goto label_3041e0;
        case 0x3041e4u: goto label_3041e4;
        case 0x3041e8u: goto label_3041e8;
        case 0x3041ecu: goto label_3041ec;
        case 0x3041f0u: goto label_3041f0;
        case 0x3041f4u: goto label_3041f4;
        case 0x3041f8u: goto label_3041f8;
        case 0x3041fcu: goto label_3041fc;
        case 0x304200u: goto label_304200;
        case 0x304204u: goto label_304204;
        case 0x304208u: goto label_304208;
        case 0x30420cu: goto label_30420c;
        case 0x304210u: goto label_304210;
        case 0x304214u: goto label_304214;
        case 0x304218u: goto label_304218;
        case 0x30421cu: goto label_30421c;
        case 0x304220u: goto label_304220;
        case 0x304224u: goto label_304224;
        case 0x304228u: goto label_304228;
        case 0x30422cu: goto label_30422c;
        case 0x304230u: goto label_304230;
        case 0x304234u: goto label_304234;
        case 0x304238u: goto label_304238;
        case 0x30423cu: goto label_30423c;
        case 0x304240u: goto label_304240;
        case 0x304244u: goto label_304244;
        case 0x304248u: goto label_304248;
        case 0x30424cu: goto label_30424c;
        case 0x304250u: goto label_304250;
        case 0x304254u: goto label_304254;
        case 0x304258u: goto label_304258;
        case 0x30425cu: goto label_30425c;
        case 0x304260u: goto label_304260;
        case 0x304264u: goto label_304264;
        case 0x304268u: goto label_304268;
        case 0x30426cu: goto label_30426c;
        case 0x304270u: goto label_304270;
        case 0x304274u: goto label_304274;
        case 0x304278u: goto label_304278;
        case 0x30427cu: goto label_30427c;
        case 0x304280u: goto label_304280;
        case 0x304284u: goto label_304284;
        case 0x304288u: goto label_304288;
        case 0x30428cu: goto label_30428c;
        case 0x304290u: goto label_304290;
        case 0x304294u: goto label_304294;
        case 0x304298u: goto label_304298;
        case 0x30429cu: goto label_30429c;
        case 0x3042a0u: goto label_3042a0;
        case 0x3042a4u: goto label_3042a4;
        case 0x3042a8u: goto label_3042a8;
        case 0x3042acu: goto label_3042ac;
        case 0x3042b0u: goto label_3042b0;
        case 0x3042b4u: goto label_3042b4;
        case 0x3042b8u: goto label_3042b8;
        case 0x3042bcu: goto label_3042bc;
        case 0x3042c0u: goto label_3042c0;
        case 0x3042c4u: goto label_3042c4;
        case 0x3042c8u: goto label_3042c8;
        case 0x3042ccu: goto label_3042cc;
        case 0x3042d0u: goto label_3042d0;
        case 0x3042d4u: goto label_3042d4;
        case 0x3042d8u: goto label_3042d8;
        case 0x3042dcu: goto label_3042dc;
        case 0x3042e0u: goto label_3042e0;
        case 0x3042e4u: goto label_3042e4;
        case 0x3042e8u: goto label_3042e8;
        case 0x3042ecu: goto label_3042ec;
        case 0x3042f0u: goto label_3042f0;
        case 0x3042f4u: goto label_3042f4;
        case 0x3042f8u: goto label_3042f8;
        case 0x3042fcu: goto label_3042fc;
        case 0x304300u: goto label_304300;
        case 0x304304u: goto label_304304;
        case 0x304308u: goto label_304308;
        case 0x30430cu: goto label_30430c;
        case 0x304310u: goto label_304310;
        case 0x304314u: goto label_304314;
        case 0x304318u: goto label_304318;
        case 0x30431cu: goto label_30431c;
        case 0x304320u: goto label_304320;
        case 0x304324u: goto label_304324;
        case 0x304328u: goto label_304328;
        case 0x30432cu: goto label_30432c;
        case 0x304330u: goto label_304330;
        case 0x304334u: goto label_304334;
        case 0x304338u: goto label_304338;
        case 0x30433cu: goto label_30433c;
        case 0x304340u: goto label_304340;
        case 0x304344u: goto label_304344;
        case 0x304348u: goto label_304348;
        case 0x30434cu: goto label_30434c;
        case 0x304350u: goto label_304350;
        case 0x304354u: goto label_304354;
        case 0x304358u: goto label_304358;
        case 0x30435cu: goto label_30435c;
        case 0x304360u: goto label_304360;
        case 0x304364u: goto label_304364;
        case 0x304368u: goto label_304368;
        case 0x30436cu: goto label_30436c;
        case 0x304370u: goto label_304370;
        case 0x304374u: goto label_304374;
        case 0x304378u: goto label_304378;
        case 0x30437cu: goto label_30437c;
        case 0x304380u: goto label_304380;
        case 0x304384u: goto label_304384;
        case 0x304388u: goto label_304388;
        case 0x30438cu: goto label_30438c;
        case 0x304390u: goto label_304390;
        case 0x304394u: goto label_304394;
        case 0x304398u: goto label_304398;
        case 0x30439cu: goto label_30439c;
        case 0x3043a0u: goto label_3043a0;
        case 0x3043a4u: goto label_3043a4;
        case 0x3043a8u: goto label_3043a8;
        case 0x3043acu: goto label_3043ac;
        case 0x3043b0u: goto label_3043b0;
        case 0x3043b4u: goto label_3043b4;
        case 0x3043b8u: goto label_3043b8;
        case 0x3043bcu: goto label_3043bc;
        case 0x3043c0u: goto label_3043c0;
        case 0x3043c4u: goto label_3043c4;
        case 0x3043c8u: goto label_3043c8;
        case 0x3043ccu: goto label_3043cc;
        case 0x3043d0u: goto label_3043d0;
        case 0x3043d4u: goto label_3043d4;
        case 0x3043d8u: goto label_3043d8;
        case 0x3043dcu: goto label_3043dc;
        case 0x3043e0u: goto label_3043e0;
        case 0x3043e4u: goto label_3043e4;
        case 0x3043e8u: goto label_3043e8;
        case 0x3043ecu: goto label_3043ec;
        case 0x3043f0u: goto label_3043f0;
        case 0x3043f4u: goto label_3043f4;
        case 0x3043f8u: goto label_3043f8;
        case 0x3043fcu: goto label_3043fc;
        case 0x304400u: goto label_304400;
        case 0x304404u: goto label_304404;
        case 0x304408u: goto label_304408;
        case 0x30440cu: goto label_30440c;
        case 0x304410u: goto label_304410;
        case 0x304414u: goto label_304414;
        case 0x304418u: goto label_304418;
        case 0x30441cu: goto label_30441c;
        case 0x304420u: goto label_304420;
        case 0x304424u: goto label_304424;
        case 0x304428u: goto label_304428;
        case 0x30442cu: goto label_30442c;
        case 0x304430u: goto label_304430;
        case 0x304434u: goto label_304434;
        case 0x304438u: goto label_304438;
        case 0x30443cu: goto label_30443c;
        case 0x304440u: goto label_304440;
        case 0x304444u: goto label_304444;
        case 0x304448u: goto label_304448;
        case 0x30444cu: goto label_30444c;
        case 0x304450u: goto label_304450;
        case 0x304454u: goto label_304454;
        case 0x304458u: goto label_304458;
        case 0x30445cu: goto label_30445c;
        case 0x304460u: goto label_304460;
        case 0x304464u: goto label_304464;
        case 0x304468u: goto label_304468;
        case 0x30446cu: goto label_30446c;
        case 0x304470u: goto label_304470;
        case 0x304474u: goto label_304474;
        case 0x304478u: goto label_304478;
        case 0x30447cu: goto label_30447c;
        case 0x304480u: goto label_304480;
        case 0x304484u: goto label_304484;
        case 0x304488u: goto label_304488;
        case 0x30448cu: goto label_30448c;
        case 0x304490u: goto label_304490;
        case 0x304494u: goto label_304494;
        case 0x304498u: goto label_304498;
        case 0x30449cu: goto label_30449c;
        case 0x3044a0u: goto label_3044a0;
        case 0x3044a4u: goto label_3044a4;
        case 0x3044a8u: goto label_3044a8;
        case 0x3044acu: goto label_3044ac;
        case 0x3044b0u: goto label_3044b0;
        case 0x3044b4u: goto label_3044b4;
        case 0x3044b8u: goto label_3044b8;
        case 0x3044bcu: goto label_3044bc;
        case 0x3044c0u: goto label_3044c0;
        case 0x3044c4u: goto label_3044c4;
        case 0x3044c8u: goto label_3044c8;
        case 0x3044ccu: goto label_3044cc;
        case 0x3044d0u: goto label_3044d0;
        case 0x3044d4u: goto label_3044d4;
        case 0x3044d8u: goto label_3044d8;
        case 0x3044dcu: goto label_3044dc;
        case 0x3044e0u: goto label_3044e0;
        case 0x3044e4u: goto label_3044e4;
        case 0x3044e8u: goto label_3044e8;
        case 0x3044ecu: goto label_3044ec;
        case 0x3044f0u: goto label_3044f0;
        case 0x3044f4u: goto label_3044f4;
        case 0x3044f8u: goto label_3044f8;
        case 0x3044fcu: goto label_3044fc;
        case 0x304500u: goto label_304500;
        case 0x304504u: goto label_304504;
        case 0x304508u: goto label_304508;
        case 0x30450cu: goto label_30450c;
        case 0x304510u: goto label_304510;
        case 0x304514u: goto label_304514;
        case 0x304518u: goto label_304518;
        case 0x30451cu: goto label_30451c;
        case 0x304520u: goto label_304520;
        case 0x304524u: goto label_304524;
        case 0x304528u: goto label_304528;
        case 0x30452cu: goto label_30452c;
        case 0x304530u: goto label_304530;
        case 0x304534u: goto label_304534;
        case 0x304538u: goto label_304538;
        case 0x30453cu: goto label_30453c;
        case 0x304540u: goto label_304540;
        case 0x304544u: goto label_304544;
        case 0x304548u: goto label_304548;
        case 0x30454cu: goto label_30454c;
        case 0x304550u: goto label_304550;
        case 0x304554u: goto label_304554;
        case 0x304558u: goto label_304558;
        case 0x30455cu: goto label_30455c;
        case 0x304560u: goto label_304560;
        case 0x304564u: goto label_304564;
        case 0x304568u: goto label_304568;
        case 0x30456cu: goto label_30456c;
        case 0x304570u: goto label_304570;
        case 0x304574u: goto label_304574;
        case 0x304578u: goto label_304578;
        case 0x30457cu: goto label_30457c;
        case 0x304580u: goto label_304580;
        case 0x304584u: goto label_304584;
        case 0x304588u: goto label_304588;
        case 0x30458cu: goto label_30458c;
        case 0x304590u: goto label_304590;
        case 0x304594u: goto label_304594;
        case 0x304598u: goto label_304598;
        case 0x30459cu: goto label_30459c;
        case 0x3045a0u: goto label_3045a0;
        case 0x3045a4u: goto label_3045a4;
        case 0x3045a8u: goto label_3045a8;
        case 0x3045acu: goto label_3045ac;
        case 0x3045b0u: goto label_3045b0;
        case 0x3045b4u: goto label_3045b4;
        case 0x3045b8u: goto label_3045b8;
        case 0x3045bcu: goto label_3045bc;
        case 0x3045c0u: goto label_3045c0;
        case 0x3045c4u: goto label_3045c4;
        case 0x3045c8u: goto label_3045c8;
        case 0x3045ccu: goto label_3045cc;
        case 0x3045d0u: goto label_3045d0;
        case 0x3045d4u: goto label_3045d4;
        case 0x3045d8u: goto label_3045d8;
        case 0x3045dcu: goto label_3045dc;
        case 0x3045e0u: goto label_3045e0;
        case 0x3045e4u: goto label_3045e4;
        case 0x3045e8u: goto label_3045e8;
        case 0x3045ecu: goto label_3045ec;
        case 0x3045f0u: goto label_3045f0;
        case 0x3045f4u: goto label_3045f4;
        case 0x3045f8u: goto label_3045f8;
        case 0x3045fcu: goto label_3045fc;
        case 0x304600u: goto label_304600;
        case 0x304604u: goto label_304604;
        case 0x304608u: goto label_304608;
        case 0x30460cu: goto label_30460c;
        case 0x304610u: goto label_304610;
        case 0x304614u: goto label_304614;
        case 0x304618u: goto label_304618;
        case 0x30461cu: goto label_30461c;
        case 0x304620u: goto label_304620;
        case 0x304624u: goto label_304624;
        case 0x304628u: goto label_304628;
        case 0x30462cu: goto label_30462c;
        case 0x304630u: goto label_304630;
        case 0x304634u: goto label_304634;
        case 0x304638u: goto label_304638;
        case 0x30463cu: goto label_30463c;
        case 0x304640u: goto label_304640;
        case 0x304644u: goto label_304644;
        case 0x304648u: goto label_304648;
        case 0x30464cu: goto label_30464c;
        case 0x304650u: goto label_304650;
        case 0x304654u: goto label_304654;
        case 0x304658u: goto label_304658;
        case 0x30465cu: goto label_30465c;
        case 0x304660u: goto label_304660;
        case 0x304664u: goto label_304664;
        case 0x304668u: goto label_304668;
        case 0x30466cu: goto label_30466c;
        case 0x304670u: goto label_304670;
        case 0x304674u: goto label_304674;
        case 0x304678u: goto label_304678;
        case 0x30467cu: goto label_30467c;
        case 0x304680u: goto label_304680;
        case 0x304684u: goto label_304684;
        case 0x304688u: goto label_304688;
        case 0x30468cu: goto label_30468c;
        case 0x304690u: goto label_304690;
        case 0x304694u: goto label_304694;
        case 0x304698u: goto label_304698;
        case 0x30469cu: goto label_30469c;
        case 0x3046a0u: goto label_3046a0;
        case 0x3046a4u: goto label_3046a4;
        case 0x3046a8u: goto label_3046a8;
        case 0x3046acu: goto label_3046ac;
        case 0x3046b0u: goto label_3046b0;
        case 0x3046b4u: goto label_3046b4;
        case 0x3046b8u: goto label_3046b8;
        case 0x3046bcu: goto label_3046bc;
        case 0x3046c0u: goto label_3046c0;
        case 0x3046c4u: goto label_3046c4;
        case 0x3046c8u: goto label_3046c8;
        case 0x3046ccu: goto label_3046cc;
        case 0x3046d0u: goto label_3046d0;
        case 0x3046d4u: goto label_3046d4;
        case 0x3046d8u: goto label_3046d8;
        case 0x3046dcu: goto label_3046dc;
        case 0x3046e0u: goto label_3046e0;
        case 0x3046e4u: goto label_3046e4;
        case 0x3046e8u: goto label_3046e8;
        case 0x3046ecu: goto label_3046ec;
        case 0x3046f0u: goto label_3046f0;
        case 0x3046f4u: goto label_3046f4;
        case 0x3046f8u: goto label_3046f8;
        case 0x3046fcu: goto label_3046fc;
        case 0x304700u: goto label_304700;
        case 0x304704u: goto label_304704;
        case 0x304708u: goto label_304708;
        case 0x30470cu: goto label_30470c;
        case 0x304710u: goto label_304710;
        case 0x304714u: goto label_304714;
        case 0x304718u: goto label_304718;
        case 0x30471cu: goto label_30471c;
        case 0x304720u: goto label_304720;
        case 0x304724u: goto label_304724;
        case 0x304728u: goto label_304728;
        case 0x30472cu: goto label_30472c;
        case 0x304730u: goto label_304730;
        case 0x304734u: goto label_304734;
        case 0x304738u: goto label_304738;
        case 0x30473cu: goto label_30473c;
        case 0x304740u: goto label_304740;
        case 0x304744u: goto label_304744;
        case 0x304748u: goto label_304748;
        case 0x30474cu: goto label_30474c;
        case 0x304750u: goto label_304750;
        case 0x304754u: goto label_304754;
        case 0x304758u: goto label_304758;
        case 0x30475cu: goto label_30475c;
        case 0x304760u: goto label_304760;
        case 0x304764u: goto label_304764;
        case 0x304768u: goto label_304768;
        case 0x30476cu: goto label_30476c;
        case 0x304770u: goto label_304770;
        case 0x304774u: goto label_304774;
        case 0x304778u: goto label_304778;
        case 0x30477cu: goto label_30477c;
        case 0x304780u: goto label_304780;
        case 0x304784u: goto label_304784;
        case 0x304788u: goto label_304788;
        case 0x30478cu: goto label_30478c;
        case 0x304790u: goto label_304790;
        case 0x304794u: goto label_304794;
        case 0x304798u: goto label_304798;
        case 0x30479cu: goto label_30479c;
        case 0x3047a0u: goto label_3047a0;
        case 0x3047a4u: goto label_3047a4;
        case 0x3047a8u: goto label_3047a8;
        case 0x3047acu: goto label_3047ac;
        case 0x3047b0u: goto label_3047b0;
        case 0x3047b4u: goto label_3047b4;
        case 0x3047b8u: goto label_3047b8;
        case 0x3047bcu: goto label_3047bc;
        case 0x3047c0u: goto label_3047c0;
        case 0x3047c4u: goto label_3047c4;
        case 0x3047c8u: goto label_3047c8;
        case 0x3047ccu: goto label_3047cc;
        case 0x3047d0u: goto label_3047d0;
        case 0x3047d4u: goto label_3047d4;
        case 0x3047d8u: goto label_3047d8;
        case 0x3047dcu: goto label_3047dc;
        case 0x3047e0u: goto label_3047e0;
        case 0x3047e4u: goto label_3047e4;
        case 0x3047e8u: goto label_3047e8;
        case 0x3047ecu: goto label_3047ec;
        case 0x3047f0u: goto label_3047f0;
        case 0x3047f4u: goto label_3047f4;
        case 0x3047f8u: goto label_3047f8;
        case 0x3047fcu: goto label_3047fc;
        case 0x304800u: goto label_304800;
        case 0x304804u: goto label_304804;
        case 0x304808u: goto label_304808;
        case 0x30480cu: goto label_30480c;
        case 0x304810u: goto label_304810;
        case 0x304814u: goto label_304814;
        case 0x304818u: goto label_304818;
        case 0x30481cu: goto label_30481c;
        case 0x304820u: goto label_304820;
        case 0x304824u: goto label_304824;
        case 0x304828u: goto label_304828;
        case 0x30482cu: goto label_30482c;
        default: break;
    }

    ctx->pc = 0x3041b8u;

label_3041b8:
    // 0x3041b8: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x3041b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
label_3041bc:
    // 0x3041bc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3041bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_3041c0:
    // 0x3041c0: 0x7fb301f0  sq          $s3, 0x1F0($sp)
    ctx->pc = 0x3041c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 19));
label_3041c4:
    // 0x3041c4: 0x7fb00220  sq          $s0, 0x220($sp)
    ctx->pc = 0x3041c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 16));
label_3041c8:
    // 0x3041c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3041c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3041cc:
    // 0x3041cc: 0x7fb10210  sq          $s1, 0x210($sp)
    ctx->pc = 0x3041ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 17));
label_3041d0:
    // 0x3041d0: 0x7fb20200  sq          $s2, 0x200($sp)
    ctx->pc = 0x3041d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 18));
label_3041d4:
    // 0x3041d4: 0x7fb401e0  sq          $s4, 0x1E0($sp)
    ctx->pc = 0x3041d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 20));
label_3041d8:
    // 0x3041d8: 0x7fb501d0  sq          $s5, 0x1D0($sp)
    ctx->pc = 0x3041d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 21));
label_3041dc:
    // 0x3041dc: 0x7fb601c0  sq          $s6, 0x1C0($sp)
    ctx->pc = 0x3041dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 22));
label_3041e0:
    // 0x3041e0: 0x7fb701b0  sq          $s7, 0x1B0($sp)
    ctx->pc = 0x3041e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 23));
label_3041e4:
    // 0x3041e4: 0x7fbe01a0  sq          $fp, 0x1A0($sp)
    ctx->pc = 0x3041e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 30));
label_3041e8:
    // 0x3041e8: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x3041e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
label_3041ec:
    // 0x3041ec: 0xe7b50238  swc1        $f21, 0x238($sp)
    ctx->pc = 0x3041ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_3041f0:
    // 0x3041f0: 0xe7b40230  swc1        $f20, 0x230($sp)
    ctx->pc = 0x3041f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_3041f4:
    // 0x3041f4: 0x8e630114  lw          $v1, 0x114($s3)
    ctx->pc = 0x3041f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
label_3041f8:
    // 0x3041f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3041f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3041fc:
    // 0x3041fc: 0x1440017f  bnez        $v0, . + 4 + (0x17F << 2)
label_304200:
    if (ctx->pc == 0x304200u) {
        ctx->pc = 0x304200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041FCu;
        // 0x304200: 0x7bb00220  lq          $s0, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304204u;
        goto label_304204;
    }
    ctx->pc = 0x3041FCu;
    {
        const bool branch_taken_0x3041fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041FCu;
        // 0x304200: 0x7bb00220  lq          $s0, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3041fc) {
            ctx->pc = 0x3047FCu;
            goto label_3047fc;
        }
    }
    ctx->pc = 0x304204u;
label_304204:
    // 0x304204: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x304204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_304208:
    // 0x304208: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x304208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_30420c:
    // 0x30420c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30420cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_304210:
    // 0x304210: 0x8e630118  lw          $v1, 0x118($s3)
    ctx->pc = 0x304210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_304214:
    // 0x304214: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x304214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_304218:
    // 0x304218: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x304218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_30421c:
    // 0x30421c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_304220:
    if (ctx->pc == 0x304220u) {
        ctx->pc = 0x304220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30421Cu;
        // 0x304220: 0xae640114  sw          $a0, 0x114($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304224u;
        goto label_304224;
    }
    ctx->pc = 0x30421Cu;
    {
        const bool branch_taken_0x30421c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x304220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30421Cu;
        // 0x304220: 0xae640114  sw          $a0, 0x114($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30421c) {
            ctx->pc = 0x304234u;
            goto label_304234;
        }
    }
    ctx->pc = 0x304224u;
label_304224:
    // 0x304224: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x304224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_304228:
    // 0x304228: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x304228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30422c:
    // 0x30422c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x30422cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_304230:
    // 0x304230: 0xae620114  sw          $v0, 0x114($s3)
    ctx->pc = 0x304230u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 2));
label_304234:
    // 0x304234: 0x8e630100  lw          $v1, 0x100($s3)
    ctx->pc = 0x304234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_304238:
    // 0x304238: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x304238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_30423c:
    // 0x30423c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x30423cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_304240:
    // 0x304240: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_304244:
    if (ctx->pc == 0x304244u) {
        ctx->pc = 0x304244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304240u;
        // 0x304244: 0x8e620108  lw          $v0, 0x108($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304248u;
        goto label_304248;
    }
    ctx->pc = 0x304240u;
    {
        const bool branch_taken_0x304240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304240) {
            ctx->pc = 0x304244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304240u;
            // 0x304244: 0x8e620108  lw          $v0, 0x108($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304260u;
            goto label_304260;
        }
    }
    ctx->pc = 0x304248u;
label_304248:
    // 0x304248: 0x8e630114  lw          $v1, 0x114($s3)
    ctx->pc = 0x304248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
label_30424c:
    // 0x30424c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x30424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_304250:
    // 0x304250: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x304250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_304254:
    // 0x304254: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x304254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_304258:
    // 0x304258: 0xae630114  sw          $v1, 0x114($s3)
    ctx->pc = 0x304258u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 3));
label_30425c:
    // 0x30425c: 0x8e620108  lw          $v0, 0x108($s3)
    ctx->pc = 0x30425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_304260:
    // 0x304260: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_304264:
    if (ctx->pc == 0x304264u) {
        ctx->pc = 0x304264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304260u;
        // 0x304264: 0x8e630100  lw          $v1, 0x100($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304268u;
        goto label_304268;
    }
    ctx->pc = 0x304260u;
    {
        const bool branch_taken_0x304260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304260) {
            ctx->pc = 0x304264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304260u;
            // 0x304264: 0x8e630100  lw          $v1, 0x100($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304284u;
            goto label_304284;
        }
    }
    ctx->pc = 0x304268u;
label_304268:
    // 0x304268: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x304268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
label_30426c:
    // 0x30426c: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_304270:
    if (ctx->pc == 0x304270u) {
        ctx->pc = 0x304270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30426Cu;
        // 0x304270: 0x8e630100  lw          $v1, 0x100($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304274u;
        goto label_304274;
    }
    ctx->pc = 0x30426Cu;
    {
        const bool branch_taken_0x30426c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x30426c) {
            ctx->pc = 0x304270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30426Cu;
            // 0x304270: 0x8e630100  lw          $v1, 0x100($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304284u;
            goto label_304284;
        }
    }
    ctx->pc = 0x304274u;
label_304274:
    // 0x304274: 0xa660018a  sh          $zero, 0x18A($s3)
    ctx->pc = 0x304274u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 394), (uint16_t)GPR_U32(ctx, 0));
label_304278:
    // 0x304278: 0xc0c0a46  jal         func_302918
label_30427c:
    if (ctx->pc == 0x30427Cu) {
        ctx->pc = 0x30427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304278u;
        // 0x30427c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304280u;
        goto label_304280;
    }
    ctx->pc = 0x304278u;
    SET_GPR_U32(ctx, 31, 0x304280u);
    ctx->pc = 0x30427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304278u;
    // 0x30427c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302918u, 0x304278u, 0x304280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304280u;
label_304280:
    // 0x304280: 0x8e630100  lw          $v1, 0x100($s3)
    ctx->pc = 0x304280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_304284:
    // 0x304284: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x304284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_304288:
    // 0x304288: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x304288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_30428c:
    // 0x30428c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_304290:
    if (ctx->pc == 0x304290u) {
        ctx->pc = 0x304290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30428Cu;
        // 0x304290: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304294u;
        goto label_304294;
    }
    ctx->pc = 0x30428Cu;
    {
        const bool branch_taken_0x30428c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30428Cu;
        // 0x304290: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30428c) {
            ctx->pc = 0x3042A8u;
            goto label_3042a8;
        }
    }
    ctx->pc = 0x304294u;
label_304294:
    // 0x304294: 0x8e620114  lw          $v0, 0x114($s3)
    ctx->pc = 0x304294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
label_304298:
    // 0x304298: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x304298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_30429c:
    // 0x30429c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30429cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3042a0:
    // 0x3042a0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3042a4:
    if (ctx->pc == 0x3042A4u) {
        ctx->pc = 0x3042A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042A0u;
        // 0x3042a4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3042A8u;
        goto label_3042a8;
    }
    ctx->pc = 0x3042A0u;
    {
        const bool branch_taken_0x3042a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3042A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042A0u;
        // 0x3042a4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042a0) {
            ctx->pc = 0x3042BCu;
            goto label_3042bc;
        }
    }
    ctx->pc = 0x3042A8u;
label_3042a8:
    // 0x3042a8: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x3042a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_3042ac:
    // 0x3042ac: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x3042acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
label_3042b0:
    // 0x3042b0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3042b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3042b4:
    // 0x3042b4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_3042b8:
    if (ctx->pc == 0x3042B8u) {
        ctx->pc = 0x3042B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042B4u;
        // 0x3042b8: 0xc6600228  lwc1        $f0, 0x228($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3042BCu;
        goto label_3042bc;
    }
    ctx->pc = 0x3042B4u;
    {
        const bool branch_taken_0x3042b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3042b4) {
            ctx->pc = 0x3042B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3042B4u;
            // 0x3042b8: 0xc6600228  lwc1        $f0, 0x228($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3042CCu;
            goto label_3042cc;
        }
    }
    ctx->pc = 0x3042BCu;
label_3042bc:
    // 0x3042bc: 0xc0be8d4  jal         func_2FA350
label_3042c0:
    if (ctx->pc == 0x3042C0u) {
        ctx->pc = 0x3042C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042BCu;
        // 0x3042c0: 0x26640228  addiu       $a0, $s3, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3042C4u;
        goto label_3042c4;
    }
    ctx->pc = 0x3042BCu;
    SET_GPR_U32(ctx, 31, 0x3042C4u);
    ctx->pc = 0x3042C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3042BCu;
    // 0x3042c0: 0x26640228  addiu       $a0, $s3, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA350u, 0x3042BCu, 0x3042C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3042C4u;
label_3042c4:
    // 0x3042c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3042c8:
    if (ctx->pc == 0x3042C8u) {
        ctx->pc = 0x3042C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042C4u;
        // 0x3042c8: 0x96620224  lhu         $v0, 0x224($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3042CCu;
        goto label_3042cc;
    }
    ctx->pc = 0x3042C4u;
    {
        const bool branch_taken_0x3042c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3042C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042C4u;
        // 0x3042c8: 0x96620224  lhu         $v0, 0x224($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042c4) {
            ctx->pc = 0x3042E4u;
            goto label_3042e4;
        }
    }
    ctx->pc = 0x3042CCu;
label_3042cc:
    // 0x3042cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3042ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3042d0:
    // 0x3042d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3042d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3042d4:
    // 0x3042d4: 0x0  nop
    ctx->pc = 0x3042d4u;
    // NOP
label_3042d8:
    // 0x3042d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3042d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3042dc:
    // 0x3042dc: 0xe6600228  swc1        $f0, 0x228($s3)
    ctx->pc = 0x3042dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 552), bits); }
label_3042e0:
    // 0x3042e0: 0x96620224  lhu         $v0, 0x224($s3)
    ctx->pc = 0x3042e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 548)));
label_3042e4:
    // 0x3042e4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_3042e8:
    if (ctx->pc == 0x3042E8u) {
        ctx->pc = 0x3042E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042E4u;
        // 0x3042e8: 0x86620186  lh          $v0, 0x186($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3042ECu;
        goto label_3042ec;
    }
    ctx->pc = 0x3042E4u;
    {
        const bool branch_taken_0x3042e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3042e4) {
            ctx->pc = 0x3042E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3042E4u;
            // 0x3042e8: 0x86620186  lh          $v0, 0x186($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30431Cu;
            goto label_30431c;
        }
    }
    ctx->pc = 0x3042ECu;
label_3042ec:
    // 0x3042ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3042ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3042f0:
    // 0x3042f0: 0x0  nop
    ctx->pc = 0x3042f0u;
    // NOP
label_3042f4:
    // 0x3042f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3042f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3042f8:
    // 0x3042f8: 0xc6610228  lwc1        $f1, 0x228($s3)
    ctx->pc = 0x3042f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3042fc:
    // 0x3042fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3042fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_304300:
    // 0x304300: 0x0  nop
    ctx->pc = 0x304300u;
    // NOP
label_304304:
    // 0x304304: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_304308:
    if (ctx->pc == 0x304308u) {
        ctx->pc = 0x304308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304304u;
        // 0x304308: 0x86620186  lh          $v0, 0x186($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30430Cu;
        goto label_30430c;
    }
    ctx->pc = 0x304304u;
    {
        const bool branch_taken_0x304304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304304) {
            ctx->pc = 0x304308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304304u;
            // 0x304308: 0x86620186  lh          $v0, 0x186($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30431Cu;
            goto label_30431c;
        }
    }
    ctx->pc = 0x30430Cu;
label_30430c:
    // 0x30430c: 0xc0c0a46  jal         func_302918
label_304310:
    if (ctx->pc == 0x304310u) {
        ctx->pc = 0x304310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30430Cu;
        // 0x304310: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304314u;
        goto label_304314;
    }
    ctx->pc = 0x30430Cu;
    SET_GPR_U32(ctx, 31, 0x304314u);
    ctx->pc = 0x304310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30430Cu;
    // 0x304310: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302918u, 0x30430Cu, 0x304314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304314u;
label_304314:
    // 0x304314: 0x10000139  b           . + 4 + (0x139 << 2)
label_304318:
    if (ctx->pc == 0x304318u) {
        ctx->pc = 0x304318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304314u;
        // 0x304318: 0x7bb00220  lq          $s0, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30431Cu;
        goto label_30431c;
    }
    ctx->pc = 0x304314u;
    {
        const bool branch_taken_0x304314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304314u;
        // 0x304318: 0x7bb00220  lq          $s0, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304314) {
            ctx->pc = 0x3047FCu;
            goto label_3047fc;
        }
    }
    ctx->pc = 0x30431Cu;
label_30431c:
    // 0x30431c: 0xc6610180  lwc1        $f1, 0x180($s3)
    ctx->pc = 0x30431cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_304320:
    // 0x304320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_304324:
    // 0x304324: 0x0  nop
    ctx->pc = 0x304324u;
    // NOP
label_304328:
    // 0x304328: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_30432c:
    // 0x30432c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30432cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_304330:
    // 0x304330: 0x0  nop
    ctx->pc = 0x304330u;
    // NOP
label_304334:
    // 0x304334: 0x45020050  bc1fl       . + 4 + (0x50 << 2)
label_304338:
    if (ctx->pc == 0x304338u) {
        ctx->pc = 0x304338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304334u;
        // 0x304338: 0x8e640114  lw          $a0, 0x114($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30433Cu;
        goto label_30433c;
    }
    ctx->pc = 0x304334u;
    {
        const bool branch_taken_0x304334 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304334) {
            ctx->pc = 0x304338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304334u;
            // 0x304338: 0x8e640114  lw          $a0, 0x114($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304478u;
            goto label_304478;
        }
    }
    ctx->pc = 0x30433Cu;
label_30433c:
    // 0x30433c: 0xc6630244  lwc1        $f3, 0x244($s3)
    ctx->pc = 0x30433cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_304340:
    // 0x304340: 0xc6600248  lwc1        $f0, 0x248($s3)
    ctx->pc = 0x304340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_304344:
    // 0x304344: 0xc662024c  lwc1        $f2, 0x24C($s3)
    ctx->pc = 0x304344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_304348:
    // 0x304348: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x304348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_30434c:
    // 0x30434c: 0xc6610240  lwc1        $f1, 0x240($s3)
    ctx->pc = 0x30434cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_304350:
    // 0x304350: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x304350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_304354:
    // 0x304354: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x304354u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_304358:
    // 0x304358: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x304358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_30435c:
    // 0x30435c: 0xe6610240  swc1        $f1, 0x240($s3)
    ctx->pc = 0x30435cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 576), bits); }
label_304360:
    // 0x304360: 0xe6600244  swc1        $f0, 0x244($s3)
    ctx->pc = 0x304360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 580), bits); }
label_304364:
    // 0x304364: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x304364u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_304368:
    // 0x304368: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x304368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_30436c:
    // 0x30436c: 0x60f809  jalr        $v1
label_304370:
    if (ctx->pc == 0x304370u) {
        ctx->pc = 0x304370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30436Cu;
        // 0x304370: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304374u;
        goto label_304374;
    }
    ctx->pc = 0x30436Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x304374u);
        ctx->pc = 0x304370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30436Cu;
        // 0x304370: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30436Cu, 0x304374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x304374u;
label_304374:
    // 0x304374: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x304374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_304378:
    // 0x304378: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x304378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30437c:
    // 0x30437c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_304380:
    // 0x304380: 0x60f809  jalr        $v1
label_304384:
    if (ctx->pc == 0x304384u) {
        ctx->pc = 0x304384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304380u;
        // 0x304384: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304388u;
        goto label_304388;
    }
    ctx->pc = 0x304380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x304388u);
        ctx->pc = 0x304384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304380u;
        // 0x304384: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304380u, 0x304388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x304388u;
label_304388:
    // 0x304388: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x304388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_30438c:
    // 0x30438c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x30438cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_304390:
    // 0x304390: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x304390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_304394:
    // 0x304394: 0x60f809  jalr        $v1
label_304398:
    if (ctx->pc == 0x304398u) {
        ctx->pc = 0x304398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304394u;
        // 0x304398: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30439Cu;
        goto label_30439c;
    }
    ctx->pc = 0x304394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30439Cu);
        ctx->pc = 0x304398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304394u;
        // 0x304398: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304394u, 0x30439Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30439Cu;
label_30439c:
    // 0x30439c: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x30439cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_3043a0:
    // 0x3043a0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x3043a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_3043a4:
    // 0x3043a4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x3043a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_3043a8:
    // 0x3043a8: 0x60f809  jalr        $v1
label_3043ac:
    if (ctx->pc == 0x3043ACu) {
        ctx->pc = 0x3043ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043A8u;
        // 0x3043ac: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043B0u;
        goto label_3043b0;
    }
    ctx->pc = 0x3043A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3043B0u);
        ctx->pc = 0x3043ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043A8u;
        // 0x3043ac: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3043A8u, 0x3043B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3043B0u;
label_3043b0:
    // 0x3043b0: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x3043b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_3043b4:
    // 0x3043b4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_3043b8:
    if (ctx->pc == 0x3043B8u) {
        ctx->pc = 0x3043B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043B4u;
        // 0x3043b8: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043BCu;
        goto label_3043bc;
    }
    ctx->pc = 0x3043B4u;
    {
        const bool branch_taken_0x3043b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3043B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043B4u;
        // 0x3043b8: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043b4) {
            ctx->pc = 0x304474u;
            goto label_304474;
        }
    }
    ctx->pc = 0x3043BCu;
label_3043bc:
    // 0x3043bc: 0xc0ad86c  jal         func_2B61B0
label_3043c0:
    if (ctx->pc == 0x3043C0u) {
        ctx->pc = 0x3043C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043BCu;
        // 0x3043c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043C4u;
        goto label_3043c4;
    }
    ctx->pc = 0x3043BCu;
    SET_GPR_U32(ctx, 31, 0x3043C4u);
    ctx->pc = 0x3043C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3043BCu;
    // 0x3043c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x3043BCu, 0x3043C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3043C4u;
label_3043c4:
    // 0x3043c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3043c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3043c8:
    // 0x3043c8: 0xc051d4a  jal         func_147528
label_3043cc:
    if (ctx->pc == 0x3043CCu) {
        ctx->pc = 0x3043CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043C8u;
        // 0x3043cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043D0u;
        goto label_3043d0;
    }
    ctx->pc = 0x3043C8u;
    SET_GPR_U32(ctx, 31, 0x3043D0u);
    ctx->pc = 0x3043CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3043C8u;
    // 0x3043cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x3043C8u, 0x3043D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3043D0u;
label_3043d0:
    // 0x3043d0: 0x8e650104  lw          $a1, 0x104($s3)
    ctx->pc = 0x3043d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_3043d4:
    // 0x3043d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3043d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3043d8:
    // 0x3043d8: 0xc051d4a  jal         func_147528
label_3043dc:
    if (ctx->pc == 0x3043DCu) {
        ctx->pc = 0x3043DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043D8u;
        // 0x3043dc: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043E0u;
        goto label_3043e0;
    }
    ctx->pc = 0x3043D8u;
    SET_GPR_U32(ctx, 31, 0x3043E0u);
    ctx->pc = 0x3043DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3043D8u;
    // 0x3043dc: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x3043D8u, 0x3043E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3043E0u;
label_3043e0:
    // 0x3043e0: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x3043e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_3043e4:
    // 0x3043e4: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x3043e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3043e8:
    // 0x3043e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3043e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3043ec:
    // 0x3043ec: 0xc052058  jal         func_148160
label_3043f0:
    if (ctx->pc == 0x3043F0u) {
        ctx->pc = 0x3043F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043ECu;
        // 0x3043f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043F4u;
        goto label_3043f4;
    }
    ctx->pc = 0x3043ECu;
    SET_GPR_U32(ctx, 31, 0x3043F4u);
    ctx->pc = 0x3043F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3043ECu;
    // 0x3043f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148160u, 0x3043ECu, 0x3043F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3043F4u;
label_3043f4:
    // 0x3043f4: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x3043f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3043f8:
    // 0x3043f8: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x3043f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3043fc:
    // 0x3043fc: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x3043fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_304400:
    // 0x304400: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x304400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_304404:
    // 0x304404: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x304404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_304408:
    // 0x304408: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x304408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30440c:
    // 0x30440c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30440cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_304410:
    // 0x304410: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x304410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_304414:
    // 0x304414: 0x0  nop
    ctx->pc = 0x304414u;
    // NOP
label_304418:
    // 0x304418: 0x0  nop
    ctx->pc = 0x304418u;
    // NOP
label_30441c:
    // 0x30441c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x30441cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_304420:
    // 0x304420: 0x0  nop
    ctx->pc = 0x304420u;
    // NOP
label_304424:
    // 0x304424: 0x0  nop
    ctx->pc = 0x304424u;
    // NOP
label_304428:
    // 0x304428: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x304428u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
label_30442c:
    // 0x30442c: 0x0  nop
    ctx->pc = 0x30442cu;
    // NOP
label_304430:
    // 0x304430: 0x0  nop
    ctx->pc = 0x304430u;
    // NOP
label_304434:
    // 0x304434: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x304434u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
label_304438:
    // 0x304438: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x304438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_30443c:
    // 0x30443c: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x30443cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_304440:
    // 0x304440: 0xc051e82  jal         func_147A08
label_304444:
    if (ctx->pc == 0x304444u) {
        ctx->pc = 0x304444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304440u;
        // 0x304444: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x304448u;
        goto label_304448;
    }
    ctx->pc = 0x304440u;
    SET_GPR_U32(ctx, 31, 0x304448u);
    ctx->pc = 0x304444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304440u;
    // 0x304444: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147A08u, 0x304440u, 0x304448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304448u;
label_304448:
    // 0x304448: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x304448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_30444c:
    // 0x30444c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30444cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_304450:
    // 0x304450: 0xc051d52  jal         func_147548
label_304454:
    if (ctx->pc == 0x304454u) {
        ctx->pc = 0x304454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304450u;
        // 0x304454: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304458u;
        goto label_304458;
    }
    ctx->pc = 0x304450u;
    SET_GPR_U32(ctx, 31, 0x304458u);
    ctx->pc = 0x304454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304450u;
    // 0x304454: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x304450u, 0x304458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304458u;
label_304458:
    // 0x304458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30445c:
    // 0x30445c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30445cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_304460:
    // 0x304460: 0xc051d52  jal         func_147548
label_304464:
    if (ctx->pc == 0x304464u) {
        ctx->pc = 0x304464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304460u;
        // 0x304464: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304468u;
        goto label_304468;
    }
    ctx->pc = 0x304460u;
    SET_GPR_U32(ctx, 31, 0x304468u);
    ctx->pc = 0x304464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304460u;
    // 0x304464: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x304460u, 0x304468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304468u;
label_304468:
    // 0x304468: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x304468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30446c:
    // 0x30446c: 0xc0ad8d4  jal         func_2B6350
label_304470:
    if (ctx->pc == 0x304470u) {
        ctx->pc = 0x304470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30446Cu;
        // 0x304470: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304474u;
        goto label_304474;
    }
    ctx->pc = 0x30446Cu;
    SET_GPR_U32(ctx, 31, 0x304474u);
    ctx->pc = 0x304470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30446Cu;
    // 0x304470: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6350u, 0x30446Cu, 0x304474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304474u;
label_304474:
    // 0x304474: 0x8e640114  lw          $a0, 0x114($s3)
    ctx->pc = 0x304474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
label_304478:
    // 0x304478: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x304478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_30447c:
    // 0x30447c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x30447cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_304480:
    // 0x304480: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_304484:
    if (ctx->pc == 0x304484u) {
        ctx->pc = 0x304484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304480u;
        // 0x304484: 0x8e630100  lw          $v1, 0x100($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304488u;
        goto label_304488;
    }
    ctx->pc = 0x304480u;
    {
        const bool branch_taken_0x304480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304480) {
            ctx->pc = 0x304484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304480u;
            // 0x304484: 0x8e630100  lw          $v1, 0x100($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3044BCu;
            goto label_3044bc;
        }
    }
    ctx->pc = 0x304488u;
label_304488:
    // 0x304488: 0xc0ad796  jal         func_2B5E58
label_30448c:
    if (ctx->pc == 0x30448Cu) {
        ctx->pc = 0x30448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304488u;
        // 0x30448c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304490u;
        goto label_304490;
    }
    ctx->pc = 0x304488u;
    SET_GPR_U32(ctx, 31, 0x304490u);
    ctx->pc = 0x30448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304488u;
    // 0x30448c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E58u, 0x304488u, 0x304490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304490u;
label_304490:
    // 0x304490: 0x144000da  bnez        $v0, . + 4 + (0xDA << 2)
label_304494:
    if (ctx->pc == 0x304494u) {
        ctx->pc = 0x304494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304490u;
        // 0x304494: 0x7bb00220  lq          $s0, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304498u;
        goto label_304498;
    }
    ctx->pc = 0x304490u;
    {
        const bool branch_taken_0x304490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304490u;
        // 0x304494: 0x7bb00220  lq          $s0, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304490) {
            ctx->pc = 0x3047FCu;
            goto label_3047fc;
        }
    }
    ctx->pc = 0x304498u;
label_304498:
    // 0x304498: 0xc0ad794  jal         func_2B5E50
label_30449c:
    if (ctx->pc == 0x30449Cu) {
        ctx->pc = 0x30449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304498u;
        // 0x30449c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3044A0u;
        goto label_3044a0;
    }
    ctx->pc = 0x304498u;
    SET_GPR_U32(ctx, 31, 0x3044A0u);
    ctx->pc = 0x30449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304498u;
    // 0x30449c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E50u, 0x304498u, 0x3044A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3044A0u;
label_3044a0:
    // 0x3044a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3044a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3044a4:
    // 0x3044a4: 0xc0ad73c  jal         func_2B5CF0
label_3044a8:
    if (ctx->pc == 0x3044A8u) {
        ctx->pc = 0x3044A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044A4u;
        // 0x3044a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3044ACu;
        goto label_3044ac;
    }
    ctx->pc = 0x3044A4u;
    SET_GPR_U32(ctx, 31, 0x3044ACu);
    ctx->pc = 0x3044A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3044A4u;
    // 0x3044a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5CF0u, 0x3044A4u, 0x3044ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3044ACu;
label_3044ac:
    // 0x3044ac: 0xc0c0176  jal         func_3005D8
label_3044b0:
    if (ctx->pc == 0x3044B0u) {
        ctx->pc = 0x3044B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044ACu;
        // 0x3044b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3044B4u;
        goto label_3044b4;
    }
    ctx->pc = 0x3044ACu;
    SET_GPR_U32(ctx, 31, 0x3044B4u);
    ctx->pc = 0x3044B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3044ACu;
    // 0x3044b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3005D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3005D8u, 0x3044ACu, 0x3044B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3044B4u;
label_3044b4:
    // 0x3044b4: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_3044b8:
    if (ctx->pc == 0x3044B8u) {
        ctx->pc = 0x3044B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044B4u;
        // 0x3044b8: 0x7bb00220  lq          $s0, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3044BCu;
        goto label_3044bc;
    }
    ctx->pc = 0x3044B4u;
    {
        const bool branch_taken_0x3044b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3044B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044B4u;
        // 0x3044b8: 0x7bb00220  lq          $s0, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044b4) {
            ctx->pc = 0x3047FCu;
            goto label_3047fc;
        }
    }
    ctx->pc = 0x3044BCu;
label_3044bc:
    // 0x3044bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3044bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3044c0:
    // 0x3044c0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3044c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_3044c4:
    // 0x3044c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3044c8:
    if (ctx->pc == 0x3044C8u) {
        ctx->pc = 0x3044C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044C4u;
        // 0x3044c8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3044CCu;
        goto label_3044cc;
    }
    ctx->pc = 0x3044C4u;
    {
        const bool branch_taken_0x3044c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3044C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044C4u;
        // 0x3044c8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044c4) {
            ctx->pc = 0x3044DCu;
            goto label_3044dc;
        }
    }
    ctx->pc = 0x3044CCu;
label_3044cc:
    // 0x3044cc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3044ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_3044d0:
    // 0x3044d0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3044d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3044d4:
    // 0x3044d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3044d8:
    if (ctx->pc == 0x3044D8u) {
        ctx->pc = 0x3044D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044D4u;
        // 0x3044d8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3044DCu;
        goto label_3044dc;
    }
    ctx->pc = 0x3044D4u;
    {
        const bool branch_taken_0x3044d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3044D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044D4u;
        // 0x3044d8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044d4) {
            ctx->pc = 0x3044F0u;
            goto label_3044f0;
        }
    }
    ctx->pc = 0x3044DCu;
label_3044dc:
    // 0x3044dc: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x3044dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_3044e0:
    // 0x3044e0: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x3044e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
label_3044e4:
    // 0x3044e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3044e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3044e8:
    // 0x3044e8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_3044ec:
    if (ctx->pc == 0x3044ECu) {
        ctx->pc = 0x3044ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044E8u;
        // 0x3044ec: 0xc6600180  lwc1        $f0, 0x180($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3044F0u;
        goto label_3044f0;
    }
    ctx->pc = 0x3044E8u;
    {
        const bool branch_taken_0x3044e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3044e8) {
            ctx->pc = 0x3044ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3044E8u;
            // 0x3044ec: 0xc6600180  lwc1        $f0, 0x180($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x304500u;
            goto label_304500;
        }
    }
    ctx->pc = 0x3044F0u;
label_3044f0:
    // 0x3044f0: 0xc0be8d4  jal         func_2FA350
label_3044f4:
    if (ctx->pc == 0x3044F4u) {
        ctx->pc = 0x3044F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044F0u;
        // 0x3044f4: 0x26640180  addiu       $a0, $s3, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3044F8u;
        goto label_3044f8;
    }
    ctx->pc = 0x3044F0u;
    SET_GPR_U32(ctx, 31, 0x3044F8u);
    ctx->pc = 0x3044F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3044F0u;
    // 0x3044f4: 0x26640180  addiu       $a0, $s3, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA350u, 0x3044F0u, 0x3044F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3044F8u;
label_3044f8:
    // 0x3044f8: 0x10000006  b           . + 4 + (0x6 << 2)
label_3044fc:
    if (ctx->pc == 0x3044FCu) {
        ctx->pc = 0x304500u;
        goto label_304500;
    }
    ctx->pc = 0x3044F8u;
    {
        const bool branch_taken_0x3044f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3044f8) {
            ctx->pc = 0x304514u;
            goto label_304514;
        }
    }
    ctx->pc = 0x304500u;
label_304500:
    // 0x304500: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x304500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_304504:
    // 0x304504: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x304504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_304508:
    // 0x304508: 0x0  nop
    ctx->pc = 0x304508u;
    // NOP
label_30450c:
    // 0x30450c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30450cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_304510:
    // 0x304510: 0xe6600180  swc1        $f0, 0x180($s3)
    ctx->pc = 0x304510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 384), bits); }
label_304514:
    // 0x304514: 0xc0c0d74  jal         func_3035D0
label_304518:
    if (ctx->pc == 0x304518u) {
        ctx->pc = 0x304518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304514u;
        // 0x304518: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30451Cu;
        goto label_30451c;
    }
    ctx->pc = 0x304514u;
    SET_GPR_U32(ctx, 31, 0x30451Cu);
    ctx->pc = 0x304518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304514u;
    // 0x304518: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3035D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3035D0u, 0x304514u, 0x30451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30451Cu;
label_30451c:
    // 0x30451c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30451cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304520:
    // 0x304520: 0xc0ad86c  jal         func_2B61B0
label_304524:
    if (ctx->pc == 0x304524u) {
        ctx->pc = 0x304524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304520u;
        // 0x304524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304528u;
        goto label_304528;
    }
    ctx->pc = 0x304520u;
    SET_GPR_U32(ctx, 31, 0x304528u);
    ctx->pc = 0x304524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304520u;
    // 0x304524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x304520u, 0x304528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304528u;
label_304528:
    // 0x304528: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x304528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30452c:
    // 0x30452c: 0xc051d4a  jal         func_147528
label_304530:
    if (ctx->pc == 0x304530u) {
        ctx->pc = 0x304530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30452Cu;
        // 0x304530: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304534u;
        goto label_304534;
    }
    ctx->pc = 0x30452Cu;
    SET_GPR_U32(ctx, 31, 0x304534u);
    ctx->pc = 0x304530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30452Cu;
    // 0x304530: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x30452Cu, 0x304534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304534u;
label_304534:
    // 0x304534: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x304534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_304538:
    // 0x304538: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x304538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30453c:
    // 0x30453c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x30453cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_304540:
    // 0x304540: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x304540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_304544:
    // 0x304544: 0x44941000  mtc1        $s4, $f2
    ctx->pc = 0x304544u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_304548:
    // 0x304548: 0x0  nop
    ctx->pc = 0x304548u;
    // NOP
label_30454c:
    // 0x30454c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30454cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_304550:
    // 0x304550: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x304550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_304554:
    // 0x304554: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x304554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_304558:
    // 0x304558: 0xe464000c  swc1        $f4, 0xC($v1)
    ctx->pc = 0x304558u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_30455c:
    // 0x30455c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30455cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_304560:
    // 0x304560: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x304560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_304564:
    // 0x304564: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x304564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_304568:
    // 0x304568: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x304568u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_30456c:
    // 0x30456c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30456cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_304570:
    // 0x304570: 0xc4430258  lwc1        $f3, 0x258($v0)
    ctx->pc = 0x304570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_304574:
    // 0x304574: 0x0  nop
    ctx->pc = 0x304574u;
    // NOP
label_304578:
    // 0x304578: 0x0  nop
    ctx->pc = 0x304578u;
    // NOP
label_30457c:
    // 0x30457c: 0x46020543  div.s       $f21, $f0, $f2
    ctx->pc = 0x30457cu;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
label_304580:
    // 0x304580: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x304580u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_304584:
    // 0x304584: 0x0  nop
    ctx->pc = 0x304584u;
    // NOP
label_304588:
    // 0x304588: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_30458c:
    if (ctx->pc == 0x30458Cu) {
        ctx->pc = 0x30458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304588u;
        // 0x30458c: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304590u;
        goto label_304590;
    }
    ctx->pc = 0x304588u;
    {
        const bool branch_taken_0x304588 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304588u;
        // 0x30458c: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304588) {
            ctx->pc = 0x3045C4u;
            goto label_3045c4;
        }
    }
    ctx->pc = 0x304590u;
label_304590:
    // 0x304590: 0x86630188  lh          $v1, 0x188($s3)
    ctx->pc = 0x304590u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 392)));
label_304594:
    // 0x304594: 0x86620186  lh          $v0, 0x186($s3)
    ctx->pc = 0x304594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 390)));
label_304598:
    // 0x304598: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_30459c:
    if (ctx->pc == 0x30459Cu) {
        ctx->pc = 0x30459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304598u;
        // 0x30459c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3045A0u;
        goto label_3045a0;
    }
    ctx->pc = 0x304598u;
    {
        const bool branch_taken_0x304598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304598u;
        // 0x30459c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304598) {
            ctx->pc = 0x3045C4u;
            goto label_3045c4;
        }
    }
    ctx->pc = 0x3045A0u;
label_3045a0:
    // 0x3045a0: 0xc6600180  lwc1        $f0, 0x180($s3)
    ctx->pc = 0x3045a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3045a4:
    // 0x3045a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3045a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3045a8:
    // 0x3045a8: 0x0  nop
    ctx->pc = 0x3045a8u;
    // NOP
label_3045ac:
    // 0x3045ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3045acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3045b0:
    // 0x3045b0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3045b0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_3045b4:
    // 0x3045b4: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x3045b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3045b8:
    // 0x3045b8: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x3045b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_3045bc:
    // 0x3045bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_3045c0:
    if (ctx->pc == 0x3045C0u) {
        ctx->pc = 0x3045C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045BCu;
        // 0x3045c0: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3045C4u;
        goto label_3045c4;
    }
    ctx->pc = 0x3045BCu;
    {
        const bool branch_taken_0x3045bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3045C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045BCu;
        // 0x3045c0: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045bc) {
            ctx->pc = 0x3045CCu;
            goto label_3045cc;
        }
    }
    ctx->pc = 0x3045C4u;
label_3045c4:
    // 0x3045c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3045c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3045c8:
    // 0x3045c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3045c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3045cc:
    // 0x3045cc: 0x0  nop
    ctx->pc = 0x3045ccu;
    // NOP
label_3045d0:
    // 0x3045d0: 0xe6600250  swc1        $f0, 0x250($s3)
    ctx->pc = 0x3045d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 592), bits); }
label_3045d4:
    // 0x3045d4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3045d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3045d8:
    // 0x3045d8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3045d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3045dc:
    // 0x3045dc: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3045dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3045e0:
    // 0x3045e0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3045e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3045e4:
    // 0x3045e4: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3045e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3045e8:
    // 0x3045e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3045e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3045ec:
    // 0x3045ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3045ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3045f0:
    // 0x3045f0: 0x92630254  lbu         $v1, 0x254($s3)
    ctx->pc = 0x3045f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 596)));
label_3045f4:
    // 0x3045f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_3045f8:
    if (ctx->pc == 0x3045F8u) {
        ctx->pc = 0x3045F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045F4u;
        // 0x3045f8: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3045FCu;
        goto label_3045fc;
    }
    ctx->pc = 0x3045F4u;
    {
        const bool branch_taken_0x3045f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3045F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045F4u;
        // 0x3045f8: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045f4) {
            ctx->pc = 0x304608u;
            goto label_304608;
        }
    }
    ctx->pc = 0x3045FCu;
label_3045fc:
    // 0x3045fc: 0xc6600240  lwc1        $f0, 0x240($s3)
    ctx->pc = 0x3045fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_304600:
    // 0x304600: 0x1000000b  b           . + 4 + (0xB << 2)
label_304604:
    if (ctx->pc == 0x304604u) {
        ctx->pc = 0x304604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304600u;
        // 0x304604: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x304608u;
        goto label_304608;
    }
    ctx->pc = 0x304600u;
    {
        const bool branch_taken_0x304600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304600u;
        // 0x304604: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304600) {
            ctx->pc = 0x304630u;
            goto label_304630;
        }
    }
    ctx->pc = 0x304608u;
label_304608:
    // 0x304608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30460c:
    // 0x30460c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_304610:
    if (ctx->pc == 0x304610u) {
        ctx->pc = 0x304610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30460Cu;
        // 0x304610: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304614u;
        goto label_304614;
    }
    ctx->pc = 0x30460Cu;
    {
        const bool branch_taken_0x30460c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x304610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30460Cu;
        // 0x304610: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30460c) {
            ctx->pc = 0x304620u;
            goto label_304620;
        }
    }
    ctx->pc = 0x304614u;
label_304614:
    // 0x304614: 0xc6600240  lwc1        $f0, 0x240($s3)
    ctx->pc = 0x304614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_304618:
    // 0x304618: 0x10000005  b           . + 4 + (0x5 << 2)
label_30461c:
    if (ctx->pc == 0x30461Cu) {
        ctx->pc = 0x30461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304618u;
        // 0x30461c: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x304620u;
        goto label_304620;
    }
    ctx->pc = 0x304618u;
    {
        const bool branch_taken_0x304618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304618u;
        // 0x30461c: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304618) {
            ctx->pc = 0x304630u;
            goto label_304630;
        }
    }
    ctx->pc = 0x304620u;
label_304620:
    // 0x304620: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_304624:
    if (ctx->pc == 0x304624u) {
        ctx->pc = 0x304624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304620u;
        // 0x304624: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304628u;
        goto label_304628;
    }
    ctx->pc = 0x304620u;
    {
        const bool branch_taken_0x304620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x304624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304620u;
        // 0x304624: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304620) {
            ctx->pc = 0x304634u;
            goto label_304634;
        }
    }
    ctx->pc = 0x304628u;
label_304628:
    // 0x304628: 0xc6600240  lwc1        $f0, 0x240($s3)
    ctx->pc = 0x304628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30462c:
    // 0x30462c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x30462cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_304630:
    // 0x304630: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x304630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_304634:
    // 0x304634: 0x1840006d  blez        $v0, . + 4 + (0x6D << 2)
label_304638:
    if (ctx->pc == 0x304638u) {
        ctx->pc = 0x304638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304634u;
        // 0x304638: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30463Cu;
        goto label_30463c;
    }
    ctx->pc = 0x304634u;
    {
        const bool branch_taken_0x304634 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x304638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304634u;
        // 0x304638: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304634) {
            ctx->pc = 0x3047ECu;
            goto label_3047ec;
        }
    }
    ctx->pc = 0x30463Cu;
label_30463c:
    // 0x30463c: 0x27b20110  addiu       $s2, $sp, 0x110
    ctx->pc = 0x30463cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_304640:
    // 0x304640: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x304640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_304644:
    // 0x304644: 0x27b500d0  addiu       $s5, $sp, 0xD0
    ctx->pc = 0x304644u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_304648:
    // 0x304648: 0x27b60150  addiu       $s6, $sp, 0x150
    ctx->pc = 0x304648u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_30464c:
    // 0x30464c: 0x0  nop
    ctx->pc = 0x30464cu;
    // NOP
label_304650:
    // 0x304650: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x304650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_304654:
    // 0x304654: 0xc0ad8d4  jal         func_2B6350
label_304658:
    if (ctx->pc == 0x304658u) {
        ctx->pc = 0x304658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304654u;
        // 0x304658: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30465Cu;
        goto label_30465c;
    }
    ctx->pc = 0x304654u;
    SET_GPR_U32(ctx, 31, 0x30465Cu);
    ctx->pc = 0x304658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304654u;
    // 0x304658: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6350u, 0x304654u, 0x30465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30465Cu;
label_30465c:
    // 0x30465c: 0xc0ad86c  jal         func_2B61B0
label_304660:
    if (ctx->pc == 0x304660u) {
        ctx->pc = 0x304660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30465Cu;
        // 0x304660: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304664u;
        goto label_304664;
    }
    ctx->pc = 0x30465Cu;
    SET_GPR_U32(ctx, 31, 0x304664u);
    ctx->pc = 0x304660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30465Cu;
    // 0x304660: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x30465Cu, 0x304664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304664u;
label_304664:
    // 0x304664: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x304664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304668:
    // 0x304668: 0xc051d4a  jal         func_147528
label_30466c:
    if (ctx->pc == 0x30466Cu) {
        ctx->pc = 0x30466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304668u;
        // 0x30466c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304670u;
        goto label_304670;
    }
    ctx->pc = 0x304668u;
    SET_GPR_U32(ctx, 31, 0x304670u);
    ctx->pc = 0x30466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304668u;
    // 0x30466c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x304668u, 0x304670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304670u;
label_304670:
    // 0x304670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x304670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304674:
    // 0x304674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304678:
    // 0x304678: 0xc051dca  jal         func_147728
label_30467c:
    if (ctx->pc == 0x30467Cu) {
        ctx->pc = 0x30467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304678u;
        // 0x30467c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304680u;
        goto label_304680;
    }
    ctx->pc = 0x304678u;
    SET_GPR_U32(ctx, 31, 0x304680u);
    ctx->pc = 0x30467Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304678u;
    // 0x30467c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x304678u, 0x304680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304680u;
label_304680:
    // 0x304680: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x304680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_304684:
    // 0x304684: 0xc051db4  jal         func_1476D0
label_304688:
    if (ctx->pc == 0x304688u) {
        ctx->pc = 0x304688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304684u;
        // 0x304688: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30468Cu;
        goto label_30468c;
    }
    ctx->pc = 0x304684u;
    SET_GPR_U32(ctx, 31, 0x30468Cu);
    ctx->pc = 0x304688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304684u;
    // 0x304688: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x304684u, 0x30468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30468Cu;
label_30468c:
    // 0x30468c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30468cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304690:
    // 0x304690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x304690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304694:
    // 0x304694: 0xc051d52  jal         func_147548
label_304698:
    if (ctx->pc == 0x304698u) {
        ctx->pc = 0x304698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304694u;
        // 0x304698: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30469Cu;
        goto label_30469c;
    }
    ctx->pc = 0x304694u;
    SET_GPR_U32(ctx, 31, 0x30469Cu);
    ctx->pc = 0x304698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304694u;
    // 0x304698: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x304694u, 0x30469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30469Cu;
label_30469c:
    // 0x30469c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30469cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3046a0:
    // 0x3046a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3046a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3046a4:
    // 0x3046a4: 0xc051d52  jal         func_147548
label_3046a8:
    if (ctx->pc == 0x3046A8u) {
        ctx->pc = 0x3046A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046A4u;
        // 0x3046a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046ACu;
        goto label_3046ac;
    }
    ctx->pc = 0x3046A4u;
    SET_GPR_U32(ctx, 31, 0x3046ACu);
    ctx->pc = 0x3046A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046A4u;
    // 0x3046a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x3046A4u, 0x3046ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046ACu;
label_3046ac:
    // 0x3046ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3046acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3046b0:
    // 0x3046b0: 0xc0ad8d4  jal         func_2B6350
label_3046b4:
    if (ctx->pc == 0x3046B4u) {
        ctx->pc = 0x3046B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046B0u;
        // 0x3046b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046B8u;
        goto label_3046b8;
    }
    ctx->pc = 0x3046B0u;
    SET_GPR_U32(ctx, 31, 0x3046B8u);
    ctx->pc = 0x3046B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046B0u;
    // 0x3046b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6350u, 0x3046B0u, 0x3046B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046B8u;
label_3046b8:
    // 0x3046b8: 0xc0ad86c  jal         func_2B61B0
label_3046bc:
    if (ctx->pc == 0x3046BCu) {
        ctx->pc = 0x3046BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046B8u;
        // 0x3046bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046C0u;
        goto label_3046c0;
    }
    ctx->pc = 0x3046B8u;
    SET_GPR_U32(ctx, 31, 0x3046C0u);
    ctx->pc = 0x3046BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046B8u;
    // 0x3046bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x3046B8u, 0x3046C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046C0u;
label_3046c0:
    // 0x3046c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3046c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3046c4:
    // 0x3046c4: 0xc051d4a  jal         func_147528
label_3046c8:
    if (ctx->pc == 0x3046C8u) {
        ctx->pc = 0x3046C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046C4u;
        // 0x3046c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046CCu;
        goto label_3046cc;
    }
    ctx->pc = 0x3046C4u;
    SET_GPR_U32(ctx, 31, 0x3046CCu);
    ctx->pc = 0x3046C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046C4u;
    // 0x3046c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x3046C4u, 0x3046CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046CCu;
label_3046cc:
    // 0x3046cc: 0x92630254  lbu         $v1, 0x254($s3)
    ctx->pc = 0x3046ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 596)));
label_3046d0:
    // 0x3046d0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_3046d4:
    if (ctx->pc == 0x3046D4u) {
        ctx->pc = 0x3046D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046D0u;
        // 0x3046d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046D8u;
        goto label_3046d8;
    }
    ctx->pc = 0x3046D0u;
    {
        const bool branch_taken_0x3046d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3046D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046D0u;
        // 0x3046d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3046d0) {
            ctx->pc = 0x3046F4u;
            goto label_3046f4;
        }
    }
    ctx->pc = 0x3046D8u;
label_3046d8:
    // 0x3046d8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x3046d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3046dc:
    // 0x3046dc: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x3046dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3046e0:
    // 0x3046e0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3046e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3046e4:
    // 0x3046e4: 0xc07df52  jal         func_1F7D48
label_3046e8:
    if (ctx->pc == 0x3046E8u) {
        ctx->pc = 0x3046E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046E4u;
        // 0x3046e8: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046ECu;
        goto label_3046ec;
    }
    ctx->pc = 0x3046E4u;
    SET_GPR_U32(ctx, 31, 0x3046ECu);
    ctx->pc = 0x3046E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046E4u;
    // 0x3046e8: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x3046E4u, 0x3046ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046ECu;
label_3046ec:
    // 0x3046ec: 0x10000012  b           . + 4 + (0x12 << 2)
label_3046f0:
    if (ctx->pc == 0x3046F0u) {
        ctx->pc = 0x3046F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046ECu;
        // 0x3046f0: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046F4u;
        goto label_3046f4;
    }
    ctx->pc = 0x3046ECu;
    {
        const bool branch_taken_0x3046ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3046F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046ECu;
        // 0x3046f0: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3046ec) {
            ctx->pc = 0x304738u;
            goto label_304738;
        }
    }
    ctx->pc = 0x3046F4u;
label_3046f4:
    // 0x3046f4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_3046f8:
    if (ctx->pc == 0x3046F8u) {
        ctx->pc = 0x3046F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046F4u;
        // 0x3046f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046FCu;
        goto label_3046fc;
    }
    ctx->pc = 0x3046F4u;
    {
        const bool branch_taken_0x3046f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3046F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046F4u;
        // 0x3046f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3046f4) {
            ctx->pc = 0x304718u;
            goto label_304718;
        }
    }
    ctx->pc = 0x3046FCu;
label_3046fc:
    // 0x3046fc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x3046fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_304700:
    // 0x304700: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x304700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_304704:
    // 0x304704: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x304704u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_304708:
    // 0x304708: 0xc07df52  jal         func_1F7D48
label_30470c:
    if (ctx->pc == 0x30470Cu) {
        ctx->pc = 0x30470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304708u;
        // 0x30470c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x304710u;
        goto label_304710;
    }
    ctx->pc = 0x304708u;
    SET_GPR_U32(ctx, 31, 0x304710u);
    ctx->pc = 0x30470Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304708u;
    // 0x30470c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x304708u, 0x304710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304710u;
label_304710:
    // 0x304710: 0x10000009  b           . + 4 + (0x9 << 2)
label_304714:
    if (ctx->pc == 0x304714u) {
        ctx->pc = 0x304714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304710u;
        // 0x304714: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x304718u;
        goto label_304718;
    }
    ctx->pc = 0x304710u;
    {
        const bool branch_taken_0x304710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304710u;
        // 0x304714: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304710) {
            ctx->pc = 0x304738u;
            goto label_304738;
        }
    }
    ctx->pc = 0x304718u;
label_304718:
    // 0x304718: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_30471c:
    if (ctx->pc == 0x30471Cu) {
        ctx->pc = 0x30471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304718u;
        // 0x30471c: 0x8e620100  lw          $v0, 0x100($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304720u;
        goto label_304720;
    }
    ctx->pc = 0x304718u;
    {
        const bool branch_taken_0x304718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x304718) {
            ctx->pc = 0x30471Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304718u;
            // 0x30471c: 0x8e620100  lw          $v0, 0x100($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30473Cu;
            goto label_30473c;
        }
    }
    ctx->pc = 0x304720u;
label_304720:
    // 0x304720: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x304720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_304724:
    // 0x304724: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x304724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_304728:
    // 0x304728: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x304728u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_30472c:
    // 0x30472c: 0xc07df52  jal         func_1F7D48
label_304730:
    if (ctx->pc == 0x304730u) {
        ctx->pc = 0x304730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30472Cu;
        // 0x304730: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x304734u;
        goto label_304734;
    }
    ctx->pc = 0x30472Cu;
    SET_GPR_U32(ctx, 31, 0x304734u);
    ctx->pc = 0x304730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30472Cu;
    // 0x304730: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x30472Cu, 0x304734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304734u;
label_304734:
    // 0x304734: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x304734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_304738:
    // 0x304738: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x304738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_30473c:
    // 0x30473c: 0xc0beaa2  jal         func_2FAA88
label_304740:
    if (ctx->pc == 0x304740u) {
        ctx->pc = 0x304740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30473Cu;
        // 0x304740: 0x90440133  lbu         $a0, 0x133($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 307)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304744u;
        goto label_304744;
    }
    ctx->pc = 0x30473Cu;
    SET_GPR_U32(ctx, 31, 0x304744u);
    ctx->pc = 0x304740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30473Cu;
    // 0x304740: 0x90440133  lbu         $a0, 0x133($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 307)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAA88u, 0x30473Cu, 0x304744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304744u;
label_304744:
    // 0x304744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x304744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304748:
    // 0x304748: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
label_30474c:
    if (ctx->pc == 0x30474Cu) {
        ctx->pc = 0x30474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304748u;
        // 0x30474c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304750u;
        goto label_304750;
    }
    ctx->pc = 0x304748u;
    {
        const bool branch_taken_0x304748 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304748u;
        // 0x30474c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304748) {
            ctx->pc = 0x3047E0u;
            goto label_3047e0;
        }
    }
    ctx->pc = 0x304750u;
label_304750:
    // 0x304750: 0xc67401e0  lwc1        $f20, 0x1E0($s3)
    ctx->pc = 0x304750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_304754:
    // 0x304754: 0xc6600250  lwc1        $f0, 0x250($s3)
    ctx->pc = 0x304754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_304758:
    // 0x304758: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x304758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_30475c:
    // 0x30475c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x30475cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_304760:
    // 0x304760: 0xe66001e0  swc1        $f0, 0x1E0($s3)
    ctx->pc = 0x304760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 480), bits); }
label_304764:
    // 0x304764: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x304764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_304768:
    // 0x304768: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x304768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_30476c:
    // 0x30476c: 0x40f809  jalr        $v0
label_304770:
    if (ctx->pc == 0x304770u) {
        ctx->pc = 0x304770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30476Cu;
        // 0x304770: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304774u;
        goto label_304774;
    }
    ctx->pc = 0x30476Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x304774u);
        ctx->pc = 0x304770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30476Cu;
        // 0x304770: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30476Cu, 0x304774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x304774u;
label_304774:
    // 0x304774: 0xe67401e0  swc1        $f20, 0x1E0($s3)
    ctx->pc = 0x304774u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 480), bits); }
label_304778:
    // 0x304778: 0x266501a0  addiu       $a1, $s3, 0x1A0
    ctx->pc = 0x304778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 416));
label_30477c:
    // 0x30477c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x30477cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_304780:
    // 0x304780: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x304780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_304784:
    // 0x304784: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x304784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_304788:
    // 0x304788: 0x40f809  jalr        $v0
label_30478c:
    if (ctx->pc == 0x30478Cu) {
        ctx->pc = 0x30478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304788u;
        // 0x30478c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304790u;
        goto label_304790;
    }
    ctx->pc = 0x304788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x304790u);
        ctx->pc = 0x30478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304788u;
        // 0x30478c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304788u, 0x304790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x304790u;
label_304790:
    // 0x304790: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_304794:
    if (ctx->pc == 0x304794u) {
        ctx->pc = 0x304794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304790u;
        // 0x304794: 0x8e620100  lw          $v0, 0x100($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304798u;
        goto label_304798;
    }
    ctx->pc = 0x304790u;
    {
        const bool branch_taken_0x304790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304790) {
            ctx->pc = 0x304794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304790u;
            // 0x304794: 0x8e620100  lw          $v0, 0x100($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3047A4u;
            goto label_3047a4;
        }
    }
    ctx->pc = 0x304798u;
label_304798:
    // 0x304798: 0xc0bef94  jal         func_2FBE50
label_30479c:
    if (ctx->pc == 0x30479Cu) {
        ctx->pc = 0x30479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304798u;
        // 0x30479c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047A0u;
        goto label_3047a0;
    }
    ctx->pc = 0x304798u;
    SET_GPR_U32(ctx, 31, 0x3047A0u);
    ctx->pc = 0x30479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304798u;
    // 0x30479c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x304798u, 0x3047A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3047A0u;
label_3047a0:
    // 0x3047a0: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x3047a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_3047a4:
    // 0x3047a4: 0x82030103  lb          $v1, 0x103($s0)
    ctx->pc = 0x3047a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 259)));
label_3047a8:
    // 0x3047a8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3047ac:
    if (ctx->pc == 0x3047ACu) {
        ctx->pc = 0x3047ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047A8u;
        // 0x3047ac: 0x804400be  lb          $a0, 0xBE($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 190)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047B0u;
        goto label_3047b0;
    }
    ctx->pc = 0x3047A8u;
    {
        const bool branch_taken_0x3047a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3047ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047A8u;
        // 0x3047ac: 0x804400be  lb          $a0, 0xBE($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 190)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3047a8) {
            ctx->pc = 0x3047BCu;
            goto label_3047bc;
        }
    }
    ctx->pc = 0x3047B0u;
label_3047b0:
    // 0x3047b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3047b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3047b4:
    // 0x3047b4: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_3047b8:
    if (ctx->pc == 0x3047B8u) {
        ctx->pc = 0x3047BCu;
        goto label_3047bc;
    }
    ctx->pc = 0x3047B4u;
    {
        const bool branch_taken_0x3047b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3047b4) {
            ctx->pc = 0x3047D8u;
            goto label_3047d8;
        }
    }
    ctx->pc = 0x3047BCu;
label_3047bc:
    // 0x3047bc: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x3047bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_3047c0:
    // 0x3047c0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x3047c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_3047c4:
    // 0x3047c4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x3047c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_3047c8:
    // 0x3047c8: 0x60f809  jalr        $v1
label_3047cc:
    if (ctx->pc == 0x3047CCu) {
        ctx->pc = 0x3047CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047C8u;
        // 0x3047cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047D0u;
        goto label_3047d0;
    }
    ctx->pc = 0x3047C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3047D0u);
        ctx->pc = 0x3047CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047C8u;
        // 0x3047cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3047C8u, 0x3047D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3047D0u;
label_3047d0:
    // 0x3047d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3047d4:
    if (ctx->pc == 0x3047D4u) {
        ctx->pc = 0x3047D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047D0u;
        // 0x3047d4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047D8u;
        goto label_3047d8;
    }
    ctx->pc = 0x3047D0u;
    {
        const bool branch_taken_0x3047d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3047D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047D0u;
        // 0x3047d4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3047d0) {
            ctx->pc = 0x3047E4u;
            goto label_3047e4;
        }
    }
    ctx->pc = 0x3047D8u;
label_3047d8:
    // 0x3047d8: 0xc0bf358  jal         func_2FCD60
label_3047dc:
    if (ctx->pc == 0x3047DCu) {
        ctx->pc = 0x3047DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047D8u;
        // 0x3047dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047E0u;
        goto label_3047e0;
    }
    ctx->pc = 0x3047D8u;
    SET_GPR_U32(ctx, 31, 0x3047E0u);
    ctx->pc = 0x3047DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3047D8u;
    // 0x3047dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCD60u, 0x3047D8u, 0x3047E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3047E0u;
label_3047e0:
    // 0x3047e0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3047e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3047e4:
    // 0x3047e4: 0x1c40ff9a  bgtz        $v0, . + 4 + (-0x66 << 2)
label_3047e8:
    if (ctx->pc == 0x3047E8u) {
        ctx->pc = 0x3047E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047E4u;
        // 0x3047e8: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047ECu;
        goto label_3047ec;
    }
    ctx->pc = 0x3047E4u;
    {
        const bool branch_taken_0x3047e4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3047E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047E4u;
        // 0x3047e8: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3047e4) {
            ctx->pc = 0x304650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304650;
        }
    }
    ctx->pc = 0x3047ECu;
label_3047ec:
    // 0x3047ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3047ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3047f0:
    // 0x3047f0: 0xc0ad8d4  jal         func_2B6350
label_3047f4:
    if (ctx->pc == 0x3047F4u) {
        ctx->pc = 0x3047F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047F0u;
        // 0x3047f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047F8u;
        goto label_3047f8;
    }
    ctx->pc = 0x3047F0u;
    SET_GPR_U32(ctx, 31, 0x3047F8u);
    ctx->pc = 0x3047F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3047F0u;
    // 0x3047f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6350u, 0x3047F0u, 0x3047F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3047F8u;
label_3047f8:
    // 0x3047f8: 0x7bb00220  lq          $s0, 0x220($sp)
    ctx->pc = 0x3047f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_3047fc:
    // 0x3047fc: 0x7bb10210  lq          $s1, 0x210($sp)
    ctx->pc = 0x3047fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_304800:
    // 0x304800: 0x7bb20200  lq          $s2, 0x200($sp)
    ctx->pc = 0x304800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_304804:
    // 0x304804: 0x7bb301f0  lq          $s3, 0x1F0($sp)
    ctx->pc = 0x304804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_304808:
    // 0x304808: 0x7bb401e0  lq          $s4, 0x1E0($sp)
    ctx->pc = 0x304808u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_30480c:
    // 0x30480c: 0x7bb501d0  lq          $s5, 0x1D0($sp)
    ctx->pc = 0x30480cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_304810:
    // 0x304810: 0x7bb601c0  lq          $s6, 0x1C0($sp)
    ctx->pc = 0x304810u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_304814:
    // 0x304814: 0x7bb701b0  lq          $s7, 0x1B0($sp)
    ctx->pc = 0x304814u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_304818:
    // 0x304818: 0x7bbe01a0  lq          $fp, 0x1A0($sp)
    ctx->pc = 0x304818u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_30481c:
    // 0x30481c: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x30481cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_304820:
    // 0x304820: 0xc7b50238  lwc1        $f21, 0x238($sp)
    ctx->pc = 0x304820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_304824:
    // 0x304824: 0xc7b40230  lwc1        $f20, 0x230($sp)
    ctx->pc = 0x304824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_304828:
    // 0x304828: 0x3e00008  jr          $ra
label_30482c:
    if (ctx->pc == 0x30482Cu) {
        ctx->pc = 0x30482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304828u;
        // 0x30482c: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304830u;
        goto label_fallthrough_0x304828;
    }
    ctx->pc = 0x304828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304828u;
        // 0x30482c: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x304828:
    ctx->pc = 0x304830u;
}
