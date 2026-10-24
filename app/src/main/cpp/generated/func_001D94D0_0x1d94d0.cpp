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

// Function: func_001D94D0
// Address: 0x1d94d0 - 0x1d9ca0
void func_001D94D0_0x1d94d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D94D0_0x1d94d0");
#endif

    switch (ctx->pc) {
        case 0x1d94d0u: goto label_1d94d0;
        case 0x1d94d4u: goto label_1d94d4;
        case 0x1d94d8u: goto label_1d94d8;
        case 0x1d94dcu: goto label_1d94dc;
        case 0x1d94e0u: goto label_1d94e0;
        case 0x1d94e4u: goto label_1d94e4;
        case 0x1d94e8u: goto label_1d94e8;
        case 0x1d94ecu: goto label_1d94ec;
        case 0x1d94f0u: goto label_1d94f0;
        case 0x1d94f4u: goto label_1d94f4;
        case 0x1d94f8u: goto label_1d94f8;
        case 0x1d94fcu: goto label_1d94fc;
        case 0x1d9500u: goto label_1d9500;
        case 0x1d9504u: goto label_1d9504;
        case 0x1d9508u: goto label_1d9508;
        case 0x1d950cu: goto label_1d950c;
        case 0x1d9510u: goto label_1d9510;
        case 0x1d9514u: goto label_1d9514;
        case 0x1d9518u: goto label_1d9518;
        case 0x1d951cu: goto label_1d951c;
        case 0x1d9520u: goto label_1d9520;
        case 0x1d9524u: goto label_1d9524;
        case 0x1d9528u: goto label_1d9528;
        case 0x1d952cu: goto label_1d952c;
        case 0x1d9530u: goto label_1d9530;
        case 0x1d9534u: goto label_1d9534;
        case 0x1d9538u: goto label_1d9538;
        case 0x1d953cu: goto label_1d953c;
        case 0x1d9540u: goto label_1d9540;
        case 0x1d9544u: goto label_1d9544;
        case 0x1d9548u: goto label_1d9548;
        case 0x1d954cu: goto label_1d954c;
        case 0x1d9550u: goto label_1d9550;
        case 0x1d9554u: goto label_1d9554;
        case 0x1d9558u: goto label_1d9558;
        case 0x1d955cu: goto label_1d955c;
        case 0x1d9560u: goto label_1d9560;
        case 0x1d9564u: goto label_1d9564;
        case 0x1d9568u: goto label_1d9568;
        case 0x1d956cu: goto label_1d956c;
        case 0x1d9570u: goto label_1d9570;
        case 0x1d9574u: goto label_1d9574;
        case 0x1d9578u: goto label_1d9578;
        case 0x1d957cu: goto label_1d957c;
        case 0x1d9580u: goto label_1d9580;
        case 0x1d9584u: goto label_1d9584;
        case 0x1d9588u: goto label_1d9588;
        case 0x1d958cu: goto label_1d958c;
        case 0x1d9590u: goto label_1d9590;
        case 0x1d9594u: goto label_1d9594;
        case 0x1d9598u: goto label_1d9598;
        case 0x1d959cu: goto label_1d959c;
        case 0x1d95a0u: goto label_1d95a0;
        case 0x1d95a4u: goto label_1d95a4;
        case 0x1d95a8u: goto label_1d95a8;
        case 0x1d95acu: goto label_1d95ac;
        case 0x1d95b0u: goto label_1d95b0;
        case 0x1d95b4u: goto label_1d95b4;
        case 0x1d95b8u: goto label_1d95b8;
        case 0x1d95bcu: goto label_1d95bc;
        case 0x1d95c0u: goto label_1d95c0;
        case 0x1d95c4u: goto label_1d95c4;
        case 0x1d95c8u: goto label_1d95c8;
        case 0x1d95ccu: goto label_1d95cc;
        case 0x1d95d0u: goto label_1d95d0;
        case 0x1d95d4u: goto label_1d95d4;
        case 0x1d95d8u: goto label_1d95d8;
        case 0x1d95dcu: goto label_1d95dc;
        case 0x1d95e0u: goto label_1d95e0;
        case 0x1d95e4u: goto label_1d95e4;
        case 0x1d95e8u: goto label_1d95e8;
        case 0x1d95ecu: goto label_1d95ec;
        case 0x1d95f0u: goto label_1d95f0;
        case 0x1d95f4u: goto label_1d95f4;
        case 0x1d95f8u: goto label_1d95f8;
        case 0x1d95fcu: goto label_1d95fc;
        case 0x1d9600u: goto label_1d9600;
        case 0x1d9604u: goto label_1d9604;
        case 0x1d9608u: goto label_1d9608;
        case 0x1d960cu: goto label_1d960c;
        case 0x1d9610u: goto label_1d9610;
        case 0x1d9614u: goto label_1d9614;
        case 0x1d9618u: goto label_1d9618;
        case 0x1d961cu: goto label_1d961c;
        case 0x1d9620u: goto label_1d9620;
        case 0x1d9624u: goto label_1d9624;
        case 0x1d9628u: goto label_1d9628;
        case 0x1d962cu: goto label_1d962c;
        case 0x1d9630u: goto label_1d9630;
        case 0x1d9634u: goto label_1d9634;
        case 0x1d9638u: goto label_1d9638;
        case 0x1d963cu: goto label_1d963c;
        case 0x1d9640u: goto label_1d9640;
        case 0x1d9644u: goto label_1d9644;
        case 0x1d9648u: goto label_1d9648;
        case 0x1d964cu: goto label_1d964c;
        case 0x1d9650u: goto label_1d9650;
        case 0x1d9654u: goto label_1d9654;
        case 0x1d9658u: goto label_1d9658;
        case 0x1d965cu: goto label_1d965c;
        case 0x1d9660u: goto label_1d9660;
        case 0x1d9664u: goto label_1d9664;
        case 0x1d9668u: goto label_1d9668;
        case 0x1d966cu: goto label_1d966c;
        case 0x1d9670u: goto label_1d9670;
        case 0x1d9674u: goto label_1d9674;
        case 0x1d9678u: goto label_1d9678;
        case 0x1d967cu: goto label_1d967c;
        case 0x1d9680u: goto label_1d9680;
        case 0x1d9684u: goto label_1d9684;
        case 0x1d9688u: goto label_1d9688;
        case 0x1d968cu: goto label_1d968c;
        case 0x1d9690u: goto label_1d9690;
        case 0x1d9694u: goto label_1d9694;
        case 0x1d9698u: goto label_1d9698;
        case 0x1d969cu: goto label_1d969c;
        case 0x1d96a0u: goto label_1d96a0;
        case 0x1d96a4u: goto label_1d96a4;
        case 0x1d96a8u: goto label_1d96a8;
        case 0x1d96acu: goto label_1d96ac;
        case 0x1d96b0u: goto label_1d96b0;
        case 0x1d96b4u: goto label_1d96b4;
        case 0x1d96b8u: goto label_1d96b8;
        case 0x1d96bcu: goto label_1d96bc;
        case 0x1d96c0u: goto label_1d96c0;
        case 0x1d96c4u: goto label_1d96c4;
        case 0x1d96c8u: goto label_1d96c8;
        case 0x1d96ccu: goto label_1d96cc;
        case 0x1d96d0u: goto label_1d96d0;
        case 0x1d96d4u: goto label_1d96d4;
        case 0x1d96d8u: goto label_1d96d8;
        case 0x1d96dcu: goto label_1d96dc;
        case 0x1d96e0u: goto label_1d96e0;
        case 0x1d96e4u: goto label_1d96e4;
        case 0x1d96e8u: goto label_1d96e8;
        case 0x1d96ecu: goto label_1d96ec;
        case 0x1d96f0u: goto label_1d96f0;
        case 0x1d96f4u: goto label_1d96f4;
        case 0x1d96f8u: goto label_1d96f8;
        case 0x1d96fcu: goto label_1d96fc;
        case 0x1d9700u: goto label_1d9700;
        case 0x1d9704u: goto label_1d9704;
        case 0x1d9708u: goto label_1d9708;
        case 0x1d970cu: goto label_1d970c;
        case 0x1d9710u: goto label_1d9710;
        case 0x1d9714u: goto label_1d9714;
        case 0x1d9718u: goto label_1d9718;
        case 0x1d971cu: goto label_1d971c;
        case 0x1d9720u: goto label_1d9720;
        case 0x1d9724u: goto label_1d9724;
        case 0x1d9728u: goto label_1d9728;
        case 0x1d972cu: goto label_1d972c;
        case 0x1d9730u: goto label_1d9730;
        case 0x1d9734u: goto label_1d9734;
        case 0x1d9738u: goto label_1d9738;
        case 0x1d973cu: goto label_1d973c;
        case 0x1d9740u: goto label_1d9740;
        case 0x1d9744u: goto label_1d9744;
        case 0x1d9748u: goto label_1d9748;
        case 0x1d974cu: goto label_1d974c;
        case 0x1d9750u: goto label_1d9750;
        case 0x1d9754u: goto label_1d9754;
        case 0x1d9758u: goto label_1d9758;
        case 0x1d975cu: goto label_1d975c;
        case 0x1d9760u: goto label_1d9760;
        case 0x1d9764u: goto label_1d9764;
        case 0x1d9768u: goto label_1d9768;
        case 0x1d976cu: goto label_1d976c;
        case 0x1d9770u: goto label_1d9770;
        case 0x1d9774u: goto label_1d9774;
        case 0x1d9778u: goto label_1d9778;
        case 0x1d977cu: goto label_1d977c;
        case 0x1d9780u: goto label_1d9780;
        case 0x1d9784u: goto label_1d9784;
        case 0x1d9788u: goto label_1d9788;
        case 0x1d978cu: goto label_1d978c;
        case 0x1d9790u: goto label_1d9790;
        case 0x1d9794u: goto label_1d9794;
        case 0x1d9798u: goto label_1d9798;
        case 0x1d979cu: goto label_1d979c;
        case 0x1d97a0u: goto label_1d97a0;
        case 0x1d97a4u: goto label_1d97a4;
        case 0x1d97a8u: goto label_1d97a8;
        case 0x1d97acu: goto label_1d97ac;
        case 0x1d97b0u: goto label_1d97b0;
        case 0x1d97b4u: goto label_1d97b4;
        case 0x1d97b8u: goto label_1d97b8;
        case 0x1d97bcu: goto label_1d97bc;
        case 0x1d97c0u: goto label_1d97c0;
        case 0x1d97c4u: goto label_1d97c4;
        case 0x1d97c8u: goto label_1d97c8;
        case 0x1d97ccu: goto label_1d97cc;
        case 0x1d97d0u: goto label_1d97d0;
        case 0x1d97d4u: goto label_1d97d4;
        case 0x1d97d8u: goto label_1d97d8;
        case 0x1d97dcu: goto label_1d97dc;
        case 0x1d97e0u: goto label_1d97e0;
        case 0x1d97e4u: goto label_1d97e4;
        case 0x1d97e8u: goto label_1d97e8;
        case 0x1d97ecu: goto label_1d97ec;
        case 0x1d97f0u: goto label_1d97f0;
        case 0x1d97f4u: goto label_1d97f4;
        case 0x1d97f8u: goto label_1d97f8;
        case 0x1d97fcu: goto label_1d97fc;
        case 0x1d9800u: goto label_1d9800;
        case 0x1d9804u: goto label_1d9804;
        case 0x1d9808u: goto label_1d9808;
        case 0x1d980cu: goto label_1d980c;
        case 0x1d9810u: goto label_1d9810;
        case 0x1d9814u: goto label_1d9814;
        case 0x1d9818u: goto label_1d9818;
        case 0x1d981cu: goto label_1d981c;
        case 0x1d9820u: goto label_1d9820;
        case 0x1d9824u: goto label_1d9824;
        case 0x1d9828u: goto label_1d9828;
        case 0x1d982cu: goto label_1d982c;
        case 0x1d9830u: goto label_1d9830;
        case 0x1d9834u: goto label_1d9834;
        case 0x1d9838u: goto label_1d9838;
        case 0x1d983cu: goto label_1d983c;
        case 0x1d9840u: goto label_1d9840;
        case 0x1d9844u: goto label_1d9844;
        case 0x1d9848u: goto label_1d9848;
        case 0x1d984cu: goto label_1d984c;
        case 0x1d9850u: goto label_1d9850;
        case 0x1d9854u: goto label_1d9854;
        case 0x1d9858u: goto label_1d9858;
        case 0x1d985cu: goto label_1d985c;
        case 0x1d9860u: goto label_1d9860;
        case 0x1d9864u: goto label_1d9864;
        case 0x1d9868u: goto label_1d9868;
        case 0x1d986cu: goto label_1d986c;
        case 0x1d9870u: goto label_1d9870;
        case 0x1d9874u: goto label_1d9874;
        case 0x1d9878u: goto label_1d9878;
        case 0x1d987cu: goto label_1d987c;
        case 0x1d9880u: goto label_1d9880;
        case 0x1d9884u: goto label_1d9884;
        case 0x1d9888u: goto label_1d9888;
        case 0x1d988cu: goto label_1d988c;
        case 0x1d9890u: goto label_1d9890;
        case 0x1d9894u: goto label_1d9894;
        case 0x1d9898u: goto label_1d9898;
        case 0x1d989cu: goto label_1d989c;
        case 0x1d98a0u: goto label_1d98a0;
        case 0x1d98a4u: goto label_1d98a4;
        case 0x1d98a8u: goto label_1d98a8;
        case 0x1d98acu: goto label_1d98ac;
        case 0x1d98b0u: goto label_1d98b0;
        case 0x1d98b4u: goto label_1d98b4;
        case 0x1d98b8u: goto label_1d98b8;
        case 0x1d98bcu: goto label_1d98bc;
        case 0x1d98c0u: goto label_1d98c0;
        case 0x1d98c4u: goto label_1d98c4;
        case 0x1d98c8u: goto label_1d98c8;
        case 0x1d98ccu: goto label_1d98cc;
        case 0x1d98d0u: goto label_1d98d0;
        case 0x1d98d4u: goto label_1d98d4;
        case 0x1d98d8u: goto label_1d98d8;
        case 0x1d98dcu: goto label_1d98dc;
        case 0x1d98e0u: goto label_1d98e0;
        case 0x1d98e4u: goto label_1d98e4;
        case 0x1d98e8u: goto label_1d98e8;
        case 0x1d98ecu: goto label_1d98ec;
        case 0x1d98f0u: goto label_1d98f0;
        case 0x1d98f4u: goto label_1d98f4;
        case 0x1d98f8u: goto label_1d98f8;
        case 0x1d98fcu: goto label_1d98fc;
        case 0x1d9900u: goto label_1d9900;
        case 0x1d9904u: goto label_1d9904;
        case 0x1d9908u: goto label_1d9908;
        case 0x1d990cu: goto label_1d990c;
        case 0x1d9910u: goto label_1d9910;
        case 0x1d9914u: goto label_1d9914;
        case 0x1d9918u: goto label_1d9918;
        case 0x1d991cu: goto label_1d991c;
        case 0x1d9920u: goto label_1d9920;
        case 0x1d9924u: goto label_1d9924;
        case 0x1d9928u: goto label_1d9928;
        case 0x1d992cu: goto label_1d992c;
        case 0x1d9930u: goto label_1d9930;
        case 0x1d9934u: goto label_1d9934;
        case 0x1d9938u: goto label_1d9938;
        case 0x1d993cu: goto label_1d993c;
        case 0x1d9940u: goto label_1d9940;
        case 0x1d9944u: goto label_1d9944;
        case 0x1d9948u: goto label_1d9948;
        case 0x1d994cu: goto label_1d994c;
        case 0x1d9950u: goto label_1d9950;
        case 0x1d9954u: goto label_1d9954;
        case 0x1d9958u: goto label_1d9958;
        case 0x1d995cu: goto label_1d995c;
        case 0x1d9960u: goto label_1d9960;
        case 0x1d9964u: goto label_1d9964;
        case 0x1d9968u: goto label_1d9968;
        case 0x1d996cu: goto label_1d996c;
        case 0x1d9970u: goto label_1d9970;
        case 0x1d9974u: goto label_1d9974;
        case 0x1d9978u: goto label_1d9978;
        case 0x1d997cu: goto label_1d997c;
        case 0x1d9980u: goto label_1d9980;
        case 0x1d9984u: goto label_1d9984;
        case 0x1d9988u: goto label_1d9988;
        case 0x1d998cu: goto label_1d998c;
        case 0x1d9990u: goto label_1d9990;
        case 0x1d9994u: goto label_1d9994;
        case 0x1d9998u: goto label_1d9998;
        case 0x1d999cu: goto label_1d999c;
        case 0x1d99a0u: goto label_1d99a0;
        case 0x1d99a4u: goto label_1d99a4;
        case 0x1d99a8u: goto label_1d99a8;
        case 0x1d99acu: goto label_1d99ac;
        case 0x1d99b0u: goto label_1d99b0;
        case 0x1d99b4u: goto label_1d99b4;
        case 0x1d99b8u: goto label_1d99b8;
        case 0x1d99bcu: goto label_1d99bc;
        case 0x1d99c0u: goto label_1d99c0;
        case 0x1d99c4u: goto label_1d99c4;
        case 0x1d99c8u: goto label_1d99c8;
        case 0x1d99ccu: goto label_1d99cc;
        case 0x1d99d0u: goto label_1d99d0;
        case 0x1d99d4u: goto label_1d99d4;
        case 0x1d99d8u: goto label_1d99d8;
        case 0x1d99dcu: goto label_1d99dc;
        case 0x1d99e0u: goto label_1d99e0;
        case 0x1d99e4u: goto label_1d99e4;
        case 0x1d99e8u: goto label_1d99e8;
        case 0x1d99ecu: goto label_1d99ec;
        case 0x1d99f0u: goto label_1d99f0;
        case 0x1d99f4u: goto label_1d99f4;
        case 0x1d99f8u: goto label_1d99f8;
        case 0x1d99fcu: goto label_1d99fc;
        case 0x1d9a00u: goto label_1d9a00;
        case 0x1d9a04u: goto label_1d9a04;
        case 0x1d9a08u: goto label_1d9a08;
        case 0x1d9a0cu: goto label_1d9a0c;
        case 0x1d9a10u: goto label_1d9a10;
        case 0x1d9a14u: goto label_1d9a14;
        case 0x1d9a18u: goto label_1d9a18;
        case 0x1d9a1cu: goto label_1d9a1c;
        case 0x1d9a20u: goto label_1d9a20;
        case 0x1d9a24u: goto label_1d9a24;
        case 0x1d9a28u: goto label_1d9a28;
        case 0x1d9a2cu: goto label_1d9a2c;
        case 0x1d9a30u: goto label_1d9a30;
        case 0x1d9a34u: goto label_1d9a34;
        case 0x1d9a38u: goto label_1d9a38;
        case 0x1d9a3cu: goto label_1d9a3c;
        case 0x1d9a40u: goto label_1d9a40;
        case 0x1d9a44u: goto label_1d9a44;
        case 0x1d9a48u: goto label_1d9a48;
        case 0x1d9a4cu: goto label_1d9a4c;
        case 0x1d9a50u: goto label_1d9a50;
        case 0x1d9a54u: goto label_1d9a54;
        case 0x1d9a58u: goto label_1d9a58;
        case 0x1d9a5cu: goto label_1d9a5c;
        case 0x1d9a60u: goto label_1d9a60;
        case 0x1d9a64u: goto label_1d9a64;
        case 0x1d9a68u: goto label_1d9a68;
        case 0x1d9a6cu: goto label_1d9a6c;
        case 0x1d9a70u: goto label_1d9a70;
        case 0x1d9a74u: goto label_1d9a74;
        case 0x1d9a78u: goto label_1d9a78;
        case 0x1d9a7cu: goto label_1d9a7c;
        case 0x1d9a80u: goto label_1d9a80;
        case 0x1d9a84u: goto label_1d9a84;
        case 0x1d9a88u: goto label_1d9a88;
        case 0x1d9a8cu: goto label_1d9a8c;
        case 0x1d9a90u: goto label_1d9a90;
        case 0x1d9a94u: goto label_1d9a94;
        case 0x1d9a98u: goto label_1d9a98;
        case 0x1d9a9cu: goto label_1d9a9c;
        case 0x1d9aa0u: goto label_1d9aa0;
        case 0x1d9aa4u: goto label_1d9aa4;
        case 0x1d9aa8u: goto label_1d9aa8;
        case 0x1d9aacu: goto label_1d9aac;
        case 0x1d9ab0u: goto label_1d9ab0;
        case 0x1d9ab4u: goto label_1d9ab4;
        case 0x1d9ab8u: goto label_1d9ab8;
        case 0x1d9abcu: goto label_1d9abc;
        case 0x1d9ac0u: goto label_1d9ac0;
        case 0x1d9ac4u: goto label_1d9ac4;
        case 0x1d9ac8u: goto label_1d9ac8;
        case 0x1d9accu: goto label_1d9acc;
        case 0x1d9ad0u: goto label_1d9ad0;
        case 0x1d9ad4u: goto label_1d9ad4;
        case 0x1d9ad8u: goto label_1d9ad8;
        case 0x1d9adcu: goto label_1d9adc;
        case 0x1d9ae0u: goto label_1d9ae0;
        case 0x1d9ae4u: goto label_1d9ae4;
        case 0x1d9ae8u: goto label_1d9ae8;
        case 0x1d9aecu: goto label_1d9aec;
        case 0x1d9af0u: goto label_1d9af0;
        case 0x1d9af4u: goto label_1d9af4;
        case 0x1d9af8u: goto label_1d9af8;
        case 0x1d9afcu: goto label_1d9afc;
        case 0x1d9b00u: goto label_1d9b00;
        case 0x1d9b04u: goto label_1d9b04;
        case 0x1d9b08u: goto label_1d9b08;
        case 0x1d9b0cu: goto label_1d9b0c;
        case 0x1d9b10u: goto label_1d9b10;
        case 0x1d9b14u: goto label_1d9b14;
        case 0x1d9b18u: goto label_1d9b18;
        case 0x1d9b1cu: goto label_1d9b1c;
        case 0x1d9b20u: goto label_1d9b20;
        case 0x1d9b24u: goto label_1d9b24;
        case 0x1d9b28u: goto label_1d9b28;
        case 0x1d9b2cu: goto label_1d9b2c;
        case 0x1d9b30u: goto label_1d9b30;
        case 0x1d9b34u: goto label_1d9b34;
        case 0x1d9b38u: goto label_1d9b38;
        case 0x1d9b3cu: goto label_1d9b3c;
        case 0x1d9b40u: goto label_1d9b40;
        case 0x1d9b44u: goto label_1d9b44;
        case 0x1d9b48u: goto label_1d9b48;
        case 0x1d9b4cu: goto label_1d9b4c;
        case 0x1d9b50u: goto label_1d9b50;
        case 0x1d9b54u: goto label_1d9b54;
        case 0x1d9b58u: goto label_1d9b58;
        case 0x1d9b5cu: goto label_1d9b5c;
        case 0x1d9b60u: goto label_1d9b60;
        case 0x1d9b64u: goto label_1d9b64;
        case 0x1d9b68u: goto label_1d9b68;
        case 0x1d9b6cu: goto label_1d9b6c;
        case 0x1d9b70u: goto label_1d9b70;
        case 0x1d9b74u: goto label_1d9b74;
        case 0x1d9b78u: goto label_1d9b78;
        case 0x1d9b7cu: goto label_1d9b7c;
        case 0x1d9b80u: goto label_1d9b80;
        case 0x1d9b84u: goto label_1d9b84;
        case 0x1d9b88u: goto label_1d9b88;
        case 0x1d9b8cu: goto label_1d9b8c;
        case 0x1d9b90u: goto label_1d9b90;
        case 0x1d9b94u: goto label_1d9b94;
        case 0x1d9b98u: goto label_1d9b98;
        case 0x1d9b9cu: goto label_1d9b9c;
        case 0x1d9ba0u: goto label_1d9ba0;
        case 0x1d9ba4u: goto label_1d9ba4;
        case 0x1d9ba8u: goto label_1d9ba8;
        case 0x1d9bacu: goto label_1d9bac;
        case 0x1d9bb0u: goto label_1d9bb0;
        case 0x1d9bb4u: goto label_1d9bb4;
        case 0x1d9bb8u: goto label_1d9bb8;
        case 0x1d9bbcu: goto label_1d9bbc;
        case 0x1d9bc0u: goto label_1d9bc0;
        case 0x1d9bc4u: goto label_1d9bc4;
        case 0x1d9bc8u: goto label_1d9bc8;
        case 0x1d9bccu: goto label_1d9bcc;
        case 0x1d9bd0u: goto label_1d9bd0;
        case 0x1d9bd4u: goto label_1d9bd4;
        case 0x1d9bd8u: goto label_1d9bd8;
        case 0x1d9bdcu: goto label_1d9bdc;
        case 0x1d9be0u: goto label_1d9be0;
        case 0x1d9be4u: goto label_1d9be4;
        case 0x1d9be8u: goto label_1d9be8;
        case 0x1d9becu: goto label_1d9bec;
        case 0x1d9bf0u: goto label_1d9bf0;
        case 0x1d9bf4u: goto label_1d9bf4;
        case 0x1d9bf8u: goto label_1d9bf8;
        case 0x1d9bfcu: goto label_1d9bfc;
        case 0x1d9c00u: goto label_1d9c00;
        case 0x1d9c04u: goto label_1d9c04;
        case 0x1d9c08u: goto label_1d9c08;
        case 0x1d9c0cu: goto label_1d9c0c;
        case 0x1d9c10u: goto label_1d9c10;
        case 0x1d9c14u: goto label_1d9c14;
        case 0x1d9c18u: goto label_1d9c18;
        case 0x1d9c1cu: goto label_1d9c1c;
        case 0x1d9c20u: goto label_1d9c20;
        case 0x1d9c24u: goto label_1d9c24;
        case 0x1d9c28u: goto label_1d9c28;
        case 0x1d9c2cu: goto label_1d9c2c;
        case 0x1d9c30u: goto label_1d9c30;
        case 0x1d9c34u: goto label_1d9c34;
        case 0x1d9c38u: goto label_1d9c38;
        case 0x1d9c3cu: goto label_1d9c3c;
        case 0x1d9c40u: goto label_1d9c40;
        case 0x1d9c44u: goto label_1d9c44;
        case 0x1d9c48u: goto label_1d9c48;
        case 0x1d9c4cu: goto label_1d9c4c;
        case 0x1d9c50u: goto label_1d9c50;
        case 0x1d9c54u: goto label_1d9c54;
        case 0x1d9c58u: goto label_1d9c58;
        case 0x1d9c5cu: goto label_1d9c5c;
        case 0x1d9c60u: goto label_1d9c60;
        case 0x1d9c64u: goto label_1d9c64;
        case 0x1d9c68u: goto label_1d9c68;
        case 0x1d9c6cu: goto label_1d9c6c;
        case 0x1d9c70u: goto label_1d9c70;
        case 0x1d9c74u: goto label_1d9c74;
        case 0x1d9c78u: goto label_1d9c78;
        case 0x1d9c7cu: goto label_1d9c7c;
        case 0x1d9c80u: goto label_1d9c80;
        case 0x1d9c84u: goto label_1d9c84;
        case 0x1d9c88u: goto label_1d9c88;
        case 0x1d9c8cu: goto label_1d9c8c;
        case 0x1d9c90u: goto label_1d9c90;
        case 0x1d9c94u: goto label_1d9c94;
        case 0x1d9c98u: goto label_1d9c98;
        case 0x1d9c9cu: goto label_1d9c9c;
        default: break;
    }

    ctx->pc = 0x1d94d0u;

