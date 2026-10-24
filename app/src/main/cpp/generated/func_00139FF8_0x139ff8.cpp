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

// Function: func_00139FF8
// Address: 0x139ff8 - 0x13ad90
void func_00139FF8_0x139ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00139FF8_0x139ff8");
#endif

    switch (ctx->pc) {
        case 0x139ff8u: goto label_139ff8;
        case 0x139ffcu: goto label_139ffc;
        case 0x13a000u: goto label_13a000;
        case 0x13a004u: goto label_13a004;
        case 0x13a008u: goto label_13a008;
        case 0x13a00cu: goto label_13a00c;
        case 0x13a010u: goto label_13a010;
        case 0x13a014u: goto label_13a014;
        case 0x13a018u: goto label_13a018;
        case 0x13a01cu: goto label_13a01c;
        case 0x13a020u: goto label_13a020;
        case 0x13a024u: goto label_13a024;
        case 0x13a028u: goto label_13a028;
        case 0x13a02cu: goto label_13a02c;
        case 0x13a030u: goto label_13a030;
        case 0x13a034u: goto label_13a034;
        case 0x13a038u: goto label_13a038;
        case 0x13a03cu: goto label_13a03c;
        case 0x13a040u: goto label_13a040;
        case 0x13a044u: goto label_13a044;
        case 0x13a048u: goto label_13a048;
        case 0x13a04cu: goto label_13a04c;
        case 0x13a050u: goto label_13a050;
        case 0x13a054u: goto label_13a054;
        case 0x13a058u: goto label_13a058;
        case 0x13a05cu: goto label_13a05c;
        case 0x13a060u: goto label_13a060;
        case 0x13a064u: goto label_13a064;
        case 0x13a068u: goto label_13a068;
        case 0x13a06cu: goto label_13a06c;
        case 0x13a070u: goto label_13a070;
        case 0x13a074u: goto label_13a074;
        case 0x13a078u: goto label_13a078;
        case 0x13a07cu: goto label_13a07c;
        case 0x13a080u: goto label_13a080;
        case 0x13a084u: goto label_13a084;
        case 0x13a088u: goto label_13a088;
        case 0x13a08cu: goto label_13a08c;
        case 0x13a090u: goto label_13a090;
        case 0x13a094u: goto label_13a094;
        case 0x13a098u: goto label_13a098;
        case 0x13a09cu: goto label_13a09c;
        case 0x13a0a0u: goto label_13a0a0;
        case 0x13a0a4u: goto label_13a0a4;
        case 0x13a0a8u: goto label_13a0a8;
        case 0x13a0acu: goto label_13a0ac;
        case 0x13a0b0u: goto label_13a0b0;
        case 0x13a0b4u: goto label_13a0b4;
        case 0x13a0b8u: goto label_13a0b8;
        case 0x13a0bcu: goto label_13a0bc;
        case 0x13a0c0u: goto label_13a0c0;
        case 0x13a0c4u: goto label_13a0c4;
        case 0x13a0c8u: goto label_13a0c8;
        case 0x13a0ccu: goto label_13a0cc;
        case 0x13a0d0u: goto label_13a0d0;
        case 0x13a0d4u: goto label_13a0d4;
        case 0x13a0d8u: goto label_13a0d8;
        case 0x13a0dcu: goto label_13a0dc;
        case 0x13a0e0u: goto label_13a0e0;
        case 0x13a0e4u: goto label_13a0e4;
        case 0x13a0e8u: goto label_13a0e8;
        case 0x13a0ecu: goto label_13a0ec;
        case 0x13a0f0u: goto label_13a0f0;
        case 0x13a0f4u: goto label_13a0f4;
        case 0x13a0f8u: goto label_13a0f8;
        case 0x13a0fcu: goto label_13a0fc;
        case 0x13a100u: goto label_13a100;
        case 0x13a104u: goto label_13a104;
        case 0x13a108u: goto label_13a108;
        case 0x13a10cu: goto label_13a10c;
        case 0x13a110u: goto label_13a110;
        case 0x13a114u: goto label_13a114;
        case 0x13a118u: goto label_13a118;
        case 0x13a11cu: goto label_13a11c;
        case 0x13a120u: goto label_13a120;
        case 0x13a124u: goto label_13a124;
        case 0x13a128u: goto label_13a128;
        case 0x13a12cu: goto label_13a12c;
        case 0x13a130u: goto label_13a130;
        case 0x13a134u: goto label_13a134;
        case 0x13a138u: goto label_13a138;
        case 0x13a13cu: goto label_13a13c;
        case 0x13a140u: goto label_13a140;
        case 0x13a144u: goto label_13a144;
        case 0x13a148u: goto label_13a148;
        case 0x13a14cu: goto label_13a14c;
        case 0x13a150u: goto label_13a150;
        case 0x13a154u: goto label_13a154;
        case 0x13a158u: goto label_13a158;
        case 0x13a15cu: goto label_13a15c;
        case 0x13a160u: goto label_13a160;
        case 0x13a164u: goto label_13a164;
        case 0x13a168u: goto label_13a168;
        case 0x13a16cu: goto label_13a16c;
        case 0x13a170u: goto label_13a170;
        case 0x13a174u: goto label_13a174;
        case 0x13a178u: goto label_13a178;
        case 0x13a17cu: goto label_13a17c;
        case 0x13a180u: goto label_13a180;
        case 0x13a184u: goto label_13a184;
        case 0x13a188u: goto label_13a188;
        case 0x13a18cu: goto label_13a18c;
        case 0x13a190u: goto label_13a190;
        case 0x13a194u: goto label_13a194;
        case 0x13a198u: goto label_13a198;
        case 0x13a19cu: goto label_13a19c;
        case 0x13a1a0u: goto label_13a1a0;
        case 0x13a1a4u: goto label_13a1a4;
        case 0x13a1a8u: goto label_13a1a8;
        case 0x13a1acu: goto label_13a1ac;
        case 0x13a1b0u: goto label_13a1b0;
        case 0x13a1b4u: goto label_13a1b4;
        case 0x13a1b8u: goto label_13a1b8;
        case 0x13a1bcu: goto label_13a1bc;
        case 0x13a1c0u: goto label_13a1c0;
        case 0x13a1c4u: goto label_13a1c4;
        case 0x13a1c8u: goto label_13a1c8;
        case 0x13a1ccu: goto label_13a1cc;
        case 0x13a1d0u: goto label_13a1d0;
        case 0x13a1d4u: goto label_13a1d4;
        case 0x13a1d8u: goto label_13a1d8;
        case 0x13a1dcu: goto label_13a1dc;
        case 0x13a1e0u: goto label_13a1e0;
        case 0x13a1e4u: goto label_13a1e4;
        case 0x13a1e8u: goto label_13a1e8;
        case 0x13a1ecu: goto label_13a1ec;
        case 0x13a1f0u: goto label_13a1f0;
        case 0x13a1f4u: goto label_13a1f4;
        case 0x13a1f8u: goto label_13a1f8;
        case 0x13a1fcu: goto label_13a1fc;
        case 0x13a200u: goto label_13a200;
        case 0x13a204u: goto label_13a204;
        case 0x13a208u: goto label_13a208;
        case 0x13a20cu: goto label_13a20c;
        case 0x13a210u: goto label_13a210;
        case 0x13a214u: goto label_13a214;
        case 0x13a218u: goto label_13a218;
        case 0x13a21cu: goto label_13a21c;
        case 0x13a220u: goto label_13a220;
        case 0x13a224u: goto label_13a224;
        case 0x13a228u: goto label_13a228;
        case 0x13a22cu: goto label_13a22c;
        case 0x13a230u: goto label_13a230;
        case 0x13a234u: goto label_13a234;
        case 0x13a238u: goto label_13a238;
        case 0x13a23cu: goto label_13a23c;
        case 0x13a240u: goto label_13a240;
        case 0x13a244u: goto label_13a244;
        case 0x13a248u: goto label_13a248;
        case 0x13a24cu: goto label_13a24c;
        case 0x13a250u: goto label_13a250;
        case 0x13a254u: goto label_13a254;
        case 0x13a258u: goto label_13a258;
        case 0x13a25cu: goto label_13a25c;
        case 0x13a260u: goto label_13a260;
        case 0x13a264u: goto label_13a264;
        case 0x13a268u: goto label_13a268;
        case 0x13a26cu: goto label_13a26c;
        case 0x13a270u: goto label_13a270;
        case 0x13a274u: goto label_13a274;
        case 0x13a278u: goto label_13a278;
        case 0x13a27cu: goto label_13a27c;
        case 0x13a280u: goto label_13a280;
        case 0x13a284u: goto label_13a284;
        case 0x13a288u: goto label_13a288;
        case 0x13a28cu: goto label_13a28c;
        case 0x13a290u: goto label_13a290;
        case 0x13a294u: goto label_13a294;
        case 0x13a298u: goto label_13a298;
        case 0x13a29cu: goto label_13a29c;
        case 0x13a2a0u: goto label_13a2a0;
        case 0x13a2a4u: goto label_13a2a4;
        case 0x13a2a8u: goto label_13a2a8;
        case 0x13a2acu: goto label_13a2ac;
        case 0x13a2b0u: goto label_13a2b0;
        case 0x13a2b4u: goto label_13a2b4;
        case 0x13a2b8u: goto label_13a2b8;
        case 0x13a2bcu: goto label_13a2bc;
        case 0x13a2c0u: goto label_13a2c0;
        case 0x13a2c4u: goto label_13a2c4;
        case 0x13a2c8u: goto label_13a2c8;
        case 0x13a2ccu: goto label_13a2cc;
        case 0x13a2d0u: goto label_13a2d0;
        case 0x13a2d4u: goto label_13a2d4;
        case 0x13a2d8u: goto label_13a2d8;
        case 0x13a2dcu: goto label_13a2dc;
        case 0x13a2e0u: goto label_13a2e0;
        case 0x13a2e4u: goto label_13a2e4;
        case 0x13a2e8u: goto label_13a2e8;
        case 0x13a2ecu: goto label_13a2ec;
        case 0x13a2f0u: goto label_13a2f0;
        case 0x13a2f4u: goto label_13a2f4;
        case 0x13a2f8u: goto label_13a2f8;
        case 0x13a2fcu: goto label_13a2fc;
        case 0x13a300u: goto label_13a300;
        case 0x13a304u: goto label_13a304;
        case 0x13a308u: goto label_13a308;
        case 0x13a30cu: goto label_13a30c;
        case 0x13a310u: goto label_13a310;
        case 0x13a314u: goto label_13a314;
        case 0x13a318u: goto label_13a318;
        case 0x13a31cu: goto label_13a31c;
        case 0x13a320u: goto label_13a320;
        case 0x13a324u: goto label_13a324;
        case 0x13a328u: goto label_13a328;
        case 0x13a32cu: goto label_13a32c;
        case 0x13a330u: goto label_13a330;
        case 0x13a334u: goto label_13a334;
        case 0x13a338u: goto label_13a338;
        case 0x13a33cu: goto label_13a33c;
        case 0x13a340u: goto label_13a340;
        case 0x13a344u: goto label_13a344;
        case 0x13a348u: goto label_13a348;
        case 0x13a34cu: goto label_13a34c;
        case 0x13a350u: goto label_13a350;
        case 0x13a354u: goto label_13a354;
        case 0x13a358u: goto label_13a358;
        case 0x13a35cu: goto label_13a35c;
        case 0x13a360u: goto label_13a360;
        case 0x13a364u: goto label_13a364;
        case 0x13a368u: goto label_13a368;
        case 0x13a36cu: goto label_13a36c;
        case 0x13a370u: goto label_13a370;
        case 0x13a374u: goto label_13a374;
        case 0x13a378u: goto label_13a378;
        case 0x13a37cu: goto label_13a37c;
        case 0x13a380u: goto label_13a380;
        case 0x13a384u: goto label_13a384;
        case 0x13a388u: goto label_13a388;
        case 0x13a38cu: goto label_13a38c;
        case 0x13a390u: goto label_13a390;
        case 0x13a394u: goto label_13a394;
        case 0x13a398u: goto label_13a398;
        case 0x13a39cu: goto label_13a39c;
        case 0x13a3a0u: goto label_13a3a0;
        case 0x13a3a4u: goto label_13a3a4;
        case 0x13a3a8u: goto label_13a3a8;
        case 0x13a3acu: goto label_13a3ac;
        case 0x13a3b0u: goto label_13a3b0;
        case 0x13a3b4u: goto label_13a3b4;
        case 0x13a3b8u: goto label_13a3b8;
        case 0x13a3bcu: goto label_13a3bc;
        case 0x13a3c0u: goto label_13a3c0;
        case 0x13a3c4u: goto label_13a3c4;
        case 0x13a3c8u: goto label_13a3c8;
        case 0x13a3ccu: goto label_13a3cc;
        case 0x13a3d0u: goto label_13a3d0;
        case 0x13a3d4u: goto label_13a3d4;
        case 0x13a3d8u: goto label_13a3d8;
        case 0x13a3dcu: goto label_13a3dc;
        case 0x13a3e0u: goto label_13a3e0;
        case 0x13a3e4u: goto label_13a3e4;
        case 0x13a3e8u: goto label_13a3e8;
        case 0x13a3ecu: goto label_13a3ec;
        case 0x13a3f0u: goto label_13a3f0;
        case 0x13a3f4u: goto label_13a3f4;
        case 0x13a3f8u: goto label_13a3f8;
        case 0x13a3fcu: goto label_13a3fc;
        case 0x13a400u: goto label_13a400;
        case 0x13a404u: goto label_13a404;
        case 0x13a408u: goto label_13a408;
        case 0x13a40cu: goto label_13a40c;
        case 0x13a410u: goto label_13a410;
        case 0x13a414u: goto label_13a414;
        case 0x13a418u: goto label_13a418;
        case 0x13a41cu: goto label_13a41c;
        case 0x13a420u: goto label_13a420;
        case 0x13a424u: goto label_13a424;
        case 0x13a428u: goto label_13a428;
        case 0x13a42cu: goto label_13a42c;
        case 0x13a430u: goto label_13a430;
        case 0x13a434u: goto label_13a434;
        case 0x13a438u: goto label_13a438;
        case 0x13a43cu: goto label_13a43c;
        case 0x13a440u: goto label_13a440;
        case 0x13a444u: goto label_13a444;
        case 0x13a448u: goto label_13a448;
        case 0x13a44cu: goto label_13a44c;
        case 0x13a450u: goto label_13a450;
        case 0x13a454u: goto label_13a454;
        case 0x13a458u: goto label_13a458;
        case 0x13a45cu: goto label_13a45c;
        case 0x13a460u: goto label_13a460;
        case 0x13a464u: goto label_13a464;
        case 0x13a468u: goto label_13a468;
        case 0x13a46cu: goto label_13a46c;
        case 0x13a470u: goto label_13a470;
        case 0x13a474u: goto label_13a474;
        case 0x13a478u: goto label_13a478;
        case 0x13a47cu: goto label_13a47c;
        case 0x13a480u: goto label_13a480;
        case 0x13a484u: goto label_13a484;
        case 0x13a488u: goto label_13a488;
        case 0x13a48cu: goto label_13a48c;
        case 0x13a490u: goto label_13a490;
        case 0x13a494u: goto label_13a494;
        case 0x13a498u: goto label_13a498;
        case 0x13a49cu: goto label_13a49c;
        case 0x13a4a0u: goto label_13a4a0;
        case 0x13a4a4u: goto label_13a4a4;
        case 0x13a4a8u: goto label_13a4a8;
        case 0x13a4acu: goto label_13a4ac;
        case 0x13a4b0u: goto label_13a4b0;
        case 0x13a4b4u: goto label_13a4b4;
        case 0x13a4b8u: goto label_13a4b8;
        case 0x13a4bcu: goto label_13a4bc;
        case 0x13a4c0u: goto label_13a4c0;
        case 0x13a4c4u: goto label_13a4c4;
        case 0x13a4c8u: goto label_13a4c8;
        case 0x13a4ccu: goto label_13a4cc;
        case 0x13a4d0u: goto label_13a4d0;
        case 0x13a4d4u: goto label_13a4d4;
        case 0x13a4d8u: goto label_13a4d8;
        case 0x13a4dcu: goto label_13a4dc;
        case 0x13a4e0u: goto label_13a4e0;
        case 0x13a4e4u: goto label_13a4e4;
        case 0x13a4e8u: goto label_13a4e8;
        case 0x13a4ecu: goto label_13a4ec;
        case 0x13a4f0u: goto label_13a4f0;
        case 0x13a4f4u: goto label_13a4f4;
        case 0x13a4f8u: goto label_13a4f8;
        case 0x13a4fcu: goto label_13a4fc;
        case 0x13a500u: goto label_13a500;
        case 0x13a504u: goto label_13a504;
        case 0x13a508u: goto label_13a508;
        case 0x13a50cu: goto label_13a50c;
        case 0x13a510u: goto label_13a510;
        case 0x13a514u: goto label_13a514;
        case 0x13a518u: goto label_13a518;
        case 0x13a51cu: goto label_13a51c;
        case 0x13a520u: goto label_13a520;
        case 0x13a524u: goto label_13a524;
        case 0x13a528u: goto label_13a528;
        case 0x13a52cu: goto label_13a52c;
        case 0x13a530u: goto label_13a530;
        case 0x13a534u: goto label_13a534;
        case 0x13a538u: goto label_13a538;
        case 0x13a53cu: goto label_13a53c;
        case 0x13a540u: goto label_13a540;
        case 0x13a544u: goto label_13a544;
        case 0x13a548u: goto label_13a548;
        case 0x13a54cu: goto label_13a54c;
        case 0x13a550u: goto label_13a550;
        case 0x13a554u: goto label_13a554;
        case 0x13a558u: goto label_13a558;
        case 0x13a55cu: goto label_13a55c;
        case 0x13a560u: goto label_13a560;
        case 0x13a564u: goto label_13a564;
        case 0x13a568u: goto label_13a568;
        case 0x13a56cu: goto label_13a56c;
        case 0x13a570u: goto label_13a570;
        case 0x13a574u: goto label_13a574;
        case 0x13a578u: goto label_13a578;
        case 0x13a57cu: goto label_13a57c;
        case 0x13a580u: goto label_13a580;
        case 0x13a584u: goto label_13a584;
        case 0x13a588u: goto label_13a588;
        case 0x13a58cu: goto label_13a58c;
        case 0x13a590u: goto label_13a590;
        case 0x13a594u: goto label_13a594;
        case 0x13a598u: goto label_13a598;
        case 0x13a59cu: goto label_13a59c;
        case 0x13a5a0u: goto label_13a5a0;
        case 0x13a5a4u: goto label_13a5a4;
        case 0x13a5a8u: goto label_13a5a8;
        case 0x13a5acu: goto label_13a5ac;
        case 0x13a5b0u: goto label_13a5b0;
        case 0x13a5b4u: goto label_13a5b4;
        case 0x13a5b8u: goto label_13a5b8;
        case 0x13a5bcu: goto label_13a5bc;
        case 0x13a5c0u: goto label_13a5c0;
        case 0x13a5c4u: goto label_13a5c4;
        case 0x13a5c8u: goto label_13a5c8;
        case 0x13a5ccu: goto label_13a5cc;
        case 0x13a5d0u: goto label_13a5d0;
        case 0x13a5d4u: goto label_13a5d4;
        case 0x13a5d8u: goto label_13a5d8;
        case 0x13a5dcu: goto label_13a5dc;
        case 0x13a5e0u: goto label_13a5e0;
        case 0x13a5e4u: goto label_13a5e4;
        case 0x13a5e8u: goto label_13a5e8;
        case 0x13a5ecu: goto label_13a5ec;
        case 0x13a5f0u: goto label_13a5f0;
        case 0x13a5f4u: goto label_13a5f4;
        case 0x13a5f8u: goto label_13a5f8;
        case 0x13a5fcu: goto label_13a5fc;
        case 0x13a600u: goto label_13a600;
        case 0x13a604u: goto label_13a604;
        case 0x13a608u: goto label_13a608;
        case 0x13a60cu: goto label_13a60c;
        case 0x13a610u: goto label_13a610;
        case 0x13a614u: goto label_13a614;
        case 0x13a618u: goto label_13a618;
        case 0x13a61cu: goto label_13a61c;
        case 0x13a620u: goto label_13a620;
        case 0x13a624u: goto label_13a624;
        case 0x13a628u: goto label_13a628;
        case 0x13a62cu: goto label_13a62c;
        case 0x13a630u: goto label_13a630;
        case 0x13a634u: goto label_13a634;
        case 0x13a638u: goto label_13a638;
        case 0x13a63cu: goto label_13a63c;
        case 0x13a640u: goto label_13a640;
        case 0x13a644u: goto label_13a644;
        case 0x13a648u: goto label_13a648;
        case 0x13a64cu: goto label_13a64c;
        case 0x13a650u: goto label_13a650;
        case 0x13a654u: goto label_13a654;
        case 0x13a658u: goto label_13a658;
        case 0x13a65cu: goto label_13a65c;
        case 0x13a660u: goto label_13a660;
        case 0x13a664u: goto label_13a664;
        case 0x13a668u: goto label_13a668;
        case 0x13a66cu: goto label_13a66c;
        case 0x13a670u: goto label_13a670;
        case 0x13a674u: goto label_13a674;
        case 0x13a678u: goto label_13a678;
        case 0x13a67cu: goto label_13a67c;
        case 0x13a680u: goto label_13a680;
        case 0x13a684u: goto label_13a684;
        case 0x13a688u: goto label_13a688;
        case 0x13a68cu: goto label_13a68c;
        case 0x13a690u: goto label_13a690;
        case 0x13a694u: goto label_13a694;
        case 0x13a698u: goto label_13a698;
        case 0x13a69cu: goto label_13a69c;
        case 0x13a6a0u: goto label_13a6a0;
        case 0x13a6a4u: goto label_13a6a4;
        case 0x13a6a8u: goto label_13a6a8;
        case 0x13a6acu: goto label_13a6ac;
        case 0x13a6b0u: goto label_13a6b0;
        case 0x13a6b4u: goto label_13a6b4;
        case 0x13a6b8u: goto label_13a6b8;
        case 0x13a6bcu: goto label_13a6bc;
        case 0x13a6c0u: goto label_13a6c0;
        case 0x13a6c4u: goto label_13a6c4;
        case 0x13a6c8u: goto label_13a6c8;
        case 0x13a6ccu: goto label_13a6cc;
        case 0x13a6d0u: goto label_13a6d0;
        case 0x13a6d4u: goto label_13a6d4;
        case 0x13a6d8u: goto label_13a6d8;
        case 0x13a6dcu: goto label_13a6dc;
        case 0x13a6e0u: goto label_13a6e0;
        case 0x13a6e4u: goto label_13a6e4;
        case 0x13a6e8u: goto label_13a6e8;
        case 0x13a6ecu: goto label_13a6ec;
        case 0x13a6f0u: goto label_13a6f0;
        case 0x13a6f4u: goto label_13a6f4;
        case 0x13a6f8u: goto label_13a6f8;
        case 0x13a6fcu: goto label_13a6fc;
        case 0x13a700u: goto label_13a700;
        case 0x13a704u: goto label_13a704;
        case 0x13a708u: goto label_13a708;
        case 0x13a70cu: goto label_13a70c;
        case 0x13a710u: goto label_13a710;
        case 0x13a714u: goto label_13a714;
        case 0x13a718u: goto label_13a718;
        case 0x13a71cu: goto label_13a71c;
        case 0x13a720u: goto label_13a720;
        case 0x13a724u: goto label_13a724;
        case 0x13a728u: goto label_13a728;
        case 0x13a72cu: goto label_13a72c;
        case 0x13a730u: goto label_13a730;
        case 0x13a734u: goto label_13a734;
        case 0x13a738u: goto label_13a738;
        case 0x13a73cu: goto label_13a73c;
        case 0x13a740u: goto label_13a740;
        case 0x13a744u: goto label_13a744;
        case 0x13a748u: goto label_13a748;
        case 0x13a74cu: goto label_13a74c;
        case 0x13a750u: goto label_13a750;
        case 0x13a754u: goto label_13a754;
        case 0x13a758u: goto label_13a758;
        case 0x13a75cu: goto label_13a75c;
        case 0x13a760u: goto label_13a760;
        case 0x13a764u: goto label_13a764;
        case 0x13a768u: goto label_13a768;
        case 0x13a76cu: goto label_13a76c;
        case 0x13a770u: goto label_13a770;
        case 0x13a774u: goto label_13a774;
        case 0x13a778u: goto label_13a778;
        case 0x13a77cu: goto label_13a77c;
        case 0x13a780u: goto label_13a780;
        case 0x13a784u: goto label_13a784;
        case 0x13a788u: goto label_13a788;
        case 0x13a78cu: goto label_13a78c;
        case 0x13a790u: goto label_13a790;
        case 0x13a794u: goto label_13a794;
        case 0x13a798u: goto label_13a798;
        case 0x13a79cu: goto label_13a79c;
        case 0x13a7a0u: goto label_13a7a0;
        case 0x13a7a4u: goto label_13a7a4;
        case 0x13a7a8u: goto label_13a7a8;
        case 0x13a7acu: goto label_13a7ac;
        case 0x13a7b0u: goto label_13a7b0;
        case 0x13a7b4u: goto label_13a7b4;
        case 0x13a7b8u: goto label_13a7b8;
        case 0x13a7bcu: goto label_13a7bc;
        case 0x13a7c0u: goto label_13a7c0;
        case 0x13a7c4u: goto label_13a7c4;
        case 0x13a7c8u: goto label_13a7c8;
        case 0x13a7ccu: goto label_13a7cc;
        case 0x13a7d0u: goto label_13a7d0;
        case 0x13a7d4u: goto label_13a7d4;
        case 0x13a7d8u: goto label_13a7d8;
        case 0x13a7dcu: goto label_13a7dc;
        case 0x13a7e0u: goto label_13a7e0;
        case 0x13a7e4u: goto label_13a7e4;
        case 0x13a7e8u: goto label_13a7e8;
        case 0x13a7ecu: goto label_13a7ec;
        case 0x13a7f0u: goto label_13a7f0;
        case 0x13a7f4u: goto label_13a7f4;
        case 0x13a7f8u: goto label_13a7f8;
        case 0x13a7fcu: goto label_13a7fc;
        case 0x13a800u: goto label_13a800;
        case 0x13a804u: goto label_13a804;
        case 0x13a808u: goto label_13a808;
        case 0x13a80cu: goto label_13a80c;
        case 0x13a810u: goto label_13a810;
        case 0x13a814u: goto label_13a814;
        case 0x13a818u: goto label_13a818;
        case 0x13a81cu: goto label_13a81c;
        case 0x13a820u: goto label_13a820;
        case 0x13a824u: goto label_13a824;
        case 0x13a828u: goto label_13a828;
        case 0x13a82cu: goto label_13a82c;
        case 0x13a830u: goto label_13a830;
        case 0x13a834u: goto label_13a834;
        case 0x13a838u: goto label_13a838;
        case 0x13a83cu: goto label_13a83c;
        case 0x13a840u: goto label_13a840;
        case 0x13a844u: goto label_13a844;
        case 0x13a848u: goto label_13a848;
        case 0x13a84cu: goto label_13a84c;
        case 0x13a850u: goto label_13a850;
        case 0x13a854u: goto label_13a854;
        case 0x13a858u: goto label_13a858;
        case 0x13a85cu: goto label_13a85c;
        case 0x13a860u: goto label_13a860;
        case 0x13a864u: goto label_13a864;
        case 0x13a868u: goto label_13a868;
        case 0x13a86cu: goto label_13a86c;
        case 0x13a870u: goto label_13a870;
        case 0x13a874u: goto label_13a874;
        case 0x13a878u: goto label_13a878;
        case 0x13a87cu: goto label_13a87c;
        case 0x13a880u: goto label_13a880;
        case 0x13a884u: goto label_13a884;
        case 0x13a888u: goto label_13a888;
        case 0x13a88cu: goto label_13a88c;
        case 0x13a890u: goto label_13a890;
        case 0x13a894u: goto label_13a894;
        case 0x13a898u: goto label_13a898;
        case 0x13a89cu: goto label_13a89c;
        case 0x13a8a0u: goto label_13a8a0;
        case 0x13a8a4u: goto label_13a8a4;
        case 0x13a8a8u: goto label_13a8a8;
        case 0x13a8acu: goto label_13a8ac;
        case 0x13a8b0u: goto label_13a8b0;
        case 0x13a8b4u: goto label_13a8b4;
        case 0x13a8b8u: goto label_13a8b8;
        case 0x13a8bcu: goto label_13a8bc;
        case 0x13a8c0u: goto label_13a8c0;
        case 0x13a8c4u: goto label_13a8c4;
        case 0x13a8c8u: goto label_13a8c8;
        case 0x13a8ccu: goto label_13a8cc;
        case 0x13a8d0u: goto label_13a8d0;
        case 0x13a8d4u: goto label_13a8d4;
        case 0x13a8d8u: goto label_13a8d8;
        case 0x13a8dcu: goto label_13a8dc;
        case 0x13a8e0u: goto label_13a8e0;
        case 0x13a8e4u: goto label_13a8e4;
        case 0x13a8e8u: goto label_13a8e8;
        case 0x13a8ecu: goto label_13a8ec;
        case 0x13a8f0u: goto label_13a8f0;
        case 0x13a8f4u: goto label_13a8f4;
        case 0x13a8f8u: goto label_13a8f8;
        case 0x13a8fcu: goto label_13a8fc;
        case 0x13a900u: goto label_13a900;
        case 0x13a904u: goto label_13a904;
        case 0x13a908u: goto label_13a908;
        case 0x13a90cu: goto label_13a90c;
        case 0x13a910u: goto label_13a910;
        case 0x13a914u: goto label_13a914;
        case 0x13a918u: goto label_13a918;
        case 0x13a91cu: goto label_13a91c;
        case 0x13a920u: goto label_13a920;
        case 0x13a924u: goto label_13a924;
        case 0x13a928u: goto label_13a928;
        case 0x13a92cu: goto label_13a92c;
        case 0x13a930u: goto label_13a930;
        case 0x13a934u: goto label_13a934;
        case 0x13a938u: goto label_13a938;
        case 0x13a93cu: goto label_13a93c;
        case 0x13a940u: goto label_13a940;
        case 0x13a944u: goto label_13a944;
        case 0x13a948u: goto label_13a948;
        case 0x13a94cu: goto label_13a94c;
        case 0x13a950u: goto label_13a950;
        case 0x13a954u: goto label_13a954;
        case 0x13a958u: goto label_13a958;
        case 0x13a95cu: goto label_13a95c;
        case 0x13a960u: goto label_13a960;
        case 0x13a964u: goto label_13a964;
        case 0x13a968u: goto label_13a968;
        case 0x13a96cu: goto label_13a96c;
        case 0x13a970u: goto label_13a970;
        case 0x13a974u: goto label_13a974;
        case 0x13a978u: goto label_13a978;
        case 0x13a97cu: goto label_13a97c;
        case 0x13a980u: goto label_13a980;
        case 0x13a984u: goto label_13a984;
        case 0x13a988u: goto label_13a988;
        case 0x13a98cu: goto label_13a98c;
        case 0x13a990u: goto label_13a990;
        case 0x13a994u: goto label_13a994;
        case 0x13a998u: goto label_13a998;
        case 0x13a99cu: goto label_13a99c;
        case 0x13a9a0u: goto label_13a9a0;
        case 0x13a9a4u: goto label_13a9a4;
        case 0x13a9a8u: goto label_13a9a8;
        case 0x13a9acu: goto label_13a9ac;
        case 0x13a9b0u: goto label_13a9b0;
        case 0x13a9b4u: goto label_13a9b4;
        case 0x13a9b8u: goto label_13a9b8;
        case 0x13a9bcu: goto label_13a9bc;
        case 0x13a9c0u: goto label_13a9c0;
        case 0x13a9c4u: goto label_13a9c4;
        case 0x13a9c8u: goto label_13a9c8;
        case 0x13a9ccu: goto label_13a9cc;
        case 0x13a9d0u: goto label_13a9d0;
        case 0x13a9d4u: goto label_13a9d4;
        case 0x13a9d8u: goto label_13a9d8;
        case 0x13a9dcu: goto label_13a9dc;
        case 0x13a9e0u: goto label_13a9e0;
        case 0x13a9e4u: goto label_13a9e4;
        case 0x13a9e8u: goto label_13a9e8;
        case 0x13a9ecu: goto label_13a9ec;
        case 0x13a9f0u: goto label_13a9f0;
        case 0x13a9f4u: goto label_13a9f4;
        case 0x13a9f8u: goto label_13a9f8;
        case 0x13a9fcu: goto label_13a9fc;
        case 0x13aa00u: goto label_13aa00;
        case 0x13aa04u: goto label_13aa04;
        case 0x13aa08u: goto label_13aa08;
        case 0x13aa0cu: goto label_13aa0c;
        case 0x13aa10u: goto label_13aa10;
        case 0x13aa14u: goto label_13aa14;
        case 0x13aa18u: goto label_13aa18;
        case 0x13aa1cu: goto label_13aa1c;
        case 0x13aa20u: goto label_13aa20;
        case 0x13aa24u: goto label_13aa24;
        case 0x13aa28u: goto label_13aa28;
        case 0x13aa2cu: goto label_13aa2c;
        case 0x13aa30u: goto label_13aa30;
        case 0x13aa34u: goto label_13aa34;
        case 0x13aa38u: goto label_13aa38;
        case 0x13aa3cu: goto label_13aa3c;
        case 0x13aa40u: goto label_13aa40;
        case 0x13aa44u: goto label_13aa44;
        case 0x13aa48u: goto label_13aa48;
        case 0x13aa4cu: goto label_13aa4c;
        case 0x13aa50u: goto label_13aa50;
        case 0x13aa54u: goto label_13aa54;
        case 0x13aa58u: goto label_13aa58;
        case 0x13aa5cu: goto label_13aa5c;
        case 0x13aa60u: goto label_13aa60;
        case 0x13aa64u: goto label_13aa64;
        case 0x13aa68u: goto label_13aa68;
        case 0x13aa6cu: goto label_13aa6c;
        case 0x13aa70u: goto label_13aa70;
        case 0x13aa74u: goto label_13aa74;
        case 0x13aa78u: goto label_13aa78;
        case 0x13aa7cu: goto label_13aa7c;
        case 0x13aa80u: goto label_13aa80;
        case 0x13aa84u: goto label_13aa84;
        case 0x13aa88u: goto label_13aa88;
        case 0x13aa8cu: goto label_13aa8c;
        case 0x13aa90u: goto label_13aa90;
        case 0x13aa94u: goto label_13aa94;
        case 0x13aa98u: goto label_13aa98;
        case 0x13aa9cu: goto label_13aa9c;
        case 0x13aaa0u: goto label_13aaa0;
        case 0x13aaa4u: goto label_13aaa4;
        case 0x13aaa8u: goto label_13aaa8;
        case 0x13aaacu: goto label_13aaac;
        case 0x13aab0u: goto label_13aab0;
        case 0x13aab4u: goto label_13aab4;
        case 0x13aab8u: goto label_13aab8;
        case 0x13aabcu: goto label_13aabc;
        case 0x13aac0u: goto label_13aac0;
        case 0x13aac4u: goto label_13aac4;
        case 0x13aac8u: goto label_13aac8;
        case 0x13aaccu: goto label_13aacc;
        case 0x13aad0u: goto label_13aad0;
        case 0x13aad4u: goto label_13aad4;
        case 0x13aad8u: goto label_13aad8;
        case 0x13aadcu: goto label_13aadc;
        case 0x13aae0u: goto label_13aae0;
        case 0x13aae4u: goto label_13aae4;
        case 0x13aae8u: goto label_13aae8;
        case 0x13aaecu: goto label_13aaec;
        case 0x13aaf0u: goto label_13aaf0;
        case 0x13aaf4u: goto label_13aaf4;
        case 0x13aaf8u: goto label_13aaf8;
        case 0x13aafcu: goto label_13aafc;
        case 0x13ab00u: goto label_13ab00;
        case 0x13ab04u: goto label_13ab04;
        case 0x13ab08u: goto label_13ab08;
        case 0x13ab0cu: goto label_13ab0c;
        case 0x13ab10u: goto label_13ab10;
        case 0x13ab14u: goto label_13ab14;
        case 0x13ab18u: goto label_13ab18;
        case 0x13ab1cu: goto label_13ab1c;
        case 0x13ab20u: goto label_13ab20;
        case 0x13ab24u: goto label_13ab24;
        case 0x13ab28u: goto label_13ab28;
        case 0x13ab2cu: goto label_13ab2c;
        case 0x13ab30u: goto label_13ab30;
        case 0x13ab34u: goto label_13ab34;
        case 0x13ab38u: goto label_13ab38;
        case 0x13ab3cu: goto label_13ab3c;
        case 0x13ab40u: goto label_13ab40;
        case 0x13ab44u: goto label_13ab44;
        case 0x13ab48u: goto label_13ab48;
        case 0x13ab4cu: goto label_13ab4c;
        case 0x13ab50u: goto label_13ab50;
        case 0x13ab54u: goto label_13ab54;
        case 0x13ab58u: goto label_13ab58;
        case 0x13ab5cu: goto label_13ab5c;
        case 0x13ab60u: goto label_13ab60;
        case 0x13ab64u: goto label_13ab64;
        case 0x13ab68u: goto label_13ab68;
        case 0x13ab6cu: goto label_13ab6c;
        case 0x13ab70u: goto label_13ab70;
        case 0x13ab74u: goto label_13ab74;
        case 0x13ab78u: goto label_13ab78;
        case 0x13ab7cu: goto label_13ab7c;
        case 0x13ab80u: goto label_13ab80;
        case 0x13ab84u: goto label_13ab84;
        case 0x13ab88u: goto label_13ab88;
        case 0x13ab8cu: goto label_13ab8c;
        case 0x13ab90u: goto label_13ab90;
        case 0x13ab94u: goto label_13ab94;
        case 0x13ab98u: goto label_13ab98;
        case 0x13ab9cu: goto label_13ab9c;
        case 0x13aba0u: goto label_13aba0;
        case 0x13aba4u: goto label_13aba4;
        case 0x13aba8u: goto label_13aba8;
        case 0x13abacu: goto label_13abac;
        case 0x13abb0u: goto label_13abb0;
        case 0x13abb4u: goto label_13abb4;
        case 0x13abb8u: goto label_13abb8;
        case 0x13abbcu: goto label_13abbc;
        case 0x13abc0u: goto label_13abc0;
        case 0x13abc4u: goto label_13abc4;
        case 0x13abc8u: goto label_13abc8;
        case 0x13abccu: goto label_13abcc;
        case 0x13abd0u: goto label_13abd0;
        case 0x13abd4u: goto label_13abd4;
        case 0x13abd8u: goto label_13abd8;
        case 0x13abdcu: goto label_13abdc;
        case 0x13abe0u: goto label_13abe0;
        case 0x13abe4u: goto label_13abe4;
        case 0x13abe8u: goto label_13abe8;
        case 0x13abecu: goto label_13abec;
        case 0x13abf0u: goto label_13abf0;
        case 0x13abf4u: goto label_13abf4;
        case 0x13abf8u: goto label_13abf8;
        case 0x13abfcu: goto label_13abfc;
        case 0x13ac00u: goto label_13ac00;
        case 0x13ac04u: goto label_13ac04;
        case 0x13ac08u: goto label_13ac08;
        case 0x13ac0cu: goto label_13ac0c;
        case 0x13ac10u: goto label_13ac10;
        case 0x13ac14u: goto label_13ac14;
        case 0x13ac18u: goto label_13ac18;
        case 0x13ac1cu: goto label_13ac1c;
        case 0x13ac20u: goto label_13ac20;
        case 0x13ac24u: goto label_13ac24;
        case 0x13ac28u: goto label_13ac28;
        case 0x13ac2cu: goto label_13ac2c;
        case 0x13ac30u: goto label_13ac30;
        case 0x13ac34u: goto label_13ac34;
        case 0x13ac38u: goto label_13ac38;
        case 0x13ac3cu: goto label_13ac3c;
        case 0x13ac40u: goto label_13ac40;
        case 0x13ac44u: goto label_13ac44;
        case 0x13ac48u: goto label_13ac48;
        case 0x13ac4cu: goto label_13ac4c;
        case 0x13ac50u: goto label_13ac50;
        case 0x13ac54u: goto label_13ac54;
        case 0x13ac58u: goto label_13ac58;
        case 0x13ac5cu: goto label_13ac5c;
        case 0x13ac60u: goto label_13ac60;
        case 0x13ac64u: goto label_13ac64;
        case 0x13ac68u: goto label_13ac68;
        case 0x13ac6cu: goto label_13ac6c;
        case 0x13ac70u: goto label_13ac70;
        case 0x13ac74u: goto label_13ac74;
        case 0x13ac78u: goto label_13ac78;
        case 0x13ac7cu: goto label_13ac7c;
        case 0x13ac80u: goto label_13ac80;
        case 0x13ac84u: goto label_13ac84;
        case 0x13ac88u: goto label_13ac88;
        case 0x13ac8cu: goto label_13ac8c;
        case 0x13ac90u: goto label_13ac90;
        case 0x13ac94u: goto label_13ac94;
        case 0x13ac98u: goto label_13ac98;
        case 0x13ac9cu: goto label_13ac9c;
        case 0x13aca0u: goto label_13aca0;
        case 0x13aca4u: goto label_13aca4;
        case 0x13aca8u: goto label_13aca8;
        case 0x13acacu: goto label_13acac;
        case 0x13acb0u: goto label_13acb0;
        case 0x13acb4u: goto label_13acb4;
        case 0x13acb8u: goto label_13acb8;
        case 0x13acbcu: goto label_13acbc;
        case 0x13acc0u: goto label_13acc0;
        case 0x13acc4u: goto label_13acc4;
        case 0x13acc8u: goto label_13acc8;
        case 0x13acccu: goto label_13accc;
        case 0x13acd0u: goto label_13acd0;
        case 0x13acd4u: goto label_13acd4;
        case 0x13acd8u: goto label_13acd8;
        case 0x13acdcu: goto label_13acdc;
        case 0x13ace0u: goto label_13ace0;
        case 0x13ace4u: goto label_13ace4;
        case 0x13ace8u: goto label_13ace8;
        case 0x13acecu: goto label_13acec;
        case 0x13acf0u: goto label_13acf0;
        case 0x13acf4u: goto label_13acf4;
        case 0x13acf8u: goto label_13acf8;
        case 0x13acfcu: goto label_13acfc;
        case 0x13ad00u: goto label_13ad00;
        case 0x13ad04u: goto label_13ad04;
        case 0x13ad08u: goto label_13ad08;
        case 0x13ad0cu: goto label_13ad0c;
        case 0x13ad10u: goto label_13ad10;
        case 0x13ad14u: goto label_13ad14;
        case 0x13ad18u: goto label_13ad18;
        case 0x13ad1cu: goto label_13ad1c;
        case 0x13ad20u: goto label_13ad20;
        case 0x13ad24u: goto label_13ad24;
        case 0x13ad28u: goto label_13ad28;
        case 0x13ad2cu: goto label_13ad2c;
        case 0x13ad30u: goto label_13ad30;
        case 0x13ad34u: goto label_13ad34;
        case 0x13ad38u: goto label_13ad38;
        case 0x13ad3cu: goto label_13ad3c;
        case 0x13ad40u: goto label_13ad40;
        case 0x13ad44u: goto label_13ad44;
        case 0x13ad48u: goto label_13ad48;
        case 0x13ad4cu: goto label_13ad4c;
        case 0x13ad50u: goto label_13ad50;
        case 0x13ad54u: goto label_13ad54;
        case 0x13ad58u: goto label_13ad58;
        case 0x13ad5cu: goto label_13ad5c;
        case 0x13ad60u: goto label_13ad60;
        case 0x13ad64u: goto label_13ad64;
        case 0x13ad68u: goto label_13ad68;
        case 0x13ad6cu: goto label_13ad6c;
        case 0x13ad70u: goto label_13ad70;
        case 0x13ad74u: goto label_13ad74;
        case 0x13ad78u: goto label_13ad78;
        case 0x13ad7cu: goto label_13ad7c;
        case 0x13ad80u: goto label_13ad80;
        case 0x13ad84u: goto label_13ad84;
        case 0x13ad88u: goto label_13ad88;
        case 0x13ad8cu: goto label_13ad8c;
        default: break;
    }

    ctx->pc = 0x139ff8u;

