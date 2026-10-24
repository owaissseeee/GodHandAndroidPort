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

// Function: func_001C9268
// Address: 0x1c9268 - 0x1c9860
void func_001C9268_0x1c9268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C9268_0x1c9268");
#endif

    switch (ctx->pc) {
        case 0x1c9268u: goto label_1c9268;
        case 0x1c926cu: goto label_1c926c;
        case 0x1c9270u: goto label_1c9270;
        case 0x1c9274u: goto label_1c9274;
        case 0x1c9278u: goto label_1c9278;
        case 0x1c927cu: goto label_1c927c;
        case 0x1c9280u: goto label_1c9280;
        case 0x1c9284u: goto label_1c9284;
        case 0x1c9288u: goto label_1c9288;
        case 0x1c928cu: goto label_1c928c;
        case 0x1c9290u: goto label_1c9290;
        case 0x1c9294u: goto label_1c9294;
        case 0x1c9298u: goto label_1c9298;
        case 0x1c929cu: goto label_1c929c;
        case 0x1c92a0u: goto label_1c92a0;
        case 0x1c92a4u: goto label_1c92a4;
        case 0x1c92a8u: goto label_1c92a8;
        case 0x1c92acu: goto label_1c92ac;
        case 0x1c92b0u: goto label_1c92b0;
        case 0x1c92b4u: goto label_1c92b4;
        case 0x1c92b8u: goto label_1c92b8;
        case 0x1c92bcu: goto label_1c92bc;
        case 0x1c92c0u: goto label_1c92c0;
        case 0x1c92c4u: goto label_1c92c4;
        case 0x1c92c8u: goto label_1c92c8;
        case 0x1c92ccu: goto label_1c92cc;
        case 0x1c92d0u: goto label_1c92d0;
        case 0x1c92d4u: goto label_1c92d4;
        case 0x1c92d8u: goto label_1c92d8;
        case 0x1c92dcu: goto label_1c92dc;
        case 0x1c92e0u: goto label_1c92e0;
        case 0x1c92e4u: goto label_1c92e4;
        case 0x1c92e8u: goto label_1c92e8;
        case 0x1c92ecu: goto label_1c92ec;
        case 0x1c92f0u: goto label_1c92f0;
        case 0x1c92f4u: goto label_1c92f4;
        case 0x1c92f8u: goto label_1c92f8;
        case 0x1c92fcu: goto label_1c92fc;
        case 0x1c9300u: goto label_1c9300;
        case 0x1c9304u: goto label_1c9304;
        case 0x1c9308u: goto label_1c9308;
        case 0x1c930cu: goto label_1c930c;
        case 0x1c9310u: goto label_1c9310;
        case 0x1c9314u: goto label_1c9314;
        case 0x1c9318u: goto label_1c9318;
        case 0x1c931cu: goto label_1c931c;
        case 0x1c9320u: goto label_1c9320;
        case 0x1c9324u: goto label_1c9324;
        case 0x1c9328u: goto label_1c9328;
        case 0x1c932cu: goto label_1c932c;
        case 0x1c9330u: goto label_1c9330;
        case 0x1c9334u: goto label_1c9334;
        case 0x1c9338u: goto label_1c9338;
        case 0x1c933cu: goto label_1c933c;
        case 0x1c9340u: goto label_1c9340;
        case 0x1c9344u: goto label_1c9344;
        case 0x1c9348u: goto label_1c9348;
        case 0x1c934cu: goto label_1c934c;
        case 0x1c9350u: goto label_1c9350;
        case 0x1c9354u: goto label_1c9354;
        case 0x1c9358u: goto label_1c9358;
        case 0x1c935cu: goto label_1c935c;
        case 0x1c9360u: goto label_1c9360;
        case 0x1c9364u: goto label_1c9364;
        case 0x1c9368u: goto label_1c9368;
        case 0x1c936cu: goto label_1c936c;
        case 0x1c9370u: goto label_1c9370;
        case 0x1c9374u: goto label_1c9374;
        case 0x1c9378u: goto label_1c9378;
        case 0x1c937cu: goto label_1c937c;
        case 0x1c9380u: goto label_1c9380;
        case 0x1c9384u: goto label_1c9384;
        case 0x1c9388u: goto label_1c9388;
        case 0x1c938cu: goto label_1c938c;
        case 0x1c9390u: goto label_1c9390;
        case 0x1c9394u: goto label_1c9394;
        case 0x1c9398u: goto label_1c9398;
        case 0x1c939cu: goto label_1c939c;
        case 0x1c93a0u: goto label_1c93a0;
        case 0x1c93a4u: goto label_1c93a4;
        case 0x1c93a8u: goto label_1c93a8;
        case 0x1c93acu: goto label_1c93ac;
        case 0x1c93b0u: goto label_1c93b0;
        case 0x1c93b4u: goto label_1c93b4;
        case 0x1c93b8u: goto label_1c93b8;
        case 0x1c93bcu: goto label_1c93bc;
        case 0x1c93c0u: goto label_1c93c0;
        case 0x1c93c4u: goto label_1c93c4;
        case 0x1c93c8u: goto label_1c93c8;
        case 0x1c93ccu: goto label_1c93cc;
        case 0x1c93d0u: goto label_1c93d0;
        case 0x1c93d4u: goto label_1c93d4;
        case 0x1c93d8u: goto label_1c93d8;
        case 0x1c93dcu: goto label_1c93dc;
        case 0x1c93e0u: goto label_1c93e0;
        case 0x1c93e4u: goto label_1c93e4;
        case 0x1c93e8u: goto label_1c93e8;
        case 0x1c93ecu: goto label_1c93ec;
        case 0x1c93f0u: goto label_1c93f0;
        case 0x1c93f4u: goto label_1c93f4;
        case 0x1c93f8u: goto label_1c93f8;
        case 0x1c93fcu: goto label_1c93fc;
        case 0x1c9400u: goto label_1c9400;
        case 0x1c9404u: goto label_1c9404;
        case 0x1c9408u: goto label_1c9408;
        case 0x1c940cu: goto label_1c940c;
        case 0x1c9410u: goto label_1c9410;
        case 0x1c9414u: goto label_1c9414;
        case 0x1c9418u: goto label_1c9418;
        case 0x1c941cu: goto label_1c941c;
        case 0x1c9420u: goto label_1c9420;
        case 0x1c9424u: goto label_1c9424;
        case 0x1c9428u: goto label_1c9428;
        case 0x1c942cu: goto label_1c942c;
        case 0x1c9430u: goto label_1c9430;
        case 0x1c9434u: goto label_1c9434;
        case 0x1c9438u: goto label_1c9438;
        case 0x1c943cu: goto label_1c943c;
        case 0x1c9440u: goto label_1c9440;
        case 0x1c9444u: goto label_1c9444;
        case 0x1c9448u: goto label_1c9448;
        case 0x1c944cu: goto label_1c944c;
        case 0x1c9450u: goto label_1c9450;
        case 0x1c9454u: goto label_1c9454;
        case 0x1c9458u: goto label_1c9458;
        case 0x1c945cu: goto label_1c945c;
        case 0x1c9460u: goto label_1c9460;
        case 0x1c9464u: goto label_1c9464;
        case 0x1c9468u: goto label_1c9468;
        case 0x1c946cu: goto label_1c946c;
        case 0x1c9470u: goto label_1c9470;
        case 0x1c9474u: goto label_1c9474;
        case 0x1c9478u: goto label_1c9478;
        case 0x1c947cu: goto label_1c947c;
        case 0x1c9480u: goto label_1c9480;
        case 0x1c9484u: goto label_1c9484;
        case 0x1c9488u: goto label_1c9488;
        case 0x1c948cu: goto label_1c948c;
        case 0x1c9490u: goto label_1c9490;
        case 0x1c9494u: goto label_1c9494;
        case 0x1c9498u: goto label_1c9498;
        case 0x1c949cu: goto label_1c949c;
        case 0x1c94a0u: goto label_1c94a0;
        case 0x1c94a4u: goto label_1c94a4;
        case 0x1c94a8u: goto label_1c94a8;
        case 0x1c94acu: goto label_1c94ac;
        case 0x1c94b0u: goto label_1c94b0;
        case 0x1c94b4u: goto label_1c94b4;
        case 0x1c94b8u: goto label_1c94b8;
        case 0x1c94bcu: goto label_1c94bc;
        case 0x1c94c0u: goto label_1c94c0;
        case 0x1c94c4u: goto label_1c94c4;
        case 0x1c94c8u: goto label_1c94c8;
        case 0x1c94ccu: goto label_1c94cc;
        case 0x1c94d0u: goto label_1c94d0;
        case 0x1c94d4u: goto label_1c94d4;
        case 0x1c94d8u: goto label_1c94d8;
        case 0x1c94dcu: goto label_1c94dc;
        case 0x1c94e0u: goto label_1c94e0;
        case 0x1c94e4u: goto label_1c94e4;
        case 0x1c94e8u: goto label_1c94e8;
        case 0x1c94ecu: goto label_1c94ec;
        case 0x1c94f0u: goto label_1c94f0;
        case 0x1c94f4u: goto label_1c94f4;
        case 0x1c94f8u: goto label_1c94f8;
        case 0x1c94fcu: goto label_1c94fc;
        case 0x1c9500u: goto label_1c9500;
        case 0x1c9504u: goto label_1c9504;
        case 0x1c9508u: goto label_1c9508;
        case 0x1c950cu: goto label_1c950c;
        case 0x1c9510u: goto label_1c9510;
        case 0x1c9514u: goto label_1c9514;
        case 0x1c9518u: goto label_1c9518;
        case 0x1c951cu: goto label_1c951c;
        case 0x1c9520u: goto label_1c9520;
        case 0x1c9524u: goto label_1c9524;
        case 0x1c9528u: goto label_1c9528;
        case 0x1c952cu: goto label_1c952c;
        case 0x1c9530u: goto label_1c9530;
        case 0x1c9534u: goto label_1c9534;
        case 0x1c9538u: goto label_1c9538;
        case 0x1c953cu: goto label_1c953c;
        case 0x1c9540u: goto label_1c9540;
        case 0x1c9544u: goto label_1c9544;
        case 0x1c9548u: goto label_1c9548;
        case 0x1c954cu: goto label_1c954c;
        case 0x1c9550u: goto label_1c9550;
        case 0x1c9554u: goto label_1c9554;
        case 0x1c9558u: goto label_1c9558;
        case 0x1c955cu: goto label_1c955c;
        case 0x1c9560u: goto label_1c9560;
        case 0x1c9564u: goto label_1c9564;
        case 0x1c9568u: goto label_1c9568;
        case 0x1c956cu: goto label_1c956c;
        case 0x1c9570u: goto label_1c9570;
        case 0x1c9574u: goto label_1c9574;
        case 0x1c9578u: goto label_1c9578;
        case 0x1c957cu: goto label_1c957c;
        case 0x1c9580u: goto label_1c9580;
        case 0x1c9584u: goto label_1c9584;
        case 0x1c9588u: goto label_1c9588;
        case 0x1c958cu: goto label_1c958c;
        case 0x1c9590u: goto label_1c9590;
        case 0x1c9594u: goto label_1c9594;
        case 0x1c9598u: goto label_1c9598;
        case 0x1c959cu: goto label_1c959c;
        case 0x1c95a0u: goto label_1c95a0;
        case 0x1c95a4u: goto label_1c95a4;
        case 0x1c95a8u: goto label_1c95a8;
        case 0x1c95acu: goto label_1c95ac;
        case 0x1c95b0u: goto label_1c95b0;
        case 0x1c95b4u: goto label_1c95b4;
        case 0x1c95b8u: goto label_1c95b8;
        case 0x1c95bcu: goto label_1c95bc;
        case 0x1c95c0u: goto label_1c95c0;
        case 0x1c95c4u: goto label_1c95c4;
        case 0x1c95c8u: goto label_1c95c8;
        case 0x1c95ccu: goto label_1c95cc;
        case 0x1c95d0u: goto label_1c95d0;
        case 0x1c95d4u: goto label_1c95d4;
        case 0x1c95d8u: goto label_1c95d8;
        case 0x1c95dcu: goto label_1c95dc;
        case 0x1c95e0u: goto label_1c95e0;
        case 0x1c95e4u: goto label_1c95e4;
        case 0x1c95e8u: goto label_1c95e8;
        case 0x1c95ecu: goto label_1c95ec;
        case 0x1c95f0u: goto label_1c95f0;
        case 0x1c95f4u: goto label_1c95f4;
        case 0x1c95f8u: goto label_1c95f8;
        case 0x1c95fcu: goto label_1c95fc;
        case 0x1c9600u: goto label_1c9600;
        case 0x1c9604u: goto label_1c9604;
        case 0x1c9608u: goto label_1c9608;
        case 0x1c960cu: goto label_1c960c;
        case 0x1c9610u: goto label_1c9610;
        case 0x1c9614u: goto label_1c9614;
        case 0x1c9618u: goto label_1c9618;
        case 0x1c961cu: goto label_1c961c;
        case 0x1c9620u: goto label_1c9620;
        case 0x1c9624u: goto label_1c9624;
        case 0x1c9628u: goto label_1c9628;
        case 0x1c962cu: goto label_1c962c;
        case 0x1c9630u: goto label_1c9630;
        case 0x1c9634u: goto label_1c9634;
        case 0x1c9638u: goto label_1c9638;
        case 0x1c963cu: goto label_1c963c;
        case 0x1c9640u: goto label_1c9640;
        case 0x1c9644u: goto label_1c9644;
        case 0x1c9648u: goto label_1c9648;
        case 0x1c964cu: goto label_1c964c;
        case 0x1c9650u: goto label_1c9650;
        case 0x1c9654u: goto label_1c9654;
        case 0x1c9658u: goto label_1c9658;
        case 0x1c965cu: goto label_1c965c;
        case 0x1c9660u: goto label_1c9660;
        case 0x1c9664u: goto label_1c9664;
        case 0x1c9668u: goto label_1c9668;
        case 0x1c966cu: goto label_1c966c;
        case 0x1c9670u: goto label_1c9670;
        case 0x1c9674u: goto label_1c9674;
        case 0x1c9678u: goto label_1c9678;
        case 0x1c967cu: goto label_1c967c;
        case 0x1c9680u: goto label_1c9680;
        case 0x1c9684u: goto label_1c9684;
        case 0x1c9688u: goto label_1c9688;
        case 0x1c968cu: goto label_1c968c;
        case 0x1c9690u: goto label_1c9690;
        case 0x1c9694u: goto label_1c9694;
        case 0x1c9698u: goto label_1c9698;
        case 0x1c969cu: goto label_1c969c;
        case 0x1c96a0u: goto label_1c96a0;
        case 0x1c96a4u: goto label_1c96a4;
        case 0x1c96a8u: goto label_1c96a8;
        case 0x1c96acu: goto label_1c96ac;
        case 0x1c96b0u: goto label_1c96b0;
        case 0x1c96b4u: goto label_1c96b4;
        case 0x1c96b8u: goto label_1c96b8;
        case 0x1c96bcu: goto label_1c96bc;
        case 0x1c96c0u: goto label_1c96c0;
        case 0x1c96c4u: goto label_1c96c4;
        case 0x1c96c8u: goto label_1c96c8;
        case 0x1c96ccu: goto label_1c96cc;
        case 0x1c96d0u: goto label_1c96d0;
        case 0x1c96d4u: goto label_1c96d4;
        case 0x1c96d8u: goto label_1c96d8;
        case 0x1c96dcu: goto label_1c96dc;
        case 0x1c96e0u: goto label_1c96e0;
        case 0x1c96e4u: goto label_1c96e4;
        case 0x1c96e8u: goto label_1c96e8;
        case 0x1c96ecu: goto label_1c96ec;
        case 0x1c96f0u: goto label_1c96f0;
        case 0x1c96f4u: goto label_1c96f4;
        case 0x1c96f8u: goto label_1c96f8;
        case 0x1c96fcu: goto label_1c96fc;
        case 0x1c9700u: goto label_1c9700;
        case 0x1c9704u: goto label_1c9704;
        case 0x1c9708u: goto label_1c9708;
        case 0x1c970cu: goto label_1c970c;
        case 0x1c9710u: goto label_1c9710;
        case 0x1c9714u: goto label_1c9714;
        case 0x1c9718u: goto label_1c9718;
        case 0x1c971cu: goto label_1c971c;
        case 0x1c9720u: goto label_1c9720;
        case 0x1c9724u: goto label_1c9724;
        case 0x1c9728u: goto label_1c9728;
        case 0x1c972cu: goto label_1c972c;
        case 0x1c9730u: goto label_1c9730;
        case 0x1c9734u: goto label_1c9734;
        case 0x1c9738u: goto label_1c9738;
        case 0x1c973cu: goto label_1c973c;
        case 0x1c9740u: goto label_1c9740;
        case 0x1c9744u: goto label_1c9744;
        case 0x1c9748u: goto label_1c9748;
        case 0x1c974cu: goto label_1c974c;
        case 0x1c9750u: goto label_1c9750;
        case 0x1c9754u: goto label_1c9754;
        case 0x1c9758u: goto label_1c9758;
        case 0x1c975cu: goto label_1c975c;
        case 0x1c9760u: goto label_1c9760;
        case 0x1c9764u: goto label_1c9764;
        case 0x1c9768u: goto label_1c9768;
        case 0x1c976cu: goto label_1c976c;
        case 0x1c9770u: goto label_1c9770;
        case 0x1c9774u: goto label_1c9774;
        case 0x1c9778u: goto label_1c9778;
        case 0x1c977cu: goto label_1c977c;
        case 0x1c9780u: goto label_1c9780;
        case 0x1c9784u: goto label_1c9784;
        case 0x1c9788u: goto label_1c9788;
        case 0x1c978cu: goto label_1c978c;
        case 0x1c9790u: goto label_1c9790;
        case 0x1c9794u: goto label_1c9794;
        case 0x1c9798u: goto label_1c9798;
        case 0x1c979cu: goto label_1c979c;
        case 0x1c97a0u: goto label_1c97a0;
        case 0x1c97a4u: goto label_1c97a4;
        case 0x1c97a8u: goto label_1c97a8;
        case 0x1c97acu: goto label_1c97ac;
        case 0x1c97b0u: goto label_1c97b0;
        case 0x1c97b4u: goto label_1c97b4;
        case 0x1c97b8u: goto label_1c97b8;
        case 0x1c97bcu: goto label_1c97bc;
        case 0x1c97c0u: goto label_1c97c0;
        case 0x1c97c4u: goto label_1c97c4;
        case 0x1c97c8u: goto label_1c97c8;
        case 0x1c97ccu: goto label_1c97cc;
        case 0x1c97d0u: goto label_1c97d0;
        case 0x1c97d4u: goto label_1c97d4;
        case 0x1c97d8u: goto label_1c97d8;
        case 0x1c97dcu: goto label_1c97dc;
        case 0x1c97e0u: goto label_1c97e0;
        case 0x1c97e4u: goto label_1c97e4;
        case 0x1c97e8u: goto label_1c97e8;
        case 0x1c97ecu: goto label_1c97ec;
        case 0x1c97f0u: goto label_1c97f0;
        case 0x1c97f4u: goto label_1c97f4;
        case 0x1c97f8u: goto label_1c97f8;
        case 0x1c97fcu: goto label_1c97fc;
        case 0x1c9800u: goto label_1c9800;
        case 0x1c9804u: goto label_1c9804;
        case 0x1c9808u: goto label_1c9808;
        case 0x1c980cu: goto label_1c980c;
        case 0x1c9810u: goto label_1c9810;
        case 0x1c9814u: goto label_1c9814;
        case 0x1c9818u: goto label_1c9818;
        case 0x1c981cu: goto label_1c981c;
        case 0x1c9820u: goto label_1c9820;
        case 0x1c9824u: goto label_1c9824;
        case 0x1c9828u: goto label_1c9828;
        case 0x1c982cu: goto label_1c982c;
        case 0x1c9830u: goto label_1c9830;
        case 0x1c9834u: goto label_1c9834;
        case 0x1c9838u: goto label_1c9838;
        case 0x1c983cu: goto label_1c983c;
        case 0x1c9840u: goto label_1c9840;
        case 0x1c9844u: goto label_1c9844;
        case 0x1c9848u: goto label_1c9848;
        case 0x1c984cu: goto label_1c984c;
        case 0x1c9850u: goto label_1c9850;
        case 0x1c9854u: goto label_1c9854;
        case 0x1c9858u: goto label_1c9858;
        case 0x1c985cu: goto label_1c985c;
        default: break;
    }

    ctx->pc = 0x1c9268u;

