#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: checkFence0__5cR409
// Address: 0x799d58 - 0x79ade0
void checkFence0__5cR409_0x799d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkFence0__5cR409_0x799d58");
#endif

    switch (ctx->pc) {
        case 0x799d58u: goto label_799d58;
        case 0x799d5cu: goto label_799d5c;
        case 0x799d60u: goto label_799d60;
        case 0x799d64u: goto label_799d64;
        case 0x799d68u: goto label_799d68;
        case 0x799d6cu: goto label_799d6c;
        case 0x799d70u: goto label_799d70;
        case 0x799d74u: goto label_799d74;
        case 0x799d78u: goto label_799d78;
        case 0x799d7cu: goto label_799d7c;
        case 0x799d80u: goto label_799d80;
        case 0x799d84u: goto label_799d84;
        case 0x799d88u: goto label_799d88;
        case 0x799d8cu: goto label_799d8c;
        case 0x799d90u: goto label_799d90;
        case 0x799d94u: goto label_799d94;
        case 0x799d98u: goto label_799d98;
        case 0x799d9cu: goto label_799d9c;
        case 0x799da0u: goto label_799da0;
        case 0x799da4u: goto label_799da4;
        case 0x799da8u: goto label_799da8;
        case 0x799dacu: goto label_799dac;
        case 0x799db0u: goto label_799db0;
        case 0x799db4u: goto label_799db4;
        case 0x799db8u: goto label_799db8;
        case 0x799dbcu: goto label_799dbc;
        case 0x799dc0u: goto label_799dc0;
        case 0x799dc4u: goto label_799dc4;
        case 0x799dc8u: goto label_799dc8;
        case 0x799dccu: goto label_799dcc;
        case 0x799dd0u: goto label_799dd0;
        case 0x799dd4u: goto label_799dd4;
        case 0x799dd8u: goto label_799dd8;
        case 0x799ddcu: goto label_799ddc;
        case 0x799de0u: goto label_799de0;
        case 0x799de4u: goto label_799de4;
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
        case 0x79a888u: goto label_79a888;
        case 0x79a88cu: goto label_79a88c;
        case 0x79a890u: goto label_79a890;
        case 0x79a894u: goto label_79a894;
        case 0x79a898u: goto label_79a898;
        case 0x79a89cu: goto label_79a89c;
        case 0x79a8a0u: goto label_79a8a0;
        case 0x79a8a4u: goto label_79a8a4;
        case 0x79a8a8u: goto label_79a8a8;
        case 0x79a8acu: goto label_79a8ac;
        case 0x79a8b0u: goto label_79a8b0;
        case 0x79a8b4u: goto label_79a8b4;
        case 0x79a8b8u: goto label_79a8b8;
        case 0x79a8bcu: goto label_79a8bc;
        case 0x79a8c0u: goto label_79a8c0;
        case 0x79a8c4u: goto label_79a8c4;
        case 0x79a8c8u: goto label_79a8c8;
        case 0x79a8ccu: goto label_79a8cc;
        case 0x79a8d0u: goto label_79a8d0;
        case 0x79a8d4u: goto label_79a8d4;
        case 0x79a8d8u: goto label_79a8d8;
        case 0x79a8dcu: goto label_79a8dc;
        case 0x79a8e0u: goto label_79a8e0;
        case 0x79a8e4u: goto label_79a8e4;
        case 0x79a8e8u: goto label_79a8e8;
        case 0x79a8ecu: goto label_79a8ec;
        case 0x79a8f0u: goto label_79a8f0;
        case 0x79a8f4u: goto label_79a8f4;
        case 0x79a8f8u: goto label_79a8f8;
        case 0x79a8fcu: goto label_79a8fc;
        case 0x79a900u: goto label_79a900;
        case 0x79a904u: goto label_79a904;
        case 0x79a908u: goto label_79a908;
        case 0x79a90cu: goto label_79a90c;
        case 0x79a910u: goto label_79a910;
        case 0x79a914u: goto label_79a914;
        case 0x79a918u: goto label_79a918;
        case 0x79a91cu: goto label_79a91c;
        case 0x79a920u: goto label_79a920;
        case 0x79a924u: goto label_79a924;
        case 0x79a928u: goto label_79a928;
        case 0x79a92cu: goto label_79a92c;
        case 0x79a930u: goto label_79a930;
        case 0x79a934u: goto label_79a934;
        case 0x79a938u: goto label_79a938;
        case 0x79a93cu: goto label_79a93c;
        case 0x79a940u: goto label_79a940;
        case 0x79a944u: goto label_79a944;
        case 0x79a948u: goto label_79a948;
        case 0x79a94cu: goto label_79a94c;
        case 0x79a950u: goto label_79a950;
        case 0x79a954u: goto label_79a954;
        case 0x79a958u: goto label_79a958;
        case 0x79a95cu: goto label_79a95c;
        case 0x79a960u: goto label_79a960;
        case 0x79a964u: goto label_79a964;
        case 0x79a968u: goto label_79a968;
        case 0x79a96cu: goto label_79a96c;
        case 0x79a970u: goto label_79a970;
        case 0x79a974u: goto label_79a974;
        case 0x79a978u: goto label_79a978;
        case 0x79a97cu: goto label_79a97c;
        case 0x79a980u: goto label_79a980;
        case 0x79a984u: goto label_79a984;
        case 0x79a988u: goto label_79a988;
        case 0x79a98cu: goto label_79a98c;
        case 0x79a990u: goto label_79a990;
        case 0x79a994u: goto label_79a994;
        case 0x79a998u: goto label_79a998;
        case 0x79a99cu: goto label_79a99c;
        case 0x79a9a0u: goto label_79a9a0;
        case 0x79a9a4u: goto label_79a9a4;
        case 0x79a9a8u: goto label_79a9a8;
        case 0x79a9acu: goto label_79a9ac;
        case 0x79a9b0u: goto label_79a9b0;
        case 0x79a9b4u: goto label_79a9b4;
        case 0x79a9b8u: goto label_79a9b8;
        case 0x79a9bcu: goto label_79a9bc;
        case 0x79a9c0u: goto label_79a9c0;
        case 0x79a9c4u: goto label_79a9c4;
        case 0x79a9c8u: goto label_79a9c8;
        case 0x79a9ccu: goto label_79a9cc;
        case 0x79a9d0u: goto label_79a9d0;
        case 0x79a9d4u: goto label_79a9d4;
        case 0x79a9d8u: goto label_79a9d8;
        case 0x79a9dcu: goto label_79a9dc;
        case 0x79a9e0u: goto label_79a9e0;
        case 0x79a9e4u: goto label_79a9e4;
        case 0x79a9e8u: goto label_79a9e8;
        case 0x79a9ecu: goto label_79a9ec;
        case 0x79a9f0u: goto label_79a9f0;
        case 0x79a9f4u: goto label_79a9f4;
        case 0x79a9f8u: goto label_79a9f8;
        case 0x79a9fcu: goto label_79a9fc;
        case 0x79aa00u: goto label_79aa00;
        case 0x79aa04u: goto label_79aa04;
        case 0x79aa08u: goto label_79aa08;
        case 0x79aa0cu: goto label_79aa0c;
        case 0x79aa10u: goto label_79aa10;
        case 0x79aa14u: goto label_79aa14;
        case 0x79aa18u: goto label_79aa18;
        case 0x79aa1cu: goto label_79aa1c;
        case 0x79aa20u: goto label_79aa20;
        case 0x79aa24u: goto label_79aa24;
        case 0x79aa28u: goto label_79aa28;
        case 0x79aa2cu: goto label_79aa2c;
        case 0x79aa30u: goto label_79aa30;
        case 0x79aa34u: goto label_79aa34;
        case 0x79aa38u: goto label_79aa38;
        case 0x79aa3cu: goto label_79aa3c;
        case 0x79aa40u: goto label_79aa40;
        case 0x79aa44u: goto label_79aa44;
        case 0x79aa48u: goto label_79aa48;
        case 0x79aa4cu: goto label_79aa4c;
        case 0x79aa50u: goto label_79aa50;
        case 0x79aa54u: goto label_79aa54;
        case 0x79aa58u: goto label_79aa58;
        case 0x79aa5cu: goto label_79aa5c;
        case 0x79aa60u: goto label_79aa60;
        case 0x79aa64u: goto label_79aa64;
        case 0x79aa68u: goto label_79aa68;
        case 0x79aa6cu: goto label_79aa6c;
        case 0x79aa70u: goto label_79aa70;
        case 0x79aa74u: goto label_79aa74;
        case 0x79aa78u: goto label_79aa78;
        case 0x79aa7cu: goto label_79aa7c;
        case 0x79aa80u: goto label_79aa80;
        case 0x79aa84u: goto label_79aa84;
        case 0x79aa88u: goto label_79aa88;
        case 0x79aa8cu: goto label_79aa8c;
        case 0x79aa90u: goto label_79aa90;
        case 0x79aa94u: goto label_79aa94;
        case 0x79aa98u: goto label_79aa98;
        case 0x79aa9cu: goto label_79aa9c;
        case 0x79aaa0u: goto label_79aaa0;
        case 0x79aaa4u: goto label_79aaa4;
        case 0x79aaa8u: goto label_79aaa8;
        case 0x79aaacu: goto label_79aaac;
        case 0x79aab0u: goto label_79aab0;
        case 0x79aab4u: goto label_79aab4;
        case 0x79aab8u: goto label_79aab8;
        case 0x79aabcu: goto label_79aabc;
        case 0x79aac0u: goto label_79aac0;
        case 0x79aac4u: goto label_79aac4;
        case 0x79aac8u: goto label_79aac8;
        case 0x79aaccu: goto label_79aacc;
        case 0x79aad0u: goto label_79aad0;
        case 0x79aad4u: goto label_79aad4;
        case 0x79aad8u: goto label_79aad8;
        case 0x79aadcu: goto label_79aadc;
        case 0x79aae0u: goto label_79aae0;
        case 0x79aae4u: goto label_79aae4;
        case 0x79aae8u: goto label_79aae8;
        case 0x79aaecu: goto label_79aaec;
        case 0x79aaf0u: goto label_79aaf0;
        case 0x79aaf4u: goto label_79aaf4;
        case 0x79aaf8u: goto label_79aaf8;
        case 0x79aafcu: goto label_79aafc;
        case 0x79ab00u: goto label_79ab00;
        case 0x79ab04u: goto label_79ab04;
        case 0x79ab08u: goto label_79ab08;
        case 0x79ab0cu: goto label_79ab0c;
        case 0x79ab10u: goto label_79ab10;
        case 0x79ab14u: goto label_79ab14;
        case 0x79ab18u: goto label_79ab18;
        case 0x79ab1cu: goto label_79ab1c;
        case 0x79ab20u: goto label_79ab20;
        case 0x79ab24u: goto label_79ab24;
        case 0x79ab28u: goto label_79ab28;
        case 0x79ab2cu: goto label_79ab2c;
        case 0x79ab30u: goto label_79ab30;
        case 0x79ab34u: goto label_79ab34;
        case 0x79ab38u: goto label_79ab38;
        case 0x79ab3cu: goto label_79ab3c;
        case 0x79ab40u: goto label_79ab40;
        case 0x79ab44u: goto label_79ab44;
        case 0x79ab48u: goto label_79ab48;
        case 0x79ab4cu: goto label_79ab4c;
        case 0x79ab50u: goto label_79ab50;
        case 0x79ab54u: goto label_79ab54;
        case 0x79ab58u: goto label_79ab58;
        case 0x79ab5cu: goto label_79ab5c;
        case 0x79ab60u: goto label_79ab60;
        case 0x79ab64u: goto label_79ab64;
        case 0x79ab68u: goto label_79ab68;
        case 0x79ab6cu: goto label_79ab6c;
        case 0x79ab70u: goto label_79ab70;
        case 0x79ab74u: goto label_79ab74;
        case 0x79ab78u: goto label_79ab78;
        case 0x79ab7cu: goto label_79ab7c;
        case 0x79ab80u: goto label_79ab80;
        case 0x79ab84u: goto label_79ab84;
        case 0x79ab88u: goto label_79ab88;
        case 0x79ab8cu: goto label_79ab8c;
        case 0x79ab90u: goto label_79ab90;
        case 0x79ab94u: goto label_79ab94;
        case 0x79ab98u: goto label_79ab98;
        case 0x79ab9cu: goto label_79ab9c;
        case 0x79aba0u: goto label_79aba0;
        case 0x79aba4u: goto label_79aba4;
        case 0x79aba8u: goto label_79aba8;
        case 0x79abacu: goto label_79abac;
        case 0x79abb0u: goto label_79abb0;
        case 0x79abb4u: goto label_79abb4;
        case 0x79abb8u: goto label_79abb8;
        case 0x79abbcu: goto label_79abbc;
        case 0x79abc0u: goto label_79abc0;
        case 0x79abc4u: goto label_79abc4;
        case 0x79abc8u: goto label_79abc8;
        case 0x79abccu: goto label_79abcc;
        case 0x79abd0u: goto label_79abd0;
        case 0x79abd4u: goto label_79abd4;
        case 0x79abd8u: goto label_79abd8;
        case 0x79abdcu: goto label_79abdc;
        case 0x79abe0u: goto label_79abe0;
        case 0x79abe4u: goto label_79abe4;
        case 0x79abe8u: goto label_79abe8;
        case 0x79abecu: goto label_79abec;
        case 0x79abf0u: goto label_79abf0;
        case 0x79abf4u: goto label_79abf4;
        case 0x79abf8u: goto label_79abf8;
        case 0x79abfcu: goto label_79abfc;
        case 0x79ac00u: goto label_79ac00;
        case 0x79ac04u: goto label_79ac04;
        case 0x79ac08u: goto label_79ac08;
        case 0x79ac0cu: goto label_79ac0c;
        case 0x79ac10u: goto label_79ac10;
        case 0x79ac14u: goto label_79ac14;
        case 0x79ac18u: goto label_79ac18;
        case 0x79ac1cu: goto label_79ac1c;
        case 0x79ac20u: goto label_79ac20;
        case 0x79ac24u: goto label_79ac24;
        case 0x79ac28u: goto label_79ac28;
        case 0x79ac2cu: goto label_79ac2c;
        case 0x79ac30u: goto label_79ac30;
        case 0x79ac34u: goto label_79ac34;
        case 0x79ac38u: goto label_79ac38;
        case 0x79ac3cu: goto label_79ac3c;
        case 0x79ac40u: goto label_79ac40;
        case 0x79ac44u: goto label_79ac44;
        case 0x79ac48u: goto label_79ac48;
        case 0x79ac4cu: goto label_79ac4c;
        case 0x79ac50u: goto label_79ac50;
        case 0x79ac54u: goto label_79ac54;
        case 0x79ac58u: goto label_79ac58;
        case 0x79ac5cu: goto label_79ac5c;
        case 0x79ac60u: goto label_79ac60;
        case 0x79ac64u: goto label_79ac64;
        case 0x79ac68u: goto label_79ac68;
        case 0x79ac6cu: goto label_79ac6c;
        case 0x79ac70u: goto label_79ac70;
        case 0x79ac74u: goto label_79ac74;
        case 0x79ac78u: goto label_79ac78;
        case 0x79ac7cu: goto label_79ac7c;
        case 0x79ac80u: goto label_79ac80;
        case 0x79ac84u: goto label_79ac84;
        case 0x79ac88u: goto label_79ac88;
        case 0x79ac8cu: goto label_79ac8c;
        case 0x79ac90u: goto label_79ac90;
        case 0x79ac94u: goto label_79ac94;
        case 0x79ac98u: goto label_79ac98;
        case 0x79ac9cu: goto label_79ac9c;
        case 0x79aca0u: goto label_79aca0;
        case 0x79aca4u: goto label_79aca4;
        case 0x79aca8u: goto label_79aca8;
        case 0x79acacu: goto label_79acac;
        case 0x79acb0u: goto label_79acb0;
        case 0x79acb4u: goto label_79acb4;
        case 0x79acb8u: goto label_79acb8;
        case 0x79acbcu: goto label_79acbc;
        case 0x79acc0u: goto label_79acc0;
        case 0x79acc4u: goto label_79acc4;
        case 0x79acc8u: goto label_79acc8;
        case 0x79acccu: goto label_79accc;
        case 0x79acd0u: goto label_79acd0;
        case 0x79acd4u: goto label_79acd4;
        case 0x79acd8u: goto label_79acd8;
        case 0x79acdcu: goto label_79acdc;
        case 0x79ace0u: goto label_79ace0;
        case 0x79ace4u: goto label_79ace4;
        case 0x79ace8u: goto label_79ace8;
        case 0x79acecu: goto label_79acec;
        case 0x79acf0u: goto label_79acf0;
        case 0x79acf4u: goto label_79acf4;
        case 0x79acf8u: goto label_79acf8;
        case 0x79acfcu: goto label_79acfc;
        case 0x79ad00u: goto label_79ad00;
        case 0x79ad04u: goto label_79ad04;
        case 0x79ad08u: goto label_79ad08;
        case 0x79ad0cu: goto label_79ad0c;
        case 0x79ad10u: goto label_79ad10;
        case 0x79ad14u: goto label_79ad14;
        case 0x79ad18u: goto label_79ad18;
        case 0x79ad1cu: goto label_79ad1c;
        case 0x79ad20u: goto label_79ad20;
        case 0x79ad24u: goto label_79ad24;
        case 0x79ad28u: goto label_79ad28;
        case 0x79ad2cu: goto label_79ad2c;
        case 0x79ad30u: goto label_79ad30;
        case 0x79ad34u: goto label_79ad34;
        case 0x79ad38u: goto label_79ad38;
        case 0x79ad3cu: goto label_79ad3c;
        case 0x79ad40u: goto label_79ad40;
        case 0x79ad44u: goto label_79ad44;
        case 0x79ad48u: goto label_79ad48;
        case 0x79ad4cu: goto label_79ad4c;
        case 0x79ad50u: goto label_79ad50;
        case 0x79ad54u: goto label_79ad54;
        case 0x79ad58u: goto label_79ad58;
        case 0x79ad5cu: goto label_79ad5c;
        case 0x79ad60u: goto label_79ad60;
        case 0x79ad64u: goto label_79ad64;
        case 0x79ad68u: goto label_79ad68;
        case 0x79ad6cu: goto label_79ad6c;
        case 0x79ad70u: goto label_79ad70;
        case 0x79ad74u: goto label_79ad74;
        case 0x79ad78u: goto label_79ad78;
        case 0x79ad7cu: goto label_79ad7c;
        case 0x79ad80u: goto label_79ad80;
        case 0x79ad84u: goto label_79ad84;
        case 0x79ad88u: goto label_79ad88;
        case 0x79ad8cu: goto label_79ad8c;
        case 0x79ad90u: goto label_79ad90;
        case 0x79ad94u: goto label_79ad94;
        case 0x79ad98u: goto label_79ad98;
        case 0x79ad9cu: goto label_79ad9c;
        case 0x79ada0u: goto label_79ada0;
        case 0x79ada4u: goto label_79ada4;
        case 0x79ada8u: goto label_79ada8;
        case 0x79adacu: goto label_79adac;
        case 0x79adb0u: goto label_79adb0;
        case 0x79adb4u: goto label_79adb4;
        case 0x79adb8u: goto label_79adb8;
        case 0x79adbcu: goto label_79adbc;
        case 0x79adc0u: goto label_79adc0;
        case 0x79adc4u: goto label_79adc4;
        case 0x79adc8u: goto label_79adc8;
        case 0x79adccu: goto label_79adcc;
        case 0x79add0u: goto label_79add0;
        case 0x79add4u: goto label_79add4;
        case 0x79add8u: goto label_79add8;
        case 0x79addcu: goto label_79addc;
        default: break;
    }

    ctx->pc = 0x799d58u;

label_799d58:
    // 0x799d58: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x799d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_799d5c:
    // 0x799d5c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x799d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_799d60:
    // 0x799d60: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x799d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_799d64:
    // 0x799d64: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x799d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_799d68:
    // 0x799d68: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x799d68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_799d6c:
    // 0x799d6c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x799d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_799d70:
    // 0x799d70: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x799d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_799d74:
    // 0x799d74: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x799d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_799d78:
    // 0x799d78: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799d78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
label_799d7c:
    // 0x799d7c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x799d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_799d80:
    // 0x799d80: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x799d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_799d84:
    // 0x799d84: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x799d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_799d88:
    // 0x799d88: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x799d88u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
label_799d8c:
    // 0x799d8c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x799d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_799d90:
    // 0x799d90: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x799d90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
label_799d94:
    // 0x799d94: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x799d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_799d98:
    // 0x799d98: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x799d98u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
label_799d9c:
    // 0x799d9c: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x799d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_799da0:
    // 0x799da0: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x799da0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_799da4:
    // 0x799da4: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x799da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_799da8:
    // 0x799da8: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x799da8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799dac:
    // 0x799dac: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x799dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_799db0:
    // 0x799db0: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x799db0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_799db4:
    // 0x799db4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x799db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_799db8:
    // 0x799db8: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x799db8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_799dbc:
    // 0x799dbc: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x799dbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_799dc0:
    // 0x799dc0: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x799dc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_799dc4:
    // 0x799dc4: 0x10000005  b           . + 4 + (0x5 << 2)
label_799dc8:
    if (ctx->pc == 0x799DC8u) {
        ctx->pc = 0x799DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DC4u;
        // 0x799dc8: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DCCu;
        goto label_799dcc;
    }
    ctx->pc = 0x799DC4u;
    {
        const bool branch_taken_0x799dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DC4u;
        // 0x799dc8: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dc4) {
            ctx->pc = 0x799DDCu;
            goto label_799ddc;
        }
    }
    ctx->pc = 0x799DCCu;
label_799dcc:
    // 0x799dcc: 0x0  nop
    ctx->pc = 0x799dccu;
    // NOP
label_799dd0:
    // 0x799dd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799dd4:
    // 0x799dd4: 0xc0b56a8  jal         func_2D5AA0
label_799dd8:
    if (ctx->pc == 0x799DD8u) {
        ctx->pc = 0x799DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DD4u;
        // 0x799dd8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DDCu;
        goto label_799ddc;
    }
    ctx->pc = 0x799DD4u;
    SET_GPR_U32(ctx, 31, 0x799DDCu);
    ctx->pc = 0x799DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DD4u;
    // 0x799dd8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799DD4u, 0x799DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DDCu;
label_799ddc:
    // 0x799ddc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_799de0:
    // 0x799de0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799de4:
    // 0x799de4: 0x2444ea60  addiu       $a0, $v0, -0x15A0
    ctx->pc = 0x799de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
label_799de8:
    // 0x799de8: 0xc0b0aa6  jal         func_2C2A98
label_799dec:
    if (ctx->pc == 0x799DECu) {
        ctx->pc = 0x799DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DE8u;
        // 0x799dec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DF0u;
        goto label_799df0;
    }
    ctx->pc = 0x799DE8u;
    SET_GPR_U32(ctx, 31, 0x799DF0u);
    ctx->pc = 0x799DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DE8u;
    // 0x799dec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799DE8u, 0x799DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DF0u;
label_799df0:
    // 0x799df0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799df4:
    // 0x799df4: 0x1443fff6  bne         $v0, $v1, . + 4 + (-0xA << 2)
label_799df8:
    if (ctx->pc == 0x799DF8u) {
        ctx->pc = 0x799DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DF4u;
        // 0x799df8: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DFCu;
        goto label_799dfc;
    }
    ctx->pc = 0x799DF4u;
    {
        const bool branch_taken_0x799df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DF4u;
        // 0x799df8: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799df4) {
            ctx->pc = 0x799DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799dd0;
        }
    }
    ctx->pc = 0x799DFCu;
label_799dfc:
    // 0x799dfc: 0x8e038658  lw          $v1, -0x79A8($s0)
    ctx->pc = 0x799dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
label_799e00:
    // 0x799e00: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x799e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_799e04:
    // 0x799e04: 0x26259620  addiu       $a1, $s1, -0x69E0
    ctx->pc = 0x799e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940192));