label_1d94d0:
    // 0x1d94d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d94d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d94d4:
    // 0x1d94d4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1d94d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1d94d8:
    // 0x1d94d8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1d94d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1d94dc:
    // 0x1d94dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d94dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d94e0:
    // 0x1d94e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d94e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1d94e4:
    // 0x1d94e4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1d94e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1d94e8:
    // 0x1d94e8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1d94e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1d94ec:
    // 0x1d94ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d94ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d94f0:
    // 0x1d94f0: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1d94f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
label_1d94f4:
    // 0x1d94f4: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x1d94f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_1d94f8:
    // 0x1d94f8: 0x104001e1  beqz        $v0, . + 4 + (0x1E1 << 2)
label_1d94fc:
    if (ctx->pc == 0x1D94FCu) {
        ctx->pc = 0x1D94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94F8u;
        // 0x1d94fc: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9500u;
        goto label_1d9500;
    }
    ctx->pc = 0x1D94F8u;
    {
        const bool branch_taken_0x1d94f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94F8u;
        // 0x1d94fc: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94f8) {
            ctx->pc = 0x1D9C80u;
            goto label_1d9c80;
        }
    }
    ctx->pc = 0x1D9500u;
label_1d9500:
    // 0x1d9500: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d9504:
    // 0x1d9504: 0x2442b2b0  addiu       $v0, $v0, -0x4D50
    ctx->pc = 0x1d9504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947504));