label_139ff8:
    // 0x139ff8: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x139ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
label_139ffc:
    // 0x139ffc: 0x7fb10270  sq          $s1, 0x270($sp)
    ctx->pc = 0x139ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 17));
label_13a000:
    // 0x13a000: 0x7fb70210  sq          $s7, 0x210($sp)
    ctx->pc = 0x13a000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 23));
label_13a004:
    // 0x13a004: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13a004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13a008:
    // 0x13a008: 0x7fb00280  sq          $s0, 0x280($sp)
    ctx->pc = 0x13a008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 16));
label_13a00c:
    // 0x13a00c: 0x7fb20260  sq          $s2, 0x260($sp)
    ctx->pc = 0x13a00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 18));
label_13a010:
    // 0x13a010: 0x7fb30250  sq          $s3, 0x250($sp)
    ctx->pc = 0x13a010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 19));
label_13a014:
    // 0x13a014: 0x7fb40240  sq          $s4, 0x240($sp)
    ctx->pc = 0x13a014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 20));
label_13a018:
    // 0x13a018: 0x7fb50230  sq          $s5, 0x230($sp)
    ctx->pc = 0x13a018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 21));
label_13a01c:
    // 0x13a01c: 0x7fb60220  sq          $s6, 0x220($sp)
    ctx->pc = 0x13a01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 22));