label_799e08:
    // 0x799e08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799e0c:
    // 0x799e0c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799e10:
    // 0x799e10: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799e14:
    // 0x799e14: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x799e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799e18:
    // 0x799e18: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x799e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799e1c:
    // 0x799e1c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_799e20:
    // 0x799e20: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_799e24:
    // 0x799e24: 0xc0b0e48  jal         func_2C3920
label_799e28:
    if (ctx->pc == 0x799E28u) {
        ctx->pc = 0x799E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E24u;
        // 0x799e28: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E2Cu;
        goto label_799e2c;
    }
    ctx->pc = 0x799E24u;
    SET_GPR_U32(ctx, 31, 0x799E2Cu);
    ctx->pc = 0x799E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E24u;
    // 0x799e28: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x799E24u, 0x799E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E2Cu;
label_799e2c:
    // 0x799e2c: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x799e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799e30:
    // 0x799e30: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x799e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_799e34:
    // 0x799e34: 0xc0b56a8  jal         func_2D5AA0
label_799e38:
    if (ctx->pc == 0x799E38u) {
        ctx->pc = 0x799E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E34u;
        // 0x799e38: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E3Cu;
        goto label_799e3c;
    }
    ctx->pc = 0x799E34u;
    SET_GPR_U32(ctx, 31, 0x799E3Cu);
    ctx->pc = 0x799E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E34u;
    // 0x799e38: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799E34u, 0x799E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E3Cu;
label_799e3c:
    // 0x799e3c: 0x10000005  b           . + 4 + (0x5 << 2)
label_799e40:
    if (ctx->pc == 0x799E40u) {
        ctx->pc = 0x799E44u;
        goto label_799e44;
    }
    ctx->pc = 0x799E3Cu;
    {
        const bool branch_taken_0x799e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799e3c) {
            ctx->pc = 0x799E54u;
            goto label_799e54;
        }
    }
    ctx->pc = 0x799E44u;
label_799e44:
    // 0x799e44: 0x0  nop
    ctx->pc = 0x799e44u;
    // NOP
label_799e48:
    // 0x799e48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799e4c:
    // 0x799e4c: 0xc0b56a8  jal         func_2D5AA0
label_799e50:
    if (ctx->pc == 0x799E50u) {
        ctx->pc = 0x799E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E4Cu;
        // 0x799e50: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E54u;
        goto label_799e54;
    }
    ctx->pc = 0x799E4Cu;
    SET_GPR_U32(ctx, 31, 0x799E54u);
    ctx->pc = 0x799E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E4Cu;
    // 0x799e50: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799E4Cu, 0x799E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E54u;
label_799e54:
    // 0x799e54: 0xc0b0f90  jal         func_2C3E40
label_799e58:
    if (ctx->pc == 0x799E58u) {
        ctx->pc = 0x799E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E54u;
        // 0x799e58: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E5Cu;
        goto label_799e5c;
    }
    ctx->pc = 0x799E54u;
    SET_GPR_U32(ctx, 31, 0x799E5Cu);
    ctx->pc = 0x799E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E54u;
    // 0x799e58: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x799E54u, 0x799E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E5Cu;
label_799e5c:
    // 0x799e5c: 0x1450fffa  bne         $v0, $s0, . + 4 + (-0x6 << 2)
label_799e60:
    if (ctx->pc == 0x799E60u) {
        ctx->pc = 0x799E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E5Cu;
        // 0x799e60: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E64u;
        goto label_799e64;
    }
    ctx->pc = 0x799E5Cu;
    {
        const bool branch_taken_0x799e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x799E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E5Cu;
        // 0x799e60: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e5c) {
            ctx->pc = 0x799E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e48;
        }
    }
    ctx->pc = 0x799E64u;
label_799e64:
    // 0x799e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799e68:
    // 0x799e68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x799e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799e6c:
    // 0x799e6c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x799e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_799e70:
    // 0x799e70: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x799e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799e74:
    // 0x799e74: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_799e78:
    // 0x799e78: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799e7c:
    // 0x799e7c: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x799e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
label_799e80:
    // 0x799e80: 0x24506ab0  addiu       $s0, $v0, 0x6AB0
    ctx->pc = 0x799e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
label_799e84:
    // 0x799e84: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x799e84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
label_799e88:
    // 0x799e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799e8c:
    // 0x799e8c: 0xc0b0e6c  jal         func_2C39B0
label_799e90:
    if (ctx->pc == 0x799E90u) {
        ctx->pc = 0x799E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E8Cu;
        // 0x799e90: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E94u;
        goto label_799e94;
    }
    ctx->pc = 0x799E8Cu;
    SET_GPR_U32(ctx, 31, 0x799E94u);
    ctx->pc = 0x799E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E8Cu;
    // 0x799e90: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799E8Cu, 0x799E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E94u;
label_799e94:
    // 0x799e94: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799e98:
    // 0x799e98: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799e9c:
    // 0x799e9c: 0xc0b0fb6  jal         func_2C3ED8
label_799ea0:
    if (ctx->pc == 0x799EA0u) {
        ctx->pc = 0x799EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E9Cu;
        // 0x799ea0: 0x2445c060  addiu       $a1, $v0, -0x3FA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EA4u;
        goto label_799ea4;
    }
    ctx->pc = 0x799E9Cu;
    SET_GPR_U32(ctx, 31, 0x799EA4u);
    ctx->pc = 0x799EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E9Cu;
    // 0x799ea0: 0x2445c060  addiu       $a1, $v0, -0x3FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799E9Cu, 0x799EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EA4u;
label_799ea4:
    // 0x799ea4: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x799ea4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_799ea8:
    // 0x799ea8: 0xc0a54b4  jal         func_2952D0
label_799eac:
    if (ctx->pc == 0x799EACu) {
        ctx->pc = 0x799EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EA8u;
        // 0x799eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EB0u;
        goto label_799eb0;
    }
    ctx->pc = 0x799EA8u;
    SET_GPR_U32(ctx, 31, 0x799EB0u);
    ctx->pc = 0x799EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EA8u;
    // 0x799eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799EA8u, 0x799EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EB0u;
label_799eb0:
    // 0x799eb0: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x799eb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_799eb4:
    // 0x799eb4: 0xc0a54b4  jal         func_2952D0
label_799eb8:
    if (ctx->pc == 0x799EB8u) {
        ctx->pc = 0x799EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EB4u;
        // 0x799eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EBCu;
        goto label_799ebc;
    }
    ctx->pc = 0x799EB4u;
    SET_GPR_U32(ctx, 31, 0x799EBCu);
    ctx->pc = 0x799EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EB4u;
    // 0x799eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799EB4u, 0x799EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EBCu;
label_799ebc:
    // 0x799ebc: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x799ebcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_799ec0:
    // 0x799ec0: 0xc0a54b4  jal         func_2952D0
label_799ec4:
    if (ctx->pc == 0x799EC4u) {
        ctx->pc = 0x799EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EC0u;
        // 0x799ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EC8u;
        goto label_799ec8;
    }
    ctx->pc = 0x799EC0u;
    SET_GPR_U32(ctx, 31, 0x799EC8u);
    ctx->pc = 0x799EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EC0u;
    // 0x799ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799EC0u, 0x799EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EC8u;
label_799ec8:
    // 0x799ec8: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x799ec8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_799ecc:
    // 0x799ecc: 0xc0a54b4  jal         func_2952D0
label_799ed0:
    if (ctx->pc == 0x799ED0u) {
        ctx->pc = 0x799ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ECCu;
        // 0x799ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799ED4u;
        goto label_799ed4;
    }
    ctx->pc = 0x799ECCu;
    SET_GPR_U32(ctx, 31, 0x799ED4u);
    ctx->pc = 0x799ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ECCu;
    // 0x799ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799ECCu, 0x799ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ED4u;
label_799ed4:
    // 0x799ed4: 0xc0c7400  jal         func_31D000
label_799ed8:
    if (ctx->pc == 0x799ED8u) {
        ctx->pc = 0x799EDCu;
        goto label_799edc;
    }
    ctx->pc = 0x799ED4u;
    SET_GPR_U32(ctx, 31, 0x799EDCu);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x799ED4u, 0x799EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EDCu;
label_799edc:
    // 0x799edc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x799edcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_799ee0:
    // 0x799ee0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x799ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_799ee4:
    // 0x799ee4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799ee8:
    // 0x799ee8: 0x0  nop
    ctx->pc = 0x799ee8u;
    // NOP
label_799eec:
    // 0x799eec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x799eecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_799ef0:
    // 0x799ef0: 0x0  nop
    ctx->pc = 0x799ef0u;
    // NOP
label_799ef4:
    // 0x799ef4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_799ef8:
    if (ctx->pc == 0x799EF8u) {
        ctx->pc = 0x799EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EF4u;
        // 0x799ef8: 0x269064f0  addiu       $s0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EFCu;
        goto label_799efc;
    }
    ctx->pc = 0x799EF4u;
    {
        const bool branch_taken_0x799ef4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EF4u;
        // 0x799ef8: 0x269064f0  addiu       $s0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ef4) {
            ctx->pc = 0x799F48u;
            goto label_799f48;
        }
    }
    ctx->pc = 0x799EFCu;
label_799efc:
    // 0x799efc: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x799efcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_799f00:
    // 0x799f00: 0xc0a421a  jal         func_290868
label_799f04:
    if (ctx->pc == 0x799F04u) {
        ctx->pc = 0x799F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F00u;
        // 0x799f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F08u;
        goto label_799f08;
    }
    ctx->pc = 0x799F00u;
    SET_GPR_U32(ctx, 31, 0x799F08u);
    ctx->pc = 0x799F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F00u;
    // 0x799f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799F00u, 0x799F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F08u;
label_799f08:
    // 0x799f08: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_799f0c:
    if (ctx->pc == 0x799F0Cu) {
        ctx->pc = 0x799F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F08u;
        // 0x799f0c: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F10u;
        goto label_799f10;
    }
    ctx->pc = 0x799F08u;
    {
        const bool branch_taken_0x799f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F08u;
        // 0x799f0c: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f08) {
            ctx->pc = 0x79A070u;
            goto label_79a070;
        }
    }
    ctx->pc = 0x799F10u;
label_799f10:
    // 0x799f10: 0xc0a421a  jal         func_290868
label_799f14:
    if (ctx->pc == 0x799F14u) {
        ctx->pc = 0x799F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F10u;
        // 0x799f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F18u;
        goto label_799f18;
    }
    ctx->pc = 0x799F10u;
    SET_GPR_U32(ctx, 31, 0x799F18u);
    ctx->pc = 0x799F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F10u;
    // 0x799f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799F10u, 0x799F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F18u;
label_799f18:
    // 0x799f18: 0xc09d578  jal         func_2755E0
label_799f1c:
    if (ctx->pc == 0x799F1Cu) {
        ctx->pc = 0x799F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F18u;
        // 0x799f1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F20u;
        goto label_799f20;
    }
    ctx->pc = 0x799F18u;
    SET_GPR_U32(ctx, 31, 0x799F20u);
    ctx->pc = 0x799F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F18u;
    // 0x799f1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2755E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2755E0u, 0x799F18u, 0x799F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F20u;
label_799f20:
    // 0x799f20: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x799f20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_799f24:
    // 0x799f24: 0xc0a421a  jal         func_290868
label_799f28:
    if (ctx->pc == 0x799F28u) {
        ctx->pc = 0x799F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F24u;
        // 0x799f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F2Cu;
        goto label_799f2c;
    }
    ctx->pc = 0x799F24u;
    SET_GPR_U32(ctx, 31, 0x799F2Cu);
    ctx->pc = 0x799F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F24u;
    // 0x799f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799F24u, 0x799F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F2Cu;
label_799f2c:
    // 0x799f2c: 0xc09d58e  jal         func_275638
label_799f30:
    if (ctx->pc == 0x799F30u) {
        ctx->pc = 0x799F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F2Cu;
        // 0x799f30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F34u;
        goto label_799f34;
    }
    ctx->pc = 0x799F2Cu;
    SET_GPR_U32(ctx, 31, 0x799F34u);
    ctx->pc = 0x799F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F2Cu;
    // 0x799f30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275638u, 0x799F2Cu, 0x799F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F34u;
label_799f34:
    // 0x799f34: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799f38:
    // 0x799f38: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799f3c:
    // 0x799f3c: 0x24a59500  addiu       $a1, $a1, -0x6B00
    ctx->pc = 0x799f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939904));
label_799f40:
    // 0x799f40: 0x10000033  b           . + 4 + (0x33 << 2)
label_799f44:
    if (ctx->pc == 0x799F44u) {
        ctx->pc = 0x799F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F40u;
        // 0x799f44: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F48u;
        goto label_799f48;
    }
    ctx->pc = 0x799F40u;
    {
        const bool branch_taken_0x799f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F40u;
        // 0x799f44: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f40) {
            ctx->pc = 0x79A010u;
            goto label_79a010;
        }
    }
    ctx->pc = 0x799F48u;
label_799f48:
    // 0x799f48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x799f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_799f4c:
    // 0x799f4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799f50:
    // 0x799f50: 0x0  nop
    ctx->pc = 0x799f50u;
    // NOP
label_799f54:
    // 0x799f54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x799f54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_799f58:
    // 0x799f58: 0x0  nop
    ctx->pc = 0x799f58u;
    // NOP
label_799f5c:
    // 0x799f5c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_799f60:
    if (ctx->pc == 0x799F60u) {
        ctx->pc = 0x799F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F5Cu;
        // 0x799f60: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F64u;
        goto label_799f64;
    }
    ctx->pc = 0x799F5Cu;
    {
        const bool branch_taken_0x799f5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F5Cu;
        // 0x799f60: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f5c) {
            ctx->pc = 0x799FACu;
            goto label_799fac;
        }
    }
    ctx->pc = 0x799F64u;
label_799f64:
    // 0x799f64: 0xc0a421a  jal         func_290868
label_799f68:
    if (ctx->pc == 0x799F68u) {
        ctx->pc = 0x799F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F64u;
        // 0x799f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F6Cu;
        goto label_799f6c;
    }
    ctx->pc = 0x799F64u;
    SET_GPR_U32(ctx, 31, 0x799F6Cu);
    ctx->pc = 0x799F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F64u;
    // 0x799f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799F64u, 0x799F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F6Cu;
label_799f6c:
    // 0x799f6c: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_799f70:
    if (ctx->pc == 0x799F70u) {
        ctx->pc = 0x799F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F6Cu;
        // 0x799f70: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F74u;
        goto label_799f74;
    }
    ctx->pc = 0x799F6Cu;
    {
        const bool branch_taken_0x799f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F6Cu;
        // 0x799f70: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f6c) {
            ctx->pc = 0x79A070u;
            goto label_79a070;
        }
    }
    ctx->pc = 0x799F74u;
label_799f74:
    // 0x799f74: 0xc0a421a  jal         func_290868
label_799f78:
    if (ctx->pc == 0x799F78u) {
        ctx->pc = 0x799F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F74u;
        // 0x799f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F7Cu;
        goto label_799f7c;
    }
    ctx->pc = 0x799F74u;
    SET_GPR_U32(ctx, 31, 0x799F7Cu);
    ctx->pc = 0x799F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F74u;
    // 0x799f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799F74u, 0x799F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F7Cu;
label_799f7c:
    // 0x799f7c: 0xc09d578  jal         func_2755E0
label_799f80:
    if (ctx->pc == 0x799F80u) {
        ctx->pc = 0x799F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F7Cu;
        // 0x799f80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F84u;
        goto label_799f84;
    }
    ctx->pc = 0x799F7Cu;
    SET_GPR_U32(ctx, 31, 0x799F84u);
    ctx->pc = 0x799F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F7Cu;
    // 0x799f80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2755E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2755E0u, 0x799F7Cu, 0x799F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F84u;
label_799f84:
    // 0x799f84: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x799f84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_799f88:
    // 0x799f88: 0xc0a421a  jal         func_290868
label_799f8c:
    if (ctx->pc == 0x799F8Cu) {
        ctx->pc = 0x799F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F88u;
        // 0x799f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F90u;
        goto label_799f90;
    }
    ctx->pc = 0x799F88u;
    SET_GPR_U32(ctx, 31, 0x799F90u);
    ctx->pc = 0x799F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F88u;
    // 0x799f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799F88u, 0x799F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F90u;
label_799f90:
    // 0x799f90: 0xc09d58e  jal         func_275638
label_799f94:
    if (ctx->pc == 0x799F94u) {
        ctx->pc = 0x799F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F90u;
        // 0x799f94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F98u;
        goto label_799f98;
    }
    ctx->pc = 0x799F90u;
    SET_GPR_U32(ctx, 31, 0x799F98u);
    ctx->pc = 0x799F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F90u;
    // 0x799f94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275638u, 0x799F90u, 0x799F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F98u;
label_799f98:
    // 0x799f98: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799f9c:
    // 0x799f9c: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799fa0:
    // 0x799fa0: 0x24a59500  addiu       $a1, $a1, -0x6B00
    ctx->pc = 0x799fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939904));
label_799fa4:
    // 0x799fa4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_799fa8:
    if (ctx->pc == 0x799FA8u) {
        ctx->pc = 0x799FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FA4u;
        // 0x799fa8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FACu;
        goto label_799fac;
    }
    ctx->pc = 0x799FA4u;
    {
        const bool branch_taken_0x799fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FA4u;
        // 0x799fa8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fa4) {
            ctx->pc = 0x79A010u;
            goto label_79a010;
        }
    }
    ctx->pc = 0x799FACu;
label_799fac:
    // 0x799fac: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x799facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_799fb0:
    // 0x799fb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799fb4:
    // 0x799fb4: 0x0  nop
    ctx->pc = 0x799fb4u;
    // NOP
label_799fb8:
    // 0x799fb8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x799fb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_799fbc:
    // 0x799fbc: 0x0  nop
    ctx->pc = 0x799fbcu;
    // NOP
label_799fc0:
    // 0x799fc0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_799fc4:
    if (ctx->pc == 0x799FC4u) {
        ctx->pc = 0x799FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FC0u;
        // 0x799fc4: 0x269064f0  addiu       $s0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FC8u;
        goto label_799fc8;
    }
    ctx->pc = 0x799FC0u;
    {
        const bool branch_taken_0x799fc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FC0u;
        // 0x799fc4: 0x269064f0  addiu       $s0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fc0) {
            ctx->pc = 0x79A020u;
            goto label_79a020;
        }
    }
    ctx->pc = 0x799FC8u;
label_799fc8:
    // 0x799fc8: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x799fc8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_799fcc:
    // 0x799fcc: 0xc0a421a  jal         func_290868
label_799fd0:
    if (ctx->pc == 0x799FD0u) {
        ctx->pc = 0x799FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FCCu;
        // 0x799fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FD4u;
        goto label_799fd4;
    }
    ctx->pc = 0x799FCCu;
    SET_GPR_U32(ctx, 31, 0x799FD4u);
    ctx->pc = 0x799FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FCCu;
    // 0x799fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799FCCu, 0x799FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FD4u;
label_799fd4:
    // 0x799fd4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_799fd8:
    if (ctx->pc == 0x799FD8u) {
        ctx->pc = 0x799FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FD4u;
        // 0x799fd8: 0x93a50020  lbu         $a1, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FDCu;
        goto label_799fdc;
    }
    ctx->pc = 0x799FD4u;
    {
        const bool branch_taken_0x799fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FD4u;
        // 0x799fd8: 0x93a50020  lbu         $a1, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fd4) {
            ctx->pc = 0x79A070u;
            goto label_79a070;
        }
    }
    ctx->pc = 0x799FDCu;
label_799fdc:
    // 0x799fdc: 0xc0a421a  jal         func_290868
label_799fe0:
    if (ctx->pc == 0x799FE0u) {
        ctx->pc = 0x799FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FDCu;
        // 0x799fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FE4u;
        goto label_799fe4;
    }
    ctx->pc = 0x799FDCu;
    SET_GPR_U32(ctx, 31, 0x799FE4u);
    ctx->pc = 0x799FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FDCu;
    // 0x799fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799FDCu, 0x799FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FE4u;
label_799fe4:
    // 0x799fe4: 0xc09d578  jal         func_2755E0
label_799fe8:
    if (ctx->pc == 0x799FE8u) {
        ctx->pc = 0x799FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FE4u;
        // 0x799fe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FECu;
        goto label_799fec;
    }
    ctx->pc = 0x799FE4u;
    SET_GPR_U32(ctx, 31, 0x799FECu);
    ctx->pc = 0x799FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FE4u;
    // 0x799fe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2755E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2755E0u, 0x799FE4u, 0x799FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FECu;
label_799fec:
    // 0x799fec: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x799fecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_799ff0:
    // 0x799ff0: 0xc0a421a  jal         func_290868
label_799ff4:
    if (ctx->pc == 0x799FF4u) {
        ctx->pc = 0x799FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FF0u;
        // 0x799ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FF8u;
        goto label_799ff8;
    }
    ctx->pc = 0x799FF0u;
    SET_GPR_U32(ctx, 31, 0x799FF8u);
    ctx->pc = 0x799FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF0u;
    // 0x799ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799FF0u, 0x799FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FF8u;
label_799ff8:
    // 0x799ff8: 0xc09d58e  jal         func_275638
label_799ffc:
    if (ctx->pc == 0x799FFCu) {
        ctx->pc = 0x799FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FF8u;
        // 0x799ffc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A000u;
        goto label_79a000;
    }
    ctx->pc = 0x799FF8u;
    SET_GPR_U32(ctx, 31, 0x79A000u);
    ctx->pc = 0x799FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF8u;
    // 0x799ffc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275638u, 0x799FF8u, 0x79A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A000u;
label_79a000:
    // 0x79a000: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79a004:
    // 0x79a004: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a008:
    // 0x79a008: 0x24a59500  addiu       $a1, $a1, -0x6B00
    ctx->pc = 0x79a008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939904));
label_79a00c:
    // 0x79a00c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x79a00cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_79a010:
    // 0x79a010: 0xc0b0e48  jal         func_2C3920
label_79a014:
    if (ctx->pc == 0x79A014u) {
        ctx->pc = 0x79A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A010u;
        // 0x79a014: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A018u;
        goto label_79a018;
    }
    ctx->pc = 0x79A010u;
    SET_GPR_U32(ctx, 31, 0x79A018u);
    ctx->pc = 0x79A014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A010u;
    // 0x79a014: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79A010u, 0x79A018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A018u;
label_79a018:
    // 0x79a018: 0x10000015  b           . + 4 + (0x15 << 2)
label_79a01c:
    if (ctx->pc == 0x79A01Cu) {
        ctx->pc = 0x79A020u;
        goto label_79a020;
    }
    ctx->pc = 0x79A018u;
    {
        const bool branch_taken_0x79a018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a018) {
            ctx->pc = 0x79A070u;
            goto label_79a070;
        }
    }
    ctx->pc = 0x79A020u;
label_79a020:
    // 0x79a020: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x79a020u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_79a024:
    // 0x79a024: 0xc0a421a  jal         func_290868
label_79a028:
    if (ctx->pc == 0x79A028u) {
        ctx->pc = 0x79A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A024u;
        // 0x79a028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A02Cu;
        goto label_79a02c;
    }
    ctx->pc = 0x79A024u;
    SET_GPR_U32(ctx, 31, 0x79A02Cu);
    ctx->pc = 0x79A028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A024u;
    // 0x79a028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A024u, 0x79A02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A02Cu;
label_79a02c:
    // 0x79a02c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_79a030:
    if (ctx->pc == 0x79A030u) {
        ctx->pc = 0x79A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A02Cu;
        // 0x79a030: 0x93a50030  lbu         $a1, 0x30($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A034u;
        goto label_79a034;
    }
    ctx->pc = 0x79A02Cu;
    {
        const bool branch_taken_0x79a02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A02Cu;
        // 0x79a030: 0x93a50030  lbu         $a1, 0x30($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a02c) {
            ctx->pc = 0x79A070u;
            goto label_79a070;
        }
    }
    ctx->pc = 0x79A034u;
