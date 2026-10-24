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

// Function: func_0028B190
// Address: 0x28b190 - 0x28bea8
void func_0028B190_0x28b190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028B190_0x28b190");
#endif

    switch (ctx->pc) {
        case 0x28b190u: goto label_28b190;
        case 0x28b194u: goto label_28b194;
        case 0x28b198u: goto label_28b198;
        case 0x28b19cu: goto label_28b19c;
        case 0x28b1a0u: goto label_28b1a0;
        case 0x28b1a4u: goto label_28b1a4;
        case 0x28b1a8u: goto label_28b1a8;
        case 0x28b1acu: goto label_28b1ac;
        case 0x28b1b0u: goto label_28b1b0;
        case 0x28b1b4u: goto label_28b1b4;
        case 0x28b1b8u: goto label_28b1b8;
        case 0x28b1bcu: goto label_28b1bc;
        case 0x28b1c0u: goto label_28b1c0;
        case 0x28b1c4u: goto label_28b1c4;
        case 0x28b1c8u: goto label_28b1c8;
        case 0x28b1ccu: goto label_28b1cc;
        case 0x28b1d0u: goto label_28b1d0;
        case 0x28b1d4u: goto label_28b1d4;
        case 0x28b1d8u: goto label_28b1d8;
        case 0x28b1dcu: goto label_28b1dc;
        case 0x28b1e0u: goto label_28b1e0;
        case 0x28b1e4u: goto label_28b1e4;
        case 0x28b1e8u: goto label_28b1e8;
        case 0x28b1ecu: goto label_28b1ec;
        case 0x28b1f0u: goto label_28b1f0;
        case 0x28b1f4u: goto label_28b1f4;
        case 0x28b1f8u: goto label_28b1f8;
        case 0x28b1fcu: goto label_28b1fc;
        case 0x28b200u: goto label_28b200;
        case 0x28b204u: goto label_28b204;
        case 0x28b208u: goto label_28b208;
        case 0x28b20cu: goto label_28b20c;
        case 0x28b210u: goto label_28b210;
        case 0x28b214u: goto label_28b214;
        case 0x28b218u: goto label_28b218;
        case 0x28b21cu: goto label_28b21c;
        case 0x28b220u: goto label_28b220;
        case 0x28b224u: goto label_28b224;
        case 0x28b228u: goto label_28b228;
        case 0x28b22cu: goto label_28b22c;
        case 0x28b230u: goto label_28b230;
        case 0x28b234u: goto label_28b234;
        case 0x28b238u: goto label_28b238;
        case 0x28b23cu: goto label_28b23c;
        case 0x28b240u: goto label_28b240;
        case 0x28b244u: goto label_28b244;
        case 0x28b248u: goto label_28b248;
        case 0x28b24cu: goto label_28b24c;
        case 0x28b250u: goto label_28b250;
        case 0x28b254u: goto label_28b254;
        case 0x28b258u: goto label_28b258;
        case 0x28b25cu: goto label_28b25c;
        case 0x28b260u: goto label_28b260;
        case 0x28b264u: goto label_28b264;
        case 0x28b268u: goto label_28b268;
        case 0x28b26cu: goto label_28b26c;
        case 0x28b270u: goto label_28b270;
        case 0x28b274u: goto label_28b274;
        case 0x28b278u: goto label_28b278;
        case 0x28b27cu: goto label_28b27c;
        case 0x28b280u: goto label_28b280;
        case 0x28b284u: goto label_28b284;
        case 0x28b288u: goto label_28b288;
        case 0x28b28cu: goto label_28b28c;
        case 0x28b290u: goto label_28b290;
        case 0x28b294u: goto label_28b294;
        case 0x28b298u: goto label_28b298;
        case 0x28b29cu: goto label_28b29c;
        case 0x28b2a0u: goto label_28b2a0;
        case 0x28b2a4u: goto label_28b2a4;
        case 0x28b2a8u: goto label_28b2a8;
        case 0x28b2acu: goto label_28b2ac;
        case 0x28b2b0u: goto label_28b2b0;
        case 0x28b2b4u: goto label_28b2b4;
        case 0x28b2b8u: goto label_28b2b8;
        case 0x28b2bcu: goto label_28b2bc;
        case 0x28b2c0u: goto label_28b2c0;
        case 0x28b2c4u: goto label_28b2c4;
        case 0x28b2c8u: goto label_28b2c8;
        case 0x28b2ccu: goto label_28b2cc;
        case 0x28b2d0u: goto label_28b2d0;
        case 0x28b2d4u: goto label_28b2d4;
        case 0x28b2d8u: goto label_28b2d8;
        case 0x28b2dcu: goto label_28b2dc;
        case 0x28b2e0u: goto label_28b2e0;
        case 0x28b2e4u: goto label_28b2e4;
        case 0x28b2e8u: goto label_28b2e8;
        case 0x28b2ecu: goto label_28b2ec;
        case 0x28b2f0u: goto label_28b2f0;
        case 0x28b2f4u: goto label_28b2f4;
        case 0x28b2f8u: goto label_28b2f8;
        case 0x28b2fcu: goto label_28b2fc;
        case 0x28b300u: goto label_28b300;
        case 0x28b304u: goto label_28b304;
        case 0x28b308u: goto label_28b308;
        case 0x28b30cu: goto label_28b30c;
        case 0x28b310u: goto label_28b310;
        case 0x28b314u: goto label_28b314;
        case 0x28b318u: goto label_28b318;
        case 0x28b31cu: goto label_28b31c;
        case 0x28b320u: goto label_28b320;
        case 0x28b324u: goto label_28b324;
        case 0x28b328u: goto label_28b328;
        case 0x28b32cu: goto label_28b32c;
        case 0x28b330u: goto label_28b330;
        case 0x28b334u: goto label_28b334;
        case 0x28b338u: goto label_28b338;
        case 0x28b33cu: goto label_28b33c;
        case 0x28b340u: goto label_28b340;
        case 0x28b344u: goto label_28b344;
        case 0x28b348u: goto label_28b348;
        case 0x28b34cu: goto label_28b34c;
        case 0x28b350u: goto label_28b350;
        case 0x28b354u: goto label_28b354;
        case 0x28b358u: goto label_28b358;
        case 0x28b35cu: goto label_28b35c;
        case 0x28b360u: goto label_28b360;
        case 0x28b364u: goto label_28b364;
        case 0x28b368u: goto label_28b368;
        case 0x28b36cu: goto label_28b36c;
        case 0x28b370u: goto label_28b370;
        case 0x28b374u: goto label_28b374;
        case 0x28b378u: goto label_28b378;
        case 0x28b37cu: goto label_28b37c;
        case 0x28b380u: goto label_28b380;
        case 0x28b384u: goto label_28b384;
        case 0x28b388u: goto label_28b388;
        case 0x28b38cu: goto label_28b38c;
        case 0x28b390u: goto label_28b390;
        case 0x28b394u: goto label_28b394;
        case 0x28b398u: goto label_28b398;
        case 0x28b39cu: goto label_28b39c;
        case 0x28b3a0u: goto label_28b3a0;
        case 0x28b3a4u: goto label_28b3a4;
        case 0x28b3a8u: goto label_28b3a8;
        case 0x28b3acu: goto label_28b3ac;
        case 0x28b3b0u: goto label_28b3b0;
        case 0x28b3b4u: goto label_28b3b4;
        case 0x28b3b8u: goto label_28b3b8;
        case 0x28b3bcu: goto label_28b3bc;
        case 0x28b3c0u: goto label_28b3c0;
        case 0x28b3c4u: goto label_28b3c4;
        case 0x28b3c8u: goto label_28b3c8;
        case 0x28b3ccu: goto label_28b3cc;
        case 0x28b3d0u: goto label_28b3d0;
        case 0x28b3d4u: goto label_28b3d4;
        case 0x28b3d8u: goto label_28b3d8;
        case 0x28b3dcu: goto label_28b3dc;
        case 0x28b3e0u: goto label_28b3e0;
        case 0x28b3e4u: goto label_28b3e4;
        case 0x28b3e8u: goto label_28b3e8;
        case 0x28b3ecu: goto label_28b3ec;
        case 0x28b3f0u: goto label_28b3f0;
        case 0x28b3f4u: goto label_28b3f4;
        case 0x28b3f8u: goto label_28b3f8;
        case 0x28b3fcu: goto label_28b3fc;
        case 0x28b400u: goto label_28b400;
        case 0x28b404u: goto label_28b404;
        case 0x28b408u: goto label_28b408;
        case 0x28b40cu: goto label_28b40c;
        case 0x28b410u: goto label_28b410;
        case 0x28b414u: goto label_28b414;
        case 0x28b418u: goto label_28b418;
        case 0x28b41cu: goto label_28b41c;
        case 0x28b420u: goto label_28b420;
        case 0x28b424u: goto label_28b424;
        case 0x28b428u: goto label_28b428;
        case 0x28b42cu: goto label_28b42c;
        case 0x28b430u: goto label_28b430;
        case 0x28b434u: goto label_28b434;
        case 0x28b438u: goto label_28b438;
        case 0x28b43cu: goto label_28b43c;
        case 0x28b440u: goto label_28b440;
        case 0x28b444u: goto label_28b444;
        case 0x28b448u: goto label_28b448;
        case 0x28b44cu: goto label_28b44c;
        case 0x28b450u: goto label_28b450;
        case 0x28b454u: goto label_28b454;
        case 0x28b458u: goto label_28b458;
        case 0x28b45cu: goto label_28b45c;
        case 0x28b460u: goto label_28b460;
        case 0x28b464u: goto label_28b464;
        case 0x28b468u: goto label_28b468;
        case 0x28b46cu: goto label_28b46c;
        case 0x28b470u: goto label_28b470;
        case 0x28b474u: goto label_28b474;
        case 0x28b478u: goto label_28b478;
        case 0x28b47cu: goto label_28b47c;
        case 0x28b480u: goto label_28b480;
        case 0x28b484u: goto label_28b484;
        case 0x28b488u: goto label_28b488;
        case 0x28b48cu: goto label_28b48c;
        case 0x28b490u: goto label_28b490;
        case 0x28b494u: goto label_28b494;
        case 0x28b498u: goto label_28b498;
        case 0x28b49cu: goto label_28b49c;
        case 0x28b4a0u: goto label_28b4a0;
        case 0x28b4a4u: goto label_28b4a4;
        case 0x28b4a8u: goto label_28b4a8;
        case 0x28b4acu: goto label_28b4ac;
        case 0x28b4b0u: goto label_28b4b0;
        case 0x28b4b4u: goto label_28b4b4;
        case 0x28b4b8u: goto label_28b4b8;
        case 0x28b4bcu: goto label_28b4bc;
        case 0x28b4c0u: goto label_28b4c0;
        case 0x28b4c4u: goto label_28b4c4;
        case 0x28b4c8u: goto label_28b4c8;
        case 0x28b4ccu: goto label_28b4cc;
        case 0x28b4d0u: goto label_28b4d0;
        case 0x28b4d4u: goto label_28b4d4;
        case 0x28b4d8u: goto label_28b4d8;
        case 0x28b4dcu: goto label_28b4dc;
        case 0x28b4e0u: goto label_28b4e0;
        case 0x28b4e4u: goto label_28b4e4;
        case 0x28b4e8u: goto label_28b4e8;
        case 0x28b4ecu: goto label_28b4ec;
        case 0x28b4f0u: goto label_28b4f0;
        case 0x28b4f4u: goto label_28b4f4;
        case 0x28b4f8u: goto label_28b4f8;
        case 0x28b4fcu: goto label_28b4fc;
        case 0x28b500u: goto label_28b500;
        case 0x28b504u: goto label_28b504;
        case 0x28b508u: goto label_28b508;
        case 0x28b50cu: goto label_28b50c;
        case 0x28b510u: goto label_28b510;
        case 0x28b514u: goto label_28b514;
        case 0x28b518u: goto label_28b518;
        case 0x28b51cu: goto label_28b51c;
        case 0x28b520u: goto label_28b520;
        case 0x28b524u: goto label_28b524;
        case 0x28b528u: goto label_28b528;
        case 0x28b52cu: goto label_28b52c;
        case 0x28b530u: goto label_28b530;
        case 0x28b534u: goto label_28b534;
        case 0x28b538u: goto label_28b538;
        case 0x28b53cu: goto label_28b53c;
        case 0x28b540u: goto label_28b540;
        case 0x28b544u: goto label_28b544;
        case 0x28b548u: goto label_28b548;
        case 0x28b54cu: goto label_28b54c;
        case 0x28b550u: goto label_28b550;
        case 0x28b554u: goto label_28b554;
        case 0x28b558u: goto label_28b558;
        case 0x28b55cu: goto label_28b55c;
        case 0x28b560u: goto label_28b560;
        case 0x28b564u: goto label_28b564;
        case 0x28b568u: goto label_28b568;
        case 0x28b56cu: goto label_28b56c;
        case 0x28b570u: goto label_28b570;
        case 0x28b574u: goto label_28b574;
        case 0x28b578u: goto label_28b578;
        case 0x28b57cu: goto label_28b57c;
        case 0x28b580u: goto label_28b580;
        case 0x28b584u: goto label_28b584;
        case 0x28b588u: goto label_28b588;
        case 0x28b58cu: goto label_28b58c;
        case 0x28b590u: goto label_28b590;
        case 0x28b594u: goto label_28b594;
        case 0x28b598u: goto label_28b598;
        case 0x28b59cu: goto label_28b59c;
        case 0x28b5a0u: goto label_28b5a0;
        case 0x28b5a4u: goto label_28b5a4;
        case 0x28b5a8u: goto label_28b5a8;
        case 0x28b5acu: goto label_28b5ac;
        case 0x28b5b0u: goto label_28b5b0;
        case 0x28b5b4u: goto label_28b5b4;
        case 0x28b5b8u: goto label_28b5b8;
        case 0x28b5bcu: goto label_28b5bc;
        case 0x28b5c0u: goto label_28b5c0;
        case 0x28b5c4u: goto label_28b5c4;
        case 0x28b5c8u: goto label_28b5c8;
        case 0x28b5ccu: goto label_28b5cc;
        case 0x28b5d0u: goto label_28b5d0;
        case 0x28b5d4u: goto label_28b5d4;
        case 0x28b5d8u: goto label_28b5d8;
        case 0x28b5dcu: goto label_28b5dc;
        case 0x28b5e0u: goto label_28b5e0;
        case 0x28b5e4u: goto label_28b5e4;
        case 0x28b5e8u: goto label_28b5e8;
        case 0x28b5ecu: goto label_28b5ec;
        case 0x28b5f0u: goto label_28b5f0;
        case 0x28b5f4u: goto label_28b5f4;
        case 0x28b5f8u: goto label_28b5f8;
        case 0x28b5fcu: goto label_28b5fc;
        case 0x28b600u: goto label_28b600;
        case 0x28b604u: goto label_28b604;
        case 0x28b608u: goto label_28b608;
        case 0x28b60cu: goto label_28b60c;
        case 0x28b610u: goto label_28b610;
        case 0x28b614u: goto label_28b614;
        case 0x28b618u: goto label_28b618;
        case 0x28b61cu: goto label_28b61c;
        case 0x28b620u: goto label_28b620;
        case 0x28b624u: goto label_28b624;
        case 0x28b628u: goto label_28b628;
        case 0x28b62cu: goto label_28b62c;
        case 0x28b630u: goto label_28b630;
        case 0x28b634u: goto label_28b634;
        case 0x28b638u: goto label_28b638;
        case 0x28b63cu: goto label_28b63c;
        case 0x28b640u: goto label_28b640;
        case 0x28b644u: goto label_28b644;
        case 0x28b648u: goto label_28b648;
        case 0x28b64cu: goto label_28b64c;
        case 0x28b650u: goto label_28b650;
        case 0x28b654u: goto label_28b654;
        case 0x28b658u: goto label_28b658;
        case 0x28b65cu: goto label_28b65c;
        case 0x28b660u: goto label_28b660;
        case 0x28b664u: goto label_28b664;
        case 0x28b668u: goto label_28b668;
        case 0x28b66cu: goto label_28b66c;
        case 0x28b670u: goto label_28b670;
        case 0x28b674u: goto label_28b674;
        case 0x28b678u: goto label_28b678;
        case 0x28b67cu: goto label_28b67c;
        case 0x28b680u: goto label_28b680;
        case 0x28b684u: goto label_28b684;
        case 0x28b688u: goto label_28b688;
        case 0x28b68cu: goto label_28b68c;
        case 0x28b690u: goto label_28b690;
        case 0x28b694u: goto label_28b694;
        case 0x28b698u: goto label_28b698;
        case 0x28b69cu: goto label_28b69c;
        case 0x28b6a0u: goto label_28b6a0;
        case 0x28b6a4u: goto label_28b6a4;
        case 0x28b6a8u: goto label_28b6a8;
        case 0x28b6acu: goto label_28b6ac;
        case 0x28b6b0u: goto label_28b6b0;
        case 0x28b6b4u: goto label_28b6b4;
        case 0x28b6b8u: goto label_28b6b8;
        case 0x28b6bcu: goto label_28b6bc;
        case 0x28b6c0u: goto label_28b6c0;
        case 0x28b6c4u: goto label_28b6c4;
        case 0x28b6c8u: goto label_28b6c8;
        case 0x28b6ccu: goto label_28b6cc;
        case 0x28b6d0u: goto label_28b6d0;
        case 0x28b6d4u: goto label_28b6d4;
        case 0x28b6d8u: goto label_28b6d8;
        case 0x28b6dcu: goto label_28b6dc;
        case 0x28b6e0u: goto label_28b6e0;
        case 0x28b6e4u: goto label_28b6e4;
        case 0x28b6e8u: goto label_28b6e8;
        case 0x28b6ecu: goto label_28b6ec;
        case 0x28b6f0u: goto label_28b6f0;
        case 0x28b6f4u: goto label_28b6f4;
        case 0x28b6f8u: goto label_28b6f8;
        case 0x28b6fcu: goto label_28b6fc;
        case 0x28b700u: goto label_28b700;
        case 0x28b704u: goto label_28b704;
        case 0x28b708u: goto label_28b708;
        case 0x28b70cu: goto label_28b70c;
        case 0x28b710u: goto label_28b710;
        case 0x28b714u: goto label_28b714;
        case 0x28b718u: goto label_28b718;
        case 0x28b71cu: goto label_28b71c;
        case 0x28b720u: goto label_28b720;
        case 0x28b724u: goto label_28b724;
        case 0x28b728u: goto label_28b728;
        case 0x28b72cu: goto label_28b72c;
        case 0x28b730u: goto label_28b730;
        case 0x28b734u: goto label_28b734;
        case 0x28b738u: goto label_28b738;
        case 0x28b73cu: goto label_28b73c;
        case 0x28b740u: goto label_28b740;
        case 0x28b744u: goto label_28b744;
        case 0x28b748u: goto label_28b748;
        case 0x28b74cu: goto label_28b74c;
        case 0x28b750u: goto label_28b750;
        case 0x28b754u: goto label_28b754;
        case 0x28b758u: goto label_28b758;
        case 0x28b75cu: goto label_28b75c;
        case 0x28b760u: goto label_28b760;
        case 0x28b764u: goto label_28b764;
        case 0x28b768u: goto label_28b768;
        case 0x28b76cu: goto label_28b76c;
        case 0x28b770u: goto label_28b770;
        case 0x28b774u: goto label_28b774;
        case 0x28b778u: goto label_28b778;
        case 0x28b77cu: goto label_28b77c;
        case 0x28b780u: goto label_28b780;
        case 0x28b784u: goto label_28b784;
        case 0x28b788u: goto label_28b788;
        case 0x28b78cu: goto label_28b78c;
        case 0x28b790u: goto label_28b790;
        case 0x28b794u: goto label_28b794;
        case 0x28b798u: goto label_28b798;
        case 0x28b79cu: goto label_28b79c;
        case 0x28b7a0u: goto label_28b7a0;
        case 0x28b7a4u: goto label_28b7a4;
        case 0x28b7a8u: goto label_28b7a8;
        case 0x28b7acu: goto label_28b7ac;
        case 0x28b7b0u: goto label_28b7b0;
        case 0x28b7b4u: goto label_28b7b4;
        case 0x28b7b8u: goto label_28b7b8;
        case 0x28b7bcu: goto label_28b7bc;
        case 0x28b7c0u: goto label_28b7c0;
        case 0x28b7c4u: goto label_28b7c4;
        case 0x28b7c8u: goto label_28b7c8;
        case 0x28b7ccu: goto label_28b7cc;
        case 0x28b7d0u: goto label_28b7d0;
        case 0x28b7d4u: goto label_28b7d4;
        case 0x28b7d8u: goto label_28b7d8;
        case 0x28b7dcu: goto label_28b7dc;
        case 0x28b7e0u: goto label_28b7e0;
        case 0x28b7e4u: goto label_28b7e4;
        case 0x28b7e8u: goto label_28b7e8;
        case 0x28b7ecu: goto label_28b7ec;
        case 0x28b7f0u: goto label_28b7f0;
        case 0x28b7f4u: goto label_28b7f4;
        case 0x28b7f8u: goto label_28b7f8;
        case 0x28b7fcu: goto label_28b7fc;
        case 0x28b800u: goto label_28b800;
        case 0x28b804u: goto label_28b804;
        case 0x28b808u: goto label_28b808;
        case 0x28b80cu: goto label_28b80c;
        case 0x28b810u: goto label_28b810;
        case 0x28b814u: goto label_28b814;
        case 0x28b818u: goto label_28b818;
        case 0x28b81cu: goto label_28b81c;
        case 0x28b820u: goto label_28b820;
        case 0x28b824u: goto label_28b824;
        case 0x28b828u: goto label_28b828;
        case 0x28b82cu: goto label_28b82c;
        case 0x28b830u: goto label_28b830;
        case 0x28b834u: goto label_28b834;
        case 0x28b838u: goto label_28b838;
        case 0x28b83cu: goto label_28b83c;
        case 0x28b840u: goto label_28b840;
        case 0x28b844u: goto label_28b844;
        case 0x28b848u: goto label_28b848;
        case 0x28b84cu: goto label_28b84c;
        case 0x28b850u: goto label_28b850;
        case 0x28b854u: goto label_28b854;
        case 0x28b858u: goto label_28b858;
        case 0x28b85cu: goto label_28b85c;
        case 0x28b860u: goto label_28b860;
        case 0x28b864u: goto label_28b864;
        case 0x28b868u: goto label_28b868;
        case 0x28b86cu: goto label_28b86c;
        case 0x28b870u: goto label_28b870;
        case 0x28b874u: goto label_28b874;
        case 0x28b878u: goto label_28b878;
        case 0x28b87cu: goto label_28b87c;
        case 0x28b880u: goto label_28b880;
        case 0x28b884u: goto label_28b884;
        case 0x28b888u: goto label_28b888;
        case 0x28b88cu: goto label_28b88c;
        case 0x28b890u: goto label_28b890;
        case 0x28b894u: goto label_28b894;
        case 0x28b898u: goto label_28b898;
        case 0x28b89cu: goto label_28b89c;
        case 0x28b8a0u: goto label_28b8a0;
        case 0x28b8a4u: goto label_28b8a4;
        case 0x28b8a8u: goto label_28b8a8;
        case 0x28b8acu: goto label_28b8ac;
        case 0x28b8b0u: goto label_28b8b0;
        case 0x28b8b4u: goto label_28b8b4;
        case 0x28b8b8u: goto label_28b8b8;
        case 0x28b8bcu: goto label_28b8bc;
        case 0x28b8c0u: goto label_28b8c0;
        case 0x28b8c4u: goto label_28b8c4;
        case 0x28b8c8u: goto label_28b8c8;
        case 0x28b8ccu: goto label_28b8cc;
        case 0x28b8d0u: goto label_28b8d0;
        case 0x28b8d4u: goto label_28b8d4;
        case 0x28b8d8u: goto label_28b8d8;
        case 0x28b8dcu: goto label_28b8dc;
        case 0x28b8e0u: goto label_28b8e0;
        case 0x28b8e4u: goto label_28b8e4;
        case 0x28b8e8u: goto label_28b8e8;
        case 0x28b8ecu: goto label_28b8ec;
        case 0x28b8f0u: goto label_28b8f0;
        case 0x28b8f4u: goto label_28b8f4;
        case 0x28b8f8u: goto label_28b8f8;
        case 0x28b8fcu: goto label_28b8fc;
        case 0x28b900u: goto label_28b900;
        case 0x28b904u: goto label_28b904;
        case 0x28b908u: goto label_28b908;
        case 0x28b90cu: goto label_28b90c;
        case 0x28b910u: goto label_28b910;
        case 0x28b914u: goto label_28b914;
        case 0x28b918u: goto label_28b918;
        case 0x28b91cu: goto label_28b91c;
        case 0x28b920u: goto label_28b920;
        case 0x28b924u: goto label_28b924;
        case 0x28b928u: goto label_28b928;
        case 0x28b92cu: goto label_28b92c;
        case 0x28b930u: goto label_28b930;
        case 0x28b934u: goto label_28b934;
        case 0x28b938u: goto label_28b938;
        case 0x28b93cu: goto label_28b93c;
        case 0x28b940u: goto label_28b940;
        case 0x28b944u: goto label_28b944;
        case 0x28b948u: goto label_28b948;
        case 0x28b94cu: goto label_28b94c;
        case 0x28b950u: goto label_28b950;
        case 0x28b954u: goto label_28b954;
        case 0x28b958u: goto label_28b958;
        case 0x28b95cu: goto label_28b95c;
        case 0x28b960u: goto label_28b960;
        case 0x28b964u: goto label_28b964;
        case 0x28b968u: goto label_28b968;
        case 0x28b96cu: goto label_28b96c;
        case 0x28b970u: goto label_28b970;
        case 0x28b974u: goto label_28b974;
        case 0x28b978u: goto label_28b978;
        case 0x28b97cu: goto label_28b97c;
        case 0x28b980u: goto label_28b980;
        case 0x28b984u: goto label_28b984;
        case 0x28b988u: goto label_28b988;
        case 0x28b98cu: goto label_28b98c;
        case 0x28b990u: goto label_28b990;
        case 0x28b994u: goto label_28b994;
        case 0x28b998u: goto label_28b998;
        case 0x28b99cu: goto label_28b99c;
        case 0x28b9a0u: goto label_28b9a0;
        case 0x28b9a4u: goto label_28b9a4;
        case 0x28b9a8u: goto label_28b9a8;
        case 0x28b9acu: goto label_28b9ac;
        case 0x28b9b0u: goto label_28b9b0;
        case 0x28b9b4u: goto label_28b9b4;
        case 0x28b9b8u: goto label_28b9b8;
        case 0x28b9bcu: goto label_28b9bc;
        case 0x28b9c0u: goto label_28b9c0;
        case 0x28b9c4u: goto label_28b9c4;
        case 0x28b9c8u: goto label_28b9c8;
        case 0x28b9ccu: goto label_28b9cc;
        case 0x28b9d0u: goto label_28b9d0;
        case 0x28b9d4u: goto label_28b9d4;
        case 0x28b9d8u: goto label_28b9d8;
        case 0x28b9dcu: goto label_28b9dc;
        case 0x28b9e0u: goto label_28b9e0;
        case 0x28b9e4u: goto label_28b9e4;
        case 0x28b9e8u: goto label_28b9e8;
        case 0x28b9ecu: goto label_28b9ec;
        case 0x28b9f0u: goto label_28b9f0;
        case 0x28b9f4u: goto label_28b9f4;
        case 0x28b9f8u: goto label_28b9f8;
        case 0x28b9fcu: goto label_28b9fc;
        case 0x28ba00u: goto label_28ba00;
        case 0x28ba04u: goto label_28ba04;
        case 0x28ba08u: goto label_28ba08;
        case 0x28ba0cu: goto label_28ba0c;
        case 0x28ba10u: goto label_28ba10;
        case 0x28ba14u: goto label_28ba14;
        case 0x28ba18u: goto label_28ba18;
        case 0x28ba1cu: goto label_28ba1c;
        case 0x28ba20u: goto label_28ba20;
        case 0x28ba24u: goto label_28ba24;
        case 0x28ba28u: goto label_28ba28;
        case 0x28ba2cu: goto label_28ba2c;
        case 0x28ba30u: goto label_28ba30;
        case 0x28ba34u: goto label_28ba34;
        case 0x28ba38u: goto label_28ba38;
        case 0x28ba3cu: goto label_28ba3c;
        case 0x28ba40u: goto label_28ba40;
        case 0x28ba44u: goto label_28ba44;
        case 0x28ba48u: goto label_28ba48;
        case 0x28ba4cu: goto label_28ba4c;
        case 0x28ba50u: goto label_28ba50;
        case 0x28ba54u: goto label_28ba54;
        case 0x28ba58u: goto label_28ba58;
        case 0x28ba5cu: goto label_28ba5c;
        case 0x28ba60u: goto label_28ba60;
        case 0x28ba64u: goto label_28ba64;
        case 0x28ba68u: goto label_28ba68;
        case 0x28ba6cu: goto label_28ba6c;
        case 0x28ba70u: goto label_28ba70;
        case 0x28ba74u: goto label_28ba74;
        case 0x28ba78u: goto label_28ba78;
        case 0x28ba7cu: goto label_28ba7c;
        case 0x28ba80u: goto label_28ba80;
        case 0x28ba84u: goto label_28ba84;
        case 0x28ba88u: goto label_28ba88;
        case 0x28ba8cu: goto label_28ba8c;
        case 0x28ba90u: goto label_28ba90;
        case 0x28ba94u: goto label_28ba94;
        case 0x28ba98u: goto label_28ba98;
        case 0x28ba9cu: goto label_28ba9c;
        case 0x28baa0u: goto label_28baa0;
        case 0x28baa4u: goto label_28baa4;
        case 0x28baa8u: goto label_28baa8;
        case 0x28baacu: goto label_28baac;
        case 0x28bab0u: goto label_28bab0;
        case 0x28bab4u: goto label_28bab4;
        case 0x28bab8u: goto label_28bab8;
        case 0x28babcu: goto label_28babc;
        case 0x28bac0u: goto label_28bac0;
        case 0x28bac4u: goto label_28bac4;
        case 0x28bac8u: goto label_28bac8;
        case 0x28baccu: goto label_28bacc;
        case 0x28bad0u: goto label_28bad0;
        case 0x28bad4u: goto label_28bad4;
        case 0x28bad8u: goto label_28bad8;
        case 0x28badcu: goto label_28badc;
        case 0x28bae0u: goto label_28bae0;
        case 0x28bae4u: goto label_28bae4;
        case 0x28bae8u: goto label_28bae8;
        case 0x28baecu: goto label_28baec;
        case 0x28baf0u: goto label_28baf0;
        case 0x28baf4u: goto label_28baf4;
        case 0x28baf8u: goto label_28baf8;
        case 0x28bafcu: goto label_28bafc;
        case 0x28bb00u: goto label_28bb00;
        case 0x28bb04u: goto label_28bb04;
        case 0x28bb08u: goto label_28bb08;
        case 0x28bb0cu: goto label_28bb0c;
        case 0x28bb10u: goto label_28bb10;
        case 0x28bb14u: goto label_28bb14;
        case 0x28bb18u: goto label_28bb18;
        case 0x28bb1cu: goto label_28bb1c;
        case 0x28bb20u: goto label_28bb20;
        case 0x28bb24u: goto label_28bb24;
        case 0x28bb28u: goto label_28bb28;
        case 0x28bb2cu: goto label_28bb2c;
        case 0x28bb30u: goto label_28bb30;
        case 0x28bb34u: goto label_28bb34;
        case 0x28bb38u: goto label_28bb38;
        case 0x28bb3cu: goto label_28bb3c;
        case 0x28bb40u: goto label_28bb40;
        case 0x28bb44u: goto label_28bb44;
        case 0x28bb48u: goto label_28bb48;
        case 0x28bb4cu: goto label_28bb4c;
        case 0x28bb50u: goto label_28bb50;
        case 0x28bb54u: goto label_28bb54;
        case 0x28bb58u: goto label_28bb58;
        case 0x28bb5cu: goto label_28bb5c;
        case 0x28bb60u: goto label_28bb60;
        case 0x28bb64u: goto label_28bb64;
        case 0x28bb68u: goto label_28bb68;
        case 0x28bb6cu: goto label_28bb6c;
        case 0x28bb70u: goto label_28bb70;
        case 0x28bb74u: goto label_28bb74;
        case 0x28bb78u: goto label_28bb78;
        case 0x28bb7cu: goto label_28bb7c;
        case 0x28bb80u: goto label_28bb80;
        case 0x28bb84u: goto label_28bb84;
        case 0x28bb88u: goto label_28bb88;
        case 0x28bb8cu: goto label_28bb8c;
        case 0x28bb90u: goto label_28bb90;
        case 0x28bb94u: goto label_28bb94;
        case 0x28bb98u: goto label_28bb98;
        case 0x28bb9cu: goto label_28bb9c;
        case 0x28bba0u: goto label_28bba0;
        case 0x28bba4u: goto label_28bba4;
        case 0x28bba8u: goto label_28bba8;
        case 0x28bbacu: goto label_28bbac;
        case 0x28bbb0u: goto label_28bbb0;
        case 0x28bbb4u: goto label_28bbb4;
        case 0x28bbb8u: goto label_28bbb8;
        case 0x28bbbcu: goto label_28bbbc;
        case 0x28bbc0u: goto label_28bbc0;
        case 0x28bbc4u: goto label_28bbc4;
        case 0x28bbc8u: goto label_28bbc8;
        case 0x28bbccu: goto label_28bbcc;
        case 0x28bbd0u: goto label_28bbd0;
        case 0x28bbd4u: goto label_28bbd4;
        case 0x28bbd8u: goto label_28bbd8;
        case 0x28bbdcu: goto label_28bbdc;
        case 0x28bbe0u: goto label_28bbe0;
        case 0x28bbe4u: goto label_28bbe4;
        case 0x28bbe8u: goto label_28bbe8;
        case 0x28bbecu: goto label_28bbec;
        case 0x28bbf0u: goto label_28bbf0;
        case 0x28bbf4u: goto label_28bbf4;
        case 0x28bbf8u: goto label_28bbf8;
        case 0x28bbfcu: goto label_28bbfc;
        case 0x28bc00u: goto label_28bc00;
        case 0x28bc04u: goto label_28bc04;
        case 0x28bc08u: goto label_28bc08;
        case 0x28bc0cu: goto label_28bc0c;
        case 0x28bc10u: goto label_28bc10;
        case 0x28bc14u: goto label_28bc14;
        case 0x28bc18u: goto label_28bc18;
        case 0x28bc1cu: goto label_28bc1c;
        case 0x28bc20u: goto label_28bc20;
        case 0x28bc24u: goto label_28bc24;
        case 0x28bc28u: goto label_28bc28;
        case 0x28bc2cu: goto label_28bc2c;
        case 0x28bc30u: goto label_28bc30;
        case 0x28bc34u: goto label_28bc34;
        case 0x28bc38u: goto label_28bc38;
        case 0x28bc3cu: goto label_28bc3c;
        case 0x28bc40u: goto label_28bc40;
        case 0x28bc44u: goto label_28bc44;
        case 0x28bc48u: goto label_28bc48;
        case 0x28bc4cu: goto label_28bc4c;
        case 0x28bc50u: goto label_28bc50;
        case 0x28bc54u: goto label_28bc54;
        case 0x28bc58u: goto label_28bc58;
        case 0x28bc5cu: goto label_28bc5c;
        case 0x28bc60u: goto label_28bc60;
        case 0x28bc64u: goto label_28bc64;
        case 0x28bc68u: goto label_28bc68;
        case 0x28bc6cu: goto label_28bc6c;
        case 0x28bc70u: goto label_28bc70;
        case 0x28bc74u: goto label_28bc74;
        case 0x28bc78u: goto label_28bc78;
        case 0x28bc7cu: goto label_28bc7c;
        case 0x28bc80u: goto label_28bc80;
        case 0x28bc84u: goto label_28bc84;
        case 0x28bc88u: goto label_28bc88;
        case 0x28bc8cu: goto label_28bc8c;
        case 0x28bc90u: goto label_28bc90;
        case 0x28bc94u: goto label_28bc94;
        case 0x28bc98u: goto label_28bc98;
        case 0x28bc9cu: goto label_28bc9c;
        case 0x28bca0u: goto label_28bca0;
        case 0x28bca4u: goto label_28bca4;
        case 0x28bca8u: goto label_28bca8;
        case 0x28bcacu: goto label_28bcac;
        case 0x28bcb0u: goto label_28bcb0;
        case 0x28bcb4u: goto label_28bcb4;
        case 0x28bcb8u: goto label_28bcb8;
        case 0x28bcbcu: goto label_28bcbc;
        case 0x28bcc0u: goto label_28bcc0;
        case 0x28bcc4u: goto label_28bcc4;
        case 0x28bcc8u: goto label_28bcc8;
        case 0x28bcccu: goto label_28bccc;
        case 0x28bcd0u: goto label_28bcd0;
        case 0x28bcd4u: goto label_28bcd4;
        case 0x28bcd8u: goto label_28bcd8;
        case 0x28bcdcu: goto label_28bcdc;
        case 0x28bce0u: goto label_28bce0;
        case 0x28bce4u: goto label_28bce4;
        case 0x28bce8u: goto label_28bce8;
        case 0x28bcecu: goto label_28bcec;
        case 0x28bcf0u: goto label_28bcf0;
        case 0x28bcf4u: goto label_28bcf4;
        case 0x28bcf8u: goto label_28bcf8;
        case 0x28bcfcu: goto label_28bcfc;
        case 0x28bd00u: goto label_28bd00;
        case 0x28bd04u: goto label_28bd04;
        case 0x28bd08u: goto label_28bd08;
        case 0x28bd0cu: goto label_28bd0c;
        case 0x28bd10u: goto label_28bd10;
        case 0x28bd14u: goto label_28bd14;
        case 0x28bd18u: goto label_28bd18;
        case 0x28bd1cu: goto label_28bd1c;
        case 0x28bd20u: goto label_28bd20;
        case 0x28bd24u: goto label_28bd24;
        case 0x28bd28u: goto label_28bd28;
        case 0x28bd2cu: goto label_28bd2c;
        case 0x28bd30u: goto label_28bd30;
        case 0x28bd34u: goto label_28bd34;
        case 0x28bd38u: goto label_28bd38;
        case 0x28bd3cu: goto label_28bd3c;
        case 0x28bd40u: goto label_28bd40;
        case 0x28bd44u: goto label_28bd44;
        case 0x28bd48u: goto label_28bd48;
        case 0x28bd4cu: goto label_28bd4c;
        case 0x28bd50u: goto label_28bd50;
        case 0x28bd54u: goto label_28bd54;
        case 0x28bd58u: goto label_28bd58;
        case 0x28bd5cu: goto label_28bd5c;
        case 0x28bd60u: goto label_28bd60;
        case 0x28bd64u: goto label_28bd64;
        case 0x28bd68u: goto label_28bd68;
        case 0x28bd6cu: goto label_28bd6c;
        case 0x28bd70u: goto label_28bd70;
        case 0x28bd74u: goto label_28bd74;
        case 0x28bd78u: goto label_28bd78;
        case 0x28bd7cu: goto label_28bd7c;
        case 0x28bd80u: goto label_28bd80;
        case 0x28bd84u: goto label_28bd84;
        case 0x28bd88u: goto label_28bd88;
        case 0x28bd8cu: goto label_28bd8c;
        case 0x28bd90u: goto label_28bd90;
        case 0x28bd94u: goto label_28bd94;
        case 0x28bd98u: goto label_28bd98;
        case 0x28bd9cu: goto label_28bd9c;
        case 0x28bda0u: goto label_28bda0;
        case 0x28bda4u: goto label_28bda4;
        case 0x28bda8u: goto label_28bda8;
        case 0x28bdacu: goto label_28bdac;
        case 0x28bdb0u: goto label_28bdb0;
        case 0x28bdb4u: goto label_28bdb4;
        case 0x28bdb8u: goto label_28bdb8;
        case 0x28bdbcu: goto label_28bdbc;
        case 0x28bdc0u: goto label_28bdc0;
        case 0x28bdc4u: goto label_28bdc4;
        case 0x28bdc8u: goto label_28bdc8;
        case 0x28bdccu: goto label_28bdcc;
        case 0x28bdd0u: goto label_28bdd0;
        case 0x28bdd4u: goto label_28bdd4;
        case 0x28bdd8u: goto label_28bdd8;
        case 0x28bddcu: goto label_28bddc;
        case 0x28bde0u: goto label_28bde0;
        case 0x28bde4u: goto label_28bde4;
        case 0x28bde8u: goto label_28bde8;
        case 0x28bdecu: goto label_28bdec;
        case 0x28bdf0u: goto label_28bdf0;
        case 0x28bdf4u: goto label_28bdf4;
        case 0x28bdf8u: goto label_28bdf8;
        case 0x28bdfcu: goto label_28bdfc;
        case 0x28be00u: goto label_28be00;
        case 0x28be04u: goto label_28be04;
        case 0x28be08u: goto label_28be08;
        case 0x28be0cu: goto label_28be0c;
        case 0x28be10u: goto label_28be10;
        case 0x28be14u: goto label_28be14;
        case 0x28be18u: goto label_28be18;
        case 0x28be1cu: goto label_28be1c;
        case 0x28be20u: goto label_28be20;
        case 0x28be24u: goto label_28be24;
        case 0x28be28u: goto label_28be28;
        case 0x28be2cu: goto label_28be2c;
        case 0x28be30u: goto label_28be30;
        case 0x28be34u: goto label_28be34;
        case 0x28be38u: goto label_28be38;
        case 0x28be3cu: goto label_28be3c;
        case 0x28be40u: goto label_28be40;
        case 0x28be44u: goto label_28be44;
        case 0x28be48u: goto label_28be48;
        case 0x28be4cu: goto label_28be4c;
        case 0x28be50u: goto label_28be50;
        case 0x28be54u: goto label_28be54;
        case 0x28be58u: goto label_28be58;
        case 0x28be5cu: goto label_28be5c;
        case 0x28be60u: goto label_28be60;
        case 0x28be64u: goto label_28be64;
        case 0x28be68u: goto label_28be68;
        case 0x28be6cu: goto label_28be6c;
        case 0x28be70u: goto label_28be70;
        case 0x28be74u: goto label_28be74;
        case 0x28be78u: goto label_28be78;
        case 0x28be7cu: goto label_28be7c;
        case 0x28be80u: goto label_28be80;
        case 0x28be84u: goto label_28be84;
        case 0x28be88u: goto label_28be88;
        case 0x28be8cu: goto label_28be8c;
        case 0x28be90u: goto label_28be90;
        case 0x28be94u: goto label_28be94;
        case 0x28be98u: goto label_28be98;
        case 0x28be9cu: goto label_28be9c;
        case 0x28bea0u: goto label_28bea0;
        case 0x28bea4u: goto label_28bea4;
        default: break;
    }

    ctx->pc = 0x28b190u;

