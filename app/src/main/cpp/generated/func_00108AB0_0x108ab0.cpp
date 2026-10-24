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

// Function: func_00108AB0
// Address: 0x108ab0 - 0x109928
void func_00108AB0_0x108ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00108AB0_0x108ab0");
#endif

    switch (ctx->pc) {
        case 0x108ab0u: goto label_108ab0;
        case 0x108ab4u: goto label_108ab4;
        case 0x108ab8u: goto label_108ab8;
        case 0x108abcu: goto label_108abc;
        case 0x108ac0u: goto label_108ac0;
        case 0x108ac4u: goto label_108ac4;
        case 0x108ac8u: goto label_108ac8;
        case 0x108accu: goto label_108acc;
        case 0x108ad0u: goto label_108ad0;
        case 0x108ad4u: goto label_108ad4;
        case 0x108ad8u: goto label_108ad8;
        case 0x108adcu: goto label_108adc;
        case 0x108ae0u: goto label_108ae0;
        case 0x108ae4u: goto label_108ae4;
        case 0x108ae8u: goto label_108ae8;
        case 0x108aecu: goto label_108aec;
        case 0x108af0u: goto label_108af0;
        case 0x108af4u: goto label_108af4;
        case 0x108af8u: goto label_108af8;
        case 0x108afcu: goto label_108afc;
        case 0x108b00u: goto label_108b00;
        case 0x108b04u: goto label_108b04;
        case 0x108b08u: goto label_108b08;
        case 0x108b0cu: goto label_108b0c;
        case 0x108b10u: goto label_108b10;
        case 0x108b14u: goto label_108b14;
        case 0x108b18u: goto label_108b18;
        case 0x108b1cu: goto label_108b1c;
        case 0x108b20u: goto label_108b20;
        case 0x108b24u: goto label_108b24;
        case 0x108b28u: goto label_108b28;
        case 0x108b2cu: goto label_108b2c;
        case 0x108b30u: goto label_108b30;
        case 0x108b34u: goto label_108b34;
        case 0x108b38u: goto label_108b38;
        case 0x108b3cu: goto label_108b3c;
        case 0x108b40u: goto label_108b40;
        case 0x108b44u: goto label_108b44;
        case 0x108b48u: goto label_108b48;
        case 0x108b4cu: goto label_108b4c;
        case 0x108b50u: goto label_108b50;
        case 0x108b54u: goto label_108b54;
        case 0x108b58u: goto label_108b58;
        case 0x108b5cu: goto label_108b5c;
        case 0x108b60u: goto label_108b60;
        case 0x108b64u: goto label_108b64;
        case 0x108b68u: goto label_108b68;
        case 0x108b6cu: goto label_108b6c;
        case 0x108b70u: goto label_108b70;
        case 0x108b74u: goto label_108b74;
        case 0x108b78u: goto label_108b78;
        case 0x108b7cu: goto label_108b7c;
        case 0x108b80u: goto label_108b80;
        case 0x108b84u: goto label_108b84;
        case 0x108b88u: goto label_108b88;
        case 0x108b8cu: goto label_108b8c;
        case 0x108b90u: goto label_108b90;
        case 0x108b94u: goto label_108b94;
        case 0x108b98u: goto label_108b98;
        case 0x108b9cu: goto label_108b9c;
        case 0x108ba0u: goto label_108ba0;
        case 0x108ba4u: goto label_108ba4;
        case 0x108ba8u: goto label_108ba8;
        case 0x108bacu: goto label_108bac;
        case 0x108bb0u: goto label_108bb0;
        case 0x108bb4u: goto label_108bb4;
        case 0x108bb8u: goto label_108bb8;
        case 0x108bbcu: goto label_108bbc;
        case 0x108bc0u: goto label_108bc0;
        case 0x108bc4u: goto label_108bc4;
        case 0x108bc8u: goto label_108bc8;
        case 0x108bccu: goto label_108bcc;
        case 0x108bd0u: goto label_108bd0;
        case 0x108bd4u: goto label_108bd4;
        case 0x108bd8u: goto label_108bd8;
        case 0x108bdcu: goto label_108bdc;
        case 0x108be0u: goto label_108be0;
        case 0x108be4u: goto label_108be4;
        case 0x108be8u: goto label_108be8;
        case 0x108becu: goto label_108bec;
        case 0x108bf0u: goto label_108bf0;
        case 0x108bf4u: goto label_108bf4;
        case 0x108bf8u: goto label_108bf8;
        case 0x108bfcu: goto label_108bfc;
        case 0x108c00u: goto label_108c00;
        case 0x108c04u: goto label_108c04;
        case 0x108c08u: goto label_108c08;
        case 0x108c0cu: goto label_108c0c;
        case 0x108c10u: goto label_108c10;
        case 0x108c14u: goto label_108c14;
        case 0x108c18u: goto label_108c18;
        case 0x108c1cu: goto label_108c1c;
        case 0x108c20u: goto label_108c20;
        case 0x108c24u: goto label_108c24;
        case 0x108c28u: goto label_108c28;
        case 0x108c2cu: goto label_108c2c;
        case 0x108c30u: goto label_108c30;
        case 0x108c34u: goto label_108c34;
        case 0x108c38u: goto label_108c38;
        case 0x108c3cu: goto label_108c3c;
        case 0x108c40u: goto label_108c40;
        case 0x108c44u: goto label_108c44;
        case 0x108c48u: goto label_108c48;
        case 0x108c4cu: goto label_108c4c;
        case 0x108c50u: goto label_108c50;
        case 0x108c54u: goto label_108c54;
        case 0x108c58u: goto label_108c58;
        case 0x108c5cu: goto label_108c5c;
        case 0x108c60u: goto label_108c60;
        case 0x108c64u: goto label_108c64;
        case 0x108c68u: goto label_108c68;
        case 0x108c6cu: goto label_108c6c;
        case 0x108c70u: goto label_108c70;
        case 0x108c74u: goto label_108c74;
        case 0x108c78u: goto label_108c78;
        case 0x108c7cu: goto label_108c7c;
        case 0x108c80u: goto label_108c80;
        case 0x108c84u: goto label_108c84;
        case 0x108c88u: goto label_108c88;
        case 0x108c8cu: goto label_108c8c;
        case 0x108c90u: goto label_108c90;
        case 0x108c94u: goto label_108c94;
        case 0x108c98u: goto label_108c98;
        case 0x108c9cu: goto label_108c9c;
        case 0x108ca0u: goto label_108ca0;
        case 0x108ca4u: goto label_108ca4;
        case 0x108ca8u: goto label_108ca8;
        case 0x108cacu: goto label_108cac;
        case 0x108cb0u: goto label_108cb0;
        case 0x108cb4u: goto label_108cb4;
        case 0x108cb8u: goto label_108cb8;
        case 0x108cbcu: goto label_108cbc;
        case 0x108cc0u: goto label_108cc0;
        case 0x108cc4u: goto label_108cc4;
        case 0x108cc8u: goto label_108cc8;
        case 0x108cccu: goto label_108ccc;
        case 0x108cd0u: goto label_108cd0;
        case 0x108cd4u: goto label_108cd4;
        case 0x108cd8u: goto label_108cd8;
        case 0x108cdcu: goto label_108cdc;
        case 0x108ce0u: goto label_108ce0;
        case 0x108ce4u: goto label_108ce4;
        case 0x108ce8u: goto label_108ce8;
        case 0x108cecu: goto label_108cec;
        case 0x108cf0u: goto label_108cf0;
        case 0x108cf4u: goto label_108cf4;
        case 0x108cf8u: goto label_108cf8;
        case 0x108cfcu: goto label_108cfc;
        case 0x108d00u: goto label_108d00;
        case 0x108d04u: goto label_108d04;
        case 0x108d08u: goto label_108d08;
        case 0x108d0cu: goto label_108d0c;
        case 0x108d10u: goto label_108d10;
        case 0x108d14u: goto label_108d14;
        case 0x108d18u: goto label_108d18;
        case 0x108d1cu: goto label_108d1c;
        case 0x108d20u: goto label_108d20;
        case 0x108d24u: goto label_108d24;
        case 0x108d28u: goto label_108d28;
        case 0x108d2cu: goto label_108d2c;
        case 0x108d30u: goto label_108d30;
        case 0x108d34u: goto label_108d34;
        case 0x108d38u: goto label_108d38;
        case 0x108d3cu: goto label_108d3c;
        case 0x108d40u: goto label_108d40;
        case 0x108d44u: goto label_108d44;
        case 0x108d48u: goto label_108d48;
        case 0x108d4cu: goto label_108d4c;
        case 0x108d50u: goto label_108d50;
        case 0x108d54u: goto label_108d54;
        case 0x108d58u: goto label_108d58;
        case 0x108d5cu: goto label_108d5c;
        case 0x108d60u: goto label_108d60;
        case 0x108d64u: goto label_108d64;
        case 0x108d68u: goto label_108d68;
        case 0x108d6cu: goto label_108d6c;
        case 0x108d70u: goto label_108d70;
        case 0x108d74u: goto label_108d74;
        case 0x108d78u: goto label_108d78;
        case 0x108d7cu: goto label_108d7c;
        case 0x108d80u: goto label_108d80;
        case 0x108d84u: goto label_108d84;
        case 0x108d88u: goto label_108d88;
        case 0x108d8cu: goto label_108d8c;
        case 0x108d90u: goto label_108d90;
        case 0x108d94u: goto label_108d94;
        case 0x108d98u: goto label_108d98;
        case 0x108d9cu: goto label_108d9c;
        case 0x108da0u: goto label_108da0;
        case 0x108da4u: goto label_108da4;
        case 0x108da8u: goto label_108da8;
        case 0x108dacu: goto label_108dac;
        case 0x108db0u: goto label_108db0;
        case 0x108db4u: goto label_108db4;
        case 0x108db8u: goto label_108db8;
        case 0x108dbcu: goto label_108dbc;
        case 0x108dc0u: goto label_108dc0;
        case 0x108dc4u: goto label_108dc4;
        case 0x108dc8u: goto label_108dc8;
        case 0x108dccu: goto label_108dcc;
        case 0x108dd0u: goto label_108dd0;
        case 0x108dd4u: goto label_108dd4;
        case 0x108dd8u: goto label_108dd8;
        case 0x108ddcu: goto label_108ddc;
        case 0x108de0u: goto label_108de0;
        case 0x108de4u: goto label_108de4;
        case 0x108de8u: goto label_108de8;
        case 0x108decu: goto label_108dec;
        case 0x108df0u: goto label_108df0;
        case 0x108df4u: goto label_108df4;
        case 0x108df8u: goto label_108df8;
        case 0x108dfcu: goto label_108dfc;
        case 0x108e00u: goto label_108e00;
        case 0x108e04u: goto label_108e04;
        case 0x108e08u: goto label_108e08;
        case 0x108e0cu: goto label_108e0c;
        case 0x108e10u: goto label_108e10;
        case 0x108e14u: goto label_108e14;
        case 0x108e18u: goto label_108e18;
        case 0x108e1cu: goto label_108e1c;
        case 0x108e20u: goto label_108e20;
        case 0x108e24u: goto label_108e24;
        case 0x108e28u: goto label_108e28;
        case 0x108e2cu: goto label_108e2c;
        case 0x108e30u: goto label_108e30;
        case 0x108e34u: goto label_108e34;
        case 0x108e38u: goto label_108e38;
        case 0x108e3cu: goto label_108e3c;
        case 0x108e40u: goto label_108e40;
        case 0x108e44u: goto label_108e44;
        case 0x108e48u: goto label_108e48;
        case 0x108e4cu: goto label_108e4c;
        case 0x108e50u: goto label_108e50;
        case 0x108e54u: goto label_108e54;
        case 0x108e58u: goto label_108e58;
        case 0x108e5cu: goto label_108e5c;
        case 0x108e60u: goto label_108e60;
        case 0x108e64u: goto label_108e64;
        case 0x108e68u: goto label_108e68;
        case 0x108e6cu: goto label_108e6c;
        case 0x108e70u: goto label_108e70;
        case 0x108e74u: goto label_108e74;
        case 0x108e78u: goto label_108e78;
        case 0x108e7cu: goto label_108e7c;
        case 0x108e80u: goto label_108e80;
        case 0x108e84u: goto label_108e84;
        case 0x108e88u: goto label_108e88;
        case 0x108e8cu: goto label_108e8c;
        case 0x108e90u: goto label_108e90;
        case 0x108e94u: goto label_108e94;
        case 0x108e98u: goto label_108e98;
        case 0x108e9cu: goto label_108e9c;
        case 0x108ea0u: goto label_108ea0;
        case 0x108ea4u: goto label_108ea4;
        case 0x108ea8u: goto label_108ea8;
        case 0x108eacu: goto label_108eac;
        case 0x108eb0u: goto label_108eb0;
        case 0x108eb4u: goto label_108eb4;
        case 0x108eb8u: goto label_108eb8;
        case 0x108ebcu: goto label_108ebc;
        case 0x108ec0u: goto label_108ec0;
        case 0x108ec4u: goto label_108ec4;
        case 0x108ec8u: goto label_108ec8;
        case 0x108eccu: goto label_108ecc;
        case 0x108ed0u: goto label_108ed0;
        case 0x108ed4u: goto label_108ed4;
        case 0x108ed8u: goto label_108ed8;
        case 0x108edcu: goto label_108edc;
        case 0x108ee0u: goto label_108ee0;
        case 0x108ee4u: goto label_108ee4;
        case 0x108ee8u: goto label_108ee8;
        case 0x108eecu: goto label_108eec;
        case 0x108ef0u: goto label_108ef0;
        case 0x108ef4u: goto label_108ef4;
        case 0x108ef8u: goto label_108ef8;
        case 0x108efcu: goto label_108efc;
        case 0x108f00u: goto label_108f00;
        case 0x108f04u: goto label_108f04;
        case 0x108f08u: goto label_108f08;
        case 0x108f0cu: goto label_108f0c;
        case 0x108f10u: goto label_108f10;
        case 0x108f14u: goto label_108f14;
        case 0x108f18u: goto label_108f18;
        case 0x108f1cu: goto label_108f1c;
        case 0x108f20u: goto label_108f20;
        case 0x108f24u: goto label_108f24;
        case 0x108f28u: goto label_108f28;
        case 0x108f2cu: goto label_108f2c;
        case 0x108f30u: goto label_108f30;
        case 0x108f34u: goto label_108f34;
        case 0x108f38u: goto label_108f38;
        case 0x108f3cu: goto label_108f3c;
        case 0x108f40u: goto label_108f40;
        case 0x108f44u: goto label_108f44;
        case 0x108f48u: goto label_108f48;
        case 0x108f4cu: goto label_108f4c;
        case 0x108f50u: goto label_108f50;
        case 0x108f54u: goto label_108f54;
        case 0x108f58u: goto label_108f58;
        case 0x108f5cu: goto label_108f5c;
        case 0x108f60u: goto label_108f60;
        case 0x108f64u: goto label_108f64;
        case 0x108f68u: goto label_108f68;
        case 0x108f6cu: goto label_108f6c;
        case 0x108f70u: goto label_108f70;
        case 0x108f74u: goto label_108f74;
        case 0x108f78u: goto label_108f78;
        case 0x108f7cu: goto label_108f7c;
        case 0x108f80u: goto label_108f80;
        case 0x108f84u: goto label_108f84;
        case 0x108f88u: goto label_108f88;
        case 0x108f8cu: goto label_108f8c;
        case 0x108f90u: goto label_108f90;
        case 0x108f94u: goto label_108f94;
        case 0x108f98u: goto label_108f98;
        case 0x108f9cu: goto label_108f9c;
        case 0x108fa0u: goto label_108fa0;
        case 0x108fa4u: goto label_108fa4;
        case 0x108fa8u: goto label_108fa8;
        case 0x108facu: goto label_108fac;
        case 0x108fb0u: goto label_108fb0;
        case 0x108fb4u: goto label_108fb4;
        case 0x108fb8u: goto label_108fb8;
        case 0x108fbcu: goto label_108fbc;
        case 0x108fc0u: goto label_108fc0;
        case 0x108fc4u: goto label_108fc4;
        case 0x108fc8u: goto label_108fc8;
        case 0x108fccu: goto label_108fcc;
        case 0x108fd0u: goto label_108fd0;
        case 0x108fd4u: goto label_108fd4;
        case 0x108fd8u: goto label_108fd8;
        case 0x108fdcu: goto label_108fdc;
        case 0x108fe0u: goto label_108fe0;
        case 0x108fe4u: goto label_108fe4;
        case 0x108fe8u: goto label_108fe8;
        case 0x108fecu: goto label_108fec;
        case 0x108ff0u: goto label_108ff0;
        case 0x108ff4u: goto label_108ff4;
        case 0x108ff8u: goto label_108ff8;
        case 0x108ffcu: goto label_108ffc;
        case 0x109000u: goto label_109000;
        case 0x109004u: goto label_109004;
        case 0x109008u: goto label_109008;
        case 0x10900cu: goto label_10900c;
        case 0x109010u: goto label_109010;
        case 0x109014u: goto label_109014;
        case 0x109018u: goto label_109018;
        case 0x10901cu: goto label_10901c;
        case 0x109020u: goto label_109020;
        case 0x109024u: goto label_109024;
        case 0x109028u: goto label_109028;
        case 0x10902cu: goto label_10902c;
        case 0x109030u: goto label_109030;
        case 0x109034u: goto label_109034;
        case 0x109038u: goto label_109038;
        case 0x10903cu: goto label_10903c;
        case 0x109040u: goto label_109040;
        case 0x109044u: goto label_109044;
        case 0x109048u: goto label_109048;
        case 0x10904cu: goto label_10904c;
        case 0x109050u: goto label_109050;
        case 0x109054u: goto label_109054;
        case 0x109058u: goto label_109058;
        case 0x10905cu: goto label_10905c;
        case 0x109060u: goto label_109060;
        case 0x109064u: goto label_109064;
        case 0x109068u: goto label_109068;
        case 0x10906cu: goto label_10906c;
        case 0x109070u: goto label_109070;
        case 0x109074u: goto label_109074;
        case 0x109078u: goto label_109078;
        case 0x10907cu: goto label_10907c;
        case 0x109080u: goto label_109080;
        case 0x109084u: goto label_109084;
        case 0x109088u: goto label_109088;
        case 0x10908cu: goto label_10908c;
        case 0x109090u: goto label_109090;
        case 0x109094u: goto label_109094;
        case 0x109098u: goto label_109098;
        case 0x10909cu: goto label_10909c;
        case 0x1090a0u: goto label_1090a0;
        case 0x1090a4u: goto label_1090a4;
        case 0x1090a8u: goto label_1090a8;
        case 0x1090acu: goto label_1090ac;
        case 0x1090b0u: goto label_1090b0;
        case 0x1090b4u: goto label_1090b4;
        case 0x1090b8u: goto label_1090b8;
        case 0x1090bcu: goto label_1090bc;
        case 0x1090c0u: goto label_1090c0;
        case 0x1090c4u: goto label_1090c4;
        case 0x1090c8u: goto label_1090c8;
        case 0x1090ccu: goto label_1090cc;
        case 0x1090d0u: goto label_1090d0;
        case 0x1090d4u: goto label_1090d4;
        case 0x1090d8u: goto label_1090d8;
        case 0x1090dcu: goto label_1090dc;
        case 0x1090e0u: goto label_1090e0;
        case 0x1090e4u: goto label_1090e4;
        case 0x1090e8u: goto label_1090e8;
        case 0x1090ecu: goto label_1090ec;
        case 0x1090f0u: goto label_1090f0;
        case 0x1090f4u: goto label_1090f4;
        case 0x1090f8u: goto label_1090f8;
        case 0x1090fcu: goto label_1090fc;
        case 0x109100u: goto label_109100;
        case 0x109104u: goto label_109104;
        case 0x109108u: goto label_109108;
        case 0x10910cu: goto label_10910c;
        case 0x109110u: goto label_109110;
        case 0x109114u: goto label_109114;
        case 0x109118u: goto label_109118;
        case 0x10911cu: goto label_10911c;
        case 0x109120u: goto label_109120;
        case 0x109124u: goto label_109124;
        case 0x109128u: goto label_109128;
        case 0x10912cu: goto label_10912c;
        case 0x109130u: goto label_109130;
        case 0x109134u: goto label_109134;
        case 0x109138u: goto label_109138;
        case 0x10913cu: goto label_10913c;
        case 0x109140u: goto label_109140;
        case 0x109144u: goto label_109144;
        case 0x109148u: goto label_109148;
        case 0x10914cu: goto label_10914c;
        case 0x109150u: goto label_109150;
        case 0x109154u: goto label_109154;
        case 0x109158u: goto label_109158;
        case 0x10915cu: goto label_10915c;
        case 0x109160u: goto label_109160;
        case 0x109164u: goto label_109164;
        case 0x109168u: goto label_109168;
        case 0x10916cu: goto label_10916c;
        case 0x109170u: goto label_109170;
        case 0x109174u: goto label_109174;
        case 0x109178u: goto label_109178;
        case 0x10917cu: goto label_10917c;
        case 0x109180u: goto label_109180;
        case 0x109184u: goto label_109184;
        case 0x109188u: goto label_109188;
        case 0x10918cu: goto label_10918c;
        case 0x109190u: goto label_109190;
        case 0x109194u: goto label_109194;
        case 0x109198u: goto label_109198;
        case 0x10919cu: goto label_10919c;
        case 0x1091a0u: goto label_1091a0;
        case 0x1091a4u: goto label_1091a4;
        case 0x1091a8u: goto label_1091a8;
        case 0x1091acu: goto label_1091ac;
        case 0x1091b0u: goto label_1091b0;
        case 0x1091b4u: goto label_1091b4;
        case 0x1091b8u: goto label_1091b8;
        case 0x1091bcu: goto label_1091bc;
        case 0x1091c0u: goto label_1091c0;
        case 0x1091c4u: goto label_1091c4;
        case 0x1091c8u: goto label_1091c8;
        case 0x1091ccu: goto label_1091cc;
        case 0x1091d0u: goto label_1091d0;
        case 0x1091d4u: goto label_1091d4;
        case 0x1091d8u: goto label_1091d8;
        case 0x1091dcu: goto label_1091dc;
        case 0x1091e0u: goto label_1091e0;
        case 0x1091e4u: goto label_1091e4;
        case 0x1091e8u: goto label_1091e8;
        case 0x1091ecu: goto label_1091ec;
        case 0x1091f0u: goto label_1091f0;
        case 0x1091f4u: goto label_1091f4;
        case 0x1091f8u: goto label_1091f8;
        case 0x1091fcu: goto label_1091fc;
        case 0x109200u: goto label_109200;
        case 0x109204u: goto label_109204;
        case 0x109208u: goto label_109208;
        case 0x10920cu: goto label_10920c;
        case 0x109210u: goto label_109210;
        case 0x109214u: goto label_109214;
        case 0x109218u: goto label_109218;
        case 0x10921cu: goto label_10921c;
        case 0x109220u: goto label_109220;
        case 0x109224u: goto label_109224;
        case 0x109228u: goto label_109228;
        case 0x10922cu: goto label_10922c;
        case 0x109230u: goto label_109230;
        case 0x109234u: goto label_109234;
        case 0x109238u: goto label_109238;
        case 0x10923cu: goto label_10923c;
        case 0x109240u: goto label_109240;
        case 0x109244u: goto label_109244;
        case 0x109248u: goto label_109248;
        case 0x10924cu: goto label_10924c;
        case 0x109250u: goto label_109250;
        case 0x109254u: goto label_109254;
        case 0x109258u: goto label_109258;
        case 0x10925cu: goto label_10925c;
        case 0x109260u: goto label_109260;
        case 0x109264u: goto label_109264;
        case 0x109268u: goto label_109268;
        case 0x10926cu: goto label_10926c;
        case 0x109270u: goto label_109270;
        case 0x109274u: goto label_109274;
        case 0x109278u: goto label_109278;
        case 0x10927cu: goto label_10927c;
        case 0x109280u: goto label_109280;
        case 0x109284u: goto label_109284;
        case 0x109288u: goto label_109288;
        case 0x10928cu: goto label_10928c;
        case 0x109290u: goto label_109290;
        case 0x109294u: goto label_109294;
        case 0x109298u: goto label_109298;
        case 0x10929cu: goto label_10929c;
        case 0x1092a0u: goto label_1092a0;
        case 0x1092a4u: goto label_1092a4;
        case 0x1092a8u: goto label_1092a8;
        case 0x1092acu: goto label_1092ac;
        case 0x1092b0u: goto label_1092b0;
        case 0x1092b4u: goto label_1092b4;
        case 0x1092b8u: goto label_1092b8;
        case 0x1092bcu: goto label_1092bc;
        case 0x1092c0u: goto label_1092c0;
        case 0x1092c4u: goto label_1092c4;
        case 0x1092c8u: goto label_1092c8;
        case 0x1092ccu: goto label_1092cc;
        case 0x1092d0u: goto label_1092d0;
        case 0x1092d4u: goto label_1092d4;
        case 0x1092d8u: goto label_1092d8;
        case 0x1092dcu: goto label_1092dc;
        case 0x1092e0u: goto label_1092e0;
        case 0x1092e4u: goto label_1092e4;
        case 0x1092e8u: goto label_1092e8;
        case 0x1092ecu: goto label_1092ec;
        case 0x1092f0u: goto label_1092f0;
        case 0x1092f4u: goto label_1092f4;
        case 0x1092f8u: goto label_1092f8;
        case 0x1092fcu: goto label_1092fc;
        case 0x109300u: goto label_109300;
        case 0x109304u: goto label_109304;
        case 0x109308u: goto label_109308;
        case 0x10930cu: goto label_10930c;
        case 0x109310u: goto label_109310;
        case 0x109314u: goto label_109314;
        case 0x109318u: goto label_109318;
        case 0x10931cu: goto label_10931c;
        case 0x109320u: goto label_109320;
        case 0x109324u: goto label_109324;
        case 0x109328u: goto label_109328;
        case 0x10932cu: goto label_10932c;
        case 0x109330u: goto label_109330;
        case 0x109334u: goto label_109334;
        case 0x109338u: goto label_109338;
        case 0x10933cu: goto label_10933c;
        case 0x109340u: goto label_109340;
        case 0x109344u: goto label_109344;
        case 0x109348u: goto label_109348;
        case 0x10934cu: goto label_10934c;
        case 0x109350u: goto label_109350;
        case 0x109354u: goto label_109354;
        case 0x109358u: goto label_109358;
        case 0x10935cu: goto label_10935c;
        case 0x109360u: goto label_109360;
        case 0x109364u: goto label_109364;
        case 0x109368u: goto label_109368;
        case 0x10936cu: goto label_10936c;
        case 0x109370u: goto label_109370;
        case 0x109374u: goto label_109374;
        case 0x109378u: goto label_109378;
        case 0x10937cu: goto label_10937c;
        case 0x109380u: goto label_109380;
        case 0x109384u: goto label_109384;
        case 0x109388u: goto label_109388;
        case 0x10938cu: goto label_10938c;
        case 0x109390u: goto label_109390;
        case 0x109394u: goto label_109394;
        case 0x109398u: goto label_109398;
        case 0x10939cu: goto label_10939c;
        case 0x1093a0u: goto label_1093a0;
        case 0x1093a4u: goto label_1093a4;
        case 0x1093a8u: goto label_1093a8;
        case 0x1093acu: goto label_1093ac;
        case 0x1093b0u: goto label_1093b0;
        case 0x1093b4u: goto label_1093b4;
        case 0x1093b8u: goto label_1093b8;
        case 0x1093bcu: goto label_1093bc;
        case 0x1093c0u: goto label_1093c0;
        case 0x1093c4u: goto label_1093c4;
        case 0x1093c8u: goto label_1093c8;
        case 0x1093ccu: goto label_1093cc;
        case 0x1093d0u: goto label_1093d0;
        case 0x1093d4u: goto label_1093d4;
        case 0x1093d8u: goto label_1093d8;
        case 0x1093dcu: goto label_1093dc;
        case 0x1093e0u: goto label_1093e0;
        case 0x1093e4u: goto label_1093e4;
        case 0x1093e8u: goto label_1093e8;
        case 0x1093ecu: goto label_1093ec;
        case 0x1093f0u: goto label_1093f0;
        case 0x1093f4u: goto label_1093f4;
        case 0x1093f8u: goto label_1093f8;
        case 0x1093fcu: goto label_1093fc;
        case 0x109400u: goto label_109400;
        case 0x109404u: goto label_109404;
        case 0x109408u: goto label_109408;
        case 0x10940cu: goto label_10940c;
        case 0x109410u: goto label_109410;
        case 0x109414u: goto label_109414;
        case 0x109418u: goto label_109418;
        case 0x10941cu: goto label_10941c;
        case 0x109420u: goto label_109420;
        case 0x109424u: goto label_109424;
        case 0x109428u: goto label_109428;
        case 0x10942cu: goto label_10942c;
        case 0x109430u: goto label_109430;
        case 0x109434u: goto label_109434;
        case 0x109438u: goto label_109438;
        case 0x10943cu: goto label_10943c;
        case 0x109440u: goto label_109440;
        case 0x109444u: goto label_109444;
        case 0x109448u: goto label_109448;
        case 0x10944cu: goto label_10944c;
        case 0x109450u: goto label_109450;
        case 0x109454u: goto label_109454;
        case 0x109458u: goto label_109458;
        case 0x10945cu: goto label_10945c;
        case 0x109460u: goto label_109460;
        case 0x109464u: goto label_109464;
        case 0x109468u: goto label_109468;
        case 0x10946cu: goto label_10946c;
        case 0x109470u: goto label_109470;
        case 0x109474u: goto label_109474;
        case 0x109478u: goto label_109478;
        case 0x10947cu: goto label_10947c;
        case 0x109480u: goto label_109480;
        case 0x109484u: goto label_109484;
        case 0x109488u: goto label_109488;
        case 0x10948cu: goto label_10948c;
        case 0x109490u: goto label_109490;
        case 0x109494u: goto label_109494;
        case 0x109498u: goto label_109498;
        case 0x10949cu: goto label_10949c;
        case 0x1094a0u: goto label_1094a0;
        case 0x1094a4u: goto label_1094a4;
        case 0x1094a8u: goto label_1094a8;
        case 0x1094acu: goto label_1094ac;
        case 0x1094b0u: goto label_1094b0;
        case 0x1094b4u: goto label_1094b4;
        case 0x1094b8u: goto label_1094b8;
        case 0x1094bcu: goto label_1094bc;
        case 0x1094c0u: goto label_1094c0;
        case 0x1094c4u: goto label_1094c4;
        case 0x1094c8u: goto label_1094c8;
        case 0x1094ccu: goto label_1094cc;
        case 0x1094d0u: goto label_1094d0;
        case 0x1094d4u: goto label_1094d4;
        case 0x1094d8u: goto label_1094d8;
        case 0x1094dcu: goto label_1094dc;
        case 0x1094e0u: goto label_1094e0;
        case 0x1094e4u: goto label_1094e4;
        case 0x1094e8u: goto label_1094e8;
        case 0x1094ecu: goto label_1094ec;
        case 0x1094f0u: goto label_1094f0;
        case 0x1094f4u: goto label_1094f4;
        case 0x1094f8u: goto label_1094f8;
        case 0x1094fcu: goto label_1094fc;
        case 0x109500u: goto label_109500;
        case 0x109504u: goto label_109504;
        case 0x109508u: goto label_109508;
        case 0x10950cu: goto label_10950c;
        case 0x109510u: goto label_109510;
        case 0x109514u: goto label_109514;
        case 0x109518u: goto label_109518;
        case 0x10951cu: goto label_10951c;
        case 0x109520u: goto label_109520;
        case 0x109524u: goto label_109524;
        case 0x109528u: goto label_109528;
        case 0x10952cu: goto label_10952c;
        case 0x109530u: goto label_109530;
        case 0x109534u: goto label_109534;
        case 0x109538u: goto label_109538;
        case 0x10953cu: goto label_10953c;
        case 0x109540u: goto label_109540;
        case 0x109544u: goto label_109544;
        case 0x109548u: goto label_109548;
        case 0x10954cu: goto label_10954c;
        case 0x109550u: goto label_109550;
        case 0x109554u: goto label_109554;
        case 0x109558u: goto label_109558;
        case 0x10955cu: goto label_10955c;
        case 0x109560u: goto label_109560;
        case 0x109564u: goto label_109564;
        case 0x109568u: goto label_109568;
        case 0x10956cu: goto label_10956c;
        case 0x109570u: goto label_109570;
        case 0x109574u: goto label_109574;
        case 0x109578u: goto label_109578;
        case 0x10957cu: goto label_10957c;
        case 0x109580u: goto label_109580;
        case 0x109584u: goto label_109584;
        case 0x109588u: goto label_109588;
        case 0x10958cu: goto label_10958c;
        case 0x109590u: goto label_109590;
        case 0x109594u: goto label_109594;
        case 0x109598u: goto label_109598;
        case 0x10959cu: goto label_10959c;
        case 0x1095a0u: goto label_1095a0;
        case 0x1095a4u: goto label_1095a4;
        case 0x1095a8u: goto label_1095a8;
        case 0x1095acu: goto label_1095ac;
        case 0x1095b0u: goto label_1095b0;
        case 0x1095b4u: goto label_1095b4;
        case 0x1095b8u: goto label_1095b8;
        case 0x1095bcu: goto label_1095bc;
        case 0x1095c0u: goto label_1095c0;
        case 0x1095c4u: goto label_1095c4;
        case 0x1095c8u: goto label_1095c8;
        case 0x1095ccu: goto label_1095cc;
        case 0x1095d0u: goto label_1095d0;
        case 0x1095d4u: goto label_1095d4;
        case 0x1095d8u: goto label_1095d8;
        case 0x1095dcu: goto label_1095dc;
        case 0x1095e0u: goto label_1095e0;
        case 0x1095e4u: goto label_1095e4;
        case 0x1095e8u: goto label_1095e8;
        case 0x1095ecu: goto label_1095ec;
        case 0x1095f0u: goto label_1095f0;
        case 0x1095f4u: goto label_1095f4;
        case 0x1095f8u: goto label_1095f8;
        case 0x1095fcu: goto label_1095fc;
        case 0x109600u: goto label_109600;
        case 0x109604u: goto label_109604;
        case 0x109608u: goto label_109608;
        case 0x10960cu: goto label_10960c;
        case 0x109610u: goto label_109610;
        case 0x109614u: goto label_109614;
        case 0x109618u: goto label_109618;
        case 0x10961cu: goto label_10961c;
        case 0x109620u: goto label_109620;
        case 0x109624u: goto label_109624;
        case 0x109628u: goto label_109628;
        case 0x10962cu: goto label_10962c;
        case 0x109630u: goto label_109630;
        case 0x109634u: goto label_109634;
        case 0x109638u: goto label_109638;
        case 0x10963cu: goto label_10963c;
        case 0x109640u: goto label_109640;
        case 0x109644u: goto label_109644;
        case 0x109648u: goto label_109648;
        case 0x10964cu: goto label_10964c;
        case 0x109650u: goto label_109650;
        case 0x109654u: goto label_109654;
        case 0x109658u: goto label_109658;
        case 0x10965cu: goto label_10965c;
        case 0x109660u: goto label_109660;
        case 0x109664u: goto label_109664;
        case 0x109668u: goto label_109668;
        case 0x10966cu: goto label_10966c;
        case 0x109670u: goto label_109670;
        case 0x109674u: goto label_109674;
        case 0x109678u: goto label_109678;
        case 0x10967cu: goto label_10967c;
        case 0x109680u: goto label_109680;
        case 0x109684u: goto label_109684;
        case 0x109688u: goto label_109688;
        case 0x10968cu: goto label_10968c;
        case 0x109690u: goto label_109690;
        case 0x109694u: goto label_109694;
        case 0x109698u: goto label_109698;
        case 0x10969cu: goto label_10969c;
        case 0x1096a0u: goto label_1096a0;
        case 0x1096a4u: goto label_1096a4;
        case 0x1096a8u: goto label_1096a8;
        case 0x1096acu: goto label_1096ac;
        case 0x1096b0u: goto label_1096b0;
        case 0x1096b4u: goto label_1096b4;
        case 0x1096b8u: goto label_1096b8;
        case 0x1096bcu: goto label_1096bc;
        case 0x1096c0u: goto label_1096c0;
        case 0x1096c4u: goto label_1096c4;
        case 0x1096c8u: goto label_1096c8;
        case 0x1096ccu: goto label_1096cc;
        case 0x1096d0u: goto label_1096d0;
        case 0x1096d4u: goto label_1096d4;
        case 0x1096d8u: goto label_1096d8;
        case 0x1096dcu: goto label_1096dc;
        case 0x1096e0u: goto label_1096e0;
        case 0x1096e4u: goto label_1096e4;
        case 0x1096e8u: goto label_1096e8;
        case 0x1096ecu: goto label_1096ec;
        case 0x1096f0u: goto label_1096f0;
        case 0x1096f4u: goto label_1096f4;
        case 0x1096f8u: goto label_1096f8;
        case 0x1096fcu: goto label_1096fc;
        case 0x109700u: goto label_109700;
        case 0x109704u: goto label_109704;
        case 0x109708u: goto label_109708;
        case 0x10970cu: goto label_10970c;
        case 0x109710u: goto label_109710;
        case 0x109714u: goto label_109714;
        case 0x109718u: goto label_109718;
        case 0x10971cu: goto label_10971c;
        case 0x109720u: goto label_109720;
        case 0x109724u: goto label_109724;
        case 0x109728u: goto label_109728;
        case 0x10972cu: goto label_10972c;
        case 0x109730u: goto label_109730;
        case 0x109734u: goto label_109734;
        case 0x109738u: goto label_109738;
        case 0x10973cu: goto label_10973c;
        case 0x109740u: goto label_109740;
        case 0x109744u: goto label_109744;
        case 0x109748u: goto label_109748;
        case 0x10974cu: goto label_10974c;
        case 0x109750u: goto label_109750;
        case 0x109754u: goto label_109754;
        case 0x109758u: goto label_109758;
        case 0x10975cu: goto label_10975c;
        case 0x109760u: goto label_109760;
        case 0x109764u: goto label_109764;
        case 0x109768u: goto label_109768;
        case 0x10976cu: goto label_10976c;
        case 0x109770u: goto label_109770;
        case 0x109774u: goto label_109774;
        case 0x109778u: goto label_109778;
        case 0x10977cu: goto label_10977c;
        case 0x109780u: goto label_109780;
        case 0x109784u: goto label_109784;
        case 0x109788u: goto label_109788;
        case 0x10978cu: goto label_10978c;
        case 0x109790u: goto label_109790;
        case 0x109794u: goto label_109794;
        case 0x109798u: goto label_109798;
        case 0x10979cu: goto label_10979c;
        case 0x1097a0u: goto label_1097a0;
        case 0x1097a4u: goto label_1097a4;
        case 0x1097a8u: goto label_1097a8;
        case 0x1097acu: goto label_1097ac;
        case 0x1097b0u: goto label_1097b0;
        case 0x1097b4u: goto label_1097b4;
        case 0x1097b8u: goto label_1097b8;
        case 0x1097bcu: goto label_1097bc;
        case 0x1097c0u: goto label_1097c0;
        case 0x1097c4u: goto label_1097c4;
        case 0x1097c8u: goto label_1097c8;
        case 0x1097ccu: goto label_1097cc;
        case 0x1097d0u: goto label_1097d0;
        case 0x1097d4u: goto label_1097d4;
        case 0x1097d8u: goto label_1097d8;
        case 0x1097dcu: goto label_1097dc;
        case 0x1097e0u: goto label_1097e0;
        case 0x1097e4u: goto label_1097e4;
        case 0x1097e8u: goto label_1097e8;
        case 0x1097ecu: goto label_1097ec;
        case 0x1097f0u: goto label_1097f0;
        case 0x1097f4u: goto label_1097f4;
        case 0x1097f8u: goto label_1097f8;
        case 0x1097fcu: goto label_1097fc;
        case 0x109800u: goto label_109800;
        case 0x109804u: goto label_109804;
        case 0x109808u: goto label_109808;
        case 0x10980cu: goto label_10980c;
        case 0x109810u: goto label_109810;
        case 0x109814u: goto label_109814;
        case 0x109818u: goto label_109818;
        case 0x10981cu: goto label_10981c;
        case 0x109820u: goto label_109820;
        case 0x109824u: goto label_109824;
        case 0x109828u: goto label_109828;
        case 0x10982cu: goto label_10982c;
        case 0x109830u: goto label_109830;
        case 0x109834u: goto label_109834;
        case 0x109838u: goto label_109838;
        case 0x10983cu: goto label_10983c;
        case 0x109840u: goto label_109840;
        case 0x109844u: goto label_109844;
        case 0x109848u: goto label_109848;
        case 0x10984cu: goto label_10984c;
        case 0x109850u: goto label_109850;
        case 0x109854u: goto label_109854;
        case 0x109858u: goto label_109858;
        case 0x10985cu: goto label_10985c;
        case 0x109860u: goto label_109860;
        case 0x109864u: goto label_109864;
        case 0x109868u: goto label_109868;
        case 0x10986cu: goto label_10986c;
        case 0x109870u: goto label_109870;
        case 0x109874u: goto label_109874;
        case 0x109878u: goto label_109878;
        case 0x10987cu: goto label_10987c;
        case 0x109880u: goto label_109880;
        case 0x109884u: goto label_109884;
        case 0x109888u: goto label_109888;
        case 0x10988cu: goto label_10988c;
        case 0x109890u: goto label_109890;
        case 0x109894u: goto label_109894;
        case 0x109898u: goto label_109898;
        case 0x10989cu: goto label_10989c;
        case 0x1098a0u: goto label_1098a0;
        case 0x1098a4u: goto label_1098a4;
        case 0x1098a8u: goto label_1098a8;
        case 0x1098acu: goto label_1098ac;
        case 0x1098b0u: goto label_1098b0;
        case 0x1098b4u: goto label_1098b4;
        case 0x1098b8u: goto label_1098b8;
        case 0x1098bcu: goto label_1098bc;
        case 0x1098c0u: goto label_1098c0;
        case 0x1098c4u: goto label_1098c4;
        case 0x1098c8u: goto label_1098c8;
        case 0x1098ccu: goto label_1098cc;
        case 0x1098d0u: goto label_1098d0;
        case 0x1098d4u: goto label_1098d4;
        case 0x1098d8u: goto label_1098d8;
        case 0x1098dcu: goto label_1098dc;
        case 0x1098e0u: goto label_1098e0;
        case 0x1098e4u: goto label_1098e4;
        case 0x1098e8u: goto label_1098e8;
        case 0x1098ecu: goto label_1098ec;
        case 0x1098f0u: goto label_1098f0;
        case 0x1098f4u: goto label_1098f4;
        case 0x1098f8u: goto label_1098f8;
        case 0x1098fcu: goto label_1098fc;
        case 0x109900u: goto label_109900;
        case 0x109904u: goto label_109904;
        case 0x109908u: goto label_109908;
        case 0x10990cu: goto label_10990c;
        case 0x109910u: goto label_109910;
        case 0x109914u: goto label_109914;
        case 0x109918u: goto label_109918;
        case 0x10991cu: goto label_10991c;
        case 0x109920u: goto label_109920;
        case 0x109924u: goto label_109924;
        default: break;
    }

    ctx->pc = 0x108ab0u;

