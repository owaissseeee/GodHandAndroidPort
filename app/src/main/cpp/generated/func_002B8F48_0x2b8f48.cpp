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

// Function: func_002B8F48
// Address: 0x2b8f48 - 0x2b9d58
void func_002B8F48_0x2b8f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B8F48_0x2b8f48");
#endif

    switch (ctx->pc) {
        case 0x2b8f48u: goto label_2b8f48;
        case 0x2b8f4cu: goto label_2b8f4c;
        case 0x2b8f50u: goto label_2b8f50;
        case 0x2b8f54u: goto label_2b8f54;
        case 0x2b8f58u: goto label_2b8f58;
        case 0x2b8f5cu: goto label_2b8f5c;
        case 0x2b8f60u: goto label_2b8f60;
        case 0x2b8f64u: goto label_2b8f64;
        case 0x2b8f68u: goto label_2b8f68;
        case 0x2b8f6cu: goto label_2b8f6c;
        case 0x2b8f70u: goto label_2b8f70;
        case 0x2b8f74u: goto label_2b8f74;
        case 0x2b8f78u: goto label_2b8f78;
        case 0x2b8f7cu: goto label_2b8f7c;
        case 0x2b8f80u: goto label_2b8f80;
        case 0x2b8f84u: goto label_2b8f84;
        case 0x2b8f88u: goto label_2b8f88;
        case 0x2b8f8cu: goto label_2b8f8c;
        case 0x2b8f90u: goto label_2b8f90;
        case 0x2b8f94u: goto label_2b8f94;
        case 0x2b8f98u: goto label_2b8f98;
        case 0x2b8f9cu: goto label_2b8f9c;
        case 0x2b8fa0u: goto label_2b8fa0;
        case 0x2b8fa4u: goto label_2b8fa4;
        case 0x2b8fa8u: goto label_2b8fa8;
        case 0x2b8facu: goto label_2b8fac;
        case 0x2b8fb0u: goto label_2b8fb0;
        case 0x2b8fb4u: goto label_2b8fb4;
        case 0x2b8fb8u: goto label_2b8fb8;
        case 0x2b8fbcu: goto label_2b8fbc;
        case 0x2b8fc0u: goto label_2b8fc0;
        case 0x2b8fc4u: goto label_2b8fc4;
        case 0x2b8fc8u: goto label_2b8fc8;
        case 0x2b8fccu: goto label_2b8fcc;
        case 0x2b8fd0u: goto label_2b8fd0;
        case 0x2b8fd4u: goto label_2b8fd4;
        case 0x2b8fd8u: goto label_2b8fd8;
        case 0x2b8fdcu: goto label_2b8fdc;
        case 0x2b8fe0u: goto label_2b8fe0;
        case 0x2b8fe4u: goto label_2b8fe4;
        case 0x2b8fe8u: goto label_2b8fe8;
        case 0x2b8fecu: goto label_2b8fec;
        case 0x2b8ff0u: goto label_2b8ff0;
        case 0x2b8ff4u: goto label_2b8ff4;
        case 0x2b8ff8u: goto label_2b8ff8;
        case 0x2b8ffcu: goto label_2b8ffc;
        case 0x2b9000u: goto label_2b9000;
        case 0x2b9004u: goto label_2b9004;
        case 0x2b9008u: goto label_2b9008;
        case 0x2b900cu: goto label_2b900c;
        case 0x2b9010u: goto label_2b9010;
        case 0x2b9014u: goto label_2b9014;
        case 0x2b9018u: goto label_2b9018;
        case 0x2b901cu: goto label_2b901c;
        case 0x2b9020u: goto label_2b9020;
        case 0x2b9024u: goto label_2b9024;
        case 0x2b9028u: goto label_2b9028;
        case 0x2b902cu: goto label_2b902c;
        case 0x2b9030u: goto label_2b9030;
        case 0x2b9034u: goto label_2b9034;
        case 0x2b9038u: goto label_2b9038;
        case 0x2b903cu: goto label_2b903c;
        case 0x2b9040u: goto label_2b9040;
        case 0x2b9044u: goto label_2b9044;
        case 0x2b9048u: goto label_2b9048;
        case 0x2b904cu: goto label_2b904c;
        case 0x2b9050u: goto label_2b9050;
        case 0x2b9054u: goto label_2b9054;
        case 0x2b9058u: goto label_2b9058;
        case 0x2b905cu: goto label_2b905c;
        case 0x2b9060u: goto label_2b9060;
        case 0x2b9064u: goto label_2b9064;
        case 0x2b9068u: goto label_2b9068;
        case 0x2b906cu: goto label_2b906c;
        case 0x2b9070u: goto label_2b9070;
        case 0x2b9074u: goto label_2b9074;
        case 0x2b9078u: goto label_2b9078;
        case 0x2b907cu: goto label_2b907c;
        case 0x2b9080u: goto label_2b9080;
        case 0x2b9084u: goto label_2b9084;
        case 0x2b9088u: goto label_2b9088;
        case 0x2b908cu: goto label_2b908c;
        case 0x2b9090u: goto label_2b9090;
        case 0x2b9094u: goto label_2b9094;
        case 0x2b9098u: goto label_2b9098;
        case 0x2b909cu: goto label_2b909c;
        case 0x2b90a0u: goto label_2b90a0;
        case 0x2b90a4u: goto label_2b90a4;
        case 0x2b90a8u: goto label_2b90a8;
        case 0x2b90acu: goto label_2b90ac;
        case 0x2b90b0u: goto label_2b90b0;
        case 0x2b90b4u: goto label_2b90b4;
        case 0x2b90b8u: goto label_2b90b8;
        case 0x2b90bcu: goto label_2b90bc;
        case 0x2b90c0u: goto label_2b90c0;
        case 0x2b90c4u: goto label_2b90c4;
        case 0x2b90c8u: goto label_2b90c8;
        case 0x2b90ccu: goto label_2b90cc;
        case 0x2b90d0u: goto label_2b90d0;
        case 0x2b90d4u: goto label_2b90d4;
        case 0x2b90d8u: goto label_2b90d8;
        case 0x2b90dcu: goto label_2b90dc;
        case 0x2b90e0u: goto label_2b90e0;
        case 0x2b90e4u: goto label_2b90e4;
        case 0x2b90e8u: goto label_2b90e8;
        case 0x2b90ecu: goto label_2b90ec;
        case 0x2b90f0u: goto label_2b90f0;
        case 0x2b90f4u: goto label_2b90f4;
        case 0x2b90f8u: goto label_2b90f8;
        case 0x2b90fcu: goto label_2b90fc;
        case 0x2b9100u: goto label_2b9100;
        case 0x2b9104u: goto label_2b9104;
        case 0x2b9108u: goto label_2b9108;
        case 0x2b910cu: goto label_2b910c;
        case 0x2b9110u: goto label_2b9110;
        case 0x2b9114u: goto label_2b9114;
        case 0x2b9118u: goto label_2b9118;
        case 0x2b911cu: goto label_2b911c;
        case 0x2b9120u: goto label_2b9120;
        case 0x2b9124u: goto label_2b9124;
        case 0x2b9128u: goto label_2b9128;
        case 0x2b912cu: goto label_2b912c;
        case 0x2b9130u: goto label_2b9130;
        case 0x2b9134u: goto label_2b9134;
        case 0x2b9138u: goto label_2b9138;
        case 0x2b913cu: goto label_2b913c;
        case 0x2b9140u: goto label_2b9140;
        case 0x2b9144u: goto label_2b9144;
        case 0x2b9148u: goto label_2b9148;
        case 0x2b914cu: goto label_2b914c;
        case 0x2b9150u: goto label_2b9150;
        case 0x2b9154u: goto label_2b9154;
        case 0x2b9158u: goto label_2b9158;
        case 0x2b915cu: goto label_2b915c;
        case 0x2b9160u: goto label_2b9160;
        case 0x2b9164u: goto label_2b9164;
        case 0x2b9168u: goto label_2b9168;
        case 0x2b916cu: goto label_2b916c;
        case 0x2b9170u: goto label_2b9170;
        case 0x2b9174u: goto label_2b9174;
        case 0x2b9178u: goto label_2b9178;
        case 0x2b917cu: goto label_2b917c;
        case 0x2b9180u: goto label_2b9180;
        case 0x2b9184u: goto label_2b9184;
        case 0x2b9188u: goto label_2b9188;
        case 0x2b918cu: goto label_2b918c;
        case 0x2b9190u: goto label_2b9190;
        case 0x2b9194u: goto label_2b9194;
        case 0x2b9198u: goto label_2b9198;
        case 0x2b919cu: goto label_2b919c;
        case 0x2b91a0u: goto label_2b91a0;
        case 0x2b91a4u: goto label_2b91a4;
        case 0x2b91a8u: goto label_2b91a8;
        case 0x2b91acu: goto label_2b91ac;
        case 0x2b91b0u: goto label_2b91b0;
        case 0x2b91b4u: goto label_2b91b4;
        case 0x2b91b8u: goto label_2b91b8;
        case 0x2b91bcu: goto label_2b91bc;
        case 0x2b91c0u: goto label_2b91c0;
        case 0x2b91c4u: goto label_2b91c4;
        case 0x2b91c8u: goto label_2b91c8;
        case 0x2b91ccu: goto label_2b91cc;
        case 0x2b91d0u: goto label_2b91d0;
        case 0x2b91d4u: goto label_2b91d4;
        case 0x2b91d8u: goto label_2b91d8;
        case 0x2b91dcu: goto label_2b91dc;
        case 0x2b91e0u: goto label_2b91e0;
        case 0x2b91e4u: goto label_2b91e4;
        case 0x2b91e8u: goto label_2b91e8;
        case 0x2b91ecu: goto label_2b91ec;
        case 0x2b91f0u: goto label_2b91f0;
        case 0x2b91f4u: goto label_2b91f4;
        case 0x2b91f8u: goto label_2b91f8;
        case 0x2b91fcu: goto label_2b91fc;
        case 0x2b9200u: goto label_2b9200;
        case 0x2b9204u: goto label_2b9204;
        case 0x2b9208u: goto label_2b9208;
        case 0x2b920cu: goto label_2b920c;
        case 0x2b9210u: goto label_2b9210;
        case 0x2b9214u: goto label_2b9214;
        case 0x2b9218u: goto label_2b9218;
        case 0x2b921cu: goto label_2b921c;
        case 0x2b9220u: goto label_2b9220;
        case 0x2b9224u: goto label_2b9224;
        case 0x2b9228u: goto label_2b9228;
        case 0x2b922cu: goto label_2b922c;
        case 0x2b9230u: goto label_2b9230;
        case 0x2b9234u: goto label_2b9234;
        case 0x2b9238u: goto label_2b9238;
        case 0x2b923cu: goto label_2b923c;
        case 0x2b9240u: goto label_2b9240;
        case 0x2b9244u: goto label_2b9244;
        case 0x2b9248u: goto label_2b9248;
        case 0x2b924cu: goto label_2b924c;
        case 0x2b9250u: goto label_2b9250;
        case 0x2b9254u: goto label_2b9254;
        case 0x2b9258u: goto label_2b9258;
        case 0x2b925cu: goto label_2b925c;
        case 0x2b9260u: goto label_2b9260;
        case 0x2b9264u: goto label_2b9264;
        case 0x2b9268u: goto label_2b9268;
        case 0x2b926cu: goto label_2b926c;
        case 0x2b9270u: goto label_2b9270;
        case 0x2b9274u: goto label_2b9274;
        case 0x2b9278u: goto label_2b9278;
        case 0x2b927cu: goto label_2b927c;
        case 0x2b9280u: goto label_2b9280;
        case 0x2b9284u: goto label_2b9284;
        case 0x2b9288u: goto label_2b9288;
        case 0x2b928cu: goto label_2b928c;
        case 0x2b9290u: goto label_2b9290;
        case 0x2b9294u: goto label_2b9294;
        case 0x2b9298u: goto label_2b9298;
        case 0x2b929cu: goto label_2b929c;
        case 0x2b92a0u: goto label_2b92a0;
        case 0x2b92a4u: goto label_2b92a4;
        case 0x2b92a8u: goto label_2b92a8;
        case 0x2b92acu: goto label_2b92ac;
        case 0x2b92b0u: goto label_2b92b0;
        case 0x2b92b4u: goto label_2b92b4;
        case 0x2b92b8u: goto label_2b92b8;
        case 0x2b92bcu: goto label_2b92bc;
        case 0x2b92c0u: goto label_2b92c0;
        case 0x2b92c4u: goto label_2b92c4;
        case 0x2b92c8u: goto label_2b92c8;
        case 0x2b92ccu: goto label_2b92cc;
        case 0x2b92d0u: goto label_2b92d0;
        case 0x2b92d4u: goto label_2b92d4;
        case 0x2b92d8u: goto label_2b92d8;
        case 0x2b92dcu: goto label_2b92dc;
        case 0x2b92e0u: goto label_2b92e0;
        case 0x2b92e4u: goto label_2b92e4;
        case 0x2b92e8u: goto label_2b92e8;
        case 0x2b92ecu: goto label_2b92ec;
        case 0x2b92f0u: goto label_2b92f0;
        case 0x2b92f4u: goto label_2b92f4;
        case 0x2b92f8u: goto label_2b92f8;
        case 0x2b92fcu: goto label_2b92fc;
        case 0x2b9300u: goto label_2b9300;
        case 0x2b9304u: goto label_2b9304;
        case 0x2b9308u: goto label_2b9308;
        case 0x2b930cu: goto label_2b930c;
        case 0x2b9310u: goto label_2b9310;
        case 0x2b9314u: goto label_2b9314;
        case 0x2b9318u: goto label_2b9318;
        case 0x2b931cu: goto label_2b931c;
        case 0x2b9320u: goto label_2b9320;
        case 0x2b9324u: goto label_2b9324;
        case 0x2b9328u: goto label_2b9328;
        case 0x2b932cu: goto label_2b932c;
        case 0x2b9330u: goto label_2b9330;
        case 0x2b9334u: goto label_2b9334;
        case 0x2b9338u: goto label_2b9338;
        case 0x2b933cu: goto label_2b933c;
        case 0x2b9340u: goto label_2b9340;
        case 0x2b9344u: goto label_2b9344;
        case 0x2b9348u: goto label_2b9348;
        case 0x2b934cu: goto label_2b934c;
        case 0x2b9350u: goto label_2b9350;
        case 0x2b9354u: goto label_2b9354;
        case 0x2b9358u: goto label_2b9358;
        case 0x2b935cu: goto label_2b935c;
        case 0x2b9360u: goto label_2b9360;
        case 0x2b9364u: goto label_2b9364;
        case 0x2b9368u: goto label_2b9368;
        case 0x2b936cu: goto label_2b936c;
        case 0x2b9370u: goto label_2b9370;
        case 0x2b9374u: goto label_2b9374;
        case 0x2b9378u: goto label_2b9378;
        case 0x2b937cu: goto label_2b937c;
        case 0x2b9380u: goto label_2b9380;
        case 0x2b9384u: goto label_2b9384;
        case 0x2b9388u: goto label_2b9388;
        case 0x2b938cu: goto label_2b938c;
        case 0x2b9390u: goto label_2b9390;
        case 0x2b9394u: goto label_2b9394;
        case 0x2b9398u: goto label_2b9398;
        case 0x2b939cu: goto label_2b939c;
        case 0x2b93a0u: goto label_2b93a0;
        case 0x2b93a4u: goto label_2b93a4;
        case 0x2b93a8u: goto label_2b93a8;
        case 0x2b93acu: goto label_2b93ac;
        case 0x2b93b0u: goto label_2b93b0;
        case 0x2b93b4u: goto label_2b93b4;
        case 0x2b93b8u: goto label_2b93b8;
        case 0x2b93bcu: goto label_2b93bc;
        case 0x2b93c0u: goto label_2b93c0;
        case 0x2b93c4u: goto label_2b93c4;
        case 0x2b93c8u: goto label_2b93c8;
        case 0x2b93ccu: goto label_2b93cc;
        case 0x2b93d0u: goto label_2b93d0;
        case 0x2b93d4u: goto label_2b93d4;
        case 0x2b93d8u: goto label_2b93d8;
        case 0x2b93dcu: goto label_2b93dc;
        case 0x2b93e0u: goto label_2b93e0;
        case 0x2b93e4u: goto label_2b93e4;
        case 0x2b93e8u: goto label_2b93e8;
        case 0x2b93ecu: goto label_2b93ec;
        case 0x2b93f0u: goto label_2b93f0;
        case 0x2b93f4u: goto label_2b93f4;
        case 0x2b93f8u: goto label_2b93f8;
        case 0x2b93fcu: goto label_2b93fc;
        case 0x2b9400u: goto label_2b9400;
        case 0x2b9404u: goto label_2b9404;
        case 0x2b9408u: goto label_2b9408;
        case 0x2b940cu: goto label_2b940c;
        case 0x2b9410u: goto label_2b9410;
        case 0x2b9414u: goto label_2b9414;
        case 0x2b9418u: goto label_2b9418;
        case 0x2b941cu: goto label_2b941c;
        case 0x2b9420u: goto label_2b9420;
        case 0x2b9424u: goto label_2b9424;
        case 0x2b9428u: goto label_2b9428;
        case 0x2b942cu: goto label_2b942c;
        case 0x2b9430u: goto label_2b9430;
        case 0x2b9434u: goto label_2b9434;
        case 0x2b9438u: goto label_2b9438;
        case 0x2b943cu: goto label_2b943c;
        case 0x2b9440u: goto label_2b9440;
        case 0x2b9444u: goto label_2b9444;
        case 0x2b9448u: goto label_2b9448;
        case 0x2b944cu: goto label_2b944c;
        case 0x2b9450u: goto label_2b9450;
        case 0x2b9454u: goto label_2b9454;
        case 0x2b9458u: goto label_2b9458;
        case 0x2b945cu: goto label_2b945c;
        case 0x2b9460u: goto label_2b9460;
        case 0x2b9464u: goto label_2b9464;
        case 0x2b9468u: goto label_2b9468;
        case 0x2b946cu: goto label_2b946c;
        case 0x2b9470u: goto label_2b9470;
        case 0x2b9474u: goto label_2b9474;
        case 0x2b9478u: goto label_2b9478;
        case 0x2b947cu: goto label_2b947c;
        case 0x2b9480u: goto label_2b9480;
        case 0x2b9484u: goto label_2b9484;
        case 0x2b9488u: goto label_2b9488;
        case 0x2b948cu: goto label_2b948c;
        case 0x2b9490u: goto label_2b9490;
        case 0x2b9494u: goto label_2b9494;
        case 0x2b9498u: goto label_2b9498;
        case 0x2b949cu: goto label_2b949c;
        case 0x2b94a0u: goto label_2b94a0;
        case 0x2b94a4u: goto label_2b94a4;
        case 0x2b94a8u: goto label_2b94a8;
        case 0x2b94acu: goto label_2b94ac;
        case 0x2b94b0u: goto label_2b94b0;
        case 0x2b94b4u: goto label_2b94b4;
        case 0x2b94b8u: goto label_2b94b8;
        case 0x2b94bcu: goto label_2b94bc;
        case 0x2b94c0u: goto label_2b94c0;
        case 0x2b94c4u: goto label_2b94c4;
        case 0x2b94c8u: goto label_2b94c8;
        case 0x2b94ccu: goto label_2b94cc;
        case 0x2b94d0u: goto label_2b94d0;
        case 0x2b94d4u: goto label_2b94d4;
        case 0x2b94d8u: goto label_2b94d8;
        case 0x2b94dcu: goto label_2b94dc;
        case 0x2b94e0u: goto label_2b94e0;
        case 0x2b94e4u: goto label_2b94e4;
        case 0x2b94e8u: goto label_2b94e8;
        case 0x2b94ecu: goto label_2b94ec;
        case 0x2b94f0u: goto label_2b94f0;
        case 0x2b94f4u: goto label_2b94f4;
        case 0x2b94f8u: goto label_2b94f8;
        case 0x2b94fcu: goto label_2b94fc;
        case 0x2b9500u: goto label_2b9500;
        case 0x2b9504u: goto label_2b9504;
        case 0x2b9508u: goto label_2b9508;
        case 0x2b950cu: goto label_2b950c;
        case 0x2b9510u: goto label_2b9510;
        case 0x2b9514u: goto label_2b9514;
        case 0x2b9518u: goto label_2b9518;
        case 0x2b951cu: goto label_2b951c;
        case 0x2b9520u: goto label_2b9520;
        case 0x2b9524u: goto label_2b9524;
        case 0x2b9528u: goto label_2b9528;
        case 0x2b952cu: goto label_2b952c;
        case 0x2b9530u: goto label_2b9530;
        case 0x2b9534u: goto label_2b9534;
        case 0x2b9538u: goto label_2b9538;
        case 0x2b953cu: goto label_2b953c;
        case 0x2b9540u: goto label_2b9540;
        case 0x2b9544u: goto label_2b9544;
        case 0x2b9548u: goto label_2b9548;
        case 0x2b954cu: goto label_2b954c;
        case 0x2b9550u: goto label_2b9550;
        case 0x2b9554u: goto label_2b9554;
        case 0x2b9558u: goto label_2b9558;
        case 0x2b955cu: goto label_2b955c;
        case 0x2b9560u: goto label_2b9560;
        case 0x2b9564u: goto label_2b9564;
        case 0x2b9568u: goto label_2b9568;
        case 0x2b956cu: goto label_2b956c;
        case 0x2b9570u: goto label_2b9570;
        case 0x2b9574u: goto label_2b9574;
        case 0x2b9578u: goto label_2b9578;
        case 0x2b957cu: goto label_2b957c;
        case 0x2b9580u: goto label_2b9580;
        case 0x2b9584u: goto label_2b9584;
        case 0x2b9588u: goto label_2b9588;
        case 0x2b958cu: goto label_2b958c;
        case 0x2b9590u: goto label_2b9590;
        case 0x2b9594u: goto label_2b9594;
        case 0x2b9598u: goto label_2b9598;
        case 0x2b959cu: goto label_2b959c;
        case 0x2b95a0u: goto label_2b95a0;
        case 0x2b95a4u: goto label_2b95a4;
        case 0x2b95a8u: goto label_2b95a8;
        case 0x2b95acu: goto label_2b95ac;
        case 0x2b95b0u: goto label_2b95b0;
        case 0x2b95b4u: goto label_2b95b4;
        case 0x2b95b8u: goto label_2b95b8;
        case 0x2b95bcu: goto label_2b95bc;
        case 0x2b95c0u: goto label_2b95c0;
        case 0x2b95c4u: goto label_2b95c4;
        case 0x2b95c8u: goto label_2b95c8;
        case 0x2b95ccu: goto label_2b95cc;
        case 0x2b95d0u: goto label_2b95d0;
        case 0x2b95d4u: goto label_2b95d4;
        case 0x2b95d8u: goto label_2b95d8;
        case 0x2b95dcu: goto label_2b95dc;
        case 0x2b95e0u: goto label_2b95e0;
        case 0x2b95e4u: goto label_2b95e4;
        case 0x2b95e8u: goto label_2b95e8;
        case 0x2b95ecu: goto label_2b95ec;
        case 0x2b95f0u: goto label_2b95f0;
        case 0x2b95f4u: goto label_2b95f4;
        case 0x2b95f8u: goto label_2b95f8;
        case 0x2b95fcu: goto label_2b95fc;
        case 0x2b9600u: goto label_2b9600;
        case 0x2b9604u: goto label_2b9604;
        case 0x2b9608u: goto label_2b9608;
        case 0x2b960cu: goto label_2b960c;
        case 0x2b9610u: goto label_2b9610;
        case 0x2b9614u: goto label_2b9614;
        case 0x2b9618u: goto label_2b9618;
        case 0x2b961cu: goto label_2b961c;
        case 0x2b9620u: goto label_2b9620;
        case 0x2b9624u: goto label_2b9624;
        case 0x2b9628u: goto label_2b9628;
        case 0x2b962cu: goto label_2b962c;
        case 0x2b9630u: goto label_2b9630;
        case 0x2b9634u: goto label_2b9634;
        case 0x2b9638u: goto label_2b9638;
        case 0x2b963cu: goto label_2b963c;
        case 0x2b9640u: goto label_2b9640;
        case 0x2b9644u: goto label_2b9644;
        case 0x2b9648u: goto label_2b9648;
        case 0x2b964cu: goto label_2b964c;
        case 0x2b9650u: goto label_2b9650;
        case 0x2b9654u: goto label_2b9654;
        case 0x2b9658u: goto label_2b9658;
        case 0x2b965cu: goto label_2b965c;
        case 0x2b9660u: goto label_2b9660;
        case 0x2b9664u: goto label_2b9664;
        case 0x2b9668u: goto label_2b9668;
        case 0x2b966cu: goto label_2b966c;
        case 0x2b9670u: goto label_2b9670;
        case 0x2b9674u: goto label_2b9674;
        case 0x2b9678u: goto label_2b9678;
        case 0x2b967cu: goto label_2b967c;
        case 0x2b9680u: goto label_2b9680;
        case 0x2b9684u: goto label_2b9684;
        case 0x2b9688u: goto label_2b9688;
        case 0x2b968cu: goto label_2b968c;
        case 0x2b9690u: goto label_2b9690;
        case 0x2b9694u: goto label_2b9694;
        case 0x2b9698u: goto label_2b9698;
        case 0x2b969cu: goto label_2b969c;
        case 0x2b96a0u: goto label_2b96a0;
        case 0x2b96a4u: goto label_2b96a4;
        case 0x2b96a8u: goto label_2b96a8;
        case 0x2b96acu: goto label_2b96ac;
        case 0x2b96b0u: goto label_2b96b0;
        case 0x2b96b4u: goto label_2b96b4;
        case 0x2b96b8u: goto label_2b96b8;
        case 0x2b96bcu: goto label_2b96bc;
        case 0x2b96c0u: goto label_2b96c0;
        case 0x2b96c4u: goto label_2b96c4;
        case 0x2b96c8u: goto label_2b96c8;
        case 0x2b96ccu: goto label_2b96cc;
        case 0x2b96d0u: goto label_2b96d0;
        case 0x2b96d4u: goto label_2b96d4;
        case 0x2b96d8u: goto label_2b96d8;
        case 0x2b96dcu: goto label_2b96dc;
        case 0x2b96e0u: goto label_2b96e0;
        case 0x2b96e4u: goto label_2b96e4;
        case 0x2b96e8u: goto label_2b96e8;
        case 0x2b96ecu: goto label_2b96ec;
        case 0x2b96f0u: goto label_2b96f0;
        case 0x2b96f4u: goto label_2b96f4;
        case 0x2b96f8u: goto label_2b96f8;
        case 0x2b96fcu: goto label_2b96fc;
        case 0x2b9700u: goto label_2b9700;
        case 0x2b9704u: goto label_2b9704;
        case 0x2b9708u: goto label_2b9708;
        case 0x2b970cu: goto label_2b970c;
        case 0x2b9710u: goto label_2b9710;
        case 0x2b9714u: goto label_2b9714;
        case 0x2b9718u: goto label_2b9718;
        case 0x2b971cu: goto label_2b971c;
        case 0x2b9720u: goto label_2b9720;
        case 0x2b9724u: goto label_2b9724;
        case 0x2b9728u: goto label_2b9728;
        case 0x2b972cu: goto label_2b972c;
        case 0x2b9730u: goto label_2b9730;
        case 0x2b9734u: goto label_2b9734;
        case 0x2b9738u: goto label_2b9738;
        case 0x2b973cu: goto label_2b973c;
        case 0x2b9740u: goto label_2b9740;
        case 0x2b9744u: goto label_2b9744;
        case 0x2b9748u: goto label_2b9748;
        case 0x2b974cu: goto label_2b974c;
        case 0x2b9750u: goto label_2b9750;
        case 0x2b9754u: goto label_2b9754;
        case 0x2b9758u: goto label_2b9758;
        case 0x2b975cu: goto label_2b975c;
        case 0x2b9760u: goto label_2b9760;
        case 0x2b9764u: goto label_2b9764;
        case 0x2b9768u: goto label_2b9768;
        case 0x2b976cu: goto label_2b976c;
        case 0x2b9770u: goto label_2b9770;
        case 0x2b9774u: goto label_2b9774;
        case 0x2b9778u: goto label_2b9778;
        case 0x2b977cu: goto label_2b977c;
        case 0x2b9780u: goto label_2b9780;
        case 0x2b9784u: goto label_2b9784;
        case 0x2b9788u: goto label_2b9788;
        case 0x2b978cu: goto label_2b978c;
        case 0x2b9790u: goto label_2b9790;
        case 0x2b9794u: goto label_2b9794;
        case 0x2b9798u: goto label_2b9798;
        case 0x2b979cu: goto label_2b979c;
        case 0x2b97a0u: goto label_2b97a0;
        case 0x2b97a4u: goto label_2b97a4;
        case 0x2b97a8u: goto label_2b97a8;
        case 0x2b97acu: goto label_2b97ac;
        case 0x2b97b0u: goto label_2b97b0;
        case 0x2b97b4u: goto label_2b97b4;
        case 0x2b97b8u: goto label_2b97b8;
        case 0x2b97bcu: goto label_2b97bc;
        case 0x2b97c0u: goto label_2b97c0;
        case 0x2b97c4u: goto label_2b97c4;
        case 0x2b97c8u: goto label_2b97c8;
        case 0x2b97ccu: goto label_2b97cc;
        case 0x2b97d0u: goto label_2b97d0;
        case 0x2b97d4u: goto label_2b97d4;
        case 0x2b97d8u: goto label_2b97d8;
        case 0x2b97dcu: goto label_2b97dc;
        case 0x2b97e0u: goto label_2b97e0;
        case 0x2b97e4u: goto label_2b97e4;
        case 0x2b97e8u: goto label_2b97e8;
        case 0x2b97ecu: goto label_2b97ec;
        case 0x2b97f0u: goto label_2b97f0;
        case 0x2b97f4u: goto label_2b97f4;
        case 0x2b97f8u: goto label_2b97f8;
        case 0x2b97fcu: goto label_2b97fc;
        case 0x2b9800u: goto label_2b9800;
        case 0x2b9804u: goto label_2b9804;
        case 0x2b9808u: goto label_2b9808;
        case 0x2b980cu: goto label_2b980c;
        case 0x2b9810u: goto label_2b9810;
        case 0x2b9814u: goto label_2b9814;
        case 0x2b9818u: goto label_2b9818;
        case 0x2b981cu: goto label_2b981c;
        case 0x2b9820u: goto label_2b9820;
        case 0x2b9824u: goto label_2b9824;
        case 0x2b9828u: goto label_2b9828;
        case 0x2b982cu: goto label_2b982c;
        case 0x2b9830u: goto label_2b9830;
        case 0x2b9834u: goto label_2b9834;
        case 0x2b9838u: goto label_2b9838;
        case 0x2b983cu: goto label_2b983c;
        case 0x2b9840u: goto label_2b9840;
        case 0x2b9844u: goto label_2b9844;
        case 0x2b9848u: goto label_2b9848;
        case 0x2b984cu: goto label_2b984c;
        case 0x2b9850u: goto label_2b9850;
        case 0x2b9854u: goto label_2b9854;
        case 0x2b9858u: goto label_2b9858;
        case 0x2b985cu: goto label_2b985c;
        case 0x2b9860u: goto label_2b9860;
        case 0x2b9864u: goto label_2b9864;
        case 0x2b9868u: goto label_2b9868;
        case 0x2b986cu: goto label_2b986c;
        case 0x2b9870u: goto label_2b9870;
        case 0x2b9874u: goto label_2b9874;
        case 0x2b9878u: goto label_2b9878;
        case 0x2b987cu: goto label_2b987c;
        case 0x2b9880u: goto label_2b9880;
        case 0x2b9884u: goto label_2b9884;
        case 0x2b9888u: goto label_2b9888;
        case 0x2b988cu: goto label_2b988c;
        case 0x2b9890u: goto label_2b9890;
        case 0x2b9894u: goto label_2b9894;
        case 0x2b9898u: goto label_2b9898;
        case 0x2b989cu: goto label_2b989c;
        case 0x2b98a0u: goto label_2b98a0;
        case 0x2b98a4u: goto label_2b98a4;
        case 0x2b98a8u: goto label_2b98a8;
        case 0x2b98acu: goto label_2b98ac;
        case 0x2b98b0u: goto label_2b98b0;
        case 0x2b98b4u: goto label_2b98b4;
        case 0x2b98b8u: goto label_2b98b8;
        case 0x2b98bcu: goto label_2b98bc;
        case 0x2b98c0u: goto label_2b98c0;
        case 0x2b98c4u: goto label_2b98c4;
        case 0x2b98c8u: goto label_2b98c8;
        case 0x2b98ccu: goto label_2b98cc;
        case 0x2b98d0u: goto label_2b98d0;
        case 0x2b98d4u: goto label_2b98d4;
        case 0x2b98d8u: goto label_2b98d8;
        case 0x2b98dcu: goto label_2b98dc;
        case 0x2b98e0u: goto label_2b98e0;
        case 0x2b98e4u: goto label_2b98e4;
        case 0x2b98e8u: goto label_2b98e8;
        case 0x2b98ecu: goto label_2b98ec;
        case 0x2b98f0u: goto label_2b98f0;
        case 0x2b98f4u: goto label_2b98f4;
        case 0x2b98f8u: goto label_2b98f8;
        case 0x2b98fcu: goto label_2b98fc;
        case 0x2b9900u: goto label_2b9900;
        case 0x2b9904u: goto label_2b9904;
        case 0x2b9908u: goto label_2b9908;
        case 0x2b990cu: goto label_2b990c;
        case 0x2b9910u: goto label_2b9910;
        case 0x2b9914u: goto label_2b9914;
        case 0x2b9918u: goto label_2b9918;
        case 0x2b991cu: goto label_2b991c;
        case 0x2b9920u: goto label_2b9920;
        case 0x2b9924u: goto label_2b9924;
        case 0x2b9928u: goto label_2b9928;
        case 0x2b992cu: goto label_2b992c;
        case 0x2b9930u: goto label_2b9930;
        case 0x2b9934u: goto label_2b9934;
        case 0x2b9938u: goto label_2b9938;
        case 0x2b993cu: goto label_2b993c;
        case 0x2b9940u: goto label_2b9940;
        case 0x2b9944u: goto label_2b9944;
        case 0x2b9948u: goto label_2b9948;
        case 0x2b994cu: goto label_2b994c;
        case 0x2b9950u: goto label_2b9950;
        case 0x2b9954u: goto label_2b9954;
        case 0x2b9958u: goto label_2b9958;
        case 0x2b995cu: goto label_2b995c;
        case 0x2b9960u: goto label_2b9960;
        case 0x2b9964u: goto label_2b9964;
        case 0x2b9968u: goto label_2b9968;
        case 0x2b996cu: goto label_2b996c;
        case 0x2b9970u: goto label_2b9970;
        case 0x2b9974u: goto label_2b9974;
        case 0x2b9978u: goto label_2b9978;
        case 0x2b997cu: goto label_2b997c;
        case 0x2b9980u: goto label_2b9980;
        case 0x2b9984u: goto label_2b9984;
        case 0x2b9988u: goto label_2b9988;
        case 0x2b998cu: goto label_2b998c;
        case 0x2b9990u: goto label_2b9990;
        case 0x2b9994u: goto label_2b9994;
        case 0x2b9998u: goto label_2b9998;
        case 0x2b999cu: goto label_2b999c;
        case 0x2b99a0u: goto label_2b99a0;
        case 0x2b99a4u: goto label_2b99a4;
        case 0x2b99a8u: goto label_2b99a8;
        case 0x2b99acu: goto label_2b99ac;
        case 0x2b99b0u: goto label_2b99b0;
        case 0x2b99b4u: goto label_2b99b4;
        case 0x2b99b8u: goto label_2b99b8;
        case 0x2b99bcu: goto label_2b99bc;
        case 0x2b99c0u: goto label_2b99c0;
        case 0x2b99c4u: goto label_2b99c4;
        case 0x2b99c8u: goto label_2b99c8;
        case 0x2b99ccu: goto label_2b99cc;
        case 0x2b99d0u: goto label_2b99d0;
        case 0x2b99d4u: goto label_2b99d4;
        case 0x2b99d8u: goto label_2b99d8;
        case 0x2b99dcu: goto label_2b99dc;
        case 0x2b99e0u: goto label_2b99e0;
        case 0x2b99e4u: goto label_2b99e4;
        case 0x2b99e8u: goto label_2b99e8;
        case 0x2b99ecu: goto label_2b99ec;
        case 0x2b99f0u: goto label_2b99f0;
        case 0x2b99f4u: goto label_2b99f4;
        case 0x2b99f8u: goto label_2b99f8;
        case 0x2b99fcu: goto label_2b99fc;
        case 0x2b9a00u: goto label_2b9a00;
        case 0x2b9a04u: goto label_2b9a04;
        case 0x2b9a08u: goto label_2b9a08;
        case 0x2b9a0cu: goto label_2b9a0c;
        case 0x2b9a10u: goto label_2b9a10;
        case 0x2b9a14u: goto label_2b9a14;
        case 0x2b9a18u: goto label_2b9a18;
        case 0x2b9a1cu: goto label_2b9a1c;
        case 0x2b9a20u: goto label_2b9a20;
        case 0x2b9a24u: goto label_2b9a24;
        case 0x2b9a28u: goto label_2b9a28;
        case 0x2b9a2cu: goto label_2b9a2c;
        case 0x2b9a30u: goto label_2b9a30;
        case 0x2b9a34u: goto label_2b9a34;
        case 0x2b9a38u: goto label_2b9a38;
        case 0x2b9a3cu: goto label_2b9a3c;
        case 0x2b9a40u: goto label_2b9a40;
        case 0x2b9a44u: goto label_2b9a44;
        case 0x2b9a48u: goto label_2b9a48;
        case 0x2b9a4cu: goto label_2b9a4c;
        case 0x2b9a50u: goto label_2b9a50;
        case 0x2b9a54u: goto label_2b9a54;
        case 0x2b9a58u: goto label_2b9a58;
        case 0x2b9a5cu: goto label_2b9a5c;
        case 0x2b9a60u: goto label_2b9a60;
        case 0x2b9a64u: goto label_2b9a64;
        case 0x2b9a68u: goto label_2b9a68;
        case 0x2b9a6cu: goto label_2b9a6c;
        case 0x2b9a70u: goto label_2b9a70;
        case 0x2b9a74u: goto label_2b9a74;
        case 0x2b9a78u: goto label_2b9a78;
        case 0x2b9a7cu: goto label_2b9a7c;
        case 0x2b9a80u: goto label_2b9a80;
        case 0x2b9a84u: goto label_2b9a84;
        case 0x2b9a88u: goto label_2b9a88;
        case 0x2b9a8cu: goto label_2b9a8c;
        case 0x2b9a90u: goto label_2b9a90;
        case 0x2b9a94u: goto label_2b9a94;
        case 0x2b9a98u: goto label_2b9a98;
        case 0x2b9a9cu: goto label_2b9a9c;
        case 0x2b9aa0u: goto label_2b9aa0;
        case 0x2b9aa4u: goto label_2b9aa4;
        case 0x2b9aa8u: goto label_2b9aa8;
        case 0x2b9aacu: goto label_2b9aac;
        case 0x2b9ab0u: goto label_2b9ab0;
        case 0x2b9ab4u: goto label_2b9ab4;
        case 0x2b9ab8u: goto label_2b9ab8;
        case 0x2b9abcu: goto label_2b9abc;
        case 0x2b9ac0u: goto label_2b9ac0;
        case 0x2b9ac4u: goto label_2b9ac4;
        case 0x2b9ac8u: goto label_2b9ac8;
        case 0x2b9accu: goto label_2b9acc;
        case 0x2b9ad0u: goto label_2b9ad0;
        case 0x2b9ad4u: goto label_2b9ad4;
        case 0x2b9ad8u: goto label_2b9ad8;
        case 0x2b9adcu: goto label_2b9adc;
        case 0x2b9ae0u: goto label_2b9ae0;
        case 0x2b9ae4u: goto label_2b9ae4;
        case 0x2b9ae8u: goto label_2b9ae8;
        case 0x2b9aecu: goto label_2b9aec;
        case 0x2b9af0u: goto label_2b9af0;
        case 0x2b9af4u: goto label_2b9af4;
        case 0x2b9af8u: goto label_2b9af8;
        case 0x2b9afcu: goto label_2b9afc;
        case 0x2b9b00u: goto label_2b9b00;
        case 0x2b9b04u: goto label_2b9b04;
        case 0x2b9b08u: goto label_2b9b08;
        case 0x2b9b0cu: goto label_2b9b0c;
        case 0x2b9b10u: goto label_2b9b10;
        case 0x2b9b14u: goto label_2b9b14;
        case 0x2b9b18u: goto label_2b9b18;
        case 0x2b9b1cu: goto label_2b9b1c;
        case 0x2b9b20u: goto label_2b9b20;
        case 0x2b9b24u: goto label_2b9b24;
        case 0x2b9b28u: goto label_2b9b28;
        case 0x2b9b2cu: goto label_2b9b2c;
        case 0x2b9b30u: goto label_2b9b30;
        case 0x2b9b34u: goto label_2b9b34;
        case 0x2b9b38u: goto label_2b9b38;
        case 0x2b9b3cu: goto label_2b9b3c;
        case 0x2b9b40u: goto label_2b9b40;
        case 0x2b9b44u: goto label_2b9b44;
        case 0x2b9b48u: goto label_2b9b48;
        case 0x2b9b4cu: goto label_2b9b4c;
        case 0x2b9b50u: goto label_2b9b50;
        case 0x2b9b54u: goto label_2b9b54;
        case 0x2b9b58u: goto label_2b9b58;
        case 0x2b9b5cu: goto label_2b9b5c;
        case 0x2b9b60u: goto label_2b9b60;
        case 0x2b9b64u: goto label_2b9b64;
        case 0x2b9b68u: goto label_2b9b68;
        case 0x2b9b6cu: goto label_2b9b6c;
        case 0x2b9b70u: goto label_2b9b70;
        case 0x2b9b74u: goto label_2b9b74;
        case 0x2b9b78u: goto label_2b9b78;
        case 0x2b9b7cu: goto label_2b9b7c;
        case 0x2b9b80u: goto label_2b9b80;
        case 0x2b9b84u: goto label_2b9b84;
        case 0x2b9b88u: goto label_2b9b88;
        case 0x2b9b8cu: goto label_2b9b8c;
        case 0x2b9b90u: goto label_2b9b90;
        case 0x2b9b94u: goto label_2b9b94;
        case 0x2b9b98u: goto label_2b9b98;
        case 0x2b9b9cu: goto label_2b9b9c;
        case 0x2b9ba0u: goto label_2b9ba0;
        case 0x2b9ba4u: goto label_2b9ba4;
        case 0x2b9ba8u: goto label_2b9ba8;
        case 0x2b9bacu: goto label_2b9bac;
        case 0x2b9bb0u: goto label_2b9bb0;
        case 0x2b9bb4u: goto label_2b9bb4;
        case 0x2b9bb8u: goto label_2b9bb8;
        case 0x2b9bbcu: goto label_2b9bbc;
        case 0x2b9bc0u: goto label_2b9bc0;
        case 0x2b9bc4u: goto label_2b9bc4;
        case 0x2b9bc8u: goto label_2b9bc8;
        case 0x2b9bccu: goto label_2b9bcc;
        case 0x2b9bd0u: goto label_2b9bd0;
        case 0x2b9bd4u: goto label_2b9bd4;
        case 0x2b9bd8u: goto label_2b9bd8;
        case 0x2b9bdcu: goto label_2b9bdc;
        case 0x2b9be0u: goto label_2b9be0;
        case 0x2b9be4u: goto label_2b9be4;
        case 0x2b9be8u: goto label_2b9be8;
        case 0x2b9becu: goto label_2b9bec;
        case 0x2b9bf0u: goto label_2b9bf0;
        case 0x2b9bf4u: goto label_2b9bf4;
        case 0x2b9bf8u: goto label_2b9bf8;
        case 0x2b9bfcu: goto label_2b9bfc;
        case 0x2b9c00u: goto label_2b9c00;
        case 0x2b9c04u: goto label_2b9c04;
        case 0x2b9c08u: goto label_2b9c08;
        case 0x2b9c0cu: goto label_2b9c0c;
        case 0x2b9c10u: goto label_2b9c10;
        case 0x2b9c14u: goto label_2b9c14;
        case 0x2b9c18u: goto label_2b9c18;
        case 0x2b9c1cu: goto label_2b9c1c;
        case 0x2b9c20u: goto label_2b9c20;
        case 0x2b9c24u: goto label_2b9c24;
        case 0x2b9c28u: goto label_2b9c28;
        case 0x2b9c2cu: goto label_2b9c2c;
        case 0x2b9c30u: goto label_2b9c30;
        case 0x2b9c34u: goto label_2b9c34;
        case 0x2b9c38u: goto label_2b9c38;
        case 0x2b9c3cu: goto label_2b9c3c;
        case 0x2b9c40u: goto label_2b9c40;
        case 0x2b9c44u: goto label_2b9c44;
        case 0x2b9c48u: goto label_2b9c48;
        case 0x2b9c4cu: goto label_2b9c4c;
        case 0x2b9c50u: goto label_2b9c50;
        case 0x2b9c54u: goto label_2b9c54;
        case 0x2b9c58u: goto label_2b9c58;
        case 0x2b9c5cu: goto label_2b9c5c;
        case 0x2b9c60u: goto label_2b9c60;
        case 0x2b9c64u: goto label_2b9c64;
        case 0x2b9c68u: goto label_2b9c68;
        case 0x2b9c6cu: goto label_2b9c6c;
        case 0x2b9c70u: goto label_2b9c70;
        case 0x2b9c74u: goto label_2b9c74;
        case 0x2b9c78u: goto label_2b9c78;
        case 0x2b9c7cu: goto label_2b9c7c;
        case 0x2b9c80u: goto label_2b9c80;
        case 0x2b9c84u: goto label_2b9c84;
        case 0x2b9c88u: goto label_2b9c88;
        case 0x2b9c8cu: goto label_2b9c8c;
        case 0x2b9c90u: goto label_2b9c90;
        case 0x2b9c94u: goto label_2b9c94;
        case 0x2b9c98u: goto label_2b9c98;
        case 0x2b9c9cu: goto label_2b9c9c;
        case 0x2b9ca0u: goto label_2b9ca0;
        case 0x2b9ca4u: goto label_2b9ca4;
        case 0x2b9ca8u: goto label_2b9ca8;
        case 0x2b9cacu: goto label_2b9cac;
        case 0x2b9cb0u: goto label_2b9cb0;
        case 0x2b9cb4u: goto label_2b9cb4;
        case 0x2b9cb8u: goto label_2b9cb8;
        case 0x2b9cbcu: goto label_2b9cbc;
        case 0x2b9cc0u: goto label_2b9cc0;
        case 0x2b9cc4u: goto label_2b9cc4;
        case 0x2b9cc8u: goto label_2b9cc8;
        case 0x2b9cccu: goto label_2b9ccc;
        case 0x2b9cd0u: goto label_2b9cd0;
        case 0x2b9cd4u: goto label_2b9cd4;
        case 0x2b9cd8u: goto label_2b9cd8;
        case 0x2b9cdcu: goto label_2b9cdc;
        case 0x2b9ce0u: goto label_2b9ce0;
        case 0x2b9ce4u: goto label_2b9ce4;
        case 0x2b9ce8u: goto label_2b9ce8;
        case 0x2b9cecu: goto label_2b9cec;
        case 0x2b9cf0u: goto label_2b9cf0;
        case 0x2b9cf4u: goto label_2b9cf4;
        case 0x2b9cf8u: goto label_2b9cf8;
        case 0x2b9cfcu: goto label_2b9cfc;
        case 0x2b9d00u: goto label_2b9d00;
        case 0x2b9d04u: goto label_2b9d04;
        case 0x2b9d08u: goto label_2b9d08;
        case 0x2b9d0cu: goto label_2b9d0c;
        case 0x2b9d10u: goto label_2b9d10;
        case 0x2b9d14u: goto label_2b9d14;
        case 0x2b9d18u: goto label_2b9d18;
        case 0x2b9d1cu: goto label_2b9d1c;
        case 0x2b9d20u: goto label_2b9d20;
        case 0x2b9d24u: goto label_2b9d24;
        case 0x2b9d28u: goto label_2b9d28;
        case 0x2b9d2cu: goto label_2b9d2c;
        case 0x2b9d30u: goto label_2b9d30;
        case 0x2b9d34u: goto label_2b9d34;
        case 0x2b9d38u: goto label_2b9d38;
        case 0x2b9d3cu: goto label_2b9d3c;
        case 0x2b9d40u: goto label_2b9d40;
        case 0x2b9d44u: goto label_2b9d44;
        case 0x2b9d48u: goto label_2b9d48;
        case 0x2b9d4cu: goto label_2b9d4c;
        case 0x2b9d50u: goto label_2b9d50;
        case 0x2b9d54u: goto label_2b9d54;
        default: break;
    }

    ctx->pc = 0x2b8f48u;

