#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: func_0079A030
// Address: 0x79a030 - 0x79a888
void func_0079A030_0x79a030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A030_0x79a030");
#endif

    switch (ctx->pc) {
        case 0x79a030u: goto label_79a030;
        case 0x79a034u: goto label_79a034;
        case 0x79a038u: goto label_79a038;
        case 0x79a03cu: goto label_79a03c;
        case 0x79a040u: goto label_79a040;
        case 0x79a044u: goto label_79a044;
        case 0x79a048u: goto label_79a048;
        case 0x79a04cu: goto label_79a04c;
        case 0x79a050u: goto label_79a050;
        case 0x79a054u: goto label_79a054;
        case 0x79a058u: goto label_79a058;
        case 0x79a05cu: goto label_79a05c;
        case 0x79a060u: goto label_79a060;
        case 0x79a064u: goto label_79a064;
        case 0x79a068u: goto label_79a068;
        case 0x79a06cu: goto label_79a06c;
        case 0x79a070u: goto label_79a070;
        case 0x79a074u: goto label_79a074;
        case 0x79a078u: goto label_79a078;
        case 0x79a07cu: goto label_79a07c;
        case 0x79a080u: goto label_79a080;
        case 0x79a084u: goto label_79a084;
        case 0x79a088u: goto label_79a088;
        case 0x79a08cu: goto label_79a08c;
        case 0x79a090u: goto label_79a090;
        case 0x79a094u: goto label_79a094;
        case 0x79a098u: goto label_79a098;
        case 0x79a09cu: goto label_79a09c;
        case 0x79a0a0u: goto label_79a0a0;
        case 0x79a0a4u: goto label_79a0a4;
        case 0x79a0a8u: goto label_79a0a8;
        case 0x79a0acu: goto label_79a0ac;
        case 0x79a0b0u: goto label_79a0b0;
        case 0x79a0b4u: goto label_79a0b4;
        case 0x79a0b8u: goto label_79a0b8;
        case 0x79a0bcu: goto label_79a0bc;
        case 0x79a0c0u: goto label_79a0c0;
        case 0x79a0c4u: goto label_79a0c4;
        case 0x79a0c8u: goto label_79a0c8;
        case 0x79a0ccu: goto label_79a0cc;
        case 0x79a0d0u: goto label_79a0d0;
        case 0x79a0d4u: goto label_79a0d4;
        case 0x79a0d8u: goto label_79a0d8;
        case 0x79a0dcu: goto label_79a0dc;
        case 0x79a0e0u: goto label_79a0e0;
        case 0x79a0e4u: goto label_79a0e4;
        case 0x79a0e8u: goto label_79a0e8;
        case 0x79a0ecu: goto label_79a0ec;
        case 0x79a0f0u: goto label_79a0f0;
        case 0x79a0f4u: goto label_79a0f4;
        case 0x79a0f8u: goto label_79a0f8;
        case 0x79a0fcu: goto label_79a0fc;
        case 0x79a100u: goto label_79a100;
        case 0x79a104u: goto label_79a104;
        case 0x79a108u: goto label_79a108;
        case 0x79a10cu: goto label_79a10c;
        case 0x79a110u: goto label_79a110;
        case 0x79a114u: goto label_79a114;
        case 0x79a118u: goto label_79a118;
        case 0x79a11cu: goto label_79a11c;
        case 0x79a120u: goto label_79a120;
        case 0x79a124u: goto label_79a124;
        case 0x79a128u: goto label_79a128;
        case 0x79a12cu: goto label_79a12c;
        case 0x79a130u: goto label_79a130;
        case 0x79a134u: goto label_79a134;
        case 0x79a138u: goto label_79a138;
        case 0x79a13cu: goto label_79a13c;
        case 0x79a140u: goto label_79a140;
        case 0x79a144u: goto label_79a144;
        case 0x79a148u: goto label_79a148;
        case 0x79a14cu: goto label_79a14c;
        case 0x79a150u: goto label_79a150;
        case 0x79a154u: goto label_79a154;
        case 0x79a158u: goto label_79a158;
        case 0x79a15cu: goto label_79a15c;
        case 0x79a160u: goto label_79a160;
        case 0x79a164u: goto label_79a164;
        case 0x79a168u: goto label_79a168;
        case 0x79a16cu: goto label_79a16c;
        case 0x79a170u: goto label_79a170;
        case 0x79a174u: goto label_79a174;
        case 0x79a178u: goto label_79a178;
        case 0x79a17cu: goto label_79a17c;
        case 0x79a180u: goto label_79a180;
        case 0x79a184u: goto label_79a184;
        case 0x79a188u: goto label_79a188;
        case 0x79a18cu: goto label_79a18c;
        case 0x79a190u: goto label_79a190;
        case 0x79a194u: goto label_79a194;
        case 0x79a198u: goto label_79a198;
        case 0x79a19cu: goto label_79a19c;
        case 0x79a1a0u: goto label_79a1a0;
        case 0x79a1a4u: goto label_79a1a4;
        case 0x79a1a8u: goto label_79a1a8;
        case 0x79a1acu: goto label_79a1ac;
        case 0x79a1b0u: goto label_79a1b0;
        case 0x79a1b4u: goto label_79a1b4;
        case 0x79a1b8u: goto label_79a1b8;
        case 0x79a1bcu: goto label_79a1bc;
        case 0x79a1c0u: goto label_79a1c0;
        case 0x79a1c4u: goto label_79a1c4;
        case 0x79a1c8u: goto label_79a1c8;
        case 0x79a1ccu: goto label_79a1cc;
        case 0x79a1d0u: goto label_79a1d0;
        case 0x79a1d4u: goto label_79a1d4;
        case 0x79a1d8u: goto label_79a1d8;
        case 0x79a1dcu: goto label_79a1dc;
        case 0x79a1e0u: goto label_79a1e0;
        case 0x79a1e4u: goto label_79a1e4;
        case 0x79a1e8u: goto label_79a1e8;
        case 0x79a1ecu: goto label_79a1ec;
        case 0x79a1f0u: goto label_79a1f0;
        case 0x79a1f4u: goto label_79a1f4;
        case 0x79a1f8u: goto label_79a1f8;
        case 0x79a1fcu: goto label_79a1fc;
        case 0x79a200u: goto label_79a200;
        case 0x79a204u: goto label_79a204;
        case 0x79a208u: goto label_79a208;
        case 0x79a20cu: goto label_79a20c;
        case 0x79a210u: goto label_79a210;
        case 0x79a214u: goto label_79a214;
        case 0x79a218u: goto label_79a218;
        case 0x79a21cu: goto label_79a21c;
        case 0x79a220u: goto label_79a220;
        case 0x79a224u: goto label_79a224;
        case 0x79a228u: goto label_79a228;
        case 0x79a22cu: goto label_79a22c;
        case 0x79a230u: goto label_79a230;
        case 0x79a234u: goto label_79a234;
        case 0x79a238u: goto label_79a238;
        case 0x79a23cu: goto label_79a23c;
        case 0x79a240u: goto label_79a240;
        case 0x79a244u: goto label_79a244;
        case 0x79a248u: goto label_79a248;
        case 0x79a24cu: goto label_79a24c;
        case 0x79a250u: goto label_79a250;
        case 0x79a254u: goto label_79a254;
        case 0x79a258u: goto label_79a258;
        case 0x79a25cu: goto label_79a25c;
        case 0x79a260u: goto label_79a260;
        case 0x79a264u: goto label_79a264;
        case 0x79a268u: goto label_79a268;
        case 0x79a26cu: goto label_79a26c;
        case 0x79a270u: goto label_79a270;
        case 0x79a274u: goto label_79a274;
        case 0x79a278u: goto label_79a278;
        case 0x79a27cu: goto label_79a27c;
        case 0x79a280u: goto label_79a280;
        case 0x79a284u: goto label_79a284;
        case 0x79a288u: goto label_79a288;
        case 0x79a28cu: goto label_79a28c;
        case 0x79a290u: goto label_79a290;
        case 0x79a294u: goto label_79a294;
        case 0x79a298u: goto label_79a298;
        case 0x79a29cu: goto label_79a29c;
        case 0x79a2a0u: goto label_79a2a0;
        case 0x79a2a4u: goto label_79a2a4;
        case 0x79a2a8u: goto label_79a2a8;
        case 0x79a2acu: goto label_79a2ac;
        case 0x79a2b0u: goto label_79a2b0;
        case 0x79a2b4u: goto label_79a2b4;
        case 0x79a2b8u: goto label_79a2b8;
        case 0x79a2bcu: goto label_79a2bc;
        case 0x79a2c0u: goto label_79a2c0;
        case 0x79a2c4u: goto label_79a2c4;
        case 0x79a2c8u: goto label_79a2c8;
        case 0x79a2ccu: goto label_79a2cc;
        case 0x79a2d0u: goto label_79a2d0;
        case 0x79a2d4u: goto label_79a2d4;
        case 0x79a2d8u: goto label_79a2d8;
        case 0x79a2dcu: goto label_79a2dc;
        case 0x79a2e0u: goto label_79a2e0;
        case 0x79a2e4u: goto label_79a2e4;
        case 0x79a2e8u: goto label_79a2e8;
        case 0x79a2ecu: goto label_79a2ec;
        case 0x79a2f0u: goto label_79a2f0;
        case 0x79a2f4u: goto label_79a2f4;
        case 0x79a2f8u: goto label_79a2f8;
        case 0x79a2fcu: goto label_79a2fc;
        case 0x79a300u: goto label_79a300;
        case 0x79a304u: goto label_79a304;
        case 0x79a308u: goto label_79a308;
        case 0x79a30cu: goto label_79a30c;
        case 0x79a310u: goto label_79a310;
        case 0x79a314u: goto label_79a314;
        case 0x79a318u: goto label_79a318;
        case 0x79a31cu: goto label_79a31c;
        case 0x79a320u: goto label_79a320;
        case 0x79a324u: goto label_79a324;
        case 0x79a328u: goto label_79a328;
        case 0x79a32cu: goto label_79a32c;
        case 0x79a330u: goto label_79a330;
        case 0x79a334u: goto label_79a334;
        case 0x79a338u: goto label_79a338;
        case 0x79a33cu: goto label_79a33c;
        case 0x79a340u: goto label_79a340;
        case 0x79a344u: goto label_79a344;
        case 0x79a348u: goto label_79a348;
        case 0x79a34cu: goto label_79a34c;
        case 0x79a350u: goto label_79a350;
        case 0x79a354u: goto label_79a354;
        case 0x79a358u: goto label_79a358;
        case 0x79a35cu: goto label_79a35c;
        case 0x79a360u: goto label_79a360;
        case 0x79a364u: goto label_79a364;
        case 0x79a368u: goto label_79a368;
        case 0x79a36cu: goto label_79a36c;
        case 0x79a370u: goto label_79a370;
        case 0x79a374u: goto label_79a374;
        case 0x79a378u: goto label_79a378;
        case 0x79a37cu: goto label_79a37c;
        case 0x79a380u: goto label_79a380;
        case 0x79a384u: goto label_79a384;
        case 0x79a388u: goto label_79a388;
        case 0x79a38cu: goto label_79a38c;
        case 0x79a390u: goto label_79a390;
        case 0x79a394u: goto label_79a394;
        case 0x79a398u: goto label_79a398;
        case 0x79a39cu: goto label_79a39c;
        case 0x79a3a0u: goto label_79a3a0;
        case 0x79a3a4u: goto label_79a3a4;
        case 0x79a3a8u: goto label_79a3a8;
        case 0x79a3acu: goto label_79a3ac;
        case 0x79a3b0u: goto label_79a3b0;
        case 0x79a3b4u: goto label_79a3b4;
        case 0x79a3b8u: goto label_79a3b8;
        case 0x79a3bcu: goto label_79a3bc;
        case 0x79a3c0u: goto label_79a3c0;
        case 0x79a3c4u: goto label_79a3c4;
        case 0x79a3c8u: goto label_79a3c8;
        case 0x79a3ccu: goto label_79a3cc;
        case 0x79a3d0u: goto label_79a3d0;
        case 0x79a3d4u: goto label_79a3d4;
        case 0x79a3d8u: goto label_79a3d8;
        case 0x79a3dcu: goto label_79a3dc;
        case 0x79a3e0u: goto label_79a3e0;
        case 0x79a3e4u: goto label_79a3e4;
        case 0x79a3e8u: goto label_79a3e8;
        case 0x79a3ecu: goto label_79a3ec;
        case 0x79a3f0u: goto label_79a3f0;
        case 0x79a3f4u: goto label_79a3f4;
        case 0x79a3f8u: goto label_79a3f8;
        case 0x79a3fcu: goto label_79a3fc;
        case 0x79a400u: goto label_79a400;
        case 0x79a404u: goto label_79a404;
        case 0x79a408u: goto label_79a408;
        case 0x79a40cu: goto label_79a40c;
        case 0x79a410u: goto label_79a410;
        case 0x79a414u: goto label_79a414;
        case 0x79a418u: goto label_79a418;
        case 0x79a41cu: goto label_79a41c;
        case 0x79a420u: goto label_79a420;
        case 0x79a424u: goto label_79a424;
        case 0x79a428u: goto label_79a428;
        case 0x79a42cu: goto label_79a42c;
        case 0x79a430u: goto label_79a430;
        case 0x79a434u: goto label_79a434;
        case 0x79a438u: goto label_79a438;
        case 0x79a43cu: goto label_79a43c;
        case 0x79a440u: goto label_79a440;
        case 0x79a444u: goto label_79a444;
        case 0x79a448u: goto label_79a448;
        case 0x79a44cu: goto label_79a44c;
        case 0x79a450u: goto label_79a450;
        case 0x79a454u: goto label_79a454;
        case 0x79a458u: goto label_79a458;
        case 0x79a45cu: goto label_79a45c;
        case 0x79a460u: goto label_79a460;
        case 0x79a464u: goto label_79a464;
        case 0x79a468u: goto label_79a468;
        case 0x79a46cu: goto label_79a46c;
        case 0x79a470u: goto label_79a470;
        case 0x79a474u: goto label_79a474;
        case 0x79a478u: goto label_79a478;
        case 0x79a47cu: goto label_79a47c;
        case 0x79a480u: goto label_79a480;
        case 0x79a484u: goto label_79a484;
        case 0x79a488u: goto label_79a488;
        case 0x79a48cu: goto label_79a48c;
        case 0x79a490u: goto label_79a490;
        case 0x79a494u: goto label_79a494;
        case 0x79a498u: goto label_79a498;
        case 0x79a49cu: goto label_79a49c;
        case 0x79a4a0u: goto label_79a4a0;
        case 0x79a4a4u: goto label_79a4a4;
        case 0x79a4a8u: goto label_79a4a8;
        case 0x79a4acu: goto label_79a4ac;
        case 0x79a4b0u: goto label_79a4b0;
        case 0x79a4b4u: goto label_79a4b4;
        case 0x79a4b8u: goto label_79a4b8;
        case 0x79a4bcu: goto label_79a4bc;
        case 0x79a4c0u: goto label_79a4c0;
        case 0x79a4c4u: goto label_79a4c4;
        case 0x79a4c8u: goto label_79a4c8;
        case 0x79a4ccu: goto label_79a4cc;
        case 0x79a4d0u: goto label_79a4d0;
        case 0x79a4d4u: goto label_79a4d4;
        case 0x79a4d8u: goto label_79a4d8;
        case 0x79a4dcu: goto label_79a4dc;
        case 0x79a4e0u: goto label_79a4e0;
        case 0x79a4e4u: goto label_79a4e4;
        case 0x79a4e8u: goto label_79a4e8;
        case 0x79a4ecu: goto label_79a4ec;
        case 0x79a4f0u: goto label_79a4f0;
        case 0x79a4f4u: goto label_79a4f4;
        case 0x79a4f8u: goto label_79a4f8;
        case 0x79a4fcu: goto label_79a4fc;
        case 0x79a500u: goto label_79a500;
        case 0x79a504u: goto label_79a504;
        case 0x79a508u: goto label_79a508;
        case 0x79a50cu: goto label_79a50c;
        case 0x79a510u: goto label_79a510;
        case 0x79a514u: goto label_79a514;
        case 0x79a518u: goto label_79a518;
        case 0x79a51cu: goto label_79a51c;
        case 0x79a520u: goto label_79a520;
        case 0x79a524u: goto label_79a524;
        case 0x79a528u: goto label_79a528;
        case 0x79a52cu: goto label_79a52c;
        case 0x79a530u: goto label_79a530;
        case 0x79a534u: goto label_79a534;
        case 0x79a538u: goto label_79a538;
        case 0x79a53cu: goto label_79a53c;
        case 0x79a540u: goto label_79a540;
        case 0x79a544u: goto label_79a544;
        case 0x79a548u: goto label_79a548;
        case 0x79a54cu: goto label_79a54c;
        case 0x79a550u: goto label_79a550;
        case 0x79a554u: goto label_79a554;
        case 0x79a558u: goto label_79a558;
        case 0x79a55cu: goto label_79a55c;
        case 0x79a560u: goto label_79a560;
        case 0x79a564u: goto label_79a564;
        case 0x79a568u: goto label_79a568;
        case 0x79a56cu: goto label_79a56c;
        case 0x79a570u: goto label_79a570;
        case 0x79a574u: goto label_79a574;
        case 0x79a578u: goto label_79a578;
        case 0x79a57cu: goto label_79a57c;
        case 0x79a580u: goto label_79a580;
        case 0x79a584u: goto label_79a584;
        case 0x79a588u: goto label_79a588;
        case 0x79a58cu: goto label_79a58c;
        case 0x79a590u: goto label_79a590;
        case 0x79a594u: goto label_79a594;
        case 0x79a598u: goto label_79a598;
        case 0x79a59cu: goto label_79a59c;
        case 0x79a5a0u: goto label_79a5a0;
        case 0x79a5a4u: goto label_79a5a4;
        case 0x79a5a8u: goto label_79a5a8;
        case 0x79a5acu: goto label_79a5ac;
        case 0x79a5b0u: goto label_79a5b0;
        case 0x79a5b4u: goto label_79a5b4;
        case 0x79a5b8u: goto label_79a5b8;
        case 0x79a5bcu: goto label_79a5bc;
        case 0x79a5c0u: goto label_79a5c0;
        case 0x79a5c4u: goto label_79a5c4;
        case 0x79a5c8u: goto label_79a5c8;
        case 0x79a5ccu: goto label_79a5cc;
        case 0x79a5d0u: goto label_79a5d0;
        case 0x79a5d4u: goto label_79a5d4;
        case 0x79a5d8u: goto label_79a5d8;
        case 0x79a5dcu: goto label_79a5dc;
        case 0x79a5e0u: goto label_79a5e0;
        case 0x79a5e4u: goto label_79a5e4;
        case 0x79a5e8u: goto label_79a5e8;
        case 0x79a5ecu: goto label_79a5ec;
        case 0x79a5f0u: goto label_79a5f0;
        case 0x79a5f4u: goto label_79a5f4;
        case 0x79a5f8u: goto label_79a5f8;
        case 0x79a5fcu: goto label_79a5fc;
        case 0x79a600u: goto label_79a600;
        case 0x79a604u: goto label_79a604;
        case 0x79a608u: goto label_79a608;
        case 0x79a60cu: goto label_79a60c;
        case 0x79a610u: goto label_79a610;
        case 0x79a614u: goto label_79a614;
        case 0x79a618u: goto label_79a618;
        case 0x79a61cu: goto label_79a61c;
        case 0x79a620u: goto label_79a620;
        case 0x79a624u: goto label_79a624;
        case 0x79a628u: goto label_79a628;
        case 0x79a62cu: goto label_79a62c;
        case 0x79a630u: goto label_79a630;
        case 0x79a634u: goto label_79a634;
        case 0x79a638u: goto label_79a638;
        case 0x79a63cu: goto label_79a63c;
        case 0x79a640u: goto label_79a640;
        case 0x79a644u: goto label_79a644;
        case 0x79a648u: goto label_79a648;
        case 0x79a64cu: goto label_79a64c;
        case 0x79a650u: goto label_79a650;
        case 0x79a654u: goto label_79a654;
        case 0x79a658u: goto label_79a658;
        case 0x79a65cu: goto label_79a65c;
        case 0x79a660u: goto label_79a660;
        case 0x79a664u: goto label_79a664;
        case 0x79a668u: goto label_79a668;
        case 0x79a66cu: goto label_79a66c;
        case 0x79a670u: goto label_79a670;
        case 0x79a674u: goto label_79a674;
        case 0x79a678u: goto label_79a678;
        case 0x79a67cu: goto label_79a67c;
        case 0x79a680u: goto label_79a680;
        case 0x79a684u: goto label_79a684;
        case 0x79a688u: goto label_79a688;
        case 0x79a68cu: goto label_79a68c;
        case 0x79a690u: goto label_79a690;
        case 0x79a694u: goto label_79a694;
        case 0x79a698u: goto label_79a698;
        case 0x79a69cu: goto label_79a69c;
        case 0x79a6a0u: goto label_79a6a0;
        case 0x79a6a4u: goto label_79a6a4;
        case 0x79a6a8u: goto label_79a6a8;
        case 0x79a6acu: goto label_79a6ac;
        case 0x79a6b0u: goto label_79a6b0;
        case 0x79a6b4u: goto label_79a6b4;
        case 0x79a6b8u: goto label_79a6b8;
        case 0x79a6bcu: goto label_79a6bc;
        case 0x79a6c0u: goto label_79a6c0;
        case 0x79a6c4u: goto label_79a6c4;
        case 0x79a6c8u: goto label_79a6c8;
        case 0x79a6ccu: goto label_79a6cc;
        case 0x79a6d0u: goto label_79a6d0;
        case 0x79a6d4u: goto label_79a6d4;
        case 0x79a6d8u: goto label_79a6d8;
        case 0x79a6dcu: goto label_79a6dc;
        case 0x79a6e0u: goto label_79a6e0;
        case 0x79a6e4u: goto label_79a6e4;
        case 0x79a6e8u: goto label_79a6e8;
        case 0x79a6ecu: goto label_79a6ec;
        case 0x79a6f0u: goto label_79a6f0;
        case 0x79a6f4u: goto label_79a6f4;
        case 0x79a6f8u: goto label_79a6f8;
        case 0x79a6fcu: goto label_79a6fc;
        case 0x79a700u: goto label_79a700;
        case 0x79a704u: goto label_79a704;
        case 0x79a708u: goto label_79a708;
        case 0x79a70cu: goto label_79a70c;
        case 0x79a710u: goto label_79a710;
        case 0x79a714u: goto label_79a714;
        case 0x79a718u: goto label_79a718;
        case 0x79a71cu: goto label_79a71c;
        case 0x79a720u: goto label_79a720;
        case 0x79a724u: goto label_79a724;
        case 0x79a728u: goto label_79a728;
        case 0x79a72cu: goto label_79a72c;
        case 0x79a730u: goto label_79a730;
        case 0x79a734u: goto label_79a734;
        case 0x79a738u: goto label_79a738;
        case 0x79a73cu: goto label_79a73c;
        case 0x79a740u: goto label_79a740;
        case 0x79a744u: goto label_79a744;
        case 0x79a748u: goto label_79a748;
        case 0x79a74cu: goto label_79a74c;
        case 0x79a750u: goto label_79a750;
        case 0x79a754u: goto label_79a754;
        case 0x79a758u: goto label_79a758;
        case 0x79a75cu: goto label_79a75c;
        case 0x79a760u: goto label_79a760;
        case 0x79a764u: goto label_79a764;
        case 0x79a768u: goto label_79a768;
        case 0x79a76cu: goto label_79a76c;
        case 0x79a770u: goto label_79a770;
        case 0x79a774u: goto label_79a774;
        case 0x79a778u: goto label_79a778;
        case 0x79a77cu: goto label_79a77c;
        case 0x79a780u: goto label_79a780;
        case 0x79a784u: goto label_79a784;
        case 0x79a788u: goto label_79a788;
        case 0x79a78cu: goto label_79a78c;
        case 0x79a790u: goto label_79a790;
        case 0x79a794u: goto label_79a794;
        case 0x79a798u: goto label_79a798;
        case 0x79a79cu: goto label_79a79c;
        case 0x79a7a0u: goto label_79a7a0;
        case 0x79a7a4u: goto label_79a7a4;
        case 0x79a7a8u: goto label_79a7a8;
        case 0x79a7acu: goto label_79a7ac;
        case 0x79a7b0u: goto label_79a7b0;
        case 0x79a7b4u: goto label_79a7b4;
        case 0x79a7b8u: goto label_79a7b8;
        case 0x79a7bcu: goto label_79a7bc;
        case 0x79a7c0u: goto label_79a7c0;
        case 0x79a7c4u: goto label_79a7c4;
        case 0x79a7c8u: goto label_79a7c8;
        case 0x79a7ccu: goto label_79a7cc;
        case 0x79a7d0u: goto label_79a7d0;
        case 0x79a7d4u: goto label_79a7d4;
        case 0x79a7d8u: goto label_79a7d8;
        case 0x79a7dcu: goto label_79a7dc;
        case 0x79a7e0u: goto label_79a7e0;
        case 0x79a7e4u: goto label_79a7e4;
        case 0x79a7e8u: goto label_79a7e8;
        case 0x79a7ecu: goto label_79a7ec;
        case 0x79a7f0u: goto label_79a7f0;
        case 0x79a7f4u: goto label_79a7f4;
        case 0x79a7f8u: goto label_79a7f8;
        case 0x79a7fcu: goto label_79a7fc;
        case 0x79a800u: goto label_79a800;
        case 0x79a804u: goto label_79a804;
        case 0x79a808u: goto label_79a808;
        case 0x79a80cu: goto label_79a80c;
        case 0x79a810u: goto label_79a810;
        case 0x79a814u: goto label_79a814;
        case 0x79a818u: goto label_79a818;
        case 0x79a81cu: goto label_79a81c;
        case 0x79a820u: goto label_79a820;
        case 0x79a824u: goto label_79a824;
        case 0x79a828u: goto label_79a828;
        case 0x79a82cu: goto label_79a82c;
        case 0x79a830u: goto label_79a830;
        case 0x79a834u: goto label_79a834;
        case 0x79a838u: goto label_79a838;
        case 0x79a83cu: goto label_79a83c;
        case 0x79a840u: goto label_79a840;
        case 0x79a844u: goto label_79a844;
        case 0x79a848u: goto label_79a848;
        case 0x79a84cu: goto label_79a84c;
        case 0x79a850u: goto label_79a850;
        case 0x79a854u: goto label_79a854;
        case 0x79a858u: goto label_79a858;
        case 0x79a85cu: goto label_79a85c;
        case 0x79a860u: goto label_79a860;
        case 0x79a864u: goto label_79a864;
        case 0x79a868u: goto label_79a868;
        case 0x79a86cu: goto label_79a86c;
        case 0x79a870u: goto label_79a870;
        case 0x79a874u: goto label_79a874;
        case 0x79a878u: goto label_79a878;
        case 0x79a87cu: goto label_79a87c;
        case 0x79a880u: goto label_79a880;
        case 0x79a884u: goto label_79a884;
        default: break;
    }

    ctx->pc = 0x79a030u;

