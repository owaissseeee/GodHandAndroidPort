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

// Function: func_00211C08
// Address: 0x211c08 - 0x212c08
void func_00211C08_0x211c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00211C08_0x211c08");
#endif

    switch (ctx->pc) {
        case 0x211c08u: goto label_211c08;
        case 0x211c0cu: goto label_211c0c;
        case 0x211c10u: goto label_211c10;
        case 0x211c14u: goto label_211c14;
        case 0x211c18u: goto label_211c18;
        case 0x211c1cu: goto label_211c1c;
        case 0x211c20u: goto label_211c20;
        case 0x211c24u: goto label_211c24;
        case 0x211c28u: goto label_211c28;
        case 0x211c2cu: goto label_211c2c;
        case 0x211c30u: goto label_211c30;
        case 0x211c34u: goto label_211c34;
        case 0x211c38u: goto label_211c38;
        case 0x211c3cu: goto label_211c3c;
        case 0x211c40u: goto label_211c40;
        case 0x211c44u: goto label_211c44;
        case 0x211c48u: goto label_211c48;
        case 0x211c4cu: goto label_211c4c;
        case 0x211c50u: goto label_211c50;
        case 0x211c54u: goto label_211c54;
        case 0x211c58u: goto label_211c58;
        case 0x211c5cu: goto label_211c5c;
        case 0x211c60u: goto label_211c60;
        case 0x211c64u: goto label_211c64;
        case 0x211c68u: goto label_211c68;
        case 0x211c6cu: goto label_211c6c;
        case 0x211c70u: goto label_211c70;
        case 0x211c74u: goto label_211c74;
        case 0x211c78u: goto label_211c78;
        case 0x211c7cu: goto label_211c7c;
        case 0x211c80u: goto label_211c80;
        case 0x211c84u: goto label_211c84;
        case 0x211c88u: goto label_211c88;
        case 0x211c8cu: goto label_211c8c;
        case 0x211c90u: goto label_211c90;
        case 0x211c94u: goto label_211c94;
        case 0x211c98u: goto label_211c98;
        case 0x211c9cu: goto label_211c9c;
        case 0x211ca0u: goto label_211ca0;
        case 0x211ca4u: goto label_211ca4;
        case 0x211ca8u: goto label_211ca8;
        case 0x211cacu: goto label_211cac;
        case 0x211cb0u: goto label_211cb0;
        case 0x211cb4u: goto label_211cb4;
        case 0x211cb8u: goto label_211cb8;
        case 0x211cbcu: goto label_211cbc;
        case 0x211cc0u: goto label_211cc0;
        case 0x211cc4u: goto label_211cc4;
        case 0x211cc8u: goto label_211cc8;
        case 0x211cccu: goto label_211ccc;
        case 0x211cd0u: goto label_211cd0;
        case 0x211cd4u: goto label_211cd4;
        case 0x211cd8u: goto label_211cd8;
        case 0x211cdcu: goto label_211cdc;
        case 0x211ce0u: goto label_211ce0;
        case 0x211ce4u: goto label_211ce4;
        case 0x211ce8u: goto label_211ce8;
        case 0x211cecu: goto label_211cec;
        case 0x211cf0u: goto label_211cf0;
        case 0x211cf4u: goto label_211cf4;
        case 0x211cf8u: goto label_211cf8;
        case 0x211cfcu: goto label_211cfc;
        case 0x211d00u: goto label_211d00;
        case 0x211d04u: goto label_211d04;
        case 0x211d08u: goto label_211d08;
        case 0x211d0cu: goto label_211d0c;
        case 0x211d10u: goto label_211d10;
        case 0x211d14u: goto label_211d14;
        case 0x211d18u: goto label_211d18;
        case 0x211d1cu: goto label_211d1c;
        case 0x211d20u: goto label_211d20;
        case 0x211d24u: goto label_211d24;
        case 0x211d28u: goto label_211d28;
        case 0x211d2cu: goto label_211d2c;
        case 0x211d30u: goto label_211d30;
        case 0x211d34u: goto label_211d34;
        case 0x211d38u: goto label_211d38;
        case 0x211d3cu: goto label_211d3c;
        case 0x211d40u: goto label_211d40;
        case 0x211d44u: goto label_211d44;
        case 0x211d48u: goto label_211d48;
        case 0x211d4cu: goto label_211d4c;
        case 0x211d50u: goto label_211d50;
        case 0x211d54u: goto label_211d54;
        case 0x211d58u: goto label_211d58;
        case 0x211d5cu: goto label_211d5c;
        case 0x211d60u: goto label_211d60;
        case 0x211d64u: goto label_211d64;
        case 0x211d68u: goto label_211d68;
        case 0x211d6cu: goto label_211d6c;
        case 0x211d70u: goto label_211d70;
        case 0x211d74u: goto label_211d74;
        case 0x211d78u: goto label_211d78;
        case 0x211d7cu: goto label_211d7c;
        case 0x211d80u: goto label_211d80;
        case 0x211d84u: goto label_211d84;
        case 0x211d88u: goto label_211d88;
        case 0x211d8cu: goto label_211d8c;
        case 0x211d90u: goto label_211d90;
        case 0x211d94u: goto label_211d94;
        case 0x211d98u: goto label_211d98;
        case 0x211d9cu: goto label_211d9c;
        case 0x211da0u: goto label_211da0;
        case 0x211da4u: goto label_211da4;
        case 0x211da8u: goto label_211da8;
        case 0x211dacu: goto label_211dac;
        case 0x211db0u: goto label_211db0;
        case 0x211db4u: goto label_211db4;
        case 0x211db8u: goto label_211db8;
        case 0x211dbcu: goto label_211dbc;
        case 0x211dc0u: goto label_211dc0;
        case 0x211dc4u: goto label_211dc4;
        case 0x211dc8u: goto label_211dc8;
        case 0x211dccu: goto label_211dcc;
        case 0x211dd0u: goto label_211dd0;
        case 0x211dd4u: goto label_211dd4;
        case 0x211dd8u: goto label_211dd8;
        case 0x211ddcu: goto label_211ddc;
        case 0x211de0u: goto label_211de0;
        case 0x211de4u: goto label_211de4;
        case 0x211de8u: goto label_211de8;
        case 0x211decu: goto label_211dec;
        case 0x211df0u: goto label_211df0;
        case 0x211df4u: goto label_211df4;
        case 0x211df8u: goto label_211df8;
        case 0x211dfcu: goto label_211dfc;
        case 0x211e00u: goto label_211e00;
        case 0x211e04u: goto label_211e04;
        case 0x211e08u: goto label_211e08;
        case 0x211e0cu: goto label_211e0c;
        case 0x211e10u: goto label_211e10;
        case 0x211e14u: goto label_211e14;
        case 0x211e18u: goto label_211e18;
        case 0x211e1cu: goto label_211e1c;
        case 0x211e20u: goto label_211e20;
        case 0x211e24u: goto label_211e24;
        case 0x211e28u: goto label_211e28;
        case 0x211e2cu: goto label_211e2c;
        case 0x211e30u: goto label_211e30;
        case 0x211e34u: goto label_211e34;
        case 0x211e38u: goto label_211e38;
        case 0x211e3cu: goto label_211e3c;
        case 0x211e40u: goto label_211e40;
        case 0x211e44u: goto label_211e44;
        case 0x211e48u: goto label_211e48;
        case 0x211e4cu: goto label_211e4c;
        case 0x211e50u: goto label_211e50;
        case 0x211e54u: goto label_211e54;
        case 0x211e58u: goto label_211e58;
        case 0x211e5cu: goto label_211e5c;
        case 0x211e60u: goto label_211e60;
        case 0x211e64u: goto label_211e64;
        case 0x211e68u: goto label_211e68;
        case 0x211e6cu: goto label_211e6c;
        case 0x211e70u: goto label_211e70;
        case 0x211e74u: goto label_211e74;
        case 0x211e78u: goto label_211e78;
        case 0x211e7cu: goto label_211e7c;
        case 0x211e80u: goto label_211e80;
        case 0x211e84u: goto label_211e84;
        case 0x211e88u: goto label_211e88;
        case 0x211e8cu: goto label_211e8c;
        case 0x211e90u: goto label_211e90;
        case 0x211e94u: goto label_211e94;
        case 0x211e98u: goto label_211e98;
        case 0x211e9cu: goto label_211e9c;
        case 0x211ea0u: goto label_211ea0;
        case 0x211ea4u: goto label_211ea4;
        case 0x211ea8u: goto label_211ea8;
        case 0x211eacu: goto label_211eac;
        case 0x211eb0u: goto label_211eb0;
        case 0x211eb4u: goto label_211eb4;
        case 0x211eb8u: goto label_211eb8;
        case 0x211ebcu: goto label_211ebc;
        case 0x211ec0u: goto label_211ec0;
        case 0x211ec4u: goto label_211ec4;
        case 0x211ec8u: goto label_211ec8;
        case 0x211eccu: goto label_211ecc;
        case 0x211ed0u: goto label_211ed0;
        case 0x211ed4u: goto label_211ed4;
        case 0x211ed8u: goto label_211ed8;
        case 0x211edcu: goto label_211edc;
        case 0x211ee0u: goto label_211ee0;
        case 0x211ee4u: goto label_211ee4;
        case 0x211ee8u: goto label_211ee8;
        case 0x211eecu: goto label_211eec;
        case 0x211ef0u: goto label_211ef0;
        case 0x211ef4u: goto label_211ef4;
        case 0x211ef8u: goto label_211ef8;
        case 0x211efcu: goto label_211efc;
        case 0x211f00u: goto label_211f00;
        case 0x211f04u: goto label_211f04;
        case 0x211f08u: goto label_211f08;
        case 0x211f0cu: goto label_211f0c;
        case 0x211f10u: goto label_211f10;
        case 0x211f14u: goto label_211f14;
        case 0x211f18u: goto label_211f18;
        case 0x211f1cu: goto label_211f1c;
        case 0x211f20u: goto label_211f20;
        case 0x211f24u: goto label_211f24;
        case 0x211f28u: goto label_211f28;
        case 0x211f2cu: goto label_211f2c;
        case 0x211f30u: goto label_211f30;
        case 0x211f34u: goto label_211f34;
        case 0x211f38u: goto label_211f38;
        case 0x211f3cu: goto label_211f3c;
        case 0x211f40u: goto label_211f40;
        case 0x211f44u: goto label_211f44;
        case 0x211f48u: goto label_211f48;
        case 0x211f4cu: goto label_211f4c;
        case 0x211f50u: goto label_211f50;
        case 0x211f54u: goto label_211f54;
        case 0x211f58u: goto label_211f58;
        case 0x211f5cu: goto label_211f5c;
        case 0x211f60u: goto label_211f60;
        case 0x211f64u: goto label_211f64;
        case 0x211f68u: goto label_211f68;
        case 0x211f6cu: goto label_211f6c;
        case 0x211f70u: goto label_211f70;
        case 0x211f74u: goto label_211f74;
        case 0x211f78u: goto label_211f78;
        case 0x211f7cu: goto label_211f7c;
        case 0x211f80u: goto label_211f80;
        case 0x211f84u: goto label_211f84;
        case 0x211f88u: goto label_211f88;
        case 0x211f8cu: goto label_211f8c;
        case 0x211f90u: goto label_211f90;
        case 0x211f94u: goto label_211f94;
        case 0x211f98u: goto label_211f98;
        case 0x211f9cu: goto label_211f9c;
        case 0x211fa0u: goto label_211fa0;
        case 0x211fa4u: goto label_211fa4;
        case 0x211fa8u: goto label_211fa8;
        case 0x211facu: goto label_211fac;
        case 0x211fb0u: goto label_211fb0;
        case 0x211fb4u: goto label_211fb4;
        case 0x211fb8u: goto label_211fb8;
        case 0x211fbcu: goto label_211fbc;
        case 0x211fc0u: goto label_211fc0;
        case 0x211fc4u: goto label_211fc4;
        case 0x211fc8u: goto label_211fc8;
        case 0x211fccu: goto label_211fcc;
        case 0x211fd0u: goto label_211fd0;
        case 0x211fd4u: goto label_211fd4;
        case 0x211fd8u: goto label_211fd8;
        case 0x211fdcu: goto label_211fdc;
        case 0x211fe0u: goto label_211fe0;
        case 0x211fe4u: goto label_211fe4;
        case 0x211fe8u: goto label_211fe8;
        case 0x211fecu: goto label_211fec;
        case 0x211ff0u: goto label_211ff0;
        case 0x211ff4u: goto label_211ff4;
        case 0x211ff8u: goto label_211ff8;
        case 0x211ffcu: goto label_211ffc;
        case 0x212000u: goto label_212000;
        case 0x212004u: goto label_212004;
        case 0x212008u: goto label_212008;
        case 0x21200cu: goto label_21200c;
        case 0x212010u: goto label_212010;
        case 0x212014u: goto label_212014;
        case 0x212018u: goto label_212018;
        case 0x21201cu: goto label_21201c;
        case 0x212020u: goto label_212020;
        case 0x212024u: goto label_212024;
        case 0x212028u: goto label_212028;
        case 0x21202cu: goto label_21202c;
        case 0x212030u: goto label_212030;
        case 0x212034u: goto label_212034;
        case 0x212038u: goto label_212038;
        case 0x21203cu: goto label_21203c;
        case 0x212040u: goto label_212040;
        case 0x212044u: goto label_212044;
        case 0x212048u: goto label_212048;
        case 0x21204cu: goto label_21204c;
        case 0x212050u: goto label_212050;
        case 0x212054u: goto label_212054;
        case 0x212058u: goto label_212058;
        case 0x21205cu: goto label_21205c;
        case 0x212060u: goto label_212060;
        case 0x212064u: goto label_212064;
        case 0x212068u: goto label_212068;
        case 0x21206cu: goto label_21206c;
        case 0x212070u: goto label_212070;
        case 0x212074u: goto label_212074;
        case 0x212078u: goto label_212078;
        case 0x21207cu: goto label_21207c;
        case 0x212080u: goto label_212080;
        case 0x212084u: goto label_212084;
        case 0x212088u: goto label_212088;
        case 0x21208cu: goto label_21208c;
        case 0x212090u: goto label_212090;
        case 0x212094u: goto label_212094;
        case 0x212098u: goto label_212098;
        case 0x21209cu: goto label_21209c;
        case 0x2120a0u: goto label_2120a0;
        case 0x2120a4u: goto label_2120a4;
        case 0x2120a8u: goto label_2120a8;
        case 0x2120acu: goto label_2120ac;
        case 0x2120b0u: goto label_2120b0;
        case 0x2120b4u: goto label_2120b4;
        case 0x2120b8u: goto label_2120b8;
        case 0x2120bcu: goto label_2120bc;
        case 0x2120c0u: goto label_2120c0;
        case 0x2120c4u: goto label_2120c4;
        case 0x2120c8u: goto label_2120c8;
        case 0x2120ccu: goto label_2120cc;
        case 0x2120d0u: goto label_2120d0;
        case 0x2120d4u: goto label_2120d4;
        case 0x2120d8u: goto label_2120d8;
        case 0x2120dcu: goto label_2120dc;
        case 0x2120e0u: goto label_2120e0;
        case 0x2120e4u: goto label_2120e4;
        case 0x2120e8u: goto label_2120e8;
        case 0x2120ecu: goto label_2120ec;
        case 0x2120f0u: goto label_2120f0;
        case 0x2120f4u: goto label_2120f4;
        case 0x2120f8u: goto label_2120f8;
        case 0x2120fcu: goto label_2120fc;
        case 0x212100u: goto label_212100;
        case 0x212104u: goto label_212104;
        case 0x212108u: goto label_212108;
        case 0x21210cu: goto label_21210c;
        case 0x212110u: goto label_212110;
        case 0x212114u: goto label_212114;
        case 0x212118u: goto label_212118;
        case 0x21211cu: goto label_21211c;
        case 0x212120u: goto label_212120;
        case 0x212124u: goto label_212124;
        case 0x212128u: goto label_212128;
        case 0x21212cu: goto label_21212c;
        case 0x212130u: goto label_212130;
        case 0x212134u: goto label_212134;
        case 0x212138u: goto label_212138;
        case 0x21213cu: goto label_21213c;
        case 0x212140u: goto label_212140;
        case 0x212144u: goto label_212144;
        case 0x212148u: goto label_212148;
        case 0x21214cu: goto label_21214c;
        case 0x212150u: goto label_212150;
        case 0x212154u: goto label_212154;
        case 0x212158u: goto label_212158;
        case 0x21215cu: goto label_21215c;
        case 0x212160u: goto label_212160;
        case 0x212164u: goto label_212164;
        case 0x212168u: goto label_212168;
        case 0x21216cu: goto label_21216c;
        case 0x212170u: goto label_212170;
        case 0x212174u: goto label_212174;
        case 0x212178u: goto label_212178;
        case 0x21217cu: goto label_21217c;
        case 0x212180u: goto label_212180;
        case 0x212184u: goto label_212184;
        case 0x212188u: goto label_212188;
        case 0x21218cu: goto label_21218c;
        case 0x212190u: goto label_212190;
        case 0x212194u: goto label_212194;
        case 0x212198u: goto label_212198;
        case 0x21219cu: goto label_21219c;
        case 0x2121a0u: goto label_2121a0;
        case 0x2121a4u: goto label_2121a4;
        case 0x2121a8u: goto label_2121a8;
        case 0x2121acu: goto label_2121ac;
        case 0x2121b0u: goto label_2121b0;
        case 0x2121b4u: goto label_2121b4;
        case 0x2121b8u: goto label_2121b8;
        case 0x2121bcu: goto label_2121bc;
        case 0x2121c0u: goto label_2121c0;
        case 0x2121c4u: goto label_2121c4;
        case 0x2121c8u: goto label_2121c8;
        case 0x2121ccu: goto label_2121cc;
        case 0x2121d0u: goto label_2121d0;
        case 0x2121d4u: goto label_2121d4;
        case 0x2121d8u: goto label_2121d8;
        case 0x2121dcu: goto label_2121dc;
        case 0x2121e0u: goto label_2121e0;
        case 0x2121e4u: goto label_2121e4;
        case 0x2121e8u: goto label_2121e8;
        case 0x2121ecu: goto label_2121ec;
        case 0x2121f0u: goto label_2121f0;
        case 0x2121f4u: goto label_2121f4;
        case 0x2121f8u: goto label_2121f8;
        case 0x2121fcu: goto label_2121fc;
        case 0x212200u: goto label_212200;
        case 0x212204u: goto label_212204;
        case 0x212208u: goto label_212208;
        case 0x21220cu: goto label_21220c;
        case 0x212210u: goto label_212210;
        case 0x212214u: goto label_212214;
        case 0x212218u: goto label_212218;
        case 0x21221cu: goto label_21221c;
        case 0x212220u: goto label_212220;
        case 0x212224u: goto label_212224;
        case 0x212228u: goto label_212228;
        case 0x21222cu: goto label_21222c;
        case 0x212230u: goto label_212230;
        case 0x212234u: goto label_212234;
        case 0x212238u: goto label_212238;
        case 0x21223cu: goto label_21223c;
        case 0x212240u: goto label_212240;
        case 0x212244u: goto label_212244;
        case 0x212248u: goto label_212248;
        case 0x21224cu: goto label_21224c;
        case 0x212250u: goto label_212250;
        case 0x212254u: goto label_212254;
        case 0x212258u: goto label_212258;
        case 0x21225cu: goto label_21225c;
        case 0x212260u: goto label_212260;
        case 0x212264u: goto label_212264;
        case 0x212268u: goto label_212268;
        case 0x21226cu: goto label_21226c;
        case 0x212270u: goto label_212270;
        case 0x212274u: goto label_212274;
        case 0x212278u: goto label_212278;
        case 0x21227cu: goto label_21227c;
        case 0x212280u: goto label_212280;
        case 0x212284u: goto label_212284;
        case 0x212288u: goto label_212288;
        case 0x21228cu: goto label_21228c;
        case 0x212290u: goto label_212290;
        case 0x212294u: goto label_212294;
        case 0x212298u: goto label_212298;
        case 0x21229cu: goto label_21229c;
        case 0x2122a0u: goto label_2122a0;
        case 0x2122a4u: goto label_2122a4;
        case 0x2122a8u: goto label_2122a8;
        case 0x2122acu: goto label_2122ac;
        case 0x2122b0u: goto label_2122b0;
        case 0x2122b4u: goto label_2122b4;
        case 0x2122b8u: goto label_2122b8;
        case 0x2122bcu: goto label_2122bc;
        case 0x2122c0u: goto label_2122c0;
        case 0x2122c4u: goto label_2122c4;
        case 0x2122c8u: goto label_2122c8;
        case 0x2122ccu: goto label_2122cc;
        case 0x2122d0u: goto label_2122d0;
        case 0x2122d4u: goto label_2122d4;
        case 0x2122d8u: goto label_2122d8;
        case 0x2122dcu: goto label_2122dc;
        case 0x2122e0u: goto label_2122e0;
        case 0x2122e4u: goto label_2122e4;
        case 0x2122e8u: goto label_2122e8;
        case 0x2122ecu: goto label_2122ec;
        case 0x2122f0u: goto label_2122f0;
        case 0x2122f4u: goto label_2122f4;
        case 0x2122f8u: goto label_2122f8;
        case 0x2122fcu: goto label_2122fc;
        case 0x212300u: goto label_212300;
        case 0x212304u: goto label_212304;
        case 0x212308u: goto label_212308;
        case 0x21230cu: goto label_21230c;
        case 0x212310u: goto label_212310;
        case 0x212314u: goto label_212314;
        case 0x212318u: goto label_212318;
        case 0x21231cu: goto label_21231c;
        case 0x212320u: goto label_212320;
        case 0x212324u: goto label_212324;
        case 0x212328u: goto label_212328;
        case 0x21232cu: goto label_21232c;
        case 0x212330u: goto label_212330;
        case 0x212334u: goto label_212334;
        case 0x212338u: goto label_212338;
        case 0x21233cu: goto label_21233c;
        case 0x212340u: goto label_212340;
        case 0x212344u: goto label_212344;
        case 0x212348u: goto label_212348;
        case 0x21234cu: goto label_21234c;
        case 0x212350u: goto label_212350;
        case 0x212354u: goto label_212354;
        case 0x212358u: goto label_212358;
        case 0x21235cu: goto label_21235c;
        case 0x212360u: goto label_212360;
        case 0x212364u: goto label_212364;
        case 0x212368u: goto label_212368;
        case 0x21236cu: goto label_21236c;
        case 0x212370u: goto label_212370;
        case 0x212374u: goto label_212374;
        case 0x212378u: goto label_212378;
        case 0x21237cu: goto label_21237c;
        case 0x212380u: goto label_212380;
        case 0x212384u: goto label_212384;
        case 0x212388u: goto label_212388;
        case 0x21238cu: goto label_21238c;
        case 0x212390u: goto label_212390;
        case 0x212394u: goto label_212394;
        case 0x212398u: goto label_212398;
        case 0x21239cu: goto label_21239c;
        case 0x2123a0u: goto label_2123a0;
        case 0x2123a4u: goto label_2123a4;
        case 0x2123a8u: goto label_2123a8;
        case 0x2123acu: goto label_2123ac;
        case 0x2123b0u: goto label_2123b0;
        case 0x2123b4u: goto label_2123b4;
        case 0x2123b8u: goto label_2123b8;
        case 0x2123bcu: goto label_2123bc;
        case 0x2123c0u: goto label_2123c0;
        case 0x2123c4u: goto label_2123c4;
        case 0x2123c8u: goto label_2123c8;
        case 0x2123ccu: goto label_2123cc;
        case 0x2123d0u: goto label_2123d0;
        case 0x2123d4u: goto label_2123d4;
        case 0x2123d8u: goto label_2123d8;
        case 0x2123dcu: goto label_2123dc;
        case 0x2123e0u: goto label_2123e0;
        case 0x2123e4u: goto label_2123e4;
        case 0x2123e8u: goto label_2123e8;
        case 0x2123ecu: goto label_2123ec;
        case 0x2123f0u: goto label_2123f0;
        case 0x2123f4u: goto label_2123f4;
        case 0x2123f8u: goto label_2123f8;
        case 0x2123fcu: goto label_2123fc;
        case 0x212400u: goto label_212400;
        case 0x212404u: goto label_212404;
        case 0x212408u: goto label_212408;
        case 0x21240cu: goto label_21240c;
        case 0x212410u: goto label_212410;
        case 0x212414u: goto label_212414;
        case 0x212418u: goto label_212418;
        case 0x21241cu: goto label_21241c;
        case 0x212420u: goto label_212420;
        case 0x212424u: goto label_212424;
        case 0x212428u: goto label_212428;
        case 0x21242cu: goto label_21242c;
        case 0x212430u: goto label_212430;
        case 0x212434u: goto label_212434;
        case 0x212438u: goto label_212438;
        case 0x21243cu: goto label_21243c;
        case 0x212440u: goto label_212440;
        case 0x212444u: goto label_212444;
        case 0x212448u: goto label_212448;
        case 0x21244cu: goto label_21244c;
        case 0x212450u: goto label_212450;
        case 0x212454u: goto label_212454;
        case 0x212458u: goto label_212458;
        case 0x21245cu: goto label_21245c;
        case 0x212460u: goto label_212460;
        case 0x212464u: goto label_212464;
        case 0x212468u: goto label_212468;
        case 0x21246cu: goto label_21246c;
        case 0x212470u: goto label_212470;
        case 0x212474u: goto label_212474;
        case 0x212478u: goto label_212478;
        case 0x21247cu: goto label_21247c;
        case 0x212480u: goto label_212480;
        case 0x212484u: goto label_212484;
        case 0x212488u: goto label_212488;
        case 0x21248cu: goto label_21248c;
        case 0x212490u: goto label_212490;
        case 0x212494u: goto label_212494;
        case 0x212498u: goto label_212498;
        case 0x21249cu: goto label_21249c;
        case 0x2124a0u: goto label_2124a0;
        case 0x2124a4u: goto label_2124a4;
        case 0x2124a8u: goto label_2124a8;
        case 0x2124acu: goto label_2124ac;
        case 0x2124b0u: goto label_2124b0;
        case 0x2124b4u: goto label_2124b4;
        case 0x2124b8u: goto label_2124b8;
        case 0x2124bcu: goto label_2124bc;
        case 0x2124c0u: goto label_2124c0;
        case 0x2124c4u: goto label_2124c4;
        case 0x2124c8u: goto label_2124c8;
        case 0x2124ccu: goto label_2124cc;
        case 0x2124d0u: goto label_2124d0;
        case 0x2124d4u: goto label_2124d4;
        case 0x2124d8u: goto label_2124d8;
        case 0x2124dcu: goto label_2124dc;
        case 0x2124e0u: goto label_2124e0;
        case 0x2124e4u: goto label_2124e4;
        case 0x2124e8u: goto label_2124e8;
        case 0x2124ecu: goto label_2124ec;
        case 0x2124f0u: goto label_2124f0;
        case 0x2124f4u: goto label_2124f4;
        case 0x2124f8u: goto label_2124f8;
        case 0x2124fcu: goto label_2124fc;
        case 0x212500u: goto label_212500;
        case 0x212504u: goto label_212504;
        case 0x212508u: goto label_212508;
        case 0x21250cu: goto label_21250c;
        case 0x212510u: goto label_212510;
        case 0x212514u: goto label_212514;
        case 0x212518u: goto label_212518;
        case 0x21251cu: goto label_21251c;
        case 0x212520u: goto label_212520;
        case 0x212524u: goto label_212524;
        case 0x212528u: goto label_212528;
        case 0x21252cu: goto label_21252c;
        case 0x212530u: goto label_212530;
        case 0x212534u: goto label_212534;
        case 0x212538u: goto label_212538;
        case 0x21253cu: goto label_21253c;
        case 0x212540u: goto label_212540;
        case 0x212544u: goto label_212544;
        case 0x212548u: goto label_212548;
        case 0x21254cu: goto label_21254c;
        case 0x212550u: goto label_212550;
        case 0x212554u: goto label_212554;
        case 0x212558u: goto label_212558;
        case 0x21255cu: goto label_21255c;
        case 0x212560u: goto label_212560;
        case 0x212564u: goto label_212564;
        case 0x212568u: goto label_212568;
        case 0x21256cu: goto label_21256c;
        case 0x212570u: goto label_212570;
        case 0x212574u: goto label_212574;
        case 0x212578u: goto label_212578;
        case 0x21257cu: goto label_21257c;
        case 0x212580u: goto label_212580;
        case 0x212584u: goto label_212584;
        case 0x212588u: goto label_212588;
        case 0x21258cu: goto label_21258c;
        case 0x212590u: goto label_212590;
        case 0x212594u: goto label_212594;
        case 0x212598u: goto label_212598;
        case 0x21259cu: goto label_21259c;
        case 0x2125a0u: goto label_2125a0;
        case 0x2125a4u: goto label_2125a4;
        case 0x2125a8u: goto label_2125a8;
        case 0x2125acu: goto label_2125ac;
        case 0x2125b0u: goto label_2125b0;
        case 0x2125b4u: goto label_2125b4;
        case 0x2125b8u: goto label_2125b8;
        case 0x2125bcu: goto label_2125bc;
        case 0x2125c0u: goto label_2125c0;
        case 0x2125c4u: goto label_2125c4;
        case 0x2125c8u: goto label_2125c8;
        case 0x2125ccu: goto label_2125cc;
        case 0x2125d0u: goto label_2125d0;
        case 0x2125d4u: goto label_2125d4;
        case 0x2125d8u: goto label_2125d8;
        case 0x2125dcu: goto label_2125dc;
        case 0x2125e0u: goto label_2125e0;
        case 0x2125e4u: goto label_2125e4;
        case 0x2125e8u: goto label_2125e8;
        case 0x2125ecu: goto label_2125ec;
        case 0x2125f0u: goto label_2125f0;
        case 0x2125f4u: goto label_2125f4;
        case 0x2125f8u: goto label_2125f8;
        case 0x2125fcu: goto label_2125fc;
        case 0x212600u: goto label_212600;
        case 0x212604u: goto label_212604;
        case 0x212608u: goto label_212608;
        case 0x21260cu: goto label_21260c;
        case 0x212610u: goto label_212610;
        case 0x212614u: goto label_212614;
        case 0x212618u: goto label_212618;
        case 0x21261cu: goto label_21261c;
        case 0x212620u: goto label_212620;
        case 0x212624u: goto label_212624;
        case 0x212628u: goto label_212628;
        case 0x21262cu: goto label_21262c;
        case 0x212630u: goto label_212630;
        case 0x212634u: goto label_212634;
        case 0x212638u: goto label_212638;
        case 0x21263cu: goto label_21263c;
        case 0x212640u: goto label_212640;
        case 0x212644u: goto label_212644;
        case 0x212648u: goto label_212648;
        case 0x21264cu: goto label_21264c;
        case 0x212650u: goto label_212650;
        case 0x212654u: goto label_212654;
        case 0x212658u: goto label_212658;
        case 0x21265cu: goto label_21265c;
        case 0x212660u: goto label_212660;
        case 0x212664u: goto label_212664;
        case 0x212668u: goto label_212668;
        case 0x21266cu: goto label_21266c;
        case 0x212670u: goto label_212670;
        case 0x212674u: goto label_212674;
        case 0x212678u: goto label_212678;
        case 0x21267cu: goto label_21267c;
        case 0x212680u: goto label_212680;
        case 0x212684u: goto label_212684;
        case 0x212688u: goto label_212688;
        case 0x21268cu: goto label_21268c;
        case 0x212690u: goto label_212690;
        case 0x212694u: goto label_212694;
        case 0x212698u: goto label_212698;
        case 0x21269cu: goto label_21269c;
        case 0x2126a0u: goto label_2126a0;
        case 0x2126a4u: goto label_2126a4;
        case 0x2126a8u: goto label_2126a8;
        case 0x2126acu: goto label_2126ac;
        case 0x2126b0u: goto label_2126b0;
        case 0x2126b4u: goto label_2126b4;
        case 0x2126b8u: goto label_2126b8;
        case 0x2126bcu: goto label_2126bc;
        case 0x2126c0u: goto label_2126c0;
        case 0x2126c4u: goto label_2126c4;
        case 0x2126c8u: goto label_2126c8;
        case 0x2126ccu: goto label_2126cc;
        case 0x2126d0u: goto label_2126d0;
        case 0x2126d4u: goto label_2126d4;
        case 0x2126d8u: goto label_2126d8;
        case 0x2126dcu: goto label_2126dc;
        case 0x2126e0u: goto label_2126e0;
        case 0x2126e4u: goto label_2126e4;
        case 0x2126e8u: goto label_2126e8;
        case 0x2126ecu: goto label_2126ec;
        case 0x2126f0u: goto label_2126f0;
        case 0x2126f4u: goto label_2126f4;
        case 0x2126f8u: goto label_2126f8;
        case 0x2126fcu: goto label_2126fc;
        case 0x212700u: goto label_212700;
        case 0x212704u: goto label_212704;
        case 0x212708u: goto label_212708;
        case 0x21270cu: goto label_21270c;
        case 0x212710u: goto label_212710;
        case 0x212714u: goto label_212714;
        case 0x212718u: goto label_212718;
        case 0x21271cu: goto label_21271c;
        case 0x212720u: goto label_212720;
        case 0x212724u: goto label_212724;
        case 0x212728u: goto label_212728;
        case 0x21272cu: goto label_21272c;
        case 0x212730u: goto label_212730;
        case 0x212734u: goto label_212734;
        case 0x212738u: goto label_212738;
        case 0x21273cu: goto label_21273c;
        case 0x212740u: goto label_212740;
        case 0x212744u: goto label_212744;
        case 0x212748u: goto label_212748;
        case 0x21274cu: goto label_21274c;
        case 0x212750u: goto label_212750;
        case 0x212754u: goto label_212754;
        case 0x212758u: goto label_212758;
        case 0x21275cu: goto label_21275c;
        case 0x212760u: goto label_212760;
        case 0x212764u: goto label_212764;
        case 0x212768u: goto label_212768;
        case 0x21276cu: goto label_21276c;
        case 0x212770u: goto label_212770;
        case 0x212774u: goto label_212774;
        case 0x212778u: goto label_212778;
        case 0x21277cu: goto label_21277c;
        case 0x212780u: goto label_212780;
        case 0x212784u: goto label_212784;
        case 0x212788u: goto label_212788;
        case 0x21278cu: goto label_21278c;
        case 0x212790u: goto label_212790;
        case 0x212794u: goto label_212794;
        case 0x212798u: goto label_212798;
        case 0x21279cu: goto label_21279c;
        case 0x2127a0u: goto label_2127a0;
        case 0x2127a4u: goto label_2127a4;
        case 0x2127a8u: goto label_2127a8;
        case 0x2127acu: goto label_2127ac;
        case 0x2127b0u: goto label_2127b0;
        case 0x2127b4u: goto label_2127b4;
        case 0x2127b8u: goto label_2127b8;
        case 0x2127bcu: goto label_2127bc;
        case 0x2127c0u: goto label_2127c0;
        case 0x2127c4u: goto label_2127c4;
        case 0x2127c8u: goto label_2127c8;
        case 0x2127ccu: goto label_2127cc;
        case 0x2127d0u: goto label_2127d0;
        case 0x2127d4u: goto label_2127d4;
        case 0x2127d8u: goto label_2127d8;
        case 0x2127dcu: goto label_2127dc;
        case 0x2127e0u: goto label_2127e0;
        case 0x2127e4u: goto label_2127e4;
        case 0x2127e8u: goto label_2127e8;
        case 0x2127ecu: goto label_2127ec;
        case 0x2127f0u: goto label_2127f0;
        case 0x2127f4u: goto label_2127f4;
        case 0x2127f8u: goto label_2127f8;
        case 0x2127fcu: goto label_2127fc;
        case 0x212800u: goto label_212800;
        case 0x212804u: goto label_212804;
        case 0x212808u: goto label_212808;
        case 0x21280cu: goto label_21280c;
        case 0x212810u: goto label_212810;
        case 0x212814u: goto label_212814;
        case 0x212818u: goto label_212818;
        case 0x21281cu: goto label_21281c;
        case 0x212820u: goto label_212820;
        case 0x212824u: goto label_212824;
        case 0x212828u: goto label_212828;
        case 0x21282cu: goto label_21282c;
        case 0x212830u: goto label_212830;
        case 0x212834u: goto label_212834;
        case 0x212838u: goto label_212838;
        case 0x21283cu: goto label_21283c;
        case 0x212840u: goto label_212840;
        case 0x212844u: goto label_212844;
        case 0x212848u: goto label_212848;
        case 0x21284cu: goto label_21284c;
        case 0x212850u: goto label_212850;
        case 0x212854u: goto label_212854;
        case 0x212858u: goto label_212858;
        case 0x21285cu: goto label_21285c;
        case 0x212860u: goto label_212860;
        case 0x212864u: goto label_212864;
        case 0x212868u: goto label_212868;
        case 0x21286cu: goto label_21286c;
        case 0x212870u: goto label_212870;
        case 0x212874u: goto label_212874;
        case 0x212878u: goto label_212878;
        case 0x21287cu: goto label_21287c;
        case 0x212880u: goto label_212880;
        case 0x212884u: goto label_212884;
        case 0x212888u: goto label_212888;
        case 0x21288cu: goto label_21288c;
        case 0x212890u: goto label_212890;
        case 0x212894u: goto label_212894;
        case 0x212898u: goto label_212898;
        case 0x21289cu: goto label_21289c;
        case 0x2128a0u: goto label_2128a0;
        case 0x2128a4u: goto label_2128a4;
        case 0x2128a8u: goto label_2128a8;
        case 0x2128acu: goto label_2128ac;
        case 0x2128b0u: goto label_2128b0;
        case 0x2128b4u: goto label_2128b4;
        case 0x2128b8u: goto label_2128b8;
        case 0x2128bcu: goto label_2128bc;
        case 0x2128c0u: goto label_2128c0;
        case 0x2128c4u: goto label_2128c4;
        case 0x2128c8u: goto label_2128c8;
        case 0x2128ccu: goto label_2128cc;
        case 0x2128d0u: goto label_2128d0;
        case 0x2128d4u: goto label_2128d4;
        case 0x2128d8u: goto label_2128d8;
        case 0x2128dcu: goto label_2128dc;
        case 0x2128e0u: goto label_2128e0;
        case 0x2128e4u: goto label_2128e4;
        case 0x2128e8u: goto label_2128e8;
        case 0x2128ecu: goto label_2128ec;
        case 0x2128f0u: goto label_2128f0;
        case 0x2128f4u: goto label_2128f4;
        case 0x2128f8u: goto label_2128f8;
        case 0x2128fcu: goto label_2128fc;
        case 0x212900u: goto label_212900;
        case 0x212904u: goto label_212904;
        case 0x212908u: goto label_212908;
        case 0x21290cu: goto label_21290c;
        case 0x212910u: goto label_212910;
        case 0x212914u: goto label_212914;
        case 0x212918u: goto label_212918;
        case 0x21291cu: goto label_21291c;
        case 0x212920u: goto label_212920;
        case 0x212924u: goto label_212924;
        case 0x212928u: goto label_212928;
        case 0x21292cu: goto label_21292c;
        case 0x212930u: goto label_212930;
        case 0x212934u: goto label_212934;
        case 0x212938u: goto label_212938;
        case 0x21293cu: goto label_21293c;
        case 0x212940u: goto label_212940;
        case 0x212944u: goto label_212944;
        case 0x212948u: goto label_212948;
        case 0x21294cu: goto label_21294c;
        case 0x212950u: goto label_212950;
        case 0x212954u: goto label_212954;
        case 0x212958u: goto label_212958;
        case 0x21295cu: goto label_21295c;
        case 0x212960u: goto label_212960;
        case 0x212964u: goto label_212964;
        case 0x212968u: goto label_212968;
        case 0x21296cu: goto label_21296c;
        case 0x212970u: goto label_212970;
        case 0x212974u: goto label_212974;
        case 0x212978u: goto label_212978;
        case 0x21297cu: goto label_21297c;
        case 0x212980u: goto label_212980;
        case 0x212984u: goto label_212984;
        case 0x212988u: goto label_212988;
        case 0x21298cu: goto label_21298c;
        case 0x212990u: goto label_212990;
        case 0x212994u: goto label_212994;
        case 0x212998u: goto label_212998;
        case 0x21299cu: goto label_21299c;
        case 0x2129a0u: goto label_2129a0;
        case 0x2129a4u: goto label_2129a4;
        case 0x2129a8u: goto label_2129a8;
        case 0x2129acu: goto label_2129ac;
        case 0x2129b0u: goto label_2129b0;
        case 0x2129b4u: goto label_2129b4;
        case 0x2129b8u: goto label_2129b8;
        case 0x2129bcu: goto label_2129bc;
        case 0x2129c0u: goto label_2129c0;
        case 0x2129c4u: goto label_2129c4;
        case 0x2129c8u: goto label_2129c8;
        case 0x2129ccu: goto label_2129cc;
        case 0x2129d0u: goto label_2129d0;
        case 0x2129d4u: goto label_2129d4;
        case 0x2129d8u: goto label_2129d8;
        case 0x2129dcu: goto label_2129dc;
        case 0x2129e0u: goto label_2129e0;
        case 0x2129e4u: goto label_2129e4;
        case 0x2129e8u: goto label_2129e8;
        case 0x2129ecu: goto label_2129ec;
        case 0x2129f0u: goto label_2129f0;
        case 0x2129f4u: goto label_2129f4;
        case 0x2129f8u: goto label_2129f8;
        case 0x2129fcu: goto label_2129fc;
        case 0x212a00u: goto label_212a00;
        case 0x212a04u: goto label_212a04;
        case 0x212a08u: goto label_212a08;
        case 0x212a0cu: goto label_212a0c;
        case 0x212a10u: goto label_212a10;
        case 0x212a14u: goto label_212a14;
        case 0x212a18u: goto label_212a18;
        case 0x212a1cu: goto label_212a1c;
        case 0x212a20u: goto label_212a20;
        case 0x212a24u: goto label_212a24;
        case 0x212a28u: goto label_212a28;
        case 0x212a2cu: goto label_212a2c;
        case 0x212a30u: goto label_212a30;
        case 0x212a34u: goto label_212a34;
        case 0x212a38u: goto label_212a38;
        case 0x212a3cu: goto label_212a3c;
        case 0x212a40u: goto label_212a40;
        case 0x212a44u: goto label_212a44;
        case 0x212a48u: goto label_212a48;
        case 0x212a4cu: goto label_212a4c;
        case 0x212a50u: goto label_212a50;
        case 0x212a54u: goto label_212a54;
        case 0x212a58u: goto label_212a58;
        case 0x212a5cu: goto label_212a5c;
        case 0x212a60u: goto label_212a60;
        case 0x212a64u: goto label_212a64;
        case 0x212a68u: goto label_212a68;
        case 0x212a6cu: goto label_212a6c;
        case 0x212a70u: goto label_212a70;
        case 0x212a74u: goto label_212a74;
        case 0x212a78u: goto label_212a78;
        case 0x212a7cu: goto label_212a7c;
        case 0x212a80u: goto label_212a80;
        case 0x212a84u: goto label_212a84;
        case 0x212a88u: goto label_212a88;
        case 0x212a8cu: goto label_212a8c;
        case 0x212a90u: goto label_212a90;
        case 0x212a94u: goto label_212a94;
        case 0x212a98u: goto label_212a98;
        case 0x212a9cu: goto label_212a9c;
        case 0x212aa0u: goto label_212aa0;
        case 0x212aa4u: goto label_212aa4;
        case 0x212aa8u: goto label_212aa8;
        case 0x212aacu: goto label_212aac;
        case 0x212ab0u: goto label_212ab0;
        case 0x212ab4u: goto label_212ab4;
        case 0x212ab8u: goto label_212ab8;
        case 0x212abcu: goto label_212abc;
        case 0x212ac0u: goto label_212ac0;
        case 0x212ac4u: goto label_212ac4;
        case 0x212ac8u: goto label_212ac8;
        case 0x212accu: goto label_212acc;
        case 0x212ad0u: goto label_212ad0;
        case 0x212ad4u: goto label_212ad4;
        case 0x212ad8u: goto label_212ad8;
        case 0x212adcu: goto label_212adc;
        case 0x212ae0u: goto label_212ae0;
        case 0x212ae4u: goto label_212ae4;
        case 0x212ae8u: goto label_212ae8;
        case 0x212aecu: goto label_212aec;
        case 0x212af0u: goto label_212af0;
        case 0x212af4u: goto label_212af4;
        case 0x212af8u: goto label_212af8;
        case 0x212afcu: goto label_212afc;
        case 0x212b00u: goto label_212b00;
        case 0x212b04u: goto label_212b04;
        case 0x212b08u: goto label_212b08;
        case 0x212b0cu: goto label_212b0c;
        case 0x212b10u: goto label_212b10;
        case 0x212b14u: goto label_212b14;
        case 0x212b18u: goto label_212b18;
        case 0x212b1cu: goto label_212b1c;
        case 0x212b20u: goto label_212b20;
        case 0x212b24u: goto label_212b24;
        case 0x212b28u: goto label_212b28;
        case 0x212b2cu: goto label_212b2c;
        case 0x212b30u: goto label_212b30;
        case 0x212b34u: goto label_212b34;
        case 0x212b38u: goto label_212b38;
        case 0x212b3cu: goto label_212b3c;
        case 0x212b40u: goto label_212b40;
        case 0x212b44u: goto label_212b44;
        case 0x212b48u: goto label_212b48;
        case 0x212b4cu: goto label_212b4c;
        case 0x212b50u: goto label_212b50;
        case 0x212b54u: goto label_212b54;
        case 0x212b58u: goto label_212b58;
        case 0x212b5cu: goto label_212b5c;
        case 0x212b60u: goto label_212b60;
        case 0x212b64u: goto label_212b64;
        case 0x212b68u: goto label_212b68;
        case 0x212b6cu: goto label_212b6c;
        case 0x212b70u: goto label_212b70;
        case 0x212b74u: goto label_212b74;
        case 0x212b78u: goto label_212b78;
        case 0x212b7cu: goto label_212b7c;
        case 0x212b80u: goto label_212b80;
        case 0x212b84u: goto label_212b84;
        case 0x212b88u: goto label_212b88;
        case 0x212b8cu: goto label_212b8c;
        case 0x212b90u: goto label_212b90;
        case 0x212b94u: goto label_212b94;
        case 0x212b98u: goto label_212b98;
        case 0x212b9cu: goto label_212b9c;
        case 0x212ba0u: goto label_212ba0;
        case 0x212ba4u: goto label_212ba4;
        case 0x212ba8u: goto label_212ba8;
        case 0x212bacu: goto label_212bac;
        case 0x212bb0u: goto label_212bb0;
        case 0x212bb4u: goto label_212bb4;
        case 0x212bb8u: goto label_212bb8;
        case 0x212bbcu: goto label_212bbc;
        case 0x212bc0u: goto label_212bc0;
        case 0x212bc4u: goto label_212bc4;
        case 0x212bc8u: goto label_212bc8;
        case 0x212bccu: goto label_212bcc;
        case 0x212bd0u: goto label_212bd0;
        case 0x212bd4u: goto label_212bd4;
        case 0x212bd8u: goto label_212bd8;
        case 0x212bdcu: goto label_212bdc;
        case 0x212be0u: goto label_212be0;
        case 0x212be4u: goto label_212be4;
        case 0x212be8u: goto label_212be8;
        case 0x212becu: goto label_212bec;
        case 0x212bf0u: goto label_212bf0;
        case 0x212bf4u: goto label_212bf4;
        case 0x212bf8u: goto label_212bf8;
        case 0x212bfcu: goto label_212bfc;
        case 0x212c00u: goto label_212c00;
        case 0x212c04u: goto label_212c04;
        default: break;
    }

    ctx->pc = 0x211c08u;

