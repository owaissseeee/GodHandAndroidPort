#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: game__10CannonGame
// Address: 0x79df68 - 0x79f1e0
void game__10CannonGame_0x79df68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("game__10CannonGame_0x79df68");
#endif

    switch (ctx->pc) {
        case 0x79df68u: goto label_79df68;
        case 0x79df6cu: goto label_79df6c;
        case 0x79df70u: goto label_79df70;
        case 0x79df74u: goto label_79df74;
        case 0x79df78u: goto label_79df78;
        case 0x79df7cu: goto label_79df7c;
        case 0x79df80u: goto label_79df80;
        case 0x79df84u: goto label_79df84;
        case 0x79df88u: goto label_79df88;
        case 0x79df8cu: goto label_79df8c;
        case 0x79df90u: goto label_79df90;
        case 0x79df94u: goto label_79df94;
        case 0x79df98u: goto label_79df98;
        case 0x79df9cu: goto label_79df9c;
        case 0x79dfa0u: goto label_79dfa0;
        case 0x79dfa4u: goto label_79dfa4;
        case 0x79dfa8u: goto label_79dfa8;
        case 0x79dfacu: goto label_79dfac;
        case 0x79dfb0u: goto label_79dfb0;
        case 0x79dfb4u: goto label_79dfb4;
        case 0x79dfb8u: goto label_79dfb8;
        case 0x79dfbcu: goto label_79dfbc;
        case 0x79dfc0u: goto label_79dfc0;
        case 0x79dfc4u: goto label_79dfc4;
        case 0x79dfc8u: goto label_79dfc8;
        case 0x79dfccu: goto label_79dfcc;
        case 0x79dfd0u: goto label_79dfd0;
        case 0x79dfd4u: goto label_79dfd4;
        case 0x79dfd8u: goto label_79dfd8;
        case 0x79dfdcu: goto label_79dfdc;
        case 0x79dfe0u: goto label_79dfe0;
        case 0x79dfe4u: goto label_79dfe4;
        case 0x79dfe8u: goto label_79dfe8;
        case 0x79dfecu: goto label_79dfec;
        case 0x79dff0u: goto label_79dff0;
        case 0x79dff4u: goto label_79dff4;
        case 0x79dff8u: goto label_79dff8;
        case 0x79dffcu: goto label_79dffc;
        case 0x79e000u: goto label_79e000;
        case 0x79e004u: goto label_79e004;
        case 0x79e008u: goto label_79e008;
        case 0x79e00cu: goto label_79e00c;
        case 0x79e010u: goto label_79e010;
        case 0x79e014u: goto label_79e014;
        case 0x79e018u: goto label_79e018;
        case 0x79e01cu: goto label_79e01c;
        case 0x79e020u: goto label_79e020;
        case 0x79e024u: goto label_79e024;
        case 0x79e028u: goto label_79e028;
        case 0x79e02cu: goto label_79e02c;
        case 0x79e030u: goto label_79e030;
        case 0x79e034u: goto label_79e034;
        case 0x79e038u: goto label_79e038;
        case 0x79e03cu: goto label_79e03c;
        case 0x79e040u: goto label_79e040;
        case 0x79e044u: goto label_79e044;
        case 0x79e048u: goto label_79e048;
        case 0x79e04cu: goto label_79e04c;
        case 0x79e050u: goto label_79e050;
        case 0x79e054u: goto label_79e054;
        case 0x79e058u: goto label_79e058;
        case 0x79e05cu: goto label_79e05c;
        case 0x79e060u: goto label_79e060;
        case 0x79e064u: goto label_79e064;
        case 0x79e068u: goto label_79e068;
        case 0x79e06cu: goto label_79e06c;
        case 0x79e070u: goto label_79e070;
        case 0x79e074u: goto label_79e074;
        case 0x79e078u: goto label_79e078;
        case 0x79e07cu: goto label_79e07c;
        case 0x79e080u: goto label_79e080;
        case 0x79e084u: goto label_79e084;
        case 0x79e088u: goto label_79e088;
        case 0x79e08cu: goto label_79e08c;
        case 0x79e090u: goto label_79e090;
        case 0x79e094u: goto label_79e094;
        case 0x79e098u: goto label_79e098;
        case 0x79e09cu: goto label_79e09c;
        case 0x79e0a0u: goto label_79e0a0;
        case 0x79e0a4u: goto label_79e0a4;
        case 0x79e0a8u: goto label_79e0a8;
        case 0x79e0acu: goto label_79e0ac;
        case 0x79e0b0u: goto label_79e0b0;
        case 0x79e0b4u: goto label_79e0b4;
        case 0x79e0b8u: goto label_79e0b8;
        case 0x79e0bcu: goto label_79e0bc;
        case 0x79e0c0u: goto label_79e0c0;
        case 0x79e0c4u: goto label_79e0c4;
        case 0x79e0c8u: goto label_79e0c8;
        case 0x79e0ccu: goto label_79e0cc;
        case 0x79e0d0u: goto label_79e0d0;
        case 0x79e0d4u: goto label_79e0d4;
        case 0x79e0d8u: goto label_79e0d8;
        case 0x79e0dcu: goto label_79e0dc;
        case 0x79e0e0u: goto label_79e0e0;
        case 0x79e0e4u: goto label_79e0e4;
        case 0x79e0e8u: goto label_79e0e8;
        case 0x79e0ecu: goto label_79e0ec;
        case 0x79e0f0u: goto label_79e0f0;
        case 0x79e0f4u: goto label_79e0f4;
        case 0x79e0f8u: goto label_79e0f8;
        case 0x79e0fcu: goto label_79e0fc;
        case 0x79e100u: goto label_79e100;
        case 0x79e104u: goto label_79e104;
        case 0x79e108u: goto label_79e108;
        case 0x79e10cu: goto label_79e10c;
        case 0x79e110u: goto label_79e110;
        case 0x79e114u: goto label_79e114;
        case 0x79e118u: goto label_79e118;
        case 0x79e11cu: goto label_79e11c;
        case 0x79e120u: goto label_79e120;
        case 0x79e124u: goto label_79e124;
        case 0x79e128u: goto label_79e128;
        case 0x79e12cu: goto label_79e12c;
        case 0x79e130u: goto label_79e130;
        case 0x79e134u: goto label_79e134;
        case 0x79e138u: goto label_79e138;
        case 0x79e13cu: goto label_79e13c;
        case 0x79e140u: goto label_79e140;
        case 0x79e144u: goto label_79e144;
        case 0x79e148u: goto label_79e148;
        case 0x79e14cu: goto label_79e14c;
        case 0x79e150u: goto label_79e150;
        case 0x79e154u: goto label_79e154;
        case 0x79e158u: goto label_79e158;
        case 0x79e15cu: goto label_79e15c;
        case 0x79e160u: goto label_79e160;
        case 0x79e164u: goto label_79e164;
        case 0x79e168u: goto label_79e168;
        case 0x79e16cu: goto label_79e16c;
        case 0x79e170u: goto label_79e170;
        case 0x79e174u: goto label_79e174;
        case 0x79e178u: goto label_79e178;
        case 0x79e17cu: goto label_79e17c;
        case 0x79e180u: goto label_79e180;
        case 0x79e184u: goto label_79e184;
        case 0x79e188u: goto label_79e188;
        case 0x79e18cu: goto label_79e18c;
        case 0x79e190u: goto label_79e190;
        case 0x79e194u: goto label_79e194;
        case 0x79e198u: goto label_79e198;
        case 0x79e19cu: goto label_79e19c;
        case 0x79e1a0u: goto label_79e1a0;
        case 0x79e1a4u: goto label_79e1a4;
        case 0x79e1a8u: goto label_79e1a8;
        case 0x79e1acu: goto label_79e1ac;
        case 0x79e1b0u: goto label_79e1b0;
        case 0x79e1b4u: goto label_79e1b4;
        case 0x79e1b8u: goto label_79e1b8;
        case 0x79e1bcu: goto label_79e1bc;
        case 0x79e1c0u: goto label_79e1c0;
        case 0x79e1c4u: goto label_79e1c4;
        case 0x79e1c8u: goto label_79e1c8;
        case 0x79e1ccu: goto label_79e1cc;
        case 0x79e1d0u: goto label_79e1d0;
        case 0x79e1d4u: goto label_79e1d4;
        case 0x79e1d8u: goto label_79e1d8;
        case 0x79e1dcu: goto label_79e1dc;
        case 0x79e1e0u: goto label_79e1e0;
        case 0x79e1e4u: goto label_79e1e4;
        case 0x79e1e8u: goto label_79e1e8;
        case 0x79e1ecu: goto label_79e1ec;
        case 0x79e1f0u: goto label_79e1f0;
        case 0x79e1f4u: goto label_79e1f4;
        case 0x79e1f8u: goto label_79e1f8;
        case 0x79e1fcu: goto label_79e1fc;
        case 0x79e200u: goto label_79e200;
        case 0x79e204u: goto label_79e204;
        case 0x79e208u: goto label_79e208;
        case 0x79e20cu: goto label_79e20c;
        case 0x79e210u: goto label_79e210;
        case 0x79e214u: goto label_79e214;
        case 0x79e218u: goto label_79e218;
        case 0x79e21cu: goto label_79e21c;
        case 0x79e220u: goto label_79e220;
        case 0x79e224u: goto label_79e224;
        case 0x79e228u: goto label_79e228;
        case 0x79e22cu: goto label_79e22c;
        case 0x79e230u: goto label_79e230;
        case 0x79e234u: goto label_79e234;
        case 0x79e238u: goto label_79e238;
        case 0x79e23cu: goto label_79e23c;
        case 0x79e240u: goto label_79e240;
        case 0x79e244u: goto label_79e244;
        case 0x79e248u: goto label_79e248;
        case 0x79e24cu: goto label_79e24c;
        case 0x79e250u: goto label_79e250;
        case 0x79e254u: goto label_79e254;
        case 0x79e258u: goto label_79e258;
        case 0x79e25cu: goto label_79e25c;
        case 0x79e260u: goto label_79e260;
        case 0x79e264u: goto label_79e264;
        case 0x79e268u: goto label_79e268;
        case 0x79e26cu: goto label_79e26c;
        case 0x79e270u: goto label_79e270;
        case 0x79e274u: goto label_79e274;
        case 0x79e278u: goto label_79e278;
        case 0x79e27cu: goto label_79e27c;
        case 0x79e280u: goto label_79e280;
        case 0x79e284u: goto label_79e284;
        case 0x79e288u: goto label_79e288;
        case 0x79e28cu: goto label_79e28c;
        case 0x79e290u: goto label_79e290;
        case 0x79e294u: goto label_79e294;
        case 0x79e298u: goto label_79e298;
        case 0x79e29cu: goto label_79e29c;
        case 0x79e2a0u: goto label_79e2a0;
        case 0x79e2a4u: goto label_79e2a4;
        case 0x79e2a8u: goto label_79e2a8;
        case 0x79e2acu: goto label_79e2ac;
        case 0x79e2b0u: goto label_79e2b0;
        case 0x79e2b4u: goto label_79e2b4;
        case 0x79e2b8u: goto label_79e2b8;
        case 0x79e2bcu: goto label_79e2bc;
        case 0x79e2c0u: goto label_79e2c0;
        case 0x79e2c4u: goto label_79e2c4;
        case 0x79e2c8u: goto label_79e2c8;
        case 0x79e2ccu: goto label_79e2cc;
        case 0x79e2d0u: goto label_79e2d0;
        case 0x79e2d4u: goto label_79e2d4;
        case 0x79e2d8u: goto label_79e2d8;
        case 0x79e2dcu: goto label_79e2dc;
        case 0x79e2e0u: goto label_79e2e0;
        case 0x79e2e4u: goto label_79e2e4;
        case 0x79e2e8u: goto label_79e2e8;
        case 0x79e2ecu: goto label_79e2ec;
        case 0x79e2f0u: goto label_79e2f0;
        case 0x79e2f4u: goto label_79e2f4;
        case 0x79e2f8u: goto label_79e2f8;
        case 0x79e2fcu: goto label_79e2fc;
        case 0x79e300u: goto label_79e300;
        case 0x79e304u: goto label_79e304;
        case 0x79e308u: goto label_79e308;
        case 0x79e30cu: goto label_79e30c;
        case 0x79e310u: goto label_79e310;
        case 0x79e314u: goto label_79e314;
        case 0x79e318u: goto label_79e318;
        case 0x79e31cu: goto label_79e31c;
        case 0x79e320u: goto label_79e320;
        case 0x79e324u: goto label_79e324;
        case 0x79e328u: goto label_79e328;
        case 0x79e32cu: goto label_79e32c;
        case 0x79e330u: goto label_79e330;
        case 0x79e334u: goto label_79e334;
        case 0x79e338u: goto label_79e338;
        case 0x79e33cu: goto label_79e33c;
        case 0x79e340u: goto label_79e340;
        case 0x79e344u: goto label_79e344;
        case 0x79e348u: goto label_79e348;
        case 0x79e34cu: goto label_79e34c;
        case 0x79e350u: goto label_79e350;
        case 0x79e354u: goto label_79e354;
        case 0x79e358u: goto label_79e358;
        case 0x79e35cu: goto label_79e35c;
        case 0x79e360u: goto label_79e360;
        case 0x79e364u: goto label_79e364;
        case 0x79e368u: goto label_79e368;
        case 0x79e36cu: goto label_79e36c;
        case 0x79e370u: goto label_79e370;
        case 0x79e374u: goto label_79e374;
        case 0x79e378u: goto label_79e378;
        case 0x79e37cu: goto label_79e37c;
        case 0x79e380u: goto label_79e380;
        case 0x79e384u: goto label_79e384;
        case 0x79e388u: goto label_79e388;
        case 0x79e38cu: goto label_79e38c;
        case 0x79e390u: goto label_79e390;
        case 0x79e394u: goto label_79e394;
        case 0x79e398u: goto label_79e398;
        case 0x79e39cu: goto label_79e39c;
        case 0x79e3a0u: goto label_79e3a0;
        case 0x79e3a4u: goto label_79e3a4;
        case 0x79e3a8u: goto label_79e3a8;
        case 0x79e3acu: goto label_79e3ac;
        case 0x79e3b0u: goto label_79e3b0;
        case 0x79e3b4u: goto label_79e3b4;
        case 0x79e3b8u: goto label_79e3b8;
        case 0x79e3bcu: goto label_79e3bc;
        case 0x79e3c0u: goto label_79e3c0;
        case 0x79e3c4u: goto label_79e3c4;
        case 0x79e3c8u: goto label_79e3c8;
        case 0x79e3ccu: goto label_79e3cc;
        case 0x79e3d0u: goto label_79e3d0;
        case 0x79e3d4u: goto label_79e3d4;
        case 0x79e3d8u: goto label_79e3d8;
        case 0x79e3dcu: goto label_79e3dc;
        case 0x79e3e0u: goto label_79e3e0;
        case 0x79e3e4u: goto label_79e3e4;
        case 0x79e3e8u: goto label_79e3e8;
        case 0x79e3ecu: goto label_79e3ec;
        case 0x79e3f0u: goto label_79e3f0;
        case 0x79e3f4u: goto label_79e3f4;
        case 0x79e3f8u: goto label_79e3f8;
        case 0x79e3fcu: goto label_79e3fc;
        case 0x79e400u: goto label_79e400;
        case 0x79e404u: goto label_79e404;
        case 0x79e408u: goto label_79e408;
        case 0x79e40cu: goto label_79e40c;
        case 0x79e410u: goto label_79e410;
        case 0x79e414u: goto label_79e414;
        case 0x79e418u: goto label_79e418;
        case 0x79e41cu: goto label_79e41c;
        case 0x79e420u: goto label_79e420;
        case 0x79e424u: goto label_79e424;
        case 0x79e428u: goto label_79e428;
        case 0x79e42cu: goto label_79e42c;
        case 0x79e430u: goto label_79e430;
        case 0x79e434u: goto label_79e434;
        case 0x79e438u: goto label_79e438;
        case 0x79e43cu: goto label_79e43c;
        case 0x79e440u: goto label_79e440;
        case 0x79e444u: goto label_79e444;
        case 0x79e448u: goto label_79e448;
        case 0x79e44cu: goto label_79e44c;
        case 0x79e450u: goto label_79e450;
        case 0x79e454u: goto label_79e454;
        case 0x79e458u: goto label_79e458;
        case 0x79e45cu: goto label_79e45c;
        case 0x79e460u: goto label_79e460;
        case 0x79e464u: goto label_79e464;
        case 0x79e468u: goto label_79e468;
        case 0x79e46cu: goto label_79e46c;
        case 0x79e470u: goto label_79e470;
        case 0x79e474u: goto label_79e474;
        case 0x79e478u: goto label_79e478;
        case 0x79e47cu: goto label_79e47c;
        case 0x79e480u: goto label_79e480;
        case 0x79e484u: goto label_79e484;
        case 0x79e488u: goto label_79e488;
        case 0x79e48cu: goto label_79e48c;
        case 0x79e490u: goto label_79e490;
        case 0x79e494u: goto label_79e494;
        case 0x79e498u: goto label_79e498;
        case 0x79e49cu: goto label_79e49c;
        case 0x79e4a0u: goto label_79e4a0;
        case 0x79e4a4u: goto label_79e4a4;
        case 0x79e4a8u: goto label_79e4a8;
        case 0x79e4acu: goto label_79e4ac;
        case 0x79e4b0u: goto label_79e4b0;
        case 0x79e4b4u: goto label_79e4b4;
        case 0x79e4b8u: goto label_79e4b8;
        case 0x79e4bcu: goto label_79e4bc;
        case 0x79e4c0u: goto label_79e4c0;
        case 0x79e4c4u: goto label_79e4c4;
        case 0x79e4c8u: goto label_79e4c8;
        case 0x79e4ccu: goto label_79e4cc;
        case 0x79e4d0u: goto label_79e4d0;
        case 0x79e4d4u: goto label_79e4d4;
        case 0x79e4d8u: goto label_79e4d8;
        case 0x79e4dcu: goto label_79e4dc;
        case 0x79e4e0u: goto label_79e4e0;
        case 0x79e4e4u: goto label_79e4e4;
        case 0x79e4e8u: goto label_79e4e8;
        case 0x79e4ecu: goto label_79e4ec;
        case 0x79e4f0u: goto label_79e4f0;
        case 0x79e4f4u: goto label_79e4f4;
        case 0x79e4f8u: goto label_79e4f8;
        case 0x79e4fcu: goto label_79e4fc;
        case 0x79e500u: goto label_79e500;
        case 0x79e504u: goto label_79e504;
        case 0x79e508u: goto label_79e508;
        case 0x79e50cu: goto label_79e50c;
        case 0x79e510u: goto label_79e510;
        case 0x79e514u: goto label_79e514;
        case 0x79e518u: goto label_79e518;
        case 0x79e51cu: goto label_79e51c;
        case 0x79e520u: goto label_79e520;
        case 0x79e524u: goto label_79e524;
        case 0x79e528u: goto label_79e528;
        case 0x79e52cu: goto label_79e52c;
        case 0x79e530u: goto label_79e530;
        case 0x79e534u: goto label_79e534;
        case 0x79e538u: goto label_79e538;
        case 0x79e53cu: goto label_79e53c;
        case 0x79e540u: goto label_79e540;
        case 0x79e544u: goto label_79e544;
        case 0x79e548u: goto label_79e548;
        case 0x79e54cu: goto label_79e54c;
        case 0x79e550u: goto label_79e550;
        case 0x79e554u: goto label_79e554;
        case 0x79e558u: goto label_79e558;
        case 0x79e55cu: goto label_79e55c;
        case 0x79e560u: goto label_79e560;
        case 0x79e564u: goto label_79e564;
        case 0x79e568u: goto label_79e568;
        case 0x79e56cu: goto label_79e56c;
        case 0x79e570u: goto label_79e570;
        case 0x79e574u: goto label_79e574;
        case 0x79e578u: goto label_79e578;
        case 0x79e57cu: goto label_79e57c;
        case 0x79e580u: goto label_79e580;
        case 0x79e584u: goto label_79e584;
        case 0x79e588u: goto label_79e588;
        case 0x79e58cu: goto label_79e58c;
        case 0x79e590u: goto label_79e590;
        case 0x79e594u: goto label_79e594;
        case 0x79e598u: goto label_79e598;
        case 0x79e59cu: goto label_79e59c;
        case 0x79e5a0u: goto label_79e5a0;
        case 0x79e5a4u: goto label_79e5a4;
        case 0x79e5a8u: goto label_79e5a8;
        case 0x79e5acu: goto label_79e5ac;
        case 0x79e5b0u: goto label_79e5b0;
        case 0x79e5b4u: goto label_79e5b4;
        case 0x79e5b8u: goto label_79e5b8;
        case 0x79e5bcu: goto label_79e5bc;
        case 0x79e5c0u: goto label_79e5c0;
        case 0x79e5c4u: goto label_79e5c4;
        case 0x79e5c8u: goto label_79e5c8;
        case 0x79e5ccu: goto label_79e5cc;
        case 0x79e5d0u: goto label_79e5d0;
        case 0x79e5d4u: goto label_79e5d4;
        case 0x79e5d8u: goto label_79e5d8;
        case 0x79e5dcu: goto label_79e5dc;
        case 0x79e5e0u: goto label_79e5e0;
        case 0x79e5e4u: goto label_79e5e4;
        case 0x79e5e8u: goto label_79e5e8;
        case 0x79e5ecu: goto label_79e5ec;
        case 0x79e5f0u: goto label_79e5f0;
        case 0x79e5f4u: goto label_79e5f4;
        case 0x79e5f8u: goto label_79e5f8;
        case 0x79e5fcu: goto label_79e5fc;
        case 0x79e600u: goto label_79e600;
        case 0x79e604u: goto label_79e604;
        case 0x79e608u: goto label_79e608;
        case 0x79e60cu: goto label_79e60c;
        case 0x79e610u: goto label_79e610;
        case 0x79e614u: goto label_79e614;
        case 0x79e618u: goto label_79e618;
        case 0x79e61cu: goto label_79e61c;
        case 0x79e620u: goto label_79e620;
        case 0x79e624u: goto label_79e624;
        case 0x79e628u: goto label_79e628;
        case 0x79e62cu: goto label_79e62c;
        case 0x79e630u: goto label_79e630;
        case 0x79e634u: goto label_79e634;
        case 0x79e638u: goto label_79e638;
        case 0x79e63cu: goto label_79e63c;
        case 0x79e640u: goto label_79e640;
        case 0x79e644u: goto label_79e644;
        case 0x79e648u: goto label_79e648;
        case 0x79e64cu: goto label_79e64c;
        case 0x79e650u: goto label_79e650;
        case 0x79e654u: goto label_79e654;
        case 0x79e658u: goto label_79e658;
        case 0x79e65cu: goto label_79e65c;
        case 0x79e660u: goto label_79e660;
        case 0x79e664u: goto label_79e664;
        case 0x79e668u: goto label_79e668;
        case 0x79e66cu: goto label_79e66c;
        case 0x79e670u: goto label_79e670;
        case 0x79e674u: goto label_79e674;
        case 0x79e678u: goto label_79e678;
        case 0x79e67cu: goto label_79e67c;
        case 0x79e680u: goto label_79e680;
        case 0x79e684u: goto label_79e684;
        case 0x79e688u: goto label_79e688;
        case 0x79e68cu: goto label_79e68c;
        case 0x79e690u: goto label_79e690;
        case 0x79e694u: goto label_79e694;
        case 0x79e698u: goto label_79e698;
        case 0x79e69cu: goto label_79e69c;
        case 0x79e6a0u: goto label_79e6a0;
        case 0x79e6a4u: goto label_79e6a4;
        case 0x79e6a8u: goto label_79e6a8;
        case 0x79e6acu: goto label_79e6ac;
        case 0x79e6b0u: goto label_79e6b0;
        case 0x79e6b4u: goto label_79e6b4;
        case 0x79e6b8u: goto label_79e6b8;
        case 0x79e6bcu: goto label_79e6bc;
        case 0x79e6c0u: goto label_79e6c0;
        case 0x79e6c4u: goto label_79e6c4;
        case 0x79e6c8u: goto label_79e6c8;
        case 0x79e6ccu: goto label_79e6cc;
        case 0x79e6d0u: goto label_79e6d0;
        case 0x79e6d4u: goto label_79e6d4;
        case 0x79e6d8u: goto label_79e6d8;
        case 0x79e6dcu: goto label_79e6dc;
        case 0x79e6e0u: goto label_79e6e0;
        case 0x79e6e4u: goto label_79e6e4;
        case 0x79e6e8u: goto label_79e6e8;
        case 0x79e6ecu: goto label_79e6ec;
        case 0x79e6f0u: goto label_79e6f0;
        case 0x79e6f4u: goto label_79e6f4;
        case 0x79e6f8u: goto label_79e6f8;
        case 0x79e6fcu: goto label_79e6fc;
        case 0x79e700u: goto label_79e700;
        case 0x79e704u: goto label_79e704;
        case 0x79e708u: goto label_79e708;
        case 0x79e70cu: goto label_79e70c;
        case 0x79e710u: goto label_79e710;
        case 0x79e714u: goto label_79e714;
        case 0x79e718u: goto label_79e718;
        case 0x79e71cu: goto label_79e71c;
        case 0x79e720u: goto label_79e720;
        case 0x79e724u: goto label_79e724;
        case 0x79e728u: goto label_79e728;
        case 0x79e72cu: goto label_79e72c;
        case 0x79e730u: goto label_79e730;
        case 0x79e734u: goto label_79e734;
        case 0x79e738u: goto label_79e738;
        case 0x79e73cu: goto label_79e73c;
        case 0x79e740u: goto label_79e740;
        case 0x79e744u: goto label_79e744;
        case 0x79e748u: goto label_79e748;
        case 0x79e74cu: goto label_79e74c;
        case 0x79e750u: goto label_79e750;
        case 0x79e754u: goto label_79e754;
        case 0x79e758u: goto label_79e758;
        case 0x79e75cu: goto label_79e75c;
        case 0x79e760u: goto label_79e760;
        case 0x79e764u: goto label_79e764;
        case 0x79e768u: goto label_79e768;
        case 0x79e76cu: goto label_79e76c;
        case 0x79e770u: goto label_79e770;
        case 0x79e774u: goto label_79e774;
        case 0x79e778u: goto label_79e778;
        case 0x79e77cu: goto label_79e77c;
        case 0x79e780u: goto label_79e780;
        case 0x79e784u: goto label_79e784;
        case 0x79e788u: goto label_79e788;
        case 0x79e78cu: goto label_79e78c;
        case 0x79e790u: goto label_79e790;
        case 0x79e794u: goto label_79e794;
        case 0x79e798u: goto label_79e798;
        case 0x79e79cu: goto label_79e79c;
        case 0x79e7a0u: goto label_79e7a0;
        case 0x79e7a4u: goto label_79e7a4;
        case 0x79e7a8u: goto label_79e7a8;
        case 0x79e7acu: goto label_79e7ac;
        case 0x79e7b0u: goto label_79e7b0;
        case 0x79e7b4u: goto label_79e7b4;
        case 0x79e7b8u: goto label_79e7b8;
        case 0x79e7bcu: goto label_79e7bc;
        case 0x79e7c0u: goto label_79e7c0;
        case 0x79e7c4u: goto label_79e7c4;
        case 0x79e7c8u: goto label_79e7c8;
        case 0x79e7ccu: goto label_79e7cc;
        case 0x79e7d0u: goto label_79e7d0;
        case 0x79e7d4u: goto label_79e7d4;
        case 0x79e7d8u: goto label_79e7d8;
        case 0x79e7dcu: goto label_79e7dc;
        case 0x79e7e0u: goto label_79e7e0;
        case 0x79e7e4u: goto label_79e7e4;
        case 0x79e7e8u: goto label_79e7e8;
        case 0x79e7ecu: goto label_79e7ec;
        case 0x79e7f0u: goto label_79e7f0;
        case 0x79e7f4u: goto label_79e7f4;
        case 0x79e7f8u: goto label_79e7f8;
        case 0x79e7fcu: goto label_79e7fc;
        case 0x79e800u: goto label_79e800;
        case 0x79e804u: goto label_79e804;
        case 0x79e808u: goto label_79e808;
        case 0x79e80cu: goto label_79e80c;
        case 0x79e810u: goto label_79e810;
        case 0x79e814u: goto label_79e814;
        case 0x79e818u: goto label_79e818;
        case 0x79e81cu: goto label_79e81c;
        case 0x79e820u: goto label_79e820;
        case 0x79e824u: goto label_79e824;
        case 0x79e828u: goto label_79e828;
        case 0x79e82cu: goto label_79e82c;
        case 0x79e830u: goto label_79e830;
        case 0x79e834u: goto label_79e834;
        case 0x79e838u: goto label_79e838;
        case 0x79e83cu: goto label_79e83c;
        case 0x79e840u: goto label_79e840;
        case 0x79e844u: goto label_79e844;
        case 0x79e848u: goto label_79e848;
        case 0x79e84cu: goto label_79e84c;
        case 0x79e850u: goto label_79e850;
        case 0x79e854u: goto label_79e854;
        case 0x79e858u: goto label_79e858;
        case 0x79e85cu: goto label_79e85c;
        case 0x79e860u: goto label_79e860;
        case 0x79e864u: goto label_79e864;
        case 0x79e868u: goto label_79e868;
        case 0x79e86cu: goto label_79e86c;
        case 0x79e870u: goto label_79e870;
        case 0x79e874u: goto label_79e874;
        case 0x79e878u: goto label_79e878;
        case 0x79e87cu: goto label_79e87c;
        case 0x79e880u: goto label_79e880;
        case 0x79e884u: goto label_79e884;
        case 0x79e888u: goto label_79e888;
        case 0x79e88cu: goto label_79e88c;
        case 0x79e890u: goto label_79e890;
        case 0x79e894u: goto label_79e894;
        case 0x79e898u: goto label_79e898;
        case 0x79e89cu: goto label_79e89c;
        case 0x79e8a0u: goto label_79e8a0;
        case 0x79e8a4u: goto label_79e8a4;
        case 0x79e8a8u: goto label_79e8a8;
        case 0x79e8acu: goto label_79e8ac;
        case 0x79e8b0u: goto label_79e8b0;
        case 0x79e8b4u: goto label_79e8b4;
        case 0x79e8b8u: goto label_79e8b8;
        case 0x79e8bcu: goto label_79e8bc;
        case 0x79e8c0u: goto label_79e8c0;
        case 0x79e8c4u: goto label_79e8c4;
        case 0x79e8c8u: goto label_79e8c8;
        case 0x79e8ccu: goto label_79e8cc;
        case 0x79e8d0u: goto label_79e8d0;
        case 0x79e8d4u: goto label_79e8d4;
        case 0x79e8d8u: goto label_79e8d8;
        case 0x79e8dcu: goto label_79e8dc;
        case 0x79e8e0u: goto label_79e8e0;
        case 0x79e8e4u: goto label_79e8e4;
        case 0x79e8e8u: goto label_79e8e8;
        case 0x79e8ecu: goto label_79e8ec;
        case 0x79e8f0u: goto label_79e8f0;
        case 0x79e8f4u: goto label_79e8f4;
        case 0x79e8f8u: goto label_79e8f8;
        case 0x79e8fcu: goto label_79e8fc;
        case 0x79e900u: goto label_79e900;
        case 0x79e904u: goto label_79e904;
        case 0x79e908u: goto label_79e908;
        case 0x79e90cu: goto label_79e90c;
        case 0x79e910u: goto label_79e910;
        case 0x79e914u: goto label_79e914;
        case 0x79e918u: goto label_79e918;
        case 0x79e91cu: goto label_79e91c;
        case 0x79e920u: goto label_79e920;
        case 0x79e924u: goto label_79e924;
        case 0x79e928u: goto label_79e928;
        case 0x79e92cu: goto label_79e92c;
        case 0x79e930u: goto label_79e930;
        case 0x79e934u: goto label_79e934;
        case 0x79e938u: goto label_79e938;
        case 0x79e93cu: goto label_79e93c;
        case 0x79e940u: goto label_79e940;
        case 0x79e944u: goto label_79e944;
        case 0x79e948u: goto label_79e948;
        case 0x79e94cu: goto label_79e94c;
        case 0x79e950u: goto label_79e950;
        case 0x79e954u: goto label_79e954;
        case 0x79e958u: goto label_79e958;
        case 0x79e95cu: goto label_79e95c;
        case 0x79e960u: goto label_79e960;
        case 0x79e964u: goto label_79e964;
        case 0x79e968u: goto label_79e968;
        case 0x79e96cu: goto label_79e96c;
        case 0x79e970u: goto label_79e970;
        case 0x79e974u: goto label_79e974;
        case 0x79e978u: goto label_79e978;
        case 0x79e97cu: goto label_79e97c;
        case 0x79e980u: goto label_79e980;
        case 0x79e984u: goto label_79e984;
        case 0x79e988u: goto label_79e988;
        case 0x79e98cu: goto label_79e98c;
        case 0x79e990u: goto label_79e990;
        case 0x79e994u: goto label_79e994;
        case 0x79e998u: goto label_79e998;
        case 0x79e99cu: goto label_79e99c;
        case 0x79e9a0u: goto label_79e9a0;
        case 0x79e9a4u: goto label_79e9a4;
        case 0x79e9a8u: goto label_79e9a8;
        case 0x79e9acu: goto label_79e9ac;
        case 0x79e9b0u: goto label_79e9b0;
        case 0x79e9b4u: goto label_79e9b4;
        case 0x79e9b8u: goto label_79e9b8;
        case 0x79e9bcu: goto label_79e9bc;
        case 0x79e9c0u: goto label_79e9c0;
        case 0x79e9c4u: goto label_79e9c4;
        case 0x79e9c8u: goto label_79e9c8;
        case 0x79e9ccu: goto label_79e9cc;
        case 0x79e9d0u: goto label_79e9d0;
        case 0x79e9d4u: goto label_79e9d4;
        case 0x79e9d8u: goto label_79e9d8;
        case 0x79e9dcu: goto label_79e9dc;
        case 0x79e9e0u: goto label_79e9e0;
        case 0x79e9e4u: goto label_79e9e4;
        case 0x79e9e8u: goto label_79e9e8;
        case 0x79e9ecu: goto label_79e9ec;
        case 0x79e9f0u: goto label_79e9f0;
        case 0x79e9f4u: goto label_79e9f4;
        case 0x79e9f8u: goto label_79e9f8;
        case 0x79e9fcu: goto label_79e9fc;
        case 0x79ea00u: goto label_79ea00;
        case 0x79ea04u: goto label_79ea04;
        case 0x79ea08u: goto label_79ea08;
        case 0x79ea0cu: goto label_79ea0c;
        case 0x79ea10u: goto label_79ea10;
        case 0x79ea14u: goto label_79ea14;
        case 0x79ea18u: goto label_79ea18;
        case 0x79ea1cu: goto label_79ea1c;
        case 0x79ea20u: goto label_79ea20;
        case 0x79ea24u: goto label_79ea24;
        case 0x79ea28u: goto label_79ea28;
        case 0x79ea2cu: goto label_79ea2c;
        case 0x79ea30u: goto label_79ea30;
        case 0x79ea34u: goto label_79ea34;
        case 0x79ea38u: goto label_79ea38;
        case 0x79ea3cu: goto label_79ea3c;
        case 0x79ea40u: goto label_79ea40;
        case 0x79ea44u: goto label_79ea44;
        case 0x79ea48u: goto label_79ea48;
        case 0x79ea4cu: goto label_79ea4c;
        case 0x79ea50u: goto label_79ea50;
        case 0x79ea54u: goto label_79ea54;
        case 0x79ea58u: goto label_79ea58;
        case 0x79ea5cu: goto label_79ea5c;
        case 0x79ea60u: goto label_79ea60;
        case 0x79ea64u: goto label_79ea64;
        case 0x79ea68u: goto label_79ea68;
        case 0x79ea6cu: goto label_79ea6c;
        case 0x79ea70u: goto label_79ea70;
        case 0x79ea74u: goto label_79ea74;
        case 0x79ea78u: goto label_79ea78;
        case 0x79ea7cu: goto label_79ea7c;
        case 0x79ea80u: goto label_79ea80;
        case 0x79ea84u: goto label_79ea84;
        case 0x79ea88u: goto label_79ea88;
        case 0x79ea8cu: goto label_79ea8c;
        case 0x79ea90u: goto label_79ea90;
        case 0x79ea94u: goto label_79ea94;
        case 0x79ea98u: goto label_79ea98;
        case 0x79ea9cu: goto label_79ea9c;
        case 0x79eaa0u: goto label_79eaa0;
        case 0x79eaa4u: goto label_79eaa4;
        case 0x79eaa8u: goto label_79eaa8;
        case 0x79eaacu: goto label_79eaac;
        case 0x79eab0u: goto label_79eab0;
        case 0x79eab4u: goto label_79eab4;
        case 0x79eab8u: goto label_79eab8;
        case 0x79eabcu: goto label_79eabc;
        case 0x79eac0u: goto label_79eac0;
        case 0x79eac4u: goto label_79eac4;
        case 0x79eac8u: goto label_79eac8;
        case 0x79eaccu: goto label_79eacc;
        case 0x79ead0u: goto label_79ead0;
        case 0x79ead4u: goto label_79ead4;
        case 0x79ead8u: goto label_79ead8;
        case 0x79eadcu: goto label_79eadc;
        case 0x79eae0u: goto label_79eae0;
        case 0x79eae4u: goto label_79eae4;
        case 0x79eae8u: goto label_79eae8;
        case 0x79eaecu: goto label_79eaec;
        case 0x79eaf0u: goto label_79eaf0;
        case 0x79eaf4u: goto label_79eaf4;
        case 0x79eaf8u: goto label_79eaf8;
        case 0x79eafcu: goto label_79eafc;
        case 0x79eb00u: goto label_79eb00;
        case 0x79eb04u: goto label_79eb04;
        case 0x79eb08u: goto label_79eb08;
        case 0x79eb0cu: goto label_79eb0c;
        case 0x79eb10u: goto label_79eb10;
        case 0x79eb14u: goto label_79eb14;
        case 0x79eb18u: goto label_79eb18;
        case 0x79eb1cu: goto label_79eb1c;
        case 0x79eb20u: goto label_79eb20;
        case 0x79eb24u: goto label_79eb24;
        case 0x79eb28u: goto label_79eb28;
        case 0x79eb2cu: goto label_79eb2c;
        case 0x79eb30u: goto label_79eb30;
        case 0x79eb34u: goto label_79eb34;
        case 0x79eb38u: goto label_79eb38;
        case 0x79eb3cu: goto label_79eb3c;
        case 0x79eb40u: goto label_79eb40;
        case 0x79eb44u: goto label_79eb44;
        case 0x79eb48u: goto label_79eb48;
        case 0x79eb4cu: goto label_79eb4c;
        case 0x79eb50u: goto label_79eb50;
        case 0x79eb54u: goto label_79eb54;
        case 0x79eb58u: goto label_79eb58;
        case 0x79eb5cu: goto label_79eb5c;
        case 0x79eb60u: goto label_79eb60;
        case 0x79eb64u: goto label_79eb64;
        case 0x79eb68u: goto label_79eb68;
        case 0x79eb6cu: goto label_79eb6c;
        case 0x79eb70u: goto label_79eb70;
        case 0x79eb74u: goto label_79eb74;
        case 0x79eb78u: goto label_79eb78;
        case 0x79eb7cu: goto label_79eb7c;
        case 0x79eb80u: goto label_79eb80;
        case 0x79eb84u: goto label_79eb84;
        case 0x79eb88u: goto label_79eb88;
        case 0x79eb8cu: goto label_79eb8c;
        case 0x79eb90u: goto label_79eb90;
        case 0x79eb94u: goto label_79eb94;
        case 0x79eb98u: goto label_79eb98;
        case 0x79eb9cu: goto label_79eb9c;
        case 0x79eba0u: goto label_79eba0;
        case 0x79eba4u: goto label_79eba4;
        case 0x79eba8u: goto label_79eba8;
        case 0x79ebacu: goto label_79ebac;
        case 0x79ebb0u: goto label_79ebb0;
        case 0x79ebb4u: goto label_79ebb4;
        case 0x79ebb8u: goto label_79ebb8;
        case 0x79ebbcu: goto label_79ebbc;
        case 0x79ebc0u: goto label_79ebc0;
        case 0x79ebc4u: goto label_79ebc4;
        case 0x79ebc8u: goto label_79ebc8;
        case 0x79ebccu: goto label_79ebcc;
        case 0x79ebd0u: goto label_79ebd0;
        case 0x79ebd4u: goto label_79ebd4;
        case 0x79ebd8u: goto label_79ebd8;
        case 0x79ebdcu: goto label_79ebdc;
        case 0x79ebe0u: goto label_79ebe0;
        case 0x79ebe4u: goto label_79ebe4;
        case 0x79ebe8u: goto label_79ebe8;
        case 0x79ebecu: goto label_79ebec;
        case 0x79ebf0u: goto label_79ebf0;
        case 0x79ebf4u: goto label_79ebf4;
        case 0x79ebf8u: goto label_79ebf8;
        case 0x79ebfcu: goto label_79ebfc;
        case 0x79ec00u: goto label_79ec00;
        case 0x79ec04u: goto label_79ec04;
        case 0x79ec08u: goto label_79ec08;
        case 0x79ec0cu: goto label_79ec0c;
        case 0x79ec10u: goto label_79ec10;
        case 0x79ec14u: goto label_79ec14;
        case 0x79ec18u: goto label_79ec18;
        case 0x79ec1cu: goto label_79ec1c;
        case 0x79ec20u: goto label_79ec20;
        case 0x79ec24u: goto label_79ec24;
        case 0x79ec28u: goto label_79ec28;
        case 0x79ec2cu: goto label_79ec2c;
        case 0x79ec30u: goto label_79ec30;
        case 0x79ec34u: goto label_79ec34;
        case 0x79ec38u: goto label_79ec38;
        case 0x79ec3cu: goto label_79ec3c;
        case 0x79ec40u: goto label_79ec40;
        case 0x79ec44u: goto label_79ec44;
        case 0x79ec48u: goto label_79ec48;
        case 0x79ec4cu: goto label_79ec4c;
        case 0x79ec50u: goto label_79ec50;
        case 0x79ec54u: goto label_79ec54;
        case 0x79ec58u: goto label_79ec58;
        case 0x79ec5cu: goto label_79ec5c;
        case 0x79ec60u: goto label_79ec60;
        case 0x79ec64u: goto label_79ec64;
        case 0x79ec68u: goto label_79ec68;
        case 0x79ec6cu: goto label_79ec6c;
        case 0x79ec70u: goto label_79ec70;
        case 0x79ec74u: goto label_79ec74;
        case 0x79ec78u: goto label_79ec78;
        case 0x79ec7cu: goto label_79ec7c;
        case 0x79ec80u: goto label_79ec80;
        case 0x79ec84u: goto label_79ec84;
        case 0x79ec88u: goto label_79ec88;
        case 0x79ec8cu: goto label_79ec8c;
        case 0x79ec90u: goto label_79ec90;
        case 0x79ec94u: goto label_79ec94;
        case 0x79ec98u: goto label_79ec98;
        case 0x79ec9cu: goto label_79ec9c;
        case 0x79eca0u: goto label_79eca0;
        case 0x79eca4u: goto label_79eca4;
        case 0x79eca8u: goto label_79eca8;
        case 0x79ecacu: goto label_79ecac;
        case 0x79ecb0u: goto label_79ecb0;
        case 0x79ecb4u: goto label_79ecb4;
        case 0x79ecb8u: goto label_79ecb8;
        case 0x79ecbcu: goto label_79ecbc;
        case 0x79ecc0u: goto label_79ecc0;
        case 0x79ecc4u: goto label_79ecc4;
        case 0x79ecc8u: goto label_79ecc8;
        case 0x79ecccu: goto label_79eccc;
        case 0x79ecd0u: goto label_79ecd0;
        case 0x79ecd4u: goto label_79ecd4;
        case 0x79ecd8u: goto label_79ecd8;
        case 0x79ecdcu: goto label_79ecdc;
        case 0x79ece0u: goto label_79ece0;
        case 0x79ece4u: goto label_79ece4;
        case 0x79ece8u: goto label_79ece8;
        case 0x79ececu: goto label_79ecec;
        case 0x79ecf0u: goto label_79ecf0;
        case 0x79ecf4u: goto label_79ecf4;
        case 0x79ecf8u: goto label_79ecf8;
        case 0x79ecfcu: goto label_79ecfc;
        case 0x79ed00u: goto label_79ed00;
        case 0x79ed04u: goto label_79ed04;
        case 0x79ed08u: goto label_79ed08;
        case 0x79ed0cu: goto label_79ed0c;
        case 0x79ed10u: goto label_79ed10;
        case 0x79ed14u: goto label_79ed14;
        case 0x79ed18u: goto label_79ed18;
        case 0x79ed1cu: goto label_79ed1c;
        case 0x79ed20u: goto label_79ed20;
        case 0x79ed24u: goto label_79ed24;
        case 0x79ed28u: goto label_79ed28;
        case 0x79ed2cu: goto label_79ed2c;
        case 0x79ed30u: goto label_79ed30;
        case 0x79ed34u: goto label_79ed34;
        case 0x79ed38u: goto label_79ed38;
        case 0x79ed3cu: goto label_79ed3c;
        case 0x79ed40u: goto label_79ed40;
        case 0x79ed44u: goto label_79ed44;
        case 0x79ed48u: goto label_79ed48;
        case 0x79ed4cu: goto label_79ed4c;
        case 0x79ed50u: goto label_79ed50;
        case 0x79ed54u: goto label_79ed54;
        case 0x79ed58u: goto label_79ed58;
        case 0x79ed5cu: goto label_79ed5c;
        case 0x79ed60u: goto label_79ed60;
        case 0x79ed64u: goto label_79ed64;
        case 0x79ed68u: goto label_79ed68;
        case 0x79ed6cu: goto label_79ed6c;
        case 0x79ed70u: goto label_79ed70;
        case 0x79ed74u: goto label_79ed74;
        case 0x79ed78u: goto label_79ed78;
        case 0x79ed7cu: goto label_79ed7c;
        case 0x79ed80u: goto label_79ed80;
        case 0x79ed84u: goto label_79ed84;
        case 0x79ed88u: goto label_79ed88;
        case 0x79ed8cu: goto label_79ed8c;
        case 0x79ed90u: goto label_79ed90;
        case 0x79ed94u: goto label_79ed94;
        case 0x79ed98u: goto label_79ed98;
        case 0x79ed9cu: goto label_79ed9c;
        case 0x79eda0u: goto label_79eda0;
        case 0x79eda4u: goto label_79eda4;
        case 0x79eda8u: goto label_79eda8;
        case 0x79edacu: goto label_79edac;
        case 0x79edb0u: goto label_79edb0;
        case 0x79edb4u: goto label_79edb4;
        case 0x79edb8u: goto label_79edb8;
        case 0x79edbcu: goto label_79edbc;
        case 0x79edc0u: goto label_79edc0;
        case 0x79edc4u: goto label_79edc4;
        case 0x79edc8u: goto label_79edc8;
        case 0x79edccu: goto label_79edcc;
        case 0x79edd0u: goto label_79edd0;
        case 0x79edd4u: goto label_79edd4;
        case 0x79edd8u: goto label_79edd8;
        case 0x79eddcu: goto label_79eddc;
        case 0x79ede0u: goto label_79ede0;
        case 0x79ede4u: goto label_79ede4;
        case 0x79ede8u: goto label_79ede8;
        case 0x79edecu: goto label_79edec;
        case 0x79edf0u: goto label_79edf0;
        case 0x79edf4u: goto label_79edf4;
        case 0x79edf8u: goto label_79edf8;
        case 0x79edfcu: goto label_79edfc;
        case 0x79ee00u: goto label_79ee00;
        case 0x79ee04u: goto label_79ee04;
        case 0x79ee08u: goto label_79ee08;
        case 0x79ee0cu: goto label_79ee0c;
        case 0x79ee10u: goto label_79ee10;
        case 0x79ee14u: goto label_79ee14;
        case 0x79ee18u: goto label_79ee18;
        case 0x79ee1cu: goto label_79ee1c;
        case 0x79ee20u: goto label_79ee20;
        case 0x79ee24u: goto label_79ee24;
        case 0x79ee28u: goto label_79ee28;
        case 0x79ee2cu: goto label_79ee2c;
        case 0x79ee30u: goto label_79ee30;
        case 0x79ee34u: goto label_79ee34;
        case 0x79ee38u: goto label_79ee38;
        case 0x79ee3cu: goto label_79ee3c;
        case 0x79ee40u: goto label_79ee40;
        case 0x79ee44u: goto label_79ee44;
        case 0x79ee48u: goto label_79ee48;
        case 0x79ee4cu: goto label_79ee4c;
        case 0x79ee50u: goto label_79ee50;
        case 0x79ee54u: goto label_79ee54;
        case 0x79ee58u: goto label_79ee58;
        case 0x79ee5cu: goto label_79ee5c;
        case 0x79ee60u: goto label_79ee60;
        case 0x79ee64u: goto label_79ee64;
        case 0x79ee68u: goto label_79ee68;
        case 0x79ee6cu: goto label_79ee6c;
        case 0x79ee70u: goto label_79ee70;
        case 0x79ee74u: goto label_79ee74;
        case 0x79ee78u: goto label_79ee78;
        case 0x79ee7cu: goto label_79ee7c;
        case 0x79ee80u: goto label_79ee80;
        case 0x79ee84u: goto label_79ee84;
        case 0x79ee88u: goto label_79ee88;
        case 0x79ee8cu: goto label_79ee8c;
        case 0x79ee90u: goto label_79ee90;
        case 0x79ee94u: goto label_79ee94;
        case 0x79ee98u: goto label_79ee98;
        case 0x79ee9cu: goto label_79ee9c;
        case 0x79eea0u: goto label_79eea0;
        case 0x79eea4u: goto label_79eea4;
        case 0x79eea8u: goto label_79eea8;
        case 0x79eeacu: goto label_79eeac;
        case 0x79eeb0u: goto label_79eeb0;
        case 0x79eeb4u: goto label_79eeb4;
        case 0x79eeb8u: goto label_79eeb8;
        case 0x79eebcu: goto label_79eebc;
        case 0x79eec0u: goto label_79eec0;
        case 0x79eec4u: goto label_79eec4;
        case 0x79eec8u: goto label_79eec8;
        case 0x79eeccu: goto label_79eecc;
        case 0x79eed0u: goto label_79eed0;
        case 0x79eed4u: goto label_79eed4;
        case 0x79eed8u: goto label_79eed8;
        case 0x79eedcu: goto label_79eedc;
        case 0x79eee0u: goto label_79eee0;
        case 0x79eee4u: goto label_79eee4;
        case 0x79eee8u: goto label_79eee8;
        case 0x79eeecu: goto label_79eeec;
        case 0x79eef0u: goto label_79eef0;
        case 0x79eef4u: goto label_79eef4;
        case 0x79eef8u: goto label_79eef8;
        case 0x79eefcu: goto label_79eefc;
        case 0x79ef00u: goto label_79ef00;
        case 0x79ef04u: goto label_79ef04;
        case 0x79ef08u: goto label_79ef08;
        case 0x79ef0cu: goto label_79ef0c;
        case 0x79ef10u: goto label_79ef10;
        case 0x79ef14u: goto label_79ef14;
        case 0x79ef18u: goto label_79ef18;
        case 0x79ef1cu: goto label_79ef1c;
        case 0x79ef20u: goto label_79ef20;
        case 0x79ef24u: goto label_79ef24;
        case 0x79ef28u: goto label_79ef28;
        case 0x79ef2cu: goto label_79ef2c;
        case 0x79ef30u: goto label_79ef30;
        case 0x79ef34u: goto label_79ef34;
        case 0x79ef38u: goto label_79ef38;
        case 0x79ef3cu: goto label_79ef3c;
        case 0x79ef40u: goto label_79ef40;
        case 0x79ef44u: goto label_79ef44;
        case 0x79ef48u: goto label_79ef48;
        case 0x79ef4cu: goto label_79ef4c;
        case 0x79ef50u: goto label_79ef50;
        case 0x79ef54u: goto label_79ef54;
        case 0x79ef58u: goto label_79ef58;
        case 0x79ef5cu: goto label_79ef5c;
        case 0x79ef60u: goto label_79ef60;
        case 0x79ef64u: goto label_79ef64;
        case 0x79ef68u: goto label_79ef68;
        case 0x79ef6cu: goto label_79ef6c;
        case 0x79ef70u: goto label_79ef70;
        case 0x79ef74u: goto label_79ef74;
        case 0x79ef78u: goto label_79ef78;
        case 0x79ef7cu: goto label_79ef7c;
        case 0x79ef80u: goto label_79ef80;
        case 0x79ef84u: goto label_79ef84;
        case 0x79ef88u: goto label_79ef88;
        case 0x79ef8cu: goto label_79ef8c;
        case 0x79ef90u: goto label_79ef90;
        case 0x79ef94u: goto label_79ef94;
        case 0x79ef98u: goto label_79ef98;
        case 0x79ef9cu: goto label_79ef9c;
        case 0x79efa0u: goto label_79efa0;
        case 0x79efa4u: goto label_79efa4;
        case 0x79efa8u: goto label_79efa8;
        case 0x79efacu: goto label_79efac;
        case 0x79efb0u: goto label_79efb0;
        case 0x79efb4u: goto label_79efb4;
        case 0x79efb8u: goto label_79efb8;
        case 0x79efbcu: goto label_79efbc;
        case 0x79efc0u: goto label_79efc0;
        case 0x79efc4u: goto label_79efc4;
        case 0x79efc8u: goto label_79efc8;
        case 0x79efccu: goto label_79efcc;
        case 0x79efd0u: goto label_79efd0;
        case 0x79efd4u: goto label_79efd4;
        case 0x79efd8u: goto label_79efd8;
        case 0x79efdcu: goto label_79efdc;
        case 0x79efe0u: goto label_79efe0;
        case 0x79efe4u: goto label_79efe4;
        case 0x79efe8u: goto label_79efe8;
        case 0x79efecu: goto label_79efec;
        case 0x79eff0u: goto label_79eff0;
        case 0x79eff4u: goto label_79eff4;
        case 0x79eff8u: goto label_79eff8;
        case 0x79effcu: goto label_79effc;
        case 0x79f000u: goto label_79f000;
        case 0x79f004u: goto label_79f004;
        case 0x79f008u: goto label_79f008;
        case 0x79f00cu: goto label_79f00c;
        case 0x79f010u: goto label_79f010;
        case 0x79f014u: goto label_79f014;
        case 0x79f018u: goto label_79f018;
        case 0x79f01cu: goto label_79f01c;
        case 0x79f020u: goto label_79f020;
        case 0x79f024u: goto label_79f024;
        case 0x79f028u: goto label_79f028;
        case 0x79f02cu: goto label_79f02c;
        case 0x79f030u: goto label_79f030;
        case 0x79f034u: goto label_79f034;
        case 0x79f038u: goto label_79f038;
        case 0x79f03cu: goto label_79f03c;
        case 0x79f040u: goto label_79f040;
        case 0x79f044u: goto label_79f044;
        case 0x79f048u: goto label_79f048;
        case 0x79f04cu: goto label_79f04c;
        case 0x79f050u: goto label_79f050;
        case 0x79f054u: goto label_79f054;
        case 0x79f058u: goto label_79f058;
        case 0x79f05cu: goto label_79f05c;
        case 0x79f060u: goto label_79f060;
        case 0x79f064u: goto label_79f064;
        case 0x79f068u: goto label_79f068;
        case 0x79f06cu: goto label_79f06c;
        case 0x79f070u: goto label_79f070;
        case 0x79f074u: goto label_79f074;
        case 0x79f078u: goto label_79f078;
        case 0x79f07cu: goto label_79f07c;
        case 0x79f080u: goto label_79f080;
        case 0x79f084u: goto label_79f084;
        case 0x79f088u: goto label_79f088;
        case 0x79f08cu: goto label_79f08c;
        case 0x79f090u: goto label_79f090;
        case 0x79f094u: goto label_79f094;
        case 0x79f098u: goto label_79f098;
        case 0x79f09cu: goto label_79f09c;
        case 0x79f0a0u: goto label_79f0a0;
        case 0x79f0a4u: goto label_79f0a4;
        case 0x79f0a8u: goto label_79f0a8;
        case 0x79f0acu: goto label_79f0ac;
        case 0x79f0b0u: goto label_79f0b0;
        case 0x79f0b4u: goto label_79f0b4;
        case 0x79f0b8u: goto label_79f0b8;
        case 0x79f0bcu: goto label_79f0bc;
        case 0x79f0c0u: goto label_79f0c0;
        case 0x79f0c4u: goto label_79f0c4;
        case 0x79f0c8u: goto label_79f0c8;
        case 0x79f0ccu: goto label_79f0cc;
        case 0x79f0d0u: goto label_79f0d0;
        case 0x79f0d4u: goto label_79f0d4;
        case 0x79f0d8u: goto label_79f0d8;
        case 0x79f0dcu: goto label_79f0dc;
        case 0x79f0e0u: goto label_79f0e0;
        case 0x79f0e4u: goto label_79f0e4;
        case 0x79f0e8u: goto label_79f0e8;
        case 0x79f0ecu: goto label_79f0ec;
        case 0x79f0f0u: goto label_79f0f0;
        case 0x79f0f4u: goto label_79f0f4;
        case 0x79f0f8u: goto label_79f0f8;
        case 0x79f0fcu: goto label_79f0fc;
        case 0x79f100u: goto label_79f100;
        case 0x79f104u: goto label_79f104;
        case 0x79f108u: goto label_79f108;
        case 0x79f10cu: goto label_79f10c;
        case 0x79f110u: goto label_79f110;
        case 0x79f114u: goto label_79f114;
        case 0x79f118u: goto label_79f118;
        case 0x79f11cu: goto label_79f11c;
        case 0x79f120u: goto label_79f120;
        case 0x79f124u: goto label_79f124;
        case 0x79f128u: goto label_79f128;
        case 0x79f12cu: goto label_79f12c;
        case 0x79f130u: goto label_79f130;
        case 0x79f134u: goto label_79f134;
        case 0x79f138u: goto label_79f138;
        case 0x79f13cu: goto label_79f13c;
        case 0x79f140u: goto label_79f140;
        case 0x79f144u: goto label_79f144;
        case 0x79f148u: goto label_79f148;
        case 0x79f14cu: goto label_79f14c;
        case 0x79f150u: goto label_79f150;
        case 0x79f154u: goto label_79f154;
        case 0x79f158u: goto label_79f158;
        case 0x79f15cu: goto label_79f15c;
        case 0x79f160u: goto label_79f160;
        case 0x79f164u: goto label_79f164;
        case 0x79f168u: goto label_79f168;
        case 0x79f16cu: goto label_79f16c;
        case 0x79f170u: goto label_79f170;
        case 0x79f174u: goto label_79f174;
        case 0x79f178u: goto label_79f178;
        case 0x79f17cu: goto label_79f17c;
        case 0x79f180u: goto label_79f180;
        case 0x79f184u: goto label_79f184;
        case 0x79f188u: goto label_79f188;
        case 0x79f18cu: goto label_79f18c;
        case 0x79f190u: goto label_79f190;
        case 0x79f194u: goto label_79f194;
        case 0x79f198u: goto label_79f198;
        case 0x79f19cu: goto label_79f19c;
        case 0x79f1a0u: goto label_79f1a0;
        case 0x79f1a4u: goto label_79f1a4;
        case 0x79f1a8u: goto label_79f1a8;
        case 0x79f1acu: goto label_79f1ac;
        case 0x79f1b0u: goto label_79f1b0;
        case 0x79f1b4u: goto label_79f1b4;
        case 0x79f1b8u: goto label_79f1b8;
        case 0x79f1bcu: goto label_79f1bc;
        case 0x79f1c0u: goto label_79f1c0;
        case 0x79f1c4u: goto label_79f1c4;
        case 0x79f1c8u: goto label_79f1c8;
        case 0x79f1ccu: goto label_79f1cc;
        case 0x79f1d0u: goto label_79f1d0;
        case 0x79f1d4u: goto label_79f1d4;
        case 0x79f1d8u: goto label_79f1d8;
        case 0x79f1dcu: goto label_79f1dc;
        default: break;
    }

    ctx->pc = 0x79df68u;