label_1c9268:
    // 0x1c9268: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c9268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c926c:
    // 0x1c926c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1c926cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1c9270:
    // 0x1c9270: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c9270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1c9274:
    // 0x1c9274: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c9274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c9278:
    // 0x1c9278: 0xc06dbee  jal         func_1B6FB8
label_1c927c:
    if (ctx->pc == 0x1C927Cu) {
        ctx->pc = 0x1C927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9278u;
        // 0x1c927c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9280u;
        goto label_1c9280;
    }
    ctx->pc = 0x1C9278u;
    SET_GPR_U32(ctx, 31, 0x1C9280u);
    ctx->pc = 0x1C927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9278u;
    // 0x1c927c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1C9278u, 0x1C9280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9280u;
label_1c9280:
    // 0x1c9280: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1c9284:
    if (ctx->pc == 0x1C9284u) {
        ctx->pc = 0x1C9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9280u;
        // 0x1c9284: 0x960202fe  lhu         $v0, 0x2FE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9288u;
        goto label_1c9288;
    }
    ctx->pc = 0x1C9280u;
    {
        const bool branch_taken_0x1c9280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9280) {
            ctx->pc = 0x1C9284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9280u;
            // 0x1c9284: 0x960202fe  lhu         $v0, 0x2FE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9290u;
            goto label_1c9290;
        }
    }
    ctx->pc = 0x1C9288u;