label_79a030:
    // 0x79a030: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x79a030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_79a034:
    // 0x79a034: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79a038:
    // 0x79a038: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x79a038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_79a03c:
    // 0x79a03c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a040:
    // 0x79a040: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x79a040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_79a044:
    // 0x79a044: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79a044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
label_79a048:
    // 0x79a048: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x79a048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_79a04c:
    // 0x79a04c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79a04cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_79a050:
    // 0x79a050: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x79a050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_79a054:
    // 0x79a054: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x79a054u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
label_79a058:
    // 0x79a058: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x79a058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_79a05c:
    // 0x79a05c: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x79a05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_79a060:
    // 0x79a060: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x79a060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
label_79a064:
    // 0x79a064: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x79a064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
label_79a068:
    // 0x79a068: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x79a068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
label_79a06c:
    // 0x79a06c: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x79a06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_79a070:
    // 0x79a070: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x79a070u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_79a074:
    // 0x79a074: 0xc0b0a7e  jal         func_2C29F8
label_79a078:
    if (ctx->pc == 0x79A078u) {
        ctx->pc = 0x79A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A074u;
        // 0x79a078: 0xe7b40170  swc1        $f20, 0x170($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A07Cu;
        goto label_79a07c;
    }
    ctx->pc = 0x79A074u;
    SET_GPR_U32(ctx, 31, 0x79A07Cu);
    ctx->pc = 0x79A078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A074u;
    // 0x79a078: 0xe7b40170  swc1        $f20, 0x170($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79A074u, 0x79A07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A07Cu;