label_2b8f48:
    // 0x2b8f48: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2b8f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2b8f4c:
    // 0x2b8f4c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2b8f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_2b8f50:
    // 0x2b8f50: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2b8f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2b8f54:
    // 0x2b8f54: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2b8f54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b8f58:
    // 0x2b8f58: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2b8f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2b8f5c:
    // 0x2b8f5c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2b8f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2b8f60:
    // 0x2b8f60: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2b8f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2b8f64:
    // 0x2b8f64: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2b8f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2b8f68:
    // 0x2b8f68: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2b8f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2b8f6c:
    // 0x2b8f6c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b8f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2b8f70:
    // 0x2b8f70: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x2b8f70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2b8f74:
    // 0x2b8f74: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2b8f74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2b8f78:
    // 0x2b8f78: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2b8f78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2b8f7c:
    // 0x2b8f7c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2b8f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_2b8f80:
    // 0x2b8f80: 0x8ef60010  lw          $s6, 0x10($s7)
    ctx->pc = 0x2b8f80u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_2b8f84:
    // 0x2b8f84: 0x12c00367  beqz        $s6, . + 4 + (0x367 << 2)
label_2b8f88:
    if (ctx->pc == 0x2B8F88u) {
        ctx->pc = 0x2B8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F84u;
        // 0x2b8f88: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F8Cu;
        goto label_2b8f8c;
    }
    ctx->pc = 0x2B8F84u;
    {
        const bool branch_taken_0x2b8f84 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F84u;
        // 0x2b8f88: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f84) {
            ctx->pc = 0x2B9D24u;
            goto label_2b9d24;
        }
    }
    ctx->pc = 0x2B8F8Cu;