label_1d9508:
    // 0x1d9508: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d9508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d950c:
    // 0x1d950c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d950cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d9510:
    // 0x1d9510: 0x800008  jr          $a0
label_1d9514:
    if (ctx->pc == 0x1D9514u) {
        ctx->pc = 0x1D9518u;
        goto label_1d9518;
    }
    ctx->pc = 0x1D9510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9518u: goto label_1d9518;
            case 0x1D955Cu: goto label_1d955c;
            case 0x1D95E4u: goto label_1d95e4;
            case 0x1D9680u: goto label_1d9680;
            case 0x1D96ECu: goto label_1d96ec;
            case 0x1D977Cu: goto label_1d977c;
            case 0x1D97E4u: goto label_1d97e4;
            case 0x1D9874u: goto label_1d9874;
            case 0x1D98DCu: goto label_1d98dc;
            case 0x1D996Cu: goto label_1d996c;
            case 0x1D99D4u: goto label_1d99d4;
            case 0x1D9A64u: goto label_1d9a64;
            case 0x1D9ACCu: goto label_1d9acc;
            case 0x1D9B7Cu: goto label_1d9b7c;
            case 0x1D9BF4u: goto label_1d9bf4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9510u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D9518u;
label_1d9518:
    // 0x1d9518: 0x8e223004  lw          $v0, 0x3004($s1)
    ctx->pc = 0x1d9518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
label_1d951c:
    // 0x1d951c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d951cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d9520:
    // 0x1d9520: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d9520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1d9524:
    // 0x1d9524: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d9524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9528:
    // 0x1d9528: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d9528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d952c:
    // 0x1d952c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d952cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9530:
    // 0x1d9530: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9534:
    // 0x1d9534: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d9534u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9538:
    // 0x1d9538: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9538u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d953c:
    // 0x1d953c: 0xc0b2e92  jal         func_2CBA48
label_1d9540:
    if (ctx->pc == 0x1D9540u) {
        ctx->pc = 0x1D9540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D953Cu;
        // 0x1d9540: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9544u;
        goto label_1d9544;
    }
    ctx->pc = 0x1D953Cu;
    SET_GPR_U32(ctx, 31, 0x1D9544u);
    ctx->pc = 0x1D9540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D953Cu;
    // 0x1d9540: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D953Cu, 0x1D9544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9544u;
label_1d9544:
    // 0x1d9544: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1d9544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
label_1d9548:
    // 0x1d9548: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1d9548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1d954c:
    // 0x1d954c: 0xae22302c  sw          $v0, 0x302C($s1)
    ctx->pc = 0x1d954cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
label_1d9550:
    // 0x1d9550: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d9550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d9554:
    // 0x1d9554: 0x100001ca  b           . + 4 + (0x1CA << 2)
label_1d9558:
    if (ctx->pc == 0x1D9558u) {
        ctx->pc = 0x1D9558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9554u;
        // 0x1d9558: 0xa2233025  sb          $v1, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D955Cu;
        goto label_1d955c;
    }
    ctx->pc = 0x1D9554u;
    {
        const bool branch_taken_0x1d9554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9554u;
        // 0x1d9558: 0xa2233025  sb          $v1, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9554) {
            ctx->pc = 0x1D9C80u;
            goto label_1d9c80;
        }
    }
    ctx->pc = 0x1D955Cu;
label_1d955c:
    // 0x1d955c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d955cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1d9560:
    // 0x1d9560: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1d9560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_1d9564:
    // 0x1d9564: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d9564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d9568:
    // 0x1d9568: 0x24468170  addiu       $a2, $v0, -0x7E90
    ctx->pc = 0x1d9568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934896));
label_1d956c:
    // 0x1d956c: 0x26243004  addiu       $a0, $s1, 0x3004
    ctx->pc = 0x1d956cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12292));
label_1d9570:
    // 0x1d9570: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d9570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d9574:
    // 0x1d9574: 0x0  nop
    ctx->pc = 0x1d9574u;
    // NOP
label_1d9578:
    // 0x1d9578: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d9578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d957c:
    // 0x1d957c: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d957cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d9580:
    // 0x1d9580: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d9580u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1d9584:
    // 0x1d9584: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d9588:
    // 0x1d9588: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_1d958c:
    if (ctx->pc == 0x1D958Cu) {
        ctx->pc = 0x1D958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9588u;
        // 0x1d958c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9590u;
        goto label_1d9590;
    }
    ctx->pc = 0x1D9588u;
    {
        const bool branch_taken_0x1d9588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9588) {
            ctx->pc = 0x1D958Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9588u;
            // 0x1d958c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D95C4u;
            goto label_1d95c4;
        }
    }
    ctx->pc = 0x1D9590u;
label_1d9590:
    // 0x1d9590: 0xc620302c  lwc1        $f0, 0x302C($s1)
    ctx->pc = 0x1d9590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9594:
    // 0x1d9594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d9594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d9598:
    // 0x1d9598: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x1d9598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d959c:
    // 0x1d959c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d95a0:
    // 0x1d95a0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1d95a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1d95a4:
    // 0x1d95a4: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1d95a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1d95a8:
    // 0x1d95a8: 0x0  nop
    ctx->pc = 0x1d95a8u;
    // NOP