label_79a034:
    // 0x79a034: 0xc0a421a  jal         func_290868
label_79a038:
    if (ctx->pc == 0x79A038u) {
        ctx->pc = 0x79A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A034u;
        // 0x79a038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A03Cu;
        goto label_79a03c;
    }
    ctx->pc = 0x79A034u;
    SET_GPR_U32(ctx, 31, 0x79A03Cu);
    ctx->pc = 0x79A038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A034u;
    // 0x79a038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A034u, 0x79A03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A03Cu;
label_79a03c:
    // 0x79a03c: 0xc09d578  jal         func_2755E0
label_79a040:
    if (ctx->pc == 0x79A040u) {
        ctx->pc = 0x79A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A03Cu;
        // 0x79a040: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A044u;
        goto label_79a044;
    }
    ctx->pc = 0x79A03Cu;
    SET_GPR_U32(ctx, 31, 0x79A044u);
    ctx->pc = 0x79A040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A03Cu;
    // 0x79a040: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2755E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2755E0u, 0x79A03Cu, 0x79A044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A044u;
label_79a044:
    // 0x79a044: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x79a044u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_79a048:
    // 0x79a048: 0xc0a421a  jal         func_290868
label_79a04c:
    if (ctx->pc == 0x79A04Cu) {
        ctx->pc = 0x79A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A048u;
        // 0x79a04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A050u;
        goto label_79a050;
    }
    ctx->pc = 0x79A048u;
    SET_GPR_U32(ctx, 31, 0x79A050u);
    ctx->pc = 0x79A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A048u;
    // 0x79a04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A048u, 0x79A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A050u;
label_79a050:
    // 0x79a050: 0xc09d58e  jal         func_275638
label_79a054:
    if (ctx->pc == 0x79A054u) {
        ctx->pc = 0x79A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A050u;
        // 0x79a054: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A058u;
        goto label_79a058;
    }
    ctx->pc = 0x79A050u;
    SET_GPR_U32(ctx, 31, 0x79A058u);
    ctx->pc = 0x79A054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A050u;
    // 0x79a054: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275638u, 0x79A050u, 0x79A058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A058u;
label_79a058:
    // 0x79a058: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79a05c:
    // 0x79a05c: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a060:
    // 0x79a060: 0x24a59500  addiu       $a1, $a1, -0x6B00
    ctx->pc = 0x79a060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939904));
label_79a064:
    // 0x79a064: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x79a064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_79a068:
    // 0x79a068: 0xc0b0e48  jal         func_2C3920
label_79a06c:
    if (ctx->pc == 0x79A06Cu) {
        ctx->pc = 0x79A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A068u;
        // 0x79a06c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A070u;
        goto label_79a070;
    }
    ctx->pc = 0x79A068u;
    SET_GPR_U32(ctx, 31, 0x79A070u);
    ctx->pc = 0x79A06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A068u;
    // 0x79a06c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79A068u, 0x79A070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A070u;
label_79a070:
    // 0x79a070: 0xc0a56ae  jal         func_295AB8
label_79a074:
    if (ctx->pc == 0x79A074u) {
        ctx->pc = 0x79A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A070u;
        // 0x79a074: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A078u;
        goto label_79a078;
    }
    ctx->pc = 0x79A070u;
    SET_GPR_U32(ctx, 31, 0x79A078u);
    ctx->pc = 0x79A074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A070u;
    // 0x79a074: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A070u, 0x79A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A078u;
label_79a078:
    // 0x79a078: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a078u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79a07c:
    // 0x79a07c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x79a07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_79a080:
    // 0x79a080: 0xc0a56ae  jal         func_295AB8
label_79a084:
    if (ctx->pc == 0x79A084u) {
        ctx->pc = 0x79A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A080u;
        // 0x79a084: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A088u;
        goto label_79a088;
    }
    ctx->pc = 0x79A080u;
    SET_GPR_U32(ctx, 31, 0x79A088u);
    ctx->pc = 0x79A084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A080u;
    // 0x79a084: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A080u, 0x79A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A088u;
label_79a088:
    // 0x79a088: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a088u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79a08c:
    // 0x79a08c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79a08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_79a090:
    // 0x79a090: 0xc0a56ae  jal         func_295AB8
label_79a094:
    if (ctx->pc == 0x79A094u) {
        ctx->pc = 0x79A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A090u;
        // 0x79a094: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A098u;
        goto label_79a098;
    }
    ctx->pc = 0x79A090u;
    SET_GPR_U32(ctx, 31, 0x79A098u);
    ctx->pc = 0x79A094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A090u;
    // 0x79a094: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A090u, 0x79A098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A098u;
label_79a098:
    // 0x79a098: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a098u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79a09c:
    // 0x79a09c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x79a09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_79a0a0:
    // 0x79a0a0: 0xc0a56ae  jal         func_295AB8
label_79a0a4:
    if (ctx->pc == 0x79A0A4u) {
        ctx->pc = 0x79A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0A0u;
        // 0x79a0a4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0A8u;
        goto label_79a0a8;
    }
    ctx->pc = 0x79A0A0u;
    SET_GPR_U32(ctx, 31, 0x79A0A8u);
    ctx->pc = 0x79A0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0A0u;
    // 0x79a0a4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A0A0u, 0x79A0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0A8u;
label_79a0a8:
    // 0x79a0a8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a0a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79a0ac:
    // 0x79a0ac: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x79a0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_79a0b0:
    // 0x79a0b0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x79a0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_79a0b4:
    // 0x79a0b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a0b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a0b8:
    // 0x79a0b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a0bc:
    // 0x79a0bc: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x79a0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_79a0c0:
    // 0x79a0c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79a0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79a0c4:
    // 0x79a0c4: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x79a0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_79a0c8:
    // 0x79a0c8: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x79a0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79a0cc:
    // 0x79a0cc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x79a0ccu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_79a0d0:
    // 0x79a0d0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x79a0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79a0d4:
    // 0x79a0d4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x79a0d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_79a0d8:
    // 0x79a0d8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x79a0d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_79a0dc:
    // 0x79a0dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x79a0dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_79a0e0:
    // 0x79a0e0: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x79a0e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_79a0e4:
    // 0x79a0e4: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x79a0e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_79a0e8:
    // 0x79a0e8: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x79a0e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_79a0ec:
    // 0x79a0ec: 0xc0a566c  jal         func_2959B0
label_79a0f0:
    if (ctx->pc == 0x79A0F0u) {
        ctx->pc = 0x79A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0ECu;
        // 0x79a0f0: 0xe7a10074  swc1        $f1, 0x74($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0F4u;
        goto label_79a0f4;
    }
    ctx->pc = 0x79A0ECu;
    SET_GPR_U32(ctx, 31, 0x79A0F4u);
    ctx->pc = 0x79A0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0ECu;
    // 0x79a0f0: 0xe7a10074  swc1        $f1, 0x74($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2959B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2959B0u, 0x79A0ECu, 0x79A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0F4u;
label_79a0f4:
    // 0x79a0f4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x79a0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_79a0f8:
    // 0x79a0f8: 0xc0a566c  jal         func_2959B0
label_79a0fc:
    if (ctx->pc == 0x79A0FCu) {
        ctx->pc = 0x79A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0F8u;
        // 0x79a0fc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A100u;
        goto label_79a100;
    }
    ctx->pc = 0x79A0F8u;
    SET_GPR_U32(ctx, 31, 0x79A100u);
    ctx->pc = 0x79A0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0F8u;
    // 0x79a0fc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2959B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2959B0u, 0x79A0F8u, 0x79A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A100u;
label_79a100:
    // 0x79a100: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x79a100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_79a104:
    // 0x79a104: 0xc0a566c  jal         func_2959B0
label_79a108:
    if (ctx->pc == 0x79A108u) {
        ctx->pc = 0x79A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A104u;
        // 0x79a108: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A10Cu;
        goto label_79a10c;
    }
    ctx->pc = 0x79A104u;
    SET_GPR_U32(ctx, 31, 0x79A10Cu);
    ctx->pc = 0x79A108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A104u;
    // 0x79a108: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2959B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2959B0u, 0x79A104u, 0x79A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A10Cu;
label_79a10c:
    // 0x79a10c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x79a10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_79a110:
    // 0x79a110: 0xc0a566c  jal         func_2959B0
label_79a114:
    if (ctx->pc == 0x79A114u) {
        ctx->pc = 0x79A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A110u;
        // 0x79a114: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A118u;
        goto label_79a118;
    }
    ctx->pc = 0x79A110u;
    SET_GPR_U32(ctx, 31, 0x79A118u);
    ctx->pc = 0x79A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A110u;
    // 0x79a114: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2959B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2959B0u, 0x79A110u, 0x79A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A118u;
label_79a118:
    // 0x79a118: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x79a118u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_79a11c:
    // 0x79a11c: 0xc0a421a  jal         func_290868
label_79a120:
    if (ctx->pc == 0x79A120u) {
        ctx->pc = 0x79A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A11Cu;
        // 0x79a120: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A124u;
        goto label_79a124;
    }
    ctx->pc = 0x79A11Cu;
    SET_GPR_U32(ctx, 31, 0x79A124u);
    ctx->pc = 0x79A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A11Cu;
    // 0x79a120: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A11Cu, 0x79A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A124u;
label_79a124:
    // 0x79a124: 0x8e63c180  lw          $v1, -0x3E80($s3)
    ctx->pc = 0x79a124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79a128:
    // 0x79a128: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a12c:
    // 0x79a12c: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_79a130:
    if (ctx->pc == 0x79A130u) {
        ctx->pc = 0x79A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A12Cu;
        // 0x79a130: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A134u;
        goto label_79a134;
    }
    ctx->pc = 0x79A12Cu;
    {
        const bool branch_taken_0x79a12c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A12Cu;
        // 0x79a130: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a12c) {
            ctx->pc = 0x79A170u;
            goto label_79a170;
        }
    }
    ctx->pc = 0x79A134u;
label_79a134:
    // 0x79a134: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x79a134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_79a138:
    // 0x79a138: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_79a13c:
    if (ctx->pc == 0x79A13Cu) {
        ctx->pc = 0x79A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A138u;
        // 0x79a13c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A140u;
        goto label_79a140;
    }
    ctx->pc = 0x79A138u;
    {
        const bool branch_taken_0x79a138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A138u;
        // 0x79a13c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a138) {
            ctx->pc = 0x79A148u;
            goto label_79a148;
        }
    }
    ctx->pc = 0x79A140u;
label_79a140:
    // 0x79a140: 0x1000000b  b           . + 4 + (0xB << 2)
label_79a144:
    if (ctx->pc == 0x79A144u) {
        ctx->pc = 0x79A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A140u;
        // 0x79a144: 0xac66003c  sw          $a2, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A148u;
        goto label_79a148;
    }
    ctx->pc = 0x79A140u;
    {
        const bool branch_taken_0x79a140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A140u;
        // 0x79a144: 0xac66003c  sw          $a2, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a140) {
            ctx->pc = 0x79A170u;
            goto label_79a170;
        }
    }
    ctx->pc = 0x79A148u;
label_79a148:
    // 0x79a148: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79a148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79a14c:
    // 0x79a14c: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79a14cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79a150:
    // 0x79a150: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79a154:
    if (ctx->pc == 0x79A154u) {
        ctx->pc = 0x79A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A150u;
        // 0x79a154: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A158u;
        goto label_79a158;
    }
    ctx->pc = 0x79A150u;
    {
        const bool branch_taken_0x79a150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A150u;
        // 0x79a154: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a150) {
            ctx->pc = 0x79A170u;
            goto label_79a170;
        }
    }
    ctx->pc = 0x79A158u;
label_79a158:
    // 0x79a158: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79a158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79a15c:
    // 0x79a15c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a160:
    // 0x79a160: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a164:
    // 0x79a164: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_79a168:
    if (ctx->pc == 0x79A168u) {
        ctx->pc = 0x79A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A164u;
        // 0x79a168: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A16Cu;
        goto label_79a16c;
    }
    ctx->pc = 0x79A164u;
    {
        const bool branch_taken_0x79a164 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A164u;
        // 0x79a168: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a164) {
            ctx->pc = 0x79A14Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a14c;
        }
    }
    ctx->pc = 0x79A16Cu;
label_79a16c:
    // 0x79a16c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x79a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_79a170:
    // 0x79a170: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x79a170u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_79a174:
    // 0x79a174: 0xc0a421a  jal         func_290868
label_79a178:
    if (ctx->pc == 0x79A178u) {
        ctx->pc = 0x79A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A174u;
        // 0x79a178: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A17Cu;
        goto label_79a17c;
    }
    ctx->pc = 0x79A174u;
    SET_GPR_U32(ctx, 31, 0x79A17Cu);
    ctx->pc = 0x79A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A174u;
    // 0x79a178: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A174u, 0x79A17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A17Cu;
label_79a17c:
    // 0x79a17c: 0x8e63c180  lw          $v1, -0x3E80($s3)
    ctx->pc = 0x79a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79a180:
    // 0x79a180: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a184:
    // 0x79a184: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_79a188:
    if (ctx->pc == 0x79A188u) {
        ctx->pc = 0x79A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A184u;
        // 0x79a188: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A18Cu;
        goto label_79a18c;
    }
    ctx->pc = 0x79A184u;
    {
        const bool branch_taken_0x79a184 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A184u;
        // 0x79a188: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a184) {
            ctx->pc = 0x79A1C8u;
            goto label_79a1c8;
        }
    }
    ctx->pc = 0x79A18Cu;
label_79a18c:
    // 0x79a18c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x79a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_79a190:
    // 0x79a190: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_79a194:
    if (ctx->pc == 0x79A194u) {
        ctx->pc = 0x79A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A190u;
        // 0x79a194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A198u;
        goto label_79a198;
    }
    ctx->pc = 0x79A190u;
    {
        const bool branch_taken_0x79a190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A190u;
        // 0x79a194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a190) {
            ctx->pc = 0x79A1A0u;
            goto label_79a1a0;
        }
    }
    ctx->pc = 0x79A198u;
label_79a198:
    // 0x79a198: 0x1000000b  b           . + 4 + (0xB << 2)
label_79a19c:
    if (ctx->pc == 0x79A19Cu) {
        ctx->pc = 0x79A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A198u;
        // 0x79a19c: 0xac66003c  sw          $a2, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1A0u;
        goto label_79a1a0;
    }
    ctx->pc = 0x79A198u;
    {
        const bool branch_taken_0x79a198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A198u;
        // 0x79a19c: 0xac66003c  sw          $a2, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a198) {
            ctx->pc = 0x79A1C8u;
            goto label_79a1c8;
        }
    }
    ctx->pc = 0x79A1A0u;
label_79a1a0:
    // 0x79a1a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79a1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79a1a4:
    // 0x79a1a4: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79a1a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79a1a8:
    // 0x79a1a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79a1ac:
    if (ctx->pc == 0x79A1ACu) {
        ctx->pc = 0x79A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1A8u;
        // 0x79a1ac: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1B0u;
        goto label_79a1b0;
    }
    ctx->pc = 0x79A1A8u;
    {
        const bool branch_taken_0x79a1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1A8u;
        // 0x79a1ac: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1a8) {
            ctx->pc = 0x79A1C8u;
            goto label_79a1c8;
        }
    }
    ctx->pc = 0x79A1B0u;
label_79a1b0:
    // 0x79a1b0: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79a1b4:
    // 0x79a1b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a1b8:
    // 0x79a1b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a1bc:
    // 0x79a1bc: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_79a1c0:
    if (ctx->pc == 0x79A1C0u) {
        ctx->pc = 0x79A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1BCu;
        // 0x79a1c0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1C4u;
        goto label_79a1c4;
    }
    ctx->pc = 0x79A1BCu;
    {
        const bool branch_taken_0x79a1bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1BCu;
        // 0x79a1c0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1bc) {
            ctx->pc = 0x79A1A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a1a4;
        }
    }
    ctx->pc = 0x79A1C4u;
label_79a1c4:
    // 0x79a1c4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x79a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_79a1c8:
    // 0x79a1c8: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x79a1c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_79a1cc:
    // 0x79a1cc: 0xc0a421a  jal         func_290868
label_79a1d0:
    if (ctx->pc == 0x79A1D0u) {
        ctx->pc = 0x79A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1CCu;
        // 0x79a1d0: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1D4u;
        goto label_79a1d4;
    }
    ctx->pc = 0x79A1CCu;
    SET_GPR_U32(ctx, 31, 0x79A1D4u);
    ctx->pc = 0x79A1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1CCu;
    // 0x79a1d0: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A1CCu, 0x79A1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1D4u;
label_79a1d4:
    // 0x79a1d4: 0x8e63c180  lw          $v1, -0x3E80($s3)
    ctx->pc = 0x79a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79a1d8:
    // 0x79a1d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a1d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a1dc:
    // 0x79a1dc: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_79a1e0:
    if (ctx->pc == 0x79A1E0u) {
        ctx->pc = 0x79A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1DCu;
        // 0x79a1e0: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1E4u;
        goto label_79a1e4;
    }
    ctx->pc = 0x79A1DCu;
    {
        const bool branch_taken_0x79a1dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1DCu;
        // 0x79a1e0: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1dc) {
            ctx->pc = 0x79A220u;
            goto label_79a220;
        }
    }
    ctx->pc = 0x79A1E4u;
label_79a1e4:
    // 0x79a1e4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x79a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_79a1e8:
    // 0x79a1e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_79a1ec:
    if (ctx->pc == 0x79A1ECu) {
        ctx->pc = 0x79A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1E8u;
        // 0x79a1ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1F0u;
        goto label_79a1f0;
    }
    ctx->pc = 0x79A1E8u;
    {
        const bool branch_taken_0x79a1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1E8u;
        // 0x79a1ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1e8) {
            ctx->pc = 0x79A1F8u;
            goto label_79a1f8;
        }
    }
    ctx->pc = 0x79A1F0u;
label_79a1f0:
    // 0x79a1f0: 0x1000000b  b           . + 4 + (0xB << 2)
label_79a1f4:
    if (ctx->pc == 0x79A1F4u) {
        ctx->pc = 0x79A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1F0u;
        // 0x79a1f4: 0xac66003c  sw          $a2, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1F8u;
        goto label_79a1f8;
    }
    ctx->pc = 0x79A1F0u;
    {
        const bool branch_taken_0x79a1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1F0u;
        // 0x79a1f4: 0xac66003c  sw          $a2, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1f0) {
            ctx->pc = 0x79A220u;
            goto label_79a220;
        }
    }
    ctx->pc = 0x79A1F8u;
label_79a1f8:
    // 0x79a1f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79a1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79a1fc:
    // 0x79a1fc: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79a1fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79a200:
    // 0x79a200: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79a204:
    if (ctx->pc == 0x79A204u) {
        ctx->pc = 0x79A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A200u;
        // 0x79a204: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A208u;
        goto label_79a208;
    }
    ctx->pc = 0x79A200u;
    {
        const bool branch_taken_0x79a200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A200u;
        // 0x79a204: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a200) {
            ctx->pc = 0x79A220u;
            goto label_79a220;
        }
    }
    ctx->pc = 0x79A208u;
label_79a208:
    // 0x79a208: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79a208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79a20c:
    // 0x79a20c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a210:
    // 0x79a210: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a214:
    // 0x79a214: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_79a218:
    if (ctx->pc == 0x79A218u) {
        ctx->pc = 0x79A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A214u;
        // 0x79a218: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A21Cu;
        goto label_79a21c;
    }
    ctx->pc = 0x79A214u;
    {
        const bool branch_taken_0x79a214 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A214u;
        // 0x79a218: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a214) {
            ctx->pc = 0x79A1FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a1fc;
        }
    }
    ctx->pc = 0x79A21Cu;
label_79a21c:
    // 0x79a21c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x79a21cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_79a220:
    // 0x79a220: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x79a220u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_79a224:
    // 0x79a224: 0xc0a421a  jal         func_290868
label_79a228:
    if (ctx->pc == 0x79A228u) {
        ctx->pc = 0x79A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A224u;
        // 0x79a228: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A22Cu;
        goto label_79a22c;
    }
    ctx->pc = 0x79A224u;
    SET_GPR_U32(ctx, 31, 0x79A22Cu);
    ctx->pc = 0x79A228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A224u;
    // 0x79a228: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A224u, 0x79A22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A22Cu;
label_79a22c:
    // 0x79a22c: 0x8e63c180  lw          $v1, -0x3E80($s3)
    ctx->pc = 0x79a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79a230:
    // 0x79a230: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a234:
    // 0x79a234: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_79a238:
    if (ctx->pc == 0x79A238u) {
        ctx->pc = 0x79A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A234u;
        // 0x79a238: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A23Cu;
        goto label_79a23c;
    }
    ctx->pc = 0x79A234u;
    {
        const bool branch_taken_0x79a234 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A234u;
        // 0x79a238: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a234) {
            ctx->pc = 0x79A278u;
            goto label_79a278;
        }
    }
    ctx->pc = 0x79A23Cu;
label_79a23c:
    // 0x79a23c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x79a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_79a240:
    // 0x79a240: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_79a244:
    if (ctx->pc == 0x79A244u) {
        ctx->pc = 0x79A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A240u;
        // 0x79a244: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
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
        // 0x79a244: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a240) {
            ctx->pc = 0x79A250u;
            goto label_79a250;
        }
    }
    ctx->pc = 0x79A248u;
label_79a248:
    // 0x79a248: 0x1000000b  b           . + 4 + (0xB << 2)
label_79a24c:
    if (ctx->pc == 0x79A24Cu) {
        ctx->pc = 0x79A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A248u;
        // 0x79a24c: 0xac66003c  sw          $a2, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A250u;
        goto label_79a250;
    }
    ctx->pc = 0x79A248u;
    {
        const bool branch_taken_0x79a248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A248u;
        // 0x79a24c: 0xac66003c  sw          $a2, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a248) {
            ctx->pc = 0x79A278u;
            goto label_79a278;
        }
    }
    ctx->pc = 0x79A250u;
label_79a250:
    // 0x79a250: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79a250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79a254:
    // 0x79a254: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79a254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79a258:
    // 0x79a258: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79a25c:
    if (ctx->pc == 0x79A25Cu) {
        ctx->pc = 0x79A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A258u;
        // 0x79a25c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A260u;
        goto label_79a260;
    }
    ctx->pc = 0x79A258u;
    {
        const bool branch_taken_0x79a258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A258u;
        // 0x79a25c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a258) {
            ctx->pc = 0x79A278u;
            goto label_79a278;
        }
    }
    ctx->pc = 0x79A260u;
label_79a260:
    // 0x79a260: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79a260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79a264:
    // 0x79a264: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a268:
    // 0x79a268: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a26c:
    // 0x79a26c: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_79a270:
    if (ctx->pc == 0x79A270u) {
        ctx->pc = 0x79A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A26Cu;
        // 0x79a270: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A274u;
        goto label_79a274;
    }
    ctx->pc = 0x79A26Cu;
    {
        const bool branch_taken_0x79a26c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A26Cu;
        // 0x79a270: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a26c) {
            ctx->pc = 0x79A254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a254;
        }
    }
    ctx->pc = 0x79A274u;
label_79a274:
    // 0x79a274: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x79a274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_79a278:
    // 0x79a278: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79a278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79a27c:
    // 0x79a27c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a280:
    // 0x79a280: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x79a280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_79a284:
    // 0x79a284: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x79a284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_79a288:
    // 0x79a288: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a28c:
    // 0x79a28c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a28cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a290:
    // 0x79a290: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a290u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a294:
    // 0x79a294: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a294u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a298:
    // 0x79a298: 0xc0b2e28  jal         func_2CB8A0
label_79a29c:
    if (ctx->pc == 0x79A29Cu) {
        ctx->pc = 0x79A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A298u;
        // 0x79a29c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2A0u;
        goto label_79a2a0;
    }
    ctx->pc = 0x79A298u;
    SET_GPR_U32(ctx, 31, 0x79A2A0u);
    ctx->pc = 0x79A29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A298u;
    // 0x79a29c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A298u, 0x79A2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2A0u;
