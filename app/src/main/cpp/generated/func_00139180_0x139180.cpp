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

// Function: func_00139180
// Address: 0x139180 - 0x139820
void func_00139180_0x139180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00139180_0x139180");
#endif

    switch (ctx->pc) {
        case 0x139180u: goto label_139180;
        case 0x139184u: goto label_139184;
        case 0x139188u: goto label_139188;
        case 0x13918cu: goto label_13918c;
        case 0x139190u: goto label_139190;
        case 0x139194u: goto label_139194;
        case 0x139198u: goto label_139198;
        case 0x13919cu: goto label_13919c;
        case 0x1391a0u: goto label_1391a0;
        case 0x1391a4u: goto label_1391a4;
        case 0x1391a8u: goto label_1391a8;
        case 0x1391acu: goto label_1391ac;
        case 0x1391b0u: goto label_1391b0;
        case 0x1391b4u: goto label_1391b4;
        case 0x1391b8u: goto label_1391b8;
        case 0x1391bcu: goto label_1391bc;
        case 0x1391c0u: goto label_1391c0;
        case 0x1391c4u: goto label_1391c4;
        case 0x1391c8u: goto label_1391c8;
        case 0x1391ccu: goto label_1391cc;
        case 0x1391d0u: goto label_1391d0;
        case 0x1391d4u: goto label_1391d4;
        case 0x1391d8u: goto label_1391d8;
        case 0x1391dcu: goto label_1391dc;
        case 0x1391e0u: goto label_1391e0;
        case 0x1391e4u: goto label_1391e4;
        case 0x1391e8u: goto label_1391e8;
        case 0x1391ecu: goto label_1391ec;
        case 0x1391f0u: goto label_1391f0;
        case 0x1391f4u: goto label_1391f4;
        case 0x1391f8u: goto label_1391f8;
        case 0x1391fcu: goto label_1391fc;
        case 0x139200u: goto label_139200;
        case 0x139204u: goto label_139204;
        case 0x139208u: goto label_139208;
        case 0x13920cu: goto label_13920c;
        case 0x139210u: goto label_139210;
        case 0x139214u: goto label_139214;
        case 0x139218u: goto label_139218;
        case 0x13921cu: goto label_13921c;
        case 0x139220u: goto label_139220;
        case 0x139224u: goto label_139224;
        case 0x139228u: goto label_139228;
        case 0x13922cu: goto label_13922c;
        case 0x139230u: goto label_139230;
        case 0x139234u: goto label_139234;
        case 0x139238u: goto label_139238;
        case 0x13923cu: goto label_13923c;
        case 0x139240u: goto label_139240;
        case 0x139244u: goto label_139244;
        case 0x139248u: goto label_139248;
        case 0x13924cu: goto label_13924c;
        case 0x139250u: goto label_139250;
        case 0x139254u: goto label_139254;
        case 0x139258u: goto label_139258;
        case 0x13925cu: goto label_13925c;
        case 0x139260u: goto label_139260;
        case 0x139264u: goto label_139264;
        case 0x139268u: goto label_139268;
        case 0x13926cu: goto label_13926c;
        case 0x139270u: goto label_139270;
        case 0x139274u: goto label_139274;
        case 0x139278u: goto label_139278;
        case 0x13927cu: goto label_13927c;
        case 0x139280u: goto label_139280;
        case 0x139284u: goto label_139284;
        case 0x139288u: goto label_139288;
        case 0x13928cu: goto label_13928c;
        case 0x139290u: goto label_139290;
        case 0x139294u: goto label_139294;
        case 0x139298u: goto label_139298;
        case 0x13929cu: goto label_13929c;
        case 0x1392a0u: goto label_1392a0;
        case 0x1392a4u: goto label_1392a4;
        case 0x1392a8u: goto label_1392a8;
        case 0x1392acu: goto label_1392ac;
        case 0x1392b0u: goto label_1392b0;
        case 0x1392b4u: goto label_1392b4;
        case 0x1392b8u: goto label_1392b8;
        case 0x1392bcu: goto label_1392bc;
        case 0x1392c0u: goto label_1392c0;
        case 0x1392c4u: goto label_1392c4;
        case 0x1392c8u: goto label_1392c8;
        case 0x1392ccu: goto label_1392cc;
        case 0x1392d0u: goto label_1392d0;
        case 0x1392d4u: goto label_1392d4;
        case 0x1392d8u: goto label_1392d8;
        case 0x1392dcu: goto label_1392dc;
        case 0x1392e0u: goto label_1392e0;
        case 0x1392e4u: goto label_1392e4;
        case 0x1392e8u: goto label_1392e8;
        case 0x1392ecu: goto label_1392ec;
        case 0x1392f0u: goto label_1392f0;
        case 0x1392f4u: goto label_1392f4;
        case 0x1392f8u: goto label_1392f8;
        case 0x1392fcu: goto label_1392fc;
        case 0x139300u: goto label_139300;
        case 0x139304u: goto label_139304;
        case 0x139308u: goto label_139308;
        case 0x13930cu: goto label_13930c;
        case 0x139310u: goto label_139310;
        case 0x139314u: goto label_139314;
        case 0x139318u: goto label_139318;
        case 0x13931cu: goto label_13931c;
        case 0x139320u: goto label_139320;
        case 0x139324u: goto label_139324;
        case 0x139328u: goto label_139328;
        case 0x13932cu: goto label_13932c;
        case 0x139330u: goto label_139330;
        case 0x139334u: goto label_139334;
        case 0x139338u: goto label_139338;
        case 0x13933cu: goto label_13933c;
        case 0x139340u: goto label_139340;
        case 0x139344u: goto label_139344;
        case 0x139348u: goto label_139348;
        case 0x13934cu: goto label_13934c;
        case 0x139350u: goto label_139350;
        case 0x139354u: goto label_139354;
        case 0x139358u: goto label_139358;
        case 0x13935cu: goto label_13935c;
        case 0x139360u: goto label_139360;
        case 0x139364u: goto label_139364;
        case 0x139368u: goto label_139368;
        case 0x13936cu: goto label_13936c;
        case 0x139370u: goto label_139370;
        case 0x139374u: goto label_139374;
        case 0x139378u: goto label_139378;
        case 0x13937cu: goto label_13937c;
        case 0x139380u: goto label_139380;
        case 0x139384u: goto label_139384;
        case 0x139388u: goto label_139388;
        case 0x13938cu: goto label_13938c;
        case 0x139390u: goto label_139390;
        case 0x139394u: goto label_139394;
        case 0x139398u: goto label_139398;
        case 0x13939cu: goto label_13939c;
        case 0x1393a0u: goto label_1393a0;
        case 0x1393a4u: goto label_1393a4;
        case 0x1393a8u: goto label_1393a8;
        case 0x1393acu: goto label_1393ac;
        case 0x1393b0u: goto label_1393b0;
        case 0x1393b4u: goto label_1393b4;
        case 0x1393b8u: goto label_1393b8;
        case 0x1393bcu: goto label_1393bc;
        case 0x1393c0u: goto label_1393c0;
        case 0x1393c4u: goto label_1393c4;
        case 0x1393c8u: goto label_1393c8;
        case 0x1393ccu: goto label_1393cc;
        case 0x1393d0u: goto label_1393d0;
        case 0x1393d4u: goto label_1393d4;
        case 0x1393d8u: goto label_1393d8;
        case 0x1393dcu: goto label_1393dc;
        case 0x1393e0u: goto label_1393e0;
        case 0x1393e4u: goto label_1393e4;
        case 0x1393e8u: goto label_1393e8;
        case 0x1393ecu: goto label_1393ec;
        case 0x1393f0u: goto label_1393f0;
        case 0x1393f4u: goto label_1393f4;
        case 0x1393f8u: goto label_1393f8;
        case 0x1393fcu: goto label_1393fc;
        case 0x139400u: goto label_139400;
        case 0x139404u: goto label_139404;
        case 0x139408u: goto label_139408;
        case 0x13940cu: goto label_13940c;
        case 0x139410u: goto label_139410;
        case 0x139414u: goto label_139414;
        case 0x139418u: goto label_139418;
        case 0x13941cu: goto label_13941c;
        case 0x139420u: goto label_139420;
        case 0x139424u: goto label_139424;
        case 0x139428u: goto label_139428;
        case 0x13942cu: goto label_13942c;
        case 0x139430u: goto label_139430;
        case 0x139434u: goto label_139434;
        case 0x139438u: goto label_139438;
        case 0x13943cu: goto label_13943c;
        case 0x139440u: goto label_139440;
        case 0x139444u: goto label_139444;
        case 0x139448u: goto label_139448;
        case 0x13944cu: goto label_13944c;
        case 0x139450u: goto label_139450;
        case 0x139454u: goto label_139454;
        case 0x139458u: goto label_139458;
        case 0x13945cu: goto label_13945c;
        case 0x139460u: goto label_139460;
        case 0x139464u: goto label_139464;
        case 0x139468u: goto label_139468;
        case 0x13946cu: goto label_13946c;
        case 0x139470u: goto label_139470;
        case 0x139474u: goto label_139474;
        case 0x139478u: goto label_139478;
        case 0x13947cu: goto label_13947c;
        case 0x139480u: goto label_139480;
        case 0x139484u: goto label_139484;
        case 0x139488u: goto label_139488;
        case 0x13948cu: goto label_13948c;
        case 0x139490u: goto label_139490;
        case 0x139494u: goto label_139494;
        case 0x139498u: goto label_139498;
        case 0x13949cu: goto label_13949c;
        case 0x1394a0u: goto label_1394a0;
        case 0x1394a4u: goto label_1394a4;
        case 0x1394a8u: goto label_1394a8;
        case 0x1394acu: goto label_1394ac;
        case 0x1394b0u: goto label_1394b0;
        case 0x1394b4u: goto label_1394b4;
        case 0x1394b8u: goto label_1394b8;
        case 0x1394bcu: goto label_1394bc;
        case 0x1394c0u: goto label_1394c0;
        case 0x1394c4u: goto label_1394c4;
        case 0x1394c8u: goto label_1394c8;
        case 0x1394ccu: goto label_1394cc;
        case 0x1394d0u: goto label_1394d0;
        case 0x1394d4u: goto label_1394d4;
        case 0x1394d8u: goto label_1394d8;
        case 0x1394dcu: goto label_1394dc;
        case 0x1394e0u: goto label_1394e0;
        case 0x1394e4u: goto label_1394e4;
        case 0x1394e8u: goto label_1394e8;
        case 0x1394ecu: goto label_1394ec;
        case 0x1394f0u: goto label_1394f0;
        case 0x1394f4u: goto label_1394f4;
        case 0x1394f8u: goto label_1394f8;
        case 0x1394fcu: goto label_1394fc;
        case 0x139500u: goto label_139500;
        case 0x139504u: goto label_139504;
        case 0x139508u: goto label_139508;
        case 0x13950cu: goto label_13950c;
        case 0x139510u: goto label_139510;
        case 0x139514u: goto label_139514;
        case 0x139518u: goto label_139518;
        case 0x13951cu: goto label_13951c;
        case 0x139520u: goto label_139520;
        case 0x139524u: goto label_139524;
        case 0x139528u: goto label_139528;
        case 0x13952cu: goto label_13952c;
        case 0x139530u: goto label_139530;
        case 0x139534u: goto label_139534;
        case 0x139538u: goto label_139538;
        case 0x13953cu: goto label_13953c;
        case 0x139540u: goto label_139540;
        case 0x139544u: goto label_139544;
        case 0x139548u: goto label_139548;
        case 0x13954cu: goto label_13954c;
        case 0x139550u: goto label_139550;
        case 0x139554u: goto label_139554;
        case 0x139558u: goto label_139558;
        case 0x13955cu: goto label_13955c;
        case 0x139560u: goto label_139560;
        case 0x139564u: goto label_139564;
        case 0x139568u: goto label_139568;
        case 0x13956cu: goto label_13956c;
        case 0x139570u: goto label_139570;
        case 0x139574u: goto label_139574;
        case 0x139578u: goto label_139578;
        case 0x13957cu: goto label_13957c;
        case 0x139580u: goto label_139580;
        case 0x139584u: goto label_139584;
        case 0x139588u: goto label_139588;
        case 0x13958cu: goto label_13958c;
        case 0x139590u: goto label_139590;
        case 0x139594u: goto label_139594;
        case 0x139598u: goto label_139598;
        case 0x13959cu: goto label_13959c;
        case 0x1395a0u: goto label_1395a0;
        case 0x1395a4u: goto label_1395a4;
        case 0x1395a8u: goto label_1395a8;
        case 0x1395acu: goto label_1395ac;
        case 0x1395b0u: goto label_1395b0;
        case 0x1395b4u: goto label_1395b4;
        case 0x1395b8u: goto label_1395b8;
        case 0x1395bcu: goto label_1395bc;
        case 0x1395c0u: goto label_1395c0;
        case 0x1395c4u: goto label_1395c4;
        case 0x1395c8u: goto label_1395c8;
        case 0x1395ccu: goto label_1395cc;
        case 0x1395d0u: goto label_1395d0;
        case 0x1395d4u: goto label_1395d4;
        case 0x1395d8u: goto label_1395d8;
        case 0x1395dcu: goto label_1395dc;
        case 0x1395e0u: goto label_1395e0;
        case 0x1395e4u: goto label_1395e4;
        case 0x1395e8u: goto label_1395e8;
        case 0x1395ecu: goto label_1395ec;
        case 0x1395f0u: goto label_1395f0;
        case 0x1395f4u: goto label_1395f4;
        case 0x1395f8u: goto label_1395f8;
        case 0x1395fcu: goto label_1395fc;
        case 0x139600u: goto label_139600;
        case 0x139604u: goto label_139604;
        case 0x139608u: goto label_139608;
        case 0x13960cu: goto label_13960c;
        case 0x139610u: goto label_139610;
        case 0x139614u: goto label_139614;
        case 0x139618u: goto label_139618;
        case 0x13961cu: goto label_13961c;
        case 0x139620u: goto label_139620;
        case 0x139624u: goto label_139624;
        case 0x139628u: goto label_139628;
        case 0x13962cu: goto label_13962c;
        case 0x139630u: goto label_139630;
        case 0x139634u: goto label_139634;
        case 0x139638u: goto label_139638;
        case 0x13963cu: goto label_13963c;
        case 0x139640u: goto label_139640;
        case 0x139644u: goto label_139644;
        case 0x139648u: goto label_139648;
        case 0x13964cu: goto label_13964c;
        case 0x139650u: goto label_139650;
        case 0x139654u: goto label_139654;
        case 0x139658u: goto label_139658;
        case 0x13965cu: goto label_13965c;
        case 0x139660u: goto label_139660;
        case 0x139664u: goto label_139664;
        case 0x139668u: goto label_139668;
        case 0x13966cu: goto label_13966c;
        case 0x139670u: goto label_139670;
        case 0x139674u: goto label_139674;
        case 0x139678u: goto label_139678;
        case 0x13967cu: goto label_13967c;
        case 0x139680u: goto label_139680;
        case 0x139684u: goto label_139684;
        case 0x139688u: goto label_139688;
        case 0x13968cu: goto label_13968c;
        case 0x139690u: goto label_139690;
        case 0x139694u: goto label_139694;
        case 0x139698u: goto label_139698;
        case 0x13969cu: goto label_13969c;
        case 0x1396a0u: goto label_1396a0;
        case 0x1396a4u: goto label_1396a4;
        case 0x1396a8u: goto label_1396a8;
        case 0x1396acu: goto label_1396ac;
        case 0x1396b0u: goto label_1396b0;
        case 0x1396b4u: goto label_1396b4;
        case 0x1396b8u: goto label_1396b8;
        case 0x1396bcu: goto label_1396bc;
        case 0x1396c0u: goto label_1396c0;
        case 0x1396c4u: goto label_1396c4;
        case 0x1396c8u: goto label_1396c8;
        case 0x1396ccu: goto label_1396cc;
        case 0x1396d0u: goto label_1396d0;
        case 0x1396d4u: goto label_1396d4;
        case 0x1396d8u: goto label_1396d8;
        case 0x1396dcu: goto label_1396dc;
        case 0x1396e0u: goto label_1396e0;
        case 0x1396e4u: goto label_1396e4;
        case 0x1396e8u: goto label_1396e8;
        case 0x1396ecu: goto label_1396ec;
        case 0x1396f0u: goto label_1396f0;
        case 0x1396f4u: goto label_1396f4;
        case 0x1396f8u: goto label_1396f8;
        case 0x1396fcu: goto label_1396fc;
        case 0x139700u: goto label_139700;
        case 0x139704u: goto label_139704;
        case 0x139708u: goto label_139708;
        case 0x13970cu: goto label_13970c;
        case 0x139710u: goto label_139710;
        case 0x139714u: goto label_139714;
        case 0x139718u: goto label_139718;
        case 0x13971cu: goto label_13971c;
        case 0x139720u: goto label_139720;
        case 0x139724u: goto label_139724;
        case 0x139728u: goto label_139728;
        case 0x13972cu: goto label_13972c;
        case 0x139730u: goto label_139730;
        case 0x139734u: goto label_139734;
        case 0x139738u: goto label_139738;
        case 0x13973cu: goto label_13973c;
        case 0x139740u: goto label_139740;
        case 0x139744u: goto label_139744;
        case 0x139748u: goto label_139748;
        case 0x13974cu: goto label_13974c;
        case 0x139750u: goto label_139750;
        case 0x139754u: goto label_139754;
        case 0x139758u: goto label_139758;
        case 0x13975cu: goto label_13975c;
        case 0x139760u: goto label_139760;
        case 0x139764u: goto label_139764;
        case 0x139768u: goto label_139768;
        case 0x13976cu: goto label_13976c;
        case 0x139770u: goto label_139770;
        case 0x139774u: goto label_139774;
        case 0x139778u: goto label_139778;
        case 0x13977cu: goto label_13977c;
        case 0x139780u: goto label_139780;
        case 0x139784u: goto label_139784;
        case 0x139788u: goto label_139788;
        case 0x13978cu: goto label_13978c;
        case 0x139790u: goto label_139790;
        case 0x139794u: goto label_139794;
        case 0x139798u: goto label_139798;
        case 0x13979cu: goto label_13979c;
        case 0x1397a0u: goto label_1397a0;
        case 0x1397a4u: goto label_1397a4;
        case 0x1397a8u: goto label_1397a8;
        case 0x1397acu: goto label_1397ac;
        case 0x1397b0u: goto label_1397b0;
        case 0x1397b4u: goto label_1397b4;
        case 0x1397b8u: goto label_1397b8;
        case 0x1397bcu: goto label_1397bc;
        case 0x1397c0u: goto label_1397c0;
        case 0x1397c4u: goto label_1397c4;
        case 0x1397c8u: goto label_1397c8;
        case 0x1397ccu: goto label_1397cc;
        case 0x1397d0u: goto label_1397d0;
        case 0x1397d4u: goto label_1397d4;
        case 0x1397d8u: goto label_1397d8;
        case 0x1397dcu: goto label_1397dc;
        case 0x1397e0u: goto label_1397e0;
        case 0x1397e4u: goto label_1397e4;
        case 0x1397e8u: goto label_1397e8;
        case 0x1397ecu: goto label_1397ec;
        case 0x1397f0u: goto label_1397f0;
        case 0x1397f4u: goto label_1397f4;
        case 0x1397f8u: goto label_1397f8;
        case 0x1397fcu: goto label_1397fc;
        case 0x139800u: goto label_139800;
        case 0x139804u: goto label_139804;
        case 0x139808u: goto label_139808;
        case 0x13980cu: goto label_13980c;
        case 0x139810u: goto label_139810;
        case 0x139814u: goto label_139814;
        case 0x139818u: goto label_139818;
        case 0x13981cu: goto label_13981c;
        default: break;
    }

    ctx->pc = 0x139180u;

