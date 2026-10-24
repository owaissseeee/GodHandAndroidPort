#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r101_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r101
{
// Function: func_00799DE8
// Address: 0x799de8 - 0x79a510
void func_00799DE8_0x799de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799DE8_0x799de8");
#endif

    switch (ctx->pc) {
        case 0x799de8u: goto label_799de8;
        case 0x799decu: goto label_799dec;
        case 0x799df0u: goto label_799df0;
        case 0x799df4u: goto label_799df4;
        case 0x799df8u: goto label_799df8;
        case 0x799dfcu: goto label_799dfc;
        case 0x799e00u: goto label_799e00;
        case 0x799e04u: goto label_799e04;
        case 0x799e08u: goto label_799e08;
        case 0x799e0cu: goto label_799e0c;
        case 0x799e10u: goto label_799e10;
        case 0x799e14u: goto label_799e14;
        case 0x799e18u: goto label_799e18;
        case 0x799e1cu: goto label_799e1c;
        case 0x799e20u: goto label_799e20;
        case 0x799e24u: goto label_799e24;
        case 0x799e28u: goto label_799e28;
        case 0x799e2cu: goto label_799e2c;
        case 0x799e30u: goto label_799e30;
        case 0x799e34u: goto label_799e34;
        case 0x799e38u: goto label_799e38;
        case 0x799e3cu: goto label_799e3c;
        case 0x799e40u: goto label_799e40;
        case 0x799e44u: goto label_799e44;
        case 0x799e48u: goto label_799e48;
        case 0x799e4cu: goto label_799e4c;
        case 0x799e50u: goto label_799e50;
        case 0x799e54u: goto label_799e54;
        case 0x799e58u: goto label_799e58;
        case 0x799e5cu: goto label_799e5c;
        case 0x799e60u: goto label_799e60;
        case 0x799e64u: goto label_799e64;
        case 0x799e68u: goto label_799e68;
        case 0x799e6cu: goto label_799e6c;
        case 0x799e70u: goto label_799e70;
        case 0x799e74u: goto label_799e74;
        case 0x799e78u: goto label_799e78;
        case 0x799e7cu: goto label_799e7c;
        case 0x799e80u: goto label_799e80;
        case 0x799e84u: goto label_799e84;
        case 0x799e88u: goto label_799e88;
        case 0x799e8cu: goto label_799e8c;
        case 0x799e90u: goto label_799e90;
        case 0x799e94u: goto label_799e94;
        case 0x799e98u: goto label_799e98;
        case 0x799e9cu: goto label_799e9c;
        case 0x799ea0u: goto label_799ea0;
        case 0x799ea4u: goto label_799ea4;
        case 0x799ea8u: goto label_799ea8;
        case 0x799eacu: goto label_799eac;
        case 0x799eb0u: goto label_799eb0;
        case 0x799eb4u: goto label_799eb4;
        case 0x799eb8u: goto label_799eb8;
        case 0x799ebcu: goto label_799ebc;
        case 0x799ec0u: goto label_799ec0;
        case 0x799ec4u: goto label_799ec4;
        case 0x799ec8u: goto label_799ec8;
        case 0x799eccu: goto label_799ecc;
        case 0x799ed0u: goto label_799ed0;
        case 0x799ed4u: goto label_799ed4;
        case 0x799ed8u: goto label_799ed8;
        case 0x799edcu: goto label_799edc;
        case 0x799ee0u: goto label_799ee0;
        case 0x799ee4u: goto label_799ee4;
        case 0x799ee8u: goto label_799ee8;
        case 0x799eecu: goto label_799eec;
        case 0x799ef0u: goto label_799ef0;
        case 0x799ef4u: goto label_799ef4;
        case 0x799ef8u: goto label_799ef8;
        case 0x799efcu: goto label_799efc;
        case 0x799f00u: goto label_799f00;
        case 0x799f04u: goto label_799f04;
        case 0x799f08u: goto label_799f08;
        case 0x799f0cu: goto label_799f0c;
        case 0x799f10u: goto label_799f10;
        case 0x799f14u: goto label_799f14;
        case 0x799f18u: goto label_799f18;
        case 0x799f1cu: goto label_799f1c;
        case 0x799f20u: goto label_799f20;
        case 0x799f24u: goto label_799f24;
        case 0x799f28u: goto label_799f28;
        case 0x799f2cu: goto label_799f2c;
        case 0x799f30u: goto label_799f30;
        case 0x799f34u: goto label_799f34;
        case 0x799f38u: goto label_799f38;
        case 0x799f3cu: goto label_799f3c;
        case 0x799f40u: goto label_799f40;
        case 0x799f44u: goto label_799f44;
        case 0x799f48u: goto label_799f48;
        case 0x799f4cu: goto label_799f4c;
        case 0x799f50u: goto label_799f50;
        case 0x799f54u: goto label_799f54;
        case 0x799f58u: goto label_799f58;
        case 0x799f5cu: goto label_799f5c;
        case 0x799f60u: goto label_799f60;
        case 0x799f64u: goto label_799f64;
        case 0x799f68u: goto label_799f68;
        case 0x799f6cu: goto label_799f6c;
        case 0x799f70u: goto label_799f70;
        case 0x799f74u: goto label_799f74;
        case 0x799f78u: goto label_799f78;
        case 0x799f7cu: goto label_799f7c;
        case 0x799f80u: goto label_799f80;
        case 0x799f84u: goto label_799f84;
        case 0x799f88u: goto label_799f88;
        case 0x799f8cu: goto label_799f8c;
        case 0x799f90u: goto label_799f90;
        case 0x799f94u: goto label_799f94;
        case 0x799f98u: goto label_799f98;
        case 0x799f9cu: goto label_799f9c;
        case 0x799fa0u: goto label_799fa0;
        case 0x799fa4u: goto label_799fa4;
        case 0x799fa8u: goto label_799fa8;
        case 0x799facu: goto label_799fac;
        case 0x799fb0u: goto label_799fb0;
        case 0x799fb4u: goto label_799fb4;
        case 0x799fb8u: goto label_799fb8;
        case 0x799fbcu: goto label_799fbc;
        case 0x799fc0u: goto label_799fc0;
        case 0x799fc4u: goto label_799fc4;
        case 0x799fc8u: goto label_799fc8;
        case 0x799fccu: goto label_799fcc;
        case 0x799fd0u: goto label_799fd0;
        case 0x799fd4u: goto label_799fd4;
        case 0x799fd8u: goto label_799fd8;
        case 0x799fdcu: goto label_799fdc;
        case 0x799fe0u: goto label_799fe0;
        case 0x799fe4u: goto label_799fe4;
        case 0x799fe8u: goto label_799fe8;
        case 0x799fecu: goto label_799fec;
        case 0x799ff0u: goto label_799ff0;
        case 0x799ff4u: goto label_799ff4;
        case 0x799ff8u: goto label_799ff8;
        case 0x799ffcu: goto label_799ffc;
        case 0x79a000u: goto label_79a000;
        case 0x79a004u: goto label_79a004;
        case 0x79a008u: goto label_79a008;
        case 0x79a00cu: goto label_79a00c;
        case 0x79a010u: goto label_79a010;
        case 0x79a014u: goto label_79a014;
        case 0x79a018u: goto label_79a018;
        case 0x79a01cu: goto label_79a01c;
        case 0x79a020u: goto label_79a020;
        case 0x79a024u: goto label_79a024;
        case 0x79a028u: goto label_79a028;
        case 0x79a02cu: goto label_79a02c;
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
        default: break;
    }

    ctx->pc = 0x799de8u;

label_799de8:
    // 0x799de8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x799de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_799dec:
    // 0x799dec: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_799df0:
    // 0x799df0: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x799df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_799df4:
    // 0x799df4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799df8:
    // 0x799df8: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x799df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_799dfc:
    // 0x799dfc: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_799e00:
    // 0x799e00: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x799e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_799e04:
    // 0x799e04: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x799e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
label_799e08:
    // 0x799e08: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x799e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_799e0c:
    // 0x799e0c: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x799e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_799e10:
    // 0x799e10: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x799e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_799e14:
    // 0x799e14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x799e14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799e18:
    // 0x799e18: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x799e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_799e1c:
    // 0x799e1c: 0x3c120057  lui         $s2, 0x57
    ctx->pc = 0x799e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)87 << 16));
label_799e20:
    // 0x799e20: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x799e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
label_799e24:
    // 0x799e24: 0x26356ab0  addiu       $s5, $s1, 0x6AB0
    ctx->pc = 0x799e24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 27312));
label_799e28:
    // 0x799e28: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x799e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
label_799e2c:
    // 0x799e2c: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x799e2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799e30:
    // 0x799e30: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x799e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
label_799e34:
    // 0x799e34: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799e34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
label_799e38:
    // 0x799e38: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x799e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_799e3c:
    // 0x799e3c: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x799e3cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799e40:
    // 0x799e40: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x799e40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_799e44:
    // 0x799e44: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x799e44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799e48:
    // 0x799e48: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x799e48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_799e4c:
    // 0x799e4c: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x799e4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_799e50:
    // 0x799e50: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_799e54:
    // 0x799e54: 0xc0b56a8  jal         func_2D5AA0
label_799e58:
    if (ctx->pc == 0x799E58u) {
        ctx->pc = 0x799E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E54u;
        // 0x799e58: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E5Cu;
        goto label_799e5c;
    }
    ctx->pc = 0x799E54u;
    SET_GPR_U32(ctx, 31, 0x799E5Cu);
    ctx->pc = 0x799E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E54u;
    // 0x799e58: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799E54u, 0x799E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E5Cu;
label_799e5c:
    // 0x799e5c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_799e60:
    // 0x799e60: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x799e60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