label_13a020:
    // 0x13a020: 0x7fbe0200  sq          $fp, 0x200($sp)
    ctx->pc = 0x13a020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 30));
label_13a024:
    // 0x13a024: 0xffbf01f0  sd          $ra, 0x1F0($sp)
    ctx->pc = 0x13a024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 31));
label_13a028:
    // 0x13a028: 0xe7b602a0  swc1        $f22, 0x2A0($sp)
    ctx->pc = 0x13a028u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_13a02c:
    // 0x13a02c: 0xe7b50298  swc1        $f21, 0x298($sp)
    ctx->pc = 0x13a02cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
label_13a030:
    // 0x13a030: 0xc0b6dac  jal         func_2DB6B0
label_13a034:
    if (ctx->pc == 0x13A034u) {
        ctx->pc = 0x13A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A030u;
        // 0x13a034: 0xe7b40290  swc1        $f20, 0x290($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A038u;
        goto label_13a038;
    }
    ctx->pc = 0x13A030u;
    SET_GPR_U32(ctx, 31, 0x13A038u);
    ctx->pc = 0x13A034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A030u;
    // 0x13a034: 0xe7b40290  swc1        $f20, 0x290($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A030u, 0x13A038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A038u;
label_13a038:
    // 0x13a038: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x13a038u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a03c:
    // 0x13a03c: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x13a03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_13a040:
    // 0x13a040: 0x8e220518  lw          $v0, 0x518($s1)
    ctx->pc = 0x13a040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
label_13a044:
    // 0x13a044: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_13a048:
    if (ctx->pc == 0x13A048u) {
        ctx->pc = 0x13A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A044u;
        // 0x13a048: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A04Cu;
        goto label_13a04c;
    }
    ctx->pc = 0x13A044u;
    {
        const bool branch_taken_0x13a044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A044u;
        // 0x13a048: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a044) {
            ctx->pc = 0x13A050u;
            goto label_13a050;
        }
    }
    ctx->pc = 0x13A04Cu;
label_13a04c:
    // 0x13a04c: 0xae220518  sw          $v0, 0x518($s1)
    ctx->pc = 0x13a04cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 2));
label_13a050:
    // 0x13a050: 0xc0b6dac  jal         func_2DB6B0
label_13a054:
    if (ctx->pc == 0x13A054u) {
        ctx->pc = 0x13A058u;
        goto label_13a058;
    }
    ctx->pc = 0x13A050u;
    SET_GPR_U32(ctx, 31, 0x13A058u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A050u, 0x13A058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A058u;
label_13a058:
    // 0x13a058: 0xc45515f0  lwc1        $f21, 0x15F0($v0)
    ctx->pc = 0x13a058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_13a05c:
    // 0x13a05c: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x13a05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_13a060:
    // 0x13a060: 0x8e2503f0  lw          $a1, 0x3F0($s1)
    ctx->pc = 0x13a060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
label_13a064:
    // 0x13a064: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13a064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13a068:
    // 0x13a068: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13a068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a06c:
    // 0x13a06c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13a06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13a070:
    // 0x13a070: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13a070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13a074:
    // 0x13a074: 0xc051dca  jal         func_147728
label_13a078:
    if (ctx->pc == 0x13A078u) {
        ctx->pc = 0x13A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A074u;
        // 0x13a078: 0x24a50100  addiu       $a1, $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A07Cu;
        goto label_13a07c;
    }
    ctx->pc = 0x13A074u;
    SET_GPR_U32(ctx, 31, 0x13A07Cu);
    ctx->pc = 0x13A078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A074u;
    // 0x13a078: 0x24a50100  addiu       $a1, $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x13A074u, 0x13A07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A07Cu;
label_13a07c:
    // 0x13a07c: 0x8e2303f0  lw          $v1, 0x3F0($s1)
    ctx->pc = 0x13a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
label_13a080:
    // 0x13a080: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13a080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13a084:
    // 0x13a084: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x13a084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13a088:
    // 0x13a088: 0x26260400  addiu       $a2, $s1, 0x400
    ctx->pc = 0x13a088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
label_13a08c:
    // 0x13a08c: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x13a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_13a090:
    // 0x13a090: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13a090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a094:
    // 0x13a094: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x13a094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_13a098:
    // 0x13a098: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x13a098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_13a09c:
    // 0x13a09c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x13a09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a0a0:
    // 0x13a0a0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x13a0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_13a0a4:
    // 0x13a0a4: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x13a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_13a0a8:
    // 0x13a0a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13a0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a0ac:
    // 0x13a0ac: 0xc0c28ac  jal         func_30A2B0
label_13a0b0:
    if (ctx->pc == 0x13A0B0u) {
        ctx->pc = 0x13A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A0ACu;
        // 0x13a0b0: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A0B4u;
        goto label_13a0b4;
    }
    ctx->pc = 0x13A0ACu;
    SET_GPR_U32(ctx, 31, 0x13A0B4u);
    ctx->pc = 0x13A0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A0ACu;
    // 0x13a0b0: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x13A0ACu, 0x13A0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A0B4u;
label_13a0b4:
    // 0x13a0b4: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x13a0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_13a0b8:
    // 0x13a0b8: 0x4615a181  sub.s       $f6, $f20, $f21
    ctx->pc = 0x13a0b8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_13a0bc:
    // 0x13a0bc: 0xc6200510  lwc1        $f0, 0x510($s1)
    ctx->pc = 0x13a0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a0c0:
    // 0x13a0c0: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x13a0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a0c4:
    // 0x13a0c4: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x13a0c4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_13a0c8:
    // 0x13a0c8: 0xc6240200  lwc1        $f4, 0x200($s1)
    ctx->pc = 0x13a0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_13a0cc:
    // 0x13a0cc: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x13a0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a0d0:
    // 0x13a0d0: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x13a0d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_13a0d4:
    // 0x13a0d4: 0xc6220204  lwc1        $f2, 0x204($s1)
    ctx->pc = 0x13a0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13a0d8:
    // 0x13a0d8: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x13a0d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_13a0dc:
    // 0x13a0dc: 0xc6230208  lwc1        $f3, 0x208($s1)
    ctx->pc = 0x13a0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13a0e0:
    // 0x13a0e0: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x13a0e0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
label_13a0e4:
    // 0x13a0e4: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x13a0e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_13a0e8:
    // 0x13a0e8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x13a0e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_13a0ec:
    // 0x13a0ec: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x13a0ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
label_13a0f0:
    // 0x13a0f0: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x13a0f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_13a0f4:
    // 0x13a0f4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x13a0f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_13a0f8:
    // 0x13a0f8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x13a0f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_13a0fc:
    // 0x13a0fc: 0xe6220204  swc1        $f2, 0x204($s1)
    ctx->pc = 0x13a0fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 516), bits); }
label_13a100:
    // 0x13a100: 0xe6240200  swc1        $f4, 0x200($s1)
    ctx->pc = 0x13a100u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
label_13a104:
    // 0x13a104: 0xe6230208  swc1        $f3, 0x208($s1)
    ctx->pc = 0x13a104u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 520), bits); }
label_13a108:
    // 0x13a108: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x13a108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
label_13a10c:
    // 0x13a10c: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x13a10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_13a110:
    // 0x13a110: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x13a110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_13a114:
    // 0x13a114: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x13a114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_13a118:
    // 0x13a118: 0xc0b6dac  jal         func_2DB6B0
label_13a11c:
    if (ctx->pc == 0x13A11Cu) {
        ctx->pc = 0x13A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A118u;
        // 0x13a11c: 0xe7b40098  swc1        $f20, 0x98($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A120u;
        goto label_13a120;
    }
    ctx->pc = 0x13A118u;
    SET_GPR_U32(ctx, 31, 0x13A120u);
    ctx->pc = 0x13A11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A118u;
    // 0x13a11c: 0xe7b40098  swc1        $f20, 0x98($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A118u, 0x13A120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A120u;
label_13a120:
    // 0x13a120: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x13a120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_13a124:
    // 0x13a124: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13a124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13a128:
    // 0x13a128: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x13a128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_13a12c:
    // 0x13a12c: 0xc0c28ac  jal         func_30A2B0
label_13a130:
    if (ctx->pc == 0x13A130u) {
        ctx->pc = 0x13A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A12Cu;
        // 0x13a130: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A134u;
        goto label_13a134;
    }
    ctx->pc = 0x13A12Cu;
    SET_GPR_U32(ctx, 31, 0x13A134u);
    ctx->pc = 0x13A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A12Cu;
    // 0x13a130: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x13A12Cu, 0x13A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A134u;
label_13a134:
    // 0x13a134: 0xc0b6dac  jal         func_2DB6B0
label_13a138:
    if (ctx->pc == 0x13A138u) {
        ctx->pc = 0x13A13Cu;
        goto label_13a13c;
    }
    ctx->pc = 0x13A134u;
    SET_GPR_U32(ctx, 31, 0x13A13Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A134u, 0x13A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A13Cu;
label_13a13c:
    // 0x13a13c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x13a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_13a140:
    // 0x13a140: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x13a140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a144:
    // 0x13a144: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x13a144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_13a148:
    // 0x13a148: 0xc0b6dac  jal         func_2DB6B0
label_13a14c:
    if (ctx->pc == 0x13A14Cu) {
        ctx->pc = 0x13A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A148u;
        // 0x13a14c: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A150u;
        goto label_13a150;
    }
    ctx->pc = 0x13A148u;
    SET_GPR_U32(ctx, 31, 0x13A150u);
    ctx->pc = 0x13A14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A148u;
    // 0x13a14c: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A148u, 0x13A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A150u;
label_13a150:
    // 0x13a150: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x13a150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_13a154:
    // 0x13a154: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x13a154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_13a158:
    // 0x13a158: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_13a15c:
    if (ctx->pc == 0x13A15Cu) {
        ctx->pc = 0x13A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A158u;
        // 0x13a15c: 0xc7a000a4  lwc1        $f0, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A160u;
        goto label_13a160;
    }
    ctx->pc = 0x13A158u;
    {
        const bool branch_taken_0x13a158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x13A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A158u;
        // 0x13a15c: 0xc7a000a4  lwc1        $f0, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a158) {
            ctx->pc = 0x13A17Cu;
            goto label_13a17c;
        }
    }
    ctx->pc = 0x13A160u;
label_13a160:
    // 0x13a160: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a164:
    // 0x13a164: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x13a164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_13a168:
    // 0x13a168: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x13a168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a16c:
    // 0x13a16c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x13a16cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_13a170:
    // 0x13a170: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13a170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a174:
    // 0x13a174: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x13a174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_13a178:
    // 0x13a178: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x13a178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a17c:
    // 0x13a17c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x13a17cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a180:
    // 0x13a180: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x13a180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_13a184:
    // 0x13a184: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x13a184u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_13a188:
    // 0x13a188: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13a188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13a18c:
    // 0x13a18c: 0x27b40090  addiu       $s4, $sp, 0x90
    ctx->pc = 0x13a18cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13a190:
    // 0x13a190: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x13a190u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13a194:
    // 0x13a194: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x13a194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_13a198:
    // 0x13a198: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13a198u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13a19c:
    // 0x13a19c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x13a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_13a1a0:
    // 0x13a1a0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x13a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_13a1a4:
    // 0x13a1a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13a1a8:
    // 0x13a1a8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x13a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_13a1ac:
    // 0x13a1ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13a1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13a1b0:
    // 0x13a1b0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x13a1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_13a1b4:
    // 0x13a1b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13a1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13a1b8:
    // 0x13a1b8: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x13a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
label_13a1bc:
    // 0x13a1bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13a1bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a1c0:
    // 0x13a1c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x13a1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a1c4:
    // 0x13a1c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13a1c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a1c8:
    // 0x13a1c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13a1c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a1cc:
    // 0x13a1cc: 0xc04c784  jal         func_131E10
label_13a1d0:
    if (ctx->pc == 0x13A1D0u) {
        ctx->pc = 0x13A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A1CCu;
        // 0x13a1d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A1D4u;
        goto label_13a1d4;
    }
    ctx->pc = 0x13A1CCu;
    SET_GPR_U32(ctx, 31, 0x13A1D4u);
    ctx->pc = 0x13A1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A1CCu;
    // 0x13a1d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x13A1CCu, 0x13A1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A1D4u;
label_13a1d4:
    // 0x13a1d4: 0x10520025  beq         $v0, $s2, . + 4 + (0x25 << 2)
label_13a1d8:
    if (ctx->pc == 0x13A1D8u) {
        ctx->pc = 0x13A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A1D4u;
        // 0x13a1d8: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A1DCu;
        goto label_13a1dc;
    }
    ctx->pc = 0x13A1D4u;
    {
        const bool branch_taken_0x13a1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x13A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A1D4u;
        // 0x13a1d8: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a1d4) {
            ctx->pc = 0x13A26Cu;
            goto label_13a26c;
        }
    }
    ctx->pc = 0x13A1DCu;
label_13a1dc:
    // 0x13a1dc: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x13a1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a1e0:
    // 0x13a1e0: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x13a1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13a1e4:
    // 0x13a1e4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x13a1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_13a1e8:
    // 0x13a1e8: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x13a1e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_13a1ec:
    // 0x13a1ec: 0xc0b6dac  jal         func_2DB6B0
label_13a1f0:
    if (ctx->pc == 0x13A1F0u) {
        ctx->pc = 0x13A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A1ECu;
        // 0x13a1f0: 0xe7a200a8  swc1        $f2, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A1F4u;
        goto label_13a1f4;
    }
    ctx->pc = 0x13A1ECu;
    SET_GPR_U32(ctx, 31, 0x13A1F4u);
    ctx->pc = 0x13A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A1ECu;
    // 0x13a1f0: 0xe7a200a8  swc1        $f2, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A1ECu, 0x13A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A1F4u;
label_13a1f4:
    // 0x13a1f4: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x13a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_13a1f8:
    // 0x13a1f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13a1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13a1fc:
    // 0x13a1fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13a1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13a200:
    // 0x13a200: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13a200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13a204:
    // 0x13a204: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x13a204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a208:
    // 0x13a208: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13a208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a20c:
    // 0x13a20c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x13a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_13a210:
    // 0x13a210: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x13a210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_13a214:
    // 0x13a214: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x13a214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_13a218:
    // 0x13a218: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x13a218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_13a21c:
    // 0x13a21c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x13a21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_13a220:
    // 0x13a220: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13a220u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a224:
    // 0x13a224: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x13a224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_13a228:
    // 0x13a228: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13a228u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a22c:
    // 0x13a22c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x13a22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_13a230:
    // 0x13a230: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x13a230u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a234:
    // 0x13a234: 0xc04c784  jal         func_131E10