label_139180:
    // 0x139180: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x139180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_139184:
    // 0x139184: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x139184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_139188:
    // 0x139188: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x139188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_13918c:
    // 0x13918c: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x13918cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_139190:
    // 0x139190: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x139190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_139194:
    // 0x139194: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x139194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_139198:
    // 0x139198: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x139198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_13919c:
    // 0x13919c: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x13919cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
label_1391a0:
    // 0x1391a0: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1391a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_1391a4:
    // 0x1391a4: 0xe7b80180  swc1        $f24, 0x180($sp)
    ctx->pc = 0x1391a4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_1391a8:
    // 0x1391a8: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x1391a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_1391ac:
    // 0x1391ac: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x1391acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_1391b0:
    // 0x1391b0: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x1391b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_1391b4:
    // 0x1391b4: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x1391b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1391b8:
    // 0x1391b8: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1391b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_1391bc:
    // 0x1391bc: 0x8e7003a4  lw          $s0, 0x3A4($s3)
    ctx->pc = 0x1391bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 932)));
label_1391c0:
    // 0x1391c0: 0x26120008  addiu       $s2, $s0, 0x8
    ctx->pc = 0x1391c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1391c4:
    // 0x1391c4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1391c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1391c8:
    // 0x1391c8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1391c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_1391cc:
    // 0x1391cc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1391ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1391d0:
    // 0x1391d0: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x1391d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