label_799e64:
    // 0x799e64: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_799e68:
    // 0x799e68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799e6c:
    // 0x799e6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799e70:
    // 0x799e70: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799e74:
    // 0x799e74: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_799e78:
    // 0x799e78: 0xc0b0ab8  jal         func_2C2AE0
label_799e7c:
    if (ctx->pc == 0x799E7Cu) {
        ctx->pc = 0x799E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E78u;
        // 0x799e7c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E80u;
        goto label_799e80;
    }
    ctx->pc = 0x799E78u;
    SET_GPR_U32(ctx, 31, 0x799E80u);
    ctx->pc = 0x799E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E78u;
    // 0x799e7c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799E78u, 0x799E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E80u;
label_799e80:
    // 0x799e80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799e84:
    // 0x799e84: 0xc0b0a68  jal         func_2C29A0
label_799e88:
    if (ctx->pc == 0x799E88u) {
        ctx->pc = 0x799E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E84u;
        // 0x799e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E8Cu;
        goto label_799e8c;
    }
    ctx->pc = 0x799E84u;
    SET_GPR_U32(ctx, 31, 0x799E8Cu);
    ctx->pc = 0x799E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E84u;
    // 0x799e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29A0u, 0x799E84u, 0x799E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E8Cu;
label_799e8c:
    // 0x799e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799e90:
    // 0x799e90: 0xc0b0ab8  jal         func_2C2AE0
label_799e94:
    if (ctx->pc == 0x799E94u) {
        ctx->pc = 0x799E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E90u;
        // 0x799e94: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E98u;
        goto label_799e98;
    }
    ctx->pc = 0x799E90u;
    SET_GPR_U32(ctx, 31, 0x799E98u);
    ctx->pc = 0x799E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E90u;
    // 0x799e94: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799E90u, 0x799E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E98u;
label_799e98:
    // 0x799e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799e9c:
    // 0x799e9c: 0xc0b0a68  jal         func_2C29A0
label_799ea0:
    if (ctx->pc == 0x799EA0u) {
        ctx->pc = 0x799EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E9Cu;
        // 0x799ea0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EA4u;
        goto label_799ea4;
    }
    ctx->pc = 0x799E9Cu;
    SET_GPR_U32(ctx, 31, 0x799EA4u);
    ctx->pc = 0x799EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E9Cu;
    // 0x799ea0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29A0u, 0x799E9Cu, 0x799EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EA4u;
label_799ea4:
    // 0x799ea4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799ea8:
    // 0x799ea8: 0xc0b6cac  jal         func_2DB2B0
label_799eac:
    if (ctx->pc == 0x799EACu) {
        ctx->pc = 0x799EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EA8u;
        // 0x799eac: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EB0u;
        goto label_799eb0;
    }
    ctx->pc = 0x799EA8u;
    SET_GPR_U32(ctx, 31, 0x799EB0u);
    ctx->pc = 0x799EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EA8u;
    // 0x799eac: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799EA8u, 0x799EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EB0u;
label_799eb0:
    // 0x799eb0: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x799eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_799eb4:
    // 0x799eb4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x799eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_799eb8:
    // 0x799eb8: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x799eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_799ebc:
    // 0x799ebc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x799ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_799ec0:
    // 0x799ec0: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
label_799ec4:
    // 0x799ec4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x799ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_799ec8:
    // 0x799ec8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_799ecc:
    // 0x799ecc: 0xc0a54b4  jal         func_2952D0
label_799ed0:
    if (ctx->pc == 0x799ED0u) {
        ctx->pc = 0x799ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ECCu;
        // 0x799ed0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799ED4u;
        goto label_799ed4;
    }
    ctx->pc = 0x799ECCu;
    SET_GPR_U32(ctx, 31, 0x799ED4u);
    ctx->pc = 0x799ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ECCu;
    // 0x799ed0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799ECCu, 0x799ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ED4u;
label_799ed4:
    // 0x799ed4: 0x8e23ad80  lw          $v1, -0x5280($s1)
    ctx->pc = 0x799ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946176)));
label_799ed8:
    // 0x799ed8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x799ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_799edc:
    // 0x799edc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x799edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_799ee0:
    // 0x799ee0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_799ee4:
    // 0x799ee4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x799ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_799ee8:
    // 0x799ee8: 0xc0a54b4  jal         func_2952D0
label_799eec:
    if (ctx->pc == 0x799EECu) {
        ctx->pc = 0x799EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EE8u;
        // 0x799eec: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EF0u;
        goto label_799ef0;
    }
    ctx->pc = 0x799EE8u;
    SET_GPR_U32(ctx, 31, 0x799EF0u);
    ctx->pc = 0x799EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EE8u;
    // 0x799eec: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799EE8u, 0x799EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EF0u;
label_799ef0:
    // 0x799ef0: 0x8e23ad80  lw          $v1, -0x5280($s1)
    ctx->pc = 0x799ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946176)));
label_799ef4:
    // 0x799ef4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799ef8:
    // 0x799ef8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x799ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_799efc:
    // 0x799efc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_799f00:
    // 0x799f00: 0xc0a573a  jal         func_295CE8
label_799f04:
    if (ctx->pc == 0x799F04u) {
        ctx->pc = 0x799F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F00u;
        // 0x799f04: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F08u;
        goto label_799f08;
    }
    ctx->pc = 0x799F00u;
    SET_GPR_U32(ctx, 31, 0x799F08u);
    ctx->pc = 0x799F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F00u;
    // 0x799f04: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799F00u, 0x799F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F08u;
label_799f08:
    // 0x799f08: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x799f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799f0c:
    // 0x799f0c: 0xc0a573a  jal         func_295CE8
label_799f10:
    if (ctx->pc == 0x799F10u) {
        ctx->pc = 0x799F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F0Cu;
        // 0x799f10: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F14u;
        goto label_799f14;
    }
    ctx->pc = 0x799F0Cu;
    SET_GPR_U32(ctx, 31, 0x799F14u);
    ctx->pc = 0x799F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F0Cu;
    // 0x799f10: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799F0Cu, 0x799F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F14u;
label_799f14:
    // 0x799f14: 0xc07e804  jal         func_1FA010
label_799f18:
    if (ctx->pc == 0x799F18u) {
        ctx->pc = 0x799F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F14u;
        // 0x799f18: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F1Cu;
        goto label_799f1c;
    }
    ctx->pc = 0x799F14u;
    SET_GPR_U32(ctx, 31, 0x799F1Cu);
    ctx->pc = 0x799F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F14u;
    // 0x799f18: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x799F14u, 0x799F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F1Cu;
label_799f1c:
    // 0x799f1c: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x799f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_799f20:
    // 0x799f20: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_799f24:
    if (ctx->pc == 0x799F24u) {
        ctx->pc = 0x799F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F20u;
        // 0x799f24: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F28u;
        goto label_799f28;
    }
    ctx->pc = 0x799F20u;
    {
        const bool branch_taken_0x799f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F20u;
        // 0x799f24: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f20) {
            ctx->pc = 0x799F4Cu;
            goto label_799f4c;
        }
    }
    ctx->pc = 0x799F28u;
label_799f28:
    // 0x799f28: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x799f28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_799f2c:
    // 0x799f2c: 0xc0a54b4  jal         func_2952D0
label_799f30:
    if (ctx->pc == 0x799F30u) {
        ctx->pc = 0x799F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F2Cu;
        // 0x799f30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F34u;
        goto label_799f34;
    }
    ctx->pc = 0x799F2Cu;
    SET_GPR_U32(ctx, 31, 0x799F34u);
    ctx->pc = 0x799F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F2Cu;
    // 0x799f30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799F2Cu, 0x799F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F34u;
label_799f34:
    // 0x799f34: 0x8e83ad80  lw          $v1, -0x5280($s4)
    ctx->pc = 0x799f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946176)));
label_799f38:
    // 0x799f38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799f3c:
    // 0x799f3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x799f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_799f40:
    // 0x799f40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_799f44:
    // 0x799f44: 0xc0a573a  jal         func_295CE8
label_799f48:
    if (ctx->pc == 0x799F48u) {
        ctx->pc = 0x799F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F44u;
        // 0x799f48: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F4Cu;
        goto label_799f4c;
    }
    ctx->pc = 0x799F44u;
    SET_GPR_U32(ctx, 31, 0x799F4Cu);
    ctx->pc = 0x799F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F44u;
    // 0x799f48: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799F44u, 0x799F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F4Cu;
label_799f4c:
    // 0x799f4c: 0x10000005  b           . + 4 + (0x5 << 2)
label_799f50:
    if (ctx->pc == 0x799F50u) {
        ctx->pc = 0x799F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F4Cu;
        // 0x799f50: 0x27b10070  addiu       $s1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F54u;
        goto label_799f54;
    }
    ctx->pc = 0x799F4Cu;
    {
        const bool branch_taken_0x799f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F4Cu;
        // 0x799f50: 0x27b10070  addiu       $s1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f4c) {
            ctx->pc = 0x799F64u;
            goto label_799f64;
        }
    }
    ctx->pc = 0x799F54u;
label_799f54:
    // 0x799f54: 0x0  nop
    ctx->pc = 0x799f54u;
    // NOP
label_799f58:
    // 0x799f58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799f5c:
    // 0x799f5c: 0xc0b56a8  jal         func_2D5AA0
label_799f60:
    if (ctx->pc == 0x799F60u) {
        ctx->pc = 0x799F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F5Cu;
        // 0x799f60: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F64u;
        goto label_799f64;
    }
    ctx->pc = 0x799F5Cu;
    SET_GPR_U32(ctx, 31, 0x799F64u);
    ctx->pc = 0x799F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F5Cu;
    // 0x799f60: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F5Cu, 0x799F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F64u;
label_799f64:
    // 0x799f64: 0xc1e6a22  jal         func_79A888