label_211c08:
    // 0x211c08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x211c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_211c0c:
    // 0x211c0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x211c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211c10:
    // 0x211c10: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x211c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_211c14:
    // 0x211c14: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x211c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_211c18:
    // 0x211c18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x211c18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_211c1c:
    // 0x211c1c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x211c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_211c20:
    // 0x211c20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x211c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_211c24:
    // 0x211c24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x211c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_211c28:
    // 0x211c28: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x211c28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_211c2c:
    // 0x211c2c: 0x8e4516d0  lw          $a1, 0x16D0($s2)
    ctx->pc = 0x211c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
label_211c30:
    // 0x211c30: 0x924402f6  lbu         $a0, 0x2F6($s2)
    ctx->pc = 0x211c30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_211c34:
    // 0x211c34: 0x34a20400  ori         $v0, $a1, 0x400
    ctx->pc = 0x211c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
label_211c38:
    // 0x211c38: 0x108300bd  beq         $a0, $v1, . + 4 + (0xBD << 2)
label_211c3c:
    if (ctx->pc == 0x211C3Cu) {
        ctx->pc = 0x211C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C38u;
        // 0x211c3c: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211C40u;
        goto label_211c40;
    }
    ctx->pc = 0x211C38u;
    {
        const bool branch_taken_0x211c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x211C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C38u;
        // 0x211c3c: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c38) {
            ctx->pc = 0x211F30u;
            goto label_211f30;
        }
    }
    ctx->pc = 0x211C40u;
label_211c40:
    // 0x211c40: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x211c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_211c44:
    // 0x211c44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_211c48:
    if (ctx->pc == 0x211C48u) {
        ctx->pc = 0x211C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C44u;
        // 0x211c48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211C4Cu;
        goto label_211c4c;
    }
    ctx->pc = 0x211C44u;
    {
        const bool branch_taken_0x211c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C44u;
        // 0x211c48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c44) {
            ctx->pc = 0x211C5Cu;
            goto label_211c5c;
        }
    }
    ctx->pc = 0x211C4Cu;
label_211c4c:
    // 0x211c4c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_211c50:
    if (ctx->pc == 0x211C50u) {
        ctx->pc = 0x211C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C4Cu;
        // 0x211c50: 0x34a30402  ori         $v1, $a1, 0x402 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1026);
        ctx->in_delay_slot = false;
        ctx->pc = 0x211C54u;
        goto label_211c54;
    }
    ctx->pc = 0x211C4Cu;
    {
        const bool branch_taken_0x211c4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x211C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C4Cu;
        // 0x211c50: 0x34a30402  ori         $v1, $a1, 0x402 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1026);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c4c) {
            ctx->pc = 0x211C74u;
            goto label_211c74;
        }
    }
    ctx->pc = 0x211C54u;
label_211c54:
    // 0x211c54: 0x10000268  b           . + 4 + (0x268 << 2)
label_211c58:
    if (ctx->pc == 0x211C58u) {
        ctx->pc = 0x211C5Cu;
        goto label_211c5c;
    }
    ctx->pc = 0x211C54u;
    {
        const bool branch_taken_0x211c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211c54) {
            ctx->pc = 0x2125F8u;
            goto label_2125f8;
        }
    }
    ctx->pc = 0x211C5Cu;
label_211c5c:
    // 0x211c5c: 0x1082015f  beq         $a0, $v0, . + 4 + (0x15F << 2)
label_211c60:
    if (ctx->pc == 0x211C60u) {
        ctx->pc = 0x211C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C5Cu;
        // 0x211c60: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211C64u;
        goto label_211c64;
    }
    ctx->pc = 0x211C5Cu;
    {
        const bool branch_taken_0x211c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x211C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C5Cu;
        // 0x211c60: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c5c) {
            ctx->pc = 0x2121DCu;
            goto label_2121dc;
        }
    }
    ctx->pc = 0x211C64u;
label_211c64:
    // 0x211c64: 0x1082023f  beq         $a0, $v0, . + 4 + (0x23F << 2)
label_211c68:
    if (ctx->pc == 0x211C68u) {
        ctx->pc = 0x211C6Cu;
        goto label_211c6c;
    }
    ctx->pc = 0x211C64u;
    {
        const bool branch_taken_0x211c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x211c64) {
            ctx->pc = 0x212564u;
            goto label_212564;
        }
    }
    ctx->pc = 0x211C6Cu;
label_211c6c:
    // 0x211c6c: 0x10000262  b           . + 4 + (0x262 << 2)
label_211c70:
    if (ctx->pc == 0x211C70u) {
        ctx->pc = 0x211C74u;
        goto label_211c74;
    }
    ctx->pc = 0x211C6Cu;
    {
        const bool branch_taken_0x211c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211c6c) {
            ctx->pc = 0x2125F8u;
            goto label_2125f8;
        }
    }
    ctx->pc = 0x211C74u;
label_211c74:
    // 0x211c74: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x211c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_211c78:
    // 0x211c78: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x211c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_211c7c:
    // 0x211c7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_211c80:
    // 0x211c80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x211c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_211c84:
    // 0x211c84: 0xc09d91a  jal         func_276468
label_211c88:
    if (ctx->pc == 0x211C88u) {
        ctx->pc = 0x211C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C84u;
        // 0x211c88: 0xae4316d0  sw          $v1, 0x16D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211C8Cu;
        goto label_211c8c;
    }
    ctx->pc = 0x211C84u;
    SET_GPR_U32(ctx, 31, 0x211C8Cu);
    ctx->pc = 0x211C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211C84u;
    // 0x211c88: 0xae4316d0  sw          $v1, 0x16D0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x211C84u, 0x211C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211C8Cu;
label_211c8c:
    // 0x211c8c: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x211c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_211c90:
    // 0x211c90: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x211c90u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_211c94:
    // 0x211c94: 0x2463fdfe  addiu       $v1, $v1, -0x202
    ctx->pc = 0x211c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966782));
label_211c98:
    // 0x211c98: 0x2c62007d  sltiu       $v0, $v1, 0x7D
    ctx->pc = 0x211c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