label_13a238:
    if (ctx->pc == 0x13A238u) {
        ctx->pc = 0x13A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A234u;
        // 0x13a238: 0xafb20020  sw          $s2, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A23Cu;
        goto label_13a23c;
    }
    ctx->pc = 0x13A234u;
    SET_GPR_U32(ctx, 31, 0x13A23Cu);
    ctx->pc = 0x13A238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A234u;
    // 0x13a238: 0xafb20020  sw          $s2, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x13A234u, 0x13A23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A23Cu;
label_13a23c:
    // 0x13a23c: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
label_13a240:
    if (ctx->pc == 0x13A240u) {
        ctx->pc = 0x13A244u;
        goto label_13a244;
    }
    ctx->pc = 0x13A23Cu;
    {
        const bool branch_taken_0x13a23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x13a23c) {
            ctx->pc = 0x13A25Cu;
            goto label_13a25c;
        }
    }
    ctx->pc = 0x13A244u;
label_13a244:
    // 0x13a244: 0xc0b6dac  jal         func_2DB6B0
label_13a248:
    if (ctx->pc == 0x13A248u) {
        ctx->pc = 0x13A24Cu;
        goto label_13a24c;
    }
    ctx->pc = 0x13A244u;
    SET_GPR_U32(ctx, 31, 0x13A24Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A244u, 0x13A24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A24Cu;
label_13a24c:
    // 0x13a24c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x13a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_13a250:
    // 0x13a250: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x13a250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a254:
    // 0x13a254: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x13a254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a258:
    // 0x13a258: 0x46000d81  sub.s       $f22, $f1, $f0
    ctx->pc = 0x13a258u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13a25c:
    // 0x13a25c: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x13a25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
label_13a260:
    // 0x13a260: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13a260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a264:
    // 0x13a264: 0x0  nop
    ctx->pc = 0x13a264u;
    // NOP
label_13a268:
    // 0x13a268: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x13a268u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_13a26c:
    // 0x13a26c: 0xc6210514  lwc1        $f1, 0x514($s1)
    ctx->pc = 0x13a26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a270:
    // 0x13a270: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x13a270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_13a274:
    // 0x13a274: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13a274u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_13a278:
    // 0x13a278: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13a278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_13a27c:
    // 0x13a27c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x13a27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_13a280:
    // 0x13a280: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13a280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_13a284:
    // 0x13a284: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13a284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a288:
    // 0x13a288: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x13a288u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_13a28c:
    // 0x13a28c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x13a28cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_13a290:
    // 0x13a290: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13a290u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13a294:
    // 0x13a294: 0xe6210514  swc1        $f1, 0x514($s1)
    ctx->pc = 0x13a294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1300), bits); }
label_13a298:
    // 0x13a298: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x13a298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
label_13a29c:
    // 0x13a29c: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x13a29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
label_13a2a0:
    // 0x13a2a0: 0x8e2203f0  lw          $v0, 0x3F0($s1)
    ctx->pc = 0x13a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
label_13a2a4:
    // 0x13a2a4: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x13a2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_13a2a8:
    // 0x13a2a8: 0xc6240410  lwc1        $f4, 0x410($s1)
    ctx->pc = 0x13a2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_13a2ac:
    // 0x13a2ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13a2b0:
    // 0x13a2b0: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x13a2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a2b4:
    // 0x13a2b4: 0xc4410104  lwc1        $f1, 0x104($v0)
    ctx->pc = 0x13a2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a2b8:
    // 0x13a2b8: 0xc6220414  lwc1        $f2, 0x414($s1)
    ctx->pc = 0x13a2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13a2bc:
    // 0x13a2bc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x13a2bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_13a2c0:
    // 0x13a2c0: 0xc4430108  lwc1        $f3, 0x108($v0)
    ctx->pc = 0x13a2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13a2c4:
    // 0x13a2c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x13a2c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_13a2c8:
    // 0x13a2c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13a2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13a2cc:
    // 0x13a2cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13a2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13a2d0:
    // 0x13a2d0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x13a2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_13a2d4:
    // 0x13a2d4: 0xe7a300d8  swc1        $f3, 0xD8($sp)
    ctx->pc = 0x13a2d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_13a2d8:
    // 0x13a2d8: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x13a2d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_13a2dc:
    // 0x13a2dc: 0xc07df68  jal         func_1F7DA0
label_13a2e0:
    if (ctx->pc == 0x13A2E0u) {
        ctx->pc = 0x13A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2DCu;
        // 0x13a2e0: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A2E4u;
        goto label_13a2e4;
    }
    ctx->pc = 0x13A2DCu;
    SET_GPR_U32(ctx, 31, 0x13A2E4u);
    ctx->pc = 0x13A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A2DCu;
    // 0x13a2e0: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x13A2DCu, 0x13A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A2E4u;
label_13a2e4:
    // 0x13a2e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13a2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13a2e8:
    // 0x13a2e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13a2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13a2ec:
    // 0x13a2ec: 0xc051dca  jal         func_147728
label_13a2f0:
    if (ctx->pc == 0x13A2F0u) {
        ctx->pc = 0x13A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2ECu;
        // 0x13a2f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A2F4u;
        goto label_13a2f4;
    }
    ctx->pc = 0x13A2ECu;
    SET_GPR_U32(ctx, 31, 0x13A2F4u);
    ctx->pc = 0x13A2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A2ECu;
    // 0x13a2f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x13A2ECu, 0x13A2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A2F4u;
label_13a2f4:
    // 0x13a2f4: 0xc6200420  lwc1        $f0, 0x420($s1)
    ctx->pc = 0x13a2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a2f8:
    // 0x13a2f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x13a2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_13a2fc:
    // 0x13a2fc: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x13a2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13a300:
    // 0x13a300: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x13a300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13a304:
    // 0x13a304: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x13a304u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_13a308:
    // 0x13a308: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x13a308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a30c:
    // 0x13a30c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x13a30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13a310:
    // 0x13a310: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x13a310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_13a314:
    // 0x13a314: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x13a314u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_13a318:
    // 0x13a318: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x13a318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_13a31c:
    // 0x13a31c: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x13a31cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_13a320:
    // 0x13a320: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x13a320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_13a324:
    // 0x13a324: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x13a324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_13a328:
    // 0x13a328: 0xc0c28ac  jal         func_30A2B0
label_13a32c:
    if (ctx->pc == 0x13A32Cu) {
        ctx->pc = 0x13A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A328u;
        // 0x13a32c: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A330u;
        goto label_13a330;
    }
    ctx->pc = 0x13A328u;
    SET_GPR_U32(ctx, 31, 0x13A330u);
    ctx->pc = 0x13A32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A328u;
    // 0x13a32c: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x13A328u, 0x13A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A330u;
label_13a330:
    // 0x13a330: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x13a330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a334:
    // 0x13a334: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x13a334u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_13a338:
    // 0x13a338: 0xc6220514  lwc1        $f2, 0x514($s1)
    ctx->pc = 0x13a338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13a33c:
    // 0x13a33c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x13a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_13a340:
    // 0x13a340: 0xc6250510  lwc1        $f5, 0x510($s1)
    ctx->pc = 0x13a340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_13a344:
    // 0x13a344: 0x2464d8b0  addiu       $a0, $v1, -0x2750
    ctx->pc = 0x13a344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957232));
label_13a348:
    // 0x13a348: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x13a348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_13a34c:
    // 0x13a34c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x13a34cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_13a350:
    // 0x13a350: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13a350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a354:
    // 0x13a354: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x13a354u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_13a358:
    // 0x13a358: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x13a358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13a35c:
    // 0x13a35c: 0x262203d0  addiu       $v0, $s1, 0x3D0
    ctx->pc = 0x13a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
label_13a360:
    // 0x13a360: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x13a360u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_13a364:
    // 0x13a364: 0xc6260210  lwc1        $f6, 0x210($s1)
    ctx->pc = 0x13a364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_13a368:
    // 0x13a368: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x13a368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a36c:
    // 0x13a36c: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x13a36cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_13a370:
    // 0x13a370: 0xc6240214  lwc1        $f4, 0x214($s1)
    ctx->pc = 0x13a370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_13a374:
    // 0x13a374: 0x46153182  mul.s       $f6, $f6, $f21
    ctx->pc = 0x13a374u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[21]);
label_13a378:
    // 0x13a378: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x13a378u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_13a37c:
    // 0x13a37c: 0xc6220218  lwc1        $f2, 0x218($s1)
    ctx->pc = 0x13a37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13a380:
    // 0x13a380: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x13a380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_13a384:
    // 0x13a384: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x13a384u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_13a388:
    // 0x13a388: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x13a388u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_13a38c:
    // 0x13a38c: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x13a38cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_13a390:
    // 0x13a390: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x13a390u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
label_13a394:
    // 0x13a394: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x13a394u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_13a398:
    // 0x13a398: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x13a398u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_13a39c:
    // 0x13a39c: 0xe6260210  swc1        $f6, 0x210($s1)
    ctx->pc = 0x13a39cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 528), bits); }
label_13a3a0:
    // 0x13a3a0: 0xe6240214  swc1        $f4, 0x214($s1)
    ctx->pc = 0x13a3a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 532), bits); }
label_13a3a4:
    // 0x13a3a4: 0xe6220218  swc1        $f2, 0x218($s1)
    ctx->pc = 0x13a3a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 536), bits); }
label_13a3a8:
    // 0x13a3a8: 0xc460d8b0  lwc1        $f0, -0x2750($v1)
    ctx->pc = 0x13a3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a3ac:
    // 0x13a3ac: 0xe62003d0  swc1        $f0, 0x3D0($s1)
    ctx->pc = 0x13a3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 976), bits); }
label_13a3b0:
    // 0x13a3b0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x13a3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a3b4:
    // 0x13a3b4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x13a3b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_13a3b8:
    // 0x13a3b8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x13a3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a3bc:
    // 0x13a3bc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x13a3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_13a3c0:
    // 0x13a3c0: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x13a3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
label_13a3c4:
    // 0x13a3c4: 0xfba000f0  sqc2        $vf0, 0xF0($sp)
    ctx->pc = 0x13a3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[0]));
label_13a3c8:
    // 0x13a3c8: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x13a3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
label_13a3cc:
    // 0x13a3cc: 0x8e2203f0  lw          $v0, 0x3F0($s1)
    ctx->pc = 0x13a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
label_13a3d0:
    // 0x13a3d0: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x13a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_13a3d4:
    // 0x13a3d4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x13a3d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_13a3d8:
    // 0x13a3d8: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x13a3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
label_13a3dc:
    // 0x13a3dc: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x13a3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a3e0:
    // 0x13a3e0: 0x26250210  addiu       $a1, $s1, 0x210
    ctx->pc = 0x13a3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
label_13a3e4:
    // 0x13a3e4: 0xc6210404  lwc1        $f1, 0x404($s1)
    ctx->pc = 0x13a3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a3e8:
    // 0x13a3e8: 0x26240200  addiu       $a0, $s1, 0x200
    ctx->pc = 0x13a3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
label_13a3ec:
    // 0x13a3ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13a3ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13a3f0:
    // 0x13a3f0: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x13a3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_13a3f4:
    // 0x13a3f4: 0xfba00130  sqc2        $vf0, 0x130($sp)
    ctx->pc = 0x13a3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[0]));
label_13a3f8:
    // 0x13a3f8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x13a3f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_13a3fc:
    // 0x13a3fc: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x13a3fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_13a400:
    // 0x13a400: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x13a400u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_13a404:
    // 0x13a404: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x13a404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
label_13a408:
    // 0x13a408: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x13a408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_13a40c:
    // 0x13a40c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x13a40cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_13a410:
    // 0x13a410: 0xfba40120  sqc2        $vf4, 0x120($sp)
    ctx->pc = 0x13a410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[4]));
label_13a414:
    // 0x13a414: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x13a414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13a418:
    // 0x13a418: 0xc7a40124  lwc1        $f4, 0x124($sp)
    ctx->pc = 0x13a418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_13a41c:
    // 0x13a41c: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x13a41cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_13a420:
    // 0x13a420: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x13a420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13a424:
    // 0x13a424: 0x46042142  mul.s       $f5, $f4, $f4
    ctx->pc = 0x13a424u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_13a428:
    // 0x13a428: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x13a428u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_13a42c:
    // 0x13a42c: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x13a42cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_13a430:
    // 0x13a430: 0xe7a400f4  swc1        $f4, 0xF4($sp)
    ctx->pc = 0x13a430u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_13a434:
    // 0x13a434: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x13a434u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_13a438:
    // 0x13a438: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x13a438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_13a43c:
    // 0x13a43c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13a43cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13a440:
    // 0x13a440: 0x0  nop
    ctx->pc = 0x13a440u;
    // NOP
label_13a444:
    // 0x13a444: 0x0  nop
    ctx->pc = 0x13a444u;
    // NOP
label_13a448:
    // 0x13a448: 0x46010044  c1          0x10044
    ctx->pc = 0x13a448u;
    ctx->f[1] = ps2FpuSqrt(ctx->fcr31, ctx->f[1]);
label_13a44c:
    // 0x13a44c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_13a450:
    // 0x13a450: 0xc440d530  lwc1        $f0, -0x2AD0($v0)
    ctx->pc = 0x13a450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a454:
    // 0x13a454: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13a458:
    // 0x13a458: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x13a458u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_13a45c:
    // 0x13a45c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x13a45cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_13a460:
    // 0x13a460: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x13a460u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_13a464:
    // 0x13a464: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x13a464u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_13a468:
    // 0x13a468: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x13a468u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_13a46c:
    // 0x13a46c: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x13a46cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_13a470:
    // 0x13a470: 0xe7a400f4  swc1        $f4, 0xF4($sp)
    ctx->pc = 0x13a470u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_13a474:
    // 0x13a474: 0xfba00120  sqc2        $vf0, 0x120($sp)
    ctx->pc = 0x13a474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[0]));
label_13a478:
    // 0x13a478: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x13a478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_13a47c:
    // 0x13a47c: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x13a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_13a480:
    // 0x13a480: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13a480u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13a484:
    // 0x13a484: 0xafa201e4  sw          $v0, 0x1E4($sp)
    ctx->pc = 0x13a484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
label_13a488:
    // 0x13a488: 0xafa301e8  sw          $v1, 0x1E8($sp)
    ctx->pc = 0x13a488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 3));
label_13a48c:
    // 0x13a48c: 0x27b200f0  addiu       $s2, $sp, 0xF0
    ctx->pc = 0x13a48cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_13a490:
    // 0x13a490: 0xafa501ec  sw          $a1, 0x1EC($sp)
    ctx->pc = 0x13a490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
label_13a494:
    // 0x13a494: 0x27b00170  addiu       $s0, $sp, 0x170
    ctx->pc = 0x13a494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_13a498:
    // 0x13a498: 0x27b50120  addiu       $s5, $sp, 0x120
    ctx->pc = 0x13a498u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_13a49c:
    // 0x13a49c: 0x27b60150  addiu       $s6, $sp, 0x150
    ctx->pc = 0x13a49cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_13a4a0:
    // 0x13a4a0: 0x27be0160  addiu       $fp, $sp, 0x160
    ctx->pc = 0x13a4a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_13a4a4:
    // 0x13a4a4: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x13a4a4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
label_13a4a8:
    // 0x13a4a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x13a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13a4ac:
    // 0x13a4ac: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x13a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_13a4b0:
    // 0x13a4b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13a4b4:
    // 0x13a4b4: 0x0  nop
    ctx->pc = 0x13a4b4u;
    // NOP
label_13a4b8:
    // 0x13a4b8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x13a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_13a4bc:
    // 0x13a4bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_13a4c0:
    // 0x13a4c0: 0x0  nop
    ctx->pc = 0x13a4c0u;
    // NOP
label_13a4c4:
    // 0x13a4c4: 0x0  nop
    ctx->pc = 0x13a4c4u;
    // NOP
label_13a4c8:
    // 0x13a4c8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
label_13a4cc:
    if (ctx->pc == 0x13A4CCu) {
        ctx->pc = 0x13A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A4C8u;
        // 0x13a4cc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A4D0u;
        goto label_13a4d0;
    }
    ctx->pc = 0x13A4C8u;
    {
        const bool branch_taken_0x13a4c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x13A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A4C8u;
        // 0x13a4cc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a4c8) {
            ctx->pc = 0x13A4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a4b8;
        }
    }
    ctx->pc = 0x13A4D0u;
label_13a4d0:
    // 0x13a4d0: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x13a4d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_13a4d4:
    // 0x13a4d4: 0xfba401b0  sqc2        $vf4, 0x1B0($sp)
    ctx->pc = 0x13a4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[4]));
label_13a4d8:
    // 0x13a4d8: 0xdba401b0  lqc2        $vf4, 0x1B0($sp)
    ctx->pc = 0x13a4d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_13a4dc:
    // 0x13a4dc: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x13a4dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_13a4e0:
    // 0x13a4e0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x13a4e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_13a4e4:
    // 0x13a4e4: 0xfba401b0  sqc2        $vf4, 0x1B0($sp)
    ctx->pc = 0x13a4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[4]));
label_13a4e8:
    // 0x13a4e8: 0x8fa701e4  lw          $a3, 0x1E4($sp)
    ctx->pc = 0x13a4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_13a4ec:
    // 0x13a4ec: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x13a4ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_13a4f0:
    // 0x13a4f0: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x13a4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
label_13a4f4:
    // 0x13a4f4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_13a4f8:
    // 0x13a4f8: 0xc7a30130  lwc1        $f3, 0x130($sp)
    ctx->pc = 0x13a4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13a4fc:
    // 0x13a4fc: 0xc7a20134  lwc1        $f2, 0x134($sp)
    ctx->pc = 0x13a4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13a500:
    // 0x13a500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13a504:
    // 0x13a504: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x13a504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a508:
    // 0x13a508: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x13a508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13a50c:
    // 0x13a50c: 0xc440d534  lwc1        $f0, -0x2ACC($v0)
    ctx->pc = 0x13a50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a510:
    // 0x13a510: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13a510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a514:
    // 0x13a514: 0xe7a30140  swc1        $f3, 0x140($sp)
    ctx->pc = 0x13a514u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_13a518:
    // 0x13a518: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x13a518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_13a51c:
    // 0x13a51c: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x13a51cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_13a520:
    // 0x13a520: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x13a520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_13a524:
    // 0x13a524: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x13a524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_13a528:
    // 0x13a528: 0xc051dca  jal         func_147728
label_13a52c:
    if (ctx->pc == 0x13A52Cu) {
        ctx->pc = 0x13A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A528u;
        // 0x13a52c: 0xafa00128  sw          $zero, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A530u;
        goto label_13a530;
    }
    ctx->pc = 0x13A528u;
    SET_GPR_U32(ctx, 31, 0x13A530u);
    ctx->pc = 0x13A52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A528u;
    // 0x13a52c: 0xafa00128  sw          $zero, 0x128($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x13A528u, 0x13A530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A530u;
label_13a530:
    // 0x13a530: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13a530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13a534:
    // 0x13a534: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13a534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13a538:
    // 0x13a538: 0xc0c28ac  jal         func_30A2B0
label_13a53c:
    if (ctx->pc == 0x13A53Cu) {
        ctx->pc = 0x13A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A538u;
        // 0x13a53c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A540u;
        goto label_13a540;
    }
    ctx->pc = 0x13A538u;
    SET_GPR_U32(ctx, 31, 0x13A540u);
    ctx->pc = 0x13A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A538u;
    // 0x13a53c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x13A538u, 0x13A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A540u;
label_13a540:
    // 0x13a540: 0xdba40150  lqc2        $vf4, 0x150($sp)
    ctx->pc = 0x13a540u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_13a544:
    // 0x13a544: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x13a544u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_13a548:
    // 0x13a548: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x13a548u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_13a54c:
    // 0x13a54c: 0xfba40150  sqc2        $vf4, 0x150($sp)
    ctx->pc = 0x13a54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
label_13a550:
    // 0x13a550: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x13a550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_13a554:
    // 0x13a554: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x13a554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13a558:
    // 0x13a558: 0xc460d534  lwc1        $f0, -0x2ACC($v1)
    ctx->pc = 0x13a558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a55c:
    // 0x13a55c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13a560:
    // 0x13a560: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x13a560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_13a564:
    // 0x13a564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13a564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a568:
    // 0x13a568: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x13a568u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_13a56c:
    // 0x13a56c: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x13a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