label_2b8f8c:
    // 0x2b8f8c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2b8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2b8f90:
    // 0x2b8f90: 0x30420203  andi        $v0, $v0, 0x203
    ctx->pc = 0x2b8f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)515);
label_2b8f94:
    // 0x2b8f94: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2b8f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2b8f98:
    // 0x2b8f98: 0x1440035e  bnez        $v0, . + 4 + (0x35E << 2)
label_2b8f9c:
    if (ctx->pc == 0x2B8F9Cu) {
        ctx->pc = 0x2B8F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F98u;
        // 0x2b8f9c: 0x2c430001  sltiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FA0u;
        goto label_2b8fa0;
    }
    ctx->pc = 0x2B8F98u;
    {
        const bool branch_taken_0x2b8f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F98u;
        // 0x2b8f9c: 0x2c430001  sltiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f98) {
            ctx->pc = 0x2B9D14u;
            goto label_2b9d14;
        }
    }
    ctx->pc = 0x2B8FA0u;
label_2b8fa0:
    // 0x2b8fa0: 0x92c2000c  lbu         $v0, 0xC($s6)
    ctx->pc = 0x2b8fa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 12)));
label_2b8fa4:
    // 0x2b8fa4: 0x5443035c  bnel        $v0, $v1, . + 4 + (0x35C << 2)
label_2b8fa8:
    if (ctx->pc == 0x2B8FA8u) {
        ctx->pc = 0x2B8FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FA4u;
        // 0x2b8fa8: 0x8ed60004  lw          $s6, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FACu;
        goto label_2b8fac;
    }
    ctx->pc = 0x2B8FA4u;
    {
        const bool branch_taken_0x2b8fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b8fa4) {
            ctx->pc = 0x2B8FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8FA4u;
            // 0x2b8fa8: 0x8ed60004  lw          $s6, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9D18u;
            goto label_2b9d18;
        }
    }
    ctx->pc = 0x2B8FACu;
label_2b8fac:
    // 0x2b8fac: 0x8ef50010  lw          $s5, 0x10($s7)
    ctx->pc = 0x2b8facu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_2b8fb0:
    // 0x2b8fb0: 0x52a00359  beql        $s5, $zero, . + 4 + (0x359 << 2)
label_2b8fb4:
    if (ctx->pc == 0x2B8FB4u) {
        ctx->pc = 0x2B8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FB0u;
        // 0x2b8fb4: 0x8ed60004  lw          $s6, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FB8u;
        goto label_2b8fb8;
    }
    ctx->pc = 0x2B8FB0u;
    {
        const bool branch_taken_0x2b8fb0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8fb0) {
            ctx->pc = 0x2B8FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8FB0u;
            // 0x2b8fb4: 0x8ed60004  lw          $s6, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9D18u;
            goto label_2b9d18;
        }
    }
    ctx->pc = 0x2B8FB8u;
label_2b8fb8:
    // 0x2b8fb8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2b8fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2b8fbc:
    // 0x2b8fbc: 0x0  nop
    ctx->pc = 0x2b8fbcu;
    // NOP
label_2b8fc0:
    // 0x2b8fc0: 0x30420203  andi        $v0, $v0, 0x203
    ctx->pc = 0x2b8fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)515);
label_2b8fc4:
    // 0x2b8fc4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2b8fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2b8fc8:
    // 0x2b8fc8: 0x1440034f  bnez        $v0, . + 4 + (0x34F << 2)
label_2b8fcc:
    if (ctx->pc == 0x2B8FCCu) {
        ctx->pc = 0x2B8FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FC8u;
        // 0x2b8fcc: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FD0u;
        goto label_2b8fd0;
    }
    ctx->pc = 0x2B8FC8u;
    {
        const bool branch_taken_0x2b8fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FC8u;
        // 0x2b8fcc: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8fc8) {
            ctx->pc = 0x2B9D08u;
            goto label_2b9d08;
        }
    }
    ctx->pc = 0x2B8FD0u;
label_2b8fd0:
    // 0x2b8fd0: 0x92a2000c  lbu         $v0, 0xC($s5)
    ctx->pc = 0x2b8fd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 12)));
label_2b8fd4:
    // 0x2b8fd4: 0x5440034d  bnel        $v0, $zero, . + 4 + (0x34D << 2)
label_2b8fd8:
    if (ctx->pc == 0x2B8FD8u) {
        ctx->pc = 0x2B8FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FD4u;
        // 0x2b8fd8: 0x8eb50004  lw          $s5, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FDCu;
        goto label_2b8fdc;
    }
    ctx->pc = 0x2B8FD4u;
    {
        const bool branch_taken_0x2b8fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8fd4) {
            ctx->pc = 0x2B8FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8FD4u;
            // 0x2b8fd8: 0x8eb50004  lw          $s5, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9D0Cu;
            goto label_2b9d0c;
        }
    }
    ctx->pc = 0x2B8FDCu;
label_2b8fdc:
    // 0x2b8fdc: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x2b8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_2b8fe0:
    // 0x2b8fe0: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x2b8fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_2b8fe4:
    // 0x2b8fe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b8fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2b8fe8:
    // 0x2b8fe8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2b8fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_2b8fec:
    // 0x2b8fec: 0x912004  sllv        $a0, $s1, $a0
    ctx->pc = 0x2b8fecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 4) & 0x1F));
label_2b8ff0:
    // 0x2b8ff0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2b8ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2b8ff4:
    // 0x2b8ff4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b8ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2b8ff8:
    // 0x2b8ff8: 0x50600344  beql        $v1, $zero, . + 4 + (0x344 << 2)
label_2b8ffc:
    if (ctx->pc == 0x2B8FFCu) {
        ctx->pc = 0x2B8FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FF8u;
        // 0x2b8ffc: 0x8eb50004  lw          $s5, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9000u;
        goto label_2b9000;
    }
    ctx->pc = 0x2B8FF8u;
    {
        const bool branch_taken_0x2b8ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8ff8) {
            ctx->pc = 0x2B8FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8FF8u;
            // 0x2b8ffc: 0x8eb50004  lw          $s5, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9D0Cu;
            goto label_2b9d0c;
        }
    }
    ctx->pc = 0x2B9000u;
label_2b9000:
    // 0x2b9000: 0x8ec40034  lw          $a0, 0x34($s6)
    ctx->pc = 0x2b9000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
label_2b9004:
    // 0x2b9004: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x2b9004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
label_2b9008:
    // 0x2b9008: 0x84650040  lh          $a1, 0x40($v1)
    ctx->pc = 0x2b9008u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2b900c:
    // 0x2b900c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2b900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2b9010:
    // 0x2b9010: 0x40f809  jalr        $v0
label_2b9014:
    if (ctx->pc == 0x2B9014u) {
        ctx->pc = 0x2B9014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9010u;
        // 0x2b9014: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9018u;
        goto label_2b9018;
    }
    ctx->pc = 0x2B9010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B9018u);
        ctx->pc = 0x2B9014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9010u;
        // 0x2b9014: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9010u, 0x2B9018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9018u;
label_2b9018:
    // 0x2b9018: 0x8ea50034  lw          $a1, 0x34($s5)
    ctx->pc = 0x2b9018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_2b901c:
    // 0x2b901c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b901cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9020:
    // 0x2b9020: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x2b9020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
label_2b9024:
    // 0x2b9024: 0x8ca30100  lw          $v1, 0x100($a1)
    ctx->pc = 0x2b9024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
label_2b9028:
    // 0x2b9028: 0xc45400e4  lwc1        $f20, 0xE4($v0)
    ctx->pc = 0x2b9028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b902c:
    // 0x2b902c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x2b902cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2b9030:
    // 0x2b9030: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2b9030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2b9034:
    // 0x2b9034: 0x40f809  jalr        $v0
label_2b9038:
    if (ctx->pc == 0x2B9038u) {
        ctx->pc = 0x2B9038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9034u;
        // 0x2b9038: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B903Cu;
        goto label_2b903c;
    }
    ctx->pc = 0x2B9034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B903Cu);
        ctx->pc = 0x2B9038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9034u;
        // 0x2b9038: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9034u, 0x2B903Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B903Cu;
label_2b903c:
    // 0x2b903c: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x2b903cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_2b9040:
    // 0x2b9040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9044:
    // 0x2b9044: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b9044u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b9048:
    // 0x2b9048: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b9048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b904c:
    // 0x2b904c: 0xc0aecfc  jal         func_2BB3F0
label_2b9050:
    if (ctx->pc == 0x2B9050u) {
        ctx->pc = 0x2B9050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B904Cu;
        // 0x2b9050: 0xc46d00e4  lwc1        $f13, 0xE4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9054u;
        goto label_2b9054;
    }
    ctx->pc = 0x2B904Cu;
    SET_GPR_U32(ctx, 31, 0x2B9054u);
    ctx->pc = 0x2B9050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B904Cu;
    // 0x2b9050: 0xc46d00e4  lwc1        $f13, 0xE4($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB3F0u, 0x2B904Cu, 0x2B9054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9054u;
label_2b9054:
    // 0x2b9054: 0x5451032d  bnel        $v0, $s1, . + 4 + (0x32D << 2)
label_2b9058:
    if (ctx->pc == 0x2B9058u) {
        ctx->pc = 0x2B9058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9054u;
        // 0x2b9058: 0x8eb50004  lw          $s5, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B905Cu;
        goto label_2b905c;
    }
    ctx->pc = 0x2B9054u;
    {
        const bool branch_taken_0x2b9054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2b9054) {
            ctx->pc = 0x2B9058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9054u;
            // 0x2b9058: 0x8eb50004  lw          $s5, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9D0Cu;
            goto label_2b9d0c;
        }
    }
    ctx->pc = 0x2B905Cu;
label_2b905c:
    // 0x2b905c: 0x8ec30034  lw          $v1, 0x34($s6)
    ctx->pc = 0x2b905cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
label_2b9060:
    // 0x2b9060: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b9060u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9064:
    // 0x2b9064: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b9064u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9068:
    // 0x2b9068: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2b9068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b906c:
    // 0x2b906c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2b906cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b9070:
    // 0x2b9070: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2b9070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2b9074:
    // 0x2b9074: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
label_2b9078:
    if (ctx->pc == 0x2B9078u) {
        ctx->pc = 0x2B9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9074u;
        // 0x2b9078: 0x8ea50034  lw          $a1, 0x34($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B907Cu;
        goto label_2b907c;
    }
    ctx->pc = 0x2B9074u;
    {
        const bool branch_taken_0x2b9074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9074u;
        // 0x2b9078: 0x8ea50034  lw          $a1, 0x34($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9074) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B907Cu;
label_2b907c:
    // 0x2b907c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2b907cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_2b9080:
    // 0x2b9080: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b9080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2b9084:
    // 0x2b9084: 0x2442b900  addiu       $v0, $v0, -0x4700
    ctx->pc = 0x2b9084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949120));
label_2b9088:
    // 0x2b9088: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b9088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b908c:
    // 0x2b908c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b908cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b9090:
    // 0x2b9090: 0x800008  jr          $a0
label_2b9094:
    if (ctx->pc == 0x2B9094u) {
        ctx->pc = 0x2B9098u;
        goto label_2b9098;
    }
    ctx->pc = 0x2B9090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B9098u: goto label_2b9098;
            case 0x2B9100u: goto label_2b9100;
            case 0x2B916Cu: goto label_2b916c;
            case 0x2B91DCu: goto label_2b91dc;
            case 0x2B9250u: goto label_2b9250;
            case 0x2B92C8u: goto label_2b92c8;
            case 0x2B9334u: goto label_2b9334;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9090u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B9098u;
label_2b9098:
    // 0x2b9098: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x2b9098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_2b909c:
    // 0x2b909c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b909cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b90a0:
    // 0x2b90a0: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x2b90a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2b90a4:
    // 0x2b90a4: 0x106000bf  beqz        $v1, . + 4 + (0xBF << 2)
label_2b90a8:
    if (ctx->pc == 0x2B90A8u) {
        ctx->pc = 0x2B90A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90A4u;
        // 0x2b90a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B90ACu;
        goto label_2b90ac;
    }
    ctx->pc = 0x2B90A4u;
    {
        const bool branch_taken_0x2b90a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B90A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90A4u;
        // 0x2b90a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b90a4) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B90ACu;
label_2b90ac:
    // 0x2b90ac: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2b90acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_2b90b0:
    // 0x2b90b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b90b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2b90b4:
    // 0x2b90b4: 0x2442b920  addiu       $v0, $v0, -0x46E0
    ctx->pc = 0x2b90b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949152));
label_2b90b8:
    // 0x2b90b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b90b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b90bc:
    // 0x2b90bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b90bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b90c0:
    // 0x2b90c0: 0x800008  jr          $a0
label_2b90c4:
    if (ctx->pc == 0x2B90C4u) {
        ctx->pc = 0x2B90C8u;
        goto label_2b90c8;
    }
    ctx->pc = 0x2B90C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B90C8u: goto label_2b90c8;
            case 0x2B90D0u: goto label_2b90d0;
            case 0x2B90D8u: goto label_2b90d8;
            case 0x2B90E0u: goto label_2b90e0;
            case 0x2B90E8u: goto label_2b90e8;
            case 0x2B90F0u: goto label_2b90f0;
            case 0x2B90F8u: goto label_2b90f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B90C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B90C8u;