label_108ab0:
    // 0x108ab0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x108ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_108ab4:
    // 0x108ab4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x108ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_108ab8:
    // 0x108ab8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x108ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_108abc:
    // 0x108abc: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x108abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_108ac0:
    // 0x108ac0: 0x24707a78  addiu       $s0, $v1, 0x7A78
    ctx->pc = 0x108ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 31352));
label_108ac4:
    // 0x108ac4: 0x8c627a78  lw          $v0, 0x7A78($v1)
    ctx->pc = 0x108ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31352)));
label_108ac8:
    // 0x108ac8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x108ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_108acc:
    // 0x108acc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x108accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_108ad0:
    // 0x108ad0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x108ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_108ad4:
    // 0x108ad4: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x108ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_108ad8:
    // 0x108ad8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x108ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_108adc:
    // 0x108adc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x108adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_108ae0:
    // 0x108ae0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x108ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_108ae4:
    // 0x108ae4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x108ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_108ae8:
    // 0x108ae8: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x108ae8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_108aec:
    // 0x108aec: 0x4400380  bltz        $v0, . + 4 + (0x380 << 2)
label_108af0:
    if (ctx->pc == 0x108AF0u) {
        ctx->pc = 0x108AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AECu;
        // 0x108af0: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108AF4u;
        goto label_108af4;
    }
    ctx->pc = 0x108AECu;
    {
        const bool branch_taken_0x108aec = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x108AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AECu;
        // 0x108af0: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108aec) {
            ctx->pc = 0x1098F0u;
            goto label_1098f0;
        }
    }
    ctx->pc = 0x108AF4u;