label_1391d4:
    // 0x1391d4: 0x2631d910  addiu       $s1, $s1, -0x26F0
    ctx->pc = 0x1391d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957328));
label_1391d8:
    // 0x1391d8: 0xc66c03a8  lwc1        $f12, 0x3A8($s3)
    ctx->pc = 0x1391d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1391dc:
    // 0x1391dc: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x1391dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
label_1391e0:
    // 0x1391e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1391e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1391e4:
    // 0x1391e4: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x1391e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_1391e8:
    // 0x1391e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1391e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1391ec:
    // 0x1391ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1391ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1391f0:
    // 0x1391f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1391f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1391f4:
    // 0x1391f4: 0x60f809  jalr        $v1
label_1391f8:
    if (ctx->pc == 0x1391F8u) {
        ctx->pc = 0x1391F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391F4u;
        // 0x1391f8: 0x26120014  addiu       $s2, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1391FCu;
        goto label_1391fc;
    }
    ctx->pc = 0x1391F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1391FCu);
        ctx->pc = 0x1391F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391F4u;
        // 0x1391f8: 0x26120014  addiu       $s2, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1391F4u, 0x1391FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1391FCu;
label_1391fc:
    // 0x1391fc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1391fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_139200:
    // 0x139200: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x139200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_139204:
    // 0x139204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139208:
    // 0x139208: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x139208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_13920c:
    // 0x13920c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x13920cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_139210:
    // 0x139210: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x139210u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
label_139214:
    // 0x139214: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x139214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_139218:
    // 0x139218: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x139218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_13921c:
    // 0x13921c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13921cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_139220:
    // 0x139220: 0x60f809  jalr        $v1
label_139224:
    if (ctx->pc == 0x139224u) {
        ctx->pc = 0x139224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139220u;
        // 0x139224: 0xc66c03a8  lwc1        $f12, 0x3A8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x139228u;
        goto label_139228;
    }
    ctx->pc = 0x139220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x139228u);
        ctx->pc = 0x139224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139220u;
        // 0x139224: 0xc66c03a8  lwc1        $f12, 0x3A8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139220u, 0x139228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139228u;
label_139228:
    // 0x139228: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x139228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_13922c:
    // 0x13922c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13922cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_139230:
    // 0x139230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139234:
    // 0x139234: 0x2612002c  addiu       $s2, $s0, 0x2C
    ctx->pc = 0x139234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_139238:
    // 0x139238: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x139238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13923c:
    // 0x13923c: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x13923cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
label_139240:
    // 0x139240: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x139240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_139244:
    // 0x139244: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x139244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_139248:
    // 0x139248: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x139248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13924c:
    // 0x13924c: 0x60f809  jalr        $v1
label_139250:
    if (ctx->pc == 0x139250u) {
        ctx->pc = 0x139250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13924Cu;
        // 0x139250: 0xc66c03a8  lwc1        $f12, 0x3A8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x139254u;
        goto label_139254;
    }
    ctx->pc = 0x13924Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x139254u);
        ctx->pc = 0x139250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13924Cu;
        // 0x139250: 0xc66c03a8  lwc1        $f12, 0x3A8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13924Cu, 0x139254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139254u;
label_139254:
    // 0x139254: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x139254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_139258:
    // 0x139258: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x139258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13925c:
    // 0x13925c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13925cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139260:
    // 0x139260: 0x26120038  addiu       $s2, $s0, 0x38
    ctx->pc = 0x139260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_139264:
    // 0x139264: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x139264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_139268:
    // 0x139268: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x139268u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
label_13926c:
    // 0x13926c: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x13926cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_139270:
    // 0x139270: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x139270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_139274:
    // 0x139274: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x139274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_139278:
    // 0x139278: 0x60f809  jalr        $v1