label_2b90c8:
    // 0x2b90c8: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_2b90cc:
    if (ctx->pc == 0x2B90CCu) {
        ctx->pc = 0x2B90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90C8u;
        // 0x2b90cc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B90D0u;
        goto label_2b90d0;
    }
    ctx->pc = 0x2B90C8u;
    {
        const bool branch_taken_0x2b90c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90C8u;
        // 0x2b90cc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b90c8) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B90D0u;
label_2b90d0:
    // 0x2b90d0: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_2b90d4:
    if (ctx->pc == 0x2B90D4u) {
        ctx->pc = 0x2B90D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90D0u;
        // 0x2b90d4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B90D8u;
        goto label_2b90d8;
    }
    ctx->pc = 0x2B90D0u;
    {
        const bool branch_taken_0x2b90d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B90D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90D0u;
        // 0x2b90d4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b90d0) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B90D8u;
label_2b90d8:
    // 0x2b90d8: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_2b90dc:
    if (ctx->pc == 0x2B90DCu) {
        ctx->pc = 0x2B90DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90D8u;
        // 0x2b90dc: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B90E0u;
        goto label_2b90e0;
    }
    ctx->pc = 0x2B90D8u;
    {
        const bool branch_taken_0x2b90d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B90DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90D8u;
        // 0x2b90dc: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b90d8) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B90E0u;
label_2b90e0:
    // 0x2b90e0: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_2b90e4:
    if (ctx->pc == 0x2B90E4u) {
        ctx->pc = 0x2B90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90E0u;
        // 0x2b90e4: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B90E8u;
        goto label_2b90e8;
    }
    ctx->pc = 0x2B90E0u;
    {
        const bool branch_taken_0x2b90e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90E0u;
        // 0x2b90e4: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b90e0) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B90E8u;
label_2b90e8:
    // 0x2b90e8: 0x100000ae  b           . + 4 + (0xAE << 2)
label_2b90ec:
    if (ctx->pc == 0x2B90ECu) {
        ctx->pc = 0x2B90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90E8u;
        // 0x2b90ec: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B90F0u;
        goto label_2b90f0;
    }
    ctx->pc = 0x2B90E8u;
    {
        const bool branch_taken_0x2b90e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90E8u;
        // 0x2b90ec: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b90e8) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B90F0u;
label_2b90f0:
    // 0x2b90f0: 0x100000ac  b           . + 4 + (0xAC << 2)
label_2b90f4:
    if (ctx->pc == 0x2B90F4u) {
        ctx->pc = 0x2B90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90F0u;
        // 0x2b90f4: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B90F8u;
        goto label_2b90f8;
    }
    ctx->pc = 0x2B90F0u;
    {
        const bool branch_taken_0x2b90f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90F0u;
        // 0x2b90f4: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b90f0) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B90F8u;
label_2b90f8:
    // 0x2b90f8: 0x100000aa  b           . + 4 + (0xAA << 2)
label_2b90fc:
    if (ctx->pc == 0x2B90FCu) {
        ctx->pc = 0x2B90FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90F8u;
        // 0x2b90fc: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9100u;
        goto label_2b9100;
    }
    ctx->pc = 0x2B90F8u;
    {
        const bool branch_taken_0x2b90f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B90FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90F8u;
        // 0x2b90fc: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b90f8) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9100u;
label_2b9100:
    // 0x2b9100: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x2b9100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_2b9104:
    // 0x2b9104: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b9104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9108:
    // 0x2b9108: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x2b9108u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2b910c:
    // 0x2b910c: 0x106000a5  beqz        $v1, . + 4 + (0xA5 << 2)
label_2b9110:
    if (ctx->pc == 0x2B9110u) {
        ctx->pc = 0x2B9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B910Cu;
        // 0x2b9110: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9114u;
        goto label_2b9114;
    }
    ctx->pc = 0x2B910Cu;
    {
        const bool branch_taken_0x2b910c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B910Cu;
        // 0x2b9110: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b910c) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9114u;
label_2b9114:
    // 0x2b9114: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2b9114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_2b9118:
    // 0x2b9118: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b9118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2b911c:
    // 0x2b911c: 0x2442b940  addiu       $v0, $v0, -0x46C0
    ctx->pc = 0x2b911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949184));
label_2b9120:
    // 0x2b9120: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b9120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b9124:
    // 0x2b9124: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b9124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b9128:
    // 0x2b9128: 0x800008  jr          $a0
label_2b912c:
    if (ctx->pc == 0x2B912Cu) {
        ctx->pc = 0x2B9130u;
        goto label_2b9130;
    }
    ctx->pc = 0x2B9128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B9130u: goto label_2b9130;
            case 0x2B913Cu: goto label_2b913c;
            case 0x2B9144u: goto label_2b9144;
            case 0x2B914Cu: goto label_2b914c;
            case 0x2B9154u: goto label_2b9154;
            case 0x2B915Cu: goto label_2b915c;
            case 0x2B9164u: goto label_2b9164;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9128u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B9130u;
label_2b9130:
    // 0x2b9130: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2b9130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b9134:
    // 0x2b9134: 0x1000009b  b           . + 4 + (0x9B << 2)
label_2b9138:
    if (ctx->pc == 0x2B9138u) {
        ctx->pc = 0x2B9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9134u;
        // 0x2b9138: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B913Cu;
        goto label_2b913c;
    }
    ctx->pc = 0x2B9134u;
    {
        const bool branch_taken_0x2b9134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9134u;
        // 0x2b9138: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9134) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B913Cu;
label_2b913c:
    // 0x2b913c: 0x10000099  b           . + 4 + (0x99 << 2)
label_2b9140:
    if (ctx->pc == 0x2B9140u) {
        ctx->pc = 0x2B9140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B913Cu;
        // 0x2b9140: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9144u;
        goto label_2b9144;
    }
    ctx->pc = 0x2B913Cu;
    {
        const bool branch_taken_0x2b913c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B913Cu;
        // 0x2b9140: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b913c) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9144u;
label_2b9144:
    // 0x2b9144: 0x10000097  b           . + 4 + (0x97 << 2)
label_2b9148:
    if (ctx->pc == 0x2B9148u) {
        ctx->pc = 0x2B9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9144u;
        // 0x2b9148: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B914Cu;
        goto label_2b914c;
    }
    ctx->pc = 0x2B9144u;
    {
        const bool branch_taken_0x2b9144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9144u;
        // 0x2b9148: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9144) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B914Cu;
label_2b914c:
    // 0x2b914c: 0x10000095  b           . + 4 + (0x95 << 2)
label_2b9150:
    if (ctx->pc == 0x2B9150u) {
        ctx->pc = 0x2B9150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B914Cu;
        // 0x2b9150: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9154u;
        goto label_2b9154;
    }
    ctx->pc = 0x2B914Cu;
    {
        const bool branch_taken_0x2b914c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B914Cu;
        // 0x2b9150: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b914c) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9154u;
label_2b9154:
    // 0x2b9154: 0x10000093  b           . + 4 + (0x93 << 2)
label_2b9158:
    if (ctx->pc == 0x2B9158u) {
        ctx->pc = 0x2B9158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9154u;
        // 0x2b9158: 0x2408000b  addiu       $t0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B915Cu;
        goto label_2b915c;
    }
    ctx->pc = 0x2B9154u;
    {
        const bool branch_taken_0x2b9154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9154u;
        // 0x2b9158: 0x2408000b  addiu       $t0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9154) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B915Cu;
label_2b915c:
    // 0x2b915c: 0x10000091  b           . + 4 + (0x91 << 2)
label_2b9160:
    if (ctx->pc == 0x2B9160u) {
        ctx->pc = 0x2B9160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B915Cu;
        // 0x2b9160: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9164u;
        goto label_2b9164;
    }
    ctx->pc = 0x2B915Cu;
    {
        const bool branch_taken_0x2b915c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B915Cu;
        // 0x2b9160: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b915c) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9164u;
label_2b9164:
    // 0x2b9164: 0x1000008f  b           . + 4 + (0x8F << 2)
label_2b9168:
    if (ctx->pc == 0x2B9168u) {
        ctx->pc = 0x2B9168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9164u;
        // 0x2b9168: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B916Cu;
        goto label_2b916c;
    }
    ctx->pc = 0x2B9164u;
    {
        const bool branch_taken_0x2b9164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9164u;
        // 0x2b9168: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9164) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B916Cu;
label_2b916c:
    // 0x2b916c: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x2b916cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_2b9170:
    // 0x2b9170: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b9170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9174:
    // 0x2b9174: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x2b9174u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2b9178:
    // 0x2b9178: 0x1060008a  beqz        $v1, . + 4 + (0x8A << 2)
label_2b917c:
    if (ctx->pc == 0x2B917Cu) {
        ctx->pc = 0x2B917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9178u;
        // 0x2b917c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9180u;
        goto label_2b9180;
    }
    ctx->pc = 0x2B9178u;
    {
        const bool branch_taken_0x2b9178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9178u;
        // 0x2b917c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9178) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9180u;
label_2b9180:
    // 0x2b9180: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2b9180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_2b9184:
    // 0x2b9184: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b9184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2b9188:
    // 0x2b9188: 0x2442b960  addiu       $v0, $v0, -0x46A0
    ctx->pc = 0x2b9188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949216));
label_2b918c:
    // 0x2b918c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b918cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b9190:
    // 0x2b9190: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b9190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b9194:
    // 0x2b9194: 0x800008  jr          $a0
label_2b9198:
    if (ctx->pc == 0x2B9198u) {
        ctx->pc = 0x2B919Cu;
        goto label_2b919c;
    }
    ctx->pc = 0x2B9194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B919Cu: goto label_2b919c;
            case 0x2B91A8u: goto label_2b91a8;
            case 0x2B91B4u: goto label_2b91b4;
            case 0x2B91BCu: goto label_2b91bc;
            case 0x2B91C4u: goto label_2b91c4;
            case 0x2B91CCu: goto label_2b91cc;
            case 0x2B91D4u: goto label_2b91d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9194u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B919Cu;
label_2b919c:
    // 0x2b919c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2b919cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b91a0:
    // 0x2b91a0: 0x10000080  b           . + 4 + (0x80 << 2)
label_2b91a4:
    if (ctx->pc == 0x2B91A4u) {
        ctx->pc = 0x2B91A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91A0u;
        // 0x2b91a4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B91A8u;
        goto label_2b91a8;
    }
    ctx->pc = 0x2B91A0u;
    {
        const bool branch_taken_0x2b91a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B91A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91A0u;
        // 0x2b91a4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91a0) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B91A8u;
label_2b91a8:
    // 0x2b91a8: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x2b91a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2b91ac:
    // 0x2b91ac: 0x1000007d  b           . + 4 + (0x7D << 2)
label_2b91b0:
    if (ctx->pc == 0x2B91B0u) {
        ctx->pc = 0x2B91B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91ACu;
        // 0x2b91b0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B91B4u;
        goto label_2b91b4;
    }
    ctx->pc = 0x2B91ACu;
    {
        const bool branch_taken_0x2b91ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B91B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91ACu;
        // 0x2b91b0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91ac) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B91B4u;
label_2b91b4:
    // 0x2b91b4: 0x1000007b  b           . + 4 + (0x7B << 2)
label_2b91b8:
    if (ctx->pc == 0x2B91B8u) {
        ctx->pc = 0x2B91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91B4u;
        // 0x2b91b8: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B91BCu;
        goto label_2b91bc;
    }
    ctx->pc = 0x2B91B4u;
    {
        const bool branch_taken_0x2b91b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91B4u;
        // 0x2b91b8: 0x2408000e  addiu       $t0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91b4) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B91BCu;
label_2b91bc:
    // 0x2b91bc: 0x10000079  b           . + 4 + (0x79 << 2)
label_2b91c0:
    if (ctx->pc == 0x2B91C0u) {
        ctx->pc = 0x2B91C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91BCu;
        // 0x2b91c0: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B91C4u;
        goto label_2b91c4;
    }
    ctx->pc = 0x2B91BCu;
    {
        const bool branch_taken_0x2b91bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B91C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91BCu;
        // 0x2b91c0: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91bc) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B91C4u;
label_2b91c4:
    // 0x2b91c4: 0x10000077  b           . + 4 + (0x77 << 2)
label_2b91c8:
    if (ctx->pc == 0x2B91C8u) {
        ctx->pc = 0x2B91C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91C4u;
        // 0x2b91c8: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B91CCu;
        goto label_2b91cc;
    }
    ctx->pc = 0x2B91C4u;
    {
        const bool branch_taken_0x2b91c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B91C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91C4u;
        // 0x2b91c8: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91c4) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B91CCu;
label_2b91cc:
    // 0x2b91cc: 0x10000075  b           . + 4 + (0x75 << 2)
label_2b91d0:
    if (ctx->pc == 0x2B91D0u) {
        ctx->pc = 0x2B91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91CCu;
        // 0x2b91d0: 0x24080011  addiu       $t0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B91D4u;
        goto label_2b91d4;
    }
    ctx->pc = 0x2B91CCu;
    {
        const bool branch_taken_0x2b91cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91CCu;
        // 0x2b91d0: 0x24080011  addiu       $t0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91cc) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B91D4u;
label_2b91d4:
    // 0x2b91d4: 0x10000073  b           . + 4 + (0x73 << 2)
label_2b91d8:
    if (ctx->pc == 0x2B91D8u) {
        ctx->pc = 0x2B91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91D4u;
        // 0x2b91d8: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B91DCu;
        goto label_2b91dc;
    }
    ctx->pc = 0x2B91D4u;
    {
        const bool branch_taken_0x2b91d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91D4u;
        // 0x2b91d8: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91d4) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B91DCu;
label_2b91dc:
    // 0x2b91dc: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x2b91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_2b91e0:
    // 0x2b91e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b91e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b91e4:
    // 0x2b91e4: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x2b91e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2b91e8:
    // 0x2b91e8: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
label_2b91ec:
    if (ctx->pc == 0x2B91ECu) {
        ctx->pc = 0x2B91ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91E8u;
        // 0x2b91ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B91F0u;
        goto label_2b91f0;
    }
    ctx->pc = 0x2B91E8u;
    {
        const bool branch_taken_0x2b91e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B91ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91E8u;
        // 0x2b91ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91e8) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B91F0u;
label_2b91f0:
    // 0x2b91f0: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2b91f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_2b91f4:
    // 0x2b91f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b91f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2b91f8:
    // 0x2b91f8: 0x2442b980  addiu       $v0, $v0, -0x4680
    ctx->pc = 0x2b91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949248));
label_2b91fc:
    // 0x2b91fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b91fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b9200:
    // 0x2b9200: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b9200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b9204:
    // 0x2b9204: 0x800008  jr          $a0
label_2b9208:
    if (ctx->pc == 0x2B9208u) {
        ctx->pc = 0x2B920Cu;
        goto label_2b920c;
    }
    ctx->pc = 0x2B9204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B920Cu: goto label_2b920c;
            case 0x2B9218u: goto label_2b9218;
            case 0x2B9224u: goto label_2b9224;
            case 0x2B9230u: goto label_2b9230;
            case 0x2B9238u: goto label_2b9238;
            case 0x2B9240u: goto label_2b9240;
            case 0x2B9248u: goto label_2b9248;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9204u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B920Cu;
label_2b920c:
    // 0x2b920c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2b920cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b9210:
    // 0x2b9210: 0x10000064  b           . + 4 + (0x64 << 2)
label_2b9214:
    if (ctx->pc == 0x2B9214u) {
        ctx->pc = 0x2B9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9210u;
        // 0x2b9214: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9218u;
        goto label_2b9218;
    }
    ctx->pc = 0x2B9210u;
    {
        const bool branch_taken_0x2b9210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9210u;
        // 0x2b9214: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9210) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9218u;
label_2b9218:
    // 0x2b9218: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2b9218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b921c:
    // 0x2b921c: 0x10000061  b           . + 4 + (0x61 << 2)
label_2b9220:
    if (ctx->pc == 0x2B9220u) {
        ctx->pc = 0x2B9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B921Cu;
        // 0x2b9220: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9224u;
        goto label_2b9224;
    }
    ctx->pc = 0x2B921Cu;
    {
        const bool branch_taken_0x2b921c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B921Cu;
        // 0x2b9220: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b921c) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9224u;
label_2b9224:
    // 0x2b9224: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x2b9224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2b9228:
    // 0x2b9228: 0x1000005e  b           . + 4 + (0x5E << 2)
label_2b922c:
    if (ctx->pc == 0x2B922Cu) {
        ctx->pc = 0x2B922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9228u;
        // 0x2b922c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9230u;
        goto label_2b9230;
    }
    ctx->pc = 0x2B9228u;
    {
        const bool branch_taken_0x2b9228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9228u;
        // 0x2b922c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9228) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9230u;
label_2b9230:
    // 0x2b9230: 0x1000005c  b           . + 4 + (0x5C << 2)
label_2b9234:
    if (ctx->pc == 0x2B9234u) {
        ctx->pc = 0x2B9234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9230u;
        // 0x2b9234: 0x24080013  addiu       $t0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9238u;
        goto label_2b9238;
    }
    ctx->pc = 0x2B9230u;
    {
        const bool branch_taken_0x2b9230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9230u;
        // 0x2b9234: 0x24080013  addiu       $t0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9230) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9238u;
label_2b9238:
    // 0x2b9238: 0x1000005a  b           . + 4 + (0x5A << 2)
label_2b923c:
    if (ctx->pc == 0x2B923Cu) {
        ctx->pc = 0x2B923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9238u;
        // 0x2b923c: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9240u;
        goto label_2b9240;
    }
    ctx->pc = 0x2B9238u;
    {
        const bool branch_taken_0x2b9238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9238u;
        // 0x2b923c: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9238) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9240u;
label_2b9240:
    // 0x2b9240: 0x10000058  b           . + 4 + (0x58 << 2)
label_2b9244:
    if (ctx->pc == 0x2B9244u) {
        ctx->pc = 0x2B9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9240u;
        // 0x2b9244: 0x24080015  addiu       $t0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9248u;
        goto label_2b9248;
    }
    ctx->pc = 0x2B9240u;
    {
        const bool branch_taken_0x2b9240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9240u;
        // 0x2b9244: 0x24080015  addiu       $t0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9240) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9248u;
label_2b9248:
    // 0x2b9248: 0x10000056  b           . + 4 + (0x56 << 2)
label_2b924c:
    if (ctx->pc == 0x2B924Cu) {
        ctx->pc = 0x2B924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9248u;
        // 0x2b924c: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9250u;
        goto label_2b9250;
    }
    ctx->pc = 0x2B9248u;
    {
        const bool branch_taken_0x2b9248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9248u;
        // 0x2b924c: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9248) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9250u;
label_2b9250:
    // 0x2b9250: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x2b9250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_2b9254:
    // 0x2b9254: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b9254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9258:
    // 0x2b9258: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x2b9258u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2b925c:
    // 0x2b925c: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
label_2b9260:
    if (ctx->pc == 0x2B9260u) {
        ctx->pc = 0x2B9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B925Cu;
        // 0x2b9260: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9264u;
        goto label_2b9264;
    }
    ctx->pc = 0x2B925Cu;
    {
        const bool branch_taken_0x2b925c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B925Cu;
        // 0x2b9260: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b925c) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9264u;
label_2b9264:
    // 0x2b9264: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2b9264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_2b9268:
    // 0x2b9268: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b9268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2b926c:
    // 0x2b926c: 0x2442b9a0  addiu       $v0, $v0, -0x4660
    ctx->pc = 0x2b926cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949280));
label_2b9270:
    // 0x2b9270: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b9270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b9274:
    // 0x2b9274: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b9274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b9278:
    // 0x2b9278: 0x800008  jr          $a0
label_2b927c:
    if (ctx->pc == 0x2B927Cu) {
        ctx->pc = 0x2B9280u;
        goto label_2b9280;
    }
    ctx->pc = 0x2B9278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B9280u: goto label_2b9280;
            case 0x2B928Cu: goto label_2b928c;
            case 0x2B9298u: goto label_2b9298;
            case 0x2B92A4u: goto label_2b92a4;
            case 0x2B92B0u: goto label_2b92b0;
            case 0x2B92B8u: goto label_2b92b8;
            case 0x2B92C0u: goto label_2b92c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9278u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B9280u;
label_2b9280:
    // 0x2b9280: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x2b9280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b9284:
    // 0x2b9284: 0x10000047  b           . + 4 + (0x47 << 2)
label_2b9288:
    if (ctx->pc == 0x2B9288u) {
        ctx->pc = 0x2B9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9284u;
        // 0x2b9288: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B928Cu;
        goto label_2b928c;
    }
    ctx->pc = 0x2B9284u;
    {
        const bool branch_taken_0x2b9284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9284u;
        // 0x2b9288: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9284) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B928Cu;
label_2b928c:
    // 0x2b928c: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x2b928cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2b9290:
    // 0x2b9290: 0x10000044  b           . + 4 + (0x44 << 2)
label_2b9294:
    if (ctx->pc == 0x2B9294u) {
        ctx->pc = 0x2B9294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9290u;
        // 0x2b9294: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9298u;
        goto label_2b9298;
    }
    ctx->pc = 0x2B9290u;
    {
        const bool branch_taken_0x2b9290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9290u;
        // 0x2b9294: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9290) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9298u;
label_2b9298:
    // 0x2b9298: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x2b9298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2b929c:
    // 0x2b929c: 0x10000041  b           . + 4 + (0x41 << 2)
label_2b92a0:
    if (ctx->pc == 0x2B92A0u) {
        ctx->pc = 0x2B92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B929Cu;
        // 0x2b92a0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92A4u;
        goto label_2b92a4;
    }
    ctx->pc = 0x2B929Cu;
    {
        const bool branch_taken_0x2b929c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B929Cu;
        // 0x2b92a0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b929c) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B92A4u;
label_2b92a4:
    // 0x2b92a4: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2b92a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b92a8:
    // 0x2b92a8: 0x1000003e  b           . + 4 + (0x3E << 2)
label_2b92ac:
    if (ctx->pc == 0x2B92ACu) {
        ctx->pc = 0x2B92ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92A8u;
        // 0x2b92ac: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92B0u;
        goto label_2b92b0;
    }
    ctx->pc = 0x2B92A8u;
    {
        const bool branch_taken_0x2b92a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B92ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92A8u;
        // 0x2b92ac: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92a8) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B92B0u;
label_2b92b0:
    // 0x2b92b0: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2b92b4:
    if (ctx->pc == 0x2B92B4u) {
        ctx->pc = 0x2B92B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92B0u;
        // 0x2b92b4: 0x24080017  addiu       $t0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92B8u;
        goto label_2b92b8;
    }
    ctx->pc = 0x2B92B0u;
    {
        const bool branch_taken_0x2b92b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B92B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92B0u;
        // 0x2b92b4: 0x24080017  addiu       $t0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92b0) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B92B8u;
label_2b92b8:
    // 0x2b92b8: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2b92bc:
    if (ctx->pc == 0x2B92BCu) {
        ctx->pc = 0x2B92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92B8u;
        // 0x2b92bc: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92C0u;
        goto label_2b92c0;
    }
    ctx->pc = 0x2B92B8u;
    {
        const bool branch_taken_0x2b92b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92B8u;
        // 0x2b92bc: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92b8) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B92C0u;
label_2b92c0:
    // 0x2b92c0: 0x10000038  b           . + 4 + (0x38 << 2)
label_2b92c4:
    if (ctx->pc == 0x2B92C4u) {
        ctx->pc = 0x2B92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92C0u;
        // 0x2b92c4: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92C8u;
        goto label_2b92c8;
    }
    ctx->pc = 0x2B92C0u;
    {
        const bool branch_taken_0x2b92c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92C0u;
        // 0x2b92c4: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92c0) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B92C8u;
label_2b92c8:
    // 0x2b92c8: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x2b92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_2b92cc:
    // 0x2b92cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b92ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b92d0:
    // 0x2b92d0: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x2b92d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2b92d4:
    // 0x2b92d4: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_2b92d8:
    if (ctx->pc == 0x2B92D8u) {
        ctx->pc = 0x2B92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92D4u;
        // 0x2b92d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92DCu;
        goto label_2b92dc;
    }
    ctx->pc = 0x2B92D4u;
    {
        const bool branch_taken_0x2b92d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92D4u;
        // 0x2b92d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92d4) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B92DCu;
label_2b92dc:
    // 0x2b92dc: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2b92dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_2b92e0:
    // 0x2b92e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b92e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2b92e4:
    // 0x2b92e4: 0x2442b9c0  addiu       $v0, $v0, -0x4640
    ctx->pc = 0x2b92e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949312));
label_2b92e8:
    // 0x2b92e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b92e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b92ec:
    // 0x2b92ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b92ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b92f0:
    // 0x2b92f0: 0x800008  jr          $a0
label_2b92f4:
    if (ctx->pc == 0x2B92F4u) {
        ctx->pc = 0x2B92F8u;
        goto label_2b92f8;
    }
    ctx->pc = 0x2B92F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B92F8u: goto label_2b92f8;
            case 0x2B9304u: goto label_2b9304;
            case 0x2B9310u: goto label_2b9310;
            case 0x2B931Cu: goto label_2b931c;
            case 0x2B9328u: goto label_2b9328;
            case 0x2B93A0u: goto label_2b93a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B92F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B92F8u;
label_2b92f8:
    // 0x2b92f8: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x2b92f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2b92fc:
    // 0x2b92fc: 0x10000029  b           . + 4 + (0x29 << 2)
label_2b9300:
    if (ctx->pc == 0x2B9300u) {
        ctx->pc = 0x2B9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92FCu;
        // 0x2b9300: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9304u;
        goto label_2b9304;
    }
    ctx->pc = 0x2B92FCu;
    {
        const bool branch_taken_0x2b92fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92FCu;
        // 0x2b9300: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92fc) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9304u;
label_2b9304:
    // 0x2b9304: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x2b9304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2b9308:
    // 0x2b9308: 0x10000026  b           . + 4 + (0x26 << 2)
label_2b930c:
    if (ctx->pc == 0x2B930Cu) {
        ctx->pc = 0x2B930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9308u;
        // 0x2b930c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9310u;
        goto label_2b9310;
    }
    ctx->pc = 0x2B9308u;
    {
        const bool branch_taken_0x2b9308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9308u;
        // 0x2b930c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9308) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9310u;
label_2b9310:
    // 0x2b9310: 0x24080011  addiu       $t0, $zero, 0x11
    ctx->pc = 0x2b9310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2b9314:
    // 0x2b9314: 0x10000023  b           . + 4 + (0x23 << 2)
label_2b9318:
    if (ctx->pc == 0x2B9318u) {
        ctx->pc = 0x2B9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9314u;
        // 0x2b9318: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B931Cu;
        goto label_2b931c;
    }
    ctx->pc = 0x2B9314u;
    {
        const bool branch_taken_0x2b9314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9314u;
        // 0x2b9318: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9314) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B931Cu;
label_2b931c:
    // 0x2b931c: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x2b931cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2b9320:
    // 0x2b9320: 0x10000020  b           . + 4 + (0x20 << 2)
label_2b9324:
    if (ctx->pc == 0x2B9324u) {
        ctx->pc = 0x2B9324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9320u;
        // 0x2b9324: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9328u;
        goto label_2b9328;
    }
    ctx->pc = 0x2B9320u;
    {
        const bool branch_taken_0x2b9320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9320u;
        // 0x2b9324: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9320) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9328u;
label_2b9328:
    // 0x2b9328: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x2b9328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2b932c:
    // 0x2b932c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2b9330:
    if (ctx->pc == 0x2B9330u) {
        ctx->pc = 0x2B9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B932Cu;
        // 0x2b9330: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9334u;
        goto label_2b9334;
    }
    ctx->pc = 0x2B932Cu;
    {
        const bool branch_taken_0x2b932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B932Cu;
        // 0x2b9330: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b932c) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9334u;
label_2b9334:
    // 0x2b9334: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x2b9334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_2b9338:
    // 0x2b9338: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b9338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b933c:
    // 0x2b933c: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x2b933cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2b9340:
    // 0x2b9340: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_2b9344:
    if (ctx->pc == 0x2B9344u) {
        ctx->pc = 0x2B9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9340u;
        // 0x2b9344: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9348u;
        goto label_2b9348;
    }
    ctx->pc = 0x2B9340u;
    {
        const bool branch_taken_0x2b9340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9340u;
        // 0x2b9344: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9340) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9348u;
label_2b9348:
    // 0x2b9348: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2b9348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_2b934c:
    // 0x2b934c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b934cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2b9350:
    // 0x2b9350: 0x2442b9e0  addiu       $v0, $v0, -0x4620
    ctx->pc = 0x2b9350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949344));
label_2b9354:
    // 0x2b9354: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b9354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b9358:
    // 0x2b9358: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b9358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b935c:
    // 0x2b935c: 0x800008  jr          $a0
label_2b9360:
    if (ctx->pc == 0x2B9360u) {
        ctx->pc = 0x2B9364u;
        goto label_2b9364;
    }
    ctx->pc = 0x2B935Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B9364u: goto label_2b9364;
            case 0x2B9370u: goto label_2b9370;
            case 0x2B937Cu: goto label_2b937c;
            case 0x2B9388u: goto label_2b9388;
            case 0x2B9394u: goto label_2b9394;
            case 0x2B93A0u: goto label_2b93a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B935Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B9364u;
label_2b9364:
    // 0x2b9364: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2b9364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2b9368:
    // 0x2b9368: 0x1000000e  b           . + 4 + (0xE << 2)
label_2b936c:
    if (ctx->pc == 0x2B936Cu) {
        ctx->pc = 0x2B936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9368u;
        // 0x2b936c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9370u;
        goto label_2b9370;
    }
    ctx->pc = 0x2B9368u;
    {
        const bool branch_taken_0x2b9368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9368u;
        // 0x2b936c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9368) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9370u;
label_2b9370:
    // 0x2b9370: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x2b9370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2b9374:
    // 0x2b9374: 0x1000000b  b           . + 4 + (0xB << 2)
label_2b9378:
    if (ctx->pc == 0x2B9378u) {
        ctx->pc = 0x2B9378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9374u;
        // 0x2b9378: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B937Cu;
        goto label_2b937c;
    }
    ctx->pc = 0x2B9374u;
    {
        const bool branch_taken_0x2b9374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9374u;
        // 0x2b9378: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9374) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B937Cu;
label_2b937c:
    // 0x2b937c: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x2b937cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2b9380:
    // 0x2b9380: 0x10000008  b           . + 4 + (0x8 << 2)
label_2b9384:
    if (ctx->pc == 0x2B9384u) {
        ctx->pc = 0x2B9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9380u;
        // 0x2b9384: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9388u;
        goto label_2b9388;
    }
    ctx->pc = 0x2B9380u;
    {
        const bool branch_taken_0x2b9380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9380u;
        // 0x2b9384: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9380) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9388u;
label_2b9388:
    // 0x2b9388: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x2b9388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2b938c:
    // 0x2b938c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b9390:
    if (ctx->pc == 0x2B9390u) {
        ctx->pc = 0x2B9390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B938Cu;
        // 0x2b9390: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9394u;
        goto label_2b9394;
    }
    ctx->pc = 0x2B938Cu;
    {
        const bool branch_taken_0x2b938c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B938Cu;
        // 0x2b9390: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b938c) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B9394u;
label_2b9394:
    // 0x2b9394: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x2b9394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2b9398:
    // 0x2b9398: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b939c:
    if (ctx->pc == 0x2B939Cu) {
        ctx->pc = 0x2B939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9398u;
        // 0x2b939c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B93A0u;
        goto label_2b93a0;
    }
    ctx->pc = 0x2B9398u;
    {
        const bool branch_taken_0x2b9398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9398u;
        // 0x2b939c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9398) {
            ctx->pc = 0x2B93A4u;
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B93A0u;
label_2b93a0:
    // 0x2b93a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b93a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b93a4:
    // 0x2b93a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b93a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b93a8:
    // 0x2b93a8: 0x15220004  bne         $t1, $v0, . + 4 + (0x4 << 2)
label_2b93ac:
    if (ctx->pc == 0x2B93ACu) {
        ctx->pc = 0x2B93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93A8u;
        // 0x2b93ac: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B93B0u;
        goto label_2b93b0;
    }
    ctx->pc = 0x2B93A8u;
    {
        const bool branch_taken_0x2b93a8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93A8u;
        // 0x2b93ac: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b93a8) {
            ctx->pc = 0x2B93BCu;
            goto label_2b93bc;
        }
    }
    ctx->pc = 0x2B93B0u;
label_2b93b0:
    // 0x2b93b0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2b93b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b93b4:
    // 0x2b93b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b93b8:
    if (ctx->pc == 0x2B93B8u) {
        ctx->pc = 0x2B93B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93B4u;
        // 0x2b93b8: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B93BCu;
        goto label_2b93bc;
    }
    ctx->pc = 0x2B93B4u;
    {
        const bool branch_taken_0x2b93b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B93B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93B4u;
        // 0x2b93b8: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b93b4) {
            ctx->pc = 0x2B93C0u;
            goto label_2b93c0;
        }
    }
    ctx->pc = 0x2B93BCu;
label_2b93bc:
    // 0x2b93bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2b93bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b93c0:
    // 0x2b93c0: 0x2d02001a  sltiu       $v0, $t0, 0x1A
    ctx->pc = 0x2b93c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_2b93c4:
    // 0x2b93c4: 0x104001d9  beqz        $v0, . + 4 + (0x1D9 << 2)
label_2b93c8:
    if (ctx->pc == 0x2B93C8u) {
        ctx->pc = 0x2B93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93C4u;
        // 0x2b93c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B93CCu;
        goto label_2b93cc;
    }
    ctx->pc = 0x2B93C4u;
    {
        const bool branch_taken_0x2b93c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93C4u;
        // 0x2b93c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b93c4) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B93CCu;
label_2b93cc:
    // 0x2b93cc: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2b93ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_2b93d0:
    // 0x2b93d0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x2b93d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2b93d4:
    // 0x2b93d4: 0x2442ba00  addiu       $v0, $v0, -0x4600
    ctx->pc = 0x2b93d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949376));
label_2b93d8:
    // 0x2b93d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b93d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b93dc:
    // 0x2b93dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b93dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b93e0:
    // 0x2b93e0: 0x800008  jr          $a0
label_2b93e4:
    if (ctx->pc == 0x2B93E4u) {
        ctx->pc = 0x2B93E8u;
        goto label_2b93e8;
    }
    ctx->pc = 0x2B93E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B93E8u: goto label_2b93e8;
            case 0x2B9454u: goto label_2b9454;
            case 0x2B94C0u: goto label_2b94c0;
            case 0x2B94F4u: goto label_2b94f4;
            case 0x2B9548u: goto label_2b9548;
            case 0x2B957Cu: goto label_2b957c;
            case 0x2B9584u: goto label_2b9584;
            case 0x2B960Cu: goto label_2b960c;
            case 0x2B9694u: goto label_2b9694;
            case 0x2B96E4u: goto label_2b96e4;
            case 0x2B9754u: goto label_2b9754;
            case 0x2B97A4u: goto label_2b97a4;
            case 0x2B97F0u: goto label_2b97f0;
            case 0x2B9878u: goto label_2b9878;
            case 0x2B98C8u: goto label_2b98c8;
            case 0x2B9938u: goto label_2b9938;
            case 0x2B9988u: goto label_2b9988;
            case 0x2B99D4u: goto label_2b99d4;
            case 0x2B99F0u: goto label_2b99f0;
            case 0x2B9A30u: goto label_2b9a30;
            case 0x2B9A4Cu: goto label_2b9a4c;
            case 0x2B9A64u: goto label_2b9a64;
            case 0x2B9ABCu: goto label_2b9abc;
            case 0x2B9AF4u: goto label_2b9af4;
            case 0x2B9B28u: goto label_2b9b28;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B93E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B93E8u;
label_2b93e8:
    // 0x2b93e8: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b93e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b93ec:
    // 0x2b93ec: 0x8e7100c0  lw          $s1, 0xC0($s3)
    ctx->pc = 0x2b93ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_2b93f0:
    // 0x2b93f0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b93f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b93f4:
    // 0x2b93f4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b93f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b93f8:
    // 0x2b93f8: 0x60f809  jalr        $v1
label_2b93fc:
    if (ctx->pc == 0x2B93FCu) {
        ctx->pc = 0x2B93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93F8u;
        // 0x2b93fc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9400u;
        goto label_2b9400;
    }
    ctx->pc = 0x2B93F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9400u);
        ctx->pc = 0x2B93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93F8u;
        // 0x2b93fc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B93F8u, 0x2B9400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9400u;
label_2b9400:
    // 0x2b9400: 0x8e820100  lw          $v0, 0x100($s4)
    ctx->pc = 0x2b9400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_2b9404:
    // 0x2b9404: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b9404u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2b9408:
    // 0x2b9408: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x2b9408u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b940c:
    // 0x2b940c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b940cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b9410:
    // 0x2b9410: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b9410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b9414:
    // 0x2b9414: 0x60f809  jalr        $v1
label_2b9418:
    if (ctx->pc == 0x2B9418u) {
        ctx->pc = 0x2B9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9414u;
        // 0x2b9418: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B941Cu;
        goto label_2b941c;
    }
    ctx->pc = 0x2B9414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B941Cu);
        ctx->pc = 0x2B9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9414u;
        // 0x2b9418: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9414u, 0x2B941Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B941Cu;
label_2b941c:
    // 0x2b941c: 0x8e820100  lw          $v0, 0x100($s4)
    ctx->pc = 0x2b941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_2b9420:
    // 0x2b9420: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b9420u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b9424:
    // 0x2b9424: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2b9424u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2b9428:
    // 0x2b9428: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b9428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b942c:
    // 0x2b942c: 0x60f809  jalr        $v1
label_2b9430:
    if (ctx->pc == 0x2B9430u) {
        ctx->pc = 0x2B9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B942Cu;
        // 0x2b9430: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9434u;
        goto label_2b9434;
    }
    ctx->pc = 0x2B942Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9434u);
        ctx->pc = 0x2B9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B942Cu;
        // 0x2b9430: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B942Cu, 0x2B9434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9434u;
label_2b9434:
    // 0x2b9434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9438:
    // 0x2b9438: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2b9438u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2b943c:
    // 0x2b943c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b943cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9440:
    // 0x2b9440: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b9440u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2b9444:
    // 0x2b9444: 0xc0aed22  jal         func_2BB488
label_2b9448:
    if (ctx->pc == 0x2B9448u) {
        ctx->pc = 0x2B9448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9444u;
        // 0x2b9448: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B944Cu;
        goto label_2b944c;
    }
    ctx->pc = 0x2B9444u;
    SET_GPR_U32(ctx, 31, 0x2B944Cu);
    ctx->pc = 0x2B9448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9444u;
    // 0x2b9448: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB488u, 0x2B9444u, 0x2B944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B944Cu;
label_2b944c:
    // 0x2b944c: 0x100001b7  b           . + 4 + (0x1B7 << 2)
label_2b9450:
    if (ctx->pc == 0x2B9450u) {
        ctx->pc = 0x2B9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B944Cu;
        // 0x2b9450: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9454u;
        goto label_2b9454;
    }
    ctx->pc = 0x2B944Cu;
    {
        const bool branch_taken_0x2b944c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B944Cu;
        // 0x2b9450: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b944c) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B9454u;
label_2b9454:
    // 0x2b9454: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b9454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b9458:
    // 0x2b9458: 0x8e7100c0  lw          $s1, 0xC0($s3)
    ctx->pc = 0x2b9458u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_2b945c:
    // 0x2b945c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b945cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b9460:
    // 0x2b9460: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b9460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b9464:
    // 0x2b9464: 0x60f809  jalr        $v1
label_2b9468:
    if (ctx->pc == 0x2B9468u) {
        ctx->pc = 0x2B9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9464u;
        // 0x2b9468: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B946Cu;
        goto label_2b946c;
    }
    ctx->pc = 0x2B9464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B946Cu);
        ctx->pc = 0x2B9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9464u;
        // 0x2b9468: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9464u, 0x2B946Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B946Cu;
label_2b946c:
    // 0x2b946c: 0x8e820100  lw          $v0, 0x100($s4)
    ctx->pc = 0x2b946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_2b9470:
    // 0x2b9470: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b9470u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2b9474:
    // 0x2b9474: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x2b9474u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b9478:
    // 0x2b9478: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b9478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b947c:
    // 0x2b947c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b947cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b9480:
    // 0x2b9480: 0x60f809  jalr        $v1
label_2b9484:
    if (ctx->pc == 0x2B9484u) {
        ctx->pc = 0x2B9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9480u;
        // 0x2b9484: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9488u;
        goto label_2b9488;
    }
    ctx->pc = 0x2B9480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9488u);
        ctx->pc = 0x2B9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9480u;
        // 0x2b9484: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9480u, 0x2B9488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9488u;
label_2b9488:
    // 0x2b9488: 0x8e820100  lw          $v0, 0x100($s4)
    ctx->pc = 0x2b9488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_2b948c:
    // 0x2b948c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b948cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b9490:
    // 0x2b9490: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2b9490u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2b9494:
    // 0x2b9494: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b9494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b9498:
    // 0x2b9498: 0x60f809  jalr        $v1
label_2b949c:
    if (ctx->pc == 0x2B949Cu) {
        ctx->pc = 0x2B949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9498u;
        // 0x2b949c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94A0u;
        goto label_2b94a0;
    }
    ctx->pc = 0x2B9498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B94A0u);
        ctx->pc = 0x2B949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9498u;
        // 0x2b949c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9498u, 0x2B94A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B94A0u;
label_2b94a0:
    // 0x2b94a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b94a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b94a4:
    // 0x2b94a4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2b94a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2b94a8:
    // 0x2b94a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b94a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b94ac:
    // 0x2b94ac: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b94acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2b94b0:
    // 0x2b94b0: 0xc0aed9c  jal         func_2BB670
label_2b94b4:
    if (ctx->pc == 0x2B94B4u) {
        ctx->pc = 0x2B94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94B0u;
        // 0x2b94b4: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94B8u;
        goto label_2b94b8;
    }
    ctx->pc = 0x2B94B0u;
    SET_GPR_U32(ctx, 31, 0x2B94B8u);
    ctx->pc = 0x2B94B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B94B0u;
    // 0x2b94b4: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB670u, 0x2B94B0u, 0x2B94B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B94B8u;
label_2b94b8:
    // 0x2b94b8: 0x1000019c  b           . + 4 + (0x19C << 2)
label_2b94bc:
    if (ctx->pc == 0x2B94BCu) {
        ctx->pc = 0x2B94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94B8u;
        // 0x2b94bc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94C0u;
        goto label_2b94c0;
    }
    ctx->pc = 0x2B94B8u;
    {
        const bool branch_taken_0x2b94b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94B8u;
        // 0x2b94bc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b94b8) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B94C0u;
label_2b94c0:
    // 0x2b94c0: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b94c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b94c4:
    // 0x2b94c4: 0x8e7000c0  lw          $s0, 0xC0($s3)
    ctx->pc = 0x2b94c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_2b94c8:
    // 0x2b94c8: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b94c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b94cc:
    // 0x2b94cc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b94ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b94d0:
    // 0x2b94d0: 0x60f809  jalr        $v1
label_2b94d4:
    if (ctx->pc == 0x2B94D4u) {
        ctx->pc = 0x2B94D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94D0u;
        // 0x2b94d4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94D8u;
        goto label_2b94d8;
    }
    ctx->pc = 0x2B94D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B94D8u);
        ctx->pc = 0x2B94D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94D0u;
        // 0x2b94d4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B94D0u, 0x2B94D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B94D8u;
label_2b94d8:
    // 0x2b94d8: 0x8e850070  lw          $a1, 0x70($s4)
    ctx->pc = 0x2b94d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b94dc:
    // 0x2b94dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b94dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b94e0:
    // 0x2b94e0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2b94e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2b94e4:
    // 0x2b94e4: 0xc0aedd8  jal         func_2BB760
label_2b94e8:
    if (ctx->pc == 0x2B94E8u) {
        ctx->pc = 0x2B94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94E4u;
        // 0x2b94e8: 0x26860110  addiu       $a2, $s4, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94ECu;
        goto label_2b94ec;
    }
    ctx->pc = 0x2B94E4u;
    SET_GPR_U32(ctx, 31, 0x2B94ECu);
    ctx->pc = 0x2B94E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B94E4u;
    // 0x2b94e8: 0x26860110  addiu       $a2, $s4, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB760u, 0x2B94E4u, 0x2B94ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B94ECu;
label_2b94ec:
    // 0x2b94ec: 0x1000018f  b           . + 4 + (0x18F << 2)
label_2b94f0:
    if (ctx->pc == 0x2B94F0u) {
        ctx->pc = 0x2B94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94ECu;
        // 0x2b94f0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B94F4u;
        goto label_2b94f4;
    }
    ctx->pc = 0x2B94ECu;
    {
        const bool branch_taken_0x2b94ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94ECu;
        // 0x2b94f0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b94ec) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B94F4u;
label_2b94f4:
    // 0x2b94f4: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b94f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b94f8:
    // 0x2b94f8: 0x8e7100c0  lw          $s1, 0xC0($s3)
    ctx->pc = 0x2b94f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_2b94fc:
    // 0x2b94fc: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b94fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b9500:
    // 0x2b9500: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b9500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b9504:
    // 0x2b9504: 0x60f809  jalr        $v1
label_2b9508:
    if (ctx->pc == 0x2B9508u) {
        ctx->pc = 0x2B9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9504u;
        // 0x2b9508: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B950Cu;
        goto label_2b950c;
    }
    ctx->pc = 0x2B9504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B950Cu);
        ctx->pc = 0x2B9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9504u;
        // 0x2b9508: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9504u, 0x2B950Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B950Cu;
label_2b950c:
    // 0x2b950c: 0x8e860100  lw          $a2, 0x100($s4)
    ctx->pc = 0x2b950cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_2b9510:
    // 0x2b9510: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b9510u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b9514:
    // 0x2b9514: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b9514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b9518:
    // 0x2b9518: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x2b9518u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b951c:
    // 0x2b951c: 0x84c50030  lh          $a1, 0x30($a2)
    ctx->pc = 0x2b951cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 48)));
label_2b9520:
    // 0x2b9520: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x2b9520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_2b9524:
    // 0x2b9524: 0x40f809  jalr        $v0
label_2b9528:
    if (ctx->pc == 0x2B9528u) {
        ctx->pc = 0x2B9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9524u;
        // 0x2b9528: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B952Cu;
        goto label_2b952c;
    }
    ctx->pc = 0x2B9524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B952Cu);
        ctx->pc = 0x2B9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9524u;
        // 0x2b9528: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9524u, 0x2B952Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B952Cu;
label_2b952c:
    // 0x2b952c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b952cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9530:
    // 0x2b9530: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b9530u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b9534:
    // 0x2b9534: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b9534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9538:
    // 0x2b9538: 0xc0aeee8  jal         func_2BBBA0
label_2b953c:
    if (ctx->pc == 0x2B953Cu) {
        ctx->pc = 0x2B953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9538u;
        // 0x2b953c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9540u;
        goto label_2b9540;
    }
    ctx->pc = 0x2B9538u;
    SET_GPR_U32(ctx, 31, 0x2B9540u);
    ctx->pc = 0x2B953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9538u;
    // 0x2b953c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBBA0u, 0x2B9538u, 0x2B9540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9540u;
label_2b9540:
    // 0x2b9540: 0x1000017a  b           . + 4 + (0x17A << 2)
label_2b9544:
    if (ctx->pc == 0x2B9544u) {
        ctx->pc = 0x2B9544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9540u;
        // 0x2b9544: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9548u;
        goto label_2b9548;
    }
    ctx->pc = 0x2B9540u;
    {
        const bool branch_taken_0x2b9540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9540u;
        // 0x2b9544: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9540) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B9548u;
label_2b9548:
    // 0x2b9548: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b9548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b954c:
    // 0x2b954c: 0x8e7000c0  lw          $s0, 0xC0($s3)
    ctx->pc = 0x2b954cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_2b9550:
    // 0x2b9550: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b9550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b9554:
    // 0x2b9554: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b9554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b9558:
    // 0x2b9558: 0x60f809  jalr        $v1
label_2b955c:
    if (ctx->pc == 0x2B955Cu) {
        ctx->pc = 0x2B955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9558u;
        // 0x2b955c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9560u;
        goto label_2b9560;
    }
    ctx->pc = 0x2B9558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9560u);
        ctx->pc = 0x2B955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9558u;
        // 0x2b955c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9558u, 0x2B9560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9560u;
label_2b9560:
    // 0x2b9560: 0x8e850070  lw          $a1, 0x70($s4)
    ctx->pc = 0x2b9560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b9564:
    // 0x2b9564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9568:
    // 0x2b9568: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2b9568u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2b956c:
    // 0x2b956c: 0xc0aef38  jal         func_2BBCE0
label_2b9570:
    if (ctx->pc == 0x2B9570u) {
        ctx->pc = 0x2B9570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B956Cu;
        // 0x2b9570: 0x26860110  addiu       $a2, $s4, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9574u;
        goto label_2b9574;
    }
    ctx->pc = 0x2B956Cu;
    SET_GPR_U32(ctx, 31, 0x2B9574u);
    ctx->pc = 0x2B9570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B956Cu;
    // 0x2b9570: 0x26860110  addiu       $a2, $s4, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBCE0u, 0x2B956Cu, 0x2B9574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9574u;
label_2b9574:
    // 0x2b9574: 0x1000016d  b           . + 4 + (0x16D << 2)
label_2b9578:
    if (ctx->pc == 0x2B9578u) {
        ctx->pc = 0x2B9578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9574u;
        // 0x2b9578: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B957Cu;
        goto label_2b957c;
    }
    ctx->pc = 0x2B9574u;
    {
        const bool branch_taken_0x2b9574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9574u;
        // 0x2b9578: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9574) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B957Cu;
label_2b957c:
    // 0x2b957c: 0x1000016b  b           . + 4 + (0x16B << 2)
label_2b9580:
    if (ctx->pc == 0x2B9580u) {
        ctx->pc = 0x2B9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B957Cu;
        // 0x2b9580: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9584u;
        goto label_2b9584;
    }
    ctx->pc = 0x2B957Cu;
    {
        const bool branch_taken_0x2b957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B957Cu;
        // 0x2b9580: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b957c) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B9584u;
label_2b9584:
    // 0x2b9584: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b9584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b9588:
    // 0x2b9588: 0x8e710070  lw          $s1, 0x70($s3)
    ctx->pc = 0x2b9588u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2b958c:
    // 0x2b958c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b958cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b9590:
    // 0x2b9590: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b9590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b9594:
    // 0x2b9594: 0x60f809  jalr        $v1
label_2b9598:
    if (ctx->pc == 0x2B9598u) {
        ctx->pc = 0x2B9598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9594u;
        // 0x2b9598: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B959Cu;
        goto label_2b959c;
    }
    ctx->pc = 0x2B9594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B959Cu);
        ctx->pc = 0x2B9598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9594u;
        // 0x2b9598: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9594u, 0x2B959Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B959Cu;
label_2b959c:
    // 0x2b959c: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b95a0:
    // 0x2b95a0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2b95a0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2b95a4:
    // 0x2b95a4: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2b95a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2b95a8:
    // 0x2b95a8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b95a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b95ac:
    // 0x2b95ac: 0x60f809  jalr        $v1
label_2b95b0:
    if (ctx->pc == 0x2B95B0u) {
        ctx->pc = 0x2B95B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95ACu;
        // 0x2b95b0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B95B4u;
        goto label_2b95b4;
    }
    ctx->pc = 0x2B95ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B95B4u);
        ctx->pc = 0x2B95B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95ACu;
        // 0x2b95b0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B95ACu, 0x2B95B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B95B4u;
label_2b95b4:
    // 0x2b95b4: 0x8e820100  lw          $v0, 0x100($s4)
    ctx->pc = 0x2b95b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_2b95b8:
    // 0x2b95b8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b95b8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2b95bc:
    // 0x2b95bc: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x2b95bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b95c0:
    // 0x2b95c0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b95c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b95c4:
    // 0x2b95c4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b95c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b95c8:
    // 0x2b95c8: 0x60f809  jalr        $v1
label_2b95cc:
    if (ctx->pc == 0x2B95CCu) {
        ctx->pc = 0x2B95CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95C8u;
        // 0x2b95cc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B95D0u;
        goto label_2b95d0;
    }
    ctx->pc = 0x2B95C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B95D0u);
        ctx->pc = 0x2B95CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95C8u;
        // 0x2b95cc: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B95C8u, 0x2B95D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B95D0u;
label_2b95d0:
    // 0x2b95d0: 0x8e820100  lw          $v0, 0x100($s4)
    ctx->pc = 0x2b95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_2b95d4:
    // 0x2b95d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b95d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b95d8:
    // 0x2b95d8: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2b95d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2b95dc:
    // 0x2b95dc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b95dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b95e0:
    // 0x2b95e0: 0x60f809  jalr        $v1
label_2b95e4:
    if (ctx->pc == 0x2B95E4u) {
        ctx->pc = 0x2B95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95E0u;
        // 0x2b95e4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B95E8u;
        goto label_2b95e8;
    }
    ctx->pc = 0x2B95E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B95E8u);
        ctx->pc = 0x2B95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95E0u;
        // 0x2b95e4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B95E0u, 0x2B95E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B95E8u;
label_2b95e8:
    // 0x2b95e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b95e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b95ec:
    // 0x2b95ec: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2b95ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2b95f0:
    // 0x2b95f0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2b95f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2b95f4:
    // 0x2b95f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b95f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b95f8:
    // 0x2b95f8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2b95f8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_2b95fc:
    // 0x2b95fc: 0xc0aef6e  jal         func_2BBDB8
label_2b9600:
    if (ctx->pc == 0x2B9600u) {
        ctx->pc = 0x2B9600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95FCu;
        // 0x2b9600: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9604u;
        goto label_2b9604;
    }
    ctx->pc = 0x2B95FCu;
    SET_GPR_U32(ctx, 31, 0x2B9604u);
    ctx->pc = 0x2B9600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B95FCu;
    // 0x2b9600: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBDB8u, 0x2B95FCu, 0x2B9604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9604u;
label_2b9604:
    // 0x2b9604: 0x10000149  b           . + 4 + (0x149 << 2)
label_2b9608:
    if (ctx->pc == 0x2B9608u) {
        ctx->pc = 0x2B9608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9604u;
        // 0x2b9608: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B960Cu;
        goto label_2b960c;
    }
    ctx->pc = 0x2B9604u;
    {
        const bool branch_taken_0x2b9604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9604u;
        // 0x2b9608: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9604) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B960Cu;
label_2b960c:
    // 0x2b960c: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b9610:
    // 0x2b9610: 0x8e710070  lw          $s1, 0x70($s3)
    ctx->pc = 0x2b9610u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2b9614:
    // 0x2b9614: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b9614u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b9618:
    // 0x2b9618: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b9618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b961c:
    // 0x2b961c: 0x60f809  jalr        $v1
label_2b9620:
    if (ctx->pc == 0x2B9620u) {
        ctx->pc = 0x2B9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B961Cu;
        // 0x2b9620: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9624u;
        goto label_2b9624;
    }
    ctx->pc = 0x2B961Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9624u);
        ctx->pc = 0x2B9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B961Cu;
        // 0x2b9620: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B961Cu, 0x2B9624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9624u;
label_2b9624:
    // 0x2b9624: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b9624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b9628:
    // 0x2b9628: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2b9628u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2b962c:
    // 0x2b962c: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2b962cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2b9630:
    // 0x2b9630: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b9630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b9634:
    // 0x2b9634: 0x60f809  jalr        $v1
label_2b9638:
    if (ctx->pc == 0x2B9638u) {
        ctx->pc = 0x2B9638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9634u;
        // 0x2b9638: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B963Cu;
        goto label_2b963c;
    }
    ctx->pc = 0x2B9634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B963Cu);
        ctx->pc = 0x2B9638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9634u;
        // 0x2b9638: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9634u, 0x2B963Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B963Cu;
label_2b963c:
    // 0x2b963c: 0x8e820100  lw          $v0, 0x100($s4)
    ctx->pc = 0x2b963cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_2b9640:
    // 0x2b9640: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b9640u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2b9644:
    // 0x2b9644: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x2b9644u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b9648:
    // 0x2b9648: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b9648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b964c:
    // 0x2b964c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b9650:
    // 0x2b9650: 0x60f809  jalr        $v1
label_2b9654:
    if (ctx->pc == 0x2B9654u) {
        ctx->pc = 0x2B9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9650u;
        // 0x2b9654: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9658u;
        goto label_2b9658;
    }
    ctx->pc = 0x2B9650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9658u);
        ctx->pc = 0x2B9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9650u;
        // 0x2b9654: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9650u, 0x2B9658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9658u;
label_2b9658:
    // 0x2b9658: 0x8e820100  lw          $v0, 0x100($s4)
    ctx->pc = 0x2b9658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_2b965c:
    // 0x2b965c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b965cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b9660:
    // 0x2b9660: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2b9660u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2b9664:
    // 0x2b9664: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b9664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b9668:
    // 0x2b9668: 0x60f809  jalr        $v1
label_2b966c:
    if (ctx->pc == 0x2B966Cu) {
        ctx->pc = 0x2B966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9668u;
        // 0x2b966c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9670u;
        goto label_2b9670;
    }
    ctx->pc = 0x2B9668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9670u);
        ctx->pc = 0x2B966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9668u;
        // 0x2b966c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9668u, 0x2B9670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9670u;
label_2b9670:
    // 0x2b9670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9674:
    // 0x2b9674: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2b9674u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2b9678:
    // 0x2b9678: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2b9678u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2b967c:
    // 0x2b967c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b967cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9680:
    // 0x2b9680: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2b9680u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_2b9684:
    // 0x2b9684: 0xc0af11c  jal         func_2BC470
label_2b9688:
    if (ctx->pc == 0x2B9688u) {
        ctx->pc = 0x2B9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9684u;
        // 0x2b9688: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B968Cu;
        goto label_2b968c;
    }
    ctx->pc = 0x2B9684u;
    SET_GPR_U32(ctx, 31, 0x2B968Cu);
    ctx->pc = 0x2B9688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9684u;
    // 0x2b9688: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC470u, 0x2B9684u, 0x2B968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B968Cu;
label_2b968c:
    // 0x2b968c: 0x10000127  b           . + 4 + (0x127 << 2)
label_2b9690:
    if (ctx->pc == 0x2B9690u) {
        ctx->pc = 0x2B9690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B968Cu;
        // 0x2b9690: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9694u;
        goto label_2b9694;
    }
    ctx->pc = 0x2B968Cu;
    {
        const bool branch_taken_0x2b968c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B968Cu;
        // 0x2b9690: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b968c) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B9694u;
label_2b9694:
    // 0x2b9694: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b9694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b9698:
    // 0x2b9698: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x2b9698u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2b969c:
    // 0x2b969c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b969cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b96a0:
    // 0x2b96a0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b96a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b96a4:
    // 0x2b96a4: 0x60f809  jalr        $v1
label_2b96a8:
    if (ctx->pc == 0x2B96A8u) {
        ctx->pc = 0x2B96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96A4u;
        // 0x2b96a8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B96ACu;
        goto label_2b96ac;
    }
    ctx->pc = 0x2B96A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B96ACu);
        ctx->pc = 0x2B96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96A4u;
        // 0x2b96a8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B96A4u, 0x2B96ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B96ACu;
label_2b96ac:
    // 0x2b96ac: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b96acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b96b0:
    // 0x2b96b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b96b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b96b4:
    // 0x2b96b4: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2b96b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2b96b8:
    // 0x2b96b8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b96b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b96bc:
    // 0x2b96bc: 0x60f809  jalr        $v1
label_2b96c0:
    if (ctx->pc == 0x2B96C0u) {
        ctx->pc = 0x2B96C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96BCu;
        // 0x2b96c0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B96C4u;
        goto label_2b96c4;
    }
    ctx->pc = 0x2B96BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B96C4u);
        ctx->pc = 0x2B96C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96BCu;
        // 0x2b96c0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B96BCu, 0x2B96C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B96C4u;
label_2b96c4:
    // 0x2b96c4: 0x8e850070  lw          $a1, 0x70($s4)
    ctx->pc = 0x2b96c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b96c8:
    // 0x2b96c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b96c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b96cc:
    // 0x2b96cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b96ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b96d0:
    // 0x2b96d0: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2b96d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2b96d4:
    // 0x2b96d4: 0xc0af1b2  jal         func_2BC6C8
label_2b96d8:
    if (ctx->pc == 0x2B96D8u) {
        ctx->pc = 0x2B96D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96D4u;
        // 0x2b96d8: 0x26860110  addiu       $a2, $s4, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B96DCu;
        goto label_2b96dc;
    }
    ctx->pc = 0x2B96D4u;
    SET_GPR_U32(ctx, 31, 0x2B96DCu);
    ctx->pc = 0x2B96D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B96D4u;
    // 0x2b96d8: 0x26860110  addiu       $a2, $s4, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC6C8u, 0x2B96D4u, 0x2B96DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B96DCu;
label_2b96dc:
    // 0x2b96dc: 0x10000113  b           . + 4 + (0x113 << 2)
label_2b96e0:
    if (ctx->pc == 0x2B96E0u) {
        ctx->pc = 0x2B96E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96DCu;
        // 0x2b96e0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B96E4u;
        goto label_2b96e4;
    }
    ctx->pc = 0x2B96DCu;
    {
        const bool branch_taken_0x2b96dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B96E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96DCu;
        // 0x2b96e0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b96dc) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B96E4u;
label_2b96e4:
    // 0x2b96e4: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b96e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b96e8:
    // 0x2b96e8: 0x8e710070  lw          $s1, 0x70($s3)
    ctx->pc = 0x2b96e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2b96ec:
    // 0x2b96ec: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b96ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b96f0:
    // 0x2b96f0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b96f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b96f4:
    // 0x2b96f4: 0x60f809  jalr        $v1
label_2b96f8:
    if (ctx->pc == 0x2B96F8u) {
        ctx->pc = 0x2B96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96F4u;
        // 0x2b96f8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B96FCu;
        goto label_2b96fc;
    }
    ctx->pc = 0x2B96F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B96FCu);
        ctx->pc = 0x2B96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96F4u;
        // 0x2b96f8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B96F4u, 0x2B96FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B96FCu;
label_2b96fc:
    // 0x2b96fc: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b96fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b9700:
    // 0x2b9700: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b9700u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2b9704:
    // 0x2b9704: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2b9704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2b9708:
    // 0x2b9708: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b9708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b970c:
    // 0x2b970c: 0x60f809  jalr        $v1
label_2b9710:
    if (ctx->pc == 0x2B9710u) {
        ctx->pc = 0x2B9710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B970Cu;
        // 0x2b9710: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9714u;
        goto label_2b9714;
    }
    ctx->pc = 0x2B970Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9714u);
        ctx->pc = 0x2B9710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B970Cu;
        // 0x2b9710: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B970Cu, 0x2B9714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9714u;
label_2b9714:
    // 0x2b9714: 0x8e860100  lw          $a2, 0x100($s4)
    ctx->pc = 0x2b9714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_2b9718:
    // 0x2b9718: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b9718u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b971c:
    // 0x2b971c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b971cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b9720:
    // 0x2b9720: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x2b9720u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b9724:
    // 0x2b9724: 0x84c50030  lh          $a1, 0x30($a2)
    ctx->pc = 0x2b9724u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 48)));
label_2b9728:
    // 0x2b9728: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x2b9728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_2b972c:
    // 0x2b972c: 0x40f809  jalr        $v0
label_2b9730:
    if (ctx->pc == 0x2B9730u) {
        ctx->pc = 0x2B9730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B972Cu;
        // 0x2b9730: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9734u;
        goto label_2b9734;
    }
    ctx->pc = 0x2B972Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B9734u);
        ctx->pc = 0x2B9730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B972Cu;
        // 0x2b9730: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B972Cu, 0x2B9734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9734u;
label_2b9734:
    // 0x2b9734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9738:
    // 0x2b9738: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2b9738u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2b973c:
    // 0x2b973c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b973cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2b9740:
    // 0x2b9740: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b9740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9744:
    // 0x2b9744: 0xc0af2e0  jal         func_2BCB80
label_2b9748:
    if (ctx->pc == 0x2B9748u) {
        ctx->pc = 0x2B9748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9744u;
        // 0x2b9748: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B974Cu;
        goto label_2b974c;
    }
    ctx->pc = 0x2B9744u;
    SET_GPR_U32(ctx, 31, 0x2B974Cu);
    ctx->pc = 0x2B9748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9744u;
    // 0x2b9748: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCB80u, 0x2B9744u, 0x2B974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B974Cu;
label_2b974c:
    // 0x2b974c: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_2b9750:
    if (ctx->pc == 0x2B9750u) {
        ctx->pc = 0x2B9750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B974Cu;
        // 0x2b9750: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9754u;
        goto label_2b9754;
    }
    ctx->pc = 0x2B974Cu;
    {
        const bool branch_taken_0x2b974c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B974Cu;
        // 0x2b9750: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b974c) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B9754u;
label_2b9754:
    // 0x2b9754: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b9754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b9758:
    // 0x2b9758: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x2b9758u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2b975c:
    // 0x2b975c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b975cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b9760:
    // 0x2b9760: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b9760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b9764:
    // 0x2b9764: 0x60f809  jalr        $v1
label_2b9768:
    if (ctx->pc == 0x2B9768u) {
        ctx->pc = 0x2B9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9764u;
        // 0x2b9768: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B976Cu;
        goto label_2b976c;
    }
    ctx->pc = 0x2B9764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B976Cu);
        ctx->pc = 0x2B9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9764u;
        // 0x2b9768: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9764u, 0x2B976Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B976Cu;
label_2b976c:
    // 0x2b976c: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b9770:
    // 0x2b9770: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b9770u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b9774:
    // 0x2b9774: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2b9774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2b9778:
    // 0x2b9778: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b9778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b977c:
    // 0x2b977c: 0x60f809  jalr        $v1
label_2b9780:
    if (ctx->pc == 0x2B9780u) {
        ctx->pc = 0x2B9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B977Cu;
        // 0x2b9780: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9784u;
        goto label_2b9784;
    }
    ctx->pc = 0x2B977Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9784u);
        ctx->pc = 0x2B9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B977Cu;
        // 0x2b9780: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B977Cu, 0x2B9784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9784u;
label_2b9784:
    // 0x2b9784: 0x8e850070  lw          $a1, 0x70($s4)
    ctx->pc = 0x2b9784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b9788:
    // 0x2b9788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b978c:
    // 0x2b978c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b978cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b9790:
    // 0x2b9790: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2b9790u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2b9794:
    // 0x2b9794: 0xc0af330  jal         func_2BCCC0
label_2b9798:
    if (ctx->pc == 0x2B9798u) {
        ctx->pc = 0x2B9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9794u;
        // 0x2b9798: 0x26860110  addiu       $a2, $s4, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B979Cu;
        goto label_2b979c;
    }
    ctx->pc = 0x2B9794u;
    SET_GPR_U32(ctx, 31, 0x2B979Cu);
    ctx->pc = 0x2B9798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9794u;
    // 0x2b9798: 0x26860110  addiu       $a2, $s4, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCCC0u, 0x2B9794u, 0x2B979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B979Cu;
label_2b979c:
    // 0x2b979c: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_2b97a0:
    if (ctx->pc == 0x2B97A0u) {
        ctx->pc = 0x2B97A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B979Cu;
        // 0x2b97a0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B97A4u;
        goto label_2b97a4;
    }
    ctx->pc = 0x2B979Cu;
    {
        const bool branch_taken_0x2b979c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B97A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B979Cu;
        // 0x2b97a0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b979c) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B97A4u;
label_2b97a4:
    // 0x2b97a4: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b97a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b97a8:
    // 0x2b97a8: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x2b97a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2b97ac:
    // 0x2b97ac: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b97acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b97b0:
    // 0x2b97b0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b97b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b97b4:
    // 0x2b97b4: 0x60f809  jalr        $v1
label_2b97b8:
    if (ctx->pc == 0x2B97B8u) {
        ctx->pc = 0x2B97B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97B4u;
        // 0x2b97b8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B97BCu;
        goto label_2b97bc;
    }
    ctx->pc = 0x2B97B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B97BCu);
        ctx->pc = 0x2B97B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97B4u;
        // 0x2b97b8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B97B4u, 0x2B97BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B97BCu;
label_2b97bc:
    // 0x2b97bc: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b97bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b97c0:
    // 0x2b97c0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b97c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b97c4:
    // 0x2b97c4: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2b97c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2b97c8:
    // 0x2b97c8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b97c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b97cc:
    // 0x2b97cc: 0x60f809  jalr        $v1
label_2b97d0:
    if (ctx->pc == 0x2B97D0u) {
        ctx->pc = 0x2B97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97CCu;
        // 0x2b97d0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B97D4u;
        goto label_2b97d4;
    }
    ctx->pc = 0x2B97CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B97D4u);
        ctx->pc = 0x2B97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97CCu;
        // 0x2b97d0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B97CCu, 0x2B97D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B97D4u;
label_2b97d4:
    // 0x2b97d4: 0x8e8500c0  lw          $a1, 0xC0($s4)
    ctx->pc = 0x2b97d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
label_2b97d8:
    // 0x2b97d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b97d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b97dc:
    // 0x2b97dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b97dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b97e0:
    // 0x2b97e0: 0xc0af356  jal         func_2BCD58
label_2b97e4:
    if (ctx->pc == 0x2B97E4u) {
        ctx->pc = 0x2B97E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97E0u;
        // 0x2b97e4: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B97E8u;
        goto label_2b97e8;
    }
    ctx->pc = 0x2B97E0u;
    SET_GPR_U32(ctx, 31, 0x2B97E8u);
    ctx->pc = 0x2B97E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B97E0u;
    // 0x2b97e4: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCD58u, 0x2B97E0u, 0x2B97E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B97E8u;
label_2b97e8:
    // 0x2b97e8: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_2b97ec:
    if (ctx->pc == 0x2B97ECu) {
        ctx->pc = 0x2B97ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97E8u;
        // 0x2b97ec: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B97F0u;
        goto label_2b97f0;
    }
    ctx->pc = 0x2B97E8u;
    {
        const bool branch_taken_0x2b97e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B97ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97E8u;
        // 0x2b97ec: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b97e8) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B97F0u;
label_2b97f0:
    // 0x2b97f0: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b97f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b97f4:
    // 0x2b97f4: 0x8e710070  lw          $s1, 0x70($s3)
    ctx->pc = 0x2b97f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2b97f8:
    // 0x2b97f8: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b97f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b97fc:
    // 0x2b97fc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b97fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b9800:
    // 0x2b9800: 0x60f809  jalr        $v1
label_2b9804:
    if (ctx->pc == 0x2B9804u) {
        ctx->pc = 0x2B9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9800u;
        // 0x2b9804: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9808u;
        goto label_2b9808;
    }
    ctx->pc = 0x2B9800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9808u);
        ctx->pc = 0x2B9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9800u;
        // 0x2b9804: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9800u, 0x2B9808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9808u;
label_2b9808:
    // 0x2b9808: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b9808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b980c:
    // 0x2b980c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2b980cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2b9810:
    // 0x2b9810: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2b9810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2b9814:
    // 0x2b9814: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b9814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b9818:
    // 0x2b9818: 0x60f809  jalr        $v1
label_2b981c:
    if (ctx->pc == 0x2B981Cu) {
        ctx->pc = 0x2B981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9818u;
        // 0x2b981c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9820u;
        goto label_2b9820;
    }
    ctx->pc = 0x2B9818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9820u);
        ctx->pc = 0x2B981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9818u;
        // 0x2b981c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9818u, 0x2B9820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9820u;
label_2b9820:
    // 0x2b9820: 0x8e820100  lw          $v0, 0x100($s4)
    ctx->pc = 0x2b9820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_2b9824:
    // 0x2b9824: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b9824u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2b9828:
    // 0x2b9828: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x2b9828u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b982c:
    // 0x2b982c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b982cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b9830:
    // 0x2b9830: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b9830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b9834:
    // 0x2b9834: 0x60f809  jalr        $v1
label_2b9838:
    if (ctx->pc == 0x2B9838u) {
        ctx->pc = 0x2B9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9834u;
        // 0x2b9838: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B983Cu;
        goto label_2b983c;
    }
    ctx->pc = 0x2B9834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B983Cu);
        ctx->pc = 0x2B9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9834u;
        // 0x2b9838: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9834u, 0x2B983Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B983Cu;
label_2b983c:
    // 0x2b983c: 0x8e820100  lw          $v0, 0x100($s4)
    ctx->pc = 0x2b983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_2b9840:
    // 0x2b9840: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b9840u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b9844:
    // 0x2b9844: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2b9844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2b9848:
    // 0x2b9848: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b9848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b984c:
    // 0x2b984c: 0x60f809  jalr        $v1
label_2b9850:
    if (ctx->pc == 0x2B9850u) {
        ctx->pc = 0x2B9850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B984Cu;
        // 0x2b9850: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9854u;
        goto label_2b9854;
    }
    ctx->pc = 0x2B984Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9854u);
        ctx->pc = 0x2B9850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B984Cu;
        // 0x2b9850: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B984Cu, 0x2B9854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9854u;
label_2b9854:
    // 0x2b9854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9858:
    // 0x2b9858: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2b9858u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2b985c:
    // 0x2b985c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2b985cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2b9860:
    // 0x2b9860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b9860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9864:
    // 0x2b9864: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2b9864u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_2b9868:
    // 0x2b9868: 0xc0af3ca  jal         func_2BCF28
label_2b986c:
    if (ctx->pc == 0x2B986Cu) {
        ctx->pc = 0x2B986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9868u;
        // 0x2b986c: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9870u;
        goto label_2b9870;
    }
    ctx->pc = 0x2B9868u;
    SET_GPR_U32(ctx, 31, 0x2B9870u);
    ctx->pc = 0x2B986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9868u;
    // 0x2b986c: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCF28u, 0x2B9868u, 0x2B9870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9870u;
label_2b9870:
    // 0x2b9870: 0x100000ae  b           . + 4 + (0xAE << 2)
label_2b9874:
    if (ctx->pc == 0x2B9874u) {
        ctx->pc = 0x2B9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9870u;
        // 0x2b9874: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9878u;
        goto label_2b9878;
    }
    ctx->pc = 0x2B9870u;
    {
        const bool branch_taken_0x2b9870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9870u;
        // 0x2b9874: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9870) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B9878u;
label_2b9878:
    // 0x2b9878: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b9878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b987c:
    // 0x2b987c: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x2b987cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2b9880:
    // 0x2b9880: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b9880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b9884:
    // 0x2b9884: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b9884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b9888:
    // 0x2b9888: 0x60f809  jalr        $v1
label_2b988c:
    if (ctx->pc == 0x2B988Cu) {
        ctx->pc = 0x2B988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9888u;
        // 0x2b988c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9890u;
        goto label_2b9890;
    }
    ctx->pc = 0x2B9888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9890u);
        ctx->pc = 0x2B988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9888u;
        // 0x2b988c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9888u, 0x2B9890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9890u;
label_2b9890:
    // 0x2b9890: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b9890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b9894:
    // 0x2b9894: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b9894u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b9898:
    // 0x2b9898: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2b9898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2b989c:
    // 0x2b989c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b98a0:
    // 0x2b98a0: 0x60f809  jalr        $v1
label_2b98a4:
    if (ctx->pc == 0x2B98A4u) {
        ctx->pc = 0x2B98A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98A0u;
        // 0x2b98a4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B98A8u;
        goto label_2b98a8;
    }
    ctx->pc = 0x2B98A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B98A8u);
        ctx->pc = 0x2B98A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98A0u;
        // 0x2b98a4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B98A0u, 0x2B98A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B98A8u;
label_2b98a8:
    // 0x2b98a8: 0x8e850070  lw          $a1, 0x70($s4)
    ctx->pc = 0x2b98a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b98ac:
    // 0x2b98ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b98acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b98b0:
    // 0x2b98b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b98b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b98b4:
    // 0x2b98b4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2b98b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2b98b8:
    // 0x2b98b8: 0xc0af41e  jal         func_2BD078
label_2b98bc:
    if (ctx->pc == 0x2B98BCu) {
        ctx->pc = 0x2B98BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98B8u;
        // 0x2b98bc: 0x26860110  addiu       $a2, $s4, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B98C0u;
        goto label_2b98c0;
    }
    ctx->pc = 0x2B98B8u;
    SET_GPR_U32(ctx, 31, 0x2B98C0u);
    ctx->pc = 0x2B98BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B98B8u;
    // 0x2b98bc: 0x26860110  addiu       $a2, $s4, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD078u, 0x2B98B8u, 0x2B98C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B98C0u;
label_2b98c0:
    // 0x2b98c0: 0x1000009a  b           . + 4 + (0x9A << 2)
label_2b98c4:
    if (ctx->pc == 0x2B98C4u) {
        ctx->pc = 0x2B98C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98C0u;
        // 0x2b98c4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B98C8u;
        goto label_2b98c8;
    }
    ctx->pc = 0x2B98C0u;
    {
        const bool branch_taken_0x2b98c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B98C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98C0u;
        // 0x2b98c4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b98c0) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B98C8u;
label_2b98c8:
    // 0x2b98c8: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b98c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b98cc:
    // 0x2b98cc: 0x8e710070  lw          $s1, 0x70($s3)
    ctx->pc = 0x2b98ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2b98d0:
    // 0x2b98d0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b98d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b98d4:
    // 0x2b98d4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b98d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b98d8:
    // 0x2b98d8: 0x60f809  jalr        $v1
label_2b98dc:
    if (ctx->pc == 0x2B98DCu) {
        ctx->pc = 0x2B98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98D8u;
        // 0x2b98dc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B98E0u;
        goto label_2b98e0;
    }
    ctx->pc = 0x2B98D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B98E0u);
        ctx->pc = 0x2B98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98D8u;
        // 0x2b98dc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B98D8u, 0x2B98E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B98E0u;
label_2b98e0:
    // 0x2b98e0: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b98e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b98e4:
    // 0x2b98e4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b98e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2b98e8:
    // 0x2b98e8: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2b98e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2b98ec:
    // 0x2b98ec: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b98ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b98f0:
    // 0x2b98f0: 0x60f809  jalr        $v1
label_2b98f4:
    if (ctx->pc == 0x2B98F4u) {
        ctx->pc = 0x2B98F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98F0u;
        // 0x2b98f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B98F8u;
        goto label_2b98f8;
    }
    ctx->pc = 0x2B98F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B98F8u);
        ctx->pc = 0x2B98F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98F0u;
        // 0x2b98f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B98F0u, 0x2B98F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B98F8u;
label_2b98f8:
    // 0x2b98f8: 0x8e860100  lw          $a2, 0x100($s4)
    ctx->pc = 0x2b98f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_2b98fc:
    // 0x2b98fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b98fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b9900:
    // 0x2b9900: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b9900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b9904:
    // 0x2b9904: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x2b9904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b9908:
    // 0x2b9908: 0x84c50030  lh          $a1, 0x30($a2)
    ctx->pc = 0x2b9908u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 48)));
label_2b990c:
    // 0x2b990c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x2b990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_2b9910:
    // 0x2b9910: 0x40f809  jalr        $v0
label_2b9914:
    if (ctx->pc == 0x2B9914u) {
        ctx->pc = 0x2B9914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9910u;
        // 0x2b9914: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9918u;
        goto label_2b9918;
    }
    ctx->pc = 0x2B9910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B9918u);
        ctx->pc = 0x2B9914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9910u;
        // 0x2b9914: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9910u, 0x2B9918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9918u;
label_2b9918:
    // 0x2b9918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b991c:
    // 0x2b991c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2b991cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2b9920:
    // 0x2b9920: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b9920u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2b9924:
    // 0x2b9924: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b9924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9928:
    // 0x2b9928: 0xc0af480  jal         func_2BD200
label_2b992c:
    if (ctx->pc == 0x2B992Cu) {
        ctx->pc = 0x2B992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9928u;
        // 0x2b992c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9930u;
        goto label_2b9930;
    }
    ctx->pc = 0x2B9928u;
    SET_GPR_U32(ctx, 31, 0x2B9930u);
    ctx->pc = 0x2B992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9928u;
    // 0x2b992c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD200u, 0x2B9928u, 0x2B9930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9930u;
label_2b9930:
    // 0x2b9930: 0x1000007e  b           . + 4 + (0x7E << 2)
label_2b9934:
    if (ctx->pc == 0x2B9934u) {
        ctx->pc = 0x2B9934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9930u;
        // 0x2b9934: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9938u;
        goto label_2b9938;
    }
    ctx->pc = 0x2B9930u;
    {
        const bool branch_taken_0x2b9930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9930u;
        // 0x2b9934: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9930) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B9938u;
label_2b9938:
    // 0x2b9938: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b9938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b993c:
    // 0x2b993c: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x2b993cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2b9940:
    // 0x2b9940: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b9940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b9944:
    // 0x2b9944: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b9944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b9948:
    // 0x2b9948: 0x60f809  jalr        $v1
label_2b994c:
    if (ctx->pc == 0x2B994Cu) {
        ctx->pc = 0x2B994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9948u;
        // 0x2b994c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9950u;
        goto label_2b9950;
    }
    ctx->pc = 0x2B9948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9950u);
        ctx->pc = 0x2B994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9948u;
        // 0x2b994c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9948u, 0x2B9950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9950u;
label_2b9950:
    // 0x2b9950: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b9950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b9954:
    // 0x2b9954: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b9954u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b9958:
    // 0x2b9958: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2b9958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2b995c:
    // 0x2b995c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b995cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b9960:
    // 0x2b9960: 0x60f809  jalr        $v1
label_2b9964:
    if (ctx->pc == 0x2B9964u) {
        ctx->pc = 0x2B9964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9960u;
        // 0x2b9964: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9968u;
        goto label_2b9968;
    }
    ctx->pc = 0x2B9960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9968u);
        ctx->pc = 0x2B9964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9960u;
        // 0x2b9964: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9960u, 0x2B9968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9968u;
label_2b9968:
    // 0x2b9968: 0x8e850070  lw          $a1, 0x70($s4)
    ctx->pc = 0x2b9968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b996c:
    // 0x2b996c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b996cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9970:
    // 0x2b9970: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b9970u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b9974:
    // 0x2b9974: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2b9974u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2b9978:
    // 0x2b9978: 0xc0af4d0  jal         func_2BD340
label_2b997c:
    if (ctx->pc == 0x2B997Cu) {
        ctx->pc = 0x2B997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9978u;
        // 0x2b997c: 0x26860110  addiu       $a2, $s4, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9980u;
        goto label_2b9980;
    }
    ctx->pc = 0x2B9978u;
    SET_GPR_U32(ctx, 31, 0x2B9980u);
    ctx->pc = 0x2B997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9978u;
    // 0x2b997c: 0x26860110  addiu       $a2, $s4, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD340u, 0x2B9978u, 0x2B9980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9980u;
label_2b9980:
    // 0x2b9980: 0x1000006a  b           . + 4 + (0x6A << 2)
label_2b9984:
    if (ctx->pc == 0x2B9984u) {
        ctx->pc = 0x2B9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9980u;
        // 0x2b9984: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9988u;
        goto label_2b9988;
    }
    ctx->pc = 0x2B9980u;
    {
        const bool branch_taken_0x2b9980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9980u;
        // 0x2b9984: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9980) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B9988u;
label_2b9988:
    // 0x2b9988: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b9988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b998c:
    // 0x2b998c: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x2b998cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2b9990:
    // 0x2b9990: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2b9990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2b9994:
    // 0x2b9994: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b9994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b9998:
    // 0x2b9998: 0x60f809  jalr        $v1
label_2b999c:
    if (ctx->pc == 0x2B999Cu) {
        ctx->pc = 0x2B999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9998u;
        // 0x2b999c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99A0u;
        goto label_2b99a0;
    }
    ctx->pc = 0x2B9998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B99A0u);
        ctx->pc = 0x2B999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9998u;
        // 0x2b999c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9998u, 0x2B99A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B99A0u;
label_2b99a0:
    // 0x2b99a0: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b99a4:
    // 0x2b99a4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b99a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b99a8:
    // 0x2b99a8: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2b99a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2b99ac:
    // 0x2b99ac: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b99acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b99b0:
    // 0x2b99b0: 0x60f809  jalr        $v1
label_2b99b4:
    if (ctx->pc == 0x2B99B4u) {
        ctx->pc = 0x2B99B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99B0u;
        // 0x2b99b4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99B8u;
        goto label_2b99b8;
    }
    ctx->pc = 0x2B99B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B99B8u);
        ctx->pc = 0x2B99B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99B0u;
        // 0x2b99b4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B99B0u, 0x2B99B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B99B8u;
label_2b99b8:
    // 0x2b99b8: 0x8e8500c0  lw          $a1, 0xC0($s4)
    ctx->pc = 0x2b99b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
label_2b99bc:
    // 0x2b99bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b99bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b99c0:
    // 0x2b99c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b99c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b99c4:
    // 0x2b99c4: 0xc0af4f6  jal         func_2BD3D8
label_2b99c8:
    if (ctx->pc == 0x2B99C8u) {
        ctx->pc = 0x2B99C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99C4u;
        // 0x2b99c8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99CCu;
        goto label_2b99cc;
    }
    ctx->pc = 0x2B99C4u;
    SET_GPR_U32(ctx, 31, 0x2B99CCu);
    ctx->pc = 0x2B99C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99C4u;
    // 0x2b99c8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD3D8u, 0x2B99C4u, 0x2B99CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B99CCu;
label_2b99cc:
    // 0x2b99cc: 0x10000057  b           . + 4 + (0x57 << 2)
label_2b99d0:
    if (ctx->pc == 0x2B99D0u) {
        ctx->pc = 0x2B99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99CCu;
        // 0x2b99d0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99D4u;
        goto label_2b99d4;
    }
    ctx->pc = 0x2B99CCu;
    {
        const bool branch_taken_0x2b99cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99CCu;
        // 0x2b99d0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99cc) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B99D4u;
label_2b99d4:
    // 0x2b99d4: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x2b99d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2b99d8:
    // 0x2b99d8: 0x26650110  addiu       $a1, $s3, 0x110
    ctx->pc = 0x2b99d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
label_2b99dc:
    // 0x2b99dc: 0x8e860070  lw          $a2, 0x70($s4)
    ctx->pc = 0x2b99dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b99e0:
    // 0x2b99e0: 0xc0af52c  jal         func_2BD4B0
label_2b99e4:
    if (ctx->pc == 0x2B99E4u) {
        ctx->pc = 0x2B99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99E0u;
        // 0x2b99e4: 0x26870110  addiu       $a3, $s4, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99E8u;
        goto label_2b99e8;
    }
    ctx->pc = 0x2B99E0u;
    SET_GPR_U32(ctx, 31, 0x2B99E8u);
    ctx->pc = 0x2B99E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99E0u;
    // 0x2b99e4: 0x26870110  addiu       $a3, $s4, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD4B0u, 0x2B99E0u, 0x2B99E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B99E8u;
label_2b99e8:
    // 0x2b99e8: 0x10000050  b           . + 4 + (0x50 << 2)
label_2b99ec:
    if (ctx->pc == 0x2B99ECu) {
        ctx->pc = 0x2B99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99E8u;
        // 0x2b99ec: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B99F0u;
        goto label_2b99f0;
    }
    ctx->pc = 0x2B99E8u;
    {
        const bool branch_taken_0x2b99e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99E8u;
        // 0x2b99ec: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99e8) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B99F0u;
label_2b99f0:
    // 0x2b99f0: 0x8e820100  lw          $v0, 0x100($s4)
    ctx->pc = 0x2b99f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_2b99f4:
    // 0x2b99f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b99f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b99f8:
    // 0x2b99f8: 0x8e710070  lw          $s1, 0x70($s3)
    ctx->pc = 0x2b99f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2b99fc:
    // 0x2b99fc: 0x26720110  addiu       $s2, $s3, 0x110
    ctx->pc = 0x2b99fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
label_2b9a00:
    // 0x2b9a00: 0x84450030  lh          $a1, 0x30($v0)
    ctx->pc = 0x2b9a00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2b9a04:
    // 0x2b9a04: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2b9a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2b9a08:
    // 0x2b9a08: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x2b9a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_2b9a0c:
    // 0x2b9a0c: 0x60f809  jalr        $v1
label_2b9a10:
    if (ctx->pc == 0x2B9A10u) {
        ctx->pc = 0x2B9A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A0Cu;
        // 0x2b9a10: 0x8e900070  lw          $s0, 0x70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A14u;
        goto label_2b9a14;
    }
    ctx->pc = 0x2B9A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9A14u);
        ctx->pc = 0x2B9A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A0Cu;
        // 0x2b9a10: 0x8e900070  lw          $s0, 0x70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9A0Cu, 0x2B9A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9A14u;
label_2b9a14:
    // 0x2b9a14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9a18:
    // 0x2b9a18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b9a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b9a1c:
    // 0x2b9a1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b9a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9a20:
    // 0x2b9a20: 0xc0af5aa  jal         func_2BD6A8
label_2b9a24:
    if (ctx->pc == 0x2B9A24u) {
        ctx->pc = 0x2B9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A20u;
        // 0x2b9a24: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A28u;
        goto label_2b9a28;
    }
    ctx->pc = 0x2B9A20u;
    SET_GPR_U32(ctx, 31, 0x2B9A28u);
    ctx->pc = 0x2B9A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9A20u;
    // 0x2b9a24: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD6A8u, 0x2B9A20u, 0x2B9A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A28u;
label_2b9a28:
    // 0x2b9a28: 0x10000040  b           . + 4 + (0x40 << 2)
label_2b9a2c:
    if (ctx->pc == 0x2B9A2Cu) {
        ctx->pc = 0x2B9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A28u;
        // 0x2b9a2c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A30u;
        goto label_2b9a30;
    }
    ctx->pc = 0x2B9A28u;
    {
        const bool branch_taken_0x2b9a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A28u;
        // 0x2b9a2c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a28) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B9A30u;
label_2b9a30:
    // 0x2b9a30: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x2b9a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2b9a34:
    // 0x2b9a34: 0x26650110  addiu       $a1, $s3, 0x110
    ctx->pc = 0x2b9a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
label_2b9a38:
    // 0x2b9a38: 0x8e860070  lw          $a2, 0x70($s4)
    ctx->pc = 0x2b9a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b9a3c:
    // 0x2b9a3c: 0xc0af5fa  jal         func_2BD7E8
label_2b9a40:
    if (ctx->pc == 0x2B9A40u) {
        ctx->pc = 0x2B9A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A3Cu;
        // 0x2b9a40: 0x26870110  addiu       $a3, $s4, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A44u;
        goto label_2b9a44;
    }
    ctx->pc = 0x2B9A3Cu;
    SET_GPR_U32(ctx, 31, 0x2B9A44u);
    ctx->pc = 0x2B9A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9A3Cu;
    // 0x2b9a40: 0x26870110  addiu       $a3, $s4, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD7E8u, 0x2B9A3Cu, 0x2B9A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A44u;
label_2b9a44:
    // 0x2b9a44: 0x10000039  b           . + 4 + (0x39 << 2)
label_2b9a48:
    if (ctx->pc == 0x2B9A48u) {
        ctx->pc = 0x2B9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A44u;
        // 0x2b9a48: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A4Cu;
        goto label_2b9a4c;
    }
    ctx->pc = 0x2B9A44u;
    {
        const bool branch_taken_0x2b9a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A44u;
        // 0x2b9a48: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a44) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B9A4Cu;
label_2b9a4c:
    // 0x2b9a4c: 0x8e8600c0  lw          $a2, 0xC0($s4)
    ctx->pc = 0x2b9a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
label_2b9a50:
    // 0x2b9a50: 0x26650110  addiu       $a1, $s3, 0x110
    ctx->pc = 0x2b9a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
label_2b9a54:
    // 0x2b9a54: 0xc0af5fe  jal         func_2BD7F8
label_2b9a58:
    if (ctx->pc == 0x2B9A58u) {
        ctx->pc = 0x2B9A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A54u;
        // 0x2b9a58: 0x8e640070  lw          $a0, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A5Cu;
        goto label_2b9a5c;
    }
    ctx->pc = 0x2B9A54u;
    SET_GPR_U32(ctx, 31, 0x2B9A5Cu);
    ctx->pc = 0x2B9A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9A54u;
    // 0x2b9a58: 0x8e640070  lw          $a0, 0x70($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD7F8u, 0x2B9A54u, 0x2B9A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A5Cu;
label_2b9a5c:
    // 0x2b9a5c: 0x10000033  b           . + 4 + (0x33 << 2)
label_2b9a60:
    if (ctx->pc == 0x2B9A60u) {
        ctx->pc = 0x2B9A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A5Cu;
        // 0x2b9a60: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A64u;
        goto label_2b9a64;
    }
    ctx->pc = 0x2B9A5Cu;
    {
        const bool branch_taken_0x2b9a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A5Cu;
        // 0x2b9a60: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a5c) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B9A64u;
label_2b9a64:
    // 0x2b9a64: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b9a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b9a68:
    // 0x2b9a68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b9a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b9a6c:
    // 0x2b9a6c: 0x8e720070  lw          $s2, 0x70($s3)
    ctx->pc = 0x2b9a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2b9a70:
    // 0x2b9a70: 0x84450030  lh          $a1, 0x30($v0)
    ctx->pc = 0x2b9a70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2b9a74:
    // 0x2b9a74: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2b9a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2b9a78:
    // 0x2b9a78: 0x60f809  jalr        $v1
label_2b9a7c:
    if (ctx->pc == 0x2B9A7Cu) {
        ctx->pc = 0x2B9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A78u;
        // 0x2b9a7c: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9A80u;
        goto label_2b9a80;
    }
    ctx->pc = 0x2B9A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9A80u);
        ctx->pc = 0x2B9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A78u;
        // 0x2b9a7c: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9A78u, 0x2B9A80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9A80u;
label_2b9a80:
    // 0x2b9a80: 0x8e860100  lw          $a2, 0x100($s4)
    ctx->pc = 0x2b9a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_2b9a84:
    // 0x2b9a84: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2b9a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b9a88:
    // 0x2b9a88: 0x8e910070  lw          $s1, 0x70($s4)
    ctx->pc = 0x2b9a88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b9a8c:
    // 0x2b9a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9a90:
    // 0x2b9a90: 0x84c50030  lh          $a1, 0x30($a2)
    ctx->pc = 0x2b9a90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 48)));
label_2b9a94:
    // 0x2b9a94: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x2b9a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_2b9a98:
    // 0x2b9a98: 0x40f809  jalr        $v0
label_2b9a9c:
    if (ctx->pc == 0x2B9A9Cu) {
        ctx->pc = 0x2B9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A98u;
        // 0x2b9a9c: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9AA0u;
        goto label_2b9aa0;
    }
    ctx->pc = 0x2B9A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B9AA0u);
        ctx->pc = 0x2B9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A98u;
        // 0x2b9a9c: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9A98u, 0x2B9AA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9AA0u;
label_2b9aa0:
    // 0x2b9aa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b9aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b9aa4:
    // 0x2b9aa4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b9aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9aa8:
    // 0x2b9aa8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2b9aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9aac:
    // 0x2b9aac: 0xc0af60a  jal         func_2BD828
label_2b9ab0:
    if (ctx->pc == 0x2B9AB0u) {
        ctx->pc = 0x2B9AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AACu;
        // 0x2b9ab0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9AB4u;
        goto label_2b9ab4;
    }
    ctx->pc = 0x2B9AACu;
    SET_GPR_U32(ctx, 31, 0x2B9AB4u);
    ctx->pc = 0x2B9AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9AACu;
    // 0x2b9ab0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD828u, 0x2B9AACu, 0x2B9AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9AB4u;
label_2b9ab4:
    // 0x2b9ab4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2b9ab8:
    if (ctx->pc == 0x2B9AB8u) {
        ctx->pc = 0x2B9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AB4u;
        // 0x2b9ab8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9ABCu;
        goto label_2b9abc;
    }
    ctx->pc = 0x2B9AB4u;
    {
        const bool branch_taken_0x2b9ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AB4u;
        // 0x2b9ab8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ab4) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B9ABCu;
label_2b9abc:
    // 0x2b9abc: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b9ac0:
    // 0x2b9ac0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b9ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ac4:
    // 0x2b9ac4: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x2b9ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2b9ac8:
    // 0x2b9ac8: 0x84450030  lh          $a1, 0x30($v0)
    ctx->pc = 0x2b9ac8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2b9acc:
    // 0x2b9acc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2b9accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2b9ad0:
    // 0x2b9ad0: 0x60f809  jalr        $v1
label_2b9ad4:
    if (ctx->pc == 0x2B9AD4u) {
        ctx->pc = 0x2B9AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AD0u;
        // 0x2b9ad4: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9AD8u;
        goto label_2b9ad8;
    }
    ctx->pc = 0x2B9AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9AD8u);
        ctx->pc = 0x2B9AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AD0u;
        // 0x2b9ad4: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9AD0u, 0x2B9AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9AD8u;
label_2b9ad8:
    // 0x2b9ad8: 0x8e860070  lw          $a2, 0x70($s4)
    ctx->pc = 0x2b9ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2b9adc:
    // 0x2b9adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ae0:
    // 0x2b9ae0: 0x26870110  addiu       $a3, $s4, 0x110
    ctx->pc = 0x2b9ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
label_2b9ae4:
    // 0x2b9ae4: 0xc0af684  jal         func_2BDA10
label_2b9ae8:
    if (ctx->pc == 0x2B9AE8u) {
        ctx->pc = 0x2B9AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AE4u;
        // 0x2b9ae8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9AECu;
        goto label_2b9aec;
    }
    ctx->pc = 0x2B9AE4u;
    SET_GPR_U32(ctx, 31, 0x2B9AECu);
    ctx->pc = 0x2B9AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9AE4u;
    // 0x2b9ae8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDA10u, 0x2B9AE4u, 0x2B9AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9AECu;
label_2b9aec:
    // 0x2b9aec: 0x1000000f  b           . + 4 + (0xF << 2)
label_2b9af0:
    if (ctx->pc == 0x2B9AF0u) {
        ctx->pc = 0x2B9AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AECu;
        // 0x2b9af0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9AF4u;
        goto label_2b9af4;
    }
    ctx->pc = 0x2B9AECu;
    {
        const bool branch_taken_0x2b9aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AECu;
        // 0x2b9af0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9aec) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B9AF4u;
label_2b9af4:
    // 0x2b9af4: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x2b9af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
label_2b9af8:
    // 0x2b9af8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b9af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b9afc:
    // 0x2b9afc: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x2b9afcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_2b9b00:
    // 0x2b9b00: 0x84450030  lh          $a1, 0x30($v0)
    ctx->pc = 0x2b9b00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2b9b04:
    // 0x2b9b04: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2b9b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2b9b08:
    // 0x2b9b08: 0x60f809  jalr        $v1
label_2b9b0c:
    if (ctx->pc == 0x2B9B0Cu) {
        ctx->pc = 0x2B9B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B08u;
        // 0x2b9b0c: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9B10u;
        goto label_2b9b10;
    }
    ctx->pc = 0x2B9B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9B10u);
        ctx->pc = 0x2B9B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B08u;
        // 0x2b9b0c: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9B08u, 0x2B9B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9B10u;
label_2b9b10:
    // 0x2b9b10: 0x8e8600c0  lw          $a2, 0xC0($s4)
    ctx->pc = 0x2b9b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
label_2b9b14:
    // 0x2b9b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9b18:
    // 0x2b9b18: 0xc0af688  jal         func_2BDA20
label_2b9b1c:
    if (ctx->pc == 0x2B9B1Cu) {
        ctx->pc = 0x2B9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B18u;
        // 0x2b9b1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9B20u;
        goto label_2b9b20;
    }
    ctx->pc = 0x2B9B18u;
    SET_GPR_U32(ctx, 31, 0x2B9B20u);
    ctx->pc = 0x2B9B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9B18u;
    // 0x2b9b1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDA20u, 0x2B9B18u, 0x2B9B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9B20u;
label_2b9b20:
    // 0x2b9b20: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b9b24:
    if (ctx->pc == 0x2B9B24u) {
        ctx->pc = 0x2B9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B20u;
        // 0x2b9b24: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9B28u;
        goto label_2b9b28;
    }
    ctx->pc = 0x2B9B20u;
    {
        const bool branch_taken_0x2b9b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B20u;
        // 0x2b9b24: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b20) {
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B9B28u;
label_2b9b28:
    // 0x2b9b28: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b9b28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9b2c:
    // 0x2b9b2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9b30:
    // 0x2b9b30: 0x54620076  bnel        $v1, $v0, . + 4 + (0x76 << 2)
label_2b9b34:
    if (ctx->pc == 0x2B9B34u) {
        ctx->pc = 0x2B9B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B30u;
        // 0x2b9b34: 0x8eb50004  lw          $s5, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9B38u;
        goto label_2b9b38;
    }
    ctx->pc = 0x2B9B30u;
    {
        const bool branch_taken_0x2b9b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9b30) {
            ctx->pc = 0x2B9B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9B30u;
            // 0x2b9b34: 0x8eb50004  lw          $s5, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9D0Cu;
            goto label_2b9d0c;
        }
    }
    ctx->pc = 0x2B9B38u;
label_2b9b38:
    // 0x2b9b38: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2b9b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_2b9b3c:
    // 0x2b9b3c: 0x8ec40034  lw          $a0, 0x34($s6)
    ctx->pc = 0x2b9b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
label_2b9b40:
    // 0x2b9b40: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2b9b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b9b44:
    // 0x2b9b44: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x2b9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_2b9b48:
    // 0x2b9b48: 0x8c8500c0  lw          $a1, 0xC0($a0)
    ctx->pc = 0x2b9b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_2b9b4c:
    // 0x2b9b4c: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x2b9b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_2b9b50:
    // 0x2b9b50: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2b9b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_2b9b54:
    // 0x2b9b54: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2b9b54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2b9b58:
    // 0x2b9b58: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2b9b58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2b9b5c:
    // 0x2b9b5c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2b9b5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2b9b60:
    // 0x2b9b60: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2b9b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_2b9b64:
    // 0x2b9b64: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2b9b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2b9b68:
    // 0x2b9b68: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2b9b68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9b6c:
    // 0x2b9b6c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2b9b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_2b9b70:
    // 0x2b9b70: 0x13a60006  beq         $sp, $a2, . + 4 + (0x6 << 2)
label_2b9b74:
    if (ctx->pc == 0x2B9B74u) {
        ctx->pc = 0x2B9B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B70u;
        // 0x2b9b74: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9B78u;
        goto label_2b9b78;
    }
    ctx->pc = 0x2B9B70u;
    {
        const bool branch_taken_0x2b9b70 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B9B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B70u;
        // 0x2b9b74: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b70) {
            ctx->pc = 0x2B9B8Cu;
            goto label_2b9b8c;
        }
    }
    ctx->pc = 0x2B9B78u;
label_2b9b78:
    // 0x2b9b78: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2b9b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b9b7c:
    // 0x2b9b7c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2b9b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b9b80:
    // 0x2b9b80: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2b9b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2b9b84:
    // 0x2b9b84: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2b9b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2b9b88:
    // 0x2b9b88: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2b9b88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2b9b8c:
    // 0x2b9b8c: 0xc07df8a  jal         func_1F7E28
label_2b9b90:
    if (ctx->pc == 0x2B9B90u) {
        ctx->pc = 0x2B9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B8Cu;
        // 0x2b9b90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9B94u;
        goto label_2b9b94;
    }
    ctx->pc = 0x2B9B8Cu;
    SET_GPR_U32(ctx, 31, 0x2B9B94u);
    ctx->pc = 0x2B9B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9B8Cu;
    // 0x2b9b90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2B9B8Cu, 0x2B9B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9B94u;
label_2b9b94:
    // 0x2b9b94: 0x92a2000d  lbu         $v0, 0xD($s5)
    ctx->pc = 0x2b9b94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 13)));