label_211c9c:
    // 0x211c9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_211ca0:
    if (ctx->pc == 0x211CA0u) {
        ctx->pc = 0x211CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C9Cu;
        // 0x211ca0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211CA4u;
        goto label_211ca4;
    }
    ctx->pc = 0x211C9Cu;
    {
        const bool branch_taken_0x211c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C9Cu;
        // 0x211ca0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c9c) {
            ctx->pc = 0x211CBCu;
            goto label_211cbc;
        }
    }
    ctx->pc = 0x211CA4u;
label_211ca4:
    // 0x211ca4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x211ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_211ca8:
    // 0x211ca8: 0x24424c70  addiu       $v0, $v0, 0x4C70
    ctx->pc = 0x211ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19568));
label_211cac:
    // 0x211cac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x211cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_211cb0:
    // 0x211cb0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x211cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_211cb4:
    // 0x211cb4: 0x800008  jr          $a0
label_211cb8:
    if (ctx->pc == 0x211CB8u) {
        ctx->pc = 0x211CBCu;
        goto label_211cbc;
    }
    ctx->pc = 0x211CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211CBCu: goto label_211cbc;
            case 0x211CCCu: goto label_211ccc;
            case 0x211CDCu: goto label_211cdc;
            case 0x211CECu: goto label_211cec;
            case 0x211CFCu: goto label_211cfc;
            case 0x211D0Cu: goto label_211d0c;
            case 0x211D1Cu: goto label_211d1c;
            case 0x211D2Cu: goto label_211d2c;
            case 0x211D3Cu: goto label_211d3c;
            case 0x211D6Cu: goto label_211d6c;
            case 0x211D7Cu: goto label_211d7c;
            case 0x211D8Cu: goto label_211d8c;
            case 0x211D9Cu: goto label_211d9c;
            case 0x211DACu: goto label_211dac;
            case 0x211DE4u: goto label_211de4;
            case 0x211DF4u: goto label_211df4;
            case 0x211E04u: goto label_211e04;
            case 0x211E14u: goto label_211e14;
            case 0x211E80u: goto label_211e80;
            case 0x211E90u: goto label_211e90;
            case 0x211EA0u: goto label_211ea0;
            case 0x211EB0u: goto label_211eb0;
            case 0x211EC0u: goto label_211ec0;
            case 0x211ED0u: goto label_211ed0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211CB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x211CBCu;
label_211cbc:
    // 0x211cbc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211cc0:
    // 0x211cc0: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x211cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_211cc4:
    // 0x211cc4: 0x10000085  b           . + 4 + (0x85 << 2)
label_211cc8:
    if (ctx->pc == 0x211CC8u) {
        ctx->pc = 0x211CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CC4u;
        // 0x211cc8: 0x8c44009c  lw          $a0, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211CCCu;
        goto label_211ccc;
    }
    ctx->pc = 0x211CC4u;
    {
        const bool branch_taken_0x211cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CC4u;
        // 0x211cc8: 0x8c44009c  lw          $a0, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211cc4) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211CCCu;
label_211ccc:
    // 0x211ccc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211cd0:
    // 0x211cd0: 0x8c430648  lw          $v1, 0x648($v0)
    ctx->pc = 0x211cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1608)));
label_211cd4:
    // 0x211cd4: 0x10000081  b           . + 4 + (0x81 << 2)
label_211cd8:
    if (ctx->pc == 0x211CD8u) {
        ctx->pc = 0x211CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CD4u;
        // 0x211cd8: 0x8c44064c  lw          $a0, 0x64C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211CDCu;
        goto label_211cdc;
    }
    ctx->pc = 0x211CD4u;
    {
        const bool branch_taken_0x211cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CD4u;
        // 0x211cd8: 0x8c44064c  lw          $a0, 0x64C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211cd4) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211CDCu;
label_211cdc:
    // 0x211cdc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211ce0:
    // 0x211ce0: 0x8c4335cc  lw          $v1, 0x35CC($v0)
    ctx->pc = 0x211ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13772)));
label_211ce4:
    // 0x211ce4: 0x1000007d  b           . + 4 + (0x7D << 2)
label_211ce8:
    if (ctx->pc == 0x211CE8u) {
        ctx->pc = 0x211CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CE4u;
        // 0x211ce8: 0x8c4435d0  lw          $a0, 0x35D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211CECu;
        goto label_211cec;
    }
    ctx->pc = 0x211CE4u;
    {
        const bool branch_taken_0x211ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CE4u;
        // 0x211ce8: 0x8c4435d0  lw          $a0, 0x35D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ce4) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211CECu;
label_211cec:
    // 0x211cec: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211cf0:
    // 0x211cf0: 0x8c4325ac  lw          $v1, 0x25AC($v0)
    ctx->pc = 0x211cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9644)));
label_211cf4:
    // 0x211cf4: 0x10000079  b           . + 4 + (0x79 << 2)
label_211cf8:
    if (ctx->pc == 0x211CF8u) {
        ctx->pc = 0x211CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CF4u;
        // 0x211cf8: 0x8c4425b0  lw          $a0, 0x25B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9648)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211CFCu;
        goto label_211cfc;
    }
    ctx->pc = 0x211CF4u;
    {
        const bool branch_taken_0x211cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CF4u;
        // 0x211cf8: 0x8c4425b0  lw          $a0, 0x25B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211cf4) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211CFCu;
label_211cfc:
    // 0x211cfc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211d00:
    // 0x211d00: 0x8c4310a8  lw          $v1, 0x10A8($v0)
    ctx->pc = 0x211d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4264)));
label_211d04:
    // 0x211d04: 0x10000075  b           . + 4 + (0x75 << 2)
label_211d08:
    if (ctx->pc == 0x211D08u) {
        ctx->pc = 0x211D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D04u;
        // 0x211d08: 0x8c4410ac  lw          $a0, 0x10AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D0Cu;
        goto label_211d0c;
    }
    ctx->pc = 0x211D04u;
    {
        const bool branch_taken_0x211d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D04u;
        // 0x211d08: 0x8c4410ac  lw          $a0, 0x10AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d04) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211D0Cu;
label_211d0c:
    // 0x211d0c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211d10:
    // 0x211d10: 0x8c433c88  lw          $v1, 0x3C88($v0)
    ctx->pc = 0x211d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15496)));
label_211d14:
    // 0x211d14: 0x10000071  b           . + 4 + (0x71 << 2)
label_211d18:
    if (ctx->pc == 0x211D18u) {
        ctx->pc = 0x211D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D14u;
        // 0x211d18: 0x8c443c8c  lw          $a0, 0x3C8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15500)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D1Cu;
        goto label_211d1c;
    }
    ctx->pc = 0x211D14u;
    {
        const bool branch_taken_0x211d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D14u;
        // 0x211d18: 0x8c443c8c  lw          $a0, 0x3C8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d14) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211D1Cu;
label_211d1c:
    // 0x211d1c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211d20:
    // 0x211d20: 0x8c4324ec  lw          $v1, 0x24EC($v0)
    ctx->pc = 0x211d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9452)));
label_211d24:
    // 0x211d24: 0x1000006d  b           . + 4 + (0x6D << 2)
label_211d28:
    if (ctx->pc == 0x211D28u) {
        ctx->pc = 0x211D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D24u;
        // 0x211d28: 0x8c4424f0  lw          $a0, 0x24F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D2Cu;
        goto label_211d2c;
    }
    ctx->pc = 0x211D24u;
    {
        const bool branch_taken_0x211d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D24u;
        // 0x211d28: 0x8c4424f0  lw          $a0, 0x24F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d24) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211D2Cu;
label_211d2c:
    // 0x211d2c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211d30:
    // 0x211d30: 0x8c430828  lw          $v1, 0x828($v0)
    ctx->pc = 0x211d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2088)));
label_211d34:
    // 0x211d34: 0x10000069  b           . + 4 + (0x69 << 2)
label_211d38:
    if (ctx->pc == 0x211D38u) {
        ctx->pc = 0x211D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D34u;
        // 0x211d38: 0x8c44082c  lw          $a0, 0x82C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D3Cu;
        goto label_211d3c;
    }
    ctx->pc = 0x211D34u;
    {
        const bool branch_taken_0x211d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D34u;
        // 0x211d38: 0x8c44082c  lw          $a0, 0x82C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d34) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211D3Cu;
label_211d3c:
    // 0x211d3c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211d40:
    // 0x211d40: 0x24060279  addiu       $a2, $zero, 0x279
    ctx->pc = 0x211d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
label_211d44:
    // 0x211d44: 0x8e450564  lw          $a1, 0x564($s2)
    ctx->pc = 0x211d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_211d48:
    // 0x211d48: 0x8c431fb0  lw          $v1, 0x1FB0($v0)
    ctx->pc = 0x211d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8112)));
label_211d4c:
    // 0x211d4c: 0x8c441fb4  lw          $a0, 0x1FB4($v0)
    ctx->pc = 0x211d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8116)));
label_211d50:
    // 0x211d50: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x211d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_211d54:
    // 0x211d54: 0x14a60063  bne         $a1, $a2, . + 4 + (0x63 << 2)
label_211d58:
    if (ctx->pc == 0x211D58u) {
        ctx->pc = 0x211D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D54u;
        // 0x211d58: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D5Cu;
        goto label_211d5c;
    }
    ctx->pc = 0x211D54u;
    {
        const bool branch_taken_0x211d54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x211D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D54u;
        // 0x211d58: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d54) {
            ctx->pc = 0x211EE4u;
            goto label_211ee4;
        }
    }
    ctx->pc = 0x211D5Cu;
label_211d5c:
    // 0x211d5c: 0xc09ac7a  jal         func_26B1E8
label_211d60:
    if (ctx->pc == 0x211D60u) {
        ctx->pc = 0x211D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D5Cu;
        // 0x211d60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D64u;
        goto label_211d64;
    }
    ctx->pc = 0x211D5Cu;
    SET_GPR_U32(ctx, 31, 0x211D64u);
    ctx->pc = 0x211D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211D5Cu;
    // 0x211d60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x211D5Cu, 0x211D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D64u;
label_211d64:
    // 0x211d64: 0x10000060  b           . + 4 + (0x60 << 2)
label_211d68:
    if (ctx->pc == 0x211D68u) {
        ctx->pc = 0x211D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D64u;
        // 0x211d68: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D6Cu;
        goto label_211d6c;
    }
    ctx->pc = 0x211D64u;
    {
        const bool branch_taken_0x211d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D64u;
        // 0x211d68: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d64) {
            ctx->pc = 0x211EE8u;
            goto label_211ee8;
        }
    }
    ctx->pc = 0x211D6Cu;
label_211d6c:
    // 0x211d6c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211d70:
    // 0x211d70: 0x8c431eac  lw          $v1, 0x1EAC($v0)
    ctx->pc = 0x211d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7852)));
label_211d74:
    // 0x211d74: 0x10000059  b           . + 4 + (0x59 << 2)
label_211d78:
    if (ctx->pc == 0x211D78u) {
        ctx->pc = 0x211D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D74u;
        // 0x211d78: 0x8c441eb0  lw          $a0, 0x1EB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D7Cu;
        goto label_211d7c;
    }
    ctx->pc = 0x211D74u;
    {
        const bool branch_taken_0x211d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D74u;
        // 0x211d78: 0x8c441eb0  lw          $a0, 0x1EB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d74) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211D7Cu;
label_211d7c:
    // 0x211d7c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211d80:
    // 0x211d80: 0x8c431560  lw          $v1, 0x1560($v0)
    ctx->pc = 0x211d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5472)));
label_211d84:
    // 0x211d84: 0x10000055  b           . + 4 + (0x55 << 2)
label_211d88:
    if (ctx->pc == 0x211D88u) {
        ctx->pc = 0x211D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D84u;
        // 0x211d88: 0x8c441564  lw          $a0, 0x1564($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5476)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D8Cu;
        goto label_211d8c;
    }
    ctx->pc = 0x211D84u;
    {
        const bool branch_taken_0x211d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D84u;
        // 0x211d88: 0x8c441564  lw          $a0, 0x1564($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d84) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211D8Cu;
label_211d8c:
    // 0x211d8c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211d90:
    // 0x211d90: 0x8c433a00  lw          $v1, 0x3A00($v0)
    ctx->pc = 0x211d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14848)));
label_211d94:
    // 0x211d94: 0x10000051  b           . + 4 + (0x51 << 2)
label_211d98:
    if (ctx->pc == 0x211D98u) {
        ctx->pc = 0x211D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D94u;
        // 0x211d98: 0x8c443a04  lw          $a0, 0x3A04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14852)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211D9Cu;
        goto label_211d9c;
    }
    ctx->pc = 0x211D94u;
    {
        const bool branch_taken_0x211d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211D94u;
        // 0x211d98: 0x8c443a04  lw          $a0, 0x3A04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211d94) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211D9Cu;
label_211d9c:
    // 0x211d9c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211da0:
    // 0x211da0: 0x8c433418  lw          $v1, 0x3418($v0)
    ctx->pc = 0x211da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13336)));
label_211da4:
    // 0x211da4: 0x1000004d  b           . + 4 + (0x4D << 2)
label_211da8:
    if (ctx->pc == 0x211DA8u) {
        ctx->pc = 0x211DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DA4u;
        // 0x211da8: 0x8c44341c  lw          $a0, 0x341C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211DACu;
        goto label_211dac;
    }
    ctx->pc = 0x211DA4u;
    {
        const bool branch_taken_0x211da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DA4u;
        // 0x211da8: 0x8c44341c  lw          $a0, 0x341C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211da4) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211DACu;
label_211dac:
    // 0x211dac: 0x8e470304  lw          $a3, 0x304($s2)
    ctx->pc = 0x211dacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211db0:
    // 0x211db0: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x211db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_211db4:
    // 0x211db4: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x211db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
label_211db8:
    // 0x211db8: 0x8ce33418  lw          $v1, 0x3418($a3)
    ctx->pc = 0x211db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13336)));
label_211dbc:
    // 0x211dbc: 0x8ce4341c  lw          $a0, 0x341C($a3)
    ctx->pc = 0x211dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13340)));
label_211dc0:
    // 0x211dc0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x211dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_211dc4:
    // 0x211dc4: 0x678821  addu        $s1, $v1, $a3
    ctx->pc = 0x211dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_211dc8:
    // 0x211dc8: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_211dcc:
    if (ctx->pc == 0x211DCCu) {
        ctx->pc = 0x211DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DC8u;
        // 0x211dcc: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211DD0u;
        goto label_211dd0;
    }
    ctx->pc = 0x211DC8u;
    {
        const bool branch_taken_0x211dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DC8u;
        // 0x211dcc: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211dc8) {
            ctx->pc = 0x211EE4u;
            goto label_211ee4;
        }
    }
    ctx->pc = 0x211DD0u;
label_211dd0:
    // 0x211dd0: 0x8ce2350c  lw          $v0, 0x350C($a3)
    ctx->pc = 0x211dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13580)));
label_211dd4:
    // 0x211dd4: 0x8ce33510  lw          $v1, 0x3510($a3)
    ctx->pc = 0x211dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13584)));
label_211dd8:
    // 0x211dd8: 0x478821  addu        $s1, $v0, $a3
    ctx->pc = 0x211dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_211ddc:
    // 0x211ddc: 0x10000041  b           . + 4 + (0x41 << 2)
label_211de0:
    if (ctx->pc == 0x211DE0u) {
        ctx->pc = 0x211DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DDCu;
        // 0x211de0: 0x678021  addu        $s0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211DE4u;
        goto label_211de4;
    }
    ctx->pc = 0x211DDCu;
    {
        const bool branch_taken_0x211ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DDCu;
        // 0x211de0: 0x678021  addu        $s0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ddc) {
            ctx->pc = 0x211EE4u;
            goto label_211ee4;
        }
    }
    ctx->pc = 0x211DE4u;
label_211de4:
    // 0x211de4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211de8:
    // 0x211de8: 0x8c4318f0  lw          $v1, 0x18F0($v0)
    ctx->pc = 0x211de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6384)));
label_211dec:
    // 0x211dec: 0x1000003b  b           . + 4 + (0x3B << 2)
label_211df0:
    if (ctx->pc == 0x211DF0u) {
        ctx->pc = 0x211DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DECu;
        // 0x211df0: 0x8c4418f4  lw          $a0, 0x18F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211DF4u;
        goto label_211df4;
    }
    ctx->pc = 0x211DECu;
    {
        const bool branch_taken_0x211dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DECu;
        // 0x211df0: 0x8c4418f4  lw          $a0, 0x18F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211dec) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211DF4u;
label_211df4:
    // 0x211df4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211df8:
    // 0x211df8: 0x8c433038  lw          $v1, 0x3038($v0)
    ctx->pc = 0x211df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12344)));
label_211dfc:
    // 0x211dfc: 0x10000037  b           . + 4 + (0x37 << 2)
label_211e00:
    if (ctx->pc == 0x211E00u) {
        ctx->pc = 0x211E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DFCu;
        // 0x211e00: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E04u;
        goto label_211e04;
    }
    ctx->pc = 0x211DFCu;
    {
        const bool branch_taken_0x211dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DFCu;
        // 0x211e00: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211dfc) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211E04u;
label_211e04:
    // 0x211e04: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211e08:
    // 0x211e08: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x211e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
label_211e0c:
    // 0x211e0c: 0x10000033  b           . + 4 + (0x33 << 2)
label_211e10:
    if (ctx->pc == 0x211E10u) {
        ctx->pc = 0x211E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E0Cu;
        // 0x211e10: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E14u;
        goto label_211e14;
    }
    ctx->pc = 0x211E0Cu;
    {
        const bool branch_taken_0x211e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E0Cu;
        // 0x211e10: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e0c) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211E14u;
label_211e14:
    // 0x211e14: 0xc0c73f8  jal         func_31CFE0
label_211e18:
    if (ctx->pc == 0x211E18u) {
        ctx->pc = 0x211E1Cu;
        goto label_211e1c;
    }
    ctx->pc = 0x211E14u;
    SET_GPR_U32(ctx, 31, 0x211E1Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x211E14u, 0x211E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E1Cu;
label_211e1c:
    // 0x211e1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_211e20:
    // 0x211e20: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_211e24:
    if (ctx->pc == 0x211E24u) {
        ctx->pc = 0x211E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E20u;
        // 0x211e24: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E28u;
        goto label_211e28;
    }
    ctx->pc = 0x211E20u;
    {
        const bool branch_taken_0x211e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E20u;
        // 0x211e24: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e20) {
            ctx->pc = 0x211E54u;
            goto label_211e54;
        }
    }
    ctx->pc = 0x211E28u;
label_211e28:
    // 0x211e28: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x211e28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
label_211e2c:
    // 0x211e2c: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x211e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
label_211e30:
    // 0x211e30: 0x8c443728  lw          $a0, 0x3728($v0)
    ctx->pc = 0x211e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
label_211e34:
    // 0x211e34: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x211e34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_211e38:
    // 0x211e38: 0x10e0002a  beqz        $a3, . + 4 + (0x2A << 2)
label_211e3c:
    if (ctx->pc == 0x211E3Cu) {
        ctx->pc = 0x211E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E38u;
        // 0x211e3c: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E40u;
        goto label_211e40;
    }
    ctx->pc = 0x211E38u;
    {
        const bool branch_taken_0x211e38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x211E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E38u;
        // 0x211e3c: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e38) {
            ctx->pc = 0x211EE4u;
            goto label_211ee4;
        }
    }
    ctx->pc = 0x211E40u;
label_211e40:
    // 0x211e40: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x211e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_211e44:
    // 0x211e44: 0xc09fa94  jal         func_27EA50
label_211e48:
    if (ctx->pc == 0x211E48u) {
        ctx->pc = 0x211E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E44u;
        // 0x211e48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E4Cu;
        goto label_211e4c;
    }
    ctx->pc = 0x211E44u;
    SET_GPR_U32(ctx, 31, 0x211E4Cu);
    ctx->pc = 0x211E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E44u;
    // 0x211e48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x211E44u, 0x211E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E4Cu;
label_211e4c:
    // 0x211e4c: 0x10000026  b           . + 4 + (0x26 << 2)
label_211e50:
    if (ctx->pc == 0x211E50u) {
        ctx->pc = 0x211E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E4Cu;
        // 0x211e50: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E54u;
        goto label_211e54;
    }
    ctx->pc = 0x211E4Cu;
    {
        const bool branch_taken_0x211e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E4Cu;
        // 0x211e50: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e4c) {
            ctx->pc = 0x211EE8u;
            goto label_211ee8;
        }
    }
    ctx->pc = 0x211E54u;
label_211e54:
    // 0x211e54: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x211e54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
label_211e58:
    // 0x211e58: 0x8c43372c  lw          $v1, 0x372C($v0)
    ctx->pc = 0x211e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14124)));
label_211e5c:
    // 0x211e5c: 0x8c443730  lw          $a0, 0x3730($v0)
    ctx->pc = 0x211e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14128)));
label_211e60:
    // 0x211e60: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x211e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_211e64:
    // 0x211e64: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
label_211e68:
    if (ctx->pc == 0x211E68u) {
        ctx->pc = 0x211E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E64u;
        // 0x211e68: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E6Cu;
        goto label_211e6c;
    }
    ctx->pc = 0x211E64u;
    {
        const bool branch_taken_0x211e64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x211E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E64u;
        // 0x211e68: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e64) {
            ctx->pc = 0x211EE4u;
            goto label_211ee4;
        }
    }
    ctx->pc = 0x211E6Cu;
label_211e6c:
    // 0x211e6c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x211e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_211e70:
    // 0x211e70: 0xc09fa94  jal         func_27EA50
label_211e74:
    if (ctx->pc == 0x211E74u) {
        ctx->pc = 0x211E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E70u;
        // 0x211e74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E78u;
        goto label_211e78;
    }
    ctx->pc = 0x211E70u;
    SET_GPR_U32(ctx, 31, 0x211E78u);
    ctx->pc = 0x211E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E70u;
    // 0x211e74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x211E70u, 0x211E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E78u;
label_211e78:
    // 0x211e78: 0x1000001b  b           . + 4 + (0x1B << 2)
label_211e7c:
    if (ctx->pc == 0x211E7Cu) {
        ctx->pc = 0x211E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E78u;
        // 0x211e7c: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E80u;
        goto label_211e80;
    }
    ctx->pc = 0x211E78u;
    {
        const bool branch_taken_0x211e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E78u;
        // 0x211e7c: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e78) {
            ctx->pc = 0x211EE8u;
            goto label_211ee8;
        }
    }
    ctx->pc = 0x211E80u;
label_211e80:
    // 0x211e80: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211e84:
    // 0x211e84: 0x8c433d34  lw          $v1, 0x3D34($v0)
    ctx->pc = 0x211e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
label_211e88:
    // 0x211e88: 0x10000014  b           . + 4 + (0x14 << 2)
label_211e8c:
    if (ctx->pc == 0x211E8Cu) {
        ctx->pc = 0x211E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E88u;
        // 0x211e8c: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211E90u;
        goto label_211e90;
    }
    ctx->pc = 0x211E88u;
    {
        const bool branch_taken_0x211e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E88u;
        // 0x211e8c: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e88) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211E90u;
label_211e90:
    // 0x211e90: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211e94:
    // 0x211e94: 0x8c430cf8  lw          $v1, 0xCF8($v0)
    ctx->pc = 0x211e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3320)));
label_211e98:
    // 0x211e98: 0x10000010  b           . + 4 + (0x10 << 2)
label_211e9c:
    if (ctx->pc == 0x211E9Cu) {
        ctx->pc = 0x211E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E98u;
        // 0x211e9c: 0x8c440cfc  lw          $a0, 0xCFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211EA0u;
        goto label_211ea0;
    }
    ctx->pc = 0x211E98u;
    {
        const bool branch_taken_0x211e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E98u;
        // 0x211e9c: 0x8c440cfc  lw          $a0, 0xCFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211e98) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211EA0u;
label_211ea0:
    // 0x211ea0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211ea4:
    // 0x211ea4: 0x8c43244c  lw          $v1, 0x244C($v0)
    ctx->pc = 0x211ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9292)));
label_211ea8:
    // 0x211ea8: 0x1000000c  b           . + 4 + (0xC << 2)
label_211eac:
    if (ctx->pc == 0x211EACu) {
        ctx->pc = 0x211EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EA8u;
        // 0x211eac: 0x8c442450  lw          $a0, 0x2450($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211EB0u;
        goto label_211eb0;
    }
    ctx->pc = 0x211EA8u;
    {
        const bool branch_taken_0x211ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EA8u;
        // 0x211eac: 0x8c442450  lw          $a0, 0x2450($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ea8) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211EB0u;
label_211eb0:
    // 0x211eb0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211eb4:
    // 0x211eb4: 0x8c431bc0  lw          $v1, 0x1BC0($v0)
    ctx->pc = 0x211eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
label_211eb8:
    // 0x211eb8: 0x10000008  b           . + 4 + (0x8 << 2)
label_211ebc:
    if (ctx->pc == 0x211EBCu) {
        ctx->pc = 0x211EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EB8u;
        // 0x211ebc: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211EC0u;
        goto label_211ec0;
    }
    ctx->pc = 0x211EB8u;
    {
        const bool branch_taken_0x211eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EB8u;
        // 0x211ebc: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211eb8) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211EC0u;
label_211ec0:
    // 0x211ec0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211ec4:
    // 0x211ec4: 0x8c432d38  lw          $v1, 0x2D38($v0)
    ctx->pc = 0x211ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11576)));
label_211ec8:
    // 0x211ec8: 0x10000004  b           . + 4 + (0x4 << 2)
label_211ecc:
    if (ctx->pc == 0x211ECCu) {
        ctx->pc = 0x211ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EC8u;
        // 0x211ecc: 0x8c442d3c  lw          $a0, 0x2D3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211ED0u;
        goto label_211ed0;
    }
    ctx->pc = 0x211EC8u;
    {
        const bool branch_taken_0x211ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211EC8u;
        // 0x211ecc: 0x8c442d3c  lw          $a0, 0x2D3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ec8) {
            ctx->pc = 0x211EDCu;
            goto label_211edc;
        }
    }
    ctx->pc = 0x211ED0u;
label_211ed0:
    // 0x211ed0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211ed4:
    // 0x211ed4: 0x8c432274  lw          $v1, 0x2274($v0)
    ctx->pc = 0x211ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8820)));
label_211ed8:
    // 0x211ed8: 0x8c442278  lw          $a0, 0x2278($v0)
    ctx->pc = 0x211ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8824)));
label_211edc:
    // 0x211edc: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x211edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_211ee0:
    // 0x211ee0: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x211ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_211ee4:
    // 0x211ee4: 0x8e4206ec  lw          $v0, 0x6EC($s2)
    ctx->pc = 0x211ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
label_211ee8:
    // 0x211ee8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_211eec:
    if (ctx->pc == 0x211EECu) {
        ctx->pc = 0x211EF0u;
        goto label_211ef0;
    }
    ctx->pc = 0x211EE8u;
    {
        const bool branch_taken_0x211ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211ee8) {
            ctx->pc = 0x211F04u;
            goto label_211f04;
        }
    }
    ctx->pc = 0x211EF0u;
label_211ef0:
    // 0x211ef0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x211ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_211ef4:
    // 0x211ef4: 0x8c43044c  lw          $v1, 0x44C($v0)
    ctx->pc = 0x211ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1100)));