label_1c9288:
    // 0x1c9288: 0x1000016f  b           . + 4 + (0x16F << 2)
label_1c928c:
    if (ctx->pc == 0x1C928Cu) {
        ctx->pc = 0x1C928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9288u;
        // 0x1c928c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9290u;
        goto label_1c9290;
    }
    ctx->pc = 0x1C9288u;
    {
        const bool branch_taken_0x1c9288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9288u;
        // 0x1c928c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9288) {
            ctx->pc = 0x1C9848u;
            goto label_1c9848;
        }
    }
    ctx->pc = 0x1C9290u;
label_1c9290:
    // 0x1c9290: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1c9290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_1c9294:
    // 0x1c9294: 0x2443fc9f  addiu       $v1, $v0, -0x361
    ctx->pc = 0x1c9294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966431));
label_1c9298:
    // 0x1c9298: 0xae000604  sw          $zero, 0x604($s0)
    ctx->pc = 0x1c9298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 0));
label_1c929c:
    // 0x1c929c: 0x2c620057  sltiu       $v0, $v1, 0x57
    ctx->pc = 0x1c929cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)87) ? 1 : 0);
label_1c92a0:
    // 0x1c92a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c92a4:
    if (ctx->pc == 0x1C92A4u) {
        ctx->pc = 0x1C92A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92A0u;
        // 0x1c92a4: 0xae000630  sw          $zero, 0x630($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92A8u;
        goto label_1c92a8;
    }
    ctx->pc = 0x1C92A0u;
    {
        const bool branch_taken_0x1c92a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92A0u;
        // 0x1c92a4: 0xae000630  sw          $zero, 0x630($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92a0) {
            ctx->pc = 0x1C92C4u;
            goto label_1c92c4;
        }
    }
    ctx->pc = 0x1C92A8u;
label_1c92a8:
    // 0x1c92a8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1c92ac:
    // 0x1c92ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c92acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1c92b0:
    // 0x1c92b0: 0x24429fa0  addiu       $v0, $v0, -0x6060
    ctx->pc = 0x1c92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942624));
label_1c92b4:
    // 0x1c92b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c92b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c92b8:
    // 0x1c92b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c92b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c92bc:
    // 0x1c92bc: 0x800008  jr          $a0
label_1c92c0:
    if (ctx->pc == 0x1C92C0u) {
        ctx->pc = 0x1C92C4u;
        goto label_1c92c4;
    }
    ctx->pc = 0x1C92BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C92C4u: goto label_1c92c4;
            case 0x1C92CCu: goto label_1c92cc;
            case 0x1C92D4u: goto label_1c92d4;
            case 0x1C92DCu: goto label_1c92dc;
            case 0x1C92E4u: goto label_1c92e4;
            case 0x1C92ECu: goto label_1c92ec;
            case 0x1C92F4u: goto label_1c92f4;
            case 0x1C92FCu: goto label_1c92fc;
            case 0x1C9304u: goto label_1c9304;
            case 0x1C930Cu: goto label_1c930c;
            case 0x1C9314u: goto label_1c9314;
            case 0x1C931Cu: goto label_1c931c;
            case 0x1C9324u: goto label_1c9324;
            case 0x1C932Cu: goto label_1c932c;
            case 0x1C9334u: goto label_1c9334;
            case 0x1C933Cu: goto label_1c933c;
            case 0x1C9344u: goto label_1c9344;
            case 0x1C934Cu: goto label_1c934c;
            case 0x1C9354u: goto label_1c9354;
            case 0x1C935Cu: goto label_1c935c;
            case 0x1C9364u: goto label_1c9364;
            case 0x1C936Cu: goto label_1c936c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C92BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C92C4u;