label_79df68:
    // 0x79df68: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x79df68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
label_79df6c:
    // 0x79df6c: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x79df6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
label_79df70:
    // 0x79df70: 0x7fb20240  sq          $s2, 0x240($sp)
    ctx->pc = 0x79df70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 18));
label_79df74:
    // 0x79df74: 0x7fb00260  sq          $s0, 0x260($sp)
    ctx->pc = 0x79df74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 16));
label_79df78:
    // 0x79df78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x79df78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_79df7c:
    // 0x79df7c: 0x7fb10250  sq          $s1, 0x250($sp)
    ctx->pc = 0x79df7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 17));
label_79df80:
    // 0x79df80: 0x26470090  addiu       $a3, $s2, 0x90
    ctx->pc = 0x79df80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_79df84:
    // 0x79df84: 0x7fb30230  sq          $s3, 0x230($sp)
    ctx->pc = 0x79df84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 19));
label_79df88:
    // 0x79df88: 0x7fb40220  sq          $s4, 0x220($sp)
    ctx->pc = 0x79df88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 20));
label_79df8c:
    // 0x79df8c: 0x7fb50210  sq          $s5, 0x210($sp)
    ctx->pc = 0x79df8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 21));
label_79df90:
    // 0x79df90: 0x7fb60200  sq          $s6, 0x200($sp)
    ctx->pc = 0x79df90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 22));