label_799f68:
    if (ctx->pc == 0x799F68u) {
        ctx->pc = 0x799F6Cu;
        goto label_799f6c;
    }
    ctx->pc = 0x799F64u;
    SET_GPR_U32(ctx, 31, 0x799F6Cu);
    ctx->pc = 0x79A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A888u, 0x799F64u, 0x799F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F6Cu;
label_799f6c:
    // 0x799f6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_799f70:
    if (ctx->pc == 0x799F70u) {
        ctx->pc = 0x799F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F6Cu;
        // 0x799f70: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F74u;
        goto label_799f74;
    }
    ctx->pc = 0x799F6Cu;
    {
        const bool branch_taken_0x799f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F6Cu;
        // 0x799f70: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f6c) {
            ctx->pc = 0x799F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f58;
        }
    }
    ctx->pc = 0x799F74u;
label_799f74:
    // 0x799f74: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x799f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_799f78:
    // 0x799f78: 0xc0b56a8  jal         func_2D5AA0
label_799f7c:
    if (ctx->pc == 0x799F7Cu) {
        ctx->pc = 0x799F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F78u;
        // 0x799f7c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F80u;
        goto label_799f80;
    }
    ctx->pc = 0x799F78u;
    SET_GPR_U32(ctx, 31, 0x799F80u);
    ctx->pc = 0x799F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F78u;
    // 0x799f7c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F78u, 0x799F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F80u;
label_799f80:
    // 0x799f80: 0x10000004  b           . + 4 + (0x4 << 2)
label_799f84:
    if (ctx->pc == 0x799F84u) {
        ctx->pc = 0x799F88u;
        goto label_799f88;
    }
    ctx->pc = 0x799F80u;
    {
        const bool branch_taken_0x799f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799f80) {
            ctx->pc = 0x799F94u;
            goto label_799f94;
        }
    }
    ctx->pc = 0x799F88u;
label_799f88:
    // 0x799f88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799f8c:
    // 0x799f8c: 0xc0b56a8  jal         func_2D5AA0
label_799f90:
    if (ctx->pc == 0x799F90u) {
        ctx->pc = 0x799F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F8Cu;
        // 0x799f90: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F94u;
        goto label_799f94;
    }
    ctx->pc = 0x799F8Cu;
    SET_GPR_U32(ctx, 31, 0x799F94u);
    ctx->pc = 0x799F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F8Cu;
    // 0x799f90: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F8Cu, 0x799F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F94u;
label_799f94:
    // 0x799f94: 0xc1e6a22  jal         func_79A888
label_799f98:
    if (ctx->pc == 0x799F98u) {
        ctx->pc = 0x799F9Cu;
        goto label_799f9c;
    }
    ctx->pc = 0x799F94u;
    SET_GPR_U32(ctx, 31, 0x799F9Cu);
    ctx->pc = 0x79A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A888u, 0x799F94u, 0x799F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F9Cu;
label_799f9c:
    // 0x799f9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_799fa0:
    if (ctx->pc == 0x799FA0u) {
        ctx->pc = 0x799FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F9Cu;
        // 0x799fa0: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FA4u;
        goto label_799fa4;
    }
    ctx->pc = 0x799F9Cu;
    {
        const bool branch_taken_0x799f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F9Cu;
        // 0x799fa0: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f9c) {
            ctx->pc = 0x799F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f88;
        }
    }
    ctx->pc = 0x799FA4u;
label_799fa4:
    // 0x799fa4: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x799fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_799fa8:
    // 0x799fa8: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x799fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_799fac:
    // 0x799fac: 0x24080021  addiu       $t0, $zero, 0x21
    ctx->pc = 0x799facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_799fb0:
    // 0x799fb0: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x799fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_799fb4:
    // 0x799fb4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x799fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_799fb8:
    // 0x799fb8: 0x26d06ab0  addiu       $s0, $s6, 0x6AB0
    ctx->pc = 0x799fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 27312));
label_799fbc:
    // 0x799fbc: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x799fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
label_799fc0:
    // 0x799fc0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x799fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_799fc4:
    // 0x799fc4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_799fc8:
    // 0x799fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799fcc:
    // 0x799fcc: 0xa3a60040  sb          $a2, 0x40($sp)
    ctx->pc = 0x799fccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
label_799fd0:
    // 0x799fd0: 0xa3a70050  sb          $a3, 0x50($sp)
    ctx->pc = 0x799fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 7));
label_799fd4:
    // 0x799fd4: 0xc0a54b4  jal         func_2952D0
label_799fd8:
    if (ctx->pc == 0x799FD8u) {
        ctx->pc = 0x799FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FD4u;
        // 0x799fd8: 0xa3a80060  sb          $t0, 0x60($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FDCu;
        goto label_799fdc;
    }
    ctx->pc = 0x799FD4u;
    SET_GPR_U32(ctx, 31, 0x799FDCu);
    ctx->pc = 0x799FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FD4u;
    // 0x799fd8: 0xa3a80060  sb          $t0, 0x60($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799FD4u, 0x799FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FDCu;
label_799fdc:
    // 0x799fdc: 0x8e83ad80  lw          $v1, -0x5280($s4)
    ctx->pc = 0x799fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946176)));
label_799fe0:
    // 0x799fe0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799fe4:
    // 0x799fe4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x799fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_799fe8:
    // 0x799fe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_799fec:
    // 0x799fec: 0xc0a573a  jal         func_295CE8
label_799ff0:
    if (ctx->pc == 0x799FF0u) {
        ctx->pc = 0x799FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FECu;
        // 0x799ff0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FF4u;
        goto label_799ff4;
    }
    ctx->pc = 0x799FECu;
    SET_GPR_U32(ctx, 31, 0x799FF4u);
    ctx->pc = 0x799FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FECu;
    // 0x799ff0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799FECu, 0x799FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FF4u;
label_799ff4:
    // 0x799ff4: 0xc07e804  jal         func_1FA010
label_799ff8:
    if (ctx->pc == 0x799FF8u) {
        ctx->pc = 0x799FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FF4u;
        // 0x799ff8: 0x26e49b70  addiu       $a0, $s7, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FFCu;
        goto label_799ffc;
    }
    ctx->pc = 0x799FF4u;
    SET_GPR_U32(ctx, 31, 0x799FFCu);
    ctx->pc = 0x799FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF4u;
    // 0x799ff8: 0x26e49b70  addiu       $a0, $s7, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x799FF4u, 0x799FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FFCu;
label_799ffc:
    // 0x799ffc: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x799ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_79a000:
    // 0x79a000: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_79a004:
    if (ctx->pc == 0x79A004u) {
        ctx->pc = 0x79A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A000u;
        // 0x79a004: 0x93a50030  lbu         $a1, 0x30($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A008u;
        goto label_79a008;
    }
    ctx->pc = 0x79A000u;
    {
        const bool branch_taken_0x79a000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A000u;
        // 0x79a004: 0x93a50030  lbu         $a1, 0x30($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a000) {
            ctx->pc = 0x79A058u;
            goto label_79a058;
        }
    }
    ctx->pc = 0x79A008u;
label_79a008:
    // 0x79a008: 0x93a50050  lbu         $a1, 0x50($sp)
    ctx->pc = 0x79a008u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_79a00c:
    // 0x79a00c: 0xc0a54b4  jal         func_2952D0
label_79a010:
    if (ctx->pc == 0x79A010u) {
        ctx->pc = 0x79A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A00Cu;
        // 0x79a010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A014u;
        goto label_79a014;
    }
    ctx->pc = 0x79A00Cu;
    SET_GPR_U32(ctx, 31, 0x79A014u);
    ctx->pc = 0x79A010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A00Cu;
    // 0x79a010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A00Cu, 0x79A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A014u;
label_79a014:
    // 0x79a014: 0x8e83ad80  lw          $v1, -0x5280($s4)
    ctx->pc = 0x79a014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946176)));
label_79a018:
    // 0x79a018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a01c:
    // 0x79a01c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a020:
    // 0x79a020: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79a024:
    // 0x79a024: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79a024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79a028:
    // 0x79a028: 0xc0a54b4  jal         func_2952D0
label_79a02c:
    if (ctx->pc == 0x79A02Cu) {
        ctx->pc = 0x79A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A028u;
        // 0x79a02c: 0x93a50060  lbu         $a1, 0x60($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A030u;
        goto label_79a030;
    }
    ctx->pc = 0x79A028u;
    SET_GPR_U32(ctx, 31, 0x79A030u);
    ctx->pc = 0x79A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A028u;
    // 0x79a02c: 0x93a50060  lbu         $a1, 0x60($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A028u, 0x79A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A030u;
label_79a030:
    // 0x79a030: 0x8e83ad80  lw          $v1, -0x5280($s4)
    ctx->pc = 0x79a030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946176)));
label_79a034:
    // 0x79a034: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x79a034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_79a038:
    // 0x79a038: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a03c:
    // 0x79a03c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79a040:
    // 0x79a040: 0xc0a573a  jal         func_295CE8
label_79a044:
    if (ctx->pc == 0x79A044u) {
        ctx->pc = 0x79A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A040u;
        // 0x79a044: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A048u;
        goto label_79a048;
    }
    ctx->pc = 0x79A040u;
    SET_GPR_U32(ctx, 31, 0x79A048u);
    ctx->pc = 0x79A044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A040u;
    // 0x79a044: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A040u, 0x79A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A048u;
label_79a048:
    // 0x79a048: 0xc0a573a  jal         func_295CE8
label_79a04c:
    if (ctx->pc == 0x79A04Cu) {
        ctx->pc = 0x79A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A048u;
        // 0x79a04c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A050u;
        goto label_79a050;
    }
    ctx->pc = 0x79A048u;
    SET_GPR_U32(ctx, 31, 0x79A050u);
    ctx->pc = 0x79A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A048u;
    // 0x79a04c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A048u, 0x79A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A050u;