label_2b9b98:
    // 0x2b9b98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b9b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b9b9c:
    // 0x2b9b9c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_2b9ba0:
    if (ctx->pc == 0x2B9BA0u) {
        ctx->pc = 0x2B9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B9Cu;
        // 0x2b9ba0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9BA4u;
        goto label_2b9ba4;
    }
    ctx->pc = 0x2B9B9Cu;
    {
        const bool branch_taken_0x2b9b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B9Cu;
        // 0x2b9ba0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b9c) {
            ctx->pc = 0x2B9C50u;
            goto label_2b9c50;
        }
    }
    ctx->pc = 0x2B9BA4u;
label_2b9ba4:
    // 0x2b9ba4: 0x26c40038  addiu       $a0, $s6, 0x38
    ctx->pc = 0x2b9ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 56));
label_2b9ba8:
    // 0x2b9ba8: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x2b9ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_2b9bac:
    // 0x2b9bac: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x2b9bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_2b9bb0:
    // 0x2b9bb0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2b9bb4:
    if (ctx->pc == 0x2B9BB4u) {
        ctx->pc = 0x2B9BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BB0u;
        // 0x2b9bb4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9BB8u;
        goto label_2b9bb8;
    }
    ctx->pc = 0x2B9BB0u;
    {
        const bool branch_taken_0x2b9bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BB0u;
        // 0x2b9bb4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9bb0) {
            ctx->pc = 0x2B9BBCu;
            goto label_2b9bbc;
        }
    }
    ctx->pc = 0x2B9BB8u;