label_13927c:
    if (ctx->pc == 0x13927Cu) {
        ctx->pc = 0x13927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139278u;
        // 0x13927c: 0xc66c03a8  lwc1        $f12, 0x3A8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x139280u;
        goto label_139280;
    }
    ctx->pc = 0x139278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x139280u);
        ctx->pc = 0x13927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139278u;
        // 0x13927c: 0xc66c03a8  lwc1        $f12, 0x3A8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139278u, 0x139280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139280u;
label_139280:
    // 0x139280: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x139280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_139284:
    // 0x139284: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x139284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_139288:
    // 0x139288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13928c:
    // 0x13928c: 0x26120044  addiu       $s2, $s0, 0x44
    ctx->pc = 0x13928cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_139290:
    // 0x139290: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x139290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_139294:
    // 0x139294: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x139294u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
label_139298:
    // 0x139298: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x139298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_13929c:
    // 0x13929c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13929cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1392a0:
    // 0x1392a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1392a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1392a4:
    // 0x1392a4: 0x60f809  jalr        $v1
label_1392a8:
    if (ctx->pc == 0x1392A8u) {
        ctx->pc = 0x1392A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1392A4u;
        // 0x1392a8: 0xc66c03a8  lwc1        $f12, 0x3A8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1392ACu;
        goto label_1392ac;
    }
    ctx->pc = 0x1392A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1392ACu);
        ctx->pc = 0x1392A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1392A4u;
        // 0x1392a8: 0xc66c03a8  lwc1        $f12, 0x3A8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1392A4u, 0x1392ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1392ACu;
label_1392ac:
    // 0x1392ac: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1392acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1392b0:
    // 0x1392b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1392b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1392b4:
    // 0x1392b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1392b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1392b8:
    // 0x1392b8: 0x26120050  addiu       $s2, $s0, 0x50
    ctx->pc = 0x1392b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1392bc:
    // 0x1392bc: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1392bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1392c0:
    // 0x1392c0: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x1392c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
label_1392c4:
    // 0x1392c4: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x1392c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_1392c8:
    // 0x1392c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1392c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1392cc:
    // 0x1392cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1392ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1392d0:
    // 0x1392d0: 0x60f809  jalr        $v1
label_1392d4:
    if (ctx->pc == 0x1392D4u) {
        ctx->pc = 0x1392D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1392D0u;
        // 0x1392d4: 0xc66c03a8  lwc1        $f12, 0x3A8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1392D8u;
        goto label_1392d8;
    }
    ctx->pc = 0x1392D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1392D8u);
        ctx->pc = 0x1392D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1392D0u;
        // 0x1392d4: 0xc66c03a8  lwc1        $f12, 0x3A8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1392D0u, 0x1392D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1392D8u;
label_1392d8:
    // 0x1392d8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1392d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1392dc:
    // 0x1392dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1392dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1392e0:
    // 0x1392e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1392e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1392e4:
    // 0x1392e4: 0x2612005c  addiu       $s2, $s0, 0x5C
    ctx->pc = 0x1392e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
label_1392e8:
    // 0x1392e8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1392e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1392ec:
    // 0x1392ec: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x1392ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
label_1392f0:
    // 0x1392f0: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x1392f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_1392f4:
    // 0x1392f4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1392f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1392f8:
    // 0x1392f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1392f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1392fc:
    // 0x1392fc: 0x60f809  jalr        $v1
label_139300:
    if (ctx->pc == 0x139300u) {
        ctx->pc = 0x139300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1392FCu;
        // 0x139300: 0xc66c03a8  lwc1        $f12, 0x3A8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x139304u;
        goto label_139304;
    }
    ctx->pc = 0x1392FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x139304u);
        ctx->pc = 0x139300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1392FCu;
        // 0x139300: 0xc66c03a8  lwc1        $f12, 0x3A8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1392FCu, 0x139304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139304u;
label_139304:
    // 0x139304: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x139304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_139308:
    // 0x139308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13930c:
    // 0x13930c: 0xc66c03a8  lwc1        $f12, 0x3A8($s3)
    ctx->pc = 0x13930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_139310:
    // 0x139310: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x139310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_139314:
    // 0x139314: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x139314u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
label_139318:
    // 0x139318: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x139318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_13931c:
    // 0x13931c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13931cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_139320:
    // 0x139320: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x139320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_139324:
    // 0x139324: 0x60f809  jalr        $v1
label_139328:
    if (ctx->pc == 0x139328u) {
        ctx->pc = 0x139328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139324u;
        // 0x139328: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13932Cu;
        goto label_13932c;
    }
    ctx->pc = 0x139324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13932Cu);
        ctx->pc = 0x139328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139324u;
        // 0x139328: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139324u, 0x13932Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13932Cu;
label_13932c:
    // 0x13932c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x13932cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_139330:
    // 0x139330: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x139330u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_139334:
    // 0x139334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139338:
    // 0x139338: 0x266503c0  addiu       $a1, $s3, 0x3C0
    ctx->pc = 0x139338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 960));
label_13933c:
    // 0x13933c: 0xc051dca  jal         func_147728
label_139340:
    if (ctx->pc == 0x139340u) {
        ctx->pc = 0x139340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13933Cu;
        // 0x139340: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139344u;
        goto label_139344;
    }
    ctx->pc = 0x13933Cu;
    SET_GPR_U32(ctx, 31, 0x139344u);
    ctx->pc = 0x139340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13933Cu;
    // 0x139340: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x13933Cu, 0x139344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139344u;
label_139344:
    // 0x139344: 0x8e6303ac  lw          $v1, 0x3AC($s3)
    ctx->pc = 0x139344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 940)));
label_139348:
    // 0x139348: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_13934c:
    if (ctx->pc == 0x13934Cu) {
        ctx->pc = 0x13934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139348u;
        // 0x13934c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139350u;
        goto label_139350;
    }
    ctx->pc = 0x139348u;
    {
        const bool branch_taken_0x139348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139348u;
        // 0x13934c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139348) {
            ctx->pc = 0x1393C8u;
            goto label_1393c8;
        }
    }
    ctx->pc = 0x139350u;
label_139350:
    // 0x139350: 0x8e6203e4  lw          $v0, 0x3E4($s3)
    ctx->pc = 0x139350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 996)));
label_139354:
    // 0x139354: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x139354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_139358:
    // 0x139358: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_13935c:
    if (ctx->pc == 0x13935Cu) {
        ctx->pc = 0x13935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139358u;
        // 0x13935c: 0x27a20070  addiu       $v0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139360u;
        goto label_139360;
    }
    ctx->pc = 0x139358u;
    {
        const bool branch_taken_0x139358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139358u;
        // 0x13935c: 0x27a20070  addiu       $v0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139358) {
            ctx->pc = 0x1393C8u;
            goto label_1393c8;
        }
    }
    ctx->pc = 0x139360u;
label_139360:
    // 0x139360: 0xc46300b8  lwc1        $f3, 0xB8($v1)
    ctx->pc = 0x139360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_139364:
    // 0x139364: 0xc46200b0  lwc1        $f2, 0xB0($v1)
    ctx->pc = 0x139364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_139368:
    // 0x139368: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x139368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13936c:
    // 0x13936c: 0xc46000b4  lwc1        $f0, 0xB4($v1)
    ctx->pc = 0x13936cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139370:
    // 0x139370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x139370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_139374:
    // 0x139374: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x139374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_139378:
    // 0x139378: 0x266303b0  addiu       $v1, $s3, 0x3B0
    ctx->pc = 0x139378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 944));
label_13937c:
    // 0x13937c: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x13937cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_139380:
    // 0x139380: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x139380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_139384:
    // 0x139384: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x139384u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_139388:
    // 0x139388: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x139388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_13938c:
    // 0x13938c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x13938cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_139390:
    // 0x139390: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x139390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_139394:
    // 0x139394: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x139394u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_139398:
    // 0x139398: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x139398u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13939c:
    // 0x13939c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x13939cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1393a0:
    // 0x1393a0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1393a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_1393a4:
    // 0x1393a4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1393a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1393a8:
    // 0x1393a8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1393a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1393ac:
    // 0x1393ac: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1393acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1393b0:
    // 0x1393b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1393b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1393b4:
    // 0x1393b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1393b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1393b8:
    // 0x1393b8: 0xc051f10  jal         func_147C40
label_1393bc:
    if (ctx->pc == 0x1393BCu) {
        ctx->pc = 0x1393BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393B8u;
        // 0x1393bc: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1393C0u;
        goto label_1393c0;
    }
    ctx->pc = 0x1393B8u;
    SET_GPR_U32(ctx, 31, 0x1393C0u);
    ctx->pc = 0x1393BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1393B8u;
    // 0x1393bc: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1393B8u, 0x1393C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1393C0u;