label_28b190:
    // 0x28b190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28b190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_28b194:
    // 0x28b194: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28b194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_28b198:
    // 0x28b198: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28b198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_28b19c:
    // 0x28b19c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28b19cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28b1a0:
    // 0x28b1a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28b1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_28b1a4:
    // 0x28b1a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28b1a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28b1a8:
    // 0x28b1a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28b1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28b1ac:
    // 0x28b1ac: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x28b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_28b1b0:
    // 0x28b1b0: 0x26051510  addiu       $a1, $s0, 0x1510
    ctx->pc = 0x28b1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5392));
label_28b1b4:
    // 0x28b1b4: 0x26031520  addiu       $v1, $s0, 0x1520
    ctx->pc = 0x28b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5408));
label_28b1b8:
    // 0x28b1b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28b1bc:
    // 0x28b1bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28b1bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28b1c0:
    // 0x28b1c0: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
label_28b1c4:
    if (ctx->pc == 0x28B1C4u) {
        ctx->pc = 0x28B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1C0u;
        // 0x28b1c4: 0xae021510  sw          $v0, 0x1510($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B1C8u;
        goto label_28b1c8;
    }
    ctx->pc = 0x28B1C0u;
    {
        const bool branch_taken_0x28b1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x28B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1C0u;
        // 0x28b1c4: 0xae021510  sw          $v0, 0x1510($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b1c0) {
            ctx->pc = 0x28B1E0u;
            goto label_28b1e0;
        }
    }
    ctx->pc = 0x28B1C8u;