label_2b9bb8:
    // 0x2b9bb8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b9bb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9bbc:
    // 0x2b9bbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9bc0:
    // 0x2b9bc0: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_2b9bc4:
    if (ctx->pc == 0x2B9BC4u) {
        ctx->pc = 0x2B9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BC0u;
        // 0x2b9bc4: 0xc4800050  lwc1        $f0, 0x50($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9BC8u;
        goto label_2b9bc8;
    }
    ctx->pc = 0x2B9BC0u;
    {
        const bool branch_taken_0x2b9bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9bc0) {
            ctx->pc = 0x2B9BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9BC0u;
            // 0x2b9bc4: 0xc4800050  lwc1        $f0, 0x50($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9BF8u;
            goto label_2b9bf8;
        }
    }
    ctx->pc = 0x2B9BC8u;
label_2b9bc8:
    // 0x2b9bc8: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x2b9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_2b9bcc:
    // 0x2b9bcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b9bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2b9bd0:
    // 0x2b9bd0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2b9bd4:
    // 0x2b9bd4: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x2b9bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_2b9bd8:
    // 0x2b9bd8: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x2b9bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_2b9bdc:
    // 0x2b9bdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b9bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2b9be0:
    // 0x2b9be0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2b9be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2b9be4:
    // 0x2b9be4: 0xe4610050  swc1        $f1, 0x50($v1)
    ctx->pc = 0x2b9be4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