label_1393c0:
    // 0x1393c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1393c4:
    if (ctx->pc == 0x1393C4u) {
        ctx->pc = 0x1393C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393C0u;
        // 0x1393c4: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1393C8u;
        goto label_1393c8;
    }
    ctx->pc = 0x1393C0u;
    {
        const bool branch_taken_0x1393c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1393C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393C0u;
        // 0x1393c4: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1393c0) {
            ctx->pc = 0x1393DCu;
            goto label_1393dc;
        }
    }
    ctx->pc = 0x1393C8u;
label_1393c8:
    // 0x1393c8: 0xc051f10  jal         func_147C40
label_1393cc:
    if (ctx->pc == 0x1393CCu) {
        ctx->pc = 0x1393CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393C8u;
        // 0x1393cc: 0x266503b0  addiu       $a1, $s3, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1393D0u;
        goto label_1393d0;
    }
    ctx->pc = 0x1393C8u;
    SET_GPR_U32(ctx, 31, 0x1393D0u);
    ctx->pc = 0x1393CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1393C8u;
    // 0x1393cc: 0x266503b0  addiu       $a1, $s3, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1393C8u, 0x1393D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1393D0u;
label_1393d0:
    // 0x1393d0: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x1393d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1393d4:
    // 0x1393d4: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x1393d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1393d8:
    // 0x1393d8: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x1393d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1393dc:
    // 0x1393dc: 0x8e6503ac  lw          $a1, 0x3AC($s3)
    ctx->pc = 0x1393dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 940)));
label_1393e0:
    // 0x1393e0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_1393e4:
    if (ctx->pc == 0x1393E4u) {
        ctx->pc = 0x1393E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393E0u;
        // 0x1393e4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1393E8u;
        goto label_1393e8;
    }
    ctx->pc = 0x1393E0u;
    {
        const bool branch_taken_0x1393e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1393E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393E0u;
        // 0x1393e4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1393e0) {
            ctx->pc = 0x139420u;
            goto label_139420;
        }
    }
    ctx->pc = 0x1393E8u;
label_1393e8:
    // 0x1393e8: 0x8e6203e4  lw          $v0, 0x3E4($s3)
    ctx->pc = 0x1393e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 996)));
label_1393ec:
    // 0x1393ec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1393ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1393f0:
    // 0x1393f0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_1393f4:
    if (ctx->pc == 0x1393F4u) {
        ctx->pc = 0x1393F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393F0u;
        // 0x1393f4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1393F8u;
        goto label_1393f8;
    }
    ctx->pc = 0x1393F0u;
    {
        const bool branch_taken_0x1393f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1393f0) {
            ctx->pc = 0x1393F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1393F0u;
            // 0x1393f4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139424u;
            goto label_139424;
        }
    }
    ctx->pc = 0x1393F8u;
label_1393f8:
    // 0x1393f8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1393f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1393fc:
    // 0x1393fc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1393fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_139400:
    // 0x139400: 0xc0c28ac  jal         func_30A2B0
label_139404:
    if (ctx->pc == 0x139404u) {
        ctx->pc = 0x139404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139400u;
        // 0x139404: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139408u;
        goto label_139408;
    }
    ctx->pc = 0x139400u;
    SET_GPR_U32(ctx, 31, 0x139408u);
    ctx->pc = 0x139404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139400u;
    // 0x139404: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x139400u, 0x139408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139408u;
label_139408:
    // 0x139408: 0x8e6503ac  lw          $a1, 0x3AC($s3)
    ctx->pc = 0x139408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 940)));
label_13940c:
    // 0x13940c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13940cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_139410:
    // 0x139410: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x139410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_139414:
    // 0x139414: 0xc0c28ac  jal         func_30A2B0
label_139418:
    if (ctx->pc == 0x139418u) {
        ctx->pc = 0x139418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139414u;
        // 0x139418: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13941Cu;
        goto label_13941c;
    }
    ctx->pc = 0x139414u;
    SET_GPR_U32(ctx, 31, 0x13941Cu);
    ctx->pc = 0x139418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139414u;
    // 0x139418: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x139414u, 0x13941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13941Cu;
label_13941c:
    // 0x13941c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x13941cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_139420:
    // 0x139420: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x139420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_139424:
    // 0x139424: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x139424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_139428:
    // 0x139428: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x139428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_13942c:
    // 0x13942c: 0xc0c28ac  jal         func_30A2B0
label_139430:
    if (ctx->pc == 0x139430u) {
        ctx->pc = 0x139430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13942Cu;
        // 0x139430: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139434u;
        goto label_139434;
    }
    ctx->pc = 0x13942Cu;
    SET_GPR_U32(ctx, 31, 0x139434u);
    ctx->pc = 0x139430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13942Cu;
    // 0x139430: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x13942Cu, 0x139434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139434u;
label_139434:
    // 0x139434: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x139434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_139438:
    // 0x139438: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x139438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13943c:
    // 0x13943c: 0xc0c28ac  jal         func_30A2B0
label_139440:
    if (ctx->pc == 0x139440u) {
        ctx->pc = 0x139440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13943Cu;
        // 0x139440: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139444u;
        goto label_139444;
    }
    ctx->pc = 0x13943Cu;
    SET_GPR_U32(ctx, 31, 0x139444u);
    ctx->pc = 0x139440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13943Cu;
    // 0x139440: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x13943Cu, 0x139444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139444u;
label_139444:
    // 0x139444: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x139444u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_139448:
    // 0x139448: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x139448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13944c:
    // 0x13944c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13944cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_139450:
    // 0x139450: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x139450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_139454:
    // 0x139454: 0xc04e0d6  jal         func_138358
label_139458:
    if (ctx->pc == 0x139458u) {
        ctx->pc = 0x139458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139454u;
        // 0x139458: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13945Cu;
        goto label_13945c;
    }
    ctx->pc = 0x139454u;
    SET_GPR_U32(ctx, 31, 0x13945Cu);
    ctx->pc = 0x139458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139454u;
    // 0x139458: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138358u, 0x139454u, 0x13945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13945Cu;
label_13945c:
    // 0x13945c: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x13945cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_139460:
    // 0x139460: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x139460u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_139464:
    // 0x139464: 0xc051e72  jal         func_1479C8
label_139468:
    if (ctx->pc == 0x139468u) {
        ctx->pc = 0x139468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139464u;
        // 0x139468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13946Cu;
        goto label_13946c;
    }
    ctx->pc = 0x139464u;
    SET_GPR_U32(ctx, 31, 0x13946Cu);
    ctx->pc = 0x139468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139464u;
    // 0x139468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1479C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1479C8u, 0x139464u, 0x13946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13946Cu;
label_13946c:
    // 0x13946c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x13946cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_139470:
    // 0x139470: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x139470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_139474:
    // 0x139474: 0xe6960004  swc1        $f22, 0x4($s4)
    ctx->pc = 0x139474u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_139478:
    // 0x139478: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x139478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_13947c:
    // 0x13947c: 0xe696000c  swc1        $f22, 0xC($s4)
    ctx->pc = 0x13947cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_139480:
    // 0x139480: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x139480u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_139484:
    // 0x139484: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x139484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
label_139488:
    // 0x139488: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13948c:
    // 0x13948c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13948cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139490:
    // 0x139490: 0xc0c28ac  jal         func_30A2B0
label_139494:
    if (ctx->pc == 0x139494u) {
        ctx->pc = 0x139494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139490u;
        // 0x139494: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139498u;
        goto label_139498;
    }
    ctx->pc = 0x139490u;
    SET_GPR_U32(ctx, 31, 0x139498u);
    ctx->pc = 0x139494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139490u;
    // 0x139494: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x139490u, 0x139498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139498u;
label_139498:
    // 0x139498: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x139498u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_13949c:
    // 0x13949c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x13949cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1394a0:
    // 0x1394a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1394a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1394a4:
    // 0x1394a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1394a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1394a8:
    // 0x1394a8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1394a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1394ac:
    // 0x1394ac: 0xc05420c  jal         func_150830
label_1394b0:
    if (ctx->pc == 0x1394B0u) {
        ctx->pc = 0x1394B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394ACu;
        // 0x1394b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1394B4u;
        goto label_1394b4;
    }
    ctx->pc = 0x1394ACu;
    SET_GPR_U32(ctx, 31, 0x1394B4u);
    ctx->pc = 0x1394B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1394ACu;
    // 0x1394b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150830u, 0x1394ACu, 0x1394B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1394B4u;