label_79a050:
    // 0x79a050: 0x10000018  b           . + 4 + (0x18 << 2)
label_79a054:
    if (ctx->pc == 0x79A054u) {
        ctx->pc = 0x79A058u;
        goto label_79a058;
    }
    ctx->pc = 0x79A050u;
    {
        const bool branch_taken_0x79a050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a050) {
            ctx->pc = 0x79A0B4u;
            goto label_79a0b4;
        }
    }
    ctx->pc = 0x79A058u;
label_79a058:
    // 0x79a058: 0xc0a54b4  jal         func_2952D0
label_79a05c:
    if (ctx->pc == 0x79A05Cu) {
        ctx->pc = 0x79A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A058u;
        // 0x79a05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A060u;
        goto label_79a060;
    }
    ctx->pc = 0x79A058u;
    SET_GPR_U32(ctx, 31, 0x79A060u);
    ctx->pc = 0x79A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A058u;
    // 0x79a05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A058u, 0x79A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A060u;
label_79a060:
    // 0x79a060: 0x8e83ad80  lw          $v1, -0x5280($s4)
    ctx->pc = 0x79a060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946176)));
label_79a064:
    // 0x79a064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a068:
    // 0x79a068: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a06c:
    // 0x79a06c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79a070:
    // 0x79a070: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79a070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79a074:
    // 0x79a074: 0xc0a54b4  jal         func_2952D0
label_79a078:
    if (ctx->pc == 0x79A078u) {
        ctx->pc = 0x79A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A074u;
        // 0x79a078: 0x93a50040  lbu         $a1, 0x40($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A07Cu;
        goto label_79a07c;
    }
    ctx->pc = 0x79A074u;
    SET_GPR_U32(ctx, 31, 0x79A07Cu);
    ctx->pc = 0x79A078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A074u;
    // 0x79a078: 0x93a50040  lbu         $a1, 0x40($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A074u, 0x79A07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A07Cu;
label_79a07c:
    // 0x79a07c: 0x8e83ad80  lw          $v1, -0x5280($s4)
    ctx->pc = 0x79a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946176)));
label_79a080:
    // 0x79a080: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x79a080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_79a084:
    // 0x79a084: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a088:
    // 0x79a088: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79a08c:
    // 0x79a08c: 0xc0a573a  jal         func_295CE8
label_79a090:
    if (ctx->pc == 0x79A090u) {
        ctx->pc = 0x79A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A08Cu;
        // 0x79a090: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A094u;
        goto label_79a094;
    }
    ctx->pc = 0x79A08Cu;
    SET_GPR_U32(ctx, 31, 0x79A094u);
    ctx->pc = 0x79A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A08Cu;
    // 0x79a090: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A08Cu, 0x79A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A094u;
label_79a094:
    // 0x79a094: 0xc0a573a  jal         func_295CE8
label_79a098:
    if (ctx->pc == 0x79A098u) {
        ctx->pc = 0x79A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A094u;
        // 0x79a098: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A09Cu;
        goto label_79a09c;
    }
    ctx->pc = 0x79A094u;
    SET_GPR_U32(ctx, 31, 0x79A09Cu);
    ctx->pc = 0x79A098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A094u;
    // 0x79a098: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A094u, 0x79A09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A09Cu;
label_79a09c:
    // 0x79a09c: 0x10000005  b           . + 4 + (0x5 << 2)
label_79a0a0:
    if (ctx->pc == 0x79A0A0u) {
        ctx->pc = 0x79A0A4u;
        goto label_79a0a4;
    }
    ctx->pc = 0x79A09Cu;
    {
        const bool branch_taken_0x79a09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a09c) {
            ctx->pc = 0x79A0B4u;
            goto label_79a0b4;
        }
    }
    ctx->pc = 0x79A0A4u;
label_79a0a4:
    // 0x79a0a4: 0x0  nop
    ctx->pc = 0x79a0a4u;
    // NOP
label_79a0a8:
    // 0x79a0a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a0ac:
    // 0x79a0ac: 0xc0b56a8  jal         func_2D5AA0
label_79a0b0:
    if (ctx->pc == 0x79A0B0u) {
        ctx->pc = 0x79A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0ACu;
        // 0x79a0b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0B4u;
        goto label_79a0b4;
    }
    ctx->pc = 0x79A0ACu;
    SET_GPR_U32(ctx, 31, 0x79A0B4u);
    ctx->pc = 0x79A0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0ACu;
    // 0x79a0b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A0ACu, 0x79A0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0B4u;
label_79a0b4:
    // 0x79a0b4: 0xc1e6a22  jal         func_79A888
label_79a0b8:
    if (ctx->pc == 0x79A0B8u) {
        ctx->pc = 0x79A0BCu;
        goto label_79a0bc;
    }
    ctx->pc = 0x79A0B4u;
    SET_GPR_U32(ctx, 31, 0x79A0BCu);
    ctx->pc = 0x79A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A888u, 0x79A0B4u, 0x79A0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0BCu;
label_79a0bc:
    // 0x79a0bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_79a0c0:
    if (ctx->pc == 0x79A0C0u) {
        ctx->pc = 0x79A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0BCu;
        // 0x79a0c0: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0C4u;
        goto label_79a0c4;
    }
    ctx->pc = 0x79A0BCu;
    {
        const bool branch_taken_0x79a0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0BCu;
        // 0x79a0c0: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0bc) {
            ctx->pc = 0x79A0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0a8;
        }
    }
    ctx->pc = 0x79A0C4u;
label_79a0c4:
    // 0x79a0c4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x79a0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_79a0c8:
    // 0x79a0c8: 0xc0b56a8  jal         func_2D5AA0
label_79a0cc:
    if (ctx->pc == 0x79A0CCu) {
        ctx->pc = 0x79A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0C8u;
        // 0x79a0cc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0D0u;
        goto label_79a0d0;
    }
    ctx->pc = 0x79A0C8u;
    SET_GPR_U32(ctx, 31, 0x79A0D0u);
    ctx->pc = 0x79A0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0C8u;
    // 0x79a0cc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A0C8u, 0x79A0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0D0u;
label_79a0d0:
    // 0x79a0d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_79a0d4:
    if (ctx->pc == 0x79A0D4u) {
        ctx->pc = 0x79A0D8u;
        goto label_79a0d8;
    }
    ctx->pc = 0x79A0D0u;
    {
        const bool branch_taken_0x79a0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a0d0) {
            ctx->pc = 0x79A0E4u;
            goto label_79a0e4;
        }
    }
    ctx->pc = 0x79A0D8u;
label_79a0d8:
    // 0x79a0d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a0dc:
    // 0x79a0dc: 0xc0b56a8  jal         func_2D5AA0
label_79a0e0:
    if (ctx->pc == 0x79A0E0u) {
        ctx->pc = 0x79A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0DCu;
        // 0x79a0e0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0E4u;
        goto label_79a0e4;
    }
    ctx->pc = 0x79A0DCu;
    SET_GPR_U32(ctx, 31, 0x79A0E4u);
    ctx->pc = 0x79A0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0DCu;
    // 0x79a0e0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A0DCu, 0x79A0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0E4u;
label_79a0e4:
    // 0x79a0e4: 0xc1e6a22  jal         func_79A888
label_79a0e8:
    if (ctx->pc == 0x79A0E8u) {
        ctx->pc = 0x79A0ECu;
        goto label_79a0ec;
    }
    ctx->pc = 0x79A0E4u;
    SET_GPR_U32(ctx, 31, 0x79A0ECu);
    ctx->pc = 0x79A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A888u, 0x79A0E4u, 0x79A0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0ECu;
label_79a0ec:
    // 0x79a0ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_79a0f0:
    if (ctx->pc == 0x79A0F0u) {
        ctx->pc = 0x79A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0ECu;
        // 0x79a0f0: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0F4u;
        goto label_79a0f4;
    }
    ctx->pc = 0x79A0ECu;
    {
        const bool branch_taken_0x79a0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0ECu;
        // 0x79a0f0: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0ec) {
            ctx->pc = 0x79A0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0d8;
        }
    }
    ctx->pc = 0x79A0F4u;
label_79a0f4:
    // 0x79a0f4: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x79a0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_79a0f8:
    // 0x79a0f8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x79a0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_79a0fc:
    // 0x79a0fc: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x79a0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_79a100:
    // 0x79a100: 0x2408001d  addiu       $t0, $zero, 0x1D
    ctx->pc = 0x79a100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_79a104:
    // 0x79a104: 0x24090024  addiu       $t1, $zero, 0x24
    ctx->pc = 0x79a104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_79a108:
    // 0x79a108: 0x240a0025  addiu       $t2, $zero, 0x25
    ctx->pc = 0x79a108u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_79a10c:
    // 0x79a10c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x79a10cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_79a110:
    // 0x79a110: 0x26d06ab0  addiu       $s0, $s6, 0x6AB0
    ctx->pc = 0x79a110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 27312));
label_79a114:
    // 0x79a114: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x79a114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_79a118:
    // 0x79a118: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x79a118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_79a11c:
    // 0x79a11c: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79a11cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
label_79a120:
    // 0x79a120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a124:
    // 0x79a124: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a124u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_79a128:
    // 0x79a128: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x79a128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_79a12c:
    // 0x79a12c: 0xa3a60070  sb          $a2, 0x70($sp)
    ctx->pc = 0x79a12cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 6));
label_79a130:
    // 0x79a130: 0xa3a70080  sb          $a3, 0x80($sp)
    ctx->pc = 0x79a130u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 7));
label_79a134:
    // 0x79a134: 0xa3a80090  sb          $t0, 0x90($sp)
    ctx->pc = 0x79a134u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 8));
label_79a138:
    // 0x79a138: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x79a138u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
label_79a13c:
    // 0x79a13c: 0xc0a54b4  jal         func_2952D0