label_28b1c8:
    // 0x28b1c8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x28b1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b1cc:
    // 0x28b1cc: 0xe6001520  swc1        $f0, 0x1520($s0)
    ctx->pc = 0x28b1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5408), bits); }
label_28b1d0:
    // 0x28b1d0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x28b1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28b1d4:
    // 0x28b1d4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x28b1d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_28b1d8:
    // 0x28b1d8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x28b1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b1dc:
    // 0x28b1dc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28b1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_28b1e0:
    // 0x28b1e0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x28b1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28b1e4:
    // 0x28b1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b1e8:
    // 0x28b1e8: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x28b1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_28b1ec:
    // 0x28b1ec: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x28b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_28b1f0:
    // 0x28b1f0: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x28b1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
label_28b1f4:
    // 0x28b1f4: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x28b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_28b1f8:
    // 0x28b1f8: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x28b1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
label_28b1fc:
    // 0x28b1fc: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x28b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_28b200:
    // 0x28b200: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x28b200u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
label_28b204:
    // 0x28b204: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x28b204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_28b208:
    // 0x28b208: 0xa0a30030  sb          $v1, 0x30($a1)
    ctx->pc = 0x28b208u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
label_28b20c:
    // 0x28b20c: 0x92220031  lbu         $v0, 0x31($s1)
    ctx->pc = 0x28b20cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
label_28b210:
    // 0x28b210: 0xa0a20031  sb          $v0, 0x31($a1)
    ctx->pc = 0x28b210u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 2));
label_28b214:
    // 0x28b214: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x28b214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_28b218:
    // 0x28b218: 0xc0a3100  jal         func_28C400
label_28b21c:
    if (ctx->pc == 0x28B21Cu) {
        ctx->pc = 0x28B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B218u;
        // 0x28b21c: 0xae030564  sw          $v1, 0x564($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B220u;
        goto label_28b220;
    }
    ctx->pc = 0x28B218u;
    SET_GPR_U32(ctx, 31, 0x28B220u);
    ctx->pc = 0x28B21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B218u;
    // 0x28b21c: 0xae030564  sw          $v1, 0x564($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C400u, 0x28B218u, 0x28B220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B220u;
label_28b220:
    // 0x28b220: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28b224:
    if (ctx->pc == 0x28B224u) {
        ctx->pc = 0x28B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B220u;
        // 0x28b224: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B228u;
        goto label_28b228;
    }
    ctx->pc = 0x28B220u;
    {
        const bool branch_taken_0x28b220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B220u;
        // 0x28b224: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b220) {
            ctx->pc = 0x28B230u;
            goto label_28b230;
        }
    }
    ctx->pc = 0x28B228u;
label_28b228:
    // 0x28b228: 0x10000318  b           . + 4 + (0x318 << 2)
label_28b22c:
    if (ctx->pc == 0x28B22Cu) {
        ctx->pc = 0x28B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B228u;
        // 0x28b22c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B230u;
        goto label_28b230;
    }
    ctx->pc = 0x28B228u;
    {
        const bool branch_taken_0x28b228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B228u;
        // 0x28b22c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b228) {
            ctx->pc = 0x28BE8Cu;
            goto label_28be8c;
        }
    }
    ctx->pc = 0x28B230u;
label_28b230:
    // 0x28b230: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28b230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28b234:
    // 0x28b234: 0xc0a3afc  jal         func_28EBF0
label_28b238:
    if (ctx->pc == 0x28B238u) {
        ctx->pc = 0x28B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B234u;
        // 0x28b238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B23Cu;
        goto label_28b23c;
    }
    ctx->pc = 0x28B234u;
    SET_GPR_U32(ctx, 31, 0x28B23Cu);
    ctx->pc = 0x28B238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B234u;
    // 0x28b238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBF0u, 0x28B234u, 0x28B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B23Cu;
label_28b23c:
    // 0x28b23c: 0xa2000531  sb          $zero, 0x531($s0)
    ctx->pc = 0x28b23cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 0));
label_28b240:
    // 0x28b240: 0xc0a33b6  jal         func_28CED8
label_28b244:
    if (ctx->pc == 0x28B244u) {
        ctx->pc = 0x28B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B240u;
        // 0x28b244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B248u;
        goto label_28b248;
    }
    ctx->pc = 0x28B240u;
    SET_GPR_U32(ctx, 31, 0x28B248u);
    ctx->pc = 0x28B244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B240u;
    // 0x28b244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CED8u, 0x28B240u, 0x28B248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B248u;
label_28b248:
    // 0x28b248: 0xc0a3374  jal         func_28CDD0
label_28b24c:
    if (ctx->pc == 0x28B24Cu) {
        ctx->pc = 0x28B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B248u;
        // 0x28b24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B250u;
        goto label_28b250;
    }
    ctx->pc = 0x28B248u;
    SET_GPR_U32(ctx, 31, 0x28B250u);
    ctx->pc = 0x28B24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B248u;
    // 0x28b24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDD0u, 0x28B248u, 0x28B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B250u;
label_28b250:
    // 0x28b250: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x28b250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_28b254:
    // 0x28b254: 0x3c013f85  lui         $at, 0x3F85
    ctx->pc = 0x28b254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16261 << 16));
label_28b258:
    // 0x28b258: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x28b258u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_28b25c:
    // 0x28b25c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b260:
    // 0x28b260: 0x2443fdfc  addiu       $v1, $v0, -0x204
    ctx->pc = 0x28b260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966780));
label_28b264:
    // 0x28b264: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x28b264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_28b268:
    // 0x28b268: 0x2c620076  sltiu       $v0, $v1, 0x76
    ctx->pc = 0x28b268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)118) ? 1 : 0);
label_28b26c:
    // 0x28b26c: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x28b26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_28b270:
    // 0x28b270: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_28b274:
    if (ctx->pc == 0x28B274u) {
        ctx->pc = 0x28B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B270u;
        // 0x28b274: 0xe6000114  swc1        $f0, 0x114($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B278u;
        goto label_28b278;
    }
    ctx->pc = 0x28B270u;
    {
        const bool branch_taken_0x28b270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B270u;
        // 0x28b274: 0xe6000114  swc1        $f0, 0x114($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b270) {
            ctx->pc = 0x28B4A0u;
            goto label_28b4a0;
        }
    }
    ctx->pc = 0x28B278u;
label_28b278:
    // 0x28b278: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x28b278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_28b27c:
    // 0x28b27c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28b280:
    // 0x28b280: 0x24429010  addiu       $v0, $v0, -0x6FF0
    ctx->pc = 0x28b280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938640));
label_28b284:
    // 0x28b284: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28b284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28b288:
    // 0x28b288: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28b288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28b28c:
    // 0x28b28c: 0x800008  jr          $a0
label_28b290:
    if (ctx->pc == 0x28B290u) {
        ctx->pc = 0x28B294u;
        goto label_28b294;
    }
    ctx->pc = 0x28B28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B294u: goto label_28b294;
            case 0x28B2A8u: goto label_28b2a8;
            case 0x28B2B8u: goto label_28b2b8;
            case 0x28B2CCu: goto label_28b2cc;
            case 0x28B2DCu: goto label_28b2dc;
            case 0x28B2ECu: goto label_28b2ec;
            case 0x28B2FCu: goto label_28b2fc;
            case 0x28B30Cu: goto label_28b30c;
            case 0x28B320u: goto label_28b320;
            case 0x28B330u: goto label_28b330;
            case 0x28B344u: goto label_28b344;
            case 0x28B358u: goto label_28b358;
            case 0x28B368u: goto label_28b368;
            case 0x28B3A8u: goto label_28b3a8;
            case 0x28B3B8u: goto label_28b3b8;
            case 0x28B3CCu: goto label_28b3cc;
            case 0x28B3E0u: goto label_28b3e0;
            case 0x28B3F4u: goto label_28b3f4;
            case 0x28B408u: goto label_28b408;
            case 0x28B41Cu: goto label_28b41c;
            case 0x28B430u: goto label_28b430;
            case 0x28B444u: goto label_28b444;
            case 0x28B454u: goto label_28b454;
            case 0x28B468u: goto label_28b468;
            case 0x28B484u: goto label_28b484;
            case 0x28B4A0u: goto label_28b4a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B28Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B294u;
label_28b294:
    // 0x28b294: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x28b294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_28b298:
    // 0x28b298: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28b298u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_28b29c:
    // 0x28b29c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b29cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b2a0:
    // 0x28b2a0: 0x1000007d  b           . + 4 + (0x7D << 2)