label_79a07c:
    // 0x79a07c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_79a080:
    // 0x79a080: 0xc0b0fa2  jal         func_2C3E88
label_79a084:
    if (ctx->pc == 0x79A084u) {
        ctx->pc = 0x79A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A080u;
        // 0x79a084: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A088u;
        goto label_79a088;
    }
    ctx->pc = 0x79A080u;
    SET_GPR_U32(ctx, 31, 0x79A088u);
    ctx->pc = 0x79A084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A080u;
    // 0x79a084: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x79A080u, 0x79A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A088u;
label_79a088:
    // 0x79a088: 0x8e22bb80  lw          $v0, -0x4480($s1)
    ctx->pc = 0x79a088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949760)));
label_79a08c:
    // 0x79a08c: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x79a08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_79a090:
    // 0x79a090: 0xc0b2ee8  jal         func_2CBBA0
label_79a094:
    if (ctx->pc == 0x79A094u) {
        ctx->pc = 0x79A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A090u;
        // 0x79a094: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A098u;
        goto label_79a098;
    }
    ctx->pc = 0x79A090u;
    SET_GPR_U32(ctx, 31, 0x79A098u);
    ctx->pc = 0x79A094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A090u;
    // 0x79a094: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x79A090u, 0x79A098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A098u;
label_79a098:
    // 0x79a098: 0x8e22bb80  lw          $v0, -0x4480($s1)
    ctx->pc = 0x79a098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949760)));
label_79a09c:
    // 0x79a09c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x79a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_79a0a0:
    // 0x79a0a0: 0x8e23bb80  lw          $v1, -0x4480($s1)
    ctx->pc = 0x79a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949760)));
label_79a0a4:
    // 0x79a0a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a0a8:
    // 0x79a0a8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_79a0ac:
    if (ctx->pc == 0x79A0ACu) {
        ctx->pc = 0x79A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0A8u;
        // 0x79a0ac: 0x2403ffbf  addiu       $v1, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0B0u;
        goto label_79a0b0;
    }
    ctx->pc = 0x79A0A8u;
    {
        const bool branch_taken_0x79a0a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0A8u;
        // 0x79a0ac: 0x2403ffbf  addiu       $v1, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0a8) {
            ctx->pc = 0x79A0BCu;
            goto label_79a0bc;
        }
    }
    ctx->pc = 0x79A0B0u;
label_79a0b0:
    // 0x79a0b0: 0x8c8205b8  lw          $v0, 0x5B8($a0)
    ctx->pc = 0x79a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
label_79a0b4:
    // 0x79a0b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79a0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_79a0b8:
    // 0x79a0b8: 0xac8205b8  sw          $v0, 0x5B8($a0)
    ctx->pc = 0x79a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 2));
label_79a0bc:
    // 0x79a0bc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_79a0c0:
    // 0x79a0c0: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x79a0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_79a0c4:
    // 0x79a0c4: 0xc0a58dc  jal         func_296370
label_79a0c8:
    if (ctx->pc == 0x79A0C8u) {
        ctx->pc = 0x79A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0C4u;
        // 0x79a0c8: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0CCu;
        goto label_79a0cc;
    }
    ctx->pc = 0x79A0C4u;
    SET_GPR_U32(ctx, 31, 0x79A0CCu);
    ctx->pc = 0x79A0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0C4u;
    // 0x79a0c8: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x79A0C4u, 0x79A0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0CCu;
label_79a0cc:
    // 0x79a0cc: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79a0d0:
    // 0x79a0d0: 0x8c62bb80  lw          $v0, -0x4480($v1)
    ctx->pc = 0x79a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949760)));
label_79a0d4:
    // 0x79a0d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a0d8:
    // 0x79a0d8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_79a0dc:
    if (ctx->pc == 0x79A0DCu) {
        ctx->pc = 0x79A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0D8u;
        // 0x79a0dc: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0E0u;
        goto label_79a0e0;
    }
    ctx->pc = 0x79A0D8u;
    {
        const bool branch_taken_0x79a0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0D8u;
        // 0x79a0dc: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0d8) {
            ctx->pc = 0x79A0ECu;
            goto label_79a0ec;
        }
    }
    ctx->pc = 0x79A0E0u;
label_79a0e0:
    // 0x79a0e0: 0x8c6205b8  lw          $v0, 0x5B8($v1)
    ctx->pc = 0x79a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1464)));
label_79a0e4:
    // 0x79a0e4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x79a0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_79a0e8:
    // 0x79a0e8: 0xac6205b8  sw          $v0, 0x5B8($v1)
    ctx->pc = 0x79a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1464), GPR_U32(ctx, 2));
label_79a0ec:
    // 0x79a0ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x79a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79a0f0:
    // 0x79a0f0: 0x8c822f84  lw          $v0, 0x2F84($a0)
    ctx->pc = 0x79a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12164)));
label_79a0f4:
    // 0x79a0f4: 0x3c1e0800  lui         $fp, 0x800
    ctx->pc = 0x79a0f4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)2048 << 16));
label_79a0f8:
    // 0x79a0f8: 0xc0b56a8  jal         func_2D5AA0
label_79a0fc:
    if (ctx->pc == 0x79A0FCu) {
        ctx->pc = 0x79A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0F8u;
        // 0x79a0fc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A100u;
        goto label_79a100;
    }
    ctx->pc = 0x79A0F8u;
    SET_GPR_U32(ctx, 31, 0x79A100u);
    ctx->pc = 0x79A0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0F8u;
    // 0x79a0fc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A0F8u, 0x79A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A100u;
label_79a100:
    // 0x79a100: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x79a100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_79a104:
    // 0x79a104: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x79a104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79a108:
    // 0x79a108: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x79a108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_79a10c:
    // 0x79a10c: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x79a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
label_79a110:
    // 0x79a110: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79a110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_79a114:
    // 0x79a114: 0xafa500c4  sw          $a1, 0xC4($sp)
    ctx->pc = 0x79a114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 5));
label_79a118:
    // 0x79a118: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x79a118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_79a11c:
    // 0x79a11c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x79a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_79a120:
    // 0x79a120: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x79a120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_79a124:
    // 0x79a124: 0x8c627a8c  lw          $v0, 0x7A8C($v1)
    ctx->pc = 0x79a124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31372)));
label_79a128:
    // 0x79a128: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x79a128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
label_79a12c:
    // 0x79a12c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x79a12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_79a130:
    // 0x79a130: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x79a130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
label_79a134:
    // 0x79a134: 0x3c06007a  lui         $a2, 0x7A
    ctx->pc = 0x79a134u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)122 << 16));
label_79a138:
    // 0x79a138: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x79a138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
label_79a13c:
    // 0x79a13c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x79a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_79a140:
    // 0x79a140: 0x8cc5bb80  lw          $a1, -0x4480($a2)
    ctx->pc = 0x79a140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294949760)));
label_79a144:
    // 0x79a144: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x79a144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_79a148:
    // 0x79a148: 0x3c014661  lui         $at, 0x4661
    ctx->pc = 0x79a148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18017 << 16));
label_79a14c:
    // 0x79a14c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a14cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a150:
    // 0x79a150: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x79a150u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a154:
    // 0x79a154: 0xac627a8c  sw          $v0, 0x7A8C($v1)
    ctx->pc = 0x79a154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31372), GPR_U32(ctx, 2));
label_79a158:
    // 0x79a158: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x79a158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_79a15c:
    // 0x79a15c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_79a160:
    // 0x79a160: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79a160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a164:
    // 0x79a164: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x79a164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
label_79a168:
    // 0x79a168: 0xc0a4bd4  jal         func_292F50