label_79a140:
    if (ctx->pc == 0x79A140u) {
        ctx->pc = 0x79A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A13Cu;
        // 0x79a140: 0xa3aa00b0  sb          $t2, 0xB0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A144u;
        goto label_79a144;
    }
    ctx->pc = 0x79A13Cu;
    SET_GPR_U32(ctx, 31, 0x79A144u);
    ctx->pc = 0x79A140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A13Cu;
    // 0x79a140: 0xa3aa00b0  sb          $t2, 0xB0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A13Cu, 0x79A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A144u;
label_79a144:
    // 0x79a144: 0x8e83ad80  lw          $v1, -0x5280($s4)
    ctx->pc = 0x79a144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946176)));
label_79a148:
    // 0x79a148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a14c:
    // 0x79a14c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a150:
    // 0x79a150: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79a154:
    // 0x79a154: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79a154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79a158:
    // 0x79a158: 0xc0a54b4  jal         func_2952D0
label_79a15c:
    if (ctx->pc == 0x79A15Cu) {
        ctx->pc = 0x79A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A158u;
        // 0x79a15c: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A160u;
        goto label_79a160;
    }
    ctx->pc = 0x79A158u;
    SET_GPR_U32(ctx, 31, 0x79A160u);
    ctx->pc = 0x79A15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A158u;
    // 0x79a15c: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A158u, 0x79A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A160u;
label_79a160:
    // 0x79a160: 0x8e83ad80  lw          $v1, -0x5280($s4)
    ctx->pc = 0x79a160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946176)));
label_79a164:
    // 0x79a164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a168:
    // 0x79a168: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a16c:
    // 0x79a16c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79a170:
    // 0x79a170: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79a170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79a174:
    // 0x79a174: 0xc0a54b4  jal         func_2952D0
label_79a178:
    if (ctx->pc == 0x79A178u) {
        ctx->pc = 0x79A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A174u;
        // 0x79a178: 0x93a50020  lbu         $a1, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A17Cu;
        goto label_79a17c;
    }
    ctx->pc = 0x79A174u;
    SET_GPR_U32(ctx, 31, 0x79A17Cu);
    ctx->pc = 0x79A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A174u;
    // 0x79a178: 0x93a50020  lbu         $a1, 0x20($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A174u, 0x79A17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A17Cu;
label_79a17c:
    // 0x79a17c: 0x8e83ad80  lw          $v1, -0x5280($s4)
    ctx->pc = 0x79a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946176)));
label_79a180:
    // 0x79a180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a184:
    // 0x79a184: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a188:
    // 0x79a188: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79a18c:
    // 0x79a18c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79a18cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79a190:
    // 0x79a190: 0xc0a54b4  jal         func_2952D0
label_79a194:
    if (ctx->pc == 0x79A194u) {
        ctx->pc = 0x79A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A190u;
        // 0x79a194: 0x93a50070  lbu         $a1, 0x70($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A198u;
        goto label_79a198;
    }
    ctx->pc = 0x79A190u;
    SET_GPR_U32(ctx, 31, 0x79A198u);
    ctx->pc = 0x79A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A190u;
    // 0x79a194: 0x93a50070  lbu         $a1, 0x70($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A190u, 0x79A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A198u;
label_79a198:
    // 0x79a198: 0x8e83ad80  lw          $v1, -0x5280($s4)
    ctx->pc = 0x79a198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946176)));
label_79a19c:
    // 0x79a19c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a1a0:
    // 0x79a1a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a1a4:
    // 0x79a1a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79a1a8:
    // 0x79a1a8: 0xc0a573a  jal         func_295CE8
label_79a1ac:
    if (ctx->pc == 0x79A1ACu) {
        ctx->pc = 0x79A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1A8u;
        // 0x79a1ac: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1B0u;
        goto label_79a1b0;
    }
    ctx->pc = 0x79A1A8u;
    SET_GPR_U32(ctx, 31, 0x79A1B0u);
    ctx->pc = 0x79A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1A8u;
    // 0x79a1ac: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A1A8u, 0x79A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1B0u;
label_79a1b0:
    // 0x79a1b0: 0xc0a573a  jal         func_295CE8
label_79a1b4:
    if (ctx->pc == 0x79A1B4u) {
        ctx->pc = 0x79A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1B0u;
        // 0x79a1b4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1B8u;
        goto label_79a1b8;
    }
    ctx->pc = 0x79A1B0u;
    SET_GPR_U32(ctx, 31, 0x79A1B8u);
    ctx->pc = 0x79A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1B0u;
    // 0x79a1b4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A1B0u, 0x79A1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1B8u;
label_79a1b8:
    // 0x79a1b8: 0xc0a573a  jal         func_295CE8
label_79a1bc:
    if (ctx->pc == 0x79A1BCu) {
        ctx->pc = 0x79A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1B8u;
        // 0x79a1bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1C0u;
        goto label_79a1c0;
    }
    ctx->pc = 0x79A1B8u;
    SET_GPR_U32(ctx, 31, 0x79A1C0u);
    ctx->pc = 0x79A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1B8u;
    // 0x79a1bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A1B8u, 0x79A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1C0u;
label_79a1c0:
    // 0x79a1c0: 0xc0a573a  jal         func_295CE8
label_79a1c4:
    if (ctx->pc == 0x79A1C4u) {
        ctx->pc = 0x79A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1C0u;
        // 0x79a1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1C8u;
        goto label_79a1c8;
    }
    ctx->pc = 0x79A1C0u;
    SET_GPR_U32(ctx, 31, 0x79A1C8u);
    ctx->pc = 0x79A1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1C0u;
    // 0x79a1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A1C0u, 0x79A1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1C8u;
label_79a1c8:
    // 0x79a1c8: 0xc07e804  jal         func_1FA010
label_79a1cc:
    if (ctx->pc == 0x79A1CCu) {
        ctx->pc = 0x79A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1C8u;
        // 0x79a1cc: 0x26e49b70  addiu       $a0, $s7, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1D0u;
        goto label_79a1d0;
    }
    ctx->pc = 0x79A1C8u;
    SET_GPR_U32(ctx, 31, 0x79A1D0u);
    ctx->pc = 0x79A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1C8u;
    // 0x79a1cc: 0x26e49b70  addiu       $a0, $s7, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x79A1C8u, 0x79A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1D0u;
label_79a1d0:
    // 0x79a1d0: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x79a1d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_79a1d4:
    // 0x79a1d4: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_79a1d8:
    if (ctx->pc == 0x79A1D8u) {
        ctx->pc = 0x79A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1D4u;
        // 0x79a1d8: 0x93a50080  lbu         $a1, 0x80($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1DCu;
        goto label_79a1dc;
    }
    ctx->pc = 0x79A1D4u;
    {
        const bool branch_taken_0x79a1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1D4u;
        // 0x79a1d8: 0x93a50080  lbu         $a1, 0x80($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1d4) {
            ctx->pc = 0x79A27Cu;
            goto label_79a27c;
        }
    }
    ctx->pc = 0x79A1DCu;
label_79a1dc:
    // 0x79a1dc: 0xc0a54b4  jal         func_2952D0
label_79a1e0:
    if (ctx->pc == 0x79A1E0u) {
        ctx->pc = 0x79A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1DCu;
        // 0x79a1e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1E4u;
        goto label_79a1e4;
    }
    ctx->pc = 0x79A1DCu;
    SET_GPR_U32(ctx, 31, 0x79A1E4u);
    ctx->pc = 0x79A1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1DCu;
    // 0x79a1e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A1DCu, 0x79A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1E4u;
label_79a1e4:
    // 0x79a1e4: 0x8e83ad80  lw          $v1, -0x5280($s4)
    ctx->pc = 0x79a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946176)));
label_79a1e8:
    // 0x79a1e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a1ec:
    // 0x79a1ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a1f0:
    // 0x79a1f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79a1f4:
    // 0x79a1f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79a1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79a1f8:
    // 0x79a1f8: 0xc0a54b4  jal         func_2952D0
label_79a1fc:
    if (ctx->pc == 0x79A1FCu) {
        ctx->pc = 0x79A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1F8u;
        // 0x79a1fc: 0x93a50090  lbu         $a1, 0x90($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A200u;
        goto label_79a200;
    }
    ctx->pc = 0x79A1F8u;
    SET_GPR_U32(ctx, 31, 0x79A200u);
    ctx->pc = 0x79A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1F8u;
    // 0x79a1fc: 0x93a50090  lbu         $a1, 0x90($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A1F8u, 0x79A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A200u;
label_79a200:
    // 0x79a200: 0x8e83ad80  lw          $v1, -0x5280($s4)
    ctx->pc = 0x79a200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946176)));
label_79a204:
    // 0x79a204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a208:
    // 0x79a208: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a20c:
    // 0x79a20c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79a210:
    // 0x79a210: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79a210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79a214:
    // 0x79a214: 0xc0a54b4  jal         func_2952D0
label_79a218:
    if (ctx->pc == 0x79A218u) {
        ctx->pc = 0x79A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A214u;
        // 0x79a218: 0x93a500a0  lbu         $a1, 0xA0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A21Cu;
        goto label_79a21c;
    }
    ctx->pc = 0x79A214u;
    SET_GPR_U32(ctx, 31, 0x79A21Cu);
    ctx->pc = 0x79A218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A214u;
    // 0x79a218: 0x93a500a0  lbu         $a1, 0xA0($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A214u, 0x79A21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A21Cu;
label_79a21c:
    // 0x79a21c: 0x8e83ad80  lw          $v1, -0x5280($s4)
    ctx->pc = 0x79a21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946176)));
label_79a220:
    // 0x79a220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a224:
    // 0x79a224: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a228:
    // 0x79a228: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79a22c:
    // 0x79a22c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79a22cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79a230:
    // 0x79a230: 0xc0a54b4  jal         func_2952D0