label_211ef8:
    // 0x211ef8: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x211ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_211efc:
    // 0x211efc: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x211efcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_211f00:
    // 0x211f00: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x211f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_211f04:
    // 0x211f04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x211f04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_211f08:
    // 0x211f08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x211f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_211f0c:
    // 0x211f0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x211f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_211f10:
    // 0x211f10: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x211f10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_211f14:
    // 0x211f14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_211f18:
    // 0x211f18: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x211f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_211f1c:
    // 0x211f1c: 0xc0aa15e  jal         func_2A8578
label_211f20:
    if (ctx->pc == 0x211F20u) {
        ctx->pc = 0x211F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F1Cu;
        // 0x211f20: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211F24u;
        goto label_211f24;
    }
    ctx->pc = 0x211F1Cu;
    SET_GPR_U32(ctx, 31, 0x211F24u);
    ctx->pc = 0x211F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211F1Cu;
    // 0x211f20: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x211F1Cu, 0x211F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211F24u;
label_211f24:
    // 0x211f24: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x211f24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_211f28:
    // 0x211f28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x211f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_211f2c:
    // 0x211f2c: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x211f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_211f30:
    // 0x211f30: 0xc055f06  jal         func_157C18
label_211f34:
    if (ctx->pc == 0x211F34u) {
        ctx->pc = 0x211F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F30u;
        // 0x211f34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211F38u;
        goto label_211f38;
    }
    ctx->pc = 0x211F30u;
    SET_GPR_U32(ctx, 31, 0x211F38u);
    ctx->pc = 0x211F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211F30u;
    // 0x211f34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x211F30u, 0x211F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211F38u;
label_211f38:
    // 0x211f38: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_211f3c:
    if (ctx->pc == 0x211F3Cu) {
        ctx->pc = 0x211F40u;
        goto label_211f40;
    }
    ctx->pc = 0x211F38u;
    {
        const bool branch_taken_0x211f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211f38) {
            ctx->pc = 0x212070u;
            goto label_212070;
        }
    }
    ctx->pc = 0x211F40u;
label_211f40:
    // 0x211f40: 0xc0b6dac  jal         func_2DB6B0
label_211f44:
    if (ctx->pc == 0x211F44u) {
        ctx->pc = 0x211F48u;
        goto label_211f48;
    }
    ctx->pc = 0x211F40u;
    SET_GPR_U32(ctx, 31, 0x211F48u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x211F40u, 0x211F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211F48u;
label_211f48:
    // 0x211f48: 0x8443054a  lh          $v1, 0x54A($v0)
    ctx->pc = 0x211f48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
label_211f4c:
    // 0x211f4c: 0x186001aa  blez        $v1, . + 4 + (0x1AA << 2)
label_211f50:
    if (ctx->pc == 0x211F50u) {
        ctx->pc = 0x211F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F4Cu;
        // 0x211f50: 0x2402020a  addiu       $v0, $zero, 0x20A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211F54u;
        goto label_211f54;
    }
    ctx->pc = 0x211F4Cu;
    {
        const bool branch_taken_0x211f4c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x211F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F4Cu;
        // 0x211f50: 0x2402020a  addiu       $v0, $zero, 0x20A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f4c) {
            ctx->pc = 0x2125F8u;
            goto label_2125f8;
        }
    }
    ctx->pc = 0x211F54u;
label_211f54:
    // 0x211f54: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x211f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_211f58:
    // 0x211f58: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_211f5c:
    if (ctx->pc == 0x211F5Cu) {
        ctx->pc = 0x211F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F58u;
        // 0x211f5c: 0x2862020b  slti        $v0, $v1, 0x20B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)523) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x211F60u;
        goto label_211f60;
    }
    ctx->pc = 0x211F58u;
    {
        const bool branch_taken_0x211f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x211F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F58u;
        // 0x211f5c: 0x2862020b  slti        $v0, $v1, 0x20B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)523) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f58) {
            ctx->pc = 0x211FB0u;
            goto label_211fb0;
        }
    }
    ctx->pc = 0x211F60u;
label_211f60:
    // 0x211f60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_211f64:
    if (ctx->pc == 0x211F64u) {
        ctx->pc = 0x211F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F60u;
        // 0x211f64: 0x24020205  addiu       $v0, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211F68u;
        goto label_211f68;
    }
    ctx->pc = 0x211F60u;
    {
        const bool branch_taken_0x211f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F60u;
        // 0x211f64: 0x24020205  addiu       $v0, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f60) {
            ctx->pc = 0x211F80u;
            goto label_211f80;
        }
    }
    ctx->pc = 0x211F68u;
label_211f68:
    // 0x211f68: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_211f6c:
    if (ctx->pc == 0x211F6Cu) {
        ctx->pc = 0x211F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F68u;
        // 0x211f6c: 0x24020207  addiu       $v0, $zero, 0x207 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211F70u;
        goto label_211f70;
    }
    ctx->pc = 0x211F68u;
    {
        const bool branch_taken_0x211f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x211F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F68u;
        // 0x211f6c: 0x24020207  addiu       $v0, $zero, 0x207 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f68) {
            ctx->pc = 0x211FD8u;
            goto label_211fd8;
        }
    }
    ctx->pc = 0x211F70u;
label_211f70:
    // 0x211f70: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_211f74:
    if (ctx->pc == 0x211F74u) {
        ctx->pc = 0x211F78u;
        goto label_211f78;
    }
    ctx->pc = 0x211F70u;
    {
        const bool branch_taken_0x211f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x211f70) {
            ctx->pc = 0x211FD8u;
            goto label_211fd8;
        }
    }
    ctx->pc = 0x211F78u;
label_211f78:
    // 0x211f78: 0x1000003d  b           . + 4 + (0x3D << 2)
label_211f7c:
    if (ctx->pc == 0x211F7Cu) {
        ctx->pc = 0x211F80u;
        goto label_211f80;
    }
    ctx->pc = 0x211F78u;
    {
        const bool branch_taken_0x211f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211f78) {
            ctx->pc = 0x212070u;
            goto label_212070;
        }
    }
    ctx->pc = 0x211F80u;
label_211f80:
    // 0x211f80: 0x24020241  addiu       $v0, $zero, 0x241
    ctx->pc = 0x211f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
label_211f84:
    // 0x211f84: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_211f88:
    if (ctx->pc == 0x211F88u) {
        ctx->pc = 0x211F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F84u;
        // 0x211f88: 0x28620242  slti        $v0, $v1, 0x242 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)578) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x211F8Cu;
        goto label_211f8c;
    }
    ctx->pc = 0x211F84u;
    {
        const bool branch_taken_0x211f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x211F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F84u;
        // 0x211f88: 0x28620242  slti        $v0, $v1, 0x242 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)578) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f84) {
            ctx->pc = 0x211FD8u;
            goto label_211fd8;
        }
    }
    ctx->pc = 0x211F8Cu;
label_211f8c:
    // 0x211f8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_211f90:
    if (ctx->pc == 0x211F90u) {
        ctx->pc = 0x211F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F8Cu;
        // 0x211f90: 0x24020224  addiu       $v0, $zero, 0x224 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 548));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211F94u;
        goto label_211f94;
    }
    ctx->pc = 0x211F8Cu;
    {
        const bool branch_taken_0x211f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F8Cu;
        // 0x211f90: 0x24020224  addiu       $v0, $zero, 0x224 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 548));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f8c) {
            ctx->pc = 0x211FA4u;
            goto label_211fa4;
        }
    }
    ctx->pc = 0x211F94u;
label_211f94:
    // 0x211f94: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_211f98:
    if (ctx->pc == 0x211F98u) {
        ctx->pc = 0x211F9Cu;
        goto label_211f9c;
    }
    ctx->pc = 0x211F94u;
    {
        const bool branch_taken_0x211f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x211f94) {
            ctx->pc = 0x211FD8u;
            goto label_211fd8;
        }
    }
    ctx->pc = 0x211F9Cu;
label_211f9c:
    // 0x211f9c: 0x10000034  b           . + 4 + (0x34 << 2)
label_211fa0:
    if (ctx->pc == 0x211FA0u) {
        ctx->pc = 0x211FA4u;
        goto label_211fa4;
    }
    ctx->pc = 0x211F9Cu;
    {
        const bool branch_taken_0x211f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211f9c) {
            ctx->pc = 0x212070u;
            goto label_212070;
        }
    }
    ctx->pc = 0x211FA4u;
label_211fa4:
    // 0x211fa4: 0x24020245  addiu       $v0, $zero, 0x245
    ctx->pc = 0x211fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 581));
label_211fa8:
    // 0x211fa8: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_211fac:
    if (ctx->pc == 0x211FACu) {
        ctx->pc = 0x211FB0u;
        goto label_211fb0;
    }
    ctx->pc = 0x211FA8u;
    {
        const bool branch_taken_0x211fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x211fa8) {
            ctx->pc = 0x212070u;
            goto label_212070;
        }
    }
    ctx->pc = 0x211FB0u;
label_211fb0:
    // 0x211fb0: 0xc0c73f8  jal         func_31CFE0
label_211fb4:
    if (ctx->pc == 0x211FB4u) {
        ctx->pc = 0x211FB8u;
        goto label_211fb8;
    }
    ctx->pc = 0x211FB0u;
    SET_GPR_U32(ctx, 31, 0x211FB8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x211FB0u, 0x211FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211FB8u;
label_211fb8:
    // 0x211fb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_211fbc:
    // 0x211fbc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_211fc0:
    if (ctx->pc == 0x211FC0u) {
        ctx->pc = 0x211FC4u;
        goto label_211fc4;
    }
    ctx->pc = 0x211FBCu;
    {
        const bool branch_taken_0x211fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211fbc) {
            ctx->pc = 0x212070u;
            goto label_212070;
        }
    }
    ctx->pc = 0x211FC4u;
label_211fc4:
    // 0x211fc4: 0x8e4206ec  lw          $v0, 0x6EC($s2)
    ctx->pc = 0x211fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
label_211fc8:
    // 0x211fc8: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_211fcc:
    if (ctx->pc == 0x211FCCu) {
        ctx->pc = 0x211FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FC8u;
        // 0x211fcc: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211FD0u;
        goto label_211fd0;
    }
    ctx->pc = 0x211FC8u;
    {
        const bool branch_taken_0x211fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FC8u;
        // 0x211fcc: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211fc8) {
            ctx->pc = 0x212070u;
            goto label_212070;
        }
    }
    ctx->pc = 0x211FD0u;
label_211fd0:
    // 0x211fd0: 0x10000024  b           . + 4 + (0x24 << 2)
label_211fd4:
    if (ctx->pc == 0x211FD4u) {
        ctx->pc = 0x211FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FD0u;
        // 0x211fd4: 0xa24002f4  sb          $zero, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211FD8u;
        goto label_211fd8;
    }
    ctx->pc = 0x211FD0u;
    {
        const bool branch_taken_0x211fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FD0u;
        // 0x211fd4: 0xa24002f4  sb          $zero, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211fd0) {
            ctx->pc = 0x212064u;
            goto label_212064;
        }
    }
    ctx->pc = 0x211FD8u;
label_211fd8:
    // 0x211fd8: 0xc0c73f8  jal         func_31CFE0
label_211fdc:
    if (ctx->pc == 0x211FDCu) {
        ctx->pc = 0x211FE0u;
        goto label_211fe0;
    }
    ctx->pc = 0x211FD8u;
    SET_GPR_U32(ctx, 31, 0x211FE0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x211FD8u, 0x211FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211FE0u;
label_211fe0:
    // 0x211fe0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_211fe4:
    // 0x211fe4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_211fe8:
    if (ctx->pc == 0x211FE8u) {
        ctx->pc = 0x211FECu;
        goto label_211fec;
    }
    ctx->pc = 0x211FE4u;
    {
        const bool branch_taken_0x211fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211fe4) {
            ctx->pc = 0x212070u;
            goto label_212070;
        }
    }
    ctx->pc = 0x211FECu;
label_211fec:
    // 0x211fec: 0x8e4206ec  lw          $v0, 0x6EC($s2)
    ctx->pc = 0x211fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
label_211ff0:
    // 0x211ff0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_211ff4:
    if (ctx->pc == 0x211FF4u) {
        ctx->pc = 0x211FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FF0u;
        // 0x211ff4: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211FF8u;
        goto label_211ff8;
    }
    ctx->pc = 0x211FF0u;
    {
        const bool branch_taken_0x211ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FF0u;
        // 0x211ff4: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ff0) {
            ctx->pc = 0x212070u;
            goto label_212070;
        }
    }
    ctx->pc = 0x211FF8u;
label_211ff8:
    // 0x211ff8: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x211ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
label_211ffc:
    // 0x211ffc: 0xc0a529e  jal         func_294A78
label_212000:
    if (ctx->pc == 0x212000u) {
        ctx->pc = 0x212000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FFCu;
        // 0x212000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212004u;
        goto label_212004;
    }
    ctx->pc = 0x211FFCu;
    SET_GPR_U32(ctx, 31, 0x212004u);
    ctx->pc = 0x212000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211FFCu;
    // 0x212000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A78u, 0x211FFCu, 0x212004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212004u;
label_212004:
    // 0x212004: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_212008:
    if (ctx->pc == 0x212008u) {
        ctx->pc = 0x21200Cu;
        goto label_21200c;
    }
    ctx->pc = 0x212004u;
    {
        const bool branch_taken_0x212004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212004) {
            ctx->pc = 0x212070u;
            goto label_212070;
        }
    }
    ctx->pc = 0x21200Cu;
label_21200c:
    // 0x21200c: 0xc0c73f8  jal         func_31CFE0
label_212010:
    if (ctx->pc == 0x212010u) {
        ctx->pc = 0x212014u;
        goto label_212014;
    }
    ctx->pc = 0x21200Cu;
    SET_GPR_U32(ctx, 31, 0x212014u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x21200Cu, 0x212014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212014u;
label_212014:
    // 0x212014: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x212014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_212018:
    // 0x212018: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_21201c:
    if (ctx->pc == 0x21201Cu) {
        ctx->pc = 0x212020u;
        goto label_212020;
    }
    ctx->pc = 0x212018u;
    {
        const bool branch_taken_0x212018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212018) {
            ctx->pc = 0x212070u;
            goto label_212070;
        }
    }
    ctx->pc = 0x212020u;
label_212020:
    // 0x212020: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x212020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_212024:
    // 0x212024: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x212024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_212028:
    // 0x212028: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21202c:
    // 0x21202c: 0x0  nop
    ctx->pc = 0x21202cu;
    // NOP
label_212030:
    // 0x212030: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x212030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_212034:
    // 0x212034: 0x0  nop
    ctx->pc = 0x212034u;
    // NOP
label_212038:
    // 0x212038: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_21203c:
    if (ctx->pc == 0x21203Cu) {
        ctx->pc = 0x21203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212038u;
        // 0x21203c: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212040u;
        goto label_212040;
    }
    ctx->pc = 0x212038u;
    {
        const bool branch_taken_0x212038 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212038u;
        // 0x21203c: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212038) {
            ctx->pc = 0x212070u;
            goto label_212070;
        }
    }
    ctx->pc = 0x212040u;
label_212040:
    // 0x212040: 0xc0c73f8  jal         func_31CFE0
label_212044:
    if (ctx->pc == 0x212044u) {
        ctx->pc = 0x212044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212040u;
        // 0x212044: 0xa2020541  sb          $v0, 0x541($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1345), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212048u;
        goto label_212048;
    }
    ctx->pc = 0x212040u;
    SET_GPR_U32(ctx, 31, 0x212048u);
    ctx->pc = 0x212044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212040u;
    // 0x212044: 0xa2020541  sb          $v0, 0x541($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1345), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x212040u, 0x212048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212048u;
label_212048:
    // 0x212048: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x212048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_21204c:
    // 0x21204c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_212050:
    if (ctx->pc == 0x212050u) {
        ctx->pc = 0x212050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21204Cu;
        // 0x212050: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212054u;
        goto label_212054;
    }
    ctx->pc = 0x21204Cu;
    {
        const bool branch_taken_0x21204c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x212050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21204Cu;
        // 0x212050: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21204c) {
            ctx->pc = 0x21205Cu;
            goto label_21205c;
        }
    }
    ctx->pc = 0x212054u;
label_212054:
    // 0x212054: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_212058:
    if (ctx->pc == 0x212058u) {
        ctx->pc = 0x212058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212054u;
        // 0x212058: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21205Cu;
        goto label_21205c;
    }
    ctx->pc = 0x212054u;
    {
        const bool branch_taken_0x212054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x212058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212054u;
        // 0x212058: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212054) {
            ctx->pc = 0x212060u;
            goto label_212060;
        }
    }
    ctx->pc = 0x21205Cu;
label_21205c:
    // 0x21205c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x21205cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_212060:
    // 0x212060: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x212060u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_212064:
    // 0x212064: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x212064u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_212068:
    // 0x212068: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x212068u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_21206c:
    // 0x21206c: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x21206cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_212070:
    // 0x212070: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x212070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_212074:
    // 0x212074: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x212074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_212078:
    // 0x212078: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21207c:
    // 0x21207c: 0xc053e7c  jal         func_14F9F0
label_212080:
    if (ctx->pc == 0x212080u) {
        ctx->pc = 0x212080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21207Cu;
        // 0x212080: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x212084u;
        goto label_212084;
    }
    ctx->pc = 0x21207Cu;
    SET_GPR_U32(ctx, 31, 0x212084u);
    ctx->pc = 0x212080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21207Cu;
    // 0x212080: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x21207Cu, 0x212084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212084u;
label_212084:
    // 0x212084: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x212084u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_212088:
    // 0x212088: 0xc053e4a  jal         func_14F928
label_21208c:
    if (ctx->pc == 0x21208Cu) {
        ctx->pc = 0x21208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212088u;
        // 0x21208c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212090u;
        goto label_212090;
    }
    ctx->pc = 0x212088u;
    SET_GPR_U32(ctx, 31, 0x212090u);
    ctx->pc = 0x21208Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212088u;
    // 0x21208c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x212088u, 0x212090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212090u;
label_212090:
    // 0x212090: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x212090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_212094:
    // 0x212094: 0x2442fd9c  addiu       $v0, $v0, -0x264
    ctx->pc = 0x212094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966684));
label_212098:
    // 0x212098: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x212098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_21209c:
    // 0x21209c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_2120a0:
    if (ctx->pc == 0x2120A0u) {
        ctx->pc = 0x2120A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21209Cu;
        // 0x2120a0: 0x8e430564  lw          $v1, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2120A4u;
        goto label_2120a4;
    }
    ctx->pc = 0x21209Cu;
    {
        const bool branch_taken_0x21209c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21209c) {
            ctx->pc = 0x2120A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21209Cu;
            // 0x2120a0: 0x8e430564  lw          $v1, 0x564($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212110u;
            goto label_212110;
        }
    }
    ctx->pc = 0x2120A4u;
label_2120a4:
    // 0x2120a4: 0xc0b6dac  jal         func_2DB6B0
label_2120a8:
    if (ctx->pc == 0x2120A8u) {
        ctx->pc = 0x2120A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120A4u;
        // 0x2120a8: 0x8e5000f0  lw          $s0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2120ACu;
        goto label_2120ac;
    }
    ctx->pc = 0x2120A4u;
    SET_GPR_U32(ctx, 31, 0x2120ACu);
    ctx->pc = 0x2120A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2120A4u;
    // 0x2120a8: 0x8e5000f0  lw          $s0, 0xF0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2120A4u, 0x2120ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2120ACu;
label_2120ac:
    // 0x2120ac: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2120acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_2120b0:
    // 0x2120b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2120b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2120b4:
    // 0x2120b4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2120b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2120b8:
    // 0x2120b8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2120b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2120bc:
    // 0x2120bc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2120bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2120c0:
    // 0x2120c0: 0xc0b680e  jal         func_2DA038
label_2120c4:
    if (ctx->pc == 0x2120C4u) {
        ctx->pc = 0x2120C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120C0u;
        // 0x2120c4: 0xc64c0104  lwc1        $f12, 0x104($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2120C8u;
        goto label_2120c8;
    }
    ctx->pc = 0x2120C0u;
    SET_GPR_U32(ctx, 31, 0x2120C8u);
    ctx->pc = 0x2120C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2120C0u;
    // 0x2120c4: 0xc64c0104  lwc1        $f12, 0x104($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2120C0u, 0x2120C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2120C8u;
label_2120c8:
    // 0x2120c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2120c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2120cc:
    // 0x2120cc: 0x0  nop
    ctx->pc = 0x2120ccu;
    // NOP
label_2120d0:
    // 0x2120d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2120d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2120d4:
    // 0x2120d4: 0x0  nop
    ctx->pc = 0x2120d4u;
    // NOP
label_2120d8:
    // 0x2120d8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2120dc:
    if (ctx->pc == 0x2120DCu) {
        ctx->pc = 0x2120DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120D8u;
        // 0x2120dc: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2120E0u;
        goto label_2120e0;
    }
    ctx->pc = 0x2120D8u;
    {
        const bool branch_taken_0x2120d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2120DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120D8u;
        // 0x2120dc: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2120d8) {
            ctx->pc = 0x2120E4u;
            goto label_2120e4;
        }
    }
    ctx->pc = 0x2120E0u;
label_2120e0:
    // 0x2120e0: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x2120e0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
label_2120e4:
    // 0x2120e4: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x2120e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
label_2120e8:
    // 0x2120e8: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x2120e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_2120ec:
    // 0x2120ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2120ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2120f0:
    // 0x2120f0: 0x0  nop
    ctx->pc = 0x2120f0u;
    // NOP
label_2120f4:
    // 0x2120f4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2120f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2120f8:
    // 0x2120f8: 0x0  nop
    ctx->pc = 0x2120f8u;
    // NOP
label_2120fc:
    // 0x2120fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_212100:
    if (ctx->pc == 0x212100u) {
        ctx->pc = 0x212100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120FCu;
        // 0x212100: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212104u;
        goto label_212104;
    }
    ctx->pc = 0x2120FCu;
    {
        const bool branch_taken_0x2120fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120FCu;
        // 0x212100: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2120fc) {
            ctx->pc = 0x21210Cu;
            goto label_21210c;
        }
    }
    ctx->pc = 0x212104u;
label_212104:
    // 0x212104: 0x1000013c  b           . + 4 + (0x13C << 2)
label_212108:
    if (ctx->pc == 0x212108u) {
        ctx->pc = 0x212108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212104u;
        // 0x212108: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21210Cu;
        goto label_21210c;
    }
    ctx->pc = 0x212104u;
    {
        const bool branch_taken_0x212104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212104u;
        // 0x212108: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212104) {
            ctx->pc = 0x2125F8u;
            goto label_2125f8;
        }
    }
    ctx->pc = 0x21210Cu;
label_21210c:
    // 0x21210c: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x21210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_212110:
    // 0x212110: 0x2402020f  addiu       $v0, $zero, 0x20F
    ctx->pc = 0x212110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
label_212114:
    // 0x212114: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_212118:
    if (ctx->pc == 0x212118u) {
        ctx->pc = 0x212118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212114u;
        // 0x212118: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21211Cu;
        goto label_21211c;
    }
    ctx->pc = 0x212114u;
    {
        const bool branch_taken_0x212114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x212118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212114u;
        // 0x212118: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212114) {
            ctx->pc = 0x212154u;
            goto label_212154;
        }
    }
    ctx->pc = 0x21211Cu;
label_21211c:
    // 0x21211c: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x21211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_212120:
    // 0x212120: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x212120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_212124:
    // 0x212124: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_212128:
    // 0x212128: 0x0  nop
    ctx->pc = 0x212128u;
    // NOP
label_21212c:
    // 0x21212c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21212cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_212130:
    // 0x212130: 0x0  nop
    ctx->pc = 0x212130u;
    // NOP
label_212134:
    // 0x212134: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_212138:
    if (ctx->pc == 0x212138u) {
        ctx->pc = 0x212138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212134u;
        // 0x212138: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21213Cu;
        goto label_21213c;
    }
    ctx->pc = 0x212134u;
    {
        const bool branch_taken_0x212134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212134u;
        // 0x212138: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212134) {
            ctx->pc = 0x212150u;
            goto label_212150;
        }
    }
    ctx->pc = 0x21213Cu;
label_21213c:
    // 0x21213c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21213cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212140:
    // 0x212140: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x212140u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_212144:
    // 0x212144: 0xa24302f7  sb          $v1, 0x2F7($s2)
    ctx->pc = 0x212144u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 3));
label_212148:
    // 0x212148: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x212148u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_21214c:
    // 0x21214c: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x21214cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_212150:
    // 0x212150: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x212150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_212154:
    // 0x212154: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x212154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
label_212158:
    // 0x212158: 0xc0a4c48  jal         func_293120
label_21215c:
    if (ctx->pc == 0x21215Cu) {
        ctx->pc = 0x21215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212158u;
        // 0x21215c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212160u;
        goto label_212160;
    }
    ctx->pc = 0x212158u;
    SET_GPR_U32(ctx, 31, 0x212160u);
    ctx->pc = 0x21215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212158u;
    // 0x21215c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293120u, 0x212158u, 0x212160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212160u;
label_212160:
    // 0x212160: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_212164:
    if (ctx->pc == 0x212164u) {
        ctx->pc = 0x212168u;
        goto label_212168;
    }
    ctx->pc = 0x212160u;
    {
        const bool branch_taken_0x212160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212160) {
            ctx->pc = 0x212198u;
            goto label_212198;
        }
    }
    ctx->pc = 0x212168u;
label_212168:
    // 0x212168: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x212168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21216c:
    // 0x21216c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x21216cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_212170:
    // 0x212170: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_212174:
    // 0x212174: 0x0  nop
    ctx->pc = 0x212174u;
    // NOP
label_212178:
    // 0x212178: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x212178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21217c:
    // 0x21217c: 0x0  nop
    ctx->pc = 0x21217cu;
    // NOP
label_212180:
    // 0x212180: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_212184:
    if (ctx->pc == 0x212184u) {
        ctx->pc = 0x212184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212180u;
        // 0x212184: 0x2403006c  addiu       $v1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212188u;
        goto label_212188;
    }
    ctx->pc = 0x212180u;
    {
        const bool branch_taken_0x212180 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212180u;
        // 0x212184: 0x2403006c  addiu       $v1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212180) {
            ctx->pc = 0x212198u;
            goto label_212198;
        }
    }
    ctx->pc = 0x212188u;
label_212188:
    // 0x212188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x212188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21218c:
    // 0x21218c: 0xa24202f7  sb          $v0, 0x2F7($s2)
    ctx->pc = 0x21218cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 2));
label_212190:
    // 0x212190: 0x10000284  b           . + 4 + (0x284 << 2)
label_212194:
    if (ctx->pc == 0x212194u) {
        ctx->pc = 0x212194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212190u;
        // 0x212194: 0xa24302f5  sb          $v1, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212198u;
        goto label_212198;
    }
    ctx->pc = 0x212190u;
    {
        const bool branch_taken_0x212190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212190u;
        // 0x212194: 0xa24302f5  sb          $v1, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212190) {
            ctx->pc = 0x212BA4u;
            goto label_212ba4;
        }
    }
    ctx->pc = 0x212198u;