label_28b2a4:
    if (ctx->pc == 0x28B2A4u) {
        ctx->pc = 0x28B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2A0u;
        // 0x28b2a4: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2A8u;
        goto label_28b2a8;
    }
    ctx->pc = 0x28B2A0u;
    {
        const bool branch_taken_0x28b2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2A0u;
        // 0x28b2a4: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2a0) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B2A8u;
label_28b2a8:
    // 0x28b2a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28b2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28b2ac:
    // 0x28b2ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b2b0:
    // 0x28b2b0: 0x10000079  b           . + 4 + (0x79 << 2)
label_28b2b4:
    if (ctx->pc == 0x28B2B4u) {
        ctx->pc = 0x28B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2B0u;
        // 0x28b2b4: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2B8u;
        goto label_28b2b8;
    }
    ctx->pc = 0x28B2B0u;
    {
        const bool branch_taken_0x28b2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2B0u;
        // 0x28b2b4: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2b0) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B2B8u;
label_28b2b8:
    // 0x28b2b8: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x28b2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_28b2bc:
    // 0x28b2bc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28b2bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_28b2c0:
    // 0x28b2c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b2c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b2c4:
    // 0x28b2c4: 0x10000074  b           . + 4 + (0x74 << 2)
label_28b2c8:
    if (ctx->pc == 0x28B2C8u) {
        ctx->pc = 0x28B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2C4u;
        // 0x28b2c8: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2CCu;
        goto label_28b2cc;
    }
    ctx->pc = 0x28B2C4u;
    {
        const bool branch_taken_0x28b2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2C4u;
        // 0x28b2c8: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2c4) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B2CCu;
label_28b2cc:
    // 0x28b2cc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x28b2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_28b2d0:
    // 0x28b2d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b2d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b2d4:
    // 0x28b2d4: 0x10000070  b           . + 4 + (0x70 << 2)
label_28b2d8:
    if (ctx->pc == 0x28B2D8u) {
        ctx->pc = 0x28B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2D4u;
        // 0x28b2d8: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2DCu;
        goto label_28b2dc;
    }
    ctx->pc = 0x28B2D4u;
    {
        const bool branch_taken_0x28b2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2D4u;
        // 0x28b2d8: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2d4) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B2DCu;
label_28b2dc:
    // 0x28b2dc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x28b2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_28b2e0:
    // 0x28b2e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b2e4:
    // 0x28b2e4: 0x1000006c  b           . + 4 + (0x6C << 2)
label_28b2e8:
    if (ctx->pc == 0x28B2E8u) {
        ctx->pc = 0x28B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2E4u;
        // 0x28b2e8: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2ECu;
        goto label_28b2ec;
    }
    ctx->pc = 0x28B2E4u;
    {
        const bool branch_taken_0x28b2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2E4u;
        // 0x28b2e8: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2e4) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B2ECu;
label_28b2ec:
    // 0x28b2ec: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x28b2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_28b2f0:
    // 0x28b2f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b2f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b2f4:
    // 0x28b2f4: 0x10000068  b           . + 4 + (0x68 << 2)
label_28b2f8:
    if (ctx->pc == 0x28B2F8u) {
        ctx->pc = 0x28B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2F4u;
        // 0x28b2f8: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2FCu;
        goto label_28b2fc;
    }
    ctx->pc = 0x28B2F4u;
    {
        const bool branch_taken_0x28b2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2F4u;
        // 0x28b2f8: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2f4) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B2FCu;
label_28b2fc:
    // 0x28b2fc: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x28b2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_28b300:
    // 0x28b300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b304:
    // 0x28b304: 0x10000064  b           . + 4 + (0x64 << 2)
label_28b308:
    if (ctx->pc == 0x28B308u) {
        ctx->pc = 0x28B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B304u;
        // 0x28b308: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B30Cu;
        goto label_28b30c;
    }
    ctx->pc = 0x28B304u;
    {
        const bool branch_taken_0x28b304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B304u;
        // 0x28b308: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b304) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B30Cu;
label_28b30c:
    // 0x28b30c: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x28b30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_28b310:
    // 0x28b310: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x28b310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_28b314:
    // 0x28b314: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b318:
    // 0x28b318: 0x1000005f  b           . + 4 + (0x5F << 2)
label_28b31c:
    if (ctx->pc == 0x28B31Cu) {
        ctx->pc = 0x28B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B318u;
        // 0x28b31c: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B320u;
        goto label_28b320;
    }
    ctx->pc = 0x28B318u;
    {
        const bool branch_taken_0x28b318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B318u;
        // 0x28b31c: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b318) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B320u;
label_28b320:
    // 0x28b320: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28b320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28b324:
    // 0x28b324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b328:
    // 0x28b328: 0x1000005b  b           . + 4 + (0x5B << 2)
label_28b32c:
    if (ctx->pc == 0x28B32Cu) {
        ctx->pc = 0x28B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B328u;
        // 0x28b32c: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B330u;
        goto label_28b330;
    }
    ctx->pc = 0x28B328u;
    {
        const bool branch_taken_0x28b328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B328u;
        // 0x28b32c: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b328) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B330u;
label_28b330:
    // 0x28b330: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x28b330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_28b334:
    // 0x28b334: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x28b334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_28b338:
    // 0x28b338: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b33c:
    // 0x28b33c: 0x10000056  b           . + 4 + (0x56 << 2)
label_28b340:
    if (ctx->pc == 0x28B340u) {
        ctx->pc = 0x28B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B33Cu;
        // 0x28b340: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B344u;
        goto label_28b344;
    }
    ctx->pc = 0x28B33Cu;
    {
        const bool branch_taken_0x28b33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B33Cu;
        // 0x28b340: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b33c) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B344u;
label_28b344:
    // 0x28b344: 0x3c013f8a  lui         $at, 0x3F8A
    ctx->pc = 0x28b344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16266 << 16));
label_28b348:
    // 0x28b348: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x28b348u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_28b34c:
    // 0x28b34c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b34cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b350:
    // 0x28b350: 0x10000051  b           . + 4 + (0x51 << 2)
label_28b354:
    if (ctx->pc == 0x28B354u) {
        ctx->pc = 0x28B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B350u;
        // 0x28b354: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B358u;
        goto label_28b358;
    }
    ctx->pc = 0x28B350u;
    {
        const bool branch_taken_0x28b350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B350u;
        // 0x28b354: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b350) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B358u;
label_28b358:
    // 0x28b358: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x28b358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_28b35c:
    // 0x28b35c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b35cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b360:
    // 0x28b360: 0x1000004d  b           . + 4 + (0x4D << 2)
label_28b364:
    if (ctx->pc == 0x28B364u) {
        ctx->pc = 0x28B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B360u;
        // 0x28b364: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B368u;
        goto label_28b368;
    }
    ctx->pc = 0x28B360u;
    {
        const bool branch_taken_0x28b360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B360u;
        // 0x28b364: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b360) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B368u;
label_28b368:
    // 0x28b368: 0x3c013f82  lui         $at, 0x3F82
    ctx->pc = 0x28b368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16258 << 16));
label_28b36c:
    // 0x28b36c: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x28b36cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_28b370:
    // 0x28b370: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b374:
    // 0x28b374: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x28b374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_28b378:
    // 0x28b378: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x28b378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_28b37c:
    // 0x28b37c: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x28b37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_28b380:
    // 0x28b380: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x28b380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_28b384:
    // 0x28b384: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x28b384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_28b388:
    // 0x28b388: 0x90627a51  lbu         $v0, 0x7A51($v1)
    ctx->pc = 0x28b388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 31313)));
label_28b38c:
    // 0x28b38c: 0x54440045  bnel        $v0, $a0, . + 4 + (0x45 << 2)
label_28b390:
    if (ctx->pc == 0x28B390u) {
        ctx->pc = 0x28B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B38Cu;
        // 0x28b390: 0x92031540  lbu         $v1, 0x1540($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B394u;
        goto label_28b394;
    }
    ctx->pc = 0x28B38Cu;
    {
        const bool branch_taken_0x28b38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x28b38c) {
            ctx->pc = 0x28B390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B38Cu;
            // 0x28b390: 0x92031540  lbu         $v1, 0x1540($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B4A4u;
            goto label_28b4a4;
        }
    }
    ctx->pc = 0x28B394u;
label_28b394:
    // 0x28b394: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x28b394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_28b398:
    // 0x28b398: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x28b398u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_28b39c:
    // 0x28b39c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b39cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b3a0:
    // 0x28b3a0: 0x1000003d  b           . + 4 + (0x3D << 2)
label_28b3a4:
    if (ctx->pc == 0x28B3A4u) {
        ctx->pc = 0x28B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3A0u;
        // 0x28b3a4: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3A8u;
        goto label_28b3a8;
    }
    ctx->pc = 0x28B3A0u;
    {
        const bool branch_taken_0x28b3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3A0u;
        // 0x28b3a4: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3a0) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B3A8u;
label_28b3a8:
    // 0x28b3a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28b3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28b3ac:
    // 0x28b3ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b3acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b3b0:
    // 0x28b3b0: 0x10000039  b           . + 4 + (0x39 << 2)
label_28b3b4:
    if (ctx->pc == 0x28B3B4u) {
        ctx->pc = 0x28B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3B0u;
        // 0x28b3b4: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3B8u;
        goto label_28b3b8;
    }
    ctx->pc = 0x28B3B0u;
    {
        const bool branch_taken_0x28b3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3B0u;
        // 0x28b3b4: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3b0) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B3B8u;
label_28b3b8:
    // 0x28b3b8: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x28b3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_28b3bc:
    // 0x28b3bc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x28b3bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_28b3c0:
    // 0x28b3c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b3c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b3c4:
    // 0x28b3c4: 0x10000034  b           . + 4 + (0x34 << 2)
label_28b3c8:
    if (ctx->pc == 0x28B3C8u) {
        ctx->pc = 0x28B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3C4u;
        // 0x28b3c8: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3CCu;
        goto label_28b3cc;
    }
    ctx->pc = 0x28B3C4u;
    {
        const bool branch_taken_0x28b3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3C4u;
        // 0x28b3c8: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3c4) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B3CCu;
label_28b3cc:
    // 0x28b3cc: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x28b3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_28b3d0:
    // 0x28b3d0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28b3d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_28b3d4:
    // 0x28b3d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b3d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b3d8:
    // 0x28b3d8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_28b3dc:
    if (ctx->pc == 0x28B3DCu) {
        ctx->pc = 0x28B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3D8u;
        // 0x28b3dc: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3E0u;
        goto label_28b3e0;
    }
    ctx->pc = 0x28B3D8u;
    {
        const bool branch_taken_0x28b3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3D8u;
        // 0x28b3dc: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3d8) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B3E0u;
label_28b3e0:
    // 0x28b3e0: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x28b3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_28b3e4:
    // 0x28b3e4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x28b3e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_28b3e8:
    // 0x28b3e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b3ec:
    // 0x28b3ec: 0x1000002a  b           . + 4 + (0x2A << 2)
label_28b3f0:
    if (ctx->pc == 0x28B3F0u) {
        ctx->pc = 0x28B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3ECu;
        // 0x28b3f0: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3F4u;
        goto label_28b3f4;
    }
    ctx->pc = 0x28B3ECu;
    {
        const bool branch_taken_0x28b3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3ECu;
        // 0x28b3f0: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3ec) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B3F4u;
label_28b3f4:
    // 0x28b3f4: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x28b3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_28b3f8:
    // 0x28b3f8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28b3f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_28b3fc:
    // 0x28b3fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b3fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b400:
    // 0x28b400: 0x10000025  b           . + 4 + (0x25 << 2)
label_28b404:
    if (ctx->pc == 0x28B404u) {
        ctx->pc = 0x28B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B400u;
        // 0x28b404: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B408u;
        goto label_28b408;
    }
    ctx->pc = 0x28B400u;
    {
        const bool branch_taken_0x28b400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B400u;
        // 0x28b404: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b400) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B408u;
label_28b408:
    // 0x28b408: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x28b408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_28b40c:
    // 0x28b40c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x28b40cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_28b410:
    // 0x28b410: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b414:
    // 0x28b414: 0x10000020  b           . + 4 + (0x20 << 2)
label_28b418:
    if (ctx->pc == 0x28B418u) {
        ctx->pc = 0x28B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B414u;
        // 0x28b418: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B41Cu;
        goto label_28b41c;
    }
    ctx->pc = 0x28B414u;
    {
        const bool branch_taken_0x28b414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B414u;
        // 0x28b418: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b414) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B41Cu;
label_28b41c:
    // 0x28b41c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x28b41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_28b420:
    // 0x28b420: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28b420u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_28b424:
    // 0x28b424: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b428:
    // 0x28b428: 0x1000001b  b           . + 4 + (0x1B << 2)
label_28b42c:
    if (ctx->pc == 0x28B42Cu) {
        ctx->pc = 0x28B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B428u;
        // 0x28b42c: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B430u;
        goto label_28b430;
    }
    ctx->pc = 0x28B428u;
    {
        const bool branch_taken_0x28b428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B428u;
        // 0x28b42c: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b428) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B430u;
label_28b430:
    // 0x28b430: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x28b430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_28b434:
    // 0x28b434: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28b434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_28b438:
    // 0x28b438: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b43c:
    // 0x28b43c: 0x10000016  b           . + 4 + (0x16 << 2)
label_28b440:
    if (ctx->pc == 0x28B440u) {
        ctx->pc = 0x28B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B43Cu;
        // 0x28b440: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B444u;
        goto label_28b444;
    }
    ctx->pc = 0x28B43Cu;
    {
        const bool branch_taken_0x28b43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B43Cu;
        // 0x28b440: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b43c) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B444u;
label_28b444:
    // 0x28b444: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28b444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28b448:
    // 0x28b448: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b44c:
    // 0x28b44c: 0x10000012  b           . + 4 + (0x12 << 2)
label_28b450:
    if (ctx->pc == 0x28B450u) {
        ctx->pc = 0x28B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B44Cu;
        // 0x28b450: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B454u;
        goto label_28b454;
    }
    ctx->pc = 0x28B44Cu;
    {
        const bool branch_taken_0x28b44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B44Cu;
        // 0x28b450: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b44c) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B454u;
label_28b454:
    // 0x28b454: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x28b454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_28b458:
    // 0x28b458: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28b458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_28b45c:
    // 0x28b45c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b45cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b460:
    // 0x28b460: 0x1000000d  b           . + 4 + (0xD << 2)
label_28b464:
    if (ctx->pc == 0x28B464u) {
        ctx->pc = 0x28B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B460u;
        // 0x28b464: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B468u;
        goto label_28b468;
    }
    ctx->pc = 0x28B460u;
    {
        const bool branch_taken_0x28b460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B460u;
        // 0x28b464: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b460) {
            ctx->pc = 0x28B498u;
            goto label_28b498;
        }
    }
    ctx->pc = 0x28B468u;
label_28b468:
    // 0x28b468: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x28b468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_28b46c:
    // 0x28b46c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28b46cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_28b470:
    // 0x28b470: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b474:
    // 0x28b474: 0x0  nop
    ctx->pc = 0x28b474u;
    // NOP
label_28b478:
    // 0x28b478: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x28b478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_28b47c:
    // 0x28b47c: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x28b47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_28b480:
    // 0x28b480: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x28b480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_28b484:
    // 0x28b484: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x28b484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_28b488:
    // 0x28b488: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28b488u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_28b48c:
    // 0x28b48c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b48cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28b490:
    // 0x28b490: 0x0  nop
    ctx->pc = 0x28b490u;
    // NOP
label_28b494:
    // 0x28b494: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x28b494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_28b498:
    // 0x28b498: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x28b498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_28b49c:
    // 0x28b49c: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x28b49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_28b4a0:
    // 0x28b4a0: 0x92031540  lbu         $v1, 0x1540($s0)
    ctx->pc = 0x28b4a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5440)));
label_28b4a4:
    // 0x28b4a4: 0x2c62001b  sltiu       $v0, $v1, 0x1B
    ctx->pc = 0x28b4a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
label_28b4a8:
    // 0x28b4a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_28b4ac:
    if (ctx->pc == 0x28B4ACu) {
        ctx->pc = 0x28B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4A8u;
        // 0x28b4ac: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B4B0u;
        goto label_28b4b0;
    }
    ctx->pc = 0x28B4A8u;
    {
        const bool branch_taken_0x28b4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4A8u;
        // 0x28b4ac: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4a8) {
            ctx->pc = 0x28B4C8u;
            goto label_28b4c8;
        }
    }
    ctx->pc = 0x28B4B0u;
label_28b4b0:
    // 0x28b4b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28b4b4:
    // 0x28b4b4: 0x244291f0  addiu       $v0, $v0, -0x6E10
    ctx->pc = 0x28b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939120));
label_28b4b8:
    // 0x28b4b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28b4bc:
    // 0x28b4bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28b4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28b4c0:
    // 0x28b4c0: 0x800008  jr          $a0
label_28b4c4:
    if (ctx->pc == 0x28B4C4u) {
        ctx->pc = 0x28B4C8u;
        goto label_28b4c8;
    }
    ctx->pc = 0x28B4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B4C8u: goto label_28b4c8;
            case 0x28B4E0u: goto label_28b4e0;
            case 0x28B4F8u: goto label_28b4f8;
            case 0x28B510u: goto label_28b510;
            case 0x28B528u: goto label_28b528;
            case 0x28B540u: goto label_28b540;
            case 0x28B558u: goto label_28b558;
            case 0x28B570u: goto label_28b570;
            case 0x28B588u: goto label_28b588;
            case 0x28B5A0u: goto label_28b5a0;
            case 0x28B5B8u: goto label_28b5b8;
            case 0x28B5D0u: goto label_28b5d0;
            case 0x28B5E8u: goto label_28b5e8;
            case 0x28B600u: goto label_28b600;
            case 0x28B618u: goto label_28b618;
            case 0x28B630u: goto label_28b630;
            case 0x28B648u: goto label_28b648;
            case 0x28B660u: goto label_28b660;
            case 0x28B678u: goto label_28b678;
            case 0x28B690u: goto label_28b690;
            case 0x28B6A8u: goto label_28b6a8;
            case 0x28B6C0u: goto label_28b6c0;
            case 0x28B6D8u: goto label_28b6d8;
            case 0x28B6F0u: goto label_28b6f0;
            case 0x28B708u: goto label_28b708;
            case 0x28B720u: goto label_28b720;
            case 0x28B750u: goto label_28b750;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B4C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B4C8u;
label_28b4c8:
    // 0x28b4c8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b4cc:
    // 0x28b4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b4d0:
    // 0x28b4d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b4d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b4d4:
    // 0x28b4d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b4d8:
    // 0x28b4d8: 0x10000096  b           . + 4 + (0x96 << 2)
label_28b4dc:
    if (ctx->pc == 0x28B4DCu) {
        ctx->pc = 0x28B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4D8u;
        // 0x28b4dc: 0x8c450080  lw          $a1, 0x80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B4E0u;
        goto label_28b4e0;
    }
    ctx->pc = 0x28B4D8u;
    {
        const bool branch_taken_0x28b4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4D8u;
        // 0x28b4dc: 0x8c450080  lw          $a1, 0x80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4d8) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B4E0u;
label_28b4e0:
    // 0x28b4e0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b4e4:
    // 0x28b4e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b4e8:
    // 0x28b4e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b4e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b4ec:
    // 0x28b4ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b4ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b4f0:
    // 0x28b4f0: 0x10000090  b           . + 4 + (0x90 << 2)
label_28b4f4:
    if (ctx->pc == 0x28B4F4u) {
        ctx->pc = 0x28B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4F0u;
        // 0x28b4f4: 0x8c450084  lw          $a1, 0x84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B4F8u;
        goto label_28b4f8;
    }
    ctx->pc = 0x28B4F0u;
    {
        const bool branch_taken_0x28b4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4F0u;
        // 0x28b4f4: 0x8c450084  lw          $a1, 0x84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4f0) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B4F8u;
label_28b4f8:
    // 0x28b4f8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b4fc:
    // 0x28b4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b500:
    // 0x28b500: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b504:
    // 0x28b504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b508:
    // 0x28b508: 0x1000008a  b           . + 4 + (0x8A << 2)
label_28b50c:
    if (ctx->pc == 0x28B50Cu) {
        ctx->pc = 0x28B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B508u;
        // 0x28b50c: 0x8c450088  lw          $a1, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B510u;
        goto label_28b510;
    }
    ctx->pc = 0x28B508u;
    {
        const bool branch_taken_0x28b508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B508u;
        // 0x28b50c: 0x8c450088  lw          $a1, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b508) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B510u;
label_28b510:
    // 0x28b510: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b514:
    // 0x28b514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b518:
    // 0x28b518: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b51c:
    // 0x28b51c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b520:
    // 0x28b520: 0x10000084  b           . + 4 + (0x84 << 2)
label_28b524:
    if (ctx->pc == 0x28B524u) {
        ctx->pc = 0x28B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B520u;
        // 0x28b524: 0x8c45008c  lw          $a1, 0x8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B528u;
        goto label_28b528;
    }
    ctx->pc = 0x28B520u;
    {
        const bool branch_taken_0x28b520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B520u;
        // 0x28b524: 0x8c45008c  lw          $a1, 0x8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b520) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B528u;
label_28b528:
    // 0x28b528: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b52c:
    // 0x28b52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b530:
    // 0x28b530: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b534:
    // 0x28b534: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b538:
    // 0x28b538: 0x1000007e  b           . + 4 + (0x7E << 2)
label_28b53c:
    if (ctx->pc == 0x28B53Cu) {
        ctx->pc = 0x28B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B538u;
        // 0x28b53c: 0x8c450090  lw          $a1, 0x90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B540u;
        goto label_28b540;
    }
    ctx->pc = 0x28B538u;
    {
        const bool branch_taken_0x28b538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B538u;
        // 0x28b53c: 0x8c450090  lw          $a1, 0x90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b538) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B540u;
label_28b540:
    // 0x28b540: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b544:
    // 0x28b544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b548:
    // 0x28b548: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b54c:
    // 0x28b54c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b550:
    // 0x28b550: 0x10000078  b           . + 4 + (0x78 << 2)
label_28b554:
    if (ctx->pc == 0x28B554u) {
        ctx->pc = 0x28B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B550u;
        // 0x28b554: 0x8c450094  lw          $a1, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B558u;
        goto label_28b558;
    }
    ctx->pc = 0x28B550u;
    {
        const bool branch_taken_0x28b550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B550u;
        // 0x28b554: 0x8c450094  lw          $a1, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b550) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B558u;
label_28b558:
    // 0x28b558: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b55c:
    // 0x28b55c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b560:
    // 0x28b560: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b564:
    // 0x28b564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b568:
    // 0x28b568: 0x10000072  b           . + 4 + (0x72 << 2)
label_28b56c:
    if (ctx->pc == 0x28B56Cu) {
        ctx->pc = 0x28B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B568u;
        // 0x28b56c: 0x8c450098  lw          $a1, 0x98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B570u;
        goto label_28b570;
    }
    ctx->pc = 0x28B568u;
    {
        const bool branch_taken_0x28b568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B568u;
        // 0x28b56c: 0x8c450098  lw          $a1, 0x98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b568) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B570u;
label_28b570:
    // 0x28b570: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b574:
    // 0x28b574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b578:
    // 0x28b578: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b57c:
    // 0x28b57c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b57cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b580:
    // 0x28b580: 0x1000006c  b           . + 4 + (0x6C << 2)
label_28b584:
    if (ctx->pc == 0x28B584u) {
        ctx->pc = 0x28B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B580u;
        // 0x28b584: 0x8c45009c  lw          $a1, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B588u;
        goto label_28b588;
    }
    ctx->pc = 0x28B580u;
    {
        const bool branch_taken_0x28b580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B580u;
        // 0x28b584: 0x8c45009c  lw          $a1, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b580) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B588u;
label_28b588:
    // 0x28b588: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b58c:
    // 0x28b58c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b590:
    // 0x28b590: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b594:
    // 0x28b594: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b598:
    // 0x28b598: 0x10000066  b           . + 4 + (0x66 << 2)
label_28b59c:
    if (ctx->pc == 0x28B59Cu) {
        ctx->pc = 0x28B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B598u;
        // 0x28b59c: 0x8c4500a0  lw          $a1, 0xA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B5A0u;
        goto label_28b5a0;
    }
    ctx->pc = 0x28B598u;
    {
        const bool branch_taken_0x28b598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B598u;
        // 0x28b59c: 0x8c4500a0  lw          $a1, 0xA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b598) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B5A0u;
label_28b5a0:
    // 0x28b5a0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b5a4:
    // 0x28b5a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b5a8:
    // 0x28b5a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b5a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b5ac:
    // 0x28b5ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b5b0:
    // 0x28b5b0: 0x10000060  b           . + 4 + (0x60 << 2)
label_28b5b4:
    if (ctx->pc == 0x28B5B4u) {
        ctx->pc = 0x28B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5B0u;
        // 0x28b5b4: 0x8c4500a4  lw          $a1, 0xA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B5B8u;
        goto label_28b5b8;
    }
    ctx->pc = 0x28B5B0u;
    {
        const bool branch_taken_0x28b5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5B0u;
        // 0x28b5b4: 0x8c4500a4  lw          $a1, 0xA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5b0) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B5B8u;
label_28b5b8:
    // 0x28b5b8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b5bc:
    // 0x28b5bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b5c0:
    // 0x28b5c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b5c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b5c4:
    // 0x28b5c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b5c8:
    // 0x28b5c8: 0x1000005a  b           . + 4 + (0x5A << 2)
label_28b5cc:
    if (ctx->pc == 0x28B5CCu) {
        ctx->pc = 0x28B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5C8u;
        // 0x28b5cc: 0x8c4500a8  lw          $a1, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B5D0u;
        goto label_28b5d0;
    }
    ctx->pc = 0x28B5C8u;
    {
        const bool branch_taken_0x28b5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5C8u;
        // 0x28b5cc: 0x8c4500a8  lw          $a1, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5c8) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B5D0u;
label_28b5d0:
    // 0x28b5d0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b5d4:
    // 0x28b5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b5d8:
    // 0x28b5d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b5d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b5dc:
    // 0x28b5dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b5dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b5e0:
    // 0x28b5e0: 0x10000054  b           . + 4 + (0x54 << 2)
label_28b5e4:
    if (ctx->pc == 0x28B5E4u) {
        ctx->pc = 0x28B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5E0u;
        // 0x28b5e4: 0x8c4500ac  lw          $a1, 0xAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B5E8u;
        goto label_28b5e8;
    }
    ctx->pc = 0x28B5E0u;
    {
        const bool branch_taken_0x28b5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5E0u;
        // 0x28b5e4: 0x8c4500ac  lw          $a1, 0xAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5e0) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B5E8u;
label_28b5e8:
    // 0x28b5e8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b5ec:
    // 0x28b5ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b5f0:
    // 0x28b5f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b5f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b5f4:
    // 0x28b5f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b5f8:
    // 0x28b5f8: 0x1000004e  b           . + 4 + (0x4E << 2)
label_28b5fc:
    if (ctx->pc == 0x28B5FCu) {
        ctx->pc = 0x28B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5F8u;
        // 0x28b5fc: 0x8c4500b0  lw          $a1, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B600u;
        goto label_28b600;
    }
    ctx->pc = 0x28B5F8u;
    {
        const bool branch_taken_0x28b5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5F8u;
        // 0x28b5fc: 0x8c4500b0  lw          $a1, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5f8) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B600u;
label_28b600:
    // 0x28b600: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b604:
    // 0x28b604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b608:
    // 0x28b608: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b60c:
    // 0x28b60c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b610:
    // 0x28b610: 0x10000048  b           . + 4 + (0x48 << 2)
label_28b614:
    if (ctx->pc == 0x28B614u) {
        ctx->pc = 0x28B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B610u;
        // 0x28b614: 0x8c4500b4  lw          $a1, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B618u;
        goto label_28b618;
    }
    ctx->pc = 0x28B610u;
    {
        const bool branch_taken_0x28b610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B610u;
        // 0x28b614: 0x8c4500b4  lw          $a1, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b610) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B618u;
label_28b618:
    // 0x28b618: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b61c:
    // 0x28b61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b620:
    // 0x28b620: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b624:
    // 0x28b624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b628:
    // 0x28b628: 0x10000042  b           . + 4 + (0x42 << 2)
label_28b62c:
    if (ctx->pc == 0x28B62Cu) {
        ctx->pc = 0x28B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B628u;
        // 0x28b62c: 0x8c4500b8  lw          $a1, 0xB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B630u;
        goto label_28b630;
    }
    ctx->pc = 0x28B628u;
    {
        const bool branch_taken_0x28b628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B628u;
        // 0x28b62c: 0x8c4500b8  lw          $a1, 0xB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b628) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B630u;
label_28b630:
    // 0x28b630: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b634:
    // 0x28b634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b638:
    // 0x28b638: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b63c:
    // 0x28b63c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b640:
    // 0x28b640: 0x1000003c  b           . + 4 + (0x3C << 2)
label_28b644:
    if (ctx->pc == 0x28B644u) {
        ctx->pc = 0x28B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B640u;
        // 0x28b644: 0x8c4500bc  lw          $a1, 0xBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B648u;
        goto label_28b648;
    }
    ctx->pc = 0x28B640u;
    {
        const bool branch_taken_0x28b640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B640u;
        // 0x28b644: 0x8c4500bc  lw          $a1, 0xBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b640) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B648u;
label_28b648:
    // 0x28b648: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b64c:
    // 0x28b64c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b650:
    // 0x28b650: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b654:
    // 0x28b654: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b658:
    // 0x28b658: 0x10000036  b           . + 4 + (0x36 << 2)
label_28b65c:
    if (ctx->pc == 0x28B65Cu) {
        ctx->pc = 0x28B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B658u;
        // 0x28b65c: 0x8c4500c0  lw          $a1, 0xC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B660u;
        goto label_28b660;
    }
    ctx->pc = 0x28B658u;
    {
        const bool branch_taken_0x28b658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B658u;
        // 0x28b65c: 0x8c4500c0  lw          $a1, 0xC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b658) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B660u;
label_28b660:
    // 0x28b660: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b664:
    // 0x28b664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b668:
    // 0x28b668: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b66c:
    // 0x28b66c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b670:
    // 0x28b670: 0x10000030  b           . + 4 + (0x30 << 2)
label_28b674:
    if (ctx->pc == 0x28B674u) {
        ctx->pc = 0x28B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B670u;
        // 0x28b674: 0x8c4500c4  lw          $a1, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B678u;
        goto label_28b678;
    }
    ctx->pc = 0x28B670u;
    {
        const bool branch_taken_0x28b670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B670u;
        // 0x28b674: 0x8c4500c4  lw          $a1, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b670) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B678u;
label_28b678:
    // 0x28b678: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b67c:
    // 0x28b67c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b680:
    // 0x28b680: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b684:
    // 0x28b684: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b688:
    // 0x28b688: 0x1000002a  b           . + 4 + (0x2A << 2)
label_28b68c:
    if (ctx->pc == 0x28B68Cu) {
        ctx->pc = 0x28B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B688u;
        // 0x28b68c: 0x8c4500c8  lw          $a1, 0xC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B690u;
        goto label_28b690;
    }
    ctx->pc = 0x28B688u;
    {
        const bool branch_taken_0x28b688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B688u;
        // 0x28b68c: 0x8c4500c8  lw          $a1, 0xC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b688) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B690u;
label_28b690:
    // 0x28b690: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b694:
    // 0x28b694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b698:
    // 0x28b698: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b69c:
    // 0x28b69c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b6a0:
    // 0x28b6a0: 0x10000024  b           . + 4 + (0x24 << 2)
label_28b6a4:
    if (ctx->pc == 0x28B6A4u) {
        ctx->pc = 0x28B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6A0u;
        // 0x28b6a4: 0x8c4500cc  lw          $a1, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B6A8u;
        goto label_28b6a8;
    }
    ctx->pc = 0x28B6A0u;
    {
        const bool branch_taken_0x28b6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6A0u;
        // 0x28b6a4: 0x8c4500cc  lw          $a1, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b6a0) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B6A8u;
label_28b6a8:
    // 0x28b6a8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b6ac:
    // 0x28b6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b6b0:
    // 0x28b6b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b6b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b6b4:
    // 0x28b6b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b6b8:
    // 0x28b6b8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_28b6bc:
    if (ctx->pc == 0x28B6BCu) {
        ctx->pc = 0x28B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6B8u;
        // 0x28b6bc: 0x8c4500d0  lw          $a1, 0xD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B6C0u;
        goto label_28b6c0;
    }
    ctx->pc = 0x28B6B8u;
    {
        const bool branch_taken_0x28b6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6B8u;
        // 0x28b6bc: 0x8c4500d0  lw          $a1, 0xD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b6b8) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B6C0u;
label_28b6c0:
    // 0x28b6c0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b6c4:
    // 0x28b6c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b6c8:
    // 0x28b6c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b6c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b6cc:
    // 0x28b6cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b6ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b6d0:
    // 0x28b6d0: 0x10000018  b           . + 4 + (0x18 << 2)
label_28b6d4:
    if (ctx->pc == 0x28B6D4u) {
        ctx->pc = 0x28B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6D0u;
        // 0x28b6d4: 0x8c4500d4  lw          $a1, 0xD4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B6D8u;
        goto label_28b6d8;
    }
    ctx->pc = 0x28B6D0u;
    {
        const bool branch_taken_0x28b6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6D0u;
        // 0x28b6d4: 0x8c4500d4  lw          $a1, 0xD4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b6d0) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B6D8u;
label_28b6d8:
    // 0x28b6d8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b6dc:
    // 0x28b6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b6e0:
    // 0x28b6e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b6e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b6e4:
    // 0x28b6e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b6e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b6e8:
    // 0x28b6e8: 0x10000012  b           . + 4 + (0x12 << 2)
label_28b6ec:
    if (ctx->pc == 0x28B6ECu) {
        ctx->pc = 0x28B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6E8u;
        // 0x28b6ec: 0x8c4500d8  lw          $a1, 0xD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B6F0u;
        goto label_28b6f0;
    }
    ctx->pc = 0x28B6E8u;
    {
        const bool branch_taken_0x28b6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6E8u;
        // 0x28b6ec: 0x8c4500d8  lw          $a1, 0xD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b6e8) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B6F0u;
label_28b6f0:
    // 0x28b6f0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b6f4:
    // 0x28b6f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b6f8:
    // 0x28b6f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b6f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b6fc:
    // 0x28b6fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b700:
    // 0x28b700: 0x1000000c  b           . + 4 + (0xC << 2)
label_28b704:
    if (ctx->pc == 0x28B704u) {
        ctx->pc = 0x28B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B700u;
        // 0x28b704: 0x8c4500dc  lw          $a1, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B708u;
        goto label_28b708;
    }
    ctx->pc = 0x28B700u;
    {
        const bool branch_taken_0x28b700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B700u;
        // 0x28b704: 0x8c4500dc  lw          $a1, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b700) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B708u;
label_28b708:
    // 0x28b708: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b70c:
    // 0x28b70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b710:
    // 0x28b710: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b714:
    // 0x28b714: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b718:
    // 0x28b718: 0x10000006  b           . + 4 + (0x6 << 2)
label_28b71c:
    if (ctx->pc == 0x28B71Cu) {
        ctx->pc = 0x28B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B718u;
        // 0x28b71c: 0x8c4500e0  lw          $a1, 0xE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B720u;
        goto label_28b720;
    }
    ctx->pc = 0x28B718u;
    {
        const bool branch_taken_0x28b718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B718u;
        // 0x28b71c: 0x8c4500e0  lw          $a1, 0xE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b718) {
            ctx->pc = 0x28B734u;
            goto label_28b734;
        }
    }
    ctx->pc = 0x28B720u;
label_28b720:
    // 0x28b720: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b724:
    // 0x28b724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b728:
    // 0x28b728: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b72c:
    // 0x28b72c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b730:
    // 0x28b730: 0x8c4500e4  lw          $a1, 0xE4($v0)
    ctx->pc = 0x28b730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_28b734:
    // 0x28b734: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28b734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b738:
    // 0x28b738: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28b738u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b73c:
    // 0x28b73c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28b73cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b740:
    // 0x28b740: 0xc0aa15e  jal         func_2A8578
label_28b744:
    if (ctx->pc == 0x28B744u) {
        ctx->pc = 0x28B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B740u;
        // 0x28b744: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B748u;
        goto label_28b748;
    }
    ctx->pc = 0x28B740u;
    SET_GPR_U32(ctx, 31, 0x28B748u);
    ctx->pc = 0x28B744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B740u;
    // 0x28b744: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28B740u, 0x28B748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B748u;
label_28b748:
    // 0x28b748: 0x1000000b  b           . + 4 + (0xB << 2)
label_28b74c:
    if (ctx->pc == 0x28B74Cu) {
        ctx->pc = 0x28B750u;
        goto label_28b750;
    }
    ctx->pc = 0x28B748u;
    {
        const bool branch_taken_0x28b748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b748) {
            ctx->pc = 0x28B778u;
            goto label_28b778;
        }
    }
    ctx->pc = 0x28B750u;
label_28b750:
    // 0x28b750: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28b750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_28b754:
    // 0x28b754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b758:
    // 0x28b758: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28b758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28b75c:
    // 0x28b75c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b760:
    // 0x28b760: 0x8c4500e8  lw          $a1, 0xE8($v0)
    ctx->pc = 0x28b760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_28b764:
    // 0x28b764: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28b764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b768:
    // 0x28b768: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28b768u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b76c:
    // 0x28b76c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28b76cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b770:
    // 0x28b770: 0xc0aa15e  jal         func_2A8578
label_28b774:
    if (ctx->pc == 0x28B774u) {
        ctx->pc = 0x28B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B770u;
        // 0x28b774: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B778u;
        goto label_28b778;
    }
    ctx->pc = 0x28B770u;
    SET_GPR_U32(ctx, 31, 0x28B778u);
    ctx->pc = 0x28B774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B770u;
    // 0x28b774: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28B770u, 0x28B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B778u;
label_28b778:
    // 0x28b778: 0xc055f06  jal         func_157C18
label_28b77c:
    if (ctx->pc == 0x28B77Cu) {
        ctx->pc = 0x28B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B778u;
        // 0x28b77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B780u;
        goto label_28b780;
    }
    ctx->pc = 0x28B778u;
    SET_GPR_U32(ctx, 31, 0x28B780u);
    ctx->pc = 0x28B77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B778u;
    // 0x28b77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28B778u, 0x28B780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B780u;
label_28b780:
    // 0x28b780: 0xc0527ae  jal         func_149EB8
label_28b784:
    if (ctx->pc == 0x28B784u) {
        ctx->pc = 0x28B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B780u;
        // 0x28b784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B788u;
        goto label_28b788;
    }
    ctx->pc = 0x28B780u;
    SET_GPR_U32(ctx, 31, 0x28B788u);
    ctx->pc = 0x28B784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B780u;
    // 0x28b784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x28B780u, 0x28B788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B788u;
label_28b788:
    // 0x28b788: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28b788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b78c:
    // 0x28b78c: 0xc054a88  jal         func_152A20
label_28b790:
    if (ctx->pc == 0x28B790u) {
        ctx->pc = 0x28B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B78Cu;
        // 0x28b790: 0x26040448  addiu       $a0, $s0, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B794u;
        goto label_28b794;
    }
    ctx->pc = 0x28B78Cu;
    SET_GPR_U32(ctx, 31, 0x28B794u);
    ctx->pc = 0x28B790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B78Cu;
    // 0x28b790: 0x26040448  addiu       $a0, $s0, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x28B78Cu, 0x28B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B794u;
label_28b794:
    // 0x28b794: 0xc05280e  jal         func_14A038
label_28b798:
    if (ctx->pc == 0x28B798u) {
        ctx->pc = 0x28B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B794u;
        // 0x28b798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B79Cu;
        goto label_28b79c;
    }
    ctx->pc = 0x28B794u;
    SET_GPR_U32(ctx, 31, 0x28B79Cu);
    ctx->pc = 0x28B798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B794u;
    // 0x28b798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x28B794u, 0x28B79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B79Cu;
label_28b79c:
    // 0x28b79c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b7a0:
    // 0x28b7a0: 0xc05404a  jal         func_150128
label_28b7a4:
    if (ctx->pc == 0x28B7A4u) {
        ctx->pc = 0x28B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7A0u;
        // 0x28b7a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B7A8u;
        goto label_28b7a8;
    }
    ctx->pc = 0x28B7A0u;
    SET_GPR_U32(ctx, 31, 0x28B7A8u);
    ctx->pc = 0x28B7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B7A0u;
    // 0x28b7a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x28B7A0u, 0x28B7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7A8u;
label_28b7a8:
    // 0x28b7a8: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x28b7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
label_28b7ac:
    // 0x28b7ac: 0x26050670  addiu       $a1, $s0, 0x670
    ctx->pc = 0x28b7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
label_28b7b0:
    // 0x28b7b0: 0x24c63f68  addiu       $a2, $a2, 0x3F68
    ctx->pc = 0x28b7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16232));
label_28b7b4:
    // 0x28b7b4: 0xc053bd4  jal         func_14EF50
label_28b7b8:
    if (ctx->pc == 0x28B7B8u) {
        ctx->pc = 0x28B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7B4u;
        // 0x28b7b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B7BCu;
        goto label_28b7bc;
    }
    ctx->pc = 0x28B7B4u;
    SET_GPR_U32(ctx, 31, 0x28B7BCu);
    ctx->pc = 0x28B7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B7B4u;
    // 0x28b7b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF50u, 0x28B7B4u, 0x28B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7BCu;
label_28b7bc:
    // 0x28b7bc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28b7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28b7c0:
    // 0x28b7c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b7c4:
    // 0x28b7c4: 0xc052dcc  jal         func_14B730
label_28b7c8:
    if (ctx->pc == 0x28B7C8u) {
        ctx->pc = 0x28B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7C4u;
        // 0x28b7c8: 0x24a58f38  addiu       $a1, $a1, -0x70C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B7CCu;
        goto label_28b7cc;
    }
    ctx->pc = 0x28B7C4u;
    SET_GPR_U32(ctx, 31, 0x28B7CCu);
    ctx->pc = 0x28B7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B7C4u;
    // 0x28b7c8: 0x24a58f38  addiu       $a1, $a1, -0x70C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28B7C4u, 0x28B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7CCu;
label_28b7cc:
    // 0x28b7cc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28b7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28b7d0:
    // 0x28b7d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b7d4:
    // 0x28b7d4: 0x24a58f40  addiu       $a1, $a1, -0x70C0
    ctx->pc = 0x28b7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938432));
label_28b7d8:
    // 0x28b7d8: 0xc052dcc  jal         func_14B730
label_28b7dc:
    if (ctx->pc == 0x28B7DCu) {
        ctx->pc = 0x28B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7D8u;
        // 0x28b7dc: 0xae021550  sw          $v0, 0x1550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B7E0u;
        goto label_28b7e0;
    }
    ctx->pc = 0x28B7D8u;
    SET_GPR_U32(ctx, 31, 0x28B7E0u);
    ctx->pc = 0x28B7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B7D8u;
    // 0x28b7dc: 0xae021550  sw          $v0, 0x1550($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5456), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28B7D8u, 0x28B7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7E0u;
label_28b7e0:
    // 0x28b7e0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28b7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28b7e4:
    // 0x28b7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b7e8:
    // 0x28b7e8: 0x24a58f48  addiu       $a1, $a1, -0x70B8
    ctx->pc = 0x28b7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938440));
label_28b7ec:
    // 0x28b7ec: 0xc052dcc  jal         func_14B730
label_28b7f0:
    if (ctx->pc == 0x28B7F0u) {
        ctx->pc = 0x28B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7ECu;
        // 0x28b7f0: 0xae021554  sw          $v0, 0x1554($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B7F4u;
        goto label_28b7f4;
    }
    ctx->pc = 0x28B7ECu;
    SET_GPR_U32(ctx, 31, 0x28B7F4u);
    ctx->pc = 0x28B7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B7ECu;
    // 0x28b7f0: 0xae021554  sw          $v0, 0x1554($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5460), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28B7ECu, 0x28B7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7F4u;
label_28b7f4:
    // 0x28b7f4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28b7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28b7f8:
    // 0x28b7f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b7fc:
    // 0x28b7fc: 0x24a58f50  addiu       $a1, $a1, -0x70B0
    ctx->pc = 0x28b7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938448));
label_28b800:
    // 0x28b800: 0xc052dcc  jal         func_14B730
label_28b804:
    if (ctx->pc == 0x28B804u) {
        ctx->pc = 0x28B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B800u;
        // 0x28b804: 0xae021558  sw          $v0, 0x1558($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B808u;
        goto label_28b808;
    }
    ctx->pc = 0x28B800u;
    SET_GPR_U32(ctx, 31, 0x28B808u);
    ctx->pc = 0x28B804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B800u;
    // 0x28b804: 0xae021558  sw          $v0, 0x1558($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5464), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28B800u, 0x28B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B808u;
label_28b808:
    // 0x28b808: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28b808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28b80c:
    // 0x28b80c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b810:
    // 0x28b810: 0x24a58f58  addiu       $a1, $a1, -0x70A8
    ctx->pc = 0x28b810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938456));
label_28b814:
    // 0x28b814: 0xc052dcc  jal         func_14B730
label_28b818:
    if (ctx->pc == 0x28B818u) {
        ctx->pc = 0x28B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B814u;
        // 0x28b818: 0xae02155c  sw          $v0, 0x155C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B81Cu;
        goto label_28b81c;
    }
    ctx->pc = 0x28B814u;
    SET_GPR_U32(ctx, 31, 0x28B81Cu);
    ctx->pc = 0x28B818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B814u;
    // 0x28b818: 0xae02155c  sw          $v0, 0x155C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28B814u, 0x28B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B81Cu;
label_28b81c:
    // 0x28b81c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28b81cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28b820:
    // 0x28b820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b824:
    // 0x28b824: 0x24a58f60  addiu       $a1, $a1, -0x70A0
    ctx->pc = 0x28b824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938464));
label_28b828:
    // 0x28b828: 0xc052dcc  jal         func_14B730
label_28b82c:
    if (ctx->pc == 0x28B82Cu) {
        ctx->pc = 0x28B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B828u;
        // 0x28b82c: 0xae021560  sw          $v0, 0x1560($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B830u;
        goto label_28b830;
    }
    ctx->pc = 0x28B828u;
    SET_GPR_U32(ctx, 31, 0x28B830u);
    ctx->pc = 0x28B82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B828u;
    // 0x28b82c: 0xae021560  sw          $v0, 0x1560($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5472), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28B828u, 0x28B830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B830u;
label_28b830:
    // 0x28b830: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28b830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28b834:
    // 0x28b834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b838:
    // 0x28b838: 0x24a58f68  addiu       $a1, $a1, -0x7098
    ctx->pc = 0x28b838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938472));
label_28b83c:
    // 0x28b83c: 0xc052dcc  jal         func_14B730
label_28b840:
    if (ctx->pc == 0x28B840u) {
        ctx->pc = 0x28B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B83Cu;
        // 0x28b840: 0xae021564  sw          $v0, 0x1564($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B844u;
        goto label_28b844;
    }
    ctx->pc = 0x28B83Cu;
    SET_GPR_U32(ctx, 31, 0x28B844u);
    ctx->pc = 0x28B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B83Cu;
    // 0x28b840: 0xae021564  sw          $v0, 0x1564($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5476), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28B83Cu, 0x28B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B844u;
label_28b844:
    // 0x28b844: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28b844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28b848:
    // 0x28b848: 0xae021568  sw          $v0, 0x1568($s0)
    ctx->pc = 0x28b848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5480), GPR_U32(ctx, 2));
label_28b84c:
    // 0x28b84c: 0x24a58f70  addiu       $a1, $a1, -0x7090
    ctx->pc = 0x28b84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938480));
label_28b850:
    // 0x28b850: 0xc052dcc  jal         func_14B730
label_28b854:
    if (ctx->pc == 0x28B854u) {
        ctx->pc = 0x28B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B850u;
        // 0x28b854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B858u;
        goto label_28b858;
    }
    ctx->pc = 0x28B850u;
    SET_GPR_U32(ctx, 31, 0x28B858u);
    ctx->pc = 0x28B854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B850u;
    // 0x28b854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28B850u, 0x28B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B858u;
label_28b858:
    // 0x28b858: 0x8e031550  lw          $v1, 0x1550($s0)
    ctx->pc = 0x28b858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5456)));
label_28b85c:
    // 0x28b85c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28b860:
    if (ctx->pc == 0x28B860u) {
        ctx->pc = 0x28B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B85Cu;
        // 0x28b860: 0xae02156c  sw          $v0, 0x156C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B864u;
        goto label_28b864;
    }
    ctx->pc = 0x28B85Cu;
    {
        const bool branch_taken_0x28b85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B85Cu;
        // 0x28b860: 0xae02156c  sw          $v0, 0x156C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b85c) {
            ctx->pc = 0x28B870u;
            goto label_28b870;
        }
    }
    ctx->pc = 0x28B864u;
label_28b864:
    // 0x28b864: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28b864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_28b868:
    // 0x28b868: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28b868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28b86c:
    // 0x28b86c: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28b86cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_28b870:
    // 0x28b870: 0x8e031558  lw          $v1, 0x1558($s0)
    ctx->pc = 0x28b870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5464)));
label_28b874:
    // 0x28b874: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_28b878:
    if (ctx->pc == 0x28B878u) {
        ctx->pc = 0x28B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B874u;
        // 0x28b878: 0x8e03155c  lw          $v1, 0x155C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B87Cu;
        goto label_28b87c;
    }
    ctx->pc = 0x28B874u;
    {
        const bool branch_taken_0x28b874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b874) {
            ctx->pc = 0x28B878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B874u;
            // 0x28b878: 0x8e03155c  lw          $v1, 0x155C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B88Cu;
            goto label_28b88c;
        }
    }
    ctx->pc = 0x28B87Cu;
label_28b87c:
    // 0x28b87c: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_28b880:
    // 0x28b880: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28b880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28b884:
    // 0x28b884: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28b884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_28b888:
    // 0x28b888: 0x8e03155c  lw          $v1, 0x155C($s0)
    ctx->pc = 0x28b888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5468)));