label_1d95ac:
    // 0x1d95ac: 0x0  nop
    ctx->pc = 0x1d95acu;
    // NOP
label_1d95b0:
    // 0x1d95b0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1d95b0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
label_1d95b4:
    // 0x1d95b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d95b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d95b8:
    // 0x1d95b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d95b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d95bc:
    // 0x1d95bc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d95bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1d95c0:
    // 0x1d95c0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1d95c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1d95c4:
    // 0x1d95c4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1d95c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1d95c8:
    // 0x1d95c8: 0x4a1ffeb  bgez        $a1, . + 4 + (-0x15 << 2)
label_1d95cc:
    if (ctx->pc == 0x1D95CCu) {
        ctx->pc = 0x1D95CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95C8u;
        // 0x1d95cc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D95D0u;
        goto label_1d95d0;
    }
    ctx->pc = 0x1D95C8u;
    {
        const bool branch_taken_0x1d95c8 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1D95CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95C8u;
        // 0x1d95cc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d95c8) {
            ctx->pc = 0x1D9578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9578;
        }
    }
    ctx->pc = 0x1D95D0u;
label_1d95d0:
    // 0x1d95d0: 0x8e22302c  lw          $v0, 0x302C($s1)
    ctx->pc = 0x1d95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12332)));
label_1d95d4:
    // 0x1d95d4: 0x10400183  beqz        $v0, . + 4 + (0x183 << 2)
label_1d95d8:
    if (ctx->pc == 0x1D95D8u) {
        ctx->pc = 0x1D95D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95D4u;
        // 0x1d95d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D95DCu;
        goto label_1d95dc;
    }
    ctx->pc = 0x1D95D4u;
    {
        const bool branch_taken_0x1d95d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D95D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95D4u;
        // 0x1d95d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d95d4) {
            ctx->pc = 0x1D9BE4u;
            goto label_1d9be4;
        }
    }
    ctx->pc = 0x1D95DCu;
label_1d95dc:
    // 0x1d95dc: 0x100001a8  b           . + 4 + (0x1A8 << 2)
label_1d95e0:
    if (ctx->pc == 0x1D95E0u) {
        ctx->pc = 0x1D95E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95DCu;
        // 0x1d95e0: 0xae22302c  sw          $v0, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D95E4u;
        goto label_1d95e4;
    }
    ctx->pc = 0x1D95DCu;
    {
        const bool branch_taken_0x1d95dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D95E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95DCu;
        // 0x1d95e0: 0xae22302c  sw          $v0, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d95dc) {
            ctx->pc = 0x1D9C80u;
            goto label_1d9c80;
        }
    }
    ctx->pc = 0x1D95E4u;
label_1d95e4:
    // 0x1d95e4: 0x26223004  addiu       $v0, $s1, 0x3004
    ctx->pc = 0x1d95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12292));
label_1d95e8:
    // 0x1d95e8: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x1d95e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
label_1d95ec:
    // 0x1d95ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d95ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d95f0:
    // 0x1d95f0: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x1d95f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d95f4:
    // 0x1d95f4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1d95f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d95f8:
    // 0x1d95f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d95f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d95fc:
    // 0x1d95fc: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d95fcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d9600:
    // 0x1d9600: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d9600u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1d9604:
    // 0x1d9604: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d9608:
    // 0x1d9608: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_1d960c:
    if (ctx->pc == 0x1D960Cu) {
        ctx->pc = 0x1D960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9608u;
        // 0x1d960c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9610u;
        goto label_1d9610;
    }
    ctx->pc = 0x1D9608u;
    {
        const bool branch_taken_0x1d9608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9608) {
            ctx->pc = 0x1D960Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9608u;
            // 0x1d960c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9660u;
            goto label_1d9660;
        }
    }
    ctx->pc = 0x1D9610u;
label_1d9610:
    // 0x1d9610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9614:
    // 0x1d9614: 0xc076f86  jal         func_1DBE18
label_1d9618:
    if (ctx->pc == 0x1D9618u) {
        ctx->pc = 0x1D9618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9614u;
        // 0x1d9618: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D961Cu;
        goto label_1d961c;
    }
    ctx->pc = 0x1D9614u;
    SET_GPR_U32(ctx, 31, 0x1D961Cu);
    ctx->pc = 0x1D9618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9614u;
    // 0x1d9618: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBE18u, 0x1D9614u, 0x1D961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D961Cu;
label_1d961c:
    // 0x1d961c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d961cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d9620:
    // 0x1d9620: 0xc075bb2  jal         func_1D6EC8
label_1d9624:
    if (ctx->pc == 0x1D9624u) {
        ctx->pc = 0x1D9624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9620u;
        // 0x1d9624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9628u;
        goto label_1d9628;
    }
    ctx->pc = 0x1D9620u;
    SET_GPR_U32(ctx, 31, 0x1D9628u);
    ctx->pc = 0x1D9624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9620u;
    // 0x1d9624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6EC8u, 0x1D9620u, 0x1D9628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9628u;
label_1d9628:
    // 0x1d9628: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d9628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d962c:
    // 0x1d962c: 0x26858160  addiu       $a1, $s4, -0x7EA0
    ctx->pc = 0x1d962cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294934880));
label_1d9630:
    // 0x1d9630: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d9630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d9634:
    // 0x1d9634: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x1d9634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_1d9638:
    // 0x1d9638: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d9638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1d963c:
    // 0x1d963c: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x1d963cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_1d9640:
    // 0x1d9640: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d9640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d9644:
    // 0x1d9644: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1d9644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d9648:
    // 0x1d9648: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x1d9648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_1d964c:
    // 0x1d964c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1d964cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1d9650:
    // 0x1d9650: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1d9650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1d9654:
    // 0x1d9654: 0x60f809  jalr        $v1
label_1d9658:
    if (ctx->pc == 0x1D9658u) {
        ctx->pc = 0x1D9658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9654u;
        // 0x1d9658: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D965Cu;
        goto label_1d965c;
    }
    ctx->pc = 0x1D9654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D965Cu);
        ctx->pc = 0x1D9658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9654u;
        // 0x1d9658: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9654u, 0x1D965Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D965Cu;
label_1d965c:
    // 0x1d965c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1d965cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1d9660:
    // 0x1d9660: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1d9660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1d9664:
    // 0x1d9664: 0x661ffe4  bgez        $s3, . + 4 + (-0x1C << 2)
label_1d9668:
    if (ctx->pc == 0x1D9668u) {
        ctx->pc = 0x1D9668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9664u;
        // 0x1d9668: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D966Cu;
        goto label_1d966c;
    }
    ctx->pc = 0x1D9664u;
    {
        const bool branch_taken_0x1d9664 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x1D9668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9664u;
        // 0x1d9668: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9664) {
            ctx->pc = 0x1D95F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d95f8;
        }
    }
    ctx->pc = 0x1D966Cu;
label_1d966c:
    // 0x1d966c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d966cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d9670:
    // 0x1d9670: 0xc077afa  jal         func_1DEBE8
label_1d9674:
    if (ctx->pc == 0x1D9674u) {
        ctx->pc = 0x1D9674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9670u;
        // 0x1d9674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9678u;
        goto label_1d9678;
    }
    ctx->pc = 0x1D9670u;
    SET_GPR_U32(ctx, 31, 0x1D9678u);
    ctx->pc = 0x1D9674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9670u;
    // 0x1d9674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEBE8u, 0x1D9670u, 0x1D9678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9678u;
label_1d9678:
    // 0x1d9678: 0x1000015b  b           . + 4 + (0x15B << 2)
label_1d967c:
    if (ctx->pc == 0x1D967Cu) {
        ctx->pc = 0x1D967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9678u;
        // 0x1d967c: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9680u;
        goto label_1d9680;
    }
    ctx->pc = 0x1D9678u;
    {
        const bool branch_taken_0x1d9678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9678u;
        // 0x1d967c: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9678) {
            ctx->pc = 0x1D9BE8u;
            goto label_1d9be8;
        }
    }
    ctx->pc = 0x1D9680u;
label_1d9680:
    // 0x1d9680: 0x8e273004  lw          $a3, 0x3004($s1)
    ctx->pc = 0x1d9680u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
label_1d9684:
    // 0x1d9684: 0x9ce20004  lwu         $v0, 0x4($a3)
    ctx->pc = 0x1d9684u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1d9688:
    // 0x1d9688: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d9688u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1d968c:
    // 0x1d968c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d968cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d9690:
    // 0x1d9690: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_1d9694:
    if (ctx->pc == 0x1D9694u) {
        ctx->pc = 0x1D9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9690u;
        // 0x1d9694: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9698u;
        goto label_1d9698;
    }
    ctx->pc = 0x1D9690u;
    {
        const bool branch_taken_0x1d9690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9690) {
            ctx->pc = 0x1D9694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9690u;
            // 0x1d9694: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D96E0u;
            goto label_1d96e0;
        }
    }
    ctx->pc = 0x1D9698u;
label_1d9698:
    // 0x1d9698: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x1d9698u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1d969c:
    // 0x1d969c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d969cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1d96a0:
    // 0x1d96a0: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x1d96a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
label_1d96a4:
    // 0x1d96a4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d96a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d96a8:
    // 0x1d96a8: 0x8ce20250  lw          $v0, 0x250($a3)
    ctx->pc = 0x1d96a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 592)));
label_1d96ac:
    // 0x1d96ac: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d96acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1d96b0:
    // 0x1d96b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d96b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d96b4:
    // 0x1d96b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d96b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d96b8:
    // 0x1d96b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d96b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1d96bc:
    // 0x1d96bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d96bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d96c0:
    // 0x1d96c0: 0xace20250  sw          $v0, 0x250($a3)
    ctx->pc = 0x1d96c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 592), GPR_U32(ctx, 2));
label_1d96c4:
    // 0x1d96c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d96c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d96c8:
    // 0x1d96c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d96c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d96cc:
    // 0x1d96cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d96ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d96d0:
    // 0x1d96d0: 0x8e223004  lw          $v0, 0x3004($s1)
    ctx->pc = 0x1d96d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
label_1d96d4:
    // 0x1d96d4: 0xc0b2e92  jal         func_2CBA48
label_1d96d8:
    if (ctx->pc == 0x1D96D8u) {
        ctx->pc = 0x1D96D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D96D4u;
        // 0x1d96d8: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D96DCu;
        goto label_1d96dc;
    }
    ctx->pc = 0x1D96D4u;
    SET_GPR_U32(ctx, 31, 0x1D96DCu);
    ctx->pc = 0x1D96D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D96D4u;
    // 0x1d96d8: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D96D4u, 0x1D96DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D96DCu;
label_1d96dc:
    // 0x1d96dc: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1d96dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
label_1d96e0:
    // 0x1d96e0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d96e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d96e4:
    // 0x1d96e4: 0x10000140  b           . + 4 + (0x140 << 2)
label_1d96e8:
    if (ctx->pc == 0x1D96E8u) {
        ctx->pc = 0x1D96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D96E4u;
        // 0x1d96e8: 0xae23302c  sw          $v1, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D96ECu;
        goto label_1d96ec;
    }
    ctx->pc = 0x1D96E4u;
    {
        const bool branch_taken_0x1d96e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D96E4u;
        // 0x1d96e8: 0xae23302c  sw          $v1, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d96e4) {
            ctx->pc = 0x1D9BE8u;
            goto label_1d9be8;
        }
    }
    ctx->pc = 0x1D96ECu;
label_1d96ec:
    // 0x1d96ec: 0x8e243004  lw          $a0, 0x3004($s1)
    ctx->pc = 0x1d96ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