label_13a570:
    // 0x13a570: 0xc051dca  jal         func_147728
label_13a574:
    if (ctx->pc == 0x13A574u) {
        ctx->pc = 0x13A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A570u;
        // 0x13a574: 0xe7a00124  swc1        $f0, 0x124($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A578u;
        goto label_13a578;
    }
    ctx->pc = 0x13A570u;
    SET_GPR_U32(ctx, 31, 0x13A578u);
    ctx->pc = 0x13A574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A570u;
    // 0x13a574: 0xe7a00124  swc1        $f0, 0x124($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x13A570u, 0x13A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A578u;
label_13a578:
    // 0x13a578: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x13a578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_13a57c:
    // 0x13a57c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13a57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13a580:
    // 0x13a580: 0xc0c28ac  jal         func_30A2B0
label_13a584:
    if (ctx->pc == 0x13A584u) {
        ctx->pc = 0x13A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A580u;
        // 0x13a584: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A588u;
        goto label_13a588;
    }
    ctx->pc = 0x13A580u;
    SET_GPR_U32(ctx, 31, 0x13A588u);
    ctx->pc = 0x13A584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A580u;
    // 0x13a584: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x13A580u, 0x13A588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A588u;
label_13a588:
    // 0x13a588: 0xdba40160  lqc2        $vf4, 0x160($sp)
    ctx->pc = 0x13a588u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_13a58c:
    // 0x13a58c: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x13a58cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_13a590:
    // 0x13a590: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x13a590u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_13a594:
    // 0x13a594: 0xfba40160  sqc2        $vf4, 0x160($sp)
    ctx->pc = 0x13a594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[4]));
label_13a598:
    // 0x13a598: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x13a598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_13a59c:
    // 0x13a59c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x13a59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13a5a0:
    // 0x13a5a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a5a4:
    // 0x13a5a4: 0x0  nop
    ctx->pc = 0x13a5a4u;
    // NOP
label_13a5a8:
    // 0x13a5a8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x13a5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_13a5ac:
    // 0x13a5ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_13a5b0:
    // 0x13a5b0: 0x0  nop
    ctx->pc = 0x13a5b0u;
    // NOP
label_13a5b4:
    // 0x13a5b4: 0x0  nop
    ctx->pc = 0x13a5b4u;
    // NOP
label_13a5b8:
    // 0x13a5b8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
label_13a5bc:
    if (ctx->pc == 0x13A5BCu) {
        ctx->pc = 0x13A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5B8u;
        // 0x13a5bc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A5C0u;
        goto label_13a5c0;
    }
    ctx->pc = 0x13A5B8u;
    {
        const bool branch_taken_0x13a5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x13A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5B8u;
        // 0x13a5bc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a5b8) {
            ctx->pc = 0x13A5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a5a8;
        }
    }
    ctx->pc = 0x13A5C0u;
label_13a5c0:
    // 0x13a5c0: 0xc6200510  lwc1        $f0, 0x510($s1)
    ctx->pc = 0x13a5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a5c4:
    // 0x13a5c4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x13a5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_13a5c8:
    // 0x13a5c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13a5c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13a5cc:
    // 0x13a5cc: 0x3c0141f8  lui         $at, 0x41F8
    ctx->pc = 0x13a5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16888 << 16));
label_13a5d0:
    // 0x13a5d0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x13a5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_13a5d4:
    // 0x13a5d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13a5d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_13a5d8:
    // 0x13a5d8: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x13a5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
label_13a5dc:
    // 0x13a5dc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x13a5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_13a5e0:
    // 0x13a5e0: 0x46160500  add.s       $f20, $f0, $f22
    ctx->pc = 0x13a5e0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_13a5e4:
    // 0x13a5e4: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x13a5e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13a5e8:
    // 0x13a5e8: 0x0  nop
    ctx->pc = 0x13a5e8u;
    // NOP
label_13a5ec:
    // 0x13a5ec: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_13a5f0:
    if (ctx->pc == 0x13A5F0u) {
        ctx->pc = 0x13A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5ECu;
        // 0x13a5f0: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A5F4u;
        goto label_13a5f4;
    }
    ctx->pc = 0x13A5ECu;
    {
        const bool branch_taken_0x13a5ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a5ec) {
            ctx->pc = 0x13A5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A5ECu;
            // 0x13a5f0: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A5F8u;
            goto label_13a5f8;
        }
    }
    ctx->pc = 0x13A5F4u;
label_13a5f4:
    // 0x13a5f4: 0x0  nop
    ctx->pc = 0x13a5f4u;
    // NOP
label_13a5f8:
    // 0x13a5f8: 0x9e220528  lwu         $v0, 0x528($s1)
    ctx->pc = 0x13a5f8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1320)));
label_13a5fc:
    // 0x13a5fc: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x13a5fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_13a600:
    // 0x13a600: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13a600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_13a604:
    // 0x13a604: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_13a608:
    if (ctx->pc == 0x13A608u) {
        ctx->pc = 0x13A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A604u;
        // 0x13a608: 0xc6210250  lwc1        $f1, 0x250($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A60Cu;
        goto label_13a60c;
    }
    ctx->pc = 0x13A604u;
    {
        const bool branch_taken_0x13a604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a604) {
            ctx->pc = 0x13A608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A604u;
            // 0x13a608: 0xc6210250  lwc1        $f1, 0x250($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A6B8u;
            goto label_13a6b8;
        }
    }
    ctx->pc = 0x13A60Cu;
label_13a60c:
    // 0x13a60c: 0xc0b6dac  jal         func_2DB6B0
label_13a610:
    if (ctx->pc == 0x13A610u) {
        ctx->pc = 0x13A614u;
        goto label_13a614;
    }
    ctx->pc = 0x13A60Cu;
    SET_GPR_U32(ctx, 31, 0x13A614u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A60Cu, 0x13A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A614u;
label_13a614:
    // 0x13a614: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x13a614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_13a618:
    // 0x13a618: 0xfba00130  sqc2        $vf0, 0x130($sp)
    ctx->pc = 0x13a618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[0]));
label_13a61c:
    // 0x13a61c: 0x8fa701ec  lw          $a3, 0x1EC($sp)
    ctx->pc = 0x13a61cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_13a620:
    // 0x13a620: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x13a620u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_13a624:
    // 0x13a624: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x13a624u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_13a628:
    // 0x13a628: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x13a628u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_13a62c:
    // 0x13a62c: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x13a62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
label_13a630:
    // 0x13a630: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x13a630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_13a634:
    // 0x13a634: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x13a634u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13a638:
    // 0x13a638: 0xfba401b0  sqc2        $vf4, 0x1B0($sp)
    ctx->pc = 0x13a638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[4]));
label_13a63c:
    // 0x13a63c: 0xc7a101b0  lwc1        $f1, 0x1B0($sp)
    ctx->pc = 0x13a63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a640:
    // 0x13a640: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x13a640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a644:
    // 0x13a644: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x13a644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_13a648:
    // 0x13a648: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x13a648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_13a64c:
    // 0x13a64c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13a64cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13a650:
    // 0x13a650: 0x0  nop
    ctx->pc = 0x13a650u;
    // NOP
label_13a654:
    // 0x13a654: 0x0  nop
    ctx->pc = 0x13a654u;
    // NOP
label_13a658:
    // 0x13a658: 0x46010044  c1          0x10044
    ctx->pc = 0x13a658u;
    ctx->f[1] = ps2FpuSqrt(ctx->fcr31, ctx->f[1]);
label_13a65c:
    // 0x13a65c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_13a660:
    // 0x13a660: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x13a660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_13a664:
    // 0x13a664: 0xc442d538  lwc1        $f2, -0x2AC8($v0)
    ctx->pc = 0x13a664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13a668:
    // 0x13a668: 0xc460d53c  lwc1        $f0, -0x2AC4($v1)
    ctx->pc = 0x13a668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a66c:
    // 0x13a66c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x13a66cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_13a670:
    // 0x13a670: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x13a670u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_13a674:
    // 0x13a674: 0x0  nop
    ctx->pc = 0x13a674u;
    // NOP
label_13a678:
    // 0x13a678: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13a678u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
label_13a67c:
    // 0x13a67c: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x13a67cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13a680:
    // 0x13a680: 0x0  nop
    ctx->pc = 0x13a680u;
    // NOP
label_13a684:
    // 0x13a684: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_13a688:
    if (ctx->pc == 0x13A688u) {
        ctx->pc = 0x13A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A684u;
        // 0x13a688: 0xe7b501e0  swc1        $f21, 0x1E0($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A68Cu;
        goto label_13a68c;
    }
    ctx->pc = 0x13A684u;
    {
        const bool branch_taken_0x13a684 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A684u;
        // 0x13a688: 0xe7b501e0  swc1        $f21, 0x1E0($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a684) {
            ctx->pc = 0x13A690u;
            goto label_13a690;
        }
    }
    ctx->pc = 0x13A68Cu;
label_13a68c:
    // 0x13a68c: 0x4600b046  mov.s       $f1, $f22
    ctx->pc = 0x13a68cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[22]);
label_13a690:
    // 0x13a690: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x13a690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13a694:
    // 0x13a694: 0x0  nop
    ctx->pc = 0x13a694u;
    // NOP
label_13a698:
    // 0x13a698: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_13a69c:
    if (ctx->pc == 0x13A69Cu) {
        ctx->pc = 0x13A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A698u;
        // 0x13a69c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A6A0u;
        goto label_13a6a0;
    }
    ctx->pc = 0x13A698u;
    {
        const bool branch_taken_0x13a698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A698u;
        // 0x13a69c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a698) {
            ctx->pc = 0x13A6A4u;
            goto label_13a6a4;
        }
    }
    ctx->pc = 0x13A6A0u;
label_13a6a0:
    // 0x13a6a0: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x13a6a0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_13a6a4:
    // 0x13a6a4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x13a6a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13a6a8:
    // 0x13a6a8: 0x0  nop
    ctx->pc = 0x13a6a8u;
    // NOP
label_13a6ac:
    // 0x13a6ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_13a6b0:
    if (ctx->pc == 0x13A6B0u) {
        ctx->pc = 0x13A6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6ACu;
        // 0x13a6b0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A6B4u;
        goto label_13a6b4;
    }
    ctx->pc = 0x13A6ACu;
    {
        const bool branch_taken_0x13a6ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a6ac) {
            ctx->pc = 0x13A6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A6ACu;
            // 0x13a6b0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A6B4u;
            goto label_13a6b4;
        }
    }
    ctx->pc = 0x13A6B4u;
label_13a6b4:
    // 0x13a6b4: 0xc6210250  lwc1        $f1, 0x250($s1)
    ctx->pc = 0x13a6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a6b8:
    // 0x13a6b8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_13a6bc:
    // 0x13a6bc: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x13a6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_13a6c0:
    // 0x13a6c0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x13a6c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_13a6c4:
    // 0x13a6c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13a6c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_13a6c8:
    // 0x13a6c8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x13a6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_13a6cc:
    // 0x13a6cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13a6ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_13a6d0:
    // 0x13a6d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13a6d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a6d4:
    // 0x13a6d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x13a6d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_13a6d8:
    // 0x13a6d8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x13a6d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_13a6dc:
    // 0x13a6dc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x13a6dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_13a6e0:
    // 0x13a6e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13a6e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13a6e4:
    // 0x13a6e4: 0xe6210250  swc1        $f1, 0x250($s1)
    ctx->pc = 0x13a6e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 592), bits); }
label_13a6e8:
    // 0x13a6e8: 0xc0b6dac  jal         func_2DB6B0
label_13a6ec:
    if (ctx->pc == 0x13A6ECu) {
        ctx->pc = 0x13A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6E8u;
        // 0x13a6ec: 0xc454d544  lwc1        $f20, -0x2ABC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A6F0u;
        goto label_13a6f0;
    }
    ctx->pc = 0x13A6E8u;
    SET_GPR_U32(ctx, 31, 0x13A6F0u);
    ctx->pc = 0x13A6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A6E8u;
    // 0x13a6ec: 0xc454d544  lwc1        $f20, -0x2ABC($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A6E8u, 0x13A6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A6F0u;
label_13a6f0:
    // 0x13a6f0: 0x8c430640  lw          $v1, 0x640($v0)
    ctx->pc = 0x13a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1600)));
label_13a6f4:
    // 0x13a6f4: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_13a6f8:
    if (ctx->pc == 0x13A6F8u) {
        ctx->pc = 0x13A6FCu;
        goto label_13a6fc;
    }
    ctx->pc = 0x13A6F4u;
    {
        const bool branch_taken_0x13a6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a6f4) {
            ctx->pc = 0x13A7C0u;
            goto label_13a7c0;
        }
    }
    ctx->pc = 0x13A6FCu;
label_13a6fc:
    // 0x13a6fc: 0xc0b6dac  jal         func_2DB6B0
label_13a700:
    if (ctx->pc == 0x13A700u) {
        ctx->pc = 0x13A704u;
        goto label_13a704;
    }
    ctx->pc = 0x13A6FCu;
    SET_GPR_U32(ctx, 31, 0x13A704u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A6FCu, 0x13A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A704u;
label_13a704:
    // 0x13a704: 0x8c430640  lw          $v1, 0x640($v0)
    ctx->pc = 0x13a704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1600)));
label_13a708:
    // 0x13a708: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x13a708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
label_13a70c:
    // 0x13a70c: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x13a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_13a710:
    // 0x13a710: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x13a710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_13a714:
    // 0x13a714: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_13a718:
    if (ctx->pc == 0x13A718u) {
        ctx->pc = 0x13A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A714u;
        // 0x13a718: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A71Cu;
        goto label_13a71c;
    }
    ctx->pc = 0x13A714u;
    {
        const bool branch_taken_0x13a714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A714u;
        // 0x13a718: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a714) {
            ctx->pc = 0x13A720u;
            goto label_13a720;
        }
    }
    ctx->pc = 0x13A71Cu;
label_13a71c:
    // 0x13a71c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a720:
    // 0x13a720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a724:
    // 0x13a724: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_13a728:
    if (ctx->pc == 0x13A728u) {
        ctx->pc = 0x13A72Cu;
        goto label_13a72c;
    }
    ctx->pc = 0x13A724u;
    {
        const bool branch_taken_0x13a724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13a724) {
            ctx->pc = 0x13A7C0u;
            goto label_13a7c0;
        }
    }
    ctx->pc = 0x13A72Cu;
label_13a72c:
    // 0x13a72c: 0xc0b6dac  jal         func_2DB6B0
label_13a730:
    if (ctx->pc == 0x13A730u) {
        ctx->pc = 0x13A734u;
        goto label_13a734;
    }
    ctx->pc = 0x13A72Cu;
    SET_GPR_U32(ctx, 31, 0x13A734u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A72Cu, 0x13A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A734u;
label_13a734:
    // 0x13a734: 0x8c450640  lw          $a1, 0x640($v0)
    ctx->pc = 0x13a734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1600)));
label_13a738:
    // 0x13a738: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x13a738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_13a73c:
    // 0x13a73c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x13a73cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_13a740:
    // 0x13a740: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x13a740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_13a744:
    // 0x13a744: 0x40f809  jalr        $v0
label_13a748:
    if (ctx->pc == 0x13A748u) {
        ctx->pc = 0x13A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A744u;
        // 0x13a748: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A74Cu;
        goto label_13a74c;
    }
    ctx->pc = 0x13A744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A74Cu);
        ctx->pc = 0x13A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A744u;
        // 0x13a748: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A744u, 0x13A74Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A74Cu;
label_13a74c:
    // 0x13a74c: 0xc0b6dac  jal         func_2DB6B0
label_13a750:
    if (ctx->pc == 0x13A750u) {
        ctx->pc = 0x13A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A74Cu;
        // 0x13a750: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A754u;
        goto label_13a754;
    }
    ctx->pc = 0x13A74Cu;
    SET_GPR_U32(ctx, 31, 0x13A754u);
    ctx->pc = 0x13A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A74Cu;
    // 0x13a750: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A74Cu, 0x13A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A754u;
label_13a754:
    // 0x13a754: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x13a754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_13a758:
    // 0x13a758: 0xc07dfac  jal         func_1F7EB0
label_13a75c:
    if (ctx->pc == 0x13A75Cu) {
        ctx->pc = 0x13A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A758u;
        // 0x13a75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A760u;
        goto label_13a760;
    }
    ctx->pc = 0x13A758u;
    SET_GPR_U32(ctx, 31, 0x13A760u);
    ctx->pc = 0x13A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A758u;
    // 0x13a75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x13A758u, 0x13A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A760u;
label_13a760:
    // 0x13a760: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x13a760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_13a764:
    // 0x13a764: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13a764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13a768:
    // 0x13a768: 0x0  nop
    ctx->pc = 0x13a768u;
    // NOP
label_13a76c:
    // 0x13a76c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13a76cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13a770:
    // 0x13a770: 0x0  nop
    ctx->pc = 0x13a770u;
    // NOP
label_13a774:
    // 0x13a774: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_13a778:
    if (ctx->pc == 0x13A778u) {
        ctx->pc = 0x13A77Cu;
        goto label_13a77c;
    }
    ctx->pc = 0x13A774u;
    {
        const bool branch_taken_0x13a774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a774) {
            ctx->pc = 0x13A7C0u;
            goto label_13a7c0;
        }
    }
    ctx->pc = 0x13A77Cu;
label_13a77c:
    // 0x13a77c: 0xc0b6dac  jal         func_2DB6B0
label_13a780:
    if (ctx->pc == 0x13A780u) {
        ctx->pc = 0x13A784u;
        goto label_13a784;
    }
    ctx->pc = 0x13A77Cu;
    SET_GPR_U32(ctx, 31, 0x13A784u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A77Cu, 0x13A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A784u;
label_13a784:
    // 0x13a784: 0x8c450640  lw          $a1, 0x640($v0)
    ctx->pc = 0x13a784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1600)));
label_13a788:
    // 0x13a788: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x13a788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_13a78c:
    // 0x13a78c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x13a78cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_13a790:
    // 0x13a790: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x13a790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_13a794:
    // 0x13a794: 0x40f809  jalr        $v0
label_13a798:
    if (ctx->pc == 0x13A798u) {
        ctx->pc = 0x13A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A794u;
        // 0x13a798: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A79Cu;
        goto label_13a79c;
    }
    ctx->pc = 0x13A794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A79Cu);
        ctx->pc = 0x13A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A794u;
        // 0x13a798: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A794u, 0x13A79Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A79Cu;
label_13a79c:
    // 0x13a79c: 0xc0b6dac  jal         func_2DB6B0
label_13a7a0:
    if (ctx->pc == 0x13A7A0u) {
        ctx->pc = 0x13A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A79Cu;
        // 0x13a7a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A7A4u;
        goto label_13a7a4;
    }
    ctx->pc = 0x13A79Cu;
    SET_GPR_U32(ctx, 31, 0x13A7A4u);
    ctx->pc = 0x13A7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A79Cu;
    // 0x13a7a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A79Cu, 0x13A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A7A4u;
label_13a7a4:
    // 0x13a7a4: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x13a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_13a7a8:
    // 0x13a7a8: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x13a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13a7ac:
    // 0x13a7ac: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x13a7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a7b0:
    // 0x13a7b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13a7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_13a7b4:
    // 0x13a7b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13a7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13a7b8:
    // 0x13a7b8: 0x46001581  sub.s       $f22, $f2, $f0
    ctx->pc = 0x13a7b8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_13a7bc:
    // 0x13a7bc: 0x4601b542  mul.s       $f21, $f22, $f1
    ctx->pc = 0x13a7bcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
label_13a7c0:
    // 0x13a7c0: 0xc0b6dac  jal         func_2DB6B0
label_13a7c4:
    if (ctx->pc == 0x13A7C4u) {
        ctx->pc = 0x13A7C8u;
        goto label_13a7c8;
    }
    ctx->pc = 0x13A7C0u;
    SET_GPR_U32(ctx, 31, 0x13A7C8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A7C0u, 0x13A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A7C8u;
label_13a7c8:
    // 0x13a7c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13a7c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a7cc:
    // 0x13a7cc: 0x906202b4  lbu         $v0, 0x2B4($v1)
    ctx->pc = 0x13a7ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
label_13a7d0:
    // 0x13a7d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13a7d4:
    if (ctx->pc == 0x13A7D4u) {
        ctx->pc = 0x13A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7D0u;
        // 0x13a7d4: 0xafa201b0  sw          $v0, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A7D8u;
        goto label_13a7d8;
    }
    ctx->pc = 0x13A7D0u;
    {
        const bool branch_taken_0x13a7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7D0u;
        // 0x13a7d4: 0xafa201b0  sw          $v0, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a7d0) {
            ctx->pc = 0x13A7E4u;
            goto label_13a7e4;
        }
    }
    ctx->pc = 0x13A7D8u;