label_108af4:
    // 0x108af4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x108af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_108af8:
    // 0x108af8: 0xc07f8d6  jal         func_1FE358
label_108afc:
    if (ctx->pc == 0x108AFCu) {
        ctx->pc = 0x108AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AF8u;
        // 0x108afc: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108B00u;
        goto label_108b00;
    }
    ctx->pc = 0x108AF8u;
    SET_GPR_U32(ctx, 31, 0x108B00u);
    ctx->pc = 0x108AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108AF8u;
    // 0x108afc: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE358u, 0x108AF8u, 0x108B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B00u;
label_108b00:
    // 0x108b00: 0x5440037c  bnel        $v0, $zero, . + 4 + (0x37C << 2)
label_108b04:
    if (ctx->pc == 0x108B04u) {
        ctx->pc = 0x108B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B00u;
        // 0x108b04: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108B08u;
        goto label_108b08;
    }
    ctx->pc = 0x108B00u;
    {
        const bool branch_taken_0x108b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108b00) {
            ctx->pc = 0x108B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108B00u;
            // 0x108b04: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1098F4u;
            goto label_1098f4;
        }
    }
    ctx->pc = 0x108B08u;
label_108b08:
    // 0x108b08: 0x2604fa28  addiu       $a0, $s0, -0x5D8
    ctx->pc = 0x108b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965800));
label_108b0c:
    // 0x108b0c: 0xc634060c  lwc1        $f20, 0x60C($s1)
    ctx->pc = 0x108b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_108b10:
    // 0x108b10: 0x808301f0  lb          $v1, 0x1F0($a0)
    ctx->pc = 0x108b10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 496)));
label_108b14:
    // 0x108b14: 0x808201f1  lb          $v0, 0x1F1($a0)
    ctx->pc = 0x108b14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 497)));
label_108b18:
    // 0x108b18: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x108b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_108b1c:
    // 0x108b1c: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x108b1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_108b20:
    // 0x108b20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x108b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_108b24:
    // 0x108b24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x108b24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108b28:
    // 0x108b28: 0x0  nop
    ctx->pc = 0x108b28u;
    // NOP
label_108b2c:
    // 0x108b2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x108b2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_108b30:
    // 0x108b30: 0xe620060c  swc1        $f0, 0x60C($s1)
    ctx->pc = 0x108b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1548), bits); }
label_108b34:
    // 0x108b34: 0x808201f0  lb          $v0, 0x1F0($a0)
    ctx->pc = 0x108b34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 496)));
label_108b38:
    // 0x108b38: 0x808301f1  lb          $v1, 0x1F1($a0)
    ctx->pc = 0x108b38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 497)));
label_108b3c:
    // 0x108b3c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x108b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_108b40:
    // 0x108b40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x108b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_108b44:
    // 0x108b44: 0x0  nop
    ctx->pc = 0x108b44u;
    // NOP
label_108b48:
    // 0x108b48: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x108b48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_108b4c:
    // 0x108b4c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x108b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_108b50:
    // 0x108b50: 0x0  nop
    ctx->pc = 0x108b50u;
    // NOP
label_108b54:
    // 0x108b54: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x108b54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_108b58:
    // 0x108b58: 0xc07e060  jal         func_1F8180
label_108b5c:
    if (ctx->pc == 0x108B5Cu) {
        ctx->pc = 0x108B60u;
        goto label_108b60;
    }
    ctx->pc = 0x108B58u;
    SET_GPR_U32(ctx, 31, 0x108B60u);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x108B58u, 0x108B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B60u;
label_108b60:
    // 0x108b60: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x108b60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_108b64:
    // 0x108b64: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x108b64u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_108b68:
    // 0x108b68: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x108b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108b6c:
    // 0x108b6c: 0x0  nop
    ctx->pc = 0x108b6cu;
    // NOP
label_108b70:
    // 0x108b70: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_108b74:
    if (ctx->pc == 0x108B74u) {
        ctx->pc = 0x108B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B70u;
        // 0x108b74: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108B78u;
        goto label_108b78;
    }
    ctx->pc = 0x108B70u;
    {
        const bool branch_taken_0x108b70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x108B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B70u;
        // 0x108b74: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b70) {
            ctx->pc = 0x108B7Cu;
            goto label_108b7c;
        }
    }
    ctx->pc = 0x108B78u;
label_108b78:
    // 0x108b78: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x108b78u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_108b7c:
    // 0x108b7c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x108b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_108b80:
    // 0x108b80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x108b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_108b84:
    // 0x108b84: 0x0  nop
    ctx->pc = 0x108b84u;
    // NOP
label_108b88:
    // 0x108b88: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x108b88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108b8c:
    // 0x108b8c: 0x0  nop
    ctx->pc = 0x108b8cu;
    // NOP
label_108b90:
    // 0x108b90: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_108b94:
    if (ctx->pc == 0x108B94u) {
        ctx->pc = 0x108B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B90u;
        // 0x108b94: 0xe6220608  swc1        $f2, 0x608($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1544), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108B98u;
        goto label_108b98;
    }
    ctx->pc = 0x108B90u;
    {
        const bool branch_taken_0x108b90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x108B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B90u;
        // 0x108b94: 0xe6220608  swc1        $f2, 0x608($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b90) {
            ctx->pc = 0x108BB4u;
            goto label_108bb4;
        }
    }
    ctx->pc = 0x108B98u;
label_108b98:
    // 0x108b98: 0xc620060c  lwc1        $f0, 0x60C($s1)
    ctx->pc = 0x108b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_108b9c:
    // 0x108b9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x108b9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108ba0:
    // 0x108ba0: 0x0  nop
    ctx->pc = 0x108ba0u;
    // NOP
label_108ba4:
    // 0x108ba4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_108ba8:
    if (ctx->pc == 0x108BA8u) {
        ctx->pc = 0x108BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BA4u;
        // 0x108ba8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108BACu;
        goto label_108bac;
    }
    ctx->pc = 0x108BA4u;
    {
        const bool branch_taken_0x108ba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x108BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BA4u;
        // 0x108ba8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ba4) {
            ctx->pc = 0x108BB4u;
            goto label_108bb4;
        }
    }
    ctx->pc = 0x108BACu;
label_108bac:
    // 0x108bac: 0x10000002  b           . + 4 + (0x2 << 2)
label_108bb0:
    if (ctx->pc == 0x108BB0u) {
        ctx->pc = 0x108BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BACu;
        // 0x108bb0: 0xa222061c  sb          $v0, 0x61C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1564), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108BB4u;
        goto label_108bb4;
    }
    ctx->pc = 0x108BACu;
    {
        const bool branch_taken_0x108bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BACu;
        // 0x108bb0: 0xa222061c  sb          $v0, 0x61C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1564), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108bac) {
            ctx->pc = 0x108BB8u;
            goto label_108bb8;
        }
    }
    ctx->pc = 0x108BB4u;
label_108bb4:
    // 0x108bb4: 0xa220061c  sb          $zero, 0x61C($s1)
    ctx->pc = 0x108bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1564), (uint8_t)GPR_U32(ctx, 0));
label_108bb8:
    // 0x108bb8: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x108bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_108bbc:
    // 0x108bbc: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x108bbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_108bc0:
    // 0x108bc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x108bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_108bc4:
    // 0x108bc4: 0x0  nop
    ctx->pc = 0x108bc4u;
    // NOP
label_108bc8:
    // 0x108bc8: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x108bc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108bcc:
    // 0x108bcc: 0x0  nop
    ctx->pc = 0x108bccu;
    // NOP
label_108bd0:
    // 0x108bd0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_108bd4:
    if (ctx->pc == 0x108BD4u) {
        ctx->pc = 0x108BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BD0u;
        // 0x108bd4: 0xa220061d  sb          $zero, 0x61D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1565), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108BD8u;
        goto label_108bd8;
    }
    ctx->pc = 0x108BD0u;
    {
        const bool branch_taken_0x108bd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x108bd0) {
            ctx->pc = 0x108BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108BD0u;
            // 0x108bd4: 0xa220061d  sb          $zero, 0x61D($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1565), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108BF8u;
            goto label_108bf8;
        }
    }
    ctx->pc = 0x108BD8u;
label_108bd8:
    // 0x108bd8: 0xc620060c  lwc1        $f0, 0x60C($s1)
    ctx->pc = 0x108bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_108bdc:
    // 0x108bdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x108bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108be0:
    // 0x108be0: 0x0  nop
    ctx->pc = 0x108be0u;
    // NOP
label_108be4:
    // 0x108be4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_108be8:
    if (ctx->pc == 0x108BE8u) {
        ctx->pc = 0x108BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BE4u;
        // 0x108be8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108BECu;
        goto label_108bec;
    }
    ctx->pc = 0x108BE4u;
    {
        const bool branch_taken_0x108be4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x108BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BE4u;
        // 0x108be8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108be4) {
            ctx->pc = 0x108BF4u;
            goto label_108bf4;
        }
    }
    ctx->pc = 0x108BECu;
label_108bec:
    // 0x108bec: 0x10000002  b           . + 4 + (0x2 << 2)
label_108bf0:
    if (ctx->pc == 0x108BF0u) {
        ctx->pc = 0x108BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BECu;
        // 0x108bf0: 0xa222061d  sb          $v0, 0x61D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1565), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108BF4u;
        goto label_108bf4;
    }
    ctx->pc = 0x108BECu;
    {
        const bool branch_taken_0x108bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BECu;
        // 0x108bf0: 0xa222061d  sb          $v0, 0x61D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1565), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108bec) {
            ctx->pc = 0x108BF8u;
            goto label_108bf8;
        }
    }
    ctx->pc = 0x108BF4u;
label_108bf4:
    // 0x108bf4: 0xa220061d  sb          $zero, 0x61D($s1)
    ctx->pc = 0x108bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1565), (uint8_t)GPR_U32(ctx, 0));
label_108bf8:
    // 0x108bf8: 0xc621060c  lwc1        $f1, 0x60C($s1)
    ctx->pc = 0x108bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_108bfc:
    // 0x108bfc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x108bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_108c00:
    // 0x108c00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108c00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108c04:
    // 0x108c04: 0x0  nop
    ctx->pc = 0x108c04u;
    // NOP
label_108c08:
    // 0x108c08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x108c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108c0c:
    // 0x108c0c: 0x0  nop
    ctx->pc = 0x108c0cu;
    // NOP
label_108c10:
    // 0x108c10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_108c14:
    if (ctx->pc == 0x108C14u) {
        ctx->pc = 0x108C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C10u;
        // 0x108c14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108C18u;
        goto label_108c18;
    }
    ctx->pc = 0x108C10u;
    {
        const bool branch_taken_0x108c10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x108C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C10u;
        // 0x108c14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c10) {
            ctx->pc = 0x108C20u;
            goto label_108c20;
        }
    }
    ctx->pc = 0x108C18u;
label_108c18:
    // 0x108c18: 0x10000002  b           . + 4 + (0x2 << 2)
label_108c1c:
    if (ctx->pc == 0x108C1Cu) {
        ctx->pc = 0x108C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C18u;
        // 0x108c1c: 0xa222061f  sb          $v0, 0x61F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1567), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108C20u;
        goto label_108c20;
    }
    ctx->pc = 0x108C18u;
    {
        const bool branch_taken_0x108c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C18u;
        // 0x108c1c: 0xa222061f  sb          $v0, 0x61F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1567), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c18) {
            ctx->pc = 0x108C24u;
            goto label_108c24;
        }
    }
    ctx->pc = 0x108C20u;
label_108c20:
    // 0x108c20: 0xa220061f  sb          $zero, 0x61F($s1)
    ctx->pc = 0x108c20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1567), (uint8_t)GPR_U32(ctx, 0));
label_108c24:
    // 0x108c24: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x108c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_108c28:
    // 0x108c28: 0xc6340618  lwc1        $f20, 0x618($s1)
    ctx->pc = 0x108c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_108c2c:
    // 0x108c2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_108c30:
    // 0x108c30: 0x248474a0  addiu       $a0, $a0, 0x74A0
    ctx->pc = 0x108c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29856));
label_108c34:
    // 0x108c34: 0x808301f2  lb          $v1, 0x1F2($a0)
    ctx->pc = 0x108c34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 498)));
label_108c38:
    // 0x108c38: 0x808201f3  lb          $v0, 0x1F3($a0)
    ctx->pc = 0x108c38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 499)));
label_108c3c:
    // 0x108c3c: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x108c3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_108c40:
    // 0x108c40: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x108c40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_108c44:
    // 0x108c44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x108c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_108c48:
    // 0x108c48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x108c48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108c4c:
    // 0x108c4c: 0x0  nop
    ctx->pc = 0x108c4cu;
    // NOP
label_108c50:
    // 0x108c50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x108c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_108c54:
    // 0x108c54: 0xe6200618  swc1        $f0, 0x618($s1)
    ctx->pc = 0x108c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
label_108c58:
    // 0x108c58: 0x808201f2  lb          $v0, 0x1F2($a0)
    ctx->pc = 0x108c58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 498)));
label_108c5c:
    // 0x108c5c: 0x808301f3  lb          $v1, 0x1F3($a0)
    ctx->pc = 0x108c5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 499)));
label_108c60:
    // 0x108c60: 0x21023  negu        $v0, $v0
    ctx->pc = 0x108c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_108c64:
    // 0x108c64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x108c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_108c68:
    // 0x108c68: 0x0  nop
    ctx->pc = 0x108c68u;
    // NOP
label_108c6c:
    // 0x108c6c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x108c6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_108c70:
    // 0x108c70: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x108c70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_108c74:
    // 0x108c74: 0x0  nop
    ctx->pc = 0x108c74u;
    // NOP
label_108c78:
    // 0x108c78: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x108c78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_108c7c:
    // 0x108c7c: 0xc07e060  jal         func_1F8180
label_108c80:
    if (ctx->pc == 0x108C80u) {
        ctx->pc = 0x108C84u;
        goto label_108c84;
    }
    ctx->pc = 0x108C7Cu;
    SET_GPR_U32(ctx, 31, 0x108C84u);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x108C7Cu, 0x108C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C84u;
label_108c84:
    // 0x108c84: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x108c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_108c88:
    // 0x108c88: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x108c88u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_108c8c:
    // 0x108c8c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x108c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108c90:
    // 0x108c90: 0x0  nop
    ctx->pc = 0x108c90u;
    // NOP
label_108c94:
    // 0x108c94: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_108c98:
    if (ctx->pc == 0x108C98u) {
        ctx->pc = 0x108C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C94u;
        // 0x108c98: 0xe6200610  swc1        $f0, 0x610($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1552), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108C9Cu;
        goto label_108c9c;
    }
    ctx->pc = 0x108C94u;
    {
        const bool branch_taken_0x108c94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x108C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C94u;
        // 0x108c98: 0xe6200610  swc1        $f0, 0x610($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1552), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c94) {
            ctx->pc = 0x108CA0u;
            goto label_108ca0;
        }
    }
    ctx->pc = 0x108C9Cu;
label_108c9c:
    // 0x108c9c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x108c9cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_108ca0:
    // 0x108ca0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x108ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_108ca4:
    // 0x108ca4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x108ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_108ca8:
    // 0x108ca8: 0x0  nop
    ctx->pc = 0x108ca8u;
    // NOP
label_108cac:
    // 0x108cac: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x108cacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108cb0:
    // 0x108cb0: 0x0  nop
    ctx->pc = 0x108cb0u;
    // NOP
label_108cb4:
    // 0x108cb4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_108cb8:
    if (ctx->pc == 0x108CB8u) {
        ctx->pc = 0x108CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CB4u;
        // 0x108cb8: 0xe6220614  swc1        $f2, 0x614($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108CBCu;
        goto label_108cbc;
    }
    ctx->pc = 0x108CB4u;
    {
        const bool branch_taken_0x108cb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x108CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CB4u;
        // 0x108cb8: 0xe6220614  swc1        $f2, 0x614($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108cb4) {
            ctx->pc = 0x108CD8u;
            goto label_108cd8;
        }
    }
    ctx->pc = 0x108CBCu;
label_108cbc:
    // 0x108cbc: 0xc6200618  lwc1        $f0, 0x618($s1)
    ctx->pc = 0x108cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_108cc0:
    // 0x108cc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x108cc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108cc4:
    // 0x108cc4: 0x0  nop
    ctx->pc = 0x108cc4u;
    // NOP
label_108cc8:
    // 0x108cc8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_108ccc:
    if (ctx->pc == 0x108CCCu) {
        ctx->pc = 0x108CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CC8u;
        // 0x108ccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108CD0u;
        goto label_108cd0;
    }
    ctx->pc = 0x108CC8u;
    {
        const bool branch_taken_0x108cc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x108CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CC8u;
        // 0x108ccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108cc8) {
            ctx->pc = 0x108CD8u;
            goto label_108cd8;
        }
    }
    ctx->pc = 0x108CD0u;
label_108cd0:
    // 0x108cd0: 0x10000002  b           . + 4 + (0x2 << 2)
label_108cd4:
    if (ctx->pc == 0x108CD4u) {
        ctx->pc = 0x108CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CD0u;
        // 0x108cd4: 0xa222061e  sb          $v0, 0x61E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1566), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108CD8u;
        goto label_108cd8;
    }
    ctx->pc = 0x108CD0u;
    {
        const bool branch_taken_0x108cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CD0u;
        // 0x108cd4: 0xa222061e  sb          $v0, 0x61E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1566), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108cd0) {
            ctx->pc = 0x108CDCu;
            goto label_108cdc;
        }
    }
    ctx->pc = 0x108CD8u;
label_108cd8:
    // 0x108cd8: 0xa220061e  sb          $zero, 0x61E($s1)
    ctx->pc = 0x108cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1566), (uint8_t)GPR_U32(ctx, 0));
label_108cdc:
    // 0x108cdc: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x108cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_108ce0:
    // 0x108ce0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x108ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_108ce4:
    // 0x108ce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108ce8:
    // 0x108ce8: 0x0  nop
    ctx->pc = 0x108ce8u;
    // NOP
label_108cec:
    // 0x108cec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x108cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108cf0:
    // 0x108cf0: 0x0  nop
    ctx->pc = 0x108cf0u;
    // NOP
label_108cf4:
    // 0x108cf4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_108cf8:
    if (ctx->pc == 0x108CF8u) {
        ctx->pc = 0x108CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CF4u;
        // 0x108cf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108CFCu;
        goto label_108cfc;
    }
    ctx->pc = 0x108CF4u;
    {
        const bool branch_taken_0x108cf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x108CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CF4u;
        // 0x108cf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108cf4) {
            ctx->pc = 0x108D04u;
            goto label_108d04;
        }
    }
    ctx->pc = 0x108CFCu;
label_108cfc:
    // 0x108cfc: 0x10000002  b           . + 4 + (0x2 << 2)
label_108d00:
    if (ctx->pc == 0x108D00u) {
        ctx->pc = 0x108D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CFCu;
        // 0x108d00: 0xa2220620  sb          $v0, 0x620($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1568), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D04u;
        goto label_108d04;
    }
    ctx->pc = 0x108CFCu;
    {
        const bool branch_taken_0x108cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CFCu;
        // 0x108d00: 0xa2220620  sb          $v0, 0x620($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1568), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108cfc) {
            ctx->pc = 0x108D08u;
            goto label_108d08;
        }
    }
    ctx->pc = 0x108D04u;
label_108d04:
    // 0x108d04: 0xa2200620  sb          $zero, 0x620($s1)
    ctx->pc = 0x108d04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1568), (uint8_t)GPR_U32(ctx, 0));
label_108d08:
    // 0x108d08: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x108d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
label_108d0c:
    // 0x108d0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_108d10:
    if (ctx->pc == 0x108D10u) {
        ctx->pc = 0x108D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D0Cu;
        // 0x108d10: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D14u;
        goto label_108d14;
    }
    ctx->pc = 0x108D0Cu;
    {
        const bool branch_taken_0x108d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D0Cu;
        // 0x108d10: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d0c) {
            ctx->pc = 0x108D1Cu;
            goto label_108d1c;
        }
    }
    ctx->pc = 0x108D14u;
label_108d14:
    // 0x108d14: 0x10000002  b           . + 4 + (0x2 << 2)
label_108d18:
    if (ctx->pc == 0x108D18u) {
        ctx->pc = 0x108D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D14u;
        // 0x108d18: 0xae2205f8  sw          $v0, 0x5F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D1Cu;
        goto label_108d1c;
    }
    ctx->pc = 0x108D14u;
    {
        const bool branch_taken_0x108d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D14u;
        // 0x108d18: 0xae2205f8  sw          $v0, 0x5F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d14) {
            ctx->pc = 0x108D20u;
            goto label_108d20;
        }
    }
    ctx->pc = 0x108D1Cu;