label_1c92c4:
    // 0x1c92c4: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1c92c8:
    if (ctx->pc == 0x1C92C8u) {
        ctx->pc = 0x1C92C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92C4u;
        // 0x1c92c8: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92CCu;
        goto label_1c92cc;
    }
    ctx->pc = 0x1C92C4u;
    {
        const bool branch_taken_0x1c92c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92C4u;
        // 0x1c92c8: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92c4) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C92CCu;
label_1c92cc:
    // 0x1c92cc: 0x10000028  b           . + 4 + (0x28 << 2)
label_1c92d0:
    if (ctx->pc == 0x1C92D0u) {
        ctx->pc = 0x1C92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92CCu;
        // 0x1c92d0: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92D4u;
        goto label_1c92d4;
    }
    ctx->pc = 0x1C92CCu;
    {
        const bool branch_taken_0x1c92cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92CCu;
        // 0x1c92d0: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92cc) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C92D4u;
label_1c92d4:
    // 0x1c92d4: 0x10000026  b           . + 4 + (0x26 << 2)
label_1c92d8:
    if (ctx->pc == 0x1C92D8u) {
        ctx->pc = 0x1C92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92D4u;
        // 0x1c92d8: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92DCu;
        goto label_1c92dc;
    }
    ctx->pc = 0x1C92D4u;
    {
        const bool branch_taken_0x1c92d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92D4u;
        // 0x1c92d8: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92d4) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C92DCu;
label_1c92dc:
    // 0x1c92dc: 0x10000024  b           . + 4 + (0x24 << 2)
label_1c92e0:
    if (ctx->pc == 0x1C92E0u) {
        ctx->pc = 0x1C92E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92DCu;
        // 0x1c92e0: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92E4u;
        goto label_1c92e4;
    }
    ctx->pc = 0x1C92DCu;
    {
        const bool branch_taken_0x1c92dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92DCu;
        // 0x1c92e0: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92dc) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C92E4u;
label_1c92e4:
    // 0x1c92e4: 0x10000022  b           . + 4 + (0x22 << 2)
label_1c92e8:
    if (ctx->pc == 0x1C92E8u) {
        ctx->pc = 0x1C92E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92E4u;
        // 0x1c92e8: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92ECu;
        goto label_1c92ec;
    }
    ctx->pc = 0x1C92E4u;
    {
        const bool branch_taken_0x1c92e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92E4u;
        // 0x1c92e8: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92e4) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C92ECu;
label_1c92ec:
    // 0x1c92ec: 0x10000020  b           . + 4 + (0x20 << 2)
label_1c92f0:
    if (ctx->pc == 0x1C92F0u) {
        ctx->pc = 0x1C92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92ECu;
        // 0x1c92f0: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92F4u;
        goto label_1c92f4;
    }
    ctx->pc = 0x1C92ECu;
    {
        const bool branch_taken_0x1c92ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92ECu;
        // 0x1c92f0: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92ec) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C92F4u;
label_1c92f4:
    // 0x1c92f4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1c92f8:
    if (ctx->pc == 0x1C92F8u) {
        ctx->pc = 0x1C92F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92F4u;
        // 0x1c92f8: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C92FCu;
        goto label_1c92fc;
    }
    ctx->pc = 0x1C92F4u;
    {
        const bool branch_taken_0x1c92f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92F4u;
        // 0x1c92f8: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92f4) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C92FCu;
label_1c92fc:
    // 0x1c92fc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1c9300:
    if (ctx->pc == 0x1C9300u) {
        ctx->pc = 0x1C9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92FCu;
        // 0x1c9300: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9304u;
        goto label_1c9304;
    }
    ctx->pc = 0x1C92FCu;
    {
        const bool branch_taken_0x1c92fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92FCu;
        // 0x1c9300: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92fc) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C9304u;
label_1c9304:
    // 0x1c9304: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1c9308:
    if (ctx->pc == 0x1C9308u) {
        ctx->pc = 0x1C9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9304u;
        // 0x1c9308: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C930Cu;
        goto label_1c930c;
    }
    ctx->pc = 0x1C9304u;
    {
        const bool branch_taken_0x1c9304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9304u;
        // 0x1c9308: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9304) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C930Cu;
label_1c930c:
    // 0x1c930c: 0x10000018  b           . + 4 + (0x18 << 2)
label_1c9310:
    if (ctx->pc == 0x1C9310u) {
        ctx->pc = 0x1C9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C930Cu;
        // 0x1c9310: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9314u;
        goto label_1c9314;
    }
    ctx->pc = 0x1C930Cu;
    {
        const bool branch_taken_0x1c930c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C930Cu;
        // 0x1c9310: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c930c) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C9314u;
label_1c9314:
    // 0x1c9314: 0x10000016  b           . + 4 + (0x16 << 2)
label_1c9318:
    if (ctx->pc == 0x1C9318u) {
        ctx->pc = 0x1C9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9314u;
        // 0x1c9318: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C931Cu;
        goto label_1c931c;
    }
    ctx->pc = 0x1C9314u;
    {
        const bool branch_taken_0x1c9314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9314u;
        // 0x1c9318: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9314) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C931Cu;
label_1c931c:
    // 0x1c931c: 0x10000014  b           . + 4 + (0x14 << 2)
label_1c9320:
    if (ctx->pc == 0x1C9320u) {
        ctx->pc = 0x1C9320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C931Cu;
        // 0x1c9320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9324u;
        goto label_1c9324;
    }
    ctx->pc = 0x1C931Cu;
    {
        const bool branch_taken_0x1c931c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C931Cu;
        // 0x1c9320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c931c) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C9324u;
label_1c9324:
    // 0x1c9324: 0x10000012  b           . + 4 + (0x12 << 2)
label_1c9328:
    if (ctx->pc == 0x1C9328u) {
        ctx->pc = 0x1C9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9324u;
        // 0x1c9328: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C932Cu;
        goto label_1c932c;
    }
    ctx->pc = 0x1C9324u;
    {
        const bool branch_taken_0x1c9324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9324u;
        // 0x1c9328: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9324) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C932Cu;
label_1c932c:
    // 0x1c932c: 0x10000010  b           . + 4 + (0x10 << 2)
label_1c9330:
    if (ctx->pc == 0x1C9330u) {
        ctx->pc = 0x1C9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C932Cu;
        // 0x1c9330: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9334u;
        goto label_1c9334;
    }
    ctx->pc = 0x1C932Cu;
    {
        const bool branch_taken_0x1c932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C932Cu;
        // 0x1c9330: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c932c) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C9334u;
label_1c9334:
    // 0x1c9334: 0x1000000e  b           . + 4 + (0xE << 2)
label_1c9338:
    if (ctx->pc == 0x1C9338u) {
        ctx->pc = 0x1C9338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9334u;
        // 0x1c9338: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C933Cu;
        goto label_1c933c;
    }
    ctx->pc = 0x1C9334u;
    {
        const bool branch_taken_0x1c9334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9334u;
        // 0x1c9338: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9334) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C933Cu;
label_1c933c:
    // 0x1c933c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1c9340:
    if (ctx->pc == 0x1C9340u) {
        ctx->pc = 0x1C9340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C933Cu;
        // 0x1c9340: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9344u;
        goto label_1c9344;
    }
    ctx->pc = 0x1C933Cu;
    {
        const bool branch_taken_0x1c933c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C933Cu;
        // 0x1c9340: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c933c) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C9344u;
label_1c9344:
    // 0x1c9344: 0x1000000a  b           . + 4 + (0xA << 2)
label_1c9348:
    if (ctx->pc == 0x1C9348u) {
        ctx->pc = 0x1C9348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9344u;
        // 0x1c9348: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C934Cu;
        goto label_1c934c;
    }
    ctx->pc = 0x1C9344u;
    {
        const bool branch_taken_0x1c9344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9344u;
        // 0x1c9348: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9344) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C934Cu;
label_1c934c:
    // 0x1c934c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c9350:
    if (ctx->pc == 0x1C9350u) {
        ctx->pc = 0x1C9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C934Cu;
        // 0x1c9350: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9354u;
        goto label_1c9354;
    }
    ctx->pc = 0x1C934Cu;
    {
        const bool branch_taken_0x1c934c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C934Cu;
        // 0x1c9350: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c934c) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C9354u;
label_1c9354:
    // 0x1c9354: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c9358:
    if (ctx->pc == 0x1C9358u) {
        ctx->pc = 0x1C9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9354u;
        // 0x1c9358: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C935Cu;
        goto label_1c935c;
    }
    ctx->pc = 0x1C9354u;
    {
        const bool branch_taken_0x1c9354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9354u;
        // 0x1c9358: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9354) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C935Cu;
label_1c935c:
    // 0x1c935c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c9360:
    if (ctx->pc == 0x1C9360u) {
        ctx->pc = 0x1C9360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C935Cu;
        // 0x1c9360: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9364u;
        goto label_1c9364;
    }
    ctx->pc = 0x1C935Cu;
    {
        const bool branch_taken_0x1c935c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C935Cu;
        // 0x1c9360: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c935c) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C9364u;
label_1c9364:
    // 0x1c9364: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c9368:
    if (ctx->pc == 0x1C9368u) {
        ctx->pc = 0x1C9368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9364u;
        // 0x1c9368: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C936Cu;
        goto label_1c936c;
    }
    ctx->pc = 0x1C9364u;
    {
        const bool branch_taken_0x1c9364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9364u;
        // 0x1c9368: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9364) {
            ctx->pc = 0x1C9370u;
            goto label_1c9370;
        }
    }
    ctx->pc = 0x1C936Cu;
label_1c936c:
    // 0x1c936c: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x1c936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_1c9370:
    // 0x1c9370: 0xae020668  sw          $v0, 0x668($s0)
    ctx->pc = 0x1c9370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 2));
label_1c9374:
    // 0x1c9374: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1c9374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1c9378:
    // 0x1c9378: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c9378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c937c:
    // 0x1c937c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c937cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c9380:
    // 0x1c9380: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c9380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9384:
    // 0x1c9384: 0xc07f83a  jal         func_1FE0E8
label_1c9388:
    if (ctx->pc == 0x1C9388u) {
        ctx->pc = 0x1C9388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9384u;
        // 0x1c9388: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C938Cu;
        goto label_1c938c;
    }
    ctx->pc = 0x1C9384u;
    SET_GPR_U32(ctx, 31, 0x1C938Cu);
    ctx->pc = 0x1C9388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9384u;
    // 0x1c9388: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1C9384u, 0x1C938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C938Cu;
label_1c938c:
    // 0x1c938c: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1c938cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1c9390:
    // 0x1c9390: 0xae020650  sw          $v0, 0x650($s0)
    ctx->pc = 0x1c9390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 2));
label_1c9394:
    // 0x1c9394: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c9398:
    if (ctx->pc == 0x1C9398u) {
        ctx->pc = 0x1C9398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9394u;
        // 0x1c9398: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C939Cu;
        goto label_1c939c;
    }
    ctx->pc = 0x1C9394u;
    {
        const bool branch_taken_0x1c9394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9394u;
        // 0x1c9398: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9394) {
            ctx->pc = 0x1C93A8u;
            goto label_1c93a8;
        }
    }
    ctx->pc = 0x1C939Cu;
label_1c939c:
    // 0x1c939c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1c939cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_1c93a0:
    // 0x1c93a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c93a4:
    if (ctx->pc == 0x1C93A4u) {
        ctx->pc = 0x1C93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93A0u;
        // 0x1c93a4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C93A8u;
        goto label_1c93a8;
    }
    ctx->pc = 0x1C93A0u;
    {
        const bool branch_taken_0x1c93a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93A0u;
        // 0x1c93a4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c93a0) {
            ctx->pc = 0x1C93ACu;
            goto label_1c93ac;
        }
    }
    ctx->pc = 0x1C93A8u;
label_1c93a8:
    // 0x1c93a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c93a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c93ac:
    // 0x1c93ac: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1c93acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1c93b0:
    // 0x1c93b0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c93b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c93b4:
    // 0x1c93b4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1c93b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1c93b8:
    // 0x1c93b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c93b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c93bc:
    // 0x1c93bc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1c93bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1c93c0:
    // 0x1c93c0: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1c93c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1c93c4:
    // 0x1c93c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c93c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c93c8:
    // 0x1c93c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c93c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c93cc:
    // 0x1c93cc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1c93ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1c93d0:
    // 0x1c93d0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c93d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1c93d4:
    // 0x1c93d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c93d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c93d8:
    // 0x1c93d8: 0x8e040650  lw          $a0, 0x650($s0)
    ctx->pc = 0x1c93d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
label_1c93dc:
    // 0x1c93dc: 0xc07f6bc  jal         func_1FDAF0
label_1c93e0:
    if (ctx->pc == 0x1C93E0u) {
        ctx->pc = 0x1C93E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93DCu;
        // 0x1c93e0: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C93E4u;
        goto label_1c93e4;
    }
    ctx->pc = 0x1C93DCu;
    SET_GPR_U32(ctx, 31, 0x1C93E4u);
    ctx->pc = 0x1C93E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C93DCu;
    // 0x1c93e0: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1C93DCu, 0x1C93E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C93E4u;
label_1c93e4:
    // 0x1c93e4: 0x8e040650  lw          $a0, 0x650($s0)
    ctx->pc = 0x1c93e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
label_1c93e8:
    // 0x1c93e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c93e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c93ec:
    // 0x1c93ec: 0xc07f59a  jal         func_1FD668
label_1c93f0:
    if (ctx->pc == 0x1C93F0u) {
        ctx->pc = 0x1C93F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93ECu;
        // 0x1c93f0: 0xae020654  sw          $v0, 0x654($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C93F4u;
        goto label_1c93f4;
    }
    ctx->pc = 0x1C93ECu;
    SET_GPR_U32(ctx, 31, 0x1C93F4u);
    ctx->pc = 0x1C93F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C93ECu;
    // 0x1c93f0: 0xae020654  sw          $v0, 0x654($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1620), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1C93ECu, 0x1C93F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C93F4u;
label_1c93f4:
    // 0x1c93f4: 0x26244380  addiu       $a0, $s1, 0x4380
    ctx->pc = 0x1c93f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 17280));
label_1c93f8:
    // 0x1c93f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c93f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c93fc:
    // 0x1c93fc: 0xc07f83a  jal         func_1FE0E8
label_1c9400:
    if (ctx->pc == 0x1C9400u) {
        ctx->pc = 0x1C9400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93FCu;
        // 0x1c9400: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9404u;
        goto label_1c9404;
    }
    ctx->pc = 0x1C93FCu;
    SET_GPR_U32(ctx, 31, 0x1C9404u);
    ctx->pc = 0x1C9400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C93FCu;
    // 0x1c9400: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1C93FCu, 0x1C9404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9404u;
label_1c9404:
    // 0x1c9404: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_1c9408:
    if (ctx->pc == 0x1C9408u) {
        ctx->pc = 0x1C9408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9404u;
        // 0x1c9408: 0xae020658  sw          $v0, 0x658($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C940Cu;
        goto label_1c940c;
    }
    ctx->pc = 0x1C9404u;
    {
        const bool branch_taken_0x1c9404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9404u;
        // 0x1c9408: 0xae020658  sw          $v0, 0x658($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9404) {
            ctx->pc = 0x1C94A4u;
            goto label_1c94a4;
        }
    }
    ctx->pc = 0x1C940Cu;
label_1c940c:
    // 0x1c940c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c940cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1c9410:
    // 0x1c9410: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c9414:
    if (ctx->pc == 0x1C9414u) {
        ctx->pc = 0x1C9414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9410u;
        // 0x1c9414: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9418u;
        goto label_1c9418;
    }
    ctx->pc = 0x1C9410u;
    {
        const bool branch_taken_0x1c9410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9410u;
        // 0x1c9414: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9410) {
            ctx->pc = 0x1C9424u;
            goto label_1c9424;
        }
    }
    ctx->pc = 0x1C9418u;
label_1c9418:
    // 0x1c9418: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1c9418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_1c941c:
    // 0x1c941c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c9420:
    if (ctx->pc == 0x1C9420u) {
        ctx->pc = 0x1C9420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C941Cu;
        // 0x1c9420: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9424u;
        goto label_1c9424;
    }
    ctx->pc = 0x1C941Cu;
    {
        const bool branch_taken_0x1c941c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C941Cu;
        // 0x1c9420: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c941c) {
            ctx->pc = 0x1C9428u;
            goto label_1c9428;
        }
    }
    ctx->pc = 0x1C9424u;
label_1c9424:
    // 0x1c9424: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c9424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9428:
    // 0x1c9428: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c942c:
    // 0x1c942c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c942cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9430:
    // 0x1c9430: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c9430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c9434:
    // 0x1c9434: 0x8e040658  lw          $a0, 0x658($s0)
    ctx->pc = 0x1c9434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1624)));
label_1c9438:
    // 0x1c9438: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x1c9438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1c943c:
    // 0x1c943c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1c943cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_1c9440:
    // 0x1c9440: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9440u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c9444:
    // 0x1c9444: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c9444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c9448:
    // 0x1c9448: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1c9448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1c944c:
    // 0x1c944c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c944cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1c9450:
    // 0x1c9450: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1c9450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1c9454:
    // 0x1c9454: 0xc07f6bc  jal         func_1FDAF0
label_1c9458:
    if (ctx->pc == 0x1C9458u) {
        ctx->pc = 0x1C9458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9454u;
        // 0x1c9458: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C945Cu;
        goto label_1c945c;
    }
    ctx->pc = 0x1C9454u;
    SET_GPR_U32(ctx, 31, 0x1C945Cu);
    ctx->pc = 0x1C9458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9454u;
    // 0x1c9458: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1C9454u, 0x1C945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C945Cu;
label_1c945c:
    // 0x1c945c: 0x8e040658  lw          $a0, 0x658($s0)
    ctx->pc = 0x1c945cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1624)));
label_1c9460:
    // 0x1c9460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9464:
    // 0x1c9464: 0xc07f59a  jal         func_1FD668
label_1c9468:
    if (ctx->pc == 0x1C9468u) {
        ctx->pc = 0x1C9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9464u;
        // 0x1c9468: 0xae02065c  sw          $v0, 0x65C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C946Cu;
        goto label_1c946c;
    }
    ctx->pc = 0x1C9464u;
    SET_GPR_U32(ctx, 31, 0x1C946Cu);
    ctx->pc = 0x1C9468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9464u;
    // 0x1c9468: 0xae02065c  sw          $v0, 0x65C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1628), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1C9464u, 0x1C946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C946Cu;
label_1c946c:
    // 0x1c946c: 0x8e030658  lw          $v1, 0x658($s0)
    ctx->pc = 0x1c946cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1624)));