label_79a2a0:
    // 0x79a2a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_79a2a4:
    if (ctx->pc == 0x79A2A4u) {
        ctx->pc = 0x79A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2A0u;
        // 0x79a2a4: 0x8e64c180  lw          $a0, -0x3E80($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2A8u;
        goto label_79a2a8;
    }
    ctx->pc = 0x79A2A0u;
    {
        const bool branch_taken_0x79a2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2A0u;
        // 0x79a2a4: 0x8e64c180  lw          $a0, -0x3E80($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2a0) {
            ctx->pc = 0x79A2BCu;
            goto label_79a2bc;
        }
    }
    ctx->pc = 0x79A2A8u;
label_79a2a8:
    // 0x79a2a8: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a2ac:
    // 0x79a2ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a2b0:
    // 0x79a2b0: 0xc0b56a8  jal         func_2D5AA0
label_79a2b4:
    if (ctx->pc == 0x79A2B4u) {
        ctx->pc = 0x79A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2B0u;
        // 0x79a2b4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2B8u;
        goto label_79a2b8;
    }
    ctx->pc = 0x79A2B0u;
    SET_GPR_U32(ctx, 31, 0x79A2B8u);
    ctx->pc = 0x79A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2B0u;
    // 0x79a2b4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A2B0u, 0x79A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2B8u;
label_79a2b8:
    // 0x79a2b8: 0x8e64c180  lw          $a0, -0x3E80($s3)
    ctx->pc = 0x79a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79a2bc:
    // 0x79a2bc: 0xc070fce  jal         func_1C3F38
label_79a2c0:
    if (ctx->pc == 0x79A2C0u) {
        ctx->pc = 0x79A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2BCu;
        // 0x79a2c0: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2C4u;
        goto label_79a2c4;
    }
    ctx->pc = 0x79A2BCu;
    SET_GPR_U32(ctx, 31, 0x79A2C4u);
    ctx->pc = 0x79A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2BCu;
    // 0x79a2c0: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x79A2BCu, 0x79A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2C4u;
label_79a2c4:
    // 0x79a2c4: 0x1050fff8  beq         $v0, $s0, . + 4 + (-0x8 << 2)
label_79a2c8:
    if (ctx->pc == 0x79A2C8u) {
        ctx->pc = 0x79A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2C4u;
        // 0x79a2c8: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2CCu;
        goto label_79a2cc;
    }
    ctx->pc = 0x79A2C4u;
    {
        const bool branch_taken_0x79a2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x79A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2C4u;
        // 0x79a2c8: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2c4) {
            ctx->pc = 0x79A2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a2a8;
        }
    }
    ctx->pc = 0x79A2CCu;
label_79a2cc:
    // 0x79a2cc: 0xc0a421a  jal         func_290868
label_79a2d0:
    if (ctx->pc == 0x79A2D0u) {
        ctx->pc = 0x79A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2CCu;
        // 0x79a2d0: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2D4u;
        goto label_79a2d4;
    }
    ctx->pc = 0x79A2CCu;
    SET_GPR_U32(ctx, 31, 0x79A2D4u);
    ctx->pc = 0x79A2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2CCu;
    // 0x79a2d0: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A2CCu, 0x79A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2D4u;
label_79a2d4:
    // 0x79a2d4: 0x8e63c180  lw          $v1, -0x3E80($s3)
    ctx->pc = 0x79a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79a2d8:
    // 0x79a2d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a2dc:
    // 0x79a2dc: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_79a2e0:
    if (ctx->pc == 0x79A2E0u) {
        ctx->pc = 0x79A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2DCu;
        // 0x79a2e0: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2E4u;
        goto label_79a2e4;
    }
    ctx->pc = 0x79A2DCu;
    {
        const bool branch_taken_0x79a2dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2DCu;
        // 0x79a2e0: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2dc) {
            ctx->pc = 0x79A320u;
            goto label_79a320;
        }
    }
    ctx->pc = 0x79A2E4u;
label_79a2e4:
    // 0x79a2e4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x79a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_79a2e8:
    // 0x79a2e8: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_79a2ec:
    if (ctx->pc == 0x79A2ECu) {
        ctx->pc = 0x79A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2E8u;
        // 0x79a2ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2F0u;
        goto label_79a2f0;
    }
    ctx->pc = 0x79A2E8u;
    {
        const bool branch_taken_0x79a2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x79A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2E8u;
        // 0x79a2ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2e8) {
            ctx->pc = 0x79A2F8u;
            goto label_79a2f8;
        }
    }
    ctx->pc = 0x79A2F0u;
label_79a2f0:
    // 0x79a2f0: 0x1000000b  b           . + 4 + (0xB << 2)
label_79a2f4:
    if (ctx->pc == 0x79A2F4u) {
        ctx->pc = 0x79A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2F0u;
        // 0x79a2f4: 0xac60003c  sw          $zero, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2F8u;
        goto label_79a2f8;
    }
    ctx->pc = 0x79A2F0u;
    {
        const bool branch_taken_0x79a2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2F0u;
        // 0x79a2f4: 0xac60003c  sw          $zero, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2f0) {
            ctx->pc = 0x79A320u;
            goto label_79a320;
        }
    }
    ctx->pc = 0x79A2F8u;
label_79a2f8:
    // 0x79a2f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79a2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79a2fc:
    // 0x79a2fc: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79a2fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79a300:
    // 0x79a300: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79a304:
    if (ctx->pc == 0x79A304u) {
        ctx->pc = 0x79A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A300u;
        // 0x79a304: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A308u;
        goto label_79a308;
    }
    ctx->pc = 0x79A300u;
    {
        const bool branch_taken_0x79a300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A300u;
        // 0x79a304: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a300) {
            ctx->pc = 0x79A320u;
            goto label_79a320;
        }
    }
    ctx->pc = 0x79A308u;
label_79a308:
    // 0x79a308: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79a308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79a30c:
    // 0x79a30c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a310:
    // 0x79a310: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a314:
    // 0x79a314: 0x1486fff9  bne         $a0, $a2, . + 4 + (-0x7 << 2)
label_79a318:
    if (ctx->pc == 0x79A318u) {
        ctx->pc = 0x79A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A314u;
        // 0x79a318: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A31Cu;
        goto label_79a31c;
    }
    ctx->pc = 0x79A314u;
    {
        const bool branch_taken_0x79a314 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x79A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A314u;
        // 0x79a318: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a314) {
            ctx->pc = 0x79A2FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a2fc;
        }
    }
    ctx->pc = 0x79A31Cu;
label_79a31c:
    // 0x79a31c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79a31cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_79a320:
    // 0x79a320: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x79a320u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_79a324:
    // 0x79a324: 0xc0a421a  jal         func_290868
label_79a328:
    if (ctx->pc == 0x79A328u) {
        ctx->pc = 0x79A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A324u;
        // 0x79a328: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A32Cu;
        goto label_79a32c;
    }
    ctx->pc = 0x79A324u;
    SET_GPR_U32(ctx, 31, 0x79A32Cu);
    ctx->pc = 0x79A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A324u;
    // 0x79a328: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A324u, 0x79A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A32Cu;
label_79a32c:
    // 0x79a32c: 0x8e63c180  lw          $v1, -0x3E80($s3)
    ctx->pc = 0x79a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79a330:
    // 0x79a330: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a334:
    // 0x79a334: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_79a338:
    if (ctx->pc == 0x79A338u) {
        ctx->pc = 0x79A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A334u;
        // 0x79a338: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A33Cu;
        goto label_79a33c;
    }
    ctx->pc = 0x79A334u;
    {
        const bool branch_taken_0x79a334 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A334u;
        // 0x79a338: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a334) {
            ctx->pc = 0x79A378u;
            goto label_79a378;
        }
    }
    ctx->pc = 0x79A33Cu;
label_79a33c:
    // 0x79a33c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x79a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_79a340:
    // 0x79a340: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_79a344:
    if (ctx->pc == 0x79A344u) {
        ctx->pc = 0x79A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A340u;
        // 0x79a344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A348u;
        goto label_79a348;
    }
    ctx->pc = 0x79A340u;
    {
        const bool branch_taken_0x79a340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x79A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A340u;
        // 0x79a344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a340) {
            ctx->pc = 0x79A350u;
            goto label_79a350;
        }
    }
    ctx->pc = 0x79A348u;
label_79a348:
    // 0x79a348: 0x1000000b  b           . + 4 + (0xB << 2)
label_79a34c:
    if (ctx->pc == 0x79A34Cu) {
        ctx->pc = 0x79A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A348u;
        // 0x79a34c: 0xac60003c  sw          $zero, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A350u;
        goto label_79a350;
    }
    ctx->pc = 0x79A348u;
    {
        const bool branch_taken_0x79a348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A348u;
        // 0x79a34c: 0xac60003c  sw          $zero, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a348) {
            ctx->pc = 0x79A378u;
            goto label_79a378;
        }
    }
    ctx->pc = 0x79A350u;
label_79a350:
    // 0x79a350: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79a350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79a354:
    // 0x79a354: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79a354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79a358:
    // 0x79a358: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79a35c:
    if (ctx->pc == 0x79A35Cu) {
        ctx->pc = 0x79A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A358u;
        // 0x79a35c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A360u;
        goto label_79a360;
    }
    ctx->pc = 0x79A358u;
    {
        const bool branch_taken_0x79a358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A358u;
        // 0x79a35c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a358) {
            ctx->pc = 0x79A378u;
            goto label_79a378;
        }
    }
    ctx->pc = 0x79A360u;
label_79a360:
    // 0x79a360: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79a360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79a364:
    // 0x79a364: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a368:
    // 0x79a368: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a36c:
    // 0x79a36c: 0x1486fff9  bne         $a0, $a2, . + 4 + (-0x7 << 2)
label_79a370:
    if (ctx->pc == 0x79A370u) {
        ctx->pc = 0x79A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A36Cu;
        // 0x79a370: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A374u;
        goto label_79a374;
    }
    ctx->pc = 0x79A36Cu;
    {
        const bool branch_taken_0x79a36c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x79A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A36Cu;
        // 0x79a370: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a36c) {
            ctx->pc = 0x79A354u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a354;
        }
    }
    ctx->pc = 0x79A374u;
label_79a374:
    // 0x79a374: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79a374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_79a378:
    // 0x79a378: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x79a378u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_79a37c:
    // 0x79a37c: 0xc0a421a  jal         func_290868
label_79a380:
    if (ctx->pc == 0x79A380u) {
        ctx->pc = 0x79A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A37Cu;
        // 0x79a380: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A384u;
        goto label_79a384;
    }
    ctx->pc = 0x79A37Cu;
    SET_GPR_U32(ctx, 31, 0x79A384u);
    ctx->pc = 0x79A380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A37Cu;
    // 0x79a380: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A37Cu, 0x79A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A384u;
label_79a384:
    // 0x79a384: 0x8e63c180  lw          $v1, -0x3E80($s3)
    ctx->pc = 0x79a384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79a388:
    // 0x79a388: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a38c:
    // 0x79a38c: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_79a390:
    if (ctx->pc == 0x79A390u) {
        ctx->pc = 0x79A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A38Cu;
        // 0x79a390: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A394u;
        goto label_79a394;
    }
    ctx->pc = 0x79A38Cu;
    {
        const bool branch_taken_0x79a38c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A38Cu;
        // 0x79a390: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a38c) {
            ctx->pc = 0x79A3D0u;
            goto label_79a3d0;
        }
    }
    ctx->pc = 0x79A394u;
label_79a394:
    // 0x79a394: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x79a394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_79a398:
    // 0x79a398: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_79a39c:
    if (ctx->pc == 0x79A39Cu) {
        ctx->pc = 0x79A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A398u;
        // 0x79a39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3A0u;
        goto label_79a3a0;
    }
    ctx->pc = 0x79A398u;
    {
        const bool branch_taken_0x79a398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x79A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A398u;
        // 0x79a39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a398) {
            ctx->pc = 0x79A3A8u;
            goto label_79a3a8;
        }
    }
    ctx->pc = 0x79A3A0u;
label_79a3a0:
    // 0x79a3a0: 0x1000000b  b           . + 4 + (0xB << 2)
label_79a3a4:
    if (ctx->pc == 0x79A3A4u) {
        ctx->pc = 0x79A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A0u;
        // 0x79a3a4: 0xac60003c  sw          $zero, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3A8u;
        goto label_79a3a8;
    }
    ctx->pc = 0x79A3A0u;
    {
        const bool branch_taken_0x79a3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A0u;
        // 0x79a3a4: 0xac60003c  sw          $zero, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3a0) {
            ctx->pc = 0x79A3D0u;
            goto label_79a3d0;
        }
    }
    ctx->pc = 0x79A3A8u;
label_79a3a8:
    // 0x79a3a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79a3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79a3ac:
    // 0x79a3ac: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79a3acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79a3b0:
    // 0x79a3b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79a3b4:
    if (ctx->pc == 0x79A3B4u) {
        ctx->pc = 0x79A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3B0u;
        // 0x79a3b4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3B8u;
        goto label_79a3b8;
    }
    ctx->pc = 0x79A3B0u;
    {
        const bool branch_taken_0x79a3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3B0u;
        // 0x79a3b4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3b0) {
            ctx->pc = 0x79A3D0u;
            goto label_79a3d0;
        }
    }
    ctx->pc = 0x79A3B8u;
label_79a3b8:
    // 0x79a3b8: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79a3bc:
    // 0x79a3bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a3c0:
    // 0x79a3c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a3c4:
    // 0x79a3c4: 0x1486fff9  bne         $a0, $a2, . + 4 + (-0x7 << 2)
label_79a3c8:
    if (ctx->pc == 0x79A3C8u) {
        ctx->pc = 0x79A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C4u;
        // 0x79a3c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3CCu;
        goto label_79a3cc;
    }
    ctx->pc = 0x79A3C4u;
    {
        const bool branch_taken_0x79a3c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x79A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C4u;
        // 0x79a3c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3c4) {
            ctx->pc = 0x79A3ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a3ac;
        }
    }
    ctx->pc = 0x79A3CCu;
label_79a3cc:
    // 0x79a3cc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79a3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_79a3d0:
    // 0x79a3d0: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x79a3d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_79a3d4:
    // 0x79a3d4: 0xc0a421a  jal         func_290868
label_79a3d8:
    if (ctx->pc == 0x79A3D8u) {
        ctx->pc = 0x79A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3D4u;
        // 0x79a3d8: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3DCu;
        goto label_79a3dc;
    }
    ctx->pc = 0x79A3D4u;
    SET_GPR_U32(ctx, 31, 0x79A3DCu);
    ctx->pc = 0x79A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3D4u;
    // 0x79a3d8: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A3D4u, 0x79A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3DCu;
label_79a3dc:
    // 0x79a3dc: 0x8e63c180  lw          $v1, -0x3E80($s3)
    ctx->pc = 0x79a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79a3e0:
    // 0x79a3e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a3e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a3e4:
    // 0x79a3e4: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_79a3e8:
    if (ctx->pc == 0x79A3E8u) {
        ctx->pc = 0x79A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3E4u;
        // 0x79a3e8: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3ECu;
        goto label_79a3ec;
    }
    ctx->pc = 0x79A3E4u;
    {
        const bool branch_taken_0x79a3e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3E4u;
        // 0x79a3e8: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3e4) {
            ctx->pc = 0x79A428u;
            goto label_79a428;
        }
    }
    ctx->pc = 0x79A3ECu;
label_79a3ec:
    // 0x79a3ec: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x79a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_79a3f0:
    // 0x79a3f0: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_79a3f4:
    if (ctx->pc == 0x79A3F4u) {
        ctx->pc = 0x79A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3F0u;
        // 0x79a3f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3F8u;
        goto label_79a3f8;
    }
    ctx->pc = 0x79A3F0u;
    {
        const bool branch_taken_0x79a3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x79A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3F0u;
        // 0x79a3f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3f0) {
            ctx->pc = 0x79A400u;
            goto label_79a400;
        }
    }
    ctx->pc = 0x79A3F8u;
label_79a3f8:
    // 0x79a3f8: 0x1000000b  b           . + 4 + (0xB << 2)
label_79a3fc:
    if (ctx->pc == 0x79A3FCu) {
        ctx->pc = 0x79A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3F8u;
        // 0x79a3fc: 0xac60003c  sw          $zero, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A400u;
        goto label_79a400;
    }
    ctx->pc = 0x79A3F8u;
    {
        const bool branch_taken_0x79a3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3F8u;
        // 0x79a3fc: 0xac60003c  sw          $zero, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3f8) {
            ctx->pc = 0x79A428u;
            goto label_79a428;
        }
    }
    ctx->pc = 0x79A400u;
label_79a400:
    // 0x79a400: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79a400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79a404:
    // 0x79a404: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79a404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79a408:
    // 0x79a408: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79a40c:
    if (ctx->pc == 0x79A40Cu) {
        ctx->pc = 0x79A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A408u;
        // 0x79a40c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A410u;
        goto label_79a410;
    }
    ctx->pc = 0x79A408u;
    {
        const bool branch_taken_0x79a408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A408u;
        // 0x79a40c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a408) {
            ctx->pc = 0x79A428u;
            goto label_79a428;
        }
    }
    ctx->pc = 0x79A410u;
label_79a410:
    // 0x79a410: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79a410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79a414:
    // 0x79a414: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a418:
    // 0x79a418: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a41c:
    // 0x79a41c: 0x1486fff9  bne         $a0, $a2, . + 4 + (-0x7 << 2)
label_79a420:
    if (ctx->pc == 0x79A420u) {
        ctx->pc = 0x79A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A41Cu;
        // 0x79a420: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A424u;
        goto label_79a424;
    }
    ctx->pc = 0x79A41Cu;
    {
        const bool branch_taken_0x79a41c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x79A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A41Cu;
        // 0x79a420: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a41c) {
            ctx->pc = 0x79A404u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a404;
        }
    }
    ctx->pc = 0x79A424u;
label_79a424:
    // 0x79a424: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79a424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_79a428:
    // 0x79a428: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x79a428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_79a42c:
    // 0x79a42c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79a430:
    // 0x79a430: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79a430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_79a434:
    // 0x79a434: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79a434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79a438:
    // 0x79a438: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79a438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_79a43c:
    // 0x79a43c: 0x2444ea60  addiu       $a0, $v0, -0x15A0
    ctx->pc = 0x79a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
label_79a440:
    // 0x79a440: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79a440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_79a444:
    // 0x79a444: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x79a444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
label_79a448:
    // 0x79a448: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79a44c:
    // 0x79a44c: 0xc0b0a92  jal         func_2C2A48
label_79a450:
    if (ctx->pc == 0x79A450u) {
        ctx->pc = 0x79A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A44Cu;
        // 0x79a450: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A454u;
        goto label_79a454;
    }
    ctx->pc = 0x79A44Cu;
    SET_GPR_U32(ctx, 31, 0x79A454u);
    ctx->pc = 0x79A450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A44Cu;
    // 0x79a450: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79A44Cu, 0x79A454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A454u;
label_79a454:
    // 0x79a454: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x79a454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a458:
    // 0x79a458: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a45c:
    // 0x79a45c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79a45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79a460:
    // 0x79a460: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79a460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a464:
    // 0x79a464: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a468:
    // 0x79a468: 0xc0a57e0  jal         func_295F80
label_79a46c:
    if (ctx->pc == 0x79A46Cu) {
        ctx->pc = 0x79A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A468u;
        // 0x79a46c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A470u;
        goto label_79a470;
    }
    ctx->pc = 0x79A468u;
    SET_GPR_U32(ctx, 31, 0x79A470u);
    ctx->pc = 0x79A46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A468u;
    // 0x79a46c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A468u, 0x79A470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A470u;
label_79a470:
    // 0x79a470: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79a470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_79a474:
    // 0x79a474: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79a474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79a478:
    // 0x79a478: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79a478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a47c:
    // 0x79a47c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a47cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a480:
    // 0x79a480: 0xc0a57e0  jal         func_295F80
label_79a484:
    if (ctx->pc == 0x79A484u) {
        ctx->pc = 0x79A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A480u;
        // 0x79a484: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A488u;
        goto label_79a488;
    }
    ctx->pc = 0x79A480u;
    SET_GPR_U32(ctx, 31, 0x79A488u);
    ctx->pc = 0x79A484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A480u;
    // 0x79a484: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A480u, 0x79A488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A488u;
label_79a488:
    // 0x79a488: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x79a488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_79a48c:
    // 0x79a48c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79a48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79a490:
    // 0x79a490: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79a490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a494:
    // 0x79a494: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a498:
    // 0x79a498: 0xc0a57e0  jal         func_295F80
label_79a49c:
    if (ctx->pc == 0x79A49Cu) {
        ctx->pc = 0x79A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A498u;
        // 0x79a49c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4A0u;
        goto label_79a4a0;
    }
    ctx->pc = 0x79A498u;
    SET_GPR_U32(ctx, 31, 0x79A4A0u);
    ctx->pc = 0x79A49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A498u;
    // 0x79a49c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A498u, 0x79A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4A0u;
label_79a4a0:
    // 0x79a4a0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79a4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a4a4:
    // 0x79a4a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a4a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a4a8:
    // 0x79a4a8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79a4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79a4ac:
    // 0x79a4ac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x79a4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_79a4b0:
    // 0x79a4b0: 0xc0a57e0  jal         func_295F80
label_79a4b4:
    if (ctx->pc == 0x79A4B4u) {
        ctx->pc = 0x79A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4B0u;
        // 0x79a4b4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4B8u;
        goto label_79a4b8;
    }
    ctx->pc = 0x79A4B0u;
    SET_GPR_U32(ctx, 31, 0x79A4B8u);
    ctx->pc = 0x79A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4B0u;
    // 0x79a4b4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A4B0u, 0x79A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4B8u;
label_79a4b8:
    // 0x79a4b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a4bc:
    // 0x79a4bc: 0xc0a56e0  jal         func_295B80
label_79a4c0:
    if (ctx->pc == 0x79A4C0u) {
        ctx->pc = 0x79A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4BCu;
        // 0x79a4c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4C4u;
        goto label_79a4c4;
    }
    ctx->pc = 0x79A4BCu;
    SET_GPR_U32(ctx, 31, 0x79A4C4u);
    ctx->pc = 0x79A4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4BCu;
    // 0x79a4c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x79A4BCu, 0x79A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4C4u;
label_79a4c4:
    // 0x79a4c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79a4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_79a4c8:
    // 0x79a4c8: 0xc0a56e0  jal         func_295B80
label_79a4cc:
    if (ctx->pc == 0x79A4CCu) {
        ctx->pc = 0x79A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4C8u;
        // 0x79a4cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4D0u;
        goto label_79a4d0;
    }
    ctx->pc = 0x79A4C8u;
    SET_GPR_U32(ctx, 31, 0x79A4D0u);
    ctx->pc = 0x79A4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4C8u;
    // 0x79a4cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x79A4C8u, 0x79A4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4D0u;
label_79a4d0:
    // 0x79a4d0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x79a4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_79a4d4:
    // 0x79a4d4: 0xc0a56e0  jal         func_295B80
label_79a4d8:
    if (ctx->pc == 0x79A4D8u) {
        ctx->pc = 0x79A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4D4u;
        // 0x79a4d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4DCu;
        goto label_79a4dc;
    }
    ctx->pc = 0x79A4D4u;
    SET_GPR_U32(ctx, 31, 0x79A4DCu);
    ctx->pc = 0x79A4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4D4u;
    // 0x79a4d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x79A4D4u, 0x79A4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4DCu;
label_79a4dc:
    // 0x79a4dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a4dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_79a4e0:
    // 0x79a4e0: 0xc0a56e0  jal         func_295B80
label_79a4e4:
    if (ctx->pc == 0x79A4E4u) {
        ctx->pc = 0x79A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4E0u;
        // 0x79a4e4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4E8u;
        goto label_79a4e8;
    }
    ctx->pc = 0x79A4E0u;
    SET_GPR_U32(ctx, 31, 0x79A4E8u);
    ctx->pc = 0x79A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4E0u;
    // 0x79a4e4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x79A4E0u, 0x79A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4E8u;