label_2b9be8:
    // 0x2b9be8: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x2b9be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_2b9bec:
    // 0x2b9bec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b9becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b9bf0:
    // 0x2b9bf0: 0x10000017  b           . + 4 + (0x17 << 2)
label_2b9bf4:
    if (ctx->pc == 0x2B9BF4u) {
        ctx->pc = 0x2B9BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BF0u;
        // 0x2b9bf4: 0xac8200a0  sw          $v0, 0xA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9BF8u;
        goto label_2b9bf8;
    }
    ctx->pc = 0x2B9BF0u;
    {
        const bool branch_taken_0x2b9bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BF0u;
        // 0x2b9bf4: 0xac8200a0  sw          $v0, 0xA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9bf0) {
            ctx->pc = 0x2B9C50u;
            goto label_2b9c50;
        }
    }
    ctx->pc = 0x2B9BF8u;
label_2b9bf8:
    // 0x2b9bf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b9bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b9bfc:
    // 0x2b9bfc: 0x0  nop
    ctx->pc = 0x2b9bfcu;
    // NOP
label_2b9c00:
    // 0x2b9c00: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2b9c04:
    if (ctx->pc == 0x2B9C04u) {
        ctx->pc = 0x2B9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C00u;
        // 0x2b9c04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9C08u;
        goto label_2b9c08;
    }
    ctx->pc = 0x2B9C00u;
    {
        const bool branch_taken_0x2b9c00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C00u;
        // 0x2b9c04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9c00) {
            ctx->pc = 0x2B9C18u;
            goto label_2b9c18;
        }
    }
    ctx->pc = 0x2B9C08u;