label_79a16c:
    if (ctx->pc == 0x79A16Cu) {
        ctx->pc = 0x79A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A168u;
        // 0x79a16c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A170u;
        goto label_79a170;
    }
    ctx->pc = 0x79A168u;
    SET_GPR_U32(ctx, 31, 0x79A170u);
    ctx->pc = 0x79A16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A168u;
    // 0x79a16c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x79A168u, 0x79A170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A170u;
label_79a170:
    // 0x79a170: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79a170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a174:
    // 0x79a174: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79a174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a178:
    // 0x79a178: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x79a178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a17c:
    // 0x79a17c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79a180:
    // 0x79a180: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79a180u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_79a184:
    // 0x79a184: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x79a184u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_79a188:
    // 0x79a188: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79a188u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_79a18c:
    // 0x79a18c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x79a18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a190:
    // 0x79a190: 0xa3a30008  sb          $v1, 0x8($sp)
    ctx->pc = 0x79a190u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 3));
label_79a194:
    // 0x79a194: 0xa3a40018  sb          $a0, 0x18($sp)
    ctx->pc = 0x79a194u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 4));
label_79a198:
    // 0x79a198: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x79a198u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_79a19c:
    // 0x79a19c: 0x0  nop
    ctx->pc = 0x79a19cu;
    // NOP
label_79a1a0:
    // 0x79a1a0: 0xc0a572a  jal         func_295CA8
label_79a1a4:
    if (ctx->pc == 0x79A1A4u) {
        ctx->pc = 0x79A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1A0u;
        // 0x79a1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1A8u;
        goto label_79a1a8;
    }
    ctx->pc = 0x79A1A0u;
    SET_GPR_U32(ctx, 31, 0x79A1A8u);
    ctx->pc = 0x79A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1A0u;
    // 0x79a1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A1A0u, 0x79A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1A8u;
label_79a1a8:
    // 0x79a1a8: 0x8ee47a8c  lw          $a0, 0x7A8C($s7)
    ctx->pc = 0x79a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 31372)));
label_79a1ac:
    // 0x79a1ac: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x79a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_79a1b0:
    // 0x79a1b0: 0x9e2024  and         $a0, $a0, $fp
    ctx->pc = 0x79a1b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
label_79a1b4:
    // 0x79a1b4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_79a1b8:
    if (ctx->pc == 0x79A1B8u) {
        ctx->pc = 0x79A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1B4u;
        // 0x79a1b8: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1BCu;
        goto label_79a1bc;
    }
    ctx->pc = 0x79A1B4u;
    {
        const bool branch_taken_0x79a1b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1B4u;
        // 0x79a1b8: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1b4) {
            ctx->pc = 0x79A1CCu;
            goto label_79a1cc;
        }
    }
    ctx->pc = 0x79A1BCu;
label_79a1bc:
    // 0x79a1bc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x79a1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_79a1c0:
    // 0x79a1c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79a1c4:
    // 0x79a1c4: 0xc0a56e0  jal         func_295B80
label_79a1c8:
    if (ctx->pc == 0x79A1C8u) {
        ctx->pc = 0x79A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1C4u;
        // 0x79a1c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1CCu;
        goto label_79a1cc;
    }
    ctx->pc = 0x79A1C4u;
    SET_GPR_U32(ctx, 31, 0x79A1CCu);
    ctx->pc = 0x79A1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1C4u;
    // 0x79a1c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x79A1C4u, 0x79A1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1CCu;
label_79a1cc:
    // 0x79a1cc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79a1ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79a1d0:
    // 0x79a1d0: 0x621fff3  bgez        $s1, . + 4 + (-0xD << 2)
label_79a1d4:
    if (ctx->pc == 0x79A1D4u) {
        ctx->pc = 0x79A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1D0u;
        // 0x79a1d4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1D8u;
        goto label_79a1d8;
    }
    ctx->pc = 0x79A1D0u;
    {
        const bool branch_taken_0x79a1d0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x79A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1D0u;
        // 0x79a1d4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1d0) {
            ctx->pc = 0x79A1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a1a0;
        }
    }
    ctx->pc = 0x79A1D8u;
label_79a1d8:
    // 0x79a1d8: 0x3c06007a  lui         $a2, 0x7A
    ctx->pc = 0x79a1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)122 << 16));
label_79a1dc:
    // 0x79a1dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x79a1dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79a1e0:
    // 0x79a1e0: 0x8cc3bb80  lw          $v1, -0x4480($a2)
    ctx->pc = 0x79a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294949760)));
label_79a1e4:
    // 0x79a1e4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x79a1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79a1e8:
    // 0x79a1e8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x79a1e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_79a1ec:
    // 0x79a1ec: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x79a1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_79a1f0:
    // 0x79a1f0: 0x8cc2bb80  lw          $v0, -0x4480($a2)
    ctx->pc = 0x79a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294949760)));
label_79a1f4:
    // 0x79a1f4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x79a1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79a1f8:
    // 0x79a1f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x79a1f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79a1fc:
    // 0x79a1fc: 0x0  nop
    ctx->pc = 0x79a1fcu;
    // NOP
label_79a200:
    // 0x79a200: 0x45010055  bc1t        . + 4 + (0x55 << 2)
label_79a204:
    if (ctx->pc == 0x79A204u) {
        ctx->pc = 0x79A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A200u;
        // 0x79a204: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A208u;
        goto label_79a208;
    }
    ctx->pc = 0x79A200u;
    {
        const bool branch_taken_0x79a200 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A200u;
        // 0x79a204: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a200) {
            ctx->pc = 0x79A358u;
            goto label_79a358;
        }
    }
    ctx->pc = 0x79A208u;
label_79a208:
    // 0x79a208: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_79a20c:
    if (ctx->pc == 0x79A20Cu) {
        ctx->pc = 0x79A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A208u;
        // 0x79a20c: 0x8ee37a8c  lw          $v1, 0x7A8C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 31372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A210u;
        goto label_79a210;
    }
    ctx->pc = 0x79A208u;
    {
        const bool branch_taken_0x79a208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A208u;
        // 0x79a20c: 0x8ee37a8c  lw          $v1, 0x7A8C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a208) {
            ctx->pc = 0x79A358u;
            goto label_79a358;
        }
    }
    ctx->pc = 0x79A210u;
label_79a210:
    // 0x79a210: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x79a210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_79a214:
    // 0x79a214: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x79a214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_79a218:
    // 0x79a218: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79a21c:
    if (ctx->pc == 0x79A21Cu) {
        ctx->pc = 0x79A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A218u;
        // 0x79a21c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A220u;
        goto label_79a220;
    }
    ctx->pc = 0x79A218u;
    {
        const bool branch_taken_0x79a218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A218u;
        // 0x79a21c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a218) {
            ctx->pc = 0x79A238u;
            goto label_79a238;
        }
    }
    ctx->pc = 0x79A220u;
label_79a220:
    // 0x79a220: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79a220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79a224:
    // 0x79a224: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_79a228:
    if (ctx->pc == 0x79A228u) {
        ctx->pc = 0x79A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A224u;
        // 0x79a228: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A22Cu;
        goto label_79a22c;
    }
    ctx->pc = 0x79A224u;
    {
        const bool branch_taken_0x79a224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A224u;
        // 0x79a228: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a224) {
            ctx->pc = 0x79A238u;
            goto label_79a238;
        }
    }
    ctx->pc = 0x79A22Cu;
label_79a22c:
    // 0x79a22c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79a22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79a230:
    // 0x79a230: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_79a234:
    if (ctx->pc == 0x79A234u) {
        ctx->pc = 0x79A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A230u;
        // 0x79a234: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A238u;
        goto label_79a238;
    }
    ctx->pc = 0x79A230u;
    {
        const bool branch_taken_0x79a230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A230u;
        // 0x79a234: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a230) {
            ctx->pc = 0x79A360u;
            goto label_79a360;
        }
    }
    ctx->pc = 0x79A238u;
label_79a238:
    // 0x79a238: 0x8ee27a8c  lw          $v0, 0x7A8C($s7)
    ctx->pc = 0x79a238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 31372)));
label_79a23c:
    // 0x79a23c: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x79a23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
label_79a240:
    // 0x79a240: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
label_79a244:
    if (ctx->pc == 0x79A244u) {
        ctx->pc = 0x79A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A240u;
        // 0x79a244: 0x3c06003c  lui         $a2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A248u;
        goto label_79a248;
    }
    ctx->pc = 0x79A240u;
    {
        const bool branch_taken_0x79a240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A240u;
        // 0x79a244: 0x3c06003c  lui         $a2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a240) {
            ctx->pc = 0x79A340u;
            goto label_79a340;
        }
    }
    ctx->pc = 0x79A248u;
label_79a248:
    // 0x79a248: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79a248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_79a24c:
    // 0x79a24c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x79a24cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_79a250:
    // 0x79a250: 0x24567a8c  addiu       $s6, $v0, 0x7A8C
    ctx->pc = 0x79a250u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 31372));
label_79a254:
    // 0x79a254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a258:
    // 0x79a258: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x79a258u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
label_79a25c:
    // 0x79a25c: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x79a25cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
label_79a260:
    // 0x79a260: 0x8ea3bb80  lw          $v1, -0x4480($s5)
    ctx->pc = 0x79a260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949760)));
label_79a264:
    // 0x79a264: 0x0  nop
    ctx->pc = 0x79a264u;
    // NOP
label_79a268:
    // 0x79a268: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x79a268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_79a26c:
    // 0x79a26c: 0x24b30001  addiu       $s3, $a1, 0x1
    ctx->pc = 0x79a26cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79a270:
    // 0x79a270: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x79a270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_79a274:
    // 0x79a274: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x79a274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_79a278:
    // 0x79a278: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x79a278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79a27c:
    // 0x79a27c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x79a27cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_79a280:
    // 0x79a280: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x79a280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_79a284:
    // 0x79a284: 0x8ea2bb80  lw          $v0, -0x4480($s5)
    ctx->pc = 0x79a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949760)));
label_79a288:
    // 0x79a288: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79a288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79a28c:
    // 0x79a28c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79a28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79a290:
    // 0x79a290: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x79a290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79a294:
    // 0x79a294: 0x0  nop
    ctx->pc = 0x79a294u;
    // NOP
label_79a298:
    // 0x79a298: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_79a29c:
    if (ctx->pc == 0x79A29Cu) {
        ctx->pc = 0x79A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A298u;
        // 0x79a29c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2A0u;
        goto label_79a2a0;
    }
    ctx->pc = 0x79A298u;
    {
        const bool branch_taken_0x79a298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A298u;
        // 0x79a29c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a298) {
            ctx->pc = 0x79A32Cu;
            goto label_79a32c;
        }
    }
    ctx->pc = 0x79A2A0u;
label_79a2a0:
    // 0x79a2a0: 0x2a510040  slti        $s1, $s2, 0x40
    ctx->pc = 0x79a2a0u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)64) ? 1 : 0);
label_79a2a4:
    // 0x79a2a4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_79a2a8:
    if (ctx->pc == 0x79A2A8u) {
        ctx->pc = 0x79A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2A4u;
        // 0x79a2a8: 0x121142  srl         $v0, $s2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2ACu;
        goto label_79a2ac;
    }
    ctx->pc = 0x79A2A4u;
    {
        const bool branch_taken_0x79a2a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2A4u;
        // 0x79a2a8: 0x121142  srl         $v0, $s2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2a4) {
            ctx->pc = 0x79A2CCu;
            goto label_79a2cc;
        }
    }
    ctx->pc = 0x79A2ACu;
label_79a2ac:
    // 0x79a2ac: 0x3244001f  andi        $a0, $s2, 0x1F
    ctx->pc = 0x79a2acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
label_79a2b0:
    // 0x79a2b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79a2b4:
    // 0x79a2b4: 0x942006  srlv        $a0, $s4, $a0
    ctx->pc = 0x79a2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 4) & 0x1F));
label_79a2b8:
    // 0x79a2b8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x79a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_79a2bc:
    // 0x79a2bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a2c0:
    // 0x79a2c0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79a2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_79a2c4:
    // 0x79a2c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_79a2c8:
    if (ctx->pc == 0x79A2C8u) {
        ctx->pc = 0x79A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2C4u;
        // 0x79a2c8: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2CCu;
        goto label_79a2cc;
    }
    ctx->pc = 0x79A2C4u;
    {
        const bool branch_taken_0x79a2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2C4u;
        // 0x79a2c8: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2c4) {
            ctx->pc = 0x79A2D0u;
            goto label_79a2d0;
        }
    }
    ctx->pc = 0x79A2CCu;