label_1394b4:
    // 0x1394b4: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x1394b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_1394b8:
    // 0x1394b8: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x1394b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1394bc:
    // 0x1394bc: 0xc04078a  jal         func_101E28
label_1394c0:
    if (ctx->pc == 0x1394C0u) {
        ctx->pc = 0x1394C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394BCu;
        // 0x1394c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1394C4u;
        goto label_1394c4;
    }
    ctx->pc = 0x1394BCu;
    SET_GPR_U32(ctx, 31, 0x1394C4u);
    ctx->pc = 0x1394C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1394BCu;
    // 0x1394c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1394BCu, 0x1394C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1394C4u;
label_1394c4:
    // 0x1394c4: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x1394c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1394c8:
    // 0x1394c8: 0x0  nop
    ctx->pc = 0x1394c8u;
    // NOP
label_1394cc:
    // 0x1394cc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_1394d0:
    if (ctx->pc == 0x1394D0u) {
        ctx->pc = 0x1394D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394CCu;
        // 0x1394d0: 0xc7a30070  lwc1        $f3, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1394D4u;
        goto label_1394d4;
    }
    ctx->pc = 0x1394CCu;
    {
        const bool branch_taken_0x1394cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1394D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394CCu;
        // 0x1394d0: 0xc7a30070  lwc1        $f3, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1394cc) {
            ctx->pc = 0x139508u;
            goto label_139508;
        }
    }
    ctx->pc = 0x1394D4u;
label_1394d4:
    // 0x1394d4: 0x0  nop
    ctx->pc = 0x1394d4u;
    // NOP
label_1394d8:
    // 0x1394d8: 0x0  nop
    ctx->pc = 0x1394d8u;
    // NOP
label_1394dc:
    // 0x1394dc: 0x4600b083  div.s       $f2, $f22, $f0
    ctx->pc = 0x1394dcu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[0]);
label_1394e0:
    // 0x1394e0: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x1394e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1394e4:
    // 0x1394e4: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1394e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1394e8:
    // 0x1394e8: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1394e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1394ec:
    // 0x1394ec: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1394ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1394f0:
    // 0x1394f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1394f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1394f4:
    // 0x1394f4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1394f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1394f8:
    // 0x1394f8: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x1394f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_1394fc:
    // 0x1394fc: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x1394fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_139500:
    // 0x139500: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x139500u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_139504:
    // 0x139504: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x139504u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_139508:
    // 0x139508: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x139508u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_13950c:
    // 0x13950c: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x13950cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
label_139510:
    // 0x139510: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x139510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_139514:
    // 0x139514: 0xc7b500d4  lwc1        $f21, 0xD4($sp)
    ctx->pc = 0x139514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_139518:
    // 0x139518: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x139518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13951c:
    // 0x13951c: 0x8662027a  lh          $v0, 0x27A($s3)
    ctx->pc = 0x13951cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 634)));
label_139520:
    // 0x139520: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x139520u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_139524:
    // 0x139524: 0xe7b50074  swc1        $f21, 0x74($sp)
    ctx->pc = 0x139524u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_139528:
    // 0x139528: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_13952c:
    if (ctx->pc == 0x13952Cu) {
        ctx->pc = 0x13952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139528u;
        // 0x13952c: 0xe7a20078  swc1        $f2, 0x78($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x139530u;
        goto label_139530;
    }
    ctx->pc = 0x139528u;
    {
        const bool branch_taken_0x139528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139528u;
        // 0x13952c: 0xe7a20078  swc1        $f2, 0x78($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x139528) {
            ctx->pc = 0x1396A8u;
            goto label_1396a8;
        }
    }
    ctx->pc = 0x139530u;
label_139530:
    // 0x139530: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_139534:
    // 0x139534: 0xc6690210  lwc1        $f9, 0x210($s3)
    ctx->pc = 0x139534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_139538:
    // 0x139538: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x139538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13953c:
    // 0x13953c: 0x0  nop
    ctx->pc = 0x13953cu;
    // NOP
label_139540:
    // 0x139540: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x139540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_139544:
    // 0x139544: 0xc66a0214  lwc1        $f10, 0x214($s3)
    ctx->pc = 0x139544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_139548:
    // 0x139548: 0xc66b0218  lwc1        $f11, 0x218($s3)
    ctx->pc = 0x139548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_13954c:
    // 0x13954c: 0xc66c0200  lwc1        $f12, 0x200($s3)
    ctx->pc = 0x13954cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_139550:
    // 0x139550: 0x0  nop
    ctx->pc = 0x139550u;
    // NOP
label_139554:
    // 0x139554: 0x0  nop
    ctx->pc = 0x139554u;
    // NOP
label_139558:
    // 0x139558: 0x4600b003  div.s       $f0, $f22, $f0
    ctx->pc = 0x139558u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[0]);
label_13955c:
    // 0x13955c: 0xc66d0204  lwc1        $f13, 0x204($s3)
    ctx->pc = 0x13955cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_139560:
    // 0x139560: 0xc66f0208  lwc1        $f15, 0x208($s3)
    ctx->pc = 0x139560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_139564:
    // 0x139564: 0xc67003d0  lwc1        $f16, 0x3D0($s3)
    ctx->pc = 0x139564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_139568:
    // 0x139568: 0xc67103d4  lwc1        $f17, 0x3D4($s3)
    ctx->pc = 0x139568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_13956c:
    // 0x13956c: 0xc67203d8  lwc1        $f18, 0x3D8($s3)
    ctx->pc = 0x13956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_139570:
    // 0x139570: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x139570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_139574:
    // 0x139574: 0x4600b041  sub.s       $f1, $f22, $f0
    ctx->pc = 0x139574u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_139578:
    // 0x139578: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x139578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_13957c:
    // 0x13957c: 0x460204c2  mul.s       $f19, $f0, $f2
    ctx->pc = 0x13957cu;
    ctx->f[19] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_139580:
    // 0x139580: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x139580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_139584:
    // 0x139584: 0xc7a70010  lwc1        $f7, 0x10($sp)
    ctx->pc = 0x139584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_139588:
    // 0x139588: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x139588u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_13958c:
    // 0x13958c: 0xc7a80014  lwc1        $f8, 0x14($sp)
    ctx->pc = 0x13958cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_139590:
    // 0x139590: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x139590u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_139594:
    // 0x139594: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x139594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_139598:
    // 0x139598: 0x46090a42  mul.s       $f9, $f1, $f9
    ctx->pc = 0x139598u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
label_13959c:
    // 0x13959c: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x13959cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_1395a0:
    // 0x1395a0: 0xc6740250  lwc1        $f20, 0x250($s3)
    ctx->pc = 0x1395a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1395a4:
    // 0x1395a4: 0x460a0a82  mul.s       $f10, $f1, $f10
    ctx->pc = 0x1395a4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
label_1395a8:
    // 0x1395a8: 0x46120c82  mul.s       $f18, $f1, $f18
    ctx->pc = 0x1395a8u;
    ctx->f[18] = FPU_MUL_S(ctx->f[1], ctx->f[18]);
label_1395ac:
    // 0x1395ac: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x1395acu;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_1395b0:
    // 0x1395b0: 0x460b0ac2  mul.s       $f11, $f1, $f11
    ctx->pc = 0x1395b0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
label_1395b4:
    // 0x1395b4: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x1395b4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_1395b8:
    // 0x1395b8: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x1395b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_1395bc:
    // 0x1395bc: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x1395bcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_1395c0:
    // 0x1395c0: 0x460d0b42  mul.s       $f13, $f1, $f13
    ctx->pc = 0x1395c0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
label_1395c4:
    // 0x1395c4: 0x460e0382  mul.s       $f14, $f0, $f14
    ctx->pc = 0x1395c4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
label_1395c8:
    // 0x1395c8: 0x460f0bc2  mul.s       $f15, $f1, $f15
    ctx->pc = 0x1395c8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
label_1395cc:
    // 0x1395cc: 0x46100c02  mul.s       $f16, $f1, $f16
    ctx->pc = 0x1395ccu;
    ctx->f[16] = FPU_MUL_S(ctx->f[1], ctx->f[16]);
label_1395d0:
    // 0x1395d0: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x1395d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1395d4:
    // 0x1395d4: 0x46110c42  mul.s       $f17, $f1, $f17
    ctx->pc = 0x1395d4u;
    ctx->f[17] = FPU_MUL_S(ctx->f[1], ctx->f[17]);