label_108d1c:
    // 0x108d1c: 0xae2005f4  sw          $zero, 0x5F4($s1)
    ctx->pc = 0x108d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 0));
label_108d20:
    // 0x108d20: 0x82220626  lb          $v0, 0x626($s1)
    ctx->pc = 0x108d20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1574)));
label_108d24:
    // 0x108d24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_108d28:
    if (ctx->pc == 0x108D28u) {
        ctx->pc = 0x108D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D24u;
        // 0x108d28: 0x92230626  lbu         $v1, 0x626($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1574)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D2Cu;
        goto label_108d2c;
    }
    ctx->pc = 0x108D24u;
    {
        const bool branch_taken_0x108d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D24u;
        // 0x108d28: 0x92230626  lbu         $v1, 0x626($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1574)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d24) {
            ctx->pc = 0x108D34u;
            goto label_108d34;
        }
    }
    ctx->pc = 0x108D2Cu;
label_108d2c:
    // 0x108d2c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x108d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_108d30:
    // 0x108d30: 0xa2220626  sb          $v0, 0x626($s1)
    ctx->pc = 0x108d30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1574), (uint8_t)GPR_U32(ctx, 2));
label_108d34:
    // 0x108d34: 0x82220621  lb          $v0, 0x621($s1)
    ctx->pc = 0x108d34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1569)));
label_108d38:
    // 0x108d38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_108d3c:
    if (ctx->pc == 0x108D3Cu) {
        ctx->pc = 0x108D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D38u;
        // 0x108d3c: 0x92230621  lbu         $v1, 0x621($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1569)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D40u;
        goto label_108d40;
    }
    ctx->pc = 0x108D38u;
    {
        const bool branch_taken_0x108d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D38u;
        // 0x108d3c: 0x92230621  lbu         $v1, 0x621($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1569)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d38) {
            ctx->pc = 0x108D48u;
            goto label_108d48;
        }
    }
    ctx->pc = 0x108D40u;
label_108d40:
    // 0x108d40: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x108d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_108d44:
    // 0x108d44: 0xa2220621  sb          $v0, 0x621($s1)
    ctx->pc = 0x108d44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1569), (uint8_t)GPR_U32(ctx, 2));
label_108d48:
    // 0x108d48: 0x82220622  lb          $v0, 0x622($s1)
    ctx->pc = 0x108d48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1570)));
label_108d4c:
    // 0x108d4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_108d50:
    if (ctx->pc == 0x108D50u) {
        ctx->pc = 0x108D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D4Cu;
        // 0x108d50: 0x92230622  lbu         $v1, 0x622($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1570)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D54u;
        goto label_108d54;
    }
    ctx->pc = 0x108D4Cu;
    {
        const bool branch_taken_0x108d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D4Cu;
        // 0x108d50: 0x92230622  lbu         $v1, 0x622($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1570)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d4c) {
            ctx->pc = 0x108D5Cu;
            goto label_108d5c;
        }
    }
    ctx->pc = 0x108D54u;
label_108d54:
    // 0x108d54: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x108d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_108d58:
    // 0x108d58: 0xa2220622  sb          $v0, 0x622($s1)
    ctx->pc = 0x108d58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1570), (uint8_t)GPR_U32(ctx, 2));
label_108d5c:
    // 0x108d5c: 0x82220623  lb          $v0, 0x623($s1)
    ctx->pc = 0x108d5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1571)));
label_108d60:
    // 0x108d60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_108d64:
    if (ctx->pc == 0x108D64u) {
        ctx->pc = 0x108D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D60u;
        // 0x108d64: 0x92230623  lbu         $v1, 0x623($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1571)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D68u;
        goto label_108d68;
    }
    ctx->pc = 0x108D60u;
    {
        const bool branch_taken_0x108d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D60u;
        // 0x108d64: 0x92230623  lbu         $v1, 0x623($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1571)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d60) {
            ctx->pc = 0x108D70u;
            goto label_108d70;
        }
    }
    ctx->pc = 0x108D68u;
label_108d68:
    // 0x108d68: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x108d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_108d6c:
    // 0x108d6c: 0xa2220623  sb          $v0, 0x623($s1)
    ctx->pc = 0x108d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1571), (uint8_t)GPR_U32(ctx, 2));
label_108d70:
    // 0x108d70: 0x82220624  lb          $v0, 0x624($s1)
    ctx->pc = 0x108d70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1572)));
label_108d74:
    // 0x108d74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_108d78:
    if (ctx->pc == 0x108D78u) {
        ctx->pc = 0x108D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D74u;
        // 0x108d78: 0x92230624  lbu         $v1, 0x624($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D7Cu;
        goto label_108d7c;
    }
    ctx->pc = 0x108D74u;
    {
        const bool branch_taken_0x108d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D74u;
        // 0x108d78: 0x92230624  lbu         $v1, 0x624($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d74) {
            ctx->pc = 0x108D84u;
            goto label_108d84;
        }
    }
    ctx->pc = 0x108D7Cu;
label_108d7c:
    // 0x108d7c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x108d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_108d80:
    // 0x108d80: 0xa2220624  sb          $v0, 0x624($s1)
    ctx->pc = 0x108d80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1572), (uint8_t)GPR_U32(ctx, 2));
label_108d84:
    // 0x108d84: 0x82220625  lb          $v0, 0x625($s1)
    ctx->pc = 0x108d84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1573)));
label_108d88:
    // 0x108d88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_108d8c:
    if (ctx->pc == 0x108D8Cu) {
        ctx->pc = 0x108D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D88u;
        // 0x108d8c: 0x92230625  lbu         $v1, 0x625($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1573)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D90u;
        goto label_108d90;
    }
    ctx->pc = 0x108D88u;
    {
        const bool branch_taken_0x108d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D88u;
        // 0x108d8c: 0x92230625  lbu         $v1, 0x625($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1573)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d88) {
            ctx->pc = 0x108D98u;
            goto label_108d98;
        }
    }
    ctx->pc = 0x108D90u;
label_108d90:
    // 0x108d90: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x108d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_108d94:
    // 0x108d94: 0xa2220625  sb          $v0, 0x625($s1)
    ctx->pc = 0x108d94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1573), (uint8_t)GPR_U32(ctx, 2));
label_108d98:
    // 0x108d98: 0x82220627  lb          $v0, 0x627($s1)
    ctx->pc = 0x108d98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1575)));
label_108d9c:
    // 0x108d9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_108da0:
    if (ctx->pc == 0x108DA0u) {
        ctx->pc = 0x108DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D9Cu;
        // 0x108da0: 0x92230627  lbu         $v1, 0x627($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1575)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108DA4u;
        goto label_108da4;
    }
    ctx->pc = 0x108D9Cu;
    {
        const bool branch_taken_0x108d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D9Cu;
        // 0x108da0: 0x92230627  lbu         $v1, 0x627($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1575)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d9c) {
            ctx->pc = 0x108DACu;
            goto label_108dac;
        }
    }
    ctx->pc = 0x108DA4u;
label_108da4:
    // 0x108da4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x108da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_108da8:
    // 0x108da8: 0xa2220627  sb          $v0, 0x627($s1)
    ctx->pc = 0x108da8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1575), (uint8_t)GPR_U32(ctx, 2));
label_108dac:
    // 0x108dac: 0x82220628  lb          $v0, 0x628($s1)
    ctx->pc = 0x108dacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1576)));
label_108db0:
    // 0x108db0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_108db4:
    if (ctx->pc == 0x108DB4u) {
        ctx->pc = 0x108DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DB0u;
        // 0x108db4: 0x92230628  lbu         $v1, 0x628($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108DB8u;
        goto label_108db8;
    }
    ctx->pc = 0x108DB0u;
    {
        const bool branch_taken_0x108db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DB0u;
        // 0x108db4: 0x92230628  lbu         $v1, 0x628($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108db0) {
            ctx->pc = 0x108DC0u;
            goto label_108dc0;
        }
    }
    ctx->pc = 0x108DB8u;
label_108db8:
    // 0x108db8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x108db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_108dbc:
    // 0x108dbc: 0xa2220628  sb          $v0, 0x628($s1)
    ctx->pc = 0x108dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1576), (uint8_t)GPR_U32(ctx, 2));
label_108dc0:
    // 0x108dc0: 0xc62115d0  lwc1        $f1, 0x15D0($s1)
    ctx->pc = 0x108dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_108dc4:
    // 0x108dc4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x108dc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_108dc8:
    // 0x108dc8: 0x0  nop
    ctx->pc = 0x108dc8u;
    // NOP
label_108dcc:
    // 0x108dcc: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x108dccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108dd0:
    // 0x108dd0: 0x0  nop
    ctx->pc = 0x108dd0u;
    // NOP
label_108dd4:
    // 0x108dd4: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_108dd8:
    if (ctx->pc == 0x108DD8u) {
        ctx->pc = 0x108DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DD4u;
        // 0x108dd8: 0x8e2205fc  lw          $v0, 0x5FC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108DDCu;
        goto label_108ddc;
    }
    ctx->pc = 0x108DD4u;
    {
        const bool branch_taken_0x108dd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x108dd4) {
            ctx->pc = 0x108DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108DD4u;
            // 0x108dd8: 0x8e2205fc  lw          $v0, 0x5FC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108DF4u;
            goto label_108df4;
        }
    }
    ctx->pc = 0x108DDCu;
label_108ddc:
    // 0x108ddc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x108ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_108de0:
    // 0x108de0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108de4:
    // 0x108de4: 0x0  nop
    ctx->pc = 0x108de4u;
    // NOP
label_108de8:
    // 0x108de8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x108de8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_108dec:
    // 0x108dec: 0xe62015d0  swc1        $f0, 0x15D0($s1)
    ctx->pc = 0x108decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5584), bits); }
label_108df0:
    // 0x108df0: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x108df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
label_108df4:
    // 0x108df4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_108df8:
    if (ctx->pc == 0x108DF8u) {
        ctx->pc = 0x108DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DF4u;
        // 0x108df8: 0xe6220674  swc1        $f2, 0x674($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108DFCu;
        goto label_108dfc;
    }
    ctx->pc = 0x108DF4u;
    {
        const bool branch_taken_0x108df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DF4u;
        // 0x108df8: 0xe6220674  swc1        $f2, 0x674($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108df4) {
            ctx->pc = 0x108E20u;
            goto label_108e20;
        }
    }
    ctx->pc = 0x108DFCu;
label_108dfc:
    // 0x108dfc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x108dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_108e00:
    // 0x108e00: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
label_108e04:
    if (ctx->pc == 0x108E04u) {
        ctx->pc = 0x108E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E00u;
        // 0x108e04: 0xae2205fc  sw          $v0, 0x5FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108E08u;
        goto label_108e08;
    }
    ctx->pc = 0x108E00u;
    {
        const bool branch_taken_0x108e00 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x108E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E00u;
        // 0x108e04: 0xae2205fc  sw          $v0, 0x5FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e00) {
            ctx->pc = 0x108E20u;
            goto label_108e20;
        }
    }
    ctx->pc = 0x108E08u;
label_108e08:
    // 0x108e08: 0xc0b6dac  jal         func_2DB6B0
label_108e0c:
    if (ctx->pc == 0x108E0Cu) {
        ctx->pc = 0x108E10u;
        goto label_108e10;
    }
    ctx->pc = 0x108E08u;
    SET_GPR_U32(ctx, 31, 0x108E10u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x108E08u, 0x108E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E10u;
label_108e10:
    // 0x108e10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108e14:
    // 0x108e14: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x108e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_108e18:
    // 0x108e18: 0xc0c1880  jal         func_306200
label_108e1c:
    if (ctx->pc == 0x108E1Cu) {
        ctx->pc = 0x108E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E18u;
        // 0x108e1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108E20u;
        goto label_108e20;
    }
    ctx->pc = 0x108E18u;
    SET_GPR_U32(ctx, 31, 0x108E20u);
    ctx->pc = 0x108E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E18u;
    // 0x108e1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x108E18u, 0x108E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E20u;
label_108e20:
    // 0x108e20: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x108e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_108e24:
    // 0x108e24: 0x260574a0  addiu       $a1, $s0, 0x74A0
    ctx->pc = 0x108e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 29856));
label_108e28:
    // 0x108e28: 0x8c439b70  lw          $v1, -0x6490($v0)
    ctx->pc = 0x108e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941552)));
label_108e2c:
    // 0x108e2c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x108e2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108e30:
    // 0x108e30: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x108e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_108e34:
    // 0x108e34: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x108e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_108e38:
    // 0x108e38: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x108e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_108e3c:
    // 0x108e3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_108e40:
    if (ctx->pc == 0x108E40u) {
        ctx->pc = 0x108E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E3Cu;
        // 0x108e40: 0x90a505b1  lbu         $a1, 0x5B1($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1457)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108E44u;
        goto label_108e44;
    }
    ctx->pc = 0x108E3Cu;
    {
        const bool branch_taken_0x108e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E3Cu;
        // 0x108e40: 0x90a505b1  lbu         $a1, 0x5B1($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1457)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e3c) {
            ctx->pc = 0x108E58u;
            goto label_108e58;
        }
    }
    ctx->pc = 0x108E44u;
label_108e44:
    // 0x108e44: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x108e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_108e48:
    // 0x108e48: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x108e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_108e4c:
    // 0x108e4c: 0x90640014  lbu         $a0, 0x14($v1)
    ctx->pc = 0x108e4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
label_108e50:
    // 0x108e50: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_108e54:
    if (ctx->pc == 0x108E54u) {
        ctx->pc = 0x108E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E50u;
        // 0x108e54: 0x3c120058  lui         $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108E58u;
        goto label_108e58;
    }
    ctx->pc = 0x108E50u;
    {
        const bool branch_taken_0x108e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E50u;
        // 0x108e54: 0x3c120058  lui         $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e50) {
            ctx->pc = 0x108E68u;
            goto label_108e68;
        }
    }
    ctx->pc = 0x108E58u;
label_108e58:
    // 0x108e58: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x108e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_108e5c:
    // 0x108e5c: 0x244364f0  addiu       $v1, $v0, 0x64F0
    ctx->pc = 0x108e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
label_108e60:
    // 0x108e60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x108e60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108e64:
    // 0x108e64: 0x906505b4  lbu         $a1, 0x5B4($v1)
    ctx->pc = 0x108e64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1460)));
label_108e68:
    // 0x108e68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x108e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_108e6c:
    // 0x108e6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108e70:
    // 0x108e70: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x108e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_108e74:
    // 0x108e74: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x108e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_108e78:
    // 0x108e78: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_108e7c:
    if (ctx->pc == 0x108E7Cu) {
        ctx->pc = 0x108E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E78u;
        // 0x108e7c: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108E80u;
        goto label_108e80;
    }
    ctx->pc = 0x108E78u;
    {
        const bool branch_taken_0x108e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E78u;
        // 0x108e7c: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e78) {
            ctx->pc = 0x108F24u;
            goto label_108f24;
        }
    }
    ctx->pc = 0x108E80u;
label_108e80:
    // 0x108e80: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x108e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_108e84:
    // 0x108e84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x108e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_108e88:
    // 0x108e88: 0x2442b920  addiu       $v0, $v0, -0x46E0
    ctx->pc = 0x108e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949152));
label_108e8c:
    // 0x108e8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x108e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_108e90:
    // 0x108e90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x108e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_108e94:
    // 0x108e94: 0x800008  jr          $a0
label_108e98:
    if (ctx->pc == 0x108E98u) {
        ctx->pc = 0x108E9Cu;
        goto label_108e9c;
    }
    ctx->pc = 0x108E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108E9Cu: goto label_108e9c;
            case 0x108EB0u: goto label_108eb0;
            case 0x108EC4u: goto label_108ec4;
            case 0x108ED8u: goto label_108ed8;
            case 0x108EECu: goto label_108eec;
            case 0x108EFCu: goto label_108efc;
            case 0x108F10u: goto label_108f10;
            case 0x108F24u: goto label_108f24;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108E94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x108E9Cu;
label_108e9c:
    // 0x108e9c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x108e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_108ea0:
    // 0x108ea0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x108ea0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_108ea4:
    // 0x108ea4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108ea8:
    // 0x108ea8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_108eac:
    if (ctx->pc == 0x108EACu) {
        ctx->pc = 0x108EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EA8u;
        // 0x108eac: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108EB0u;
        goto label_108eb0;
    }
    ctx->pc = 0x108EA8u;
    {
        const bool branch_taken_0x108ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EA8u;
        // 0x108eac: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ea8) {
            ctx->pc = 0x108F24u;
            goto label_108f24;
        }
    }
    ctx->pc = 0x108EB0u;
label_108eb0:
    // 0x108eb0: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x108eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_108eb4:
    // 0x108eb4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x108eb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_108eb8:
    // 0x108eb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108ebc:
    // 0x108ebc: 0x10000019  b           . + 4 + (0x19 << 2)
label_108ec0:
    if (ctx->pc == 0x108EC0u) {
        ctx->pc = 0x108EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EBCu;
        // 0x108ec0: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108EC4u;
        goto label_108ec4;
    }
    ctx->pc = 0x108EBCu;
    {
        const bool branch_taken_0x108ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EBCu;
        // 0x108ec0: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ebc) {
            ctx->pc = 0x108F24u;
            goto label_108f24;
        }
    }
    ctx->pc = 0x108EC4u;
label_108ec4:
    // 0x108ec4: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x108ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_108ec8:
    // 0x108ec8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x108ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_108ecc:
    // 0x108ecc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108ed0:
    // 0x108ed0: 0x10000014  b           . + 4 + (0x14 << 2)
label_108ed4:
    if (ctx->pc == 0x108ED4u) {
        ctx->pc = 0x108ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108ED0u;
        // 0x108ed4: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108ED8u;
        goto label_108ed8;
    }
    ctx->pc = 0x108ED0u;
    {
        const bool branch_taken_0x108ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108ED0u;
        // 0x108ed4: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ed0) {
            ctx->pc = 0x108F24u;
            goto label_108f24;
        }
    }
    ctx->pc = 0x108ED8u;
label_108ed8:
    // 0x108ed8: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x108ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_108edc:
    // 0x108edc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x108edcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_108ee0:
    // 0x108ee0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108ee4:
    // 0x108ee4: 0x1000000f  b           . + 4 + (0xF << 2)
label_108ee8:
    if (ctx->pc == 0x108EE8u) {
        ctx->pc = 0x108EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EE4u;
        // 0x108ee8: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108EECu;
        goto label_108eec;
    }
    ctx->pc = 0x108EE4u;
    {
        const bool branch_taken_0x108ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EE4u;
        // 0x108ee8: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ee4) {
            ctx->pc = 0x108F24u;
            goto label_108f24;
        }
    }
    ctx->pc = 0x108EECu;
label_108eec:
    // 0x108eec: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x108eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_108ef0:
    // 0x108ef0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108ef4:
    // 0x108ef4: 0x1000000b  b           . + 4 + (0xB << 2)
label_108ef8:
    if (ctx->pc == 0x108EF8u) {
        ctx->pc = 0x108EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EF4u;
        // 0x108ef8: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108EFCu;
        goto label_108efc;
    }
    ctx->pc = 0x108EF4u;
    {
        const bool branch_taken_0x108ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EF4u;
        // 0x108ef8: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ef4) {
            ctx->pc = 0x108F24u;
            goto label_108f24;
        }
    }
    ctx->pc = 0x108EFCu;
label_108efc:
    // 0x108efc: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x108efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
label_108f00:
    // 0x108f00: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x108f00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_108f04:
    // 0x108f04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108f08:
    // 0x108f08: 0x10000006  b           . + 4 + (0x6 << 2)
label_108f0c:
    if (ctx->pc == 0x108F0Cu) {
        ctx->pc = 0x108F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F08u;
        // 0x108f0c: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F10u;
        goto label_108f10;
    }
    ctx->pc = 0x108F08u;
    {
        const bool branch_taken_0x108f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F08u;
        // 0x108f0c: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f08) {
            ctx->pc = 0x108F24u;
            goto label_108f24;
        }
    }
    ctx->pc = 0x108F10u;
label_108f10:
    // 0x108f10: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x108f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
label_108f14:
    // 0x108f14: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x108f14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_108f18:
    // 0x108f18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108f1c:
    // 0x108f1c: 0x0  nop
    ctx->pc = 0x108f1cu;
    // NOP
label_108f20:
    // 0x108f20: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x108f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
label_108f24:
    // 0x108f24: 0x260474a0  addiu       $a0, $s0, 0x74A0
    ctx->pc = 0x108f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 29856));
label_108f28:
    // 0x108f28: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x108f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_108f2c:
    // 0x108f2c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x108f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_108f30:
    // 0x108f30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_108f34:
    if (ctx->pc == 0x108F34u) {
        ctx->pc = 0x108F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F30u;
        // 0x108f34: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F38u;
        goto label_108f38;
    }
    ctx->pc = 0x108F30u;
    {
        const bool branch_taken_0x108f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F30u;
        // 0x108f34: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f30) {
            ctx->pc = 0x108F3Cu;
            goto label_108f3c;
        }
    }
    ctx->pc = 0x108F38u;
label_108f38:
    // 0x108f38: 0xa2220621  sb          $v0, 0x621($s1)
    ctx->pc = 0x108f38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1569), (uint8_t)GPR_U32(ctx, 2));
label_108f3c:
    // 0x108f3c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x108f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_108f40:
    // 0x108f40: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x108f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_108f44:
    // 0x108f44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_108f48:
    if (ctx->pc == 0x108F48u) {
        ctx->pc = 0x108F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F44u;
        // 0x108f48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F4Cu;
        goto label_108f4c;
    }
    ctx->pc = 0x108F44u;
    {
        const bool branch_taken_0x108f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F44u;
        // 0x108f48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f44) {
            ctx->pc = 0x108F50u;
            goto label_108f50;
        }
    }
    ctx->pc = 0x108F4Cu;
