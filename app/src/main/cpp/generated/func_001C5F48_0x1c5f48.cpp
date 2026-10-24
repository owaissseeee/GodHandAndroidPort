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

// Function: func_001C5F48
// Address: 0x1c5f48 - 0x1c6898
void func_001C5F48_0x1c5f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C5F48_0x1c5f48");
#endif

    switch (ctx->pc) {
        case 0x1c5f48u: goto label_1c5f48;
        case 0x1c5f4cu: goto label_1c5f4c;
        case 0x1c5f50u: goto label_1c5f50;
        case 0x1c5f54u: goto label_1c5f54;
        case 0x1c5f58u: goto label_1c5f58;
        case 0x1c5f5cu: goto label_1c5f5c;
        case 0x1c5f60u: goto label_1c5f60;
        case 0x1c5f64u: goto label_1c5f64;
        case 0x1c5f68u: goto label_1c5f68;
        case 0x1c5f6cu: goto label_1c5f6c;
        case 0x1c5f70u: goto label_1c5f70;
        case 0x1c5f74u: goto label_1c5f74;
        case 0x1c5f78u: goto label_1c5f78;
        case 0x1c5f7cu: goto label_1c5f7c;
        case 0x1c5f80u: goto label_1c5f80;
        case 0x1c5f84u: goto label_1c5f84;
        case 0x1c5f88u: goto label_1c5f88;
        case 0x1c5f8cu: goto label_1c5f8c;
        case 0x1c5f90u: goto label_1c5f90;
        case 0x1c5f94u: goto label_1c5f94;
        case 0x1c5f98u: goto label_1c5f98;
        case 0x1c5f9cu: goto label_1c5f9c;
        case 0x1c5fa0u: goto label_1c5fa0;
        case 0x1c5fa4u: goto label_1c5fa4;
        case 0x1c5fa8u: goto label_1c5fa8;
        case 0x1c5facu: goto label_1c5fac;
        case 0x1c5fb0u: goto label_1c5fb0;
        case 0x1c5fb4u: goto label_1c5fb4;
        case 0x1c5fb8u: goto label_1c5fb8;
        case 0x1c5fbcu: goto label_1c5fbc;
        case 0x1c5fc0u: goto label_1c5fc0;
        case 0x1c5fc4u: goto label_1c5fc4;
        case 0x1c5fc8u: goto label_1c5fc8;
        case 0x1c5fccu: goto label_1c5fcc;
        case 0x1c5fd0u: goto label_1c5fd0;
        case 0x1c5fd4u: goto label_1c5fd4;
        case 0x1c5fd8u: goto label_1c5fd8;
        case 0x1c5fdcu: goto label_1c5fdc;
        case 0x1c5fe0u: goto label_1c5fe0;
        case 0x1c5fe4u: goto label_1c5fe4;
        case 0x1c5fe8u: goto label_1c5fe8;
        case 0x1c5fecu: goto label_1c5fec;
        case 0x1c5ff0u: goto label_1c5ff0;
        case 0x1c5ff4u: goto label_1c5ff4;
        case 0x1c5ff8u: goto label_1c5ff8;
        case 0x1c5ffcu: goto label_1c5ffc;
        case 0x1c6000u: goto label_1c6000;
        case 0x1c6004u: goto label_1c6004;
        case 0x1c6008u: goto label_1c6008;
        case 0x1c600cu: goto label_1c600c;
        case 0x1c6010u: goto label_1c6010;
        case 0x1c6014u: goto label_1c6014;
        case 0x1c6018u: goto label_1c6018;
        case 0x1c601cu: goto label_1c601c;
        case 0x1c6020u: goto label_1c6020;
        case 0x1c6024u: goto label_1c6024;
        case 0x1c6028u: goto label_1c6028;
        case 0x1c602cu: goto label_1c602c;
        case 0x1c6030u: goto label_1c6030;
        case 0x1c6034u: goto label_1c6034;
        case 0x1c6038u: goto label_1c6038;
        case 0x1c603cu: goto label_1c603c;
        case 0x1c6040u: goto label_1c6040;
        case 0x1c6044u: goto label_1c6044;
        case 0x1c6048u: goto label_1c6048;
        case 0x1c604cu: goto label_1c604c;
        case 0x1c6050u: goto label_1c6050;
        case 0x1c6054u: goto label_1c6054;
        case 0x1c6058u: goto label_1c6058;
        case 0x1c605cu: goto label_1c605c;
        case 0x1c6060u: goto label_1c6060;
        case 0x1c6064u: goto label_1c6064;
        case 0x1c6068u: goto label_1c6068;
        case 0x1c606cu: goto label_1c606c;
        case 0x1c6070u: goto label_1c6070;
        case 0x1c6074u: goto label_1c6074;
        case 0x1c6078u: goto label_1c6078;
        case 0x1c607cu: goto label_1c607c;
        case 0x1c6080u: goto label_1c6080;
        case 0x1c6084u: goto label_1c6084;
        case 0x1c6088u: goto label_1c6088;
        case 0x1c608cu: goto label_1c608c;
        case 0x1c6090u: goto label_1c6090;
        case 0x1c6094u: goto label_1c6094;
        case 0x1c6098u: goto label_1c6098;
        case 0x1c609cu: goto label_1c609c;
        case 0x1c60a0u: goto label_1c60a0;
        case 0x1c60a4u: goto label_1c60a4;
        case 0x1c60a8u: goto label_1c60a8;
        case 0x1c60acu: goto label_1c60ac;
        case 0x1c60b0u: goto label_1c60b0;
        case 0x1c60b4u: goto label_1c60b4;
        case 0x1c60b8u: goto label_1c60b8;
        case 0x1c60bcu: goto label_1c60bc;
        case 0x1c60c0u: goto label_1c60c0;
        case 0x1c60c4u: goto label_1c60c4;
        case 0x1c60c8u: goto label_1c60c8;
        case 0x1c60ccu: goto label_1c60cc;
        case 0x1c60d0u: goto label_1c60d0;
        case 0x1c60d4u: goto label_1c60d4;
        case 0x1c60d8u: goto label_1c60d8;
        case 0x1c60dcu: goto label_1c60dc;
        case 0x1c60e0u: goto label_1c60e0;
        case 0x1c60e4u: goto label_1c60e4;
        case 0x1c60e8u: goto label_1c60e8;
        case 0x1c60ecu: goto label_1c60ec;
        case 0x1c60f0u: goto label_1c60f0;
        case 0x1c60f4u: goto label_1c60f4;
        case 0x1c60f8u: goto label_1c60f8;
        case 0x1c60fcu: goto label_1c60fc;
        case 0x1c6100u: goto label_1c6100;
        case 0x1c6104u: goto label_1c6104;
        case 0x1c6108u: goto label_1c6108;
        case 0x1c610cu: goto label_1c610c;
        case 0x1c6110u: goto label_1c6110;
        case 0x1c6114u: goto label_1c6114;
        case 0x1c6118u: goto label_1c6118;
        case 0x1c611cu: goto label_1c611c;
        case 0x1c6120u: goto label_1c6120;
        case 0x1c6124u: goto label_1c6124;
        case 0x1c6128u: goto label_1c6128;
        case 0x1c612cu: goto label_1c612c;
        case 0x1c6130u: goto label_1c6130;
        case 0x1c6134u: goto label_1c6134;
        case 0x1c6138u: goto label_1c6138;
        case 0x1c613cu: goto label_1c613c;
        case 0x1c6140u: goto label_1c6140;
        case 0x1c6144u: goto label_1c6144;
        case 0x1c6148u: goto label_1c6148;
        case 0x1c614cu: goto label_1c614c;
        case 0x1c6150u: goto label_1c6150;
        case 0x1c6154u: goto label_1c6154;
        case 0x1c6158u: goto label_1c6158;
        case 0x1c615cu: goto label_1c615c;
        case 0x1c6160u: goto label_1c6160;
        case 0x1c6164u: goto label_1c6164;
        case 0x1c6168u: goto label_1c6168;
        case 0x1c616cu: goto label_1c616c;
        case 0x1c6170u: goto label_1c6170;
        case 0x1c6174u: goto label_1c6174;
        case 0x1c6178u: goto label_1c6178;
        case 0x1c617cu: goto label_1c617c;
        case 0x1c6180u: goto label_1c6180;
        case 0x1c6184u: goto label_1c6184;
        case 0x1c6188u: goto label_1c6188;
        case 0x1c618cu: goto label_1c618c;
        case 0x1c6190u: goto label_1c6190;
        case 0x1c6194u: goto label_1c6194;
        case 0x1c6198u: goto label_1c6198;
        case 0x1c619cu: goto label_1c619c;
        case 0x1c61a0u: goto label_1c61a0;
        case 0x1c61a4u: goto label_1c61a4;
        case 0x1c61a8u: goto label_1c61a8;
        case 0x1c61acu: goto label_1c61ac;
        case 0x1c61b0u: goto label_1c61b0;
        case 0x1c61b4u: goto label_1c61b4;
        case 0x1c61b8u: goto label_1c61b8;
        case 0x1c61bcu: goto label_1c61bc;
        case 0x1c61c0u: goto label_1c61c0;
        case 0x1c61c4u: goto label_1c61c4;
        case 0x1c61c8u: goto label_1c61c8;
        case 0x1c61ccu: goto label_1c61cc;
        case 0x1c61d0u: goto label_1c61d0;
        case 0x1c61d4u: goto label_1c61d4;
        case 0x1c61d8u: goto label_1c61d8;
        case 0x1c61dcu: goto label_1c61dc;
        case 0x1c61e0u: goto label_1c61e0;
        case 0x1c61e4u: goto label_1c61e4;
        case 0x1c61e8u: goto label_1c61e8;
        case 0x1c61ecu: goto label_1c61ec;
        case 0x1c61f0u: goto label_1c61f0;
        case 0x1c61f4u: goto label_1c61f4;
        case 0x1c61f8u: goto label_1c61f8;
        case 0x1c61fcu: goto label_1c61fc;
        case 0x1c6200u: goto label_1c6200;
        case 0x1c6204u: goto label_1c6204;
        case 0x1c6208u: goto label_1c6208;
        case 0x1c620cu: goto label_1c620c;
        case 0x1c6210u: goto label_1c6210;
        case 0x1c6214u: goto label_1c6214;
        case 0x1c6218u: goto label_1c6218;
        case 0x1c621cu: goto label_1c621c;
        case 0x1c6220u: goto label_1c6220;
        case 0x1c6224u: goto label_1c6224;
        case 0x1c6228u: goto label_1c6228;
        case 0x1c622cu: goto label_1c622c;
        case 0x1c6230u: goto label_1c6230;
        case 0x1c6234u: goto label_1c6234;
        case 0x1c6238u: goto label_1c6238;
        case 0x1c623cu: goto label_1c623c;
        case 0x1c6240u: goto label_1c6240;
        case 0x1c6244u: goto label_1c6244;
        case 0x1c6248u: goto label_1c6248;
        case 0x1c624cu: goto label_1c624c;
        case 0x1c6250u: goto label_1c6250;
        case 0x1c6254u: goto label_1c6254;
        case 0x1c6258u: goto label_1c6258;
        case 0x1c625cu: goto label_1c625c;
        case 0x1c6260u: goto label_1c6260;
        case 0x1c6264u: goto label_1c6264;
        case 0x1c6268u: goto label_1c6268;
        case 0x1c626cu: goto label_1c626c;
        case 0x1c6270u: goto label_1c6270;
        case 0x1c6274u: goto label_1c6274;
        case 0x1c6278u: goto label_1c6278;
        case 0x1c627cu: goto label_1c627c;
        case 0x1c6280u: goto label_1c6280;
        case 0x1c6284u: goto label_1c6284;
        case 0x1c6288u: goto label_1c6288;
        case 0x1c628cu: goto label_1c628c;
        case 0x1c6290u: goto label_1c6290;
        case 0x1c6294u: goto label_1c6294;
        case 0x1c6298u: goto label_1c6298;
        case 0x1c629cu: goto label_1c629c;
        case 0x1c62a0u: goto label_1c62a0;
        case 0x1c62a4u: goto label_1c62a4;
        case 0x1c62a8u: goto label_1c62a8;
        case 0x1c62acu: goto label_1c62ac;
        case 0x1c62b0u: goto label_1c62b0;
        case 0x1c62b4u: goto label_1c62b4;
        case 0x1c62b8u: goto label_1c62b8;
        case 0x1c62bcu: goto label_1c62bc;
        case 0x1c62c0u: goto label_1c62c0;
        case 0x1c62c4u: goto label_1c62c4;
        case 0x1c62c8u: goto label_1c62c8;
        case 0x1c62ccu: goto label_1c62cc;
        case 0x1c62d0u: goto label_1c62d0;
        case 0x1c62d4u: goto label_1c62d4;
        case 0x1c62d8u: goto label_1c62d8;
        case 0x1c62dcu: goto label_1c62dc;
        case 0x1c62e0u: goto label_1c62e0;
        case 0x1c62e4u: goto label_1c62e4;
        case 0x1c62e8u: goto label_1c62e8;
        case 0x1c62ecu: goto label_1c62ec;
        case 0x1c62f0u: goto label_1c62f0;
        case 0x1c62f4u: goto label_1c62f4;
        case 0x1c62f8u: goto label_1c62f8;
        case 0x1c62fcu: goto label_1c62fc;
        case 0x1c6300u: goto label_1c6300;
        case 0x1c6304u: goto label_1c6304;
        case 0x1c6308u: goto label_1c6308;
        case 0x1c630cu: goto label_1c630c;
        case 0x1c6310u: goto label_1c6310;
        case 0x1c6314u: goto label_1c6314;
        case 0x1c6318u: goto label_1c6318;
        case 0x1c631cu: goto label_1c631c;
        case 0x1c6320u: goto label_1c6320;
        case 0x1c6324u: goto label_1c6324;
        case 0x1c6328u: goto label_1c6328;
        case 0x1c632cu: goto label_1c632c;
        case 0x1c6330u: goto label_1c6330;
        case 0x1c6334u: goto label_1c6334;
        case 0x1c6338u: goto label_1c6338;
        case 0x1c633cu: goto label_1c633c;
        case 0x1c6340u: goto label_1c6340;
        case 0x1c6344u: goto label_1c6344;
        case 0x1c6348u: goto label_1c6348;
        case 0x1c634cu: goto label_1c634c;
        case 0x1c6350u: goto label_1c6350;
        case 0x1c6354u: goto label_1c6354;
        case 0x1c6358u: goto label_1c6358;
        case 0x1c635cu: goto label_1c635c;
        case 0x1c6360u: goto label_1c6360;
        case 0x1c6364u: goto label_1c6364;
        case 0x1c6368u: goto label_1c6368;
        case 0x1c636cu: goto label_1c636c;
        case 0x1c6370u: goto label_1c6370;
        case 0x1c6374u: goto label_1c6374;
        case 0x1c6378u: goto label_1c6378;
        case 0x1c637cu: goto label_1c637c;
        case 0x1c6380u: goto label_1c6380;
        case 0x1c6384u: goto label_1c6384;
        case 0x1c6388u: goto label_1c6388;
        case 0x1c638cu: goto label_1c638c;
        case 0x1c6390u: goto label_1c6390;
        case 0x1c6394u: goto label_1c6394;
        case 0x1c6398u: goto label_1c6398;
        case 0x1c639cu: goto label_1c639c;
        case 0x1c63a0u: goto label_1c63a0;
        case 0x1c63a4u: goto label_1c63a4;
        case 0x1c63a8u: goto label_1c63a8;
        case 0x1c63acu: goto label_1c63ac;
        case 0x1c63b0u: goto label_1c63b0;
        case 0x1c63b4u: goto label_1c63b4;
        case 0x1c63b8u: goto label_1c63b8;
        case 0x1c63bcu: goto label_1c63bc;
        case 0x1c63c0u: goto label_1c63c0;
        case 0x1c63c4u: goto label_1c63c4;
        case 0x1c63c8u: goto label_1c63c8;
        case 0x1c63ccu: goto label_1c63cc;
        case 0x1c63d0u: goto label_1c63d0;
        case 0x1c63d4u: goto label_1c63d4;
        case 0x1c63d8u: goto label_1c63d8;
        case 0x1c63dcu: goto label_1c63dc;
        case 0x1c63e0u: goto label_1c63e0;
        case 0x1c63e4u: goto label_1c63e4;
        case 0x1c63e8u: goto label_1c63e8;
        case 0x1c63ecu: goto label_1c63ec;
        case 0x1c63f0u: goto label_1c63f0;
        case 0x1c63f4u: goto label_1c63f4;
        case 0x1c63f8u: goto label_1c63f8;
        case 0x1c63fcu: goto label_1c63fc;
        case 0x1c6400u: goto label_1c6400;
        case 0x1c6404u: goto label_1c6404;
        case 0x1c6408u: goto label_1c6408;
        case 0x1c640cu: goto label_1c640c;
        case 0x1c6410u: goto label_1c6410;
        case 0x1c6414u: goto label_1c6414;
        case 0x1c6418u: goto label_1c6418;
        case 0x1c641cu: goto label_1c641c;
        case 0x1c6420u: goto label_1c6420;
        case 0x1c6424u: goto label_1c6424;
        case 0x1c6428u: goto label_1c6428;
        case 0x1c642cu: goto label_1c642c;
        case 0x1c6430u: goto label_1c6430;
        case 0x1c6434u: goto label_1c6434;
        case 0x1c6438u: goto label_1c6438;
        case 0x1c643cu: goto label_1c643c;
        case 0x1c6440u: goto label_1c6440;
        case 0x1c6444u: goto label_1c6444;
        case 0x1c6448u: goto label_1c6448;
        case 0x1c644cu: goto label_1c644c;
        case 0x1c6450u: goto label_1c6450;
        case 0x1c6454u: goto label_1c6454;
        case 0x1c6458u: goto label_1c6458;
        case 0x1c645cu: goto label_1c645c;
        case 0x1c6460u: goto label_1c6460;
        case 0x1c6464u: goto label_1c6464;
        case 0x1c6468u: goto label_1c6468;
        case 0x1c646cu: goto label_1c646c;
        case 0x1c6470u: goto label_1c6470;
        case 0x1c6474u: goto label_1c6474;
        case 0x1c6478u: goto label_1c6478;
        case 0x1c647cu: goto label_1c647c;
        case 0x1c6480u: goto label_1c6480;
        case 0x1c6484u: goto label_1c6484;
        case 0x1c6488u: goto label_1c6488;
        case 0x1c648cu: goto label_1c648c;
        case 0x1c6490u: goto label_1c6490;
        case 0x1c6494u: goto label_1c6494;
        case 0x1c6498u: goto label_1c6498;
        case 0x1c649cu: goto label_1c649c;
        case 0x1c64a0u: goto label_1c64a0;
        case 0x1c64a4u: goto label_1c64a4;
        case 0x1c64a8u: goto label_1c64a8;
        case 0x1c64acu: goto label_1c64ac;
        case 0x1c64b0u: goto label_1c64b0;
        case 0x1c64b4u: goto label_1c64b4;
        case 0x1c64b8u: goto label_1c64b8;
        case 0x1c64bcu: goto label_1c64bc;
        case 0x1c64c0u: goto label_1c64c0;
        case 0x1c64c4u: goto label_1c64c4;
        case 0x1c64c8u: goto label_1c64c8;
        case 0x1c64ccu: goto label_1c64cc;
        case 0x1c64d0u: goto label_1c64d0;
        case 0x1c64d4u: goto label_1c64d4;
        case 0x1c64d8u: goto label_1c64d8;
        case 0x1c64dcu: goto label_1c64dc;
        case 0x1c64e0u: goto label_1c64e0;
        case 0x1c64e4u: goto label_1c64e4;
        case 0x1c64e8u: goto label_1c64e8;
        case 0x1c64ecu: goto label_1c64ec;
        case 0x1c64f0u: goto label_1c64f0;
        case 0x1c64f4u: goto label_1c64f4;
        case 0x1c64f8u: goto label_1c64f8;
        case 0x1c64fcu: goto label_1c64fc;
        case 0x1c6500u: goto label_1c6500;
        case 0x1c6504u: goto label_1c6504;
        case 0x1c6508u: goto label_1c6508;
        case 0x1c650cu: goto label_1c650c;
        case 0x1c6510u: goto label_1c6510;
        case 0x1c6514u: goto label_1c6514;
        case 0x1c6518u: goto label_1c6518;
        case 0x1c651cu: goto label_1c651c;
        case 0x1c6520u: goto label_1c6520;
        case 0x1c6524u: goto label_1c6524;
        case 0x1c6528u: goto label_1c6528;
        case 0x1c652cu: goto label_1c652c;
        case 0x1c6530u: goto label_1c6530;
        case 0x1c6534u: goto label_1c6534;
        case 0x1c6538u: goto label_1c6538;
        case 0x1c653cu: goto label_1c653c;
        case 0x1c6540u: goto label_1c6540;
        case 0x1c6544u: goto label_1c6544;
        case 0x1c6548u: goto label_1c6548;
        case 0x1c654cu: goto label_1c654c;
        case 0x1c6550u: goto label_1c6550;
        case 0x1c6554u: goto label_1c6554;
        case 0x1c6558u: goto label_1c6558;
        case 0x1c655cu: goto label_1c655c;
        case 0x1c6560u: goto label_1c6560;
        case 0x1c6564u: goto label_1c6564;
        case 0x1c6568u: goto label_1c6568;
        case 0x1c656cu: goto label_1c656c;
        case 0x1c6570u: goto label_1c6570;
        case 0x1c6574u: goto label_1c6574;
        case 0x1c6578u: goto label_1c6578;
        case 0x1c657cu: goto label_1c657c;
        case 0x1c6580u: goto label_1c6580;
        case 0x1c6584u: goto label_1c6584;
        case 0x1c6588u: goto label_1c6588;
        case 0x1c658cu: goto label_1c658c;
        case 0x1c6590u: goto label_1c6590;
        case 0x1c6594u: goto label_1c6594;
        case 0x1c6598u: goto label_1c6598;
        case 0x1c659cu: goto label_1c659c;
        case 0x1c65a0u: goto label_1c65a0;
        case 0x1c65a4u: goto label_1c65a4;
        case 0x1c65a8u: goto label_1c65a8;
        case 0x1c65acu: goto label_1c65ac;
        case 0x1c65b0u: goto label_1c65b0;
        case 0x1c65b4u: goto label_1c65b4;
        case 0x1c65b8u: goto label_1c65b8;
        case 0x1c65bcu: goto label_1c65bc;
        case 0x1c65c0u: goto label_1c65c0;
        case 0x1c65c4u: goto label_1c65c4;
        case 0x1c65c8u: goto label_1c65c8;
        case 0x1c65ccu: goto label_1c65cc;
        case 0x1c65d0u: goto label_1c65d0;
        case 0x1c65d4u: goto label_1c65d4;
        case 0x1c65d8u: goto label_1c65d8;
        case 0x1c65dcu: goto label_1c65dc;
        case 0x1c65e0u: goto label_1c65e0;
        case 0x1c65e4u: goto label_1c65e4;
        case 0x1c65e8u: goto label_1c65e8;
        case 0x1c65ecu: goto label_1c65ec;
        case 0x1c65f0u: goto label_1c65f0;
        case 0x1c65f4u: goto label_1c65f4;
        case 0x1c65f8u: goto label_1c65f8;
        case 0x1c65fcu: goto label_1c65fc;
        case 0x1c6600u: goto label_1c6600;
        case 0x1c6604u: goto label_1c6604;
        case 0x1c6608u: goto label_1c6608;
        case 0x1c660cu: goto label_1c660c;
        case 0x1c6610u: goto label_1c6610;
        case 0x1c6614u: goto label_1c6614;
        case 0x1c6618u: goto label_1c6618;
        case 0x1c661cu: goto label_1c661c;
        case 0x1c6620u: goto label_1c6620;
        case 0x1c6624u: goto label_1c6624;
        case 0x1c6628u: goto label_1c6628;
        case 0x1c662cu: goto label_1c662c;
        case 0x1c6630u: goto label_1c6630;
        case 0x1c6634u: goto label_1c6634;
        case 0x1c6638u: goto label_1c6638;
        case 0x1c663cu: goto label_1c663c;
        case 0x1c6640u: goto label_1c6640;
        case 0x1c6644u: goto label_1c6644;
        case 0x1c6648u: goto label_1c6648;
        case 0x1c664cu: goto label_1c664c;
        case 0x1c6650u: goto label_1c6650;
        case 0x1c6654u: goto label_1c6654;
        case 0x1c6658u: goto label_1c6658;
        case 0x1c665cu: goto label_1c665c;
        case 0x1c6660u: goto label_1c6660;
        case 0x1c6664u: goto label_1c6664;
        case 0x1c6668u: goto label_1c6668;
        case 0x1c666cu: goto label_1c666c;
        case 0x1c6670u: goto label_1c6670;
        case 0x1c6674u: goto label_1c6674;
        case 0x1c6678u: goto label_1c6678;
        case 0x1c667cu: goto label_1c667c;
        case 0x1c6680u: goto label_1c6680;
        case 0x1c6684u: goto label_1c6684;
        case 0x1c6688u: goto label_1c6688;
        case 0x1c668cu: goto label_1c668c;
        case 0x1c6690u: goto label_1c6690;
        case 0x1c6694u: goto label_1c6694;
        case 0x1c6698u: goto label_1c6698;
        case 0x1c669cu: goto label_1c669c;
        case 0x1c66a0u: goto label_1c66a0;
        case 0x1c66a4u: goto label_1c66a4;
        case 0x1c66a8u: goto label_1c66a8;
        case 0x1c66acu: goto label_1c66ac;
        case 0x1c66b0u: goto label_1c66b0;
        case 0x1c66b4u: goto label_1c66b4;
        case 0x1c66b8u: goto label_1c66b8;
        case 0x1c66bcu: goto label_1c66bc;
        case 0x1c66c0u: goto label_1c66c0;
        case 0x1c66c4u: goto label_1c66c4;
        case 0x1c66c8u: goto label_1c66c8;
        case 0x1c66ccu: goto label_1c66cc;
        case 0x1c66d0u: goto label_1c66d0;
        case 0x1c66d4u: goto label_1c66d4;
        case 0x1c66d8u: goto label_1c66d8;
        case 0x1c66dcu: goto label_1c66dc;
        case 0x1c66e0u: goto label_1c66e0;
        case 0x1c66e4u: goto label_1c66e4;
        case 0x1c66e8u: goto label_1c66e8;
        case 0x1c66ecu: goto label_1c66ec;
        case 0x1c66f0u: goto label_1c66f0;
        case 0x1c66f4u: goto label_1c66f4;
        case 0x1c66f8u: goto label_1c66f8;
        case 0x1c66fcu: goto label_1c66fc;
        case 0x1c6700u: goto label_1c6700;
        case 0x1c6704u: goto label_1c6704;
        case 0x1c6708u: goto label_1c6708;
        case 0x1c670cu: goto label_1c670c;
        case 0x1c6710u: goto label_1c6710;
        case 0x1c6714u: goto label_1c6714;
        case 0x1c6718u: goto label_1c6718;
        case 0x1c671cu: goto label_1c671c;
        case 0x1c6720u: goto label_1c6720;
        case 0x1c6724u: goto label_1c6724;
        case 0x1c6728u: goto label_1c6728;
        case 0x1c672cu: goto label_1c672c;
        case 0x1c6730u: goto label_1c6730;
        case 0x1c6734u: goto label_1c6734;
        case 0x1c6738u: goto label_1c6738;
        case 0x1c673cu: goto label_1c673c;
        case 0x1c6740u: goto label_1c6740;
        case 0x1c6744u: goto label_1c6744;
        case 0x1c6748u: goto label_1c6748;
        case 0x1c674cu: goto label_1c674c;
        case 0x1c6750u: goto label_1c6750;
        case 0x1c6754u: goto label_1c6754;
        case 0x1c6758u: goto label_1c6758;
        case 0x1c675cu: goto label_1c675c;
        case 0x1c6760u: goto label_1c6760;
        case 0x1c6764u: goto label_1c6764;
        case 0x1c6768u: goto label_1c6768;
        case 0x1c676cu: goto label_1c676c;
        case 0x1c6770u: goto label_1c6770;
        case 0x1c6774u: goto label_1c6774;
        case 0x1c6778u: goto label_1c6778;
        case 0x1c677cu: goto label_1c677c;
        case 0x1c6780u: goto label_1c6780;
        case 0x1c6784u: goto label_1c6784;
        case 0x1c6788u: goto label_1c6788;
        case 0x1c678cu: goto label_1c678c;
        case 0x1c6790u: goto label_1c6790;
        case 0x1c6794u: goto label_1c6794;
        case 0x1c6798u: goto label_1c6798;
        case 0x1c679cu: goto label_1c679c;
        case 0x1c67a0u: goto label_1c67a0;
        case 0x1c67a4u: goto label_1c67a4;
        case 0x1c67a8u: goto label_1c67a8;
        case 0x1c67acu: goto label_1c67ac;
        case 0x1c67b0u: goto label_1c67b0;
        case 0x1c67b4u: goto label_1c67b4;
        case 0x1c67b8u: goto label_1c67b8;
        case 0x1c67bcu: goto label_1c67bc;
        case 0x1c67c0u: goto label_1c67c0;
        case 0x1c67c4u: goto label_1c67c4;
        case 0x1c67c8u: goto label_1c67c8;
        case 0x1c67ccu: goto label_1c67cc;
        case 0x1c67d0u: goto label_1c67d0;
        case 0x1c67d4u: goto label_1c67d4;
        case 0x1c67d8u: goto label_1c67d8;
        case 0x1c67dcu: goto label_1c67dc;
        case 0x1c67e0u: goto label_1c67e0;
        case 0x1c67e4u: goto label_1c67e4;
        case 0x1c67e8u: goto label_1c67e8;
        case 0x1c67ecu: goto label_1c67ec;
        case 0x1c67f0u: goto label_1c67f0;
        case 0x1c67f4u: goto label_1c67f4;
        case 0x1c67f8u: goto label_1c67f8;
        case 0x1c67fcu: goto label_1c67fc;
        case 0x1c6800u: goto label_1c6800;
        case 0x1c6804u: goto label_1c6804;
        case 0x1c6808u: goto label_1c6808;
        case 0x1c680cu: goto label_1c680c;
        case 0x1c6810u: goto label_1c6810;
        case 0x1c6814u: goto label_1c6814;
        case 0x1c6818u: goto label_1c6818;
        case 0x1c681cu: goto label_1c681c;
        case 0x1c6820u: goto label_1c6820;
        case 0x1c6824u: goto label_1c6824;
        case 0x1c6828u: goto label_1c6828;
        case 0x1c682cu: goto label_1c682c;
        case 0x1c6830u: goto label_1c6830;
        case 0x1c6834u: goto label_1c6834;
        case 0x1c6838u: goto label_1c6838;
        case 0x1c683cu: goto label_1c683c;
        case 0x1c6840u: goto label_1c6840;
        case 0x1c6844u: goto label_1c6844;
        case 0x1c6848u: goto label_1c6848;
        case 0x1c684cu: goto label_1c684c;
        case 0x1c6850u: goto label_1c6850;
        case 0x1c6854u: goto label_1c6854;
        case 0x1c6858u: goto label_1c6858;
        case 0x1c685cu: goto label_1c685c;
        case 0x1c6860u: goto label_1c6860;
        case 0x1c6864u: goto label_1c6864;
        case 0x1c6868u: goto label_1c6868;
        case 0x1c686cu: goto label_1c686c;
        case 0x1c6870u: goto label_1c6870;
        case 0x1c6874u: goto label_1c6874;
        case 0x1c6878u: goto label_1c6878;
        case 0x1c687cu: goto label_1c687c;
        case 0x1c6880u: goto label_1c6880;
        case 0x1c6884u: goto label_1c6884;
        case 0x1c6888u: goto label_1c6888;
        case 0x1c688cu: goto label_1c688c;
        case 0x1c6890u: goto label_1c6890;
        case 0x1c6894u: goto label_1c6894;
        default: break;
    }

    ctx->pc = 0x1c5f48u;