label_79df94:
    // 0x79df94: 0x7fb701f0  sq          $s7, 0x1F0($sp)
    ctx->pc = 0x79df94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 23));
label_79df98:
    // 0x79df98: 0x7fbe01e0  sq          $fp, 0x1E0($sp)
    ctx->pc = 0x79df98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 30));
label_79df9c:
    // 0x79df9c: 0xffbf01d0  sd          $ra, 0x1D0($sp)
    ctx->pc = 0x79df9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 31));
label_79dfa0:
    // 0x79dfa0: 0xe7bc02b0  swc1        $f28, 0x2B0($sp)
    ctx->pc = 0x79dfa0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_79dfa4:
    // 0x79dfa4: 0xe7bb02a8  swc1        $f27, 0x2A8($sp)
    ctx->pc = 0x79dfa4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_79dfa8:
    // 0x79dfa8: 0xe7ba02a0  swc1        $f26, 0x2A0($sp)
    ctx->pc = 0x79dfa8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_79dfac:
    // 0x79dfac: 0xe7b90298  swc1        $f25, 0x298($sp)
    ctx->pc = 0x79dfacu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
label_79dfb0:
    // 0x79dfb0: 0xe7b80290  swc1        $f24, 0x290($sp)
    ctx->pc = 0x79dfb0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_79dfb4:
    // 0x79dfb4: 0xe7b70288  swc1        $f23, 0x288($sp)
    ctx->pc = 0x79dfb4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_79dfb8:
    // 0x79dfb8: 0xe7b60280  swc1        $f22, 0x280($sp)
    ctx->pc = 0x79dfb8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_79dfbc:
    // 0x79dfbc: 0xe7b50278  swc1        $f21, 0x278($sp)
    ctx->pc = 0x79dfbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_79dfc0:
    // 0x79dfc0: 0xe7b40270  swc1        $f20, 0x270($sp)
    ctx->pc = 0x79dfc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_79dfc4:
    // 0x79dfc4: 0x8e450090  lw          $a1, 0x90($s2)
    ctx->pc = 0x79dfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_79dfc8:
    // 0x79dfc8: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x79dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_79dfcc:
    // 0x79dfcc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x79dfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_79dfd0:
    // 0x79dfd0: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x79dfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_79dfd4:
    // 0x79dfd4: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x79dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_79dfd8:
    // 0x79dfd8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_79dfdc:
    // 0x79dfdc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79dfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_79dfe0:
    // 0x79dfe0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x79dfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_79dfe4:
    // 0x79dfe4: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x79dfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_79dfe8:
    // 0x79dfe8: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x79dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_79dfec:
    // 0x79dfec: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79dfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_79dff0:
    // 0x79dff0: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x79dff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
label_79dff4:
    // 0x79dff4: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x79dff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_79dff8:
    // 0x79dff8: 0x90620098  lbu         $v0, 0x98($v1)
    ctx->pc = 0x79dff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 152)));
label_79dffc:
    // 0x79dffc: 0x54400449  bnel        $v0, $zero, . + 4 + (0x449 << 2)
label_79e000:
    if (ctx->pc == 0x79E000u) {
        ctx->pc = 0x79E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DFFCu;
        // 0x79e000: 0x8e430068  lw          $v1, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E004u;
        goto label_79e004;
    }
    ctx->pc = 0x79DFFCu;
    {
        const bool branch_taken_0x79dffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79dffc) {
            ctx->pc = 0x79E000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79DFFCu;
            // 0x79e000: 0x8e430068  lw          $v1, 0x68($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79F124u;
            goto label_79f124;
        }
    }
    ctx->pc = 0x79E004u;
label_79e004:
    // 0x79e004: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x79e004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_79e008:
    // 0x79e008: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x79e008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_79e00c:
    // 0x79e00c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x79e00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_79e010:
    // 0x79e010: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79e010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_79e014:
    // 0x79e014: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x79e014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_79e018:
    // 0x79e018: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x79e018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_79e01c:
    // 0x79e01c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79e01cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_79e020:
    // 0x79e020: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x79e020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_79e024:
    // 0x79e024: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x79e024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_79e028:
    // 0x79e028: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x79e028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_79e02c:
    // 0x79e02c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x79e02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
label_79e030:
    // 0x79e030: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x79e030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_79e034:
    // 0x79e034: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x79e034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_79e038:
    // 0x79e038: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x79e038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_79e03c:
    // 0x79e03c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x79e03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_79e040:
    // 0x79e040: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x79e040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
label_79e044:
    // 0x79e044: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x79e044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
label_79e048:
    // 0x79e048: 0xafa301a8  sw          $v1, 0x1A8($sp)
    ctx->pc = 0x79e048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 3));
label_79e04c:
    // 0x79e04c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x79e04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
label_79e050:
    // 0x79e050: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x79e050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_79e054:
    // 0x79e054: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x79e054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_79e058:
    // 0x79e058: 0x4a00002  bltz        $a1, . + 4 + (0x2 << 2)
label_79e05c:
    if (ctx->pc == 0x79E05Cu) {
        ctx->pc = 0x79E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E058u;
        // 0x79e05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E060u;
        goto label_79e060;
    }
    ctx->pc = 0x79E058u;
    {
        const bool branch_taken_0x79e058 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x79E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E058u;
        // 0x79e05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e058) {
            ctx->pc = 0x79E064u;
            goto label_79e064;
        }
    }
    ctx->pc = 0x79E060u;
label_79e060:
    // 0x79e060: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x79e060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_79e064:
    // 0x79e064: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x79e064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_79e068:
    // 0x79e068: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79e06c:
    if (ctx->pc == 0x79E06Cu) {
        ctx->pc = 0x79E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E068u;
        // 0x79e06c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E070u;
        goto label_79e070;
    }
    ctx->pc = 0x79E068u;
    {
        const bool branch_taken_0x79e068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E068u;
        // 0x79e06c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e068) {
            ctx->pc = 0x79E088u;
            goto label_79e088;
        }
    }
    ctx->pc = 0x79E070u;
label_79e070:
    // 0x79e070: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x79e070u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_79e074:
    // 0x79e074: 0x24420758  addiu       $v0, $v0, 0x758
    ctx->pc = 0x79e074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1880));
label_79e078:
    // 0x79e078: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x79e078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_79e07c:
    // 0x79e07c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x79e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_79e080:
    // 0x79e080: 0x60f809  jalr        $v1
label_79e084:
    if (ctx->pc == 0x79E084u) {
        ctx->pc = 0x79E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E080u;
        // 0x79e084: 0x8fa40188  lw          $a0, 0x188($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E088u;
        goto label_79e088;
    }
    ctx->pc = 0x79E080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79E088u);
        ctx->pc = 0x79E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E080u;
        // 0x79e084: 0x8fa40188  lw          $a0, 0x188($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79E080u, 0x79E088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79E088u;
label_79e088:
    // 0x79e088: 0xc64c0014  lwc1        $f12, 0x14($s2)
    ctx->pc = 0x79e088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_79e08c:
    // 0x79e08c: 0x26540074  addiu       $s4, $s2, 0x74
    ctx->pc = 0x79e08cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
label_79e090:
    // 0x79e090: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79e090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79e094:
    // 0x79e094: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79e094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79e098:
    // 0x79e098: 0xc07df52  jal         func_1F7D48
label_79e09c:
    if (ctx->pc == 0x79E09Cu) {
        ctx->pc = 0x79E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E098u;
        // 0x79e09c: 0x26570024  addiu       $s7, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E0A0u;
        goto label_79e0a0;
    }
    ctx->pc = 0x79E098u;
    SET_GPR_U32(ctx, 31, 0x79E0A0u);
    ctx->pc = 0x79E09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E098u;
    // 0x79e09c: 0x26570024  addiu       $s7, $s2, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x79E098u, 0x79E0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E0A0u;
label_79e0a0:
    // 0x79e0a0: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x79e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_79e0a4:
    // 0x79e0a4: 0xafa401bc  sw          $a0, 0x1BC($sp)
    ctx->pc = 0x79e0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 4));
label_79e0a8:
    // 0x79e0a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x79e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_79e0ac:
    // 0x79e0ac: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x79e0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_79e0b0:
    // 0x79e0b0: 0xc07df52  jal         func_1F7D48
label_79e0b4:
    if (ctx->pc == 0x79E0B4u) {
        ctx->pc = 0x79E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E0B0u;
        // 0x79e0b4: 0xc64c0014  lwc1        $f12, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E0B8u;
        goto label_79e0b8;
    }
    ctx->pc = 0x79E0B0u;
    SET_GPR_U32(ctx, 31, 0x79E0B8u);
    ctx->pc = 0x79E0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E0B0u;
    // 0x79e0b4: 0xc64c0014  lwc1        $f12, 0x14($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x79E0B0u, 0x79E0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E0B8u;
label_79e0b8:
    // 0x79e0b8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x79e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_79e0bc:
    // 0x79e0bc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x79e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_79e0c0:
    // 0x79e0c0: 0xafa3018c  sw          $v1, 0x18C($sp)
    ctx->pc = 0x79e0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
label_79e0c4:
    // 0x79e0c4: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x79e0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_79e0c8:
    // 0x79e0c8: 0xc07df52  jal         func_1F7D48
label_79e0cc:
    if (ctx->pc == 0x79E0CCu) {
        ctx->pc = 0x79E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E0C8u;
        // 0x79e0cc: 0xc64c000c  lwc1        $f12, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E0D0u;
        goto label_79e0d0;
    }
    ctx->pc = 0x79E0C8u;
    SET_GPR_U32(ctx, 31, 0x79E0D0u);
    ctx->pc = 0x79E0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E0C8u;
    // 0x79e0cc: 0xc64c000c  lwc1        $f12, 0xC($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x79E0C8u, 0x79E0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E0D0u;
label_79e0d0:
    // 0x79e0d0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x79e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_79e0d4:
    // 0x79e0d4: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x79e0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
label_79e0d8:
    // 0x79e0d8: 0xc0527ae  jal         func_149EB8