label_1c9470:
    // 0x1c9470: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1c9470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_1c9474:
    // 0x1c9474: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1c9474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1c9478:
    // 0x1c9478: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x1c9478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
label_1c947c:
    // 0x1c947c: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1c947cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
label_1c9480:
    // 0x1c9480: 0x24a57b00  addiu       $a1, $a1, 0x7B00
    ctx->pc = 0x1c9480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
label_1c9484:
    // 0x1c9484: 0x8e020658  lw          $v0, 0x658($s0)
    ctx->pc = 0x1c9484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1624)));
label_1c9488:
    // 0x1c9488: 0xac44004c  sw          $a0, 0x4C($v0)
    ctx->pc = 0x1c9488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
label_1c948c:
    // 0x1c948c: 0xc07f4c2  jal         func_1FD308
label_1c9490:
    if (ctx->pc == 0x1C9490u) {
        ctx->pc = 0x1C9490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C948Cu;
        // 0x1c9490: 0x8e040658  lw          $a0, 0x658($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9494u;
        goto label_1c9494;
    }
    ctx->pc = 0x1C948Cu;
    SET_GPR_U32(ctx, 31, 0x1C9494u);
    ctx->pc = 0x1C9490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C948Cu;
    // 0x1c9490: 0x8e040658  lw          $a0, 0x658($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1C948Cu, 0x1C9494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9494u;
label_1c9494:
    // 0x1c9494: 0x8e030658  lw          $v1, 0x658($s0)
    ctx->pc = 0x1c9494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1624)));
label_1c9498:
    // 0x1c9498: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c9498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c949c:
    // 0x1c949c: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x1c949cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_1c94a0:
    // 0x1c94a0: 0xa4600044  sh          $zero, 0x44($v1)
    ctx->pc = 0x1c94a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 0));
label_1c94a4:
    // 0x1c94a4: 0x960202fe  lhu         $v0, 0x2FE($s0)
    ctx->pc = 0x1c94a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_1c94a8:
    // 0x1c94a8: 0x241103b7  addiu       $s1, $zero, 0x3B7
    ctx->pc = 0x1c94a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 951));
label_1c94ac:
    // 0x1c94ac: 0x5451000a  bnel        $v0, $s1, . + 4 + (0xA << 2)
label_1c94b0:
    if (ctx->pc == 0x1C94B0u) {
        ctx->pc = 0x1C94B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94ACu;
        // 0x1c94b0: 0x960302fe  lhu         $v1, 0x2FE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C94B4u;
        goto label_1c94b4;
    }
    ctx->pc = 0x1C94ACu;
    {
        const bool branch_taken_0x1c94ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c94ac) {
            ctx->pc = 0x1C94B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C94ACu;
            // 0x1c94b0: 0x960302fe  lhu         $v1, 0x2FE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C94D8u;
            goto label_1c94d8;
        }
    }
    ctx->pc = 0x1C94B4u;
label_1c94b4:
    // 0x1c94b4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1c94b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1c94b8:
    // 0x1c94b8: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1c94b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1c94bc:
    // 0x1c94bc: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x1c94bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
label_1c94c0:
    // 0x1c94c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c94c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c94c4:
    // 0x1c94c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c94c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c94c8:
    // 0x1c94c8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1c94c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c94cc:
    // 0x1c94cc: 0xc0c194a  jal         func_306528
label_1c94d0:
    if (ctx->pc == 0x1C94D0u) {
        ctx->pc = 0x1C94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94CCu;
        // 0x1c94d0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C94D4u;
        goto label_1c94d4;
    }
    ctx->pc = 0x1C94CCu;
    SET_GPR_U32(ctx, 31, 0x1C94D4u);
    ctx->pc = 0x1C94D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C94CCu;
    // 0x1c94d0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1C94CCu, 0x1C94D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94D4u;
label_1c94d4:
    // 0x1c94d4: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1c94d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_1c94d8:
    // 0x1c94d8: 0x10710021  beq         $v1, $s1, . + 4 + (0x21 << 2)
label_1c94dc:
    if (ctx->pc == 0x1C94DCu) {
        ctx->pc = 0x1C94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94D8u;
        // 0x1c94dc: 0x286203b8  slti        $v0, $v1, 0x3B8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)952) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C94E0u;
        goto label_1c94e0;
    }
    ctx->pc = 0x1C94D8u;
    {
        const bool branch_taken_0x1c94d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94D8u;
        // 0x1c94dc: 0x286203b8  slti        $v0, $v1, 0x3B8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)952) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94d8) {
            ctx->pc = 0x1C9560u;
            goto label_1c9560;
        }
    }
    ctx->pc = 0x1C94E0u;
label_1c94e0:
    // 0x1c94e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c94e4:
    if (ctx->pc == 0x1C94E4u) {
        ctx->pc = 0x1C94E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94E0u;
        // 0x1c94e4: 0x24020369  addiu       $v0, $zero, 0x369 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 873));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C94E8u;
        goto label_1c94e8;
    }
    ctx->pc = 0x1C94E0u;
    {
        const bool branch_taken_0x1c94e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C94E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94E0u;
        // 0x1c94e4: 0x24020369  addiu       $v0, $zero, 0x369 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 873));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94e0) {
            ctx->pc = 0x1C9500u;
            goto label_1c9500;
        }
    }
    ctx->pc = 0x1C94E8u;
label_1c94e8:
    // 0x1c94e8: 0x10620051  beq         $v1, $v0, . + 4 + (0x51 << 2)
label_1c94ec:
    if (ctx->pc == 0x1C94ECu) {
        ctx->pc = 0x1C94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94E8u;
        // 0x1c94ec: 0x240203ae  addiu       $v0, $zero, 0x3AE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 942));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C94F0u;
        goto label_1c94f0;
    }
    ctx->pc = 0x1C94E8u;
    {
        const bool branch_taken_0x1c94e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94E8u;
        // 0x1c94ec: 0x240203ae  addiu       $v0, $zero, 0x3AE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 942));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94e8) {
            ctx->pc = 0x1C9630u;
            goto label_1c9630;
        }
    }
    ctx->pc = 0x1C94F0u;
label_1c94f0:
    // 0x1c94f0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1c94f4:
    if (ctx->pc == 0x1C94F4u) {
        ctx->pc = 0x1C94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94F0u;
        // 0x1c94f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C94F8u;
        goto label_1c94f8;
    }
    ctx->pc = 0x1C94F0u;
    {
        const bool branch_taken_0x1c94f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94F0u;
        // 0x1c94f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94f0) {
            ctx->pc = 0x1C9528u;
            goto label_1c9528;
        }
    }
    ctx->pc = 0x1C94F8u;
label_1c94f8:
    // 0x1c94f8: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1c94fc:
    if (ctx->pc == 0x1C94FCu) {
        ctx->pc = 0x1C94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94F8u;
        // 0x1c94fc: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9500u;
        goto label_1c9500;
    }
    ctx->pc = 0x1C94F8u;
    {
        const bool branch_taken_0x1c94f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94F8u;
        // 0x1c94fc: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94f8) {
            ctx->pc = 0x1C9638u;
            goto label_1c9638;
        }
    }
    ctx->pc = 0x1C9500u;
label_1c9500:
    // 0x1c9500: 0x240203b9  addiu       $v0, $zero, 0x3B9
    ctx->pc = 0x1c9500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 953));
label_1c9504:
    // 0x1c9504: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
label_1c9508:
    if (ctx->pc == 0x1C9508u) {
        ctx->pc = 0x1C9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9504u;
        // 0x1c9508: 0x286203b9  slti        $v0, $v1, 0x3B9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)953) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C950Cu;
        goto label_1c950c;
    }
    ctx->pc = 0x1C9504u;
    {
        const bool branch_taken_0x1c9504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9504u;
        // 0x1c9508: 0x286203b9  slti        $v0, $v1, 0x3B9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)953) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9504) {
            ctx->pc = 0x1C95A8u;
            goto label_1c95a8;
        }
    }
    ctx->pc = 0x1C950Cu;
label_1c950c:
    // 0x1c950c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_1c9510:
    if (ctx->pc == 0x1C9510u) {
        ctx->pc = 0x1C9510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C950Cu;
        // 0x1c9510: 0x24040069  addiu       $a0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9514u;
        goto label_1c9514;
    }
    ctx->pc = 0x1C950Cu;
    {
        const bool branch_taken_0x1c950c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C950Cu;
        // 0x1c9510: 0x24040069  addiu       $a0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c950c) {
            ctx->pc = 0x1C957Cu;
            goto label_1c957c;
        }
    }
    ctx->pc = 0x1C9514u;