label_108f4c:
    // 0x108f4c: 0xa2220622  sb          $v0, 0x622($s1)
    ctx->pc = 0x108f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1570), (uint8_t)GPR_U32(ctx, 2));
label_108f50:
    // 0x108f50: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x108f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_108f54:
    // 0x108f54: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x108f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_108f58:
    // 0x108f58: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_108f5c:
    if (ctx->pc == 0x108F5Cu) {
        ctx->pc = 0x108F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F58u;
        // 0x108f5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F60u;
        goto label_108f60;
    }
    ctx->pc = 0x108F58u;
    {
        const bool branch_taken_0x108f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F58u;
        // 0x108f5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f58) {
            ctx->pc = 0x108F64u;
            goto label_108f64;
        }
    }
    ctx->pc = 0x108F60u;
label_108f60:
    // 0x108f60: 0xa2220625  sb          $v0, 0x625($s1)
    ctx->pc = 0x108f60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1573), (uint8_t)GPR_U32(ctx, 2));
label_108f64:
    // 0x108f64: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x108f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_108f68:
    // 0x108f68: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x108f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_108f6c:
    // 0x108f6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_108f70:
    if (ctx->pc == 0x108F70u) {
        ctx->pc = 0x108F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F6Cu;
        // 0x108f70: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F74u;
        goto label_108f74;
    }
    ctx->pc = 0x108F6Cu;
    {
        const bool branch_taken_0x108f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F6Cu;
        // 0x108f70: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f6c) {
            ctx->pc = 0x108F78u;
            goto label_108f78;
        }
    }
    ctx->pc = 0x108F74u;
label_108f74:
    // 0x108f74: 0xa2220623  sb          $v0, 0x623($s1)
    ctx->pc = 0x108f74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1571), (uint8_t)GPR_U32(ctx, 2));
label_108f78:
    // 0x108f78: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x108f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_108f7c:
    // 0x108f7c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x108f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_108f80:
    // 0x108f80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_108f84:
    if (ctx->pc == 0x108F84u) {
        ctx->pc = 0x108F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F80u;
        // 0x108f84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F88u;
        goto label_108f88;
    }
    ctx->pc = 0x108F80u;
    {
        const bool branch_taken_0x108f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F80u;
        // 0x108f84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f80) {
            ctx->pc = 0x108F8Cu;
            goto label_108f8c;
        }
    }
    ctx->pc = 0x108F88u;
label_108f88:
    // 0x108f88: 0xa2220624  sb          $v0, 0x624($s1)
    ctx->pc = 0x108f88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1572), (uint8_t)GPR_U32(ctx, 2));
label_108f8c:
    // 0x108f8c: 0x8c82056c  lw          $v0, 0x56C($a0)
    ctx->pc = 0x108f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1388)));
label_108f90:
    // 0x108f90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_108f94:
    if (ctx->pc == 0x108F94u) {
        ctx->pc = 0x108F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F90u;
        // 0x108f94: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108F98u;
        goto label_108f98;
    }
    ctx->pc = 0x108F90u;
    {
        const bool branch_taken_0x108f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F90u;
        // 0x108f94: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f90) {
            ctx->pc = 0x108FA0u;
            goto label_108fa0;
        }
    }
    ctx->pc = 0x108F98u;
label_108f98:
    // 0x108f98: 0x10000002  b           . + 4 + (0x2 << 2)
label_108f9c:
    if (ctx->pc == 0x108F9Cu) {
        ctx->pc = 0x108F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F98u;
        // 0x108f9c: 0x30420040  andi        $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x108FA0u;
        goto label_108fa0;
    }
    ctx->pc = 0x108F98u;
    {
        const bool branch_taken_0x108f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F98u;
        // 0x108f9c: 0x30420040  andi        $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f98) {
            ctx->pc = 0x108FA4u;
            goto label_108fa4;
        }
    }
    ctx->pc = 0x108FA0u;
label_108fa0:
    // 0x108fa0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x108fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_108fa4:
    // 0x108fa4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_108fa8:
    if (ctx->pc == 0x108FA8u) {
        ctx->pc = 0x108FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FA4u;
        // 0x108fa8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108FACu;
        goto label_108fac;
    }
    ctx->pc = 0x108FA4u;
    {
        const bool branch_taken_0x108fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FA4u;
        // 0x108fa8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108fa4) {
            ctx->pc = 0x108FB0u;
            goto label_108fb0;
        }
    }
    ctx->pc = 0x108FACu;
label_108fac:
    // 0x108fac: 0xa2220626  sb          $v0, 0x626($s1)
    ctx->pc = 0x108facu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1574), (uint8_t)GPR_U32(ctx, 2));
label_108fb0:
    // 0x108fb0: 0x9222061d  lbu         $v0, 0x61D($s1)
    ctx->pc = 0x108fb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1565)));
label_108fb4:
    // 0x108fb4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_108fb8:
    if (ctx->pc == 0x108FB8u) {
        ctx->pc = 0x108FBCu;
        goto label_108fbc;
    }
    ctx->pc = 0x108FB4u;
    {
        const bool branch_taken_0x108fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108fb4) {
            ctx->pc = 0x109000u;
            goto label_109000;
        }
    }
    ctx->pc = 0x108FBCu;
label_108fbc:
    // 0x108fbc: 0xc6210608  lwc1        $f1, 0x608($s1)
    ctx->pc = 0x108fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_108fc0:
    // 0x108fc0: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x108fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_108fc4:
    // 0x108fc4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x108fc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_108fc8:
    // 0x108fc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108fc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108fcc:
    // 0x108fcc: 0x0  nop
    ctx->pc = 0x108fccu;
    // NOP
label_108fd0:
    // 0x108fd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x108fd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108fd4:
    // 0x108fd4: 0x0  nop
    ctx->pc = 0x108fd4u;
    // NOP
label_108fd8:
    // 0x108fd8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_108fdc:
    if (ctx->pc == 0x108FDCu) {
        ctx->pc = 0x108FE0u;
        goto label_108fe0;
    }
    ctx->pc = 0x108FD8u;
    {
        const bool branch_taken_0x108fd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x108fd8) {
            ctx->pc = 0x109000u;
            goto label_109000;
        }
    }
    ctx->pc = 0x108FE0u;
label_108fe0:
    // 0x108fe0: 0x82220628  lb          $v0, 0x628($s1)
    ctx->pc = 0x108fe0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1576)));
label_108fe4:
    // 0x108fe4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_108fe8:
    if (ctx->pc == 0x108FE8u) {
        ctx->pc = 0x108FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FE4u;
        // 0x108fe8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108FECu;
        goto label_108fec;
    }
    ctx->pc = 0x108FE4u;
    {
        const bool branch_taken_0x108fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FE4u;
        // 0x108fe8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108fe4) {
            ctx->pc = 0x108FF8u;
            goto label_108ff8;
        }
    }
    ctx->pc = 0x108FECu;
label_108fec:
    // 0x108fec: 0xa2200628  sb          $zero, 0x628($s1)
    ctx->pc = 0x108fecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1576), (uint8_t)GPR_U32(ctx, 0));
label_108ff0:
    // 0x108ff0: 0x10000003  b           . + 4 + (0x3 << 2)
label_108ff4:
    if (ctx->pc == 0x108FF4u) {
        ctx->pc = 0x108FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FF0u;
        // 0x108ff4: 0xa2220627  sb          $v0, 0x627($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1575), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108FF8u;
        goto label_108ff8;
    }
    ctx->pc = 0x108FF0u;
    {
        const bool branch_taken_0x108ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FF0u;
        // 0x108ff4: 0xa2220627  sb          $v0, 0x627($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1575), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ff0) {
            ctx->pc = 0x109000u;
            goto label_109000;
        }
    }
    ctx->pc = 0x108FF8u;
label_108ff8:
    // 0x108ff8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x108ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_108ffc:
    // 0x108ffc: 0xa2220628  sb          $v0, 0x628($s1)
    ctx->pc = 0x108ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1576), (uint8_t)GPR_U32(ctx, 2));
label_109000:
    // 0x109000: 0xc049a08  jal         func_126820
label_109004:
    if (ctx->pc == 0x109004u) {
        ctx->pc = 0x109004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109000u;
        // 0x109004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109008u;
        goto label_109008;
    }
    ctx->pc = 0x109000u;
    SET_GPR_U32(ctx, 31, 0x109008u);
    ctx->pc = 0x109004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109000u;
    // 0x109004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126820u, 0x109000u, 0x109008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109008u;
label_109008:
    // 0x109008: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x109008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_10900c:
    // 0x10900c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x10900cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_109010:
    // 0x109010: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x109010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_109014:
    // 0x109014: 0x8c62aff0  lw          $v0, -0x5010($v1)
    ctx->pc = 0x109014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946800)));
label_109018:
    // 0x109018: 0x24440210  addiu       $a0, $v0, 0x210
    ctx->pc = 0x109018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
label_10901c:
    // 0x10901c: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x10901cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_109020:
    // 0x109020: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x109020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_109024:
    // 0x109024: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x109024u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_109028:
    // 0x109028: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x109028u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_10902c:
    // 0x10902c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x10902cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_109030:
    // 0x109030: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x109030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_109034:
    // 0x109034: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x109034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_109038:
    // 0x109038: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x109038u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_10903c:
    // 0x10903c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x10903cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_109040:
    // 0x109040: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x109040u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_109044:
    // 0x109044: 0x13b40007  beq         $sp, $s4, . + 4 + (0x7 << 2)
label_109048:
    if (ctx->pc == 0x109048u) {
        ctx->pc = 0x109048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109044u;
        // 0x109048: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10904Cu;
        goto label_10904c;
    }
    ctx->pc = 0x109044u;
    {
        const bool branch_taken_0x109044 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 20));
        ctx->pc = 0x109048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109044u;
        // 0x109048: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109044) {
            ctx->pc = 0x109064u;
            goto label_109064;
        }
    }
    ctx->pc = 0x10904Cu;
label_10904c:
    // 0x10904c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x10904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_109050:
    // 0x109050: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x109050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_109054:
    // 0x109054: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x109054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_109058:
    // 0x109058: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x109058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_10905c:
    // 0x10905c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x10905cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_109060:
    // 0x109060: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x109060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_109064:
    // 0x109064: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x109064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_109068:
    // 0x109068: 0xc07e060  jal         func_1F8180
label_10906c:
    if (ctx->pc == 0x10906Cu) {
        ctx->pc = 0x10906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109068u;
        // 0x10906c: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x109070u;
        goto label_109070;
    }
    ctx->pc = 0x109068u;
    SET_GPR_U32(ctx, 31, 0x109070u);
    ctx->pc = 0x10906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109068u;
    // 0x10906c: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x109068u, 0x109070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109070u;
label_109070:
    // 0x109070: 0x9222061f  lbu         $v0, 0x61F($s1)
    ctx->pc = 0x109070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
label_109074:
    // 0x109074: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_109078:
    if (ctx->pc == 0x109078u) {
        ctx->pc = 0x109078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109074u;
        // 0x109078: 0xe62015f8  swc1        $f0, 0x15F8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5624), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10907Cu;
        goto label_10907c;
    }
    ctx->pc = 0x109074u;
    {
        const bool branch_taken_0x109074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109074u;
        // 0x109078: 0xe62015f8  swc1        $f0, 0x15F8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5624), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x109074) {
            ctx->pc = 0x10908Cu;
            goto label_10908c;
        }
    }
    ctx->pc = 0x10907Cu;
label_10907c:
    // 0x10907c: 0xc62c0604  lwc1        $f12, 0x604($s1)
    ctx->pc = 0x10907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_109080:
    // 0x109080: 0xc07df52  jal         func_1F7D48
label_109084:
    if (ctx->pc == 0x109084u) {
        ctx->pc = 0x109084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109080u;
        // 0x109084: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x109088u;
        goto label_109088;
    }
    ctx->pc = 0x109080u;
    SET_GPR_U32(ctx, 31, 0x109088u);
    ctx->pc = 0x109084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109080u;
    // 0x109084: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x109080u, 0x109088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109088u;
label_109088:
    // 0x109088: 0xe62015fc  swc1        $f0, 0x15FC($s1)
    ctx->pc = 0x109088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5628), bits); }
label_10908c:
    // 0x10908c: 0xc62c15f8  lwc1        $f12, 0x15F8($s1)
    ctx->pc = 0x10908cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_109090:
    // 0x109090: 0x3c100042  lui         $s0, 0x42
    ctx->pc = 0x109090u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)66 << 16));
label_109094:
    // 0x109094: 0xc0c7b74  jal         func_31EDD0
label_109098:
    if (ctx->pc == 0x109098u) {
        ctx->pc = 0x109098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109094u;
        // 0x109098: 0x2610b900  addiu       $s0, $s0, -0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10909Cu;
        goto label_10909c;
    }
    ctx->pc = 0x109094u;
    SET_GPR_U32(ctx, 31, 0x10909Cu);
    ctx->pc = 0x109098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109094u;
    // 0x109098: 0x2610b900  addiu       $s0, $s0, -0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x109094u, 0x10909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10909Cu;
label_10909c:
    // 0x10909c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x10909cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1090a0:
    // 0x1090a0: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1090a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1090a4:
    // 0x1090a4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1090a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1090a8:
    // 0x1090a8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1090a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1090ac:
    // 0x1090ac: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1090acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1090b0:
    // 0x1090b0: 0x24070118  addiu       $a3, $zero, 0x118
    ctx->pc = 0x1090b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_1090b4:
    // 0x1090b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1090b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1090b8:
    // 0x1090b8: 0xc0b8358  jal         func_2E0D60
label_1090bc:
    if (ctx->pc == 0x1090BCu) {
        ctx->pc = 0x1090BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090B8u;
        // 0x1090bc: 0x24090019  addiu       $t1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1090C0u;
        goto label_1090c0;
    }
    ctx->pc = 0x1090B8u;
    SET_GPR_U32(ctx, 31, 0x1090C0u);
    ctx->pc = 0x1090BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090B8u;
    // 0x1090bc: 0x24090019  addiu       $t1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0D60u, 0x1090B8u, 0x1090C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090C0u;
label_1090c0:
    // 0x1090c0: 0xc62c15fc  lwc1        $f12, 0x15FC($s1)
    ctx->pc = 0x1090c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1090c4:
    // 0x1090c4: 0x3c100042  lui         $s0, 0x42
    ctx->pc = 0x1090c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)66 << 16));
label_1090c8:
    // 0x1090c8: 0xc0c7b74  jal         func_31EDD0
label_1090cc:
    if (ctx->pc == 0x1090CCu) {
        ctx->pc = 0x1090CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090C8u;
        // 0x1090cc: 0x2610b910  addiu       $s0, $s0, -0x46F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1090D0u;
        goto label_1090d0;
    }
    ctx->pc = 0x1090C8u;
    SET_GPR_U32(ctx, 31, 0x1090D0u);
    ctx->pc = 0x1090CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090C8u;
    // 0x1090cc: 0x2610b910  addiu       $s0, $s0, -0x46F0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x1090C8u, 0x1090D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090D0u;
label_1090d0:
    // 0x1090d0: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1090d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1090d4:
    // 0x1090d4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1090d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1090d8:
    // 0x1090d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1090d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1090dc:
    // 0x1090dc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1090dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1090e0:
    // 0x1090e0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1090e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1090e4:
    // 0x1090e4: 0x2407012c  addiu       $a3, $zero, 0x12C
    ctx->pc = 0x1090e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_1090e8:
    // 0x1090e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1090e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1090ec:
    // 0x1090ec: 0xc0b8358  jal         func_2E0D60
label_1090f0:
    if (ctx->pc == 0x1090F0u) {
        ctx->pc = 0x1090F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090ECu;
        // 0x1090f0: 0x24090019  addiu       $t1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1090F4u;
        goto label_1090f4;
    }
    ctx->pc = 0x1090ECu;
    SET_GPR_U32(ctx, 31, 0x1090F4u);
    ctx->pc = 0x1090F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090ECu;
    // 0x1090f0: 0x24090019  addiu       $t1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0D60u, 0x1090ECu, 0x1090F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090F4u;
label_1090f4:
    // 0x1090f4: 0x82220648  lb          $v0, 0x648($s1)
    ctx->pc = 0x1090f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1608)));
label_1090f8:
    // 0x1090f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1090fc:
    if (ctx->pc == 0x1090FCu) {
        ctx->pc = 0x1090FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090F8u;
        // 0x1090fc: 0x92230648  lbu         $v1, 0x648($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109100u;
        goto label_109100;
    }
    ctx->pc = 0x1090F8u;
    {
        const bool branch_taken_0x1090f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1090FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090F8u;
        // 0x1090fc: 0x92230648  lbu         $v1, 0x648($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1090f8) {
            ctx->pc = 0x109108u;
            goto label_109108;
        }
    }
    ctx->pc = 0x109100u;
label_109100:
    // 0x109100: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x109100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_109104:
    // 0x109104: 0xa2220648  sb          $v0, 0x648($s1)
    ctx->pc = 0x109104u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
label_109108:
    // 0x109108: 0x82221600  lb          $v0, 0x1600($s1)
    ctx->pc = 0x109108u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5632)));
label_10910c:
    // 0x10910c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_109110:
    if (ctx->pc == 0x109110u) {
        ctx->pc = 0x109110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10910Cu;
        // 0x109110: 0x92231600  lbu         $v1, 0x1600($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109114u;
        goto label_109114;
    }
    ctx->pc = 0x10910Cu;
    {
        const bool branch_taken_0x10910c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10910Cu;
        // 0x109110: 0x92231600  lbu         $v1, 0x1600($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10910c) {
            ctx->pc = 0x10911Cu;
            goto label_10911c;
        }
    }
    ctx->pc = 0x109114u;
label_109114:
    // 0x109114: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x109114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_109118:
    // 0x109118: 0xa2221600  sb          $v0, 0x1600($s1)
    ctx->pc = 0x109118u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5632), (uint8_t)GPR_U32(ctx, 2));
label_10911c:
    // 0x10911c: 0x82221601  lb          $v0, 0x1601($s1)
    ctx->pc = 0x10911cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5633)));
label_109120:
    // 0x109120: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_109124:
    if (ctx->pc == 0x109124u) {
        ctx->pc = 0x109124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109120u;
        // 0x109124: 0x92231601  lbu         $v1, 0x1601($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5633)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109128u;
        goto label_109128;
    }
    ctx->pc = 0x109120u;
    {
        const bool branch_taken_0x109120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109120u;
        // 0x109124: 0x92231601  lbu         $v1, 0x1601($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5633)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109120) {
            ctx->pc = 0x109130u;
            goto label_109130;
        }
    }
    ctx->pc = 0x109128u;
label_109128:
    // 0x109128: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x109128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10912c:
    // 0x10912c: 0xa2221601  sb          $v0, 0x1601($s1)
    ctx->pc = 0x10912cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5633), (uint8_t)GPR_U32(ctx, 2));
label_109130:
    // 0x109130: 0x82221602  lb          $v0, 0x1602($s1)
    ctx->pc = 0x109130u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5634)));
label_109134:
    // 0x109134: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_109138:
    if (ctx->pc == 0x109138u) {
        ctx->pc = 0x109138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109134u;
        // 0x109138: 0x92231602  lbu         $v1, 0x1602($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5634)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10913Cu;
        goto label_10913c;
    }
    ctx->pc = 0x109134u;
    {
        const bool branch_taken_0x109134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109134u;
        // 0x109138: 0x92231602  lbu         $v1, 0x1602($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5634)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109134) {
            ctx->pc = 0x109144u;
            goto label_109144;
        }
    }
    ctx->pc = 0x10913Cu;
label_10913c:
    // 0x10913c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x10913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_109140:
    // 0x109140: 0xa2221602  sb          $v0, 0x1602($s1)
    ctx->pc = 0x109140u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5634), (uint8_t)GPR_U32(ctx, 2));
label_109144:
    // 0x109144: 0x86221616  lh          $v0, 0x1616($s1)
    ctx->pc = 0x109144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5654)));
label_109148:
    // 0x109148: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10914c:
    if (ctx->pc == 0x10914Cu) {
        ctx->pc = 0x10914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109148u;
        // 0x10914c: 0x96231616  lhu         $v1, 0x1616($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 5654)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109150u;
        goto label_109150;
    }
    ctx->pc = 0x109148u;
    {
        const bool branch_taken_0x109148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109148u;
        // 0x10914c: 0x96231616  lhu         $v1, 0x1616($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 5654)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109148) {
            ctx->pc = 0x109158u;
            goto label_109158;
        }
    }
    ctx->pc = 0x109150u;
label_109150:
    // 0x109150: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x109150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_109154:
    // 0x109154: 0xa6221616  sh          $v0, 0x1616($s1)
    ctx->pc = 0x109154u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 5654), (uint16_t)GPR_U32(ctx, 2));
label_109158:
    // 0x109158: 0x86221618  lh          $v0, 0x1618($s1)
    ctx->pc = 0x109158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 5656)));
label_10915c:
    // 0x10915c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_109160:
    if (ctx->pc == 0x109160u) {
        ctx->pc = 0x109160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10915Cu;
        // 0x109160: 0x96231618  lhu         $v1, 0x1618($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 5656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109164u;
        goto label_109164;
    }
    ctx->pc = 0x10915Cu;
    {
        const bool branch_taken_0x10915c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10915Cu;
        // 0x109160: 0x96231618  lhu         $v1, 0x1618($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 5656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10915c) {
            ctx->pc = 0x10916Cu;
            goto label_10916c;
        }
    }
    ctx->pc = 0x109164u;
label_109164:
    // 0x109164: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x109164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_109168:
    // 0x109168: 0xa6221618  sh          $v0, 0x1618($s1)
    ctx->pc = 0x109168u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 5656), (uint16_t)GPR_U32(ctx, 2));
label_10916c:
    // 0x10916c: 0x82221603  lb          $v0, 0x1603($s1)
    ctx->pc = 0x10916cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5635)));