label_28b88c:
    // 0x28b88c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_28b890:
    if (ctx->pc == 0x28B890u) {
        ctx->pc = 0x28B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B88Cu;
        // 0x28b890: 0x8e031560  lw          $v1, 0x1560($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B894u;
        goto label_28b894;
    }
    ctx->pc = 0x28B88Cu;
    {
        const bool branch_taken_0x28b88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b88c) {
            ctx->pc = 0x28B890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B88Cu;
            // 0x28b890: 0x8e031560  lw          $v1, 0x1560($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B8A4u;
            goto label_28b8a4;
        }
    }
    ctx->pc = 0x28B894u;
label_28b894:
    // 0x28b894: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28b894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_28b898:
    // 0x28b898: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28b898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28b89c:
    // 0x28b89c: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28b89cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_28b8a0:
    // 0x28b8a0: 0x8e031560  lw          $v1, 0x1560($s0)
    ctx->pc = 0x28b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5472)));
label_28b8a4:
    // 0x28b8a4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_28b8a8:
    if (ctx->pc == 0x28B8A8u) {
        ctx->pc = 0x28B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8A4u;
        // 0x28b8a8: 0x8e031568  lw          $v1, 0x1568($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B8ACu;
        goto label_28b8ac;
    }
    ctx->pc = 0x28B8A4u;
    {
        const bool branch_taken_0x28b8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b8a4) {
            ctx->pc = 0x28B8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B8A4u;
            // 0x28b8a8: 0x8e031568  lw          $v1, 0x1568($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B8BCu;
            goto label_28b8bc;
        }
    }
    ctx->pc = 0x28B8ACu;
label_28b8ac:
    // 0x28b8ac: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_28b8b0:
    // 0x28b8b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28b8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28b8b4:
    // 0x28b8b4: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_28b8b8:
    // 0x28b8b8: 0x8e031568  lw          $v1, 0x1568($s0)
    ctx->pc = 0x28b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5480)));
label_28b8bc:
    // 0x28b8bc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_28b8c0:
    if (ctx->pc == 0x28B8C0u) {
        ctx->pc = 0x28B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8BCu;
        // 0x28b8c0: 0x8e03156c  lw          $v1, 0x156C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B8C4u;
        goto label_28b8c4;
    }
    ctx->pc = 0x28B8BCu;
    {
        const bool branch_taken_0x28b8bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b8bc) {
            ctx->pc = 0x28B8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B8BCu;
            // 0x28b8c0: 0x8e03156c  lw          $v1, 0x156C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B8D4u;
            goto label_28b8d4;
        }
    }
    ctx->pc = 0x28B8C4u;
label_28b8c4:
    // 0x28b8c4: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_28b8c8:
    // 0x28b8c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28b8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28b8cc:
    // 0x28b8cc: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_28b8d0:
    // 0x28b8d0: 0x8e03156c  lw          $v1, 0x156C($s0)
    ctx->pc = 0x28b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5484)));
label_28b8d4:
    // 0x28b8d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28b8d8:
    if (ctx->pc == 0x28B8D8u) {
        ctx->pc = 0x28B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8D4u;
        // 0x28b8d8: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B8DCu;
        goto label_28b8dc;
    }
    ctx->pc = 0x28B8D4u;
    {
        const bool branch_taken_0x28b8d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8D4u;
        // 0x28b8d8: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8d4) {
            ctx->pc = 0x28B8E8u;
            goto label_28b8e8;
        }
    }
    ctx->pc = 0x28B8DCu;
label_28b8dc:
    // 0x28b8dc: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_28b8e0:
    // 0x28b8e0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28b8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28b8e4:
    // 0x28b8e4: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_28b8e8:
    // 0x28b8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b8ec:
    // 0x28b8ec: 0xc052dcc  jal         func_14B730
label_28b8f0:
    if (ctx->pc == 0x28B8F0u) {
        ctx->pc = 0x28B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8ECu;
        // 0x28b8f0: 0x24a58f78  addiu       $a1, $a1, -0x7088 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B8F4u;
        goto label_28b8f4;
    }
    ctx->pc = 0x28B8ECu;
    SET_GPR_U32(ctx, 31, 0x28B8F4u);
    ctx->pc = 0x28B8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B8ECu;
    // 0x28b8f0: 0x24a58f78  addiu       $a1, $a1, -0x7088 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28B8ECu, 0x28B8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B8F4u;
label_28b8f4:
    // 0x28b8f4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28b8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28b8f8:
    // 0x28b8f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b8fc:
    // 0x28b8fc: 0x24a58f80  addiu       $a1, $a1, -0x7080
    ctx->pc = 0x28b8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938496));
label_28b900:
    // 0x28b900: 0xc052dcc  jal         func_14B730
label_28b904:
    if (ctx->pc == 0x28B904u) {
        ctx->pc = 0x28B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B900u;
        // 0x28b904: 0xae021570  sw          $v0, 0x1570($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B908u;
        goto label_28b908;
    }
    ctx->pc = 0x28B900u;
    SET_GPR_U32(ctx, 31, 0x28B908u);
    ctx->pc = 0x28B904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B900u;
    // 0x28b904: 0xae021570  sw          $v0, 0x1570($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5488), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28B900u, 0x28B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B908u;
label_28b908:
    // 0x28b908: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28b908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28b90c:
    // 0x28b90c: 0xae021574  sw          $v0, 0x1574($s0)
    ctx->pc = 0x28b90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5492), GPR_U32(ctx, 2));
label_28b910:
    // 0x28b910: 0x24a58f90  addiu       $a1, $a1, -0x7070
    ctx->pc = 0x28b910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938512));
label_28b914:
    // 0x28b914: 0xc052dcc  jal         func_14B730
label_28b918:
    if (ctx->pc == 0x28B918u) {
        ctx->pc = 0x28B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B914u;
        // 0x28b918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B91Cu;
        goto label_28b91c;
    }
    ctx->pc = 0x28B914u;
    SET_GPR_U32(ctx, 31, 0x28B91Cu);
    ctx->pc = 0x28B918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B914u;
    // 0x28b918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28B914u, 0x28B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B91Cu;