label_79e0dc:
    if (ctx->pc == 0x79E0DCu) {
        ctx->pc = 0x79E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E0D8u;
        // 0x79e0dc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E0E0u;
        goto label_79e0e0;
    }
    ctx->pc = 0x79E0D8u;
    SET_GPR_U32(ctx, 31, 0x79E0E0u);
    ctx->pc = 0x79E0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E0D8u;
    // 0x79e0dc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x79E0D8u, 0x79E0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E0E0u;
label_79e0e0:
    // 0x79e0e0: 0xc0527ae  jal         func_149EB8
label_79e0e4:
    if (ctx->pc == 0x79E0E4u) {
        ctx->pc = 0x79E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E0E0u;
        // 0x79e0e4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E0E8u;
        goto label_79e0e8;
    }
    ctx->pc = 0x79E0E0u;
    SET_GPR_U32(ctx, 31, 0x79E0E8u);
    ctx->pc = 0x79E0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E0E0u;
    // 0x79e0e4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x79E0E0u, 0x79E0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E0E8u;
label_79e0e8:
    // 0x79e0e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x79e0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_79e0ec:
    // 0x79e0ec: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x79e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_79e0f0:
    // 0x79e0f0: 0xafa401b4  sw          $a0, 0x1B4($sp)
    ctx->pc = 0x79e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 4));
label_79e0f4:
    // 0x79e0f4: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x79e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_79e0f8:
    // 0x79e0f8: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x79e0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
label_79e0fc:
    // 0x79e0fc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x79e0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_79e100:
    // 0x79e100: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x79e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_79e104:
    // 0x79e104: 0xafa301b0  sw          $v1, 0x1B0($sp)
    ctx->pc = 0x79e104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
label_79e108:
    // 0x79e108: 0xafa401ac  sw          $a0, 0x1AC($sp)
    ctx->pc = 0x79e108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 4));
label_79e10c:
    // 0x79e10c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x79e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_79e110:
    // 0x79e110: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x79e110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
label_79e114:
    // 0x79e114: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x79e114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_79e118:
    // 0x79e118: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x79e118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_79e11c:
    // 0x79e11c: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x79e11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
label_79e120:
    // 0x79e120: 0xafa40194  sw          $a0, 0x194($sp)
    ctx->pc = 0x79e120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 4));
label_79e124:
    // 0x79e124: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x79e124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_79e128:
    // 0x79e128: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x79e128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
label_79e12c:
    // 0x79e12c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x79e12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_79e130:
    // 0x79e130: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x79e130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_79e134:
    // 0x79e134: 0xafa3019c  sw          $v1, 0x19C($sp)
    ctx->pc = 0x79e134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 3));
label_79e138:
    // 0x79e138: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x79e138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
label_79e13c:
    // 0x79e13c: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x79e13cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_79e140:
    // 0x79e140: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x79e140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
label_79e144:
    // 0x79e144: 0x27b60130  addiu       $s6, $sp, 0x130
    ctx->pc = 0x79e144u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_79e148:
    // 0x79e148: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x79e148u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_79e14c:
    // 0x79e14c: 0x120001c6  beqz        $s0, . + 4 + (0x1C6 << 2)
label_79e150:
    if (ctx->pc == 0x79E150u) {
        ctx->pc = 0x79E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E14Cu;
        // 0x79e150: 0x8fa2018c  lw          $v0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E154u;
        goto label_79e154;
    }
    ctx->pc = 0x79E14Cu;
    {
        const bool branch_taken_0x79e14c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E14Cu;
        // 0x79e150: 0x8fa2018c  lw          $v0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e14c) {
            ctx->pc = 0x79E868u;
            goto label_79e868;
        }
    }
    ctx->pc = 0x79E154u;
label_79e154:
    // 0x79e154: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x79e154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79e158:
    // 0x79e158: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x79e158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
label_79e15c:
    // 0x79e15c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x79e15cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_79e160:
    // 0x79e160: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79e160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79e164:
    // 0x79e164: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79e164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79e168:
    // 0x79e168: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79e168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_79e16c:
    // 0x79e16c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_79e170:
    if (ctx->pc == 0x79E170u) {
        ctx->pc = 0x79E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E16Cu;
        // 0x79e170: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E174u;
        goto label_79e174;
    }
    ctx->pc = 0x79E16Cu;
    {
        const bool branch_taken_0x79e16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E16Cu;
        // 0x79e170: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e16c) {
            ctx->pc = 0x79E2B0u;
            goto label_79e2b0;
        }
    }
    ctx->pc = 0x79E174u;
label_79e174:
    // 0x79e174: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79e174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_79e178:
    // 0x79e178: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x79e178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_79e17c:
    // 0x79e17c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79e17cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79e180:
    // 0x79e180: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x79e180u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_79e184:
    // 0x79e184: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79e184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79e188:
    // 0x79e188: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79e188u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e18c:
    // 0x79e18c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x79e18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_79e190:
    // 0x79e190: 0x5c80004b  bgtzl       $a0, . + 4 + (0x4B << 2)
label_79e194:
    if (ctx->pc == 0x79E194u) {
        ctx->pc = 0x79E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E190u;
        // 0x79e194: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E198u;
        goto label_79e198;
    }
    ctx->pc = 0x79E190u;
    {
        const bool branch_taken_0x79e190 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x79e190) {
            ctx->pc = 0x79E194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79E190u;
            // 0x79e194: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79E2C0u;
            goto label_79e2c0;
        }
    }
    ctx->pc = 0x79E198u;
label_79e198:
    // 0x79e198: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x79e198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_79e19c:
    // 0x79e19c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79e1a0:
    // 0x79e1a0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x79e1a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79e1a4:
    // 0x79e1a4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x79e1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_79e1a8:
    // 0x79e1a8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x79e1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_79e1ac:
    // 0x79e1ac: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x79e1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_79e1b0:
    // 0x79e1b0: 0x24440490  addiu       $a0, $v0, 0x490
    ctx->pc = 0x79e1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1168));
label_79e1b4:
    // 0x79e1b4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x79e1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_79e1b8:
    // 0x79e1b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79e1b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79e1bc:
    // 0x79e1bc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x79e1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_79e1c0:
    // 0x79e1c0: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x79e1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_79e1c4:
    // 0x79e1c4: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x79e1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
label_79e1c8:
    // 0x79e1c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79e1c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79e1cc:
    // 0x79e1cc: 0x27aa0180  addiu       $t2, $sp, 0x180
    ctx->pc = 0x79e1ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_79e1d0:
    // 0x79e1d0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x79e1d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79e1d4:
    // 0x79e1d4: 0xc04c784  jal         func_131E10
label_79e1d8:
    if (ctx->pc == 0x79E1D8u) {
        ctx->pc = 0x79E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E1D4u;
        // 0x79e1d8: 0x8c4500f0  lw          $a1, 0xF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E1DCu;
        goto label_79e1dc;
    }
    ctx->pc = 0x79E1D4u;
    SET_GPR_U32(ctx, 31, 0x79E1DCu);
    ctx->pc = 0x79E1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E1D4u;
    // 0x79e1d8: 0x8c4500f0  lw          $a1, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x79E1D4u, 0x79E1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E1DCu;
label_79e1dc:
    // 0x79e1dc: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
label_79e1e0:
    if (ctx->pc == 0x79E1E0u) {
        ctx->pc = 0x79E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E1DCu;
        // 0x79e1e0: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E1E4u;
        goto label_79e1e4;
    }
    ctx->pc = 0x79E1DCu;
    {
        const bool branch_taken_0x79e1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79e1dc) {
            ctx->pc = 0x79E1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79E1DCu;
            // 0x79e1e0: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79E2B4u;
            goto label_79e2b4;
        }
    }
    ctx->pc = 0x79E1E4u;
label_79e1e4:
    // 0x79e1e4: 0xa2110024  sb          $s1, 0x24($s0)
    ctx->pc = 0x79e1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 17));
label_79e1e8:
    // 0x79e1e8: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x79e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_79e1ec:
    // 0x79e1ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79e1f0:
    // 0x79e1f0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x79e1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_79e1f4:
    // 0x79e1f4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_79e1f8:
    if (ctx->pc == 0x79E1F8u) {
        ctx->pc = 0x79E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E1F4u;
        // 0x79e1f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E1FCu;
        goto label_79e1fc;
    }
    ctx->pc = 0x79E1F4u;
    {
        const bool branch_taken_0x79e1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E1F4u;
        // 0x79e1f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e1f4) {
            ctx->pc = 0x79E244u;
            goto label_79e244;
        }
    }
    ctx->pc = 0x79E1FCu;
label_79e1fc:
    // 0x79e1fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79e1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79e200:
    // 0x79e200: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79e200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79e204:
    // 0x79e204: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x79e204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_79e208:
    // 0x79e208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79e208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79e20c:
    // 0x79e20c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x79e20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_79e210:
    // 0x79e210: 0xc0c1a0e  jal         func_306838
label_79e214:
    if (ctx->pc == 0x79E214u) {
        ctx->pc = 0x79E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E210u;
        // 0x79e214: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E218u;
        goto label_79e218;
    }
    ctx->pc = 0x79E210u;
    SET_GPR_U32(ctx, 31, 0x79E218u);
    ctx->pc = 0x79E214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E210u;
    // 0x79e214: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x79E210u, 0x79E218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E218u;
label_79e218:
    // 0x79e218: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x79e218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_79e21c:
    // 0x79e21c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79e21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79e220:
    // 0x79e220: 0x2464ee00  addiu       $a0, $v1, -0x1200
    ctx->pc = 0x79e220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
label_79e224:
    // 0x79e224: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x79e224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_79e228:
    // 0x79e228: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79e228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79e22c:
    // 0x79e22c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79e22cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79e230:
    // 0x79e230: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79e230u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79e234:
    // 0x79e234: 0xc0b2e28  jal         func_2CB8A0
label_79e238:
    if (ctx->pc == 0x79E238u) {
        ctx->pc = 0x79E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E234u;
        // 0x79e238: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E23Cu;
        goto label_79e23c;
    }
    ctx->pc = 0x79E234u;
    SET_GPR_U32(ctx, 31, 0x79E23Cu);
    ctx->pc = 0x79E238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E234u;
    // 0x79e238: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79E234u, 0x79E23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E23Cu;
label_79e23c:
    // 0x79e23c: 0x10000012  b           . + 4 + (0x12 << 2)
label_79e240:
    if (ctx->pc == 0x79E240u) {
        ctx->pc = 0x79E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E23Cu;
        // 0x79e240: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E244u;
        goto label_79e244;
    }
    ctx->pc = 0x79E23Cu;
    {
        const bool branch_taken_0x79e23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E23Cu;
        // 0x79e240: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e23c) {
            ctx->pc = 0x79E288u;
            goto label_79e288;
        }
    }
    ctx->pc = 0x79E244u;
label_79e244:
    // 0x79e244: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79e244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_79e248:
    // 0x79e248: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79e248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79e24c:
    // 0x79e24c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x79e24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_79e250:
    // 0x79e250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79e250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79e254:
    // 0x79e254: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x79e254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_79e258:
    // 0x79e258: 0xc0c1a0e  jal         func_306838
label_79e25c:
    if (ctx->pc == 0x79E25Cu) {
        ctx->pc = 0x79E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E258u;
        // 0x79e25c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E260u;
        goto label_79e260;
    }
    ctx->pc = 0x79E258u;
    SET_GPR_U32(ctx, 31, 0x79E260u);
    ctx->pc = 0x79E25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E258u;
    // 0x79e25c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x79E258u, 0x79E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E260u;
label_79e260:
    // 0x79e260: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79e260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79e264:
    // 0x79e264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79e264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79e268:
    // 0x79e268: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x79e268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_79e26c:
    // 0x79e26c: 0x2406005b  addiu       $a2, $zero, 0x5B
    ctx->pc = 0x79e26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_79e270:
    // 0x79e270: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79e270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79e274:
    // 0x79e274: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79e274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79e278:
    // 0x79e278: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79e278u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79e27c:
    // 0x79e27c: 0xc0b2e28  jal         func_2CB8A0
label_79e280:
    if (ctx->pc == 0x79E280u) {
        ctx->pc = 0x79E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E27Cu;
        // 0x79e280: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E284u;
        goto label_79e284;
    }
    ctx->pc = 0x79E27Cu;
    SET_GPR_U32(ctx, 31, 0x79E284u);
    ctx->pc = 0x79E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E27Cu;
    // 0x79e280: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79E27Cu, 0x79E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E284u;
label_79e284:
    // 0x79e284: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x79e284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79e288:
    // 0x79e288: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x79e288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_79e28c:
    // 0x79e28c: 0xc481d880  lwc1        $f1, -0x2780($a0)
    ctx->pc = 0x79e28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79e290:
    // 0x79e290: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x79e290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_79e294:
    // 0x79e294: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x79e294u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_79e298:
    // 0x79e298: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x79e298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_79e29c:
    // 0x79e29c: 0x2463d880  addiu       $v1, $v1, -0x2780
    ctx->pc = 0x79e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957184));
label_79e2a0:
    // 0x79e2a0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x79e2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79e2a4:
    // 0x79e2a4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79e2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79e2a8:
    // 0x79e2a8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x79e2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79e2ac:
    // 0x79e2ac: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79e2acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79e2b0:
    // 0x79e2b0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x79e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_79e2b4:
    // 0x79e2b4: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
label_79e2b8:
    if (ctx->pc == 0x79E2B8u) {
        ctx->pc = 0x79E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E2B4u;
        // 0x79e2b8: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E2BCu;
        goto label_79e2bc;
    }
    ctx->pc = 0x79E2B4u;
    {
        const bool branch_taken_0x79e2b4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x79e2b4) {
            ctx->pc = 0x79E2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79E2B4u;
            // 0x79e2b8: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79E2CCu;
            goto label_79e2cc;
        }
    }
    ctx->pc = 0x79E2BCu;
label_79e2bc:
    // 0x79e2bc: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x79e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_79e2c0:
    // 0x79e2c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_79e2c4:
    // 0x79e2c4: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x79e2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_79e2c8:
    // 0x79e2c8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x79e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_79e2cc:
    // 0x79e2cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_79e2d0:
    // 0x79e2d0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_79e2d4:
    if (ctx->pc == 0x79E2D4u) {
        ctx->pc = 0x79E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E2D0u;
        // 0x79e2d4: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E2D8u;
        goto label_79e2d8;
    }
    ctx->pc = 0x79E2D0u;
    {
        const bool branch_taken_0x79e2d0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x79E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E2D0u;
        // 0x79e2d4: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e2d0) {
            ctx->pc = 0x79E2E0u;
            goto label_79e2e0;
        }
    }
    ctx->pc = 0x79E2D8u;
label_79e2d8:
    // 0x79e2d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79e2dc:
    // 0x79e2dc: 0xa2020024  sb          $v0, 0x24($s0)
    ctx->pc = 0x79e2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 2));
label_79e2e0:
    // 0x79e2e0: 0x8ef30000  lw          $s3, 0x0($s7)
    ctx->pc = 0x79e2e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_79e2e4:
    // 0x79e2e4: 0x92620024  lbu         $v0, 0x24($s3)
    ctx->pc = 0x79e2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
label_79e2e8:
    // 0x79e2e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_79e2ec:
    if (ctx->pc == 0x79E2ECu) {
        ctx->pc = 0x79E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E2E8u;
        // 0x79e2ec: 0x9262002c  lbu         $v0, 0x2C($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E2F0u;
        goto label_79e2f0;
    }
    ctx->pc = 0x79E2E8u;
    {
        const bool branch_taken_0x79e2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79e2e8) {
            ctx->pc = 0x79E2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79E2E8u;
            // 0x79e2ec: 0x9262002c  lbu         $v0, 0x2C($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79E300u;
            goto label_79e300;
        }
    }
    ctx->pc = 0x79E2F0u;
label_79e2f0:
    // 0x79e2f0: 0xc1e6474  jal         func_7991D0
label_79e2f4:
    if (ctx->pc == 0x79E2F4u) {
        ctx->pc = 0x79E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E2F0u;
        // 0x79e2f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E2F8u;
        goto label_79e2f8;
    }
    ctx->pc = 0x79E2F0u;
    SET_GPR_U32(ctx, 31, 0x79E2F8u);
    ctx->pc = 0x79E2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E2F0u;
    // 0x79e2f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7991D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7991D0u, 0x79E2F0u, 0x79E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E2F8u;
label_79e2f8:
    // 0x79e2f8: 0x1000015a  b           . + 4 + (0x15A << 2)
label_79e2fc:
    if (ctx->pc == 0x79E2FCu) {
        ctx->pc = 0x79E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E2F8u;
        // 0x79e2fc: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E300u;
        goto label_79e300;
    }
    ctx->pc = 0x79E2F8u;
    {
        const bool branch_taken_0x79e2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E2F8u;
        // 0x79e2fc: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e2f8) {
            ctx->pc = 0x79E864u;
            goto label_79e864;
        }
    }
    ctx->pc = 0x79E300u;
label_79e300:
    // 0x79e300: 0x14400159  bnez        $v0, . + 4 + (0x159 << 2)
label_79e304:
    if (ctx->pc == 0x79E304u) {
        ctx->pc = 0x79E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E300u;
        // 0x79e304: 0x8fa2018c  lw          $v0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E308u;
        goto label_79e308;
    }
    ctx->pc = 0x79E300u;
    {
        const bool branch_taken_0x79e300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E300u;
        // 0x79e304: 0x8fa2018c  lw          $v0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e300) {
            ctx->pc = 0x79E868u;
            goto label_79e868;
        }
    }
    ctx->pc = 0x79E308u;
label_79e308:
    // 0x79e308: 0x8e460064  lw          $a2, 0x64($s2)
    ctx->pc = 0x79e308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_79e30c:
    // 0x79e30c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x79e30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_79e310:
    // 0x79e310: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79e310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_79e314:
    // 0x79e314: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79e314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79e318:
    // 0x79e318: 0xc4c1008c  lwc1        $f1, 0x8C($a2)
    ctx->pc = 0x79e318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79e31c:
    // 0x79e31c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x79e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_79e320:
    // 0x79e320: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x79e320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79e324:
    // 0x79e324: 0x0  nop
    ctx->pc = 0x79e324u;
    // NOP
label_79e328:
    // 0x79e328: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_79e32c:
    if (ctx->pc == 0x79E32Cu) {
        ctx->pc = 0x79E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E328u;
        // 0x79e32c: 0x8c5500f0  lw          $s5, 0xF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E330u;
        goto label_79e330;
    }
    ctx->pc = 0x79E328u;
    {
        const bool branch_taken_0x79e328 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E328u;
        // 0x79e32c: 0x8c5500f0  lw          $s5, 0xF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e328) {
            ctx->pc = 0x79E338u;
            goto label_79e338;
        }
    }
    ctx->pc = 0x79E330u;
label_79e330:
    // 0x79e330: 0x10000050  b           . + 4 + (0x50 << 2)
label_79e334:
    if (ctx->pc == 0x79E334u) {
        ctx->pc = 0x79E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E330u;
        // 0x79e334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E338u;
        goto label_79e338;
    }
    ctx->pc = 0x79E330u;
    {
        const bool branch_taken_0x79e330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E330u;
        // 0x79e334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e330) {
            ctx->pc = 0x79E474u;
            goto label_79e474;
        }
    }
    ctx->pc = 0x79E338u;
label_79e338:
    // 0x79e338: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x79e338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_79e33c:
    // 0x79e33c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x79e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_79e340:
    // 0x79e340: 0x24c40020  addiu       $a0, $a2, 0x20
    ctx->pc = 0x79e340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_79e344:
    // 0x79e344: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x79e344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_79e348:
    // 0x79e348: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x79e348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_79e34c:
    // 0x79e34c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_79e350:
    if (ctx->pc == 0x79E350u) {
        ctx->pc = 0x79E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E34Cu;
        // 0x79e350: 0x27b000a0  addiu       $s0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E354u;
        goto label_79e354;
    }
    ctx->pc = 0x79E34Cu;
    {
        const bool branch_taken_0x79e34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E34Cu;
        // 0x79e350: 0x27b000a0  addiu       $s0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e34c) {
            ctx->pc = 0x79E3C0u;
            goto label_79e3c0;
        }
    }
    ctx->pc = 0x79E354u;
label_79e354:
    // 0x79e354: 0x24c20030  addiu       $v0, $a2, 0x30
    ctx->pc = 0x79e354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_79e358:
    // 0x79e358: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x79e358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_79e35c:
    // 0x79e35c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x79e35cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_79e360:
    // 0x79e360: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x79e360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e364:
    // 0x79e364: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x79e364u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_79e368:
    // 0x79e368: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x79e368u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79e36c:
    // 0x79e36c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79e36cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79e370:
    // 0x79e370: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x79e370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e374:
    // 0x79e374: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x79e374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_79e378:
    // 0x79e378: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79e378u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79e37c:
    // 0x79e37c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x79e37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e380:
    // 0x79e380: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x79e380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79e384:
    // 0x79e384: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x79e384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_79e388:
    // 0x79e388: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x79e388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_79e38c:
    // 0x79e38c: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x79e38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_79e390:
    // 0x79e390: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x79e390u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_79e394:
    // 0x79e394: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x79e394u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_79e398:
    // 0x79e398: 0xfa040020  sqc2        $vf4, 0x20($s0)
    ctx->pc = 0x79e398u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e39c:
    // 0x79e39c: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x79e39cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_79e3a0:
    // 0x79e3a0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x79e3a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79e3a4:
    // 0x79e3a4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79e3a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79e3a8:
    // 0x79e3a8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x79e3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e3ac:
    // 0x79e3ac: 0x8fa30194  lw          $v1, 0x194($sp)
    ctx->pc = 0x79e3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_79e3b0:
    // 0x79e3b0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x79e3b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_79e3b4:
    // 0x79e3b4: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x79e3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e3b8:
    // 0x79e3b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_79e3bc:
    if (ctx->pc == 0x79E3BCu) {
        ctx->pc = 0x79E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E3B8u;
        // 0x79e3bc: 0x27b100b0  addiu       $s1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E3C0u;
        goto label_79e3c0;
    }
    ctx->pc = 0x79E3B8u;
    {
        const bool branch_taken_0x79e3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E3B8u;
        // 0x79e3bc: 0x27b100b0  addiu       $s1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e3b8) {
            ctx->pc = 0x79E3D0u;
            goto label_79e3d0;
        }
    }
    ctx->pc = 0x79E3C0u;
label_79e3c0:
    // 0x79e3c0: 0x24c20030  addiu       $v0, $a2, 0x30
    ctx->pc = 0x79e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_79e3c4:
    // 0x79e3c4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79e3c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79e3c8:
    // 0x79e3c8: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x79e3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e3cc:
    // 0x79e3cc: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x79e3ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_79e3d0:
    // 0x79e3d0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x79e3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_79e3d4:
    // 0x79e3d4: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x79e3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
label_79e3d8:
    // 0x79e3d8: 0x2484d860  addiu       $a0, $a0, -0x27A0
    ctx->pc = 0x79e3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957152));
label_79e3dc:
    // 0x79e3dc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x79e3dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_79e3e0:
    // 0x79e3e0: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x79e3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e3e4:
    // 0x79e3e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x79e3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_79e3e8:
    // 0x79e3e8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x79e3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_79e3ec:
    // 0x79e3ec: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x79e3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_79e3f0:
    // 0x79e3f0: 0xc051e92  jal         func_147A48
label_79e3f4:
    if (ctx->pc == 0x79E3F4u) {
        ctx->pc = 0x79E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E3F0u;
        // 0x79e3f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E3F8u;
        goto label_79e3f8;
    }
    ctx->pc = 0x79E3F0u;
    SET_GPR_U32(ctx, 31, 0x79E3F8u);
    ctx->pc = 0x79E3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E3F0u;
    // 0x79e3f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147A48u, 0x79E3F0u, 0x79E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E3F8u;
label_79e3f8:
    // 0x79e3f8: 0x3c014128  lui         $at, 0x4128
    ctx->pc = 0x79e3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16680 << 16));