label_13a7d8:
    // 0x13a7d8: 0x8c620278  lw          $v0, 0x278($v1)
    ctx->pc = 0x13a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
label_13a7dc:
    // 0x13a7dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_13a7e0:
    if (ctx->pc == 0x13A7E0u) {
        ctx->pc = 0x13A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7DCu;
        // 0x13a7e0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A7E4u;
        goto label_13a7e4;
    }
    ctx->pc = 0x13A7DCu;
    {
        const bool branch_taken_0x13a7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7DCu;
        // 0x13a7e0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a7dc) {
            ctx->pc = 0x13A7E8u;
            goto label_13a7e8;
        }
    }
    ctx->pc = 0x13A7E4u;
label_13a7e4:
    // 0x13a7e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13a7e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a7e8:
    // 0x13a7e8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_13a7ec:
    if (ctx->pc == 0x13A7ECu) {
        ctx->pc = 0x13A7F0u;
        goto label_13a7f0;
    }
    ctx->pc = 0x13A7E8u;
    {
        const bool branch_taken_0x13a7e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a7e8) {
            ctx->pc = 0x13A828u;
            goto label_13a828;
        }
    }
    ctx->pc = 0x13A7F0u;
label_13a7f0:
    // 0x13a7f0: 0xc0b6dac  jal         func_2DB6B0
label_13a7f4:
    if (ctx->pc == 0x13A7F4u) {
        ctx->pc = 0x13A7F8u;
        goto label_13a7f8;
    }
    ctx->pc = 0x13A7F0u;
    SET_GPR_U32(ctx, 31, 0x13A7F8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A7F0u, 0x13A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A7F8u;
label_13a7f8:
    // 0x13a7f8: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x13a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_13a7fc:
    // 0x13a7fc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x13a7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_13a800:
    // 0x13a800: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13a800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_13a804:
    // 0x13a804: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x13a804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a808:
    // 0x13a808: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x13a808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_13a80c:
    // 0x13a80c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x13a80cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_13a810:
    // 0x13a810: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x13a810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a814:
    // 0x13a814: 0x46010581  sub.s       $f22, $f0, $f1
    ctx->pc = 0x13a814u;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_13a818:
    // 0x13a818: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x13a818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13a81c:
    // 0x13a81c: 0x0  nop
    ctx->pc = 0x13a81cu;
    // NOP
label_13a820:
    // 0x13a820: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_13a824:
    if (ctx->pc == 0x13A824u) {
        ctx->pc = 0x13A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A820u;
        // 0x13a824: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A828u;
        goto label_13a828;
    }
    ctx->pc = 0x13A820u;
    {
        const bool branch_taken_0x13a820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a820) {
            ctx->pc = 0x13A824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A820u;
            // 0x13a824: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A828u;
            goto label_13a828;
        }
    }
    ctx->pc = 0x13A828u;
label_13a828:
    // 0x13a828: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x13a828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_13a82c:
    // 0x13a82c: 0x0  nop
    ctx->pc = 0x13a82cu;
    // NOP
label_13a830:
    // 0x13a830: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x13a830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13a834:
    // 0x13a834: 0x0  nop
    ctx->pc = 0x13a834u;
    // NOP
label_13a838:
    // 0x13a838: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_13a83c:
    if (ctx->pc == 0x13A83Cu) {
        ctx->pc = 0x13A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A838u;
        // 0x13a83c: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A840u;
        goto label_13a840;
    }
    ctx->pc = 0x13A838u;
    {
        const bool branch_taken_0x13a838 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a838) {
            ctx->pc = 0x13A83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A838u;
            // 0x13a83c: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A840u;
            goto label_13a840;
        }
    }
    ctx->pc = 0x13A840u;
label_13a840:
    // 0x13a840: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x13a840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_13a844:
    // 0x13a844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13a844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a848:
    // 0x13a848: 0x0  nop
    ctx->pc = 0x13a848u;
    // NOP
label_13a84c:
    // 0x13a84c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x13a84cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13a850:
    // 0x13a850: 0x0  nop
    ctx->pc = 0x13a850u;
    // NOP
label_13a854:
    // 0x13a854: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_13a858:
    if (ctx->pc == 0x13A858u) {
        ctx->pc = 0x13A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A854u;
        // 0x13a858: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A85Cu;
        goto label_13a85c;
    }
    ctx->pc = 0x13A854u;
    {
        const bool branch_taken_0x13a854 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a854) {
            ctx->pc = 0x13A858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A854u;
            // 0x13a858: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A85Cu;
            goto label_13a85c;
        }
    }
    ctx->pc = 0x13A85Cu;
label_13a85c:
    // 0x13a85c: 0xc0b6dac  jal         func_2DB6B0
label_13a860:
    if (ctx->pc == 0x13A860u) {
        ctx->pc = 0x13A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A85Cu;
        // 0x13a860: 0xe6350510  swc1        $f21, 0x510($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1296), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A864u;
        goto label_13a864;
    }
    ctx->pc = 0x13A85Cu;
    SET_GPR_U32(ctx, 31, 0x13A864u);
    ctx->pc = 0x13A860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A85Cu;
    // 0x13a860: 0xe6350510  swc1        $f21, 0x510($s1) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1296), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A85Cu, 0x13A864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A864u;
label_13a864:
    // 0x13a864: 0xc042d72  jal         func_10B5C8
label_13a868:
    if (ctx->pc == 0x13A868u) {
        ctx->pc = 0x13A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A864u;
        // 0x13a868: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A86Cu;
        goto label_13a86c;
    }
    ctx->pc = 0x13A864u;
    SET_GPR_U32(ctx, 31, 0x13A86Cu);
    ctx->pc = 0x13A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A864u;
    // 0x13a868: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B5C8u, 0x13A864u, 0x13A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A86Cu;
label_13a86c:
    // 0x13a86c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_13a870:
    if (ctx->pc == 0x13A870u) {
        ctx->pc = 0x13A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A86Cu;
        // 0x13a870: 0xae20051c  sw          $zero, 0x51C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A874u;
        goto label_13a874;
    }
    ctx->pc = 0x13A86Cu;
    {
        const bool branch_taken_0x13a86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a86c) {
            ctx->pc = 0x13A870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A86Cu;
            // 0x13a870: 0xae20051c  sw          $zero, 0x51C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1308), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A890u;
            goto label_13a890;
        }
    }
    ctx->pc = 0x13A874u;
label_13a874:
    // 0x13a874: 0xc0b6dac  jal         func_2DB6B0
label_13a878:
    if (ctx->pc == 0x13A878u) {
        ctx->pc = 0x13A87Cu;
        goto label_13a87c;
    }
    ctx->pc = 0x13A874u;
    SET_GPR_U32(ctx, 31, 0x13A87Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A874u, 0x13A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A87Cu;
label_13a87c:
    // 0x13a87c: 0xc042d6e  jal         func_10B5B8
label_13a880:
    if (ctx->pc == 0x13A880u) {
        ctx->pc = 0x13A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A87Cu;
        // 0x13a880: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A884u;
        goto label_13a884;
    }
    ctx->pc = 0x13A87Cu;
    SET_GPR_U32(ctx, 31, 0x13A884u);
    ctx->pc = 0x13A880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A87Cu;
    // 0x13a880: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B5B8u, 0x13A87Cu, 0x13A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A884u;
label_13a884:
    // 0x13a884: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_13a888:
    if (ctx->pc == 0x13A888u) {
        ctx->pc = 0x13A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A884u;
        // 0x13a888: 0x8e220518  lw          $v0, 0x518($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A88Cu;
        goto label_13a88c;
    }
    ctx->pc = 0x13A884u;
    {
        const bool branch_taken_0x13a884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a884) {
            ctx->pc = 0x13A888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A884u;
            // 0x13a888: 0x8e220518  lw          $v0, 0x518($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A898u;
            goto label_13a898;
        }
    }
    ctx->pc = 0x13A88Cu;
label_13a88c:
    // 0x13a88c: 0xae20051c  sw          $zero, 0x51C($s1)
    ctx->pc = 0x13a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1308), GPR_U32(ctx, 0));
label_13a890:
    // 0x13a890: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x13a890u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
label_13a894:
    // 0x13a894: 0x8e220518  lw          $v0, 0x518($s1)
    ctx->pc = 0x13a894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
label_13a898:
    // 0x13a898: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_13a89c:
    if (ctx->pc == 0x13A89Cu) {
        ctx->pc = 0x13A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A898u;
        // 0x13a89c: 0x8ee20640  lw          $v0, 0x640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A8A0u;
        goto label_13a8a0;
    }
    ctx->pc = 0x13A898u;
    {
        const bool branch_taken_0x13a898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a898) {
            ctx->pc = 0x13A89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A898u;
            // 0x13a89c: 0x8ee20640  lw          $v0, 0x640($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A8ACu;
            goto label_13a8ac;
        }
    }
    ctx->pc = 0x13A8A0u;
label_13a8a0:
    // 0x13a8a0: 0xae20051c  sw          $zero, 0x51C($s1)
    ctx->pc = 0x13a8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1308), GPR_U32(ctx, 0));
label_13a8a4:
    // 0x13a8a4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13a8a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13a8a8:
    // 0x13a8a8: 0x8ee20640  lw          $v0, 0x640($s7)
    ctx->pc = 0x13a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1600)));
label_13a8ac:
    // 0x13a8ac: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
label_13a8b0:
    if (ctx->pc == 0x13A8B0u) {
        ctx->pc = 0x13A8B4u;
        goto label_13a8b4;
    }
    ctx->pc = 0x13A8ACu;
    {
        const bool branch_taken_0x13a8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a8ac) {
            ctx->pc = 0x13AA6Cu;
            goto label_13aa6c;
        }
    }
    ctx->pc = 0x13A8B4u;
label_13a8b4:
    // 0x13a8b4: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x13a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
label_13a8b8:
    // 0x13a8b8: 0x3c03e000  lui         $v1, 0xE000
    ctx->pc = 0x13a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57344 << 16));
label_13a8bc:
    // 0x13a8bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13a8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13a8c0:
    // 0x13a8c0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_13a8c4:
    if (ctx->pc == 0x13A8C4u) {
        ctx->pc = 0x13A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8C0u;
        // 0x13a8c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A8C8u;
        goto label_13a8c8;
    }
    ctx->pc = 0x13A8C0u;
    {
        const bool branch_taken_0x13a8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8C0u;
        // 0x13a8c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a8c0) {
            ctx->pc = 0x13A8CCu;
            goto label_13a8cc;
        }
    }
    ctx->pc = 0x13A8C8u;
label_13a8c8:
    // 0x13a8c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a8cc:
    // 0x13a8cc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13a8ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13a8d0:
    // 0x13a8d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a8d4:
    // 0x13a8d4: 0x16020065  bne         $s0, $v0, . + 4 + (0x65 << 2)
label_13a8d8:
    if (ctx->pc == 0x13A8D8u) {
        ctx->pc = 0x13A8DCu;
        goto label_13a8dc;
    }
    ctx->pc = 0x13A8D4u;
    {
        const bool branch_taken_0x13a8d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x13a8d4) {
            ctx->pc = 0x13AA6Cu;
            goto label_13aa6c;
        }
    }
    ctx->pc = 0x13A8DCu;
label_13a8dc:
    // 0x13a8dc: 0x8e22051c  lw          $v0, 0x51C($s1)
    ctx->pc = 0x13a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1308)));
label_13a8e0:
    // 0x13a8e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_13a8e4:
    if (ctx->pc == 0x13A8E4u) {
        ctx->pc = 0x13A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8E0u;
        // 0x13a8e4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A8E8u;
        goto label_13a8e8;
    }
    ctx->pc = 0x13A8E0u;
    {
        const bool branch_taken_0x13a8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8E0u;
        // 0x13a8e4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a8e0) {
            ctx->pc = 0x13A8FCu;
            goto label_13a8fc;
        }
    }
    ctx->pc = 0x13A8E8u;
label_13a8e8:
    // 0x13a8e8: 0xc0c73be  jal         func_31CEF8
label_13a8ec:
    if (ctx->pc == 0x13A8ECu) {
        ctx->pc = 0x13A8F0u;
        goto label_13a8f0;
    }
    ctx->pc = 0x13A8E8u;
    SET_GPR_U32(ctx, 31, 0x13A8F0u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x13A8E8u, 0x13A8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A8F0u;
label_13a8f0:
    // 0x13a8f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13a8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_13a8f4:
    // 0x13a8f4: 0xae62d540  sw          $v0, -0x2AC0($s3)
    ctx->pc = 0x13a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294956352), GPR_U32(ctx, 2));
label_13a8f8:
    // 0x13a8f8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x13a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_13a8fc:
    // 0x13a8fc: 0xae22051c  sw          $v0, 0x51C($s1)
    ctx->pc = 0x13a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1308), GPR_U32(ctx, 2));
label_13a900:
    // 0x13a900: 0x8ee30690  lw          $v1, 0x690($s7)
    ctx->pc = 0x13a900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1680)));
label_13a904:
    // 0x13a904: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
label_13a908:
    if (ctx->pc == 0x13A908u) {
        ctx->pc = 0x13A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A904u;
        // 0x13a908: 0xae60d540  sw          $zero, -0x2AC0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294956352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A90Cu;
        goto label_13a90c;
    }
    ctx->pc = 0x13A904u;
    {
        const bool branch_taken_0x13a904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a904) {
            ctx->pc = 0x13A908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A904u;
            // 0x13a908: 0xae60d540  sw          $zero, -0x2AC0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294956352), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A95Cu;
            goto label_13a95c;
        }
    }
    ctx->pc = 0x13A90Cu;
label_13a90c:
    // 0x13a90c: 0x8ee200f0  lw          $v0, 0xF0($s7)
    ctx->pc = 0x13a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 240)));
label_13a910:
    // 0x13a910: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x13a910u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13a914:
    // 0x13a914: 0xfba401b0  sqc2        $vf4, 0x1B0($sp)
    ctx->pc = 0x13a914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[4]));
label_13a918:
    // 0x13a918: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x13a918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_13a91c:
    // 0x13a91c: 0xc6ec0104  lwc1        $f12, 0x104($s7)
    ctx->pc = 0x13a91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13a920:
    // 0x13a920: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x13a920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_13a924:
    // 0x13a924: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x13a924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_13a928:
    // 0x13a928: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x13a928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
label_13a92c:
    // 0x13a92c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x13a92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_13a930:
    // 0x13a930: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x13a930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_13a934:
    // 0x13a934: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x13a934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_13a938:
    // 0x13a938: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13a938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a93c:
    // 0x13a93c: 0x8fa501e4  lw          $a1, 0x1E4($sp)
    ctx->pc = 0x13a93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_13a940:
    // 0x13a940: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13a940u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a944:
    // 0x13a944: 0xc0a4404  jal         func_291010
label_13a948:
    if (ctx->pc == 0x13A948u) {
        ctx->pc = 0x13A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A944u;
        // 0x13a948: 0x8ee60690  lw          $a2, 0x690($s7) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A94Cu;
        goto label_13a94c;
    }
    ctx->pc = 0x13A944u;
    SET_GPR_U32(ctx, 31, 0x13A94Cu);
    ctx->pc = 0x13A948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A944u;
    // 0x13a948: 0x8ee60690  lw          $a2, 0x690($s7) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x13A944u, 0x13A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A94Cu;
label_13a94c:
    // 0x13a94c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13a950:
    if (ctx->pc == 0x13A950u) {
        ctx->pc = 0x13A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A94Cu;
        // 0x13a950: 0x8e62d540  lw          $v0, -0x2AC0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A954u;
        goto label_13a954;
    }
    ctx->pc = 0x13A94Cu;
    {
        const bool branch_taken_0x13a94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A94Cu;
        // 0x13a950: 0x8e62d540  lw          $v0, -0x2AC0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a94c) {
            ctx->pc = 0x13A95Cu;
            goto label_13a95c;
        }
    }
    ctx->pc = 0x13A954u;
label_13a954:
    // 0x13a954: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_13a958:
    if (ctx->pc == 0x13A958u) {
        ctx->pc = 0x13A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A954u;
        // 0x13a958: 0xae70d540  sw          $s0, -0x2AC0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294956352), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A95Cu;
        goto label_13a95c;
    }
    ctx->pc = 0x13A954u;
    {
        const bool branch_taken_0x13a954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a954) {
            ctx->pc = 0x13A958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A954u;
            // 0x13a958: 0xae70d540  sw          $s0, -0x2AC0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294956352), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A95Cu;
            goto label_13a95c;
        }
    }
    ctx->pc = 0x13A95Cu;
label_13a95c:
    // 0x13a95c: 0xc0b6dac  jal         func_2DB6B0
label_13a960:
    if (ctx->pc == 0x13A960u) {
        ctx->pc = 0x13A964u;
        goto label_13a964;
    }
    ctx->pc = 0x13A95Cu;
    SET_GPR_U32(ctx, 31, 0x13A964u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A95Cu, 0x13A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A964u;
label_13a964:
    // 0x13a964: 0xc042d92  jal         func_10B648
label_13a968:
    if (ctx->pc == 0x13A968u) {
        ctx->pc = 0x13A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A964u;
        // 0x13a968: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A96Cu;
        goto label_13a96c;
    }
    ctx->pc = 0x13A964u;
    SET_GPR_U32(ctx, 31, 0x13A96Cu);
    ctx->pc = 0x13A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A964u;
    // 0x13a968: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B648u, 0x13A964u, 0x13A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A96Cu;
label_13a96c:
    // 0x13a96c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_13a970:
    if (ctx->pc == 0x13A970u) {
        ctx->pc = 0x13A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A96Cu;
        // 0x13a970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A974u;
        goto label_13a974;
    }
    ctx->pc = 0x13A96Cu;
    {
        const bool branch_taken_0x13a96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A96Cu;
        // 0x13a970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a96c) {
            ctx->pc = 0x13A978u;
            goto label_13a978;
        }
    }
    ctx->pc = 0x13A974u;
label_13a974:
    // 0x13a974: 0xae62d540  sw          $v0, -0x2AC0($s3)
    ctx->pc = 0x13a974u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294956352), GPR_U32(ctx, 2));
label_13a978:
    // 0x13a978: 0xc0b6dac  jal         func_2DB6B0
label_13a97c:
    if (ctx->pc == 0x13A97Cu) {
        ctx->pc = 0x13A980u;
        goto label_13a980;
    }
    ctx->pc = 0x13A978u;
    SET_GPR_U32(ctx, 31, 0x13A980u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A978u, 0x13A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A980u;
label_13a980:
    // 0x13a980: 0xc042d92  jal         func_10B648
label_13a984:
    if (ctx->pc == 0x13A984u) {
        ctx->pc = 0x13A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A980u;
        // 0x13a984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A988u;
        goto label_13a988;
    }
    ctx->pc = 0x13A980u;
    SET_GPR_U32(ctx, 31, 0x13A988u);
    ctx->pc = 0x13A984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A980u;
    // 0x13a984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B648u, 0x13A980u, 0x13A988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A988u;
label_13a988:
    // 0x13a988: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_13a98c:
    if (ctx->pc == 0x13A98Cu) {
        ctx->pc = 0x13A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A988u;
        // 0x13a98c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A990u;
        goto label_13a990;
    }
    ctx->pc = 0x13A988u;
    {
        const bool branch_taken_0x13a988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A988u;
        // 0x13a98c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a988) {
            ctx->pc = 0x13A994u;
            goto label_13a994;
        }
    }
    ctx->pc = 0x13A990u;
label_13a990:
    // 0x13a990: 0xae62d540  sw          $v0, -0x2AC0($s3)
    ctx->pc = 0x13a990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294956352), GPR_U32(ctx, 2));