label_1395d8:
    // 0x1395d8: 0x46092100  add.s       $f4, $f4, $f9
    ctx->pc = 0x1395d8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[9]);
label_1395dc:
    // 0x1395dc: 0x460a2940  add.s       $f5, $f5, $f10
    ctx->pc = 0x1395dcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[10]);
label_1395e0:
    // 0x1395e0: 0x460b3180  add.s       $f6, $f6, $f11
    ctx->pc = 0x1395e0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[11]);
label_1395e4:
    // 0x1395e4: 0x460c39c0  add.s       $f7, $f7, $f12
    ctx->pc = 0x1395e4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[12]);
label_1395e8:
    // 0x1395e8: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x1395e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1395ec:
    // 0x1395ec: 0x460d4200  add.s       $f8, $f8, $f13
    ctx->pc = 0x1395ecu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[13]);
label_1395f0:
    // 0x1395f0: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x1395f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1395f4:
    // 0x1395f4: 0x460f7380  add.s       $f14, $f14, $f15
    ctx->pc = 0x1395f4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[15]);
label_1395f8:
    // 0x1395f8: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x1395f8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1395fc:
    // 0x1395fc: 0x46101080  add.s       $f2, $f2, $f16
    ctx->pc = 0x1395fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[16]);
label_139600:
    // 0x139600: 0xe7a70010  swc1        $f7, 0x10($sp)
    ctx->pc = 0x139600u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_139604:
    // 0x139604: 0x461118c0  add.s       $f3, $f3, $f17
    ctx->pc = 0x139604u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[17]);
label_139608:
    // 0x139608: 0xe7a80014  swc1        $f8, 0x14($sp)
    ctx->pc = 0x139608u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_13960c:
    // 0x13960c: 0x46129cc0  add.s       $f19, $f19, $f18
    ctx->pc = 0x13960cu;
    ctx->f[19] = FPU_ADD_S(ctx->f[19], ctx->f[18]);
label_139610:
    // 0x139610: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x139610u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_139614:
    // 0x139614: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x139614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_139618:
    // 0x139618: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x139618u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_13961c:
    // 0x13961c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x13961cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_139620:
    // 0x139620: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x139620u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_139624:
    // 0x139624: 0xe7b30078  swc1        $f19, 0x78($sp)
    ctx->pc = 0x139624u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_139628:
    // 0x139628: 0x460105c0  add.s       $f23, $f0, $f1
    ctx->pc = 0x139628u;
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13962c:
    // 0x13962c: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x13962cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_139630:
    // 0x139630: 0xc04078a  jal         func_101E28
label_139634:
    if (ctx->pc == 0x139634u) {
        ctx->pc = 0x139634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139630u;
        // 0x139634: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139638u;
        goto label_139638;
    }
    ctx->pc = 0x139630u;
    SET_GPR_U32(ctx, 31, 0x139638u);
    ctx->pc = 0x139634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139630u;
    // 0x139634: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x139630u, 0x139638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139638u;
label_139638:
    // 0x139638: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x139638u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13963c:
    // 0x13963c: 0x0  nop
    ctx->pc = 0x13963cu;
    // NOP
label_139640:
    // 0x139640: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_139644:
    if (ctx->pc == 0x139644u) {
        ctx->pc = 0x139644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139640u;
        // 0x139644: 0xc7a30070  lwc1        $f3, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x139648u;
        goto label_139648;
    }
    ctx->pc = 0x139640u;
    {
        const bool branch_taken_0x139640 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x139644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139640u;
        // 0x139644: 0xc7a30070  lwc1        $f3, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x139640) {
            ctx->pc = 0x13967Cu;
            goto label_13967c;
        }
    }
    ctx->pc = 0x139648u;
label_139648:
    // 0x139648: 0x0  nop
    ctx->pc = 0x139648u;
    // NOP
label_13964c:
    // 0x13964c: 0x0  nop
    ctx->pc = 0x13964cu;
    // NOP
label_139650:
    // 0x139650: 0x4600b083  div.s       $f2, $f22, $f0
    ctx->pc = 0x139650u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[0]);
label_139654:
    // 0x139654: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x139654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_139658:
    // 0x139658: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x139658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13965c:
    // 0x13965c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x13965cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139660:
    // 0x139660: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x139660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_139664:
    // 0x139664: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x139664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_139668:
    // 0x139668: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x139668u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_13966c:
    // 0x13966c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x13966cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_139670:
    // 0x139670: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x139670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_139674:
    // 0x139674: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x139674u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_139678:
    // 0x139678: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x139678u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_13967c:
    // 0x13967c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x13967cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_139680:
    // 0x139680: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x139680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
label_139684:
    // 0x139684: 0x9662027a  lhu         $v0, 0x27A($s3)
    ctx->pc = 0x139684u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 634)));
label_139688:
    // 0x139688: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x139688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13968c:
    // 0x13968c: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x13968cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_139690:
    // 0x139690: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x139690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_139694:
    // 0x139694: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x139694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139698:
    // 0x139698: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x139698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_13969c:
    // 0x13969c: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x13969cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1396a0:
    // 0x1396a0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1396a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1396a4:
    // 0x1396a4: 0xa662027a  sh          $v0, 0x27A($s3)
    ctx->pc = 0x1396a4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 634), (uint16_t)GPR_U32(ctx, 2));
label_1396a8:
    // 0x1396a8: 0x26620220  addiu       $v0, $s3, 0x220
    ctx->pc = 0x1396a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 544));
label_1396ac:
    // 0x1396ac: 0x10560006  beq         $v0, $s6, . + 4 + (0x6 << 2)
label_1396b0:
    if (ctx->pc == 0x1396B0u) {
        ctx->pc = 0x1396B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396ACu;
        // 0x1396b0: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1396B4u;
        goto label_1396b4;
    }
    ctx->pc = 0x1396ACu;
    {
        const bool branch_taken_0x1396ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x1396B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396ACu;
        // 0x1396b0: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396ac) {
            ctx->pc = 0x1396C8u;
            goto label_1396c8;
        }
    }
    ctx->pc = 0x1396B4u;
label_1396b4:
    // 0x1396b4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1396b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1396b8:
    // 0x1396b8: 0xe6600220  swc1        $f0, 0x220($s3)
    ctx->pc = 0x1396b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 544), bits); }
label_1396bc:
    // 0x1396bc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1396bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1396c0:
    // 0x1396c0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1396c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1396c4:
    // 0x1396c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1396c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1396c8:
    // 0x1396c8: 0x26620210  addiu       $v0, $s3, 0x210
    ctx->pc = 0x1396c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 528));
label_1396cc:
    // 0x1396cc: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
label_1396d0:
    if (ctx->pc == 0x1396D0u) {
        ctx->pc = 0x1396D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396CCu;
        // 0x1396d0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1396D4u;
        goto label_1396d4;
    }
    ctx->pc = 0x1396CCu;
    {
        const bool branch_taken_0x1396cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1396D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396CCu;
        // 0x1396d0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396cc) {
            ctx->pc = 0x1396E8u;
            goto label_1396e8;
        }
    }
    ctx->pc = 0x1396D4u;
label_1396d4:
    // 0x1396d4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1396d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1396d8:
    // 0x1396d8: 0xe6600210  swc1        $f0, 0x210($s3)
    ctx->pc = 0x1396d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 528), bits); }
label_1396dc:
    // 0x1396dc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1396dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1396e0:
    // 0x1396e0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1396e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1396e4:
    // 0x1396e4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1396e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1396e8:
    // 0x1396e8: 0x26620200  addiu       $v0, $s3, 0x200
    ctx->pc = 0x1396e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
label_1396ec:
    // 0x1396ec: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
label_1396f0:
    if (ctx->pc == 0x1396F0u) {
        ctx->pc = 0x1396F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396ECu;
        // 0x1396f0: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1396F4u;
        goto label_1396f4;
    }
    ctx->pc = 0x1396ECu;
    {
        const bool branch_taken_0x1396ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1396F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1396ECu;
        // 0x1396f0: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396ec) {
            ctx->pc = 0x139708u;
            goto label_139708;
        }
    }
    ctx->pc = 0x1396F4u;
label_1396f4:
    // 0x1396f4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1396f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1396f8:
    // 0x1396f8: 0xe6600200  swc1        $f0, 0x200($s3)
    ctx->pc = 0x1396f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 512), bits); }