label_79e3fc:
    // 0x79e3fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79e3fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79e400:
    // 0x79e400: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79e400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79e404:
    // 0x79e404: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x79e404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_79e408:
    // 0x79e408: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79e408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79e40c:
    // 0x79e40c: 0x3c014204  lui         $at, 0x4204
    ctx->pc = 0x79e40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16900 << 16));
label_79e410:
    // 0x79e410: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79e410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79e414:
    // 0x79e414: 0xc4430710  lwc1        $f3, 0x710($v0)
    ctx->pc = 0x79e414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_79e418:
    // 0x79e418: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x79e418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_79e41c:
    // 0x79e41c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x79e41cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_79e420:
    // 0x79e420: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x79e420u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_79e424:
    // 0x79e424: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x79e424u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_79e428:
    // 0x79e428: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x79e428u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_79e42c:
    // 0x79e42c: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x79e42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e430:
    // 0x79e430: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x79e430u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_79e434:
    // 0x79e434: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x79e434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_79e438:
    // 0x79e438: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x79e438u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_79e43c:
    // 0x79e43c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x79e43cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79e440:
    // 0x79e440: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x79e440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e444:
    // 0x79e444: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79e444u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_79e448:
    // 0x79e448: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x79e448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e44c:
    // 0x79e44c: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x79e44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79e450:
    // 0x79e450: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x79e450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79e454:
    // 0x79e454: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x79e454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79e458:
    // 0x79e458: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x79e458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_79e45c:
    // 0x79e45c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x79e45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79e460:
    // 0x79e460: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x79e460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_79e464:
    // 0x79e464: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x79e464u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_79e468:
    // 0x79e468: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x79e468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_79e46c:
    // 0x79e46c: 0xc0af688  jal         func_2BDA20
label_79e470:
    if (ctx->pc == 0x79E470u) {
        ctx->pc = 0x79E470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E46Cu;
        // 0x79e470: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E474u;
        goto label_79e474;
    }
    ctx->pc = 0x79E46Cu;
    SET_GPR_U32(ctx, 31, 0x79E474u);
    ctx->pc = 0x79E470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E46Cu;
    // 0x79e470: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDA20u, 0x79E46Cu, 0x79E474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E474u;
label_79e474:
    // 0x79e474: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x79e474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_79e478:
    // 0x79e478: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_79e47c:
    if (ctx->pc == 0x79E47Cu) {
        ctx->pc = 0x79E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E478u;
        // 0x79e47c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E480u;
        goto label_79e480;
    }
    ctx->pc = 0x79E478u;
    {
        const bool branch_taken_0x79e478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E478u;
        // 0x79e47c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e478) {
            ctx->pc = 0x79E55Cu;
            goto label_79e55c;
        }
    }
    ctx->pc = 0x79E480u;
label_79e480:
    // 0x79e480: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x79e480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_79e484:
    // 0x79e484: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79e484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_79e488:
    // 0x79e488: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79e488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79e48c:
    // 0x79e48c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x79e48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_79e490:
    // 0x79e490: 0x8c4700f0  lw          $a3, 0xF0($v0)
    ctx->pc = 0x79e490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_79e494:
    // 0x79e494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79e494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79e498:
    // 0x79e498: 0xc0c1a0e  jal         func_306838
label_79e49c:
    if (ctx->pc == 0x79E49Cu) {
        ctx->pc = 0x79E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E498u;
        // 0x79e49c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E4A0u;
        goto label_79e4a0;
    }
    ctx->pc = 0x79E498u;
    SET_GPR_U32(ctx, 31, 0x79E4A0u);
    ctx->pc = 0x79E49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E498u;
    // 0x79e49c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x79E498u, 0x79E4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E4A0u;
label_79e4a0:
    // 0x79e4a0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79e4a4:
    // 0x79e4a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79e4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79e4a8:
    // 0x79e4a8: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x79e4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_79e4ac:
    // 0x79e4ac: 0x2406005b  addiu       $a2, $zero, 0x5B
    ctx->pc = 0x79e4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_79e4b0:
    // 0x79e4b0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79e4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79e4b4:
    // 0x79e4b4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79e4b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79e4b8:
    // 0x79e4b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79e4b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79e4bc:
    // 0x79e4bc: 0xc0b2e28  jal         func_2CB8A0
label_79e4c0:
    if (ctx->pc == 0x79E4C0u) {
        ctx->pc = 0x79E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E4BCu;
        // 0x79e4c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E4C4u;
        goto label_79e4c4;
    }
    ctx->pc = 0x79E4BCu;
    SET_GPR_U32(ctx, 31, 0x79E4C4u);
    ctx->pc = 0x79E4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E4BCu;
    // 0x79e4c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79E4BCu, 0x79E4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E4C4u;
label_79e4c4:
    // 0x79e4c4: 0x8e460064  lw          $a2, 0x64($s2)
    ctx->pc = 0x79e4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_79e4c8:
    // 0x79e4c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79e4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79e4cc:
    // 0x79e4cc: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x79e4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_79e4d0:
    // 0x79e4d0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x79e4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_79e4d4:
    // 0x79e4d4: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x79e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_79e4d8:
    // 0x79e4d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79e4dc:
    // 0x79e4dc: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x79e4dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_79e4e0:
    // 0x79e4e0: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x79e4e0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_79e4e4:
    // 0x79e4e4: 0x28a4000f  slti        $a0, $a1, 0xF
    ctx->pc = 0x79e4e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)15) ? 1 : 0);
label_79e4e8:
    // 0x79e4e8: 0xa4380b  movn        $a3, $a1, $a0
    ctx->pc = 0x79e4e8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
label_79e4ec:
    // 0x79e4ec: 0xacc70074  sw          $a3, 0x74($a2)
    ctx->pc = 0x79e4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 7));
label_79e4f0:
    // 0x79e4f0: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x79e4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_79e4f4:
    // 0x79e4f4: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x79e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_79e4f8:
    // 0x79e4f8: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x79e4f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_79e4fc:
    // 0x79e4fc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_79e500:
    if (ctx->pc == 0x79E500u) {
        ctx->pc = 0x79E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E4FCu;
        // 0x79e500: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E504u;
        goto label_79e504;
    }
    ctx->pc = 0x79E4FCu;
    {
        const bool branch_taken_0x79e4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E4FCu;
        // 0x79e500: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e4fc) {
            ctx->pc = 0x79E524u;
            goto label_79e524;
        }
    }
    ctx->pc = 0x79E504u;
label_79e504:
    // 0x79e504: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x79e504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_79e508:
    // 0x79e508: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x79e508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_79e50c:
    // 0x79e50c: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x79e50cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
label_79e510:
    // 0x79e510: 0xa0a3009a  sb          $v1, 0x9A($a1)
    ctx->pc = 0x79e510u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 154), (uint8_t)GPR_U32(ctx, 3));
label_79e514:
    // 0x79e514: 0xaca40090  sw          $a0, 0x90($a1)
    ctx->pc = 0x79e514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 4));
label_79e518:
    // 0x79e518: 0xa0a000a0  sb          $zero, 0xA0($a1)
    ctx->pc = 0x79e518u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 160), (uint8_t)GPR_U32(ctx, 0));
label_79e51c:
    // 0x79e51c: 0xe4b4008c  swc1        $f20, 0x8C($a1)
    ctx->pc = 0x79e51cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 140), bits); }
label_79e520:
    // 0x79e520: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79e520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79e524:
    // 0x79e524: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x79e524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_79e528:
    // 0x79e528: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_79e52c:
    if (ctx->pc == 0x79E52Cu) {
        ctx->pc = 0x79E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E528u;
        // 0x79e52c: 0xa263002c  sb          $v1, 0x2C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 44), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E530u;
        goto label_79e530;
    }
    ctx->pc = 0x79E528u;
    {
        const bool branch_taken_0x79e528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E528u;
        // 0x79e52c: 0xa263002c  sb          $v1, 0x2C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 44), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e528) {
            ctx->pc = 0x79E554u;
            goto label_79e554;
        }
    }
    ctx->pc = 0x79E530u;
label_79e530:
    // 0x79e530: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x79e530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_79e534:
    // 0x79e534: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79e534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_79e538:
    // 0x79e538: 0xc480d880  lwc1        $f0, -0x2780($a0)
    ctx->pc = 0x79e538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79e53c:
    // 0x79e53c: 0x2484d880  addiu       $a0, $a0, -0x2780
    ctx->pc = 0x79e53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957184));
label_79e540:
    // 0x79e540: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79e540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_79e544:
    // 0x79e544: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x79e544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79e548:
    // 0x79e548: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79e548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79e54c:
    // 0x79e54c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x79e54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79e550:
    // 0x79e550: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79e550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79e554:
    // 0x79e554: 0xa2630024  sb          $v1, 0x24($s3)
    ctx->pc = 0x79e554u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 3));
label_79e558:
    // 0x79e558: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x79e558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
label_79e55c:
    // 0x79e55c: 0x9262002c  lbu         $v0, 0x2C($s3)
    ctx->pc = 0x79e55cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 44)));
label_79e560:
    // 0x79e560: 0x144000c1  bnez        $v0, . + 4 + (0xC1 << 2)
label_79e564:
    if (ctx->pc == 0x79E564u) {
        ctx->pc = 0x79E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E560u;
        // 0x79e564: 0x8fa2018c  lw          $v0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E568u;
        goto label_79e568;
    }
    ctx->pc = 0x79E560u;
    {
        const bool branch_taken_0x79e560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E560u;
        // 0x79e564: 0x8fa2018c  lw          $v0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e560) {
            ctx->pc = 0x79E868u;
            goto label_79e868;
        }
    }
    ctx->pc = 0x79E568u;
label_79e568:
    // 0x79e568: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x79e568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_79e56c:
    // 0x79e56c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x79e56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_79e570:
    // 0x79e570: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79e570u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_79e574:
    // 0x79e574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79e574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79e578:
    // 0x79e578: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x79e578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79e57c:
    // 0x79e57c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x79e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_79e580:
    // 0x79e580: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x79e580u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79e584:
    // 0x79e584: 0x0  nop
    ctx->pc = 0x79e584u;
    // NOP
label_79e588:
    // 0x79e588: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_79e58c:
    if (ctx->pc == 0x79E58Cu) {
        ctx->pc = 0x79E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E588u;
        // 0x79e58c: 0x8c5000f0  lw          $s0, 0xF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E590u;
        goto label_79e590;
    }
    ctx->pc = 0x79E588u;
    {
        const bool branch_taken_0x79e588 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E588u;
        // 0x79e58c: 0x8c5000f0  lw          $s0, 0xF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e588) {
            ctx->pc = 0x79E598u;
            goto label_79e598;
        }
    }
    ctx->pc = 0x79E590u;
label_79e590:
    // 0x79e590: 0x1000005a  b           . + 4 + (0x5A << 2)
label_79e594:
    if (ctx->pc == 0x79E594u) {
        ctx->pc = 0x79E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E590u;
        // 0x79e594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E598u;
        goto label_79e598;
    }
    ctx->pc = 0x79E590u;
    {
        const bool branch_taken_0x79e590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E590u;
        // 0x79e594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e590) {
            ctx->pc = 0x79E6FCu;
            goto label_79e6fc;
        }
    }
    ctx->pc = 0x79E598u;
label_79e598:
    // 0x79e598: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x79e598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
label_79e59c:
    // 0x79e59c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x79e59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_79e5a0:
    // 0x79e5a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79e5a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79e5a4:
    // 0x79e5a4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79e5a8:
    // 0x79e5a8: 0xc4410640  lwc1        $f1, 0x640($v0)
    ctx->pc = 0x79e5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79e5ac:
    // 0x79e5ac: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x79e5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_79e5b0:
    // 0x79e5b0: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x79e5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_79e5b4:
    // 0x79e5b4: 0xe6c00004  swc1        $f0, 0x4($s6)
    ctx->pc = 0x79e5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_79e5b8:
    // 0x79e5b8: 0xe6d4000c  swc1        $f20, 0xC($s6)
    ctx->pc = 0x79e5b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
label_79e5bc:
    // 0x79e5bc: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x79e5bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_79e5c0:
    // 0x79e5c0: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x79e5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e5c4:
    // 0x79e5c4: 0xdba40140  lqc2        $vf4, 0x140($sp)
    ctx->pc = 0x79e5c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_79e5c8:
    // 0x79e5c8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x79e5c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_79e5cc:
    // 0x79e5cc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x79e5ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_79e5d0:
    // 0x79e5d0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x79e5d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79e5d4:
    // 0x79e5d4: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x79e5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e5d8:
    // 0x79e5d8: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x79e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_79e5dc:
    // 0x79e5dc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79e5dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79e5e0:
    // 0x79e5e0: 0xfba40120  sqc2        $vf4, 0x120($sp)
    ctx->pc = 0x79e5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e5e4:
    // 0x79e5e4: 0xc7a20120  lwc1        $f2, 0x120($sp)
    ctx->pc = 0x79e5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79e5e8:
    // 0x79e5e8: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x79e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_79e5ec:
    // 0x79e5ec: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x79e5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79e5f0:
    // 0x79e5f0: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x79e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_79e5f4:
    // 0x79e5f4: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x79e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79e5f8:
    // 0x79e5f8: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x79e5f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_79e5fc:
    // 0x79e5fc: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x79e5fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_79e600:
    // 0x79e600: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x79e600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_79e604:
    // 0x79e604: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79e604u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79e608:
    // 0x79e608: 0xfba40160  sqc2        $vf4, 0x160($sp)
    ctx->pc = 0x79e608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e60c:
    // 0x79e60c: 0xdba40160  lqc2        $vf4, 0x160($sp)
    ctx->pc = 0x79e60cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_79e610:
    // 0x79e610: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x79e610u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_79e614:
    // 0x79e614: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79e614u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79e618:
    // 0x79e618: 0xfba40160  sqc2        $vf4, 0x160($sp)
    ctx->pc = 0x79e618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e61c:
    // 0x79e61c: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x79e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_79e620:
    // 0x79e620: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x79e620u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_79e624:
    // 0x79e624: 0xfba40150  sqc2        $vf4, 0x150($sp)
    ctx->pc = 0x79e624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e628:
    // 0x79e628: 0xc48c000c  lwc1        $f12, 0xC($a0)
    ctx->pc = 0x79e628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_79e62c:
    // 0x79e62c: 0x46176302  mul.s       $f12, $f12, $f23
    ctx->pc = 0x79e62cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
label_79e630:
    // 0x79e630: 0xc07dfbc  jal         func_1F7EF0
label_79e634:
    if (ctx->pc == 0x79E634u) {
        ctx->pc = 0x79E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E630u;
        // 0x79e634: 0x46186301  sub.s       $f12, $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E638u;
        goto label_79e638;
    }
    ctx->pc = 0x79E630u;
    SET_GPR_U32(ctx, 31, 0x79E638u);
    ctx->pc = 0x79E634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E630u;
    // 0x79e634: 0x46186301  sub.s       $f12, $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x79E630u, 0x79E638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E638u;
label_79e638:
    // 0x79e638: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x79e638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_79e63c:
    // 0x79e63c: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x79e63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_79e640:
    // 0x79e640: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x79e640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
label_79e644:
    // 0x79e644: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x79e644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
label_79e648:
    // 0x79e648: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x79e648u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_79e64c:
    // 0x79e64c: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x79e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_79e650:
    // 0x79e650: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79e650u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79e654:
    // 0x79e654: 0xf8440020  sqc2        $vf4, 0x20($v0)
    ctx->pc = 0x79e654u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e658:
    // 0x79e658: 0xdba40170  lqc2        $vf4, 0x170($sp)
    ctx->pc = 0x79e658u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_79e65c:
    // 0x79e65c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x79e65cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_79e660:
    // 0x79e660: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79e660u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79e664:
    // 0x79e664: 0xfba40170  sqc2        $vf4, 0x170($sp)
    ctx->pc = 0x79e664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e668:
    // 0x79e668: 0x8fa301a4  lw          $v1, 0x1A4($sp)
    ctx->pc = 0x79e668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_79e66c:
    // 0x79e66c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x79e66cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_79e670:
    // 0x79e670: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x79e670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e674:
    // 0x79e674: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x79e674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79e678:
    // 0x79e678: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x79e678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_79e67c:
    // 0x79e67c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79e67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79e680:
    // 0x79e680: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x79e680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_79e684:
    // 0x79e684: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x79e684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_79e688:
    // 0x79e688: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x79e688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
label_79e68c:
    // 0x79e68c: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x79e68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
label_79e690:
    // 0x79e690: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x79e690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_79e694:
    // 0x79e694: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x79e694u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_79e698:
    // 0x79e698: 0xfba00150  sqc2        $vf0, 0x150($sp)
    ctx->pc = 0x79e698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[0]));
label_79e69c:
    // 0x79e69c: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x79e69cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_79e6a0:
    // 0x79e6a0: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x79e6a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_79e6a4:
    // 0x79e6a4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79e6a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79e6a8:
    // 0x79e6a8: 0xfba40150  sqc2        $vf4, 0x150($sp)
    ctx->pc = 0x79e6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e6ac:
    // 0x79e6ac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79e6acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79e6b0:
    // 0x79e6b0: 0xfba40120  sqc2        $vf4, 0x120($sp)
    ctx->pc = 0x79e6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e6b4:
    // 0x79e6b4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79e6b8:
    // 0x79e6b8: 0x2442d880  addiu       $v0, $v0, -0x2780
    ctx->pc = 0x79e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
label_79e6bc:
    // 0x79e6bc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79e6bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79e6c0:
    // 0x79e6c0: 0xfba40150  sqc2        $vf4, 0x150($sp)
    ctx->pc = 0x79e6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e6c4:
    // 0x79e6c4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79e6c8:
    // 0x79e6c8: 0x2463d860  addiu       $v1, $v1, -0x27A0
    ctx->pc = 0x79e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957152));
label_79e6cc:
    // 0x79e6cc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x79e6ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_79e6d0:
    // 0x79e6d0: 0xfba40160  sqc2        $vf4, 0x160($sp)
    ctx->pc = 0x79e6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e6d4:
    // 0x79e6d4: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x79e6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_79e6d8:
    // 0x79e6d8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x79e6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_79e6dc:
    // 0x79e6dc: 0x8fa701a0  lw          $a3, 0x1A0($sp)
    ctx->pc = 0x79e6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_79e6e0:
    // 0x79e6e0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x79e6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_79e6e4:
    // 0x79e6e4: 0xc051e92  jal         func_147A48
label_79e6e8:
    if (ctx->pc == 0x79E6E8u) {
        ctx->pc = 0x79E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E6E4u;
        // 0x79e6e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E6ECu;
        goto label_79e6ec;
    }
    ctx->pc = 0x79E6E4u;
    SET_GPR_U32(ctx, 31, 0x79E6ECu);
    ctx->pc = 0x79E6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E6E4u;
    // 0x79e6e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147A48u, 0x79E6E4u, 0x79E6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E6ECu;
label_79e6ec:
    // 0x79e6ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x79e6ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79e6f0:
    // 0x79e6f0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x79e6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_79e6f4:
    // 0x79e6f4: 0xc0af688  jal         func_2BDA20
label_79e6f8:
    if (ctx->pc == 0x79E6F8u) {
        ctx->pc = 0x79E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E6F4u;
        // 0x79e6f8: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E6FCu;
        goto label_79e6fc;
    }
    ctx->pc = 0x79E6F4u;
    SET_GPR_U32(ctx, 31, 0x79E6FCu);
    ctx->pc = 0x79E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E6F4u;
    // 0x79e6f8: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDA20u, 0x79E6F4u, 0x79E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E6FCu;
label_79e6fc:
    // 0x79e6fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x79e6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_79e700:
    // 0x79e700: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_79e704:
    if (ctx->pc == 0x79E704u) {
        ctx->pc = 0x79E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E700u;
        // 0x79e704: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E708u;
        goto label_79e708;
    }
    ctx->pc = 0x79E700u;
    {
        const bool branch_taken_0x79e700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E700u;
        // 0x79e704: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e700) {
            ctx->pc = 0x79E864u;
            goto label_79e864;
        }
    }
    ctx->pc = 0x79E708u;
label_79e708:
    // 0x79e708: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x79e708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_79e70c:
    // 0x79e70c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79e70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_79e710:
    // 0x79e710: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79e710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79e714:
    // 0x79e714: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x79e714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_79e718:
    // 0x79e718: 0x8c4700f0  lw          $a3, 0xF0($v0)
    ctx->pc = 0x79e718u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_79e71c:
    // 0x79e71c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79e71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79e720:
    // 0x79e720: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79e720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79e724:
    // 0x79e724: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79e724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79e728:
    // 0x79e728: 0xc0c1a0e  jal         func_306838
label_79e72c:
    if (ctx->pc == 0x79E72Cu) {
        ctx->pc = 0x79E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E728u;
        // 0x79e72c: 0x2451ee00  addiu       $s1, $v0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E730u;
        goto label_79e730;
    }
    ctx->pc = 0x79E728u;
    SET_GPR_U32(ctx, 31, 0x79E730u);
    ctx->pc = 0x79E72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E728u;
    // 0x79e72c: 0x2451ee00  addiu       $s1, $v0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x79E728u, 0x79E730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E730u;
label_79e730:
    // 0x79e730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79e730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79e734:
    // 0x79e734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79e734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79e738:
    // 0x79e738: 0x2406005b  addiu       $a2, $zero, 0x5B
    ctx->pc = 0x79e738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_79e73c:
    // 0x79e73c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79e73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79e740:
    // 0x79e740: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79e740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79e744:
    // 0x79e744: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79e744u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79e748:
    // 0x79e748: 0xc0b2e28  jal         func_2CB8A0
label_79e74c:
    if (ctx->pc == 0x79E74Cu) {
        ctx->pc = 0x79E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E748u;
        // 0x79e74c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E750u;
        goto label_79e750;
    }
    ctx->pc = 0x79E748u;
    SET_GPR_U32(ctx, 31, 0x79E750u);
    ctx->pc = 0x79E74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E748u;
    // 0x79e74c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79E748u, 0x79E750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E750u;
label_79e750:
    // 0x79e750: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x79e750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_79e754:
    // 0x79e754: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x79e754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_79e758:
    // 0x79e758: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79e758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79e75c:
    // 0x79e75c: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x79e75cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
label_79e760:
    // 0x79e760: 0x8e500068  lw          $s0, 0x68($s2)
    ctx->pc = 0x79e760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_79e764:
    // 0x79e764: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x79e764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_79e768:
    // 0x79e768: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x79e768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_79e76c:
    // 0x79e76c: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
label_79e770:
    if (ctx->pc == 0x79E770u) {
        ctx->pc = 0x79E770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E76Cu;
        // 0x79e770: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E774u;
        goto label_79e774;
    }
    ctx->pc = 0x79E76Cu;
    {
        const bool branch_taken_0x79e76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79e76c) {
            ctx->pc = 0x79E770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79E76Cu;
            // 0x79e770: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79E818u;
            goto label_79e818;
        }
    }
    ctx->pc = 0x79E774u;
label_79e774:
    // 0x79e774: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79e774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79e778:
    // 0x79e778: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79e778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79e77c:
    // 0x79e77c: 0x24a50620  addiu       $a1, $a1, 0x620
    ctx->pc = 0x79e77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1568));
label_79e780:
    // 0x79e780: 0xc0528ce  jal         func_14A338
label_79e784:
    if (ctx->pc == 0x79E784u) {
        ctx->pc = 0x79E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E780u;
        // 0x79e784: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E788u;
        goto label_79e788;
    }
    ctx->pc = 0x79E780u;
    SET_GPR_U32(ctx, 31, 0x79E788u);
    ctx->pc = 0x79E784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E780u;
    // 0x79e784: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x79E780u, 0x79E788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E788u;
label_79e788:
    // 0x79e788: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79e788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79e78c:
    // 0x79e78c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79e78cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79e790:
    // 0x79e790: 0x24a50628  addiu       $a1, $a1, 0x628
    ctx->pc = 0x79e790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1576));
label_79e794:
    // 0x79e794: 0xc0528ce  jal         func_14A338