label_79a2cc:
    // 0x79a2cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79a2ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a2d0:
    // 0x79a2d0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x79a2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_79a2d4:
    // 0x79a2d4: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_79a2d8:
    if (ctx->pc == 0x79A2D8u) {
        ctx->pc = 0x79A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2D4u;
        // 0x79a2d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2DCu;
        goto label_79a2dc;
    }
    ctx->pc = 0x79A2D4u;
    {
        const bool branch_taken_0x79a2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a2d4) {
            ctx->pc = 0x79A2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A2D4u;
            // 0x79a2d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A330u;
            goto label_79a330;
        }
    }
    ctx->pc = 0x79A2DCu;
label_79a2dc:
    // 0x79a2dc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x79a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_79a2e0:
    // 0x79a2e0: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x79a2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_79a2e4:
    // 0x79a2e4: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x79a2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_79a2e8:
    // 0x79a2e8: 0xc0a572a  jal         func_295CA8
label_79a2ec:
    if (ctx->pc == 0x79A2ECu) {
        ctx->pc = 0x79A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2E8u;
        // 0x79a2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2F0u;
        goto label_79a2f0;
    }
    ctx->pc = 0x79A2E8u;
    SET_GPR_U32(ctx, 31, 0x79A2F0u);
    ctx->pc = 0x79A2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2E8u;
    // 0x79a2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A2E8u, 0x79A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2F0u;
label_79a2f0:
    // 0x79a2f0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_79a2f4:
    if (ctx->pc == 0x79A2F4u) {
        ctx->pc = 0x79A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2F0u;
        // 0x79a2f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2F8u;
        goto label_79a2f8;
    }
    ctx->pc = 0x79A2F0u;
    {
        const bool branch_taken_0x79a2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2F0u;
        // 0x79a2f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2f0) {
            ctx->pc = 0x79A330u;
            goto label_79a330;
        }
    }
    ctx->pc = 0x79A2F8u;
label_79a2f8:
    // 0x79a2f8: 0xc0a5860  jal         func_296180
label_79a2fc:
    if (ctx->pc == 0x79A2FCu) {
        ctx->pc = 0x79A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2F8u;
        // 0x79a2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A300u;
        goto label_79a300;
    }
    ctx->pc = 0x79A2F8u;
    SET_GPR_U32(ctx, 31, 0x79A300u);
    ctx->pc = 0x79A2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2F8u;
    // 0x79a2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296180u, 0x79A2F8u, 0x79A300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A300u;
label_79a300:
    // 0x79a300: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_79a304:
    if (ctx->pc == 0x79A304u) {
        ctx->pc = 0x79A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A300u;
        // 0x79a304: 0x131142  srl         $v0, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A308u;
        goto label_79a308;
    }
    ctx->pc = 0x79A300u;
    {
        const bool branch_taken_0x79a300 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A300u;
        // 0x79a304: 0x131142  srl         $v0, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a300) {
            ctx->pc = 0x79A324u;
            goto label_79a324;
        }
    }
    ctx->pc = 0x79A308u;
label_79a308:
    // 0x79a308: 0x3264001f  andi        $a0, $s3, 0x1F
    ctx->pc = 0x79a308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
label_79a30c:
    // 0x79a30c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79a310:
    // 0x79a310: 0x942006  srlv        $a0, $s4, $a0
    ctx->pc = 0x79a310u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 4) & 0x1F));
label_79a314:
    // 0x79a314: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x79a314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_79a318:
    // 0x79a318: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a31c:
    // 0x79a31c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x79a31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_79a320:
    // 0x79a320: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x79a320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_79a324:
    // 0x79a324: 0xc1e6a22  jal         func_79A888
label_79a328:
    if (ctx->pc == 0x79A328u) {
        ctx->pc = 0x79A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A324u;
        // 0x79a328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A32Cu;
        goto label_79a32c;
    }
    ctx->pc = 0x79A324u;
    SET_GPR_U32(ctx, 31, 0x79A32Cu);
    ctx->pc = 0x79A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A324u;
    // 0x79a328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A888u, 0x79A324u, 0x79A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A32Cu;
label_79a32c:
    // 0x79a32c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79a32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79a330:
    // 0x79a330: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x79a330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_79a334:
    // 0x79a334: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_79a338:
    if (ctx->pc == 0x79A338u) {
        ctx->pc = 0x79A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A334u;
        // 0x79a338: 0x8ea3bb80  lw          $v1, -0x4480($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A33Cu;
        goto label_79a33c;
    }
    ctx->pc = 0x79A334u;
    {
        const bool branch_taken_0x79a334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A334u;
        // 0x79a338: 0x8ea3bb80  lw          $v1, -0x4480($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a334) {
            ctx->pc = 0x79A268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a268;
        }
    }
    ctx->pc = 0x79A33Cu;
label_79a33c:
    // 0x79a33c: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x79a33cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
label_79a340:
    // 0x79a340: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a344:
    // 0x79a344: 0x8cc22f84  lw          $v0, 0x2F84($a2)
    ctx->pc = 0x79a344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12164)));
label_79a348:
    // 0x79a348: 0xc0b56a8  jal         func_2D5AA0
label_79a34c:
    if (ctx->pc == 0x79A34Cu) {
        ctx->pc = 0x79A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A348u;
        // 0x79a34c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A350u;
        goto label_79a350;
    }
    ctx->pc = 0x79A348u;
    SET_GPR_U32(ctx, 31, 0x79A350u);
    ctx->pc = 0x79A34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A348u;
    // 0x79a34c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A348u, 0x79A350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A350u;
label_79a350:
    // 0x79a350: 0x1000ff83  b           . + 4 + (-0x7D << 2)
label_79a354:
    if (ctx->pc == 0x79A354u) {
        ctx->pc = 0x79A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A350u;
        // 0x79a354: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A358u;
        goto label_79a358;
    }
    ctx->pc = 0x79A350u;
    {
        const bool branch_taken_0x79a350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A350u;
        // 0x79a354: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a350) {
            ctx->pc = 0x79A160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a160;
        }
    }
    ctx->pc = 0x79A358u;
label_79a358:
    // 0x79a358: 0x8ee37a8c  lw          $v1, 0x7A8C($s7)
    ctx->pc = 0x79a358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 31372)));
label_79a35c:
    // 0x79a35c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x79a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_79a360:
    // 0x79a360: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79a360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79a364:
    // 0x79a364: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_79a368:
    if (ctx->pc == 0x79A368u) {
        ctx->pc = 0x79A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A364u;
        // 0x79a368: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A36Cu;
        goto label_79a36c;
    }
    ctx->pc = 0x79A364u;
    {
        const bool branch_taken_0x79a364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A364u;
        // 0x79a368: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a364) {
            ctx->pc = 0x79A3E0u;
            goto label_79a3e0;
        }
    }
    ctx->pc = 0x79A36Cu;
label_79a36c:
    // 0x79a36c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79a36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79a370:
    // 0x79a370: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_79a374:
    if (ctx->pc == 0x79A374u) {
        ctx->pc = 0x79A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A370u;
        // 0x79a374: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A378u;
        goto label_79a378;
    }
    ctx->pc = 0x79A370u;
    {
        const bool branch_taken_0x79a370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A370u;
        // 0x79a374: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a370) {
            ctx->pc = 0x79A3E0u;
            goto label_79a3e0;
        }
    }
    ctx->pc = 0x79A378u;
label_79a378:
    // 0x79a378: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79a378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79a37c:
    // 0x79a37c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_79a380:
    if (ctx->pc == 0x79A380u) {
        ctx->pc = 0x79A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A37Cu;
        // 0x79a380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A384u;
        goto label_79a384;
    }
    ctx->pc = 0x79A37Cu;
    {
        const bool branch_taken_0x79a37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A37Cu;
        // 0x79a380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a37c) {
            ctx->pc = 0x79A3E0u;
            goto label_79a3e0;
        }
    }
    ctx->pc = 0x79A384u;
label_79a384:
    // 0x79a384: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79a384u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_79a388:
    // 0x79a388: 0xa3a20008  sb          $v0, 0x8($sp)
    ctx->pc = 0x79a388u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 2));
label_79a38c:
    // 0x79a38c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79a38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a390:
    // 0x79a390: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x79a390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a394:
    // 0x79a394: 0x0  nop
    ctx->pc = 0x79a394u;
    // NOP
label_79a398:
    // 0x79a398: 0xc0a57ca  jal         func_295F28
label_79a39c:
    if (ctx->pc == 0x79A39Cu) {
        ctx->pc = 0x79A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A398u;
        // 0x79a39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3A0u;
        goto label_79a3a0;
    }
    ctx->pc = 0x79A398u;
    SET_GPR_U32(ctx, 31, 0x79A3A0u);
    ctx->pc = 0x79A39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A398u;
    // 0x79a39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x79A398u, 0x79A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3A0u;
label_79a3a0:
    // 0x79a3a0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_79a3a4:
    if (ctx->pc == 0x79A3A4u) {
        ctx->pc = 0x79A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A0u;
        // 0x79a3a4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3A8u;
        goto label_79a3a8;
    }
    ctx->pc = 0x79A3A0u;
    {
        const bool branch_taken_0x79a3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a3a0) {
            ctx->pc = 0x79A3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A3A0u;
            // 0x79a3a4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A3D4u;
            goto label_79a3d4;
        }
    }
    ctx->pc = 0x79A3A8u;
label_79a3a8:
    // 0x79a3a8: 0xc0a56ae  jal         func_295AB8
label_79a3ac:
    if (ctx->pc == 0x79A3ACu) {
        ctx->pc = 0x79A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A8u;
        // 0x79a3ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3B0u;
        goto label_79a3b0;
    }
    ctx->pc = 0x79A3A8u;
    SET_GPR_U32(ctx, 31, 0x79A3B0u);
    ctx->pc = 0x79A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3A8u;
    // 0x79a3ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A3A8u, 0x79A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3B0u;
label_79a3b0:
    // 0x79a3b0: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79a3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_79a3b4:
    // 0x79a3b4: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79a3b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79a3b8:
    // 0x79a3b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a3b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79a3bc:
    // 0x79a3bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a3c0:
    // 0x79a3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a3c4:
    // 0x79a3c4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x79a3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_79a3c8:
    // 0x79a3c8: 0xc0a57e0  jal         func_295F80
label_79a3cc:
    if (ctx->pc == 0x79A3CCu) {
        ctx->pc = 0x79A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C8u;
        // 0x79a3cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3D0u;
        goto label_79a3d0;
    }
    ctx->pc = 0x79A3C8u;
    SET_GPR_U32(ctx, 31, 0x79A3D0u);
    ctx->pc = 0x79A3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3C8u;
    // 0x79a3cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A3C8u, 0x79A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3D0u;
label_79a3d0:
    // 0x79a3d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79a3d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_79a3d4:
    // 0x79a3d4: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x79a3d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_79a3d8:
    // 0x79a3d8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_79a3dc:
    if (ctx->pc == 0x79A3DCu) {
        ctx->pc = 0x79A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3D8u;
        // 0x79a3dc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3E0u;
        goto label_79a3e0;
    }
    ctx->pc = 0x79A3D8u;
    {
        const bool branch_taken_0x79a3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3D8u;
        // 0x79a3dc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3d8) {
            ctx->pc = 0x79A398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a398;
        }
    }
    ctx->pc = 0x79A3E0u;