label_1d96f0:
    // 0x1d96f0: 0x9c820004  lwu         $v0, 0x4($a0)
    ctx->pc = 0x1d96f0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1d96f4:
    // 0x1d96f4: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d96f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1d96f8:
    // 0x1d96f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d96f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d96fc:
    // 0x1d96fc: 0x5440013a  bnel        $v0, $zero, . + 4 + (0x13A << 2)
label_1d9700:
    if (ctx->pc == 0x1D9700u) {
        ctx->pc = 0x1D9700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D96FCu;
        // 0x1d9700: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9704u;
        goto label_1d9704;
    }
    ctx->pc = 0x1D96FCu;
    {
        const bool branch_taken_0x1d96fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d96fc) {
            ctx->pc = 0x1D9700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D96FCu;
            // 0x1d9700: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BE8u;
            goto label_1d9be8;
        }
    }
    ctx->pc = 0x1D9704u;
label_1d9704:
    // 0x1d9704: 0xc622302c  lwc1        $f2, 0x302C($s1)
    ctx->pc = 0x1d9704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9708:
    // 0x1d9708: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d9708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d970c:
    // 0x1d970c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1d970cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1d9710:
    // 0x1d9710: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d9710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d9714:
    // 0x1d9714: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1d9714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_1d9718:
    // 0x1d9718: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d9718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1d971c:
    // 0x1d971c: 0xc4458160  lwc1        $f5, -0x7EA0($v0)
    ctx->pc = 0x1d971cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1d9720:
    // 0x1d9720: 0x24658170  addiu       $a1, $v1, -0x7E90
    ctx->pc = 0x1d9720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934896));
label_1d9724:
    // 0x1d9724: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x1d9724u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_1d9728:
    // 0x1d9728: 0xc4618170  lwc1        $f1, -0x7E90($v1)
    ctx->pc = 0x1d9728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294934896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d972c:
    // 0x1d972c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d972cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d9730:
    // 0x1d9730: 0x24428160  addiu       $v0, $v0, -0x7EA0
    ctx->pc = 0x1d9730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934880));
label_1d9734:
    // 0x1d9734: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1d9734u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_1d9738:
    // 0x1d9738: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1d9738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d973c:
    // 0x1d973c: 0x0  nop
    ctx->pc = 0x1d973cu;
    // NOP
label_1d9740:
    // 0x1d9740: 0x0  nop
    ctx->pc = 0x1d9740u;
    // NOP
label_1d9744:
    // 0x1d9744: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x1d9744u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[4]);
label_1d9748:
    // 0x1d9748: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1d9748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d974c:
    // 0x1d974c: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x1d974cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1d9750:
    // 0x1d9750: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1d9750u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1d9754:
    // 0x1d9754: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1d9754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d9758:
    // 0x1d9758: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1d9758u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1d975c:
    // 0x1d975c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1d975cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_1d9760:
    // 0x1d9760: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1d9760u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1d9764:
    // 0x1d9764: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1d9764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1d9768:
    // 0x1d9768: 0x8e223004  lw          $v0, 0x3004($s1)
    ctx->pc = 0x1d9768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
label_1d976c:
    // 0x1d976c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d976cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9770:
    // 0x1d9770: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x1d9770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1d9774:
    // 0x1d9774: 0x1000ff96  b           . + 4 + (-0x6A << 2)
label_1d9778:
    if (ctx->pc == 0x1D9778u) {
        ctx->pc = 0x1D9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9774u;
        // 0x1d9778: 0xe4820004  swc1        $f2, 0x4($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D977Cu;
        goto label_1d977c;
    }
    ctx->pc = 0x1D9774u;
    {
        const bool branch_taken_0x1d9774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9774u;
        // 0x1d9778: 0xe4820004  swc1        $f2, 0x4($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9774) {
            ctx->pc = 0x1D95D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d95d0;
        }
    }
    ctx->pc = 0x1D977Cu;
label_1d977c:
    // 0x1d977c: 0x8e273008  lw          $a3, 0x3008($s1)
    ctx->pc = 0x1d977cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1d9780:
    // 0x1d9780: 0x9ce20004  lwu         $v0, 0x4($a3)
    ctx->pc = 0x1d9780u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1d9784:
    // 0x1d9784: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d9784u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1d9788:
    // 0x1d9788: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d978c:
    // 0x1d978c: 0x54400116  bnel        $v0, $zero, . + 4 + (0x116 << 2)
label_1d9790:
    if (ctx->pc == 0x1D9790u) {
        ctx->pc = 0x1D9790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D978Cu;
        // 0x1d9790: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9794u;
        goto label_1d9794;
    }
    ctx->pc = 0x1D978Cu;
    {
        const bool branch_taken_0x1d978c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d978c) {
            ctx->pc = 0x1D9790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D978Cu;
            // 0x1d9790: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BE8u;
            goto label_1d9be8;
        }
    }
    ctx->pc = 0x1D9794u;
label_1d9794:
    // 0x1d9794: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x1d9794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1d9798:
    // 0x1d9798: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d9798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1d979c:
    // 0x1d979c: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x1d979cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
label_1d97a0:
    // 0x1d97a0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d97a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d97a4:
    // 0x1d97a4: 0x8ce20250  lw          $v0, 0x250($a3)
    ctx->pc = 0x1d97a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 592)));
label_1d97a8:
    // 0x1d97a8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d97a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1d97ac:
    // 0x1d97ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d97acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d97b0:
    // 0x1d97b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d97b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d97b4:
    // 0x1d97b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d97b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1d97b8:
    // 0x1d97b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d97b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d97bc:
    // 0x1d97bc: 0xace20250  sw          $v0, 0x250($a3)
    ctx->pc = 0x1d97bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 592), GPR_U32(ctx, 2));
label_1d97c0:
    // 0x1d97c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d97c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d97c4:
    // 0x1d97c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d97c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d97c8:
    // 0x1d97c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d97c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d97cc:
    // 0x1d97cc: 0x8e223008  lw          $v0, 0x3008($s1)
    ctx->pc = 0x1d97ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1d97d0:
    // 0x1d97d0: 0xc0b2e92  jal         func_2CBA48
label_1d97d4:
    if (ctx->pc == 0x1D97D4u) {
        ctx->pc = 0x1D97D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97D0u;
        // 0x1d97d4: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D97D8u;
        goto label_1d97d8;
    }
    ctx->pc = 0x1D97D0u;
    SET_GPR_U32(ctx, 31, 0x1D97D8u);
    ctx->pc = 0x1D97D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D97D0u;
    // 0x1d97d4: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D97D0u, 0x1D97D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D97D8u;
label_1d97d8:
    // 0x1d97d8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d97d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d97dc:
    // 0x1d97dc: 0x10000101  b           . + 4 + (0x101 << 2)
label_1d97e0:
    if (ctx->pc == 0x1D97E0u) {
        ctx->pc = 0x1D97E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97DCu;
        // 0x1d97e0: 0xae23302c  sw          $v1, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D97E4u;
        goto label_1d97e4;
    }
    ctx->pc = 0x1D97DCu;
    {
        const bool branch_taken_0x1d97dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97DCu;
        // 0x1d97e0: 0xae23302c  sw          $v1, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97dc) {
            ctx->pc = 0x1D9BE4u;
            goto label_1d9be4;
        }
    }
    ctx->pc = 0x1D97E4u;
label_1d97e4:
    // 0x1d97e4: 0x8e243008  lw          $a0, 0x3008($s1)
    ctx->pc = 0x1d97e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1d97e8:
    // 0x1d97e8: 0x9c820004  lwu         $v0, 0x4($a0)
    ctx->pc = 0x1d97e8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1d97ec:
    // 0x1d97ec: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d97ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1d97f0:
    // 0x1d97f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d97f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d97f4:
    // 0x1d97f4: 0x544000fc  bnel        $v0, $zero, . + 4 + (0xFC << 2)
label_1d97f8:
    if (ctx->pc == 0x1D97F8u) {
        ctx->pc = 0x1D97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97F4u;
        // 0x1d97f8: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D97FCu;
        goto label_1d97fc;
    }
    ctx->pc = 0x1D97F4u;
    {
        const bool branch_taken_0x1d97f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d97f4) {
            ctx->pc = 0x1D97F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D97F4u;
            // 0x1d97f8: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BE8u;
            goto label_1d9be8;
        }
    }
    ctx->pc = 0x1D97FCu;
label_1d97fc:
    // 0x1d97fc: 0xc622302c  lwc1        $f2, 0x302C($s1)
    ctx->pc = 0x1d97fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9800:
    // 0x1d9800: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d9800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d9804:
    // 0x1d9804: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1d9804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1d9808:
    // 0x1d9808: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d9808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d980c:
    // 0x1d980c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1d980cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_1d9810:
    // 0x1d9810: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d9810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1d9814:
    // 0x1d9814: 0x24638170  addiu       $v1, $v1, -0x7E90
    ctx->pc = 0x1d9814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934896));
label_1d9818:
    // 0x1d9818: 0xc4458160  lwc1        $f5, -0x7EA0($v0)
    ctx->pc = 0x1d9818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1d981c:
    // 0x1d981c: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x1d981cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_1d9820:
    // 0x1d9820: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1d9820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9824:
    // 0x1d9824: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d9824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d9828:
    // 0x1d9828: 0x24428160  addiu       $v0, $v0, -0x7EA0
    ctx->pc = 0x1d9828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934880));
label_1d982c:
    // 0x1d982c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1d982cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_1d9830:
    // 0x1d9830: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1d9830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d9834:
    // 0x1d9834: 0x0  nop
    ctx->pc = 0x1d9834u;
    // NOP
label_1d9838:
    // 0x1d9838: 0x0  nop
    ctx->pc = 0x1d9838u;
    // NOP
label_1d983c:
    // 0x1d983c: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x1d983cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[4]);
label_1d9840:
    // 0x1d9840: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1d9840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9844:
    // 0x1d9844: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1d9844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1d9848:
    // 0x1d9848: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1d9848u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1d984c:
    // 0x1d984c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1d984cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d9850:
    // 0x1d9850: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1d9850u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1d9854:
    // 0x1d9854: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1d9854u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_1d9858:
    // 0x1d9858: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1d9858u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1d985c:
    // 0x1d985c: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x1d985cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1d9860:
    // 0x1d9860: 0x8e223008  lw          $v0, 0x3008($s1)
    ctx->pc = 0x1d9860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1d9864:
    // 0x1d9864: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d9864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9868:
    // 0x1d9868: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x1d9868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1d986c:
    // 0x1d986c: 0x1000ff58  b           . + 4 + (-0xA8 << 2)
label_1d9870:
    if (ctx->pc == 0x1D9870u) {
        ctx->pc = 0x1D9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D986Cu;
        // 0x1d9870: 0xe4820004  swc1        $f2, 0x4($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9874u;
        goto label_1d9874;
    }
    ctx->pc = 0x1D986Cu;
    {
        const bool branch_taken_0x1d986c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D986Cu;
        // 0x1d9870: 0xe4820004  swc1        $f2, 0x4($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d986c) {
            ctx->pc = 0x1D95D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d95d0;
        }
    }
    ctx->pc = 0x1D9874u;
label_1d9874:
    // 0x1d9874: 0x8e27300c  lw          $a3, 0x300C($s1)
    ctx->pc = 0x1d9874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12300)));