label_1c5f48:
    // 0x1c5f48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c5f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1c5f4c:
    // 0x1c5f4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c5f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c5f50:
    // 0x1c5f50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5f54:
    // 0x1c5f54: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c5f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1c5f58:
    // 0x1c5f58: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c5f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1c5f5c:
    // 0x1c5f5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c5f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c5f60:
    // 0x1c5f60: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1c5f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1c5f64:
    // 0x1c5f64: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1c5f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1c5f68:
    // 0x1c5f68: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1c5f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1c5f6c:
    // 0x1c5f6c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c5f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1c5f70:
    // 0x1c5f70: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1c5f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1c5f74:
    // 0x1c5f74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c5f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c5f78:
    // 0x1c5f78: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x1c5f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5f7c:
    // 0x1c5f7c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c5f7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c5f80:
    // 0x1c5f80: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1c5f80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1c5f84:
    // 0x1c5f84: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1c5f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c5f88:
    // 0x1c5f88: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1c5f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1c5f8c:
    // 0x1c5f8c: 0xc0a4bd4  jal         func_292F50
label_1c5f90:
    if (ctx->pc == 0x1C5F90u) {
        ctx->pc = 0x1C5F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F8Cu;
        // 0x1c5f90: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F94u;
        goto label_1c5f94;
    }
    ctx->pc = 0x1C5F8Cu;
    SET_GPR_U32(ctx, 31, 0x1C5F94u);
    ctx->pc = 0x1C5F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5F8Cu;
    // 0x1c5f90: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1C5F8Cu, 0x1C5F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F94u;