label_13a994:
    // 0x13a994: 0xc6210510  lwc1        $f1, 0x510($s1)
    ctx->pc = 0x13a994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a998:
    // 0x13a998: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13a998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13a99c:
    // 0x13a99c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13a99cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a9a0:
    // 0x13a9a0: 0x0  nop
    ctx->pc = 0x13a9a0u;
    // NOP
label_13a9a4:
    // 0x13a9a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13a9a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13a9a8:
    // 0x13a9a8: 0x0  nop
    ctx->pc = 0x13a9a8u;
    // NOP
label_13a9ac:
    // 0x13a9ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_13a9b0:
    if (ctx->pc == 0x13A9B0u) {
        ctx->pc = 0x13A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9ACu;
        // 0x13a9b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A9B4u;
        goto label_13a9b4;
    }
    ctx->pc = 0x13A9ACu;
    {
        const bool branch_taken_0x13a9ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9ACu;
        // 0x13a9b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a9ac) {
            ctx->pc = 0x13A9B8u;
            goto label_13a9b8;
        }
    }
    ctx->pc = 0x13A9B4u;
label_13a9b4:
    // 0x13a9b4: 0xae62d540  sw          $v0, -0x2AC0($s3)
    ctx->pc = 0x13a9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294956352), GPR_U32(ctx, 2));
label_13a9b8:
    // 0x13a9b8: 0xc0b6dac  jal         func_2DB6B0
label_13a9bc:
    if (ctx->pc == 0x13A9BCu) {
        ctx->pc = 0x13A9C0u;
        goto label_13a9c0;
    }
    ctx->pc = 0x13A9B8u;
    SET_GPR_U32(ctx, 31, 0x13A9C0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13A9B8u, 0x13A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A9C0u;
label_13a9c0:
    // 0x13a9c0: 0x8c450640  lw          $a1, 0x640($v0)
    ctx->pc = 0x13a9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1600)));
label_13a9c4:
    // 0x13a9c4: 0x94a302fe  lhu         $v1, 0x2FE($a1)
    ctx->pc = 0x13a9c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 766)));
label_13a9c8:
    // 0x13a9c8: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x13a9c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_13a9cc:
    // 0x13a9cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_13a9d0:
    if (ctx->pc == 0x13A9D0u) {
        ctx->pc = 0x13A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9CCu;
        // 0x13a9d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A9D4u;
        goto label_13a9d4;
    }
    ctx->pc = 0x13A9CCu;
    {
        const bool branch_taken_0x13a9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9CCu;
        // 0x13a9d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a9cc) {
            ctx->pc = 0x13A9DCu;
            goto label_13a9dc;
        }
    }
    ctx->pc = 0x13A9D4u;
label_13a9d4:
    // 0x13a9d4: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x13a9d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_13a9d8:
    // 0x13a9d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a9dc:
    // 0x13a9dc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x13a9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_13a9e0:
    // 0x13a9e0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_13a9e4:
    if (ctx->pc == 0x13A9E4u) {
        ctx->pc = 0x13A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9E0u;
        // 0x13a9e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A9E8u;
        goto label_13a9e8;
    }
    ctx->pc = 0x13A9E0u;
    {
        const bool branch_taken_0x13a9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9E0u;
        // 0x13a9e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a9e0) {
            ctx->pc = 0x13AA50u;
            goto label_13aa50;
        }
    }
    ctx->pc = 0x13A9E8u;
label_13a9e8:
    // 0x13a9e8: 0x8ca20564  lw          $v0, 0x564($a1)
    ctx->pc = 0x13a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1380)));
label_13a9ec:
    // 0x13a9ec: 0x2444fdfc  addiu       $a0, $v0, -0x204
    ctx->pc = 0x13a9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966780));
label_13a9f0:
    // 0x13a9f0: 0x2c830076  sltiu       $v1, $a0, 0x76
    ctx->pc = 0x13a9f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)118) ? 1 : 0);
label_13a9f4:
    // 0x13a9f4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_13a9f8:
    if (ctx->pc == 0x13A9F8u) {
        ctx->pc = 0x13A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9F4u;
        // 0x13a9f8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A9FCu;
        goto label_13a9fc;
    }
    ctx->pc = 0x13A9F4u;
    {
        const bool branch_taken_0x13a9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9F4u;
        // 0x13a9f8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a9f4) {
            ctx->pc = 0x13AA54u;
            goto label_13aa54;
        }
    }
    ctx->pc = 0x13A9FCu;
label_13a9fc:
    // 0x13a9fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x13a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_13aa00:
    // 0x13aa00: 0x2442d980  addiu       $v0, $v0, -0x2680
    ctx->pc = 0x13aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957440));
label_13aa04:
    // 0x13aa04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13aa08:
    // 0x13aa08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13aa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13aa0c:
    // 0x13aa0c: 0x800008  jr          $a0
label_13aa10:
    if (ctx->pc == 0x13AA10u) {
        ctx->pc = 0x13AA14u;
        goto label_13aa14;
    }
    ctx->pc = 0x13AA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13AA14u: goto label_13aa14;
            case 0x13AA1Cu: goto label_13aa1c;
            case 0x13AA24u: goto label_13aa24;
            case 0x13AA2Cu: goto label_13aa2c;
            case 0x13AA44u: goto label_13aa44;
            case 0x13AA4Cu: goto label_13aa4c;
            case 0x13AA54u: goto label_13aa54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AA0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13AA14u;
label_13aa14:
    // 0x13aa14: 0x1000000e  b           . + 4 + (0xE << 2)
label_13aa18:
    if (ctx->pc == 0x13AA18u) {
        ctx->pc = 0x13AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA14u;
        // 0x13aa18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA1Cu;
        goto label_13aa1c;
    }
    ctx->pc = 0x13AA14u;
    {
        const bool branch_taken_0x13aa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA14u;
        // 0x13aa18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa14) {
            ctx->pc = 0x13AA50u;
            goto label_13aa50;
        }
    }
    ctx->pc = 0x13AA1Cu;
label_13aa1c:
    // 0x13aa1c: 0x1000000c  b           . + 4 + (0xC << 2)
label_13aa20:
    if (ctx->pc == 0x13AA20u) {
        ctx->pc = 0x13AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA1Cu;
        // 0x13aa20: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA24u;
        goto label_13aa24;
    }
    ctx->pc = 0x13AA1Cu;
    {
        const bool branch_taken_0x13aa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA1Cu;
        // 0x13aa20: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa1c) {
            ctx->pc = 0x13AA50u;
            goto label_13aa50;
        }
    }
    ctx->pc = 0x13AA24u;
label_13aa24:
    // 0x13aa24: 0x1000000a  b           . + 4 + (0xA << 2)
label_13aa28:
    if (ctx->pc == 0x13AA28u) {
        ctx->pc = 0x13AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA24u;
        // 0x13aa28: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA2Cu;
        goto label_13aa2c;
    }
    ctx->pc = 0x13AA24u;
    {
        const bool branch_taken_0x13aa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA24u;
        // 0x13aa28: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa24) {
            ctx->pc = 0x13AA50u;
            goto label_13aa50;
        }
    }
    ctx->pc = 0x13AA2Cu;
label_13aa2c:
    // 0x13aa2c: 0xc09d75a  jal         func_275D68
label_13aa30:
    if (ctx->pc == 0x13AA30u) {
        ctx->pc = 0x13AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA2Cu;
        // 0x13aa30: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA34u;
        goto label_13aa34;
    }
    ctx->pc = 0x13AA2Cu;
    SET_GPR_U32(ctx, 31, 0x13AA34u);
    ctx->pc = 0x13AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA2Cu;
    // 0x13aa30: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275D68u, 0x13AA2Cu, 0x13AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA34u;
label_13aa34:
    // 0x13aa34: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_13aa38:
    if (ctx->pc == 0x13AA38u) {
        ctx->pc = 0x13AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA34u;
        // 0x13aa38: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA3Cu;
        goto label_13aa3c;
    }
    ctx->pc = 0x13AA34u;
    {
        const bool branch_taken_0x13aa34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA34u;
        // 0x13aa38: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa34) {
            ctx->pc = 0x13AA50u;
            goto label_13aa50;
        }
    }
    ctx->pc = 0x13AA3Cu;
label_13aa3c:
    // 0x13aa3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_13aa40:
    if (ctx->pc == 0x13AA40u) {
        ctx->pc = 0x13AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA3Cu;
        // 0x13aa40: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA44u;
        goto label_13aa44;
    }
    ctx->pc = 0x13AA3Cu;
    {
        const bool branch_taken_0x13aa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA3Cu;
        // 0x13aa40: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa3c) {
            ctx->pc = 0x13AA50u;
            goto label_13aa50;
        }
    }
    ctx->pc = 0x13AA44u;
label_13aa44:
    // 0x13aa44: 0x10000002  b           . + 4 + (0x2 << 2)
label_13aa48:
    if (ctx->pc == 0x13AA48u) {
        ctx->pc = 0x13AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA44u;
        // 0x13aa48: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA4Cu;
        goto label_13aa4c;
    }
    ctx->pc = 0x13AA44u;
    {
        const bool branch_taken_0x13aa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA44u;
        // 0x13aa48: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa44) {
            ctx->pc = 0x13AA50u;
            goto label_13aa50;
        }
    }
    ctx->pc = 0x13AA4Cu;
label_13aa4c:
    // 0x13aa4c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x13aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_13aa50:
    // 0x13aa50: 0xae62d540  sw          $v0, -0x2AC0($s3)
    ctx->pc = 0x13aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294956352), GPR_U32(ctx, 2));
label_13aa54:
    // 0x13aa54: 0xc04b298  jal         func_12CA60
label_13aa58:
    if (ctx->pc == 0x13AA58u) {
        ctx->pc = 0x13AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA54u;
        // 0x13aa58: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA5Cu;
        goto label_13aa5c;
    }
    ctx->pc = 0x13AA54u;
    SET_GPR_U32(ctx, 31, 0x13AA5Cu);
    ctx->pc = 0x13AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA54u;
    // 0x13aa58: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA60u, 0x13AA54u, 0x13AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA5Cu;
label_13aa5c:
    // 0x13aa5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13aa60:
    if (ctx->pc == 0x13AA60u) {
        ctx->pc = 0x13AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA5Cu;
        // 0x13aa60: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA64u;
        goto label_13aa64;
    }
    ctx->pc = 0x13AA5Cu;
    {
        const bool branch_taken_0x13aa5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA5Cu;
        // 0x13aa60: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa5c) {
            ctx->pc = 0x13AA6Cu;
            goto label_13aa6c;
        }
    }
    ctx->pc = 0x13AA64u;
label_13aa64:
    // 0x13aa64: 0xae62d540  sw          $v0, -0x2AC0($s3)
    ctx->pc = 0x13aa64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294956352), GPR_U32(ctx, 2));
label_13aa68:
    // 0x13aa68: 0xae20051c  sw          $zero, 0x51C($s1)
    ctx->pc = 0x13aa68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1308), GPR_U32(ctx, 0));
label_13aa6c:
    // 0x13aa6c: 0xc04b292  jal         func_12CA48
label_13aa70:
    if (ctx->pc == 0x13AA70u) {
        ctx->pc = 0x13AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA6Cu;
        // 0x13aa70: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA74u;
        goto label_13aa74;
    }
    ctx->pc = 0x13AA6Cu;
    SET_GPR_U32(ctx, 31, 0x13AA74u);
    ctx->pc = 0x13AA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA6Cu;
    // 0x13aa70: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA48u, 0x13AA6Cu, 0x13AA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA74u;
label_13aa74:
    // 0x13aa74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13aa78:
    if (ctx->pc == 0x13AA78u) {
        ctx->pc = 0x13AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA74u;
        // 0x13aa78: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA7Cu;
        goto label_13aa7c;
    }
    ctx->pc = 0x13AA74u;
    {
        const bool branch_taken_0x13aa74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA74u;
        // 0x13aa78: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa74) {
            ctx->pc = 0x13AA88u;
            goto label_13aa88;
        }
    }
    ctx->pc = 0x13AA7Cu;
label_13aa7c:
    // 0x13aa7c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x13aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_13aa80:
    // 0x13aa80: 0xae62d540  sw          $v0, -0x2AC0($s3)
    ctx->pc = 0x13aa80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294956352), GPR_U32(ctx, 2));
label_13aa84:
    // 0x13aa84: 0xae23051c  sw          $v1, 0x51C($s1)
    ctx->pc = 0x13aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1308), GPR_U32(ctx, 3));
label_13aa88:
    // 0x13aa88: 0xc04b3b6  jal         func_12CED8
label_13aa8c:
    if (ctx->pc == 0x13AA8Cu) {
        ctx->pc = 0x13AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA88u;
        // 0x13aa8c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA90u;
        goto label_13aa90;
    }
    ctx->pc = 0x13AA88u;
    SET_GPR_U32(ctx, 31, 0x13AA90u);
    ctx->pc = 0x13AA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA88u;
    // 0x13aa8c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CED8u, 0x13AA88u, 0x13AA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA90u;
label_13aa90:
    // 0x13aa90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13aa94:
    if (ctx->pc == 0x13AA94u) {
        ctx->pc = 0x13AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA90u;
        // 0x13aa94: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA98u;
        goto label_13aa98;
    }
    ctx->pc = 0x13AA90u;
    {
        const bool branch_taken_0x13aa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA90u;
        // 0x13aa94: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa90) {
            ctx->pc = 0x13AAA4u;
            goto label_13aaa4;
        }
    }
    ctx->pc = 0x13AA98u;
label_13aa98:
    // 0x13aa98: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x13aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_13aa9c:
    // 0x13aa9c: 0xae62d540  sw          $v0, -0x2AC0($s3)
    ctx->pc = 0x13aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294956352), GPR_U32(ctx, 2));
label_13aaa0:
    // 0x13aaa0: 0xae23051c  sw          $v1, 0x51C($s1)
    ctx->pc = 0x13aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1308), GPR_U32(ctx, 3));
label_13aaa4:
    // 0x13aaa4: 0xc04b14c  jal         func_12C530
label_13aaa8:
    if (ctx->pc == 0x13AAA8u) {
        ctx->pc = 0x13AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAA4u;
        // 0x13aaa8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AAACu;
        goto label_13aaac;
    }
    ctx->pc = 0x13AAA4u;
    SET_GPR_U32(ctx, 31, 0x13AAACu);
    ctx->pc = 0x13AAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AAA4u;
    // 0x13aaa8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x13AAA4u, 0x13AAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AAACu;
label_13aaac:
    // 0x13aaac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13aab0:
    if (ctx->pc == 0x13AAB0u) {
        ctx->pc = 0x13AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAACu;
        // 0x13aab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AAB4u;
        goto label_13aab4;
    }
    ctx->pc = 0x13AAACu;
    {
        const bool branch_taken_0x13aaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAACu;
        // 0x13aab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aaac) {
            ctx->pc = 0x13AAC0u;
            goto label_13aac0;
        }
    }
    ctx->pc = 0x13AAB4u;
label_13aab4:
    // 0x13aab4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_13aab8:
    // 0x13aab8: 0xae22051c  sw          $v0, 0x51C($s1)
    ctx->pc = 0x13aab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1308), GPR_U32(ctx, 2));
label_13aabc:
    // 0x13aabc: 0xae63d540  sw          $v1, -0x2AC0($s3)
    ctx->pc = 0x13aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294956352), GPR_U32(ctx, 3));
label_13aac0:
    // 0x13aac0: 0x8e62d540  lw          $v0, -0x2AC0($s3)
    ctx->pc = 0x13aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956352)));
label_13aac4:
    // 0x13aac4: 0x2c42000e  sltiu       $v0, $v0, 0xE
    ctx->pc = 0x13aac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_13aac8:
    // 0x13aac8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_13aacc:
    if (ctx->pc == 0x13AACCu) {
        ctx->pc = 0x13AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAC8u;
        // 0x13aacc: 0xae60d540  sw          $zero, -0x2AC0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294956352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AAD0u;
        goto label_13aad0;
    }
    ctx->pc = 0x13AAC8u;
    {
        const bool branch_taken_0x13aac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aac8) {
            ctx->pc = 0x13AACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AAC8u;
            // 0x13aacc: 0xae60d540  sw          $zero, -0x2AC0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294956352), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AAD0u;
            goto label_13aad0;
        }
    }
    ctx->pc = 0x13AAD0u;
label_13aad0:
    // 0x13aad0: 0x8e22051c  lw          $v0, 0x51C($s1)
    ctx->pc = 0x13aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1308)));
label_13aad4:
    // 0x13aad4: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_13aad8:
    if (ctx->pc == 0x13AAD8u) {
        ctx->pc = 0x13AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAD4u;
        // 0x13aad8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AADCu;
        goto label_13aadc;
    }
    ctx->pc = 0x13AAD4u;
    {
        const bool branch_taken_0x13aad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAD4u;
        // 0x13aad8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aad4) {
            ctx->pc = 0x13AC08u;
            goto label_13ac08;
        }
    }
    ctx->pc = 0x13AADCu;
label_13aadc:
    // 0x13aadc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x13aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_13aae0:
    // 0x13aae0: 0xae22051c  sw          $v0, 0x51C($s1)
    ctx->pc = 0x13aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1308), GPR_U32(ctx, 2));
label_13aae4:
    // 0x13aae4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x13aae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_13aae8:
    // 0x13aae8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13aae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13aaec:
    // 0x13aaec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13aaecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_13aaf0:
    // 0x13aaf0: 0x2463d548  addiu       $v1, $v1, -0x2AB8
    ctx->pc = 0x13aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956360));
label_13aaf4:
    // 0x13aaf4: 0x8e62d540  lw          $v0, -0x2AC0($s3)
    ctx->pc = 0x13aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956352)));
label_13aaf8:
    // 0x13aaf8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x13aaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
label_13aafc:
    // 0x13aafc: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x13aafcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
label_13ab00:
    // 0x13ab00: 0xc6210400  lwc1        $f1, 0x400($s1)
    ctx->pc = 0x13ab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13ab04:
    // 0x13ab04: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x13ab04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_13ab08:
    // 0x13ab08: 0xc6230404  lwc1        $f3, 0x404($s1)
    ctx->pc = 0x13ab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13ab0c:
    // 0x13ab0c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x13ab0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_13ab10:
    // 0x13ab10: 0xc6240408  lwc1        $f4, 0x408($s1)
    ctx->pc = 0x13ab10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_13ab14:
    // 0x13ab14: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x13ab14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_13ab18:
    // 0x13ab18: 0x24a5d5f0  addiu       $a1, $a1, -0x2A10
    ctx->pc = 0x13ab18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956528));
label_13ab1c:
    // 0x13ab1c: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x13ab1cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_13ab20:
    // 0x13ab20: 0xc6250410  lwc1        $f5, 0x410($s1)
    ctx->pc = 0x13ab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_13ab24:
    // 0x13ab24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13ab28:
    // 0x13ab28: 0xc6260414  lwc1        $f6, 0x414($s1)
    ctx->pc = 0x13ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_13ab2c:
    // 0x13ab2c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13ab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13ab30:
    // 0x13ab30: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x13ab30u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
label_13ab34:
    // 0x13ab34: 0x46143182  mul.s       $f6, $f6, $f20
    ctx->pc = 0x13ab34u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
label_13ab38:
    // 0x13ab38: 0xc6270418  lwc1        $f7, 0x418($s1)
    ctx->pc = 0x13ab38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_13ab3c:
    // 0x13ab3c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13ab3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_13ab40:
    // 0x13ab40: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x13ab40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
label_13ab44:
    // 0x13ab44: 0x461439c2  mul.s       $f7, $f7, $f20
    ctx->pc = 0x13ab44u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
label_13ab48:
    // 0x13ab48: 0x24c6d698  addiu       $a2, $a2, -0x2968
    ctx->pc = 0x13ab48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956696));
label_13ab4c:
    // 0x13ab4c: 0xc6280420  lwc1        $f8, 0x420($s1)
    ctx->pc = 0x13ab4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_13ab50:
    // 0x13ab50: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13ab50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13ab54:
    // 0x13ab54: 0x46144202  mul.s       $f8, $f8, $f20
    ctx->pc = 0x13ab54u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[20]);
label_13ab58:
    // 0x13ab58: 0xe6210400  swc1        $f1, 0x400($s1)
    ctx->pc = 0x13ab58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1024), bits); }