label_1396fc:
    // 0x1396fc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1396fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_139700:
    // 0x139700: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x139700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139704:
    // 0x139704: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x139704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_139708:
    // 0x139708: 0x26620240  addiu       $v0, $s3, 0x240
    ctx->pc = 0x139708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
label_13970c:
    // 0x13970c: 0x10550007  beq         $v0, $s5, . + 4 + (0x7 << 2)
label_139710:
    if (ctx->pc == 0x139710u) {
        ctx->pc = 0x139710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13970Cu;
        // 0x139710: 0xe6770250  swc1        $f23, 0x250($s3) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 592), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x139714u;
        goto label_139714;
    }
    ctx->pc = 0x13970Cu;
    {
        const bool branch_taken_0x13970c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x139710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13970Cu;
        // 0x139710: 0xe6770250  swc1        $f23, 0x250($s3) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13970c) {
            ctx->pc = 0x13972Cu;
            goto label_13972c;
        }
    }
    ctx->pc = 0x139714u;
label_139714:
    // 0x139714: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x139714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139718:
    // 0x139718: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x139718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13971c:
    // 0x13971c: 0xe6600240  swc1        $f0, 0x240($s3)
    ctx->pc = 0x13971cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 576), bits); }
label_139720:
    // 0x139720: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x139720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_139724:
    // 0x139724: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x139724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139728:
    // 0x139728: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x139728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_13972c:
    // 0x13972c: 0xc04e1d0  jal         func_138740
label_139730:
    if (ctx->pc == 0x139730u) {
        ctx->pc = 0x139730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13972Cu;
        // 0x139730: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139734u;
        goto label_139734;
    }
    ctx->pc = 0x13972Cu;
    SET_GPR_U32(ctx, 31, 0x139734u);
    ctx->pc = 0x139730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13972Cu;
    // 0x139730: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138740u, 0x13972Cu, 0x139734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139734u;
label_139734:
    // 0x139734: 0x8e6403e4  lw          $a0, 0x3E4($s3)
    ctx->pc = 0x139734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 996)));
label_139738:
    // 0x139738: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x139738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_13973c:
    // 0x13973c: 0x244574a0  addiu       $a1, $v0, 0x74A0
    ctx->pc = 0x13973cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
label_139740:
    // 0x139740: 0xc66202b4  lwc1        $f2, 0x2B4($s3)
    ctx->pc = 0x139740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_139744:
    // 0x139744: 0x34820008  ori         $v0, $a0, 0x8
    ctx->pc = 0x139744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_139748:
    // 0x139748: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x139748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_13974c:
    // 0x13974c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13974cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_139750:
    // 0x139750: 0xae6203e4  sw          $v0, 0x3E4($s3)
    ctx->pc = 0x139750u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 996), GPR_U32(ctx, 2));
label_139754:
    // 0x139754: 0xc66103a8  lwc1        $f1, 0x3A8($s3)
    ctx->pc = 0x139754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_139758:
    // 0x139758: 0x90a20569  lbu         $v0, 0x569($a1)
    ctx->pc = 0x139758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1385)));
label_13975c:
    // 0x13975c: 0x8e6303a4  lw          $v1, 0x3A4($s3)
    ctx->pc = 0x13975cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 932)));
label_139760:
    // 0x139760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x139760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_139764:
    // 0x139764: 0x0  nop
    ctx->pc = 0x139764u;
    // NOP
label_139768:
    // 0x139768: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x139768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_13976c:
    // 0x13976c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13976cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_139770:
    // 0x139770: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x139770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_139774:
    // 0x139774: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x139774u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_139778:
    // 0x139778: 0xe66103a8  swc1        $f1, 0x3A8($s3)
    ctx->pc = 0x139778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 936), bits); }
label_13977c:
    // 0x13977c: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x13977cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_139780:
    // 0x139780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x139780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_139784:
    // 0x139784: 0x0  nop
    ctx->pc = 0x139784u;
    // NOP
label_139788:
    // 0x139788: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x139788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_13978c:
    // 0x13978c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13978cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_139790:
    // 0x139790: 0x0  nop
    ctx->pc = 0x139790u;
    // NOP
label_139794:
    // 0x139794: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_139798:
    if (ctx->pc == 0x139798u) {
        ctx->pc = 0x139798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139794u;
        // 0x139798: 0x3482000a  ori         $v0, $a0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13979Cu;
        goto label_13979c;
    }
    ctx->pc = 0x139794u;
    {
        const bool branch_taken_0x139794 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x139798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139794u;
        // 0x139798: 0x3482000a  ori         $v0, $a0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139794) {
            ctx->pc = 0x1397DCu;
            goto label_1397dc;
        }
    }
    ctx->pc = 0x13979Cu;
label_13979c:
    // 0x13979c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x13979cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1397a0:
    // 0x1397a0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1397a4:
    if (ctx->pc == 0x1397A4u) {
        ctx->pc = 0x1397A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397A0u;
        // 0x1397a4: 0xae6203e4  sw          $v0, 0x3E4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1397A8u;
        goto label_1397a8;
    }
    ctx->pc = 0x1397A0u;
    {
        const bool branch_taken_0x1397a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1397A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397A0u;
        // 0x1397a4: 0xae6203e4  sw          $v0, 0x3E4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397a0) {
            ctx->pc = 0x1397BCu;
            goto label_1397bc;
        }
    }
    ctx->pc = 0x1397A8u;
label_1397a8:
    // 0x1397a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1397a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1397ac:
    // 0x1397ac: 0xc04e08e  jal         func_138238
label_1397b0:
    if (ctx->pc == 0x1397B0u) {
        ctx->pc = 0x1397B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397ACu;
        // 0x1397b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1397B4u;
        goto label_1397b4;
    }
    ctx->pc = 0x1397ACu;
    SET_GPR_U32(ctx, 31, 0x1397B4u);
    ctx->pc = 0x1397B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1397ACu;
    // 0x1397b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138238u, 0x1397ACu, 0x1397B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1397B4u;
label_1397b4:
    // 0x1397b4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1397b8:
    if (ctx->pc == 0x1397B8u) {
        ctx->pc = 0x1397B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397B4u;
        // 0x1397b8: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1397BCu;
        goto label_1397bc;
    }
    ctx->pc = 0x1397B4u;
    {
        const bool branch_taken_0x1397b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1397B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397B4u;
        // 0x1397b8: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397b4) {
            ctx->pc = 0x1397E0u;
            goto label_1397e0;
        }
    }
    ctx->pc = 0x1397BCu;
label_1397bc:
    // 0x1397bc: 0x90a20569  lbu         $v0, 0x569($a1)
    ctx->pc = 0x1397bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1385)));
label_1397c0:
    // 0x1397c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1397c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1397c4:
    // 0x1397c4: 0x0  nop
    ctx->pc = 0x1397c4u;
    // NOP
label_1397c8:
    // 0x1397c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1397c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1397cc:
    // 0x1397cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1397ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1397d0:
    // 0x1397d0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1397d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1397d4:
    // 0x1397d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1397d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1397d8:
    // 0x1397d8: 0xe66003a8  swc1        $f0, 0x3A8($s3)
    ctx->pc = 0x1397d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 936), bits); }
label_1397dc:
    // 0x1397dc: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x1397dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1397e0:
    // 0x1397e0: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x1397e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1397e4:
    // 0x1397e4: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x1397e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1397e8:
    // 0x1397e8: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x1397e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1397ec:
    // 0x1397ec: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x1397ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1397f0:
    // 0x1397f0: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x1397f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1397f4:
    // 0x1397f4: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x1397f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1397f8:
    // 0x1397f8: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1397f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1397fc:
    // 0x1397fc: 0xc7b80180  lwc1        $f24, 0x180($sp)
    ctx->pc = 0x1397fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_139800:
    // 0x139800: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x139800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_139804:
    // 0x139804: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x139804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_139808:
    // 0x139808: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x139808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_13980c:
    // 0x13980c: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x13980cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_139810:
    // 0x139810: 0x3e00008  jr          $ra
label_139814:
    if (ctx->pc == 0x139814u) {
        ctx->pc = 0x139814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139810u;
        // 0x139814: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139818u;
        goto label_139818;
    }
    ctx->pc = 0x139810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139810u;
        // 0x139814: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139818u;
label_139818:
    // 0x139818: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x139818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13981c:
    // 0x13981c: 0x0  nop
    ctx->pc = 0x13981cu;
    // NOP
    ctx->pc = 0x139820u;
}