label_1c5f94:
    // 0x1c5f94: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1c5f94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1c5f98:
    // 0x1c5f98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5f9c:
    // 0x1c5f9c: 0x1064002c  beq         $v1, $a0, . + 4 + (0x2C << 2)
label_1c5fa0:
    if (ctx->pc == 0x1C5FA0u) {
        ctx->pc = 0x1C5FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F9Cu;
        // 0x1c5fa0: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FA4u;
        goto label_1c5fa4;
    }
    ctx->pc = 0x1C5F9Cu;
    {
        const bool branch_taken_0x1c5f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C5FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F9Cu;
        // 0x1c5fa0: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f9c) {
            ctx->pc = 0x1C6050u;
            goto label_1c6050;
        }
    }
    ctx->pc = 0x1C5FA4u;
label_1c5fa4:
    // 0x1c5fa4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1c5fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c5fa8:
    // 0x1c5fa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c5fac:
    if (ctx->pc == 0x1C5FACu) {
        ctx->pc = 0x1C5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FA8u;
        // 0x1c5fac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FB0u;
        goto label_1c5fb0;
    }
    ctx->pc = 0x1C5FA8u;
    {
        const bool branch_taken_0x1c5fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FA8u;
        // 0x1c5fac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fa8) {
            ctx->pc = 0x1C5FC0u;
            goto label_1c5fc0;
        }
    }
    ctx->pc = 0x1C5FB0u;
label_1c5fb0:
    // 0x1c5fb0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1c5fb4:
    if (ctx->pc == 0x1C5FB4u) {
        ctx->pc = 0x1C5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FB0u;
        // 0x1c5fb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FB8u;
        goto label_1c5fb8;
    }
    ctx->pc = 0x1C5FB0u;
    {
        const bool branch_taken_0x1c5fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FB0u;
        // 0x1c5fb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fb0) {
            ctx->pc = 0x1C5FD8u;
            goto label_1c5fd8;
        }
    }
    ctx->pc = 0x1C5FB8u;
label_1c5fb8:
    // 0x1c5fb8: 0x1000022d  b           . + 4 + (0x22D << 2)
label_1c5fbc:
    if (ctx->pc == 0x1C5FBCu) {
        ctx->pc = 0x1C5FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FB8u;
        // 0x1c5fbc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FC0u;
        goto label_1c5fc0;
    }
    ctx->pc = 0x1C5FB8u;
    {
        const bool branch_taken_0x1c5fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FB8u;
        // 0x1c5fbc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fb8) {
            ctx->pc = 0x1C6870u;
            goto label_1c6870;
        }
    }
    ctx->pc = 0x1C5FC0u;
label_1c5fc0:
    // 0x1c5fc0: 0x106201a9  beq         $v1, $v0, . + 4 + (0x1A9 << 2)
label_1c5fc4:
    if (ctx->pc == 0x1C5FC4u) {
        ctx->pc = 0x1C5FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FC0u;
        // 0x1c5fc4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FC8u;
        goto label_1c5fc8;
    }
    ctx->pc = 0x1C5FC0u;
    {
        const bool branch_taken_0x1c5fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FC0u;
        // 0x1c5fc4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fc0) {
            ctx->pc = 0x1C6668u;
            goto label_1c6668;
        }
    }
    ctx->pc = 0x1C5FC8u;
label_1c5fc8:
    // 0x1c5fc8: 0x10620225  beq         $v1, $v0, . + 4 + (0x225 << 2)
label_1c5fcc:
    if (ctx->pc == 0x1C5FCCu) {
        ctx->pc = 0x1C5FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FC8u;
        // 0x1c5fcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FD0u;
        goto label_1c5fd0;
    }
    ctx->pc = 0x1C5FC8u;
    {
        const bool branch_taken_0x1c5fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FC8u;
        // 0x1c5fcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fc8) {
            ctx->pc = 0x1C6860u;
            goto label_1c6860;
        }
    }
    ctx->pc = 0x1C5FD0u;
label_1c5fd0:
    // 0x1c5fd0: 0x10000227  b           . + 4 + (0x227 << 2)
label_1c5fd4:
    if (ctx->pc == 0x1C5FD4u) {
        ctx->pc = 0x1C5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FD0u;
        // 0x1c5fd4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FD8u;
        goto label_1c5fd8;
    }
    ctx->pc = 0x1C5FD0u;
    {
        const bool branch_taken_0x1c5fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FD0u;
        // 0x1c5fd4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fd0) {
            ctx->pc = 0x1C6870u;
            goto label_1c6870;
        }
    }
    ctx->pc = 0x1C5FD8u;
label_1c5fd8:
    // 0x1c5fd8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1c5fd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1c5fdc:
    // 0x1c5fdc: 0x54440017  bnel        $v0, $a0, . + 4 + (0x17 << 2)
label_1c5fe0:
    if (ctx->pc == 0x1C5FE0u) {
        ctx->pc = 0x1C5FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FDCu;
        // 0x1c5fe0: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FE4u;
        goto label_1c5fe4;
    }
    ctx->pc = 0x1C5FDCu;
    {
        const bool branch_taken_0x1c5fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c5fdc) {
            ctx->pc = 0x1C5FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5FDCu;
            // 0x1c5fe0: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C603Cu;
            goto label_1c603c;
        }
    }
    ctx->pc = 0x1C5FE4u;