label_1c9514:
    // 0x1c9514: 0x240203ba  addiu       $v0, $zero, 0x3BA
    ctx->pc = 0x1c9514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 954));
label_1c9518:
    // 0x1c9518: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
label_1c951c:
    if (ctx->pc == 0x1C951Cu) {
        ctx->pc = 0x1C951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9518u;
        // 0x1c951c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9520u;
        goto label_1c9520;
    }
    ctx->pc = 0x1C9518u;
    {
        const bool branch_taken_0x1c9518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9518u;
        // 0x1c951c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9518) {
            ctx->pc = 0x1C95F0u;
            goto label_1c95f0;
        }
    }
    ctx->pc = 0x1C9520u;
label_1c9520:
    // 0x1c9520: 0x10000045  b           . + 4 + (0x45 << 2)
label_1c9524:
    if (ctx->pc == 0x1C9524u) {
        ctx->pc = 0x1C9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9520u;
        // 0x1c9524: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9528u;
        goto label_1c9528;
    }
    ctx->pc = 0x1C9520u;
    {
        const bool branch_taken_0x1c9520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9520u;
        // 0x1c9524: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9520) {
            ctx->pc = 0x1C9638u;
            goto label_1c9638;
        }
    }
    ctx->pc = 0x1C9528u;
label_1c9528:
    // 0x1c9528: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x1c9528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_1c952c:
    // 0x1c952c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1c952cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_1c9530:
    // 0x1c9530: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x1c9530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
label_1c9534:
    // 0x1c9534: 0x24050206  addiu       $a1, $zero, 0x206
    ctx->pc = 0x1c9534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
label_1c9538:
    // 0x1c9538: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1c9538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1c953c:
    // 0x1c953c: 0xc0c15d6  jal         func_305758
label_1c9540:
    if (ctx->pc == 0x1C9540u) {
        ctx->pc = 0x1C9540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C953Cu;
        // 0x1c9540: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9544u;
        goto label_1c9544;
    }
    ctx->pc = 0x1C953Cu;
    SET_GPR_U32(ctx, 31, 0x1C9544u);
    ctx->pc = 0x1C9540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C953Cu;
    // 0x1c9540: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305758u, 0x1C953Cu, 0x1C9544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9544u;
label_1c9544:
    // 0x1c9544: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1c9544u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1c9548:
    // 0x1c9548: 0x24040206  addiu       $a0, $zero, 0x206
    ctx->pc = 0x1c9548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
label_1c954c:
    // 0x1c954c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c954cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9550:
    // 0x1c9550: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c9550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9554:
    // 0x1c9554: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9558:
    // 0x1c9558: 0x10000021  b           . + 4 + (0x21 << 2)
label_1c955c:
    if (ctx->pc == 0x1C955Cu) {
        ctx->pc = 0x1C955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9558u;
        // 0x1c955c: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9560u;
        goto label_1c9560;
    }
    ctx->pc = 0x1C9558u;
    {
        const bool branch_taken_0x1c9558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9558u;
        // 0x1c955c: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9558) {
            ctx->pc = 0x1C95E0u;
            goto label_1c95e0;
        }
    }
    ctx->pc = 0x1C9560u;
label_1c9560:
    // 0x1c9560: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1c9560u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1c9564:
    // 0x1c9564: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1c9564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1c9568:
    // 0x1c9568: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x1c9568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
label_1c956c:
    // 0x1c956c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c956cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9570:
    // 0x1c9570: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9574:
    // 0x1c9574: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1c9578:
    if (ctx->pc == 0x1C9578u) {
        ctx->pc = 0x1C9578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9574u;
        // 0x1c9578: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C957Cu;
        goto label_1c957c;
    }
    ctx->pc = 0x1C9574u;
    {
        const bool branch_taken_0x1c9574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9574u;
        // 0x1c9578: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9574) {
            ctx->pc = 0x1C95E0u;
            goto label_1c95e0;
        }
    }
    ctx->pc = 0x1C957Cu;
label_1c957c:
    // 0x1c957c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1c957cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1c9580:
    // 0x1c9580: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c9580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c9584:
    // 0x1c9584: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c9584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9588:
    // 0x1c9588: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c958c:
    // 0x1c958c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1c958cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c9590:
    // 0x1c9590: 0xc0c194a  jal         func_306528
label_1c9594:
    if (ctx->pc == 0x1C9594u) {
        ctx->pc = 0x1C9594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9590u;
        // 0x1c9594: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9598u;
        goto label_1c9598;
    }
    ctx->pc = 0x1C9590u;
    SET_GPR_U32(ctx, 31, 0x1C9598u);
    ctx->pc = 0x1C9594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9590u;
    // 0x1c9594: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1C9590u, 0x1C9598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9598u;
label_1c9598:
    // 0x1c9598: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1c9598u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1c959c:
    // 0x1c959c: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x1c959cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_1c95a0:
    // 0x1c95a0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1c95a4:
    if (ctx->pc == 0x1C95A4u) {
        ctx->pc = 0x1C95A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C95A0u;
        // 0x1c95a4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C95A8u;
        goto label_1c95a8;
    }
    ctx->pc = 0x1C95A0u;
    {
        const bool branch_taken_0x1c95a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C95A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C95A0u;
        // 0x1c95a4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c95a0) {
            ctx->pc = 0x1C95D4u;
            goto label_1c95d4;
        }
    }
    ctx->pc = 0x1C95A8u;
label_1c95a8:
    // 0x1c95a8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1c95a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1c95ac:
    // 0x1c95ac: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x1c95acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_1c95b0:
    // 0x1c95b0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c95b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c95b4:
    // 0x1c95b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c95b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c95b8:
    // 0x1c95b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c95b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c95bc:
    // 0x1c95bc: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1c95bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c95c0:
    // 0x1c95c0: 0xc0c194a  jal         func_306528
label_1c95c4:
    if (ctx->pc == 0x1C95C4u) {
        ctx->pc = 0x1C95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C95C0u;
        // 0x1c95c4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C95C8u;
        goto label_1c95c8;
    }
    ctx->pc = 0x1C95C0u;
    SET_GPR_U32(ctx, 31, 0x1C95C8u);
    ctx->pc = 0x1C95C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C95C0u;
    // 0x1c95c4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1C95C0u, 0x1C95C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C95C8u;
label_1c95c8:
    // 0x1c95c8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1c95c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1c95cc:
    // 0x1c95cc: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x1c95ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_1c95d0:
    // 0x1c95d0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c95d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c95d4:
    // 0x1c95d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c95d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c95d8:
    // 0x1c95d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c95d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c95dc:
    // 0x1c95dc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1c95dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c95e0:
    // 0x1c95e0: 0xc0c194a  jal         func_306528
label_1c95e4:
    if (ctx->pc == 0x1C95E4u) {
        ctx->pc = 0x1C95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C95E0u;
        // 0x1c95e4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C95E8u;
        goto label_1c95e8;
    }
    ctx->pc = 0x1C95E0u;
    SET_GPR_U32(ctx, 31, 0x1C95E8u);
    ctx->pc = 0x1C95E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C95E0u;
    // 0x1c95e4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1C95E0u, 0x1C95E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C95E8u;
label_1c95e8:
    // 0x1c95e8: 0x10000012  b           . + 4 + (0x12 << 2)
label_1c95ec:
    if (ctx->pc == 0x1C95ECu) {
        ctx->pc = 0x1C95ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C95E8u;
        // 0x1c95ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C95F0u;
        goto label_1c95f0;
    }
    ctx->pc = 0x1C95E8u;
    {
        const bool branch_taken_0x1c95e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C95ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C95E8u;
        // 0x1c95ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c95e8) {
            ctx->pc = 0x1C9634u;
            goto label_1c9634;
        }
    }
    ctx->pc = 0x1C95F0u;
label_1c95f0:
    // 0x1c95f0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1c95f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1c95f4:
    // 0x1c95f4: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x1c95f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_1c95f8:
    // 0x1c95f8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c95f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1c95fc:
    // 0x1c95fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c95fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9600:
    // 0x1c9600: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9604:
    // 0x1c9604: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1c9604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c9608:
    // 0x1c9608: 0xc0c194a  jal         func_306528
label_1c960c:
    if (ctx->pc == 0x1C960Cu) {
        ctx->pc = 0x1C960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9608u;
        // 0x1c960c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9610u;
        goto label_1c9610;
    }
    ctx->pc = 0x1C9608u;
    SET_GPR_U32(ctx, 31, 0x1C9610u);
    ctx->pc = 0x1C960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9608u;
    // 0x1c960c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1C9608u, 0x1C9610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9610u;
label_1c9610:
    // 0x1c9610: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1c9610u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1c9614:
    // 0x1c9614: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x1c9614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_1c9618:
    // 0x1c9618: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c9618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1c961c:
    // 0x1c961c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c961cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9620:
    // 0x1c9620: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9624:
    // 0x1c9624: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1c9624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c9628:
    // 0x1c9628: 0xc0c194a  jal         func_306528
label_1c962c:
    if (ctx->pc == 0x1C962Cu) {
        ctx->pc = 0x1C962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9628u;
        // 0x1c962c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9630u;
        goto label_1c9630;
    }
    ctx->pc = 0x1C9628u;
    SET_GPR_U32(ctx, 31, 0x1C9630u);
    ctx->pc = 0x1C962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9628u;
    // 0x1c962c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1C9628u, 0x1C9630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9630u;
label_1c9630:
    // 0x1c9630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9634:
    // 0x1c9634: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1c9634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c9638:
    // 0x1c9638: 0xc06dca0  jal         func_1B7280
label_1c963c:
    if (ctx->pc == 0x1C963Cu) {
        ctx->pc = 0x1C963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9638u;
        // 0x1c963c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9640u;
        goto label_1c9640;
    }
    ctx->pc = 0x1C9638u;
    SET_GPR_U32(ctx, 31, 0x1C9640u);
    ctx->pc = 0x1C963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9638u;
    // 0x1c963c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1C9638u, 0x1C9640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9640u;
label_1c9640:
    // 0x1c9640: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1c9640u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_1c9644:
    // 0x1c9644: 0x286203ac  slti        $v0, $v1, 0x3AC
    ctx->pc = 0x1c9644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)940) ? 1 : 0);
label_1c9648:
    // 0x1c9648: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c964c:
    if (ctx->pc == 0x1C964Cu) {
        ctx->pc = 0x1C964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9648u;
        // 0x1c964c: 0x286203a8  slti        $v0, $v1, 0x3A8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)936) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9650u;
        goto label_1c9650;
    }
    ctx->pc = 0x1C9648u;
    {
        const bool branch_taken_0x1c9648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9648u;
        // 0x1c964c: 0x286203a8  slti        $v0, $v1, 0x3A8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)936) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9648) {
            ctx->pc = 0x1C9670u;
            goto label_1c9670;
        }
    }
    ctx->pc = 0x1C9650u;