label_79a4e8:
    // 0x79a4e8: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a4ec:
    // 0x79a4ec: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x79a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_79a4f0:
    // 0x79a4f0: 0xc0b56a8  jal         func_2D5AA0
label_79a4f4:
    if (ctx->pc == 0x79A4F4u) {
        ctx->pc = 0x79A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4F0u;
        // 0x79a4f4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4F8u;
        goto label_79a4f8;
    }
    ctx->pc = 0x79A4F0u;
    SET_GPR_U32(ctx, 31, 0x79A4F8u);
    ctx->pc = 0x79A4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4F0u;
    // 0x79a4f4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A4F0u, 0x79A4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4F8u;
label_79a4f8:
    // 0x79a4f8: 0xc0b101e  jal         func_2C4078
label_79a4fc:
    if (ctx->pc == 0x79A4FCu) {
        ctx->pc = 0x79A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4F8u;
        // 0x79a4fc: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A500u;
        goto label_79a500;
    }
    ctx->pc = 0x79A4F8u;
    SET_GPR_U32(ctx, 31, 0x79A500u);
    ctx->pc = 0x79A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4F8u;
    // 0x79a4fc: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A4F8u, 0x79A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A500u;
label_79a500:
    // 0x79a500: 0xc0b0f04  jal         func_2C3C10
label_79a504:
    if (ctx->pc == 0x79A504u) {
        ctx->pc = 0x79A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A500u;
        // 0x79a504: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A508u;
        goto label_79a508;
    }
    ctx->pc = 0x79A500u;
    SET_GPR_U32(ctx, 31, 0x79A508u);
    ctx->pc = 0x79A504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A500u;
    // 0x79a504: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A500u, 0x79A508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A508u;
label_79a508:
    // 0x79a508: 0xc0b6dac  jal         func_2DB6B0
label_79a50c:
    if (ctx->pc == 0x79A50Cu) {
        ctx->pc = 0x79A510u;
        goto label_79a510;
    }
    ctx->pc = 0x79A508u;
    SET_GPR_U32(ctx, 31, 0x79A510u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A508u, 0x79A510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A510u;
label_79a510:
    // 0x79a510: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79a510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79a514:
    // 0x79a514: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79a514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79a518:
    // 0x79a518: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79a518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79a51c:
    // 0x79a51c: 0xa0f809  jalr        $a1
label_79a520:
    if (ctx->pc == 0x79A520u) {
        ctx->pc = 0x79A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A51Cu;
        // 0x79a520: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A524u;
        goto label_79a524;
    }
    ctx->pc = 0x79A51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79A524u);
        ctx->pc = 0x79A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A51Cu;
        // 0x79a520: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A51Cu, 0x79A524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A524u;
label_79a524:
    // 0x79a524: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a528:
    // 0x79a528: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a52c:
    // 0x79a52c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79a52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a530:
    // 0x79a530: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a534:
    // 0x79a534: 0xc0a57e0  jal         func_295F80
label_79a538:
    if (ctx->pc == 0x79A538u) {
        ctx->pc = 0x79A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A534u;
        // 0x79a538: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A53Cu;
        goto label_79a53c;
    }
    ctx->pc = 0x79A534u;
    SET_GPR_U32(ctx, 31, 0x79A53Cu);
    ctx->pc = 0x79A538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A534u;
    // 0x79a538: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A534u, 0x79A53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A53Cu;
label_79a53c:
    // 0x79a53c: 0xc0b6dac  jal         func_2DB6B0
label_79a540:
    if (ctx->pc == 0x79A540u) {
        ctx->pc = 0x79A544u;
        goto label_79a544;
    }
    ctx->pc = 0x79A53Cu;
    SET_GPR_U32(ctx, 31, 0x79A544u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A53Cu, 0x79A544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A544u;
label_79a544:
    // 0x79a544: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79a544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79a548:
    // 0x79a548: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79a548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79a54c:
    // 0x79a54c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79a54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79a550:
    // 0x79a550: 0xa0f809  jalr        $a1
label_79a554:
    if (ctx->pc == 0x79A554u) {
        ctx->pc = 0x79A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A550u;
        // 0x79a554: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A558u;
        goto label_79a558;
    }
    ctx->pc = 0x79A550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79A558u);
        ctx->pc = 0x79A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A550u;
        // 0x79a554: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A550u, 0x79A558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A558u;
label_79a558:
    // 0x79a558: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a55c:
    // 0x79a55c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79a55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a560:
    // 0x79a560: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a564:
    // 0x79a564: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79a564u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_79a568:
    // 0x79a568: 0xc0a57e0  jal         func_295F80
label_79a56c:
    if (ctx->pc == 0x79A56Cu) {
        ctx->pc = 0x79A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A568u;
        // 0x79a56c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A570u;
        goto label_79a570;
    }
    ctx->pc = 0x79A568u;
    SET_GPR_U32(ctx, 31, 0x79A570u);
    ctx->pc = 0x79A56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A568u;
    // 0x79a56c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A568u, 0x79A570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A570u;
label_79a570:
    // 0x79a570: 0xc0b6dac  jal         func_2DB6B0
label_79a574:
    if (ctx->pc == 0x79A574u) {
        ctx->pc = 0x79A578u;
        goto label_79a578;
    }
    ctx->pc = 0x79A570u;
    SET_GPR_U32(ctx, 31, 0x79A578u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A570u, 0x79A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A578u;
label_79a578:
    // 0x79a578: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79a578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79a57c:
    // 0x79a57c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79a57cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79a580:
    // 0x79a580: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79a580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79a584:
    // 0x79a584: 0xa0f809  jalr        $a1
label_79a588:
    if (ctx->pc == 0x79A588u) {
        ctx->pc = 0x79A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A584u;
        // 0x79a588: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A58Cu;
        goto label_79a58c;
    }
    ctx->pc = 0x79A584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79A58Cu);
        ctx->pc = 0x79A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A584u;
        // 0x79a588: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A584u, 0x79A58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A58Cu;
label_79a58c:
    // 0x79a58c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a590:
    // 0x79a590: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79a590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a594:
    // 0x79a594: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a598:
    // 0x79a598: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79a598u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_79a59c:
    // 0x79a59c: 0xc0a57e0  jal         func_295F80
label_79a5a0:
    if (ctx->pc == 0x79A5A0u) {
        ctx->pc = 0x79A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A59Cu;
        // 0x79a5a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5A4u;
        goto label_79a5a4;
    }
    ctx->pc = 0x79A59Cu;
    SET_GPR_U32(ctx, 31, 0x79A5A4u);
    ctx->pc = 0x79A5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A59Cu;
    // 0x79a5a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A59Cu, 0x79A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5A4u;
label_79a5a4:
    // 0x79a5a4: 0xc0b6dac  jal         func_2DB6B0
label_79a5a8:
    if (ctx->pc == 0x79A5A8u) {
        ctx->pc = 0x79A5ACu;
        goto label_79a5ac;
    }
    ctx->pc = 0x79A5A4u;
    SET_GPR_U32(ctx, 31, 0x79A5ACu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A5A4u, 0x79A5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5ACu;
label_79a5ac:
    // 0x79a5ac: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79a5b0:
    // 0x79a5b0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79a5b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79a5b4:
    // 0x79a5b4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79a5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79a5b8:
    // 0x79a5b8: 0xa0f809  jalr        $a1
label_79a5bc:
    if (ctx->pc == 0x79A5BCu) {
        ctx->pc = 0x79A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5B8u;
        // 0x79a5bc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5C0u;
        goto label_79a5c0;
    }
    ctx->pc = 0x79A5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79A5C0u);
        ctx->pc = 0x79A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5B8u;
        // 0x79a5bc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A5B8u, 0x79A5C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A5C0u;
label_79a5c0:
    // 0x79a5c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a5c4:
    // 0x79a5c4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79a5c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_79a5c8:
    // 0x79a5c8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x79a5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_79a5cc:
    // 0x79a5cc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79a5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79a5d0:
    // 0x79a5d0: 0xc0a57e0  jal         func_295F80
label_79a5d4:
    if (ctx->pc == 0x79A5D4u) {
        ctx->pc = 0x79A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5D0u;
        // 0x79a5d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5D8u;
        goto label_79a5d8;
    }
    ctx->pc = 0x79A5D0u;
    SET_GPR_U32(ctx, 31, 0x79A5D8u);
    ctx->pc = 0x79A5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5D0u;
    // 0x79a5d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A5D0u, 0x79A5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5D8u;
label_79a5d8:
    // 0x79a5d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_79a5dc:
    if (ctx->pc == 0x79A5DCu) {
        ctx->pc = 0x79A5E0u;
        goto label_79a5e0;
    }
    ctx->pc = 0x79A5D8u;
    {
        const bool branch_taken_0x79a5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a5d8) {
            ctx->pc = 0x79A5ECu;
            goto label_79a5ec;
        }
    }
    ctx->pc = 0x79A5E0u;
label_79a5e0:
    // 0x79a5e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a5e4:
    // 0x79a5e4: 0xc0b56a8  jal         func_2D5AA0
label_79a5e8:
    if (ctx->pc == 0x79A5E8u) {
        ctx->pc = 0x79A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5E4u;
        // 0x79a5e8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5ECu;
        goto label_79a5ec;
    }
    ctx->pc = 0x79A5E4u;
    SET_GPR_U32(ctx, 31, 0x79A5ECu);
    ctx->pc = 0x79A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5E4u;
    // 0x79a5e8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A5E4u, 0x79A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5ECu;
label_79a5ec:
    // 0x79a5ec: 0xc1e64e6  jal         func_799398
label_79a5f0:
    if (ctx->pc == 0x79A5F0u) {
        ctx->pc = 0x79A5F4u;
        goto label_79a5f4;
    }
    ctx->pc = 0x79A5ECu;
    SET_GPR_U32(ctx, 31, 0x79A5F4u);
    ctx->pc = 0x799398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799398u, 0x79A5ECu, 0x79A5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5F4u;
label_79a5f4:
    // 0x79a5f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_79a5f8:
    if (ctx->pc == 0x79A5F8u) {
        ctx->pc = 0x79A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5F4u;
        // 0x79a5f8: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5FCu;
        goto label_79a5fc;
    }
    ctx->pc = 0x79A5F4u;
    {
        const bool branch_taken_0x79a5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5F4u;
        // 0x79a5f8: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5f4) {
            ctx->pc = 0x79A5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a5e0;
        }
    }
    ctx->pc = 0x79A5FCu;
label_79a5fc:
    // 0x79a5fc: 0xc0b0f90  jal         func_2C3E40
label_79a600:
    if (ctx->pc == 0x79A600u) {
        ctx->pc = 0x79A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5FCu;
        // 0x79a600: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A604u;
        goto label_79a604;
    }
    ctx->pc = 0x79A5FCu;
    SET_GPR_U32(ctx, 31, 0x79A604u);
    ctx->pc = 0x79A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5FCu;
    // 0x79a600: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79A5FCu, 0x79A604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A604u;
label_79a604:
    // 0x79a604: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
label_79a608:
    if (ctx->pc == 0x79A608u) {
        ctx->pc = 0x79A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A604u;
        // 0x79a608: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A60Cu;
        goto label_79a60c;
    }
    ctx->pc = 0x79A604u;
    {
        const bool branch_taken_0x79a604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x79A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A604u;
        // 0x79a608: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a604) {
            ctx->pc = 0x79A5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a5e0;
        }
    }
    ctx->pc = 0x79A60Cu;
label_79a60c:
    // 0x79a60c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x79a60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79a610:
    // 0x79a610: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x79a610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a614:
    // 0x79a614: 0xc0b56a8  jal         func_2D5AA0
label_79a618:
    if (ctx->pc == 0x79A618u) {
        ctx->pc = 0x79A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A614u;
        // 0x79a618: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A61Cu;
        goto label_79a61c;
    }
    ctx->pc = 0x79A614u;
    SET_GPR_U32(ctx, 31, 0x79A61Cu);
    ctx->pc = 0x79A618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A614u;
    // 0x79a618: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A614u, 0x79A61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A61Cu;
label_79a61c:
    // 0x79a61c: 0x10000005  b           . + 4 + (0x5 << 2)
label_79a620:
    if (ctx->pc == 0x79A620u) {
        ctx->pc = 0x79A624u;
        goto label_79a624;
    }
    ctx->pc = 0x79A61Cu;
    {
        const bool branch_taken_0x79a61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a61c) {
            ctx->pc = 0x79A634u;
            goto label_79a634;
        }
    }
    ctx->pc = 0x79A624u;
label_79a624:
    // 0x79a624: 0x0  nop
    ctx->pc = 0x79a624u;
    // NOP
label_79a628:
    // 0x79a628: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a62c:
    // 0x79a62c: 0xc0b56a8  jal         func_2D5AA0
label_79a630:
    if (ctx->pc == 0x79A630u) {
        ctx->pc = 0x79A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A62Cu;
        // 0x79a630: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A634u;
        goto label_79a634;
    }
    ctx->pc = 0x79A62Cu;
    SET_GPR_U32(ctx, 31, 0x79A634u);
    ctx->pc = 0x79A630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A62Cu;
    // 0x79a630: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A62Cu, 0x79A634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A634u;
label_79a634:
    // 0x79a634: 0xc1e64e6  jal         func_799398
label_79a638:
    if (ctx->pc == 0x79A638u) {
        ctx->pc = 0x79A63Cu;
        goto label_79a63c;
    }
    ctx->pc = 0x79A634u;
    SET_GPR_U32(ctx, 31, 0x79A63Cu);
    ctx->pc = 0x799398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799398u, 0x79A634u, 0x79A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A63Cu;
label_79a63c:
    // 0x79a63c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_79a640:
    if (ctx->pc == 0x79A640u) {
        ctx->pc = 0x79A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A63Cu;
        // 0x79a640: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A644u;
        goto label_79a644;
    }
    ctx->pc = 0x79A63Cu;
    {
        const bool branch_taken_0x79a63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A63Cu;
        // 0x79a640: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a63c) {
            ctx->pc = 0x79A628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a628;
        }
    }
    ctx->pc = 0x79A644u;
label_79a644:
    // 0x79a644: 0xc0b0f90  jal         func_2C3E40
label_79a648:
    if (ctx->pc == 0x79A648u) {
        ctx->pc = 0x79A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A644u;
        // 0x79a648: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A64Cu;
        goto label_79a64c;
    }
    ctx->pc = 0x79A644u;
    SET_GPR_U32(ctx, 31, 0x79A64Cu);
    ctx->pc = 0x79A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A644u;
    // 0x79a648: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79A644u, 0x79A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A64Cu;
label_79a64c:
    // 0x79a64c: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
label_79a650:
    if (ctx->pc == 0x79A650u) {
        ctx->pc = 0x79A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A64Cu;
        // 0x79a650: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A654u;
        goto label_79a654;
    }
    ctx->pc = 0x79A64Cu;
    {
        const bool branch_taken_0x79a64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x79A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A64Cu;
        // 0x79a650: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a64c) {
            ctx->pc = 0x79A628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a628;
        }
    }
    ctx->pc = 0x79A654u;
label_79a654:
    // 0x79a654: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x79a654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_79a658:
    // 0x79a658: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x79a658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_79a65c:
    // 0x79a65c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x79a65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_79a660:
    // 0x79a660: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79a660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79a664:
    // 0x79a664: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a668:
    // 0x79a668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a66c:
    // 0x79a66c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a66cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_79a670:
    // 0x79a670: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79a670u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
label_79a674:
    // 0x79a674: 0xa3a60020  sb          $a2, 0x20($sp)
    ctx->pc = 0x79a674u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 6));
label_79a678:
    // 0x79a678: 0xc0b0e6c  jal         func_2C39B0
label_79a67c:
    if (ctx->pc == 0x79A67Cu) {
        ctx->pc = 0x79A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A678u;
        // 0x79a67c: 0xa3a70030  sb          $a3, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A680u;
        goto label_79a680;
    }
    ctx->pc = 0x79A678u;
    SET_GPR_U32(ctx, 31, 0x79A680u);
    ctx->pc = 0x79A67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A678u;
    // 0x79a67c: 0xa3a70030  sb          $a3, 0x30($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A678u, 0x79A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A680u;
label_79a680:
    // 0x79a680: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a684:
    // 0x79a684: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79a688:
    // 0x79a688: 0xc0b0fb6  jal         func_2C3ED8
label_79a68c:
    if (ctx->pc == 0x79A68Cu) {
        ctx->pc = 0x79A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A688u;
        // 0x79a68c: 0x2445c060  addiu       $a1, $v0, -0x3FA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A690u;
        goto label_79a690;
    }
    ctx->pc = 0x79A688u;
    SET_GPR_U32(ctx, 31, 0x79A690u);
    ctx->pc = 0x79A68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A688u;
    // 0x79a68c: 0x2445c060  addiu       $a1, $v0, -0x3FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A688u, 0x79A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A690u;
label_79a690:
    // 0x79a690: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x79a690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_79a694:
    // 0x79a694: 0xc07e804  jal         func_1FA010
label_79a698:
    if (ctx->pc == 0x79A698u) {
        ctx->pc = 0x79A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A694u;
        // 0x79a698: 0x24449b70  addiu       $a0, $v0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A69Cu;
        goto label_79a69c;
    }
    ctx->pc = 0x79A694u;
    SET_GPR_U32(ctx, 31, 0x79A69Cu);
    ctx->pc = 0x79A698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A694u;
    // 0x79a698: 0x24449b70  addiu       $a0, $v0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x79A694u, 0x79A69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A69Cu;
label_79a69c:
    // 0x79a69c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x79a69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_79a6a0:
    // 0x79a6a0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x79a6a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_79a6a4:
    // 0x79a6a4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_79a6a8:
    if (ctx->pc == 0x79A6A8u) {
        ctx->pc = 0x79A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6A4u;
        // 0x79a6a8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6ACu;
        goto label_79a6ac;
    }
    ctx->pc = 0x79A6A4u;
    {
        const bool branch_taken_0x79a6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6A4u;
        // 0x79a6a8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6a4) {
            ctx->pc = 0x79A6E4u;
            goto label_79a6e4;
        }
    }
    ctx->pc = 0x79A6ACu;
label_79a6ac:
    // 0x79a6ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_79a6b0:
    // 0x79a6b0: 0x2442c070  addiu       $v0, $v0, -0x3F90
    ctx->pc = 0x79a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951024));
label_79a6b4:
    // 0x79a6b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a6b8:
    // 0x79a6b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a6bc:
    // 0x79a6bc: 0x800008  jr          $a0
label_79a6c0:
    if (ctx->pc == 0x79A6C0u) {
        ctx->pc = 0x79A6C4u;
        goto label_79a6c4;
    }
    ctx->pc = 0x79A6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79A6C4u: goto label_79a6c4;
            case 0x79A6D4u: goto label_79a6d4;
            case 0x79A6E4u: goto label_79a6e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A6BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79A6C4u;
label_79a6c4:
    // 0x79a6c4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_79a6c8:
    // 0x79a6c8: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x79a6c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_79a6cc:
    // 0x79a6cc: 0xc0a54b4  jal         func_2952D0
label_79a6d0:
    if (ctx->pc == 0x79A6D0u) {
        ctx->pc = 0x79A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6CCu;
        // 0x79a6d0: 0x24446ab0  addiu       $a0, $v0, 0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6D4u;
        goto label_79a6d4;
    }
    ctx->pc = 0x79A6CCu;
    SET_GPR_U32(ctx, 31, 0x79A6D4u);
    ctx->pc = 0x79A6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6CCu;
    // 0x79a6d0: 0x24446ab0  addiu       $a0, $v0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A6CCu, 0x79A6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6D4u;
label_79a6d4:
    // 0x79a6d4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_79a6d8:
    // 0x79a6d8: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x79a6d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_79a6dc:
    // 0x79a6dc: 0xc0a54b4  jal         func_2952D0
label_79a6e0:
    if (ctx->pc == 0x79A6E0u) {
        ctx->pc = 0x79A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6DCu;
        // 0x79a6e0: 0x24446ab0  addiu       $a0, $v0, 0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6E4u;
        goto label_79a6e4;
    }
    ctx->pc = 0x79A6DCu;
    SET_GPR_U32(ctx, 31, 0x79A6E4u);
    ctx->pc = 0x79A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6DCu;
    // 0x79a6e0: 0x24446ab0  addiu       $a0, $v0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A6DCu, 0x79A6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6E4u;
label_79a6e4:
    // 0x79a6e4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_79a6e8:
    // 0x79a6e8: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x79a6e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_79a6ec:
    // 0x79a6ec: 0x24506ab0  addiu       $s0, $v0, 0x6AB0
    ctx->pc = 0x79a6ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
label_79a6f0:
    // 0x79a6f0: 0x269164f0  addiu       $s1, $s4, 0x64F0
    ctx->pc = 0x79a6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
label_79a6f4:
    // 0x79a6f4: 0xc0a54b4  jal         func_2952D0
label_79a6f8:
    if (ctx->pc == 0x79A6F8u) {
        ctx->pc = 0x79A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6F4u;
        // 0x79a6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A6FCu;
        goto label_79a6fc;
    }
    ctx->pc = 0x79A6F4u;
    SET_GPR_U32(ctx, 31, 0x79A6FCu);
    ctx->pc = 0x79A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6F4u;
    // 0x79a6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A6F4u, 0x79A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6FCu;
label_79a6fc:
    // 0x79a6fc: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x79a6fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_79a700:
    // 0x79a700: 0xc0a54b4  jal         func_2952D0
label_79a704:
    if (ctx->pc == 0x79A704u) {
        ctx->pc = 0x79A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A700u;
        // 0x79a704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A708u;
        goto label_79a708;
    }
    ctx->pc = 0x79A700u;
    SET_GPR_U32(ctx, 31, 0x79A708u);
    ctx->pc = 0x79A704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A700u;
    // 0x79a704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A700u, 0x79A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A708u;
label_79a708:
    // 0x79a708: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x79a708u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_79a70c:
    // 0x79a70c: 0xc0a421a  jal         func_290868
label_79a710:
    if (ctx->pc == 0x79A710u) {
        ctx->pc = 0x79A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A70Cu;
        // 0x79a710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A714u;
        goto label_79a714;
    }
    ctx->pc = 0x79A70Cu;
    SET_GPR_U32(ctx, 31, 0x79A714u);
    ctx->pc = 0x79A710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A70Cu;
    // 0x79a710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A70Cu, 0x79A714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A714u;
label_79a714:
    // 0x79a714: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_79a718:
    if (ctx->pc == 0x79A718u) {
        ctx->pc = 0x79A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A714u;
        // 0x79a718: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A71Cu;
        goto label_79a71c;
    }
    ctx->pc = 0x79A714u;
    {
        const bool branch_taken_0x79a714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A714u;
        // 0x79a718: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a714) {
            ctx->pc = 0x79A770u;
            goto label_79a770;
        }
    }
    ctx->pc = 0x79A71Cu;
label_79a71c:
    // 0x79a71c: 0xc0a421a  jal         func_290868
label_79a720:
    if (ctx->pc == 0x79A720u) {
        ctx->pc = 0x79A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A71Cu;
        // 0x79a720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A724u;
        goto label_79a724;
    }
    ctx->pc = 0x79A71Cu;
    SET_GPR_U32(ctx, 31, 0x79A724u);
    ctx->pc = 0x79A720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A71Cu;
    // 0x79a720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A71Cu, 0x79A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A724u;
label_79a724:
    // 0x79a724: 0x8e63c180  lw          $v1, -0x3E80($s3)
    ctx->pc = 0x79a724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79a728:
    // 0x79a728: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a72c:
    // 0x79a72c: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_79a730:
    if (ctx->pc == 0x79A730u) {
        ctx->pc = 0x79A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A72Cu;
        // 0x79a730: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A734u;
        goto label_79a734;
    }
    ctx->pc = 0x79A72Cu;
    {
        const bool branch_taken_0x79a72c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A72Cu;
        // 0x79a730: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a72c) {
            ctx->pc = 0x79A770u;
            goto label_79a770;
        }
    }
    ctx->pc = 0x79A734u;