label_1d9878:
    // 0x1d9878: 0x9ce20004  lwu         $v0, 0x4($a3)
    ctx->pc = 0x1d9878u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1d987c:
    // 0x1d987c: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d987cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1d9880:
    // 0x1d9880: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d9884:
    // 0x1d9884: 0x544000d8  bnel        $v0, $zero, . + 4 + (0xD8 << 2)
label_1d9888:
    if (ctx->pc == 0x1D9888u) {
        ctx->pc = 0x1D9888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9884u;
        // 0x1d9888: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D988Cu;
        goto label_1d988c;
    }
    ctx->pc = 0x1D9884u;
    {
        const bool branch_taken_0x1d9884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9884) {
            ctx->pc = 0x1D9888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9884u;
            // 0x1d9888: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BE8u;
            goto label_1d9be8;
        }
    }
    ctx->pc = 0x1D988Cu;
label_1d988c:
    // 0x1d988c: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x1d988cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1d9890:
    // 0x1d9890: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d9890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1d9894:
    // 0x1d9894: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x1d9894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
label_1d9898:
    // 0x1d9898: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d9898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d989c:
    // 0x1d989c: 0x8ce20250  lw          $v0, 0x250($a3)
    ctx->pc = 0x1d989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 592)));
label_1d98a0:
    // 0x1d98a0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d98a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1d98a4:
    // 0x1d98a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d98a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d98a8:
    // 0x1d98a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d98a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d98ac:
    // 0x1d98ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d98acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1d98b0:
    // 0x1d98b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d98b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d98b4:
    // 0x1d98b4: 0xace20250  sw          $v0, 0x250($a3)
    ctx->pc = 0x1d98b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 592), GPR_U32(ctx, 2));
label_1d98b8:
    // 0x1d98b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d98b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d98bc:
    // 0x1d98bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d98bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d98c0:
    // 0x1d98c0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d98c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d98c4:
    // 0x1d98c4: 0x8e22300c  lw          $v0, 0x300C($s1)
    ctx->pc = 0x1d98c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12300)));
label_1d98c8:
    // 0x1d98c8: 0xc0b2e92  jal         func_2CBA48
label_1d98cc:
    if (ctx->pc == 0x1D98CCu) {
        ctx->pc = 0x1D98CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D98C8u;
        // 0x1d98cc: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D98D0u;
        goto label_1d98d0;
    }
    ctx->pc = 0x1D98C8u;
    SET_GPR_U32(ctx, 31, 0x1D98D0u);
    ctx->pc = 0x1D98CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D98C8u;
    // 0x1d98cc: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D98C8u, 0x1D98D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D98D0u;
label_1d98d0:
    // 0x1d98d0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d98d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d98d4:
    // 0x1d98d4: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_1d98d8:
    if (ctx->pc == 0x1D98D8u) {
        ctx->pc = 0x1D98D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D98D4u;
        // 0x1d98d8: 0xae23302c  sw          $v1, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D98DCu;
        goto label_1d98dc;
    }
    ctx->pc = 0x1D98D4u;
    {
        const bool branch_taken_0x1d98d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D98D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D98D4u;
        // 0x1d98d8: 0xae23302c  sw          $v1, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d98d4) {
            ctx->pc = 0x1D9BE4u;
            goto label_1d9be4;
        }
    }
    ctx->pc = 0x1D98DCu;
label_1d98dc:
    // 0x1d98dc: 0x8e24300c  lw          $a0, 0x300C($s1)
    ctx->pc = 0x1d98dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12300)));
label_1d98e0:
    // 0x1d98e0: 0x9c820004  lwu         $v0, 0x4($a0)
    ctx->pc = 0x1d98e0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1d98e4:
    // 0x1d98e4: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d98e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1d98e8:
    // 0x1d98e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d98e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d98ec:
    // 0x1d98ec: 0x544000be  bnel        $v0, $zero, . + 4 + (0xBE << 2)
label_1d98f0:
    if (ctx->pc == 0x1D98F0u) {
        ctx->pc = 0x1D98F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D98ECu;
        // 0x1d98f0: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D98F4u;
        goto label_1d98f4;
    }
    ctx->pc = 0x1D98ECu;
    {
        const bool branch_taken_0x1d98ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d98ec) {
            ctx->pc = 0x1D98F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D98ECu;
            // 0x1d98f0: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BE8u;
            goto label_1d9be8;
        }
    }
    ctx->pc = 0x1D98F4u;
label_1d98f4:
    // 0x1d98f4: 0xc622302c  lwc1        $f2, 0x302C($s1)
    ctx->pc = 0x1d98f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d98f8:
    // 0x1d98f8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d98f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d98fc:
    // 0x1d98fc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1d98fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1d9900:
    // 0x1d9900: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d9900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d9904:
    // 0x1d9904: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1d9904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_1d9908:
    // 0x1d9908: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d9908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1d990c:
    // 0x1d990c: 0x24638170  addiu       $v1, $v1, -0x7E90
    ctx->pc = 0x1d990cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934896));
label_1d9910:
    // 0x1d9910: 0xc4458160  lwc1        $f5, -0x7EA0($v0)
    ctx->pc = 0x1d9910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1d9914:
    // 0x1d9914: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x1d9914u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_1d9918:
    // 0x1d9918: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1d9918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d991c:
    // 0x1d991c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d991cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d9920:
    // 0x1d9920: 0x24428160  addiu       $v0, $v0, -0x7EA0
    ctx->pc = 0x1d9920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934880));
label_1d9924:
    // 0x1d9924: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1d9924u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_1d9928:
    // 0x1d9928: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1d9928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d992c:
    // 0x1d992c: 0x0  nop
    ctx->pc = 0x1d992cu;
    // NOP
label_1d9930:
    // 0x1d9930: 0x0  nop
    ctx->pc = 0x1d9930u;
    // NOP
label_1d9934:
    // 0x1d9934: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x1d9934u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[4]);
label_1d9938:
    // 0x1d9938: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x1d9938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d993c:
    // 0x1d993c: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1d993cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1d9940:
    // 0x1d9940: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1d9940u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1d9944:
    // 0x1d9944: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1d9944u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d9948:
    // 0x1d9948: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1d9948u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1d994c:
    // 0x1d994c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1d994cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_1d9950:
    // 0x1d9950: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1d9950u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1d9954:
    // 0x1d9954: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x1d9954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1d9958:
    // 0x1d9958: 0x8e22300c  lw          $v0, 0x300C($s1)
    ctx->pc = 0x1d9958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12300)));
label_1d995c:
    // 0x1d995c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d995cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9960:
    // 0x1d9960: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x1d9960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1d9964:
    // 0x1d9964: 0x1000ff1a  b           . + 4 + (-0xE6 << 2)
label_1d9968:
    if (ctx->pc == 0x1D9968u) {
        ctx->pc = 0x1D9968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9964u;
        // 0x1d9968: 0xe4820004  swc1        $f2, 0x4($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D996Cu;
        goto label_1d996c;
    }
    ctx->pc = 0x1D9964u;
    {
        const bool branch_taken_0x1d9964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9964u;
        // 0x1d9968: 0xe4820004  swc1        $f2, 0x4($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9964) {
            ctx->pc = 0x1D95D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d95d0;
        }
    }
    ctx->pc = 0x1D996Cu;
label_1d996c:
    // 0x1d996c: 0x8e273010  lw          $a3, 0x3010($s1)
    ctx->pc = 0x1d996cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12304)));
label_1d9970:
    // 0x1d9970: 0x9ce20004  lwu         $v0, 0x4($a3)
    ctx->pc = 0x1d9970u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1d9974:
    // 0x1d9974: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d9974u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1d9978:
    // 0x1d9978: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d997c:
    // 0x1d997c: 0x5440009a  bnel        $v0, $zero, . + 4 + (0x9A << 2)
label_1d9980:
    if (ctx->pc == 0x1D9980u) {
        ctx->pc = 0x1D9980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D997Cu;
        // 0x1d9980: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9984u;
        goto label_1d9984;
    }
    ctx->pc = 0x1D997Cu;
    {
        const bool branch_taken_0x1d997c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d997c) {
            ctx->pc = 0x1D9980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D997Cu;
            // 0x1d9980: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BE8u;
            goto label_1d9be8;
        }
    }
    ctx->pc = 0x1D9984u;
label_1d9984:
    // 0x1d9984: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x1d9984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1d9988:
    // 0x1d9988: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d9988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1d998c:
    // 0x1d998c: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x1d998cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
label_1d9990:
    // 0x1d9990: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d9990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d9994:
    // 0x1d9994: 0x8ce20250  lw          $v0, 0x250($a3)
    ctx->pc = 0x1d9994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 592)));
label_1d9998:
    // 0x1d9998: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d9998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1d999c:
    // 0x1d999c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d999cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d99a0:
    // 0x1d99a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d99a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d99a4:
    // 0x1d99a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d99a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1d99a8:
    // 0x1d99a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d99a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d99ac:
    // 0x1d99ac: 0xace20250  sw          $v0, 0x250($a3)
    ctx->pc = 0x1d99acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 592), GPR_U32(ctx, 2));
label_1d99b0:
    // 0x1d99b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d99b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d99b4:
    // 0x1d99b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d99b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d99b8:
    // 0x1d99b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d99b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d99bc:
    // 0x1d99bc: 0x8e223010  lw          $v0, 0x3010($s1)
    ctx->pc = 0x1d99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12304)));
label_1d99c0:
    // 0x1d99c0: 0xc0b2e92  jal         func_2CBA48
label_1d99c4:
    if (ctx->pc == 0x1D99C4u) {
        ctx->pc = 0x1D99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D99C0u;
        // 0x1d99c4: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D99C8u;
        goto label_1d99c8;
    }
    ctx->pc = 0x1D99C0u;
    SET_GPR_U32(ctx, 31, 0x1D99C8u);
    ctx->pc = 0x1D99C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D99C0u;
    // 0x1d99c4: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D99C0u, 0x1D99C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D99C8u;
label_1d99c8:
    // 0x1d99c8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d99c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d99cc:
    // 0x1d99cc: 0x10000085  b           . + 4 + (0x85 << 2)
label_1d99d0:
    if (ctx->pc == 0x1D99D0u) {
        ctx->pc = 0x1D99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D99CCu;
        // 0x1d99d0: 0xae23302c  sw          $v1, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D99D4u;
        goto label_1d99d4;
    }
    ctx->pc = 0x1D99CCu;
    {
        const bool branch_taken_0x1d99cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D99CCu;
        // 0x1d99d0: 0xae23302c  sw          $v1, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d99cc) {
            ctx->pc = 0x1D9BE4u;
            goto label_1d9be4;
        }
    }
    ctx->pc = 0x1D99D4u;
label_1d99d4:
    // 0x1d99d4: 0x8e243010  lw          $a0, 0x3010($s1)
    ctx->pc = 0x1d99d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12304)));
label_1d99d8:
    // 0x1d99d8: 0x9c820004  lwu         $v0, 0x4($a0)
    ctx->pc = 0x1d99d8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1d99dc:
    // 0x1d99dc: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d99dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1d99e0:
    // 0x1d99e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d99e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d99e4:
    // 0x1d99e4: 0x54400080  bnel        $v0, $zero, . + 4 + (0x80 << 2)
label_1d99e8:
    if (ctx->pc == 0x1D99E8u) {
        ctx->pc = 0x1D99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D99E4u;
        // 0x1d99e8: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D99ECu;
        goto label_1d99ec;
    }
    ctx->pc = 0x1D99E4u;
    {
        const bool branch_taken_0x1d99e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d99e4) {
            ctx->pc = 0x1D99E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D99E4u;
            // 0x1d99e8: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BE8u;
            goto label_1d9be8;
        }
    }
    ctx->pc = 0x1D99ECu;