label_13ab5c:
    // 0x13ab5c: 0x8e62d540  lw          $v0, -0x2AC0($s3)
    ctx->pc = 0x13ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956352)));
label_13ab60:
    // 0x13ab60: 0x443818  mult        $a3, $v0, $a0
    ctx->pc = 0x13ab60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_13ab64:
    // 0x13ab64: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x13ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_13ab68:
    // 0x13ab68: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x13ab68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13ab6c:
    // 0x13ab6c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13ab6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_13ab70:
    // 0x13ab70: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x13ab70u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_13ab74:
    // 0x13ab74: 0xe6230404  swc1        $f3, 0x404($s1)
    ctx->pc = 0x13ab74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1028), bits); }
label_13ab78:
    // 0x13ab78: 0x8e62d540  lw          $v0, -0x2AC0($s3)
    ctx->pc = 0x13ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956352)));
label_13ab7c:
    // 0x13ab7c: 0x443818  mult        $a3, $v0, $a0
    ctx->pc = 0x13ab7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_13ab80:
    // 0x13ab80: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x13ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_13ab84:
    // 0x13ab84: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13ab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13ab88:
    // 0x13ab88: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13ab88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_13ab8c:
    // 0x13ab8c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x13ab8cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_13ab90:
    // 0x13ab90: 0xe6240408  swc1        $f4, 0x408($s1)
    ctx->pc = 0x13ab90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1032), bits); }
label_13ab94:
    // 0x13ab94: 0x8e62d540  lw          $v0, -0x2AC0($s3)
    ctx->pc = 0x13ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956352)));
label_13ab98:
    // 0x13ab98: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x13ab98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_13ab9c:
    // 0x13ab9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_13aba0:
    // 0x13aba0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13aba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13aba4:
    // 0x13aba4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13aba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_13aba8:
    // 0x13aba8: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x13aba8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_13abac:
    // 0x13abac: 0xe6250410  swc1        $f5, 0x410($s1)
    ctx->pc = 0x13abacu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1040), bits); }
label_13abb0:
    // 0x13abb0: 0x8e62d540  lw          $v0, -0x2AC0($s3)
    ctx->pc = 0x13abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956352)));
label_13abb4:
    // 0x13abb4: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x13abb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_13abb8:
    // 0x13abb8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x13abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_13abbc:
    // 0x13abbc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x13abbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13abc0:
    // 0x13abc0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13abc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_13abc4:
    // 0x13abc4: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x13abc4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_13abc8:
    // 0x13abc8: 0xe6260414  swc1        $f6, 0x414($s1)
    ctx->pc = 0x13abc8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1044), bits); }
label_13abcc:
    // 0x13abcc: 0x8e62d540  lw          $v0, -0x2AC0($s3)
    ctx->pc = 0x13abccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956352)));
label_13abd0:
    // 0x13abd0: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x13abd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_13abd4:
    // 0x13abd4: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x13abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_13abd8:
    // 0x13abd8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13abd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13abdc:
    // 0x13abdc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13abdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_13abe0:
    // 0x13abe0: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x13abe0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_13abe4:
    // 0x13abe4: 0xe6270418  swc1        $f7, 0x418($s1)
    ctx->pc = 0x13abe4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1048), bits); }
label_13abe8:
    // 0x13abe8: 0x8e62d540  lw          $v0, -0x2AC0($s3)
    ctx->pc = 0x13abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956352)));
label_13abec:
    // 0x13abec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13abecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13abf0:
    // 0x13abf0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_13abf4:
    // 0x13abf4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13abf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13abf8:
    // 0x13abf8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13abf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_13abfc:
    // 0x13abfc: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x13abfcu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
label_13ac00:
    // 0x13ac00: 0x10000051  b           . + 4 + (0x51 << 2)
label_13ac04:
    if (ctx->pc == 0x13AC04u) {
        ctx->pc = 0x13AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AC00u;
        // 0x13ac04: 0xe6280420  swc1        $f8, 0x420($s1) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1056), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AC08u;
        goto label_13ac08;
    }
    ctx->pc = 0x13AC00u;
    {
        const bool branch_taken_0x13ac00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AC00u;
        // 0x13ac04: 0xe6280420  swc1        $f8, 0x420($s1) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1056), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ac00) {
            ctx->pc = 0x13AD48u;
            goto label_13ad48;
        }
    }
    ctx->pc = 0x13AC08u;
label_13ac08:
    // 0x13ac08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13ac08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13ac0c:
    // 0x13ac0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ac0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13ac10:
    // 0x13ac10: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x13ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_13ac14:
    // 0x13ac14: 0xc6290400  lwc1        $f9, 0x400($s1)
    ctx->pc = 0x13ac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_13ac18:
    // 0x13ac18: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x13ac18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_13ac1c:
    // 0x13ac1c: 0xc62a0404  lwc1        $f10, 0x404($s1)
    ctx->pc = 0x13ac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_13ac20:
    // 0x13ac20: 0xc62c0408  lwc1        $f12, 0x408($s1)
    ctx->pc = 0x13ac20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13ac24:
    // 0x13ac24: 0x46144a42  mul.s       $f9, $f9, $f20
    ctx->pc = 0x13ac24u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[20]);
label_13ac28:
    // 0x13ac28: 0xc62b0410  lwc1        $f11, 0x410($s1)
    ctx->pc = 0x13ac28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_13ac2c:
    // 0x13ac2c: 0x46145282  mul.s       $f10, $f10, $f20
    ctx->pc = 0x13ac2cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[20]);
label_13ac30:
    // 0x13ac30: 0xc6280418  lwc1        $f8, 0x418($s1)
    ctx->pc = 0x13ac30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_13ac34:
    // 0x13ac34: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x13ac34u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
label_13ac38:
    // 0x13ac38: 0xc6270420  lwc1        $f7, 0x420($s1)
    ctx->pc = 0x13ac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_13ac3c:
    // 0x13ac3c: 0x46145ac2  mul.s       $f11, $f11, $f20
    ctx->pc = 0x13ac3cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[20]);
label_13ac40:
    // 0x13ac40: 0xc6260440  lwc1        $f6, 0x440($s1)
    ctx->pc = 0x13ac40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_13ac44:
    // 0x13ac44: 0x46144202  mul.s       $f8, $f8, $f20
    ctx->pc = 0x13ac44u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[20]);
label_13ac48:
    // 0x13ac48: 0xc6250444  lwc1        $f5, 0x444($s1)
    ctx->pc = 0x13ac48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_13ac4c:
    // 0x13ac4c: 0x461439c2  mul.s       $f7, $f7, $f20
    ctx->pc = 0x13ac4cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
label_13ac50:
    // 0x13ac50: 0xc6240448  lwc1        $f4, 0x448($s1)
    ctx->pc = 0x13ac50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_13ac54:
    // 0x13ac54: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x13ac54u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_13ac58:
    // 0x13ac58: 0xc6210450  lwc1        $f1, 0x450($s1)
    ctx->pc = 0x13ac58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13ac5c:
    // 0x13ac5c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x13ac5cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_13ac60:
    // 0x13ac60: 0xc6220458  lwc1        $f2, 0x458($s1)
    ctx->pc = 0x13ac60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13ac64:
    // 0x13ac64: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x13ac64u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_13ac68:
    // 0x13ac68: 0xc6230460  lwc1        $f3, 0x460($s1)
    ctx->pc = 0x13ac68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13ac6c:
    // 0x13ac6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13ac6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13ac70:
    // 0x13ac70: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x13ac70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_13ac74:
    // 0x13ac74: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x13ac74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_13ac78:
    // 0x13ac78: 0x46064a40  add.s       $f9, $f9, $f6
    ctx->pc = 0x13ac78u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[6]);
label_13ac7c:
    // 0x13ac7c: 0x46055280  add.s       $f10, $f10, $f5
    ctx->pc = 0x13ac7cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[5]);
label_13ac80:
    // 0x13ac80: 0x46046300  add.s       $f12, $f12, $f4
    ctx->pc = 0x13ac80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
label_13ac84:
    // 0x13ac84: 0x46015ac0  add.s       $f11, $f11, $f1
    ctx->pc = 0x13ac84u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[1]);
label_13ac88:
    // 0x13ac88: 0xe6290400  swc1        $f9, 0x400($s1)
    ctx->pc = 0x13ac88u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1024), bits); }
label_13ac8c:
    // 0x13ac8c: 0x46024200  add.s       $f8, $f8, $f2
    ctx->pc = 0x13ac8cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
label_13ac90:
    // 0x13ac90: 0xe62a0404  swc1        $f10, 0x404($s1)
    ctx->pc = 0x13ac90u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1028), bits); }
label_13ac94:
    // 0x13ac94: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x13ac94u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
label_13ac98:
    // 0x13ac98: 0xe62c0408  swc1        $f12, 0x408($s1)
    ctx->pc = 0x13ac98u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1032), bits); }
label_13ac9c:
    // 0x13ac9c: 0xe62b0410  swc1        $f11, 0x410($s1)
    ctx->pc = 0x13ac9cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1040), bits); }
label_13aca0:
    // 0x13aca0: 0xe6280418  swc1        $f8, 0x418($s1)
    ctx->pc = 0x13aca0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1048), bits); }
label_13aca4:
    // 0x13aca4: 0xe6270420  swc1        $f7, 0x420($s1)
    ctx->pc = 0x13aca4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1056), bits); }
label_13aca8:
    // 0x13aca8: 0xc0b6dac  jal         func_2DB6B0
label_13acac:
    if (ctx->pc == 0x13ACACu) {
        ctx->pc = 0x13ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACA8u;
        // 0x13acac: 0xc455d6d0  lwc1        $f21, -0x2930($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ACB0u;
        goto label_13acb0;
    }
    ctx->pc = 0x13ACA8u;
    SET_GPR_U32(ctx, 31, 0x13ACB0u);
    ctx->pc = 0x13ACACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ACA8u;
    // 0x13acac: 0xc455d6d0  lwc1        $f21, -0x2930($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13ACA8u, 0x13ACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ACB0u;
label_13acb0:
    // 0x13acb0: 0x8c430690  lw          $v1, 0x690($v0)
    ctx->pc = 0x13acb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1680)));
label_13acb4:
    // 0x13acb4: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
label_13acb8:
    if (ctx->pc == 0x13ACB8u) {
        ctx->pc = 0x13ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACB4u;
        // 0x13acb8: 0xc6200454  lwc1        $f0, 0x454($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ACBCu;
        goto label_13acbc;
    }
    ctx->pc = 0x13ACB4u;
    {
        const bool branch_taken_0x13acb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13acb4) {
            ctx->pc = 0x13ACB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13ACB4u;
            // 0x13acb8: 0xc6200454  lwc1        $f0, 0x454($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AD24u;
            goto label_13ad24;
        }
    }
    ctx->pc = 0x13ACBCu;
label_13acbc:
    // 0x13acbc: 0xc0b6dac  jal         func_2DB6B0
label_13acc0:
    if (ctx->pc == 0x13ACC0u) {
        ctx->pc = 0x13ACC4u;
        goto label_13acc4;
    }
    ctx->pc = 0x13ACBCu;
    SET_GPR_U32(ctx, 31, 0x13ACC4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13ACBCu, 0x13ACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ACC4u;
label_13acc4:
    // 0x13acc4: 0xc042d7c  jal         func_10B5F0
label_13acc8:
    if (ctx->pc == 0x13ACC8u) {
        ctx->pc = 0x13ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACC4u;
        // 0x13acc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ACCCu;
        goto label_13accc;
    }
    ctx->pc = 0x13ACC4u;
    SET_GPR_U32(ctx, 31, 0x13ACCCu);
    ctx->pc = 0x13ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ACC4u;
    // 0x13acc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B5F0u, 0x13ACC4u, 0x13ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ACCCu;
label_13accc:
    // 0x13accc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_13acd0:
    if (ctx->pc == 0x13ACD0u) {
        ctx->pc = 0x13ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACCCu;
        // 0x13acd0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ACD4u;
        goto label_13acd4;
    }
    ctx->pc = 0x13ACCCu;
    {
        const bool branch_taken_0x13accc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACCCu;
        // 0x13acd0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13accc) {
            ctx->pc = 0x13AD1Cu;
            goto label_13ad1c;
        }
    }
    ctx->pc = 0x13ACD4u;
label_13acd4:
    // 0x13acd4: 0xc0b6dac  jal         func_2DB6B0
label_13acd8:
    if (ctx->pc == 0x13ACD8u) {
        ctx->pc = 0x13ACDCu;
        goto label_13acdc;
    }
    ctx->pc = 0x13ACD4u;
    SET_GPR_U32(ctx, 31, 0x13ACDCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13ACD4u, 0x13ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ACDCu;
label_13acdc:
    // 0x13acdc: 0xc042d88  jal         func_10B620
label_13ace0:
    if (ctx->pc == 0x13ACE0u) {
        ctx->pc = 0x13ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACDCu;
        // 0x13ace0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ACE4u;
        goto label_13ace4;
    }
    ctx->pc = 0x13ACDCu;
    SET_GPR_U32(ctx, 31, 0x13ACE4u);
    ctx->pc = 0x13ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ACDCu;
    // 0x13ace0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B620u, 0x13ACDCu, 0x13ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ACE4u;
label_13ace4:
    // 0x13ace4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_13ace8:
    if (ctx->pc == 0x13ACE8u) {
        ctx->pc = 0x13ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACE4u;
        // 0x13ace8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ACECu;
        goto label_13acec;
    }
    ctx->pc = 0x13ACE4u;
    {
        const bool branch_taken_0x13ace4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACE4u;
        // 0x13ace8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ace4) {
            ctx->pc = 0x13AD1Cu;
            goto label_13ad1c;
        }
    }
    ctx->pc = 0x13ACECu;
label_13acec:
    // 0x13acec: 0xc0b6dac  jal         func_2DB6B0
label_13acf0:
    if (ctx->pc == 0x13ACF0u) {
        ctx->pc = 0x13ACF4u;
        goto label_13acf4;
    }
    ctx->pc = 0x13ACECu;
    SET_GPR_U32(ctx, 31, 0x13ACF4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13ACECu, 0x13ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ACF4u;
label_13acf4:
    // 0x13acf4: 0xc042d72  jal         func_10B5C8
label_13acf8:
    if (ctx->pc == 0x13ACF8u) {
        ctx->pc = 0x13ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACF4u;
        // 0x13acf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ACFCu;
        goto label_13acfc;
    }
    ctx->pc = 0x13ACF4u;
    SET_GPR_U32(ctx, 31, 0x13ACFCu);
    ctx->pc = 0x13ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ACF4u;
    // 0x13acf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B5C8u, 0x13ACF4u, 0x13ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ACFCu;
label_13acfc:
    // 0x13acfc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_13ad00:
    if (ctx->pc == 0x13AD00u) {
        ctx->pc = 0x13AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACFCu;
        // 0x13ad00: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AD04u;
        goto label_13ad04;
    }
    ctx->pc = 0x13ACFCu;
    {
        const bool branch_taken_0x13acfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACFCu;
        // 0x13ad00: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13acfc) {
            ctx->pc = 0x13AD1Cu;
            goto label_13ad1c;
        }
    }
    ctx->pc = 0x13AD04u;
label_13ad04:
    // 0x13ad04: 0xc0b6dac  jal         func_2DB6B0
label_13ad08:
    if (ctx->pc == 0x13AD08u) {
        ctx->pc = 0x13AD0Cu;
        goto label_13ad0c;
    }
    ctx->pc = 0x13AD04u;
    SET_GPR_U32(ctx, 31, 0x13AD0Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13AD04u, 0x13AD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AD0Cu;
label_13ad0c:
    // 0x13ad0c: 0xc042d6e  jal         func_10B5B8
label_13ad10:
    if (ctx->pc == 0x13AD10u) {
        ctx->pc = 0x13AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD0Cu;
        // 0x13ad10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AD14u;
        goto label_13ad14;
    }
    ctx->pc = 0x13AD0Cu;
    SET_GPR_U32(ctx, 31, 0x13AD14u);
    ctx->pc = 0x13AD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AD0Cu;
    // 0x13ad10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B5B8u, 0x13AD0Cu, 0x13AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AD14u;
label_13ad14:
    // 0x13ad14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_13ad18:
    if (ctx->pc == 0x13AD18u) {
        ctx->pc = 0x13AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD14u;
        // 0x13ad18: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AD1Cu;
        goto label_13ad1c;
    }
    ctx->pc = 0x13AD14u;
    {
        const bool branch_taken_0x13ad14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD14u;
        // 0x13ad18: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad14) {
            ctx->pc = 0x13AD20u;
            goto label_13ad20;
        }
    }
    ctx->pc = 0x13AD1Cu;
label_13ad1c:
    // 0x13ad1c: 0xc455d6d4  lwc1        $f21, -0x292C($v0)
    ctx->pc = 0x13ad1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_13ad20:
    // 0x13ad20: 0xc6200454  lwc1        $f0, 0x454($s1)
    ctx->pc = 0x13ad20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13ad24:
    // 0x13ad24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13ad24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13ad28:
    // 0x13ad28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13ad28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_13ad2c:
    // 0x13ad2c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x13ad2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_13ad30:
    // 0x13ad30: 0xc6210414  lwc1        $f1, 0x414($s1)
    ctx->pc = 0x13ad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13ad34:
    // 0x13ad34: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x13ad34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
label_13ad38:
    // 0x13ad38: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x13ad38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_13ad3c:
    // 0x13ad3c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13ad3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_13ad40:
    // 0x13ad40: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13ad40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13ad44:
    // 0x13ad44: 0xe6210414  swc1        $f1, 0x414($s1)
    ctx->pc = 0x13ad44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1044), bits); }
label_13ad48:
    // 0x13ad48: 0x7bb00280  lq          $s0, 0x280($sp)
    ctx->pc = 0x13ad48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_13ad4c:
    // 0x13ad4c: 0x7bb10270  lq          $s1, 0x270($sp)
    ctx->pc = 0x13ad4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_13ad50:
    // 0x13ad50: 0x7bb20260  lq          $s2, 0x260($sp)
    ctx->pc = 0x13ad50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_13ad54:
    // 0x13ad54: 0x7bb30250  lq          $s3, 0x250($sp)
    ctx->pc = 0x13ad54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_13ad58:
    // 0x13ad58: 0x7bb40240  lq          $s4, 0x240($sp)
    ctx->pc = 0x13ad58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_13ad5c:
    // 0x13ad5c: 0x7bb50230  lq          $s5, 0x230($sp)
    ctx->pc = 0x13ad5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_13ad60:
    // 0x13ad60: 0x7bb60220  lq          $s6, 0x220($sp)
    ctx->pc = 0x13ad60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_13ad64:
    // 0x13ad64: 0x7bb70210  lq          $s7, 0x210($sp)
    ctx->pc = 0x13ad64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_13ad68:
    // 0x13ad68: 0x7bbe0200  lq          $fp, 0x200($sp)
    ctx->pc = 0x13ad68u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_13ad6c:
    // 0x13ad6c: 0xdfbf01f0  ld          $ra, 0x1F0($sp)
    ctx->pc = 0x13ad6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
label_13ad70:
    // 0x13ad70: 0xc7b602a0  lwc1        $f22, 0x2A0($sp)
    ctx->pc = 0x13ad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_13ad74:
    // 0x13ad74: 0xc7b50298  lwc1        $f21, 0x298($sp)
    ctx->pc = 0x13ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_13ad78:
    // 0x13ad78: 0xc7b40290  lwc1        $f20, 0x290($sp)
    ctx->pc = 0x13ad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13ad7c:
    // 0x13ad7c: 0x3e00008  jr          $ra
label_13ad80:
    if (ctx->pc == 0x13AD80u) {
        ctx->pc = 0x13AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD7Cu;
        // 0x13ad80: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AD84u;
        goto label_13ad84;
    }
    ctx->pc = 0x13AD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD7Cu;
        // 0x13ad80: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AD84u;
label_13ad84:
    // 0x13ad84: 0x0  nop
    ctx->pc = 0x13ad84u;
    // NOP
label_13ad88:
    // 0x13ad88: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13ad88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13ad8c:
    // 0x13ad8c: 0x0  nop
    ctx->pc = 0x13ad8cu;
    // NOP
    ctx->pc = 0x13ad90u;
}