label_79e798:
    if (ctx->pc == 0x79E798u) {
        ctx->pc = 0x79E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E794u;
        // 0x79e798: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E79Cu;
        goto label_79e79c;
    }
    ctx->pc = 0x79E794u;
    SET_GPR_U32(ctx, 31, 0x79E79Cu);
    ctx->pc = 0x79E798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E794u;
    // 0x79e798: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x79E794u, 0x79E79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E79Cu;
label_79e79c:
    // 0x79e79c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79e7a0:
    // 0x79e7a0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79e7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79e7a4:
    // 0x79e7a4: 0x24a50630  addiu       $a1, $a1, 0x630
    ctx->pc = 0x79e7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1584));
label_79e7a8:
    // 0x79e7a8: 0xc0528ce  jal         func_14A338
label_79e7ac:
    if (ctx->pc == 0x79E7ACu) {
        ctx->pc = 0x79E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E7A8u;
        // 0x79e7ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E7B0u;
        goto label_79e7b0;
    }
    ctx->pc = 0x79E7A8u;
    SET_GPR_U32(ctx, 31, 0x79E7B0u);
    ctx->pc = 0x79E7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E7A8u;
    // 0x79e7ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x79E7A8u, 0x79E7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E7B0u;
label_79e7b0:
    // 0x79e7b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79e7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79e7b4:
    // 0x79e7b4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79e7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79e7b8:
    // 0x79e7b8: 0x24a50638  addiu       $a1, $a1, 0x638
    ctx->pc = 0x79e7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1592));
label_79e7bc:
    // 0x79e7bc: 0xc0528ce  jal         func_14A338
label_79e7c0:
    if (ctx->pc == 0x79E7C0u) {
        ctx->pc = 0x79E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E7BCu;
        // 0x79e7c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E7C4u;
        goto label_79e7c4;
    }
    ctx->pc = 0x79E7BCu;
    SET_GPR_U32(ctx, 31, 0x79E7C4u);
    ctx->pc = 0x79E7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E7BCu;
    // 0x79e7c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x79E7BCu, 0x79E7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E7C4u;
label_79e7c4:
    // 0x79e7c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79e7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79e7c8:
    // 0x79e7c8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x79e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_79e7cc:
    // 0x79e7cc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x79e7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_79e7d0:
    // 0x79e7d0: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x79e7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
label_79e7d4:
    // 0x79e7d4: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x79e7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_79e7d8:
    // 0x79e7d8: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x79e7d8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
label_79e7dc:
    // 0x79e7dc: 0xe6140040  swc1        $f20, 0x40($s0)
    ctx->pc = 0x79e7dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_79e7e0:
    // 0x79e7e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79e7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79e7e4:
    // 0x79e7e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79e7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79e7e8:
    // 0x79e7e8: 0x240600f1  addiu       $a2, $zero, 0xF1
    ctx->pc = 0x79e7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
label_79e7ec:
    // 0x79e7ec: 0x8ce39b70  lw          $v1, -0x6490($a3)
    ctx->pc = 0x79e7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941552)));
label_79e7f0:
    // 0x79e7f0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79e7f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79e7f4:
    // 0x79e7f4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79e7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79e7f8:
    // 0x79e7f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79e7f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79e7fc:
    // 0x79e7fc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x79e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_79e800:
    // 0x79e800: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79e800u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79e804:
    // 0x79e804: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x79e804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
label_79e808:
    // 0x79e808: 0xc0b2e28  jal         func_2CB8A0
label_79e80c:
    if (ctx->pc == 0x79E80Cu) {
        ctx->pc = 0x79E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E808u;
        // 0x79e80c: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E810u;
        goto label_79e810;
    }
    ctx->pc = 0x79E808u;
    SET_GPR_U32(ctx, 31, 0x79E810u);
    ctx->pc = 0x79E80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E808u;
    // 0x79e80c: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79E808u, 0x79E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E810u;
label_79e810:
    // 0x79e810: 0x10000006  b           . + 4 + (0x6 << 2)
label_79e814:
    if (ctx->pc == 0x79E814u) {
        ctx->pc = 0x79E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E810u;
        // 0x79e814: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E818u;
        goto label_79e818;
    }
    ctx->pc = 0x79E810u;
    {
        const bool branch_taken_0x79e810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E810u;
        // 0x79e814: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e810) {
            ctx->pc = 0x79E82Cu;
            goto label_79e82c;
        }
    }
    ctx->pc = 0x79E818u;
label_79e818:
    // 0x79e818: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79e818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79e81c:
    // 0x79e81c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_79e820:
    if (ctx->pc == 0x79E820u) {
        ctx->pc = 0x79E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E81Cu;
        // 0x79e820: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E824u;
        goto label_79e824;
    }
    ctx->pc = 0x79E81Cu;
    {
        const bool branch_taken_0x79e81c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x79E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E81Cu;
        // 0x79e820: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e81c) {
            ctx->pc = 0x79E82Cu;
            goto label_79e82c;
        }
    }
    ctx->pc = 0x79E824u;
label_79e824:
    // 0x79e824: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79e824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79e828:
    // 0x79e828: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x79e828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_79e82c:
    // 0x79e82c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x79e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_79e830:
    // 0x79e830: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_79e834:
    if (ctx->pc == 0x79E834u) {
        ctx->pc = 0x79E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E830u;
        // 0x79e834: 0xa263002c  sb          $v1, 0x2C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 44), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E838u;
        goto label_79e838;
    }
    ctx->pc = 0x79E830u;
    {
        const bool branch_taken_0x79e830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E830u;
        // 0x79e834: 0xa263002c  sb          $v1, 0x2C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 44), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e830) {
            ctx->pc = 0x79E85Cu;
            goto label_79e85c;
        }
    }
    ctx->pc = 0x79E838u;
label_79e838:
    // 0x79e838: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x79e838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_79e83c:
    // 0x79e83c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_79e840:
    // 0x79e840: 0xc480d880  lwc1        $f0, -0x2780($a0)
    ctx->pc = 0x79e840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79e844:
    // 0x79e844: 0x2484d880  addiu       $a0, $a0, -0x2780
    ctx->pc = 0x79e844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957184));
label_79e848:
    // 0x79e848: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79e848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_79e84c:
    // 0x79e84c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x79e84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79e850:
    // 0x79e850: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79e850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79e854:
    // 0x79e854: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x79e854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79e858:
    // 0x79e858: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79e858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79e85c:
    // 0x79e85c: 0xa2630024  sb          $v1, 0x24($s3)
    ctx->pc = 0x79e85cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 3));
label_79e860:
    // 0x79e860: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x79e860u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
label_79e864:
    // 0x79e864: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x79e864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_79e868:
    // 0x79e868: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x79e868u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_79e86c:
    // 0x79e86c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_79e870:
    // 0x79e870: 0x441fe35  bgez        $v0, . + 4 + (-0x1CB << 2)
label_79e874:
    if (ctx->pc == 0x79E874u) {
        ctx->pc = 0x79E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E870u;
        // 0x79e874: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E878u;
        goto label_79e878;
    }
    ctx->pc = 0x79E870u;
    {
        const bool branch_taken_0x79e870 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x79E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E870u;
        // 0x79e874: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e870) {
            ctx->pc = 0x79E148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79e148;
        }
    }
    ctx->pc = 0x79E878u;
label_79e878:
    // 0x79e878: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x79e878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_79e87c:
    // 0x79e87c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79e880:
    // 0x79e880: 0x2462d8c0  addiu       $v0, $v1, -0x2740
    ctx->pc = 0x79e880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957248));
label_79e884:
    // 0x79e884: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79e884u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79e888:
    // 0x79e888: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x79e888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e88c:
    // 0x79e88c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x79e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_79e890:
    // 0x79e890: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x79e890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_79e894:
    // 0x79e894: 0x8fa601b8  lw          $a2, 0x1B8($sp)
    ctx->pc = 0x79e894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_79e898:
    // 0x79e898: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x79e898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79e89c:
    // 0x79e89c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x79e89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79e8a0:
    // 0x79e8a0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x79e8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79e8a4:
    // 0x79e8a4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x79e8a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79e8a8:
    // 0x79e8a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79e8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79e8ac:
    // 0x79e8ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79e8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79e8b0:
    // 0x79e8b0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x79e8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_79e8b4:
    // 0x79e8b4: 0x8fa501b4  lw          $a1, 0x1B4($sp)
    ctx->pc = 0x79e8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_79e8b8:
    // 0x79e8b8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x79e8b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_79e8bc:
    // 0x79e8bc: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x79e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_79e8c0:
    // 0x79e8c0: 0xc05420c  jal         func_150830
label_79e8c4:
    if (ctx->pc == 0x79E8C4u) {
        ctx->pc = 0x79E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E8C0u;
        // 0x79e8c4: 0xe474000c  swc1        $f20, 0xC($v1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E8C8u;
        goto label_79e8c8;
    }
    ctx->pc = 0x79E8C0u;
    SET_GPR_U32(ctx, 31, 0x79E8C8u);
    ctx->pc = 0x79E8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79E8C0u;
    // 0x79e8c4: 0xe474000c  swc1        $f20, 0xC($v1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150830u, 0x79E8C0u, 0x79E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79E8C8u;
label_79e8c8:
    // 0x79e8c8: 0x3c014073  lui         $at, 0x4073
    ctx->pc = 0x79e8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16499 << 16));
label_79e8cc:
    // 0x79e8cc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x79e8ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_79e8d0:
    // 0x79e8d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79e8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79e8d4:
    // 0x79e8d4: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79e8d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79e8d8:
    // 0x79e8d8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x79e8d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_79e8dc:
    // 0x79e8dc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x79e8dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_79e8e0:
    // 0x79e8e0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x79e8e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79e8e4:
    // 0x79e8e4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79e8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e8e8:
    // 0x79e8e8: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x79e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_79e8ec:
    // 0x79e8ec: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x79e8ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_79e8f0:
    // 0x79e8f0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x79e8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e8f4:
    // 0x79e8f4: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x79e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_79e8f8:
    // 0x79e8f8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x79e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_79e8fc:
    // 0x79e8fc: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x79e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_79e900:
    // 0x79e900: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x79e900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_79e904:
    // 0x79e904: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_79e908:
    if (ctx->pc == 0x79E908u) {
        ctx->pc = 0x79E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E904u;
        // 0x79e908: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E90Cu;
        goto label_79e90c;
    }
    ctx->pc = 0x79E904u;
    {
        const bool branch_taken_0x79e904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E904u;
        // 0x79e908: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e904) {
            ctx->pc = 0x79E97Cu;
            goto label_79e97c;
        }
    }
    ctx->pc = 0x79E90Cu;
label_79e90c:
    // 0x79e90c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x79e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_79e910:
    // 0x79e910: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x79e910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_79e914:
    // 0x79e914: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x79e914u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_79e918:
    // 0x79e918: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x79e918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e91c:
    // 0x79e91c: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x79e91cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79e920:
    // 0x79e920: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x79e920u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79e924:
    // 0x79e924: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79e924u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79e928:
    // 0x79e928: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x79e928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e92c:
    // 0x79e92c: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x79e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_79e930:
    // 0x79e930: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79e930u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79e934:
    // 0x79e934: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x79e934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e938:
    // 0x79e938: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x79e938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79e93c:
    // 0x79e93c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x79e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_79e940:
    // 0x79e940: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x79e940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_79e944:
    // 0x79e944: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x79e944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_79e948:
    // 0x79e948: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x79e948u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_79e94c:
    // 0x79e94c: 0x8fa301b4  lw          $v1, 0x1B4($sp)
    ctx->pc = 0x79e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_79e950:
    // 0x79e950: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x79e950u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_79e954:
    // 0x79e954: 0xf8640020  sqc2        $vf4, 0x20($v1)
    ctx->pc = 0x79e954u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e958:
    // 0x79e958: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x79e958u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79e95c:
    // 0x79e95c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x79e95cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79e960:
    // 0x79e960: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79e960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79e964:
    // 0x79e964: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x79e964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e968:
    // 0x79e968: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x79e968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_79e96c:
    // 0x79e96c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x79e96cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_79e970:
    // 0x79e970: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79e970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e974:
    // 0x79e974: 0x10000005  b           . + 4 + (0x5 << 2)
label_79e978:
    if (ctx->pc == 0x79E978u) {
        ctx->pc = 0x79E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E974u;
        // 0x79e978: 0x3c03007a  lui         $v1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E97Cu;
        goto label_79e97c;
    }
    ctx->pc = 0x79E974u;
    {
        const bool branch_taken_0x79e974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E974u;
        // 0x79e978: 0x3c03007a  lui         $v1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e974) {
            ctx->pc = 0x79E98Cu;
            goto label_79e98c;
        }
    }
    ctx->pc = 0x79E97Cu;
label_79e97c:
    // 0x79e97c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x79e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_79e980:
    // 0x79e980: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79e980u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79e984:
    // 0x79e984: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79e984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e988:
    // 0x79e988: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79e988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79e98c:
    // 0x79e98c: 0xc7a40058  lwc1        $f4, 0x58($sp)
    ctx->pc = 0x79e98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_79e990:
    // 0x79e990: 0x246209c0  addiu       $v0, $v1, 0x9C0
    ctx->pc = 0x79e990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2496));
label_79e994:
    // 0x79e994: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79e994u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79e998:
    // 0x79e998: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x79e998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e99c:
    // 0x79e99c: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x79e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_79e9a0:
    // 0x79e9a0: 0x8fa401b4  lw          $a0, 0x1B4($sp)
    ctx->pc = 0x79e9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_79e9a4:
    // 0x79e9a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79e9a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79e9a8:
    // 0x79e9a8: 0xf8840010  sqc2        $vf4, 0x10($a0)
    ctx->pc = 0x79e9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_79e9ac:
    // 0x79e9ac: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x79e9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_79e9b0:
    // 0x79e9b0: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x79e9b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_79e9b4:
    // 0x79e9b4: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x79e9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
label_79e9b8:
    // 0x79e9b8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x79e9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_79e9bc:
    // 0x79e9bc: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x79e9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
label_79e9c0:
    // 0x79e9c0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x79e9c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_79e9c4:
    // 0x79e9c4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x79e9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_79e9c8:
    // 0x79e9c8: 0x1000000d  b           . + 4 + (0xD << 2)
label_79e9cc:
    if (ctx->pc == 0x79E9CCu) {
        ctx->pc = 0x79E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E9C8u;
        // 0x79e9cc: 0x8fa601b8  lw          $a2, 0x1B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79E9D0u;
        goto label_79e9d0;
    }
    ctx->pc = 0x79E9C8u;
    {
        const bool branch_taken_0x79e9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79E9C8u;
        // 0x79e9cc: 0x8fa601b8  lw          $a2, 0x1B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79e9c8) {
            ctx->pc = 0x79EA00u;
            goto label_79ea00;
        }
    }
    ctx->pc = 0x79E9D0u;
label_79e9d0:
    // 0x79e9d0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x79e9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79e9d4:
    // 0x79e9d4: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x79e9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79e9d8:
    // 0x79e9d8: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x79e9d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_79e9dc:
    // 0x79e9dc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x79e9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79e9e0:
    // 0x79e9e0: 0xe7a30088  swc1        $f3, 0x88($sp)
    ctx->pc = 0x79e9e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_79e9e4:
    // 0x79e9e4: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x79e9e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_79e9e8:
    // 0x79e9e8: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x79e9e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_79e9ec:
    // 0x79e9ec: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x79e9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_79e9f0:
    // 0x79e9f0: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x79e9f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79e9f4:
    // 0x79e9f4: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x79e9f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_79e9f8:
    // 0x79e9f8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79e9f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79e9fc:
    // 0x79e9fc: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x79e9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_79ea00:
    // 0x79ea00: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x79ea00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_79ea04:
    // 0x79ea04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79ea08:
    // 0x79ea08: 0x46041801  sub.s       $f0, $f3, $f4
    ctx->pc = 0x79ea08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_79ea0c:
    // 0x79ea0c: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x79ea0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79ea10:
    // 0x79ea10: 0x0  nop
    ctx->pc = 0x79ea10u;
    // NOP
label_79ea14:
    // 0x79ea14: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_79ea18:
    if (ctx->pc == 0x79EA18u) {
        ctx->pc = 0x79EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EA14u;
        // 0x79ea18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EA1Cu;
        goto label_79ea1c;
    }
    ctx->pc = 0x79EA14u;
    {
        const bool branch_taken_0x79ea14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EA14u;
        // 0x79ea18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ea14) {
            ctx->pc = 0x79EA20u;
            goto label_79ea20;
        }
    }
    ctx->pc = 0x79EA1Cu;
label_79ea1c:
    // 0x79ea1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79ea1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ea20:
    // 0x79ea20: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x79ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79ea24:
    // 0x79ea24: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x79ea24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_79ea28:
    // 0x79ea28: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x79ea28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79ea2c:
    // 0x79ea2c: 0x0  nop
    ctx->pc = 0x79ea2cu;
    // NOP
label_79ea30:
    // 0x79ea30: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_79ea34:
    if (ctx->pc == 0x79EA34u) {
        ctx->pc = 0x79EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EA30u;
        // 0x79ea34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EA38u;
        goto label_79ea38;
    }
    ctx->pc = 0x79EA30u;
    {
        const bool branch_taken_0x79ea30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x79ea30) {
            ctx->pc = 0x79EA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79EA30u;
            // 0x79ea34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79EA38u;
            goto label_79ea38;
        }
    }
    ctx->pc = 0x79EA38u;
label_79ea38:
    // 0x79ea38: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_79ea3c:
    if (ctx->pc == 0x79EA3Cu) {
        ctx->pc = 0x79EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EA38u;
        // 0x79ea3c: 0x8fa301b4  lw          $v1, 0x1B4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EA40u;
        goto label_79ea40;
    }
    ctx->pc = 0x79EA38u;
    {
        const bool branch_taken_0x79ea38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x79EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EA38u;
        // 0x79ea3c: 0x8fa301b4  lw          $v1, 0x1B4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ea38) {
            ctx->pc = 0x79EA54u;
            goto label_79ea54;
        }
    }
    ctx->pc = 0x79EA40u;
label_79ea40:
    // 0x79ea40: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x79ea40u;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
label_79ea44:
    // 0x79ea44: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x79ea44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79ea48:
    // 0x79ea48: 0x0  nop
    ctx->pc = 0x79ea48u;
    // NOP
label_79ea4c:
    // 0x79ea4c: 0x4500ffe0  bc1f        . + 4 + (-0x20 << 2)
label_79ea50:
    if (ctx->pc == 0x79EA50u) {
        ctx->pc = 0x79EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EA4Cu;
        // 0x79ea50: 0x8fa301b4  lw          $v1, 0x1B4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EA54u;
        goto label_79ea54;
    }
    ctx->pc = 0x79EA4Cu;
    {
        const bool branch_taken_0x79ea4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EA4Cu;
        // 0x79ea50: 0x8fa301b4  lw          $v1, 0x1B4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ea4c) {
            ctx->pc = 0x79E9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79e9d0;
        }
    }
    ctx->pc = 0x79EA54u;
label_79ea54:
    // 0x79ea54: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x79ea54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_79ea58:
    // 0x79ea58: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x79ea58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_79ea5c:
    // 0x79ea5c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x79ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_79ea60:
    // 0x79ea60: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x79ea60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_79ea64:
    // 0x79ea64: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x79ea64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
label_79ea68:
    // 0x79ea68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79ea68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79ea6c:
    // 0x79ea6c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79ea6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_79ea70:
    // 0x79ea70: 0xc0c28ac  jal         func_30A2B0
label_79ea74:
    if (ctx->pc == 0x79EA74u) {
        ctx->pc = 0x79EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EA70u;
        // 0x79ea74: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EA78u;
        goto label_79ea78;
    }
    ctx->pc = 0x79EA70u;
    SET_GPR_U32(ctx, 31, 0x79EA78u);
    ctx->pc = 0x79EA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79EA70u;
    // 0x79ea74: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x79EA70u, 0x79EA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79EA78u;
label_79ea78:
    // 0x79ea78: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x79ea78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79ea7c:
    // 0x79ea7c: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x79ea7cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
label_79ea80:
    // 0x79ea80: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x79ea80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79ea84:
    // 0x79ea84: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x79ea84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_79ea88:
    // 0x79ea88: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x79ea88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_79ea8c:
    // 0x79ea8c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x79ea8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79ea90:
    // 0x79ea90: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x79ea90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_79ea94:
    // 0x79ea94: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x79ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_79ea98:
    // 0x79ea98: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79ea9c:
    // 0x79ea9c: 0x8c831180  lw          $v1, 0x1180($a0)
    ctx->pc = 0x79ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4480)));
label_79eaa0:
    // 0x79eaa0: 0x8c44118c  lw          $a0, 0x118C($v0)
    ctx->pc = 0x79eaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4492)));
label_79eaa4:
    // 0x79eaa4: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x79eaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_79eaa8:
    // 0x79eaa8: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x79eaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_79eaac:
    // 0x79eaac: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x79eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_79eab0:
    // 0x79eab0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x79eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_79eab4:
    // 0x79eab4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x79eab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_79eab8:
    // 0x79eab8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x79eab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79eabc:
    // 0x79eabc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x79eabcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_79eac0:
    // 0x79eac0: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x79eac0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_79eac4:
    // 0x79eac4: 0x461b18c1  sub.s       $f3, $f3, $f27
    ctx->pc = 0x79eac4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[27]);
label_79eac8:
    // 0x79eac8: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x79eac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_79eacc:
    // 0x79eacc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x79eaccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79ead0:
    // 0x79ead0: 0x0  nop
    ctx->pc = 0x79ead0u;
    // NOP
label_79ead4:
    // 0x79ead4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x79ead4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_79ead8:
    // 0x79ead8: 0x461b0001  sub.s       $f0, $f0, $f27
    ctx->pc = 0x79ead8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[27]);
label_79eadc:
    // 0x79eadc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x79eadcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79eae0:
    // 0x79eae0: 0x0  nop
    ctx->pc = 0x79eae0u;
    // NOP
label_79eae4:
    // 0x79eae4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x79eae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_79eae8:
    // 0x79eae8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x79eae8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_79eaec:
    // 0x79eaec: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x79eaecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_79eaf0:
    // 0x79eaf0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x79eaf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_79eaf4:
    // 0x79eaf4: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x79eaf4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_79eaf8:
    // 0x79eaf8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x79eaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_79eafc:
    // 0x79eafc: 0x90a200a0  lbu         $v0, 0xA0($a1)
    ctx->pc = 0x79eafcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 160)));
label_79eb00:
    // 0x79eb00: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_79eb04:
    if (ctx->pc == 0x79EB04u) {
        ctx->pc = 0x79EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EB00u;
        // 0x79eb04: 0x4600a946  mov.s       $f5, $f21 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EB08u;
        goto label_79eb08;
    }
    ctx->pc = 0x79EB00u;
    {
        const bool branch_taken_0x79eb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79eb00) {
            ctx->pc = 0x79EB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79EB00u;
            // 0x79eb04: 0x4600a946  mov.s       $f5, $f21 (Delay Slot)
            ctx->f[5] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79EB08u;
            goto label_79eb08;
        }
    }
    ctx->pc = 0x79EB08u;
label_79eb08:
    // 0x79eb08: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x79eb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79eb0c:
    // 0x79eb0c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x79eb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_79eb10:
    // 0x79eb10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79eb10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79eb14:
    // 0x79eb14: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x79eb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_79eb18:
    // 0x79eb18: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79eb18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79eb1c:
    // 0x79eb1c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x79eb1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_79eb20:
    // 0x79eb20: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x79eb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_79eb24:
    // 0x79eb24: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79eb24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_79eb28:
    // 0x79eb28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79eb28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79eb2c:
    // 0x79eb2c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x79eb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_79eb30:
    // 0x79eb30: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79eb30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_79eb34:
    // 0x79eb34: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79eb34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_79eb38:
    // 0x79eb38: 0xe7b50184  swc1        $f21, 0x184($sp)
    ctx->pc = 0x79eb38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_79eb3c:
    // 0x79eb3c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x79eb3cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