label_212198:
    // 0x212198: 0xc0a4c40  jal         func_293100
label_21219c:
    if (ctx->pc == 0x21219Cu) {
        ctx->pc = 0x21219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212198u;
        // 0x21219c: 0x262464f0  addiu       $a0, $s1, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2121A0u;
        goto label_2121a0;
    }
    ctx->pc = 0x212198u;
    SET_GPR_U32(ctx, 31, 0x2121A0u);
    ctx->pc = 0x21219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212198u;
    // 0x21219c: 0x262464f0  addiu       $a0, $s1, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x212198u, 0x2121A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2121A0u;
label_2121a0:
    // 0x2121a0: 0x10400115  beqz        $v0, . + 4 + (0x115 << 2)
label_2121a4:
    if (ctx->pc == 0x2121A4u) {
        ctx->pc = 0x2121A8u;
        goto label_2121a8;
    }
    ctx->pc = 0x2121A0u;
    {
        const bool branch_taken_0x2121a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2121a0) {
            ctx->pc = 0x2125F8u;
            goto label_2125f8;
        }
    }
    ctx->pc = 0x2121A8u;
label_2121a8:
    // 0x2121a8: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x2121a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2121ac:
    // 0x2121ac: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2121acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_2121b0:
    // 0x2121b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2121b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2121b4:
    // 0x2121b4: 0x0  nop
    ctx->pc = 0x2121b4u;
    // NOP
label_2121b8:
    // 0x2121b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2121b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2121bc:
    // 0x2121bc: 0x0  nop
    ctx->pc = 0x2121bcu;
    // NOP
label_2121c0:
    // 0x2121c0: 0x4500010d  bc1f        . + 4 + (0x10D << 2)
label_2121c4:
    if (ctx->pc == 0x2121C4u) {
        ctx->pc = 0x2121C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121C0u;
        // 0x2121c4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2121C8u;
        goto label_2121c8;
    }
    ctx->pc = 0x2121C0u;
    {
        const bool branch_taken_0x2121c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2121C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121C0u;
        // 0x2121c4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2121c0) {
            ctx->pc = 0x2125F8u;
            goto label_2125f8;
        }
    }
    ctx->pc = 0x2121C8u;
label_2121c8:
    // 0x2121c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2121c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2121cc:
    // 0x2121cc: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x2121ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_2121d0:
    // 0x2121d0: 0xa24302f7  sb          $v1, 0x2F7($s2)
    ctx->pc = 0x2121d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 3));
label_2121d4:
    // 0x2121d4: 0x10000107  b           . + 4 + (0x107 << 2)
label_2121d8:
    if (ctx->pc == 0x2121D8u) {
        ctx->pc = 0x2121D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121D4u;
        // 0x2121d8: 0xa24002f4  sb          $zero, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2121DCu;
        goto label_2121dc;
    }
    ctx->pc = 0x2121D4u;
    {
        const bool branch_taken_0x2121d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2121D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121D4u;
        // 0x2121d8: 0xa24002f4  sb          $zero, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2121d4) {
            ctx->pc = 0x2125F4u;
            goto label_2125f4;
        }
    }
    ctx->pc = 0x2121DCu;
label_2121dc:
    // 0x2121dc: 0xc09d91a  jal         func_276468
label_2121e0:
    if (ctx->pc == 0x2121E0u) {
        ctx->pc = 0x2121E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121DCu;
        // 0x2121e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2121E4u;
        goto label_2121e4;
    }
    ctx->pc = 0x2121DCu;
    SET_GPR_U32(ctx, 31, 0x2121E4u);
    ctx->pc = 0x2121E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2121DCu;
    // 0x2121e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2121DCu, 0x2121E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2121E4u;
label_2121e4:
    // 0x2121e4: 0x8e5000f0  lw          $s0, 0xF0($s2)
    ctx->pc = 0x2121e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_2121e8:
    // 0x2121e8: 0xc0b6dac  jal         func_2DB6B0
label_2121ec:
    if (ctx->pc == 0x2121ECu) {
        ctx->pc = 0x2121ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121E8u;
        // 0x2121ec: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2121F0u;
        goto label_2121f0;
    }
    ctx->pc = 0x2121E8u;
    SET_GPR_U32(ctx, 31, 0x2121F0u);
    ctx->pc = 0x2121ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2121E8u;
    // 0x2121ec: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2121E8u, 0x2121F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2121F0u;
label_2121f0:
    // 0x2121f0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2121f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_2121f4:
    // 0x2121f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2121f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2121f8:
    // 0x2121f8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2121f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2121fc:
    // 0x2121fc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2121fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_212200:
    // 0x212200: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x212200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_212204:
    // 0x212204: 0xc0b680e  jal         func_2DA038
label_212208:
    if (ctx->pc == 0x212208u) {
        ctx->pc = 0x212208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212204u;
        // 0x212208: 0xc64c0104  lwc1        $f12, 0x104($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21220Cu;
        goto label_21220c;
    }
    ctx->pc = 0x212204u;
    SET_GPR_U32(ctx, 31, 0x21220Cu);
    ctx->pc = 0x212208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212204u;
    // 0x212208: 0xc64c0104  lwc1        $f12, 0x104($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x212204u, 0x21220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21220Cu;
label_21220c:
    // 0x21220c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21220cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_212210:
    // 0x212210: 0x0  nop
    ctx->pc = 0x212210u;
    // NOP
label_212214:
    // 0x212214: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x212214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_212218:
    // 0x212218: 0x0  nop
    ctx->pc = 0x212218u;
    // NOP
label_21221c:
    // 0x21221c: 0x45000057  bc1f        . + 4 + (0x57 << 2)
label_212220:
    if (ctx->pc == 0x212220u) {
        ctx->pc = 0x212220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21221Cu;
        // 0x212220: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212224u;
        goto label_212224;
    }
    ctx->pc = 0x21221Cu;
    {
        const bool branch_taken_0x21221c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21221Cu;
        // 0x212220: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21221c) {
            ctx->pc = 0x21237Cu;
            goto label_21237c;
        }
    }
    ctx->pc = 0x212224u;
label_212224:
    // 0x212224: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x212224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
label_212228:
    // 0x212228: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x212228u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
label_21222c:
    // 0x21222c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_212230:
    if (ctx->pc == 0x212230u) {
        ctx->pc = 0x212230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21222Cu;
        // 0x212230: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212234u;
        goto label_212234;
    }
    ctx->pc = 0x21222Cu;
    {
        const bool branch_taken_0x21222c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x212230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21222Cu;
        // 0x212230: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21222c) {
            ctx->pc = 0x21224Cu;
            goto label_21224c;
        }
    }
    ctx->pc = 0x212234u;
label_212234:
    // 0x212234: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x212234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_212238:
    // 0x212238: 0x24424e70  addiu       $v0, $v0, 0x4E70
    ctx->pc = 0x212238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20080));
label_21223c:
    // 0x21223c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21223cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_212240:
    // 0x212240: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x212240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_212244:
    // 0x212244: 0x800008  jr          $a0
label_212248:
    if (ctx->pc == 0x212248u) {
        ctx->pc = 0x21224Cu;
        goto label_21224c;
    }
    ctx->pc = 0x212244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21224Cu: goto label_21224c;
            case 0x21225Cu: goto label_21225c;
            case 0x21226Cu: goto label_21226c;
            case 0x21227Cu: goto label_21227c;
            case 0x21228Cu: goto label_21228c;
            case 0x21229Cu: goto label_21229c;
            case 0x2122ACu: goto label_2122ac;
            case 0x2122BCu: goto label_2122bc;
            case 0x2122CCu: goto label_2122cc;
            case 0x2122DCu: goto label_2122dc;
            case 0x2122ECu: goto label_2122ec;
            case 0x2122FCu: goto label_2122fc;
            case 0x21230Cu: goto label_21230c;
            case 0x21231Cu: goto label_21231c;
            case 0x21232Cu: goto label_21232c;
            case 0x21233Cu: goto label_21233c;
            case 0x21234Cu: goto label_21234c;
            case 0x21235Cu: goto label_21235c;
            case 0x21236Cu: goto label_21236c;
            case 0x212494u: goto label_212494;
            case 0x212504u: goto label_212504;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212244u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21224Cu;
label_21224c:
    // 0x21224c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212250:
    // 0x212250: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x212250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_212254:
    // 0x212254: 0x100000ae  b           . + 4 + (0xAE << 2)
label_212258:
    if (ctx->pc == 0x212258u) {
        ctx->pc = 0x212258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212254u;
        // 0x212258: 0x8c4400b4  lw          $a0, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21225Cu;
        goto label_21225c;
    }
    ctx->pc = 0x212254u;
    {
        const bool branch_taken_0x212254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212254u;
        // 0x212258: 0x8c4400b4  lw          $a0, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212254) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x21225Cu;
label_21225c:
    // 0x21225c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21225cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212260:
    // 0x212260: 0x8c430650  lw          $v1, 0x650($v0)
    ctx->pc = 0x212260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
label_212264:
    // 0x212264: 0x100000aa  b           . + 4 + (0xAA << 2)
label_212268:
    if (ctx->pc == 0x212268u) {
        ctx->pc = 0x212268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212264u;
        // 0x212268: 0x8c440654  lw          $a0, 0x654($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21226Cu;
        goto label_21226c;
    }
    ctx->pc = 0x212264u;
    {
        const bool branch_taken_0x212264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212264u;
        // 0x212268: 0x8c440654  lw          $a0, 0x654($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212264) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x21226Cu;
label_21226c:
    // 0x21226c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212270:
    // 0x212270: 0x8c4335d4  lw          $v1, 0x35D4($v0)
    ctx->pc = 0x212270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13780)));
label_212274:
    // 0x212274: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_212278:
    if (ctx->pc == 0x212278u) {
        ctx->pc = 0x212278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212274u;
        // 0x212278: 0x8c4435d8  lw          $a0, 0x35D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13784)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21227Cu;
        goto label_21227c;
    }
    ctx->pc = 0x212274u;
    {
        const bool branch_taken_0x212274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212274u;
        // 0x212278: 0x8c4435d8  lw          $a0, 0x35D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212274) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x21227Cu;
label_21227c:
    // 0x21227c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212280:
    // 0x212280: 0x8c4325dc  lw          $v1, 0x25DC($v0)
    ctx->pc = 0x212280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9692)));
label_212284:
    // 0x212284: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_212288:
    if (ctx->pc == 0x212288u) {
        ctx->pc = 0x212288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212284u;
        // 0x212288: 0x8c4425e0  lw          $a0, 0x25E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21228Cu;
        goto label_21228c;
    }
    ctx->pc = 0x212284u;
    {
        const bool branch_taken_0x212284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212284u;
        // 0x212288: 0x8c4425e0  lw          $a0, 0x25E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212284) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x21228Cu;
label_21228c:
    // 0x21228c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21228cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212290:
    // 0x212290: 0x8c4310b0  lw          $v1, 0x10B0($v0)
    ctx->pc = 0x212290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4272)));
label_212294:
    // 0x212294: 0x1000009e  b           . + 4 + (0x9E << 2)
label_212298:
    if (ctx->pc == 0x212298u) {
        ctx->pc = 0x212298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212294u;
        // 0x212298: 0x8c4410b4  lw          $a0, 0x10B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21229Cu;
        goto label_21229c;
    }
    ctx->pc = 0x212294u;
    {
        const bool branch_taken_0x212294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212294u;
        // 0x212298: 0x8c4410b4  lw          $a0, 0x10B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212294) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x21229Cu;
label_21229c:
    // 0x21229c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2122a0:
    // 0x2122a0: 0x8c433c90  lw          $v1, 0x3C90($v0)
    ctx->pc = 0x2122a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15504)));
label_2122a4:
    // 0x2122a4: 0x1000009a  b           . + 4 + (0x9A << 2)
label_2122a8:
    if (ctx->pc == 0x2122A8u) {
        ctx->pc = 0x2122A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122A4u;
        // 0x2122a8: 0x8c443c94  lw          $a0, 0x3C94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122ACu;
        goto label_2122ac;
    }
    ctx->pc = 0x2122A4u;
    {
        const bool branch_taken_0x2122a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2122A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122A4u;
        // 0x2122a8: 0x8c443c94  lw          $a0, 0x3C94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2122a4) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x2122ACu;
label_2122ac:
    // 0x2122ac: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2122acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2122b0:
    // 0x2122b0: 0x8c430830  lw          $v1, 0x830($v0)
    ctx->pc = 0x2122b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2096)));
label_2122b4:
    // 0x2122b4: 0x10000096  b           . + 4 + (0x96 << 2)
label_2122b8:
    if (ctx->pc == 0x2122B8u) {
        ctx->pc = 0x2122B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122B4u;
        // 0x2122b8: 0x8c440834  lw          $a0, 0x834($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122BCu;
        goto label_2122bc;
    }
    ctx->pc = 0x2122B4u;
    {
        const bool branch_taken_0x2122b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2122B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122B4u;
        // 0x2122b8: 0x8c440834  lw          $a0, 0x834($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2122b4) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x2122BCu;
label_2122bc:
    // 0x2122bc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2122bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2122c0:
    // 0x2122c0: 0x8c431fb8  lw          $v1, 0x1FB8($v0)
    ctx->pc = 0x2122c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8120)));
label_2122c4:
    // 0x2122c4: 0x10000092  b           . + 4 + (0x92 << 2)
label_2122c8:
    if (ctx->pc == 0x2122C8u) {
        ctx->pc = 0x2122C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122C4u;
        // 0x2122c8: 0x8c441fbc  lw          $a0, 0x1FBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122CCu;
        goto label_2122cc;
    }
    ctx->pc = 0x2122C4u;
    {
        const bool branch_taken_0x2122c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2122C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122C4u;
        // 0x2122c8: 0x8c441fbc  lw          $a0, 0x1FBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2122c4) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x2122CCu;
label_2122cc:
    // 0x2122cc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2122ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2122d0:
    // 0x2122d0: 0x8c431eb4  lw          $v1, 0x1EB4($v0)
    ctx->pc = 0x2122d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7860)));
label_2122d4:
    // 0x2122d4: 0x1000008e  b           . + 4 + (0x8E << 2)
label_2122d8:
    if (ctx->pc == 0x2122D8u) {
        ctx->pc = 0x2122D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122D4u;
        // 0x2122d8: 0x8c441eb8  lw          $a0, 0x1EB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122DCu;
        goto label_2122dc;
    }
    ctx->pc = 0x2122D4u;
    {
        const bool branch_taken_0x2122d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2122D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122D4u;
        // 0x2122d8: 0x8c441eb8  lw          $a0, 0x1EB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2122d4) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x2122DCu;
label_2122dc:
    // 0x2122dc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2122dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2122e0:
    // 0x2122e0: 0x8c431568  lw          $v1, 0x1568($v0)
    ctx->pc = 0x2122e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5480)));
label_2122e4:
    // 0x2122e4: 0x1000008a  b           . + 4 + (0x8A << 2)
label_2122e8:
    if (ctx->pc == 0x2122E8u) {
        ctx->pc = 0x2122E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122E4u;
        // 0x2122e8: 0x8c44156c  lw          $a0, 0x156C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122ECu;
        goto label_2122ec;
    }
    ctx->pc = 0x2122E4u;
    {
        const bool branch_taken_0x2122e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2122E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122E4u;
        // 0x2122e8: 0x8c44156c  lw          $a0, 0x156C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2122e4) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x2122ECu;
label_2122ec:
    // 0x2122ec: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2122ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2122f0:
    // 0x2122f0: 0x8c433a08  lw          $v1, 0x3A08($v0)
    ctx->pc = 0x2122f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14856)));
label_2122f4:
    // 0x2122f4: 0x10000086  b           . + 4 + (0x86 << 2)
label_2122f8:
    if (ctx->pc == 0x2122F8u) {
        ctx->pc = 0x2122F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122F4u;
        // 0x2122f8: 0x8c443a0c  lw          $a0, 0x3A0C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14860)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122FCu;
        goto label_2122fc;
    }
    ctx->pc = 0x2122F4u;
    {
        const bool branch_taken_0x2122f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2122F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122F4u;
        // 0x2122f8: 0x8c443a0c  lw          $a0, 0x3A0C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2122f4) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x2122FCu;
label_2122fc:
    // 0x2122fc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2122fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212300:
    // 0x212300: 0x8c433420  lw          $v1, 0x3420($v0)
    ctx->pc = 0x212300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13344)));
label_212304:
    // 0x212304: 0x10000082  b           . + 4 + (0x82 << 2)
label_212308:
    if (ctx->pc == 0x212308u) {
        ctx->pc = 0x212308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212304u;
        // 0x212308: 0x8c443424  lw          $a0, 0x3424($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21230Cu;
        goto label_21230c;
    }
    ctx->pc = 0x212304u;
    {
        const bool branch_taken_0x212304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212304u;
        // 0x212308: 0x8c443424  lw          $a0, 0x3424($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212304) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x21230Cu;
label_21230c:
    // 0x21230c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21230cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212310:
    // 0x212310: 0x8c4318f8  lw          $v1, 0x18F8($v0)
    ctx->pc = 0x212310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6392)));
label_212314:
    // 0x212314: 0x1000007e  b           . + 4 + (0x7E << 2)
label_212318:
    if (ctx->pc == 0x212318u) {
        ctx->pc = 0x212318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212314u;
        // 0x212318: 0x8c4418fc  lw          $a0, 0x18FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6396)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21231Cu;
        goto label_21231c;
    }
    ctx->pc = 0x212314u;
    {
        const bool branch_taken_0x212314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212314u;
        // 0x212318: 0x8c4418fc  lw          $a0, 0x18FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212314) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x21231Cu;
label_21231c:
    // 0x21231c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212320:
    // 0x212320: 0x8c433040  lw          $v1, 0x3040($v0)
    ctx->pc = 0x212320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12352)));
label_212324:
    // 0x212324: 0x1000007a  b           . + 4 + (0x7A << 2)
label_212328:
    if (ctx->pc == 0x212328u) {
        ctx->pc = 0x212328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212324u;
        // 0x212328: 0x8c443044  lw          $a0, 0x3044($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21232Cu;
        goto label_21232c;
    }
    ctx->pc = 0x212324u;
    {
        const bool branch_taken_0x212324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212324u;
        // 0x212328: 0x8c443044  lw          $a0, 0x3044($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212324) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x21232Cu;
label_21232c:
    // 0x21232c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212330:
    // 0x212330: 0x8c433274  lw          $v1, 0x3274($v0)
    ctx->pc = 0x212330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12916)));
label_212334:
    // 0x212334: 0x10000076  b           . + 4 + (0x76 << 2)
label_212338:
    if (ctx->pc == 0x212338u) {
        ctx->pc = 0x212338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212334u;
        // 0x212338: 0x8c443278  lw          $a0, 0x3278($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21233Cu;
        goto label_21233c;
    }
    ctx->pc = 0x212334u;
    {
        const bool branch_taken_0x212334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212334u;
        // 0x212338: 0x8c443278  lw          $a0, 0x3278($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212334) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x21233Cu;
label_21233c:
    // 0x21233c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212340:
    // 0x212340: 0x8c433d34  lw          $v1, 0x3D34($v0)
    ctx->pc = 0x212340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
label_212344:
    // 0x212344: 0x10000072  b           . + 4 + (0x72 << 2)
label_212348:
    if (ctx->pc == 0x212348u) {
        ctx->pc = 0x212348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212344u;
        // 0x212348: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21234Cu;
        goto label_21234c;
    }
    ctx->pc = 0x212344u;
    {
        const bool branch_taken_0x212344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212344u;
        // 0x212348: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212344) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x21234Cu;
label_21234c:
    // 0x21234c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21234cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212350:
    // 0x212350: 0x8c430d18  lw          $v1, 0xD18($v0)
    ctx->pc = 0x212350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3352)));
label_212354:
    // 0x212354: 0x1000006e  b           . + 4 + (0x6E << 2)
label_212358:
    if (ctx->pc == 0x212358u) {
        ctx->pc = 0x212358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212354u;
        // 0x212358: 0x8c440d1c  lw          $a0, 0xD1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21235Cu;
        goto label_21235c;
    }
    ctx->pc = 0x212354u;
    {
        const bool branch_taken_0x212354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212354u;
        // 0x212358: 0x8c440d1c  lw          $a0, 0xD1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212354) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x21235Cu;
label_21235c:
    // 0x21235c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212360:
    // 0x212360: 0x8c431bc8  lw          $v1, 0x1BC8($v0)
    ctx->pc = 0x212360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7112)));
label_212364:
    // 0x212364: 0x1000006a  b           . + 4 + (0x6A << 2)
label_212368:
    if (ctx->pc == 0x212368u) {
        ctx->pc = 0x212368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212364u;
        // 0x212368: 0x8c441bcc  lw          $a0, 0x1BCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21236Cu;
        goto label_21236c;
    }
    ctx->pc = 0x212364u;
    {
        const bool branch_taken_0x212364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212364u;
        // 0x212368: 0x8c441bcc  lw          $a0, 0x1BCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212364) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x21236Cu;
label_21236c:
    // 0x21236c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21236cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212370:
    // 0x212370: 0x8c432d48  lw          $v1, 0x2D48($v0)
    ctx->pc = 0x212370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11592)));
label_212374:
    // 0x212374: 0x10000066  b           . + 4 + (0x66 << 2)
label_212378:
    if (ctx->pc == 0x212378u) {
        ctx->pc = 0x212378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212374u;
        // 0x212378: 0x8c442d4c  lw          $a0, 0x2D4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21237Cu;
        goto label_21237c;
    }
    ctx->pc = 0x212374u;
    {
        const bool branch_taken_0x212374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212374u;
        // 0x212378: 0x8c442d4c  lw          $a0, 0x2D4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212374) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x21237Cu;
label_21237c:
    // 0x21237c: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x21237cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
label_212380:
    // 0x212380: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x212380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
label_212384:
    // 0x212384: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_212388:
    if (ctx->pc == 0x212388u) {
        ctx->pc = 0x212388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212384u;
        // 0x212388: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21238Cu;
        goto label_21238c;
    }
    ctx->pc = 0x212384u;
    {
        const bool branch_taken_0x212384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x212388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212384u;
        // 0x212388: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212384) {
            ctx->pc = 0x2123A4u;
            goto label_2123a4;
        }
    }
    ctx->pc = 0x21238Cu;
label_21238c:
    // 0x21238c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21238cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_212390:
    // 0x212390: 0x24425070  addiu       $v0, $v0, 0x5070
    ctx->pc = 0x212390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20592));
label_212394:
    // 0x212394: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x212394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_212398:
    // 0x212398: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x212398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21239c:
    // 0x21239c: 0x800008  jr          $a0
label_2123a0:
    if (ctx->pc == 0x2123A0u) {
        ctx->pc = 0x2123A4u;
        goto label_2123a4;
    }
    ctx->pc = 0x21239Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2123A4u: goto label_2123a4;
            case 0x2123B4u: goto label_2123b4;
            case 0x2123C4u: goto label_2123c4;
            case 0x2123D4u: goto label_2123d4;
            case 0x2123E4u: goto label_2123e4;
            case 0x2123F4u: goto label_2123f4;
            case 0x212404u: goto label_212404;
            case 0x212414u: goto label_212414;
            case 0x212424u: goto label_212424;
            case 0x212434u: goto label_212434;
            case 0x212444u: goto label_212444;
            case 0x212454u: goto label_212454;
            case 0x212464u: goto label_212464;
            case 0x212474u: goto label_212474;
            case 0x212484u: goto label_212484;
            case 0x212494u: goto label_212494;
            case 0x2124C4u: goto label_2124c4;
            case 0x2124D4u: goto label_2124d4;
            case 0x2124E4u: goto label_2124e4;
            case 0x2124F4u: goto label_2124f4;
            case 0x212504u: goto label_212504;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21239Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2123A4u;
label_2123a4:
    // 0x2123a4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2123a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2123a8:
    // 0x2123a8: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x2123a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_2123ac:
    // 0x2123ac: 0x10000058  b           . + 4 + (0x58 << 2)
label_2123b0:
    if (ctx->pc == 0x2123B0u) {
        ctx->pc = 0x2123B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123ACu;
        // 0x2123b0: 0x8c4400b4  lw          $a0, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123B4u;
        goto label_2123b4;
    }
    ctx->pc = 0x2123ACu;
    {
        const bool branch_taken_0x2123ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2123B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123ACu;
        // 0x2123b0: 0x8c4400b4  lw          $a0, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123ac) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x2123B4u;
label_2123b4:
    // 0x2123b4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2123b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2123b8:
    // 0x2123b8: 0x8c430650  lw          $v1, 0x650($v0)
    ctx->pc = 0x2123b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
label_2123bc:
    // 0x2123bc: 0x10000054  b           . + 4 + (0x54 << 2)
label_2123c0:
    if (ctx->pc == 0x2123C0u) {
        ctx->pc = 0x2123C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123BCu;
        // 0x2123c0: 0x8c440654  lw          $a0, 0x654($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123C4u;
        goto label_2123c4;
    }
    ctx->pc = 0x2123BCu;
    {
        const bool branch_taken_0x2123bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2123C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123BCu;
        // 0x2123c0: 0x8c440654  lw          $a0, 0x654($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123bc) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x2123C4u;
label_2123c4:
    // 0x2123c4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2123c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2123c8:
    // 0x2123c8: 0x8c4335d4  lw          $v1, 0x35D4($v0)
    ctx->pc = 0x2123c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13780)));
label_2123cc:
    // 0x2123cc: 0x10000050  b           . + 4 + (0x50 << 2)
label_2123d0:
    if (ctx->pc == 0x2123D0u) {
        ctx->pc = 0x2123D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123CCu;
        // 0x2123d0: 0x8c4435d8  lw          $a0, 0x35D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13784)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123D4u;
        goto label_2123d4;
    }
    ctx->pc = 0x2123CCu;
    {
        const bool branch_taken_0x2123cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2123D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123CCu;
        // 0x2123d0: 0x8c4435d8  lw          $a0, 0x35D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123cc) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x2123D4u;
label_2123d4:
    // 0x2123d4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2123d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2123d8:
    // 0x2123d8: 0x8c4325dc  lw          $v1, 0x25DC($v0)
    ctx->pc = 0x2123d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9692)));
label_2123dc:
    // 0x2123dc: 0x1000004c  b           . + 4 + (0x4C << 2)
label_2123e0:
    if (ctx->pc == 0x2123E0u) {
        ctx->pc = 0x2123E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123DCu;
        // 0x2123e0: 0x8c4425e0  lw          $a0, 0x25E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123E4u;
        goto label_2123e4;
    }
    ctx->pc = 0x2123DCu;
    {
        const bool branch_taken_0x2123dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2123E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123DCu;
        // 0x2123e0: 0x8c4425e0  lw          $a0, 0x25E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123dc) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x2123E4u;
label_2123e4:
    // 0x2123e4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2123e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2123e8:
    // 0x2123e8: 0x8c4310b0  lw          $v1, 0x10B0($v0)
    ctx->pc = 0x2123e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4272)));
label_2123ec:
    // 0x2123ec: 0x10000048  b           . + 4 + (0x48 << 2)