label_2b9c08:
    // 0x2b9c08: 0xe4810050  swc1        $f1, 0x50($a0)
    ctx->pc = 0x2b9c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
label_2b9c0c:
    // 0x2b9c0c: 0x10000010  b           . + 4 + (0x10 << 2)
label_2b9c10:
    if (ctx->pc == 0x2B9C10u) {
        ctx->pc = 0x2B9C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C0Cu;
        // 0x2b9c10: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9C14u;
        goto label_2b9c14;
    }
    ctx->pc = 0x2B9C0Cu;
    {
        const bool branch_taken_0x2b9c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C0Cu;
        // 0x2b9c10: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9c0c) {
            ctx->pc = 0x2B9C50u;
            goto label_2b9c50;
        }
    }
    ctx->pc = 0x2B9C14u;
label_2b9c14:
    // 0x2b9c14: 0x0  nop
    ctx->pc = 0x2b9c14u;
    // NOP
label_2b9c18:
    // 0x2b9c18: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2b9c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2b9c1c:
    // 0x2b9c1c: 0x2cc20014  sltiu       $v0, $a2, 0x14
    ctx->pc = 0x2b9c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_2b9c20:
    // 0x2b9c20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2b9c24:
    if (ctx->pc == 0x2B9C24u) {
        ctx->pc = 0x2B9C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C20u;
        // 0x2b9c24: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9C28u;
        goto label_2b9c28;
    }
    ctx->pc = 0x2B9C20u;
    {
        const bool branch_taken_0x2b9c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C20u;
        // 0x2b9c24: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9c20) {
            ctx->pc = 0x2B9C50u;
            goto label_2b9c50;
        }
    }
    ctx->pc = 0x2B9C28u;
label_2b9c28:
    // 0x2b9c28: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x2b9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_2b9c2c:
    // 0x2b9c2c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2b9c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b9c30:
    // 0x2b9c30: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b9c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b9c34:
    // 0x2b9c34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b9c34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b9c38:
    // 0x2b9c38: 0x0  nop
    ctx->pc = 0x2b9c38u;
    // NOP
label_2b9c3c:
    // 0x2b9c3c: 0x4502fff7  bc1fl       . + 4 + (-0x9 << 2)
label_2b9c40:
    if (ctx->pc == 0x2B9C40u) {
        ctx->pc = 0x2B9C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C3Cu;
        // 0x2b9c40: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9C44u;
        goto label_2b9c44;
    }
    ctx->pc = 0x2B9C3Cu;
    {
        const bool branch_taken_0x2b9c3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b9c3c) {
            ctx->pc = 0x2B9C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9C3Cu;
            // 0x2b9c40: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9c1c;
        }
    }
    ctx->pc = 0x2B9C44u;
label_2b9c44:
    // 0x2b9c44: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2b9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2b9c48:
    // 0x2b9c48: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x2b9c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_2b9c4c:
    // 0x2b9c4c: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x2b9c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2b9c50:
    // 0x2b9c50: 0x92c2000d  lbu         $v0, 0xD($s6)
    ctx->pc = 0x2b9c50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 13)));
label_2b9c54:
    // 0x2b9c54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b9c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b9c58:
    // 0x2b9c58: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_2b9c5c:
    if (ctx->pc == 0x2B9C5Cu) {
        ctx->pc = 0x2B9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C58u;
        // 0x2b9c5c: 0x8eb50004  lw          $s5, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9C60u;
        goto label_2b9c60;
    }
    ctx->pc = 0x2B9C58u;
    {
        const bool branch_taken_0x2b9c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9c58) {
            ctx->pc = 0x2B9C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9C58u;
            // 0x2b9c5c: 0x8eb50004  lw          $s5, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9D0Cu;
            goto label_2b9d0c;
        }
    }
    ctx->pc = 0x2B9C60u;
label_2b9c60:
    // 0x2b9c60: 0x26a40038  addiu       $a0, $s5, 0x38
    ctx->pc = 0x2b9c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 56));
label_2b9c64:
    // 0x2b9c64: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x2b9c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_2b9c68:
    // 0x2b9c68: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x2b9c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_2b9c6c:
    // 0x2b9c6c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2b9c70:
    if (ctx->pc == 0x2B9C70u) {
        ctx->pc = 0x2B9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C6Cu;
        // 0x2b9c70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9C74u;
        goto label_2b9c74;
    }
    ctx->pc = 0x2B9C6Cu;
    {
        const bool branch_taken_0x2b9c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C6Cu;
        // 0x2b9c70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9c6c) {
            ctx->pc = 0x2B9C78u;
            goto label_2b9c78;
        }
    }
    ctx->pc = 0x2B9C74u;
label_2b9c74:
    // 0x2b9c74: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b9c74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9c78:
    // 0x2b9c78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9c7c:
    // 0x2b9c7c: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_2b9c80:
    if (ctx->pc == 0x2B9C80u) {
        ctx->pc = 0x2B9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C7Cu;
        // 0x2b9c80: 0xc4800050  lwc1        $f0, 0x50($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9C84u;
        goto label_2b9c84;
    }
    ctx->pc = 0x2B9C7Cu;
    {
        const bool branch_taken_0x2b9c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9c7c) {
            ctx->pc = 0x2B9C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9C7Cu;
            // 0x2b9c80: 0xc4800050  lwc1        $f0, 0x50($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9CB4u;
            goto label_2b9cb4;
        }
    }
    ctx->pc = 0x2B9C84u;
label_2b9c84:
    // 0x2b9c84: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x2b9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_2b9c88:
    // 0x2b9c88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b9c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2b9c8c:
    // 0x2b9c8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2b9c90:
    // 0x2b9c90: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x2b9c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_2b9c94:
    // 0x2b9c94: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x2b9c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_2b9c98:
    // 0x2b9c98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b9c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2b9c9c:
    // 0x2b9c9c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2b9c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2b9ca0:
    // 0x2b9ca0: 0xe4610050  swc1        $f1, 0x50($v1)
    ctx->pc = 0x2b9ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
label_2b9ca4:
    // 0x2b9ca4: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x2b9ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_2b9ca8:
    // 0x2b9ca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b9ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b9cac:
    // 0x2b9cac: 0x10000016  b           . + 4 + (0x16 << 2)
label_2b9cb0:
    if (ctx->pc == 0x2B9CB0u) {
        ctx->pc = 0x2B9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CACu;
        // 0x2b9cb0: 0xac8200a0  sw          $v0, 0xA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CB4u;
        goto label_2b9cb4;
    }
    ctx->pc = 0x2B9CACu;
    {
        const bool branch_taken_0x2b9cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CACu;
        // 0x2b9cb0: 0xac8200a0  sw          $v0, 0xA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cac) {
            ctx->pc = 0x2B9D08u;
            goto label_2b9d08;
        }
    }
    ctx->pc = 0x2B9CB4u;
label_2b9cb4:
    // 0x2b9cb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b9cb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b9cb8:
    // 0x2b9cb8: 0x0  nop
    ctx->pc = 0x2b9cb8u;
    // NOP
label_2b9cbc:
    // 0x2b9cbc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2b9cc0:
    if (ctx->pc == 0x2B9CC0u) {
        ctx->pc = 0x2B9CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CBCu;
        // 0x2b9cc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CC4u;
        goto label_2b9cc4;
    }
    ctx->pc = 0x2B9CBCu;
    {
        const bool branch_taken_0x2b9cbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CBCu;
        // 0x2b9cc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cbc) {
            ctx->pc = 0x2B9CD0u;
            goto label_2b9cd0;
        }
    }
    ctx->pc = 0x2B9CC4u;
label_2b9cc4:
    // 0x2b9cc4: 0xe4810050  swc1        $f1, 0x50($a0)
    ctx->pc = 0x2b9cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
label_2b9cc8:
    // 0x2b9cc8: 0x1000000f  b           . + 4 + (0xF << 2)
label_2b9ccc:
    if (ctx->pc == 0x2B9CCCu) {
        ctx->pc = 0x2B9CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CC8u;
        // 0x2b9ccc: 0xac960000  sw          $s6, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CD0u;
        goto label_2b9cd0;
    }
    ctx->pc = 0x2B9CC8u;
    {
        const bool branch_taken_0x2b9cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CC8u;
        // 0x2b9ccc: 0xac960000  sw          $s6, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cc8) {
            ctx->pc = 0x2B9D08u;
            goto label_2b9d08;
        }
    }
    ctx->pc = 0x2B9CD0u;
label_2b9cd0:
    // 0x2b9cd0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2b9cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2b9cd4:
    // 0x2b9cd4: 0x2cc20014  sltiu       $v0, $a2, 0x14
    ctx->pc = 0x2b9cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_2b9cd8:
    // 0x2b9cd8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2b9cdc:
    if (ctx->pc == 0x2B9CDCu) {
        ctx->pc = 0x2B9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CD8u;
        // 0x2b9cdc: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CE0u;
        goto label_2b9ce0;
    }
    ctx->pc = 0x2B9CD8u;
    {
        const bool branch_taken_0x2b9cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CD8u;
        // 0x2b9cdc: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cd8) {
            ctx->pc = 0x2B9D08u;
            goto label_2b9d08;
        }
    }
    ctx->pc = 0x2B9CE0u;
label_2b9ce0:
    // 0x2b9ce0: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x2b9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_2b9ce4:
    // 0x2b9ce4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2b9ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b9ce8:
    // 0x2b9ce8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b9ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b9cec:
    // 0x2b9cec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b9cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b9cf0:
    // 0x2b9cf0: 0x0  nop
    ctx->pc = 0x2b9cf0u;
    // NOP
label_2b9cf4:
    // 0x2b9cf4: 0x4502fff7  bc1fl       . + 4 + (-0x9 << 2)
label_2b9cf8:
    if (ctx->pc == 0x2B9CF8u) {
        ctx->pc = 0x2B9CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CF4u;
        // 0x2b9cf8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CFCu;
        goto label_2b9cfc;
    }
    ctx->pc = 0x2B9CF4u;
    {
        const bool branch_taken_0x2b9cf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b9cf4) {
            ctx->pc = 0x2B9CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9CF4u;
            // 0x2b9cf8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9CD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9cd4;
        }
    }
    ctx->pc = 0x2B9CFCu;
label_2b9cfc:
    // 0x2b9cfc: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2b9cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2b9d00:
    // 0x2b9d00: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x2b9d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_2b9d04:
    // 0x2b9d04: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x2b9d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2b9d08:
    // 0x2b9d08: 0x8eb50004  lw          $s5, 0x4($s5)
    ctx->pc = 0x2b9d08u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2b9d0c:
    // 0x2b9d0c: 0x56a0fcac  bnel        $s5, $zero, . + 4 + (-0x354 << 2)
label_2b9d10:
    if (ctx->pc == 0x2B9D10u) {
        ctx->pc = 0x2B9D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D0Cu;
        // 0x2b9d10: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D14u;
        goto label_2b9d14;
    }
    ctx->pc = 0x2B9D0Cu;
    {
        const bool branch_taken_0x2b9d0c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d0c) {
            ctx->pc = 0x2B9D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9D0Cu;
            // 0x2b9d10: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8fc0;
        }
    }
    ctx->pc = 0x2B9D14u;
label_2b9d14:
    // 0x2b9d14: 0x8ed60004  lw          $s6, 0x4($s6)
    ctx->pc = 0x2b9d14u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2b9d18:
    // 0x2b9d18: 0x56c0fc9d  bnel        $s6, $zero, . + 4 + (-0x363 << 2)
label_2b9d1c:
    if (ctx->pc == 0x2B9D1Cu) {
        ctx->pc = 0x2B9D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D18u;
        // 0x2b9d1c: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D20u;
        goto label_2b9d20;
    }
    ctx->pc = 0x2B9D18u;
    {
        const bool branch_taken_0x2b9d18 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d18) {
            ctx->pc = 0x2B9D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9D18u;
            // 0x2b9d1c: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8f90;
        }
    }
    ctx->pc = 0x2B9D20u;
label_2b9d20:
    // 0x2b9d20: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2b9d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2b9d24:
    // 0x2b9d24: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2b9d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2b9d28:
    // 0x2b9d28: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2b9d28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2b9d2c:
    // 0x2b9d2c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2b9d2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2b9d30:
    // 0x2b9d30: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2b9d30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b9d34:
    // 0x2b9d34: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2b9d34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b9d38:
    // 0x2b9d38: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2b9d38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b9d3c:
    // 0x2b9d3c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2b9d3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b9d40:
    // 0x2b9d40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b9d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b9d44:
    // 0x2b9d44: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x2b9d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2b9d48:
    // 0x2b9d48: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2b9d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2b9d4c:
    // 0x2b9d4c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2b9d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b9d50:
    // 0x2b9d50: 0x3e00008  jr          $ra
label_2b9d54:
    if (ctx->pc == 0x2B9D54u) {
        ctx->pc = 0x2B9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D50u;
        // 0x2b9d54: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D58u;
        goto label_fallthrough_0x2b9d50;
    }
    ctx->pc = 0x2B9D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D50u;
        // 0x2b9d54: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b9d50:
    ctx->pc = 0x2B9D58u;
}