label_109170:
    // 0x109170: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_109174:
    if (ctx->pc == 0x109174u) {
        ctx->pc = 0x109174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109170u;
        // 0x109174: 0x92231603  lbu         $v1, 0x1603($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5635)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109178u;
        goto label_109178;
    }
    ctx->pc = 0x109170u;
    {
        const bool branch_taken_0x109170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109170u;
        // 0x109174: 0x92231603  lbu         $v1, 0x1603($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5635)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109170) {
            ctx->pc = 0x109180u;
            goto label_109180;
        }
    }
    ctx->pc = 0x109178u;
label_109178:
    // 0x109178: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x109178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10917c:
    // 0x10917c: 0xa2221603  sb          $v0, 0x1603($s1)
    ctx->pc = 0x10917cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5635), (uint8_t)GPR_U32(ctx, 2));
label_109180:
    // 0x109180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_109184:
    // 0x109184: 0xc04930c  jal         func_124C30
label_109188:
    if (ctx->pc == 0x109188u) {
        ctx->pc = 0x109188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109184u;
        // 0x109188: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10918Cu;
        goto label_10918c;
    }
    ctx->pc = 0x109184u;
    SET_GPR_U32(ctx, 31, 0x10918Cu);
    ctx->pc = 0x109188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109184u;
    // 0x109188: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124C30u, 0x109184u, 0x10918Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10918Cu;
label_10918c:
    // 0x10918c: 0x8e220690  lw          $v0, 0x690($s1)
    ctx->pc = 0x10918cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_109190:
    // 0x109190: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_109194:
    if (ctx->pc == 0x109194u) {
        ctx->pc = 0x109194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109190u;
        // 0x109194: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109198u;
        goto label_109198;
    }
    ctx->pc = 0x109190u;
    {
        const bool branch_taken_0x109190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109190u;
        // 0x109194: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109190) {
            ctx->pc = 0x1091FCu;
            goto label_1091fc;
        }
    }
    ctx->pc = 0x109198u;
label_109198:
    // 0x109198: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x109198u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_10919c:
    // 0x10919c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x10919cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1091a0:
    // 0x1091a0: 0x265064f0  addiu       $s0, $s2, 0x64F0
    ctx->pc = 0x1091a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
label_1091a4:
    // 0x1091a4: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x1091a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1091a8:
    // 0x1091a8: 0x3c0141d0  lui         $at, 0x41D0
    ctx->pc = 0x1091a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16848 << 16));
label_1091ac:
    // 0x1091ac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1091acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1091b0:
    // 0x1091b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1091b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1091b4:
    // 0x1091b4: 0x3c013f1c  lui         $at, 0x3F1C
    ctx->pc = 0x1091b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16156 << 16));
label_1091b8:
    // 0x1091b8: 0x342161aa  ori         $at, $at, 0x61AA
    ctx->pc = 0x1091b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25002);
label_1091bc:
    // 0x1091bc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1091bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1091c0:
    // 0x1091c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1091c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1091c4:
    // 0x1091c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1091c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1091c8:
    // 0x1091c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1091c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1091cc:
    // 0x1091cc: 0xc0a4404  jal         func_291010
label_1091d0:
    if (ctx->pc == 0x1091D0u) {
        ctx->pc = 0x1091D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091CCu;
        // 0x1091d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1091D4u;
        goto label_1091d4;
    }
    ctx->pc = 0x1091CCu;
    SET_GPR_U32(ctx, 31, 0x1091D4u);
    ctx->pc = 0x1091D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1091CCu;
    // 0x1091d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x1091CCu, 0x1091D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1091D4u;
label_1091d4:
    // 0x1091d4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_1091d8:
    if (ctx->pc == 0x1091D8u) {
        ctx->pc = 0x1091D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091D4u;
        // 0x1091d8: 0xae220690  sw          $v0, 0x690($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1091DCu;
        goto label_1091dc;
    }
    ctx->pc = 0x1091D4u;
    {
        const bool branch_taken_0x1091d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1091D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091D4u;
        // 0x1091d8: 0xae220690  sw          $v0, 0x690($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091d4) {
            ctx->pc = 0x109280u;
            goto label_109280;
        }
    }
    ctx->pc = 0x1091DCu;
label_1091dc:
    // 0x1091dc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1091dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1091e0:
    // 0x1091e0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1091e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1091e4:
    // 0x1091e4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1091e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1091e8:
    // 0x1091e8: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x1091e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1091ec:
    // 0x1091ec: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1091ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1091f0:
    // 0x1091f0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1091f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1091f4:
    // 0x1091f4: 0x10000019  b           . + 4 + (0x19 << 2)
label_1091f8:
    if (ctx->pc == 0x1091F8u) {
        ctx->pc = 0x1091F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091F4u;
        // 0x1091f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1091FCu;
        goto label_1091fc;
    }
    ctx->pc = 0x1091F4u;
    {
        const bool branch_taken_0x1091f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1091F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091F4u;
        // 0x1091f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091f4) {
            ctx->pc = 0x10925Cu;
            goto label_10925c;
        }
    }
    ctx->pc = 0x1091FCu;
label_1091fc:
    // 0x1091fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1091fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_109200:
    // 0x109200: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x109200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_109204:
    // 0x109204: 0x265064f0  addiu       $s0, $s2, 0x64F0
    ctx->pc = 0x109204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
label_109208:
    // 0x109208: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x109208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_10920c:
    // 0x10920c: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x10920cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
label_109210:
    // 0x109210: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x109210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_109214:
    // 0x109214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109218:
    // 0x109218: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x109218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
label_10921c:
    // 0x10921c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x10921cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_109220:
    // 0x109220: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x109220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_109224:
    // 0x109224: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x109224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_109228:
    // 0x109228: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10922c:
    // 0x10922c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10922cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109230:
    // 0x109230: 0xc0a4404  jal         func_291010
label_109234:
    if (ctx->pc == 0x109234u) {
        ctx->pc = 0x109234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109230u;
        // 0x109234: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109238u;
        goto label_109238;
    }
    ctx->pc = 0x109230u;
    SET_GPR_U32(ctx, 31, 0x109238u);
    ctx->pc = 0x109234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109230u;
    // 0x109234: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x109230u, 0x109238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109238u;
label_109238:
    // 0x109238: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_10923c:
    if (ctx->pc == 0x10923Cu) {
        ctx->pc = 0x10923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109238u;
        // 0x10923c: 0xae220690  sw          $v0, 0x690($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109240u;
        goto label_109240;
    }
    ctx->pc = 0x109238u;
    {
        const bool branch_taken_0x109238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109238u;
        // 0x10923c: 0xae220690  sw          $v0, 0x690($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109238) {
            ctx->pc = 0x109280u;
            goto label_109280;
        }
    }
    ctx->pc = 0x109240u;
label_109240:
    // 0x109240: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x109240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_109244:
    // 0x109244: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x109244u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_109248:
    // 0x109248: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x109248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_10924c:
    // 0x10924c: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x10924cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_109250:
    // 0x109250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109254:
    // 0x109254: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x109254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_109258:
    // 0x109258: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x109258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10925c:
    // 0x10925c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10925cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_109260:
    // 0x109260: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x109260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_109264:
    // 0x109264: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x109264u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_109268:
    // 0x109268: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x109268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_10926c:
    // 0x10926c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10926cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109270:
    // 0x109270: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x109270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109274:
    // 0x109274: 0xc0a4404  jal         func_291010
label_109278:
    if (ctx->pc == 0x109278u) {
        ctx->pc = 0x109278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109274u;
        // 0x109278: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10927Cu;
        goto label_10927c;
    }
    ctx->pc = 0x109274u;
    SET_GPR_U32(ctx, 31, 0x10927Cu);
    ctx->pc = 0x109278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109274u;
    // 0x109278: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x109274u, 0x10927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10927Cu;
label_10927c:
    // 0x10927c: 0xae220690  sw          $v0, 0x690($s1)
    ctx->pc = 0x10927cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1680), GPR_U32(ctx, 2));
label_109280:
    // 0x109280: 0x8e2305d8  lw          $v1, 0x5D8($s1)
    ctx->pc = 0x109280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1496)));
label_109284:
    // 0x109284: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x109284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_109288:
    // 0x109288: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_10928c:
    if (ctx->pc == 0x10928Cu) {
        ctx->pc = 0x10928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109288u;
        // 0x10928c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109290u;
        goto label_109290;
    }
    ctx->pc = 0x109288u;
    {
        const bool branch_taken_0x109288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109288u;
        // 0x10928c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109288) {
            ctx->pc = 0x10929Cu;
            goto label_10929c;
        }
    }
    ctx->pc = 0x109290u;
label_109290:
    // 0x109290: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x109290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_109294:
    // 0x109294: 0x10000002  b           . + 4 + (0x2 << 2)
label_109298:
    if (ctx->pc == 0x109298u) {
        ctx->pc = 0x109298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109294u;
        // 0x109298: 0xc440d46c  lwc1        $f0, -0x2B94($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10929Cu;
        goto label_10929c;
    }
    ctx->pc = 0x109294u;
    {
        const bool branch_taken_0x109294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109294u;
        // 0x109298: 0xc440d46c  lwc1        $f0, -0x2B94($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x109294) {
            ctx->pc = 0x1092A0u;
            goto label_1092a0;
        }
    }
    ctx->pc = 0x10929Cu;
label_10929c:
    // 0x10929c: 0xc440d468  lwc1        $f0, -0x2B98($v0)
    ctx->pc = 0x10929cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1092a0:
    // 0x1092a0: 0xe62015f0  swc1        $f0, 0x15F0($s1)
    ctx->pc = 0x1092a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5616), bits); }
label_1092a4:
    // 0x1092a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1092a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1092a8:
    // 0x1092a8: 0xc048d18  jal         func_123460
label_1092ac:
    if (ctx->pc == 0x1092ACu) {
        ctx->pc = 0x1092ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092A8u;
        // 0x1092ac: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1092B0u;
        goto label_1092b0;
    }
    ctx->pc = 0x1092A8u;
    SET_GPR_U32(ctx, 31, 0x1092B0u);
    ctx->pc = 0x1092ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1092A8u;
    // 0x1092ac: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123460u, 0x1092A8u, 0x1092B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1092B0u;
label_1092b0:
    // 0x1092b0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1092b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1092b4:
    // 0x1092b4: 0xc04264a  jal         func_109928
label_1092b8:
    if (ctx->pc == 0x1092B8u) {
        ctx->pc = 0x1092B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092B4u;
        // 0x1092b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1092BCu;
        goto label_1092bc;
    }
    ctx->pc = 0x1092B4u;
    SET_GPR_U32(ctx, 31, 0x1092BCu);
    ctx->pc = 0x1092B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1092B4u;
    // 0x1092b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109928u, 0x1092B4u, 0x1092BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1092BCu;
label_1092bc:
    // 0x1092bc: 0x8e2315f4  lw          $v1, 0x15F4($s1)
    ctx->pc = 0x1092bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_1092c0:
    // 0x1092c0: 0x3c02fe00  lui         $v0, 0xFE00
    ctx->pc = 0x1092c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65024 << 16));
label_1092c4:
    // 0x1092c4: 0x34420076  ori         $v0, $v0, 0x76
    ctx->pc = 0x1092c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)118);
label_1092c8:
    // 0x1092c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1092c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1092cc:
    // 0x1092cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1092ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1092d0:
    // 0x1092d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1092d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1092d4:
    // 0x1092d4: 0x26042fc0  addiu       $a0, $s0, 0x2FC0
    ctx->pc = 0x1092d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
label_1092d8:
    // 0x1092d8: 0xc04d476  jal         func_1351D8
label_1092dc:
    if (ctx->pc == 0x1092DCu) {
        ctx->pc = 0x1092DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092D8u;
        // 0x1092dc: 0xae2315f4  sw          $v1, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1092E0u;
        goto label_1092e0;
    }
    ctx->pc = 0x1092D8u;
    SET_GPR_U32(ctx, 31, 0x1092E0u);
    ctx->pc = 0x1092DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1092D8u;
    // 0x1092dc: 0xae2315f4  sw          $v1, 0x15F4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x1092D8u, 0x1092E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1092E0u;
label_1092e0:
    // 0x1092e0: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x1092e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_1092e4:
    // 0x1092e4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1092e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1092e8:
    // 0x1092e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1092e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1092ec:
    // 0x1092ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1092ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1092f0:
    // 0x1092f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1092f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1092f4:
    // 0x1092f4: 0xc0428b2  jal         func_10A2C8
label_1092f8:
    if (ctx->pc == 0x1092F8u) {
        ctx->pc = 0x1092F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092F4u;
        // 0x1092f8: 0xae230250  sw          $v1, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1092FCu;
        goto label_1092fc;
    }
    ctx->pc = 0x1092F4u;
    SET_GPR_U32(ctx, 31, 0x1092FCu);
    ctx->pc = 0x1092F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1092F4u;
    // 0x1092f8: 0xae230250  sw          $v1, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A2C8u, 0x1092F4u, 0x1092FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1092FCu;
label_1092fc:
    // 0x1092fc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1092fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_109300:
    // 0x109300: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x109300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_109304:
    // 0x109304: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x109304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_109308:
    // 0x109308: 0x922302f4  lbu         $v1, 0x2F4($s1)
    ctx->pc = 0x109308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
label_10930c:
    // 0x10930c: 0x2446d0b8  addiu       $a2, $v0, -0x2F48
    ctx->pc = 0x10930cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955192));
label_109310:
    // 0x109310: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x109310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109314:
    // 0x109314: 0xe6201610  swc1        $f0, 0x1610($s1)
    ctx->pc = 0x109314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5648), bits); }
label_109318:
    // 0x109318: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x109318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_10931c:
    // 0x10931c: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x10931cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_109320:
    // 0x109320: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x109320u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_109324:
    // 0x109324: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_109328:
    if (ctx->pc == 0x109328u) {
        ctx->pc = 0x109328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109324u;
        // 0x109328: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10932Cu;
        goto label_10932c;
    }
    ctx->pc = 0x109324u;
    {
        const bool branch_taken_0x109324 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x109328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109324u;
        // 0x109328: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109324) {
            ctx->pc = 0x109350u;
            goto label_109350;
        }
    }
    ctx->pc = 0x10932Cu;
label_10932c:
    // 0x10932c: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x10932cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_109330:
    // 0x109330: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x109330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_109334:
    // 0x109334: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x109334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_109338:
    // 0x109338: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x109338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10933c:
    // 0x10933c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10933cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_109340:
    // 0x109340: 0xdc73fff8  ld          $s3, -0x8($v1)
    ctx->pc = 0x109340u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_109344:
    // 0x109344: 0x13303f  dsra32      $a2, $s3, 0
    ctx->pc = 0x109344u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 19) >> (32 + 0));
label_109348:
    // 0x109348: 0x10000003  b           . + 4 + (0x3 << 2)
label_10934c:
    if (ctx->pc == 0x10934Cu) {
        ctx->pc = 0x10934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109348u;
        // 0x10934c: 0x922202f4  lbu         $v0, 0x2F4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109350u;
        goto label_109350;
    }
    ctx->pc = 0x109348u;
    {
        const bool branch_taken_0x109348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109348u;
        // 0x10934c: 0x922202f4  lbu         $v0, 0x2F4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109348) {
            ctx->pc = 0x109358u;
            goto label_109358;
        }
    }
    ctx->pc = 0x109350u;
label_109350:
    // 0x109350: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x109350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_109354:
    // 0x109354: 0x922202f4  lbu         $v0, 0x2F4($s1)
    ctx->pc = 0x109354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
label_109358:
    // 0x109358: 0x24e3d0b8  addiu       $v1, $a3, -0x2F48
    ctx->pc = 0x109358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955192));
label_10935c:
    // 0x10935c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x10935cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_109360:
    // 0x109360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109364:
    // 0x109364: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_109368:
    if (ctx->pc == 0x109368u) {
        ctx->pc = 0x109368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109364u;
        // 0x109368: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10936Cu;
        goto label_10936c;
    }
    ctx->pc = 0x109364u;
    {
        const bool branch_taken_0x109364 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x109368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109364u;
        // 0x109368: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109364) {
            ctx->pc = 0x109380u;
            goto label_109380;
        }
    }
    ctx->pc = 0x10936Cu;
label_10936c:
    // 0x10936c: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x10936cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_109370:
    // 0x109370: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x109370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_109374:
    // 0x109374: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x109374u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_109378:
    // 0x109378: 0x10000002  b           . + 4 + (0x2 << 2)
label_10937c:
    if (ctx->pc == 0x10937Cu) {
        ctx->pc = 0x10937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109378u;
        // 0x10937c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109380u;
        goto label_109380;
    }
    ctx->pc = 0x109378u;
    {
        const bool branch_taken_0x109378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109378u;
        // 0x10937c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109378) {
            ctx->pc = 0x109384u;
            goto label_109384;
        }
    }
    ctx->pc = 0x109380u;
label_109380:
    // 0x109380: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x109380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_109384:
    // 0x109384: 0xc0f809  jalr        $a2
label_109388:
    if (ctx->pc == 0x109388u) {
        ctx->pc = 0x109388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109384u;
        // 0x109388: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10938Cu;
        goto label_10938c;
    }
    ctx->pc = 0x109384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x10938Cu);
        ctx->pc = 0x109388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109384u;
        // 0x109388: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109384u, 0x10938Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10938Cu;
label_10938c:
    // 0x10938c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x10938cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_109390:
    // 0x109390: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x109390u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109394:
    // 0x109394: 0x2442b000  addiu       $v0, $v0, -0x5000
    ctx->pc = 0x109394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
label_109398:
    // 0x109398: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x109398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_10939c:
    // 0x10939c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_1093a0:
    if (ctx->pc == 0x1093A0u) {
        ctx->pc = 0x1093A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10939Cu;
        // 0x1093a0: 0x8e240678  lw          $a0, 0x678($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1093A4u;
        goto label_1093a4;
    }
    ctx->pc = 0x10939Cu;
    {
        const bool branch_taken_0x10939c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10939c) {
            ctx->pc = 0x1093A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10939Cu;
            // 0x1093a0: 0x8e240678  lw          $a0, 0x678($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1093B8u;
            goto label_1093b8;
        }
    }
    ctx->pc = 0x1093A4u;
label_1093a4:
    // 0x1093a4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1093a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_1093a8:
    // 0x1093a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1093a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1093ac:
    // 0x1093ac: 0x0  nop
    ctx->pc = 0x1093acu;
    // NOP
label_1093b0:
    // 0x1093b0: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x1093b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
label_1093b4:
    // 0x1093b4: 0x8e240678  lw          $a0, 0x678($s1)
    ctx->pc = 0x1093b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_1093b8:
    // 0x1093b8: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_1093bc:
    if (ctx->pc == 0x1093BCu) {
        ctx->pc = 0x1093C0u;
        goto label_1093c0;
    }
    ctx->pc = 0x1093B8u;
    {
        const bool branch_taken_0x1093b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1093b8) {
            ctx->pc = 0x109424u;
            goto label_109424;
        }
    }
    ctx->pc = 0x1093C0u;
label_1093c0:
    // 0x1093c0: 0x82221603  lb          $v0, 0x1603($s1)
    ctx->pc = 0x1093c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5635)));
label_1093c4:
    // 0x1093c4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1093c8:
    if (ctx->pc == 0x1093C8u) {
        ctx->pc = 0x1093C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093C4u;
        // 0x1093c8: 0x8e25067c  lw          $a1, 0x67C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1093CCu;
        goto label_1093cc;
    }
    ctx->pc = 0x1093C4u;
    {
        const bool branch_taken_0x1093c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1093C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093C4u;
        // 0x1093c8: 0x8e25067c  lw          $a1, 0x67C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093c4) {
            ctx->pc = 0x1093FCu;
            goto label_1093fc;
        }
    }
    ctx->pc = 0x1093CCu;
label_1093cc:
    // 0x1093cc: 0xc07f584  jal         func_1FD610
label_1093d0:
    if (ctx->pc == 0x1093D0u) {
        ctx->pc = 0x1093D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093CCu;
        // 0x1093d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1093D4u;
        goto label_1093d4;
    }
    ctx->pc = 0x1093CCu;
    SET_GPR_U32(ctx, 31, 0x1093D4u);
    ctx->pc = 0x1093D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093CCu;
    // 0x1093d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD610u, 0x1093CCu, 0x1093D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093D4u;
label_1093d4:
    // 0x1093d4: 0x8e240678  lw          $a0, 0x678($s1)
    ctx->pc = 0x1093d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_1093d8:
    // 0x1093d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1093d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1093dc:
    // 0x1093dc: 0xc07f584  jal         func_1FD610
label_1093e0:
    if (ctx->pc == 0x1093E0u) {
        ctx->pc = 0x1093E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093DCu;
        // 0x1093e0: 0x8e250680  lw          $a1, 0x680($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1093E4u;
        goto label_1093e4;
    }
    ctx->pc = 0x1093DCu;
    SET_GPR_U32(ctx, 31, 0x1093E4u);
    ctx->pc = 0x1093E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093DCu;
    // 0x1093e0: 0x8e250680  lw          $a1, 0x680($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD610u, 0x1093DCu, 0x1093E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093E4u;
label_1093e4:
    // 0x1093e4: 0x8e240678  lw          $a0, 0x678($s1)
    ctx->pc = 0x1093e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_1093e8:
    // 0x1093e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1093e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1093ec:
    // 0x1093ec: 0xc07f584  jal         func_1FD610
label_1093f0:
    if (ctx->pc == 0x1093F0u) {
        ctx->pc = 0x1093F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093ECu;
        // 0x1093f0: 0x8e250684  lw          $a1, 0x684($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1093F4u;
        goto label_1093f4;
    }
    ctx->pc = 0x1093ECu;
    SET_GPR_U32(ctx, 31, 0x1093F4u);
    ctx->pc = 0x1093F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093ECu;
    // 0x1093f0: 0x8e250684  lw          $a1, 0x684($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD610u, 0x1093ECu, 0x1093F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093F4u;