label_1d99ec:
    // 0x1d99ec: 0xc622302c  lwc1        $f2, 0x302C($s1)
    ctx->pc = 0x1d99ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d99f0:
    // 0x1d99f0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d99f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d99f4:
    // 0x1d99f4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1d99f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1d99f8:
    // 0x1d99f8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d99f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d99fc:
    // 0x1d99fc: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1d99fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_1d9a00:
    // 0x1d9a00: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d9a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1d9a04:
    // 0x1d9a04: 0x24638170  addiu       $v1, $v1, -0x7E90
    ctx->pc = 0x1d9a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934896));
label_1d9a08:
    // 0x1d9a08: 0xc4458160  lwc1        $f5, -0x7EA0($v0)
    ctx->pc = 0x1d9a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1d9a0c:
    // 0x1d9a0c: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x1d9a0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_1d9a10:
    // 0x1d9a10: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x1d9a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9a14:
    // 0x1d9a14: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d9a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d9a18:
    // 0x1d9a18: 0x24428160  addiu       $v0, $v0, -0x7EA0
    ctx->pc = 0x1d9a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934880));
label_1d9a1c:
    // 0x1d9a1c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1d9a1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_1d9a20:
    // 0x1d9a20: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1d9a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d9a24:
    // 0x1d9a24: 0x0  nop
    ctx->pc = 0x1d9a24u;
    // NOP
label_1d9a28:
    // 0x1d9a28: 0x0  nop
    ctx->pc = 0x1d9a28u;
    // NOP
label_1d9a2c:
    // 0x1d9a2c: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x1d9a2cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[4]);
label_1d9a30:
    // 0x1d9a30: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x1d9a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9a34:
    // 0x1d9a34: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1d9a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1d9a38:
    // 0x1d9a38: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1d9a38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1d9a3c:
    // 0x1d9a3c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1d9a3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d9a40:
    // 0x1d9a40: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1d9a40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1d9a44:
    // 0x1d9a44: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1d9a44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_1d9a48:
    // 0x1d9a48: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1d9a48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1d9a4c:
    // 0x1d9a4c: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x1d9a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1d9a50:
    // 0x1d9a50: 0x8e223010  lw          $v0, 0x3010($s1)
    ctx->pc = 0x1d9a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12304)));
label_1d9a54:
    // 0x1d9a54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d9a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9a58:
    // 0x1d9a58: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x1d9a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1d9a5c:
    // 0x1d9a5c: 0x1000fedc  b           . + 4 + (-0x124 << 2)
label_1d9a60:
    if (ctx->pc == 0x1D9A60u) {
        ctx->pc = 0x1D9A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A5Cu;
        // 0x1d9a60: 0xe4820004  swc1        $f2, 0x4($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A64u;
        goto label_1d9a64;
    }
    ctx->pc = 0x1D9A5Cu;
    {
        const bool branch_taken_0x1d9a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A5Cu;
        // 0x1d9a60: 0xe4820004  swc1        $f2, 0x4($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a5c) {
            ctx->pc = 0x1D95D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d95d0;
        }
    }
    ctx->pc = 0x1D9A64u;
label_1d9a64:
    // 0x1d9a64: 0x8e273014  lw          $a3, 0x3014($s1)
    ctx->pc = 0x1d9a64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12308)));
label_1d9a68:
    // 0x1d9a68: 0x9ce20004  lwu         $v0, 0x4($a3)
    ctx->pc = 0x1d9a68u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1d9a6c:
    // 0x1d9a6c: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d9a6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1d9a70:
    // 0x1d9a70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d9a74:
    // 0x1d9a74: 0x5440005c  bnel        $v0, $zero, . + 4 + (0x5C << 2)
label_1d9a78:
    if (ctx->pc == 0x1D9A78u) {
        ctx->pc = 0x1D9A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A74u;
        // 0x1d9a78: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9A7Cu;
        goto label_1d9a7c;
    }
    ctx->pc = 0x1D9A74u;
    {
        const bool branch_taken_0x1d9a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a74) {
            ctx->pc = 0x1D9A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9A74u;
            // 0x1d9a78: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BE8u;
            goto label_1d9be8;
        }
    }
    ctx->pc = 0x1D9A7Cu;
label_1d9a7c:
    // 0x1d9a7c: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x1d9a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1d9a80:
    // 0x1d9a80: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1d9a84:
    // 0x1d9a84: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x1d9a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
label_1d9a88:
    // 0x1d9a88: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d9a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d9a8c:
    // 0x1d9a8c: 0x8ce20250  lw          $v0, 0x250($a3)
    ctx->pc = 0x1d9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 592)));
label_1d9a90:
    // 0x1d9a90: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d9a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1d9a94:
    // 0x1d9a94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d9a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9a98:
    // 0x1d9a98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9a9c:
    // 0x1d9a9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d9a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1d9aa0:
    // 0x1d9aa0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9aa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9aa4:
    // 0x1d9aa4: 0xace20250  sw          $v0, 0x250($a3)
    ctx->pc = 0x1d9aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 592), GPR_U32(ctx, 2));
label_1d9aa8:
    // 0x1d9aa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d9aa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9aac:
    // 0x1d9aac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9aacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9ab0:
    // 0x1d9ab0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d9ab0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9ab4:
    // 0x1d9ab4: 0x8e223014  lw          $v0, 0x3014($s1)
    ctx->pc = 0x1d9ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12308)));
label_1d9ab8:
    // 0x1d9ab8: 0xc0b2e92  jal         func_2CBA48
label_1d9abc:
    if (ctx->pc == 0x1D9ABCu) {
        ctx->pc = 0x1D9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AB8u;
        // 0x1d9abc: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9AC0u;
        goto label_1d9ac0;
    }
    ctx->pc = 0x1D9AB8u;
    SET_GPR_U32(ctx, 31, 0x1D9AC0u);
    ctx->pc = 0x1D9ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9AB8u;
    // 0x1d9abc: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D9AB8u, 0x1D9AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9AC0u;
label_1d9ac0:
    // 0x1d9ac0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d9ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d9ac4:
    // 0x1d9ac4: 0x10000047  b           . + 4 + (0x47 << 2)
label_1d9ac8:
    if (ctx->pc == 0x1D9AC8u) {
        ctx->pc = 0x1D9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AC4u;
        // 0x1d9ac8: 0xae23302c  sw          $v1, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9ACCu;
        goto label_1d9acc;
    }
    ctx->pc = 0x1D9AC4u;
    {
        const bool branch_taken_0x1d9ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AC4u;
        // 0x1d9ac8: 0xae23302c  sw          $v1, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ac4) {
            ctx->pc = 0x1D9BE4u;
            goto label_1d9be4;
        }
    }
    ctx->pc = 0x1D9ACCu;
label_1d9acc:
    // 0x1d9acc: 0x8e243014  lw          $a0, 0x3014($s1)
    ctx->pc = 0x1d9accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12308)));
label_1d9ad0:
    // 0x1d9ad0: 0x9c820004  lwu         $v0, 0x4($a0)
    ctx->pc = 0x1d9ad0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1d9ad4:
    // 0x1d9ad4: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d9ad4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1d9ad8:
    // 0x1d9ad8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d9adc:
    // 0x1d9adc: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
label_1d9ae0:
    if (ctx->pc == 0x1D9AE0u) {
        ctx->pc = 0x1D9AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9ADCu;
        // 0x1d9ae0: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9AE4u;
        goto label_1d9ae4;
    }
    ctx->pc = 0x1D9ADCu;
    {
        const bool branch_taken_0x1d9adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9adc) {
            ctx->pc = 0x1D9AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9ADCu;
            // 0x1d9ae0: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BE8u;
            goto label_1d9be8;
        }
    }
    ctx->pc = 0x1D9AE4u;
label_1d9ae4:
    // 0x1d9ae4: 0xc622302c  lwc1        $f2, 0x302C($s1)
    ctx->pc = 0x1d9ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d9ae8:
    // 0x1d9ae8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d9ae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d9aec:
    // 0x1d9aec: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1d9aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1d9af0:
    // 0x1d9af0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d9af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d9af4:
    // 0x1d9af4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1d9af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_1d9af8:
    // 0x1d9af8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1d9afc:
    // 0x1d9afc: 0x24638170  addiu       $v1, $v1, -0x7E90
    ctx->pc = 0x1d9afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934896));
label_1d9b00:
    // 0x1d9b00: 0xc4458160  lwc1        $f5, -0x7EA0($v0)
    ctx->pc = 0x1d9b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1d9b04:
    // 0x1d9b04: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x1d9b04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_1d9b08:
    // 0x1d9b08: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x1d9b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d9b0c:
    // 0x1d9b0c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d9b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d9b10:
    // 0x1d9b10: 0x24428160  addiu       $v0, $v0, -0x7EA0
    ctx->pc = 0x1d9b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934880));
label_1d9b14:
    // 0x1d9b14: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1d9b14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_1d9b18:
    // 0x1d9b18: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1d9b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d9b1c:
    // 0x1d9b1c: 0x0  nop
    ctx->pc = 0x1d9b1cu;
    // NOP
label_1d9b20:
    // 0x1d9b20: 0x0  nop
    ctx->pc = 0x1d9b20u;
    // NOP
label_1d9b24:
    // 0x1d9b24: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x1d9b24u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[4]);
label_1d9b28:
    // 0x1d9b28: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1d9b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9b2c:
    // 0x1d9b2c: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1d9b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1d9b30:
    // 0x1d9b30: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1d9b30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1d9b34:
    // 0x1d9b34: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1d9b34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d9b38:
    // 0x1d9b38: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1d9b38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1d9b3c:
    // 0x1d9b3c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1d9b3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_1d9b40:
    // 0x1d9b40: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1d9b40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1d9b44:
    // 0x1d9b44: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x1d9b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1d9b48:
    // 0x1d9b48: 0x8e223014  lw          $v0, 0x3014($s1)
    ctx->pc = 0x1d9b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12308)));
label_1d9b4c:
    // 0x1d9b4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d9b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9b50:
    // 0x1d9b50: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x1d9b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1d9b54:
    // 0x1d9b54: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1d9b54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1d9b58:
    // 0x1d9b58: 0x8e22302c  lw          $v0, 0x302C($s1)
    ctx->pc = 0x1d9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12332)));
label_1d9b5c:
    // 0x1d9b5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1d9b60:
    if (ctx->pc == 0x1D9B60u) {
        ctx->pc = 0x1D9B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B5Cu;
        // 0x1d9b60: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B64u;
        goto label_1d9b64;
    }
    ctx->pc = 0x1D9B5Cu;
    {
        const bool branch_taken_0x1d9b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B5Cu;
        // 0x1d9b60: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b5c) {
            ctx->pc = 0x1D9B74u;
            goto label_1d9b74;
        }
    }
    ctx->pc = 0x1D9B64u;
label_1d9b64:
    // 0x1d9b64: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1d9b64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
label_1d9b68:
    // 0x1d9b68: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d9b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d9b6c:
    // 0x1d9b6c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1d9b70:
    if (ctx->pc == 0x1D9B70u) {
        ctx->pc = 0x1D9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B6Cu;
        // 0x1d9b70: 0xae23302c  sw          $v1, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B74u;
        goto label_1d9b74;
    }
    ctx->pc = 0x1D9B6Cu;
    {
        const bool branch_taken_0x1d9b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B6Cu;
        // 0x1d9b70: 0xae23302c  sw          $v1, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b6c) {
            ctx->pc = 0x1D9BE8u;
            goto label_1d9be8;
        }
    }
    ctx->pc = 0x1D9B74u;