label_1c9650:
    // 0x1c9650: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1c9654:
    if (ctx->pc == 0x1C9654u) {
        ctx->pc = 0x1C9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9650u;
        // 0x1c9654: 0x2402036a  addiu       $v0, $zero, 0x36A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 874));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9658u;
        goto label_1c9658;
    }
    ctx->pc = 0x1C9650u;
    {
        const bool branch_taken_0x1c9650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9650u;
        // 0x1c9654: 0x2402036a  addiu       $v0, $zero, 0x36A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 874));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9650) {
            ctx->pc = 0x1C96BCu;
            goto label_1c96bc;
        }
    }
    ctx->pc = 0x1C9658u;
label_1c9658:
    // 0x1c9658: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_1c965c:
    if (ctx->pc == 0x1C965Cu) {
        ctx->pc = 0x1C965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9658u;
        // 0x1c965c: 0x24020382  addiu       $v0, $zero, 0x382 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 898));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9660u;
        goto label_1c9660;
    }
    ctx->pc = 0x1C9658u;
    {
        const bool branch_taken_0x1c9658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9658u;
        // 0x1c965c: 0x24020382  addiu       $v0, $zero, 0x382 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 898));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9658) {
            ctx->pc = 0x1C96D0u;
            goto label_1c96d0;
        }
    }
    ctx->pc = 0x1C9660u;
label_1c9660:
    // 0x1c9660: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_1c9664:
    if (ctx->pc == 0x1C9664u) {
        ctx->pc = 0x1C9664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9660u;
        // 0x1c9664: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9668u;
        goto label_1c9668;
    }
    ctx->pc = 0x1C9660u;
    {
        const bool branch_taken_0x1c9660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9660u;
        // 0x1c9664: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9660) {
            ctx->pc = 0x1C96F0u;
            goto label_1c96f0;
        }
    }
    ctx->pc = 0x1C9668u;
label_1c9668:
    // 0x1c9668: 0x10000011  b           . + 4 + (0x11 << 2)
label_1c966c:
    if (ctx->pc == 0x1C966Cu) {
        ctx->pc = 0x1C966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9668u;
        // 0x1c966c: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9670u;
        goto label_1c9670;
    }
    ctx->pc = 0x1C9668u;
    {
        const bool branch_taken_0x1c9668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9668u;
        // 0x1c966c: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9668) {
            ctx->pc = 0x1C96B0u;
            goto label_1c96b0;
        }
    }
    ctx->pc = 0x1C9670u;
label_1c9670:
    // 0x1c9670: 0x240203b4  addiu       $v0, $zero, 0x3B4
    ctx->pc = 0x1c9670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 948));
label_1c9674:
    // 0x1c9674: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1c9678:
    if (ctx->pc == 0x1C9678u) {
        ctx->pc = 0x1C9678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9674u;
        // 0x1c9678: 0x286203b5  slti        $v0, $v1, 0x3B5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)949) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C967Cu;
        goto label_1c967c;
    }
    ctx->pc = 0x1C9674u;
    {
        const bool branch_taken_0x1c9674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9674u;
        // 0x1c9678: 0x286203b5  slti        $v0, $v1, 0x3B5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)949) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9674) {
            ctx->pc = 0x1C96BCu;
            goto label_1c96bc;
        }
    }
    ctx->pc = 0x1C967Cu;
label_1c967c:
    // 0x1c967c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c9680:
    if (ctx->pc == 0x1C9680u) {
        ctx->pc = 0x1C9680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C967Cu;
        // 0x1c9680: 0x286203af  slti        $v0, $v1, 0x3AF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)943) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9684u;
        goto label_1c9684;
    }
    ctx->pc = 0x1C967Cu;
    {
        const bool branch_taken_0x1c967c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C967Cu;
        // 0x1c9680: 0x286203af  slti        $v0, $v1, 0x3AF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)943) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c967c) {
            ctx->pc = 0x1C969Cu;
            goto label_1c969c;
        }
    }
    ctx->pc = 0x1C9684u;
label_1c9684:
    // 0x1c9684: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c9688:
    if (ctx->pc == 0x1C9688u) {
        ctx->pc = 0x1C9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9684u;
        // 0x1c9688: 0x286203ad  slti        $v0, $v1, 0x3AD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)941) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C968Cu;
        goto label_1c968c;
    }
    ctx->pc = 0x1C9684u;
    {
        const bool branch_taken_0x1c9684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9684u;
        // 0x1c9688: 0x286203ad  slti        $v0, $v1, 0x3AD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)941) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9684) {
            ctx->pc = 0x1C96A8u;
            goto label_1c96a8;
        }
    }
    ctx->pc = 0x1C968Cu;
label_1c968c:
    // 0x1c968c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1c9690:
    if (ctx->pc == 0x1C9690u) {
        ctx->pc = 0x1C9690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C968Cu;
        // 0x1c9690: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9694u;
        goto label_1c9694;
    }
    ctx->pc = 0x1C968Cu;
    {
        const bool branch_taken_0x1c968c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C968Cu;
        // 0x1c9690: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c968c) {
            ctx->pc = 0x1C96ACu;
            goto label_1c96ac;
        }
    }
    ctx->pc = 0x1C9694u;
label_1c9694:
    // 0x1c9694: 0x1000000a  b           . + 4 + (0xA << 2)
label_1c9698:
    if (ctx->pc == 0x1C9698u) {
        ctx->pc = 0x1C9698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9694u;
        // 0x1c9698: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C969Cu;
        goto label_1c969c;
    }
    ctx->pc = 0x1C9694u;
    {
        const bool branch_taken_0x1c9694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9694u;
        // 0x1c9698: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9694) {
            ctx->pc = 0x1C96C0u;
            goto label_1c96c0;
        }
    }
    ctx->pc = 0x1C969Cu;
label_1c969c:
    // 0x1c969c: 0x2402042a  addiu       $v0, $zero, 0x42A
    ctx->pc = 0x1c969cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
label_1c96a0:
    // 0x1c96a0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_1c96a4:
    if (ctx->pc == 0x1C96A4u) {
        ctx->pc = 0x1C96A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C96A0u;
        // 0x1c96a4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C96A8u;
        goto label_1c96a8;
    }
    ctx->pc = 0x1C96A0u;
    {
        const bool branch_taken_0x1c96a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C96A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C96A0u;
        // 0x1c96a4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c96a0) {
            ctx->pc = 0x1C96F4u;
            goto label_1c96f4;
        }
    }
    ctx->pc = 0x1C96A8u;
label_1c96a8:
    // 0x1c96a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c96a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c96ac:
    // 0x1c96ac: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1c96acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_1c96b0:
    // 0x1c96b0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1c96b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1c96b4:
    // 0x1c96b4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1c96b8:
    if (ctx->pc == 0x1C96B8u) {
        ctx->pc = 0x1C96B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C96B4u;
        // 0x1c96b8: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C96BCu;
        goto label_1c96bc;
    }
    ctx->pc = 0x1C96B4u;
    {
        const bool branch_taken_0x1c96b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C96B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C96B4u;
        // 0x1c96b8: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c96b4) {
            ctx->pc = 0x1C9700u;
            goto label_1c9700;
        }
    }
    ctx->pc = 0x1C96BCu;
label_1c96bc:
    // 0x1c96bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c96bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c96c0:
    // 0x1c96c0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1c96c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_1c96c4:
    // 0x1c96c4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1c96c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1c96c8:
    // 0x1c96c8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1c96cc:
    if (ctx->pc == 0x1C96CCu) {
        ctx->pc = 0x1C96CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C96C8u;
        // 0x1c96cc: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C96D0u;
        goto label_1c96d0;
    }
    ctx->pc = 0x1C96C8u;
    {
        const bool branch_taken_0x1c96c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C96CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C96C8u;
        // 0x1c96cc: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c96c8) {
            ctx->pc = 0x1C9700u;
            goto label_1c9700;
        }
    }
    ctx->pc = 0x1C96D0u;
label_1c96d0:
    // 0x1c96d0: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1c96d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_1c96d4:
    // 0x1c96d4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1c96d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1c96d8:
    // 0x1c96d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c96d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c96dc:
    // 0x1c96dc: 0x0  nop
    ctx->pc = 0x1c96dcu;
    // NOP
label_1c96e0:
    // 0x1c96e0: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x1c96e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_1c96e4:
    // 0x1c96e4: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x1c96e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_1c96e8:
    // 0x1c96e8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c96ec:
    if (ctx->pc == 0x1C96ECu) {
        ctx->pc = 0x1C96ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C96E8u;
        // 0x1c96ec: 0xe6000114  swc1        $f0, 0x114($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C96F0u;
        goto label_1c96f0;
    }
    ctx->pc = 0x1C96E8u;
    {
        const bool branch_taken_0x1c96e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C96ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C96E8u;
        // 0x1c96ec: 0xe6000114  swc1        $f0, 0x114($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c96e8) {
            ctx->pc = 0x1C9704u;
            goto label_1c9704;
        }
    }
    ctx->pc = 0x1C96F0u;
label_1c96f0:
    // 0x1c96f0: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1c96f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1c96f4:
    // 0x1c96f4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1c96f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_1c96f8:
    // 0x1c96f8: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1c96f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
label_1c96fc:
    // 0x1c96fc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1c96fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1c9700:
    // 0x1c9700: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1c9700u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1c9704:
    // 0x1c9704: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1c9704u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_1c9708:
    // 0x1c9708: 0x2402042a  addiu       $v0, $zero, 0x42A
    ctx->pc = 0x1c9708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
label_1c970c:
    // 0x1c970c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1c9710:
    if (ctx->pc == 0x1C9710u) {
        ctx->pc = 0x1C9710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C970Cu;
        // 0x1c9710: 0x8e0205b8  lw          $v0, 0x5B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9714u;
        goto label_1c9714;
    }
    ctx->pc = 0x1C970Cu;
    {
        const bool branch_taken_0x1c970c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C9710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C970Cu;
        // 0x1c9710: 0x8e0205b8  lw          $v0, 0x5B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c970c) {
            ctx->pc = 0x1C971Cu;
            goto label_1c971c;
        }
    }
    ctx->pc = 0x1C9714u;
label_1c9714:
    // 0x1c9714: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c9718:
    if (ctx->pc == 0x1C9718u) {
        ctx->pc = 0x1C9718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9714u;
        // 0x1c9718: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C971Cu;
        goto label_1c971c;
    }
    ctx->pc = 0x1C9714u;
    {
        const bool branch_taken_0x1c9714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9714u;
        // 0x1c9718: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9714) {
            ctx->pc = 0x1C9724u;
            goto label_1c9724;
        }
    }
    ctx->pc = 0x1C971Cu;