label_1093f4:
    // 0x1093f4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1093f8:
    if (ctx->pc == 0x1093F8u) {
        ctx->pc = 0x1093FCu;
        goto label_1093fc;
    }
    ctx->pc = 0x1093F4u;
    {
        const bool branch_taken_0x1093f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1093f4) {
            ctx->pc = 0x109424u;
            goto label_109424;
        }
    }
    ctx->pc = 0x1093FCu;
label_1093fc:
    // 0x1093fc: 0xc07f584  jal         func_1FD610
label_109400:
    if (ctx->pc == 0x109400u) {
        ctx->pc = 0x109400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093FCu;
        // 0x109400: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109404u;
        goto label_109404;
    }
    ctx->pc = 0x1093FCu;
    SET_GPR_U32(ctx, 31, 0x109404u);
    ctx->pc = 0x109400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093FCu;
    // 0x109400: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD610u, 0x1093FCu, 0x109404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109404u;
label_109404:
    // 0x109404: 0x8e240678  lw          $a0, 0x678($s1)
    ctx->pc = 0x109404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_109408:
    // 0x109408: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x109408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10940c:
    // 0x10940c: 0xc07f584  jal         func_1FD610
label_109410:
    if (ctx->pc == 0x109410u) {
        ctx->pc = 0x109410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10940Cu;
        // 0x109410: 0x8e250680  lw          $a1, 0x680($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109414u;
        goto label_109414;
    }
    ctx->pc = 0x10940Cu;
    SET_GPR_U32(ctx, 31, 0x109414u);
    ctx->pc = 0x109410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10940Cu;
    // 0x109410: 0x8e250680  lw          $a1, 0x680($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD610u, 0x10940Cu, 0x109414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109414u;
label_109414:
    // 0x109414: 0x8e240678  lw          $a0, 0x678($s1)
    ctx->pc = 0x109414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_109418:
    // 0x109418: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x109418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10941c:
    // 0x10941c: 0xc07f584  jal         func_1FD610
label_109420:
    if (ctx->pc == 0x109420u) {
        ctx->pc = 0x109420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10941Cu;
        // 0x109420: 0x8e250684  lw          $a1, 0x684($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109424u;
        goto label_109424;
    }
    ctx->pc = 0x10941Cu;
    SET_GPR_U32(ctx, 31, 0x109424u);
    ctx->pc = 0x109420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10941Cu;
    // 0x109420: 0x8e250684  lw          $a1, 0x684($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD610u, 0x10941Cu, 0x109424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109424u;
label_109424:
    // 0x109424: 0xc04aece  jal         func_12BB38
label_109428:
    if (ctx->pc == 0x109428u) {
        ctx->pc = 0x109428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109424u;
        // 0x109428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10942Cu;
        goto label_10942c;
    }
    ctx->pc = 0x109424u;
    SET_GPR_U32(ctx, 31, 0x10942Cu);
    ctx->pc = 0x109428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109424u;
    // 0x109428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BB38u, 0x109424u, 0x10942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10942Cu;
label_10942c:
    // 0x10942c: 0xc048dba  jal         func_1236E8
label_109430:
    if (ctx->pc == 0x109430u) {
        ctx->pc = 0x109430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10942Cu;
        // 0x109430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109434u;
        goto label_109434;
    }
    ctx->pc = 0x10942Cu;
    SET_GPR_U32(ctx, 31, 0x109434u);
    ctx->pc = 0x109430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10942Cu;
    // 0x109430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1236E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236E8u, 0x10942Cu, 0x109434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109434u;
label_109434:
    // 0x109434: 0xc048e42  jal         func_123908
label_109438:
    if (ctx->pc == 0x109438u) {
        ctx->pc = 0x109438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109434u;
        // 0x109438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10943Cu;
        goto label_10943c;
    }
    ctx->pc = 0x109434u;
    SET_GPR_U32(ctx, 31, 0x10943Cu);
    ctx->pc = 0x109438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109434u;
    // 0x109438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123908u, 0x109434u, 0x10943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10943Cu;
label_10943c:
    // 0x10943c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x10943cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_109440:
    // 0x109440: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x109440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_109444:
    // 0x109444: 0x12820007  beq         $s4, $v0, . + 4 + (0x7 << 2)
label_109448:
    if (ctx->pc == 0x109448u) {
        ctx->pc = 0x109448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109444u;
        // 0x109448: 0x26442fc0  addiu       $a0, $s2, 0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10944Cu;
        goto label_10944c;
    }
    ctx->pc = 0x109444u;
    {
        const bool branch_taken_0x109444 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x109448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109444u;
        // 0x109448: 0x26442fc0  addiu       $a0, $s2, 0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109444) {
            ctx->pc = 0x109464u;
            goto label_109464;
        }
    }
    ctx->pc = 0x10944Cu;
label_10944c:
    // 0x10944c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x10944cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_109450:
    // 0x109450: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x109450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_109454:
    // 0x109454: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x109454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_109458:
    // 0x109458: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x109458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_10945c:
    // 0x10945c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x10945cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_109460:
    // 0x109460: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x109460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_109464:
    // 0x109464: 0xc04d23a  jal         func_1348E8
label_109468:
    if (ctx->pc == 0x109468u) {
        ctx->pc = 0x109468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109464u;
        // 0x109468: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10946Cu;
        goto label_10946c;
    }
    ctx->pc = 0x109464u;
    SET_GPR_U32(ctx, 31, 0x10946Cu);
    ctx->pc = 0x109468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109464u;
    // 0x109468: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1348E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1348E8u, 0x109464u, 0x10946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10946Cu;
label_10946c:
    // 0x10946c: 0x8e2415f4  lw          $a0, 0x15F4($s1)
    ctx->pc = 0x10946cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_109470:
    // 0x109470: 0x30821000  andi        $v0, $a0, 0x1000
    ctx->pc = 0x109470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
label_109474:
    // 0x109474: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x109474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
label_109478:
    // 0x109478: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x109478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_10947c:
    // 0x10947c: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x10947cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_109480:
    // 0x109480: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_109484:
    if (ctx->pc == 0x109484u) {
        ctx->pc = 0x109488u;
        goto label_109488;
    }
    ctx->pc = 0x109480u;
    {
        const bool branch_taken_0x109480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109480) {
            ctx->pc = 0x1094DCu;
            goto label_1094dc;
        }
    }
    ctx->pc = 0x109488u;
label_109488:
    // 0x109488: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x109488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_10948c:
    // 0x10948c: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x10948cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_109490:
    // 0x109490: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x109490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_109494:
    // 0x109494: 0x24060224  addiu       $a2, $zero, 0x224
    ctx->pc = 0x109494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 548));
label_109498:
    // 0x109498: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x109498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_10949c:
    // 0x10949c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10949cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1094a0:
    // 0x1094a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1094a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1094a4:
    // 0x1094a4: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1094a4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_1094a8:
    // 0x1094a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1094a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1094ac:
    // 0x1094ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1094acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1094b0:
    // 0x1094b0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1094b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1094b4:
    // 0x1094b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1094b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1094b8:
    // 0x1094b8: 0xc04cb68  jal         func_132DA0
label_1094bc:
    if (ctx->pc == 0x1094BCu) {
        ctx->pc = 0x1094BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094B8u;
        // 0x1094bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1094C0u;
        goto label_1094c0;
    }
    ctx->pc = 0x1094B8u;
    SET_GPR_U32(ctx, 31, 0x1094C0u);
    ctx->pc = 0x1094BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1094B8u;
    // 0x1094bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132DA0u, 0x1094B8u, 0x1094C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1094C0u;
label_1094c0:
    // 0x1094c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1094c4:
    if (ctx->pc == 0x1094C4u) {
        ctx->pc = 0x1094C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094C0u;
        // 0x1094c4: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1094C8u;
        goto label_1094c8;
    }
    ctx->pc = 0x1094C0u;
    {
        const bool branch_taken_0x1094c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1094C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094C0u;
        // 0x1094c4: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1094c0) {
            ctx->pc = 0x1094DCu;
            goto label_1094dc;
        }
    }
    ctx->pc = 0x1094C8u;
label_1094c8:
    // 0x1094c8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1094c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1094cc:
    // 0x1094cc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1094ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1094d0:
    // 0x1094d0: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1094d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1094d4:
    // 0x1094d4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1094d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1094d8:
    // 0x1094d8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1094d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1094dc:
    // 0x1094dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1094dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1094e0:
    // 0x1094e0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1094e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1094e4:
    // 0x1094e4: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x1094e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_1094e8:
    // 0x1094e8: 0xae200474  sw          $zero, 0x474($s1)
    ctx->pc = 0x1094e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1140), GPR_U32(ctx, 0));
label_1094ec:
    // 0x1094ec: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1094ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1094f0:
    // 0x1094f0: 0xae200480  sw          $zero, 0x480($s1)
    ctx->pc = 0x1094f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1152), GPR_U32(ctx, 0));
label_1094f4:
    // 0x1094f4: 0xe6350484  swc1        $f21, 0x484($s1)
    ctx->pc = 0x1094f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1156), bits); }
label_1094f8:
    // 0x1094f8: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_1094fc:
    if (ctx->pc == 0x1094FCu) {
        ctx->pc = 0x1094FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094F8u;
        // 0x1094fc: 0xae200488  sw          $zero, 0x488($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109500u;
        goto label_109500;
    }
    ctx->pc = 0x1094F8u;
    {
        const bool branch_taken_0x1094f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1094FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094F8u;
        // 0x1094fc: 0xae200488  sw          $zero, 0x488($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1094f8) {
            ctx->pc = 0x1095ECu;
            goto label_1095ec;
        }
    }
    ctx->pc = 0x109500u;
label_109500:
    // 0x109500: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x109500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_109504:
    // 0x109504: 0xc4540004  lwc1        $f20, 0x4($v0)
    ctx->pc = 0x109504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_109508:
    // 0x109508: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x109508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_10950c:
    // 0x10950c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x10950cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_109510:
    // 0x109510: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x109510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_109514:
    // 0x109514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_109518:
    // 0x109518: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x109518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10951c:
    // 0x10951c: 0x26260480  addiu       $a2, $s1, 0x480
    ctx->pc = 0x10951cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1152));
label_109520:
    // 0x109520: 0xc04ca70  jal         func_1329C0
label_109524:
    if (ctx->pc == 0x109524u) {
        ctx->pc = 0x109524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109520u;
        // 0x109524: 0x27a70044  addiu       $a3, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109528u;
        goto label_109528;
    }
    ctx->pc = 0x109520u;
    SET_GPR_U32(ctx, 31, 0x109528u);
    ctx->pc = 0x109524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109520u;
    // 0x109524: 0x27a70044  addiu       $a3, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1329C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1329C0u, 0x109520u, 0x109528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109528u;
label_109528:
    // 0x109528: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_10952c:
    if (ctx->pc == 0x10952Cu) {
        ctx->pc = 0x10952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109528u;
        // 0x10952c: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109530u;
        goto label_109530;
    }
    ctx->pc = 0x109528u;
    {
        const bool branch_taken_0x109528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109528u;
        // 0x10952c: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109528) {
            ctx->pc = 0x109540u;
            goto label_109540;
        }
    }
    ctx->pc = 0x109530u;
label_109530:
    // 0x109530: 0xc7b40024  lwc1        $f20, 0x24($sp)
    ctx->pc = 0x109530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_109534:
    // 0x109534: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x109534u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_109538:
    // 0x109538: 0x10000004  b           . + 4 + (0x4 << 2)
label_10953c:
    if (ctx->pc == 0x10953Cu) {
        ctx->pc = 0x10953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109538u;
        // 0x10953c: 0xae220474  sw          $v0, 0x474($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109540u;
        goto label_109540;
    }
    ctx->pc = 0x109538u;
    {
        const bool branch_taken_0x109538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109538u;
        // 0x10953c: 0xae220474  sw          $v0, 0x474($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109538) {
            ctx->pc = 0x10954Cu;
            goto label_10954c;
        }
    }
    ctx->pc = 0x109540u;
label_109540:
    // 0x109540: 0xe6350484  swc1        $f21, 0x484($s1)
    ctx->pc = 0x109540u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1156), bits); }
label_109544:
    // 0x109544: 0xae200480  sw          $zero, 0x480($s1)
    ctx->pc = 0x109544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1152), GPR_U32(ctx, 0));
label_109548:
    // 0x109548: 0xae200488  sw          $zero, 0x488($s1)
    ctx->pc = 0x109548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1160), GPR_U32(ctx, 0));
label_10954c:
    // 0x10954c: 0xc6221608  lwc1        $f2, 0x1608($s1)
    ctx->pc = 0x10954cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_109550:
    // 0x109550: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x109550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_109554:
    // 0x109554: 0x0  nop
    ctx->pc = 0x109554u;
    // NOP
label_109558:
    // 0x109558: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x109558u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10955c:
    // 0x10955c: 0x0  nop
    ctx->pc = 0x10955cu;
    // NOP
label_109560:
    // 0x109560: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_109564:
    if (ctx->pc == 0x109564u) {
        ctx->pc = 0x109564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109560u;
        // 0x109564: 0xc6201604  lwc1        $f0, 0x1604($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x109568u;
        goto label_109568;
    }
    ctx->pc = 0x109560u;
    {
        const bool branch_taken_0x109560 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x109560) {
            ctx->pc = 0x109564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109560u;
            // 0x109564: 0xc6201604  lwc1        $f0, 0x1604($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1095B4u;
            goto label_1095b4;
        }
    }
    ctx->pc = 0x109568u;
label_109568:
    // 0x109568: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x109568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_10956c:
    // 0x10956c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10956cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_109570:
    // 0x109570: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x109570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_109574:
    // 0x109574: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x109574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_109578:
    // 0x109578: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x109578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_10957c:
    // 0x10957c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x10957cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_109580:
    // 0x109580: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x109580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_109584:
    // 0x109584: 0x0  nop
    ctx->pc = 0x109584u;
    // NOP
label_109588:
    // 0x109588: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_10958c:
    if (ctx->pc == 0x10958Cu) {
        ctx->pc = 0x10958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109588u;
        // 0x10958c: 0xc6211604  lwc1        $f1, 0x1604($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x109590u;
        goto label_109590;
    }
    ctx->pc = 0x109588u;
    {
        const bool branch_taken_0x109588 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x109588) {
            ctx->pc = 0x10958Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109588u;
            // 0x10958c: 0xc6211604  lwc1        $f1, 0x1604($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10959Cu;
            goto label_10959c;
        }
    }
    ctx->pc = 0x109590u;
label_109590:
    // 0x109590: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x109590u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_109594:
    // 0x109594: 0x1000000d  b           . + 4 + (0xD << 2)
label_109598:
    if (ctx->pc == 0x109598u) {
        ctx->pc = 0x109598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109594u;
        // 0x109598: 0xe6231608  swc1        $f3, 0x1608($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5640), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10959Cu;
        goto label_10959c;
    }
    ctx->pc = 0x109594u;
    {
        const bool branch_taken_0x109594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109594u;
        // 0x109598: 0xe6231608  swc1        $f3, 0x1608($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5640), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x109594) {
            ctx->pc = 0x1095CCu;
            goto label_1095cc;
        }
    }
    ctx->pc = 0x10959Cu;
label_10959c:
    // 0x10959c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x10959cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1095a0:
    // 0x1095a0: 0xe6211608  swc1        $f1, 0x1608($s1)
    ctx->pc = 0x1095a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5640), bits); }
label_1095a4:
    // 0x1095a4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1095a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1095a8:
    // 0x1095a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1095a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1095ac:
    // 0x1095ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_1095b0:
    if (ctx->pc == 0x1095B0u) {
        ctx->pc = 0x1095B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095ACu;
        // 0x1095b0: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1095B4u;
        goto label_1095b4;
    }
    ctx->pc = 0x1095ACu;
    {
        const bool branch_taken_0x1095ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1095B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095ACu;
        // 0x1095b0: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1095ac) {
            ctx->pc = 0x1095CCu;
            goto label_1095cc;
        }
    }
    ctx->pc = 0x1095B4u;
label_1095b4:
    // 0x1095b4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1095b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1095b8:
    // 0x1095b8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1095b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1095bc:
    // 0x1095bc: 0xe6201608  swc1        $f0, 0x1608($s1)
    ctx->pc = 0x1095bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5640), bits); }
label_1095c0:
    // 0x1095c0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1095c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1095c4:
    // 0x1095c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1095c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1095c8:
    // 0x1095c8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1095c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1095cc:
    // 0x1095cc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1095ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1095d0:
    // 0x1095d0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1095d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1095d4:
    // 0x1095d4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1095d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1095d8:
    // 0x1095d8: 0x0  nop
    ctx->pc = 0x1095d8u;
    // NOP
label_1095dc:
    // 0x1095dc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1095e0:
    if (ctx->pc == 0x1095E0u) {
        ctx->pc = 0x1095E4u;
        goto label_1095e4;
    }
    ctx->pc = 0x1095DCu;
    {
        const bool branch_taken_0x1095dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1095dc) {
            ctx->pc = 0x1095ECu;
            goto label_1095ec;
        }
    }
    ctx->pc = 0x1095E4u;
label_1095e4:
    // 0x1095e4: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1095e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1095e8:
    // 0x1095e8: 0xae201608  sw          $zero, 0x1608($s1)
    ctx->pc = 0x1095e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5640), GPR_U32(ctx, 0));
label_1095ec:
    // 0x1095ec: 0xc053ed2  jal         func_14FB48
label_1095f0:
    if (ctx->pc == 0x1095F0u) {
        ctx->pc = 0x1095F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095ECu;
        // 0x1095f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1095F4u;
        goto label_1095f4;
    }
    ctx->pc = 0x1095ECu;
    SET_GPR_U32(ctx, 31, 0x1095F4u);
    ctx->pc = 0x1095F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1095ECu;
    // 0x1095f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB48u, 0x1095ECu, 0x1095F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1095F4u;
label_1095f4:
    // 0x1095f4: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1095f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1095f8:
    // 0x1095f8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1095f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1095fc:
    // 0x1095fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1095fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_109600:
    // 0x109600: 0x962403ac  lhu         $a0, 0x3AC($s1)
    ctx->pc = 0x109600u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_109604:
    // 0x109604: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x109604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_109608:
    // 0x109608: 0x30840404  andi        $a0, $a0, 0x404
    ctx->pc = 0x109608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1028);
label_10960c:
    // 0x10960c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_109610:
    if (ctx->pc == 0x109610u) {
        ctx->pc = 0x109610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10960Cu;
        // 0x109610: 0xae230258  sw          $v1, 0x258($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109614u;
        goto label_109614;
    }
    ctx->pc = 0x10960Cu;
    {
        const bool branch_taken_0x10960c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x109610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10960Cu;
        // 0x109610: 0xae230258  sw          $v1, 0x258($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10960c) {
            ctx->pc = 0x109624u;
            goto label_109624;
        }
    }
    ctx->pc = 0x109614u;
label_109614:
    // 0x109614: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x109614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_109618:
    // 0x109618: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x109618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_10961c:
    // 0x10961c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_109620:
    if (ctx->pc == 0x109620u) {
        ctx->pc = 0x109620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10961Cu;
        // 0x109620: 0x8e250258  lw          $a1, 0x258($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109624u;
        goto label_109624;
    }
    ctx->pc = 0x10961Cu;
    {
        const bool branch_taken_0x10961c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10961c) {
            ctx->pc = 0x109620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10961Cu;
            // 0x109620: 0x8e250258  lw          $a1, 0x258($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109634u;
            goto label_109634;
        }
    }
    ctx->pc = 0x109624u;
label_109624:
    // 0x109624: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x109624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_109628:
    // 0x109628: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x109628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_10962c:
    // 0x10962c: 0xae220258  sw          $v0, 0x258($s1)
    ctx->pc = 0x10962cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
label_109630:
    // 0x109630: 0x8e250258  lw          $a1, 0x258($s1)
    ctx->pc = 0x109630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_109634:
    // 0x109634: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x109634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_109638:
    // 0x109638: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x109638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_10963c:
    // 0x10963c: 0x8e2415f4  lw          $a0, 0x15F4($s1)
    ctx->pc = 0x10963cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_109640:
    // 0x109640: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x109640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_109644:
    // 0x109644: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x109644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_109648:
    // 0x109648: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x109648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_10964c:
    // 0x10964c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_109650:
    if (ctx->pc == 0x109650u) {
        ctx->pc = 0x109650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10964Cu;
        // 0x109650: 0xae250258  sw          $a1, 0x258($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109654u;
        goto label_109654;
    }
    ctx->pc = 0x10964Cu;
    {
        const bool branch_taken_0x10964c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x109650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10964Cu;
        // 0x109650: 0xae250258  sw          $a1, 0x258($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10964c) {
            ctx->pc = 0x109660u;
            goto label_109660;
        }
    }
    ctx->pc = 0x109654u;
label_109654:
    // 0x109654: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x109654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_109658:
    // 0x109658: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x109658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_10965c:
    // 0x10965c: 0xae220258  sw          $v0, 0x258($s1)
    ctx->pc = 0x10965cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
label_109660:
    // 0x109660: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x109660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_109664:
    // 0x109664: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_109668:
    if (ctx->pc == 0x109668u) {
        ctx->pc = 0x109668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109664u;
        // 0x109668: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10966Cu;
        goto label_10966c;
    }
    ctx->pc = 0x109664u;
    {
        const bool branch_taken_0x109664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109664u;
        // 0x109668: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109664) {
            ctx->pc = 0x109678u;
            goto label_109678;
        }
    }
    ctx->pc = 0x10966Cu;
label_10966c:
    // 0x10966c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x10966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_109670:
    // 0x109670: 0x10000002  b           . + 4 + (0x2 << 2)