label_2123f0:
    if (ctx->pc == 0x2123F0u) {
        ctx->pc = 0x2123F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123ECu;
        // 0x2123f0: 0x8c4410b4  lw          $a0, 0x10B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123F4u;
        goto label_2123f4;
    }
    ctx->pc = 0x2123ECu;
    {
        const bool branch_taken_0x2123ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2123F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123ECu;
        // 0x2123f0: 0x8c4410b4  lw          $a0, 0x10B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123ec) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x2123F4u;
label_2123f4:
    // 0x2123f4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2123f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2123f8:
    // 0x2123f8: 0x8c433c90  lw          $v1, 0x3C90($v0)
    ctx->pc = 0x2123f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15504)));
label_2123fc:
    // 0x2123fc: 0x10000044  b           . + 4 + (0x44 << 2)
label_212400:
    if (ctx->pc == 0x212400u) {
        ctx->pc = 0x212400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123FCu;
        // 0x212400: 0x8c443c94  lw          $a0, 0x3C94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212404u;
        goto label_212404;
    }
    ctx->pc = 0x2123FCu;
    {
        const bool branch_taken_0x2123fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123FCu;
        // 0x212400: 0x8c443c94  lw          $a0, 0x3C94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123fc) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x212404u;
label_212404:
    // 0x212404: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x212404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212408:
    // 0x212408: 0x8c430830  lw          $v1, 0x830($v0)
    ctx->pc = 0x212408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2096)));
label_21240c:
    // 0x21240c: 0x10000040  b           . + 4 + (0x40 << 2)
label_212410:
    if (ctx->pc == 0x212410u) {
        ctx->pc = 0x212410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21240Cu;
        // 0x212410: 0x8c440834  lw          $a0, 0x834($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212414u;
        goto label_212414;
    }
    ctx->pc = 0x21240Cu;
    {
        const bool branch_taken_0x21240c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21240Cu;
        // 0x212410: 0x8c440834  lw          $a0, 0x834($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21240c) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x212414u;
label_212414:
    // 0x212414: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x212414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212418:
    // 0x212418: 0x8c431fb8  lw          $v1, 0x1FB8($v0)
    ctx->pc = 0x212418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8120)));
label_21241c:
    // 0x21241c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_212420:
    if (ctx->pc == 0x212420u) {
        ctx->pc = 0x212420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21241Cu;
        // 0x212420: 0x8c441fbc  lw          $a0, 0x1FBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212424u;
        goto label_212424;
    }
    ctx->pc = 0x21241Cu;
    {
        const bool branch_taken_0x21241c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21241Cu;
        // 0x212420: 0x8c441fbc  lw          $a0, 0x1FBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21241c) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x212424u;
label_212424:
    // 0x212424: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x212424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212428:
    // 0x212428: 0x8c431eb4  lw          $v1, 0x1EB4($v0)
    ctx->pc = 0x212428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7860)));
label_21242c:
    // 0x21242c: 0x10000038  b           . + 4 + (0x38 << 2)
label_212430:
    if (ctx->pc == 0x212430u) {
        ctx->pc = 0x212430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21242Cu;
        // 0x212430: 0x8c441eb8  lw          $a0, 0x1EB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212434u;
        goto label_212434;
    }
    ctx->pc = 0x21242Cu;
    {
        const bool branch_taken_0x21242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21242Cu;
        // 0x212430: 0x8c441eb8  lw          $a0, 0x1EB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21242c) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x212434u;
label_212434:
    // 0x212434: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x212434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212438:
    // 0x212438: 0x8c431568  lw          $v1, 0x1568($v0)
    ctx->pc = 0x212438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5480)));
label_21243c:
    // 0x21243c: 0x10000034  b           . + 4 + (0x34 << 2)
label_212440:
    if (ctx->pc == 0x212440u) {
        ctx->pc = 0x212440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21243Cu;
        // 0x212440: 0x8c44156c  lw          $a0, 0x156C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212444u;
        goto label_212444;
    }
    ctx->pc = 0x21243Cu;
    {
        const bool branch_taken_0x21243c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21243Cu;
        // 0x212440: 0x8c44156c  lw          $a0, 0x156C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21243c) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x212444u;
label_212444:
    // 0x212444: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x212444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212448:
    // 0x212448: 0x8c433a08  lw          $v1, 0x3A08($v0)
    ctx->pc = 0x212448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14856)));
label_21244c:
    // 0x21244c: 0x10000030  b           . + 4 + (0x30 << 2)
label_212450:
    if (ctx->pc == 0x212450u) {
        ctx->pc = 0x212450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21244Cu;
        // 0x212450: 0x8c443a0c  lw          $a0, 0x3A0C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14860)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212454u;
        goto label_212454;
    }
    ctx->pc = 0x21244Cu;
    {
        const bool branch_taken_0x21244c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21244Cu;
        // 0x212450: 0x8c443a0c  lw          $a0, 0x3A0C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21244c) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x212454u;
label_212454:
    // 0x212454: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x212454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212458:
    // 0x212458: 0x8c433420  lw          $v1, 0x3420($v0)
    ctx->pc = 0x212458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13344)));
label_21245c:
    // 0x21245c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_212460:
    if (ctx->pc == 0x212460u) {
        ctx->pc = 0x212460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21245Cu;
        // 0x212460: 0x8c443424  lw          $a0, 0x3424($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212464u;
        goto label_212464;
    }
    ctx->pc = 0x21245Cu;
    {
        const bool branch_taken_0x21245c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21245Cu;
        // 0x212460: 0x8c443424  lw          $a0, 0x3424($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21245c) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x212464u;
label_212464:
    // 0x212464: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x212464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212468:
    // 0x212468: 0x8c4318f8  lw          $v1, 0x18F8($v0)
    ctx->pc = 0x212468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6392)));
label_21246c:
    // 0x21246c: 0x10000028  b           . + 4 + (0x28 << 2)
label_212470:
    if (ctx->pc == 0x212470u) {
        ctx->pc = 0x212470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21246Cu;
        // 0x212470: 0x8c4418fc  lw          $a0, 0x18FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6396)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212474u;
        goto label_212474;
    }
    ctx->pc = 0x21246Cu;
    {
        const bool branch_taken_0x21246c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21246Cu;
        // 0x212470: 0x8c4418fc  lw          $a0, 0x18FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21246c) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x212474u;
label_212474:
    // 0x212474: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x212474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212478:
    // 0x212478: 0x8c433040  lw          $v1, 0x3040($v0)
    ctx->pc = 0x212478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12352)));
label_21247c:
    // 0x21247c: 0x10000024  b           . + 4 + (0x24 << 2)
label_212480:
    if (ctx->pc == 0x212480u) {
        ctx->pc = 0x212480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21247Cu;
        // 0x212480: 0x8c443044  lw          $a0, 0x3044($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212484u;
        goto label_212484;
    }
    ctx->pc = 0x21247Cu;
    {
        const bool branch_taken_0x21247c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21247Cu;
        // 0x212480: 0x8c443044  lw          $a0, 0x3044($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21247c) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x212484u;
label_212484:
    // 0x212484: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x212484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212488:
    // 0x212488: 0x8c433274  lw          $v1, 0x3274($v0)
    ctx->pc = 0x212488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12916)));
label_21248c:
    // 0x21248c: 0x10000020  b           . + 4 + (0x20 << 2)
label_212490:
    if (ctx->pc == 0x212490u) {
        ctx->pc = 0x212490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21248Cu;
        // 0x212490: 0x8c443278  lw          $a0, 0x3278($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212494u;
        goto label_212494;
    }
    ctx->pc = 0x21248Cu;
    {
        const bool branch_taken_0x21248c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21248Cu;
        // 0x212490: 0x8c443278  lw          $a0, 0x3278($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21248c) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x212494u;
label_212494:
    // 0x212494: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x212494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212498:
    // 0x212498: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x212498u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
label_21249c:
    // 0x21249c: 0x8c433734  lw          $v1, 0x3734($v0)
    ctx->pc = 0x21249cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14132)));
label_2124a0:
    // 0x2124a0: 0x8c443738  lw          $a0, 0x3738($v0)
    ctx->pc = 0x2124a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14136)));
label_2124a4:
    // 0x2124a4: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2124a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2124a8:
    // 0x2124a8: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
label_2124ac:
    if (ctx->pc == 0x2124ACu) {
        ctx->pc = 0x2124ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124A8u;
        // 0x2124ac: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2124B0u;
        goto label_2124b0;
    }
    ctx->pc = 0x2124A8u;
    {
        const bool branch_taken_0x2124a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2124ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124A8u;
        // 0x2124ac: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2124a8) {
            ctx->pc = 0x212518u;
            goto label_212518;
        }
    }
    ctx->pc = 0x2124B0u;
label_2124b0:
    // 0x2124b0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2124b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2124b4:
    // 0x2124b4: 0xc09fa94  jal         func_27EA50
label_2124b8:
    if (ctx->pc == 0x2124B8u) {
        ctx->pc = 0x2124B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124B4u;
        // 0x2124b8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2124BCu;
        goto label_2124bc;
    }
    ctx->pc = 0x2124B4u;
    SET_GPR_U32(ctx, 31, 0x2124BCu);
    ctx->pc = 0x2124B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2124B4u;
    // 0x2124b8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x2124B4u, 0x2124BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2124BCu;
label_2124bc:
    // 0x2124bc: 0x10000017  b           . + 4 + (0x17 << 2)
label_2124c0:
    if (ctx->pc == 0x2124C0u) {
        ctx->pc = 0x2124C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124BCu;
        // 0x2124c0: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2124C4u;
        goto label_2124c4;
    }
    ctx->pc = 0x2124BCu;
    {
        const bool branch_taken_0x2124bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2124C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124BCu;
        // 0x2124c0: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2124bc) {
            ctx->pc = 0x21251Cu;
            goto label_21251c;
        }
    }
    ctx->pc = 0x2124C4u;
label_2124c4:
    // 0x2124c4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2124c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2124c8:
    // 0x2124c8: 0x8c433d34  lw          $v1, 0x3D34($v0)
    ctx->pc = 0x2124c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
label_2124cc:
    // 0x2124cc: 0x10000010  b           . + 4 + (0x10 << 2)
label_2124d0:
    if (ctx->pc == 0x2124D0u) {
        ctx->pc = 0x2124D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124CCu;
        // 0x2124d0: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2124D4u;
        goto label_2124d4;
    }
    ctx->pc = 0x2124CCu;
    {
        const bool branch_taken_0x2124cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2124D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124CCu;
        // 0x2124d0: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2124cc) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x2124D4u;
label_2124d4:
    // 0x2124d4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2124d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2124d8:
    // 0x2124d8: 0x8c430d20  lw          $v1, 0xD20($v0)
    ctx->pc = 0x2124d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3360)));
label_2124dc:
    // 0x2124dc: 0x1000000c  b           . + 4 + (0xC << 2)
label_2124e0:
    if (ctx->pc == 0x2124E0u) {
        ctx->pc = 0x2124E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124DCu;
        // 0x2124e0: 0x8c440d24  lw          $a0, 0xD24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3364)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2124E4u;
        goto label_2124e4;
    }
    ctx->pc = 0x2124DCu;
    {
        const bool branch_taken_0x2124dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2124E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124DCu;
        // 0x2124e0: 0x8c440d24  lw          $a0, 0xD24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2124dc) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x2124E4u;
label_2124e4:
    // 0x2124e4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2124e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2124e8:
    // 0x2124e8: 0x8c431bc8  lw          $v1, 0x1BC8($v0)
    ctx->pc = 0x2124e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7112)));
label_2124ec:
    // 0x2124ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_2124f0:
    if (ctx->pc == 0x2124F0u) {
        ctx->pc = 0x2124F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124ECu;
        // 0x2124f0: 0x8c441bcc  lw          $a0, 0x1BCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2124F4u;
        goto label_2124f4;
    }
    ctx->pc = 0x2124ECu;
    {
        const bool branch_taken_0x2124ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2124F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124ECu;
        // 0x2124f0: 0x8c441bcc  lw          $a0, 0x1BCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2124ec) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x2124F4u;
label_2124f4:
    // 0x2124f4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2124f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_2124f8:
    // 0x2124f8: 0x8c432d48  lw          $v1, 0x2D48($v0)
    ctx->pc = 0x2124f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11592)));
label_2124fc:
    // 0x2124fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_212500:
    if (ctx->pc == 0x212500u) {
        ctx->pc = 0x212500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124FCu;
        // 0x212500: 0x8c442d4c  lw          $a0, 0x2D4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212504u;
        goto label_212504;
    }
    ctx->pc = 0x2124FCu;
    {
        const bool branch_taken_0x2124fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124FCu;
        // 0x212500: 0x8c442d4c  lw          $a0, 0x2D4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2124fc) {
            ctx->pc = 0x212510u;
            goto label_212510;
        }
    }
    ctx->pc = 0x212504u;
label_212504:
    // 0x212504: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x212504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212508:
    // 0x212508: 0x8c43227c  lw          $v1, 0x227C($v0)
    ctx->pc = 0x212508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8828)));
label_21250c:
    // 0x21250c: 0x8c442280  lw          $a0, 0x2280($v0)
    ctx->pc = 0x21250cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8832)));
label_212510:
    // 0x212510: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x212510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_212514:
    // 0x212514: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x212514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_212518:
    // 0x212518: 0x8e4206ec  lw          $v0, 0x6EC($s2)
    ctx->pc = 0x212518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
label_21251c:
    // 0x21251c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_212520:
    if (ctx->pc == 0x212520u) {
        ctx->pc = 0x212524u;
        goto label_212524;
    }
    ctx->pc = 0x21251Cu;
    {
        const bool branch_taken_0x21251c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21251c) {
            ctx->pc = 0x212538u;
            goto label_212538;
        }
    }
    ctx->pc = 0x212524u;
label_212524:
    // 0x212524: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x212524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_212528:
    // 0x212528: 0x8c430454  lw          $v1, 0x454($v0)
    ctx->pc = 0x212528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1108)));
label_21252c:
    // 0x21252c: 0x8c440458  lw          $a0, 0x458($v0)
    ctx->pc = 0x21252cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1112)));
label_212530:
    // 0x212530: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x212530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_212534:
    // 0x212534: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x212534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_212538:
    // 0x212538: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x212538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21253c:
    // 0x21253c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21253cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_212540:
    // 0x212540: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x212540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_212544:
    // 0x212544: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x212544u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_212548:
    // 0x212548: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21254c:
    // 0x21254c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x21254cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_212550:
    // 0x212550: 0xc0aa15e  jal         func_2A8578
label_212554:
    if (ctx->pc == 0x212554u) {
        ctx->pc = 0x212554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212550u;
        // 0x212554: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212558u;
        goto label_212558;
    }
    ctx->pc = 0x212550u;
    SET_GPR_U32(ctx, 31, 0x212558u);
    ctx->pc = 0x212554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212550u;
    // 0x212554: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x212550u, 0x212558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212558u;
label_212558:
    // 0x212558: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x212558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_21255c:
    // 0x21255c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21255cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_212560:
    // 0x212560: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x212560u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_212564:
    // 0x212564: 0xc0b6dac  jal         func_2DB6B0
label_212568:
    if (ctx->pc == 0x212568u) {
        ctx->pc = 0x21256Cu;
        goto label_21256c;
    }
    ctx->pc = 0x212564u;
    SET_GPR_U32(ctx, 31, 0x21256Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x212564u, 0x21256Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21256Cu;
label_21256c:
    // 0x21256c: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x21256cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_212570:
    // 0x212570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x212570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_212574:
    // 0x212574: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x212574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
label_212578:
    // 0x212578: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x212578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_21257c:
    // 0x21257c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21257cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_212580:
    // 0x212580: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x212580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_212584:
    // 0x212584: 0xc0a9d26  jal         func_2A7498
label_212588:
    if (ctx->pc == 0x212588u) {
        ctx->pc = 0x212588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212584u;
        // 0x212588: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21258Cu;
        goto label_21258c;
    }
    ctx->pc = 0x212584u;
    SET_GPR_U32(ctx, 31, 0x21258Cu);
    ctx->pc = 0x212588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212584u;
    // 0x212588: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x212584u, 0x21258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21258Cu;
label_21258c:
    // 0x21258c: 0xc055f06  jal         func_157C18
label_212590:
    if (ctx->pc == 0x212590u) {
        ctx->pc = 0x212590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21258Cu;
        // 0x212590: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212594u;
        goto label_212594;
    }
    ctx->pc = 0x21258Cu;
    SET_GPR_U32(ctx, 31, 0x212594u);
    ctx->pc = 0x212590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21258Cu;
    // 0x212590: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x21258Cu, 0x212594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212594u;
label_212594:
    // 0x212594: 0xc0b6dac  jal         func_2DB6B0
label_212598:
    if (ctx->pc == 0x212598u) {
        ctx->pc = 0x212598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212594u;
        // 0x212598: 0x8e5000f0  lw          $s0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21259Cu;
        goto label_21259c;
    }
    ctx->pc = 0x212594u;
    SET_GPR_U32(ctx, 31, 0x21259Cu);
    ctx->pc = 0x212598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212594u;
    // 0x212598: 0x8e5000f0  lw          $s0, 0xF0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x212594u, 0x21259Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21259Cu;
label_21259c:
    // 0x21259c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x21259cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_2125a0:
    // 0x2125a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2125a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2125a4:
    // 0x2125a4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2125a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2125a8:
    // 0x2125a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2125a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2125ac:
    // 0x2125ac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2125acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2125b0:
    // 0x2125b0: 0xc0b680e  jal         func_2DA038
label_2125b4:
    if (ctx->pc == 0x2125B4u) {
        ctx->pc = 0x2125B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125B0u;
        // 0x2125b4: 0xc64c0104  lwc1        $f12, 0x104($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2125B8u;
        goto label_2125b8;
    }
    ctx->pc = 0x2125B0u;
    SET_GPR_U32(ctx, 31, 0x2125B8u);
    ctx->pc = 0x2125B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2125B0u;
    // 0x2125b4: 0xc64c0104  lwc1        $f12, 0x104($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2125B0u, 0x2125B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2125B8u;
label_2125b8:
    // 0x2125b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2125b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2125bc:
    // 0x2125bc: 0x0  nop
    ctx->pc = 0x2125bcu;
    // NOP
label_2125c0:
    // 0x2125c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2125c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2125c4:
    // 0x2125c4: 0x0  nop
    ctx->pc = 0x2125c4u;
    // NOP
label_2125c8:
    // 0x2125c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2125cc:
    if (ctx->pc == 0x2125CCu) {
        ctx->pc = 0x2125CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125C8u;
        // 0x2125cc: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2125D0u;
        goto label_2125d0;
    }
    ctx->pc = 0x2125C8u;
    {
        const bool branch_taken_0x2125c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2125CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125C8u;
        // 0x2125cc: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125c8) {
            ctx->pc = 0x2125D4u;
            goto label_2125d4;
        }
    }
    ctx->pc = 0x2125D0u;
label_2125d0:
    // 0x2125d0: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x2125d0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
label_2125d4:
    // 0x2125d4: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x2125d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
label_2125d8:
    // 0x2125d8: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x2125d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_2125dc:
    // 0x2125dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2125dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2125e0:
    // 0x2125e0: 0x0  nop
    ctx->pc = 0x2125e0u;
    // NOP
label_2125e4:
    // 0x2125e4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2125e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2125e8:
    // 0x2125e8: 0x0  nop
    ctx->pc = 0x2125e8u;
    // NOP
label_2125ec:
    // 0x2125ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2125f0:
    if (ctx->pc == 0x2125F0u) {
        ctx->pc = 0x2125F4u;
        goto label_2125f4;
    }
    ctx->pc = 0x2125ECu;
    {
        const bool branch_taken_0x2125ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2125ec) {
            ctx->pc = 0x2125F8u;
            goto label_2125f8;
        }
    }
    ctx->pc = 0x2125F4u;
label_2125f4:
    // 0x2125f4: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x2125f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_2125f8:
    // 0x2125f8: 0xc0b6dac  jal         func_2DB6B0
label_2125fc:
    if (ctx->pc == 0x2125FCu) {
        ctx->pc = 0x212600u;
        goto label_212600;
    }
    ctx->pc = 0x2125F8u;
    SET_GPR_U32(ctx, 31, 0x212600u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2125F8u, 0x212600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212600u;
label_212600:
    // 0x212600: 0x8443054a  lh          $v1, 0x54A($v0)
    ctx->pc = 0x212600u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
label_212604:
    // 0x212604: 0x18600178  blez        $v1, . + 4 + (0x178 << 2)
label_212608:
    if (ctx->pc == 0x212608u) {
        ctx->pc = 0x212608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212604u;
        // 0x212608: 0x3c030058  lui         $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21260Cu;
        goto label_21260c;
    }
    ctx->pc = 0x212604u;
    {
        const bool branch_taken_0x212604 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x212608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212604u;
        // 0x212608: 0x3c030058  lui         $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212604) {
            ctx->pc = 0x212BE8u;
            goto label_212be8;
        }
    }
    ctx->pc = 0x21260Cu;
label_21260c:
    // 0x21260c: 0x246464f0  addiu       $a0, $v1, 0x64F0
    ctx->pc = 0x21260cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25840));
label_212610:
    // 0x212610: 0x908205b5  lbu         $v0, 0x5B5($a0)
    ctx->pc = 0x212610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1461)));
label_212614:
    // 0x212614: 0x14400174  bnez        $v0, . + 4 + (0x174 << 2)
label_212618:
    if (ctx->pc == 0x212618u) {
        ctx->pc = 0x212618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212614u;
        // 0x212618: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21261Cu;
        goto label_21261c;
    }
    ctx->pc = 0x212614u;
    {
        const bool branch_taken_0x212614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212614u;
        // 0x212618: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212614) {
            ctx->pc = 0x212BE8u;
            goto label_212be8;
        }
    }
    ctx->pc = 0x21261Cu;
label_21261c:
    // 0x21261c: 0xc0a4c40  jal         func_293100
label_212620:
    if (ctx->pc == 0x212620u) {
        ctx->pc = 0x212624u;
        goto label_212624;
    }
    ctx->pc = 0x21261Cu;
    SET_GPR_U32(ctx, 31, 0x212624u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x21261Cu, 0x212624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212624u;
label_212624:
    // 0x212624: 0x14400171  bnez        $v0, . + 4 + (0x171 << 2)
label_212628:
    if (ctx->pc == 0x212628u) {
        ctx->pc = 0x212628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212624u;
        // 0x212628: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21262Cu;
        goto label_21262c;
    }
    ctx->pc = 0x212624u;
    {
        const bool branch_taken_0x212624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212624u;
        // 0x212628: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212624) {
            ctx->pc = 0x212BECu;
            goto label_212bec;
        }
    }
    ctx->pc = 0x21262Cu;
label_21262c:
    // 0x21262c: 0xc098aaa  jal         func_262AA8
label_212630:
    if (ctx->pc == 0x212630u) {
        ctx->pc = 0x212630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21262Cu;
        // 0x212630: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212634u;
        goto label_212634;
    }
    ctx->pc = 0x21262Cu;
    SET_GPR_U32(ctx, 31, 0x212634u);
    ctx->pc = 0x212630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21262Cu;
    // 0x212630: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x21262Cu, 0x212634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212634u;
label_212634:
    // 0x212634: 0x1440016d  bnez        $v0, . + 4 + (0x16D << 2)
label_212638:
    if (ctx->pc == 0x212638u) {
        ctx->pc = 0x212638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212634u;
        // 0x212638: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21263Cu;
        goto label_21263c;
    }
    ctx->pc = 0x212634u;
    {
        const bool branch_taken_0x212634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212634u;
        // 0x212638: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212634) {
            ctx->pc = 0x212BECu;
            goto label_212bec;
        }
    }
    ctx->pc = 0x21263Cu;
label_21263c:
    // 0x21263c: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x21263cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_212640:
    // 0x212640: 0x28620220  slti        $v0, $v1, 0x220
    ctx->pc = 0x212640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
label_212644:
    // 0x212644: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_212648:
    if (ctx->pc == 0x212648u) {
        ctx->pc = 0x212648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212644u;
        // 0x212648: 0x8e4216d4  lw          $v0, 0x16D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21264Cu;
        goto label_21264c;
    }
    ctx->pc = 0x212644u;
    {
        const bool branch_taken_0x212644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212644) {
            ctx->pc = 0x212648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212644u;
            // 0x212648: 0x8e4216d4  lw          $v0, 0x16D4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212670u;
            goto label_212670;
        }
    }
    ctx->pc = 0x21264Cu;
label_21264c:
    // 0x21264c: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x21264cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
label_212650:
    // 0x212650: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
label_212654:
    if (ctx->pc == 0x212654u) {
        ctx->pc = 0x212654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212650u;
        // 0x212654: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212658u;
        goto label_212658;
    }
    ctx->pc = 0x212650u;
    {
        const bool branch_taken_0x212650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212650) {
            ctx->pc = 0x212654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212650u;
            // 0x212654: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212700u;
            goto label_212700;
        }
    }
    ctx->pc = 0x212658u;
label_212658:
    // 0x212658: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x212658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
label_21265c:
    // 0x21265c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_212660:
    if (ctx->pc == 0x212660u) {
        ctx->pc = 0x212660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21265Cu;
        // 0x212660: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x212664u;
        goto label_212664;
    }
    ctx->pc = 0x21265Cu;
    {
        const bool branch_taken_0x21265c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21265Cu;
        // 0x212660: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21265c) {
            ctx->pc = 0x21266Cu;
            goto label_21266c;
        }
    }
    ctx->pc = 0x212664u;
label_212664:
    // 0x212664: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_212668:
    if (ctx->pc == 0x212668u) {
        ctx->pc = 0x212668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212664u;
        // 0x212668: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21266Cu;
        goto label_21266c;
    }
    ctx->pc = 0x212664u;
    {
        const bool branch_taken_0x212664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212664) {
            ctx->pc = 0x212668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212664u;
            // 0x212668: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212700u;
            goto label_212700;
        }
    }
    ctx->pc = 0x21266Cu;
label_21266c:
    // 0x21266c: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x21266cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
label_212670:
    // 0x212670: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x212670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_212674:
    // 0x212674: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x212674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_212678:
    // 0x212678: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_21267c:
    if (ctx->pc == 0x21267Cu) {
        ctx->pc = 0x21267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212678u;
        // 0x21267c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212680u;
        goto label_212680;
    }
    ctx->pc = 0x212678u;
    {
        const bool branch_taken_0x212678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212678) {
            ctx->pc = 0x21267Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212678u;
            // 0x21267c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212700u;
            goto label_212700;
        }
    }
    ctx->pc = 0x212680u;
label_212680:
    // 0x212680: 0x8e4216d8  lw          $v0, 0x16D8($s2)
    ctx->pc = 0x212680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5848)));
label_212684:
    // 0x212684: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x212684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_212688:
    // 0x212688: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_21268c:
    if (ctx->pc == 0x21268Cu) {
        ctx->pc = 0x21268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212688u;
        // 0x21268c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212690u;
        goto label_212690;
    }
    ctx->pc = 0x212688u;
    {
        const bool branch_taken_0x212688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212688) {
            ctx->pc = 0x21268Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212688u;
            // 0x21268c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212700u;
            goto label_212700;
        }
    }
    ctx->pc = 0x212690u;