label_79a234:
    if (ctx->pc == 0x79A234u) {
        ctx->pc = 0x79A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A230u;
        // 0x79a234: 0x93a500b0  lbu         $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A238u;
        goto label_79a238;
    }
    ctx->pc = 0x79A230u;
    SET_GPR_U32(ctx, 31, 0x79A238u);
    ctx->pc = 0x79A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A230u;
    // 0x79a234: 0x93a500b0  lbu         $a1, 0xB0($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A230u, 0x79A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A238u;
label_79a238:
    // 0x79a238: 0x8e83ad80  lw          $v1, -0x5280($s4)
    ctx->pc = 0x79a238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946176)));
label_79a23c:
    // 0x79a23c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x79a23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_79a240:
    // 0x79a240: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a244:
    // 0x79a244: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79a248:
    // 0x79a248: 0xc0a573a  jal         func_295CE8
label_79a24c:
    if (ctx->pc == 0x79A24Cu) {
        ctx->pc = 0x79A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A248u;
        // 0x79a24c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A250u;
        goto label_79a250;
    }
    ctx->pc = 0x79A248u;
    SET_GPR_U32(ctx, 31, 0x79A250u);
    ctx->pc = 0x79A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A248u;
    // 0x79a24c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A248u, 0x79A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A250u;
label_79a250:
    // 0x79a250: 0xc0a573a  jal         func_295CE8
label_79a254:
    if (ctx->pc == 0x79A254u) {
        ctx->pc = 0x79A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A250u;
        // 0x79a254: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A258u;
        goto label_79a258;
    }
    ctx->pc = 0x79A250u;
    SET_GPR_U32(ctx, 31, 0x79A258u);
    ctx->pc = 0x79A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A250u;
    // 0x79a254: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A250u, 0x79A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A258u;
label_79a258:
    // 0x79a258: 0xc0a573a  jal         func_295CE8
label_79a25c:
    if (ctx->pc == 0x79A25Cu) {
        ctx->pc = 0x79A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A258u;
        // 0x79a25c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A260u;
        goto label_79a260;
    }
    ctx->pc = 0x79A258u;
    SET_GPR_U32(ctx, 31, 0x79A260u);
    ctx->pc = 0x79A25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A258u;
    // 0x79a25c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A258u, 0x79A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A260u;
label_79a260:
    // 0x79a260: 0xc0a573a  jal         func_295CE8
label_79a264:
    if (ctx->pc == 0x79A264u) {
        ctx->pc = 0x79A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A260u;
        // 0x79a264: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A268u;
        goto label_79a268;
    }
    ctx->pc = 0x79A260u;
    SET_GPR_U32(ctx, 31, 0x79A268u);
    ctx->pc = 0x79A264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A260u;
    // 0x79a264: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A260u, 0x79A268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A268u;
label_79a268:
    // 0x79a268: 0x10000004  b           . + 4 + (0x4 << 2)
label_79a26c:
    if (ctx->pc == 0x79A26Cu) {
        ctx->pc = 0x79A270u;
        goto label_79a270;
    }
    ctx->pc = 0x79A268u;
    {
        const bool branch_taken_0x79a268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a268) {
            ctx->pc = 0x79A27Cu;
            goto label_79a27c;
        }
    }
    ctx->pc = 0x79A270u;
label_79a270:
    // 0x79a270: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a274:
    // 0x79a274: 0xc0b56a8  jal         func_2D5AA0
label_79a278:
    if (ctx->pc == 0x79A278u) {
        ctx->pc = 0x79A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A274u;
        // 0x79a278: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A27Cu;
        goto label_79a27c;
    }
    ctx->pc = 0x79A274u;
    SET_GPR_U32(ctx, 31, 0x79A27Cu);
    ctx->pc = 0x79A278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A274u;
    // 0x79a278: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A274u, 0x79A27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A27Cu;
label_79a27c:
    // 0x79a27c: 0xc1e6a22  jal         func_79A888
label_79a280:
    if (ctx->pc == 0x79A280u) {
        ctx->pc = 0x79A284u;
        goto label_79a284;
    }
    ctx->pc = 0x79A27Cu;
    SET_GPR_U32(ctx, 31, 0x79A284u);
    ctx->pc = 0x79A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A888u, 0x79A27Cu, 0x79A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A284u;
label_79a284:
    // 0x79a284: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_79a288:
    if (ctx->pc == 0x79A288u) {
        ctx->pc = 0x79A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A284u;
        // 0x79a288: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A28Cu;
        goto label_79a28c;
    }
    ctx->pc = 0x79A284u;
    {
        const bool branch_taken_0x79a284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A284u;
        // 0x79a288: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a284) {
            ctx->pc = 0x79A270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a270;
        }
    }
    ctx->pc = 0x79A28Cu;
label_79a28c:
    // 0x79a28c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x79a28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_79a290:
    // 0x79a290: 0xc0b56a8  jal         func_2D5AA0
label_79a294:
    if (ctx->pc == 0x79A294u) {
        ctx->pc = 0x79A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A290u;
        // 0x79a294: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A298u;
        goto label_79a298;
    }
    ctx->pc = 0x79A290u;
    SET_GPR_U32(ctx, 31, 0x79A298u);
    ctx->pc = 0x79A294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A290u;
    // 0x79a294: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A290u, 0x79A298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A298u;
label_79a298:
    // 0x79a298: 0x10000004  b           . + 4 + (0x4 << 2)
label_79a29c:
    if (ctx->pc == 0x79A29Cu) {
        ctx->pc = 0x79A2A0u;
        goto label_79a2a0;
    }
    ctx->pc = 0x79A298u;
    {
        const bool branch_taken_0x79a298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a298) {
            ctx->pc = 0x79A2ACu;
            goto label_79a2ac;
        }
    }
    ctx->pc = 0x79A2A0u;
label_79a2a0:
    // 0x79a2a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a2a4:
    // 0x79a2a4: 0xc0b56a8  jal         func_2D5AA0
label_79a2a8:
    if (ctx->pc == 0x79A2A8u) {
        ctx->pc = 0x79A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2A4u;
        // 0x79a2a8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2ACu;
        goto label_79a2ac;
    }
    ctx->pc = 0x79A2A4u;
    SET_GPR_U32(ctx, 31, 0x79A2ACu);
    ctx->pc = 0x79A2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2A4u;
    // 0x79a2a8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A2A4u, 0x79A2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2ACu;
label_79a2ac:
    // 0x79a2ac: 0xc1e6a22  jal         func_79A888
label_79a2b0:
    if (ctx->pc == 0x79A2B0u) {
        ctx->pc = 0x79A2B4u;
        goto label_79a2b4;
    }
    ctx->pc = 0x79A2ACu;
    SET_GPR_U32(ctx, 31, 0x79A2B4u);
    ctx->pc = 0x79A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A888u, 0x79A2ACu, 0x79A2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2B4u;
label_79a2b4:
    // 0x79a2b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_79a2b8:
    if (ctx->pc == 0x79A2B8u) {
        ctx->pc = 0x79A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2B4u;
        // 0x79a2b8: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2BCu;
        goto label_79a2bc;
    }
    ctx->pc = 0x79A2B4u;
    {
        const bool branch_taken_0x79a2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2B4u;
        // 0x79a2b8: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2b4) {
            ctx->pc = 0x79A2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a2a0;
        }
    }
    ctx->pc = 0x79A2BCu;
label_79a2bc:
    // 0x79a2bc: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x79a2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_79a2c0:
    // 0x79a2c0: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x79a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_79a2c4:
    // 0x79a2c4: 0x26d16ab0  addiu       $s1, $s6, 0x6AB0
    ctx->pc = 0x79a2c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 27312));
label_79a2c8:
    // 0x79a2c8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x79a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_79a2cc:
    // 0x79a2cc: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79a2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
label_79a2d0:
    // 0x79a2d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79a2d4:
    // 0x79a2d4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_79a2d8:
    // 0x79a2d8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x79a2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_79a2dc:
    // 0x79a2dc: 0xc0a54b4  jal         func_2952D0
label_79a2e0:
    if (ctx->pc == 0x79A2E0u) {
        ctx->pc = 0x79A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2DCu;
        // 0x79a2e0: 0xa3a60020  sb          $a2, 0x20($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2E4u;
        goto label_79a2e4;
    }
    ctx->pc = 0x79A2DCu;
    SET_GPR_U32(ctx, 31, 0x79A2E4u);
    ctx->pc = 0x79A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2DCu;
    // 0x79a2e0: 0xa3a60020  sb          $a2, 0x20($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A2DCu, 0x79A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2E4u;
label_79a2e4:
    // 0x79a2e4: 0x8e83ad80  lw          $v1, -0x5280($s4)
    ctx->pc = 0x79a2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946176)));
label_79a2e8:
    // 0x79a2e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79a2ec:
    // 0x79a2ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a2f0:
    // 0x79a2f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79a2f4:
    // 0x79a2f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79a2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79a2f8:
    // 0x79a2f8: 0xc0a54b4  jal         func_2952D0
label_79a2fc:
    if (ctx->pc == 0x79A2FCu) {
        ctx->pc = 0x79A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2F8u;
        // 0x79a2fc: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A300u;
        goto label_79a300;
    }
    ctx->pc = 0x79A2F8u;
    SET_GPR_U32(ctx, 31, 0x79A300u);
    ctx->pc = 0x79A2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2F8u;
    // 0x79a2fc: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A2F8u, 0x79A300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A300u;
label_79a300:
    // 0x79a300: 0x8e83ad80  lw          $v1, -0x5280($s4)
    ctx->pc = 0x79a300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946176)));
label_79a304:
    // 0x79a304: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a308:
    // 0x79a308: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a30c:
    // 0x79a30c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79a310:
    // 0x79a310: 0xc0a573a  jal         func_295CE8