label_109674:
    if (ctx->pc == 0x109674u) {
        ctx->pc = 0x109674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109670u;
        // 0x109674: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109678u;
        goto label_109678;
    }
    ctx->pc = 0x109670u;
    {
        const bool branch_taken_0x109670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109670u;
        // 0x109674: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109670) {
            ctx->pc = 0x10967Cu;
            goto label_10967c;
        }
    }
    ctx->pc = 0x109678u;
label_109678:
    // 0x109678: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x109678u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10967c:
    // 0x10967c: 0x1260004f  beqz        $s3, . + 4 + (0x4F << 2)
label_109680:
    if (ctx->pc == 0x109680u) {
        ctx->pc = 0x109680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10967Cu;
        // 0x109680: 0x27b20030  addiu       $s2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109684u;
        goto label_109684;
    }
    ctx->pc = 0x10967Cu;
    {
        const bool branch_taken_0x10967c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x109680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10967Cu;
        // 0x109680: 0x27b20030  addiu       $s2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10967c) {
            ctx->pc = 0x1097BCu;
            goto label_1097bc;
        }
    }
    ctx->pc = 0x109684u;
label_109684:
    // 0x109684: 0x26300480  addiu       $s0, $s1, 0x480
    ctx->pc = 0x109684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1152));
label_109688:
    // 0x109688: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x109688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_10968c:
    // 0x10968c: 0xc04078a  jal         func_101E28
label_109690:
    if (ctx->pc == 0x109690u) {
        ctx->pc = 0x109690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10968Cu;
        // 0x109690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109694u;
        goto label_109694;
    }
    ctx->pc = 0x10968Cu;
    SET_GPR_U32(ctx, 31, 0x109694u);
    ctx->pc = 0x109690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10968Cu;
    // 0x109690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x10968Cu, 0x109694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109694u;
label_109694:
    // 0x109694: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x109694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_109698:
    // 0x109698: 0x0  nop
    ctx->pc = 0x109698u;
    // NOP
label_10969c:
    // 0x10969c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x10969cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1096a0:
    // 0x1096a0: 0x0  nop
    ctx->pc = 0x1096a0u;
    // NOP
label_1096a4:
    // 0x1096a4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1096a8:
    if (ctx->pc == 0x1096A8u) {
        ctx->pc = 0x1096ACu;
        goto label_1096ac;
    }
    ctx->pc = 0x1096A4u;
    {
        const bool branch_taken_0x1096a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1096a4) {
            ctx->pc = 0x1096ECu;
            goto label_1096ec;
        }
    }
    ctx->pc = 0x1096ACu;
label_1096ac:
    // 0x1096ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1096acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1096b0:
    // 0x1096b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1096b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1096b4:
    // 0x1096b4: 0xc6210480  lwc1        $f1, 0x480($s1)
    ctx->pc = 0x1096b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1096b8:
    // 0x1096b8: 0x0  nop
    ctx->pc = 0x1096b8u;
    // NOP
label_1096bc:
    // 0x1096bc: 0x0  nop
    ctx->pc = 0x1096bcu;
    // NOP
label_1096c0:
    // 0x1096c0: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1096c0u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
label_1096c4:
    // 0x1096c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1096c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1096c8:
    // 0x1096c8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1096c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1096cc:
    // 0x1096cc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1096ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1096d0:
    // 0x1096d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1096d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1096d4:
    // 0x1096d4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1096d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1096d8:
    // 0x1096d8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1096d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1096dc:
    // 0x1096dc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1096dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1096e0:
    // 0x1096e0: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1096e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1096e4:
    // 0x1096e4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1096e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1096e8:
    // 0x1096e8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1096e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1096ec:
    // 0x1096ec: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1096ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1096f0:
    // 0x1096f0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1096f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1096f4:
    // 0x1096f4: 0x12150006  beq         $s0, $s5, . + 4 + (0x6 << 2)
label_1096f8:
    if (ctx->pc == 0x1096F8u) {
        ctx->pc = 0x1096F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096F4u;
        // 0x1096f8: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1096FCu;
        goto label_1096fc;
    }
    ctx->pc = 0x1096F4u;
    {
        const bool branch_taken_0x1096f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x1096F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096F4u;
        // 0x1096f8: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096f4) {
            ctx->pc = 0x109710u;
            goto label_109710;
        }
    }
    ctx->pc = 0x1096FCu;
label_1096fc:
    // 0x1096fc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1096fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_109700:
    // 0x109700: 0xe6200480  swc1        $f0, 0x480($s1)
    ctx->pc = 0x109700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1152), bits); }
label_109704:
    // 0x109704: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x109704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_109708:
    // 0x109708: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x109708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10970c:
    // 0x10970c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x10970cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_109710:
    // 0x109710: 0xc6210484  lwc1        $f1, 0x484($s1)
    ctx->pc = 0x109710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_109714:
    // 0x109714: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x109714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_109718:
    // 0x109718: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x109718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10971c:
    // 0x10971c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x10971cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_109720:
    // 0x109720: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x109720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_109724:
    // 0x109724: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x109724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_109728:
    // 0x109728: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x109728u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_10972c:
    // 0x10972c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10972cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_109730:
    // 0x109730: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x109730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_109734:
    // 0x109734: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x109734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_109738:
    // 0x109738: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x109738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_10973c:
    // 0x10973c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10973cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_109740:
    // 0x109740: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x109740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_109744:
    // 0x109744: 0x460200c2  mul.s       $f3, $f0, $f2
    ctx->pc = 0x109744u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_109748:
    // 0x109748: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x109748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10974c:
    // 0x10974c: 0x0  nop
    ctx->pc = 0x10974cu;
    // NOP
label_109750:
    // 0x109750: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_109754:
    if (ctx->pc == 0x109754u) {
        ctx->pc = 0x109754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109750u;
        // 0x109754: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x109758u;
        goto label_109758;
    }
    ctx->pc = 0x109750u;
    {
        const bool branch_taken_0x109750 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x109750) {
            ctx->pc = 0x109754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109750u;
            // 0x109754: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x109758u;
            goto label_109758;
        }
    }
    ctx->pc = 0x109758u;
label_109758:
    // 0x109758: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x109758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_10975c:
    // 0x10975c: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x10975cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
label_109760:
    // 0x109760: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_109764:
    if (ctx->pc == 0x109764u) {
        ctx->pc = 0x109764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109760u;
        // 0x109764: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x109768u;
        goto label_109768;
    }
    ctx->pc = 0x109760u;
    {
        const bool branch_taken_0x109760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109760) {
            ctx->pc = 0x109764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109760u;
            // 0x109764: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x109768u;
            goto label_109768;
        }
    }
    ctx->pc = 0x109768u;
label_109768:
    // 0x109768: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x109768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_10976c:
    // 0x10976c: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x10976cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_109770:
    // 0x109770: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x109770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_109774:
    // 0x109774: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x109774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_109778:
    // 0x109778: 0xc461d470  lwc1        $f1, -0x2B90($v1)
    ctx->pc = 0x109778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10977c:
    // 0x10977c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x10977cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_109780:
    // 0x109780: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x109780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_109784:
    // 0x109784: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x109784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_109788:
    // 0x109788: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x109788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_10978c:
    // 0x10978c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x10978cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_109790:
    // 0x109790: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x109790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_109794:
    // 0x109794: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x109794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_109798:
    // 0x109798: 0x0  nop
    ctx->pc = 0x109798u;
    // NOP
label_10979c:
    // 0x10979c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1097a0:
    if (ctx->pc == 0x1097A0u) {
        ctx->pc = 0x1097A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10979Cu;
        // 0x1097a0: 0xe461d470  swc1        $f1, -0x2B90($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097A4u;
        goto label_1097a4;
    }
    ctx->pc = 0x10979Cu;
    {
        const bool branch_taken_0x10979c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1097A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10979Cu;
        // 0x1097a0: 0xe461d470  swc1        $f1, -0x2B90($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10979c) {
            ctx->pc = 0x1097A8u;
            goto label_1097a8;
        }
    }
    ctx->pc = 0x1097A4u;
label_1097a4:
    // 0x1097a4: 0xe464d470  swc1        $f4, -0x2B90($v1)
    ctx->pc = 0x1097a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956144), bits); }
label_1097a8:
    // 0x1097a8: 0x8e6200d0  lw          $v0, 0xD0($s3)
    ctx->pc = 0x1097a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
label_1097ac:
    // 0x1097ac: 0xc461d470  lwc1        $f1, -0x2B90($v1)
    ctx->pc = 0x1097acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1097b0:
    // 0x1097b0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1097b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1097b4:
    // 0x1097b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1097b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1097b8:
    // 0x1097b8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1097b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1097bc:
    // 0x1097bc: 0xc0527ae  jal         func_149EB8
label_1097c0:
    if (ctx->pc == 0x1097C0u) {
        ctx->pc = 0x1097C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097BCu;
        // 0x1097c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097C4u;
        goto label_1097c4;
    }
    ctx->pc = 0x1097BCu;
    SET_GPR_U32(ctx, 31, 0x1097C4u);
    ctx->pc = 0x1097C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1097BCu;
    // 0x1097c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1097BCu, 0x1097C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1097C4u;
label_1097c4:
    // 0x1097c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1097c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1097c8:
    // 0x1097c8: 0xc054a88  jal         func_152A20
label_1097cc:
    if (ctx->pc == 0x1097CCu) {
        ctx->pc = 0x1097CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097C8u;
        // 0x1097cc: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097D0u;
        goto label_1097d0;
    }
    ctx->pc = 0x1097C8u;
    SET_GPR_U32(ctx, 31, 0x1097D0u);
    ctx->pc = 0x1097CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1097C8u;
    // 0x1097cc: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x1097C8u, 0x1097D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1097D0u;
label_1097d0:
    // 0x1097d0: 0xc05280e  jal         func_14A038
label_1097d4:
    if (ctx->pc == 0x1097D4u) {
        ctx->pc = 0x1097D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097D0u;
        // 0x1097d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097D8u;
        goto label_1097d8;
    }
    ctx->pc = 0x1097D0u;
    SET_GPR_U32(ctx, 31, 0x1097D8u);
    ctx->pc = 0x1097D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1097D0u;
    // 0x1097d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x1097D0u, 0x1097D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1097D8u;
label_1097d8:
    // 0x1097d8: 0xc048c58  jal         func_123160
label_1097dc:
    if (ctx->pc == 0x1097DCu) {
        ctx->pc = 0x1097DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097D8u;
        // 0x1097dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097E0u;
        goto label_1097e0;
    }
    ctx->pc = 0x1097D8u;
    SET_GPR_U32(ctx, 31, 0x1097E0u);
    ctx->pc = 0x1097DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1097D8u;
    // 0x1097dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123160u, 0x1097D8u, 0x1097E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1097E0u;
label_1097e0:
    // 0x1097e0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1097e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1097e4:
    // 0x1097e4: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1097e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_1097e8:
    // 0x1097e8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1097e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1097ec:
    // 0x1097ec: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x1097ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1097f0:
    // 0x1097f0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1097f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1097f4:
    // 0x1097f4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1097f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1097f8:
    // 0x1097f8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1097f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1097fc:
    // 0x1097fc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1097fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_109800:
    // 0x109800: 0x26220550  addiu       $v0, $s1, 0x550
    ctx->pc = 0x109800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_109804:
    // 0x109804: 0x10550006  beq         $v0, $s5, . + 4 + (0x6 << 2)
label_109808:
    if (ctx->pc == 0x109808u) {
        ctx->pc = 0x109808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109804u;
        // 0x109808: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10980Cu;
        goto label_10980c;
    }
    ctx->pc = 0x109804u;
    {
        const bool branch_taken_0x109804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x109808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109804u;
        // 0x109808: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x109804) {
            ctx->pc = 0x109820u;
            goto label_109820;
        }
    }
    ctx->pc = 0x10980Cu;
label_10980c:
    // 0x10980c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x10980cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_109810:
    // 0x109810: 0xe6200550  swc1        $f0, 0x550($s1)
    ctx->pc = 0x109810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1360), bits); }
label_109814:
    // 0x109814: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x109814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_109818:
    // 0x109818: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x109818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10981c:
    // 0x10981c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x10981cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_109820:
    // 0x109820: 0x26220630  addiu       $v0, $s1, 0x630
    ctx->pc = 0x109820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1584));
label_109824:
    // 0x109824: 0x26230490  addiu       $v1, $s1, 0x490
    ctx->pc = 0x109824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_109828:
    // 0x109828: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
label_10982c:
    if (ctx->pc == 0x10982Cu) {
        ctx->pc = 0x10982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109828u;
        // 0x10982c: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109830u;
        goto label_109830;
    }
    ctx->pc = 0x109828u;
    {
        const bool branch_taken_0x109828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x109828) {
            ctx->pc = 0x10982Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109828u;
            // 0x10982c: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10984Cu;
            goto label_10984c;
        }
    }
    ctx->pc = 0x109830u;
label_109830:
    // 0x109830: 0xc6200490  lwc1        $f0, 0x490($s1)
    ctx->pc = 0x109830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_109834:
    // 0x109834: 0xe6200630  swc1        $f0, 0x630($s1)
    ctx->pc = 0x109834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1584), bits); }
label_109838:
    // 0x109838: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x109838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10983c:
    // 0x10983c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x10983cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_109840:
    // 0x109840: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x109840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_109844:
    // 0x109844: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x109844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_109848:
    // 0x109848: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x109848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_10984c:
    // 0x10984c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_109850:
    if (ctx->pc == 0x109850u) {
        ctx->pc = 0x109850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10984Cu;
        // 0x109850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109854u;
        goto label_109854;
    }
    ctx->pc = 0x10984Cu;
    {
        const bool branch_taken_0x10984c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x109850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10984Cu;
        // 0x109850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10984c) {
            ctx->pc = 0x10986Cu;
            goto label_10986c;
        }
    }
    ctx->pc = 0x109854u;
label_109854:
    // 0x109854: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x109854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_109858:
    // 0x109858: 0xe6200490  swc1        $f0, 0x490($s1)
    ctx->pc = 0x109858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1168), bits); }
label_10985c:
    // 0x10985c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x10985cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_109860:
    // 0x109860: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x109860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_109864:
    // 0x109864: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x109864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_109868:
    // 0x109868: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x109868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_10986c:
    // 0x10986c: 0xc04b300  jal         func_12CC00
label_109870:
    if (ctx->pc == 0x109870u) {
        ctx->pc = 0x109870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10986Cu;
        // 0x109870: 0x26f09b70  addiu       $s0, $s7, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109874u;
        goto label_109874;
    }
    ctx->pc = 0x10986Cu;
    SET_GPR_U32(ctx, 31, 0x109874u);
    ctx->pc = 0x109870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10986Cu;
    // 0x109870: 0x26f09b70  addiu       $s0, $s7, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CC00u, 0x10986Cu, 0x109874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109874u;
label_109874:
    // 0x109874: 0xc07eb2c  jal         func_1FACB0
label_109878:
    if (ctx->pc == 0x109878u) {
        ctx->pc = 0x109878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109874u;
        // 0x109878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10987Cu;
        goto label_10987c;
    }
    ctx->pc = 0x109874u;
    SET_GPR_U32(ctx, 31, 0x10987Cu);
    ctx->pc = 0x109878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109874u;
    // 0x109878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FACB0u, 0x109874u, 0x10987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10987Cu;
label_10987c:
    // 0x10987c: 0xc07eb20  jal         func_1FAC80
label_109880:
    if (ctx->pc == 0x109880u) {
        ctx->pc = 0x109880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10987Cu;
        // 0x109880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109884u;
        goto label_109884;
    }
    ctx->pc = 0x10987Cu;
    SET_GPR_U32(ctx, 31, 0x109884u);
    ctx->pc = 0x109880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10987Cu;
    // 0x109880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC80u, 0x10987Cu, 0x109884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109884u;
label_109884:
    // 0x109884: 0x8625054a  lh          $a1, 0x54A($s1)
    ctx->pc = 0x109884u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_109888:
    // 0x109888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10988c:
    // 0x10988c: 0xc07eb26  jal         func_1FAC98
label_109890:
    if (ctx->pc == 0x109890u) {
        ctx->pc = 0x109890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10988Cu;
        // 0x109890: 0xa6220548  sh          $v0, 0x548($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109894u;
        goto label_109894;
    }
    ctx->pc = 0x10988Cu;
    SET_GPR_U32(ctx, 31, 0x109894u);
    ctx->pc = 0x109890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10988Cu;
    // 0x109890: 0xa6220548  sh          $v0, 0x548($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC98u, 0x10988Cu, 0x109894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109894u;
label_109894:
    // 0x109894: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x109894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
label_109898:
    // 0x109898: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x109898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10989c:
    // 0x10989c: 0xc0aa6fc  jal         func_2A9BF0
label_1098a0:
    if (ctx->pc == 0x1098A0u) {
        ctx->pc = 0x1098A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10989Cu;
        // 0x1098a0: 0x26c4b000  addiu       $a0, $s6, -0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098A4u;
        goto label_1098a4;
    }
    ctx->pc = 0x10989Cu;
    SET_GPR_U32(ctx, 31, 0x1098A4u);
    ctx->pc = 0x1098A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10989Cu;
    // 0x1098a0: 0x26c4b000  addiu       $a0, $s6, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9BF0u, 0x10989Cu, 0x1098A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098A4u;
label_1098a4:
    // 0x1098a4: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x1098a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_1098a8:
    // 0x1098a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1098ac:
    if (ctx->pc == 0x1098ACu) {
        ctx->pc = 0x1098ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098A8u;
        // 0x1098ac: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098B0u;
        goto label_1098b0;
    }
    ctx->pc = 0x1098A8u;
    {
        const bool branch_taken_0x1098a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1098ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098A8u;
        // 0x1098ac: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098a8) {
            ctx->pc = 0x1098BCu;
            goto label_1098bc;
        }
    }
    ctx->pc = 0x1098B0u;
label_1098b0:
    // 0x1098b0: 0x8e2206a0  lw          $v0, 0x6A0($s1)
    ctx->pc = 0x1098b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_1098b4:
    // 0x1098b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1098b8:
    if (ctx->pc == 0x1098B8u) {
        ctx->pc = 0x1098B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098B4u;
        // 0x1098b8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098BCu;
        goto label_1098bc;
    }
    ctx->pc = 0x1098B4u;
    {
        const bool branch_taken_0x1098b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1098B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098B4u;
        // 0x1098b8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098b4) {
            ctx->pc = 0x1098D0u;
            goto label_1098d0;
        }
    }
    ctx->pc = 0x1098BCu;
label_1098bc:
    // 0x1098bc: 0x8c43d6e8  lw          $v1, -0x2918($v0)
    ctx->pc = 0x1098bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
label_1098c0:
    // 0x1098c0: 0x24631ae0  addiu       $v1, $v1, 0x1AE0
    ctx->pc = 0x1098c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6880));
label_1098c4:
    // 0x1098c4: 0x906201c0  lbu         $v0, 0x1C0($v1)
    ctx->pc = 0x1098c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 448)));
label_1098c8:
    // 0x1098c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1098c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1098cc:
    // 0x1098cc: 0xa06201c0  sb          $v0, 0x1C0($v1)
    ctx->pc = 0x1098ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 448), (uint8_t)GPR_U32(ctx, 2));
label_1098d0:
    // 0x1098d0: 0xc07f02a  jal         func_1FC0A8
label_1098d4:
    if (ctx->pc == 0x1098D4u) {
        ctx->pc = 0x1098D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098D0u;
        // 0x1098d4: 0x26e49b70  addiu       $a0, $s7, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098D8u;
        goto label_1098d8;
    }
    ctx->pc = 0x1098D0u;
    SET_GPR_U32(ctx, 31, 0x1098D8u);
    ctx->pc = 0x1098D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098D0u;
    // 0x1098d4: 0x26e49b70  addiu       $a0, $s7, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x1098D0u, 0x1098D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098D8u;
label_1098d8:
    // 0x1098d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1098d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1098dc:
    // 0x1098dc: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x1098dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_1098e0:
    // 0x1098e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1098e4:
    if (ctx->pc == 0x1098E4u) {
        ctx->pc = 0x1098E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098E0u;
        // 0x1098e4: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098E8u;
        goto label_1098e8;
    }
    ctx->pc = 0x1098E0u;
    {
        const bool branch_taken_0x1098e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1098E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098E0u;
        // 0x1098e4: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098e0) {
            ctx->pc = 0x1098F0u;
            goto label_1098f0;
        }
    }
    ctx->pc = 0x1098E8u;
label_1098e8:
    // 0x1098e8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1098ec:
    if (ctx->pc == 0x1098ECu) {
        ctx->pc = 0x1098ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098E8u;
        // 0x1098ec: 0xae200674  sw          $zero, 0x674($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098F0u;
        goto label_1098f0;
    }
    ctx->pc = 0x1098E8u;
    {
        const bool branch_taken_0x1098e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1098e8) {
            ctx->pc = 0x1098ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1098E8u;
            // 0x1098ec: 0xae200674  sw          $zero, 0x674($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1098F0u;
            goto label_1098f0;
        }
    }
    ctx->pc = 0x1098F0u;
label_1098f0:
    // 0x1098f0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1098f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1098f4:
    // 0x1098f4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1098f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1098f8:
    // 0x1098f8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1098f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1098fc:
    // 0x1098fc: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1098fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_109900:
    // 0x109900: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x109900u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_109904:
    // 0x109904: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x109904u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_109908:
    // 0x109908: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x109908u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_10990c:
    // 0x10990c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x10990cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_109910:
    // 0x109910: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x109910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_109914:
    // 0x109914: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x109914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_109918:
    // 0x109918: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x109918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10991c:
    // 0x10991c: 0x3e00008  jr          $ra
label_109920:
    if (ctx->pc == 0x109920u) {
        ctx->pc = 0x109920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10991Cu;
        // 0x109920: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109924u;
        goto label_109924;
    }
    ctx->pc = 0x10991Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10991Cu;
        // 0x109920: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10991Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109924u;
label_109924:
    // 0x109924: 0x0  nop
    ctx->pc = 0x109924u;
    // NOP
    ctx->pc = 0x109928u;
}