label_79eb40:
    // 0x79eb40: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x79eb40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_79eb44:
    // 0x79eb44: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x79eb44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79eb48:
    // 0x79eb48: 0x0  nop
    ctx->pc = 0x79eb48u;
    // NOP
label_79eb4c:
    // 0x79eb4c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_79eb50:
    if (ctx->pc == 0x79EB50u) {
        ctx->pc = 0x79EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EB4Cu;
        // 0x79eb50: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EB54u;
        goto label_79eb54;
    }
    ctx->pc = 0x79EB4Cu;
    {
        const bool branch_taken_0x79eb4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EB4Cu;
        // 0x79eb50: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79eb4c) {
            ctx->pc = 0x79EB58u;
            goto label_79eb58;
        }
    }
    ctx->pc = 0x79EB54u;
label_79eb54:
    // 0x79eb54: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x79eb54u;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
label_79eb58:
    // 0x79eb58: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x79eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_79eb5c:
    // 0x79eb5c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x79eb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79eb60:
    // 0x79eb60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x79eb60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79eb64:
    // 0x79eb64: 0x0  nop
    ctx->pc = 0x79eb64u;
    // NOP
label_79eb68:
    // 0x79eb68: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_79eb6c:
    if (ctx->pc == 0x79EB6Cu) {
        ctx->pc = 0x79EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EB68u;
        // 0x79eb6c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EB70u;
        goto label_79eb70;
    }
    ctx->pc = 0x79EB68u;
    {
        const bool branch_taken_0x79eb68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79eb68) {
            ctx->pc = 0x79EB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79EB68u;
            // 0x79eb6c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79EB70u;
            goto label_79eb70;
        }
    }
    ctx->pc = 0x79EB70u;
label_79eb70:
    // 0x79eb70: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x79eb70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_79eb74:
    // 0x79eb74: 0xc7cc0008  lwc1        $f12, 0x8($fp)
    ctx->pc = 0x79eb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_79eb78:
    // 0x79eb78: 0xc1e72b2  jal         func_79CAC8
label_79eb7c:
    if (ctx->pc == 0x79EB7Cu) {
        ctx->pc = 0x79EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EB78u;
        // 0x79eb7c: 0xe680000c  swc1        $f0, 0xC($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EB80u;
        goto label_79eb80;
    }
    ctx->pc = 0x79EB78u;
    SET_GPR_U32(ctx, 31, 0x79EB80u);
    ctx->pc = 0x79EB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79EB78u;
    // 0x79eb7c: 0xe680000c  swc1        $f0, 0xC($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CAC8u, 0x79EB78u, 0x79EB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79EB80u;
label_79eb80:
    // 0x79eb80: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79eb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79eb84:
    // 0x79eb84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79eb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79eb88:
    // 0x79eb88: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x79eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
label_79eb8c:
    // 0x79eb8c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79eb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79eb90:
    // 0x79eb90: 0xc1e810a  jal         func_7A0428
label_79eb94:
    if (ctx->pc == 0x79EB94u) {
        ctx->pc = 0x79EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EB90u;
        // 0x79eb94: 0x24650738  addiu       $a1, $v1, 0x738 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EB98u;
        goto label_79eb98;
    }
    ctx->pc = 0x79EB90u;
    SET_GPR_U32(ctx, 31, 0x79EB98u);
    ctx->pc = 0x79EB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79EB90u;
    // 0x79eb94: 0x24650738  addiu       $a1, $v1, 0x738 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A0428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A0428u, 0x79EB90u, 0x79EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79EB98u;
label_79eb98:
    // 0x79eb98: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x79eb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79eb9c:
    // 0x79eb9c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x79eb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_79eba0:
    // 0x79eba0: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x79eba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
label_79eba4:
    // 0x79eba4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79eba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_79eba8:
    // 0x79eba8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79eba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79ebac:
    // 0x79ebac: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x79ebacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_79ebb0:
    // 0x79ebb0: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x79ebb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79ebb4:
    // 0x79ebb4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x79ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_79ebb8:
    // 0x79ebb8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x79ebb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_79ebbc:
    // 0x79ebbc: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x79ebbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79ebc0:
    // 0x79ebc0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x79ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_79ebc4:
    // 0x79ebc4: 0xe4410040  swc1        $f1, 0x40($v0)
    ctx->pc = 0x79ebc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_79ebc8:
    // 0x79ebc8: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x79ebc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79ebcc:
    // 0x79ebcc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x79ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_79ebd0:
    // 0x79ebd0: 0xe4420044  swc1        $f2, 0x44($v0)
    ctx->pc = 0x79ebd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_79ebd4:
    // 0x79ebd4: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x79ebd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79ebd8:
    // 0x79ebd8: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x79ebd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79ebdc:
    // 0x79ebdc: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x79ebdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79ebe0:
    // 0x79ebe0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x79ebe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_79ebe4:
    // 0x79ebe4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x79ebe4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_79ebe8:
    // 0x79ebe8: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x79ebe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79ebec:
    // 0x79ebec: 0x0  nop
    ctx->pc = 0x79ebecu;
    // NOP
label_79ebf0:
    // 0x79ebf0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_79ebf4:
    if (ctx->pc == 0x79EBF4u) {
        ctx->pc = 0x79EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EBF0u;
        // 0x79ebf4: 0xe6800010  swc1        $f0, 0x10($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EBF8u;
        goto label_79ebf8;
    }
    ctx->pc = 0x79EBF0u;
    {
        const bool branch_taken_0x79ebf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EBF0u;
        // 0x79ebf4: 0xe6800010  swc1        $f0, 0x10($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ebf0) {
            ctx->pc = 0x79EC04u;
            goto label_79ec04;
        }
    }
    ctx->pc = 0x79EBF8u;
label_79ebf8:
    // 0x79ebf8: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79ebfc:
    // 0x79ebfc: 0xc4400740  lwc1        $f0, 0x740($v0)
    ctx->pc = 0x79ebfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79ec00:
    // 0x79ec00: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x79ec00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
label_79ec04:
    // 0x79ec04: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x79ec04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79ec08:
    // 0x79ec08: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x79ec08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79ec0c:
    // 0x79ec0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x79ec0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_79ec10:
    // 0x79ec10: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x79ec10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79ec14:
    // 0x79ec14: 0x0  nop
    ctx->pc = 0x79ec14u;
    // NOP
label_79ec18:
    // 0x79ec18: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_79ec1c:
    if (ctx->pc == 0x79EC1Cu) {
        ctx->pc = 0x79EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EC18u;
        // 0x79ec1c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EC20u;
        goto label_79ec20;
    }
    ctx->pc = 0x79EC18u;
    {
        const bool branch_taken_0x79ec18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EC18u;
        // 0x79ec1c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ec18) {
            ctx->pc = 0x79EC2Cu;
            goto label_79ec2c;
        }
    }
    ctx->pc = 0x79EC20u;
label_79ec20:
    // 0x79ec20: 0xc4400740  lwc1        $f0, 0x740($v0)
    ctx->pc = 0x79ec20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79ec24:
    // 0x79ec24: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x79ec24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_79ec28:
    // 0x79ec28: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x79ec28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
label_79ec2c:
    // 0x79ec2c: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x79ec2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79ec30:
    // 0x79ec30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ec30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ec34:
    // 0x79ec34: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x79ec34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79ec38:
    // 0x79ec38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79ec38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ec3c:
    // 0x79ec3c: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x79ec3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_79ec40:
    // 0x79ec40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x79ec40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_79ec44:
    // 0x79ec44: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x79ec44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
label_79ec48:
    // 0x79ec48: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x79ec48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_79ec4c:
    // 0x79ec4c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x79ec4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_79ec50:
    // 0x79ec50: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x79ec50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_79ec54:
    // 0x79ec54: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x79ec54u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_79ec58:
    // 0x79ec58: 0x28a30080  slti        $v1, $a1, 0x80
    ctx->pc = 0x79ec58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
label_79ec5c:
    // 0x79ec5c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x79ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_79ec60:
    // 0x79ec60: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x79ec60u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_79ec64:
    // 0x79ec64: 0xa0e5004f  sb          $a1, 0x4F($a3)
    ctx->pc = 0x79ec64u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 79), (uint8_t)GPR_U32(ctx, 5));
label_79ec68:
    // 0x79ec68: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x79ec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79ec6c:
    // 0x79ec6c: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x79ec6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_79ec70:
    // 0x79ec70: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x79ec70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
label_79ec74:
    // 0x79ec74: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x79ec74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_79ec78:
    // 0x79ec78: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x79ec78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_79ec7c:
    // 0x79ec7c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x79ec7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_79ec80:
    // 0x79ec80: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x79ec80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_79ec84:
    // 0x79ec84: 0x82300a  movz        $a2, $a0, $v0
    ctx->pc = 0x79ec84u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
label_79ec88:
    // 0x79ec88: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x79ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_79ec8c:
    // 0x79ec8c: 0x28c30080  slti        $v1, $a2, 0x80
    ctx->pc = 0x79ec8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
label_79ec90:
    // 0x79ec90: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x79ec90u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_79ec94:
    // 0x79ec94: 0xa0e6004f  sb          $a2, 0x4F($a3)
    ctx->pc = 0x79ec94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 79), (uint8_t)GPR_U32(ctx, 6));
label_79ec98:
    // 0x79ec98: 0xa0a6004f  sb          $a2, 0x4F($a1)
    ctx->pc = 0x79ec98u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 79), (uint8_t)GPR_U32(ctx, 6));
label_79ec9c:
    // 0x79ec9c: 0x92420060  lbu         $v0, 0x60($s2)
    ctx->pc = 0x79ec9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
label_79eca0:
    // 0x79eca0: 0x50400065  beql        $v0, $zero, . + 4 + (0x65 << 2)
label_79eca4:
    if (ctx->pc == 0x79ECA4u) {
        ctx->pc = 0x79ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ECA0u;
        // 0x79eca4: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ECA8u;
        goto label_79eca8;
    }
    ctx->pc = 0x79ECA0u;
    {
        const bool branch_taken_0x79eca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79eca0) {
            ctx->pc = 0x79ECA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ECA0u;
            // 0x79eca4: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79EE38u;
            goto label_79ee38;
        }
    }
    ctx->pc = 0x79ECA8u;
label_79eca8:
    // 0x79eca8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x79eca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79ecac:
    // 0x79ecac: 0x0  nop
    ctx->pc = 0x79ecacu;
    // NOP
label_79ecb0:
    // 0x79ecb0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x79ecb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_79ecb4:
    // 0x79ecb4: 0x461a6303  div.s       $f12, $f12, $f26
    ctx->pc = 0x79ecb4u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[26]);
label_79ecb8:
    // 0x79ecb8: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x79ecb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_79ecbc:
    // 0x79ecbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79ecbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_79ecc0:
    // 0x79ecc0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x79ecc0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_79ecc4:
    // 0x79ecc4: 0x46176302  mul.s       $f12, $f12, $f23
    ctx->pc = 0x79ecc4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
label_79ecc8:
    // 0x79ecc8: 0xc07dfbc  jal         func_1F7EF0
label_79eccc:
    if (ctx->pc == 0x79ECCCu) {
        ctx->pc = 0x79ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ECC8u;
        // 0x79eccc: 0x46186301  sub.s       $f12, $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ECD0u;
        goto label_79ecd0;
    }
    ctx->pc = 0x79ECC8u;
    SET_GPR_U32(ctx, 31, 0x79ECD0u);
    ctx->pc = 0x79ECCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ECC8u;
    // 0x79eccc: 0x46186301  sub.s       $f12, $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x79ECC8u, 0x79ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ECD0u;
label_79ecd0:
    // 0x79ecd0: 0x92420060  lbu         $v0, 0x60($s2)
    ctx->pc = 0x79ecd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
label_79ecd4:
    // 0x79ecd4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x79ecd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_79ecd8:
    // 0x79ecd8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79ecd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_79ecdc:
    // 0x79ecdc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79ecdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79ece0:
    // 0x79ece0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x79ece0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79ece4:
    // 0x79ece4: 0x0  nop
    ctx->pc = 0x79ece4u;
    // NOP
label_79ece8:
    // 0x79ece8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x79ece8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_79ecec:
    // 0x79ecec: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x79ececu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_79ecf0:
    // 0x79ecf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79ecf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79ecf4:
    // 0x79ecf4: 0x461a6083  div.s       $f2, $f12, $f26
    ctx->pc = 0x79ecf4u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[26]);
label_79ecf8:
    // 0x79ecf8: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x79ecf8u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[1]);
label_79ecfc:
    // 0x79ecfc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x79ecfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_79ed00:
    // 0x79ed00: 0x46030502  mul.s       $f20, $f0, $f3
    ctx->pc = 0x79ed00u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_79ed04:
    // 0x79ed04: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x79ed04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_79ed08:
    // 0x79ed08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79ed08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_79ed0c:
    // 0x79ed0c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x79ed0cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_79ed10:
    // 0x79ed10: 0x46176302  mul.s       $f12, $f12, $f23
    ctx->pc = 0x79ed10u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
label_79ed14:
    // 0x79ed14: 0xc07dfbc  jal         func_1F7EF0
label_79ed18:
    if (ctx->pc == 0x79ED18u) {
        ctx->pc = 0x79ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ED14u;
        // 0x79ed18: 0x46186301  sub.s       $f12, $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ED1Cu;
        goto label_79ed1c;
    }
    ctx->pc = 0x79ED14u;
    SET_GPR_U32(ctx, 31, 0x79ED1Cu);
    ctx->pc = 0x79ED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ED14u;
    // 0x79ed18: 0x46186301  sub.s       $f12, $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x79ED14u, 0x79ED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ED1Cu;
label_79ed1c:
    // 0x79ed1c: 0x92420060  lbu         $v0, 0x60($s2)
    ctx->pc = 0x79ed1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
label_79ed20:
    // 0x79ed20: 0x4600a8c6  mov.s       $f3, $f21
    ctx->pc = 0x79ed20u;
    ctx->f[3] = FPU_MOV_S(ctx->f[21]);
label_79ed24:
    // 0x79ed24: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x79ed24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_79ed28:
    // 0x79ed28: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79ed28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_79ed2c:
    // 0x79ed2c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79ed2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79ed30:
    // 0x79ed30: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79ed34:
    // 0x79ed34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x79ed34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79ed38:
    // 0x79ed38: 0x0  nop
    ctx->pc = 0x79ed38u;
    // NOP
label_79ed3c:
    // 0x79ed3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x79ed3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_79ed40:
    // 0x79ed40: 0x8fa301ac  lw          $v1, 0x1AC($sp)
    ctx->pc = 0x79ed40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_79ed44:
    // 0x79ed44: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x79ed44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_79ed48:
    // 0x79ed48: 0x248409a0  addiu       $a0, $a0, 0x9A0
    ctx->pc = 0x79ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2464));
label_79ed4c:
    // 0x79ed4c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x79ed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_79ed50:
    // 0x79ed50: 0x461a0843  div.s       $f1, $f1, $f26
    ctx->pc = 0x79ed50u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[26]);
label_79ed54:
    // 0x79ed54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x79ed54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_79ed58:
    // 0x79ed58: 0x46020102  mul.s       $f4, $f0, $f2
    ctx->pc = 0x79ed58u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_79ed5c:
    // 0x79ed5c: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x79ed5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_79ed60:
    // 0x79ed60: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x79ed60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_79ed64:
    // 0x79ed64: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x79ed64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_79ed68:
    // 0x79ed68: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79ed68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_79ed6c:
    // 0x79ed6c: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79ed6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79ed70:
    // 0x79ed70: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x79ed70u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_79ed74:
    // 0x79ed74: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79ed74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79ed78:
    // 0x79ed78: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79ed78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_79ed7c:
    // 0x79ed7c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x79ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_79ed80:
    // 0x79ed80: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79ed80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79ed84:
    // 0x79ed84: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x79ed84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_79ed88:
    // 0x79ed88: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x79ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_79ed8c:
    // 0x79ed8c: 0x24633ce0  addiu       $v1, $v1, 0x3CE0
    ctx->pc = 0x79ed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15584));
label_79ed90:
    // 0x79ed90: 0x24620210  addiu       $v0, $v1, 0x210
    ctx->pc = 0x79ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
label_79ed94:
    // 0x79ed94: 0x105e0006  beq         $v0, $fp, . + 4 + (0x6 << 2)
label_79ed98:
    if (ctx->pc == 0x79ED98u) {
        ctx->pc = 0x79ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ED94u;
        // 0x79ed98: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ED9Cu;
        goto label_79ed9c;
    }
    ctx->pc = 0x79ED94u;
    {
        const bool branch_taken_0x79ed94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x79ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ED94u;
        // 0x79ed98: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ed94) {
            ctx->pc = 0x79EDB0u;
            goto label_79edb0;
        }
    }
    ctx->pc = 0x79ED9Cu;
label_79ed9c:
    // 0x79ed9c: 0xc7c20004  lwc1        $f2, 0x4($fp)
    ctx->pc = 0x79ed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79eda0:
    // 0x79eda0: 0xc7c10008  lwc1        $f1, 0x8($fp)
    ctx->pc = 0x79eda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79eda4:
    // 0x79eda4: 0xe4600210  swc1        $f0, 0x210($v1)
    ctx->pc = 0x79eda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 528), bits); }
label_79eda8:
    // 0x79eda8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79eda8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79edac:
    // 0x79edac: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x79edacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79edb0:
    // 0x79edb0: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x79edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_79edb4:
    // 0x79edb4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79edb8:
    // 0x79edb8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x79edb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_79edbc:
    // 0x79edbc: 0x244209b0  addiu       $v0, $v0, 0x9B0
    ctx->pc = 0x79edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2480));
label_79edc0:
    // 0x79edc0: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x79edc0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_79edc4:
    // 0x79edc4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x79edc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_79edc8:
    // 0x79edc8: 0xe495000c  swc1        $f21, 0xC($a0)
    ctx->pc = 0x79edc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_79edcc:
    // 0x79edcc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79edccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79edd0:
    // 0x79edd0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79edd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_79edd4:
    // 0x79edd4: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79edd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79edd8:
    // 0x79edd8: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x79edd8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_79eddc:
    // 0x79eddc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79eddcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79ede0:
    // 0x79ede0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79ede0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_79ede4:
    // 0x79ede4: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x79ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_79ede8:
    // 0x79ede8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79ede8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79edec:
    // 0x79edec: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x79edecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_79edf0:
    // 0x79edf0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x79edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_79edf4:
    // 0x79edf4: 0x24633ce0  addiu       $v1, $v1, 0x3CE0
    ctx->pc = 0x79edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15584));
label_79edf8:
    // 0x79edf8: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x79edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_79edfc:
    // 0x79edfc: 0x105e0006  beq         $v0, $fp, . + 4 + (0x6 << 2)
label_79ee00:
    if (ctx->pc == 0x79EE00u) {
        ctx->pc = 0x79EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EDFCu;
        // 0x79ee00: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EE04u;
        goto label_79ee04;
    }
    ctx->pc = 0x79EDFCu;
    {
        const bool branch_taken_0x79edfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x79EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EDFCu;
        // 0x79ee00: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79edfc) {
            ctx->pc = 0x79EE18u;
            goto label_79ee18;
        }
    }
    ctx->pc = 0x79EE04u;
label_79ee04:
    // 0x79ee04: 0xc7c10008  lwc1        $f1, 0x8($fp)
    ctx->pc = 0x79ee04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79ee08:
    // 0x79ee08: 0xc7c20004  lwc1        $f2, 0x4($fp)
    ctx->pc = 0x79ee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79ee0c:
    // 0x79ee0c: 0xe4600200  swc1        $f0, 0x200($v1)
    ctx->pc = 0x79ee0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 512), bits); }
label_79ee10:
    // 0x79ee10: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79ee10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79ee14:
    // 0x79ee14: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x79ee14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79ee18:
    // 0x79ee18: 0x92420060  lbu         $v0, 0x60($s2)
    ctx->pc = 0x79ee18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
label_79ee1c:
    // 0x79ee1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79ee20:
    // 0x79ee20: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x79ee20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_79ee24:
    // 0x79ee24: 0x2c63000f  sltiu       $v1, $v1, 0xF
    ctx->pc = 0x79ee24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_79ee28:
    // 0x79ee28: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_79ee2c:
    if (ctx->pc == 0x79EE2Cu) {
        ctx->pc = 0x79EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EE28u;
        // 0x79ee2c: 0xa2420060  sb          $v0, 0x60($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 96), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EE30u;
        goto label_79ee30;
    }
    ctx->pc = 0x79EE28u;
    {
        const bool branch_taken_0x79ee28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EE28u;
        // 0x79ee2c: 0xa2420060  sb          $v0, 0x60($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 96), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ee28) {
            ctx->pc = 0x79EE34u;
            goto label_79ee34;
        }
    }
    ctx->pc = 0x79EE30u;
label_79ee30:
    // 0x79ee30: 0xa2400060  sb          $zero, 0x60($s2)
    ctx->pc = 0x79ee30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 96), (uint8_t)GPR_U32(ctx, 0));
label_79ee34:
    // 0x79ee34: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x79ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_79ee38:
    // 0x79ee38: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_79ee3c:
    if (ctx->pc == 0x79EE3Cu) {
        ctx->pc = 0x79EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EE38u;
        // 0x79ee3c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EE40u;
        goto label_79ee40;
    }
    ctx->pc = 0x79EE38u;
    {
        const bool branch_taken_0x79ee38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EE38u;
        // 0x79ee3c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ee38) {
            ctx->pc = 0x79EEC8u;
            goto label_79eec8;
        }
    }
    ctx->pc = 0x79EE40u;
label_79ee40:
    // 0x79ee40: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x79ee40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_79ee44:
    // 0x79ee44: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x79ee44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
label_79ee48:
    // 0x79ee48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79ee48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_79ee4c:
    // 0x79ee4c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x79ee4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_79ee50:
    // 0x79ee50: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_79ee54:
    // 0x79ee54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x79ee54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_79ee58:
    // 0x79ee58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79ee58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79ee5c:
    // 0x79ee5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79ee5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_79ee60:
    // 0x79ee60: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x79ee60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_79ee64:
    // 0x79ee64: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79ee64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_79ee68:
    // 0x79ee68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79ee68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79ee6c:
    // 0x79ee6c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x79ee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_79ee70:
    // 0x79ee70: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x79ee70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_79ee74:
    // 0x79ee74: 0x3c01c060  lui         $at, 0xC060
    ctx->pc = 0x79ee74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49248 << 16));
label_79ee78:
    // 0x79ee78: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79ee78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79ee7c:
    // 0x79ee7c: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x79ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_79ee80:
    // 0x79ee80: 0xa045004f  sb          $a1, 0x4F($v0)
    ctx->pc = 0x79ee80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 5));
label_79ee84:
    // 0x79ee84: 0xc4801180  lwc1        $f0, 0x1180($a0)
    ctx->pc = 0x79ee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79ee88:
    // 0x79ee88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79ee88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_79ee8c:
    // 0x79ee8c: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x79ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_79ee90:
    // 0x79ee90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x79ee90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_79ee94:
    // 0x79ee94: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x79ee94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_79ee98:
    // 0x79ee98: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79ee9c:
    // 0x79ee9c: 0xc441118c  lwc1        $f1, 0x118C($v0)
    ctx->pc = 0x79ee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79eea0:
    // 0x79eea0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x79eea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_79eea4:
    // 0x79eea4: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x79eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_79eea8:
    // 0x79eea8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x79eea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_79eeac:
    // 0x79eeac: 0xe441003c  swc1        $f1, 0x3C($v0)
    ctx->pc = 0x79eeacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_79eeb0:
    // 0x79eeb0: 0xe64300d4  swc1        $f3, 0xD4($s2)
    ctx->pc = 0x79eeb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
label_79eeb4:
    // 0x79eeb4: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x79eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_79eeb8:
    // 0x79eeb8: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x79eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
label_79eebc:
    // 0x79eebc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79eec0:
    // 0x79eec0: 0x10000066  b           . + 4 + (0x66 << 2)