label_79a3e0:
    // 0x79a3e0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x79a3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_79a3e4:
    // 0x79a3e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79a3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a3e8:
    // 0x79a3e8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x79a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_79a3ec:
    // 0x79a3ec: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x79a3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_79a3f0:
    // 0x79a3f0: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x79a3f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_79a3f4:
    // 0x79a3f4: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x79a3f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_79a3f8:
    // 0x79a3f8: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x79a3f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79a3fc:
    // 0x79a3fc: 0x240b000b  addiu       $t3, $zero, 0xB
    ctx->pc = 0x79a3fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_79a400:
    // 0x79a400: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x79a400u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_79a404:
    // 0x79a404: 0x240d000d  addiu       $t5, $zero, 0xD
    ctx->pc = 0x79a404u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_79a408:
    // 0x79a408: 0x240e000e  addiu       $t6, $zero, 0xE
    ctx->pc = 0x79a408u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_79a40c:
    // 0x79a40c: 0x240f0013  addiu       $t7, $zero, 0x13
    ctx->pc = 0x79a40cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_79a410:
    // 0x79a410: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x79a410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_79a414:
    // 0x79a414: 0x24100015  addiu       $s0, $zero, 0x15
    ctx->pc = 0x79a414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_79a418:
    // 0x79a418: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x79a418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_79a41c:
    // 0x79a41c: 0xa3a60048  sb          $a2, 0x48($sp)
    ctx->pc = 0x79a41cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 6));
label_79a420:
    // 0x79a420: 0xa3a20038  sb          $v0, 0x38($sp)
    ctx->pc = 0x79a420u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 2));
label_79a424:
    // 0x79a424: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79a424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_79a428:
    // 0x79a428: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x79a428u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
label_79a42c:
    // 0x79a42c: 0xa3a70050  sb          $a3, 0x50($sp)
    ctx->pc = 0x79a42cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 7));
label_79a430:
    // 0x79a430: 0xa3a80058  sb          $t0, 0x58($sp)
    ctx->pc = 0x79a430u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 8));
label_79a434:
    // 0x79a434: 0xa3a90060  sb          $t1, 0x60($sp)
    ctx->pc = 0x79a434u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 9));
label_79a438:
    // 0x79a438: 0xa3aa0068  sb          $t2, 0x68($sp)
    ctx->pc = 0x79a438u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 10));
label_79a43c:
    // 0x79a43c: 0xa3ab0070  sb          $t3, 0x70($sp)
    ctx->pc = 0x79a43cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 11));
label_79a440:
    // 0x79a440: 0xa3ac0078  sb          $t4, 0x78($sp)
    ctx->pc = 0x79a440u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 12));
label_79a444:
    // 0x79a444: 0xa3ad0080  sb          $t5, 0x80($sp)
    ctx->pc = 0x79a444u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 13));
label_79a448:
    // 0x79a448: 0xa3ae0088  sb          $t6, 0x88($sp)
    ctx->pc = 0x79a448u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 136), (uint8_t)GPR_U32(ctx, 14));
label_79a44c:
    // 0x79a44c: 0xa3af0090  sb          $t7, 0x90($sp)
    ctx->pc = 0x79a44cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 15));
label_79a450:
    // 0x79a450: 0xa3b00098  sb          $s0, 0x98($sp)
    ctx->pc = 0x79a450u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 152), (uint8_t)GPR_U32(ctx, 16));
label_79a454:
    // 0x79a454: 0xa3b100a0  sb          $s1, 0xA0($sp)
    ctx->pc = 0x79a454u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 17));
label_79a458:
    // 0x79a458: 0xc1e6bf8  jal         func_79AFE0
label_79a45c:
    if (ctx->pc == 0x79A45Cu) {
        ctx->pc = 0x79A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A458u;
        // 0x79a45c: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A460u;
        goto label_79a460;
    }
    ctx->pc = 0x79A458u;
    SET_GPR_U32(ctx, 31, 0x79A460u);
    ctx->pc = 0x79A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A458u;
    // 0x79a45c: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AFE0u, 0x79A458u, 0x79A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A460u;
label_79a460:
    // 0x79a460: 0xc1e6c8c  jal         func_79B230
label_79a464:
    if (ctx->pc == 0x79A464u) {
        ctx->pc = 0x79A468u;
        goto label_79a468;
    }
    ctx->pc = 0x79A460u;
    SET_GPR_U32(ctx, 31, 0x79A468u);
    ctx->pc = 0x79B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B230u, 0x79A460u, 0x79A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A468u;
label_79a468:
    // 0x79a468: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79a468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_79a46c:
    // 0x79a46c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79a470:
    // 0x79a470: 0x24477a8c  addiu       $a3, $v0, 0x7A8C
    ctx->pc = 0x79a470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 31372));
label_79a474:
    // 0x79a474: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x79a474u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_79a478:
    // 0x79a478: 0x2466ba60  addiu       $a2, $v1, -0x45A0
    ctx->pc = 0x79a478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949472));
label_79a47c:
    // 0x79a47c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a47cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a480:
    // 0x79a480: 0x80c40001  lb          $a0, 0x1($a2)
    ctx->pc = 0x79a480u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_79a484:
    // 0x79a484: 0x80c50002  lb          $a1, 0x2($a2)
    ctx->pc = 0x79a484u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_79a488:
    // 0x79a488: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a488u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_79a48c:
    // 0x79a48c: 0xa3a40001  sb          $a0, 0x1($sp)
    ctx->pc = 0x79a48cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 4));
label_79a490:
    // 0x79a490: 0xa3a50002  sb          $a1, 0x2($sp)
    ctx->pc = 0x79a490u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 5));
label_79a494:
    // 0x79a494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a498:
    // 0x79a498: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x79a498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79a49c:
    // 0x79a49c: 0x0  nop
    ctx->pc = 0x79a49cu;
    // NOP
label_79a4a0:
    // 0x79a4a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a4a4:
    // 0x79a4a4: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x79a4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
label_79a4a8:
    // 0x79a4a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_79a4ac:
    if (ctx->pc == 0x79A4ACu) {
        ctx->pc = 0x79A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4A8u;
        // 0x79a4ac: 0x51142  srl         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4B0u;
        goto label_79a4b0;
    }
    ctx->pc = 0x79A4A8u;
    {
        const bool branch_taken_0x79a4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4A8u;
        // 0x79a4ac: 0x51142  srl         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4a8) {
            ctx->pc = 0x79A4D0u;
            goto label_79a4d0;
        }
    }
    ctx->pc = 0x79A4B0u;
label_79a4b0:
    // 0x79a4b0: 0x30a4001f  andi        $a0, $a1, 0x1F
    ctx->pc = 0x79a4b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_79a4b4:
    // 0x79a4b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79a4b8:
    // 0x79a4b8: 0x882006  srlv        $a0, $t0, $a0
    ctx->pc = 0x79a4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
label_79a4bc:
    // 0x79a4bc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x79a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_79a4c0:
    // 0x79a4c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a4c4:
    // 0x79a4c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79a4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_79a4c8:
    // 0x79a4c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_79a4cc:
    if (ctx->pc == 0x79A4CCu) {
        ctx->pc = 0x79A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4C8u;
        // 0x79a4cc: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4D0u;
        goto label_79a4d0;
    }
    ctx->pc = 0x79A4C8u;
    {
        const bool branch_taken_0x79a4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4C8u;
        // 0x79a4cc: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4c8) {
            ctx->pc = 0x79A4D4u;
            goto label_79a4d4;
        }
    }
    ctx->pc = 0x79A4D0u;
label_79a4d0:
    // 0x79a4d0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79a4d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a4d4:
    // 0x79a4d4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x79a4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_79a4d8:
    // 0x79a4d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_79a4dc:
    if (ctx->pc == 0x79A4DCu) {
        ctx->pc = 0x79A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4D8u;
        // 0x79a4dc: 0x3a61021  addu        $v0, $sp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4E0u;
        goto label_79a4e0;
    }
    ctx->pc = 0x79A4D8u;
    {
        const bool branch_taken_0x79a4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4D8u;
        // 0x79a4dc: 0x3a61021  addu        $v0, $sp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4d8) {
            ctx->pc = 0x79A4E4u;
            goto label_79a4e4;
        }
    }
    ctx->pc = 0x79A4E0u;
label_79a4e0:
    // 0x79a4e0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x79a4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_79a4e4:
    // 0x79a4e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x79a4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_79a4e8:
    // 0x79a4e8: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x79a4e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_79a4ec:
    // 0x79a4ec: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_79a4f0:
    if (ctx->pc == 0x79A4F0u) {
        ctx->pc = 0x79A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4ECu;
        // 0x79a4f0: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4F4u;
        goto label_79a4f4;
    }
    ctx->pc = 0x79A4ECu;
    {
        const bool branch_taken_0x79a4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4ECu;
        // 0x79a4f0: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4ec) {
            ctx->pc = 0x79A4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a4a0;
        }
    }
    ctx->pc = 0x79A4F4u;
label_79a4f4:
    // 0x79a4f4: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x79a4f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_79a4f8:
    // 0x79a4f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_79a4fc:
    if (ctx->pc == 0x79A4FCu) {
        ctx->pc = 0x79A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4F8u;
        // 0x79a4fc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A500u;
        goto label_79a500;
    }
    ctx->pc = 0x79A4F8u;
    {
        const bool branch_taken_0x79a4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4F8u;
        // 0x79a4fc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4f8) {
            ctx->pc = 0x79A518u;
            goto label_79a518;
        }
    }
    ctx->pc = 0x79A500u;
label_79a500:
    // 0x79a500: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x79a500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_79a504:
    // 0x79a504: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_79a508:
    if (ctx->pc == 0x79A508u) {
        ctx->pc = 0x79A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A504u;
        // 0x79a508: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A50Cu;
        goto label_79a50c;
    }
    ctx->pc = 0x79A504u;
    {
        const bool branch_taken_0x79a504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A504u;
        // 0x79a508: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a504) {
            ctx->pc = 0x79A518u;
            goto label_79a518;
        }
    }
    ctx->pc = 0x79A50Cu;
label_79a50c:
    // 0x79a50c: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x79a50cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_79a510:
    // 0x79a510: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
label_79a514:
    if (ctx->pc == 0x79A514u) {
        ctx->pc = 0x79A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A510u;
        // 0x79a514: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A518u;
        goto label_79a518;
    }
    ctx->pc = 0x79A510u;
    {
        const bool branch_taken_0x79a510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A510u;
        // 0x79a514: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a510) {
            ctx->pc = 0x79A78Cu;
            goto label_79a78c;
        }
    }
    ctx->pc = 0x79A518u;
label_79a518:
    // 0x79a518: 0xc0b0fa2  jal         func_2C3E88
label_79a51c:
    if (ctx->pc == 0x79A51Cu) {
        ctx->pc = 0x79A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A518u;
        // 0x79a51c: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A520u;
        goto label_79a520;
    }
    ctx->pc = 0x79A518u;
    SET_GPR_U32(ctx, 31, 0x79A520u);
    ctx->pc = 0x79A51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A518u;
    // 0x79a51c: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x79A518u, 0x79A520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A520u;
label_79a520:
    // 0x79a520: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79a524:
    // 0x79a524: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x79a524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_79a528:
    // 0x79a528: 0x8c62bb80  lw          $v0, -0x4480($v1)
    ctx->pc = 0x79a528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949760)));
label_79a52c:
    // 0x79a52c: 0x24a4ee00  addiu       $a0, $a1, -0x1200
    ctx->pc = 0x79a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962688));
label_79a530:
    // 0x79a530: 0xc0b2ee8  jal         func_2CBBA0
label_79a534:
    if (ctx->pc == 0x79A534u) {
        ctx->pc = 0x79A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A530u;
        // 0x79a534: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A538u;
        goto label_79a538;
    }
    ctx->pc = 0x79A530u;
    SET_GPR_U32(ctx, 31, 0x79A538u);
    ctx->pc = 0x79A534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A530u;
    // 0x79a534: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x79A530u, 0x79A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A538u;
label_79a538:
    // 0x79a538: 0x3c06007a  lui         $a2, 0x7A
    ctx->pc = 0x79a538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)122 << 16));
label_79a53c:
    // 0x79a53c: 0x8cc2bb80  lw          $v0, -0x4480($a2)
    ctx->pc = 0x79a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294949760)));
label_79a540:
    // 0x79a540: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x79a540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_79a544:
    // 0x79a544: 0x8cc3bb80  lw          $v1, -0x4480($a2)
    ctx->pc = 0x79a544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294949760)));
label_79a548:
    // 0x79a548: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a54c:
    // 0x79a54c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_79a550:
    if (ctx->pc == 0x79A550u) {
        ctx->pc = 0x79A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A54Cu;
        // 0x79a550: 0x2403ffbf  addiu       $v1, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A554u;
        goto label_79a554;
    }
    ctx->pc = 0x79A54Cu;
    {
        const bool branch_taken_0x79a54c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A54Cu;
        // 0x79a550: 0x2403ffbf  addiu       $v1, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a54c) {
            ctx->pc = 0x79A560u;
            goto label_79a560;
        }
    }
    ctx->pc = 0x79A554u;