label_79a314:
    if (ctx->pc == 0x79A314u) {
        ctx->pc = 0x79A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A310u;
        // 0x79a314: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A318u;
        goto label_79a318;
    }
    ctx->pc = 0x79A310u;
    SET_GPR_U32(ctx, 31, 0x79A318u);
    ctx->pc = 0x79A314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A310u;
    // 0x79a314: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A310u, 0x79A318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A318u;
label_79a318:
    // 0x79a318: 0xc0a573a  jal         func_295CE8
label_79a31c:
    if (ctx->pc == 0x79A31Cu) {
        ctx->pc = 0x79A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A318u;
        // 0x79a31c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A320u;
        goto label_79a320;
    }
    ctx->pc = 0x79A318u;
    SET_GPR_U32(ctx, 31, 0x79A320u);
    ctx->pc = 0x79A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A318u;
    // 0x79a31c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A318u, 0x79A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A320u;
label_79a320:
    // 0x79a320: 0xc07e804  jal         func_1FA010
label_79a324:
    if (ctx->pc == 0x79A324u) {
        ctx->pc = 0x79A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A320u;
        // 0x79a324: 0x26e49b70  addiu       $a0, $s7, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A328u;
        goto label_79a328;
    }
    ctx->pc = 0x79A320u;
    SET_GPR_U32(ctx, 31, 0x79A328u);
    ctx->pc = 0x79A324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A320u;
    // 0x79a324: 0x26e49b70  addiu       $a0, $s7, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x79A320u, 0x79A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A328u;
label_79a328:
    // 0x79a328: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x79a328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_79a32c:
    // 0x79a32c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_79a330:
    if (ctx->pc == 0x79A330u) {
        ctx->pc = 0x79A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A32Cu;
        // 0x79a330: 0x93a50020  lbu         $a1, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A334u;
        goto label_79a334;
    }
    ctx->pc = 0x79A32Cu;
    {
        const bool branch_taken_0x79a32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A32Cu;
        // 0x79a330: 0x93a50020  lbu         $a1, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a32c) {
            ctx->pc = 0x79A36Cu;
            goto label_79a36c;
        }
    }
    ctx->pc = 0x79A334u;
label_79a334:
    // 0x79a334: 0xc0a54b4  jal         func_2952D0
label_79a338:
    if (ctx->pc == 0x79A338u) {
        ctx->pc = 0x79A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A334u;
        // 0x79a338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A33Cu;
        goto label_79a33c;
    }
    ctx->pc = 0x79A334u;
    SET_GPR_U32(ctx, 31, 0x79A33Cu);
    ctx->pc = 0x79A338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A334u;
    // 0x79a338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A334u, 0x79A33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A33Cu;
label_79a33c:
    // 0x79a33c: 0x8e83ad80  lw          $v1, -0x5280($s4)
    ctx->pc = 0x79a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946176)));
label_79a340:
    // 0x79a340: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79a344:
    // 0x79a344: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a348:
    // 0x79a348: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79a34c:
    // 0x79a34c: 0xc0a573a  jal         func_295CE8
label_79a350:
    if (ctx->pc == 0x79A350u) {
        ctx->pc = 0x79A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A34Cu;
        // 0x79a350: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A354u;
        goto label_79a354;
    }
    ctx->pc = 0x79A34Cu;
    SET_GPR_U32(ctx, 31, 0x79A354u);
    ctx->pc = 0x79A350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A34Cu;
    // 0x79a350: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A34Cu, 0x79A354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A354u;
label_79a354:
    // 0x79a354: 0x10000005  b           . + 4 + (0x5 << 2)
label_79a358:
    if (ctx->pc == 0x79A358u) {
        ctx->pc = 0x79A35Cu;
        goto label_79a35c;
    }
    ctx->pc = 0x79A354u;
    {
        const bool branch_taken_0x79a354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a354) {
            ctx->pc = 0x79A36Cu;
            goto label_79a36c;
        }
    }
    ctx->pc = 0x79A35Cu;
label_79a35c:
    // 0x79a35c: 0x0  nop
    ctx->pc = 0x79a35cu;
    // NOP
label_79a360:
    // 0x79a360: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a364:
    // 0x79a364: 0xc0b56a8  jal         func_2D5AA0
label_79a368:
    if (ctx->pc == 0x79A368u) {
        ctx->pc = 0x79A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A364u;
        // 0x79a368: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A36Cu;
        goto label_79a36c;
    }
    ctx->pc = 0x79A364u;
    SET_GPR_U32(ctx, 31, 0x79A36Cu);
    ctx->pc = 0x79A368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A364u;
    // 0x79a368: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A364u, 0x79A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A36Cu;
label_79a36c:
    // 0x79a36c: 0xc1e6a22  jal         func_79A888
label_79a370:
    if (ctx->pc == 0x79A370u) {
        ctx->pc = 0x79A374u;
        goto label_79a374;
    }
    ctx->pc = 0x79A36Cu;
    SET_GPR_U32(ctx, 31, 0x79A374u);
    ctx->pc = 0x79A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A888u, 0x79A36Cu, 0x79A374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A374u;
label_79a374:
    // 0x79a374: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_79a378:
    if (ctx->pc == 0x79A378u) {
        ctx->pc = 0x79A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A374u;
        // 0x79a378: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A37Cu;
        goto label_79a37c;
    }
    ctx->pc = 0x79A374u;
    {
        const bool branch_taken_0x79a374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A374u;
        // 0x79a378: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a374) {
            ctx->pc = 0x79A360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a360;
        }
    }
    ctx->pc = 0x79A37Cu;
label_79a37c:
    // 0x79a37c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x79a37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_79a380:
    // 0x79a380: 0xc0b56a8  jal         func_2D5AA0
label_79a384:
    if (ctx->pc == 0x79A384u) {
        ctx->pc = 0x79A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A380u;
        // 0x79a384: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A388u;
        goto label_79a388;
    }
    ctx->pc = 0x79A380u;
    SET_GPR_U32(ctx, 31, 0x79A388u);
    ctx->pc = 0x79A384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A380u;
    // 0x79a384: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A380u, 0x79A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A388u;
label_79a388:
    // 0x79a388: 0x10000004  b           . + 4 + (0x4 << 2)
label_79a38c:
    if (ctx->pc == 0x79A38Cu) {
        ctx->pc = 0x79A390u;
        goto label_79a390;
    }
    ctx->pc = 0x79A388u;
    {
        const bool branch_taken_0x79a388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a388) {
            ctx->pc = 0x79A39Cu;
            goto label_79a39c;
        }
    }
    ctx->pc = 0x79A390u;
label_79a390:
    // 0x79a390: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a394:
    // 0x79a394: 0xc0b56a8  jal         func_2D5AA0
label_79a398:
    if (ctx->pc == 0x79A398u) {
        ctx->pc = 0x79A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A394u;
        // 0x79a398: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A39Cu;
        goto label_79a39c;
    }
    ctx->pc = 0x79A394u;
    SET_GPR_U32(ctx, 31, 0x79A39Cu);
    ctx->pc = 0x79A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A394u;
    // 0x79a398: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A394u, 0x79A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A39Cu;
label_79a39c:
    // 0x79a39c: 0xc1e6a22  jal         func_79A888
label_79a3a0:
    if (ctx->pc == 0x79A3A0u) {
        ctx->pc = 0x79A3A4u;
        goto label_79a3a4;
    }
    ctx->pc = 0x79A39Cu;
    SET_GPR_U32(ctx, 31, 0x79A3A4u);
    ctx->pc = 0x79A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A888u, 0x79A39Cu, 0x79A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3A4u;
label_79a3a4:
    // 0x79a3a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_79a3a8:
    if (ctx->pc == 0x79A3A8u) {
        ctx->pc = 0x79A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A4u;
        // 0x79a3a8: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3ACu;
        goto label_79a3ac;
    }
    ctx->pc = 0x79A3A4u;
    {
        const bool branch_taken_0x79a3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A4u;
        // 0x79a3a8: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3a4) {
            ctx->pc = 0x79A390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a390;
        }
    }
    ctx->pc = 0x79A3ACu;
label_79a3ac:
    // 0x79a3ac: 0x240403e3  addiu       $a0, $zero, 0x3E3
    ctx->pc = 0x79a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 995));
label_79a3b0:
    // 0x79a3b0: 0xc0c3ea6  jal         func_30FA98
label_79a3b4:
    if (ctx->pc == 0x79A3B4u) {
        ctx->pc = 0x79A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3B0u;
        // 0x79a3b4: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3B8u;
        goto label_79a3b8;
    }
    ctx->pc = 0x79A3B0u;
    SET_GPR_U32(ctx, 31, 0x79A3B8u);
    ctx->pc = 0x79A3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3B0u;
    // 0x79a3b4: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x79A3B0u, 0x79A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3B8u;
label_79a3b8:
    // 0x79a3b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a3bc:
    // 0x79a3bc: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_79a3c0:
    if (ctx->pc == 0x79A3C0u) {
        ctx->pc = 0x79A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3BCu;
        // 0x79a3c0: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3C4u;
        goto label_79a3c4;
    }
    ctx->pc = 0x79A3BCu;
    {
        const bool branch_taken_0x79a3bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3BCu;
        // 0x79a3c0: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3bc) {
            ctx->pc = 0x79A424u;
            goto label_79a424;
        }
    }
    ctx->pc = 0x79A3C4u;
label_79a3c4:
    // 0x79a3c4: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79a3c8:
    // 0x79a3c8: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79a3c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_79a3cc:
    // 0x79a3cc: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x79a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_79a3d0:
    // 0x79a3d0: 0x40f809  jalr        $v0