label_28b91c:
    // 0x28b91c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28b91cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b920:
    // 0x28b920: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28b924:
    if (ctx->pc == 0x28B924u) {
        ctx->pc = 0x28B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B920u;
        // 0x28b924: 0xae031578  sw          $v1, 0x1578($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B928u;
        goto label_28b928;
    }
    ctx->pc = 0x28B920u;
    {
        const bool branch_taken_0x28b920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B920u;
        // 0x28b924: 0xae031578  sw          $v1, 0x1578($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b920) {
            ctx->pc = 0x28B934u;
            goto label_28b934;
        }
    }
    ctx->pc = 0x28B928u;
label_28b928:
    // 0x28b928: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28b928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_28b92c:
    // 0x28b92c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28b92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28b930:
    // 0x28b930: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28b930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_28b934:
    // 0x28b934: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28b934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28b938:
    // 0x28b938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b93c:
    // 0x28b93c: 0xc052dcc  jal         func_14B730
label_28b940:
    if (ctx->pc == 0x28B940u) {
        ctx->pc = 0x28B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B93Cu;
        // 0x28b940: 0x24a58f98  addiu       $a1, $a1, -0x7068 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B944u;
        goto label_28b944;
    }
    ctx->pc = 0x28B93Cu;
    SET_GPR_U32(ctx, 31, 0x28B944u);
    ctx->pc = 0x28B940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B93Cu;
    // 0x28b940: 0x24a58f98  addiu       $a1, $a1, -0x7068 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28B93Cu, 0x28B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B944u;
label_28b944:
    // 0x28b944: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x28b944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_28b948:
    // 0x28b948: 0xae021580  sw          $v0, 0x1580($s0)
    ctx->pc = 0x28b948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5504), GPR_U32(ctx, 2));
label_28b94c:
    // 0x28b94c: 0x2463fdff  addiu       $v1, $v1, -0x201
    ctx->pc = 0x28b94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966783));
label_28b950:
    // 0x28b950: 0x2c620056  sltiu       $v0, $v1, 0x56
    ctx->pc = 0x28b950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)86) ? 1 : 0);
label_28b954:
    // 0x28b954: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_28b958:
    if (ctx->pc == 0x28B958u) {
        ctx->pc = 0x28B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B954u;
        // 0x28b958: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B95Cu;
        goto label_28b95c;
    }
    ctx->pc = 0x28B954u;
    {
        const bool branch_taken_0x28b954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B954u;
        // 0x28b958: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b954) {
            ctx->pc = 0x28BAD8u;
            goto label_28bad8;
        }
    }
    ctx->pc = 0x28B95Cu;
label_28b95c:
    // 0x28b95c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28b960:
    // 0x28b960: 0x24429260  addiu       $v0, $v0, -0x6DA0
    ctx->pc = 0x28b960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939232));
label_28b964:
    // 0x28b964: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28b964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28b968:
    // 0x28b968: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28b968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28b96c:
    // 0x28b96c: 0x800008  jr          $a0
label_28b970:
    if (ctx->pc == 0x28B970u) {
        ctx->pc = 0x28B974u;
        goto label_28b974;
    }
    ctx->pc = 0x28B96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B974u: goto label_28b974;
            case 0x28B9CCu: goto label_28b9cc;
            case 0x28B9DCu: goto label_28b9dc;
            case 0x28BA34u: goto label_28ba34;
            case 0x28BA44u: goto label_28ba44;
            case 0x28BA54u: goto label_28ba54;
            case 0x28BAACu: goto label_28baac;
            case 0x28BAD8u: goto label_28bad8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B96Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B974u;
label_28b974:
    // 0x28b974: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28b974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28b978:
    // 0x28b978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b97c:
    // 0x28b97c: 0xc052dcc  jal         func_14B730
label_28b980:
    if (ctx->pc == 0x28B980u) {
        ctx->pc = 0x28B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B97Cu;
        // 0x28b980: 0x24a58fa0  addiu       $a1, $a1, -0x7060 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B984u;
        goto label_28b984;
    }
    ctx->pc = 0x28B97Cu;
    SET_GPR_U32(ctx, 31, 0x28B984u);
    ctx->pc = 0x28B980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B97Cu;
    // 0x28b980: 0x24a58fa0  addiu       $a1, $a1, -0x7060 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28B97Cu, 0x28B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B984u;
label_28b984:
    // 0x28b984: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28b984u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b988:
    // 0x28b988: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28b98c:
    if (ctx->pc == 0x28B98Cu) {
        ctx->pc = 0x28B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B988u;
        // 0x28b98c: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B990u;
        goto label_28b990;
    }
    ctx->pc = 0x28B988u;
    {
        const bool branch_taken_0x28b988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B988u;
        // 0x28b98c: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b988) {
            ctx->pc = 0x28B99Cu;
            goto label_28b99c;
        }
    }
    ctx->pc = 0x28B990u;
label_28b990:
    // 0x28b990: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_28b994:
    // 0x28b994: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28b994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28b998:
    // 0x28b998: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28b998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_28b99c:
    // 0x28b99c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b9a0:
    // 0x28b9a0: 0xc052dcc  jal         func_14B730
label_28b9a4:
    if (ctx->pc == 0x28B9A4u) {
        ctx->pc = 0x28B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9A0u;
        // 0x28b9a4: 0x24a58fa8  addiu       $a1, $a1, -0x7058 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9A8u;
        goto label_28b9a8;
    }
    ctx->pc = 0x28B9A0u;
    SET_GPR_U32(ctx, 31, 0x28B9A8u);
    ctx->pc = 0x28B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9A0u;
    // 0x28b9a4: 0x24a58fa8  addiu       $a1, $a1, -0x7058 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28B9A0u, 0x28B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B9A8u;
label_28b9a8:
    // 0x28b9a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28b9a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b9ac:
    // 0x28b9ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28b9b0:
    if (ctx->pc == 0x28B9B0u) {
        ctx->pc = 0x28B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9ACu;
        // 0x28b9b0: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9B4u;
        goto label_28b9b4;
    }
    ctx->pc = 0x28B9ACu;
    {
        const bool branch_taken_0x28b9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9ACu;
        // 0x28b9b0: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9ac) {
            ctx->pc = 0x28B9C0u;
            goto label_28b9c0;
        }
    }
    ctx->pc = 0x28B9B4u;
label_28b9b4:
    // 0x28b9b4: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_28b9b8:
    // 0x28b9b8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28b9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28b9bc:
    // 0x28b9bc: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_28b9c0:
    // 0x28b9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b9c4:
    // 0x28b9c4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_28b9c8:
    if (ctx->pc == 0x28B9C8u) {
        ctx->pc = 0x28B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9C4u;
        // 0x28b9c8: 0x24a58fb8  addiu       $a1, $a1, -0x7048 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9CCu;
        goto label_28b9cc;
    }
    ctx->pc = 0x28B9C4u;
    {
        const bool branch_taken_0x28b9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9C4u;
        // 0x28b9c8: 0x24a58fb8  addiu       $a1, $a1, -0x7048 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9c4) {
            ctx->pc = 0x28BAB8u;
            goto label_28bab8;
        }
    }
    ctx->pc = 0x28B9CCu;
label_28b9cc:
    // 0x28b9cc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28b9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28b9d0:
    // 0x28b9d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b9d4:
    // 0x28b9d4: 0x10000038  b           . + 4 + (0x38 << 2)
label_28b9d8:
    if (ctx->pc == 0x28B9D8u) {
        ctx->pc = 0x28B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9D4u;
        // 0x28b9d8: 0x24a58fb8  addiu       $a1, $a1, -0x7048 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9DCu;
        goto label_28b9dc;
    }
    ctx->pc = 0x28B9D4u;
    {
        const bool branch_taken_0x28b9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9D4u;
        // 0x28b9d8: 0x24a58fb8  addiu       $a1, $a1, -0x7048 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9d4) {
            ctx->pc = 0x28BAB8u;
            goto label_28bab8;
        }
    }
    ctx->pc = 0x28B9DCu;
label_28b9dc:
    // 0x28b9dc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28b9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28b9e0:
    // 0x28b9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b9e4:
    // 0x28b9e4: 0xc052dcc  jal         func_14B730
label_28b9e8:
    if (ctx->pc == 0x28B9E8u) {
        ctx->pc = 0x28B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9E4u;
        // 0x28b9e8: 0x24a58fc0  addiu       $a1, $a1, -0x7040 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9ECu;
        goto label_28b9ec;
    }
    ctx->pc = 0x28B9E4u;
    SET_GPR_U32(ctx, 31, 0x28B9ECu);
    ctx->pc = 0x28B9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9E4u;
    // 0x28b9e8: 0x24a58fc0  addiu       $a1, $a1, -0x7040 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28B9E4u, 0x28B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B9ECu;
label_28b9ec:
    // 0x28b9ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28b9ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b9f0:
    // 0x28b9f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28b9f4:
    if (ctx->pc == 0x28B9F4u) {
        ctx->pc = 0x28B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9F0u;
        // 0x28b9f4: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B9F8u;
        goto label_28b9f8;
    }
    ctx->pc = 0x28B9F0u;
    {
        const bool branch_taken_0x28b9f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9F0u;
        // 0x28b9f4: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9f0) {
            ctx->pc = 0x28BA04u;
            goto label_28ba04;
        }
    }
    ctx->pc = 0x28B9F8u;
label_28b9f8:
    // 0x28b9f8: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_28b9fc:
    // 0x28b9fc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28b9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28ba00:
    // 0x28ba00: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_28ba04:
    // 0x28ba04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ba08:
    // 0x28ba08: 0xc052dcc  jal         func_14B730
label_28ba0c:
    if (ctx->pc == 0x28BA0Cu) {
        ctx->pc = 0x28BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA08u;
        // 0x28ba0c: 0x24a58fc8  addiu       $a1, $a1, -0x7038 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA10u;
        goto label_28ba10;
    }
    ctx->pc = 0x28BA08u;
    SET_GPR_U32(ctx, 31, 0x28BA10u);
    ctx->pc = 0x28BA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA08u;
    // 0x28ba0c: 0x24a58fc8  addiu       $a1, $a1, -0x7038 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28BA08u, 0x28BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA10u;
label_28ba10:
    // 0x28ba10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28ba10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ba14:
    // 0x28ba14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28ba18:
    if (ctx->pc == 0x28BA18u) {
        ctx->pc = 0x28BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA14u;
        // 0x28ba18: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA1Cu;
        goto label_28ba1c;
    }
    ctx->pc = 0x28BA14u;
    {
        const bool branch_taken_0x28ba14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA14u;
        // 0x28ba18: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba14) {
            ctx->pc = 0x28BA28u;
            goto label_28ba28;
        }
    }
    ctx->pc = 0x28BA1Cu;
label_28ba1c:
    // 0x28ba1c: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_28ba20:
    // 0x28ba20: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28ba20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28ba24:
    // 0x28ba24: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28ba24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_28ba28:
    // 0x28ba28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ba28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ba2c:
    // 0x28ba2c: 0x10000022  b           . + 4 + (0x22 << 2)
label_28ba30:
    if (ctx->pc == 0x28BA30u) {
        ctx->pc = 0x28BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA2Cu;
        // 0x28ba30: 0x24a58fd8  addiu       $a1, $a1, -0x7028 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA34u;
        goto label_28ba34;
    }
    ctx->pc = 0x28BA2Cu;
    {
        const bool branch_taken_0x28ba2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA2Cu;
        // 0x28ba30: 0x24a58fd8  addiu       $a1, $a1, -0x7028 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba2c) {
            ctx->pc = 0x28BAB8u;
            goto label_28bab8;
        }
    }
    ctx->pc = 0x28BA34u;
label_28ba34:
    // 0x28ba34: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28ba34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28ba38:
    // 0x28ba38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ba38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ba3c:
    // 0x28ba3c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_28ba40:
    if (ctx->pc == 0x28BA40u) {
        ctx->pc = 0x28BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA3Cu;
        // 0x28ba40: 0x24a58fd8  addiu       $a1, $a1, -0x7028 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA44u;
        goto label_28ba44;
    }
    ctx->pc = 0x28BA3Cu;
    {
        const bool branch_taken_0x28ba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA3Cu;
        // 0x28ba40: 0x24a58fd8  addiu       $a1, $a1, -0x7028 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba3c) {
            ctx->pc = 0x28BAB8u;
            goto label_28bab8;
        }
    }
    ctx->pc = 0x28BA44u;
label_28ba44:
    // 0x28ba44: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28ba44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28ba48:
    // 0x28ba48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ba48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ba4c:
    // 0x28ba4c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_28ba50:
    if (ctx->pc == 0x28BA50u) {
        ctx->pc = 0x28BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA4Cu;
        // 0x28ba50: 0x24a58fe8  addiu       $a1, $a1, -0x7018 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA54u;
        goto label_28ba54;
    }
    ctx->pc = 0x28BA4Cu;
    {
        const bool branch_taken_0x28ba4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA4Cu;
        // 0x28ba50: 0x24a58fe8  addiu       $a1, $a1, -0x7018 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba4c) {
            ctx->pc = 0x28BAB8u;
            goto label_28bab8;
        }
    }
    ctx->pc = 0x28BA54u;
label_28ba54:
    // 0x28ba54: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28ba54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28ba58:
    // 0x28ba58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ba58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ba5c:
    // 0x28ba5c: 0xc052dcc  jal         func_14B730
label_28ba60:
    if (ctx->pc == 0x28BA60u) {
        ctx->pc = 0x28BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA5Cu;
        // 0x28ba60: 0x24a58ff0  addiu       $a1, $a1, -0x7010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA64u;
        goto label_28ba64;
    }
    ctx->pc = 0x28BA5Cu;
    SET_GPR_U32(ctx, 31, 0x28BA64u);
    ctx->pc = 0x28BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA5Cu;
    // 0x28ba60: 0x24a58ff0  addiu       $a1, $a1, -0x7010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28BA5Cu, 0x28BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA64u;
label_28ba64:
    // 0x28ba64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28ba64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ba68:
    // 0x28ba68: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28ba6c:
    if (ctx->pc == 0x28BA6Cu) {
        ctx->pc = 0x28BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA68u;
        // 0x28ba6c: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA70u;
        goto label_28ba70;
    }
    ctx->pc = 0x28BA68u;
    {
        const bool branch_taken_0x28ba68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA68u;
        // 0x28ba6c: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba68) {
            ctx->pc = 0x28BA7Cu;
            goto label_28ba7c;
        }
    }
    ctx->pc = 0x28BA70u;
label_28ba70:
    // 0x28ba70: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_28ba74:
    // 0x28ba74: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28ba74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28ba78:
    // 0x28ba78: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28ba78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_28ba7c:
    // 0x28ba7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ba7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ba80:
    // 0x28ba80: 0xc052dcc  jal         func_14B730
label_28ba84:
    if (ctx->pc == 0x28BA84u) {
        ctx->pc = 0x28BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA80u;
        // 0x28ba84: 0x24a58ff8  addiu       $a1, $a1, -0x7008 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA88u;
        goto label_28ba88;
    }
    ctx->pc = 0x28BA80u;
    SET_GPR_U32(ctx, 31, 0x28BA88u);
    ctx->pc = 0x28BA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA80u;
    // 0x28ba84: 0x24a58ff8  addiu       $a1, $a1, -0x7008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28BA80u, 0x28BA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA88u;
label_28ba88:
    // 0x28ba88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28ba88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ba8c:
    // 0x28ba8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28ba90:
    if (ctx->pc == 0x28BA90u) {
        ctx->pc = 0x28BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA8Cu;
        // 0x28ba90: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BA94u;
        goto label_28ba94;
    }
    ctx->pc = 0x28BA8Cu;
    {
        const bool branch_taken_0x28ba8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA8Cu;
        // 0x28ba90: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba8c) {
            ctx->pc = 0x28BAA0u;
            goto label_28baa0;
        }
    }
    ctx->pc = 0x28BA94u;
label_28ba94:
    // 0x28ba94: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_28ba98:
    // 0x28ba98: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28ba98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28ba9c:
    // 0x28ba9c: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_28baa0:
    // 0x28baa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28baa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28baa4:
    // 0x28baa4: 0x10000004  b           . + 4 + (0x4 << 2)
label_28baa8:
    if (ctx->pc == 0x28BAA8u) {
        ctx->pc = 0x28BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAA4u;
        // 0x28baa8: 0x24a59000  addiu       $a1, $a1, -0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BAACu;
        goto label_28baac;
    }
    ctx->pc = 0x28BAA4u;
    {
        const bool branch_taken_0x28baa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAA4u;
        // 0x28baa8: 0x24a59000  addiu       $a1, $a1, -0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28baa4) {
            ctx->pc = 0x28BAB8u;
            goto label_28bab8;
        }
    }
    ctx->pc = 0x28BAACu;
label_28baac:
    // 0x28baac: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28baacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28bab0:
    // 0x28bab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bab4:
    // 0x28bab4: 0x24a58ff0  addiu       $a1, $a1, -0x7010
    ctx->pc = 0x28bab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938608));
label_28bab8:
    // 0x28bab8: 0xc052dcc  jal         func_14B730
label_28babc:
    if (ctx->pc == 0x28BABCu) {
        ctx->pc = 0x28BAC0u;
        goto label_28bac0;
    }
    ctx->pc = 0x28BAB8u;
    SET_GPR_U32(ctx, 31, 0x28BAC0u);
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28BAB8u, 0x28BAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BAC0u;
label_28bac0:
    // 0x28bac0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28bac0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bac4:
    // 0x28bac4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_28bac8:
    if (ctx->pc == 0x28BAC8u) {
        ctx->pc = 0x28BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAC4u;
        // 0x28bac8: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BACCu;
        goto label_28bacc;
    }
    ctx->pc = 0x28BAC4u;
    {
        const bool branch_taken_0x28bac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bac4) {
            ctx->pc = 0x28BAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BAC4u;
            // 0x28bac8: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BADCu;
            goto label_28badc;
        }
    }
    ctx->pc = 0x28BACCu;
label_28bacc:
    // 0x28bacc: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28baccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_28bad0:
    // 0x28bad0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28bad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28bad4:
    // 0x28bad4: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28bad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_28bad8:
    // 0x28bad8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28bad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28badc:
    // 0x28badc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28badcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bae0:
    // 0x28bae0: 0xc052dcc  jal         func_14B730
label_28bae4:
    if (ctx->pc == 0x28BAE4u) {
        ctx->pc = 0x28BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAE0u;
        // 0x28bae4: 0x24a59008  addiu       $a1, $a1, -0x6FF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BAE8u;
        goto label_28bae8;
    }
    ctx->pc = 0x28BAE0u;
    SET_GPR_U32(ctx, 31, 0x28BAE8u);
    ctx->pc = 0x28BAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BAE0u;
    // 0x28bae4: 0x24a59008  addiu       $a1, $a1, -0x6FF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28BAE0u, 0x28BAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BAE8u;
label_28bae8:
    // 0x28bae8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28bae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28baec:
    // 0x28baec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28baf0:
    if (ctx->pc == 0x28BAF0u) {
        ctx->pc = 0x28BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAECu;
        // 0x28baf0: 0xae031584  sw          $v1, 0x1584($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5508), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BAF4u;
        goto label_28baf4;
    }
    ctx->pc = 0x28BAECu;
    {
        const bool branch_taken_0x28baec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAECu;
        // 0x28baf0: 0xae031584  sw          $v1, 0x1584($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5508), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28baec) {
            ctx->pc = 0x28BB00u;
            goto label_28bb00;
        }
    }
    ctx->pc = 0x28BAF4u;
label_28baf4:
    // 0x28baf4: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_28baf8:
    // 0x28baf8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28baf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28bafc:
    // 0x28bafc: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_28bb00:
    // 0x28bb00: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x28bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_28bb04:
    // 0x28bb04: 0xae001638  sw          $zero, 0x1638($s0)
    ctx->pc = 0x28bb04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5688), GPR_U32(ctx, 0));
label_28bb08:
    // 0x28bb08: 0x2443fdfb  addiu       $v1, $v0, -0x205
    ctx->pc = 0x28bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
label_28bb0c:
    // 0x28bb0c: 0xae00163c  sw          $zero, 0x163C($s0)
    ctx->pc = 0x28bb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5692), GPR_U32(ctx, 0));
label_28bb10:
    // 0x28bb10: 0xae001640  sw          $zero, 0x1640($s0)
    ctx->pc = 0x28bb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5696), GPR_U32(ctx, 0));
label_28bb14:
    // 0x28bb14: 0x2c620049  sltiu       $v0, $v1, 0x49
    ctx->pc = 0x28bb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)73) ? 1 : 0);
label_28bb18:
    // 0x28bb18: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_28bb1c:
    if (ctx->pc == 0x28BB1Cu) {
        ctx->pc = 0x28BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB18u;
        // 0x28bb1c: 0xae001644  sw          $zero, 0x1644($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BB20u;
        goto label_28bb20;
    }
    ctx->pc = 0x28BB18u;
    {
        const bool branch_taken_0x28bb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB18u;
        // 0x28bb1c: 0xae001644  sw          $zero, 0x1644($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb18) {
            ctx->pc = 0x28BC84u;
            goto label_28bc84;
        }
    }
    ctx->pc = 0x28BB20u;
label_28bb20:
    // 0x28bb20: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x28bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_28bb24:
    // 0x28bb24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28bb28:
    // 0x28bb28: 0x244293c0  addiu       $v0, $v0, -0x6C40
    ctx->pc = 0x28bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939584));
label_28bb2c:
    // 0x28bb2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28bb30:
    // 0x28bb30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28bb34:
    // 0x28bb34: 0x800008  jr          $a0
label_28bb38:
    if (ctx->pc == 0x28BB38u) {
        ctx->pc = 0x28BB3Cu;
        goto label_28bb3c;
    }
    ctx->pc = 0x28BB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28BB3Cu: goto label_28bb3c;
            case 0x28BB68u: goto label_28bb68;
            case 0x28BBB4u: goto label_28bbb4;
            case 0x28BBDCu: goto label_28bbdc;
            case 0x28BBE8u: goto label_28bbe8;
            case 0x28BC14u: goto label_28bc14;
            case 0x28BC50u: goto label_28bc50;
            case 0x28BC84u: goto label_28bc84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BB34u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28BB3Cu;