label_1c971c:
    // 0x1c971c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x1c971cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_1c9720:
    // 0x1c9720: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c9720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1c9724:
    // 0x1c9724: 0xae0205b8  sw          $v0, 0x5B8($s0)
    ctx->pc = 0x1c9724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
label_1c9728:
    // 0x1c9728: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1c9728u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_1c972c:
    // 0x1c972c: 0x2402037b  addiu       $v0, $zero, 0x37B
    ctx->pc = 0x1c972cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 891));
label_1c9730:
    // 0x1c9730: 0xa2000688  sb          $zero, 0x688($s0)
    ctx->pc = 0x1c9730u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1672), (uint8_t)GPR_U32(ctx, 0));
label_1c9734:
    // 0x1c9734: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1c9738:
    if (ctx->pc == 0x1C9738u) {
        ctx->pc = 0x1C9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9734u;
        // 0x1c9738: 0xae00068c  sw          $zero, 0x68C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C973Cu;
        goto label_1c973c;
    }
    ctx->pc = 0x1C9734u;
    {
        const bool branch_taken_0x1c9734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9734u;
        // 0x1c9738: 0xae00068c  sw          $zero, 0x68C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9734) {
            ctx->pc = 0x1C9748u;
            goto label_1c9748;
        }
    }
    ctx->pc = 0x1C973Cu;
label_1c973c:
    // 0x1c973c: 0x24020390  addiu       $v0, $zero, 0x390
    ctx->pc = 0x1c973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
label_1c9740:
    // 0x1c9740: 0x54620036  bnel        $v1, $v0, . + 4 + (0x36 << 2)
label_1c9744:
    if (ctx->pc == 0x1C9744u) {
        ctx->pc = 0x1C9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9740u;
        // 0x1c9744: 0x960302fe  lhu         $v1, 0x2FE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9748u;
        goto label_1c9748;
    }
    ctx->pc = 0x1C9740u;
    {
        const bool branch_taken_0x1c9740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c9740) {
            ctx->pc = 0x1C9744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9740u;
            // 0x1c9744: 0x960302fe  lhu         $v1, 0x2FE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C981Cu;
            goto label_1c981c;
        }
    }
    ctx->pc = 0x1C9748u;
label_1c9748:
    // 0x1c9748: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1c9748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c974c:
    // 0x1c974c: 0xc0c3ea6  jal         func_30FA98
label_1c9750:
    if (ctx->pc == 0x1C9750u) {
        ctx->pc = 0x1C9750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C974Cu;
        // 0x1c9750: 0x2404037c  addiu       $a0, $zero, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9754u;
        goto label_1c9754;
    }
    ctx->pc = 0x1C974Cu;
    SET_GPR_U32(ctx, 31, 0x1C9754u);
    ctx->pc = 0x1C9750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C974Cu;
    // 0x1c9750: 0x2404037c  addiu       $a0, $zero, 0x37C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x1C974Cu, 0x1C9754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9754u;
label_1c9754:
    // 0x1c9754: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c9754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c9758:
    // 0x1c9758: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
label_1c975c:
    if (ctx->pc == 0x1C975Cu) {
        ctx->pc = 0x1C975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9758u;
        // 0x1c975c: 0xae05068c  sw          $a1, 0x68C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1676), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9760u;
        goto label_1c9760;
    }
    ctx->pc = 0x1C9758u;
    {
        const bool branch_taken_0x1c9758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9758u;
        // 0x1c975c: 0xae05068c  sw          $a1, 0x68C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1676), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9758) {
            ctx->pc = 0x1C9818u;
            goto label_1c9818;
        }
    }
    ctx->pc = 0x1C9760u;
label_1c9760:
    // 0x1c9760: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1c9760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c9764:
    // 0x1c9764: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1c9764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c9768:
    // 0x1c9768: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x1c9768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_1c976c:
    // 0x1c976c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1c976cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1c9770:
    // 0x1c9770: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1c9770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1c9774:
    // 0x1c9774: 0x40f809  jalr        $v0
label_1c9778:
    if (ctx->pc == 0x1C9778u) {
        ctx->pc = 0x1C9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9774u;
        // 0x1c9778: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C977Cu;
        goto label_1c977c;
    }
    ctx->pc = 0x1C9774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C977Cu);
        ctx->pc = 0x1C9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9774u;
        // 0x1c9778: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9774u, 0x1C977Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C977Cu;
label_1c977c:
    // 0x1c977c: 0x8e02068c  lw          $v0, 0x68C($s0)
    ctx->pc = 0x1c977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
label_1c9780:
    // 0x1c9780: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1c9780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c9784:
    // 0x1c9784: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1c9784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1c9788:
    // 0x1c9788: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
label_1c978c:
    if (ctx->pc == 0x1C978Cu) {
        ctx->pc = 0x1C978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9788u;
        // 0x1c978c: 0x8e04068c  lw          $a0, 0x68C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9790u;
        goto label_1c9790;
    }
    ctx->pc = 0x1C9788u;
    {
        const bool branch_taken_0x1c9788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c9788) {
            ctx->pc = 0x1C978Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9788u;
            // 0x1c978c: 0x8e04068c  lw          $a0, 0x68C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C97ACu;
            goto label_1c97ac;
        }
    }
    ctx->pc = 0x1C9790u;
label_1c9790:
    // 0x1c9790: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1c9790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9794:
    // 0x1c9794: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c9794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c9798:
    // 0x1c9798: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c9798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c979c:
    // 0x1c979c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c979cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c97a0:
    // 0x1c97a0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1c97a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c97a4:
    // 0x1c97a4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c97a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c97a8:
    // 0x1c97a8: 0x8e04068c  lw          $a0, 0x68C($s0)
    ctx->pc = 0x1c97a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
label_1c97ac:
    // 0x1c97ac: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c97acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c97b0:
    // 0x1c97b0: 0x24830490  addiu       $v1, $a0, 0x490
    ctx->pc = 0x1c97b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
label_1c97b4:
    // 0x1c97b4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_1c97b8:
    if (ctx->pc == 0x1C97B8u) {
        ctx->pc = 0x1C97B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97B4u;
        // 0x1c97b8: 0x8e02068c  lw          $v0, 0x68C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C97BCu;
        goto label_1c97bc;
    }
    ctx->pc = 0x1C97B4u;
    {
        const bool branch_taken_0x1c97b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c97b4) {
            ctx->pc = 0x1C97B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C97B4u;
            // 0x1c97b8: 0x8e02068c  lw          $v0, 0x68C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C97D8u;
            goto label_1c97d8;
        }
    }
    ctx->pc = 0x1C97BCu;
label_1c97bc:
    // 0x1c97bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c97bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c97c0:
    // 0x1c97c0: 0xe4800490  swc1        $f0, 0x490($a0)
    ctx->pc = 0x1c97c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1168), bits); }
label_1c97c4:
    // 0x1c97c4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c97c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c97c8:
    // 0x1c97c8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c97c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c97cc:
    // 0x1c97cc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c97ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c97d0:
    // 0x1c97d0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c97d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c97d4:
    // 0x1c97d4: 0x8e02068c  lw          $v0, 0x68C($s0)
    ctx->pc = 0x1c97d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
label_1c97d8:
    // 0x1c97d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c97d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c97dc:
    // 0x1c97dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c97dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c97e0:
    // 0x1c97e0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1c97e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c97e4:
    // 0x1c97e4: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1c97e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
label_1c97e8:
    // 0x1c97e8: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x1c97e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c97ec:
    // 0x1c97ec: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1c97ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_1c97f0:
    // 0x1c97f0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1c97f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1c97f4:
    // 0x1c97f4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1c97f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1c97f8:
    // 0x1c97f8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c97f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1c97fc:
    // 0x1c97fc: 0x8e04068c  lw          $a0, 0x68C($s0)
    ctx->pc = 0x1c97fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
label_1c9800:
    // 0x1c9800: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1c9800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1c9804:
    // 0x1c9804: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1c9804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1c9808:
    // 0x1c9808: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1c9808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1c980c:
    // 0x1c980c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1c980cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1c9810:
    // 0x1c9810: 0xc073c58  jal         func_1CF160
label_1c9814:
    if (ctx->pc == 0x1C9814u) {
        ctx->pc = 0x1C9814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9810u;
        // 0x1c9814: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9818u;
        goto label_1c9818;
    }
    ctx->pc = 0x1C9810u;
    SET_GPR_U32(ctx, 31, 0x1C9818u);
    ctx->pc = 0x1C9814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9810u;
    // 0x1c9814: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF160u, 0x1C9810u, 0x1C9818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9818u;
label_1c9818:
    // 0x1c9818: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1c9818u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_1c981c:
    // 0x1c981c: 0x24020376  addiu       $v0, $zero, 0x376
    ctx->pc = 0x1c981cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 886));
label_1c9820:
    // 0x1c9820: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1c9824:
    if (ctx->pc == 0x1C9824u) {
        ctx->pc = 0x1C9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9820u;
        // 0x1c9824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9828u;
        goto label_1c9828;
    }
    ctx->pc = 0x1C9820u;
    {
        const bool branch_taken_0x1c9820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9820u;
        // 0x1c9824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9820) {
            ctx->pc = 0x1C9848u;
            goto label_1c9848;
        }
    }
    ctx->pc = 0x1C9828u;
label_1c9828:
    // 0x1c9828: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x1c9828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_1c982c:
    // 0x1c982c: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1c982cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
label_1c9830:
    // 0x1c9830: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c9830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1c9834:
    // 0x1c9834: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1c9834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1c9838:
    // 0x1c9838: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c9838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1c983c:
    // 0x1c983c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c983cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1c9840:
    // 0x1c9840: 0xae0202d0  sw          $v0, 0x2D0($s0)
    ctx->pc = 0x1c9840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 2));
label_1c9844:
    // 0x1c9844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9848:
    // 0x1c9848: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1c9848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c984c:
    // 0x1c984c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1c984cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c9850:
    // 0x1c9850: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c9850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c9854:
    // 0x1c9854: 0x3e00008  jr          $ra
label_1c9858:
    if (ctx->pc == 0x1C9858u) {
        ctx->pc = 0x1C9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9854u;
        // 0x1c9858: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C985Cu;
        goto label_1c985c;
    }
    ctx->pc = 0x1C9854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9854u;
        // 0x1c9858: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C985Cu;
label_1c985c:
    // 0x1c985c: 0x0  nop
    ctx->pc = 0x1c985cu;
    // NOP
    ctx->pc = 0x1c9860u;
}