label_212690:
    // 0x212690: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x212690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_212694:
    // 0x212694: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x212694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_212698:
    // 0x212698: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21269c:
    // 0x21269c: 0x0  nop
    ctx->pc = 0x21269cu;
    // NOP
label_2126a0:
    // 0x2126a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2126a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2126a4:
    // 0x2126a4: 0x0  nop
    ctx->pc = 0x2126a4u;
    // NOP
label_2126a8:
    // 0x2126a8: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
label_2126ac:
    if (ctx->pc == 0x2126ACu) {
        ctx->pc = 0x2126ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2126A8u;
        // 0x2126ac: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2126B0u;
        goto label_2126b0;
    }
    ctx->pc = 0x2126A8u;
    {
        const bool branch_taken_0x2126a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2126a8) {
            ctx->pc = 0x2126ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2126A8u;
            // 0x2126ac: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212700u;
            goto label_212700;
        }
    }
    ctx->pc = 0x2126B0u;
label_2126b0:
    // 0x2126b0: 0xc6410768  lwc1        $f1, 0x768($s2)
    ctx->pc = 0x2126b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2126b4:
    // 0x2126b4: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2126b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2126b8:
    // 0x2126b8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2126b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2126bc:
    // 0x2126bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2126bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2126c0:
    // 0x2126c0: 0x0  nop
    ctx->pc = 0x2126c0u;
    // NOP
label_2126c4:
    // 0x2126c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2126c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2126c8:
    // 0x2126c8: 0x0  nop
    ctx->pc = 0x2126c8u;
    // NOP
label_2126cc:
    // 0x2126cc: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_2126d0:
    if (ctx->pc == 0x2126D0u) {
        ctx->pc = 0x2126D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2126CCu;
        // 0x2126d0: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2126D4u;
        goto label_2126d4;
    }
    ctx->pc = 0x2126CCu;
    {
        const bool branch_taken_0x2126cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2126cc) {
            ctx->pc = 0x2126D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2126CCu;
            // 0x2126d0: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212700u;
            goto label_212700;
        }
    }
    ctx->pc = 0x2126D4u;
label_2126d4:
    // 0x2126d4: 0xc6410764  lwc1        $f1, 0x764($s2)
    ctx->pc = 0x2126d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2126d8:
    // 0x2126d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2126d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2126dc:
    // 0x2126dc: 0x0  nop
    ctx->pc = 0x2126dcu;
    // NOP
label_2126e0:
    // 0x2126e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2126e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2126e4:
    // 0x2126e4: 0x0  nop
    ctx->pc = 0x2126e4u;
    // NOP
label_2126e8:
    // 0x2126e8: 0x4500012b  bc1f        . + 4 + (0x12B << 2)
label_2126ec:
    if (ctx->pc == 0x2126ECu) {
        ctx->pc = 0x2126ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2126E8u;
        // 0x2126ec: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2126F0u;
        goto label_2126f0;
    }
    ctx->pc = 0x2126E8u;
    {
        const bool branch_taken_0x2126e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2126ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2126E8u;
        // 0x2126ec: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2126e8) {
            ctx->pc = 0x212B98u;
            goto label_212b98;
        }
    }
    ctx->pc = 0x2126F0u;
label_2126f0:
    // 0x2126f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2126f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2126f4:
    // 0x2126f4: 0xa24202f7  sb          $v0, 0x2F7($s2)
    ctx->pc = 0x2126f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 2));
label_2126f8:
    // 0x2126f8: 0x1000012a  b           . + 4 + (0x12A << 2)
label_2126fc:
    if (ctx->pc == 0x2126FCu) {
        ctx->pc = 0x2126FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2126F8u;
        // 0x2126fc: 0xa24302f5  sb          $v1, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212700u;
        goto label_212700;
    }
    ctx->pc = 0x2126F8u;
    {
        const bool branch_taken_0x2126f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2126FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2126F8u;
        // 0x2126fc: 0xa24302f5  sb          $v1, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2126f8) {
            ctx->pc = 0x212BA4u;
            goto label_212ba4;
        }
    }
    ctx->pc = 0x212700u;
label_212700:
    // 0x212700: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x212700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_212704:
    // 0x212704: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x212704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_212708:
    // 0x212708: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21270c:
    // 0x21270c: 0xc07e804  jal         func_1FA010
label_212710:
    if (ctx->pc == 0x212710u) {
        ctx->pc = 0x212710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21270Cu;
        // 0x212710: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212714u;
        goto label_212714;
    }
    ctx->pc = 0x21270Cu;
    SET_GPR_U32(ctx, 31, 0x212714u);
    ctx->pc = 0x212710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21270Cu;
    // 0x212710: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x21270Cu, 0x212714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212714u;
label_212714:
    // 0x212714: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x212714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_212718:
    // 0x212718: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x212718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_21271c:
    // 0x21271c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_212720:
    if (ctx->pc == 0x212720u) {
        ctx->pc = 0x212720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21271Cu;
        // 0x212720: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212724u;
        goto label_212724;
    }
    ctx->pc = 0x21271Cu;
    {
        const bool branch_taken_0x21271c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21271Cu;
        // 0x212720: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21271c) {
            ctx->pc = 0x21273Cu;
            goto label_21273c;
        }
    }
    ctx->pc = 0x212724u;
label_212724:
    // 0x212724: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x212724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_212728:
    // 0x212728: 0x24425270  addiu       $v0, $v0, 0x5270
    ctx->pc = 0x212728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21104));
label_21272c:
    // 0x21272c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21272cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_212730:
    // 0x212730: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x212730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_212734:
    // 0x212734: 0x800008  jr          $a0
label_212738:
    if (ctx->pc == 0x212738u) {
        ctx->pc = 0x21273Cu;
        goto label_21273c;
    }
    ctx->pc = 0x212734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21273Cu: goto label_21273c;
            case 0x212750u: goto label_212750;
            case 0x21276Cu: goto label_21276c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212734u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21273Cu;
label_21273c:
    // 0x21273c: 0x8e4316d8  lw          $v1, 0x16D8($s2)
    ctx->pc = 0x21273cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5848)));
label_212740:
    // 0x212740: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_212744:
    if (ctx->pc == 0x212744u) {
        ctx->pc = 0x212744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212740u;
        // 0x212744: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x212748u;
        goto label_212748;
    }
    ctx->pc = 0x212740u;
    {
        const bool branch_taken_0x212740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x212744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212740u;
        // 0x212744: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212740) {
            ctx->pc = 0x212790u;
            goto label_212790;
        }
    }
    ctx->pc = 0x212748u;
label_212748:
    // 0x212748: 0x1000000d  b           . + 4 + (0xD << 2)
label_21274c:
    if (ctx->pc == 0x21274Cu) {
        ctx->pc = 0x212750u;
        goto label_212750;
    }
    ctx->pc = 0x212748u;
    {
        const bool branch_taken_0x212748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212748) {
            ctx->pc = 0x212780u;
            goto label_212780;
        }
    }
    ctx->pc = 0x212750u;
label_212750:
    // 0x212750: 0x8e4216d8  lw          $v0, 0x16D8($s2)
    ctx->pc = 0x212750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5848)));
label_212754:
    // 0x212754: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x212754u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212758:
    // 0x212758: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x212758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_21275c:
    // 0x21275c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_212760:
    if (ctx->pc == 0x212760u) {
        ctx->pc = 0x212760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21275Cu;
        // 0x212760: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x212764u;
        goto label_212764;
    }
    ctx->pc = 0x21275Cu;
    {
        const bool branch_taken_0x21275c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21275Cu;
        // 0x212760: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21275c) {
            ctx->pc = 0x212790u;
            goto label_212790;
        }
    }
    ctx->pc = 0x212764u;
label_212764:
    // 0x212764: 0x10000006  b           . + 4 + (0x6 << 2)
label_212768:
    if (ctx->pc == 0x212768u) {
        ctx->pc = 0x21276Cu;
        goto label_21276c;
    }
    ctx->pc = 0x212764u;
    {
        const bool branch_taken_0x212764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212764) {
            ctx->pc = 0x212780u;
            goto label_212780;
        }
    }
    ctx->pc = 0x21276Cu;
label_21276c:
    // 0x21276c: 0x8e4216d8  lw          $v0, 0x16D8($s2)
    ctx->pc = 0x21276cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5848)));
label_212770:
    // 0x212770: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x212770u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212774:
    // 0x212774: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x212774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_212778:
    // 0x212778: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_21277c:
    if (ctx->pc == 0x21277Cu) {
        ctx->pc = 0x212780u;
        goto label_212780;
    }
    ctx->pc = 0x212778u;
    {
        const bool branch_taken_0x212778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212778) {
            ctx->pc = 0x212798u;
            goto label_212798;
        }
    }
    ctx->pc = 0x212780u;
label_212780:
    // 0x212780: 0x3c01404f  lui         $at, 0x404F
    ctx->pc = 0x212780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16463 << 16));
label_212784:
    // 0x212784: 0x34215c28  ori         $at, $at, 0x5C28
    ctx->pc = 0x212784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23592);
label_212788:
    // 0x212788: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x212788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21278c:
    // 0x21278c: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x21278cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_212790:
    // 0x212790: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_212794:
    if (ctx->pc == 0x212794u) {
        ctx->pc = 0x212794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212790u;
        // 0x212794: 0x2c620006  sltiu       $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x212798u;
        goto label_212798;
    }
    ctx->pc = 0x212790u;
    {
        const bool branch_taken_0x212790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212790u;
        // 0x212794: 0x2c620006  sltiu       $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212790) {
            ctx->pc = 0x2127A4u;
            goto label_2127a4;
        }
    }
    ctx->pc = 0x212798u;
label_212798:
    // 0x212798: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x212798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
label_21279c:
    // 0x21279c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21279cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2127a0:
    // 0x2127a0: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2127a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2127a4:
    // 0x2127a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2127a8:
    if (ctx->pc == 0x2127A8u) {
        ctx->pc = 0x2127A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127A4u;
        // 0x2127a8: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2127ACu;
        goto label_2127ac;
    }
    ctx->pc = 0x2127A4u;
    {
        const bool branch_taken_0x2127a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2127A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127A4u;
        // 0x2127a8: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127a4) {
            ctx->pc = 0x2127B4u;
            goto label_2127b4;
        }
    }
    ctx->pc = 0x2127ACu;
label_2127ac:
    // 0x2127ac: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x2127acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
label_2127b0:
    // 0x2127b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2127b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2127b4:
    // 0x2127b4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_2127b8:
    if (ctx->pc == 0x2127B8u) {
        ctx->pc = 0x2127B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127B4u;
        // 0x2127b8: 0x8e430564  lw          $v1, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2127BCu;
        goto label_2127bc;
    }
    ctx->pc = 0x2127B4u;
    {
        const bool branch_taken_0x2127b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2127b4) {
            ctx->pc = 0x2127B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2127B4u;
            // 0x2127b8: 0x8e430564  lw          $v1, 0x564($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2127E8u;
            goto label_2127e8;
        }
    }
    ctx->pc = 0x2127BCu;
label_2127bc:
    // 0x2127bc: 0xc6410768  lwc1        $f1, 0x768($s2)
    ctx->pc = 0x2127bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2127c0:
    // 0x2127c0: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2127c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2127c4:
    // 0x2127c4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2127c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2127c8:
    // 0x2127c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2127c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2127cc:
    // 0x2127cc: 0x0  nop
    ctx->pc = 0x2127ccu;
    // NOP
label_2127d0:
    // 0x2127d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2127d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2127d4:
    // 0x2127d4: 0x0  nop
    ctx->pc = 0x2127d4u;
    // NOP
label_2127d8:
    // 0x2127d8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2127dc:
    if (ctx->pc == 0x2127DCu) {
        ctx->pc = 0x2127DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127D8u;
        // 0x2127dc: 0xae4005f4  sw          $zero, 0x5F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2127E0u;
        goto label_2127e0;
    }
    ctx->pc = 0x2127D8u;
    {
        const bool branch_taken_0x2127d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2127DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127D8u;
        // 0x2127dc: 0xae4005f4  sw          $zero, 0x5F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127d8) {
            ctx->pc = 0x2127E4u;
            goto label_2127e4;
        }
    }
    ctx->pc = 0x2127E0u;
label_2127e0:
    // 0x2127e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2127e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2127e4:
    // 0x2127e4: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x2127e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_2127e8:
    // 0x2127e8: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x2127e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
label_2127ec:
    // 0x2127ec: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2127f0:
    if (ctx->pc == 0x2127F0u) {
        ctx->pc = 0x2127F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127ECu;
        // 0x2127f0: 0x24020265  addiu       $v0, $zero, 0x265 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2127F4u;
        goto label_2127f4;
    }
    ctx->pc = 0x2127ECu;
    {
        const bool branch_taken_0x2127ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2127F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127ECu;
        // 0x2127f0: 0x24020265  addiu       $v0, $zero, 0x265 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127ec) {
            ctx->pc = 0x212804u;
            goto label_212804;
        }
    }
    ctx->pc = 0x2127F4u;
label_2127f4:
    // 0x2127f4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_2127f8:
    if (ctx->pc == 0x2127F8u) {
        ctx->pc = 0x2127F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127F4u;
        // 0x2127f8: 0xc6400618  lwc1        $f0, 0x618($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2127FCu;
        goto label_2127fc;
    }
    ctx->pc = 0x2127F4u;
    {
        const bool branch_taken_0x2127f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2127F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127F4u;
        // 0x2127f8: 0xc6400618  lwc1        $f0, 0x618($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127f4) {
            ctx->pc = 0x21283Cu;
            goto label_21283c;
        }
    }
    ctx->pc = 0x2127FCu;
label_2127fc:
    // 0x2127fc: 0x10000011  b           . + 4 + (0x11 << 2)
label_212800:
    if (ctx->pc == 0x212800u) {
        ctx->pc = 0x212804u;
        goto label_212804;
    }
    ctx->pc = 0x2127FCu;
    {
        const bool branch_taken_0x2127fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2127fc) {
            ctx->pc = 0x212844u;
            goto label_212844;
        }
    }
    ctx->pc = 0x212804u;
label_212804:
    // 0x212804: 0xc641075c  lwc1        $f1, 0x75C($s2)
    ctx->pc = 0x212804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_212808:
    // 0x212808: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x212808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
label_21280c:
    // 0x21280c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x21280cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_212810:
    // 0x212810: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_212814:
    // 0x212814: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x212814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_212818:
    // 0x212818: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x212818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21281c:
    // 0x21281c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21281cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_212820:
    // 0x212820: 0x0  nop
    ctx->pc = 0x212820u;
    // NOP
label_212824:
    // 0x212824: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_212828:
    if (ctx->pc == 0x212828u) {
        ctx->pc = 0x212828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212824u;
        // 0x212828: 0xc6400618  lwc1        $f0, 0x618($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21282Cu;
        goto label_21282c;
    }
    ctx->pc = 0x212824u;
    {
        const bool branch_taken_0x212824 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212824u;
        // 0x212828: 0xc6400618  lwc1        $f0, 0x618($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x212824) {
            ctx->pc = 0x212844u;
            goto label_212844;
        }
    }
    ctx->pc = 0x21282Cu;
label_21282c:
    // 0x21282c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x21282cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_212830:
    // 0x212830: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x212830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_212834:
    // 0x212834: 0x10000003  b           . + 4 + (0x3 << 2)
label_212838:
    if (ctx->pc == 0x212838u) {
        ctx->pc = 0x21283Cu;
        goto label_21283c;
    }
    ctx->pc = 0x212834u;
    {
        const bool branch_taken_0x212834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212834) {
            ctx->pc = 0x212844u;
            goto label_212844;
        }
    }
    ctx->pc = 0x21283Cu;
label_21283c:
    // 0x21283c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x21283cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_212840:
    // 0x212840: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x212840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_212844:
    // 0x212844: 0x0  nop
    ctx->pc = 0x212844u;
    // NOP
label_212848:
    // 0x212848: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x212848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21284c:
    // 0x21284c: 0x0  nop
    ctx->pc = 0x21284cu;
    // NOP
label_212850:
    // 0x212850: 0x45000052  bc1f        . + 4 + (0x52 << 2)
label_212854:
    if (ctx->pc == 0x212854u) {
        ctx->pc = 0x212858u;
        goto label_212858;
    }
    ctx->pc = 0x212850u;
    {
        const bool branch_taken_0x212850 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x212850) {
            ctx->pc = 0x21299Cu;
            goto label_21299c;
        }
    }
    ctx->pc = 0x212858u;
label_212858:
    // 0x212858: 0x8e4205f4  lw          $v0, 0x5F4($s2)
    ctx->pc = 0x212858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1524)));
label_21285c:
    // 0x21285c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_212860:
    if (ctx->pc == 0x212860u) {
        ctx->pc = 0x212860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21285Cu;
        // 0x212860: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212864u;
        goto label_212864;
    }
    ctx->pc = 0x21285Cu;
    {
        const bool branch_taken_0x21285c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21285Cu;
        // 0x212860: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21285c) {
            ctx->pc = 0x21286Cu;
            goto label_21286c;
        }
    }
    ctx->pc = 0x212864u;
label_212864:
    // 0x212864: 0x10000058  b           . + 4 + (0x58 << 2)
label_212868:
    if (ctx->pc == 0x212868u) {
        ctx->pc = 0x212868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212864u;
        // 0x212868: 0xae4205f4  sw          $v0, 0x5F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21286Cu;
        goto label_21286c;
    }
    ctx->pc = 0x212864u;
    {
        const bool branch_taken_0x212864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212864u;
        // 0x212868: 0xae4205f4  sw          $v0, 0x5F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212864) {
            ctx->pc = 0x2129C8u;
            goto label_2129c8;
        }
    }
    ctx->pc = 0x21286Cu;
label_21286c:
    // 0x21286c: 0x24020211  addiu       $v0, $zero, 0x211
    ctx->pc = 0x21286cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
label_212870:
    // 0x212870: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
label_212874:
    if (ctx->pc == 0x212874u) {
        ctx->pc = 0x212874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212870u;
        // 0x212874: 0x28620211  slti        $v0, $v1, 0x211 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)529) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x212878u;
        goto label_212878;
    }
    ctx->pc = 0x212870u;
    {
        const bool branch_taken_0x212870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x212874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212870u;
        // 0x212874: 0x28620211  slti        $v0, $v1, 0x211 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)529) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212870) {
            ctx->pc = 0x2129C8u;
            goto label_2129c8;
        }
    }
    ctx->pc = 0x212878u;
label_212878:
    // 0x212878: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_21287c:
    if (ctx->pc == 0x21287Cu) {
        ctx->pc = 0x21287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212878u;
        // 0x21287c: 0x8e4400f0  lw          $a0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212880u;
        goto label_212880;
    }
    ctx->pc = 0x212878u;
    {
        const bool branch_taken_0x212878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212878) {
            ctx->pc = 0x21287Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212878u;
            // 0x21287c: 0x8e4400f0  lw          $a0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212898u;
            goto label_212898;
        }
    }
    ctx->pc = 0x212880u;
label_212880:
    // 0x212880: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x212880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
label_212884:
    // 0x212884: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_212888:
    if (ctx->pc == 0x212888u) {
        ctx->pc = 0x212888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212884u;
        // 0x212888: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21288Cu;
        goto label_21288c;
    }
    ctx->pc = 0x212884u;
    {
        const bool branch_taken_0x212884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212884u;
        // 0x212888: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212884) {
            ctx->pc = 0x212894u;
            goto label_212894;
        }
    }
    ctx->pc = 0x21288Cu;
label_21288c:
    // 0x21288c: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
label_212890:
    if (ctx->pc == 0x212890u) {
        ctx->pc = 0x212890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21288Cu;
        // 0x212890: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212894u;
        goto label_212894;
    }
    ctx->pc = 0x21288Cu;
    {
        const bool branch_taken_0x21288c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21288Cu;
        // 0x212890: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21288c) {
            ctx->pc = 0x212B9Cu;
            goto label_212b9c;
        }
    }
    ctx->pc = 0x212894u;
label_212894:
    // 0x212894: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x212894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_212898:
    // 0x212898: 0x264516a0  addiu       $a1, $s2, 0x16A0
    ctx->pc = 0x212898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5792));
label_21289c:
    // 0x21289c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x21289cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2128a0:
    // 0x2128a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2128a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2128a4:
    // 0x2128a4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2128a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2128a8:
    // 0x2128a8: 0xc0b680e  jal         func_2DA038
label_2128ac:
    if (ctx->pc == 0x2128ACu) {
        ctx->pc = 0x2128ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128A8u;
        // 0x2128ac: 0xc64c0104  lwc1        $f12, 0x104($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2128B0u;
        goto label_2128b0;
    }
    ctx->pc = 0x2128A8u;
    SET_GPR_U32(ctx, 31, 0x2128B0u);
    ctx->pc = 0x2128ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2128A8u;
    // 0x2128ac: 0xc64c0104  lwc1        $f12, 0x104($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2128A8u, 0x2128B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2128B0u;
label_2128b0:
    // 0x2128b0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2128b0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2128b4:
    // 0x2128b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2128b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2128b8:
    // 0x2128b8: 0x0  nop
    ctx->pc = 0x2128b8u;
    // NOP
label_2128bc:
    // 0x2128bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2128bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2128c0:
    // 0x2128c0: 0x0  nop
    ctx->pc = 0x2128c0u;
    // NOP
label_2128c4:
    // 0x2128c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2128c8:
    if (ctx->pc == 0x2128C8u) {
        ctx->pc = 0x2128C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128C4u;
        // 0x2128c8: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2128CCu;
        goto label_2128cc;
    }
    ctx->pc = 0x2128C4u;
    {
        const bool branch_taken_0x2128c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2128C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128C4u;
        // 0x2128c8: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2128c4) {
            ctx->pc = 0x2128D0u;
            goto label_2128d0;
        }
    }
    ctx->pc = 0x2128CCu;
label_2128cc:
    // 0x2128cc: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x2128ccu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_2128d0:
    // 0x2128d0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2128d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_2128d4:
    // 0x2128d4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2128d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2128d8:
    // 0x2128d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2128d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2128dc:
    // 0x2128dc: 0x0  nop
    ctx->pc = 0x2128dcu;
    // NOP
label_2128e0:
    // 0x2128e0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2128e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2128e4:
    // 0x2128e4: 0x0  nop
    ctx->pc = 0x2128e4u;
    // NOP
label_2128e8:
    // 0x2128e8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2128ec:
    if (ctx->pc == 0x2128ECu) {
        ctx->pc = 0x2128ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128E8u;
        // 0x2128ec: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2128F0u;
        goto label_2128f0;
    }
    ctx->pc = 0x2128E8u;
    {
        const bool branch_taken_0x2128e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2128ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128E8u;
        // 0x2128ec: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2128e8) {
            ctx->pc = 0x212908u;
            goto label_212908;
        }
    }
    ctx->pc = 0x2128F0u;
label_2128f0:
    // 0x2128f0: 0x8e4316d4  lw          $v1, 0x16D4($s2)
    ctx->pc = 0x2128f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
label_2128f4:
    // 0x2128f4: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x2128f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_2128f8:
    // 0x2128f8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2128f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2128fc:
    // 0x2128fc: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x2128fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_212900:
    // 0x212900: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_212904:
    if (ctx->pc == 0x212904u) {
        ctx->pc = 0x212904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212900u;
        // 0x212904: 0xae4316d4  sw          $v1, 0x16D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212908u;
        goto label_212908;
    }
    ctx->pc = 0x212900u;
    {
        const bool branch_taken_0x212900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212900u;
        // 0x212904: 0xae4316d4  sw          $v1, 0x16D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212900) {
            ctx->pc = 0x212BA4u;
            goto label_212ba4;
        }
    }
    ctx->pc = 0x212908u;
label_212908:
    // 0x212908: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x212908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21290c:
    // 0x21290c: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x21290cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
label_212910:
    // 0x212910: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_212914:
    // 0x212914: 0x0  nop
    ctx->pc = 0x212914u;
    // NOP
label_212918:
    // 0x212918: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x212918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21291c:
    // 0x21291c: 0x0  nop
    ctx->pc = 0x21291cu;
    // NOP
label_212920:
    // 0x212920: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_212924:
    if (ctx->pc == 0x212924u) {
        ctx->pc = 0x212924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212920u;
        // 0x212924: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212928u;
        goto label_212928;
    }
    ctx->pc = 0x212920u;
    {
        const bool branch_taken_0x212920 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x212920) {
            ctx->pc = 0x212924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212920u;
            // 0x212924: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21294Cu;
            goto label_21294c;
        }
    }
    ctx->pc = 0x212928u;
label_212928:
    // 0x212928: 0xc0c73f8  jal         func_31CFE0
label_21292c:
    if (ctx->pc == 0x21292Cu) {
        ctx->pc = 0x212930u;
        goto label_212930;
    }
    ctx->pc = 0x212928u;
    SET_GPR_U32(ctx, 31, 0x212930u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x212928u, 0x212930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212930u;
label_212930:
    // 0x212930: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x212930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_212934:
    // 0x212934: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_212938:
    if (ctx->pc == 0x212938u) {
        ctx->pc = 0x212938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212934u;
        // 0x212938: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21293Cu;
        goto label_21293c;
    }
    ctx->pc = 0x212934u;
    {
        const bool branch_taken_0x212934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212934) {
            ctx->pc = 0x212938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212934u;
            // 0x212938: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21294Cu;
            goto label_21294c;
        }
    }
    ctx->pc = 0x21293Cu;
label_21293c:
    // 0x21293c: 0x8e4216ec  lw          $v0, 0x16EC($s2)
    ctx->pc = 0x21293cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5868)));
label_212940:
    // 0x212940: 0x58400010  blezl       $v0, . + 4 + (0x10 << 2)
label_212944:
    if (ctx->pc == 0x212944u) {
        ctx->pc = 0x212944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212940u;
        // 0x212944: 0x8e4216d4  lw          $v0, 0x16D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212948u;
        goto label_212948;
    }
    ctx->pc = 0x212940u;
    {
        const bool branch_taken_0x212940 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x212940) {
            ctx->pc = 0x212944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212940u;
            // 0x212944: 0x8e4216d4  lw          $v0, 0x16D4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212984u;
            goto label_212984;
        }
    }
    ctx->pc = 0x212948u;
label_212948:
    // 0x212948: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x212948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_21294c:
    // 0x21294c: 0x2442fdb0  addiu       $v0, $v0, -0x250
    ctx->pc = 0x21294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966704));
label_212950:
    // 0x212950: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x212950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_212954:
    // 0x212954: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_212958:
    if (ctx->pc == 0x212958u) {
        ctx->pc = 0x212958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212954u;
        // 0x212958: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21295Cu;
        goto label_21295c;
    }
    ctx->pc = 0x212954u;
    {
        const bool branch_taken_0x212954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212954u;
        // 0x212958: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212954) {
            ctx->pc = 0x212B9Cu;
            goto label_212b9c;
        }
    }
    ctx->pc = 0x21295Cu;