label_1c5fe4:
    // 0x1c5fe4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c5fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c5fe8:
    // 0x1c5fe8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1c5fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1c5fec:
    // 0x1c5fec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c5fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5ff0:
    // 0x1c5ff0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1c5ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c5ff4:
    // 0x1c5ff4: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x1c5ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_1c5ff8:
    // 0x1c5ff8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1c5ff8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c5ffc:
    // 0x1c5ffc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c5ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6000:
    // 0x1c6000: 0xd8440010  lqc2        $vf4, 0x10($v0)
    ctx->pc = 0x1c6000u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_1c6004:
    // 0x1c6004: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c6004u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c6008:
    // 0x1c6008: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c6008u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c600c:
    // 0x1c600c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c600cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c6010:
    // 0x1c6010: 0xf8440010  sqc2        $vf4, 0x10($v0)
    ctx->pc = 0x1c6010u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6014:
    // 0x1c6014: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c6014u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c6018:
    // 0x1c6018: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c6018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c601c:
    // 0x1c601c: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_1c6020:
    if (ctx->pc == 0x1C6020u) {
        ctx->pc = 0x1C6020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C601Cu;
        // 0x1c6020: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6024u;
        goto label_1c6024;
    }
    ctx->pc = 0x1C601Cu;
    {
        const bool branch_taken_0x1c601c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C601Cu;
        // 0x1c6020: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c601c) {
            ctx->pc = 0x1C6038u;
            goto label_1c6038;
        }
    }
    ctx->pc = 0x1C6024u;
label_1c6024:
    // 0x1c6024: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c6024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6028:
    // 0x1c6028: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x1c6028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
label_1c602c:
    // 0x1c602c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1c602cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1c6030:
    // 0x1c6030: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1c6030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6034:
    // 0x1c6034: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1c6034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1c6038:
    // 0x1c6038: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1c6038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1c603c:
    // 0x1c603c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c603cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c6040:
    // 0x1c6040: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c6044:
    // 0x1c6044: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c6044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c6048:
    // 0x1c6048: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1c6048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1c604c:
    // 0x1c604c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1c604cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1c6050:
    // 0x1c6050: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1c6050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c6054:
    // 0x1c6054: 0x260200f0  addiu       $v0, $s0, 0xF0
    ctx->pc = 0x1c6054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_1c6058:
    // 0x1c6058: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c6058u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c605c:
    // 0x1c605c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c605cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6060:
    // 0x1c6060: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c6060u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c6064:
    // 0x1c6064: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x1c6064u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c6068:
    // 0x1c6068: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c6068u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c606c:
    // 0x1c606c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c606cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c6070:
    // 0x1c6070: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c6070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6074:
    // 0x1c6074: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c6074u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c6078:
    // 0x1c6078: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c6078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c607c:
    // 0x1c607c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1c607cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c6080:
    // 0x1c6080: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1c6080u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c6084:
    // 0x1c6084: 0x13b20007  beq         $sp, $s2, . + 4 + (0x7 << 2)
label_1c6088:
    if (ctx->pc == 0x1C6088u) {
        ctx->pc = 0x1C6088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6084u;
        // 0x1c6088: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C608Cu;
        goto label_1c608c;
    }
    ctx->pc = 0x1C6084u;
    {
        const bool branch_taken_0x1c6084 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C6088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6084u;
        // 0x1c6088: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6084) {
            ctx->pc = 0x1C60A4u;
            goto label_1c60a4;
        }
    }
    ctx->pc = 0x1C608Cu;
label_1c608c:
    // 0x1c608c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1c608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6090:
    // 0x1c6090: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c6090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6094:
    // 0x1c6094: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1c6094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c6098:
    // 0x1c6098: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c6098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c609c:
    // 0x1c609c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1c609cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c60a0:
    // 0x1c60a0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1c60a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c60a4:
    // 0x1c60a4: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x1c60a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1c60a8:
    // 0x1c60a8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c60a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c60ac:
    // 0x1c60ac: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c60acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c60b0:
    // 0x1c60b0: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c60b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c60b4:
    // 0x1c60b4: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1c60b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c60b8:
    // 0x1c60b8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c60b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c60bc:
    // 0x1c60bc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c60bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c60c0:
    // 0x1c60c0: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1c60c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1c60c4:
    // 0x1c60c4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c60c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c60c8:
    // 0x1c60c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c60c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c60cc:
    // 0x1c60cc: 0x10920006  beq         $a0, $s2, . + 4 + (0x6 << 2)
label_1c60d0:
    if (ctx->pc == 0x1C60D0u) {
        ctx->pc = 0x1C60D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60CCu;
        // 0x1c60d0: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C60D4u;
        goto label_1c60d4;
    }
    ctx->pc = 0x1C60CCu;
    {
        const bool branch_taken_0x1c60cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C60D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60CCu;
        // 0x1c60d0: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60cc) {
            ctx->pc = 0x1C60E8u;
            goto label_1c60e8;
        }
    }
    ctx->pc = 0x1C60D4u;
label_1c60d4:
    // 0x1c60d4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c60d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c60d8:
    // 0x1c60d8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1c60d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c60dc:
    // 0x1c60dc: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1c60dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_1c60e0:
    // 0x1c60e0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1c60e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1c60e4:
    // 0x1c60e4: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x1c60e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1c60e8:
    // 0x1c60e8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1c60e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c60ec:
    // 0x1c60ec: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c60ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c60f0:
    // 0x1c60f0: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c60f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c60f4:
    // 0x1c60f4: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x1c60f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c60f8:
    // 0x1c60f8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c60f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c60fc:
    // 0x1c60fc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c60fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c6100:
    // 0x1c6100: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c6100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6104:
    // 0x1c6104: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1c6104u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1c6108:
    // 0x1c6108: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c6108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c610c:
    // 0x1c610c: 0x13b20006  beq         $sp, $s2, . + 4 + (0x6 << 2)
label_1c6110:
    if (ctx->pc == 0x1C6110u) {
        ctx->pc = 0x1C6110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C610Cu;
        // 0x1c6110: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6114u;
        goto label_1c6114;
    }
    ctx->pc = 0x1C610Cu;
    {
        const bool branch_taken_0x1c610c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C6110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C610Cu;
        // 0x1c6110: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c610c) {
            ctx->pc = 0x1C6128u;
            goto label_1c6128;
        }
    }
    ctx->pc = 0x1C6114u;
label_1c6114:
    // 0x1c6114: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c6114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6118:
    // 0x1c6118: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1c6118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c611c:
    // 0x1c611c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c611cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c6120:
    // 0x1c6120: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1c6120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c6124:
    // 0x1c6124: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1c6124u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c6128:
    // 0x1c6128: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x1c6128u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1c612c:
    // 0x1c612c: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x1c612cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_1c6130:
    // 0x1c6130: 0x5040014b  beql        $v0, $zero, . + 4 + (0x14B << 2)
label_1c6134:
    if (ctx->pc == 0x1C6134u) {
        ctx->pc = 0x1C6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6130u;
        // 0x1c6134: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6138u;
        goto label_1c6138;
    }
    ctx->pc = 0x1C6130u;
    {
        const bool branch_taken_0x1c6130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6130) {
            ctx->pc = 0x1C6134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6130u;
            // 0x1c6134: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6660u;
            goto label_1c6660;
        }
    }
    ctx->pc = 0x1C6138u;
label_1c6138:
    // 0x1c6138: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x1c6138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c613c:
    // 0x1c613c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c613cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c6140:
    // 0x1c6140: 0x0  nop
    ctx->pc = 0x1c6140u;
    // NOP
label_1c6144:
    // 0x1c6144: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c6144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c6148:
    // 0x1c6148: 0x0  nop
    ctx->pc = 0x1c6148u;
    // NOP
label_1c614c:
    // 0x1c614c: 0x45000065  bc1f        . + 4 + (0x65 << 2)
label_1c6150:
    if (ctx->pc == 0x1C6150u) {
        ctx->pc = 0x1C6150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C614Cu;
        // 0x1c6150: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6154u;
        goto label_1c6154;
    }
    ctx->pc = 0x1C614Cu;
    {
        const bool branch_taken_0x1c614c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C614Cu;
        // 0x1c6150: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c614c) {
            ctx->pc = 0x1C62E4u;
            goto label_1c62e4;
        }
    }
    ctx->pc = 0x1C6154u;
label_1c6154:
    // 0x1c6154: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1c6154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1c6158:
    // 0x1c6158: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c6158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c615c:
    // 0x1c615c: 0xc60200b4  lwc1        $f2, 0xB4($s0)
    ctx->pc = 0x1c615cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c6160:
    // 0x1c6160: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c6160u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c6164:
    // 0x1c6164: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1c6164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c6168:
    // 0x1c6168: 0x0  nop
    ctx->pc = 0x1c6168u;
    // NOP
label_1c616c:
    // 0x1c616c: 0x450000c1  bc1f        . + 4 + (0xC1 << 2)
label_1c6170:
    if (ctx->pc == 0x1C6170u) {
        ctx->pc = 0x1C6170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C616Cu;
        // 0x1c6170: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6174u;
        goto label_1c6174;
    }
    ctx->pc = 0x1C616Cu;
    {
        const bool branch_taken_0x1c616c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C616Cu;
        // 0x1c6170: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c616c) {
            ctx->pc = 0x1C6474u;
            goto label_1c6474;
        }
    }
    ctx->pc = 0x1C6174u;
label_1c6174:
    // 0x1c6174: 0x144001bc  bnez        $v0, . + 4 + (0x1BC << 2)
label_1c6178:
    if (ctx->pc == 0x1C6178u) {
        ctx->pc = 0x1C6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6174u;
        // 0x1c6178: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C617Cu;
        goto label_1c617c;
    }
    ctx->pc = 0x1C6174u;
    {
        const bool branch_taken_0x1c6174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6174u;
        // 0x1c6178: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6174) {
            ctx->pc = 0x1C6868u;
            goto label_1c6868;
        }
    }
    ctx->pc = 0x1C617Cu;
label_1c617c:
    // 0x1c617c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1c617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c6180:
    // 0x1c6180: 0x104001ba  beqz        $v0, . + 4 + (0x1BA << 2)
label_1c6184:
    if (ctx->pc == 0x1C6184u) {
        ctx->pc = 0x1C6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6180u;
        // 0x1c6184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6188u;
        goto label_1c6188;
    }
    ctx->pc = 0x1C6180u;
    {
        const bool branch_taken_0x1c6180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6180u;
        // 0x1c6184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6180) {
            ctx->pc = 0x1C686Cu;
            goto label_1c686c;
        }
    }
    ctx->pc = 0x1C6188u;
label_1c6188:
    // 0x1c6188: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c6188u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c618c:
    // 0x1c618c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c618cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6190:
    // 0x1c6190: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c6190u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c6194:
    // 0x1c6194: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1c6194u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6198:
    // 0x1c6198: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c6198u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c619c:
    // 0x1c619c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c619cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c61a0:
    // 0x1c61a0: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1c61a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1c61a4:
    // 0x1c61a4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c61a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c61a8:
    // 0x1c61a8: 0x10720006  beq         $v1, $s2, . + 4 + (0x6 << 2)
label_1c61ac:
    if (ctx->pc == 0x1C61ACu) {
        ctx->pc = 0x1C61ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61A8u;
        // 0x1c61ac: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C61B0u;
        goto label_1c61b0;
    }
    ctx->pc = 0x1C61A8u;
    {
        const bool branch_taken_0x1c61a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C61ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61A8u;
        // 0x1c61ac: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61a8) {
            ctx->pc = 0x1C61C4u;
            goto label_1c61c4;
        }
    }
    ctx->pc = 0x1C61B0u;
label_1c61b0:
    // 0x1c61b0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c61b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1c61b4:
    // 0x1c61b4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c61b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c61b8:
    // 0x1c61b8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c61b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c61bc:
    // 0x1c61bc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1c61bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c61c0:
    // 0x1c61c0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c61c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c61c4:
    // 0x1c61c4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1c61c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1c61c8:
    // 0x1c61c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c61c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c61cc:
    // 0x1c61cc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1c61ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c61d0:
    // 0x1c61d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c61d4:
    // 0x1c61d4: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
label_1c61d8:
    if (ctx->pc == 0x1C61D8u) {
        ctx->pc = 0x1C61D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61D4u;
        // 0x1c61d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C61DCu;
        goto label_1c61dc;
    }
    ctx->pc = 0x1C61D4u;
    {
        const bool branch_taken_0x1c61d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c61d4) {
            ctx->pc = 0x1C61D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C61D4u;
            // 0x1c61d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C62D0u;
            goto label_1c62d0;
        }
    }
    ctx->pc = 0x1C61DCu;
label_1c61dc:
    // 0x1c61dc: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1c61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1c61e0:
    // 0x1c61e0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c61e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c61e4:
    // 0x1c61e4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c61e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c61e8:
    // 0x1c61e8: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c61e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c61ec:
    // 0x1c61ec: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x1c61ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1c61f0:
    // 0x1c61f0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c61f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c61f4:
    // 0x1c61f4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c61f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c61f8:
    // 0x1c61f8: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1c61f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1c61fc:
    // 0x1c61fc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c61fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6200:
    // 0x1c6200: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
label_1c6204:
    if (ctx->pc == 0x1C6204u) {
        ctx->pc = 0x1C6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6200u;
        // 0x1c6204: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6208u;
        goto label_1c6208;
    }
    ctx->pc = 0x1C6200u;
    {
        const bool branch_taken_0x1c6200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1C6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6200u;
        // 0x1c6204: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6200) {
            ctx->pc = 0x1C621Cu;
            goto label_1c621c;
        }
    }
    ctx->pc = 0x1C6208u;