label_79eec4:
    if (ctx->pc == 0x79EEC4u) {
        ctx->pc = 0x79EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EEC0u;
        // 0x79eec4: 0xae42006c  sw          $v0, 0x6C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EEC8u;
        goto label_79eec8;
    }
    ctx->pc = 0x79EEC0u;
    {
        const bool branch_taken_0x79eec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EEC0u;
        // 0x79eec4: 0xae42006c  sw          $v0, 0x6C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79eec0) {
            ctx->pc = 0x79F05Cu;
            goto label_79f05c;
        }
    }
    ctx->pc = 0x79EEC8u;
label_79eec8:
    // 0x79eec8: 0x18600064  blez        $v1, . + 4 + (0x64 << 2)
label_79eecc:
    if (ctx->pc == 0x79EECCu) {
        ctx->pc = 0x79EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EEC8u;
        // 0x79eecc: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EED0u;
        goto label_79eed0;
    }
    ctx->pc = 0x79EEC8u;
    {
        const bool branch_taken_0x79eec8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x79EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EEC8u;
        // 0x79eecc: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79eec8) {
            ctx->pc = 0x79F05Cu;
            goto label_79f05c;
        }
    }
    ctx->pc = 0x79EED0u;
label_79eed0:
    // 0x79eed0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x79eed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_79eed4:
    // 0x79eed4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79eed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79eed8:
    // 0x79eed8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x79eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_79eedc:
    // 0x79eedc: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x79eedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_79eee0:
    // 0x79eee0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79eee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79eee4:
    // 0x79eee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x79eee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79eee8:
    // 0x79eee8: 0x0  nop
    ctx->pc = 0x79eee8u;
    // NOP
label_79eeec:
    // 0x79eeec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79eeecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_79eef0:
    // 0x79eef0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x79eef0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
label_79eef4:
    // 0x79eef4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x79eef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_79eef8:
    // 0x79eef8: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x79eef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79eefc:
    // 0x79eefc: 0x0  nop
    ctx->pc = 0x79eefcu;
    // NOP
label_79ef00:
    // 0x79ef00: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_79ef04:
    if (ctx->pc == 0x79EF04u) {
        ctx->pc = 0x79EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EF00u;
        // 0x79ef04: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EF08u;
        goto label_79ef08;
    }
    ctx->pc = 0x79EF00u;
    {
        const bool branch_taken_0x79ef00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EF00u;
        // 0x79ef04: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ef00) {
            ctx->pc = 0x79EF0Cu;
            goto label_79ef0c;
        }
    }
    ctx->pc = 0x79EF08u;
label_79ef08:
    // 0x79ef08: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x79ef08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79ef0c:
    // 0x79ef0c: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x79ef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_79ef10:
    // 0x79ef10: 0x240501c8  addiu       $a1, $zero, 0x1C8
    ctx->pc = 0x79ef10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 456));
label_79ef14:
    // 0x79ef14: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x79ef14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
label_79ef18:
    // 0x79ef18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79ef18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79ef1c:
    // 0x79ef1c: 0x9082004f  lbu         $v0, 0x4F($a0)
    ctx->pc = 0x79ef1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 79)));
label_79ef20:
    // 0x79ef20: 0x3c013f47  lui         $at, 0x3F47
    ctx->pc = 0x79ef20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16199 << 16));
label_79ef24:
    // 0x79ef24: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x79ef24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_79ef28:
    // 0x79ef28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79ef28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79ef2c:
    // 0x79ef2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x79ef2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79ef30:
    // 0x79ef30: 0x0  nop
    ctx->pc = 0x79ef30u;
    // NOP
label_79ef34:
    // 0x79ef34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79ef34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_79ef38:
    // 0x79ef38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x79ef38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_79ef3c:
    // 0x79ef3c: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x79ef3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_79ef40:
    // 0x79ef40: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x79ef40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_79ef44:
    // 0x79ef44: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x79ef44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_79ef48:
    // 0x79ef48: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x79ef48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
label_79ef4c:
    // 0x79ef4c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x79ef4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_79ef50:
    // 0x79ef50: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x79ef50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_79ef54:
    // 0x79ef54: 0xa083004f  sb          $v1, 0x4F($a0)
    ctx->pc = 0x79ef54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 3));
label_79ef58:
    // 0x79ef58: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x79ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_79ef5c:
    // 0x79ef5c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x79ef5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_79ef60:
    // 0x79ef60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x79ef60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79ef64:
    // 0x79ef64: 0x0  nop
    ctx->pc = 0x79ef64u;
    // NOP
label_79ef68:
    // 0x79ef68: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x79ef68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_79ef6c:
    // 0x79ef6c: 0xc07df52  jal         func_1F7D48
label_79ef70:
    if (ctx->pc == 0x79EF70u) {
        ctx->pc = 0x79EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EF6Cu;
        // 0x79ef70: 0x461c6302  mul.s       $f12, $f12, $f28 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[28]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EF74u;
        goto label_79ef74;
    }
    ctx->pc = 0x79EF6Cu;
    SET_GPR_U32(ctx, 31, 0x79EF74u);
    ctx->pc = 0x79EF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79EF6Cu;
    // 0x79ef70: 0x461c6302  mul.s       $f12, $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x79EF6Cu, 0x79EF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79EF74u;
label_79ef74:
    // 0x79ef74: 0xc07dfbc  jal         func_1F7EF0
label_79ef78:
    if (ctx->pc == 0x79EF78u) {
        ctx->pc = 0x79EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EF74u;
        // 0x79ef78: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EF7Cu;
        goto label_79ef7c;
    }
    ctx->pc = 0x79EF74u;
    SET_GPR_U32(ctx, 31, 0x79EF7Cu);
    ctx->pc = 0x79EF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79EF74u;
    // 0x79ef78: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x79EF74u, 0x79EF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79EF7Cu;
label_79ef7c:
    // 0x79ef7c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79ef80:
    // 0x79ef80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x79ef80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_79ef84:
    // 0x79ef84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79ef84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79ef88:
    // 0x79ef88: 0xc4411180  lwc1        $f1, 0x1180($v0)
    ctx->pc = 0x79ef88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79ef8c:
    // 0x79ef8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x79ef8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_79ef90:
    // 0x79ef90: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x79ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_79ef94:
    // 0x79ef94: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x79ef94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_79ef98:
    // 0x79ef98: 0x240400ea  addiu       $a0, $zero, 0xEA
    ctx->pc = 0x79ef98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
label_79ef9c:
    // 0x79ef9c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x79ef9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_79efa0:
    // 0x79efa0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x79efa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_79efa4:
    // 0x79efa4: 0xe4610038  swc1        $f1, 0x38($v1)
    ctx->pc = 0x79efa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_79efa8:
    // 0x79efa8: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x79efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_79efac:
    // 0x79efac: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x79efacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_79efb0:
    // 0x79efb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x79efb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79efb4:
    // 0x79efb4: 0x0  nop
    ctx->pc = 0x79efb4u;
    // NOP
label_79efb8:
    // 0x79efb8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x79efb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_79efbc:
    // 0x79efbc: 0xc07df52  jal         func_1F7D48
label_79efc0:
    if (ctx->pc == 0x79EFC0u) {
        ctx->pc = 0x79EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EFBCu;
        // 0x79efc0: 0x461c6302  mul.s       $f12, $f12, $f28 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[28]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EFC4u;
        goto label_79efc4;
    }
    ctx->pc = 0x79EFBCu;
    SET_GPR_U32(ctx, 31, 0x79EFC4u);
    ctx->pc = 0x79EFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79EFBCu;
    // 0x79efc0: 0x461c6302  mul.s       $f12, $f12, $f28 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x79EFBCu, 0x79EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79EFC4u;
label_79efc4:
    // 0x79efc4: 0xc07dfee  jal         func_1F7FB8
label_79efc8:
    if (ctx->pc == 0x79EFC8u) {
        ctx->pc = 0x79EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79EFC4u;
        // 0x79efc8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79EFCCu;
        goto label_79efcc;
    }
    ctx->pc = 0x79EFC4u;
    SET_GPR_U32(ctx, 31, 0x79EFCCu);
    ctx->pc = 0x79EFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79EFC4u;
    // 0x79efc8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x79EFC4u, 0x79EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79EFCCu;
label_79efcc:
    // 0x79efcc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79efccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79efd0:
    // 0x79efd0: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x79efd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_79efd4:
    // 0x79efd4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79efd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_79efd8:
    // 0x79efd8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79efd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79efdc:
    // 0x79efdc: 0xc461118c  lwc1        $f1, 0x118C($v1)
    ctx->pc = 0x79efdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79efe0:
    // 0x79efe0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x79efe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_79efe4:
    // 0x79efe4: 0xc64300d8  lwc1        $f3, 0xD8($s2)
    ctx->pc = 0x79efe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_79efe8:
    // 0x79efe8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x79efe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_79efec:
    // 0x79efec: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x79efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_79eff0:
    // 0x79eff0: 0x3c013f61  lui         $at, 0x3F61
    ctx->pc = 0x79eff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16225 << 16));
label_79eff4:
    // 0x79eff4: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x79eff4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_79eff8:
    // 0x79eff8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79eff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_79effc:
    // 0x79effc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x79effcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_79f000:
    // 0x79f000: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x79f000u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_79f004:
    // 0x79f004: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x79f004u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_79f008:
    // 0x79f008: 0xe441003c  swc1        $f1, 0x3C($v0)
    ctx->pc = 0x79f008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_79f00c:
    // 0x79f00c: 0xc64200d4  lwc1        $f2, 0xD4($s2)
    ctx->pc = 0x79f00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79f010:
    // 0x79f010: 0xc64100d8  lwc1        $f1, 0xD8($s2)
    ctx->pc = 0x79f010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79f014:
    // 0x79f014: 0x46161001  sub.s       $f0, $f2, $f22
    ctx->pc = 0x79f014u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[22]);
label_79f018:
    // 0x79f018: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x79f018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_79f01c:
    // 0x79f01c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x79f01cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_79f020:
    // 0x79f020: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79f020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79f024:
    // 0x79f024: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x79f024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_79f028:
    // 0x79f028: 0x2843003c  slti        $v1, $v0, 0x3C
    ctx->pc = 0x79f028u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
label_79f02c:
    // 0x79f02c: 0xe64100d8  swc1        $f1, 0xD8($s2)
    ctx->pc = 0x79f02cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
label_79f030:
    // 0x79f030: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x79f030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
label_79f034:
    // 0x79f034: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x79f034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_79f038:
    // 0x79f038: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_79f03c:
    if (ctx->pc == 0x79F03Cu) {
        ctx->pc = 0x79F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F038u;
        // 0x79f03c: 0xe64000d4  swc1        $f0, 0xD4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F040u;
        goto label_79f040;
    }
    ctx->pc = 0x79F038u;
    {
        const bool branch_taken_0x79f038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F038u;
        // 0x79f03c: 0xe64000d4  swc1        $f0, 0xD4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f038) {
            ctx->pc = 0x79F05Cu;
            goto label_79f05c;
        }
    }
    ctx->pc = 0x79F040u;
label_79f040:
    // 0x79f040: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79f040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79f044:
    // 0x79f044: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x79f044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_79f048:
    // 0x79f048: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x79f048u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
label_79f04c:
    // 0x79f04c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x79f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_79f050:
    // 0x79f050: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79f050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_79f054:
    // 0x79f054: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79f054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79f058:
    // 0x79f058: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x79f058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_79f05c:
    // 0x79f05c: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x79f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_79f060:
    // 0x79f060: 0x8c470094  lw          $a3, 0x94($v0)
    ctx->pc = 0x79f060u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_79f064:
    // 0x79f064: 0x28e3000a  slti        $v1, $a3, 0xA
    ctx->pc = 0x79f064u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
label_79f068:
    // 0x79f068: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_79f06c:
    if (ctx->pc == 0x79F06Cu) {
        ctx->pc = 0x79F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F068u;
        // 0x79f06c: 0x3c060800  lui         $a2, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F070u;
        goto label_79f070;
    }
    ctx->pc = 0x79F068u;
    {
        const bool branch_taken_0x79f068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F068u;
        // 0x79f06c: 0x3c060800  lui         $a2, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f068) {
            ctx->pc = 0x79F0ACu;
            goto label_79f0ac;
        }
    }
    ctx->pc = 0x79F070u;
label_79f070:
    // 0x79f070: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x79f070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_79f074:
    // 0x79f074: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x79f074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_79f078:
    // 0x79f078: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79f078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_79f07c:
    // 0x79f07c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x79f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_79f080:
    // 0x79f080: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x79f080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_79f084:
    // 0x79f084: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79f084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_79f088:
    // 0x79f088: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x79f088u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
label_79f08c:
    // 0x79f08c: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x79f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_79f090:
    // 0x79f090: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x79f090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_79f094:
    // 0x79f094: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79f094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_79f098:
    // 0x79f098: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79f098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_79f09c:
    // 0x79f09c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x79f09cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_79f0a0:
    // 0x79f0a0: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x79f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_79f0a4:
    // 0x79f0a4: 0x10000010  b           . + 4 + (0x10 << 2)
label_79f0a8:
    if (ctx->pc == 0x79F0A8u) {
        ctx->pc = 0x79F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F0A4u;
        // 0x79f0a8: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F0ACu;
        goto label_79f0ac;
    }
    ctx->pc = 0x79F0A4u;
    {
        const bool branch_taken_0x79f0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F0A4u;
        // 0x79f0a8: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f0a4) {
            ctx->pc = 0x79F0E8u;
            goto label_79f0e8;
        }
    }
    ctx->pc = 0x79F0ACu;
label_79f0ac:
    // 0x79f0ac: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x79f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_79f0b0:
    // 0x79f0b0: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x79f0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_79f0b4:
    // 0x79f0b4: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x79f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_79f0b8:
    // 0x79f0b8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x79f0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_79f0bc:
    // 0x79f0bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79f0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_79f0c0:
    // 0x79f0c0: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x79f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_79f0c4:
    // 0x79f0c4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x79f0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_79f0c8:
    // 0x79f0c8: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x79f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
label_79f0cc:
    // 0x79f0cc: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x79f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_79f0d0:
    // 0x79f0d0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x79f0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_79f0d4:
    // 0x79f0d4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_79f0d8:
    // 0x79f0d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79f0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_79f0dc:
    // 0x79f0dc: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x79f0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_79f0e0:
    // 0x79f0e0: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x79f0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_79f0e4:
    // 0x79f0e4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x79f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_79f0e8:
    // 0x79f0e8: 0xac670084  sw          $a3, 0x84($v1)
    ctx->pc = 0x79f0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 7));
label_79f0ec:
    // 0x79f0ec: 0xc0aaa90  jal         func_2AAA40
label_79f0f0:
    if (ctx->pc == 0x79F0F0u) {
        ctx->pc = 0x79F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F0ECu;
        // 0x79f0f0: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F0F4u;
        goto label_79f0f4;
    }
    ctx->pc = 0x79F0ECu;
    SET_GPR_U32(ctx, 31, 0x79F0F4u);
    ctx->pc = 0x79F0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79F0ECu;
    // 0x79f0f0: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x79F0ECu, 0x79F0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79F0F4u;
label_79f0f4:
    // 0x79f0f4: 0xc0aab0a  jal         func_2AAC28
label_79f0f8:
    if (ctx->pc == 0x79F0F8u) {
        ctx->pc = 0x79F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F0F4u;
        // 0x79f0f8: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F0FCu;
        goto label_79f0fc;
    }
    ctx->pc = 0x79F0F4u;
    SET_GPR_U32(ctx, 31, 0x79F0FCu);
    ctx->pc = 0x79F0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79F0F4u;
    // 0x79f0f8: 0x8e4400cc  lw          $a0, 0xCC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x79F0F4u, 0x79F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79F0FCu;
label_79f0fc:
    // 0x79f0fc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79f100:
    // 0x79f100: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79f100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79f104:
    // 0x79f104: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
label_79f108:
    // 0x79f108: 0xc0b56a8  jal         func_2D5AA0
label_79f10c:
    if (ctx->pc == 0x79F10Cu) {
        ctx->pc = 0x79F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F108u;
        // 0x79f10c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F110u;
        goto label_79f110;
    }
    ctx->pc = 0x79F108u;
    SET_GPR_U32(ctx, 31, 0x79F110u);
    ctx->pc = 0x79F10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79F108u;
    // 0x79f10c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79F108u, 0x79F110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79F110u;
label_79f110:
    // 0x79f110: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x79f110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_79f114:
    // 0x79f114: 0x90430098  lbu         $v1, 0x98($v0)
    ctx->pc = 0x79f114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 152)));
label_79f118:
    // 0x79f118: 0x5060fbcf  beql        $v1, $zero, . + 4 + (-0x431 << 2)
label_79f11c:
    if (ctx->pc == 0x79F11Cu) {
        ctx->pc = 0x79F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F118u;
        // 0x79f11c: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F120u;
        goto label_79f120;
    }
    ctx->pc = 0x79F118u;
    {
        const bool branch_taken_0x79f118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x79f118) {
            ctx->pc = 0x79F11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79F118u;
            // 0x79f11c: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79E058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79e058;
        }
    }
    ctx->pc = 0x79F120u;
label_79f120:
    // 0x79f120: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x79f120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_79f124:
    // 0x79f124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79f124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79f128:
    // 0x79f128: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x79f128u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
label_79f12c:
    // 0x79f12c: 0x26500024  addiu       $s0, $s2, 0x24
    ctx->pc = 0x79f12cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_79f130:
    // 0x79f130: 0xa0620091  sb          $v0, 0x91($v1)
    ctx->pc = 0x79f130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 145), (uint8_t)GPR_U32(ctx, 2));
label_79f134:
    // 0x79f134: 0x2672d880  addiu       $s2, $s3, -0x2780
    ctx->pc = 0x79f134u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957184));
label_79f138:
    // 0x79f138: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x79f138u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79f13c:
    // 0x79f13c: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x79f13cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_79f140:
    // 0x79f140: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x79f140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79f144:
    // 0x79f144: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_79f148:
    if (ctx->pc == 0x79F148u) {
        ctx->pc = 0x79F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F144u;
        // 0x79f148: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F14Cu;
        goto label_79f14c;
    }
    ctx->pc = 0x79F144u;
    {
        const bool branch_taken_0x79f144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F144u;
        // 0x79f148: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f144) {
            ctx->pc = 0x79F180u;
            goto label_79f180;
        }
    }
    ctx->pc = 0x79F14Cu;
label_79f14c:
    // 0x79f14c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79f150:
    // 0x79f150: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79f154:
    if (ctx->pc == 0x79F154u) {
        ctx->pc = 0x79F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F150u;
        // 0x79f154: 0xc660d880  lwc1        $f0, -0x2780($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F158u;
        goto label_79f158;
    }
    ctx->pc = 0x79F150u;
    {
        const bool branch_taken_0x79f150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F150u;
        // 0x79f154: 0xc660d880  lwc1        $f0, -0x2780($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f150) {
            ctx->pc = 0x79F170u;
            goto label_79f170;
        }
    }
    ctx->pc = 0x79F158u;
label_79f158:
    // 0x79f158: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79f158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_79f15c:
    // 0x79f15c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79f15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_79f160:
    // 0x79f160: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x79f160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79f164:
    // 0x79f164: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79f164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79f168:
    // 0x79f168: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x79f168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79f16c:
    // 0x79f16c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79f16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79f170:
    // 0x79f170: 0xa0740024  sb          $s4, 0x24($v1)
    ctx->pc = 0x79f170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 20));
label_79f174:
    // 0x79f174: 0xc1e6474  jal         func_7991D0
label_79f178:
    if (ctx->pc == 0x79F178u) {
        ctx->pc = 0x79F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F174u;
        // 0x79f178: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F17Cu;
        goto label_79f17c;
    }
    ctx->pc = 0x79F174u;
    SET_GPR_U32(ctx, 31, 0x79F17Cu);
    ctx->pc = 0x79F178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79F174u;
    // 0x79f178: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7991D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7991D0u, 0x79F174u, 0x79F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79F17Cu;
label_79f17c:
    // 0x79f17c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x79f17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_79f180:
    // 0x79f180: 0x621ffef  bgez        $s1, . + 4 + (-0x11 << 2)
label_79f184:
    if (ctx->pc == 0x79F184u) {
        ctx->pc = 0x79F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F180u;
        // 0x79f184: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F188u;
        goto label_79f188;
    }
    ctx->pc = 0x79F180u;
    {
        const bool branch_taken_0x79f180 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x79F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F180u;
        // 0x79f184: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f180) {
            ctx->pc = 0x79F140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79f140;
        }
    }
    ctx->pc = 0x79F188u;
label_79f188:
    // 0x79f188: 0x7bb00260  lq          $s0, 0x260($sp)
    ctx->pc = 0x79f188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_79f18c:
    // 0x79f18c: 0x7bb10250  lq          $s1, 0x250($sp)
    ctx->pc = 0x79f18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_79f190:
    // 0x79f190: 0x7bb20240  lq          $s2, 0x240($sp)
    ctx->pc = 0x79f190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_79f194:
    // 0x79f194: 0x7bb30230  lq          $s3, 0x230($sp)
    ctx->pc = 0x79f194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_79f198:
    // 0x79f198: 0x7bb40220  lq          $s4, 0x220($sp)
    ctx->pc = 0x79f198u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_79f19c:
    // 0x79f19c: 0x7bb50210  lq          $s5, 0x210($sp)
    ctx->pc = 0x79f19cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_79f1a0:
    // 0x79f1a0: 0x7bb60200  lq          $s6, 0x200($sp)
    ctx->pc = 0x79f1a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_79f1a4:
    // 0x79f1a4: 0x7bb701f0  lq          $s7, 0x1F0($sp)
    ctx->pc = 0x79f1a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_79f1a8:
    // 0x79f1a8: 0x7bbe01e0  lq          $fp, 0x1E0($sp)
    ctx->pc = 0x79f1a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_79f1ac:
    // 0x79f1ac: 0xdfbf01d0  ld          $ra, 0x1D0($sp)
    ctx->pc = 0x79f1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 464)));
label_79f1b0:
    // 0x79f1b0: 0xc7bc02b0  lwc1        $f28, 0x2B0($sp)
    ctx->pc = 0x79f1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_79f1b4:
    // 0x79f1b4: 0xc7bb02a8  lwc1        $f27, 0x2A8($sp)
    ctx->pc = 0x79f1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_79f1b8:
    // 0x79f1b8: 0xc7ba02a0  lwc1        $f26, 0x2A0($sp)
    ctx->pc = 0x79f1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_79f1bc:
    // 0x79f1bc: 0xc7b90298  lwc1        $f25, 0x298($sp)
    ctx->pc = 0x79f1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_79f1c0:
    // 0x79f1c0: 0xc7b80290  lwc1        $f24, 0x290($sp)
    ctx->pc = 0x79f1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_79f1c4:
    // 0x79f1c4: 0xc7b70288  lwc1        $f23, 0x288($sp)
    ctx->pc = 0x79f1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_79f1c8:
    // 0x79f1c8: 0xc7b60280  lwc1        $f22, 0x280($sp)
    ctx->pc = 0x79f1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_79f1cc:
    // 0x79f1cc: 0xc7b50278  lwc1        $f21, 0x278($sp)
    ctx->pc = 0x79f1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_79f1d0:
    // 0x79f1d0: 0xc7b40270  lwc1        $f20, 0x270($sp)
    ctx->pc = 0x79f1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79f1d4:
    // 0x79f1d4: 0x3e00008  jr          $ra
label_79f1d8:
    if (ctx->pc == 0x79F1D8u) {
        ctx->pc = 0x79F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F1D4u;
        // 0x79f1d8: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F1DCu;
        goto label_79f1dc;
    }
    ctx->pc = 0x79F1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F1D4u;
        // 0x79f1d8: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79F1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79F1DCu;
label_79f1dc:
    // 0x79f1dc: 0x0  nop
    ctx->pc = 0x79f1dcu;
    // NOP
    ctx->pc = 0x79f1e0u;
}
} // namespace gh_r501