label_79a734:
    // 0x79a734: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x79a734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_79a738:
    // 0x79a738: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_79a73c:
    if (ctx->pc == 0x79A73Cu) {
        ctx->pc = 0x79A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A738u;
        // 0x79a73c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A740u;
        goto label_79a740;
    }
    ctx->pc = 0x79A738u;
    {
        const bool branch_taken_0x79a738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A738u;
        // 0x79a73c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a738) {
            ctx->pc = 0x79A748u;
            goto label_79a748;
        }
    }
    ctx->pc = 0x79A740u;
label_79a740:
    // 0x79a740: 0x1000000b  b           . + 4 + (0xB << 2)
label_79a744:
    if (ctx->pc == 0x79A744u) {
        ctx->pc = 0x79A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A740u;
        // 0x79a744: 0xac66003c  sw          $a2, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A748u;
        goto label_79a748;
    }
    ctx->pc = 0x79A740u;
    {
        const bool branch_taken_0x79a740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A740u;
        // 0x79a744: 0xac66003c  sw          $a2, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a740) {
            ctx->pc = 0x79A770u;
            goto label_79a770;
        }
    }
    ctx->pc = 0x79A748u;
label_79a748:
    // 0x79a748: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79a748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79a74c:
    // 0x79a74c: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79a74cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79a750:
    // 0x79a750: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79a754:
    if (ctx->pc == 0x79A754u) {
        ctx->pc = 0x79A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A750u;
        // 0x79a754: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A758u;
        goto label_79a758;
    }
    ctx->pc = 0x79A750u;
    {
        const bool branch_taken_0x79a750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A750u;
        // 0x79a754: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a750) {
            ctx->pc = 0x79A770u;
            goto label_79a770;
        }
    }
    ctx->pc = 0x79A758u;
label_79a758:
    // 0x79a758: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79a758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79a75c:
    // 0x79a75c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a760:
    // 0x79a760: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a764:
    // 0x79a764: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_79a768:
    if (ctx->pc == 0x79A768u) {
        ctx->pc = 0x79A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A764u;
        // 0x79a768: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A76Cu;
        goto label_79a76c;
    }
    ctx->pc = 0x79A764u;
    {
        const bool branch_taken_0x79a764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A764u;
        // 0x79a768: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a764) {
            ctx->pc = 0x79A74Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a74c;
        }
    }
    ctx->pc = 0x79A76Cu;
label_79a76c:
    // 0x79a76c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x79a76cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_79a770:
    // 0x79a770: 0x269064f0  addiu       $s0, $s4, 0x64F0
    ctx->pc = 0x79a770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
label_79a774:
    // 0x79a774: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x79a774u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_79a778:
    // 0x79a778: 0xc0a421a  jal         func_290868
label_79a77c:
    if (ctx->pc == 0x79A77Cu) {
        ctx->pc = 0x79A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A778u;
        // 0x79a77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A780u;
        goto label_79a780;
    }
    ctx->pc = 0x79A778u;
    SET_GPR_U32(ctx, 31, 0x79A780u);
    ctx->pc = 0x79A77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A778u;
    // 0x79a77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A778u, 0x79A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A780u;
label_79a780:
    // 0x79a780: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_79a784:
    if (ctx->pc == 0x79A784u) {
        ctx->pc = 0x79A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A780u;
        // 0x79a784: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A788u;
        goto label_79a788;
    }
    ctx->pc = 0x79A780u;
    {
        const bool branch_taken_0x79a780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A780u;
        // 0x79a784: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a780) {
            ctx->pc = 0x79A7E0u;
            goto label_79a7e0;
        }
    }
    ctx->pc = 0x79A788u;
label_79a788:
    // 0x79a788: 0xc0a421a  jal         func_290868
label_79a78c:
    if (ctx->pc == 0x79A78Cu) {
        ctx->pc = 0x79A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A788u;
        // 0x79a78c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A790u;
        goto label_79a790;
    }
    ctx->pc = 0x79A788u;
    SET_GPR_U32(ctx, 31, 0x79A790u);
    ctx->pc = 0x79A78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A788u;
    // 0x79a78c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A788u, 0x79A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A790u;
label_79a790:
    // 0x79a790: 0x8e63c180  lw          $v1, -0x3E80($s3)
    ctx->pc = 0x79a790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79a794:
    // 0x79a794: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a798:
    // 0x79a798: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_79a79c:
    if (ctx->pc == 0x79A79Cu) {
        ctx->pc = 0x79A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A798u;
        // 0x79a79c: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7A0u;
        goto label_79a7a0;
    }
    ctx->pc = 0x79A798u;
    {
        const bool branch_taken_0x79a798 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A798u;
        // 0x79a79c: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a798) {
            ctx->pc = 0x79A7E0u;
            goto label_79a7e0;
        }
    }
    ctx->pc = 0x79A7A0u;
label_79a7a0:
    // 0x79a7a0: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x79a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_79a7a4:
    // 0x79a7a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_79a7a8:
    if (ctx->pc == 0x79A7A8u) {
        ctx->pc = 0x79A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7A4u;
        // 0x79a7a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7ACu;
        goto label_79a7ac;
    }
    ctx->pc = 0x79A7A4u;
    {
        const bool branch_taken_0x79a7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7A4u;
        // 0x79a7a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7a4) {
            ctx->pc = 0x79A7B8u;
            goto label_79a7b8;
        }
    }
    ctx->pc = 0x79A7ACu;
label_79a7ac:
    // 0x79a7ac: 0x1000000c  b           . + 4 + (0xC << 2)
label_79a7b0:
    if (ctx->pc == 0x79A7B0u) {
        ctx->pc = 0x79A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7ACu;
        // 0x79a7b0: 0xac66003c  sw          $a2, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7B4u;
        goto label_79a7b4;
    }
    ctx->pc = 0x79A7ACu;
    {
        const bool branch_taken_0x79a7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7ACu;
        // 0x79a7b0: 0xac66003c  sw          $a2, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7ac) {
            ctx->pc = 0x79A7E0u;
            goto label_79a7e0;
        }
    }
    ctx->pc = 0x79A7B4u;
label_79a7b4:
    // 0x79a7b4: 0x0  nop
    ctx->pc = 0x79a7b4u;
    // NOP
label_79a7b8:
    // 0x79a7b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79a7bc:
    // 0x79a7bc: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79a7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79a7c0:
    // 0x79a7c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79a7c4:
    if (ctx->pc == 0x79A7C4u) {
        ctx->pc = 0x79A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7C0u;
        // 0x79a7c4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7C8u;
        goto label_79a7c8;
    }
    ctx->pc = 0x79A7C0u;
    {
        const bool branch_taken_0x79a7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7C0u;
        // 0x79a7c4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7c0) {
            ctx->pc = 0x79A7E0u;
            goto label_79a7e0;
        }
    }
    ctx->pc = 0x79A7C8u;
label_79a7c8:
    // 0x79a7c8: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79a7cc:
    // 0x79a7cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a7d0:
    // 0x79a7d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a7d4:
    // 0x79a7d4: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_79a7d8:
    if (ctx->pc == 0x79A7D8u) {
        ctx->pc = 0x79A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7D4u;
        // 0x79a7d8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7DCu;
        goto label_79a7dc;
    }
    ctx->pc = 0x79A7D4u;
    {
        const bool branch_taken_0x79a7d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7D4u;
        // 0x79a7d8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7d4) {
            ctx->pc = 0x79A7BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a7bc;
        }
    }
    ctx->pc = 0x79A7DCu;
label_79a7dc:
    // 0x79a7dc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x79a7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_79a7e0:
    // 0x79a7e0: 0x269064f0  addiu       $s0, $s4, 0x64F0
    ctx->pc = 0x79a7e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
label_79a7e4:
    // 0x79a7e4: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x79a7e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_79a7e8:
    // 0x79a7e8: 0xc0a421a  jal         func_290868
label_79a7ec:
    if (ctx->pc == 0x79A7ECu) {
        ctx->pc = 0x79A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7E8u;
        // 0x79a7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7F0u;
        goto label_79a7f0;
    }
    ctx->pc = 0x79A7E8u;
    SET_GPR_U32(ctx, 31, 0x79A7F0u);
    ctx->pc = 0x79A7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7E8u;
    // 0x79a7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A7E8u, 0x79A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7F0u;
label_79a7f0:
    // 0x79a7f0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_79a7f4:
    if (ctx->pc == 0x79A7F4u) {
        ctx->pc = 0x79A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7F0u;
        // 0x79a7f4: 0x93a50020  lbu         $a1, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7F8u;
        goto label_79a7f8;
    }
    ctx->pc = 0x79A7F0u;
    {
        const bool branch_taken_0x79a7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7F0u;
        // 0x79a7f4: 0x93a50020  lbu         $a1, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7f0) {
            ctx->pc = 0x79A850u;
            goto label_79a850;
        }
    }
    ctx->pc = 0x79A7F8u;
label_79a7f8:
    // 0x79a7f8: 0xc0a421a  jal         func_290868
label_79a7fc:
    if (ctx->pc == 0x79A7FCu) {
        ctx->pc = 0x79A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7F8u;
        // 0x79a7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A800u;
        goto label_79a800;
    }
    ctx->pc = 0x79A7F8u;
    SET_GPR_U32(ctx, 31, 0x79A800u);
    ctx->pc = 0x79A7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7F8u;
    // 0x79a7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A7F8u, 0x79A800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A800u;
label_79a800:
    // 0x79a800: 0x8e63c180  lw          $v1, -0x3E80($s3)
    ctx->pc = 0x79a800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79a804:
    // 0x79a804: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a808:
    // 0x79a808: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_79a80c:
    if (ctx->pc == 0x79A80Cu) {
        ctx->pc = 0x79A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A808u;
        // 0x79a80c: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A810u;
        goto label_79a810;
    }
    ctx->pc = 0x79A808u;
    {
        const bool branch_taken_0x79a808 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A808u;
        // 0x79a80c: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a808) {
            ctx->pc = 0x79A850u;
            goto label_79a850;
        }
    }
    ctx->pc = 0x79A810u;
label_79a810:
    // 0x79a810: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x79a810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_79a814:
    // 0x79a814: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_79a818:
    if (ctx->pc == 0x79A818u) {
        ctx->pc = 0x79A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A814u;
        // 0x79a818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A81Cu;
        goto label_79a81c;
    }
    ctx->pc = 0x79A814u;
    {
        const bool branch_taken_0x79a814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A814u;
        // 0x79a818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a814) {
            ctx->pc = 0x79A828u;
            goto label_79a828;
        }
    }
    ctx->pc = 0x79A81Cu;
label_79a81c:
    // 0x79a81c: 0x1000000c  b           . + 4 + (0xC << 2)
label_79a820:
    if (ctx->pc == 0x79A820u) {
        ctx->pc = 0x79A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A81Cu;
        // 0x79a820: 0xac66003c  sw          $a2, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A824u;
        goto label_79a824;
    }
    ctx->pc = 0x79A81Cu;
    {
        const bool branch_taken_0x79a81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A81Cu;
        // 0x79a820: 0xac66003c  sw          $a2, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a81c) {
            ctx->pc = 0x79A850u;
            goto label_79a850;
        }
    }
    ctx->pc = 0x79A824u;
label_79a824:
    // 0x79a824: 0x0  nop
    ctx->pc = 0x79a824u;
    // NOP
label_79a828:
    // 0x79a828: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79a828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79a82c:
    // 0x79a82c: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79a82cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79a830:
    // 0x79a830: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79a834:
    if (ctx->pc == 0x79A834u) {
        ctx->pc = 0x79A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A830u;
        // 0x79a834: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A838u;
        goto label_79a838;
    }
    ctx->pc = 0x79A830u;
    {
        const bool branch_taken_0x79a830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A830u;
        // 0x79a834: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a830) {
            ctx->pc = 0x79A850u;
            goto label_79a850;
        }
    }
    ctx->pc = 0x79A838u;
label_79a838:
    // 0x79a838: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79a838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79a83c:
    // 0x79a83c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a840:
    // 0x79a840: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a844:
    // 0x79a844: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_79a848:
    if (ctx->pc == 0x79A848u) {
        ctx->pc = 0x79A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A844u;
        // 0x79a848: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A84Cu;
        goto label_79a84c;
    }
    ctx->pc = 0x79A844u;
    {
        const bool branch_taken_0x79a844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A844u;
        // 0x79a848: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a844) {
            ctx->pc = 0x79A82Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a82c;
        }
    }
    ctx->pc = 0x79A84Cu;
label_79a84c:
    // 0x79a84c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x79a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_79a850:
    // 0x79a850: 0x269064f0  addiu       $s0, $s4, 0x64F0
    ctx->pc = 0x79a850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
label_79a854:
    // 0x79a854: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x79a854u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_79a858:
    // 0x79a858: 0xc0a421a  jal         func_290868
label_79a85c:
    if (ctx->pc == 0x79A85Cu) {
        ctx->pc = 0x79A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A858u;
        // 0x79a85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A860u;
        goto label_79a860;
    }
    ctx->pc = 0x79A858u;
    SET_GPR_U32(ctx, 31, 0x79A860u);
    ctx->pc = 0x79A85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A858u;
    // 0x79a85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A858u, 0x79A860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A860u;
label_79a860:
    // 0x79a860: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_79a864:
    if (ctx->pc == 0x79A864u) {
        ctx->pc = 0x79A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A860u;
        // 0x79a864: 0x93a50030  lbu         $a1, 0x30($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A868u;
        goto label_79a868;
    }
    ctx->pc = 0x79A860u;
    {
        const bool branch_taken_0x79a860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A860u;
        // 0x79a864: 0x93a50030  lbu         $a1, 0x30($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a860) {
            ctx->pc = 0x79A8C0u;
            goto label_79a8c0;
        }
    }
    ctx->pc = 0x79A868u;
label_79a868:
    // 0x79a868: 0xc0a421a  jal         func_290868
label_79a86c:
    if (ctx->pc == 0x79A86Cu) {
        ctx->pc = 0x79A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A868u;
        // 0x79a86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A870u;
        goto label_79a870;
    }
    ctx->pc = 0x79A868u;
    SET_GPR_U32(ctx, 31, 0x79A870u);
    ctx->pc = 0x79A86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A868u;
    // 0x79a86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A868u, 0x79A870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A870u;
label_79a870:
    // 0x79a870: 0x8e63c180  lw          $v1, -0x3E80($s3)
    ctx->pc = 0x79a870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79a874:
    // 0x79a874: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a878:
    // 0x79a878: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_79a87c:
    if (ctx->pc == 0x79A87Cu) {
        ctx->pc = 0x79A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A878u;
        // 0x79a87c: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A880u;
        goto label_79a880;
    }
    ctx->pc = 0x79A878u;
    {
        const bool branch_taken_0x79a878 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A878u;
        // 0x79a87c: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a878) {
            ctx->pc = 0x79A8C0u;
            goto label_79a8c0;
        }
    }
    ctx->pc = 0x79A880u;
label_79a880:
    // 0x79a880: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x79a880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_79a884:
    // 0x79a884: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_79a888:
    if (ctx->pc == 0x79A888u) {
        ctx->pc = 0x79A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A884u;
        // 0x79a888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A88Cu;
        goto label_79a88c;
    }
    ctx->pc = 0x79A884u;
    {
        const bool branch_taken_0x79a884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A884u;
        // 0x79a888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a884) {
            ctx->pc = 0x79A898u;
            goto label_79a898;
        }
    }
    ctx->pc = 0x79A88Cu;
label_79a88c:
    // 0x79a88c: 0x1000000c  b           . + 4 + (0xC << 2)
label_79a890:
    if (ctx->pc == 0x79A890u) {
        ctx->pc = 0x79A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A88Cu;
        // 0x79a890: 0xac66003c  sw          $a2, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A894u;
        goto label_79a894;
    }
    ctx->pc = 0x79A88Cu;
    {
        const bool branch_taken_0x79a88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A88Cu;
        // 0x79a890: 0xac66003c  sw          $a2, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a88c) {
            ctx->pc = 0x79A8C0u;
            goto label_79a8c0;
        }
    }
    ctx->pc = 0x79A894u;
label_79a894:
    // 0x79a894: 0x0  nop
    ctx->pc = 0x79a894u;
    // NOP
label_79a898:
    // 0x79a898: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79a898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79a89c:
    // 0x79a89c: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79a89cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79a8a0:
    // 0x79a8a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79a8a4:
    if (ctx->pc == 0x79A8A4u) {
        ctx->pc = 0x79A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8A0u;
        // 0x79a8a4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8A8u;
        goto label_79a8a8;
    }
    ctx->pc = 0x79A8A0u;
    {
        const bool branch_taken_0x79a8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8A0u;
        // 0x79a8a4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8a0) {
            ctx->pc = 0x79A8C0u;
            goto label_79a8c0;
        }
    }
    ctx->pc = 0x79A8A8u;
label_79a8a8:
    // 0x79a8a8: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79a8ac:
    // 0x79a8ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a8b0:
    // 0x79a8b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a8b4:
    // 0x79a8b4: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_79a8b8:
    if (ctx->pc == 0x79A8B8u) {
        ctx->pc = 0x79A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8B4u;
        // 0x79a8b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8BCu;
        goto label_79a8bc;
    }
    ctx->pc = 0x79A8B4u;
    {
        const bool branch_taken_0x79a8b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8B4u;
        // 0x79a8b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8b4) {
            ctx->pc = 0x79A89Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a89c;
        }
    }
    ctx->pc = 0x79A8BCu;
label_79a8bc:
    // 0x79a8bc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x79a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_79a8c0:
    // 0x79a8c0: 0x8e64c180  lw          $a0, -0x3E80($s3)
    ctx->pc = 0x79a8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79a8c4:
    // 0x79a8c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a8c8:
    // 0x79a8c8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x79a8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a8cc:
    // 0x79a8cc: 0xc071f28  jal         func_1C7CA0
label_79a8d0:
    if (ctx->pc == 0x79A8D0u) {
        ctx->pc = 0x79A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8CCu;
        // 0x79a8d0: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8D4u;
        goto label_79a8d4;
    }
    ctx->pc = 0x79A8CCu;
    SET_GPR_U32(ctx, 31, 0x79A8D4u);
    ctx->pc = 0x79A8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8CCu;
    // 0x79a8d0: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x79A8CCu, 0x79A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8D4u;
label_79a8d4:
    // 0x79a8d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a8d8:
    // 0x79a8d8: 0xc0a56f0  jal         func_295BC0
label_79a8dc:
    if (ctx->pc == 0x79A8DCu) {
        ctx->pc = 0x79A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8D8u;
        // 0x79a8dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8E0u;
        goto label_79a8e0;
    }
    ctx->pc = 0x79A8D8u;
    SET_GPR_U32(ctx, 31, 0x79A8E0u);
    ctx->pc = 0x79A8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8D8u;
    // 0x79a8dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A8D8u, 0x79A8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8E0u;
label_79a8e0:
    // 0x79a8e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79a8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_79a8e4:
    // 0x79a8e4: 0xc0a56f0  jal         func_295BC0
label_79a8e8:
    if (ctx->pc == 0x79A8E8u) {
        ctx->pc = 0x79A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8E4u;
        // 0x79a8e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8ECu;
        goto label_79a8ec;
    }
    ctx->pc = 0x79A8E4u;
    SET_GPR_U32(ctx, 31, 0x79A8ECu);
    ctx->pc = 0x79A8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8E4u;
    // 0x79a8e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A8E4u, 0x79A8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8ECu;
label_79a8ec:
    // 0x79a8ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x79a8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_79a8f0:
    // 0x79a8f0: 0xc0a56f0  jal         func_295BC0
label_79a8f4:
    if (ctx->pc == 0x79A8F4u) {
        ctx->pc = 0x79A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8F0u;
        // 0x79a8f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8F8u;
        goto label_79a8f8;
    }
    ctx->pc = 0x79A8F0u;
    SET_GPR_U32(ctx, 31, 0x79A8F8u);
    ctx->pc = 0x79A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8F0u;
    // 0x79a8f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A8F0u, 0x79A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8F8u;
label_79a8f8:
    // 0x79a8f8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x79a8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_79a8fc:
    // 0x79a8fc: 0xc0a56f0  jal         func_295BC0
label_79a900:
    if (ctx->pc == 0x79A900u) {
        ctx->pc = 0x79A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8FCu;
        // 0x79a900: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A904u;
        goto label_79a904;
    }
    ctx->pc = 0x79A8FCu;
    SET_GPR_U32(ctx, 31, 0x79A904u);
    ctx->pc = 0x79A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8FCu;
    // 0x79a900: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A8FCu, 0x79A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A904u;
label_79a904:
    // 0x79a904: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79a904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79a908:
    // 0x79a908: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a90c:
    // 0x79a90c: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x79a90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_79a910:
    // 0x79a910: 0x24060033  addiu       $a2, $zero, 0x33
    ctx->pc = 0x79a910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_79a914:
    // 0x79a914: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a918:
    // 0x79a918: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a91c:
    // 0x79a91c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a91cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a920:
    // 0x79a920: 0xc0b2e28  jal         func_2CB8A0
label_79a924:
    if (ctx->pc == 0x79A924u) {
        ctx->pc = 0x79A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A920u;
        // 0x79a924: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A928u;
        goto label_79a928;
    }
    ctx->pc = 0x79A920u;
    SET_GPR_U32(ctx, 31, 0x79A928u);
    ctx->pc = 0x79A924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A920u;
    // 0x79a924: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A920u, 0x79A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A928u;
label_79a928:
    // 0x79a928: 0x10000005  b           . + 4 + (0x5 << 2)
label_79a92c:
    if (ctx->pc == 0x79A92Cu) {
        ctx->pc = 0x79A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A928u;
        // 0x79a92c: 0x8e64c180  lw          $a0, -0x3E80($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A930u;
        goto label_79a930;
    }
    ctx->pc = 0x79A928u;
    {
        const bool branch_taken_0x79a928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A928u;
        // 0x79a92c: 0x8e64c180  lw          $a0, -0x3E80($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a928) {
            ctx->pc = 0x79A940u;
            goto label_79a940;
        }
    }
    ctx->pc = 0x79A930u;
label_79a930:
    // 0x79a930: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a934:
    // 0x79a934: 0xc0b56a8  jal         func_2D5AA0
label_79a938:
    if (ctx->pc == 0x79A938u) {
        ctx->pc = 0x79A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A934u;
        // 0x79a938: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A93Cu;
        goto label_79a93c;
    }
    ctx->pc = 0x79A934u;
    SET_GPR_U32(ctx, 31, 0x79A93Cu);
    ctx->pc = 0x79A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A934u;
    // 0x79a938: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A934u, 0x79A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A93Cu;
label_79a93c:
    // 0x79a93c: 0x8e64c180  lw          $a0, -0x3E80($s3)
    ctx->pc = 0x79a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79a940:
    // 0x79a940: 0xc070fce  jal         func_1C3F38
label_79a944:
    if (ctx->pc == 0x79A944u) {
        ctx->pc = 0x79A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A940u;
        // 0x79a944: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A948u;
        goto label_79a948;
    }
    ctx->pc = 0x79A940u;
    SET_GPR_U32(ctx, 31, 0x79A948u);
    ctx->pc = 0x79A944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A940u;
    // 0x79a944: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x79A940u, 0x79A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A948u;
label_79a948:
    // 0x79a948: 0x1050fff9  beq         $v0, $s0, . + 4 + (-0x7 << 2)
label_79a94c:
    if (ctx->pc == 0x79A94Cu) {
        ctx->pc = 0x79A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A948u;
        // 0x79a94c: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A950u;
        goto label_79a950;
    }
    ctx->pc = 0x79A948u;
    {
        const bool branch_taken_0x79a948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x79A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A948u;
        // 0x79a94c: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a948) {
            ctx->pc = 0x79A930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a930;
        }
    }
    ctx->pc = 0x79A950u;