label_1c6208:
    // 0x1c6208: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c6208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c620c:
    // 0x1c620c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c620cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6210:
    // 0x1c6210: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c6210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c6214:
    // 0x1c6214: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1c6214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6218:
    // 0x1c6218: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c6218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c621c:
    // 0x1c621c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c621cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c6220:
    // 0x1c6220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6224:
    // 0x1c6224: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x1c6224u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_1c6228:
    // 0x1c6228: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1c6228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_1c622c:
    // 0x1c622c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c6230:
    if (ctx->pc == 0x1C6230u) {
        ctx->pc = 0x1C6230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C622Cu;
        // 0x1c6230: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6234u;
        goto label_1c6234;
    }
    ctx->pc = 0x1C622Cu;
    {
        const bool branch_taken_0x1c622c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C622Cu;
        // 0x1c6230: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c622c) {
            ctx->pc = 0x1C623Cu;
            goto label_1c623c;
        }
    }
    ctx->pc = 0x1C6234u;
label_1c6234:
    // 0x1c6234: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1c6234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_1c6238:
    // 0x1c6238: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c623c:
    // 0x1c623c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c623cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c6240:
    // 0x1c6240: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_1c6244:
    if (ctx->pc == 0x1C6244u) {
        ctx->pc = 0x1C6244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6240u;
        // 0x1c6244: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6248u;
        goto label_1c6248;
    }
    ctx->pc = 0x1C6240u;
    {
        const bool branch_taken_0x1c6240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6240) {
            ctx->pc = 0x1C6244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6240u;
            // 0x1c6244: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C62A8u;
            goto label_1c62a8;
        }
    }
    ctx->pc = 0x1C6248u;
label_1c6248:
    // 0x1c6248: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1c6248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1c624c:
    // 0x1c624c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c6250:
    if (ctx->pc == 0x1C6250u) {
        ctx->pc = 0x1C6250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C624Cu;
        // 0x1c6250: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6254u;
        goto label_1c6254;
    }
    ctx->pc = 0x1C624Cu;
    {
        const bool branch_taken_0x1c624c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C624Cu;
        // 0x1c6250: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c624c) {
            ctx->pc = 0x1C625Cu;
            goto label_1c625c;
        }
    }
    ctx->pc = 0x1C6254u;
label_1c6254:
    // 0x1c6254: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c6254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c6258:
    // 0x1c6258: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c625c:
    // 0x1c625c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c625cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c6260:
    // 0x1c6260: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1c6264:
    if (ctx->pc == 0x1C6264u) {
        ctx->pc = 0x1C6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6260u;
        // 0x1c6264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6268u;
        goto label_1c6268;
    }
    ctx->pc = 0x1C6260u;
    {
        const bool branch_taken_0x1c6260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6260) {
            ctx->pc = 0x1C6264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6260u;
            // 0x1c6264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C62A8u;
            goto label_1c62a8;
        }
    }
    ctx->pc = 0x1C6268u;
label_1c6268:
    // 0x1c6268: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c6268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c626c:
    // 0x1c626c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c6270:
    if (ctx->pc == 0x1C6270u) {
        ctx->pc = 0x1C6270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C626Cu;
        // 0x1c6270: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6274u;
        goto label_1c6274;
    }
    ctx->pc = 0x1C626Cu;
    {
        const bool branch_taken_0x1c626c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C626Cu;
        // 0x1c6270: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c626c) {
            ctx->pc = 0x1C627Cu;
            goto label_1c627c;
        }
    }
    ctx->pc = 0x1C6274u;
label_1c6274:
    // 0x1c6274: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c6274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c6278:
    // 0x1c6278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c627c:
    // 0x1c627c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c627cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c6280:
    // 0x1c6280: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1c6284:
    if (ctx->pc == 0x1C6284u) {
        ctx->pc = 0x1C6284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6280u;
        // 0x1c6284: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6288u;
        goto label_1c6288;
    }
    ctx->pc = 0x1C6280u;
    {
        const bool branch_taken_0x1c6280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6280) {
            ctx->pc = 0x1C6284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6280u;
            // 0x1c6284: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C62A8u;
            goto label_1c62a8;
        }
    }
    ctx->pc = 0x1C6288u;
label_1c6288:
    // 0x1c6288: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c6288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c628c:
    // 0x1c628c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c6290:
    if (ctx->pc == 0x1C6290u) {
        ctx->pc = 0x1C6290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C628Cu;
        // 0x1c6290: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6294u;
        goto label_1c6294;
    }
    ctx->pc = 0x1C628Cu;
    {
        const bool branch_taken_0x1c628c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C628Cu;
        // 0x1c6290: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c628c) {
            ctx->pc = 0x1C629Cu;
            goto label_1c629c;
        }
    }
    ctx->pc = 0x1C6294u;
label_1c6294:
    // 0x1c6294: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x1c6294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
label_1c6298:
    // 0x1c6298: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c629c:
    // 0x1c629c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c629cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c62a0:
    // 0x1c62a0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1c62a4:
    if (ctx->pc == 0x1C62A4u) {
        ctx->pc = 0x1C62A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62A0u;
        // 0x1c62a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C62A8u;
        goto label_1c62a8;
    }
    ctx->pc = 0x1C62A0u;
    {
        const bool branch_taken_0x1c62a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c62a0) {
            ctx->pc = 0x1C62A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C62A0u;
            // 0x1c62a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C62A8u;
            goto label_1c62a8;
        }
    }
    ctx->pc = 0x1C62A8u;
label_1c62a8:
    // 0x1c62a8: 0x54b20009  bnel        $a1, $s2, . + 4 + (0x9 << 2)
label_1c62ac:
    if (ctx->pc == 0x1C62ACu) {
        ctx->pc = 0x1C62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62A8u;
        // 0x1c62ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C62B0u;
        goto label_1c62b0;
    }
    ctx->pc = 0x1C62A8u;
    {
        const bool branch_taken_0x1c62a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c62a8) {
            ctx->pc = 0x1C62ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C62A8u;
            // 0x1c62ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C62D0u;
            goto label_1c62d0;
        }
    }
    ctx->pc = 0x1C62B0u;
label_1c62b0:
    // 0x1c62b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c62b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c62b4:
    // 0x1c62b4: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x1c62b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_1c62b8:
    // 0x1c62b8: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1c62b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1c62bc:
    // 0x1c62bc: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x1c62bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c62c0:
    // 0x1c62c0: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x1c62c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c62c4:
    // 0x1c62c4: 0xc0f809  jalr        $a2
label_1c62c8:
    if (ctx->pc == 0x1C62C8u) {
        ctx->pc = 0x1C62C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62C4u;
        // 0x1c62c8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C62CCu;
        goto label_1c62cc;
    }
    ctx->pc = 0x1C62C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C62CCu);
        ctx->pc = 0x1C62C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62C4u;
        // 0x1c62c8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C62C4u, 0x1C62CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C62CCu;
label_1c62cc:
    // 0x1c62cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c62ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c62d0:
    // 0x1c62d0: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x1c62d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1c62d4:
    // 0x1c62d4: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_1c62d8:
    if (ctx->pc == 0x1C62D8u) {
        ctx->pc = 0x1C62D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62D4u;
        // 0x1c62d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C62DCu;
        goto label_1c62dc;
    }
    ctx->pc = 0x1C62D4u;
    {
        const bool branch_taken_0x1c62d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C62D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62D4u;
        // 0x1c62d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c62d4) {
            ctx->pc = 0x1C61D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c61d0;
        }
    }
    ctx->pc = 0x1C62DCu;
label_1c62dc:
    // 0x1c62dc: 0x10000163  b           . + 4 + (0x163 << 2)
label_1c62e0:
    if (ctx->pc == 0x1C62E0u) {
        ctx->pc = 0x1C62E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62DCu;
        // 0x1c62e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C62E4u;
        goto label_1c62e4;
    }
    ctx->pc = 0x1C62DCu;
    {
        const bool branch_taken_0x1c62dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C62E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62DCu;
        // 0x1c62e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c62dc) {
            ctx->pc = 0x1C686Cu;
            goto label_1c686c;
        }
    }
    ctx->pc = 0x1C62E4u;
label_1c62e4:
    // 0x1c62e4: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1c62e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1c62e8:
    // 0x1c62e8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c62e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c62ec:
    // 0x1c62ec: 0xc60200b4  lwc1        $f2, 0xB4($s0)
    ctx->pc = 0x1c62ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c62f0:
    // 0x1c62f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c62f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c62f4:
    // 0x1c62f4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1c62f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c62f8:
    // 0x1c62f8: 0x0  nop
    ctx->pc = 0x1c62f8u;
    // NOP
label_1c62fc:
    // 0x1c62fc: 0x4500005d  bc1f        . + 4 + (0x5D << 2)
label_1c6300:
    if (ctx->pc == 0x1C6300u) {
        ctx->pc = 0x1C6300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62FCu;
        // 0x1c6300: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6304u;
        goto label_1c6304;
    }
    ctx->pc = 0x1C62FCu;
    {
        const bool branch_taken_0x1c62fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62FCu;
        // 0x1c6300: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c62fc) {
            ctx->pc = 0x1C6474u;
            goto label_1c6474;
        }
    }
    ctx->pc = 0x1C6304u;
label_1c6304:
    // 0x1c6304: 0x14400158  bnez        $v0, . + 4 + (0x158 << 2)
label_1c6308:
    if (ctx->pc == 0x1C6308u) {
        ctx->pc = 0x1C6308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6304u;
        // 0x1c6308: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C630Cu;
        goto label_1c630c;
    }
    ctx->pc = 0x1C6304u;
    {
        const bool branch_taken_0x1c6304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6304u;
        // 0x1c6308: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6304) {
            ctx->pc = 0x1C6868u;
            goto label_1c6868;
        }
    }
    ctx->pc = 0x1C630Cu;
label_1c630c:
    // 0x1c630c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1c630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c6310:
    // 0x1c6310: 0x10400156  beqz        $v0, . + 4 + (0x156 << 2)
label_1c6314:
    if (ctx->pc == 0x1C6314u) {
        ctx->pc = 0x1C6314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6310u;
        // 0x1c6314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6318u;
        goto label_1c6318;
    }
    ctx->pc = 0x1C6310u;
    {
        const bool branch_taken_0x1c6310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6310u;
        // 0x1c6314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6310) {
            ctx->pc = 0x1C686Cu;
            goto label_1c686c;
        }
    }
    ctx->pc = 0x1C6318u;
label_1c6318:
    // 0x1c6318: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c6318u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c631c:
    // 0x1c631c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c631cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6320:
    // 0x1c6320: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c6320u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c6324:
    // 0x1c6324: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1c6324u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6328:
    // 0x1c6328: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c6328u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c632c:
    // 0x1c632c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c632cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6330:
    // 0x1c6330: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1c6330u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1c6334:
    // 0x1c6334: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c6334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6338:
    // 0x1c6338: 0x10720006  beq         $v1, $s2, . + 4 + (0x6 << 2)
label_1c633c:
    if (ctx->pc == 0x1C633Cu) {
        ctx->pc = 0x1C633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6338u;
        // 0x1c633c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6340u;
        goto label_1c6340;
    }
    ctx->pc = 0x1C6338u;
    {
        const bool branch_taken_0x1c6338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6338u;
        // 0x1c633c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6338) {
            ctx->pc = 0x1C6354u;
            goto label_1c6354;
        }
    }
    ctx->pc = 0x1C6340u;
label_1c6340:
    // 0x1c6340: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c6340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1c6344:
    // 0x1c6344: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c6344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6348:
    // 0x1c6348: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c6348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c634c:
    // 0x1c634c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1c634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6350:
    // 0x1c6350: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c6350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c6354:
    // 0x1c6354: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1c6354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1c6358:
    // 0x1c6358: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c6358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c635c:
    // 0x1c635c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1c635cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6360:
    // 0x1c6360: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c6360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c6364:
    // 0x1c6364: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
label_1c6368:
    if (ctx->pc == 0x1C6368u) {
        ctx->pc = 0x1C6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6364u;
        // 0x1c6368: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C636Cu;
        goto label_1c636c;
    }
    ctx->pc = 0x1C6364u;
    {
        const bool branch_taken_0x1c6364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6364) {
            ctx->pc = 0x1C6368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6364u;
            // 0x1c6368: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6460u;
            goto label_1c6460;
        }
    }
    ctx->pc = 0x1C636Cu;
label_1c636c:
    // 0x1c636c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1c636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1c6370:
    // 0x1c6370: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c6370u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c6374:
    // 0x1c6374: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c6374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6378:
    // 0x1c6378: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c6378u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c637c:
    // 0x1c637c: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x1c637cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1c6380:
    // 0x1c6380: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c6380u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c6384:
    // 0x1c6384: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c6384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6388:
    // 0x1c6388: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1c6388u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1c638c:
    // 0x1c638c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c638cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6390:
    // 0x1c6390: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
label_1c6394:
    if (ctx->pc == 0x1C6394u) {
        ctx->pc = 0x1C6394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6390u;
        // 0x1c6394: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6398u;
        goto label_1c6398;
    }
    ctx->pc = 0x1C6390u;
    {
        const bool branch_taken_0x1c6390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1C6394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6390u;
        // 0x1c6394: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6390) {
            ctx->pc = 0x1C63ACu;
            goto label_1c63ac;
        }
    }
    ctx->pc = 0x1C6398u;