label_1d9b74:
    // 0x1d9b74: 0x10000042  b           . + 4 + (0x42 << 2)
label_1d9b78:
    if (ctx->pc == 0x1D9B78u) {
        ctx->pc = 0x1D9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B74u;
        // 0x1d9b78: 0xae22302c  sw          $v0, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9B7Cu;
        goto label_1d9b7c;
    }
    ctx->pc = 0x1D9B74u;
    {
        const bool branch_taken_0x1d9b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B74u;
        // 0x1d9b78: 0xae22302c  sw          $v0, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b74) {
            ctx->pc = 0x1D9C80u;
            goto label_1d9c80;
        }
    }
    ctx->pc = 0x1D9B7Cu;
label_1d9b7c:
    // 0x1d9b7c: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x1d9b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
label_1d9b80:
    // 0x1d9b80: 0x26303004  addiu       $s0, $s1, 0x3004
    ctx->pc = 0x1d9b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12292));
label_1d9b84:
    // 0x1d9b84: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1d9b84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d9b88:
    // 0x1d9b88: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d9b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d9b8c:
    // 0x1d9b8c: 0x0  nop
    ctx->pc = 0x1d9b8cu;
    // NOP
label_1d9b90:
    // 0x1d9b90: 0x9c820004  lwu         $v0, 0x4($a0)
    ctx->pc = 0x1d9b90u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1d9b94:
    // 0x1d9b94: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d9b94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1d9b98:
    // 0x1d9b98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d9b9c:
    // 0x1d9b9c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1d9ba0:
    if (ctx->pc == 0x1D9BA0u) {
        ctx->pc = 0x1D9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B9Cu;
        // 0x1d9ba0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BA4u;
        goto label_1d9ba4;
    }
    ctx->pc = 0x1D9B9Cu;
    {
        const bool branch_taken_0x1d9b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9b9c) {
            ctx->pc = 0x1D9BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9B9Cu;
            // 0x1d9ba0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BB0u;
            goto label_1d9bb0;
        }
    }
    ctx->pc = 0x1D9BA4u;
label_1d9ba4:
    // 0x1d9ba4: 0xc075b74  jal         func_1D6DD0
label_1d9ba8:
    if (ctx->pc == 0x1D9BA8u) {
        ctx->pc = 0x1D9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BA4u;
        // 0x1d9ba8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BACu;
        goto label_1d9bac;
    }
    ctx->pc = 0x1D9BA4u;
    SET_GPR_U32(ctx, 31, 0x1D9BACu);
    ctx->pc = 0x1D9BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9BA4u;
    // 0x1d9ba8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6DD0u, 0x1D9BA4u, 0x1D9BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9BACu;
label_1d9bac:
    // 0x1d9bac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d9bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d9bb0:
    // 0x1d9bb0: 0x2664ee00  addiu       $a0, $s3, -0x1200
    ctx->pc = 0x1d9bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962688));
label_1d9bb4:
    // 0x1d9bb4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d9bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9bb8:
    // 0x1d9bb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d9bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9bbc:
    // 0x1d9bbc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d9bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9bc0:
    // 0x1d9bc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9bc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9bc4:
    // 0x1d9bc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d9bc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9bc8:
    // 0x1d9bc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9bc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9bcc:
    // 0x1d9bcc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d9bccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9bd0:
    // 0x1d9bd0: 0xc0b2e92  jal         func_2CBA48
label_1d9bd4:
    if (ctx->pc == 0x1D9BD4u) {
        ctx->pc = 0x1D9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BD0u;
        // 0x1d9bd4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BD8u;
        goto label_1d9bd8;
    }
    ctx->pc = 0x1D9BD0u;
    SET_GPR_U32(ctx, 31, 0x1D9BD8u);
    ctx->pc = 0x1D9BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9BD0u;
    // 0x1d9bd4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D9BD0u, 0x1D9BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9BD8u;
label_1d9bd8:
    // 0x1d9bd8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1d9bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1d9bdc:
    // 0x1d9bdc: 0x643ffec  bgezl       $s2, . + 4 + (-0x14 << 2)
label_1d9be0:
    if (ctx->pc == 0x1D9BE0u) {
        ctx->pc = 0x1D9BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BDCu;
        // 0x1d9be0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BE4u;
        goto label_1d9be4;
    }
    ctx->pc = 0x1D9BDCu;
    {
        const bool branch_taken_0x1d9bdc = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x1d9bdc) {
            ctx->pc = 0x1D9BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9BDCu;
            // 0x1d9be0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9b90;
        }
    }
    ctx->pc = 0x1D9BE4u;
label_1d9be4:
    // 0x1d9be4: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1d9be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
label_1d9be8:
    // 0x1d9be8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d9bec:
    // 0x1d9bec: 0x10000024  b           . + 4 + (0x24 << 2)
label_1d9bf0:
    if (ctx->pc == 0x1D9BF0u) {
        ctx->pc = 0x1D9BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BECu;
        // 0x1d9bf0: 0xa2223025  sb          $v0, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9BF4u;
        goto label_1d9bf4;
    }
    ctx->pc = 0x1D9BECu;
    {
        const bool branch_taken_0x1d9bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BECu;
        // 0x1d9bf0: 0xa2223025  sb          $v0, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9bec) {
            ctx->pc = 0x1D9C80u;
            goto label_1d9c80;
        }
    }
    ctx->pc = 0x1D9BF4u;
label_1d9bf4:
    // 0x1d9bf4: 0x8e233004  lw          $v1, 0x3004($s1)
    ctx->pc = 0x1d9bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
label_1d9bf8:
    // 0x1d9bf8: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d9bf8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d9bfc:
    // 0x1d9bfc: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1d9bfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
label_1d9c00:
    // 0x1d9c00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d9c04:
    // 0x1d9c04: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1d9c08:
    if (ctx->pc == 0x1D9C08u) {
        ctx->pc = 0x1D9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C04u;
        // 0x1d9c08: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9C0Cu;
        goto label_1d9c0c;
    }
    ctx->pc = 0x1D9C04u;
    {
        const bool branch_taken_0x1d9c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C04u;
        // 0x1d9c08: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c04) {
            ctx->pc = 0x1D9C84u;
            goto label_1d9c84;
        }
    }
    ctx->pc = 0x1D9C0Cu;
label_1d9c0c:
    // 0x1d9c0c: 0x8e233008  lw          $v1, 0x3008($s1)
    ctx->pc = 0x1d9c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
label_1d9c10:
    // 0x1d9c10: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d9c10u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d9c14:
    // 0x1d9c14: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1d9c14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
label_1d9c18:
    // 0x1d9c18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d9c1c:
    // 0x1d9c1c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_1d9c20:
    if (ctx->pc == 0x1D9C20u) {
        ctx->pc = 0x1D9C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C1Cu;
        // 0x1d9c20: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9C24u;
        goto label_1d9c24;
    }
    ctx->pc = 0x1D9C1Cu;
    {
        const bool branch_taken_0x1d9c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9c1c) {
            ctx->pc = 0x1D9C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9C1Cu;
            // 0x1d9c20: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9C88u;
            goto label_1d9c88;
        }
    }
    ctx->pc = 0x1D9C24u;
label_1d9c24:
    // 0x1d9c24: 0x8e23300c  lw          $v1, 0x300C($s1)
    ctx->pc = 0x1d9c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12300)));
label_1d9c28:
    // 0x1d9c28: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d9c28u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d9c2c:
    // 0x1d9c2c: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1d9c2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
label_1d9c30:
    // 0x1d9c30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d9c34:
    // 0x1d9c34: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_1d9c38:
    if (ctx->pc == 0x1D9C38u) {
        ctx->pc = 0x1D9C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C34u;
        // 0x1d9c38: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9C3Cu;
        goto label_1d9c3c;
    }
    ctx->pc = 0x1D9C34u;
    {
        const bool branch_taken_0x1d9c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9c34) {
            ctx->pc = 0x1D9C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9C34u;
            // 0x1d9c38: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9C88u;
            goto label_1d9c88;
        }
    }
    ctx->pc = 0x1D9C3Cu;
label_1d9c3c:
    // 0x1d9c3c: 0x8e233010  lw          $v1, 0x3010($s1)
    ctx->pc = 0x1d9c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12304)));
label_1d9c40:
    // 0x1d9c40: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d9c40u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d9c44:
    // 0x1d9c44: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1d9c44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
label_1d9c48:
    // 0x1d9c48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d9c4c:
    // 0x1d9c4c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1d9c50:
    if (ctx->pc == 0x1D9C50u) {
        ctx->pc = 0x1D9C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C4Cu;
        // 0x1d9c50: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9C54u;
        goto label_1d9c54;
    }
    ctx->pc = 0x1D9C4Cu;
    {
        const bool branch_taken_0x1d9c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9c4c) {
            ctx->pc = 0x1D9C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9C4Cu;
            // 0x1d9c50: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9C88u;
            goto label_1d9c88;
        }
    }
    ctx->pc = 0x1D9C54u;
label_1d9c54:
    // 0x1d9c54: 0x8e233014  lw          $v1, 0x3014($s1)
    ctx->pc = 0x1d9c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12308)));
label_1d9c58:
    // 0x1d9c58: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d9c58u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d9c5c:
    // 0x1d9c5c: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1d9c5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
label_1d9c60:
    // 0x1d9c60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d9c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d9c64:
    // 0x1d9c64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d9c68:
    if (ctx->pc == 0x1D9C68u) {
        ctx->pc = 0x1D9C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C64u;
        // 0x1d9c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9C6Cu;
        goto label_1d9c6c;
    }
    ctx->pc = 0x1D9C64u;
    {
        const bool branch_taken_0x1d9c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C64u;
        // 0x1d9c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c64) {
            ctx->pc = 0x1D9C84u;
            goto label_1d9c84;
        }
    }
    ctx->pc = 0x1D9C6Cu;
label_1d9c6c:
    // 0x1d9c6c: 0xc077afa  jal         func_1DEBE8
label_1d9c70:
    if (ctx->pc == 0x1D9C70u) {
        ctx->pc = 0x1D9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C6Cu;
        // 0x1d9c70: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9C74u;
        goto label_1d9c74;
    }
    ctx->pc = 0x1D9C6Cu;
    SET_GPR_U32(ctx, 31, 0x1D9C74u);
    ctx->pc = 0x1D9C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9C6Cu;
    // 0x1d9c70: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEBE8u, 0x1D9C6Cu, 0x1D9C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9C74u;
label_1d9c74:
    // 0x1d9c74: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d9c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d9c78:
    // 0x1d9c78: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d9c78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
label_1d9c7c:
    // 0x1d9c7c: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1d9c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
label_1d9c80:
    // 0x1d9c80: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1d9c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d9c84:
    // 0x1d9c84: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1d9c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d9c88:
    // 0x1d9c88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d9c88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d9c8c:
    // 0x1d9c8c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1d9c8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d9c90:
    // 0x1d9c90: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1d9c90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d9c94:
    // 0x1d9c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d9c98:
    // 0x1d9c98: 0x3e00008  jr          $ra
label_1d9c9c:
    if (ctx->pc == 0x1D9C9Cu) {
        ctx->pc = 0x1D9C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C98u;
        // 0x1d9c9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9CA0u;
        goto label_fallthrough_0x1d9c98;
    }
    ctx->pc = 0x1D9C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C98u;
        // 0x1d9c9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d9c98:
    ctx->pc = 0x1D9CA0u;
}