label_79a950:
    // 0x79a950: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x79a950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79a954:
    // 0x79a954: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x79a954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a958:
    // 0x79a958: 0xc0b56a8  jal         func_2D5AA0
label_79a95c:
    if (ctx->pc == 0x79A95Cu) {
        ctx->pc = 0x79A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A958u;
        // 0x79a95c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A960u;
        goto label_79a960;
    }
    ctx->pc = 0x79A958u;
    SET_GPR_U32(ctx, 31, 0x79A960u);
    ctx->pc = 0x79A95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A958u;
    // 0x79a95c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A958u, 0x79A960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A960u;
label_79a960:
    // 0x79a960: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a964:
    // 0x79a964: 0xc0a56f0  jal         func_295BC0
label_79a968:
    if (ctx->pc == 0x79A968u) {
        ctx->pc = 0x79A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A964u;
        // 0x79a968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A96Cu;
        goto label_79a96c;
    }
    ctx->pc = 0x79A964u;
    SET_GPR_U32(ctx, 31, 0x79A96Cu);
    ctx->pc = 0x79A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A964u;
    // 0x79a968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A964u, 0x79A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A96Cu;
label_79a96c:
    // 0x79a96c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79a96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_79a970:
    // 0x79a970: 0xc0a56f0  jal         func_295BC0
label_79a974:
    if (ctx->pc == 0x79A974u) {
        ctx->pc = 0x79A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A970u;
        // 0x79a974: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A978u;
        goto label_79a978;
    }
    ctx->pc = 0x79A970u;
    SET_GPR_U32(ctx, 31, 0x79A978u);
    ctx->pc = 0x79A974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A970u;
    // 0x79a974: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A970u, 0x79A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A978u;
label_79a978:
    // 0x79a978: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x79a978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_79a97c:
    // 0x79a97c: 0xc0a56f0  jal         func_295BC0
label_79a980:
    if (ctx->pc == 0x79A980u) {
        ctx->pc = 0x79A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A97Cu;
        // 0x79a980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A984u;
        goto label_79a984;
    }
    ctx->pc = 0x79A97Cu;
    SET_GPR_U32(ctx, 31, 0x79A984u);
    ctx->pc = 0x79A980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A97Cu;
    // 0x79a980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A97Cu, 0x79A984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A984u;
label_79a984:
    // 0x79a984: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x79a984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_79a988:
    // 0x79a988: 0xc0a56f0  jal         func_295BC0
label_79a98c:
    if (ctx->pc == 0x79A98Cu) {
        ctx->pc = 0x79A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A988u;
        // 0x79a98c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A990u;
        goto label_79a990;
    }
    ctx->pc = 0x79A988u;
    SET_GPR_U32(ctx, 31, 0x79A990u);
    ctx->pc = 0x79A98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A988u;
    // 0x79a98c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A988u, 0x79A990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A990u;
label_79a990:
    // 0x79a990: 0x8e64c180  lw          $a0, -0x3E80($s3)
    ctx->pc = 0x79a990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79a994:
    // 0x79a994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a998:
    // 0x79a998: 0xc071f28  jal         func_1C7CA0
label_79a99c:
    if (ctx->pc == 0x79A99Cu) {
        ctx->pc = 0x79A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A998u;
        // 0x79a99c: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9A0u;
        goto label_79a9a0;
    }
    ctx->pc = 0x79A998u;
    SET_GPR_U32(ctx, 31, 0x79A9A0u);
    ctx->pc = 0x79A99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A998u;
    // 0x79a99c: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x79A998u, 0x79A9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9A0u;
label_79a9a0:
    // 0x79a9a0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79a9a4:
    // 0x79a9a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a9a8:
    // 0x79a9a8: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x79a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_79a9ac:
    // 0x79a9ac: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x79a9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_79a9b0:
    // 0x79a9b0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a9b4:
    // 0x79a9b4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a9b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a9b8:
    // 0x79a9b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a9b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a9bc:
    // 0x79a9bc: 0xc0b2e28  jal         func_2CB8A0
label_79a9c0:
    if (ctx->pc == 0x79A9C0u) {
        ctx->pc = 0x79A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9BCu;
        // 0x79a9c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9C4u;
        goto label_79a9c4;
    }
    ctx->pc = 0x79A9BCu;
    SET_GPR_U32(ctx, 31, 0x79A9C4u);
    ctx->pc = 0x79A9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9BCu;
    // 0x79a9c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A9BCu, 0x79A9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9C4u;
label_79a9c4:
    // 0x79a9c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_79a9c8:
    if (ctx->pc == 0x79A9C8u) {
        ctx->pc = 0x79A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9C4u;
        // 0x79a9c8: 0x8e64c180  lw          $a0, -0x3E80($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9CCu;
        goto label_79a9cc;
    }
    ctx->pc = 0x79A9C4u;
    {
        const bool branch_taken_0x79a9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9C4u;
        // 0x79a9c8: 0x8e64c180  lw          $a0, -0x3E80($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9c4) {
            ctx->pc = 0x79A9E4u;
            goto label_79a9e4;
        }
    }
    ctx->pc = 0x79A9CCu;
label_79a9cc:
    // 0x79a9cc: 0x0  nop
    ctx->pc = 0x79a9ccu;
    // NOP
label_79a9d0:
    // 0x79a9d0: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a9d4:
    // 0x79a9d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a9d8:
    // 0x79a9d8: 0xc0b56a8  jal         func_2D5AA0
label_79a9dc:
    if (ctx->pc == 0x79A9DCu) {
        ctx->pc = 0x79A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9D8u;
        // 0x79a9dc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9E0u;
        goto label_79a9e0;
    }
    ctx->pc = 0x79A9D8u;
    SET_GPR_U32(ctx, 31, 0x79A9E0u);
    ctx->pc = 0x79A9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9D8u;
    // 0x79a9dc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A9D8u, 0x79A9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9E0u;
label_79a9e0:
    // 0x79a9e0: 0x8e64c180  lw          $a0, -0x3E80($s3)
    ctx->pc = 0x79a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79a9e4:
    // 0x79a9e4: 0xc070fce  jal         func_1C3F38
label_79a9e8:
    if (ctx->pc == 0x79A9E8u) {
        ctx->pc = 0x79A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9E4u;
        // 0x79a9e8: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9ECu;
        goto label_79a9ec;
    }
    ctx->pc = 0x79A9E4u;
    SET_GPR_U32(ctx, 31, 0x79A9ECu);
    ctx->pc = 0x79A9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9E4u;
    // 0x79a9e8: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x79A9E4u, 0x79A9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9ECu;
label_79a9ec:
    // 0x79a9ec: 0x1050fff8  beq         $v0, $s0, . + 4 + (-0x8 << 2)
label_79a9f0:
    if (ctx->pc == 0x79A9F0u) {
        ctx->pc = 0x79A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9ECu;
        // 0x79a9f0: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9F4u;
        goto label_79a9f4;
    }
    ctx->pc = 0x79A9ECu;
    {
        const bool branch_taken_0x79a9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x79A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9ECu;
        // 0x79a9f0: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9ec) {
            ctx->pc = 0x79A9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a9d0;
        }
    }
    ctx->pc = 0x79A9F4u;
label_79a9f4:
    // 0x79a9f4: 0x269064f0  addiu       $s0, $s4, 0x64F0
    ctx->pc = 0x79a9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
label_79a9f8:
    // 0x79a9f8: 0xc0a421a  jal         func_290868
label_79a9fc:
    if (ctx->pc == 0x79A9FCu) {
        ctx->pc = 0x79A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9F8u;
        // 0x79a9fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA00u;
        goto label_79aa00;
    }
    ctx->pc = 0x79A9F8u;
    SET_GPR_U32(ctx, 31, 0x79AA00u);
    ctx->pc = 0x79A9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9F8u;
    // 0x79a9fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79A9F8u, 0x79AA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA00u;
label_79aa00:
    // 0x79aa00: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_79aa04:
    if (ctx->pc == 0x79AA04u) {
        ctx->pc = 0x79AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA00u;
        // 0x79aa04: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA08u;
        goto label_79aa08;
    }
    ctx->pc = 0x79AA00u;
    {
        const bool branch_taken_0x79aa00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA00u;
        // 0x79aa04: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa00) {
            ctx->pc = 0x79AA60u;
            goto label_79aa60;
        }
    }
    ctx->pc = 0x79AA08u;
label_79aa08:
    // 0x79aa08: 0xc0a421a  jal         func_290868
label_79aa0c:
    if (ctx->pc == 0x79AA0Cu) {
        ctx->pc = 0x79AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA08u;
        // 0x79aa0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA10u;
        goto label_79aa10;
    }
    ctx->pc = 0x79AA08u;
    SET_GPR_U32(ctx, 31, 0x79AA10u);
    ctx->pc = 0x79AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA08u;
    // 0x79aa0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79AA08u, 0x79AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA10u;
label_79aa10:
    // 0x79aa10: 0x8e63c180  lw          $v1, -0x3E80($s3)
    ctx->pc = 0x79aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79aa14:
    // 0x79aa14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79aa14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79aa18:
    // 0x79aa18: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_79aa1c:
    if (ctx->pc == 0x79AA1Cu) {
        ctx->pc = 0x79AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA18u;
        // 0x79aa1c: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA20u;
        goto label_79aa20;
    }
    ctx->pc = 0x79AA18u;
    {
        const bool branch_taken_0x79aa18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA18u;
        // 0x79aa1c: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa18) {
            ctx->pc = 0x79AA60u;
            goto label_79aa60;
        }
    }
    ctx->pc = 0x79AA20u;
label_79aa20:
    // 0x79aa20: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x79aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_79aa24:
    // 0x79aa24: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
label_79aa28:
    if (ctx->pc == 0x79AA28u) {
        ctx->pc = 0x79AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA24u;
        // 0x79aa28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA2Cu;
        goto label_79aa2c;
    }
    ctx->pc = 0x79AA24u;
    {
        const bool branch_taken_0x79aa24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x79AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA24u;
        // 0x79aa28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa24) {
            ctx->pc = 0x79AA38u;
            goto label_79aa38;
        }
    }
    ctx->pc = 0x79AA2Cu;
label_79aa2c:
    // 0x79aa2c: 0x1000000c  b           . + 4 + (0xC << 2)
label_79aa30:
    if (ctx->pc == 0x79AA30u) {
        ctx->pc = 0x79AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA2Cu;
        // 0x79aa30: 0xac60003c  sw          $zero, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA34u;
        goto label_79aa34;
    }
    ctx->pc = 0x79AA2Cu;
    {
        const bool branch_taken_0x79aa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA2Cu;
        // 0x79aa30: 0xac60003c  sw          $zero, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa2c) {
            ctx->pc = 0x79AA60u;
            goto label_79aa60;
        }
    }
    ctx->pc = 0x79AA34u;
label_79aa34:
    // 0x79aa34: 0x0  nop
    ctx->pc = 0x79aa34u;
    // NOP
label_79aa38:
    // 0x79aa38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79aa38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79aa3c:
    // 0x79aa3c: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79aa3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79aa40:
    // 0x79aa40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79aa44:
    if (ctx->pc == 0x79AA44u) {
        ctx->pc = 0x79AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA40u;
        // 0x79aa44: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA48u;
        goto label_79aa48;
    }
    ctx->pc = 0x79AA40u;
    {
        const bool branch_taken_0x79aa40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA40u;
        // 0x79aa44: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa40) {
            ctx->pc = 0x79AA60u;
            goto label_79aa60;
        }
    }
    ctx->pc = 0x79AA48u;
label_79aa48:
    // 0x79aa48: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79aa4c:
    // 0x79aa4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79aa50:
    // 0x79aa50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79aa54:
    // 0x79aa54: 0x1486fff9  bne         $a0, $a2, . + 4 + (-0x7 << 2)
label_79aa58:
    if (ctx->pc == 0x79AA58u) {
        ctx->pc = 0x79AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA54u;
        // 0x79aa58: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA5Cu;
        goto label_79aa5c;
    }
    ctx->pc = 0x79AA54u;
    {
        const bool branch_taken_0x79aa54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x79AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA54u;
        // 0x79aa58: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa54) {
            ctx->pc = 0x79AA3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aa3c;
        }
    }
    ctx->pc = 0x79AA5Cu;
label_79aa5c:
    // 0x79aa5c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_79aa60:
    // 0x79aa60: 0x269064f0  addiu       $s0, $s4, 0x64F0
    ctx->pc = 0x79aa60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
label_79aa64:
    // 0x79aa64: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x79aa64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_79aa68:
    // 0x79aa68: 0xc0a421a  jal         func_290868
label_79aa6c:
    if (ctx->pc == 0x79AA6Cu) {
        ctx->pc = 0x79AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA68u;
        // 0x79aa6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA70u;
        goto label_79aa70;
    }
    ctx->pc = 0x79AA68u;
    SET_GPR_U32(ctx, 31, 0x79AA70u);
    ctx->pc = 0x79AA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA68u;
    // 0x79aa6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79AA68u, 0x79AA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA70u;
label_79aa70:
    // 0x79aa70: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_79aa74:
    if (ctx->pc == 0x79AA74u) {
        ctx->pc = 0x79AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA70u;
        // 0x79aa74: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA78u;
        goto label_79aa78;
    }
    ctx->pc = 0x79AA70u;
    {
        const bool branch_taken_0x79aa70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA70u;
        // 0x79aa74: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa70) {
            ctx->pc = 0x79AAD0u;
            goto label_79aad0;
        }
    }
    ctx->pc = 0x79AA78u;
label_79aa78:
    // 0x79aa78: 0xc0a421a  jal         func_290868
label_79aa7c:
    if (ctx->pc == 0x79AA7Cu) {
        ctx->pc = 0x79AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA78u;
        // 0x79aa7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA80u;
        goto label_79aa80;
    }
    ctx->pc = 0x79AA78u;
    SET_GPR_U32(ctx, 31, 0x79AA80u);
    ctx->pc = 0x79AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA78u;
    // 0x79aa7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79AA78u, 0x79AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA80u;
label_79aa80:
    // 0x79aa80: 0x8e63c180  lw          $v1, -0x3E80($s3)
    ctx->pc = 0x79aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79aa84:
    // 0x79aa84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79aa84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79aa88:
    // 0x79aa88: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_79aa8c:
    if (ctx->pc == 0x79AA8Cu) {
        ctx->pc = 0x79AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA88u;
        // 0x79aa8c: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA90u;
        goto label_79aa90;
    }
    ctx->pc = 0x79AA88u;
    {
        const bool branch_taken_0x79aa88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA88u;
        // 0x79aa8c: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa88) {
            ctx->pc = 0x79AAD0u;
            goto label_79aad0;
        }
    }
    ctx->pc = 0x79AA90u;
label_79aa90:
    // 0x79aa90: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x79aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_79aa94:
    // 0x79aa94: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
label_79aa98:
    if (ctx->pc == 0x79AA98u) {
        ctx->pc = 0x79AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA94u;
        // 0x79aa98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA9Cu;
        goto label_79aa9c;
    }
    ctx->pc = 0x79AA94u;
    {
        const bool branch_taken_0x79aa94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x79AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA94u;
        // 0x79aa98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa94) {
            ctx->pc = 0x79AAA8u;
            goto label_79aaa8;
        }
    }
    ctx->pc = 0x79AA9Cu;
label_79aa9c:
    // 0x79aa9c: 0x1000000c  b           . + 4 + (0xC << 2)
label_79aaa0:
    if (ctx->pc == 0x79AAA0u) {
        ctx->pc = 0x79AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA9Cu;
        // 0x79aaa0: 0xac60003c  sw          $zero, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAA4u;
        goto label_79aaa4;
    }
    ctx->pc = 0x79AA9Cu;
    {
        const bool branch_taken_0x79aa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA9Cu;
        // 0x79aaa0: 0xac60003c  sw          $zero, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa9c) {
            ctx->pc = 0x79AAD0u;
            goto label_79aad0;
        }
    }
    ctx->pc = 0x79AAA4u;
label_79aaa4:
    // 0x79aaa4: 0x0  nop
    ctx->pc = 0x79aaa4u;
    // NOP
label_79aaa8:
    // 0x79aaa8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79aaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79aaac:
    // 0x79aaac: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79aaacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79aab0:
    // 0x79aab0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79aab4:
    if (ctx->pc == 0x79AAB4u) {
        ctx->pc = 0x79AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAB0u;
        // 0x79aab4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAB8u;
        goto label_79aab8;
    }
    ctx->pc = 0x79AAB0u;
    {
        const bool branch_taken_0x79aab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAB0u;
        // 0x79aab4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aab0) {
            ctx->pc = 0x79AAD0u;
            goto label_79aad0;
        }
    }
    ctx->pc = 0x79AAB8u;
label_79aab8:
    // 0x79aab8: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79aabc:
    // 0x79aabc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79aac0:
    // 0x79aac0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79aac4:
    // 0x79aac4: 0x1486fff9  bne         $a0, $a2, . + 4 + (-0x7 << 2)
label_79aac8:
    if (ctx->pc == 0x79AAC8u) {
        ctx->pc = 0x79AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAC4u;
        // 0x79aac8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AACCu;
        goto label_79aacc;
    }
    ctx->pc = 0x79AAC4u;
    {
        const bool branch_taken_0x79aac4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x79AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAC4u;
        // 0x79aac8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aac4) {
            ctx->pc = 0x79AAACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aaac;
        }
    }
    ctx->pc = 0x79AACCu;
label_79aacc:
    // 0x79aacc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79aaccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_79aad0:
    // 0x79aad0: 0x269064f0  addiu       $s0, $s4, 0x64F0
    ctx->pc = 0x79aad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
label_79aad4:
    // 0x79aad4: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x79aad4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_79aad8:
    // 0x79aad8: 0xc0a421a  jal         func_290868
label_79aadc:
    if (ctx->pc == 0x79AADCu) {
        ctx->pc = 0x79AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAD8u;
        // 0x79aadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAE0u;
        goto label_79aae0;
    }
    ctx->pc = 0x79AAD8u;
    SET_GPR_U32(ctx, 31, 0x79AAE0u);
    ctx->pc = 0x79AADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAD8u;
    // 0x79aadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79AAD8u, 0x79AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAE0u;
label_79aae0:
    // 0x79aae0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_79aae4:
    if (ctx->pc == 0x79AAE4u) {
        ctx->pc = 0x79AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAE0u;
        // 0x79aae4: 0x93a50020  lbu         $a1, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAE8u;
        goto label_79aae8;
    }
    ctx->pc = 0x79AAE0u;
    {
        const bool branch_taken_0x79aae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAE0u;
        // 0x79aae4: 0x93a50020  lbu         $a1, 0x20($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aae0) {
            ctx->pc = 0x79AB40u;
            goto label_79ab40;
        }
    }
    ctx->pc = 0x79AAE8u;
label_79aae8:
    // 0x79aae8: 0xc0a421a  jal         func_290868
label_79aaec:
    if (ctx->pc == 0x79AAECu) {
        ctx->pc = 0x79AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAE8u;
        // 0x79aaec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAF0u;
        goto label_79aaf0;
    }
    ctx->pc = 0x79AAE8u;
    SET_GPR_U32(ctx, 31, 0x79AAF0u);
    ctx->pc = 0x79AAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAE8u;
    // 0x79aaec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79AAE8u, 0x79AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAF0u;
label_79aaf0:
    // 0x79aaf0: 0x8e63c180  lw          $v1, -0x3E80($s3)
    ctx->pc = 0x79aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79aaf4:
    // 0x79aaf4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79aaf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79aaf8:
    // 0x79aaf8: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_79aafc:
    if (ctx->pc == 0x79AAFCu) {
        ctx->pc = 0x79AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAF8u;
        // 0x79aafc: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB00u;
        goto label_79ab00;
    }
    ctx->pc = 0x79AAF8u;
    {
        const bool branch_taken_0x79aaf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAF8u;
        // 0x79aafc: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aaf8) {
            ctx->pc = 0x79AB40u;
            goto label_79ab40;
        }
    }
    ctx->pc = 0x79AB00u;
label_79ab00:
    // 0x79ab00: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x79ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_79ab04:
    // 0x79ab04: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
label_79ab08:
    if (ctx->pc == 0x79AB08u) {
        ctx->pc = 0x79AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB04u;
        // 0x79ab08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB0Cu;
        goto label_79ab0c;
    }
    ctx->pc = 0x79AB04u;
    {
        const bool branch_taken_0x79ab04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x79AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB04u;
        // 0x79ab08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab04) {
            ctx->pc = 0x79AB18u;
            goto label_79ab18;
        }
    }
    ctx->pc = 0x79AB0Cu;
label_79ab0c:
    // 0x79ab0c: 0x1000000c  b           . + 4 + (0xC << 2)
label_79ab10:
    if (ctx->pc == 0x79AB10u) {
        ctx->pc = 0x79AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB0Cu;
        // 0x79ab10: 0xac60003c  sw          $zero, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB14u;
        goto label_79ab14;
    }
    ctx->pc = 0x79AB0Cu;
    {
        const bool branch_taken_0x79ab0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB0Cu;
        // 0x79ab10: 0xac60003c  sw          $zero, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab0c) {
            ctx->pc = 0x79AB40u;
            goto label_79ab40;
        }
    }
    ctx->pc = 0x79AB14u;
label_79ab14:
    // 0x79ab14: 0x0  nop
    ctx->pc = 0x79ab14u;
    // NOP
label_79ab18:
    // 0x79ab18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79ab18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79ab1c:
    // 0x79ab1c: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79ab1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79ab20:
    // 0x79ab20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79ab24:
    if (ctx->pc == 0x79AB24u) {
        ctx->pc = 0x79AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB20u;
        // 0x79ab24: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB28u;
        goto label_79ab28;
    }
    ctx->pc = 0x79AB20u;
    {
        const bool branch_taken_0x79ab20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB20u;
        // 0x79ab24: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab20) {
            ctx->pc = 0x79AB40u;
            goto label_79ab40;
        }
    }
    ctx->pc = 0x79AB28u;
label_79ab28:
    // 0x79ab28: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79ab2c:
    // 0x79ab2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79ab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79ab30:
    // 0x79ab30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79ab30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79ab34:
    // 0x79ab34: 0x1486fff9  bne         $a0, $a2, . + 4 + (-0x7 << 2)
label_79ab38:
    if (ctx->pc == 0x79AB38u) {
        ctx->pc = 0x79AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB34u;
        // 0x79ab38: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB3Cu;
        goto label_79ab3c;
    }
    ctx->pc = 0x79AB34u;
    {
        const bool branch_taken_0x79ab34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x79AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB34u;
        // 0x79ab38: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab34) {
            ctx->pc = 0x79AB1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ab1c;
        }
    }
    ctx->pc = 0x79AB3Cu;
label_79ab3c:
    // 0x79ab3c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_79ab40:
    // 0x79ab40: 0x269064f0  addiu       $s0, $s4, 0x64F0
    ctx->pc = 0x79ab40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
label_79ab44:
    // 0x79ab44: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x79ab44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_79ab48:
    // 0x79ab48: 0xc0a421a  jal         func_290868
label_79ab4c:
    if (ctx->pc == 0x79AB4Cu) {
        ctx->pc = 0x79AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB48u;
        // 0x79ab4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB50u;
        goto label_79ab50;
    }
    ctx->pc = 0x79AB48u;
    SET_GPR_U32(ctx, 31, 0x79AB50u);
    ctx->pc = 0x79AB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB48u;
    // 0x79ab4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79AB48u, 0x79AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB50u;
label_79ab50:
    // 0x79ab50: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_79ab54:
    if (ctx->pc == 0x79AB54u) {
        ctx->pc = 0x79AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB50u;
        // 0x79ab54: 0x93a50030  lbu         $a1, 0x30($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB58u;
        goto label_79ab58;
    }
    ctx->pc = 0x79AB50u;
    {
        const bool branch_taken_0x79ab50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB50u;
        // 0x79ab54: 0x93a50030  lbu         $a1, 0x30($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab50) {
            ctx->pc = 0x79ABB0u;
            goto label_79abb0;
        }
    }
    ctx->pc = 0x79AB58u;