label_1c6398:
    // 0x1c6398: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c6398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c639c:
    // 0x1c639c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c639cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c63a0:
    // 0x1c63a0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c63a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c63a4:
    // 0x1c63a4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1c63a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c63a8:
    // 0x1c63a8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c63a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c63ac:
    // 0x1c63ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c63acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c63b0:
    // 0x1c63b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c63b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c63b4:
    // 0x1c63b4: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x1c63b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_1c63b8:
    // 0x1c63b8: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1c63b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_1c63bc:
    // 0x1c63bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c63c0:
    if (ctx->pc == 0x1C63C0u) {
        ctx->pc = 0x1C63C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63BCu;
        // 0x1c63c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C63C4u;
        goto label_1c63c4;
    }
    ctx->pc = 0x1C63BCu;
    {
        const bool branch_taken_0x1c63bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C63C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63BCu;
        // 0x1c63c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63bc) {
            ctx->pc = 0x1C63CCu;
            goto label_1c63cc;
        }
    }
    ctx->pc = 0x1C63C4u;
label_1c63c4:
    // 0x1c63c4: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1c63c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_1c63c8:
    // 0x1c63c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c63c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c63cc:
    // 0x1c63cc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c63ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c63d0:
    // 0x1c63d0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_1c63d4:
    if (ctx->pc == 0x1C63D4u) {
        ctx->pc = 0x1C63D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63D0u;
        // 0x1c63d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C63D8u;
        goto label_1c63d8;
    }
    ctx->pc = 0x1C63D0u;
    {
        const bool branch_taken_0x1c63d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c63d0) {
            ctx->pc = 0x1C63D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C63D0u;
            // 0x1c63d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6438u;
            goto label_1c6438;
        }
    }
    ctx->pc = 0x1C63D8u;
label_1c63d8:
    // 0x1c63d8: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1c63d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1c63dc:
    // 0x1c63dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c63e0:
    if (ctx->pc == 0x1C63E0u) {
        ctx->pc = 0x1C63E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63DCu;
        // 0x1c63e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C63E4u;
        goto label_1c63e4;
    }
    ctx->pc = 0x1C63DCu;
    {
        const bool branch_taken_0x1c63dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C63E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63DCu;
        // 0x1c63e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63dc) {
            ctx->pc = 0x1C63ECu;
            goto label_1c63ec;
        }
    }
    ctx->pc = 0x1C63E4u;
label_1c63e4:
    // 0x1c63e4: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c63e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c63e8:
    // 0x1c63e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c63e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c63ec:
    // 0x1c63ec: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c63ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c63f0:
    // 0x1c63f0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1c63f4:
    if (ctx->pc == 0x1C63F4u) {
        ctx->pc = 0x1C63F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63F0u;
        // 0x1c63f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C63F8u;
        goto label_1c63f8;
    }
    ctx->pc = 0x1C63F0u;
    {
        const bool branch_taken_0x1c63f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c63f0) {
            ctx->pc = 0x1C63F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C63F0u;
            // 0x1c63f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6438u;
            goto label_1c6438;
        }
    }
    ctx->pc = 0x1C63F8u;
label_1c63f8:
    // 0x1c63f8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c63f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c63fc:
    // 0x1c63fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c6400:
    if (ctx->pc == 0x1C6400u) {
        ctx->pc = 0x1C6400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63FCu;
        // 0x1c6400: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6404u;
        goto label_1c6404;
    }
    ctx->pc = 0x1C63FCu;
    {
        const bool branch_taken_0x1c63fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63FCu;
        // 0x1c6400: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63fc) {
            ctx->pc = 0x1C640Cu;
            goto label_1c640c;
        }
    }
    ctx->pc = 0x1C6404u;
label_1c6404:
    // 0x1c6404: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c6404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c6408:
    // 0x1c6408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c640c:
    // 0x1c640c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c640cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c6410:
    // 0x1c6410: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1c6414:
    if (ctx->pc == 0x1C6414u) {
        ctx->pc = 0x1C6414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6410u;
        // 0x1c6414: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6418u;
        goto label_1c6418;
    }
    ctx->pc = 0x1C6410u;
    {
        const bool branch_taken_0x1c6410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6410) {
            ctx->pc = 0x1C6414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6410u;
            // 0x1c6414: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6438u;
            goto label_1c6438;
        }
    }
    ctx->pc = 0x1C6418u;
label_1c6418:
    // 0x1c6418: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c6418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c641c:
    // 0x1c641c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c6420:
    if (ctx->pc == 0x1C6420u) {
        ctx->pc = 0x1C6420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C641Cu;
        // 0x1c6420: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6424u;
        goto label_1c6424;
    }
    ctx->pc = 0x1C641Cu;
    {
        const bool branch_taken_0x1c641c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C641Cu;
        // 0x1c6420: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c641c) {
            ctx->pc = 0x1C642Cu;
            goto label_1c642c;
        }
    }
    ctx->pc = 0x1C6424u;
label_1c6424:
    // 0x1c6424: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x1c6424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
label_1c6428:
    // 0x1c6428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c642c:
    // 0x1c642c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c642cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c6430:
    // 0x1c6430: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1c6434:
    if (ctx->pc == 0x1C6434u) {
        ctx->pc = 0x1C6434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6430u;
        // 0x1c6434: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6438u;
        goto label_1c6438;
    }
    ctx->pc = 0x1C6430u;
    {
        const bool branch_taken_0x1c6430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6430) {
            ctx->pc = 0x1C6434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6430u;
            // 0x1c6434: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6438u;
            goto label_1c6438;
        }
    }
    ctx->pc = 0x1C6438u;
label_1c6438:
    // 0x1c6438: 0x54b20009  bnel        $a1, $s2, . + 4 + (0x9 << 2)
label_1c643c:
    if (ctx->pc == 0x1C643Cu) {
        ctx->pc = 0x1C643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6438u;
        // 0x1c643c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6440u;
        goto label_1c6440;
    }
    ctx->pc = 0x1C6438u;
    {
        const bool branch_taken_0x1c6438 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c6438) {
            ctx->pc = 0x1C643Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6438u;
            // 0x1c643c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6460u;
            goto label_1c6460;
        }
    }
    ctx->pc = 0x1C6440u;
label_1c6440:
    // 0x1c6440: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c6440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c6444:
    // 0x1c6444: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x1c6444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_1c6448:
    // 0x1c6448: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1c6448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1c644c:
    // 0x1c644c: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x1c644cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c6450:
    // 0x1c6450: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x1c6450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c6454:
    // 0x1c6454: 0xc0f809  jalr        $a2
label_1c6458:
    if (ctx->pc == 0x1C6458u) {
        ctx->pc = 0x1C6458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6454u;
        // 0x1c6458: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C645Cu;
        goto label_1c645c;
    }
    ctx->pc = 0x1C6454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C645Cu);
        ctx->pc = 0x1C6458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6454u;
        // 0x1c6458: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6454u, 0x1C645Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C645Cu;
label_1c645c:
    // 0x1c645c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c645cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c6460:
    // 0x1c6460: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x1c6460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1c6464:
    // 0x1c6464: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_1c6468:
    if (ctx->pc == 0x1C6468u) {
        ctx->pc = 0x1C6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6464u;
        // 0x1c6468: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C646Cu;
        goto label_1c646c;
    }
    ctx->pc = 0x1C6464u;
    {
        const bool branch_taken_0x1c6464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6464u;
        // 0x1c6468: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6464) {
            ctx->pc = 0x1C6360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6360;
        }
    }
    ctx->pc = 0x1C646Cu;
label_1c646c:
    // 0x1c646c: 0x100000ff  b           . + 4 + (0xFF << 2)
label_1c6470:
    if (ctx->pc == 0x1C6470u) {
        ctx->pc = 0x1C6470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C646Cu;
        // 0x1c6470: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6474u;
        goto label_1c6474;
    }
    ctx->pc = 0x1C646Cu;
    {
        const bool branch_taken_0x1c646c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C646Cu;
        // 0x1c6470: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c646c) {
            ctx->pc = 0x1C686Cu;
            goto label_1c686c;
        }
    }
    ctx->pc = 0x1C6474u;
label_1c6474:
    // 0x1c6474: 0x53a40008  beql        $sp, $a0, . + 4 + (0x8 << 2)
label_1c6478:
    if (ctx->pc == 0x1C6478u) {
        ctx->pc = 0x1C6478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6474u;
        // 0x1c6478: 0x8e030040  lw          $v1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C647Cu;
        goto label_1c647c;
    }
    ctx->pc = 0x1C6474u;
    {
        const bool branch_taken_0x1c6474 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 4));
        if (branch_taken_0x1c6474) {
            ctx->pc = 0x1C6478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6474u;
            // 0x1c6478: 0x8e030040  lw          $v1, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6498u;
            goto label_1c6498;
        }
    }
    ctx->pc = 0x1C647Cu;
label_1c647c:
    // 0x1c647c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1c647cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6480:
    // 0x1c6480: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x1c6480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6484:
    // 0x1c6484: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1c6484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c6488:
    // 0x1c6488: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1c6488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c648c:
    // 0x1c648c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1c648cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c6490:
    // 0x1c6490: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c6490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c6494:
    // 0x1c6494: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1c6494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1c6498:
    // 0x1c6498: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x1c6498u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c649c:
    // 0x1c649c: 0xc6020054  lwc1        $f2, 0x54($s0)
    ctx->pc = 0x1c649cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c64a0:
    // 0x1c64a0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1c64a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c64a4:
    // 0x1c64a4: 0xc60300b4  lwc1        $f3, 0xB4($s0)
    ctx->pc = 0x1c64a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c64a8:
    // 0x1c64a8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c64a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1c64ac:
    // 0x1c64ac: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1c64acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c64b0:
    // 0x1c64b0: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x1c64b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1c64b4:
    // 0x1c64b4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1c64b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1c64b8:
    // 0x1c64b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c64b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1c64bc:
    // 0x1c64bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c64bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c64c0:
    // 0x1c64c0: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
label_1c64c4:
    if (ctx->pc == 0x1C64C4u) {
        ctx->pc = 0x1C64C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C64C0u;
        // 0x1c64c4: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C64C8u;
        goto label_1c64c8;
    }
    ctx->pc = 0x1C64C0u;
    {
        const bool branch_taken_0x1c64c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C64C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C64C0u;
        // 0x1c64c4: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64c0) {
            ctx->pc = 0x1C662Cu;
            goto label_1c662c;
        }
    }
    ctx->pc = 0x1C64C8u;
label_1c64c8:
    // 0x1c64c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1c64c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c64cc:
    // 0x1c64cc: 0x50400058  beql        $v0, $zero, . + 4 + (0x58 << 2)
label_1c64d0:
    if (ctx->pc == 0x1C64D0u) {
        ctx->pc = 0x1C64D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C64CCu;
        // 0x1c64d0: 0xc6000154  lwc1        $f0, 0x154($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C64D4u;
        goto label_1c64d4;
    }
    ctx->pc = 0x1C64CCu;
    {
        const bool branch_taken_0x1c64cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c64cc) {
            ctx->pc = 0x1C64D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C64CCu;
            // 0x1c64d0: 0xc6000154  lwc1        $f0, 0x154($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6630u;
            goto label_1c6630;
        }
    }
    ctx->pc = 0x1C64D4u;
label_1c64d4:
    // 0x1c64d4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c64d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c64d8:
    // 0x1c64d8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c64d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c64dc:
    // 0x1c64dc: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c64dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c64e0:
    // 0x1c64e0: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1c64e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c64e4:
    // 0x1c64e4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c64e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c64e8:
    // 0x1c64e8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c64e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c64ec:
    // 0x1c64ec: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1c64ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1c64f0:
    // 0x1c64f0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c64f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c64f4:
    // 0x1c64f4: 0x10720006  beq         $v1, $s2, . + 4 + (0x6 << 2)
label_1c64f8:
    if (ctx->pc == 0x1C64F8u) {
        ctx->pc = 0x1C64F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C64F4u;
        // 0x1c64f8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C64FCu;
        goto label_1c64fc;
    }
    ctx->pc = 0x1C64F4u;
    {
        const bool branch_taken_0x1c64f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C64F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C64F4u;
        // 0x1c64f8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64f4) {
            ctx->pc = 0x1C6510u;
            goto label_1c6510;
        }
    }
    ctx->pc = 0x1C64FCu;
label_1c64fc:
    // 0x1c64fc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c64fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1c6500:
    // 0x1c6500: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c6500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6504:
    // 0x1c6504: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c6504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c6508:
    // 0x1c6508: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1c6508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c650c:
    // 0x1c650c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c650cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c6510:
    // 0x1c6510: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c6510u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6514:
    // 0x1c6514: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1c6514u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6518:
    // 0x1c6518: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x1c6518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1c651c:
    // 0x1c651c: 0x0  nop
    ctx->pc = 0x1c651cu;
    // NOP
label_1c6520:
    // 0x1c6520: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c6520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c6524:
    // 0x1c6524: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
label_1c6528:
    if (ctx->pc == 0x1C6528u) {
        ctx->pc = 0x1C6528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6524u;
        // 0x1c6528: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C652Cu;
        goto label_1c652c;
    }
    ctx->pc = 0x1C6524u;
    {
        const bool branch_taken_0x1c6524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6524) {
            ctx->pc = 0x1C6528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6524u;
            // 0x1c6528: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6620u;
            goto label_1c6620;
        }
    }
    ctx->pc = 0x1C652Cu;