label_21295c:
    // 0x21295c: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x21295cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_212960:
    // 0x212960: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x212960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
label_212964:
    // 0x212964: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_212968:
    // 0x212968: 0x0  nop
    ctx->pc = 0x212968u;
    // NOP
label_21296c:
    // 0x21296c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21296cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_212970:
    // 0x212970: 0x0  nop
    ctx->pc = 0x212970u;
    // NOP
label_212974:
    // 0x212974: 0x45010089  bc1t        . + 4 + (0x89 << 2)
label_212978:
    if (ctx->pc == 0x212978u) {
        ctx->pc = 0x212978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212974u;
        // 0x212978: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21297Cu;
        goto label_21297c;
    }
    ctx->pc = 0x212974u;
    {
        const bool branch_taken_0x212974 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x212978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212974u;
        // 0x212978: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212974) {
            ctx->pc = 0x212B9Cu;
            goto label_212b9c;
        }
    }
    ctx->pc = 0x21297Cu;
label_21297c:
    // 0x21297c: 0x10000087  b           . + 4 + (0x87 << 2)
label_212980:
    if (ctx->pc == 0x212980u) {
        ctx->pc = 0x212980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21297Cu;
        // 0x212980: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212984u;
        goto label_212984;
    }
    ctx->pc = 0x21297Cu;
    {
        const bool branch_taken_0x21297c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21297Cu;
        // 0x212980: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21297c) {
            ctx->pc = 0x212B9Cu;
            goto label_212b9c;
        }
    }
    ctx->pc = 0x212984u;
label_212984:
    // 0x212984: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x212984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_212988:
    // 0x212988: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x212988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21298c:
    // 0x21298c: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
label_212990:
    if (ctx->pc == 0x212990u) {
        ctx->pc = 0x212990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21298Cu;
        // 0x212990: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212994u;
        goto label_212994;
    }
    ctx->pc = 0x21298Cu;
    {
        const bool branch_taken_0x21298c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21298Cu;
        // 0x212990: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21298c) {
            ctx->pc = 0x212B9Cu;
            goto label_212b9c;
        }
    }
    ctx->pc = 0x212994u;
label_212994:
    // 0x212994: 0x10000081  b           . + 4 + (0x81 << 2)
label_212998:
    if (ctx->pc == 0x212998u) {
        ctx->pc = 0x212998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212994u;
        // 0x212998: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21299Cu;
        goto label_21299c;
    }
    ctx->pc = 0x212994u;
    {
        const bool branch_taken_0x212994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212994u;
        // 0x212998: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212994) {
            ctx->pc = 0x212B9Cu;
            goto label_212b9c;
        }
    }
    ctx->pc = 0x21299Cu;
label_21299c:
    // 0x21299c: 0xc0c73f8  jal         func_31CFE0
label_2129a0:
    if (ctx->pc == 0x2129A0u) {
        ctx->pc = 0x2129A4u;
        goto label_2129a4;
    }
    ctx->pc = 0x21299Cu;
    SET_GPR_U32(ctx, 31, 0x2129A4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x21299Cu, 0x2129A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2129A4u;
label_2129a4:
    // 0x2129a4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2129a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2129a8:
    // 0x2129a8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2129a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2129ac:
    // 0x2129ac: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2129acu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2129b0:
    // 0x2129b0: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_2129b4:
    if (ctx->pc == 0x2129B4u) {
        ctx->pc = 0x2129B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129B0u;
        // 0x2129b4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2129B8u;
        goto label_2129b8;
    }
    ctx->pc = 0x2129B0u;
    {
        const bool branch_taken_0x2129b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2129b0) {
            ctx->pc = 0x2129B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2129B0u;
            // 0x2129b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2129B8u;
            goto label_2129b8;
        }
    }
    ctx->pc = 0x2129B8u;
label_2129b8:
    // 0x2129b8: 0x1810  mfhi        $v1
    ctx->pc = 0x2129b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2129bc:
    // 0x2129bc: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2129bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2129c0:
    // 0x2129c0: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x2129c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_2129c4:
    // 0x2129c4: 0xae4305f4  sw          $v1, 0x5F4($s2)
    ctx->pc = 0x2129c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 3));
label_2129c8:
    // 0x2129c8: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2129c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_2129cc:
    // 0x2129cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2129ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2129d0:
    // 0x2129d0: 0xc07e804  jal         func_1FA010
label_2129d4:
    if (ctx->pc == 0x2129D4u) {
        ctx->pc = 0x2129D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129D0u;
        // 0x2129d4: 0x26049b70  addiu       $a0, $s0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2129D8u;
        goto label_2129d8;
    }
    ctx->pc = 0x2129D0u;
    SET_GPR_U32(ctx, 31, 0x2129D8u);
    ctx->pc = 0x2129D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2129D0u;
    // 0x2129d4: 0x26049b70  addiu       $a0, $s0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2129D0u, 0x2129D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2129D8u;
label_2129d8:
    // 0x2129d8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2129d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2129dc:
    // 0x2129dc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2129dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2129e0:
    // 0x2129e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2129e4:
    if (ctx->pc == 0x2129E4u) {
        ctx->pc = 0x2129E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129E0u;
        // 0x2129e4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2129E8u;
        goto label_2129e8;
    }
    ctx->pc = 0x2129E0u;
    {
        const bool branch_taken_0x2129e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2129E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129E0u;
        // 0x2129e4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2129e0) {
            ctx->pc = 0x212A00u;
            goto label_212a00;
        }
    }
    ctx->pc = 0x2129E8u;
label_2129e8:
    // 0x2129e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2129e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2129ec:
    // 0x2129ec: 0x24425290  addiu       $v0, $v0, 0x5290
    ctx->pc = 0x2129ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21136));
label_2129f0:
    // 0x2129f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2129f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2129f4:
    // 0x2129f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2129f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2129f8:
    // 0x2129f8: 0x800008  jr          $a0
label_2129fc:
    if (ctx->pc == 0x2129FCu) {
        ctx->pc = 0x212A00u;
        goto label_212a00;
    }
    ctx->pc = 0x2129F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212A00u: goto label_212a00;
            case 0x212A14u: goto label_212a14;
            case 0x212A20u: goto label_212a20;
            case 0x212A2Cu: goto label_212a2c;
            case 0x212A38u: goto label_212a38;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2129F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x212A00u;
label_212a00:
    // 0x212a00: 0x8e4216d8  lw          $v0, 0x16D8($s2)
    ctx->pc = 0x212a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5848)));
label_212a04:
    // 0x212a04: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_212a08:
    if (ctx->pc == 0x212A08u) {
        ctx->pc = 0x212A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A04u;
        // 0x212a08: 0xc6400618  lwc1        $f0, 0x618($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A0Cu;
        goto label_212a0c;
    }
    ctx->pc = 0x212A04u;
    {
        const bool branch_taken_0x212a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212a04) {
            ctx->pc = 0x212A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212A04u;
            // 0x212a08: 0xc6400618  lwc1        $f0, 0x618($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x212A50u;
            goto label_212a50;
        }
    }
    ctx->pc = 0x212A0Cu;
label_212a0c:
    // 0x212a0c: 0x1000000e  b           . + 4 + (0xE << 2)
label_212a10:
    if (ctx->pc == 0x212A10u) {
        ctx->pc = 0x212A14u;
        goto label_212a14;
    }
    ctx->pc = 0x212A0Cu;
    {
        const bool branch_taken_0x212a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212a0c) {
            ctx->pc = 0x212A48u;
            goto label_212a48;
        }
    }
    ctx->pc = 0x212A14u;
label_212a14:
    // 0x212a14: 0x8e4216d8  lw          $v0, 0x16D8($s2)
    ctx->pc = 0x212a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5848)));
label_212a18:
    // 0x212a18: 0x10000009  b           . + 4 + (0x9 << 2)
label_212a1c:
    if (ctx->pc == 0x212A1Cu) {
        ctx->pc = 0x212A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A18u;
        // 0x212a1c: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A20u;
        goto label_212a20;
    }
    ctx->pc = 0x212A18u;
    {
        const bool branch_taken_0x212a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A18u;
        // 0x212a1c: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a18) {
            ctx->pc = 0x212A40u;
            goto label_212a40;
        }
    }
    ctx->pc = 0x212A20u;
label_212a20:
    // 0x212a20: 0x8e4216d8  lw          $v0, 0x16D8($s2)
    ctx->pc = 0x212a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5848)));
label_212a24:
    // 0x212a24: 0x10000006  b           . + 4 + (0x6 << 2)
label_212a28:
    if (ctx->pc == 0x212A28u) {
        ctx->pc = 0x212A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A24u;
        // 0x212a28: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A2Cu;
        goto label_212a2c;
    }
    ctx->pc = 0x212A24u;
    {
        const bool branch_taken_0x212a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A24u;
        // 0x212a28: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a24) {
            ctx->pc = 0x212A40u;
            goto label_212a40;
        }
    }
    ctx->pc = 0x212A2Cu;
label_212a2c:
    // 0x212a2c: 0x8e4216d8  lw          $v0, 0x16D8($s2)
    ctx->pc = 0x212a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5848)));
label_212a30:
    // 0x212a30: 0x10000003  b           . + 4 + (0x3 << 2)
label_212a34:
    if (ctx->pc == 0x212A34u) {
        ctx->pc = 0x212A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A30u;
        // 0x212a34: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A38u;
        goto label_212a38;
    }
    ctx->pc = 0x212A30u;
    {
        const bool branch_taken_0x212a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A30u;
        // 0x212a34: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a30) {
            ctx->pc = 0x212A40u;
            goto label_212a40;
        }
    }
    ctx->pc = 0x212A38u;
label_212a38:
    // 0x212a38: 0x8e4216d8  lw          $v0, 0x16D8($s2)
    ctx->pc = 0x212a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5848)));
label_212a3c:
    // 0x212a3c: 0x2c420064  sltiu       $v0, $v0, 0x64
    ctx->pc = 0x212a3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_212a40:
    // 0x212a40: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_212a44:
    if (ctx->pc == 0x212A44u) {
        ctx->pc = 0x212A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A40u;
        // 0x212a44: 0xc6400618  lwc1        $f0, 0x618($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A48u;
        goto label_212a48;
    }
    ctx->pc = 0x212A40u;
    {
        const bool branch_taken_0x212a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212a40) {
            ctx->pc = 0x212A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212A40u;
            // 0x212a44: 0xc6400618  lwc1        $f0, 0x618($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x212A50u;
            goto label_212a50;
        }
    }
    ctx->pc = 0x212A48u;
label_212a48:
    // 0x212a48: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x212a48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_212a4c:
    // 0x212a4c: 0xc6400618  lwc1        $f0, 0x618($s2)
    ctx->pc = 0x212a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_212a50:
    // 0x212a50: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x212a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_212a54:
    // 0x212a54: 0x0  nop
    ctx->pc = 0x212a54u;
    // NOP
label_212a58:
    // 0x212a58: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_212a5c:
    if (ctx->pc == 0x212A5Cu) {
        ctx->pc = 0x212A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A58u;
        // 0x212a5c: 0x8e430564  lw          $v1, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A60u;
        goto label_212a60;
    }
    ctx->pc = 0x212A58u;
    {
        const bool branch_taken_0x212a58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A58u;
        // 0x212a5c: 0x8e430564  lw          $v1, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a58) {
            ctx->pc = 0x212A8Cu;
            goto label_212a8c;
        }
    }
    ctx->pc = 0x212A60u;
label_212a60:
    // 0x212a60: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x212a60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
label_212a64:
    // 0x212a64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_212a68:
    if (ctx->pc == 0x212A68u) {
        ctx->pc = 0x212A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A64u;
        // 0x212a68: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A6Cu;
        goto label_212a6c;
    }
    ctx->pc = 0x212A64u;
    {
        const bool branch_taken_0x212a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A64u;
        // 0x212a68: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a64) {
            ctx->pc = 0x212A74u;
            goto label_212a74;
        }
    }
    ctx->pc = 0x212A6Cu;
label_212a6c:
    // 0x212a6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_212a70:
    if (ctx->pc == 0x212A70u) {
        ctx->pc = 0x212A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A6Cu;
        // 0x212a70: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A74u;
        goto label_212a74;
    }
    ctx->pc = 0x212A6Cu;
    {
        const bool branch_taken_0x212a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A6Cu;
        // 0x212a70: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a6c) {
            ctx->pc = 0x212A7Cu;
            goto label_212a7c;
        }
    }
    ctx->pc = 0x212A74u;
label_212a74:
    // 0x212a74: 0x10000049  b           . + 4 + (0x49 << 2)
label_212a78:
    if (ctx->pc == 0x212A78u) {
        ctx->pc = 0x212A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A74u;
        // 0x212a78: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A7Cu;
        goto label_212a7c;
    }
    ctx->pc = 0x212A74u;
    {
        const bool branch_taken_0x212a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A74u;
        // 0x212a78: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a74) {
            ctx->pc = 0x212B9Cu;
            goto label_212b9c;
        }
    }
    ctx->pc = 0x212A7Cu;
label_212a7c:
    // 0x212a7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x212a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212a80:
    // 0x212a80: 0xa24202f7  sb          $v0, 0x2F7($s2)
    ctx->pc = 0x212a80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 2));
label_212a84:
    // 0x212a84: 0x10000047  b           . + 4 + (0x47 << 2)
label_212a88:
    if (ctx->pc == 0x212A88u) {
        ctx->pc = 0x212A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A84u;
        // 0x212a88: 0xa24302f5  sb          $v1, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A8Cu;
        goto label_212a8c;
    }
    ctx->pc = 0x212A84u;
    {
        const bool branch_taken_0x212a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A84u;
        // 0x212a88: 0xa24302f5  sb          $v1, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a84) {
            ctx->pc = 0x212BA4u;
            goto label_212ba4;
        }
    }
    ctx->pc = 0x212A8Cu;
label_212a8c:
    // 0x212a8c: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x212a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
label_212a90:
    // 0x212a90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_212a94:
    if (ctx->pc == 0x212A94u) {
        ctx->pc = 0x212A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A90u;
        // 0x212a94: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A98u;
        goto label_212a98;
    }
    ctx->pc = 0x212A90u;
    {
        const bool branch_taken_0x212a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A90u;
        // 0x212a94: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a90) {
            ctx->pc = 0x212AA0u;
            goto label_212aa0;
        }
    }
    ctx->pc = 0x212A98u;
label_212a98:
    // 0x212a98: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
label_212a9c:
    if (ctx->pc == 0x212A9Cu) {
        ctx->pc = 0x212A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A98u;
        // 0x212a9c: 0x8e430564  lw          $v1, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212AA0u;
        goto label_212aa0;
    }
    ctx->pc = 0x212A98u;
    {
        const bool branch_taken_0x212a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212a98) {
            ctx->pc = 0x212A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212A98u;
            // 0x212a9c: 0x8e430564  lw          $v1, 0x564($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212BB4u;
            goto label_212bb4;
        }
    }
    ctx->pc = 0x212AA0u;
label_212aa0:
    // 0x212aa0: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x212aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
label_212aa4:
    // 0x212aa4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x212aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_212aa8:
    // 0x212aa8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x212aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_212aac:
    // 0x212aac: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_212ab0:
    if (ctx->pc == 0x212AB0u) {
        ctx->pc = 0x212AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AACu;
        // 0x212ab0: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212AB4u;
        goto label_212ab4;
    }
    ctx->pc = 0x212AACu;
    {
        const bool branch_taken_0x212aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AACu;
        // 0x212ab0: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212aac) {
            ctx->pc = 0x212BB0u;
            goto label_212bb0;
        }
    }
    ctx->pc = 0x212AB4u;
label_212ab4:
    // 0x212ab4: 0x8e4317d0  lw          $v1, 0x17D0($s2)
    ctx->pc = 0x212ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6096)));
label_212ab8:
    // 0x212ab8: 0x8c8276b0  lw          $v0, 0x76B0($a0)
    ctx->pc = 0x212ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30384)));
label_212abc:
    // 0x212abc: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x212abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_212ac0:
    // 0x212ac0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x212ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_212ac4:
    // 0x212ac4: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_212ac8:
    if (ctx->pc == 0x212AC8u) {
        ctx->pc = 0x212AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AC4u;
        // 0x212ac8: 0x8e430564  lw          $v1, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212ACCu;
        goto label_212acc;
    }
    ctx->pc = 0x212AC4u;
    {
        const bool branch_taken_0x212ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x212ac4) {
            ctx->pc = 0x212AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212AC4u;
            // 0x212ac8: 0x8e430564  lw          $v1, 0x564($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212BB4u;
            goto label_212bb4;
        }
    }
    ctx->pc = 0x212ACCu;
label_212acc:
    // 0x212acc: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x212accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_212ad0:
    // 0x212ad0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x212ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_212ad4:
    // 0x212ad4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x212ad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_212ad8:
    // 0x212ad8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_212adc:
    // 0x212adc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x212adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_212ae0:
    // 0x212ae0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x212ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_212ae4:
    // 0x212ae4: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x212ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_212ae8:
    // 0x212ae8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x212ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_212aec:
    // 0x212aec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_212af0:
    // 0x212af0: 0xc0c28ac  jal         func_30A2B0
label_212af4:
    if (ctx->pc == 0x212AF4u) {
        ctx->pc = 0x212AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AF0u;
        // 0x212af4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212AF8u;
        goto label_212af8;
    }
    ctx->pc = 0x212AF0u;
    SET_GPR_U32(ctx, 31, 0x212AF8u);
    ctx->pc = 0x212AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AF0u;
    // 0x212af4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x212AF0u, 0x212AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212AF8u;
label_212af8:
    // 0x212af8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x212af8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_212afc:
    // 0x212afc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x212afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_212b00:
    // 0x212b00: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x212b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_212b04:
    // 0x212b04: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x212b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_212b08:
    // 0x212b08: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x212b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_212b0c:
    // 0x212b0c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x212b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_212b10:
    // 0x212b10: 0x262464f0  addiu       $a0, $s1, 0x64F0
    ctx->pc = 0x212b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 25840));
label_212b14:
    // 0x212b14: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x212b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_212b18:
    // 0x212b18: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x212b18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_212b1c:
    // 0x212b1c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x212b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_212b20:
    // 0x212b20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x212b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212b24:
    // 0x212b24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x212b24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212b28:
    // 0x212b28: 0xc0a4404  jal         func_291010
label_212b2c:
    if (ctx->pc == 0x212B2Cu) {
        ctx->pc = 0x212B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B28u;
        // 0x212b2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B30u;
        goto label_212b30;
    }
    ctx->pc = 0x212B28u;
    SET_GPR_U32(ctx, 31, 0x212B30u);
    ctx->pc = 0x212B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B28u;
    // 0x212b2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x212B28u, 0x212B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B30u;
label_212b30:
    // 0x212b30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x212b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212b34:
    // 0x212b34: 0x50a0001f  beql        $a1, $zero, . + 4 + (0x1F << 2)
label_212b38:
    if (ctx->pc == 0x212B38u) {
        ctx->pc = 0x212B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B34u;
        // 0x212b38: 0x8e430564  lw          $v1, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B3Cu;
        goto label_212b3c;
    }
    ctx->pc = 0x212B34u;
    {
        const bool branch_taken_0x212b34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x212b34) {
            ctx->pc = 0x212B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212B34u;
            // 0x212b38: 0x8e430564  lw          $v1, 0x564($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212BB4u;
            goto label_212bb4;
        }
    }
    ctx->pc = 0x212B3Cu;
label_212b3c:
    // 0x212b3c: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x212b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_212b40:
    // 0x212b40: 0x8e5000f0  lw          $s0, 0xF0($s2)
    ctx->pc = 0x212b40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_212b44:
    // 0x212b44: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x212b44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_212b48:
    // 0x212b48: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x212b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_212b4c:
    // 0x212b4c: 0x40f809  jalr        $v0
label_212b50:
    if (ctx->pc == 0x212B50u) {
        ctx->pc = 0x212B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B4Cu;
        // 0x212b50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B54u;
        goto label_212b54;
    }
    ctx->pc = 0x212B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x212B54u);
        ctx->pc = 0x212B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B4Cu;
        // 0x212b50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212B4Cu, 0x212B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212B54u;
label_212b54:
    // 0x212b54: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x212b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_212b58:
    // 0x212b58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_212b5c:
    // 0x212b5c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x212b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_212b60:
    // 0x212b60: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x212b60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_212b64:
    // 0x212b64: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x212b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_212b68:
    // 0x212b68: 0xc0b680e  jal         func_2DA038
label_212b6c:
    if (ctx->pc == 0x212B6Cu) {
        ctx->pc = 0x212B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B68u;
        // 0x212b6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B70u;
        goto label_212b70;
    }
    ctx->pc = 0x212B68u;
    SET_GPR_U32(ctx, 31, 0x212B70u);
    ctx->pc = 0x212B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B68u;
    // 0x212b6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x212B68u, 0x212B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B70u;
label_212b70:
    // 0x212b70: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x212b70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_212b74:
    // 0x212b74: 0x0  nop
    ctx->pc = 0x212b74u;
    // NOP
label_212b78:
    // 0x212b78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x212b78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_212b7c:
    // 0x212b7c: 0x0  nop
    ctx->pc = 0x212b7cu;
    // NOP
label_212b80:
    // 0x212b80: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_212b84:
    if (ctx->pc == 0x212B84u) {
        ctx->pc = 0x212B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B80u;
        // 0x212b84: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B88u;
        goto label_212b88;
    }
    ctx->pc = 0x212B80u;
    {
        const bool branch_taken_0x212b80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B80u;
        // 0x212b84: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b80) {
            ctx->pc = 0x212B98u;
            goto label_212b98;
        }
    }
    ctx->pc = 0x212B88u;
label_212b88:
    // 0x212b88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x212b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212b8c:
    // 0x212b8c: 0xa24202f7  sb          $v0, 0x2F7($s2)
    ctx->pc = 0x212b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 2));
label_212b90:
    // 0x212b90: 0x10000004  b           . + 4 + (0x4 << 2)
label_212b94:
    if (ctx->pc == 0x212B94u) {
        ctx->pc = 0x212B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B90u;
        // 0x212b94: 0xa24302f5  sb          $v1, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B98u;
        goto label_212b98;
    }
    ctx->pc = 0x212B90u;
    {
        const bool branch_taken_0x212b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B90u;
        // 0x212b94: 0xa24302f5  sb          $v1, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b90) {
            ctx->pc = 0x212BA4u;
            goto label_212ba4;
        }
    }
    ctx->pc = 0x212B98u;
label_212b98:
    // 0x212b98: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x212b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_212b9c:
    // 0x212b9c: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x212b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_212ba0:
    // 0x212ba0: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x212ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_212ba4:
    // 0x212ba4: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x212ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
label_212ba8:
    // 0x212ba8: 0x1000000f  b           . + 4 + (0xF << 2)
label_212bac:
    if (ctx->pc == 0x212BACu) {
        ctx->pc = 0x212BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BA8u;
        // 0x212bac: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212BB0u;
        goto label_212bb0;
    }
    ctx->pc = 0x212BA8u;
    {
        const bool branch_taken_0x212ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BA8u;
        // 0x212bac: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ba8) {
            ctx->pc = 0x212BE8u;
            goto label_212be8;
        }
    }
    ctx->pc = 0x212BB0u;
label_212bb0:
    // 0x212bb0: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x212bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_212bb4:
    // 0x212bb4: 0x24020211  addiu       $v0, $zero, 0x211
    ctx->pc = 0x212bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
label_212bb8:
    // 0x212bb8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_212bbc:
    if (ctx->pc == 0x212BBCu) {
        ctx->pc = 0x212BC0u;
        goto label_212bc0;
    }
    ctx->pc = 0x212BB8u;
    {
        const bool branch_taken_0x212bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x212bb8) {
            ctx->pc = 0x212BD0u;
            goto label_212bd0;
        }
    }
    ctx->pc = 0x212BC0u;
label_212bc0:
    // 0x212bc0: 0xc09b9f6  jal         func_26E7D8
label_212bc4:
    if (ctx->pc == 0x212BC4u) {
        ctx->pc = 0x212BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BC0u;
        // 0x212bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212BC8u;
        goto label_212bc8;
    }
    ctx->pc = 0x212BC0u;
    SET_GPR_U32(ctx, 31, 0x212BC8u);
    ctx->pc = 0x212BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212BC0u;
    // 0x212bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E7D8u, 0x212BC0u, 0x212BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212BC8u;
label_212bc8:
    // 0x212bc8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_212bcc:
    if (ctx->pc == 0x212BCCu) {
        ctx->pc = 0x212BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BC8u;
        // 0x212bcc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212BD0u;
        goto label_212bd0;
    }
    ctx->pc = 0x212BC8u;
    {
        const bool branch_taken_0x212bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BC8u;
        // 0x212bcc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212bc8) {
            ctx->pc = 0x212BECu;
            goto label_212bec;
        }
    }
    ctx->pc = 0x212BD0u;
label_212bd0:
    // 0x212bd0: 0xc092eda  jal         func_24BB68
label_212bd4:
    if (ctx->pc == 0x212BD4u) {
        ctx->pc = 0x212BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BD0u;
        // 0x212bd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212BD8u;
        goto label_212bd8;
    }
    ctx->pc = 0x212BD0u;
    SET_GPR_U32(ctx, 31, 0x212BD8u);
    ctx->pc = 0x212BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212BD0u;
    // 0x212bd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BB68u, 0x212BD0u, 0x212BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212BD8u;
label_212bd8:
    // 0x212bd8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_212bdc:
    if (ctx->pc == 0x212BDCu) {
        ctx->pc = 0x212BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BD8u;
        // 0x212bdc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212BE0u;
        goto label_212be0;
    }
    ctx->pc = 0x212BD8u;
    {
        const bool branch_taken_0x212bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BD8u;
        // 0x212bdc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212bd8) {
            ctx->pc = 0x212BECu;
            goto label_212bec;
        }
    }
    ctx->pc = 0x212BE0u;
label_212be0:
    // 0x212be0: 0xc092f68  jal         func_24BDA0
label_212be4:
    if (ctx->pc == 0x212BE4u) {
        ctx->pc = 0x212BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BE0u;
        // 0x212be4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212BE8u;
        goto label_212be8;
    }
    ctx->pc = 0x212BE0u;
    SET_GPR_U32(ctx, 31, 0x212BE8u);
    ctx->pc = 0x212BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212BE0u;
    // 0x212be4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BDA0u, 0x212BE0u, 0x212BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212BE8u;
label_212be8:
    // 0x212be8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x212be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_212bec:
    // 0x212bec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x212becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_212bf0:
    // 0x212bf0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x212bf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_212bf4:
    // 0x212bf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x212bf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_212bf8:
    // 0x212bf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x212bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_212bfc:
    // 0x212bfc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x212bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_212c00:
    // 0x212c00: 0x3e00008  jr          $ra
label_212c04:
    if (ctx->pc == 0x212C04u) {
        ctx->pc = 0x212C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C00u;
        // 0x212c04: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212C08u;
        goto label_fallthrough_0x212c00;
    }
    ctx->pc = 0x212C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C00u;
        // 0x212c04: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x212c00:
    ctx->pc = 0x212C08u;
}