label_28bb3c:
    // 0x28bb3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bb40:
    // 0x28bb40: 0xc0a3412  jal         func_28D048
label_28bb44:
    if (ctx->pc == 0x28BB44u) {
        ctx->pc = 0x28BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB40u;
        // 0x28bb44: 0x24050365  addiu       $a1, $zero, 0x365 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BB48u;
        goto label_28bb48;
    }
    ctx->pc = 0x28BB40u;
    SET_GPR_U32(ctx, 31, 0x28BB48u);
    ctx->pc = 0x28BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB40u;
    // 0x28bb44: 0x24050365  addiu       $a1, $zero, 0x365 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D048u, 0x28BB40u, 0x28BB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BB48u;
label_28bb48:
    // 0x28bb48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28bb48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bb4c:
    // 0x28bb4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bb50:
    // 0x28bb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bb54:
    // 0x28bb54: 0xc0a34f6  jal         func_28D3D8
label_28bb58:
    if (ctx->pc == 0x28BB58u) {
        ctx->pc = 0x28BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB54u;
        // 0x28bb58: 0xae021638  sw          $v0, 0x1638($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BB5Cu;
        goto label_28bb5c;
    }
    ctx->pc = 0x28BB54u;
    SET_GPR_U32(ctx, 31, 0x28BB5Cu);
    ctx->pc = 0x28BB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB54u;
    // 0x28bb58: 0xae021638  sw          $v0, 0x1638($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D3D8u, 0x28BB54u, 0x28BB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BB5Cu;
label_28bb5c:
    // 0x28bb5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bb60:
    // 0x28bb60: 0x1000000b  b           . + 4 + (0xB << 2)
label_28bb64:
    if (ctx->pc == 0x28BB64u) {
        ctx->pc = 0x28BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB60u;
        // 0x28bb64: 0x24050365  addiu       $a1, $zero, 0x365 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BB68u;
        goto label_28bb68;
    }
    ctx->pc = 0x28BB60u;
    {
        const bool branch_taken_0x28bb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB60u;
        // 0x28bb64: 0x24050365  addiu       $a1, $zero, 0x365 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb60) {
            ctx->pc = 0x28BB90u;
            goto label_28bb90;
        }
    }
    ctx->pc = 0x28BB68u;
label_28bb68:
    // 0x28bb68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bb6c:
    // 0x28bb6c: 0xc0a3412  jal         func_28D048
label_28bb70:
    if (ctx->pc == 0x28BB70u) {
        ctx->pc = 0x28BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB6Cu;
        // 0x28bb70: 0x2405037d  addiu       $a1, $zero, 0x37D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 893));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BB74u;
        goto label_28bb74;
    }
    ctx->pc = 0x28BB6Cu;
    SET_GPR_U32(ctx, 31, 0x28BB74u);
    ctx->pc = 0x28BB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB6Cu;
    // 0x28bb70: 0x2405037d  addiu       $a1, $zero, 0x37D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 893));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D048u, 0x28BB6Cu, 0x28BB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BB74u;
label_28bb74:
    // 0x28bb74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28bb74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bb78:
    // 0x28bb78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bb7c:
    // 0x28bb7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bb80:
    // 0x28bb80: 0xc0a34f6  jal         func_28D3D8
label_28bb84:
    if (ctx->pc == 0x28BB84u) {
        ctx->pc = 0x28BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB80u;
        // 0x28bb84: 0xae021638  sw          $v0, 0x1638($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BB88u;
        goto label_28bb88;
    }
    ctx->pc = 0x28BB80u;
    SET_GPR_U32(ctx, 31, 0x28BB88u);
    ctx->pc = 0x28BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB80u;
    // 0x28bb84: 0xae021638  sw          $v0, 0x1638($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D3D8u, 0x28BB80u, 0x28BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BB88u;
label_28bb88:
    // 0x28bb88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bb8c:
    // 0x28bb8c: 0x2405037d  addiu       $a1, $zero, 0x37D
    ctx->pc = 0x28bb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 893));
label_28bb90:
    // 0x28bb90: 0xc0a3412  jal         func_28D048
label_28bb94:
    if (ctx->pc == 0x28BB94u) {
        ctx->pc = 0x28BB98u;
        goto label_28bb98;
    }
    ctx->pc = 0x28BB90u;
    SET_GPR_U32(ctx, 31, 0x28BB98u);
    ctx->pc = 0x28D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D048u, 0x28BB90u, 0x28BB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BB98u;
label_28bb98:
    // 0x28bb98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bb9c:
    // 0x28bb9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bb9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bba0:
    // 0x28bba0: 0xae02163c  sw          $v0, 0x163C($s0)
    ctx->pc = 0x28bba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5692), GPR_U32(ctx, 2));
label_28bba4:
    // 0x28bba4: 0xc0a34f6  jal         func_28D3D8
label_28bba8:
    if (ctx->pc == 0x28BBA8u) {
        ctx->pc = 0x28BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBA4u;
        // 0x28bba8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BBACu;
        goto label_28bbac;
    }
    ctx->pc = 0x28BBA4u;
    SET_GPR_U32(ctx, 31, 0x28BBACu);
    ctx->pc = 0x28BBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BBA4u;
    // 0x28bba8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D3D8u, 0x28BBA4u, 0x28BBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BBACu;
label_28bbac:
    // 0x28bbac: 0x10000036  b           . + 4 + (0x36 << 2)
label_28bbb0:
    if (ctx->pc == 0x28BBB0u) {
        ctx->pc = 0x28BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBACu;
        // 0x28bbb0: 0x8e021534  lw          $v0, 0x1534($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BBB4u;
        goto label_28bbb4;
    }
    ctx->pc = 0x28BBACu;
    {
        const bool branch_taken_0x28bbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBACu;
        // 0x28bbb0: 0x8e021534  lw          $v0, 0x1534($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbac) {
            ctx->pc = 0x28BC88u;
            goto label_28bc88;
        }
    }
    ctx->pc = 0x28BBB4u;
label_28bbb4:
    // 0x28bbb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bbb8:
    // 0x28bbb8: 0xc0a3412  jal         func_28D048
label_28bbbc:
    if (ctx->pc == 0x28BBBCu) {
        ctx->pc = 0x28BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBB8u;
        // 0x28bbbc: 0x24050367  addiu       $a1, $zero, 0x367 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 871));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BBC0u;
        goto label_28bbc0;
    }
    ctx->pc = 0x28BBB8u;
    SET_GPR_U32(ctx, 31, 0x28BBC0u);
    ctx->pc = 0x28BBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BBB8u;
    // 0x28bbbc: 0x24050367  addiu       $a1, $zero, 0x367 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 871));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D048u, 0x28BBB8u, 0x28BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BBC0u;
label_28bbc0:
    // 0x28bbc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bbc4:
    // 0x28bbc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bbc8:
    // 0x28bbc8: 0xae021640  sw          $v0, 0x1640($s0)
    ctx->pc = 0x28bbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5696), GPR_U32(ctx, 2));
label_28bbcc:
    // 0x28bbcc: 0xc0a3540  jal         func_28D500
label_28bbd0:
    if (ctx->pc == 0x28BBD0u) {
        ctx->pc = 0x28BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBCCu;
        // 0x28bbd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BBD4u;
        goto label_28bbd4;
    }
    ctx->pc = 0x28BBCCu;
    SET_GPR_U32(ctx, 31, 0x28BBD4u);
    ctx->pc = 0x28BBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BBCCu;
    // 0x28bbd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D500u, 0x28BBCCu, 0x28BBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BBD4u;
label_28bbd4:
    // 0x28bbd4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_28bbd8:
    if (ctx->pc == 0x28BBD8u) {
        ctx->pc = 0x28BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBD4u;
        // 0x28bbd8: 0x8e021534  lw          $v0, 0x1534($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BBDCu;
        goto label_28bbdc;
    }
    ctx->pc = 0x28BBD4u;
    {
        const bool branch_taken_0x28bbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBD4u;
        // 0x28bbd8: 0x8e021534  lw          $v0, 0x1534($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbd4) {
            ctx->pc = 0x28BC88u;
            goto label_28bc88;
        }
    }
    ctx->pc = 0x28BBDCu;
label_28bbdc:
    // 0x28bbdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bbe0:
    // 0x28bbe0: 0x10000003  b           . + 4 + (0x3 << 2)
label_28bbe4:
    if (ctx->pc == 0x28BBE4u) {
        ctx->pc = 0x28BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBE0u;
        // 0x28bbe4: 0x2405036c  addiu       $a1, $zero, 0x36C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 876));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BBE8u;
        goto label_28bbe8;
    }
    ctx->pc = 0x28BBE0u;
    {
        const bool branch_taken_0x28bbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBE0u;
        // 0x28bbe4: 0x2405036c  addiu       $a1, $zero, 0x36C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 876));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbe0) {
            ctx->pc = 0x28BBF0u;
            goto label_28bbf0;
        }
    }
    ctx->pc = 0x28BBE8u;
label_28bbe8:
    // 0x28bbe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bbec:
    // 0x28bbec: 0x24050370  addiu       $a1, $zero, 0x370
    ctx->pc = 0x28bbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 880));
label_28bbf0:
    // 0x28bbf0: 0xc0a3412  jal         func_28D048
label_28bbf4:
    if (ctx->pc == 0x28BBF4u) {
        ctx->pc = 0x28BBF8u;
        goto label_28bbf8;
    }
    ctx->pc = 0x28BBF0u;
    SET_GPR_U32(ctx, 31, 0x28BBF8u);
    ctx->pc = 0x28D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D048u, 0x28BBF0u, 0x28BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BBF8u;
label_28bbf8:
    // 0x28bbf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bbfc:
    // 0x28bbfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bc00:
    // 0x28bc00: 0xae021640  sw          $v0, 0x1640($s0)
    ctx->pc = 0x28bc00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5696), GPR_U32(ctx, 2));
label_28bc04:
    // 0x28bc04: 0xc0a3540  jal         func_28D500
label_28bc08:
    if (ctx->pc == 0x28BC08u) {
        ctx->pc = 0x28BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC04u;
        // 0x28bc08: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC0Cu;
        goto label_28bc0c;
    }
    ctx->pc = 0x28BC04u;
    SET_GPR_U32(ctx, 31, 0x28BC0Cu);
    ctx->pc = 0x28BC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC04u;
    // 0x28bc08: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D500u, 0x28BC04u, 0x28BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC0Cu;
label_28bc0c:
    // 0x28bc0c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_28bc10:
    if (ctx->pc == 0x28BC10u) {
        ctx->pc = 0x28BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC0Cu;
        // 0x28bc10: 0x8e021534  lw          $v0, 0x1534($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC14u;
        goto label_28bc14;
    }
    ctx->pc = 0x28BC0Cu;
    {
        const bool branch_taken_0x28bc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC0Cu;
        // 0x28bc10: 0x8e021534  lw          $v0, 0x1534($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc0c) {
            ctx->pc = 0x28BC88u;
            goto label_28bc88;
        }
    }
    ctx->pc = 0x28BC14u;
label_28bc14:
    // 0x28bc14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bc18:
    // 0x28bc18: 0xc0a3412  jal         func_28D048
label_28bc1c:
    if (ctx->pc == 0x28BC1Cu) {
        ctx->pc = 0x28BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC18u;
        // 0x28bc1c: 0x2405036f  addiu       $a1, $zero, 0x36F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 879));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC20u;
        goto label_28bc20;
    }
    ctx->pc = 0x28BC18u;
    SET_GPR_U32(ctx, 31, 0x28BC20u);
    ctx->pc = 0x28BC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC18u;
    // 0x28bc1c: 0x2405036f  addiu       $a1, $zero, 0x36F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 879));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D048u, 0x28BC18u, 0x28BC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC20u;
label_28bc20:
    // 0x28bc20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bc24:
    // 0x28bc24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bc24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bc28:
    // 0x28bc28: 0xae021644  sw          $v0, 0x1644($s0)
    ctx->pc = 0x28bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5700), GPR_U32(ctx, 2));
label_28bc2c:
    // 0x28bc2c: 0xc0a3540  jal         func_28D500
label_28bc30:
    if (ctx->pc == 0x28BC30u) {
        ctx->pc = 0x28BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC2Cu;
        // 0x28bc30: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC34u;
        goto label_28bc34;
    }
    ctx->pc = 0x28BC2Cu;
    SET_GPR_U32(ctx, 31, 0x28BC34u);
    ctx->pc = 0x28BC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC2Cu;
    // 0x28bc30: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D500u, 0x28BC2Cu, 0x28BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC34u;
label_28bc34:
    // 0x28bc34: 0x8e041644  lw          $a0, 0x1644($s0)
    ctx->pc = 0x28bc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5700)));
label_28bc38:
    // 0x28bc38: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
label_28bc3c:
    if (ctx->pc == 0x28BC3Cu) {
        ctx->pc = 0x28BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC38u;
        // 0x28bc3c: 0x8e021534  lw          $v0, 0x1534($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC40u;
        goto label_28bc40;
    }
    ctx->pc = 0x28BC38u;
    {
        const bool branch_taken_0x28bc38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bc38) {
            ctx->pc = 0x28BC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BC38u;
            // 0x28bc3c: 0x8e021534  lw          $v0, 0x1534($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BC88u;
            goto label_28bc88;
        }
    }
    ctx->pc = 0x28BC40u;
label_28bc40:
    // 0x28bc40: 0xc074170  jal         func_1D05C0
label_28bc44:
    if (ctx->pc == 0x28BC44u) {
        ctx->pc = 0x28BC48u;
        goto label_28bc48;
    }
    ctx->pc = 0x28BC40u;
    SET_GPR_U32(ctx, 31, 0x28BC48u);
    ctx->pc = 0x1D05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05C0u, 0x28BC40u, 0x28BC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC48u;
label_28bc48:
    // 0x28bc48: 0x1000000f  b           . + 4 + (0xF << 2)
label_28bc4c:
    if (ctx->pc == 0x28BC4Cu) {
        ctx->pc = 0x28BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC48u;
        // 0x28bc4c: 0x8e021534  lw          $v0, 0x1534($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC50u;
        goto label_28bc50;
    }
    ctx->pc = 0x28BC48u;
    {
        const bool branch_taken_0x28bc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC48u;
        // 0x28bc4c: 0x8e021534  lw          $v0, 0x1534($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc48) {
            ctx->pc = 0x28BC88u;
            goto label_28bc88;
        }
    }
    ctx->pc = 0x28BC50u;
label_28bc50:
    // 0x28bc50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bc54:
    // 0x28bc54: 0xc0a3412  jal         func_28D048
label_28bc58:
    if (ctx->pc == 0x28BC58u) {
        ctx->pc = 0x28BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC54u;
        // 0x28bc58: 0x2405037a  addiu       $a1, $zero, 0x37A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 890));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC5Cu;
        goto label_28bc5c;
    }
    ctx->pc = 0x28BC54u;
    SET_GPR_U32(ctx, 31, 0x28BC5Cu);
    ctx->pc = 0x28BC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC54u;
    // 0x28bc58: 0x2405037a  addiu       $a1, $zero, 0x37A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 890));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D048u, 0x28BC54u, 0x28BC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC5Cu;
label_28bc5c:
    // 0x28bc5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bc60:
    // 0x28bc60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bc64:
    // 0x28bc64: 0xae021644  sw          $v0, 0x1644($s0)
    ctx->pc = 0x28bc64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5700), GPR_U32(ctx, 2));
label_28bc68:
    // 0x28bc68: 0xc0a3540  jal         func_28D500
label_28bc6c:
    if (ctx->pc == 0x28BC6Cu) {
        ctx->pc = 0x28BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC68u;
        // 0x28bc6c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC70u;
        goto label_28bc70;
    }
    ctx->pc = 0x28BC68u;
    SET_GPR_U32(ctx, 31, 0x28BC70u);
    ctx->pc = 0x28BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC68u;
    // 0x28bc6c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D500u, 0x28BC68u, 0x28BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC70u;
label_28bc70:
    // 0x28bc70: 0x8e041644  lw          $a0, 0x1644($s0)
    ctx->pc = 0x28bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5700)));
label_28bc74:
    // 0x28bc74: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_28bc78:
    if (ctx->pc == 0x28BC78u) {
        ctx->pc = 0x28BC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC74u;
        // 0x28bc78: 0x8e021534  lw          $v0, 0x1534($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC7Cu;
        goto label_28bc7c;
    }
    ctx->pc = 0x28BC74u;
    {
        const bool branch_taken_0x28bc74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bc74) {
            ctx->pc = 0x28BC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BC74u;
            // 0x28bc78: 0x8e021534  lw          $v0, 0x1534($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BC88u;
            goto label_28bc88;
        }
    }
    ctx->pc = 0x28BC7Cu;
label_28bc7c:
    // 0x28bc7c: 0xc074170  jal         func_1D05C0
label_28bc80:
    if (ctx->pc == 0x28BC80u) {
        ctx->pc = 0x28BC84u;
        goto label_28bc84;
    }
    ctx->pc = 0x28BC7Cu;
    SET_GPR_U32(ctx, 31, 0x28BC84u);
    ctx->pc = 0x1D05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05C0u, 0x28BC7Cu, 0x28BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC84u;
label_28bc84:
    // 0x28bc84: 0x8e021534  lw          $v0, 0x1534($s0)
    ctx->pc = 0x28bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
label_28bc88:
    // 0x28bc88: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x28bc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_28bc8c:
    // 0x28bc8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_28bc90:
    if (ctx->pc == 0x28BC90u) {
        ctx->pc = 0x28BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC8Cu;
        // 0x28bc90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC94u;
        goto label_28bc94;
    }
    ctx->pc = 0x28BC8Cu;
    {
        const bool branch_taken_0x28bc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC8Cu;
        // 0x28bc90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc8c) {
            ctx->pc = 0x28BCB0u;
            goto label_28bcb0;
        }
    }
    ctx->pc = 0x28BC94u;
label_28bc94:
    // 0x28bc94: 0xc0a3412  jal         func_28D048
label_28bc98:
    if (ctx->pc == 0x28BC98u) {
        ctx->pc = 0x28BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC94u;
        // 0x28bc98: 0x2405037f  addiu       $a1, $zero, 0x37F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 895));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BC9Cu;
        goto label_28bc9c;
    }
    ctx->pc = 0x28BC94u;
    SET_GPR_U32(ctx, 31, 0x28BC9Cu);
    ctx->pc = 0x28BC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC94u;
    // 0x28bc98: 0x2405037f  addiu       $a1, $zero, 0x37F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 895));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D048u, 0x28BC94u, 0x28BC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC9Cu;
label_28bc9c:
    // 0x28bc9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bca0:
    // 0x28bca0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bca4:
    // 0x28bca4: 0xae021640  sw          $v0, 0x1640($s0)
    ctx->pc = 0x28bca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5696), GPR_U32(ctx, 2));
label_28bca8:
    // 0x28bca8: 0xc0a3540  jal         func_28D500
label_28bcac:
    if (ctx->pc == 0x28BCACu) {
        ctx->pc = 0x28BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCA8u;
        // 0x28bcac: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BCB0u;
        goto label_28bcb0;
    }
    ctx->pc = 0x28BCA8u;
    SET_GPR_U32(ctx, 31, 0x28BCB0u);
    ctx->pc = 0x28BCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BCA8u;
    // 0x28bcac: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D500u, 0x28BCA8u, 0x28BCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BCB0u;
label_28bcb0:
    // 0x28bcb0: 0x8e021534  lw          $v0, 0x1534($s0)
    ctx->pc = 0x28bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
label_28bcb4:
    // 0x28bcb4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28bcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_28bcb8:
    // 0x28bcb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_28bcbc:
    if (ctx->pc == 0x28BCBCu) {
        ctx->pc = 0x28BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCB8u;
        // 0x28bcbc: 0xae001648  sw          $zero, 0x1648($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BCC0u;
        goto label_28bcc0;
    }
    ctx->pc = 0x28BCB8u;
    {
        const bool branch_taken_0x28bcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCB8u;
        // 0x28bcbc: 0xae001648  sw          $zero, 0x1648($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bcb8) {
            ctx->pc = 0x28BCDCu;
            goto label_28bcdc;
        }
    }
    ctx->pc = 0x28BCC0u;
label_28bcc0:
    // 0x28bcc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bcc4:
    // 0x28bcc4: 0xc0a3412  jal         func_28D048
label_28bcc8:
    if (ctx->pc == 0x28BCC8u) {
        ctx->pc = 0x28BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCC4u;
        // 0x28bcc8: 0x24050369  addiu       $a1, $zero, 0x369 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 873));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BCCCu;
        goto label_28bccc;
    }
    ctx->pc = 0x28BCC4u;
    SET_GPR_U32(ctx, 31, 0x28BCCCu);
    ctx->pc = 0x28BCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BCC4u;
    // 0x28bcc8: 0x24050369  addiu       $a1, $zero, 0x369 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 873));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D048u, 0x28BCC4u, 0x28BCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BCCCu;
label_28bccc:
    // 0x28bccc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bcccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bcd0:
    // 0x28bcd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bcd4:
    // 0x28bcd4: 0xc0a344e  jal         func_28D138
label_28bcd8:
    if (ctx->pc == 0x28BCD8u) {
        ctx->pc = 0x28BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCD4u;
        // 0x28bcd8: 0x24060369  addiu       $a2, $zero, 0x369 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 873));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BCDCu;
        goto label_28bcdc;
    }
    ctx->pc = 0x28BCD4u;
    SET_GPR_U32(ctx, 31, 0x28BCDCu);
    ctx->pc = 0x28BCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BCD4u;
    // 0x28bcd8: 0x24060369  addiu       $a2, $zero, 0x369 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 873));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D138u, 0x28BCD4u, 0x28BCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BCDCu;