label_1c652c:
    // 0x1c652c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1c652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1c6530:
    // 0x1c6530: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c6530u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c6534:
    // 0x1c6534: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c6534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6538:
    // 0x1c6538: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c6538u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c653c:
    // 0x1c653c: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x1c653cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c6540:
    // 0x1c6540: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c6540u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c6544:
    // 0x1c6544: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c6544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6548:
    // 0x1c6548: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1c6548u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1c654c:
    // 0x1c654c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c654cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6550:
    // 0x1c6550: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
label_1c6554:
    if (ctx->pc == 0x1C6554u) {
        ctx->pc = 0x1C6554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6550u;
        // 0x1c6554: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6558u;
        goto label_1c6558;
    }
    ctx->pc = 0x1C6550u;
    {
        const bool branch_taken_0x1c6550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C6554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6550u;
        // 0x1c6554: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6550) {
            ctx->pc = 0x1C656Cu;
            goto label_1c656c;
        }
    }
    ctx->pc = 0x1C6558u;
label_1c6558:
    // 0x1c6558: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c6558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c655c:
    // 0x1c655c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6560:
    // 0x1c6560: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c6560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c6564:
    // 0x1c6564: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1c6564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6568:
    // 0x1c6568: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c6568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c656c:
    // 0x1c656c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c656cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c6570:
    // 0x1c6570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6574:
    // 0x1c6574: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x1c6574u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_1c6578:
    // 0x1c6578: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1c6578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_1c657c:
    // 0x1c657c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c6580:
    if (ctx->pc == 0x1C6580u) {
        ctx->pc = 0x1C6580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C657Cu;
        // 0x1c6580: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6584u;
        goto label_1c6584;
    }
    ctx->pc = 0x1C657Cu;
    {
        const bool branch_taken_0x1c657c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C657Cu;
        // 0x1c6580: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c657c) {
            ctx->pc = 0x1C658Cu;
            goto label_1c658c;
        }
    }
    ctx->pc = 0x1C6584u;
label_1c6584:
    // 0x1c6584: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1c6584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_1c6588:
    // 0x1c6588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c658c:
    // 0x1c658c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c658cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c6590:
    // 0x1c6590: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_1c6594:
    if (ctx->pc == 0x1C6594u) {
        ctx->pc = 0x1C6594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6590u;
        // 0x1c6594: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6598u;
        goto label_1c6598;
    }
    ctx->pc = 0x1C6590u;
    {
        const bool branch_taken_0x1c6590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6590) {
            ctx->pc = 0x1C6594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6590u;
            // 0x1c6594: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C65F8u;
            goto label_1c65f8;
        }
    }
    ctx->pc = 0x1C6598u;
label_1c6598:
    // 0x1c6598: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1c6598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1c659c:
    // 0x1c659c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c65a0:
    if (ctx->pc == 0x1C65A0u) {
        ctx->pc = 0x1C65A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C659Cu;
        // 0x1c65a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C65A4u;
        goto label_1c65a4;
    }
    ctx->pc = 0x1C659Cu;
    {
        const bool branch_taken_0x1c659c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C65A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C659Cu;
        // 0x1c65a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c659c) {
            ctx->pc = 0x1C65ACu;
            goto label_1c65ac;
        }
    }
    ctx->pc = 0x1C65A4u;
label_1c65a4:
    // 0x1c65a4: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c65a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c65a8:
    // 0x1c65a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c65a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c65ac:
    // 0x1c65ac: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c65acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c65b0:
    // 0x1c65b0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1c65b4:
    if (ctx->pc == 0x1C65B4u) {
        ctx->pc = 0x1C65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65B0u;
        // 0x1c65b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C65B8u;
        goto label_1c65b8;
    }
    ctx->pc = 0x1C65B0u;
    {
        const bool branch_taken_0x1c65b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c65b0) {
            ctx->pc = 0x1C65B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C65B0u;
            // 0x1c65b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C65F8u;
            goto label_1c65f8;
        }
    }
    ctx->pc = 0x1C65B8u;
label_1c65b8:
    // 0x1c65b8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c65b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c65bc:
    // 0x1c65bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c65c0:
    if (ctx->pc == 0x1C65C0u) {
        ctx->pc = 0x1C65C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65BCu;
        // 0x1c65c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C65C4u;
        goto label_1c65c4;
    }
    ctx->pc = 0x1C65BCu;
    {
        const bool branch_taken_0x1c65bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C65C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65BCu;
        // 0x1c65c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65bc) {
            ctx->pc = 0x1C65CCu;
            goto label_1c65cc;
        }
    }
    ctx->pc = 0x1C65C4u;
label_1c65c4:
    // 0x1c65c4: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c65c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c65c8:
    // 0x1c65c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c65c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c65cc:
    // 0x1c65cc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c65ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c65d0:
    // 0x1c65d0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1c65d4:
    if (ctx->pc == 0x1C65D4u) {
        ctx->pc = 0x1C65D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65D0u;
        // 0x1c65d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C65D8u;
        goto label_1c65d8;
    }
    ctx->pc = 0x1C65D0u;
    {
        const bool branch_taken_0x1c65d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c65d0) {
            ctx->pc = 0x1C65D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C65D0u;
            // 0x1c65d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C65F8u;
            goto label_1c65f8;
        }
    }
    ctx->pc = 0x1C65D8u;
label_1c65d8:
    // 0x1c65d8: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c65d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c65dc:
    // 0x1c65dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c65e0:
    if (ctx->pc == 0x1C65E0u) {
        ctx->pc = 0x1C65E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65DCu;
        // 0x1c65e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C65E4u;
        goto label_1c65e4;
    }
    ctx->pc = 0x1C65DCu;
    {
        const bool branch_taken_0x1c65dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C65E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65DCu;
        // 0x1c65e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65dc) {
            ctx->pc = 0x1C65ECu;
            goto label_1c65ec;
        }
    }
    ctx->pc = 0x1C65E4u;
label_1c65e4:
    // 0x1c65e4: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x1c65e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
label_1c65e8:
    // 0x1c65e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c65e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c65ec:
    // 0x1c65ec: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c65ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c65f0:
    // 0x1c65f0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1c65f4:
    if (ctx->pc == 0x1C65F4u) {
        ctx->pc = 0x1C65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65F0u;
        // 0x1c65f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C65F8u;
        goto label_1c65f8;
    }
    ctx->pc = 0x1C65F0u;
    {
        const bool branch_taken_0x1c65f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c65f0) {
            ctx->pc = 0x1C65F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C65F0u;
            // 0x1c65f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C65F8u;
            goto label_1c65f8;
        }
    }
    ctx->pc = 0x1C65F8u;
label_1c65f8:
    // 0x1c65f8: 0x54b60009  bnel        $a1, $s6, . + 4 + (0x9 << 2)
label_1c65fc:
    if (ctx->pc == 0x1C65FCu) {
        ctx->pc = 0x1C65FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65F8u;
        // 0x1c65fc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6600u;
        goto label_1c6600;
    }
    ctx->pc = 0x1C65F8u;
    {
        const bool branch_taken_0x1c65f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x1c65f8) {
            ctx->pc = 0x1C65FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C65F8u;
            // 0x1c65fc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6620u;
            goto label_1c6620;
        }
    }
    ctx->pc = 0x1C6600u;
label_1c6600:
    // 0x1c6600: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c6600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c6604:
    // 0x1c6604: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x1c6604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_1c6608:
    // 0x1c6608: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1c6608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1c660c:
    // 0x1c660c: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x1c660cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c6610:
    // 0x1c6610: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x1c6610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c6614:
    // 0x1c6614: 0xc0f809  jalr        $a2
label_1c6618:
    if (ctx->pc == 0x1C6618u) {
        ctx->pc = 0x1C6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6614u;
        // 0x1c6618: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C661Cu;
        goto label_1c661c;
    }
    ctx->pc = 0x1C6614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C661Cu);
        ctx->pc = 0x1C6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6614u;
        // 0x1c6618: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6614u, 0x1C661Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C661Cu;
label_1c661c:
    // 0x1c661c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c661cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c6620:
    // 0x1c6620: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x1c6620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1c6624:
    // 0x1c6624: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_1c6628:
    if (ctx->pc == 0x1C6628u) {
        ctx->pc = 0x1C6628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6624u;
        // 0x1c6628: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C662Cu;
        goto label_1c662c;
    }
    ctx->pc = 0x1C6624u;
    {
        const bool branch_taken_0x1c6624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6624u;
        // 0x1c6628: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6624) {
            ctx->pc = 0x1C6520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6520;
        }
    }
    ctx->pc = 0x1C662Cu;
label_1c662c:
    // 0x1c662c: 0xc6000154  lwc1        $f0, 0x154($s0)
    ctx->pc = 0x1c662cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6630:
    // 0x1c6630: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x1c6630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6634:
    // 0x1c6634: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c6634u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1c6638:
    // 0x1c6638: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c6638u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1c663c:
    // 0x1c663c: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x1c663cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_1c6640:
    // 0x1c6640: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1c6640u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_1c6644:
    // 0x1c6644: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x1c6644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6648:
    // 0x1c6648: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c6648u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1c664c:
    // 0x1c664c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c664cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c6650:
    // 0x1c6650: 0x0  nop
    ctx->pc = 0x1c6650u;
    // NOP
label_1c6654:
    // 0x1c6654: 0x45010085  bc1t        . + 4 + (0x85 << 2)
label_1c6658:
    if (ctx->pc == 0x1C6658u) {
        ctx->pc = 0x1C6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6654u;
        // 0x1c6658: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C665Cu;
        goto label_1c665c;
    }
    ctx->pc = 0x1C6654u;
    {
        const bool branch_taken_0x1c6654 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6654u;
        // 0x1c6658: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6654) {
            ctx->pc = 0x1C686Cu;
            goto label_1c686c;
        }
    }
    ctx->pc = 0x1C665Cu;
label_1c665c:
    // 0x1c665c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1c665cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1c6660:
    // 0x1c6660: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c6660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c6664:
    // 0x1c6664: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1c6664u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1c6668:
    // 0x1c6668: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x1c6668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1c666c:
    // 0x1c666c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1c666cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1c6670:
    // 0x1c6670: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1c6674:
    if (ctx->pc == 0x1C6674u) {
        ctx->pc = 0x1C6674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6670u;
        // 0x1c6674: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6678u;
        goto label_1c6678;
    }
    ctx->pc = 0x1C6670u;
    {
        const bool branch_taken_0x1c6670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6670u;
        // 0x1c6674: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6670) {
            ctx->pc = 0x1C66CCu;
            goto label_1c66cc;
        }
    }
    ctx->pc = 0x1C6678u;
label_1c6678:
    // 0x1c6678: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1c6678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1c667c:
    // 0x1c667c: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x1c667cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1c6680:
    // 0x1c6680: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1c6680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c6684:
    // 0x1c6684: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1c6684u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c6688:
    // 0x1c6688: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1c6688u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c668c:
    // 0x1c668c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c668cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c6690:
    // 0x1c6690: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c6690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6694:
    // 0x1c6694: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1c6694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c6698:
    // 0x1c6698: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c6698u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c669c:
    // 0x1c669c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c669cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c66a0:
    // 0x1c66a0: 0x13b20006  beq         $sp, $s2, . + 4 + (0x6 << 2)
label_1c66a4:
    if (ctx->pc == 0x1C66A4u) {
        ctx->pc = 0x1C66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66A0u;
        // 0x1c66a4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C66A8u;
        goto label_1c66a8;
    }
    ctx->pc = 0x1C66A0u;
    {
        const bool branch_taken_0x1c66a0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66A0u;
        // 0x1c66a4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c66a0) {
            ctx->pc = 0x1C66BCu;
            goto label_1c66bc;
        }
    }
    ctx->pc = 0x1C66A8u;
label_1c66a8:
    // 0x1c66a8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c66a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c66ac:
    // 0x1c66ac: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1c66acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c66b0:
    // 0x1c66b0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c66b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c66b4:
    // 0x1c66b4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1c66b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c66b8:
    // 0x1c66b8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1c66b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c66bc:
    // 0x1c66bc: 0xc60000b4  lwc1        $f0, 0xB4($s0)
    ctx->pc = 0x1c66bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c66c0:
    // 0x1c66c0: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1c66c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c66c4:
    // 0x1c66c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c66c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c66c8:
    // 0x1c66c8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1c66c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c66cc:
    // 0x1c66cc: 0xc071cc4  jal         func_1C7310
label_1c66d0:
    if (ctx->pc == 0x1C66D0u) {
        ctx->pc = 0x1C66D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66CCu;
        // 0x1c66d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C66D4u;
        goto label_1c66d4;
    }
    ctx->pc = 0x1C66CCu;
    SET_GPR_U32(ctx, 31, 0x1C66D4u);
    ctx->pc = 0x1C66D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C66CCu;
    // 0x1c66d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7310u, 0x1C66CCu, 0x1C66D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C66D4u;
label_1c66d4:
    // 0x1c66d4: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x1c66d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1c66d8:
    // 0x1c66d8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c66d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1c66dc:
    // 0x1c66dc: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
label_1c66e0:
    if (ctx->pc == 0x1C66E0u) {
        ctx->pc = 0x1C66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66DCu;
        // 0x1c66e0: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C66E4u;
        goto label_1c66e4;
    }
    ctx->pc = 0x1C66DCu;
    {
        const bool branch_taken_0x1c66dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66DCu;
        // 0x1c66e0: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c66dc) {
            ctx->pc = 0x1C6854u;
            goto label_1c6854;
        }
    }
    ctx->pc = 0x1C66E4u;