label_79a3d4:
    if (ctx->pc == 0x79A3D4u) {
        ctx->pc = 0x79A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3D0u;
        // 0x79a3d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3D8u;
        goto label_79a3d8;
    }
    ctx->pc = 0x79A3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A3D8u);
        ctx->pc = 0x79A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3D0u;
        // 0x79a3d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A3D0u, 0x79A3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A3D8u;
label_79a3d8:
    // 0x79a3d8: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79a3dc:
    // 0x79a3dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79a3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a3e0:
    // 0x79a3e0: 0x3c01c119  lui         $at, 0xC119
    ctx->pc = 0x79a3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49433 << 16));
label_79a3e4:
    // 0x79a3e4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79a3e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_79a3e8:
    // 0x79a3e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a3ec:
    // 0x79a3ec: 0x3c01c200  lui         $at, 0xC200
    ctx->pc = 0x79a3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49664 << 16));
label_79a3f0:
    // 0x79a3f0: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x79a3f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_79a3f4:
    // 0x79a3f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a3f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79a3f8:
    // 0x79a3f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79a3fc:
    // 0x79a3fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a3fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79a400:
    // 0x79a400: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x79a400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_79a404:
    // 0x79a404: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x79a404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_79a408:
    // 0x79a408: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x79a408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_79a40c:
    // 0x79a40c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x79a40cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_79a410:
    // 0x79a410: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x79a410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_79a414:
    // 0x79a414: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x79a414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_79a418:
    // 0x79a418: 0x40f809  jalr        $v0
label_79a41c:
    if (ctx->pc == 0x79A41Cu) {
        ctx->pc = 0x79A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A418u;
        // 0x79a41c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A420u;
        goto label_79a420;
    }
    ctx->pc = 0x79A418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A420u);
        ctx->pc = 0x79A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A418u;
        // 0x79a41c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A418u, 0x79A420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A420u;
label_79a420:
    // 0x79a420: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79a420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_79a424:
    // 0x79a424: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x79a424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_79a428:
    // 0x79a428: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79a42c:
    // 0x79a42c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a42cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79a430:
    // 0x79a430: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x79a430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_79a434:
    // 0x79a434: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x79a434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_79a438:
    // 0x79a438: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79a438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_79a43c:
    // 0x79a43c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x79a43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_79a440:
    // 0x79a440: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a440u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_79a444:
    // 0x79a444: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79a444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_79a448:
    // 0x79a448: 0xc0b56a8  jal         func_2D5AA0
label_79a44c:
    if (ctx->pc == 0x79A44Cu) {
        ctx->pc = 0x79A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A448u;
        // 0x79a44c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A450u;
        goto label_79a450;
    }
    ctx->pc = 0x79A448u;
    SET_GPR_U32(ctx, 31, 0x79A450u);
    ctx->pc = 0x79A44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A448u;
    // 0x79a44c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A448u, 0x79A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A450u;
label_79a450:
    // 0x79a450: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x79a450u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_79a454:
    // 0x79a454: 0x0  nop
    ctx->pc = 0x79a454u;
    // NOP
label_79a458:
    // 0x79a458: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x79a458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79a45c:
    // 0x79a45c: 0xc0b6cc6  jal         func_2DB318
label_79a460:
    if (ctx->pc == 0x79A460u) {
        ctx->pc = 0x79A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A45Cu;
        // 0x79a460: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A464u;
        goto label_79a464;
    }
    ctx->pc = 0x79A45Cu;
    SET_GPR_U32(ctx, 31, 0x79A464u);
    ctx->pc = 0x79A460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A45Cu;
    // 0x79a460: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x79A45Cu, 0x79A464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A464u;
label_79a464:
    // 0x79a464: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79a464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_79a468:
    // 0x79a468: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a46c:
    // 0x79a46c: 0xc0b56a8  jal         func_2D5AA0
label_79a470:
    if (ctx->pc == 0x79A470u) {
        ctx->pc = 0x79A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A46Cu;
        // 0x79a470: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A474u;
        goto label_79a474;
    }
    ctx->pc = 0x79A46Cu;
    SET_GPR_U32(ctx, 31, 0x79A474u);
    ctx->pc = 0x79A470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A46Cu;
    // 0x79a470: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A46Cu, 0x79A474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A474u;
label_79a474:
    // 0x79a474: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x79a474u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79a478:
    // 0x79a478: 0x0  nop
    ctx->pc = 0x79a478u;
    // NOP
label_79a47c:
    // 0x79a47c: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
label_79a480:
    if (ctx->pc == 0x79A480u) {
        ctx->pc = 0x79A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A47Cu;
        // 0x79a480: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A484u;
        goto label_79a484;
    }
    ctx->pc = 0x79A47Cu;
    {
        const bool branch_taken_0x79a47c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79a47c) {
            ctx->pc = 0x79A480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A47Cu;
            // 0x79a480: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a458;
        }
    }
    ctx->pc = 0x79A484u;
label_79a484:
    // 0x79a484: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x79a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79a488:
    // 0x79a488: 0xc0b6cac  jal         func_2DB2B0
label_79a48c:
    if (ctx->pc == 0x79A48Cu) {
        ctx->pc = 0x79A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A488u;
        // 0x79a48c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A490u;
        goto label_79a490;
    }
    ctx->pc = 0x79A488u;
    SET_GPR_U32(ctx, 31, 0x79A490u);
    ctx->pc = 0x79A48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A488u;
    // 0x79a48c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79A488u, 0x79A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A490u;
label_79a490:
    // 0x79a490: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79a490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79a494:
    // 0x79a494: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a498:
    // 0x79a498: 0x2450ea60  addiu       $s0, $v0, -0x15A0
    ctx->pc = 0x79a498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
label_79a49c:
    // 0x79a49c: 0xc0b0ab8  jal         func_2C2AE0
label_79a4a0:
    if (ctx->pc == 0x79A4A0u) {
        ctx->pc = 0x79A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A49Cu;
        // 0x79a4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4A4u;
        goto label_79a4a4;
    }
    ctx->pc = 0x79A49Cu;
    SET_GPR_U32(ctx, 31, 0x79A4A4u);
    ctx->pc = 0x79A4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A49Cu;
    // 0x79a4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x79A49Cu, 0x79A4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4A4u;
label_79a4a4:
    // 0x79a4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a4a8:
    // 0x79a4a8: 0xc0b0a3e  jal         func_2C28F8
label_79a4ac:
    if (ctx->pc == 0x79A4ACu) {
        ctx->pc = 0x79A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4A8u;
        // 0x79a4ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4B0u;
        goto label_79a4b0;
    }
    ctx->pc = 0x79A4A8u;
    SET_GPR_U32(ctx, 31, 0x79A4B0u);
    ctx->pc = 0x79A4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4A8u;
    // 0x79a4ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x79A4A8u, 0x79A4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4B0u;
label_79a4b0:
    // 0x79a4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a4b4:
    // 0x79a4b4: 0xc0b0ab8  jal         func_2C2AE0
label_79a4b8:
    if (ctx->pc == 0x79A4B8u) {
        ctx->pc = 0x79A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4B4u;
        // 0x79a4b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4BCu;
        goto label_79a4bc;
    }
    ctx->pc = 0x79A4B4u;
    SET_GPR_U32(ctx, 31, 0x79A4BCu);
    ctx->pc = 0x79A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4B4u;
    // 0x79a4b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x79A4B4u, 0x79A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4BCu;
label_79a4bc:
    // 0x79a4bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a4c0:
    // 0x79a4c0: 0xc0b0a3e  jal         func_2C28F8
label_79a4c4:
    if (ctx->pc == 0x79A4C4u) {
        ctx->pc = 0x79A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4C0u;
        // 0x79a4c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4C8u;
        goto label_79a4c8;
    }
    ctx->pc = 0x79A4C0u;
    SET_GPR_U32(ctx, 31, 0x79A4C8u);
    ctx->pc = 0x79A4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4C0u;
    // 0x79a4c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x79A4C0u, 0x79A4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4C8u;
label_79a4c8:
    // 0x79a4c8: 0x8e632f84  lw          $v1, 0x2F84($s3)
    ctx->pc = 0x79a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_79a4cc:
    // 0x79a4cc: 0xc0b5692  jal         func_2D5A48
label_79a4d0:
    if (ctx->pc == 0x79A4D0u) {
        ctx->pc = 0x79A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4CCu;
        // 0x79a4d0: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4D4u;
        goto label_79a4d4;
    }
    ctx->pc = 0x79A4CCu;
    SET_GPR_U32(ctx, 31, 0x79A4D4u);
    ctx->pc = 0x79A4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4CCu;
    // 0x79a4d0: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A4CCu, 0x79A4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4D4u;
label_79a4d4:
    // 0x79a4d4: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x79a4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_79a4d8:
    // 0x79a4d8: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x79a4d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_79a4dc:
    // 0x79a4dc: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x79a4dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_79a4e0:
    // 0x79a4e0: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x79a4e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_79a4e4:
    // 0x79a4e4: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x79a4e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_79a4e8:
    // 0x79a4e8: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x79a4e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_79a4ec:
    // 0x79a4ec: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x79a4ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_79a4f0:
    // 0x79a4f0: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x79a4f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_79a4f4:
    // 0x79a4f4: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x79a4f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_79a4f8:
    // 0x79a4f8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x79a4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_79a4fc:
    // 0x79a4fc: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x79a4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_79a500:
    // 0x79a500: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x79a500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_79a504:
    // 0x79a504: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x79a504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79a508:
    // 0x79a508: 0x3e00008  jr          $ra
label_79a50c:
    if (ctx->pc == 0x79A50Cu) {
        ctx->pc = 0x79A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A508u;
        // 0x79a50c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A510u;
        goto label_fallthrough_0x79a508;
    }
    ctx->pc = 0x79A508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A508u;
        // 0x79a50c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79a508:
    ctx->pc = 0x79A510u;
}
} // namespace gh_r101