label_79a554:
    // 0x79a554: 0x8c8205b8  lw          $v0, 0x5B8($a0)
    ctx->pc = 0x79a554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
label_79a558:
    // 0x79a558: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79a558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_79a55c:
    // 0x79a55c: 0xac8205b8  sw          $v0, 0x5B8($a0)
    ctx->pc = 0x79a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 2));
label_79a560:
    // 0x79a560: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x79a560u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_79a564:
    // 0x79a564: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x79a564u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_79a568:
    // 0x79a568: 0xc0a635e  jal         func_298D78
label_79a56c:
    if (ctx->pc == 0x79A56Cu) {
        ctx->pc = 0x79A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A568u;
        // 0x79a56c: 0x93a60002  lbu         $a2, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A570u;
        goto label_79a570;
    }
    ctx->pc = 0x79A568u;
    SET_GPR_U32(ctx, 31, 0x79A570u);
    ctx->pc = 0x79A56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A568u;
    // 0x79a56c: 0x93a60002  lbu         $a2, 0x2($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298D78u, 0x79A568u, 0x79A570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A570u;
label_79a570:
    // 0x79a570: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_79a574:
    // 0x79a574: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x79a574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
label_79a578:
    // 0x79a578: 0xc0a58dc  jal         func_296370
label_79a57c:
    if (ctx->pc == 0x79A57Cu) {
        ctx->pc = 0x79A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A578u;
        // 0x79a57c: 0x24446af0  addiu       $a0, $v0, 0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A580u;
        goto label_79a580;
    }
    ctx->pc = 0x79A578u;
    SET_GPR_U32(ctx, 31, 0x79A580u);
    ctx->pc = 0x79A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A578u;
    // 0x79a57c: 0x24446af0  addiu       $a0, $v0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x79A578u, 0x79A580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A580u;
label_79a580:
    // 0x79a580: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79a584:
    // 0x79a584: 0x8c62bb80  lw          $v0, -0x4480($v1)
    ctx->pc = 0x79a584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949760)));
label_79a588:
    // 0x79a588: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x79a588u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a58c:
    // 0x79a58c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_79a590:
    if (ctx->pc == 0x79A590u) {
        ctx->pc = 0x79A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A58Cu;
        // 0x79a590: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A594u;
        goto label_79a594;
    }
    ctx->pc = 0x79A58Cu;
    {
        const bool branch_taken_0x79a58c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A58Cu;
        // 0x79a590: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a58c) {
            ctx->pc = 0x79A5A4u;
            goto label_79a5a4;
        }
    }
    ctx->pc = 0x79A594u;
label_79a594:
    // 0x79a594: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x79a594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
label_79a598:
    // 0x79a598: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x79a598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_79a59c:
    // 0x79a59c: 0xae2205b8  sw          $v0, 0x5B8($s1)
    ctx->pc = 0x79a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 2));
label_79a5a0:
    // 0x79a5a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a5a4:
    // 0x79a5a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x79a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a5a8:
    // 0x79a5a8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x79a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79a5ac:
    // 0x79a5ac: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79a5acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_79a5b0:
    // 0x79a5b0: 0xa3a30018  sb          $v1, 0x18($sp)
    ctx->pc = 0x79a5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 3));
label_79a5b4:
    // 0x79a5b4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x79a5b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a5b8:
    // 0x79a5b8: 0x8fb000c4  lw          $s0, 0xC4($sp)
    ctx->pc = 0x79a5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_79a5bc:
    // 0x79a5bc: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x79a5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
label_79a5c0:
    // 0x79a5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a5c4:
    // 0x79a5c4: 0xc0a56ce  jal         func_295B38
label_79a5c8:
    if (ctx->pc == 0x79A5C8u) {
        ctx->pc = 0x79A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5C4u;
        // 0x79a5c8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5CCu;
        goto label_79a5cc;
    }
    ctx->pc = 0x79A5C4u;
    SET_GPR_U32(ctx, 31, 0x79A5CCu);
    ctx->pc = 0x79A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5C4u;
    // 0x79a5c8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x79A5C4u, 0x79A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5CCu;
label_79a5cc:
    // 0x79a5cc: 0x0  nop
    ctx->pc = 0x79a5ccu;
    // NOP
label_79a5d0:
    // 0x79a5d0: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
label_79a5d4:
    if (ctx->pc == 0x79A5D4u) {
        ctx->pc = 0x79A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5D0u;
        // 0x79a5d4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5D8u;
        goto label_79a5d8;
    }
    ctx->pc = 0x79A5D0u;
    {
        const bool branch_taken_0x79a5d0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x79A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5D0u;
        // 0x79a5d4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5d0) {
            ctx->pc = 0x79A5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a5c0;
        }
    }
    ctx->pc = 0x79A5D8u;
label_79a5d8:
    // 0x79a5d8: 0x8fb300b0  lw          $s3, 0xB0($sp)
    ctx->pc = 0x79a5d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_79a5dc:
    // 0x79a5dc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79a5e0:
    // 0x79a5e0: 0x3c01c283  lui         $at, 0xC283
    ctx->pc = 0x79a5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49795 << 16));
label_79a5e4:
    // 0x79a5e4: 0x3421b333  ori         $at, $at, 0xB333
    ctx->pc = 0x79a5e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45875);
label_79a5e8:
    // 0x79a5e8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79a5e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_79a5ec:
    // 0x79a5ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79a5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a5f0:
    // 0x79a5f0: 0x3c01c318  lui         $at, 0xC318
    ctx->pc = 0x79a5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49944 << 16));
label_79a5f4:
    // 0x79a5f4: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x79a5f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_79a5f8:
    // 0x79a5f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79a5fc:
    // 0x79a5fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79a5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79a600:
    // 0x79a600: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79a604:
    // 0x79a604: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79a608:
    // 0x79a608: 0x3c01c08b  lui         $at, 0xC08B
    ctx->pc = 0x79a608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49291 << 16));
label_79a60c:
    // 0x79a60c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x79a60cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_79a610:
    // 0x79a610: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a614:
    // 0x79a614: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x79a614u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_79a618:
    // 0x79a618: 0x8fb200bc  lw          $s2, 0xBC($sp)
    ctx->pc = 0x79a618u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_79a61c:
    // 0x79a61c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x79a61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_79a620:
    // 0x79a620: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x79a620u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_79a624:
    // 0x79a624: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x79a624u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_79a628:
    // 0x79a628: 0x3c01c28a  lui         $at, 0xC28A
    ctx->pc = 0x79a628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49802 << 16));
label_79a62c:
    // 0x79a62c: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x79a62cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_79a630:
    // 0x79a630: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79a634:
    // 0x79a634: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x79a634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_79a638:
    // 0x79a638: 0x3c01c03a  lui         $at, 0xC03A
    ctx->pc = 0x79a638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49210 << 16));
label_79a63c:
    // 0x79a63c: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x79a63cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_79a640:
    // 0x79a640: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a644:
    // 0x79a644: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x79a644u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_79a648:
    // 0x79a648: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x79a648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_79a64c:
    // 0x79a64c: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x79a64cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_79a650:
    // 0x79a650: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x79a650u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_79a654:
    // 0x79a654: 0x3c01c288  lui         $at, 0xC288
    ctx->pc = 0x79a654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49800 << 16));
label_79a658:
    // 0x79a658: 0x34218a3d  ori         $at, $at, 0x8A3D
    ctx->pc = 0x79a658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35389);
label_79a65c:
    // 0x79a65c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79a65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_79a660:
    // 0x79a660: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x79a660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_79a664:
    // 0x79a664: 0x3c01c090  lui         $at, 0xC090
    ctx->pc = 0x79a664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49296 << 16));
label_79a668:
    // 0x79a668: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x79a668u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_79a66c:
    // 0x79a66c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a670:
    // 0x79a670: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x79a670u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_79a674:
    // 0x79a674: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x79a674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_79a678:
    // 0x79a678: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x79a678u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_79a67c:
    // 0x79a67c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x79a67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_79a680:
    // 0x79a680: 0x2446ba68  addiu       $a2, $v0, -0x4598
    ctx->pc = 0x79a680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949480));
label_79a684:
    // 0x79a684: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x79a684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_79a688:
    // 0x79a688: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x79a688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_79a68c:
    // 0x79a68c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x79a68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_79a690:
    // 0x79a690: 0xb3a30067  sdl         $v1, 0x67($sp)
    ctx->pc = 0x79a690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_79a694:
    // 0x79a694: 0xb7a30060  sdr         $v1, 0x60($sp)
    ctx->pc = 0x79a694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_79a698:
    // 0x79a698: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x79a698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_79a69c:
    // 0x79a69c: 0x0  nop
    ctx->pc = 0x79a69cu;
    // NOP
label_79a6a0:
    // 0x79a6a0: 0x3b11021  addu        $v0, $sp, $s1
    ctx->pc = 0x79a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
label_79a6a4:
    // 0x79a6a4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x79a6a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_79a6a8:
    // 0x79a6a8: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
label_79a6ac:
    if (ctx->pc == 0x79A6ACu) {
        ctx->pc = 0x79A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6A8u;
        // 0x79a6ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6B0u;
        goto label_79a6b0;
    }
    ctx->pc = 0x79A6A8u;
    {
        const bool branch_taken_0x79a6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a6a8) {
            ctx->pc = 0x79A6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A6A8u;
            // 0x79a6ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A700u;
            goto label_79a700;
        }
    }
    ctx->pc = 0x79A6B0u;
label_79a6b0:
    // 0x79a6b0: 0x240403da  addiu       $a0, $zero, 0x3DA
    ctx->pc = 0x79a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 986));
label_79a6b4:
    // 0x79a6b4: 0xc0c3ea6  jal         func_30FA98
label_79a6b8:
    if (ctx->pc == 0x79A6B8u) {
        ctx->pc = 0x79A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6B4u;
        // 0x79a6b8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6BCu;
        goto label_79a6bc;
    }
    ctx->pc = 0x79A6B4u;
    SET_GPR_U32(ctx, 31, 0x79A6BCu);
    ctx->pc = 0x79A6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6B4u;
    // 0x79a6b8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x79A6B4u, 0x79A6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6BCu;
label_79a6bc:
    // 0x79a6bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a6c0:
    // 0x79a6c0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_79a6c4:
    if (ctx->pc == 0x79A6C4u) {
        ctx->pc = 0x79A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6C0u;
        // 0x79a6c4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6C8u;
        goto label_79a6c8;
    }
    ctx->pc = 0x79A6C0u;
    {
        const bool branch_taken_0x79a6c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a6c0) {
            ctx->pc = 0x79A6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A6C0u;
            // 0x79a6c4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A700u;
            goto label_79a700;
        }
    }
    ctx->pc = 0x79A6C8u;
label_79a6c8:
    // 0x79a6c8: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79a6cc:
    // 0x79a6cc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79a6ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_79a6d0:
    // 0x79a6d0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x79a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_79a6d4:
    // 0x79a6d4: 0x40f809  jalr        $v0
label_79a6d8:
    if (ctx->pc == 0x79A6D8u) {
        ctx->pc = 0x79A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6D4u;
        // 0x79a6d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6DCu;
        goto label_79a6dc;
    }
    ctx->pc = 0x79A6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A6DCu);
        ctx->pc = 0x79A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6D4u;
        // 0x79a6d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A6D4u, 0x79A6DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A6DCu;
label_79a6dc:
    // 0x79a6dc: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79a6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79a6e0:
    // 0x79a6e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x79a6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_79a6e4:
    // 0x79a6e4: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x79a6e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_79a6e8:
    // 0x79a6e8: 0x8c660074  lw          $a2, 0x74($v1)
    ctx->pc = 0x79a6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_79a6ec:
    // 0x79a6ec: 0xc0f809  jalr        $a2