label_28bcdc:
    // 0x28bcdc: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x28bcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_28bce0:
    // 0x28bce0: 0x240202ff  addiu       $v0, $zero, 0x2FF
    ctx->pc = 0x28bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 767));
label_28bce4:
    // 0x28bce4: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_28bce8:
    if (ctx->pc == 0x28BCE8u) {
        ctx->pc = 0x28BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCE4u;
        // 0x28bce8: 0xae001658  sw          $zero, 0x1658($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5720), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BCECu;
        goto label_28bcec;
    }
    ctx->pc = 0x28BCE4u;
    {
        const bool branch_taken_0x28bce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCE4u;
        // 0x28bce8: 0xae001658  sw          $zero, 0x1658($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5720), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bce4) {
            ctx->pc = 0x28BD60u;
            goto label_28bd60;
        }
    }
    ctx->pc = 0x28BCECu;
label_28bcec:
    // 0x28bcec: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x28bcecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_28bcf0:
    // 0x28bcf0: 0xc0c3ea6  jal         func_30FA98
label_28bcf4:
    if (ctx->pc == 0x28BCF4u) {
        ctx->pc = 0x28BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCF0u;
        // 0x28bcf4: 0x24040101  addiu       $a0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BCF8u;
        goto label_28bcf8;
    }
    ctx->pc = 0x28BCF0u;
    SET_GPR_U32(ctx, 31, 0x28BCF8u);
    ctx->pc = 0x28BCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BCF0u;
    // 0x28bcf4: 0x24040101  addiu       $a0, $zero, 0x101 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x28BCF0u, 0x28BCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BCF8u;
label_28bcf8:
    // 0x28bcf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bcfc:
    // 0x28bcfc: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_28bd00:
    if (ctx->pc == 0x28BD00u) {
        ctx->pc = 0x28BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCFCu;
        // 0x28bd00: 0xae051658  sw          $a1, 0x1658($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5720), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD04u;
        goto label_28bd04;
    }
    ctx->pc = 0x28BCFCu;
    {
        const bool branch_taken_0x28bcfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCFCu;
        // 0x28bd00: 0xae051658  sw          $a1, 0x1658($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5720), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bcfc) {
            ctx->pc = 0x28BD60u;
            goto label_28bd60;
        }
    }
    ctx->pc = 0x28BD04u;
label_28bd04:
    // 0x28bd04: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x28bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_28bd08:
    // 0x28bd08: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x28bd08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_28bd0c:
    // 0x28bd0c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x28bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_28bd10:
    // 0x28bd10: 0x40f809  jalr        $v0
label_28bd14:
    if (ctx->pc == 0x28BD14u) {
        ctx->pc = 0x28BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD10u;
        // 0x28bd14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD18u;
        goto label_28bd18;
    }
    ctx->pc = 0x28BD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28BD18u);
        ctx->pc = 0x28BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD10u;
        // 0x28bd14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BD10u, 0x28BD18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28BD18u;
label_28bd18:
    // 0x28bd18: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_28bd1c:
    if (ctx->pc == 0x28BD1Cu) {
        ctx->pc = 0x28BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD18u;
        // 0x28bd1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD20u;
        goto label_28bd20;
    }
    ctx->pc = 0x28BD18u;
    {
        const bool branch_taken_0x28bd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD18u;
        // 0x28bd1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd18) {
            ctx->pc = 0x28BD5Cu;
            goto label_28bd5c;
        }
    }
    ctx->pc = 0x28BD20u;
label_28bd20:
    // 0x28bd20: 0x8e041658  lw          $a0, 0x1658($s0)
    ctx->pc = 0x28bd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5720)));
label_28bd24:
    // 0x28bd24: 0xc0403b6  jal         func_100ED8
label_28bd28:
    if (ctx->pc == 0x28BD28u) {
        ctx->pc = 0x28BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD24u;
        // 0x28bd28: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD2Cu;
        goto label_28bd2c;
    }
    ctx->pc = 0x28BD24u;
    SET_GPR_U32(ctx, 31, 0x28BD2Cu);
    ctx->pc = 0x28BD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BD24u;
    // 0x28bd28: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100ED8u, 0x28BD24u, 0x28BD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD2Cu;
label_28bd2c:
    // 0x28bd2c: 0x8e041658  lw          $a0, 0x1658($s0)
    ctx->pc = 0x28bd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5720)));
label_28bd30:
    // 0x28bd30: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x28bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_28bd34:
    // 0x28bd34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x28bd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_28bd38:
    // 0x28bd38: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x28bd38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_28bd3c:
    // 0x28bd3c: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x28bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_28bd40:
    // 0x28bd40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28bd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_28bd44:
    // 0x28bd44: 0xac8202d0  sw          $v0, 0x2D0($a0)
    ctx->pc = 0x28bd44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 720), GPR_U32(ctx, 2));
label_28bd48:
    // 0x28bd48: 0x8e031658  lw          $v1, 0x1658($s0)
    ctx->pc = 0x28bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5720)));
label_28bd4c:
    // 0x28bd4c: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x28bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_28bd50:
    // 0x28bd50: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x28bd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_28bd54:
    // 0x28bd54: 0x10000002  b           . + 4 + (0x2 << 2)
label_28bd58:
    if (ctx->pc == 0x28BD58u) {
        ctx->pc = 0x28BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD54u;
        // 0x28bd58: 0xac6202d0  sw          $v0, 0x2D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD5Cu;
        goto label_28bd5c;
    }
    ctx->pc = 0x28BD54u;
    {
        const bool branch_taken_0x28bd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD54u;
        // 0x28bd58: 0xac6202d0  sw          $v0, 0x2D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd54) {
            ctx->pc = 0x28BD60u;
            goto label_28bd60;
        }
    }
    ctx->pc = 0x28BD5Cu;
label_28bd5c:
    // 0x28bd5c: 0xae001658  sw          $zero, 0x1658($s0)
    ctx->pc = 0x28bd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5720), GPR_U32(ctx, 0));
label_28bd60:
    // 0x28bd60: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x28bd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_28bd64:
    // 0x28bd64: 0x24020279  addiu       $v0, $zero, 0x279
    ctx->pc = 0x28bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
label_28bd68:
    // 0x28bd68: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_28bd6c:
    if (ctx->pc == 0x28BD6Cu) {
        ctx->pc = 0x28BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD68u;
        // 0x28bd6c: 0xae00164c  sw          $zero, 0x164C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5708), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD70u;
        goto label_28bd70;
    }
    ctx->pc = 0x28BD68u;
    {
        const bool branch_taken_0x28bd68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD68u;
        // 0x28bd6c: 0xae00164c  sw          $zero, 0x164C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5708), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd68) {
            ctx->pc = 0x28BDBCu;
            goto label_28bdbc;
        }
    }
    ctx->pc = 0x28BD70u;
label_28bd70:
    // 0x28bd70: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x28bd70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_28bd74:
    // 0x28bd74: 0xc0c3ea6  jal         func_30FA98
label_28bd78:
    if (ctx->pc == 0x28BD78u) {
        ctx->pc = 0x28BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD74u;
        // 0x28bd78: 0x2404027a  addiu       $a0, $zero, 0x27A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD7Cu;
        goto label_28bd7c;
    }
    ctx->pc = 0x28BD74u;
    SET_GPR_U32(ctx, 31, 0x28BD7Cu);
    ctx->pc = 0x28BD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BD74u;
    // 0x28bd78: 0x2404027a  addiu       $a0, $zero, 0x27A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x28BD74u, 0x28BD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD7Cu;
label_28bd7c:
    // 0x28bd7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bd80:
    // 0x28bd80: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_28bd84:
    if (ctx->pc == 0x28BD84u) {
        ctx->pc = 0x28BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD80u;
        // 0x28bd84: 0xae05164c  sw          $a1, 0x164C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5708), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD88u;
        goto label_28bd88;
    }
    ctx->pc = 0x28BD80u;
    {
        const bool branch_taken_0x28bd80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD80u;
        // 0x28bd84: 0xae05164c  sw          $a1, 0x164C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5708), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd80) {
            ctx->pc = 0x28BDBCu;
            goto label_28bdbc;
        }
    }
    ctx->pc = 0x28BD88u;
label_28bd88:
    // 0x28bd88: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x28bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_28bd8c:
    // 0x28bd8c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x28bd8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_28bd90:
    // 0x28bd90: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x28bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_28bd94:
    // 0x28bd94: 0x40f809  jalr        $v0
label_28bd98:
    if (ctx->pc == 0x28BD98u) {
        ctx->pc = 0x28BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD94u;
        // 0x28bd98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BD9Cu;
        goto label_28bd9c;
    }
    ctx->pc = 0x28BD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28BD9Cu);
        ctx->pc = 0x28BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD94u;
        // 0x28bd98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BD94u, 0x28BD9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28BD9Cu;
label_28bd9c:
    // 0x28bd9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_28bda0:
    if (ctx->pc == 0x28BDA0u) {
        ctx->pc = 0x28BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD9Cu;
        // 0x28bda0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDA4u;
        goto label_28bda4;
    }
    ctx->pc = 0x28BD9Cu;
    {
        const bool branch_taken_0x28bd9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD9Cu;
        // 0x28bda0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd9c) {
            ctx->pc = 0x28BDB8u;
            goto label_28bdb8;
        }
    }
    ctx->pc = 0x28BDA4u;
label_28bda4:
    // 0x28bda4: 0x8e04164c  lw          $a0, 0x164C($s0)
    ctx->pc = 0x28bda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5708)));
label_28bda8:
    // 0x28bda8: 0xc0a0efa  jal         func_283BE8
label_28bdac:
    if (ctx->pc == 0x28BDACu) {
        ctx->pc = 0x28BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDA8u;
        // 0x28bdac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDB0u;
        goto label_28bdb0;
    }
    ctx->pc = 0x28BDA8u;
    SET_GPR_U32(ctx, 31, 0x28BDB0u);
    ctx->pc = 0x28BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BDA8u;
    // 0x28bdac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283BE8u, 0x28BDA8u, 0x28BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BDB0u;
label_28bdb0:
    // 0x28bdb0: 0x10000003  b           . + 4 + (0x3 << 2)
label_28bdb4:
    if (ctx->pc == 0x28BDB4u) {
        ctx->pc = 0x28BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDB0u;
        // 0x28bdb4: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDB8u;
        goto label_28bdb8;
    }
    ctx->pc = 0x28BDB0u;
    {
        const bool branch_taken_0x28bdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDB0u;
        // 0x28bdb4: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bdb0) {
            ctx->pc = 0x28BDC0u;
            goto label_28bdc0;
        }
    }
    ctx->pc = 0x28BDB8u;
label_28bdb8:
    // 0x28bdb8: 0xae00164c  sw          $zero, 0x164C($s0)
    ctx->pc = 0x28bdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5708), GPR_U32(ctx, 0));
label_28bdbc:
    // 0x28bdbc: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x28bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_28bdc0:
    // 0x28bdc0: 0x24020252  addiu       $v0, $zero, 0x252
    ctx->pc = 0x28bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 594));
label_28bdc4:
    // 0x28bdc4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_28bdc8:
    if (ctx->pc == 0x28BDC8u) {
        ctx->pc = 0x28BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDC4u;
        // 0x28bdc8: 0xae001650  sw          $zero, 0x1650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDCCu;
        goto label_28bdcc;
    }
    ctx->pc = 0x28BDC4u;
    {
        const bool branch_taken_0x28bdc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDC4u;
        // 0x28bdc8: 0xae001650  sw          $zero, 0x1650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bdc4) {
            ctx->pc = 0x28BE18u;
            goto label_28be18;
        }
    }
    ctx->pc = 0x28BDCCu;
label_28bdcc:
    // 0x28bdcc: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x28bdccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_28bdd0:
    // 0x28bdd0: 0xc0c3ea6  jal         func_30FA98
label_28bdd4:
    if (ctx->pc == 0x28BDD4u) {
        ctx->pc = 0x28BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDD0u;
        // 0x28bdd4: 0x24040253  addiu       $a0, $zero, 0x253 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDD8u;
        goto label_28bdd8;
    }
    ctx->pc = 0x28BDD0u;
    SET_GPR_U32(ctx, 31, 0x28BDD8u);
    ctx->pc = 0x28BDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BDD0u;
    // 0x28bdd4: 0x24040253  addiu       $a0, $zero, 0x253 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x28BDD0u, 0x28BDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BDD8u;
label_28bdd8:
    // 0x28bdd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bddc:
    // 0x28bddc: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_28bde0:
    if (ctx->pc == 0x28BDE0u) {
        ctx->pc = 0x28BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDDCu;
        // 0x28bde0: 0xae051650  sw          $a1, 0x1650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5712), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDE4u;
        goto label_28bde4;
    }
    ctx->pc = 0x28BDDCu;
    {
        const bool branch_taken_0x28bddc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDDCu;
        // 0x28bde0: 0xae051650  sw          $a1, 0x1650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5712), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bddc) {
            ctx->pc = 0x28BE18u;
            goto label_28be18;
        }
    }
    ctx->pc = 0x28BDE4u;
label_28bde4:
    // 0x28bde4: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x28bde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_28bde8:
    // 0x28bde8: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x28bde8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_28bdec:
    // 0x28bdec: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x28bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_28bdf0:
    // 0x28bdf0: 0x40f809  jalr        $v0
label_28bdf4:
    if (ctx->pc == 0x28BDF4u) {
        ctx->pc = 0x28BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDF0u;
        // 0x28bdf4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDF8u;
        goto label_28bdf8;
    }
    ctx->pc = 0x28BDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28BDF8u);
        ctx->pc = 0x28BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDF0u;
        // 0x28bdf4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BDF0u, 0x28BDF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28BDF8u;
label_28bdf8:
    // 0x28bdf8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_28bdfc:
    if (ctx->pc == 0x28BDFCu) {
        ctx->pc = 0x28BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDF8u;
        // 0x28bdfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE00u;
        goto label_28be00;
    }
    ctx->pc = 0x28BDF8u;
    {
        const bool branch_taken_0x28bdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDF8u;
        // 0x28bdfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bdf8) {
            ctx->pc = 0x28BE14u;
            goto label_28be14;
        }
    }
    ctx->pc = 0x28BE00u;
label_28be00:
    // 0x28be00: 0x8e041650  lw          $a0, 0x1650($s0)
    ctx->pc = 0x28be00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5712)));
label_28be04:
    // 0x28be04: 0xc09e9da  jal         func_27A768
label_28be08:
    if (ctx->pc == 0x28BE08u) {
        ctx->pc = 0x28BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE04u;
        // 0x28be08: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE0Cu;
        goto label_28be0c;
    }
    ctx->pc = 0x28BE04u;
    SET_GPR_U32(ctx, 31, 0x28BE0Cu);
    ctx->pc = 0x28BE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BE04u;
    // 0x28be08: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A768u, 0x28BE04u, 0x28BE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BE0Cu;
label_28be0c:
    // 0x28be0c: 0x10000003  b           . + 4 + (0x3 << 2)
label_28be10:
    if (ctx->pc == 0x28BE10u) {
        ctx->pc = 0x28BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE0Cu;
        // 0x28be10: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE14u;
        goto label_28be14;
    }
    ctx->pc = 0x28BE0Cu;
    {
        const bool branch_taken_0x28be0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE0Cu;
        // 0x28be10: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be0c) {
            ctx->pc = 0x28BE1Cu;
            goto label_28be1c;
        }
    }
    ctx->pc = 0x28BE14u;
label_28be14:
    // 0x28be14: 0xae001650  sw          $zero, 0x1650($s0)
    ctx->pc = 0x28be14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5712), GPR_U32(ctx, 0));
label_28be18:
    // 0x28be18: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x28be18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_28be1c:
    // 0x28be1c: 0x24020256  addiu       $v0, $zero, 0x256
    ctx->pc = 0x28be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
label_28be20:
    // 0x28be20: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_28be24:
    if (ctx->pc == 0x28BE24u) {
        ctx->pc = 0x28BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE20u;
        // 0x28be24: 0xae001654  sw          $zero, 0x1654($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5716), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE28u;
        goto label_28be28;
    }
    ctx->pc = 0x28BE20u;
    {
        const bool branch_taken_0x28be20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE20u;
        // 0x28be24: 0xae001654  sw          $zero, 0x1654($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5716), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be20) {
            ctx->pc = 0x28BE88u;
            goto label_28be88;
        }
    }
    ctx->pc = 0x28BE28u;
label_28be28:
    // 0x28be28: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x28be28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_28be2c:
    // 0x28be2c: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x28be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_28be30:
    // 0x28be30: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_28be34:
    if (ctx->pc == 0x28BE34u) {
        ctx->pc = 0x28BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE30u;
        // 0x28be34: 0x24040257  addiu       $a0, $zero, 0x257 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE38u;
        goto label_28be38;
    }
    ctx->pc = 0x28BE30u;
    {
        const bool branch_taken_0x28be30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE30u;
        // 0x28be34: 0x24040257  addiu       $a0, $zero, 0x257 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be30) {
            ctx->pc = 0x28BE3Cu;
            goto label_28be3c;
        }
    }
    ctx->pc = 0x28BE38u;
label_28be38:
    // 0x28be38: 0x24040259  addiu       $a0, $zero, 0x259
    ctx->pc = 0x28be38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 601));
label_28be3c:
    // 0x28be3c: 0xc0c3ea6  jal         func_30FA98
label_28be40:
    if (ctx->pc == 0x28BE40u) {
        ctx->pc = 0x28BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE3Cu;
        // 0x28be40: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE44u;
        goto label_28be44;
    }
    ctx->pc = 0x28BE3Cu;
    SET_GPR_U32(ctx, 31, 0x28BE44u);
    ctx->pc = 0x28BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BE3Cu;
    // 0x28be40: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x28BE3Cu, 0x28BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BE44u;
label_28be44:
    // 0x28be44: 0xae021654  sw          $v0, 0x1654($s0)
    ctx->pc = 0x28be44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5716), GPR_U32(ctx, 2));
label_28be48:
    // 0x28be48: 0x8e051654  lw          $a1, 0x1654($s0)
    ctx->pc = 0x28be48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5716)));
label_28be4c:
    // 0x28be4c: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_28be50:
    if (ctx->pc == 0x28BE50u) {
        ctx->pc = 0x28BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE4Cu;
        // 0x28be50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE54u;
        goto label_28be54;
    }
    ctx->pc = 0x28BE4Cu;
    {
        const bool branch_taken_0x28be4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE4Cu;
        // 0x28be50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be4c) {
            ctx->pc = 0x28BE8Cu;
            goto label_28be8c;
        }
    }
    ctx->pc = 0x28BE54u;
label_28be54:
    // 0x28be54: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x28be54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_28be58:
    // 0x28be58: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x28be58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_28be5c:
    // 0x28be5c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x28be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_28be60:
    // 0x28be60: 0x40f809  jalr        $v0
label_28be64:
    if (ctx->pc == 0x28BE64u) {
        ctx->pc = 0x28BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE60u;
        // 0x28be64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE68u;
        goto label_28be68;
    }
    ctx->pc = 0x28BE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28BE68u);
        ctx->pc = 0x28BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE60u;
        // 0x28be64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BE60u, 0x28BE68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28BE68u;
label_28be68:
    // 0x28be68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_28be6c:
    if (ctx->pc == 0x28BE6Cu) {
        ctx->pc = 0x28BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE68u;
        // 0x28be6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE70u;
        goto label_28be70;
    }
    ctx->pc = 0x28BE68u;
    {
        const bool branch_taken_0x28be68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE68u;
        // 0x28be6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be68) {
            ctx->pc = 0x28BE84u;
            goto label_28be84;
        }
    }
    ctx->pc = 0x28BE70u;
label_28be70:
    // 0x28be70: 0x8e041654  lw          $a0, 0x1654($s0)
    ctx->pc = 0x28be70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5716)));
label_28be74:
    // 0x28be74: 0xc09ec98  jal         func_27B260
label_28be78:
    if (ctx->pc == 0x28BE78u) {
        ctx->pc = 0x28BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE74u;
        // 0x28be78: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE7Cu;
        goto label_28be7c;
    }
    ctx->pc = 0x28BE74u;
    SET_GPR_U32(ctx, 31, 0x28BE7Cu);
    ctx->pc = 0x28BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BE74u;
    // 0x28be78: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B260u, 0x28BE74u, 0x28BE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BE7Cu;
label_28be7c:
    // 0x28be7c: 0x10000003  b           . + 4 + (0x3 << 2)
label_28be80:
    if (ctx->pc == 0x28BE80u) {
        ctx->pc = 0x28BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE7Cu;
        // 0x28be80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE84u;
        goto label_28be84;
    }
    ctx->pc = 0x28BE7Cu;
    {
        const bool branch_taken_0x28be7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE7Cu;
        // 0x28be80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be7c) {
            ctx->pc = 0x28BE8Cu;
            goto label_28be8c;
        }
    }
    ctx->pc = 0x28BE84u;
label_28be84:
    // 0x28be84: 0xae001654  sw          $zero, 0x1654($s0)
    ctx->pc = 0x28be84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5716), GPR_U32(ctx, 0));
label_28be88:
    // 0x28be88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28be88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28be8c:
    // 0x28be8c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28be8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28be90:
    // 0x28be90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28be90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28be94:
    // 0x28be94: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28be94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28be98:
    // 0x28be98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28be98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28be9c:
    // 0x28be9c: 0x3e00008  jr          $ra
label_28bea0:
    if (ctx->pc == 0x28BEA0u) {
        ctx->pc = 0x28BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE9Cu;
        // 0x28bea0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BEA4u;
        goto label_28bea4;
    }
    ctx->pc = 0x28BE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE9Cu;
        // 0x28bea0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BEA4u;
label_28bea4:
    // 0x28bea4: 0x0  nop
    ctx->pc = 0x28bea4u;
    // NOP
    ctx->pc = 0x28bea8u;
}