label_79ab58:
    // 0x79ab58: 0xc0a421a  jal         func_290868
label_79ab5c:
    if (ctx->pc == 0x79AB5Cu) {
        ctx->pc = 0x79AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB58u;
        // 0x79ab5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB60u;
        goto label_79ab60;
    }
    ctx->pc = 0x79AB58u;
    SET_GPR_U32(ctx, 31, 0x79AB60u);
    ctx->pc = 0x79AB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB58u;
    // 0x79ab5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79AB58u, 0x79AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB60u;
label_79ab60:
    // 0x79ab60: 0x8e63c180  lw          $v1, -0x3E80($s3)
    ctx->pc = 0x79ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951296)));
label_79ab64:
    // 0x79ab64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79ab64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79ab68:
    // 0x79ab68: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_79ab6c:
    if (ctx->pc == 0x79AB6Cu) {
        ctx->pc = 0x79AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB68u;
        // 0x79ab6c: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB70u;
        goto label_79ab70;
    }
    ctx->pc = 0x79AB68u;
    {
        const bool branch_taken_0x79ab68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB68u;
        // 0x79ab6c: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab68) {
            ctx->pc = 0x79ABB0u;
            goto label_79abb0;
        }
    }
    ctx->pc = 0x79AB70u;
label_79ab70:
    // 0x79ab70: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x79ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_79ab74:
    // 0x79ab74: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
label_79ab78:
    if (ctx->pc == 0x79AB78u) {
        ctx->pc = 0x79AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB74u;
        // 0x79ab78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB7Cu;
        goto label_79ab7c;
    }
    ctx->pc = 0x79AB74u;
    {
        const bool branch_taken_0x79ab74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x79AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB74u;
        // 0x79ab78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab74) {
            ctx->pc = 0x79AB88u;
            goto label_79ab88;
        }
    }
    ctx->pc = 0x79AB7Cu;
label_79ab7c:
    // 0x79ab7c: 0x1000000c  b           . + 4 + (0xC << 2)
label_79ab80:
    if (ctx->pc == 0x79AB80u) {
        ctx->pc = 0x79AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB7Cu;
        // 0x79ab80: 0xac60003c  sw          $zero, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB84u;
        goto label_79ab84;
    }
    ctx->pc = 0x79AB7Cu;
    {
        const bool branch_taken_0x79ab7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB7Cu;
        // 0x79ab80: 0xac60003c  sw          $zero, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab7c) {
            ctx->pc = 0x79ABB0u;
            goto label_79abb0;
        }
    }
    ctx->pc = 0x79AB84u;
label_79ab84:
    // 0x79ab84: 0x0  nop
    ctx->pc = 0x79ab84u;
    // NOP
label_79ab88:
    // 0x79ab88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79ab88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79ab8c:
    // 0x79ab8c: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79ab8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_79ab90:
    // 0x79ab90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79ab94:
    if (ctx->pc == 0x79AB94u) {
        ctx->pc = 0x79AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB90u;
        // 0x79ab94: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB98u;
        goto label_79ab98;
    }
    ctx->pc = 0x79AB90u;
    {
        const bool branch_taken_0x79ab90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB90u;
        // 0x79ab94: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab90) {
            ctx->pc = 0x79ABB0u;
            goto label_79abb0;
        }
    }
    ctx->pc = 0x79AB98u;
label_79ab98:
    // 0x79ab98: 0x24e3000c  addiu       $v1, $a3, 0xC
    ctx->pc = 0x79ab98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_79ab9c:
    // 0x79ab9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79aba0:
    // 0x79aba0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79aba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79aba4:
    // 0x79aba4: 0x1486fff9  bne         $a0, $a2, . + 4 + (-0x7 << 2)
label_79aba8:
    if (ctx->pc == 0x79ABA8u) {
        ctx->pc = 0x79ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABA4u;
        // 0x79aba8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABACu;
        goto label_79abac;
    }
    ctx->pc = 0x79ABA4u;
    {
        const bool branch_taken_0x79aba4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x79ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABA4u;
        // 0x79aba8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aba4) {
            ctx->pc = 0x79AB8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ab8c;
        }
    }
    ctx->pc = 0x79ABACu;
label_79abac:
    // 0x79abac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79abacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_79abb0:
    // 0x79abb0: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x79abb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_79abb4:
    // 0x79abb4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79abb8:
    // 0x79abb8: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79abb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_79abbc:
    // 0x79abbc: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79abbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79abc0:
    // 0x79abc0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79abc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_79abc4:
    // 0x79abc4: 0x2444ea60  addiu       $a0, $v0, -0x15A0
    ctx->pc = 0x79abc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
label_79abc8:
    // 0x79abc8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x79abc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79abcc:
    // 0x79abcc: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x79abccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
label_79abd0:
    // 0x79abd0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79abd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79abd4:
    // 0x79abd4: 0xc0b0a92  jal         func_2C2A48
label_79abd8:
    if (ctx->pc == 0x79ABD8u) {
        ctx->pc = 0x79ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABD4u;
        // 0x79abd8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABDCu;
        goto label_79abdc;
    }
    ctx->pc = 0x79ABD4u;
    SET_GPR_U32(ctx, 31, 0x79ABDCu);
    ctx->pc = 0x79ABD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABD4u;
    // 0x79abd8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79ABD4u, 0x79ABDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABDCu;
label_79abdc:
    // 0x79abdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79abdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79abe0:
    // 0x79abe0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79abe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79abe4:
    // 0x79abe4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79abe4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_79abe8:
    // 0x79abe8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79abe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79abec:
    // 0x79abec: 0xc0a57e0  jal         func_295F80
label_79abf0:
    if (ctx->pc == 0x79ABF0u) {
        ctx->pc = 0x79ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABECu;
        // 0x79abf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABF4u;
        goto label_79abf4;
    }
    ctx->pc = 0x79ABECu;
    SET_GPR_U32(ctx, 31, 0x79ABF4u);
    ctx->pc = 0x79ABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABECu;
    // 0x79abf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79ABECu, 0x79ABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABF4u;
label_79abf4:
    // 0x79abf4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79abf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_79abf8:
    // 0x79abf8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79abf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79abfc:
    // 0x79abfc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79abfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_79ac00:
    // 0x79ac00: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79ac00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79ac04:
    // 0x79ac04: 0xc0a57e0  jal         func_295F80
label_79ac08:
    if (ctx->pc == 0x79AC08u) {
        ctx->pc = 0x79AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC04u;
        // 0x79ac08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC0Cu;
        goto label_79ac0c;
    }
    ctx->pc = 0x79AC04u;
    SET_GPR_U32(ctx, 31, 0x79AC0Cu);
    ctx->pc = 0x79AC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC04u;
    // 0x79ac08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79AC04u, 0x79AC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC0Cu;
label_79ac0c:
    // 0x79ac0c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x79ac0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_79ac10:
    // 0x79ac10: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79ac10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79ac14:
    // 0x79ac14: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79ac14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_79ac18:
    // 0x79ac18: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79ac18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79ac1c:
    // 0x79ac1c: 0xc0a57e0  jal         func_295F80
label_79ac20:
    if (ctx->pc == 0x79AC20u) {
        ctx->pc = 0x79AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC1Cu;
        // 0x79ac20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC24u;
        goto label_79ac24;
    }
    ctx->pc = 0x79AC1Cu;
    SET_GPR_U32(ctx, 31, 0x79AC24u);
    ctx->pc = 0x79AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC1Cu;
    // 0x79ac20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79AC1Cu, 0x79AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC24u;
label_79ac24:
    // 0x79ac24: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79ac24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79ac28:
    // 0x79ac28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79ac28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ac2c:
    // 0x79ac2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79ac2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79ac30:
    // 0x79ac30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x79ac30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_79ac34:
    // 0x79ac34: 0xc0a57e0  jal         func_295F80
label_79ac38:
    if (ctx->pc == 0x79AC38u) {
        ctx->pc = 0x79AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC34u;
        // 0x79ac38: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC3Cu;
        goto label_79ac3c;
    }
    ctx->pc = 0x79AC34u;
    SET_GPR_U32(ctx, 31, 0x79AC3Cu);
    ctx->pc = 0x79AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC34u;
    // 0x79ac38: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79AC34u, 0x79AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC3Cu;
label_79ac3c:
    // 0x79ac3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79ac3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79ac40:
    // 0x79ac40: 0xc0a56e0  jal         func_295B80
label_79ac44:
    if (ctx->pc == 0x79AC44u) {
        ctx->pc = 0x79AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC40u;
        // 0x79ac44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC48u;
        goto label_79ac48;
    }
    ctx->pc = 0x79AC40u;
    SET_GPR_U32(ctx, 31, 0x79AC48u);
    ctx->pc = 0x79AC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC40u;
    // 0x79ac44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x79AC40u, 0x79AC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC48u;
label_79ac48:
    // 0x79ac48: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79ac48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_79ac4c:
    // 0x79ac4c: 0xc0a56e0  jal         func_295B80
label_79ac50:
    if (ctx->pc == 0x79AC50u) {
        ctx->pc = 0x79AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC4Cu;
        // 0x79ac50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC54u;
        goto label_79ac54;
    }
    ctx->pc = 0x79AC4Cu;
    SET_GPR_U32(ctx, 31, 0x79AC54u);
    ctx->pc = 0x79AC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC4Cu;
    // 0x79ac50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x79AC4Cu, 0x79AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC54u;
label_79ac54:
    // 0x79ac54: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x79ac54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_79ac58:
    // 0x79ac58: 0xc0a56e0  jal         func_295B80
label_79ac5c:
    if (ctx->pc == 0x79AC5Cu) {
        ctx->pc = 0x79AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC58u;
        // 0x79ac5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC60u;
        goto label_79ac60;
    }
    ctx->pc = 0x79AC58u;
    SET_GPR_U32(ctx, 31, 0x79AC60u);
    ctx->pc = 0x79AC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC58u;
    // 0x79ac5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x79AC58u, 0x79AC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC60u;
label_79ac60:
    // 0x79ac60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79ac60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_79ac64:
    // 0x79ac64: 0xc0a56e0  jal         func_295B80
label_79ac68:
    if (ctx->pc == 0x79AC68u) {
        ctx->pc = 0x79AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC64u;
        // 0x79ac68: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC6Cu;
        goto label_79ac6c;
    }
    ctx->pc = 0x79AC64u;
    SET_GPR_U32(ctx, 31, 0x79AC6Cu);
    ctx->pc = 0x79AC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC64u;
    // 0x79ac68: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x79AC64u, 0x79AC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC6Cu;
label_79ac6c:
    // 0x79ac6c: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79ac70:
    // 0x79ac70: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x79ac70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_79ac74:
    // 0x79ac74: 0xc0b56a8  jal         func_2D5AA0
label_79ac78:
    if (ctx->pc == 0x79AC78u) {
        ctx->pc = 0x79AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC74u;
        // 0x79ac78: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC7Cu;
        goto label_79ac7c;
    }
    ctx->pc = 0x79AC74u;
    SET_GPR_U32(ctx, 31, 0x79AC7Cu);
    ctx->pc = 0x79AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC74u;
    // 0x79ac78: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AC74u, 0x79AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC7Cu;
label_79ac7c:
    // 0x79ac7c: 0xc0b101e  jal         func_2C4078
label_79ac80:
    if (ctx->pc == 0x79AC80u) {
        ctx->pc = 0x79AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC7Cu;
        // 0x79ac80: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC84u;
        goto label_79ac84;
    }
    ctx->pc = 0x79AC7Cu;
    SET_GPR_U32(ctx, 31, 0x79AC84u);
    ctx->pc = 0x79AC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC7Cu;
    // 0x79ac80: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79AC7Cu, 0x79AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC84u;
label_79ac84:
    // 0x79ac84: 0xc0b0f04  jal         func_2C3C10
label_79ac88:
    if (ctx->pc == 0x79AC88u) {
        ctx->pc = 0x79AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC84u;
        // 0x79ac88: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC8Cu;
        goto label_79ac8c;
    }
    ctx->pc = 0x79AC84u;
    SET_GPR_U32(ctx, 31, 0x79AC8Cu);
    ctx->pc = 0x79AC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC84u;
    // 0x79ac88: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79AC84u, 0x79AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC8Cu;
label_79ac8c:
    // 0x79ac8c: 0xc0b6dac  jal         func_2DB6B0
label_79ac90:
    if (ctx->pc == 0x79AC90u) {
        ctx->pc = 0x79AC94u;
        goto label_79ac94;
    }
    ctx->pc = 0x79AC8Cu;
    SET_GPR_U32(ctx, 31, 0x79AC94u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79AC8Cu, 0x79AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC94u;
label_79ac94:
    // 0x79ac94: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79ac98:
    // 0x79ac98: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79ac98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79ac9c:
    // 0x79ac9c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79ac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79aca0:
    // 0x79aca0: 0xa0f809  jalr        $a1
label_79aca4:
    if (ctx->pc == 0x79ACA4u) {
        ctx->pc = 0x79ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACA0u;
        // 0x79aca4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACA8u;
        goto label_79aca8;
    }
    ctx->pc = 0x79ACA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79ACA8u);
        ctx->pc = 0x79ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACA0u;
        // 0x79aca4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ACA0u, 0x79ACA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79ACA8u;
label_79aca8:
    // 0x79aca8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79aca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79acac:
    // 0x79acac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79acacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79acb0:
    // 0x79acb0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79acb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_79acb4:
    // 0x79acb4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79acb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79acb8:
    // 0x79acb8: 0xc0a57e0  jal         func_295F80
label_79acbc:
    if (ctx->pc == 0x79ACBCu) {
        ctx->pc = 0x79ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACB8u;
        // 0x79acbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACC0u;
        goto label_79acc0;
    }
    ctx->pc = 0x79ACB8u;
    SET_GPR_U32(ctx, 31, 0x79ACC0u);
    ctx->pc = 0x79ACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACB8u;
    // 0x79acbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79ACB8u, 0x79ACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACC0u;
label_79acc0:
    // 0x79acc0: 0xc0b6dac  jal         func_2DB6B0
label_79acc4:
    if (ctx->pc == 0x79ACC4u) {
        ctx->pc = 0x79ACC8u;
        goto label_79acc8;
    }
    ctx->pc = 0x79ACC0u;
    SET_GPR_U32(ctx, 31, 0x79ACC8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79ACC0u, 0x79ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACC8u;
label_79acc8:
    // 0x79acc8: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79accc:
    // 0x79accc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79acccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79acd0:
    // 0x79acd0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79acd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79acd4:
    // 0x79acd4: 0xa0f809  jalr        $a1
label_79acd8:
    if (ctx->pc == 0x79ACD8u) {
        ctx->pc = 0x79ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACD4u;
        // 0x79acd8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACDCu;
        goto label_79acdc;
    }
    ctx->pc = 0x79ACD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79ACDCu);
        ctx->pc = 0x79ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACD4u;
        // 0x79acd8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ACD4u, 0x79ACDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79ACDCu;
label_79acdc:
    // 0x79acdc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79acdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_79ace0:
    // 0x79ace0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79ace0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79ace4:
    // 0x79ace4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79ace4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_79ace8:
    // 0x79ace8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79ace8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79acec:
    // 0x79acec: 0xc0a57e0  jal         func_295F80
label_79acf0:
    if (ctx->pc == 0x79ACF0u) {
        ctx->pc = 0x79ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACECu;
        // 0x79acf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACF4u;
        goto label_79acf4;
    }
    ctx->pc = 0x79ACECu;
    SET_GPR_U32(ctx, 31, 0x79ACF4u);
    ctx->pc = 0x79ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACECu;
    // 0x79acf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79ACECu, 0x79ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACF4u;
label_79acf4:
    // 0x79acf4: 0xc0b6dac  jal         func_2DB6B0
label_79acf8:
    if (ctx->pc == 0x79ACF8u) {
        ctx->pc = 0x79ACFCu;
        goto label_79acfc;
    }
    ctx->pc = 0x79ACF4u;
    SET_GPR_U32(ctx, 31, 0x79ACFCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79ACF4u, 0x79ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACFCu;
label_79acfc:
    // 0x79acfc: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79ad00:
    // 0x79ad00: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79ad00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79ad04:
    // 0x79ad04: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79ad04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79ad08:
    // 0x79ad08: 0xa0f809  jalr        $a1
label_79ad0c:
    if (ctx->pc == 0x79AD0Cu) {
        ctx->pc = 0x79AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD08u;
        // 0x79ad0c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD10u;
        goto label_79ad10;
    }
    ctx->pc = 0x79AD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79AD10u);
        ctx->pc = 0x79AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD08u;
        // 0x79ad0c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AD08u, 0x79AD10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AD10u;
label_79ad10:
    // 0x79ad10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x79ad10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_79ad14:
    // 0x79ad14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79ad14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79ad18:
    // 0x79ad18: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79ad18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_79ad1c:
    // 0x79ad1c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79ad1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79ad20:
    // 0x79ad20: 0xc0a57e0  jal         func_295F80
label_79ad24:
    if (ctx->pc == 0x79AD24u) {
        ctx->pc = 0x79AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD20u;
        // 0x79ad24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD28u;
        goto label_79ad28;
    }
    ctx->pc = 0x79AD20u;
    SET_GPR_U32(ctx, 31, 0x79AD28u);
    ctx->pc = 0x79AD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD20u;
    // 0x79ad24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79AD20u, 0x79AD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD28u;
label_79ad28:
    // 0x79ad28: 0xc0b6dac  jal         func_2DB6B0
label_79ad2c:
    if (ctx->pc == 0x79AD2Cu) {
        ctx->pc = 0x79AD30u;
        goto label_79ad30;
    }
    ctx->pc = 0x79AD28u;
    SET_GPR_U32(ctx, 31, 0x79AD30u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79AD28u, 0x79AD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD30u;
label_79ad30:
    // 0x79ad30: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79ad34:
    // 0x79ad34: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79ad34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79ad38:
    // 0x79ad38: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79ad38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79ad3c:
    // 0x79ad3c: 0xa0f809  jalr        $a1
label_79ad40:
    if (ctx->pc == 0x79AD40u) {
        ctx->pc = 0x79AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD3Cu;
        // 0x79ad40: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD44u;
        goto label_79ad44;
    }
    ctx->pc = 0x79AD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79AD44u);
        ctx->pc = 0x79AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD3Cu;
        // 0x79ad40: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AD3Cu, 0x79AD44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AD44u;
label_79ad44:
    // 0x79ad44: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x79ad44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_79ad48:
    // 0x79ad48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79ad48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79ad4c:
    // 0x79ad4c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79ad4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_79ad50:
    // 0x79ad50: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x79ad50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79ad54:
    // 0x79ad54: 0xc0a57e0  jal         func_295F80
label_79ad58:
    if (ctx->pc == 0x79AD58u) {
        ctx->pc = 0x79AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD54u;
        // 0x79ad58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD5Cu;
        goto label_79ad5c;
    }
    ctx->pc = 0x79AD54u;
    SET_GPR_U32(ctx, 31, 0x79AD5Cu);
    ctx->pc = 0x79AD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD54u;
    // 0x79ad58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79AD54u, 0x79AD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD5Cu;
label_79ad5c:
    // 0x79ad5c: 0x10000005  b           . + 4 + (0x5 << 2)
label_79ad60:
    if (ctx->pc == 0x79AD60u) {
        ctx->pc = 0x79AD64u;
        goto label_79ad64;
    }
    ctx->pc = 0x79AD5Cu;
    {
        const bool branch_taken_0x79ad5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ad5c) {
            ctx->pc = 0x79AD74u;
            goto label_79ad74;
        }
    }
    ctx->pc = 0x79AD64u;
label_79ad64:
    // 0x79ad64: 0x0  nop
    ctx->pc = 0x79ad64u;
    // NOP
label_79ad68:
    // 0x79ad68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ad68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79ad6c:
    // 0x79ad6c: 0xc0b56a8  jal         func_2D5AA0
label_79ad70:
    if (ctx->pc == 0x79AD70u) {
        ctx->pc = 0x79AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD6Cu;
        // 0x79ad70: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD74u;
        goto label_79ad74;
    }
    ctx->pc = 0x79AD6Cu;
    SET_GPR_U32(ctx, 31, 0x79AD74u);
    ctx->pc = 0x79AD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD6Cu;
    // 0x79ad70: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AD6Cu, 0x79AD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD74u;
label_79ad74:
    // 0x79ad74: 0xc1e64e6  jal         func_799398
label_79ad78:
    if (ctx->pc == 0x79AD78u) {
        ctx->pc = 0x79AD7Cu;
        goto label_79ad7c;
    }
    ctx->pc = 0x79AD74u;
    SET_GPR_U32(ctx, 31, 0x79AD7Cu);
    ctx->pc = 0x799398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799398u, 0x79AD74u, 0x79AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD7Cu;
label_79ad7c:
    // 0x79ad7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_79ad80:
    if (ctx->pc == 0x79AD80u) {
        ctx->pc = 0x79AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD7Cu;
        // 0x79ad80: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD84u;
        goto label_79ad84;
    }
    ctx->pc = 0x79AD7Cu;
    {
        const bool branch_taken_0x79ad7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD7Cu;
        // 0x79ad80: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad7c) {
            ctx->pc = 0x79AD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ad68;
        }
    }
    ctx->pc = 0x79AD84u;
label_79ad84:
    // 0x79ad84: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79ad84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79ad88:
    // 0x79ad88: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79ad8c:
    // 0x79ad8c: 0x24459870  addiu       $a1, $v0, -0x6790
    ctx->pc = 0x79ad8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940784));
label_79ad90:
    // 0x79ad90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79ad90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ad94:
    // 0x79ad94: 0xc0b0e48  jal         func_2C3920
label_79ad98:
    if (ctx->pc == 0x79AD98u) {
        ctx->pc = 0x79AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD94u;
        // 0x79ad98: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD9Cu;
        goto label_79ad9c;
    }
    ctx->pc = 0x79AD94u;
    SET_GPR_U32(ctx, 31, 0x79AD9Cu);
    ctx->pc = 0x79AD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD94u;
    // 0x79ad98: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79AD94u, 0x79AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD9Cu;
label_79ad9c:
    // 0x79ad9c: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x79ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79ada0:
    // 0x79ada0: 0xc0b5692  jal         func_2D5A48
label_79ada4:
    if (ctx->pc == 0x79ADA4u) {
        ctx->pc = 0x79ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADA0u;
        // 0x79ada4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ADA8u;
        goto label_79ada8;
    }
    ctx->pc = 0x79ADA0u;
    SET_GPR_U32(ctx, 31, 0x79ADA8u);
    ctx->pc = 0x79ADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADA0u;
    // 0x79ada4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79ADA0u, 0x79ADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADA8u;
label_79ada8:
    // 0x79ada8: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x79ada8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_79adac:
    // 0x79adac: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x79adacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_79adb0:
    // 0x79adb0: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x79adb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_79adb4:
    // 0x79adb4: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x79adb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_79adb8:
    // 0x79adb8: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x79adb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_79adbc:
    // 0x79adbc: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x79adbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_79adc0:
    // 0x79adc0: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x79adc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_79adc4:
    // 0x79adc4: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x79adc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_79adc8:
    // 0x79adc8: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x79adc8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79adcc:
    // 0x79adcc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x79adccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_79add0:
    // 0x79add0: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x79add0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_79add4:
    // 0x79add4: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x79add4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79add8:
    // 0x79add8: 0x3e00008  jr          $ra
label_79addc:
    if (ctx->pc == 0x79ADDCu) {
        ctx->pc = 0x79ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADD8u;
        // 0x79addc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ADE0u;
        goto label_fallthrough_0x79add8;
    }
    ctx->pc = 0x79ADD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADD8u;
        // 0x79addc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ADD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79add8:
    ctx->pc = 0x79ADE0u;
}
} // namespace gh_r409