label_1c66e4:
    // 0x1c66e4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1c66e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c66e8:
    // 0x1c66e8: 0x5040005b  beql        $v0, $zero, . + 4 + (0x5B << 2)
label_1c66ec:
    if (ctx->pc == 0x1C66ECu) {
        ctx->pc = 0x1C66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C66E8u;
        // 0x1c66ec: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C66F0u;
        goto label_1c66f0;
    }
    ctx->pc = 0x1C66E8u;
    {
        const bool branch_taken_0x1c66e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c66e8) {
            ctx->pc = 0x1C66ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C66E8u;
            // 0x1c66ec: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6858u;
            goto label_1c6858;
        }
    }
    ctx->pc = 0x1C66F0u;
label_1c66f0:
    // 0x1c66f0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1c66f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c66f4:
    // 0x1c66f4: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1c66f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1c66f8:
    // 0x1c66f8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1c66f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c66fc:
    // 0x1c66fc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c66fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6700:
    // 0x1c6700: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c6700u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c6704:
    // 0x1c6704: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1c6704u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6708:
    // 0x1c6708: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c6708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c670c:
    // 0x1c670c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6710:
    // 0x1c6710: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c6710u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c6714:
    // 0x1c6714: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c6714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6718:
    // 0x1c6718: 0x10920007  beq         $a0, $s2, . + 4 + (0x7 << 2)
label_1c671c:
    if (ctx->pc == 0x1C671Cu) {
        ctx->pc = 0x1C671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6718u;
        // 0x1c671c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6720u;
        goto label_1c6720;
    }
    ctx->pc = 0x1C6718u;
    {
        const bool branch_taken_0x1c6718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6718u;
        // 0x1c671c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6718) {
            ctx->pc = 0x1C6738u;
            goto label_1c6738;
        }
    }
    ctx->pc = 0x1C6720u;
label_1c6720:
    // 0x1c6720: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1c6720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6724:
    // 0x1c6724: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c6724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c6728:
    // 0x1c6728: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c6728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c672c:
    // 0x1c672c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1c672cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1c6730:
    // 0x1c6730: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1c6730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6734:
    // 0x1c6734: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1c6734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1c6738:
    // 0x1c6738: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c6738u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c673c:
    // 0x1c673c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1c673cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6740:
    // 0x1c6740: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x1c6740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1c6744:
    // 0x1c6744: 0x0  nop
    ctx->pc = 0x1c6744u;
    // NOP
label_1c6748:
    // 0x1c6748: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c6748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c674c:
    // 0x1c674c: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
label_1c6750:
    if (ctx->pc == 0x1C6750u) {
        ctx->pc = 0x1C6750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C674Cu;
        // 0x1c6750: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6754u;
        goto label_1c6754;
    }
    ctx->pc = 0x1C674Cu;
    {
        const bool branch_taken_0x1c674c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c674c) {
            ctx->pc = 0x1C6750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C674Cu;
            // 0x1c6750: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6848u;
            goto label_1c6848;
        }
    }
    ctx->pc = 0x1C6754u;
label_1c6754:
    // 0x1c6754: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1c6754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1c6758:
    // 0x1c6758: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c6758u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c675c:
    // 0x1c675c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c675cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6760:
    // 0x1c6760: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c6760u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c6764:
    // 0x1c6764: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x1c6764u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c6768:
    // 0x1c6768: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c6768u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c676c:
    // 0x1c676c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c676cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6770:
    // 0x1c6770: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1c6770u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1c6774:
    // 0x1c6774: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c6774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c6778:
    // 0x1c6778: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
label_1c677c:
    if (ctx->pc == 0x1C677Cu) {
        ctx->pc = 0x1C677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6778u;
        // 0x1c677c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6780u;
        goto label_1c6780;
    }
    ctx->pc = 0x1C6778u;
    {
        const bool branch_taken_0x1c6778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6778u;
        // 0x1c677c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6778) {
            ctx->pc = 0x1C6794u;
            goto label_1c6794;
        }
    }
    ctx->pc = 0x1C6780u;
label_1c6780:
    // 0x1c6780: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c6780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c6784:
    // 0x1c6784: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c6784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6788:
    // 0x1c6788: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c6788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c678c:
    // 0x1c678c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1c678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6790:
    // 0x1c6790: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c6790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c6794:
    // 0x1c6794: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c6794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c6798:
    // 0x1c6798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c679c:
    // 0x1c679c: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x1c679cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_1c67a0:
    // 0x1c67a0: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1c67a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_1c67a4:
    // 0x1c67a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c67a8:
    if (ctx->pc == 0x1C67A8u) {
        ctx->pc = 0x1C67A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67A4u;
        // 0x1c67a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C67ACu;
        goto label_1c67ac;
    }
    ctx->pc = 0x1C67A4u;
    {
        const bool branch_taken_0x1c67a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C67A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67A4u;
        // 0x1c67a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c67a4) {
            ctx->pc = 0x1C67B4u;
            goto label_1c67b4;
        }
    }
    ctx->pc = 0x1C67ACu;
label_1c67ac:
    // 0x1c67ac: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1c67acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_1c67b0:
    // 0x1c67b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c67b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c67b4:
    // 0x1c67b4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c67b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c67b8:
    // 0x1c67b8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_1c67bc:
    if (ctx->pc == 0x1C67BCu) {
        ctx->pc = 0x1C67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67B8u;
        // 0x1c67bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C67C0u;
        goto label_1c67c0;
    }
    ctx->pc = 0x1C67B8u;
    {
        const bool branch_taken_0x1c67b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c67b8) {
            ctx->pc = 0x1C67BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C67B8u;
            // 0x1c67bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6820u;
            goto label_1c6820;
        }
    }
    ctx->pc = 0x1C67C0u;
label_1c67c0:
    // 0x1c67c0: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1c67c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1c67c4:
    // 0x1c67c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c67c8:
    if (ctx->pc == 0x1C67C8u) {
        ctx->pc = 0x1C67C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67C4u;
        // 0x1c67c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C67CCu;
        goto label_1c67cc;
    }
    ctx->pc = 0x1C67C4u;
    {
        const bool branch_taken_0x1c67c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C67C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67C4u;
        // 0x1c67c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c67c4) {
            ctx->pc = 0x1C67D4u;
            goto label_1c67d4;
        }
    }
    ctx->pc = 0x1C67CCu;
label_1c67cc:
    // 0x1c67cc: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c67ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c67d0:
    // 0x1c67d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c67d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c67d4:
    // 0x1c67d4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c67d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c67d8:
    // 0x1c67d8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1c67dc:
    if (ctx->pc == 0x1C67DCu) {
        ctx->pc = 0x1C67DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67D8u;
        // 0x1c67dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C67E0u;
        goto label_1c67e0;
    }
    ctx->pc = 0x1C67D8u;
    {
        const bool branch_taken_0x1c67d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c67d8) {
            ctx->pc = 0x1C67DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C67D8u;
            // 0x1c67dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6820u;
            goto label_1c6820;
        }
    }
    ctx->pc = 0x1C67E0u;
label_1c67e0:
    // 0x1c67e0: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c67e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c67e4:
    // 0x1c67e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c67e8:
    if (ctx->pc == 0x1C67E8u) {
        ctx->pc = 0x1C67E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67E4u;
        // 0x1c67e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C67ECu;
        goto label_1c67ec;
    }
    ctx->pc = 0x1C67E4u;
    {
        const bool branch_taken_0x1c67e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C67E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67E4u;
        // 0x1c67e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c67e4) {
            ctx->pc = 0x1C67F4u;
            goto label_1c67f4;
        }
    }
    ctx->pc = 0x1C67ECu;
label_1c67ec:
    // 0x1c67ec: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c67ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c67f0:
    // 0x1c67f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c67f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c67f4:
    // 0x1c67f4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c67f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c67f8:
    // 0x1c67f8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1c67fc:
    if (ctx->pc == 0x1C67FCu) {
        ctx->pc = 0x1C67FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C67F8u;
        // 0x1c67fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6800u;
        goto label_1c6800;
    }
    ctx->pc = 0x1C67F8u;
    {
        const bool branch_taken_0x1c67f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c67f8) {
            ctx->pc = 0x1C67FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C67F8u;
            // 0x1c67fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6820u;
            goto label_1c6820;
        }
    }
    ctx->pc = 0x1C6800u;
label_1c6800:
    // 0x1c6800: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c6800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c6804:
    // 0x1c6804: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c6808:
    if (ctx->pc == 0x1C6808u) {
        ctx->pc = 0x1C6808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6804u;
        // 0x1c6808: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C680Cu;
        goto label_1c680c;
    }
    ctx->pc = 0x1C6804u;
    {
        const bool branch_taken_0x1c6804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6804u;
        // 0x1c6808: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6804) {
            ctx->pc = 0x1C6814u;
            goto label_1c6814;
        }
    }
    ctx->pc = 0x1C680Cu;
label_1c680c:
    // 0x1c680c: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x1c680cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
label_1c6810:
    // 0x1c6810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c6814:
    // 0x1c6814: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c6814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c6818:
    // 0x1c6818: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1c681c:
    if (ctx->pc == 0x1C681Cu) {
        ctx->pc = 0x1C681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6818u;
        // 0x1c681c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6820u;
        goto label_1c6820;
    }
    ctx->pc = 0x1C6818u;
    {
        const bool branch_taken_0x1c6818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6818) {
            ctx->pc = 0x1C681Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6818u;
            // 0x1c681c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6820u;
            goto label_1c6820;
        }
    }
    ctx->pc = 0x1C6820u;
label_1c6820:
    // 0x1c6820: 0x54b60009  bnel        $a1, $s6, . + 4 + (0x9 << 2)
label_1c6824:
    if (ctx->pc == 0x1C6824u) {
        ctx->pc = 0x1C6824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6820u;
        // 0x1c6824: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6828u;
        goto label_1c6828;
    }
    ctx->pc = 0x1C6820u;
    {
        const bool branch_taken_0x1c6820 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x1c6820) {
            ctx->pc = 0x1C6824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6820u;
            // 0x1c6824: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6848u;
            goto label_1c6848;
        }
    }
    ctx->pc = 0x1C6828u;
label_1c6828:
    // 0x1c6828: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c6828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c682c:
    // 0x1c682c: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x1c682cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_1c6830:
    // 0x1c6830: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1c6830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1c6834:
    // 0x1c6834: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x1c6834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c6838:
    // 0x1c6838: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x1c6838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c683c:
    // 0x1c683c: 0xc0f809  jalr        $a2
label_1c6840:
    if (ctx->pc == 0x1C6840u) {
        ctx->pc = 0x1C6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C683Cu;
        // 0x1c6840: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6844u;
        goto label_1c6844;
    }
    ctx->pc = 0x1C683Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C6844u);
        ctx->pc = 0x1C6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C683Cu;
        // 0x1c6840: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C683Cu, 0x1C6844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C6844u;
label_1c6844:
    // 0x1c6844: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c6844u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c6848:
    // 0x1c6848: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x1c6848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1c684c:
    // 0x1c684c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_1c6850:
    if (ctx->pc == 0x1C6850u) {
        ctx->pc = 0x1C6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C684Cu;
        // 0x1c6850: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6854u;
        goto label_1c6854;
    }
    ctx->pc = 0x1C684Cu;
    {
        const bool branch_taken_0x1c684c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C684Cu;
        // 0x1c6850: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c684c) {
            ctx->pc = 0x1C6748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6748;
        }
    }
    ctx->pc = 0x1C6854u;
label_1c6854:
    // 0x1c6854: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1c6854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1c6858:
    // 0x1c6858: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c6858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c685c:
    // 0x1c685c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1c685cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1c6860:
    // 0x1c6860: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c6864:
    if (ctx->pc == 0x1C6864u) {
        ctx->pc = 0x1C6864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6860u;
        // 0x1c6864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6868u;
        goto label_1c6868;
    }
    ctx->pc = 0x1C6860u;
    {
        const bool branch_taken_0x1c6860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6860u;
        // 0x1c6864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6860) {
            ctx->pc = 0x1C686Cu;
            goto label_1c686c;
        }
    }
    ctx->pc = 0x1C6868u;
label_1c6868:
    // 0x1c6868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c686c:
    // 0x1c686c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c686cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c6870:
    // 0x1c6870: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c6870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c6874:
    // 0x1c6874: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1c6874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c6878:
    // 0x1c6878: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1c6878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c687c:
    // 0x1c687c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1c687cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c6880:
    // 0x1c6880: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c6880u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c6884:
    // 0x1c6884: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1c6884u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c6888:
    // 0x1c6888: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c6888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c688c:
    // 0x1c688c: 0x3e00008  jr          $ra
label_1c6890:
    if (ctx->pc == 0x1C6890u) {
        ctx->pc = 0x1C6890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C688Cu;
        // 0x1c6890: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6894u;
        goto label_1c6894;
    }
    ctx->pc = 0x1C688Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C688Cu;
        // 0x1c6890: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C688Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6894u;
label_1c6894:
    // 0x1c6894: 0x0  nop
    ctx->pc = 0x1c6894u;
    // NOP
    ctx->pc = 0x1c6898u;
}