label_79a6f0:
    if (ctx->pc == 0x79A6F0u) {
        ctx->pc = 0x79A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6ECu;
        // 0x79a6f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6F4u;
        goto label_79a6f4;
    }
    ctx->pc = 0x79A6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x79A6F4u);
        ctx->pc = 0x79A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6ECu;
        // 0x79a6f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A6ECu, 0x79A6F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A6F4u;
label_79a6f4:
    // 0x79a6f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x79a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_79a6f8:
    // 0x79a6f8: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x79a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
label_79a6fc:
    // 0x79a6fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79a6fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_79a700:
    // 0x79a700: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x79a700u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_79a704:
    // 0x79a704: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x79a704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_79a708:
    // 0x79a708: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_79a70c:
    if (ctx->pc == 0x79A70Cu) {
        ctx->pc = 0x79A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A708u;
        // 0x79a70c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A710u;
        goto label_79a710;
    }
    ctx->pc = 0x79A708u;
    {
        const bool branch_taken_0x79a708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A708u;
        // 0x79a70c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a708) {
            ctx->pc = 0x79A6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a6a0;
        }
    }
    ctx->pc = 0x79A710u;
label_79a710:
    // 0x79a710: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x79a710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_79a714:
    // 0x79a714: 0x3c01c28f  lui         $at, 0xC28F
    ctx->pc = 0x79a714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49807 << 16));
label_79a718:
    // 0x79a718: 0x3421d1ec  ori         $at, $at, 0xD1EC
    ctx->pc = 0x79a718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53740);
label_79a71c:
    // 0x79a71c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a720:
    // 0x79a720: 0x3c01c318  lui         $at, 0xC318
    ctx->pc = 0x79a720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49944 << 16));
label_79a724:
    // 0x79a724: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x79a724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_79a728:
    // 0x79a728: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79a72c:
    // 0x79a72c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x79a72cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_79a730:
    // 0x79a730: 0x3c01c10b  lui         $at, 0xC10B
    ctx->pc = 0x79a730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49419 << 16));
label_79a734:
    // 0x79a734: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x79a734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_79a738:
    // 0x79a738: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79a73c:
    // 0x79a73c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79a740:
    // 0x79a740: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79a744:
    // 0x79a744: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x79a744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_79a748:
    // 0x79a748: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x79a748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
label_79a74c:
    // 0x79a74c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x79a74cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_79a750:
    // 0x79a750: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79a754:
    // 0x79a754: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79a754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79a758:
    // 0x79a758: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x79a758u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79a75c:
    // 0x79a75c: 0xc0c71f8  jal         func_31C7E0
label_79a760:
    if (ctx->pc == 0x79A760u) {
        ctx->pc = 0x79A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A75Cu;
        // 0x79a760: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A764u;
        goto label_79a764;
    }
    ctx->pc = 0x79A75Cu;
    SET_GPR_U32(ctx, 31, 0x79A764u);
    ctx->pc = 0x79A760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A75Cu;
    // 0x79a760: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C7E0u, 0x79A75Cu, 0x79A764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A764u;
label_79a764:
    // 0x79a764: 0xc0b6dac  jal         func_2DB6B0
label_79a768:
    if (ctx->pc == 0x79A768u) {
        ctx->pc = 0x79A76Cu;
        goto label_79a76c;
    }
    ctx->pc = 0x79A764u;
    SET_GPR_U32(ctx, 31, 0x79A76Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A764u, 0x79A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A76Cu;
label_79a76c:
    // 0x79a76c: 0xc04b106  jal         func_12C418
label_79a770:
    if (ctx->pc == 0x79A770u) {
        ctx->pc = 0x79A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A76Cu;
        // 0x79a770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A774u;
        goto label_79a774;
    }
    ctx->pc = 0x79A76Cu;
    SET_GPR_U32(ctx, 31, 0x79A774u);
    ctx->pc = 0x79A770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A76Cu;
    // 0x79a770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C418u, 0x79A76Cu, 0x79A774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A774u;
label_79a774:
    // 0x79a774: 0xc0b6dac  jal         func_2DB6B0
label_79a778:
    if (ctx->pc == 0x79A778u) {
        ctx->pc = 0x79A77Cu;
        goto label_79a77c;
    }
    ctx->pc = 0x79A774u;
    SET_GPR_U32(ctx, 31, 0x79A77Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A774u, 0x79A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A77Cu;
label_79a77c:
    // 0x79a77c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79a77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a780:
    // 0x79a780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a784:
    // 0x79a784: 0xc0493d8  jal         func_124F60
label_79a788:
    if (ctx->pc == 0x79A788u) {
        ctx->pc = 0x79A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A784u;
        // 0x79a788: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A78Cu;
        goto label_79a78c;
    }
    ctx->pc = 0x79A784u;
    SET_GPR_U32(ctx, 31, 0x79A78Cu);
    ctx->pc = 0x79A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A784u;
    // 0x79a788: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x79A784u, 0x79A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A78Cu;
label_79a78c:
    // 0x79a78c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x79a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_79a790:
    // 0x79a790: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x79a790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_79a794:
    // 0x79a794: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x79a794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_79a798:
    // 0x79a798: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x79a798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_79a79c:
    // 0x79a79c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79a79cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_79a7a0:
    // 0x79a7a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79a7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a7a4:
    // 0x79a7a4: 0xa3a30018  sb          $v1, 0x18($sp)
    ctx->pc = 0x79a7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 3));
label_79a7a8:
    // 0x79a7a8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79a7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79a7ac:
    // 0x79a7ac: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x79a7acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
label_79a7b0:
    // 0x79a7b0: 0xa3a50028  sb          $a1, 0x28($sp)
    ctx->pc = 0x79a7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 5));
label_79a7b4:
    // 0x79a7b4: 0x0  nop
    ctx->pc = 0x79a7b4u;
    // NOP
label_79a7b8:
    // 0x79a7b8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x79a7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_79a7bc:
    // 0x79a7bc: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x79a7bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_79a7c0:
    // 0x79a7c0: 0x24646ab0  addiu       $a0, $v1, 0x6AB0
    ctx->pc = 0x79a7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27312));
label_79a7c4:
    // 0x79a7c4: 0xc0a54b4  jal         func_2952D0
label_79a7c8:
    if (ctx->pc == 0x79A7C8u) {
        ctx->pc = 0x79A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7C4u;
        // 0x79a7c8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7CCu;
        goto label_79a7cc;
    }
    ctx->pc = 0x79A7C4u;
    SET_GPR_U32(ctx, 31, 0x79A7CCu);
    ctx->pc = 0x79A7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7C4u;
    // 0x79a7c8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A7C4u, 0x79A7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7CCu;
label_79a7cc:
    // 0x79a7cc: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x79a7ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_79a7d0:
    // 0x79a7d0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_79a7d4:
    if (ctx->pc == 0x79A7D4u) {
        ctx->pc = 0x79A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7D0u;
        // 0x79a7d4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7D8u;
        goto label_79a7d8;
    }
    ctx->pc = 0x79A7D0u;
    {
        const bool branch_taken_0x79a7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7D0u;
        // 0x79a7d4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7d0) {
            ctx->pc = 0x79A7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a7b8;
        }
    }
    ctx->pc = 0x79A7D8u;
label_79a7d8:
    // 0x79a7d8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x79a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_79a7dc:
    // 0x79a7dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a7e0:
    // 0x79a7e0: 0x8c822f84  lw          $v0, 0x2F84($a0)
    ctx->pc = 0x79a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12164)));
label_79a7e4:
    // 0x79a7e4: 0xc0b56a8  jal         func_2D5AA0
label_79a7e8:
    if (ctx->pc == 0x79A7E8u) {
        ctx->pc = 0x79A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7E4u;
        // 0x79a7e8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7ECu;
        goto label_79a7ec;
    }
    ctx->pc = 0x79A7E4u;
    SET_GPR_U32(ctx, 31, 0x79A7ECu);
    ctx->pc = 0x79A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7E4u;
    // 0x79a7e8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A7E4u, 0x79A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7ECu;
label_79a7ec:
    // 0x79a7ec: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_79a7f0:
    // 0x79a7f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x79a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_79a7f4:
    // 0x79a7f4: 0x8c448658  lw          $a0, -0x79A8($v0)
    ctx->pc = 0x79a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_79a7f8:
    // 0x79a7f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a7f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a7fc:
    // 0x79a7fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a800:
    // 0x79a800: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a804:
    // 0x79a804: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_79a808:
    // 0x79a808: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79a80c:
    // 0x79a80c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79a80cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_79a810:
    // 0x79a810: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79a810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79a814:
    // 0x79a814: 0xc0b016c  jal         func_2C05B0
label_79a818:
    if (ctx->pc == 0x79A818u) {
        ctx->pc = 0x79A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A814u;
        // 0x79a818: 0x8c64264c  lw          $a0, 0x264C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9804)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A81Cu;
        goto label_79a81c;
    }
    ctx->pc = 0x79A814u;
    SET_GPR_U32(ctx, 31, 0x79A81Cu);
    ctx->pc = 0x79A818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A814u;
    // 0x79a818: 0x8c64264c  lw          $a0, 0x264C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79A814u, 0x79A81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A81Cu;
label_79a81c:
    // 0x79a81c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x79a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_79a820:
    // 0x79a820: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79a824:
    // 0x79a824: 0x24a5ba20  addiu       $a1, $a1, -0x45E0
    ctx->pc = 0x79a824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949408));
label_79a828:
    // 0x79a828: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a82c:
    // 0x79a82c: 0xc04ccb4  jal         func_1332D0
label_79a830:
    if (ctx->pc == 0x79A830u) {
        ctx->pc = 0x79A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A82Cu;
        // 0x79a830: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A834u;
        goto label_79a834;
    }
    ctx->pc = 0x79A82Cu;
    SET_GPR_U32(ctx, 31, 0x79A834u);
    ctx->pc = 0x79A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A82Cu;
    // 0x79a830: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79A82Cu, 0x79A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A834u;
label_79a834:
    // 0x79a834: 0xc1e6bb2  jal         func_79AEC8
label_79a838:
    if (ctx->pc == 0x79A838u) {
        ctx->pc = 0x79A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A834u;
        // 0x79a838: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A83Cu;
        goto label_79a83c;
    }
    ctx->pc = 0x79A834u;
    SET_GPR_U32(ctx, 31, 0x79A83Cu);
    ctx->pc = 0x79A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A834u;
    // 0x79a838: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AEC8u, 0x79A834u, 0x79A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A83Cu;
label_79a83c:
    // 0x79a83c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x79a83cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
label_79a840:
    // 0x79a840: 0x8ca22f84  lw          $v0, 0x2F84($a1)
    ctx->pc = 0x79a840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12164)));
label_79a844:
    // 0x79a844: 0xc0b5692  jal         func_2D5A48
label_79a848:
    if (ctx->pc == 0x79A848u) {
        ctx->pc = 0x79A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A844u;
        // 0x79a848: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A84Cu;
        goto label_79a84c;
    }
    ctx->pc = 0x79A844u;
    SET_GPR_U32(ctx, 31, 0x79A84Cu);
    ctx->pc = 0x79A848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A844u;
    // 0x79a848: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A844u, 0x79A84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A84Cu;
label_79a84c:
    // 0x79a84c: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x79a84cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_79a850:
    // 0x79a850: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x79a850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_79a854:
    // 0x79a854: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x79a854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_79a858:
    // 0x79a858: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x79a858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_79a85c:
    // 0x79a85c: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x79a85cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_79a860:
    // 0x79a860: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x79a860u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_79a864:
    // 0x79a864: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x79a864u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_79a868:
    // 0x79a868: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x79a868u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_79a86c:
    // 0x79a86c: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x79a86cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_79a870:
    // 0x79a870: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x79a870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_79a874:
    // 0x79a874: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x79a874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_79a878:
    // 0x79a878: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x79a878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79a87c:
    // 0x79a87c: 0x3e00008  jr          $ra
label_79a880:
    if (ctx->pc == 0x79A880u) {
        ctx->pc = 0x79A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A87Cu;
        // 0x79a880: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A884u;
        goto label_79a884;
    }
    ctx->pc = 0x79A87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A87Cu;
        // 0x79a880: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A884u;
label_79a884:
    // 0x79a884: 0x0  nop
    ctx->pc = 0x79a884u;
    // NOP
    ctx->pc = 0x79a888u;
}
} // namespace gh_r601
