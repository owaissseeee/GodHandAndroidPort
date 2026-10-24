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

// Function: func_00208BE0
// Address: 0x208be0 - 0x20a178
void func_00208BE0_0x208be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00208BE0_0x208be0");
#endif

    switch (ctx->pc) {
        case 0x208be0u: goto label_208be0;
        case 0x208be4u: goto label_208be4;
        case 0x208be8u: goto label_208be8;
        case 0x208becu: goto label_208bec;
        case 0x208bf0u: goto label_208bf0;
        case 0x208bf4u: goto label_208bf4;
        case 0x208bf8u: goto label_208bf8;
        case 0x208bfcu: goto label_208bfc;
        case 0x208c00u: goto label_208c00;
        case 0x208c04u: goto label_208c04;
        case 0x208c08u: goto label_208c08;
        case 0x208c0cu: goto label_208c0c;
        case 0x208c10u: goto label_208c10;
        case 0x208c14u: goto label_208c14;
        case 0x208c18u: goto label_208c18;
        case 0x208c1cu: goto label_208c1c;
        case 0x208c20u: goto label_208c20;
        case 0x208c24u: goto label_208c24;
        case 0x208c28u: goto label_208c28;
        case 0x208c2cu: goto label_208c2c;
        case 0x208c30u: goto label_208c30;
        case 0x208c34u: goto label_208c34;
        case 0x208c38u: goto label_208c38;
        case 0x208c3cu: goto label_208c3c;
        case 0x208c40u: goto label_208c40;
        case 0x208c44u: goto label_208c44;
        case 0x208c48u: goto label_208c48;
        case 0x208c4cu: goto label_208c4c;
        case 0x208c50u: goto label_208c50;
        case 0x208c54u: goto label_208c54;
        case 0x208c58u: goto label_208c58;
        case 0x208c5cu: goto label_208c5c;
        case 0x208c60u: goto label_208c60;
        case 0x208c64u: goto label_208c64;
        case 0x208c68u: goto label_208c68;
        case 0x208c6cu: goto label_208c6c;
        case 0x208c70u: goto label_208c70;
        case 0x208c74u: goto label_208c74;
        case 0x208c78u: goto label_208c78;
        case 0x208c7cu: goto label_208c7c;
        case 0x208c80u: goto label_208c80;
        case 0x208c84u: goto label_208c84;
        case 0x208c88u: goto label_208c88;
        case 0x208c8cu: goto label_208c8c;
        case 0x208c90u: goto label_208c90;
        case 0x208c94u: goto label_208c94;
        case 0x208c98u: goto label_208c98;
        case 0x208c9cu: goto label_208c9c;
        case 0x208ca0u: goto label_208ca0;
        case 0x208ca4u: goto label_208ca4;
        case 0x208ca8u: goto label_208ca8;
        case 0x208cacu: goto label_208cac;
        case 0x208cb0u: goto label_208cb0;
        case 0x208cb4u: goto label_208cb4;
        case 0x208cb8u: goto label_208cb8;
        case 0x208cbcu: goto label_208cbc;
        case 0x208cc0u: goto label_208cc0;
        case 0x208cc4u: goto label_208cc4;
        case 0x208cc8u: goto label_208cc8;
        case 0x208cccu: goto label_208ccc;
        case 0x208cd0u: goto label_208cd0;
        case 0x208cd4u: goto label_208cd4;
        case 0x208cd8u: goto label_208cd8;
        case 0x208cdcu: goto label_208cdc;
        case 0x208ce0u: goto label_208ce0;
        case 0x208ce4u: goto label_208ce4;
        case 0x208ce8u: goto label_208ce8;
        case 0x208cecu: goto label_208cec;
        case 0x208cf0u: goto label_208cf0;
        case 0x208cf4u: goto label_208cf4;
        case 0x208cf8u: goto label_208cf8;
        case 0x208cfcu: goto label_208cfc;
        case 0x208d00u: goto label_208d00;
        case 0x208d04u: goto label_208d04;
        case 0x208d08u: goto label_208d08;
        case 0x208d0cu: goto label_208d0c;
        case 0x208d10u: goto label_208d10;
        case 0x208d14u: goto label_208d14;
        case 0x208d18u: goto label_208d18;
        case 0x208d1cu: goto label_208d1c;
        case 0x208d20u: goto label_208d20;
        case 0x208d24u: goto label_208d24;
        case 0x208d28u: goto label_208d28;
        case 0x208d2cu: goto label_208d2c;
        case 0x208d30u: goto label_208d30;
        case 0x208d34u: goto label_208d34;
        case 0x208d38u: goto label_208d38;
        case 0x208d3cu: goto label_208d3c;
        case 0x208d40u: goto label_208d40;
        case 0x208d44u: goto label_208d44;
        case 0x208d48u: goto label_208d48;
        case 0x208d4cu: goto label_208d4c;
        case 0x208d50u: goto label_208d50;
        case 0x208d54u: goto label_208d54;
        case 0x208d58u: goto label_208d58;
        case 0x208d5cu: goto label_208d5c;
        case 0x208d60u: goto label_208d60;
        case 0x208d64u: goto label_208d64;
        case 0x208d68u: goto label_208d68;
        case 0x208d6cu: goto label_208d6c;
        case 0x208d70u: goto label_208d70;
        case 0x208d74u: goto label_208d74;
        case 0x208d78u: goto label_208d78;
        case 0x208d7cu: goto label_208d7c;
        case 0x208d80u: goto label_208d80;
        case 0x208d84u: goto label_208d84;
        case 0x208d88u: goto label_208d88;
        case 0x208d8cu: goto label_208d8c;
        case 0x208d90u: goto label_208d90;
        case 0x208d94u: goto label_208d94;
        case 0x208d98u: goto label_208d98;
        case 0x208d9cu: goto label_208d9c;
        case 0x208da0u: goto label_208da0;
        case 0x208da4u: goto label_208da4;
        case 0x208da8u: goto label_208da8;
        case 0x208dacu: goto label_208dac;
        case 0x208db0u: goto label_208db0;
        case 0x208db4u: goto label_208db4;
        case 0x208db8u: goto label_208db8;
        case 0x208dbcu: goto label_208dbc;
        case 0x208dc0u: goto label_208dc0;
        case 0x208dc4u: goto label_208dc4;
        case 0x208dc8u: goto label_208dc8;
        case 0x208dccu: goto label_208dcc;
        case 0x208dd0u: goto label_208dd0;
        case 0x208dd4u: goto label_208dd4;
        case 0x208dd8u: goto label_208dd8;
        case 0x208ddcu: goto label_208ddc;
        case 0x208de0u: goto label_208de0;
        case 0x208de4u: goto label_208de4;
        case 0x208de8u: goto label_208de8;
        case 0x208decu: goto label_208dec;
        case 0x208df0u: goto label_208df0;
        case 0x208df4u: goto label_208df4;
        case 0x208df8u: goto label_208df8;
        case 0x208dfcu: goto label_208dfc;
        case 0x208e00u: goto label_208e00;
        case 0x208e04u: goto label_208e04;
        case 0x208e08u: goto label_208e08;
        case 0x208e0cu: goto label_208e0c;
        case 0x208e10u: goto label_208e10;
        case 0x208e14u: goto label_208e14;
        case 0x208e18u: goto label_208e18;
        case 0x208e1cu: goto label_208e1c;
        case 0x208e20u: goto label_208e20;
        case 0x208e24u: goto label_208e24;
        case 0x208e28u: goto label_208e28;
        case 0x208e2cu: goto label_208e2c;
        case 0x208e30u: goto label_208e30;
        case 0x208e34u: goto label_208e34;
        case 0x208e38u: goto label_208e38;
        case 0x208e3cu: goto label_208e3c;
        case 0x208e40u: goto label_208e40;
        case 0x208e44u: goto label_208e44;
        case 0x208e48u: goto label_208e48;
        case 0x208e4cu: goto label_208e4c;
        case 0x208e50u: goto label_208e50;
        case 0x208e54u: goto label_208e54;
        case 0x208e58u: goto label_208e58;
        case 0x208e5cu: goto label_208e5c;
        case 0x208e60u: goto label_208e60;
        case 0x208e64u: goto label_208e64;
        case 0x208e68u: goto label_208e68;
        case 0x208e6cu: goto label_208e6c;
        case 0x208e70u: goto label_208e70;
        case 0x208e74u: goto label_208e74;
        case 0x208e78u: goto label_208e78;
        case 0x208e7cu: goto label_208e7c;
        case 0x208e80u: goto label_208e80;
        case 0x208e84u: goto label_208e84;
        case 0x208e88u: goto label_208e88;
        case 0x208e8cu: goto label_208e8c;
        case 0x208e90u: goto label_208e90;
        case 0x208e94u: goto label_208e94;
        case 0x208e98u: goto label_208e98;
        case 0x208e9cu: goto label_208e9c;
        case 0x208ea0u: goto label_208ea0;
        case 0x208ea4u: goto label_208ea4;
        case 0x208ea8u: goto label_208ea8;
        case 0x208eacu: goto label_208eac;
        case 0x208eb0u: goto label_208eb0;
        case 0x208eb4u: goto label_208eb4;
        case 0x208eb8u: goto label_208eb8;
        case 0x208ebcu: goto label_208ebc;
        case 0x208ec0u: goto label_208ec0;
        case 0x208ec4u: goto label_208ec4;
        case 0x208ec8u: goto label_208ec8;
        case 0x208eccu: goto label_208ecc;
        case 0x208ed0u: goto label_208ed0;
        case 0x208ed4u: goto label_208ed4;
        case 0x208ed8u: goto label_208ed8;
        case 0x208edcu: goto label_208edc;
        case 0x208ee0u: goto label_208ee0;
        case 0x208ee4u: goto label_208ee4;
        case 0x208ee8u: goto label_208ee8;
        case 0x208eecu: goto label_208eec;
        case 0x208ef0u: goto label_208ef0;
        case 0x208ef4u: goto label_208ef4;
        case 0x208ef8u: goto label_208ef8;
        case 0x208efcu: goto label_208efc;
        case 0x208f00u: goto label_208f00;
        case 0x208f04u: goto label_208f04;
        case 0x208f08u: goto label_208f08;
        case 0x208f0cu: goto label_208f0c;
        case 0x208f10u: goto label_208f10;
        case 0x208f14u: goto label_208f14;
        case 0x208f18u: goto label_208f18;
        case 0x208f1cu: goto label_208f1c;
        case 0x208f20u: goto label_208f20;
        case 0x208f24u: goto label_208f24;
        case 0x208f28u: goto label_208f28;
        case 0x208f2cu: goto label_208f2c;
        case 0x208f30u: goto label_208f30;
        case 0x208f34u: goto label_208f34;
        case 0x208f38u: goto label_208f38;
        case 0x208f3cu: goto label_208f3c;
        case 0x208f40u: goto label_208f40;
        case 0x208f44u: goto label_208f44;
        case 0x208f48u: goto label_208f48;
        case 0x208f4cu: goto label_208f4c;
        case 0x208f50u: goto label_208f50;
        case 0x208f54u: goto label_208f54;
        case 0x208f58u: goto label_208f58;
        case 0x208f5cu: goto label_208f5c;
        case 0x208f60u: goto label_208f60;
        case 0x208f64u: goto label_208f64;
        case 0x208f68u: goto label_208f68;
        case 0x208f6cu: goto label_208f6c;
        case 0x208f70u: goto label_208f70;
        case 0x208f74u: goto label_208f74;
        case 0x208f78u: goto label_208f78;
        case 0x208f7cu: goto label_208f7c;
        case 0x208f80u: goto label_208f80;
        case 0x208f84u: goto label_208f84;
        case 0x208f88u: goto label_208f88;
        case 0x208f8cu: goto label_208f8c;
        case 0x208f90u: goto label_208f90;
        case 0x208f94u: goto label_208f94;
        case 0x208f98u: goto label_208f98;
        case 0x208f9cu: goto label_208f9c;
        case 0x208fa0u: goto label_208fa0;
        case 0x208fa4u: goto label_208fa4;
        case 0x208fa8u: goto label_208fa8;
        case 0x208facu: goto label_208fac;
        case 0x208fb0u: goto label_208fb0;
        case 0x208fb4u: goto label_208fb4;
        case 0x208fb8u: goto label_208fb8;
        case 0x208fbcu: goto label_208fbc;
        case 0x208fc0u: goto label_208fc0;
        case 0x208fc4u: goto label_208fc4;
        case 0x208fc8u: goto label_208fc8;
        case 0x208fccu: goto label_208fcc;
        case 0x208fd0u: goto label_208fd0;
        case 0x208fd4u: goto label_208fd4;
        case 0x208fd8u: goto label_208fd8;
        case 0x208fdcu: goto label_208fdc;
        case 0x208fe0u: goto label_208fe0;
        case 0x208fe4u: goto label_208fe4;
        case 0x208fe8u: goto label_208fe8;
        case 0x208fecu: goto label_208fec;
        case 0x208ff0u: goto label_208ff0;
        case 0x208ff4u: goto label_208ff4;
        case 0x208ff8u: goto label_208ff8;
        case 0x208ffcu: goto label_208ffc;
        case 0x209000u: goto label_209000;
        case 0x209004u: goto label_209004;
        case 0x209008u: goto label_209008;
        case 0x20900cu: goto label_20900c;
        case 0x209010u: goto label_209010;
        case 0x209014u: goto label_209014;
        case 0x209018u: goto label_209018;
        case 0x20901cu: goto label_20901c;
        case 0x209020u: goto label_209020;
        case 0x209024u: goto label_209024;
        case 0x209028u: goto label_209028;
        case 0x20902cu: goto label_20902c;
        case 0x209030u: goto label_209030;
        case 0x209034u: goto label_209034;
        case 0x209038u: goto label_209038;
        case 0x20903cu: goto label_20903c;
        case 0x209040u: goto label_209040;
        case 0x209044u: goto label_209044;
        case 0x209048u: goto label_209048;
        case 0x20904cu: goto label_20904c;
        case 0x209050u: goto label_209050;
        case 0x209054u: goto label_209054;
        case 0x209058u: goto label_209058;
        case 0x20905cu: goto label_20905c;
        case 0x209060u: goto label_209060;
        case 0x209064u: goto label_209064;
        case 0x209068u: goto label_209068;
        case 0x20906cu: goto label_20906c;
        case 0x209070u: goto label_209070;
        case 0x209074u: goto label_209074;
        case 0x209078u: goto label_209078;
        case 0x20907cu: goto label_20907c;
        case 0x209080u: goto label_209080;
        case 0x209084u: goto label_209084;
        case 0x209088u: goto label_209088;
        case 0x20908cu: goto label_20908c;
        case 0x209090u: goto label_209090;
        case 0x209094u: goto label_209094;
        case 0x209098u: goto label_209098;
        case 0x20909cu: goto label_20909c;
        case 0x2090a0u: goto label_2090a0;
        case 0x2090a4u: goto label_2090a4;
        case 0x2090a8u: goto label_2090a8;
        case 0x2090acu: goto label_2090ac;
        case 0x2090b0u: goto label_2090b0;
        case 0x2090b4u: goto label_2090b4;
        case 0x2090b8u: goto label_2090b8;
        case 0x2090bcu: goto label_2090bc;
        case 0x2090c0u: goto label_2090c0;
        case 0x2090c4u: goto label_2090c4;
        case 0x2090c8u: goto label_2090c8;
        case 0x2090ccu: goto label_2090cc;
        case 0x2090d0u: goto label_2090d0;
        case 0x2090d4u: goto label_2090d4;
        case 0x2090d8u: goto label_2090d8;
        case 0x2090dcu: goto label_2090dc;
        case 0x2090e0u: goto label_2090e0;
        case 0x2090e4u: goto label_2090e4;
        case 0x2090e8u: goto label_2090e8;
        case 0x2090ecu: goto label_2090ec;
        case 0x2090f0u: goto label_2090f0;
        case 0x2090f4u: goto label_2090f4;
        case 0x2090f8u: goto label_2090f8;
        case 0x2090fcu: goto label_2090fc;
        case 0x209100u: goto label_209100;
        case 0x209104u: goto label_209104;
        case 0x209108u: goto label_209108;
        case 0x20910cu: goto label_20910c;
        case 0x209110u: goto label_209110;
        case 0x209114u: goto label_209114;
        case 0x209118u: goto label_209118;
        case 0x20911cu: goto label_20911c;
        case 0x209120u: goto label_209120;
        case 0x209124u: goto label_209124;
        case 0x209128u: goto label_209128;
        case 0x20912cu: goto label_20912c;
        case 0x209130u: goto label_209130;
        case 0x209134u: goto label_209134;
        case 0x209138u: goto label_209138;
        case 0x20913cu: goto label_20913c;
        case 0x209140u: goto label_209140;
        case 0x209144u: goto label_209144;
        case 0x209148u: goto label_209148;
        case 0x20914cu: goto label_20914c;
        case 0x209150u: goto label_209150;
        case 0x209154u: goto label_209154;
        case 0x209158u: goto label_209158;
        case 0x20915cu: goto label_20915c;
        case 0x209160u: goto label_209160;
        case 0x209164u: goto label_209164;
        case 0x209168u: goto label_209168;
        case 0x20916cu: goto label_20916c;
        case 0x209170u: goto label_209170;
        case 0x209174u: goto label_209174;
        case 0x209178u: goto label_209178;
        case 0x20917cu: goto label_20917c;
        case 0x209180u: goto label_209180;
        case 0x209184u: goto label_209184;
        case 0x209188u: goto label_209188;
        case 0x20918cu: goto label_20918c;
        case 0x209190u: goto label_209190;
        case 0x209194u: goto label_209194;
        case 0x209198u: goto label_209198;
        case 0x20919cu: goto label_20919c;
        case 0x2091a0u: goto label_2091a0;
        case 0x2091a4u: goto label_2091a4;
        case 0x2091a8u: goto label_2091a8;
        case 0x2091acu: goto label_2091ac;
        case 0x2091b0u: goto label_2091b0;
        case 0x2091b4u: goto label_2091b4;
        case 0x2091b8u: goto label_2091b8;
        case 0x2091bcu: goto label_2091bc;
        case 0x2091c0u: goto label_2091c0;
        case 0x2091c4u: goto label_2091c4;
        case 0x2091c8u: goto label_2091c8;
        case 0x2091ccu: goto label_2091cc;
        case 0x2091d0u: goto label_2091d0;
        case 0x2091d4u: goto label_2091d4;
        case 0x2091d8u: goto label_2091d8;
        case 0x2091dcu: goto label_2091dc;
        case 0x2091e0u: goto label_2091e0;
        case 0x2091e4u: goto label_2091e4;
        case 0x2091e8u: goto label_2091e8;
        case 0x2091ecu: goto label_2091ec;
        case 0x2091f0u: goto label_2091f0;
        case 0x2091f4u: goto label_2091f4;
        case 0x2091f8u: goto label_2091f8;
        case 0x2091fcu: goto label_2091fc;
        case 0x209200u: goto label_209200;
        case 0x209204u: goto label_209204;
        case 0x209208u: goto label_209208;
        case 0x20920cu: goto label_20920c;
        case 0x209210u: goto label_209210;
        case 0x209214u: goto label_209214;
        case 0x209218u: goto label_209218;
        case 0x20921cu: goto label_20921c;
        case 0x209220u: goto label_209220;
        case 0x209224u: goto label_209224;
        case 0x209228u: goto label_209228;
        case 0x20922cu: goto label_20922c;
        case 0x209230u: goto label_209230;
        case 0x209234u: goto label_209234;
        case 0x209238u: goto label_209238;
        case 0x20923cu: goto label_20923c;
        case 0x209240u: goto label_209240;
        case 0x209244u: goto label_209244;
        case 0x209248u: goto label_209248;
        case 0x20924cu: goto label_20924c;
        case 0x209250u: goto label_209250;
        case 0x209254u: goto label_209254;
        case 0x209258u: goto label_209258;
        case 0x20925cu: goto label_20925c;
        case 0x209260u: goto label_209260;
        case 0x209264u: goto label_209264;
        case 0x209268u: goto label_209268;
        case 0x20926cu: goto label_20926c;
        case 0x209270u: goto label_209270;
        case 0x209274u: goto label_209274;
        case 0x209278u: goto label_209278;
        case 0x20927cu: goto label_20927c;
        case 0x209280u: goto label_209280;
        case 0x209284u: goto label_209284;
        case 0x209288u: goto label_209288;
        case 0x20928cu: goto label_20928c;
        case 0x209290u: goto label_209290;
        case 0x209294u: goto label_209294;
        case 0x209298u: goto label_209298;
        case 0x20929cu: goto label_20929c;
        case 0x2092a0u: goto label_2092a0;
        case 0x2092a4u: goto label_2092a4;
        case 0x2092a8u: goto label_2092a8;
        case 0x2092acu: goto label_2092ac;
        case 0x2092b0u: goto label_2092b0;
        case 0x2092b4u: goto label_2092b4;
        case 0x2092b8u: goto label_2092b8;
        case 0x2092bcu: goto label_2092bc;
        case 0x2092c0u: goto label_2092c0;
        case 0x2092c4u: goto label_2092c4;
        case 0x2092c8u: goto label_2092c8;
        case 0x2092ccu: goto label_2092cc;
        case 0x2092d0u: goto label_2092d0;
        case 0x2092d4u: goto label_2092d4;
        case 0x2092d8u: goto label_2092d8;
        case 0x2092dcu: goto label_2092dc;
        case 0x2092e0u: goto label_2092e0;
        case 0x2092e4u: goto label_2092e4;
        case 0x2092e8u: goto label_2092e8;
        case 0x2092ecu: goto label_2092ec;
        case 0x2092f0u: goto label_2092f0;
        case 0x2092f4u: goto label_2092f4;
        case 0x2092f8u: goto label_2092f8;
        case 0x2092fcu: goto label_2092fc;
        case 0x209300u: goto label_209300;
        case 0x209304u: goto label_209304;
        case 0x209308u: goto label_209308;
        case 0x20930cu: goto label_20930c;
        case 0x209310u: goto label_209310;
        case 0x209314u: goto label_209314;
        case 0x209318u: goto label_209318;
        case 0x20931cu: goto label_20931c;
        case 0x209320u: goto label_209320;
        case 0x209324u: goto label_209324;
        case 0x209328u: goto label_209328;
        case 0x20932cu: goto label_20932c;
        case 0x209330u: goto label_209330;
        case 0x209334u: goto label_209334;
        case 0x209338u: goto label_209338;
        case 0x20933cu: goto label_20933c;
        case 0x209340u: goto label_209340;
        case 0x209344u: goto label_209344;
        case 0x209348u: goto label_209348;
        case 0x20934cu: goto label_20934c;
        case 0x209350u: goto label_209350;
        case 0x209354u: goto label_209354;
        case 0x209358u: goto label_209358;
        case 0x20935cu: goto label_20935c;
        case 0x209360u: goto label_209360;
        case 0x209364u: goto label_209364;
        case 0x209368u: goto label_209368;
        case 0x20936cu: goto label_20936c;
        case 0x209370u: goto label_209370;
        case 0x209374u: goto label_209374;
        case 0x209378u: goto label_209378;
        case 0x20937cu: goto label_20937c;
        case 0x209380u: goto label_209380;
        case 0x209384u: goto label_209384;
        case 0x209388u: goto label_209388;
        case 0x20938cu: goto label_20938c;
        case 0x209390u: goto label_209390;
        case 0x209394u: goto label_209394;
        case 0x209398u: goto label_209398;
        case 0x20939cu: goto label_20939c;
        case 0x2093a0u: goto label_2093a0;
        case 0x2093a4u: goto label_2093a4;
        case 0x2093a8u: goto label_2093a8;
        case 0x2093acu: goto label_2093ac;
        case 0x2093b0u: goto label_2093b0;
        case 0x2093b4u: goto label_2093b4;
        case 0x2093b8u: goto label_2093b8;
        case 0x2093bcu: goto label_2093bc;
        case 0x2093c0u: goto label_2093c0;
        case 0x2093c4u: goto label_2093c4;
        case 0x2093c8u: goto label_2093c8;
        case 0x2093ccu: goto label_2093cc;
        case 0x2093d0u: goto label_2093d0;
        case 0x2093d4u: goto label_2093d4;
        case 0x2093d8u: goto label_2093d8;
        case 0x2093dcu: goto label_2093dc;
        case 0x2093e0u: goto label_2093e0;
        case 0x2093e4u: goto label_2093e4;
        case 0x2093e8u: goto label_2093e8;
        case 0x2093ecu: goto label_2093ec;
        case 0x2093f0u: goto label_2093f0;
        case 0x2093f4u: goto label_2093f4;
        case 0x2093f8u: goto label_2093f8;
        case 0x2093fcu: goto label_2093fc;
        case 0x209400u: goto label_209400;
        case 0x209404u: goto label_209404;
        case 0x209408u: goto label_209408;
        case 0x20940cu: goto label_20940c;
        case 0x209410u: goto label_209410;
        case 0x209414u: goto label_209414;
        case 0x209418u: goto label_209418;
        case 0x20941cu: goto label_20941c;
        case 0x209420u: goto label_209420;
        case 0x209424u: goto label_209424;
        case 0x209428u: goto label_209428;
        case 0x20942cu: goto label_20942c;
        case 0x209430u: goto label_209430;
        case 0x209434u: goto label_209434;
        case 0x209438u: goto label_209438;
        case 0x20943cu: goto label_20943c;
        case 0x209440u: goto label_209440;
        case 0x209444u: goto label_209444;
        case 0x209448u: goto label_209448;
        case 0x20944cu: goto label_20944c;
        case 0x209450u: goto label_209450;
        case 0x209454u: goto label_209454;
        case 0x209458u: goto label_209458;
        case 0x20945cu: goto label_20945c;
        case 0x209460u: goto label_209460;
        case 0x209464u: goto label_209464;
        case 0x209468u: goto label_209468;
        case 0x20946cu: goto label_20946c;
        case 0x209470u: goto label_209470;
        case 0x209474u: goto label_209474;
        case 0x209478u: goto label_209478;
        case 0x20947cu: goto label_20947c;
        case 0x209480u: goto label_209480;
        case 0x209484u: goto label_209484;
        case 0x209488u: goto label_209488;
        case 0x20948cu: goto label_20948c;
        case 0x209490u: goto label_209490;
        case 0x209494u: goto label_209494;
        case 0x209498u: goto label_209498;
        case 0x20949cu: goto label_20949c;
        case 0x2094a0u: goto label_2094a0;
        case 0x2094a4u: goto label_2094a4;
        case 0x2094a8u: goto label_2094a8;
        case 0x2094acu: goto label_2094ac;
        case 0x2094b0u: goto label_2094b0;
        case 0x2094b4u: goto label_2094b4;
        case 0x2094b8u: goto label_2094b8;
        case 0x2094bcu: goto label_2094bc;
        case 0x2094c0u: goto label_2094c0;
        case 0x2094c4u: goto label_2094c4;
        case 0x2094c8u: goto label_2094c8;
        case 0x2094ccu: goto label_2094cc;
        case 0x2094d0u: goto label_2094d0;
        case 0x2094d4u: goto label_2094d4;
        case 0x2094d8u: goto label_2094d8;
        case 0x2094dcu: goto label_2094dc;
        case 0x2094e0u: goto label_2094e0;
        case 0x2094e4u: goto label_2094e4;
        case 0x2094e8u: goto label_2094e8;
        case 0x2094ecu: goto label_2094ec;
        case 0x2094f0u: goto label_2094f0;
        case 0x2094f4u: goto label_2094f4;
        case 0x2094f8u: goto label_2094f8;
        case 0x2094fcu: goto label_2094fc;
        case 0x209500u: goto label_209500;
        case 0x209504u: goto label_209504;
        case 0x209508u: goto label_209508;
        case 0x20950cu: goto label_20950c;
        case 0x209510u: goto label_209510;
        case 0x209514u: goto label_209514;
        case 0x209518u: goto label_209518;
        case 0x20951cu: goto label_20951c;
        case 0x209520u: goto label_209520;
        case 0x209524u: goto label_209524;
        case 0x209528u: goto label_209528;
        case 0x20952cu: goto label_20952c;
        case 0x209530u: goto label_209530;
        case 0x209534u: goto label_209534;
        case 0x209538u: goto label_209538;
        case 0x20953cu: goto label_20953c;
        case 0x209540u: goto label_209540;
        case 0x209544u: goto label_209544;
        case 0x209548u: goto label_209548;
        case 0x20954cu: goto label_20954c;
        case 0x209550u: goto label_209550;
        case 0x209554u: goto label_209554;
        case 0x209558u: goto label_209558;
        case 0x20955cu: goto label_20955c;
        case 0x209560u: goto label_209560;
        case 0x209564u: goto label_209564;
        case 0x209568u: goto label_209568;
        case 0x20956cu: goto label_20956c;
        case 0x209570u: goto label_209570;
        case 0x209574u: goto label_209574;
        case 0x209578u: goto label_209578;
        case 0x20957cu: goto label_20957c;
        case 0x209580u: goto label_209580;
        case 0x209584u: goto label_209584;
        case 0x209588u: goto label_209588;
        case 0x20958cu: goto label_20958c;
        case 0x209590u: goto label_209590;
        case 0x209594u: goto label_209594;
        case 0x209598u: goto label_209598;
        case 0x20959cu: goto label_20959c;
        case 0x2095a0u: goto label_2095a0;
        case 0x2095a4u: goto label_2095a4;
        case 0x2095a8u: goto label_2095a8;
        case 0x2095acu: goto label_2095ac;
        case 0x2095b0u: goto label_2095b0;
        case 0x2095b4u: goto label_2095b4;
        case 0x2095b8u: goto label_2095b8;
        case 0x2095bcu: goto label_2095bc;
        case 0x2095c0u: goto label_2095c0;
        case 0x2095c4u: goto label_2095c4;
        case 0x2095c8u: goto label_2095c8;
        case 0x2095ccu: goto label_2095cc;
        case 0x2095d0u: goto label_2095d0;
        case 0x2095d4u: goto label_2095d4;
        case 0x2095d8u: goto label_2095d8;
        case 0x2095dcu: goto label_2095dc;
        case 0x2095e0u: goto label_2095e0;
        case 0x2095e4u: goto label_2095e4;
        case 0x2095e8u: goto label_2095e8;
        case 0x2095ecu: goto label_2095ec;
        case 0x2095f0u: goto label_2095f0;
        case 0x2095f4u: goto label_2095f4;
        case 0x2095f8u: goto label_2095f8;
        case 0x2095fcu: goto label_2095fc;
        case 0x209600u: goto label_209600;
        case 0x209604u: goto label_209604;
        case 0x209608u: goto label_209608;
        case 0x20960cu: goto label_20960c;
        case 0x209610u: goto label_209610;
        case 0x209614u: goto label_209614;
        case 0x209618u: goto label_209618;
        case 0x20961cu: goto label_20961c;
        case 0x209620u: goto label_209620;
        case 0x209624u: goto label_209624;
        case 0x209628u: goto label_209628;
        case 0x20962cu: goto label_20962c;
        case 0x209630u: goto label_209630;
        case 0x209634u: goto label_209634;
        case 0x209638u: goto label_209638;
        case 0x20963cu: goto label_20963c;
        case 0x209640u: goto label_209640;
        case 0x209644u: goto label_209644;
        case 0x209648u: goto label_209648;
        case 0x20964cu: goto label_20964c;
        case 0x209650u: goto label_209650;
        case 0x209654u: goto label_209654;
        case 0x209658u: goto label_209658;
        case 0x20965cu: goto label_20965c;
        case 0x209660u: goto label_209660;
        case 0x209664u: goto label_209664;
        case 0x209668u: goto label_209668;
        case 0x20966cu: goto label_20966c;
        case 0x209670u: goto label_209670;
        case 0x209674u: goto label_209674;
        case 0x209678u: goto label_209678;
        case 0x20967cu: goto label_20967c;
        case 0x209680u: goto label_209680;
        case 0x209684u: goto label_209684;
        case 0x209688u: goto label_209688;
        case 0x20968cu: goto label_20968c;
        case 0x209690u: goto label_209690;
        case 0x209694u: goto label_209694;
        case 0x209698u: goto label_209698;
        case 0x20969cu: goto label_20969c;
        case 0x2096a0u: goto label_2096a0;
        case 0x2096a4u: goto label_2096a4;
        case 0x2096a8u: goto label_2096a8;
        case 0x2096acu: goto label_2096ac;
        case 0x2096b0u: goto label_2096b0;
        case 0x2096b4u: goto label_2096b4;
        case 0x2096b8u: goto label_2096b8;
        case 0x2096bcu: goto label_2096bc;
        case 0x2096c0u: goto label_2096c0;
        case 0x2096c4u: goto label_2096c4;
        case 0x2096c8u: goto label_2096c8;
        case 0x2096ccu: goto label_2096cc;
        case 0x2096d0u: goto label_2096d0;
        case 0x2096d4u: goto label_2096d4;
        case 0x2096d8u: goto label_2096d8;
        case 0x2096dcu: goto label_2096dc;
        case 0x2096e0u: goto label_2096e0;
        case 0x2096e4u: goto label_2096e4;
        case 0x2096e8u: goto label_2096e8;
        case 0x2096ecu: goto label_2096ec;
        case 0x2096f0u: goto label_2096f0;
        case 0x2096f4u: goto label_2096f4;
        case 0x2096f8u: goto label_2096f8;
        case 0x2096fcu: goto label_2096fc;
        case 0x209700u: goto label_209700;
        case 0x209704u: goto label_209704;
        case 0x209708u: goto label_209708;
        case 0x20970cu: goto label_20970c;
        case 0x209710u: goto label_209710;
        case 0x209714u: goto label_209714;
        case 0x209718u: goto label_209718;
        case 0x20971cu: goto label_20971c;
        case 0x209720u: goto label_209720;
        case 0x209724u: goto label_209724;
        case 0x209728u: goto label_209728;
        case 0x20972cu: goto label_20972c;
        case 0x209730u: goto label_209730;
        case 0x209734u: goto label_209734;
        case 0x209738u: goto label_209738;
        case 0x20973cu: goto label_20973c;
        case 0x209740u: goto label_209740;
        case 0x209744u: goto label_209744;
        case 0x209748u: goto label_209748;
        case 0x20974cu: goto label_20974c;
        case 0x209750u: goto label_209750;
        case 0x209754u: goto label_209754;
        case 0x209758u: goto label_209758;
        case 0x20975cu: goto label_20975c;
        case 0x209760u: goto label_209760;
        case 0x209764u: goto label_209764;
        case 0x209768u: goto label_209768;
        case 0x20976cu: goto label_20976c;
        case 0x209770u: goto label_209770;
        case 0x209774u: goto label_209774;
        case 0x209778u: goto label_209778;
        case 0x20977cu: goto label_20977c;
        case 0x209780u: goto label_209780;
        case 0x209784u: goto label_209784;
        case 0x209788u: goto label_209788;
        case 0x20978cu: goto label_20978c;
        case 0x209790u: goto label_209790;
        case 0x209794u: goto label_209794;
        case 0x209798u: goto label_209798;
        case 0x20979cu: goto label_20979c;
        case 0x2097a0u: goto label_2097a0;
        case 0x2097a4u: goto label_2097a4;
        case 0x2097a8u: goto label_2097a8;
        case 0x2097acu: goto label_2097ac;
        case 0x2097b0u: goto label_2097b0;
        case 0x2097b4u: goto label_2097b4;
        case 0x2097b8u: goto label_2097b8;
        case 0x2097bcu: goto label_2097bc;
        case 0x2097c0u: goto label_2097c0;
        case 0x2097c4u: goto label_2097c4;
        case 0x2097c8u: goto label_2097c8;
        case 0x2097ccu: goto label_2097cc;
        case 0x2097d0u: goto label_2097d0;
        case 0x2097d4u: goto label_2097d4;
        case 0x2097d8u: goto label_2097d8;
        case 0x2097dcu: goto label_2097dc;
        case 0x2097e0u: goto label_2097e0;
        case 0x2097e4u: goto label_2097e4;
        case 0x2097e8u: goto label_2097e8;
        case 0x2097ecu: goto label_2097ec;
        case 0x2097f0u: goto label_2097f0;
        case 0x2097f4u: goto label_2097f4;
        case 0x2097f8u: goto label_2097f8;
        case 0x2097fcu: goto label_2097fc;
        case 0x209800u: goto label_209800;
        case 0x209804u: goto label_209804;
        case 0x209808u: goto label_209808;
        case 0x20980cu: goto label_20980c;
        case 0x209810u: goto label_209810;
        case 0x209814u: goto label_209814;
        case 0x209818u: goto label_209818;
        case 0x20981cu: goto label_20981c;
        case 0x209820u: goto label_209820;
        case 0x209824u: goto label_209824;
        case 0x209828u: goto label_209828;
        case 0x20982cu: goto label_20982c;
        case 0x209830u: goto label_209830;
        case 0x209834u: goto label_209834;
        case 0x209838u: goto label_209838;
        case 0x20983cu: goto label_20983c;
        case 0x209840u: goto label_209840;
        case 0x209844u: goto label_209844;
        case 0x209848u: goto label_209848;
        case 0x20984cu: goto label_20984c;
        case 0x209850u: goto label_209850;
        case 0x209854u: goto label_209854;
        case 0x209858u: goto label_209858;
        case 0x20985cu: goto label_20985c;
        case 0x209860u: goto label_209860;
        case 0x209864u: goto label_209864;
        case 0x209868u: goto label_209868;
        case 0x20986cu: goto label_20986c;
        case 0x209870u: goto label_209870;
        case 0x209874u: goto label_209874;
        case 0x209878u: goto label_209878;
        case 0x20987cu: goto label_20987c;
        case 0x209880u: goto label_209880;
        case 0x209884u: goto label_209884;
        case 0x209888u: goto label_209888;
        case 0x20988cu: goto label_20988c;
        case 0x209890u: goto label_209890;
        case 0x209894u: goto label_209894;
        case 0x209898u: goto label_209898;
        case 0x20989cu: goto label_20989c;
        case 0x2098a0u: goto label_2098a0;
        case 0x2098a4u: goto label_2098a4;
        case 0x2098a8u: goto label_2098a8;
        case 0x2098acu: goto label_2098ac;
        case 0x2098b0u: goto label_2098b0;
        case 0x2098b4u: goto label_2098b4;
        case 0x2098b8u: goto label_2098b8;
        case 0x2098bcu: goto label_2098bc;
        case 0x2098c0u: goto label_2098c0;
        case 0x2098c4u: goto label_2098c4;
        case 0x2098c8u: goto label_2098c8;
        case 0x2098ccu: goto label_2098cc;
        case 0x2098d0u: goto label_2098d0;
        case 0x2098d4u: goto label_2098d4;
        case 0x2098d8u: goto label_2098d8;
        case 0x2098dcu: goto label_2098dc;
        case 0x2098e0u: goto label_2098e0;
        case 0x2098e4u: goto label_2098e4;
        case 0x2098e8u: goto label_2098e8;
        case 0x2098ecu: goto label_2098ec;
        case 0x2098f0u: goto label_2098f0;
        case 0x2098f4u: goto label_2098f4;
        case 0x2098f8u: goto label_2098f8;
        case 0x2098fcu: goto label_2098fc;
        case 0x209900u: goto label_209900;
        case 0x209904u: goto label_209904;
        case 0x209908u: goto label_209908;
        case 0x20990cu: goto label_20990c;
        case 0x209910u: goto label_209910;
        case 0x209914u: goto label_209914;
        case 0x209918u: goto label_209918;
        case 0x20991cu: goto label_20991c;
        case 0x209920u: goto label_209920;
        case 0x209924u: goto label_209924;
        case 0x209928u: goto label_209928;
        case 0x20992cu: goto label_20992c;
        case 0x209930u: goto label_209930;
        case 0x209934u: goto label_209934;
        case 0x209938u: goto label_209938;
        case 0x20993cu: goto label_20993c;
        case 0x209940u: goto label_209940;
        case 0x209944u: goto label_209944;
        case 0x209948u: goto label_209948;
        case 0x20994cu: goto label_20994c;
        case 0x209950u: goto label_209950;
        case 0x209954u: goto label_209954;
        case 0x209958u: goto label_209958;
        case 0x20995cu: goto label_20995c;
        case 0x209960u: goto label_209960;
        case 0x209964u: goto label_209964;
        case 0x209968u: goto label_209968;
        case 0x20996cu: goto label_20996c;
        case 0x209970u: goto label_209970;
        case 0x209974u: goto label_209974;
        case 0x209978u: goto label_209978;
        case 0x20997cu: goto label_20997c;
        case 0x209980u: goto label_209980;
        case 0x209984u: goto label_209984;
        case 0x209988u: goto label_209988;
        case 0x20998cu: goto label_20998c;
        case 0x209990u: goto label_209990;
        case 0x209994u: goto label_209994;
        case 0x209998u: goto label_209998;
        case 0x20999cu: goto label_20999c;
        case 0x2099a0u: goto label_2099a0;
        case 0x2099a4u: goto label_2099a4;
        case 0x2099a8u: goto label_2099a8;
        case 0x2099acu: goto label_2099ac;
        case 0x2099b0u: goto label_2099b0;
        case 0x2099b4u: goto label_2099b4;
        case 0x2099b8u: goto label_2099b8;
        case 0x2099bcu: goto label_2099bc;
        case 0x2099c0u: goto label_2099c0;
        case 0x2099c4u: goto label_2099c4;
        case 0x2099c8u: goto label_2099c8;
        case 0x2099ccu: goto label_2099cc;
        case 0x2099d0u: goto label_2099d0;
        case 0x2099d4u: goto label_2099d4;
        case 0x2099d8u: goto label_2099d8;
        case 0x2099dcu: goto label_2099dc;
        case 0x2099e0u: goto label_2099e0;
        case 0x2099e4u: goto label_2099e4;
        case 0x2099e8u: goto label_2099e8;
        case 0x2099ecu: goto label_2099ec;
        case 0x2099f0u: goto label_2099f0;
        case 0x2099f4u: goto label_2099f4;
        case 0x2099f8u: goto label_2099f8;
        case 0x2099fcu: goto label_2099fc;
        case 0x209a00u: goto label_209a00;
        case 0x209a04u: goto label_209a04;
        case 0x209a08u: goto label_209a08;
        case 0x209a0cu: goto label_209a0c;
        case 0x209a10u: goto label_209a10;
        case 0x209a14u: goto label_209a14;
        case 0x209a18u: goto label_209a18;
        case 0x209a1cu: goto label_209a1c;
        case 0x209a20u: goto label_209a20;
        case 0x209a24u: goto label_209a24;
        case 0x209a28u: goto label_209a28;
        case 0x209a2cu: goto label_209a2c;
        case 0x209a30u: goto label_209a30;
        case 0x209a34u: goto label_209a34;
        case 0x209a38u: goto label_209a38;
        case 0x209a3cu: goto label_209a3c;
        case 0x209a40u: goto label_209a40;
        case 0x209a44u: goto label_209a44;
        case 0x209a48u: goto label_209a48;
        case 0x209a4cu: goto label_209a4c;
        case 0x209a50u: goto label_209a50;
        case 0x209a54u: goto label_209a54;
        case 0x209a58u: goto label_209a58;
        case 0x209a5cu: goto label_209a5c;
        case 0x209a60u: goto label_209a60;
        case 0x209a64u: goto label_209a64;
        case 0x209a68u: goto label_209a68;
        case 0x209a6cu: goto label_209a6c;
        case 0x209a70u: goto label_209a70;
        case 0x209a74u: goto label_209a74;
        case 0x209a78u: goto label_209a78;
        case 0x209a7cu: goto label_209a7c;
        case 0x209a80u: goto label_209a80;
        case 0x209a84u: goto label_209a84;
        case 0x209a88u: goto label_209a88;
        case 0x209a8cu: goto label_209a8c;
        case 0x209a90u: goto label_209a90;
        case 0x209a94u: goto label_209a94;
        case 0x209a98u: goto label_209a98;
        case 0x209a9cu: goto label_209a9c;
        case 0x209aa0u: goto label_209aa0;
        case 0x209aa4u: goto label_209aa4;
        case 0x209aa8u: goto label_209aa8;
        case 0x209aacu: goto label_209aac;
        case 0x209ab0u: goto label_209ab0;
        case 0x209ab4u: goto label_209ab4;
        case 0x209ab8u: goto label_209ab8;
        case 0x209abcu: goto label_209abc;
        case 0x209ac0u: goto label_209ac0;
        case 0x209ac4u: goto label_209ac4;
        case 0x209ac8u: goto label_209ac8;
        case 0x209accu: goto label_209acc;
        case 0x209ad0u: goto label_209ad0;
        case 0x209ad4u: goto label_209ad4;
        case 0x209ad8u: goto label_209ad8;
        case 0x209adcu: goto label_209adc;
        case 0x209ae0u: goto label_209ae0;
        case 0x209ae4u: goto label_209ae4;
        case 0x209ae8u: goto label_209ae8;
        case 0x209aecu: goto label_209aec;
        case 0x209af0u: goto label_209af0;
        case 0x209af4u: goto label_209af4;
        case 0x209af8u: goto label_209af8;
        case 0x209afcu: goto label_209afc;
        case 0x209b00u: goto label_209b00;
        case 0x209b04u: goto label_209b04;
        case 0x209b08u: goto label_209b08;
        case 0x209b0cu: goto label_209b0c;
        case 0x209b10u: goto label_209b10;
        case 0x209b14u: goto label_209b14;
        case 0x209b18u: goto label_209b18;
        case 0x209b1cu: goto label_209b1c;
        case 0x209b20u: goto label_209b20;
        case 0x209b24u: goto label_209b24;
        case 0x209b28u: goto label_209b28;
        case 0x209b2cu: goto label_209b2c;
        case 0x209b30u: goto label_209b30;
        case 0x209b34u: goto label_209b34;
        case 0x209b38u: goto label_209b38;
        case 0x209b3cu: goto label_209b3c;
        case 0x209b40u: goto label_209b40;
        case 0x209b44u: goto label_209b44;
        case 0x209b48u: goto label_209b48;
        case 0x209b4cu: goto label_209b4c;
        case 0x209b50u: goto label_209b50;
        case 0x209b54u: goto label_209b54;
        case 0x209b58u: goto label_209b58;
        case 0x209b5cu: goto label_209b5c;
        case 0x209b60u: goto label_209b60;
        case 0x209b64u: goto label_209b64;
        case 0x209b68u: goto label_209b68;
        case 0x209b6cu: goto label_209b6c;
        case 0x209b70u: goto label_209b70;
        case 0x209b74u: goto label_209b74;
        case 0x209b78u: goto label_209b78;
        case 0x209b7cu: goto label_209b7c;
        case 0x209b80u: goto label_209b80;
        case 0x209b84u: goto label_209b84;
        case 0x209b88u: goto label_209b88;
        case 0x209b8cu: goto label_209b8c;
        case 0x209b90u: goto label_209b90;
        case 0x209b94u: goto label_209b94;
        case 0x209b98u: goto label_209b98;
        case 0x209b9cu: goto label_209b9c;
        case 0x209ba0u: goto label_209ba0;
        case 0x209ba4u: goto label_209ba4;
        case 0x209ba8u: goto label_209ba8;
        case 0x209bacu: goto label_209bac;
        case 0x209bb0u: goto label_209bb0;
        case 0x209bb4u: goto label_209bb4;
        case 0x209bb8u: goto label_209bb8;
        case 0x209bbcu: goto label_209bbc;
        case 0x209bc0u: goto label_209bc0;
        case 0x209bc4u: goto label_209bc4;
        case 0x209bc8u: goto label_209bc8;
        case 0x209bccu: goto label_209bcc;
        case 0x209bd0u: goto label_209bd0;
        case 0x209bd4u: goto label_209bd4;
        case 0x209bd8u: goto label_209bd8;
        case 0x209bdcu: goto label_209bdc;
        case 0x209be0u: goto label_209be0;
        case 0x209be4u: goto label_209be4;
        case 0x209be8u: goto label_209be8;
        case 0x209becu: goto label_209bec;
        case 0x209bf0u: goto label_209bf0;
        case 0x209bf4u: goto label_209bf4;
        case 0x209bf8u: goto label_209bf8;
        case 0x209bfcu: goto label_209bfc;
        case 0x209c00u: goto label_209c00;
        case 0x209c04u: goto label_209c04;
        case 0x209c08u: goto label_209c08;
        case 0x209c0cu: goto label_209c0c;
        case 0x209c10u: goto label_209c10;
        case 0x209c14u: goto label_209c14;
        case 0x209c18u: goto label_209c18;
        case 0x209c1cu: goto label_209c1c;
        case 0x209c20u: goto label_209c20;
        case 0x209c24u: goto label_209c24;
        case 0x209c28u: goto label_209c28;
        case 0x209c2cu: goto label_209c2c;
        case 0x209c30u: goto label_209c30;
        case 0x209c34u: goto label_209c34;
        case 0x209c38u: goto label_209c38;
        case 0x209c3cu: goto label_209c3c;
        case 0x209c40u: goto label_209c40;
        case 0x209c44u: goto label_209c44;
        case 0x209c48u: goto label_209c48;
        case 0x209c4cu: goto label_209c4c;
        case 0x209c50u: goto label_209c50;
        case 0x209c54u: goto label_209c54;
        case 0x209c58u: goto label_209c58;
        case 0x209c5cu: goto label_209c5c;
        case 0x209c60u: goto label_209c60;
        case 0x209c64u: goto label_209c64;
        case 0x209c68u: goto label_209c68;
        case 0x209c6cu: goto label_209c6c;
        case 0x209c70u: goto label_209c70;
        case 0x209c74u: goto label_209c74;
        case 0x209c78u: goto label_209c78;
        case 0x209c7cu: goto label_209c7c;
        case 0x209c80u: goto label_209c80;
        case 0x209c84u: goto label_209c84;
        case 0x209c88u: goto label_209c88;
        case 0x209c8cu: goto label_209c8c;
        case 0x209c90u: goto label_209c90;
        case 0x209c94u: goto label_209c94;
        case 0x209c98u: goto label_209c98;
        case 0x209c9cu: goto label_209c9c;
        case 0x209ca0u: goto label_209ca0;
        case 0x209ca4u: goto label_209ca4;
        case 0x209ca8u: goto label_209ca8;
        case 0x209cacu: goto label_209cac;
        case 0x209cb0u: goto label_209cb0;
        case 0x209cb4u: goto label_209cb4;
        case 0x209cb8u: goto label_209cb8;
        case 0x209cbcu: goto label_209cbc;
        case 0x209cc0u: goto label_209cc0;
        case 0x209cc4u: goto label_209cc4;
        case 0x209cc8u: goto label_209cc8;
        case 0x209cccu: goto label_209ccc;
        case 0x209cd0u: goto label_209cd0;
        case 0x209cd4u: goto label_209cd4;
        case 0x209cd8u: goto label_209cd8;
        case 0x209cdcu: goto label_209cdc;
        case 0x209ce0u: goto label_209ce0;
        case 0x209ce4u: goto label_209ce4;
        case 0x209ce8u: goto label_209ce8;
        case 0x209cecu: goto label_209cec;
        case 0x209cf0u: goto label_209cf0;
        case 0x209cf4u: goto label_209cf4;
        case 0x209cf8u: goto label_209cf8;
        case 0x209cfcu: goto label_209cfc;
        case 0x209d00u: goto label_209d00;
        case 0x209d04u: goto label_209d04;
        case 0x209d08u: goto label_209d08;
        case 0x209d0cu: goto label_209d0c;
        case 0x209d10u: goto label_209d10;
        case 0x209d14u: goto label_209d14;
        case 0x209d18u: goto label_209d18;
        case 0x209d1cu: goto label_209d1c;
        case 0x209d20u: goto label_209d20;
        case 0x209d24u: goto label_209d24;
        case 0x209d28u: goto label_209d28;
        case 0x209d2cu: goto label_209d2c;
        case 0x209d30u: goto label_209d30;
        case 0x209d34u: goto label_209d34;
        case 0x209d38u: goto label_209d38;
        case 0x209d3cu: goto label_209d3c;
        case 0x209d40u: goto label_209d40;
        case 0x209d44u: goto label_209d44;
        case 0x209d48u: goto label_209d48;
        case 0x209d4cu: goto label_209d4c;
        case 0x209d50u: goto label_209d50;
        case 0x209d54u: goto label_209d54;
        case 0x209d58u: goto label_209d58;
        case 0x209d5cu: goto label_209d5c;
        case 0x209d60u: goto label_209d60;
        case 0x209d64u: goto label_209d64;
        case 0x209d68u: goto label_209d68;
        case 0x209d6cu: goto label_209d6c;
        case 0x209d70u: goto label_209d70;
        case 0x209d74u: goto label_209d74;
        case 0x209d78u: goto label_209d78;
        case 0x209d7cu: goto label_209d7c;
        case 0x209d80u: goto label_209d80;
        case 0x209d84u: goto label_209d84;
        case 0x209d88u: goto label_209d88;
        case 0x209d8cu: goto label_209d8c;
        case 0x209d90u: goto label_209d90;
        case 0x209d94u: goto label_209d94;
        case 0x209d98u: goto label_209d98;
        case 0x209d9cu: goto label_209d9c;
        case 0x209da0u: goto label_209da0;
        case 0x209da4u: goto label_209da4;
        case 0x209da8u: goto label_209da8;
        case 0x209dacu: goto label_209dac;
        case 0x209db0u: goto label_209db0;
        case 0x209db4u: goto label_209db4;
        case 0x209db8u: goto label_209db8;
        case 0x209dbcu: goto label_209dbc;
        case 0x209dc0u: goto label_209dc0;
        case 0x209dc4u: goto label_209dc4;
        case 0x209dc8u: goto label_209dc8;
        case 0x209dccu: goto label_209dcc;
        case 0x209dd0u: goto label_209dd0;
        case 0x209dd4u: goto label_209dd4;
        case 0x209dd8u: goto label_209dd8;
        case 0x209ddcu: goto label_209ddc;
        case 0x209de0u: goto label_209de0;
        case 0x209de4u: goto label_209de4;
        case 0x209de8u: goto label_209de8;
        case 0x209decu: goto label_209dec;
        case 0x209df0u: goto label_209df0;
        case 0x209df4u: goto label_209df4;
        case 0x209df8u: goto label_209df8;
        case 0x209dfcu: goto label_209dfc;
        case 0x209e00u: goto label_209e00;
        case 0x209e04u: goto label_209e04;
        case 0x209e08u: goto label_209e08;
        case 0x209e0cu: goto label_209e0c;
        case 0x209e10u: goto label_209e10;
        case 0x209e14u: goto label_209e14;
        case 0x209e18u: goto label_209e18;
        case 0x209e1cu: goto label_209e1c;
        case 0x209e20u: goto label_209e20;
        case 0x209e24u: goto label_209e24;
        case 0x209e28u: goto label_209e28;
        case 0x209e2cu: goto label_209e2c;
        case 0x209e30u: goto label_209e30;
        case 0x209e34u: goto label_209e34;
        case 0x209e38u: goto label_209e38;
        case 0x209e3cu: goto label_209e3c;
        case 0x209e40u: goto label_209e40;
        case 0x209e44u: goto label_209e44;
        case 0x209e48u: goto label_209e48;
        case 0x209e4cu: goto label_209e4c;
        case 0x209e50u: goto label_209e50;
        case 0x209e54u: goto label_209e54;
        case 0x209e58u: goto label_209e58;
        case 0x209e5cu: goto label_209e5c;
        case 0x209e60u: goto label_209e60;
        case 0x209e64u: goto label_209e64;
        case 0x209e68u: goto label_209e68;
        case 0x209e6cu: goto label_209e6c;
        case 0x209e70u: goto label_209e70;
        case 0x209e74u: goto label_209e74;
        case 0x209e78u: goto label_209e78;
        case 0x209e7cu: goto label_209e7c;
        case 0x209e80u: goto label_209e80;
        case 0x209e84u: goto label_209e84;
        case 0x209e88u: goto label_209e88;
        case 0x209e8cu: goto label_209e8c;
        case 0x209e90u: goto label_209e90;
        case 0x209e94u: goto label_209e94;
        case 0x209e98u: goto label_209e98;
        case 0x209e9cu: goto label_209e9c;
        case 0x209ea0u: goto label_209ea0;
        case 0x209ea4u: goto label_209ea4;
        case 0x209ea8u: goto label_209ea8;
        case 0x209eacu: goto label_209eac;
        case 0x209eb0u: goto label_209eb0;
        case 0x209eb4u: goto label_209eb4;
        case 0x209eb8u: goto label_209eb8;
        case 0x209ebcu: goto label_209ebc;
        case 0x209ec0u: goto label_209ec0;
        case 0x209ec4u: goto label_209ec4;
        case 0x209ec8u: goto label_209ec8;
        case 0x209eccu: goto label_209ecc;
        case 0x209ed0u: goto label_209ed0;
        case 0x209ed4u: goto label_209ed4;
        case 0x209ed8u: goto label_209ed8;
        case 0x209edcu: goto label_209edc;
        case 0x209ee0u: goto label_209ee0;
        case 0x209ee4u: goto label_209ee4;
        case 0x209ee8u: goto label_209ee8;
        case 0x209eecu: goto label_209eec;
        case 0x209ef0u: goto label_209ef0;
        case 0x209ef4u: goto label_209ef4;
        case 0x209ef8u: goto label_209ef8;
        case 0x209efcu: goto label_209efc;
        case 0x209f00u: goto label_209f00;
        case 0x209f04u: goto label_209f04;
        case 0x209f08u: goto label_209f08;
        case 0x209f0cu: goto label_209f0c;
        case 0x209f10u: goto label_209f10;
        case 0x209f14u: goto label_209f14;
        case 0x209f18u: goto label_209f18;
        case 0x209f1cu: goto label_209f1c;
        case 0x209f20u: goto label_209f20;
        case 0x209f24u: goto label_209f24;
        case 0x209f28u: goto label_209f28;
        case 0x209f2cu: goto label_209f2c;
        case 0x209f30u: goto label_209f30;
        case 0x209f34u: goto label_209f34;
        case 0x209f38u: goto label_209f38;
        case 0x209f3cu: goto label_209f3c;
        case 0x209f40u: goto label_209f40;
        case 0x209f44u: goto label_209f44;
        case 0x209f48u: goto label_209f48;
        case 0x209f4cu: goto label_209f4c;
        case 0x209f50u: goto label_209f50;
        case 0x209f54u: goto label_209f54;
        case 0x209f58u: goto label_209f58;
        case 0x209f5cu: goto label_209f5c;
        case 0x209f60u: goto label_209f60;
        case 0x209f64u: goto label_209f64;
        case 0x209f68u: goto label_209f68;
        case 0x209f6cu: goto label_209f6c;
        case 0x209f70u: goto label_209f70;
        case 0x209f74u: goto label_209f74;
        case 0x209f78u: goto label_209f78;
        case 0x209f7cu: goto label_209f7c;
        case 0x209f80u: goto label_209f80;
        case 0x209f84u: goto label_209f84;
        case 0x209f88u: goto label_209f88;
        case 0x209f8cu: goto label_209f8c;
        case 0x209f90u: goto label_209f90;
        case 0x209f94u: goto label_209f94;
        case 0x209f98u: goto label_209f98;
        case 0x209f9cu: goto label_209f9c;
        case 0x209fa0u: goto label_209fa0;
        case 0x209fa4u: goto label_209fa4;
        case 0x209fa8u: goto label_209fa8;
        case 0x209facu: goto label_209fac;
        case 0x209fb0u: goto label_209fb0;
        case 0x209fb4u: goto label_209fb4;
        case 0x209fb8u: goto label_209fb8;
        case 0x209fbcu: goto label_209fbc;
        case 0x209fc0u: goto label_209fc0;
        case 0x209fc4u: goto label_209fc4;
        case 0x209fc8u: goto label_209fc8;
        case 0x209fccu: goto label_209fcc;
        case 0x209fd0u: goto label_209fd0;
        case 0x209fd4u: goto label_209fd4;
        case 0x209fd8u: goto label_209fd8;
        case 0x209fdcu: goto label_209fdc;
        case 0x209fe0u: goto label_209fe0;
        case 0x209fe4u: goto label_209fe4;
        case 0x209fe8u: goto label_209fe8;
        case 0x209fecu: goto label_209fec;
        case 0x209ff0u: goto label_209ff0;
        case 0x209ff4u: goto label_209ff4;
        case 0x209ff8u: goto label_209ff8;
        case 0x209ffcu: goto label_209ffc;
        case 0x20a000u: goto label_20a000;
        case 0x20a004u: goto label_20a004;
        case 0x20a008u: goto label_20a008;
        case 0x20a00cu: goto label_20a00c;
        case 0x20a010u: goto label_20a010;
        case 0x20a014u: goto label_20a014;
        case 0x20a018u: goto label_20a018;
        case 0x20a01cu: goto label_20a01c;
        case 0x20a020u: goto label_20a020;
        case 0x20a024u: goto label_20a024;
        case 0x20a028u: goto label_20a028;
        case 0x20a02cu: goto label_20a02c;
        case 0x20a030u: goto label_20a030;
        case 0x20a034u: goto label_20a034;
        case 0x20a038u: goto label_20a038;
        case 0x20a03cu: goto label_20a03c;
        case 0x20a040u: goto label_20a040;
        case 0x20a044u: goto label_20a044;
        case 0x20a048u: goto label_20a048;
        case 0x20a04cu: goto label_20a04c;
        case 0x20a050u: goto label_20a050;
        case 0x20a054u: goto label_20a054;
        case 0x20a058u: goto label_20a058;
        case 0x20a05cu: goto label_20a05c;
        case 0x20a060u: goto label_20a060;
        case 0x20a064u: goto label_20a064;
        case 0x20a068u: goto label_20a068;
        case 0x20a06cu: goto label_20a06c;
        case 0x20a070u: goto label_20a070;
        case 0x20a074u: goto label_20a074;
        case 0x20a078u: goto label_20a078;
        case 0x20a07cu: goto label_20a07c;
        case 0x20a080u: goto label_20a080;
        case 0x20a084u: goto label_20a084;
        case 0x20a088u: goto label_20a088;
        case 0x20a08cu: goto label_20a08c;
        case 0x20a090u: goto label_20a090;
        case 0x20a094u: goto label_20a094;
        case 0x20a098u: goto label_20a098;
        case 0x20a09cu: goto label_20a09c;
        case 0x20a0a0u: goto label_20a0a0;
        case 0x20a0a4u: goto label_20a0a4;
        case 0x20a0a8u: goto label_20a0a8;
        case 0x20a0acu: goto label_20a0ac;
        case 0x20a0b0u: goto label_20a0b0;
        case 0x20a0b4u: goto label_20a0b4;
        case 0x20a0b8u: goto label_20a0b8;
        case 0x20a0bcu: goto label_20a0bc;
        case 0x20a0c0u: goto label_20a0c0;
        case 0x20a0c4u: goto label_20a0c4;
        case 0x20a0c8u: goto label_20a0c8;
        case 0x20a0ccu: goto label_20a0cc;
        case 0x20a0d0u: goto label_20a0d0;
        case 0x20a0d4u: goto label_20a0d4;
        case 0x20a0d8u: goto label_20a0d8;
        case 0x20a0dcu: goto label_20a0dc;
        case 0x20a0e0u: goto label_20a0e0;
        case 0x20a0e4u: goto label_20a0e4;
        case 0x20a0e8u: goto label_20a0e8;
        case 0x20a0ecu: goto label_20a0ec;
        case 0x20a0f0u: goto label_20a0f0;
        case 0x20a0f4u: goto label_20a0f4;
        case 0x20a0f8u: goto label_20a0f8;
        case 0x20a0fcu: goto label_20a0fc;
        case 0x20a100u: goto label_20a100;
        case 0x20a104u: goto label_20a104;
        case 0x20a108u: goto label_20a108;
        case 0x20a10cu: goto label_20a10c;
        case 0x20a110u: goto label_20a110;
        case 0x20a114u: goto label_20a114;
        case 0x20a118u: goto label_20a118;
        case 0x20a11cu: goto label_20a11c;
        case 0x20a120u: goto label_20a120;
        case 0x20a124u: goto label_20a124;
        case 0x20a128u: goto label_20a128;
        case 0x20a12cu: goto label_20a12c;
        case 0x20a130u: goto label_20a130;
        case 0x20a134u: goto label_20a134;
        case 0x20a138u: goto label_20a138;
        case 0x20a13cu: goto label_20a13c;
        case 0x20a140u: goto label_20a140;
        case 0x20a144u: goto label_20a144;
        case 0x20a148u: goto label_20a148;
        case 0x20a14cu: goto label_20a14c;
        case 0x20a150u: goto label_20a150;
        case 0x20a154u: goto label_20a154;
        case 0x20a158u: goto label_20a158;
        case 0x20a15cu: goto label_20a15c;
        case 0x20a160u: goto label_20a160;
        case 0x20a164u: goto label_20a164;
        case 0x20a168u: goto label_20a168;
        case 0x20a16cu: goto label_20a16c;
        case 0x20a170u: goto label_20a170;
        case 0x20a174u: goto label_20a174;
        default: break;
    }

    ctx->pc = 0x208be0u;

label_208be0:
    // 0x208be0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x208be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_208be4:
    // 0x208be4: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x208be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_208be8:
    // 0x208be8: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x208be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_208bec:
    // 0x208bec: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x208becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_208bf0:
    // 0x208bf0: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x208bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_208bf4:
    // 0x208bf4: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x208bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_208bf8:
    // 0x208bf8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x208bf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_208bfc:
    // 0x208bfc: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x208bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_208c00:
    // 0x208c00: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x208c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_208c04:
    // 0x208c04: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x208c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_208c08:
    // 0x208c08: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x208c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_208c0c:
    // 0x208c0c: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x208c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_208c10:
    // 0x208c10: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x208c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_208c14:
    // 0x208c14: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x208c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_208c18:
    // 0x208c18: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x208c18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_208c1c:
    // 0x208c1c: 0x14600549  bnez        $v1, . + 4 + (0x549 << 2)
label_208c20:
    if (ctx->pc == 0x208C20u) {
        ctx->pc = 0x208C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C1Cu;
        // 0x208c20: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C24u;
        goto label_208c24;
    }
    ctx->pc = 0x208C1Cu;
    {
        const bool branch_taken_0x208c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x208C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C1Cu;
        // 0x208c20: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c1c) {
            ctx->pc = 0x20A144u;
            goto label_20a144;
        }
    }
    ctx->pc = 0x208C24u;
label_208c24:
    // 0x208c24: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x208c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_208c28:
    // 0x208c28: 0xc07f8d6  jal         func_1FE358
label_208c2c:
    if (ctx->pc == 0x208C2Cu) {
        ctx->pc = 0x208C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C28u;
        // 0x208c2c: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C30u;
        goto label_208c30;
    }
    ctx->pc = 0x208C28u;
    SET_GPR_U32(ctx, 31, 0x208C30u);
    ctx->pc = 0x208C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208C28u;
    // 0x208c2c: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE358u, 0x208C28u, 0x208C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C30u;
label_208c30:
    // 0x208c30: 0x14400545  bnez        $v0, . + 4 + (0x545 << 2)
label_208c34:
    if (ctx->pc == 0x208C34u) {
        ctx->pc = 0x208C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C30u;
        // 0x208c34: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C38u;
        goto label_208c38;
    }
    ctx->pc = 0x208C30u;
    {
        const bool branch_taken_0x208c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C30u;
        // 0x208c34: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c30) {
            ctx->pc = 0x20A148u;
            goto label_20a148;
        }
    }
    ctx->pc = 0x208C38u;
label_208c38:
    // 0x208c38: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x208c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_208c3c:
    // 0x208c3c: 0x2402023b  addiu       $v0, $zero, 0x23B
    ctx->pc = 0x208c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 571));
label_208c40:
    // 0x208c40: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_208c44:
    if (ctx->pc == 0x208C44u) {
        ctx->pc = 0x208C48u;
        goto label_208c48;
    }
    ctx->pc = 0x208C40u;
    {
        const bool branch_taken_0x208c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x208c40) {
            ctx->pc = 0x208C50u;
            goto label_208c50;
        }
    }
    ctx->pc = 0x208C48u;
label_208c48:
    // 0x208c48: 0x96420548  lhu         $v0, 0x548($s2)
    ctx->pc = 0x208c48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1352)));
label_208c4c:
    // 0x208c4c: 0xa642054a  sh          $v0, 0x54A($s2)
    ctx->pc = 0x208c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1354), (uint16_t)GPR_U32(ctx, 2));
label_208c50:
    // 0x208c50: 0xc0b6dac  jal         func_2DB6B0
label_208c54:
    if (ctx->pc == 0x208C54u) {
        ctx->pc = 0x208C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C50u;
        // 0x208c54: 0x8e5000f0  lw          $s0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C58u;
        goto label_208c58;
    }
    ctx->pc = 0x208C50u;
    SET_GPR_U32(ctx, 31, 0x208C58u);
    ctx->pc = 0x208C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208C50u;
    // 0x208c54: 0x8e5000f0  lw          $s0, 0xF0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x208C50u, 0x208C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C58u;
label_208c58:
    // 0x208c58: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x208c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_208c5c:
    // 0x208c5c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x208c5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_208c60:
    // 0x208c60: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x208c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_208c64:
    // 0x208c64: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x208c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_208c68:
    // 0x208c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208c6c:
    // 0x208c6c: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x208c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_208c70:
    // 0x208c70: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x208c70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_208c74:
    // 0x208c74: 0xc0b680e  jal         func_2DA038
label_208c78:
    if (ctx->pc == 0x208C78u) {
        ctx->pc = 0x208C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C74u;
        // 0x208c78: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C7Cu;
        goto label_208c7c;
    }
    ctx->pc = 0x208C74u;
    SET_GPR_U32(ctx, 31, 0x208C7Cu);
    ctx->pc = 0x208C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208C74u;
    // 0x208c78: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x208C74u, 0x208C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C7Cu;
label_208c7c:
    // 0x208c7c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x208c7cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_208c80:
    // 0x208c80: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x208c80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208c84:
    // 0x208c84: 0x0  nop
    ctx->pc = 0x208c84u;
    // NOP
label_208c88:
    // 0x208c88: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_208c8c:
    if (ctx->pc == 0x208C8Cu) {
        ctx->pc = 0x208C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C88u;
        // 0x208c8c: 0xe640075c  swc1        $f0, 0x75C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1884), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C90u;
        goto label_208c90;
    }
    ctx->pc = 0x208C88u;
    {
        const bool branch_taken_0x208c88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x208C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C88u;
        // 0x208c8c: 0xe640075c  swc1        $f0, 0x75C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1884), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c88) {
            ctx->pc = 0x208C94u;
            goto label_208c94;
        }
    }
    ctx->pc = 0x208C90u;
label_208c90:
    // 0x208c90: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x208c90u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_208c94:
    // 0x208c94: 0xc0b6dac  jal         func_2DB6B0
label_208c98:
    if (ctx->pc == 0x208C98u) {
        ctx->pc = 0x208C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C94u;
        // 0x208c98: 0xe6410760  swc1        $f1, 0x760($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1888), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C9Cu;
        goto label_208c9c;
    }
    ctx->pc = 0x208C94u;
    SET_GPR_U32(ctx, 31, 0x208C9Cu);
    ctx->pc = 0x208C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208C94u;
    // 0x208c98: 0xe6410760  swc1        $f1, 0x760($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1888), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x208C94u, 0x208C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C9Cu;
label_208c9c:
    // 0x208c9c: 0xc0b6dac  jal         func_2DB6B0
label_208ca0:
    if (ctx->pc == 0x208CA0u) {
        ctx->pc = 0x208CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C9Cu;
        // 0x208ca0: 0x8c5000f0  lw          $s0, 0xF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CA4u;
        goto label_208ca4;
    }
    ctx->pc = 0x208C9Cu;
    SET_GPR_U32(ctx, 31, 0x208CA4u);
    ctx->pc = 0x208CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208C9Cu;
    // 0x208ca0: 0x8c5000f0  lw          $s0, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x208C9Cu, 0x208CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208CA4u;
label_208ca4:
    // 0x208ca4: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x208ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_208ca8:
    // 0x208ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208cac:
    // 0x208cac: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x208cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_208cb0:
    // 0x208cb0: 0xc0b680e  jal         func_2DA038
label_208cb4:
    if (ctx->pc == 0x208CB4u) {
        ctx->pc = 0x208CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CB0u;
        // 0x208cb4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CB8u;
        goto label_208cb8;
    }
    ctx->pc = 0x208CB0u;
    SET_GPR_U32(ctx, 31, 0x208CB8u);
    ctx->pc = 0x208CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208CB0u;
    // 0x208cb4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x208CB0u, 0x208CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208CB8u;
label_208cb8:
    // 0x208cb8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x208cb8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_208cbc:
    // 0x208cbc: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x208cbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208cc0:
    // 0x208cc0: 0x0  nop
    ctx->pc = 0x208cc0u;
    // NOP
label_208cc4:
    // 0x208cc4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_208cc8:
    if (ctx->pc == 0x208CC8u) {
        ctx->pc = 0x208CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CC4u;
        // 0x208cc8: 0xe6400764  swc1        $f0, 0x764($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1892), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CCCu;
        goto label_208ccc;
    }
    ctx->pc = 0x208CC4u;
    {
        const bool branch_taken_0x208cc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x208CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CC4u;
        // 0x208cc8: 0xe6400764  swc1        $f0, 0x764($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1892), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x208cc4) {
            ctx->pc = 0x208CD0u;
            goto label_208cd0;
        }
    }
    ctx->pc = 0x208CCCu;
label_208ccc:
    // 0x208ccc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x208cccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_208cd0:
    // 0x208cd0: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x208cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
label_208cd4:
    // 0x208cd4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x208cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_208cd8:
    // 0x208cd8: 0x3463bfff  ori         $v1, $v1, 0xBFFF
    ctx->pc = 0x208cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49151);
label_208cdc:
    // 0x208cdc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x208cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_208ce0:
    // 0x208ce0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x208ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_208ce4:
    // 0x208ce4: 0xa64017c8  sh          $zero, 0x17C8($s2)
    ctx->pc = 0x208ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6088), (uint16_t)GPR_U32(ctx, 0));
label_208ce8:
    // 0x208ce8: 0xe6410768  swc1        $f1, 0x768($s2)
    ctx->pc = 0x208ce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1896), bits); }
label_208cec:
    // 0x208cec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x208cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_208cf0:
    // 0x208cf0: 0xae4517c4  sw          $a1, 0x17C4($s2)
    ctx->pc = 0x208cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6084), GPR_U32(ctx, 5));
label_208cf4:
    // 0x208cf4: 0xc08285e  jal         func_20A178
label_208cf8:
    if (ctx->pc == 0x208CF8u) {
        ctx->pc = 0x208CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CF4u;
        // 0x208cf8: 0xae4216d4  sw          $v0, 0x16D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CFCu;
        goto label_208cfc;
    }
    ctx->pc = 0x208CF4u;
    SET_GPR_U32(ctx, 31, 0x208CFCu);
    ctx->pc = 0x208CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208CF4u;
    // 0x208cf8: 0xae4216d4  sw          $v0, 0x16D4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A178u, 0x208CF4u, 0x208CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208CFCu;
label_208cfc:
    // 0x208cfc: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
label_208d00:
    if (ctx->pc == 0x208D00u) {
        ctx->pc = 0x208D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CFCu;
        // 0x208d00: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D04u;
        goto label_208d04;
    }
    ctx->pc = 0x208CFCu;
    {
        const bool branch_taken_0x208cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CFCu;
        // 0x208d00: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208cfc) {
            ctx->pc = 0x20903Cu;
            goto label_20903c;
        }
    }
    ctx->pc = 0x208D04u;
label_208d04:
    // 0x208d04: 0x8e4416c4  lw          $a0, 0x16C4($s2)
    ctx->pc = 0x208d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5828)));
label_208d08:
    // 0x208d08: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x208d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_208d0c:
    // 0x208d0c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_208d10:
    if (ctx->pc == 0x208D10u) {
        ctx->pc = 0x208D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D0Cu;
        // 0x208d10: 0xa24217b0  sb          $v0, 0x17B0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 6064), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D14u;
        goto label_208d14;
    }
    ctx->pc = 0x208D0Cu;
    {
        const bool branch_taken_0x208d0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x208D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D0Cu;
        // 0x208d10: 0xa24217b0  sb          $v0, 0x17B0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 6064), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d0c) {
            ctx->pc = 0x208D18u;
            goto label_208d18;
        }
    }
    ctx->pc = 0x208D14u;
label_208d14:
    // 0x208d14: 0xe65416c0  swc1        $f20, 0x16C0($s2)
    ctx->pc = 0x208d14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5824), bits); }
label_208d18:
    // 0x208d18: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x208d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_208d1c:
    // 0x208d1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_208d20:
    if (ctx->pc == 0x208D20u) {
        ctx->pc = 0x208D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D1Cu;
        // 0x208d20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D24u;
        goto label_208d24;
    }
    ctx->pc = 0x208D1Cu;
    {
        const bool branch_taken_0x208d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D1Cu;
        // 0x208d20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d1c) {
            ctx->pc = 0x208D30u;
            goto label_208d30;
        }
    }
    ctx->pc = 0x208D24u;
label_208d24:
    // 0x208d24: 0x84420046  lh          $v0, 0x46($v0)
    ctx->pc = 0x208d24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
label_208d28:
    // 0x208d28: 0x3842002c  xori        $v0, $v0, 0x2C
    ctx->pc = 0x208d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)44);
label_208d2c:
    // 0x208d2c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x208d2cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_208d30:
    // 0x208d30: 0x50600027  beql        $v1, $zero, . + 4 + (0x27 << 2)
label_208d34:
    if (ctx->pc == 0x208D34u) {
        ctx->pc = 0x208D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D30u;
        // 0x208d34: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D38u;
        goto label_208d38;
    }
    ctx->pc = 0x208D30u;
    {
        const bool branch_taken_0x208d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x208d30) {
            ctx->pc = 0x208D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208D30u;
            // 0x208d34: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208DD0u;
            goto label_208dd0;
        }
    }
    ctx->pc = 0x208D38u;
label_208d38:
    // 0x208d38: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x208d38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
label_208d3c:
    // 0x208d3c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x208d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_208d40:
    // 0x208d40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_208d44:
    if (ctx->pc == 0x208D44u) {
        ctx->pc = 0x208D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D40u;
        // 0x208d44: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D48u;
        goto label_208d48;
    }
    ctx->pc = 0x208D40u;
    {
        const bool branch_taken_0x208d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D40u;
        // 0x208d44: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d40) {
            ctx->pc = 0x208D54u;
            goto label_208d54;
        }
    }
    ctx->pc = 0x208D48u;
label_208d48:
    // 0x208d48: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x208d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
label_208d4c:
    // 0x208d4c: 0xc07e8a0  jal         func_1FA280
label_208d50:
    if (ctx->pc == 0x208D50u) {
        ctx->pc = 0x208D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D4Cu;
        // 0x208d50: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D54u;
        goto label_208d54;
    }
    ctx->pc = 0x208D4Cu;
    SET_GPR_U32(ctx, 31, 0x208D54u);
    ctx->pc = 0x208D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208D4Cu;
    // 0x208d50: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x208D4Cu, 0x208D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D54u;
label_208d54:
    // 0x208d54: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x208d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_208d58:
    // 0x208d58: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x208d58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
label_208d5c:
    // 0x208d5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x208d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_208d60:
    // 0x208d60: 0x2c62002b  sltiu       $v0, $v1, 0x2B
    ctx->pc = 0x208d60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)43) ? 1 : 0);
label_208d64:
    // 0x208d64: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_208d68:
    if (ctx->pc == 0x208D68u) {
        ctx->pc = 0x208D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D64u;
        // 0x208d68: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D6Cu;
        goto label_208d6c;
    }
    ctx->pc = 0x208D64u;
    {
        const bool branch_taken_0x208d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D64u;
        // 0x208d68: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d64) {
            ctx->pc = 0x208DACu;
            goto label_208dac;
        }
    }
    ctx->pc = 0x208D6Cu;
label_208d6c:
    // 0x208d6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_208d70:
    // 0x208d70: 0x2442ff40  addiu       $v0, $v0, -0xC0
    ctx->pc = 0x208d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967104));
label_208d74:
    // 0x208d74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x208d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208d78:
    // 0x208d78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x208d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_208d7c:
    // 0x208d7c: 0x800008  jr          $a0
label_208d80:
    if (ctx->pc == 0x208D80u) {
        ctx->pc = 0x208D84u;
        goto label_208d84;
    }
    ctx->pc = 0x208D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208D84u: goto label_208d84;
            case 0x208D98u: goto label_208d98;
            case 0x208DACu: goto label_208dac;
            case 0x208DC0u: goto label_208dc0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208D7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x208D84u;
label_208d84:
    // 0x208d84: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x208d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
label_208d88:
    // 0x208d88: 0xc07e8a0  jal         func_1FA280
label_208d8c:
    if (ctx->pc == 0x208D8Cu) {
        ctx->pc = 0x208D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D88u;
        // 0x208d8c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D90u;
        goto label_208d90;
    }
    ctx->pc = 0x208D88u;
    SET_GPR_U32(ctx, 31, 0x208D90u);
    ctx->pc = 0x208D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208D88u;
    // 0x208d8c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x208D88u, 0x208D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D90u;
label_208d90:
    // 0x208d90: 0x1000000f  b           . + 4 + (0xF << 2)
label_208d94:
    if (ctx->pc == 0x208D94u) {
        ctx->pc = 0x208D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D90u;
        // 0x208d94: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D98u;
        goto label_208d98;
    }
    ctx->pc = 0x208D90u;
    {
        const bool branch_taken_0x208d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D90u;
        // 0x208d94: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d90) {
            ctx->pc = 0x208DD0u;
            goto label_208dd0;
        }
    }
    ctx->pc = 0x208D98u;
label_208d98:
    // 0x208d98: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x208d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
label_208d9c:
    // 0x208d9c: 0xc07e8a0  jal         func_1FA280
label_208da0:
    if (ctx->pc == 0x208DA0u) {
        ctx->pc = 0x208DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D9Cu;
        // 0x208da0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208DA4u;
        goto label_208da4;
    }
    ctx->pc = 0x208D9Cu;
    SET_GPR_U32(ctx, 31, 0x208DA4u);
    ctx->pc = 0x208DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208D9Cu;
    // 0x208da0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x208D9Cu, 0x208DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208DA4u;
label_208da4:
    // 0x208da4: 0x1000000a  b           . + 4 + (0xA << 2)
label_208da8:
    if (ctx->pc == 0x208DA8u) {
        ctx->pc = 0x208DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DA4u;
        // 0x208da8: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208DACu;
        goto label_208dac;
    }
    ctx->pc = 0x208DA4u;
    {
        const bool branch_taken_0x208da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DA4u;
        // 0x208da8: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208da4) {
            ctx->pc = 0x208DD0u;
            goto label_208dd0;
        }
    }
    ctx->pc = 0x208DACu;
label_208dac:
    // 0x208dac: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x208dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
label_208db0:
    // 0x208db0: 0xc07e8a0  jal         func_1FA280
label_208db4:
    if (ctx->pc == 0x208DB4u) {
        ctx->pc = 0x208DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DB0u;
        // 0x208db4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208DB8u;
        goto label_208db8;
    }
    ctx->pc = 0x208DB0u;
    SET_GPR_U32(ctx, 31, 0x208DB8u);
    ctx->pc = 0x208DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208DB0u;
    // 0x208db4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x208DB0u, 0x208DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208DB8u;
label_208db8:
    // 0x208db8: 0x10000005  b           . + 4 + (0x5 << 2)
label_208dbc:
    if (ctx->pc == 0x208DBCu) {
        ctx->pc = 0x208DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DB8u;
        // 0x208dbc: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208DC0u;
        goto label_208dc0;
    }
    ctx->pc = 0x208DB8u;
    {
        const bool branch_taken_0x208db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DB8u;
        // 0x208dbc: 0x8e420698  lw          $v0, 0x698($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208db8) {
            ctx->pc = 0x208DD0u;
            goto label_208dd0;
        }
    }
    ctx->pc = 0x208DC0u;
label_208dc0:
    // 0x208dc0: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x208dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
label_208dc4:
    // 0x208dc4: 0xc07e8a0  jal         func_1FA280
label_208dc8:
    if (ctx->pc == 0x208DC8u) {
        ctx->pc = 0x208DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DC4u;
        // 0x208dc8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208DCCu;
        goto label_208dcc;
    }
    ctx->pc = 0x208DC4u;
    SET_GPR_U32(ctx, 31, 0x208DCCu);
    ctx->pc = 0x208DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208DC4u;
    // 0x208dc8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x208DC4u, 0x208DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208DCCu;
label_208dcc:
    // 0x208dcc: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x208dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_208dd0:
    // 0x208dd0: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
label_208dd4:
    if (ctx->pc == 0x208DD4u) {
        ctx->pc = 0x208DD8u;
        goto label_208dd8;
    }
    ctx->pc = 0x208DD0u;
    {
        const bool branch_taken_0x208dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208dd0) {
            ctx->pc = 0x208F74u;
            goto label_208f74;
        }
    }
    ctx->pc = 0x208DD8u;
label_208dd8:
    // 0x208dd8: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x208dd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
label_208ddc:
    // 0x208ddc: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x208ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_208de0:
    // 0x208de0: 0x2c620034  sltiu       $v0, $v1, 0x34
    ctx->pc = 0x208de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
label_208de4:
    // 0x208de4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_208de8:
    if (ctx->pc == 0x208DE8u) {
        ctx->pc = 0x208DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DE4u;
        // 0x208de8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208DECu;
        goto label_208dec;
    }
    ctx->pc = 0x208DE4u;
    {
        const bool branch_taken_0x208de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DE4u;
        // 0x208de8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208de4) {
            ctx->pc = 0x208E48u;
            goto label_208e48;
        }
    }
    ctx->pc = 0x208DECu;
label_208dec:
    // 0x208dec: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x208decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_208df0:
    // 0x208df0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_208df4:
    // 0x208df4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x208df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_208df8:
    // 0x208df8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x208df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208dfc:
    // 0x208dfc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x208dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_208e00:
    // 0x208e00: 0x800008  jr          $a0
label_208e04:
    if (ctx->pc == 0x208E04u) {
        ctx->pc = 0x208E08u;
        goto label_208e08;
    }
    ctx->pc = 0x208E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208E08u: goto label_208e08;
            case 0x208E48u: goto label_208e48;
            case 0x208E98u: goto label_208e98;
            case 0x208F2Cu: goto label_208f2c;
            case 0x208F30u: goto label_208f30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208E00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x208E08u;
label_208e08:
    // 0x208e08: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x208e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_208e0c:
    // 0x208e0c: 0x2463fdfc  addiu       $v1, $v1, -0x204
    ctx->pc = 0x208e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966780));
label_208e10:
    // 0x208e10: 0x2c62007b  sltiu       $v0, $v1, 0x7B
    ctx->pc = 0x208e10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)123) ? 1 : 0);
label_208e14:
    // 0x208e14: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_208e18:
    if (ctx->pc == 0x208E18u) {
        ctx->pc = 0x208E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E14u;
        // 0x208e18: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E1Cu;
        goto label_208e1c;
    }
    ctx->pc = 0x208E14u;
    {
        const bool branch_taken_0x208e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E14u;
        // 0x208e18: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e14) {
            ctx->pc = 0x208F30u;
            goto label_208f30;
        }
    }
    ctx->pc = 0x208E1Cu;
label_208e1c:
    // 0x208e1c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x208e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_208e20:
    // 0x208e20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_208e24:
    // 0x208e24: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x208e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_208e28:
    // 0x208e28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x208e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208e2c:
    // 0x208e2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x208e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_208e30:
    // 0x208e30: 0x800008  jr          $a0
label_208e34:
    if (ctx->pc == 0x208E34u) {
        ctx->pc = 0x208E38u;
        goto label_208e38;
    }
    ctx->pc = 0x208E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208E38u: goto label_208e38;
            case 0x208E40u: goto label_208e40;
            case 0x208F30u: goto label_208f30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208E30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x208E38u;
label_208e38:
    // 0x208e38: 0x1000003d  b           . + 4 + (0x3D << 2)
label_208e3c:
    if (ctx->pc == 0x208E3Cu) {
        ctx->pc = 0x208E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E38u;
        // 0x208e3c: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E40u;
        goto label_208e40;
    }
    ctx->pc = 0x208E38u;
    {
        const bool branch_taken_0x208e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E38u;
        // 0x208e3c: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e38) {
            ctx->pc = 0x208F30u;
            goto label_208f30;
        }
    }
    ctx->pc = 0x208E40u;
label_208e40:
    // 0x208e40: 0x1000003b  b           . + 4 + (0x3B << 2)
label_208e44:
    if (ctx->pc == 0x208E44u) {
        ctx->pc = 0x208E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E40u;
        // 0x208e44: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E48u;
        goto label_208e48;
    }
    ctx->pc = 0x208E40u;
    {
        const bool branch_taken_0x208e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E40u;
        // 0x208e44: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e40) {
            ctx->pc = 0x208F30u;
            goto label_208f30;
        }
    }
    ctx->pc = 0x208E48u;
label_208e48:
    // 0x208e48: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x208e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_208e4c:
    // 0x208e4c: 0x2463fdfc  addiu       $v1, $v1, -0x204
    ctx->pc = 0x208e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966780));
label_208e50:
    // 0x208e50: 0x2c62007b  sltiu       $v0, $v1, 0x7B
    ctx->pc = 0x208e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)123) ? 1 : 0);
label_208e54:
    // 0x208e54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_208e58:
    if (ctx->pc == 0x208E58u) {
        ctx->pc = 0x208E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E54u;
        // 0x208e58: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E5Cu;
        goto label_208e5c;
    }
    ctx->pc = 0x208E54u;
    {
        const bool branch_taken_0x208e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E54u;
        // 0x208e58: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e54) {
            ctx->pc = 0x208E84u;
            goto label_208e84;
        }
    }
    ctx->pc = 0x208E5Cu;
label_208e5c:
    // 0x208e5c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x208e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_208e60:
    // 0x208e60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_208e64:
    // 0x208e64: 0x244202b0  addiu       $v0, $v0, 0x2B0
    ctx->pc = 0x208e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
label_208e68:
    // 0x208e68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x208e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208e6c:
    // 0x208e6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x208e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_208e70:
    // 0x208e70: 0x800008  jr          $a0
label_208e74:
    if (ctx->pc == 0x208E74u) {
        ctx->pc = 0x208E78u;
        goto label_208e78;
    }
    ctx->pc = 0x208E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208E78u: goto label_208e78;
            case 0x208E80u: goto label_208e80;
            case 0x208E84u: goto label_208e84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208E70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x208E78u;
label_208e78:
    // 0x208e78: 0x10000002  b           . + 4 + (0x2 << 2)
label_208e7c:
    if (ctx->pc == 0x208E7Cu) {
        ctx->pc = 0x208E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E78u;
        // 0x208e7c: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E80u;
        goto label_208e80;
    }
    ctx->pc = 0x208E78u;
    {
        const bool branch_taken_0x208e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E78u;
        // 0x208e7c: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e78) {
            ctx->pc = 0x208E84u;
            goto label_208e84;
        }
    }
    ctx->pc = 0x208E80u;
label_208e80:
    // 0x208e80: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x208e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_208e84:
    // 0x208e84: 0xc0c73f8  jal         func_31CFE0
label_208e88:
    if (ctx->pc == 0x208E88u) {
        ctx->pc = 0x208E8Cu;
        goto label_208e8c;
    }
    ctx->pc = 0x208E84u;
    SET_GPR_U32(ctx, 31, 0x208E8Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x208E84u, 0x208E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E8Cu;
label_208e8c:
    // 0x208e8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x208e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_208e90:
    // 0x208e90: 0x10000027  b           . + 4 + (0x27 << 2)
label_208e94:
    if (ctx->pc == 0x208E94u) {
        ctx->pc = 0x208E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E90u;
        // 0x208e94: 0x508004  sllv        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E98u;
        goto label_208e98;
    }
    ctx->pc = 0x208E90u;
    {
        const bool branch_taken_0x208e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E90u;
        // 0x208e94: 0x508004  sllv        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e90) {
            ctx->pc = 0x208F30u;
            goto label_208f30;
        }
    }
    ctx->pc = 0x208E98u;
label_208e98:
    // 0x208e98: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x208e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_208e9c:
    // 0x208e9c: 0x2444fdfc  addiu       $a0, $v0, -0x204
    ctx->pc = 0x208e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966780));
label_208ea0:
    // 0x208ea0: 0x2c83007b  sltiu       $v1, $a0, 0x7B
    ctx->pc = 0x208ea0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)123) ? 1 : 0);
label_208ea4:
    // 0x208ea4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_208ea8:
    if (ctx->pc == 0x208EA8u) {
        ctx->pc = 0x208EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EA4u;
        // 0x208ea8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208EACu;
        goto label_208eac;
    }
    ctx->pc = 0x208EA4u;
    {
        const bool branch_taken_0x208ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EA4u;
        // 0x208ea8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ea4) {
            ctx->pc = 0x208EC4u;
            goto label_208ec4;
        }
    }
    ctx->pc = 0x208EACu;
label_208eac:
    // 0x208eac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x208eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_208eb0:
    // 0x208eb0: 0x244204a0  addiu       $v0, $v0, 0x4A0
    ctx->pc = 0x208eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1184));
label_208eb4:
    // 0x208eb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x208eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208eb8:
    // 0x208eb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x208eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_208ebc:
    // 0x208ebc: 0x800008  jr          $a0
label_208ec0:
    if (ctx->pc == 0x208EC0u) {
        ctx->pc = 0x208EC4u;
        goto label_208ec4;
    }
    ctx->pc = 0x208EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208EC4u: goto label_208ec4;
            case 0x208EF8u: goto label_208ef8;
            case 0x208F24u: goto label_208f24;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208EBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x208EC4u;
label_208ec4:
    // 0x208ec4: 0x924217c1  lbu         $v0, 0x17C1($s2)
    ctx->pc = 0x208ec4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6081)));
label_208ec8:
    // 0x208ec8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_208ecc:
    if (ctx->pc == 0x208ECCu) {
        ctx->pc = 0x208ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EC8u;
        // 0x208ecc: 0x2410001e  addiu       $s0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208ED0u;
        goto label_208ed0;
    }
    ctx->pc = 0x208EC8u;
    {
        const bool branch_taken_0x208ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EC8u;
        // 0x208ecc: 0x2410001e  addiu       $s0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ec8) {
            ctx->pc = 0x208EE0u;
            goto label_208ee0;
        }
    }
    ctx->pc = 0x208ED0u;
label_208ed0:
    // 0x208ed0: 0xc0c7400  jal         func_31D000
label_208ed4:
    if (ctx->pc == 0x208ED4u) {
        ctx->pc = 0x208ED8u;
        goto label_208ed8;
    }
    ctx->pc = 0x208ED0u;
    SET_GPR_U32(ctx, 31, 0x208ED8u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x208ED0u, 0x208ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208ED8u;
label_208ed8:
    // 0x208ed8: 0x10000009  b           . + 4 + (0x9 << 2)
label_208edc:
    if (ctx->pc == 0x208EDCu) {
        ctx->pc = 0x208EE0u;
        goto label_208ee0;
    }
    ctx->pc = 0x208ED8u;
    {
        const bool branch_taken_0x208ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208ed8) {
            ctx->pc = 0x208F00u;
            goto label_208f00;
        }
    }
    ctx->pc = 0x208EE0u;
label_208ee0:
    // 0x208ee0: 0xc0c7400  jal         func_31D000
label_208ee4:
    if (ctx->pc == 0x208EE4u) {
        ctx->pc = 0x208EE8u;
        goto label_208ee8;
    }
    ctx->pc = 0x208EE0u;
    SET_GPR_U32(ctx, 31, 0x208EE8u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x208EE0u, 0x208EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208EE8u;
label_208ee8:
    // 0x208ee8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x208ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_208eec:
    // 0x208eec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x208eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_208ef0:
    // 0x208ef0: 0x10000005  b           . + 4 + (0x5 << 2)
label_208ef4:
    if (ctx->pc == 0x208EF4u) {
        ctx->pc = 0x208EF8u;
        goto label_208ef8;
    }
    ctx->pc = 0x208EF0u;
    {
        const bool branch_taken_0x208ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208ef0) {
            ctx->pc = 0x208F08u;
            goto label_208f08;
        }
    }
    ctx->pc = 0x208EF8u;
label_208ef8:
    // 0x208ef8: 0xc0c7400  jal         func_31D000
label_208efc:
    if (ctx->pc == 0x208EFCu) {
        ctx->pc = 0x208EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EF8u;
        // 0x208efc: 0x2410001e  addiu       $s0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F00u;
        goto label_208f00;
    }
    ctx->pc = 0x208EF8u;
    SET_GPR_U32(ctx, 31, 0x208F00u);
    ctx->pc = 0x208EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208EF8u;
    // 0x208efc: 0x2410001e  addiu       $s0, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x208EF8u, 0x208F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F00u;
label_208f00:
    // 0x208f00: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x208f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_208f04:
    // 0x208f04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x208f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_208f08:
    // 0x208f08: 0x0  nop
    ctx->pc = 0x208f08u;
    // NOP
label_208f0c:
    // 0x208f0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x208f0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208f10:
    // 0x208f10: 0x0  nop
    ctx->pc = 0x208f10u;
    // NOP
label_208f14:
    // 0x208f14: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_208f18:
    if (ctx->pc == 0x208F18u) {
        ctx->pc = 0x208F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F14u;
        // 0x208f18: 0x241003e7  addiu       $s0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F1Cu;
        goto label_208f1c;
    }
    ctx->pc = 0x208F14u;
    {
        const bool branch_taken_0x208f14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x208f14) {
            ctx->pc = 0x208F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208F14u;
            // 0x208f18: 0x241003e7  addiu       $s0, $zero, 0x3E7 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208F30u;
            goto label_208f30;
        }
    }
    ctx->pc = 0x208F1Cu;
label_208f1c:
    // 0x208f1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_208f20:
    if (ctx->pc == 0x208F20u) {
        ctx->pc = 0x208F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F1Cu;
        // 0x208f20: 0xc64117cc  lwc1        $f1, 0x17CC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F24u;
        goto label_208f24;
    }
    ctx->pc = 0x208F1Cu;
    {
        const bool branch_taken_0x208f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F1Cu;
        // 0x208f20: 0xc64117cc  lwc1        $f1, 0x17CC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f1c) {
            ctx->pc = 0x208F34u;
            goto label_208f34;
        }
    }
    ctx->pc = 0x208F24u;
label_208f24:
    // 0x208f24: 0x10000002  b           . + 4 + (0x2 << 2)
label_208f28:
    if (ctx->pc == 0x208F28u) {
        ctx->pc = 0x208F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F24u;
        // 0x208f28: 0x24100023  addiu       $s0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F2Cu;
        goto label_208f2c;
    }
    ctx->pc = 0x208F24u;
    {
        const bool branch_taken_0x208f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F24u;
        // 0x208f28: 0x24100023  addiu       $s0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f24) {
            ctx->pc = 0x208F30u;
            goto label_208f30;
        }
    }
    ctx->pc = 0x208F2Cu;
label_208f2c:
    // 0x208f2c: 0x24100032  addiu       $s0, $zero, 0x32
    ctx->pc = 0x208f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_208f30:
    // 0x208f30: 0xc64117cc  lwc1        $f1, 0x17CC($s2)
    ctx->pc = 0x208f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208f34:
    // 0x208f34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208f34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208f38:
    // 0x208f38: 0x0  nop
    ctx->pc = 0x208f38u;
    // NOP
label_208f3c:
    // 0x208f3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x208f3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208f40:
    // 0x208f40: 0x0  nop
    ctx->pc = 0x208f40u;
    // NOP
label_208f44:
    // 0x208f44: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_208f48:
    if (ctx->pc == 0x208F48u) {
        ctx->pc = 0x208F4Cu;
        goto label_208f4c;
    }
    ctx->pc = 0x208F44u;
    {
        const bool branch_taken_0x208f44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208f44) {
            ctx->pc = 0x208F74u;
            goto label_208f74;
        }
    }
    ctx->pc = 0x208F4Cu;
label_208f4c:
    // 0x208f4c: 0x1a000009  blez        $s0, . + 4 + (0x9 << 2)
label_208f50:
    if (ctx->pc == 0x208F50u) {
        ctx->pc = 0x208F54u;
        goto label_208f54;
    }
    ctx->pc = 0x208F4Cu;
    {
        const bool branch_taken_0x208f4c = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x208f4c) {
            ctx->pc = 0x208F74u;
            goto label_208f74;
        }
    }
    ctx->pc = 0x208F54u;
label_208f54:
    // 0x208f54: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x208f54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
label_208f58:
    // 0x208f58: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x208f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_208f5c:
    // 0x208f5c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_208f60:
    if (ctx->pc == 0x208F60u) {
        ctx->pc = 0x208F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F5Cu;
        // 0x208f60: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F64u;
        goto label_208f64;
    }
    ctx->pc = 0x208F5Cu;
    {
        const bool branch_taken_0x208f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F5Cu;
        // 0x208f60: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f5c) {
            ctx->pc = 0x208F68u;
            goto label_208f68;
        }
    }
    ctx->pc = 0x208F64u;
label_208f64:
    // 0x208f64: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x208f64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_208f68:
    // 0x208f68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208f6c:
    // 0x208f6c: 0xc0a3b4a  jal         func_28ED28
label_208f70:
    if (ctx->pc == 0x208F70u) {
        ctx->pc = 0x208F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F6Cu;
        // 0x208f70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F74u;
        goto label_208f74;
    }
    ctx->pc = 0x208F6Cu;
    SET_GPR_U32(ctx, 31, 0x208F74u);
    ctx->pc = 0x208F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F6Cu;
    // 0x208f70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ED28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ED28u, 0x208F6Cu, 0x208F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F74u;
label_208f74:
    // 0x208f74: 0xc09c604  jal         func_271810
label_208f78:
    if (ctx->pc == 0x208F78u) {
        ctx->pc = 0x208F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F74u;
        // 0x208f78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F7Cu;
        goto label_208f7c;
    }
    ctx->pc = 0x208F74u;
    SET_GPR_U32(ctx, 31, 0x208F7Cu);
    ctx->pc = 0x208F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208F74u;
    // 0x208f78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271810u, 0x208F74u, 0x208F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F7Cu;
label_208f7c:
    // 0x208f7c: 0x8e460698  lw          $a2, 0x698($s2)
    ctx->pc = 0x208f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_208f80:
    // 0x208f80: 0x10c0002e  beqz        $a2, . + 4 + (0x2E << 2)
label_208f84:
    if (ctx->pc == 0x208F84u) {
        ctx->pc = 0x208F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F80u;
        // 0x208f84: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F88u;
        goto label_208f88;
    }
    ctx->pc = 0x208F80u;
    {
        const bool branch_taken_0x208f80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x208F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F80u;
        // 0x208f84: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f80) {
            ctx->pc = 0x20903Cu;
            goto label_20903c;
        }
    }
    ctx->pc = 0x208F88u;
label_208f88:
    // 0x208f88: 0x8cd10040  lw          $s1, 0x40($a2)
    ctx->pc = 0x208f88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
label_208f8c:
    // 0x208f8c: 0x16200013  bnez        $s1, . + 4 + (0x13 << 2)
label_208f90:
    if (ctx->pc == 0x208F90u) {
        ctx->pc = 0x208F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F8Cu;
        // 0x208f90: 0x84d00044  lh          $s0, 0x44($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208F94u;
        goto label_208f94;
    }
    ctx->pc = 0x208F8Cu;
    {
        const bool branch_taken_0x208f8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x208F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F8Cu;
        // 0x208f90: 0x84d00044  lh          $s0, 0x44($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f8c) {
            ctx->pc = 0x208FDCu;
            goto label_208fdc;
        }
    }
    ctx->pc = 0x208F94u;
label_208f94:
    // 0x208f94: 0x8e4517c4  lw          $a1, 0x17C4($s2)
    ctx->pc = 0x208f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6084)));
label_208f98:
    // 0x208f98: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x208f98u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
label_208f9c:
    // 0x208f9c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_208fa0:
    if (ctx->pc == 0x208FA0u) {
        ctx->pc = 0x208FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F9Cu;
        // 0x208fa0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208FA4u;
        goto label_208fa4;
    }
    ctx->pc = 0x208F9Cu;
    {
        const bool branch_taken_0x208f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208F9Cu;
        // 0x208fa0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208f9c) {
            ctx->pc = 0x208FDCu;
            goto label_208fdc;
        }
    }
    ctx->pc = 0x208FA4u;
label_208fa4:
    // 0x208fa4: 0x864617c8  lh          $a2, 0x17C8($s2)
    ctx->pc = 0x208fa4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6088)));
label_208fa8:
    // 0x208fa8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x208fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_208fac:
    // 0x208fac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x208facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_208fb0:
    // 0x208fb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x208fb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208fb4:
    // 0x208fb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x208fb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208fb8:
    // 0x208fb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x208fb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208fbc:
    // 0x208fbc: 0xc0b2e92  jal         func_2CBA48
label_208fc0:
    if (ctx->pc == 0x208FC0u) {
        ctx->pc = 0x208FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FBCu;
        // 0x208fc0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208FC4u;
        goto label_208fc4;
    }
    ctx->pc = 0x208FBCu;
    SET_GPR_U32(ctx, 31, 0x208FC4u);
    ctx->pc = 0x208FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208FBCu;
    // 0x208fc0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x208FBCu, 0x208FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208FC4u;
label_208fc4:
    // 0x208fc4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x208fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_208fc8:
    // 0x208fc8: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
label_208fcc:
    if (ctx->pc == 0x208FCCu) {
        ctx->pc = 0x208FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FC8u;
        // 0x208fcc: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208FD0u;
        goto label_208fd0;
    }
    ctx->pc = 0x208FC8u;
    {
        const bool branch_taken_0x208fc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x208FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FC8u;
        // 0x208fcc: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fc8) {
            ctx->pc = 0x208FD8u;
            goto label_208fd8;
        }
    }
    ctx->pc = 0x208FD0u;
label_208fd0:
    // 0x208fd0: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
label_208fd4:
    if (ctx->pc == 0x208FD4u) {
        ctx->pc = 0x208FD8u;
        goto label_208fd8;
    }
    ctx->pc = 0x208FD0u;
    {
        const bool branch_taken_0x208fd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x208fd0) {
            ctx->pc = 0x208FDCu;
            goto label_208fdc;
        }
    }
    ctx->pc = 0x208FD8u;
label_208fd8:
    // 0x208fd8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x208fd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208fdc:
    // 0x208fdc: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
label_208fe0:
    if (ctx->pc == 0x208FE0u) {
        ctx->pc = 0x208FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FDCu;
        // 0x208fe0: 0x111027  nor         $v0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208FE4u;
        goto label_208fe4;
    }
    ctx->pc = 0x208FDCu;
    {
        const bool branch_taken_0x208fdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x208FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FDCu;
        // 0x208fe0: 0x111027  nor         $v0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fdc) {
            ctx->pc = 0x20903Cu;
            goto label_20903c;
        }
    }
    ctx->pc = 0x208FE4u;
label_208fe4:
    // 0x208fe4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_208fe8:
    if (ctx->pc == 0x208FE8u) {
        ctx->pc = 0x208FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FE4u;
        // 0x208fe8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208FECu;
        goto label_208fec;
    }
    ctx->pc = 0x208FE4u;
    {
        const bool branch_taken_0x208fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FE4u;
        // 0x208fe8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fe4) {
            ctx->pc = 0x209018u;
            goto label_209018;
        }
    }
    ctx->pc = 0x208FECu;
label_208fec:
    // 0x208fec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x208fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_208ff0:
    // 0x208ff0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x208ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_208ff4:
    // 0x208ff4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x208ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208ff8:
    // 0x208ff8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x208ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_208ffc:
    // 0x208ffc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x208ffcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209000:
    // 0x209000: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x209000u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209004:
    // 0x209004: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x209004u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209008:
    // 0x209008: 0xc0b2e92  jal         func_2CBA48
label_20900c:
    if (ctx->pc == 0x20900Cu) {
        ctx->pc = 0x20900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209008u;
        // 0x20900c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209010u;
        goto label_209010;
    }
    ctx->pc = 0x209008u;
    SET_GPR_U32(ctx, 31, 0x209010u);
    ctx->pc = 0x20900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209008u;
    // 0x20900c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x209008u, 0x209010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209010u;
label_209010:
    // 0x209010: 0x1000000b  b           . + 4 + (0xB << 2)
label_209014:
    if (ctx->pc == 0x209014u) {
        ctx->pc = 0x209014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209010u;
        // 0x209014: 0x8e4416d4  lw          $a0, 0x16D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209018u;
        goto label_209018;
    }
    ctx->pc = 0x209010u;
    {
        const bool branch_taken_0x209010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209010u;
        // 0x209014: 0x8e4416d4  lw          $a0, 0x16D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209010) {
            ctx->pc = 0x209040u;
            goto label_209040;
        }
    }
    ctx->pc = 0x209018u;
label_209018:
    // 0x209018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20901c:
    // 0x20901c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x20901cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_209020:
    // 0x209020: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x209020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_209024:
    // 0x209024: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x209024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_209028:
    // 0x209028: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x209028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20902c:
    // 0x20902c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20902cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209030:
    // 0x209030: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x209030u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209034:
    // 0x209034: 0xc0b2e92  jal         func_2CBA48
label_209038:
    if (ctx->pc == 0x209038u) {
        ctx->pc = 0x209038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209034u;
        // 0x209038: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20903Cu;
        goto label_20903c;
    }
    ctx->pc = 0x209034u;
    SET_GPR_U32(ctx, 31, 0x20903Cu);
    ctx->pc = 0x209038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209034u;
    // 0x209038: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x209034u, 0x20903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20903Cu;
label_20903c:
    // 0x20903c: 0x8e4416d4  lw          $a0, 0x16D4($s2)
    ctx->pc = 0x20903cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
label_209040:
    // 0x209040: 0x3c02ffb1  lui         $v0, 0xFFB1
    ctx->pc = 0x209040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65457 << 16));
label_209044:
    // 0x209044: 0x8e4516d0  lw          $a1, 0x16D0($s2)
    ctx->pc = 0x209044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
label_209048:
    // 0x209048: 0x3442dbbb  ori         $v0, $v0, 0xDBBB
    ctx->pc = 0x209048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56251);
label_20904c:
    // 0x20904c: 0x3c037728  lui         $v1, 0x7728
    ctx->pc = 0x20904cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30504 << 16));
label_209050:
    // 0x209050: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x209050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_209054:
    // 0x209054: 0x34638b82  ori         $v1, $v1, 0x8B82
    ctx->pc = 0x209054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35714);
label_209058:
    // 0x209058: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x209058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_20905c:
    // 0x20905c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x20905cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_209060:
    // 0x209060: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x209060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_209064:
    // 0x209064: 0xae4516d0  sw          $a1, 0x16D0($s2)
    ctx->pc = 0x209064u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 5));
label_209068:
    // 0x209068: 0xae4416d4  sw          $a0, 0x16D4($s2)
    ctx->pc = 0x209068u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 4));
label_20906c:
    // 0x20906c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_209070:
    if (ctx->pc == 0x209070u) {
        ctx->pc = 0x209070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20906Cu;
        // 0x209070: 0xa2400617  sb          $zero, 0x617($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1559), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209074u;
        goto label_209074;
    }
    ctx->pc = 0x20906Cu;
    {
        const bool branch_taken_0x20906c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20906Cu;
        // 0x209070: 0xa2400617  sb          $zero, 0x617($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1559), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20906c) {
            ctx->pc = 0x20907Cu;
            goto label_20907c;
        }
    }
    ctx->pc = 0x209074u;
label_209074:
    // 0x209074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209078:
    // 0x209078: 0xa2420617  sb          $v0, 0x617($s2)
    ctx->pc = 0x209078u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1559), (uint8_t)GPR_U32(ctx, 2));
label_20907c:
    // 0x20907c: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x20907cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_209080:
    // 0x209080: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x209080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
label_209084:
    // 0x209084: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_209088:
    if (ctx->pc == 0x209088u) {
        ctx->pc = 0x209088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209084u;
        // 0x209088: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20908Cu;
        goto label_20908c;
    }
    ctx->pc = 0x209084u;
    {
        const bool branch_taken_0x209084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209084u;
        // 0x209088: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209084) {
            ctx->pc = 0x2090A4u;
            goto label_2090a4;
        }
    }
    ctx->pc = 0x20908Cu;
label_20908c:
    // 0x20908c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_209090:
    if (ctx->pc == 0x209090u) {
        ctx->pc = 0x209090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20908Cu;
        // 0x209090: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209094u;
        goto label_209094;
    }
    ctx->pc = 0x20908Cu;
    {
        const bool branch_taken_0x20908c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20908Cu;
        // 0x209090: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20908c) {
            ctx->pc = 0x2090B0u;
            goto label_2090b0;
        }
    }
    ctx->pc = 0x209094u;
label_209094:
    // 0x209094: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_209098:
    if (ctx->pc == 0x209098u) {
        ctx->pc = 0x209098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209094u;
        // 0x209098: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20909Cu;
        goto label_20909c;
    }
    ctx->pc = 0x209094u;
    {
        const bool branch_taken_0x209094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x209094) {
            ctx->pc = 0x209098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209094u;
            // 0x209098: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2090B4u;
            goto label_2090b4;
        }
    }
    ctx->pc = 0x20909Cu;
label_20909c:
    // 0x20909c: 0x10000009  b           . + 4 + (0x9 << 2)
label_2090a0:
    if (ctx->pc == 0x2090A0u) {
        ctx->pc = 0x2090A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20909Cu;
        // 0x2090a0: 0x8e4216dc  lw          $v0, 0x16DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5852)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2090A4u;
        goto label_2090a4;
    }
    ctx->pc = 0x20909Cu;
    {
        const bool branch_taken_0x20909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2090A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20909Cu;
        // 0x2090a0: 0x8e4216dc  lw          $v0, 0x16DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20909c) {
            ctx->pc = 0x2090C4u;
            goto label_2090c4;
        }
    }
    ctx->pc = 0x2090A4u;
label_2090a4:
    // 0x2090a4: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x2090a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_2090a8:
    // 0x2090a8: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_2090ac:
    if (ctx->pc == 0x2090ACu) {
        ctx->pc = 0x2090ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090A8u;
        // 0x2090ac: 0x8e4216dc  lw          $v0, 0x16DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5852)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2090B0u;
        goto label_2090b0;
    }
    ctx->pc = 0x2090A8u;
    {
        const bool branch_taken_0x2090a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2090a8) {
            ctx->pc = 0x2090ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2090A8u;
            // 0x2090ac: 0x8e4216dc  lw          $v0, 0x16DC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5852)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2090C4u;
            goto label_2090c4;
        }
    }
    ctx->pc = 0x2090B0u;
label_2090b0:
    // 0x2090b0: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x2090b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
label_2090b4:
    // 0x2090b4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2090b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_2090b8:
    // 0x2090b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2090b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2090bc:
    // 0x2090bc: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x2090bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
label_2090c0:
    // 0x2090c0: 0x8e4216dc  lw          $v0, 0x16DC($s2)
    ctx->pc = 0x2090c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5852)));
label_2090c4:
    // 0x2090c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2090c8:
    if (ctx->pc == 0x2090C8u) {
        ctx->pc = 0x2090C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090C4u;
        // 0x2090c8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2090CCu;
        goto label_2090cc;
    }
    ctx->pc = 0x2090C4u;
    {
        const bool branch_taken_0x2090c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2090C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090C4u;
        // 0x2090c8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2090c4) {
            ctx->pc = 0x2090D0u;
            goto label_2090d0;
        }
    }
    ctx->pc = 0x2090CCu;
label_2090cc:
    // 0x2090cc: 0xae4216dc  sw          $v0, 0x16DC($s2)
    ctx->pc = 0x2090ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5852), GPR_U32(ctx, 2));
label_2090d0:
    // 0x2090d0: 0x8e4216e0  lw          $v0, 0x16E0($s2)
    ctx->pc = 0x2090d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5856)));
label_2090d4:
    // 0x2090d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2090d8:
    if (ctx->pc == 0x2090D8u) {
        ctx->pc = 0x2090D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090D4u;
        // 0x2090d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2090DCu;
        goto label_2090dc;
    }
    ctx->pc = 0x2090D4u;
    {
        const bool branch_taken_0x2090d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2090D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090D4u;
        // 0x2090d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2090d4) {
            ctx->pc = 0x2090E0u;
            goto label_2090e0;
        }
    }
    ctx->pc = 0x2090DCu;
label_2090dc:
    // 0x2090dc: 0xae4216e0  sw          $v0, 0x16E0($s2)
    ctx->pc = 0x2090dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5856), GPR_U32(ctx, 2));
label_2090e0:
    // 0x2090e0: 0x8e4216ec  lw          $v0, 0x16EC($s2)
    ctx->pc = 0x2090e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5868)));
label_2090e4:
    // 0x2090e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2090e8:
    if (ctx->pc == 0x2090E8u) {
        ctx->pc = 0x2090E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090E4u;
        // 0x2090e8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2090ECu;
        goto label_2090ec;
    }
    ctx->pc = 0x2090E4u;
    {
        const bool branch_taken_0x2090e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2090E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090E4u;
        // 0x2090e8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2090e4) {
            ctx->pc = 0x2090F0u;
            goto label_2090f0;
        }
    }
    ctx->pc = 0x2090ECu;
label_2090ec:
    // 0x2090ec: 0xae4216ec  sw          $v0, 0x16EC($s2)
    ctx->pc = 0x2090ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5868), GPR_U32(ctx, 2));
label_2090f0:
    // 0x2090f0: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x2090f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
label_2090f4:
    // 0x2090f4: 0x58400001  blezl       $v0, . + 4 + (0x1 << 2)
label_2090f8:
    if (ctx->pc == 0x2090F8u) {
        ctx->pc = 0x2090F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2090F4u;
        // 0x2090f8: 0xae4016ec  sw          $zero, 0x16EC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5868), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2090FCu;
        goto label_2090fc;
    }
    ctx->pc = 0x2090F4u;
    {
        const bool branch_taken_0x2090f4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2090f4) {
            ctx->pc = 0x2090F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2090F4u;
            // 0x2090f8: 0xae4016ec  sw          $zero, 0x16EC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 5868), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2090FCu;
            goto label_2090fc;
        }
    }
    ctx->pc = 0x2090FCu;
label_2090fc:
    // 0x2090fc: 0x864217ca  lh          $v0, 0x17CA($s2)
    ctx->pc = 0x2090fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6090)));
label_209100:
    // 0x209100: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_209104:
    if (ctx->pc == 0x209104u) {
        ctx->pc = 0x209104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209100u;
        // 0x209104: 0x964317ca  lhu         $v1, 0x17CA($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6090)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209108u;
        goto label_209108;
    }
    ctx->pc = 0x209100u;
    {
        const bool branch_taken_0x209100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209100u;
        // 0x209104: 0x964317ca  lhu         $v1, 0x17CA($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6090)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209100) {
            ctx->pc = 0x209110u;
            goto label_209110;
        }
    }
    ctx->pc = 0x209108u;
label_209108:
    // 0x209108: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x209108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20910c:
    // 0x20910c: 0xa64217ca  sh          $v0, 0x17CA($s2)
    ctx->pc = 0x20910cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6090), (uint16_t)GPR_U32(ctx, 2));
label_209110:
    // 0x209110: 0xc64117cc  lwc1        $f1, 0x17CC($s2)
    ctx->pc = 0x209110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209114:
    // 0x209114: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x209114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_209118:
    // 0x209118: 0x0  nop
    ctx->pc = 0x209118u;
    // NOP
label_20911c:
    // 0x20911c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x20911cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209120:
    // 0x209120: 0x0  nop
    ctx->pc = 0x209120u;
    // NOP
label_209124:
    // 0x209124: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_209128:
    if (ctx->pc == 0x209128u) {
        ctx->pc = 0x209128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209124u;
        // 0x209128: 0xc6411714  lwc1        $f1, 0x1714($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20912Cu;
        goto label_20912c;
    }
    ctx->pc = 0x209124u;
    {
        const bool branch_taken_0x209124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209124) {
            ctx->pc = 0x209128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209124u;
            // 0x209128: 0xc6411714  lwc1        $f1, 0x1714($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x209164u;
            goto label_209164;
        }
    }
    ctx->pc = 0x20912Cu;
label_20912c:
    // 0x20912c: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x20912cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209130:
    // 0x209130: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x209130u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209134:
    // 0x209134: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x209134u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209138:
    // 0x209138: 0x0  nop
    ctx->pc = 0x209138u;
    // NOP
label_20913c:
    // 0x20913c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_209140:
    if (ctx->pc == 0x209140u) {
        ctx->pc = 0x209140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20913Cu;
        // 0x209140: 0xe64017cc  swc1        $f0, 0x17CC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 6092), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209144u;
        goto label_209144;
    }
    ctx->pc = 0x20913Cu;
    {
        const bool branch_taken_0x20913c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20913Cu;
        // 0x209140: 0xe64017cc  swc1        $f0, 0x17CC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 6092), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20913c) {
            ctx->pc = 0x20915Cu;
            goto label_20915c;
        }
    }
    ctx->pc = 0x209144u;
label_209144:
    // 0x209144: 0x8e4316d4  lw          $v1, 0x16D4($s2)
    ctx->pc = 0x209144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
label_209148:
    // 0x209148: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x209148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
label_20914c:
    // 0x20914c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20914cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_209150:
    // 0x209150: 0xae4005b4  sw          $zero, 0x5B4($s2)
    ctx->pc = 0x209150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1460), GPR_U32(ctx, 0));
label_209154:
    // 0x209154: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x209154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_209158:
    // 0x209158: 0xae4316d4  sw          $v1, 0x16D4($s2)
    ctx->pc = 0x209158u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 3));
label_20915c:
    // 0x20915c: 0xc6411714  lwc1        $f1, 0x1714($s2)
    ctx->pc = 0x20915cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209160:
    // 0x209160: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x209160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_209164:
    // 0x209164: 0x0  nop
    ctx->pc = 0x209164u;
    // NOP
label_209168:
    // 0x209168: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x209168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20916c:
    // 0x20916c: 0x0  nop
    ctx->pc = 0x20916cu;
    // NOP
label_209170:
    // 0x209170: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_209174:
    if (ctx->pc == 0x209174u) {
        ctx->pc = 0x209174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209170u;
        // 0x209174: 0xc64116e4  lwc1        $f1, 0x16E4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209178u;
        goto label_209178;
    }
    ctx->pc = 0x209170u;
    {
        const bool branch_taken_0x209170 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209170) {
            ctx->pc = 0x209174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209170u;
            // 0x209174: 0xc64116e4  lwc1        $f1, 0x16E4($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x209188u;
            goto label_209188;
        }
    }
    ctx->pc = 0x209178u;
label_209178:
    // 0x209178: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x209178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20917c:
    // 0x20917c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20917cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209180:
    // 0x209180: 0xe6401714  swc1        $f0, 0x1714($s2)
    ctx->pc = 0x209180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5908), bits); }
label_209184:
    // 0x209184: 0xc64116e4  lwc1        $f1, 0x16E4($s2)
    ctx->pc = 0x209184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209188:
    // 0x209188: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x209188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20918c:
    // 0x20918c: 0x0  nop
    ctx->pc = 0x20918cu;
    // NOP
label_209190:
    // 0x209190: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_209194:
    if (ctx->pc == 0x209194u) {
        ctx->pc = 0x209194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209190u;
        // 0x209194: 0xc6411720  lwc1        $f1, 0x1720($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209198u;
        goto label_209198;
    }
    ctx->pc = 0x209190u;
    {
        const bool branch_taken_0x209190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209190) {
            ctx->pc = 0x209194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209190u;
            // 0x209194: 0xc6411720  lwc1        $f1, 0x1720($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2091A8u;
            goto label_2091a8;
        }
    }
    ctx->pc = 0x209198u;
label_209198:
    // 0x209198: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x209198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20919c:
    // 0x20919c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20919cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2091a0:
    // 0x2091a0: 0xe64016e4  swc1        $f0, 0x16E4($s2)
    ctx->pc = 0x2091a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5860), bits); }
label_2091a4:
    // 0x2091a4: 0xc6411720  lwc1        $f1, 0x1720($s2)
    ctx->pc = 0x2091a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2091a8:
    // 0x2091a8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2091a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2091ac:
    // 0x2091ac: 0x0  nop
    ctx->pc = 0x2091acu;
    // NOP
label_2091b0:
    // 0x2091b0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_2091b4:
    if (ctx->pc == 0x2091B4u) {
        ctx->pc = 0x2091B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091B0u;
        // 0x2091b4: 0xc6411724  lwc1        $f1, 0x1724($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2091B8u;
        goto label_2091b8;
    }
    ctx->pc = 0x2091B0u;
    {
        const bool branch_taken_0x2091b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2091b0) {
            ctx->pc = 0x2091B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2091B0u;
            // 0x2091b4: 0xc6411724  lwc1        $f1, 0x1724($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2091C8u;
            goto label_2091c8;
        }
    }
    ctx->pc = 0x2091B8u;
label_2091b8:
    // 0x2091b8: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x2091b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2091bc:
    // 0x2091bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2091bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2091c0:
    // 0x2091c0: 0xe6401720  swc1        $f0, 0x1720($s2)
    ctx->pc = 0x2091c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5920), bits); }
label_2091c4:
    // 0x2091c4: 0xc6411724  lwc1        $f1, 0x1724($s2)
    ctx->pc = 0x2091c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2091c8:
    // 0x2091c8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2091c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2091cc:
    // 0x2091cc: 0x0  nop
    ctx->pc = 0x2091ccu;
    // NOP
label_2091d0:
    // 0x2091d0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_2091d4:
    if (ctx->pc == 0x2091D4u) {
        ctx->pc = 0x2091D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091D0u;
        // 0x2091d4: 0xc6411728  lwc1        $f1, 0x1728($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2091D8u;
        goto label_2091d8;
    }
    ctx->pc = 0x2091D0u;
    {
        const bool branch_taken_0x2091d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2091d0) {
            ctx->pc = 0x2091D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2091D0u;
            // 0x2091d4: 0xc6411728  lwc1        $f1, 0x1728($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2091E8u;
            goto label_2091e8;
        }
    }
    ctx->pc = 0x2091D8u;
label_2091d8:
    // 0x2091d8: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x2091d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2091dc:
    // 0x2091dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2091dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2091e0:
    // 0x2091e0: 0xe6401724  swc1        $f0, 0x1724($s2)
    ctx->pc = 0x2091e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5924), bits); }
label_2091e4:
    // 0x2091e4: 0xc6411728  lwc1        $f1, 0x1728($s2)
    ctx->pc = 0x2091e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2091e8:
    // 0x2091e8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2091e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2091ec:
    // 0x2091ec: 0x0  nop
    ctx->pc = 0x2091ecu;
    // NOP
label_2091f0:
    // 0x2091f0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_2091f4:
    if (ctx->pc == 0x2091F4u) {
        ctx->pc = 0x2091F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091F0u;
        // 0x2091f4: 0x924217b0  lbu         $v0, 0x17B0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2091F8u;
        goto label_2091f8;
    }
    ctx->pc = 0x2091F0u;
    {
        const bool branch_taken_0x2091f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2091f0) {
            ctx->pc = 0x2091F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2091F0u;
            // 0x2091f4: 0x924217b0  lbu         $v0, 0x17B0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209208u;
            goto label_209208;
        }
    }
    ctx->pc = 0x2091F8u;
label_2091f8:
    // 0x2091f8: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x2091f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2091fc:
    // 0x2091fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2091fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209200:
    // 0x209200: 0xe6401728  swc1        $f0, 0x1728($s2)
    ctx->pc = 0x209200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5928), bits); }
label_209204:
    // 0x209204: 0x924217b0  lbu         $v0, 0x17B0($s2)
    ctx->pc = 0x209204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6064)));
label_209208:
    // 0x209208: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20920c:
    if (ctx->pc == 0x20920Cu) {
        ctx->pc = 0x20920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209208u;
        // 0x20920c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209210u;
        goto label_209210;
    }
    ctx->pc = 0x209208u;
    {
        const bool branch_taken_0x209208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209208u;
        // 0x20920c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209208) {
            ctx->pc = 0x209214u;
            goto label_209214;
        }
    }
    ctx->pc = 0x209210u;
label_209210:
    // 0x209210: 0xa24217b0  sb          $v0, 0x17B0($s2)
    ctx->pc = 0x209210u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6064), (uint8_t)GPR_U32(ctx, 2));
label_209214:
    // 0x209214: 0xc641172c  lwc1        $f1, 0x172C($s2)
    ctx->pc = 0x209214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209218:
    // 0x209218: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x209218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20921c:
    // 0x20921c: 0x0  nop
    ctx->pc = 0x20921cu;
    // NOP
label_209220:
    // 0x209220: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_209224:
    if (ctx->pc == 0x209224u) {
        ctx->pc = 0x209224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209220u;
        // 0x209224: 0xc6411730  lwc1        $f1, 0x1730($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209228u;
        goto label_209228;
    }
    ctx->pc = 0x209220u;
    {
        const bool branch_taken_0x209220 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209220) {
            ctx->pc = 0x209224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209220u;
            // 0x209224: 0xc6411730  lwc1        $f1, 0x1730($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x209238u;
            goto label_209238;
        }
    }
    ctx->pc = 0x209228u;
label_209228:
    // 0x209228: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x209228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20922c:
    // 0x20922c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20922cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209230:
    // 0x209230: 0xe640172c  swc1        $f0, 0x172C($s2)
    ctx->pc = 0x209230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5932), bits); }
label_209234:
    // 0x209234: 0xc6411730  lwc1        $f1, 0x1730($s2)
    ctx->pc = 0x209234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209238:
    // 0x209238: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x209238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20923c:
    // 0x20923c: 0x0  nop
    ctx->pc = 0x20923cu;
    // NOP
label_209240:
    // 0x209240: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_209244:
    if (ctx->pc == 0x209244u) {
        ctx->pc = 0x209244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209240u;
        // 0x209244: 0xc641173c  lwc1        $f1, 0x173C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209248u;
        goto label_209248;
    }
    ctx->pc = 0x209240u;
    {
        const bool branch_taken_0x209240 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209240) {
            ctx->pc = 0x209244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209240u;
            // 0x209244: 0xc641173c  lwc1        $f1, 0x173C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x209258u;
            goto label_209258;
        }
    }
    ctx->pc = 0x209248u;
label_209248:
    // 0x209248: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x209248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20924c:
    // 0x20924c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20924cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209250:
    // 0x209250: 0xe6401730  swc1        $f0, 0x1730($s2)
    ctx->pc = 0x209250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5936), bits); }
label_209254:
    // 0x209254: 0xc641173c  lwc1        $f1, 0x173C($s2)
    ctx->pc = 0x209254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209258:
    // 0x209258: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x209258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20925c:
    // 0x20925c: 0x0  nop
    ctx->pc = 0x20925cu;
    // NOP
label_209260:
    // 0x209260: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_209264:
    if (ctx->pc == 0x209264u) {
        ctx->pc = 0x209264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209260u;
        // 0x209264: 0xc6411740  lwc1        $f1, 0x1740($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209268u;
        goto label_209268;
    }
    ctx->pc = 0x209260u;
    {
        const bool branch_taken_0x209260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209260) {
            ctx->pc = 0x209264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209260u;
            // 0x209264: 0xc6411740  lwc1        $f1, 0x1740($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x209278u;
            goto label_209278;
        }
    }
    ctx->pc = 0x209268u;
label_209268:
    // 0x209268: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x209268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20926c:
    // 0x20926c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20926cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209270:
    // 0x209270: 0xe640173c  swc1        $f0, 0x173C($s2)
    ctx->pc = 0x209270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5948), bits); }
label_209274:
    // 0x209274: 0xc6411740  lwc1        $f1, 0x1740($s2)
    ctx->pc = 0x209274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209278:
    // 0x209278: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x209278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20927c:
    // 0x20927c: 0x0  nop
    ctx->pc = 0x20927cu;
    // NOP
label_209280:
    // 0x209280: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_209284:
    if (ctx->pc == 0x209284u) {
        ctx->pc = 0x209284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209280u;
        // 0x209284: 0xc6411744  lwc1        $f1, 0x1744($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209288u;
        goto label_209288;
    }
    ctx->pc = 0x209280u;
    {
        const bool branch_taken_0x209280 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209280) {
            ctx->pc = 0x209284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209280u;
            // 0x209284: 0xc6411744  lwc1        $f1, 0x1744($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x209298u;
            goto label_209298;
        }
    }
    ctx->pc = 0x209288u;
label_209288:
    // 0x209288: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x209288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20928c:
    // 0x20928c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20928cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209290:
    // 0x209290: 0xe6401740  swc1        $f0, 0x1740($s2)
    ctx->pc = 0x209290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5952), bits); }
label_209294:
    // 0x209294: 0xc6411744  lwc1        $f1, 0x1744($s2)
    ctx->pc = 0x209294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209298:
    // 0x209298: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x209298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20929c:
    // 0x20929c: 0x0  nop
    ctx->pc = 0x20929cu;
    // NOP
label_2092a0:
    // 0x2092a0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_2092a4:
    if (ctx->pc == 0x2092A4u) {
        ctx->pc = 0x2092A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092A0u;
        // 0x2092a4: 0xc6411734  lwc1        $f1, 0x1734($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2092A8u;
        goto label_2092a8;
    }
    ctx->pc = 0x2092A0u;
    {
        const bool branch_taken_0x2092a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2092a0) {
            ctx->pc = 0x2092A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2092A0u;
            // 0x2092a4: 0xc6411734  lwc1        $f1, 0x1734($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2092B8u;
            goto label_2092b8;
        }
    }
    ctx->pc = 0x2092A8u;
label_2092a8:
    // 0x2092a8: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x2092a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2092ac:
    // 0x2092ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2092acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2092b0:
    // 0x2092b0: 0xe6401744  swc1        $f0, 0x1744($s2)
    ctx->pc = 0x2092b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5956), bits); }
label_2092b4:
    // 0x2092b4: 0xc6411734  lwc1        $f1, 0x1734($s2)
    ctx->pc = 0x2092b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2092b8:
    // 0x2092b8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2092b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2092bc:
    // 0x2092bc: 0x0  nop
    ctx->pc = 0x2092bcu;
    // NOP
label_2092c0:
    // 0x2092c0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_2092c4:
    if (ctx->pc == 0x2092C4u) {
        ctx->pc = 0x2092C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092C0u;
        // 0x2092c4: 0xc6411748  lwc1        $f1, 0x1748($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2092C8u;
        goto label_2092c8;
    }
    ctx->pc = 0x2092C0u;
    {
        const bool branch_taken_0x2092c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2092c0) {
            ctx->pc = 0x2092C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2092C0u;
            // 0x2092c4: 0xc6411748  lwc1        $f1, 0x1748($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2092D8u;
            goto label_2092d8;
        }
    }
    ctx->pc = 0x2092C8u;
label_2092c8:
    // 0x2092c8: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x2092c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2092cc:
    // 0x2092cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2092ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2092d0:
    // 0x2092d0: 0xe6401734  swc1        $f0, 0x1734($s2)
    ctx->pc = 0x2092d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5940), bits); }
label_2092d4:
    // 0x2092d4: 0xc6411748  lwc1        $f1, 0x1748($s2)
    ctx->pc = 0x2092d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2092d8:
    // 0x2092d8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2092d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2092dc:
    // 0x2092dc: 0x0  nop
    ctx->pc = 0x2092dcu;
    // NOP
label_2092e0:
    // 0x2092e0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_2092e4:
    if (ctx->pc == 0x2092E4u) {
        ctx->pc = 0x2092E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092E0u;
        // 0x2092e4: 0xc641174c  lwc1        $f1, 0x174C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2092E8u;
        goto label_2092e8;
    }
    ctx->pc = 0x2092E0u;
    {
        const bool branch_taken_0x2092e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2092e0) {
            ctx->pc = 0x2092E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2092E0u;
            // 0x2092e4: 0xc641174c  lwc1        $f1, 0x174C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2092F8u;
            goto label_2092f8;
        }
    }
    ctx->pc = 0x2092E8u;
label_2092e8:
    // 0x2092e8: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x2092e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2092ec:
    // 0x2092ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2092ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2092f0:
    // 0x2092f0: 0xe6401748  swc1        $f0, 0x1748($s2)
    ctx->pc = 0x2092f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5960), bits); }
label_2092f4:
    // 0x2092f4: 0xc641174c  lwc1        $f1, 0x174C($s2)
    ctx->pc = 0x2092f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2092f8:
    // 0x2092f8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2092f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2092fc:
    // 0x2092fc: 0x0  nop
    ctx->pc = 0x2092fcu;
    // NOP
label_209300:
    // 0x209300: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_209304:
    if (ctx->pc == 0x209304u) {
        ctx->pc = 0x209304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209300u;
        // 0x209304: 0xc6411750  lwc1        $f1, 0x1750($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209308u;
        goto label_209308;
    }
    ctx->pc = 0x209300u;
    {
        const bool branch_taken_0x209300 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209300) {
            ctx->pc = 0x209304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209300u;
            // 0x209304: 0xc6411750  lwc1        $f1, 0x1750($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x209318u;
            goto label_209318;
        }
    }
    ctx->pc = 0x209308u;
label_209308:
    // 0x209308: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x209308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20930c:
    // 0x20930c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20930cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209310:
    // 0x209310: 0xe640174c  swc1        $f0, 0x174C($s2)
    ctx->pc = 0x209310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5964), bits); }
label_209314:
    // 0x209314: 0xc6411750  lwc1        $f1, 0x1750($s2)
    ctx->pc = 0x209314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209318:
    // 0x209318: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x209318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20931c:
    // 0x20931c: 0x0  nop
    ctx->pc = 0x20931cu;
    // NOP
label_209320:
    // 0x209320: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_209324:
    if (ctx->pc == 0x209324u) {
        ctx->pc = 0x209324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209320u;
        // 0x209324: 0xc6411760  lwc1        $f1, 0x1760($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209328u;
        goto label_209328;
    }
    ctx->pc = 0x209320u;
    {
        const bool branch_taken_0x209320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209320) {
            ctx->pc = 0x209324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209320u;
            // 0x209324: 0xc6411760  lwc1        $f1, 0x1760($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x209338u;
            goto label_209338;
        }
    }
    ctx->pc = 0x209328u;
label_209328:
    // 0x209328: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x209328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20932c:
    // 0x20932c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20932cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209330:
    // 0x209330: 0xe6401750  swc1        $f0, 0x1750($s2)
    ctx->pc = 0x209330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5968), bits); }
label_209334:
    // 0x209334: 0xc6411760  lwc1        $f1, 0x1760($s2)
    ctx->pc = 0x209334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209338:
    // 0x209338: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x209338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20933c:
    // 0x20933c: 0x0  nop
    ctx->pc = 0x20933cu;
    // NOP
label_209340:
    // 0x209340: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_209344:
    if (ctx->pc == 0x209344u) {
        ctx->pc = 0x209344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209340u;
        // 0x209344: 0xc6411764  lwc1        $f1, 0x1764($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209348u;
        goto label_209348;
    }
    ctx->pc = 0x209340u;
    {
        const bool branch_taken_0x209340 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209340) {
            ctx->pc = 0x209344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209340u;
            // 0x209344: 0xc6411764  lwc1        $f1, 0x1764($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x209358u;
            goto label_209358;
        }
    }
    ctx->pc = 0x209348u;
label_209348:
    // 0x209348: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x209348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20934c:
    // 0x20934c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20934cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209350:
    // 0x209350: 0xe6401760  swc1        $f0, 0x1760($s2)
    ctx->pc = 0x209350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5984), bits); }
label_209354:
    // 0x209354: 0xc6411764  lwc1        $f1, 0x1764($s2)
    ctx->pc = 0x209354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209358:
    // 0x209358: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x209358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20935c:
    // 0x20935c: 0x0  nop
    ctx->pc = 0x20935cu;
    // NOP
label_209360:
    // 0x209360: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_209364:
    if (ctx->pc == 0x209364u) {
        ctx->pc = 0x209364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209360u;
        // 0x209364: 0xc6411768  lwc1        $f1, 0x1768($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209368u;
        goto label_209368;
    }
    ctx->pc = 0x209360u;
    {
        const bool branch_taken_0x209360 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209360) {
            ctx->pc = 0x209364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209360u;
            // 0x209364: 0xc6411768  lwc1        $f1, 0x1768($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x209378u;
            goto label_209378;
        }
    }
    ctx->pc = 0x209368u;
label_209368:
    // 0x209368: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x209368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20936c:
    // 0x20936c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20936cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209370:
    // 0x209370: 0xe6401764  swc1        $f0, 0x1764($s2)
    ctx->pc = 0x209370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5988), bits); }
label_209374:
    // 0x209374: 0xc6411768  lwc1        $f1, 0x1768($s2)
    ctx->pc = 0x209374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209378:
    // 0x209378: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x209378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20937c:
    // 0x20937c: 0x0  nop
    ctx->pc = 0x20937cu;
    // NOP
label_209380:
    // 0x209380: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_209384:
    if (ctx->pc == 0x209384u) {
        ctx->pc = 0x209384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209380u;
        // 0x209384: 0xc641176c  lwc1        $f1, 0x176C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209388u;
        goto label_209388;
    }
    ctx->pc = 0x209380u;
    {
        const bool branch_taken_0x209380 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209380) {
            ctx->pc = 0x209384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209380u;
            // 0x209384: 0xc641176c  lwc1        $f1, 0x176C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x209398u;
            goto label_209398;
        }
    }
    ctx->pc = 0x209388u;
label_209388:
    // 0x209388: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x209388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20938c:
    // 0x20938c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20938cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209390:
    // 0x209390: 0xe6401768  swc1        $f0, 0x1768($s2)
    ctx->pc = 0x209390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5992), bits); }
label_209394:
    // 0x209394: 0xc641176c  lwc1        $f1, 0x176C($s2)
    ctx->pc = 0x209394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209398:
    // 0x209398: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x209398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20939c:
    // 0x20939c: 0x0  nop
    ctx->pc = 0x20939cu;
    // NOP
label_2093a0:
    // 0x2093a0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_2093a4:
    if (ctx->pc == 0x2093A4u) {
        ctx->pc = 0x2093A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093A0u;
        // 0x2093a4: 0xc6411770  lwc1        $f1, 0x1770($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2093A8u;
        goto label_2093a8;
    }
    ctx->pc = 0x2093A0u;
    {
        const bool branch_taken_0x2093a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2093a0) {
            ctx->pc = 0x2093A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2093A0u;
            // 0x2093a4: 0xc6411770  lwc1        $f1, 0x1770($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2093B8u;
            goto label_2093b8;
        }
    }
    ctx->pc = 0x2093A8u;
label_2093a8:
    // 0x2093a8: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x2093a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2093ac:
    // 0x2093ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2093acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2093b0:
    // 0x2093b0: 0xe640176c  swc1        $f0, 0x176C($s2)
    ctx->pc = 0x2093b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5996), bits); }
label_2093b4:
    // 0x2093b4: 0xc6411770  lwc1        $f1, 0x1770($s2)
    ctx->pc = 0x2093b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2093b8:
    // 0x2093b8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2093b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2093bc:
    // 0x2093bc: 0x0  nop
    ctx->pc = 0x2093bcu;
    // NOP
label_2093c0:
    // 0x2093c0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_2093c4:
    if (ctx->pc == 0x2093C4u) {
        ctx->pc = 0x2093C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093C0u;
        // 0x2093c4: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2093C8u;
        goto label_2093c8;
    }
    ctx->pc = 0x2093C0u;
    {
        const bool branch_taken_0x2093c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2093c0) {
            ctx->pc = 0x2093C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2093C0u;
            // 0x2093c4: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2093D8u;
            goto label_2093d8;
        }
    }
    ctx->pc = 0x2093C8u;
label_2093c8:
    // 0x2093c8: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x2093c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2093cc:
    // 0x2093cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2093ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2093d0:
    // 0x2093d0: 0xe6401770  swc1        $f0, 0x1770($s2)
    ctx->pc = 0x2093d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 6000), bits); }
label_2093d4:
    // 0x2093d4: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x2093d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
label_2093d8:
    // 0x2093d8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2093d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2093dc:
    // 0x2093dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2093e0:
    if (ctx->pc == 0x2093E0u) {
        ctx->pc = 0x2093E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093DCu;
        // 0x2093e0: 0xc6411754  lwc1        $f1, 0x1754($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2093E4u;
        goto label_2093e4;
    }
    ctx->pc = 0x2093DCu;
    {
        const bool branch_taken_0x2093dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2093dc) {
            ctx->pc = 0x2093E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2093DCu;
            // 0x2093e0: 0xc6411754  lwc1        $f1, 0x1754($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2093F4u;
            goto label_2093f4;
        }
    }
    ctx->pc = 0x2093E4u;
label_2093e4:
    // 0x2093e4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2093e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2093e8:
    // 0x2093e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2093e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2093ec:
    // 0x2093ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_2093f0:
    if (ctx->pc == 0x2093F0u) {
        ctx->pc = 0x2093F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093ECu;
        // 0x2093f0: 0xe6401754  swc1        $f0, 0x1754($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5972), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2093F4u;
        goto label_2093f4;
    }
    ctx->pc = 0x2093ECu;
    {
        const bool branch_taken_0x2093ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093ECu;
        // 0x2093f0: 0xe6401754  swc1        $f0, 0x1754($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5972), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093ec) {
            ctx->pc = 0x209410u;
            goto label_209410;
        }
    }
    ctx->pc = 0x2093F4u;
label_2093f4:
    // 0x2093f4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2093f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2093f8:
    // 0x2093f8: 0x0  nop
    ctx->pc = 0x2093f8u;
    // NOP
label_2093fc:
    // 0x2093fc: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_209400:
    if (ctx->pc == 0x209400u) {
        ctx->pc = 0x209400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093FCu;
        // 0x209400: 0x8e430564  lw          $v1, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209404u;
        goto label_209404;
    }
    ctx->pc = 0x2093FCu;
    {
        const bool branch_taken_0x2093fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2093fc) {
            ctx->pc = 0x209400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2093FCu;
            // 0x209400: 0x8e430564  lw          $v1, 0x564($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209414u;
            goto label_209414;
        }
    }
    ctx->pc = 0x209404u;
label_209404:
    // 0x209404: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x209404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209408:
    // 0x209408: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x209408u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20940c:
    // 0x20940c: 0xe6401754  swc1        $f0, 0x1754($s2)
    ctx->pc = 0x20940cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5972), bits); }
label_209410:
    // 0x209410: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x209410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_209414:
    // 0x209414: 0x24020224  addiu       $v0, $zero, 0x224
    ctx->pc = 0x209414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 548));
label_209418:
    // 0x209418: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_20941c:
    if (ctx->pc == 0x20941Cu) {
        ctx->pc = 0x20941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209418u;
        // 0x20941c: 0xc64116c0  lwc1        $f1, 0x16C0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209420u;
        goto label_209420;
    }
    ctx->pc = 0x209418u;
    {
        const bool branch_taken_0x209418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x209418) {
            ctx->pc = 0x20941Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209418u;
            // 0x20941c: 0xc64116c0  lwc1        $f1, 0x16C0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x209438u;
            goto label_209438;
        }
    }
    ctx->pc = 0x209420u;
label_209420:
    // 0x209420: 0x8e450704  lw          $a1, 0x704($s2)
    ctx->pc = 0x209420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1796)));
label_209424:
    // 0x209424: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_209428:
    if (ctx->pc == 0x209428u) {
        ctx->pc = 0x209428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209424u;
        // 0x209428: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20942Cu;
        goto label_20942c;
    }
    ctx->pc = 0x209424u;
    {
        const bool branch_taken_0x209424 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x209428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209424u;
        // 0x209428: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209424) {
            ctx->pc = 0x209434u;
            goto label_209434;
        }
    }
    ctx->pc = 0x20942Cu;
label_20942c:
    // 0x20942c: 0xc09abc8  jal         func_26AF20
label_209430:
    if (ctx->pc == 0x209430u) {
        ctx->pc = 0x209430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20942Cu;
        // 0x209430: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209434u;
        goto label_209434;
    }
    ctx->pc = 0x20942Cu;
    SET_GPR_U32(ctx, 31, 0x209434u);
    ctx->pc = 0x209430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20942Cu;
    // 0x209430: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AF20u, 0x20942Cu, 0x209434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209434u;
label_209434:
    // 0x209434: 0xc64116c0  lwc1        $f1, 0x16C0($s2)
    ctx->pc = 0x209434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209438:
    // 0x209438: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20943c:
    // 0x20943c: 0x0  nop
    ctx->pc = 0x20943cu;
    // NOP
label_209440:
    // 0x209440: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x209440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209444:
    // 0x209444: 0x0  nop
    ctx->pc = 0x209444u;
    // NOP
label_209448:
    // 0x209448: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
label_20944c:
    if (ctx->pc == 0x20944Cu) {
        ctx->pc = 0x20944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209448u;
        // 0x20944c: 0x8642054a  lh          $v0, 0x54A($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209450u;
        goto label_209450;
    }
    ctx->pc = 0x209448u;
    {
        const bool branch_taken_0x209448 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209448) {
            ctx->pc = 0x20944Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209448u;
            // 0x20944c: 0x8642054a  lh          $v0, 0x54A($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209480u;
            goto label_209480;
        }
    }
    ctx->pc = 0x209450u;
label_209450:
    // 0x209450: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x209450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_209454:
    // 0x209454: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x209454u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_209458:
    // 0x209458: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x209458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20945c:
    // 0x20945c: 0x0  nop
    ctx->pc = 0x20945cu;
    // NOP
label_209460:
    // 0x209460: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x209460u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209464:
    // 0x209464: 0x0  nop
    ctx->pc = 0x209464u;
    // NOP
label_209468:
    // 0x209468: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_20946c:
    if (ctx->pc == 0x20946Cu) {
        ctx->pc = 0x20946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209468u;
        // 0x20946c: 0x8642054a  lh          $v0, 0x54A($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209470u;
        goto label_209470;
    }
    ctx->pc = 0x209468u;
    {
        const bool branch_taken_0x209468 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209468) {
            ctx->pc = 0x20946Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209468u;
            // 0x20946c: 0x8642054a  lh          $v0, 0x54A($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209480u;
            goto label_209480;
        }
    }
    ctx->pc = 0x209470u;
label_209470:
    // 0x209470: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x209470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209474:
    // 0x209474: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x209474u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209478:
    // 0x209478: 0xe64016c0  swc1        $f0, 0x16C0($s2)
    ctx->pc = 0x209478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5824), bits); }
label_20947c:
    // 0x20947c: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x20947cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
label_209480:
    // 0x209480: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
label_209484:
    if (ctx->pc == 0x209484u) {
        ctx->pc = 0x209484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209480u;
        // 0x209484: 0x2402026a  addiu       $v0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209488u;
        goto label_209488;
    }
    ctx->pc = 0x209480u;
    {
        const bool branch_taken_0x209480 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x209484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209480u;
        // 0x209484: 0x2402026a  addiu       $v0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209480) {
            ctx->pc = 0x20950Cu;
            goto label_20950c;
        }
    }
    ctx->pc = 0x209488u;
label_209488:
    // 0x209488: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x209488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_20948c:
    // 0x20948c: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
label_209490:
    if (ctx->pc == 0x209490u) {
        ctx->pc = 0x209490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20948Cu;
        // 0x209490: 0xc64c05a8  lwc1        $f12, 0x5A8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209494u;
        goto label_209494;
    }
    ctx->pc = 0x20948Cu;
    {
        const bool branch_taken_0x20948c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20948c) {
            ctx->pc = 0x209490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20948Cu;
            // 0x209490: 0xc64c05a8  lwc1        $f12, 0x5A8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2094FCu;
            goto label_2094fc;
        }
    }
    ctx->pc = 0x209494u;
label_209494:
    // 0x209494: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x209494u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_209498:
    // 0x209498: 0xc07dfbc  jal         func_1F7EF0
label_20949c:
    if (ctx->pc == 0x20949Cu) {
        ctx->pc = 0x20949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209498u;
        // 0x20949c: 0xc60cf8a8  lwc1        $f12, -0x758($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294965416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2094A0u;
        goto label_2094a0;
    }
    ctx->pc = 0x209498u;
    SET_GPR_U32(ctx, 31, 0x2094A0u);
    ctx->pc = 0x20949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209498u;
    // 0x20949c: 0xc60cf8a8  lwc1        $f12, -0x758($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294965416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x209498u, 0x2094A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2094A0u;
label_2094a0:
    // 0x2094a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2094a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2094a4:
    // 0x2094a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2094a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2094a8:
    // 0x2094a8: 0xc64405a8  lwc1        $f4, 0x5A8($s2)
    ctx->pc = 0x2094a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2094ac:
    // 0x2094ac: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2094acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2094b0:
    // 0x2094b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2094b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2094b4:
    // 0x2094b4: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x2094b4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2094b8:
    // 0x2094b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2094b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2094bc:
    // 0x2094bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2094bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2094c0:
    // 0x2094c0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2094c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2094c4:
    // 0x2094c4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2094c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_2094c8:
    // 0x2094c8: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x2094c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
label_2094cc:
    // 0x2094cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2094ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2094d0:
    // 0x2094d0: 0x4603a500  add.s       $f20, $f20, $f3
    ctx->pc = 0x2094d0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
label_2094d4:
    // 0x2094d4: 0xc600f8a8  lwc1        $f0, -0x758($s0)
    ctx->pc = 0x2094d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294965416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2094d8:
    // 0x2094d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2094d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2094dc:
    // 0x2094dc: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x2094dcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_2094e0:
    // 0x2094e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2094e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2094e4:
    // 0x2094e4: 0x4604a502  mul.s       $f20, $f20, $f4
    ctx->pc = 0x2094e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
label_2094e8:
    // 0x2094e8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2094e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2094ec:
    // 0x2094ec: 0xc07df52  jal         func_1F7D48
label_2094f0:
    if (ctx->pc == 0x2094F0u) {
        ctx->pc = 0x2094F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094ECu;
        // 0x2094f0: 0xe600f8a8  swc1        $f0, -0x758($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294965416), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2094F4u;
        goto label_2094f4;
    }
    ctx->pc = 0x2094ECu;
    SET_GPR_U32(ctx, 31, 0x2094F4u);
    ctx->pc = 0x2094F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2094ECu;
    // 0x2094f0: 0xe600f8a8  swc1        $f0, -0x758($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294965416), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2094ECu, 0x2094F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2094F4u;
label_2094f4:
    // 0x2094f4: 0xe600f8a8  swc1        $f0, -0x758($s0)
    ctx->pc = 0x2094f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294965416), bits); }
label_2094f8:
    // 0x2094f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2094f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2094fc:
    // 0x2094fc: 0xc053934  jal         func_14E4D0
label_209500:
    if (ctx->pc == 0x209500u) {
        ctx->pc = 0x209500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094FCu;
        // 0x209500: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209504u;
        goto label_209504;
    }
    ctx->pc = 0x2094FCu;
    SET_GPR_U32(ctx, 31, 0x209504u);
    ctx->pc = 0x209500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2094FCu;
    // 0x209500: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E4D0u, 0x2094FCu, 0x209504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209504u;
label_209504:
    // 0x209504: 0x10000005  b           . + 4 + (0x5 << 2)
label_209508:
    if (ctx->pc == 0x209508u) {
        ctx->pc = 0x209508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209504u;
        // 0x209508: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20950Cu;
        goto label_20950c;
    }
    ctx->pc = 0x209504u;
    {
        const bool branch_taken_0x209504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209504u;
        // 0x209508: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209504) {
            ctx->pc = 0x20951Cu;
            goto label_20951c;
        }
    }
    ctx->pc = 0x20950Cu;
label_20950c:
    // 0x20950c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20950cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_209510:
    // 0x209510: 0xc053934  jal         func_14E4D0
label_209514:
    if (ctx->pc == 0x209514u) {
        ctx->pc = 0x209514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209510u;
        // 0x209514: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209518u;
        goto label_209518;
    }
    ctx->pc = 0x209510u;
    SET_GPR_U32(ctx, 31, 0x209518u);
    ctx->pc = 0x209514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209510u;
    // 0x209514: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E4D0u, 0x209510u, 0x209518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209518u;
label_209518:
    // 0x209518: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x209518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20951c:
    // 0x20951c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20951cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_209520:
    // 0x209520: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x209520u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209524:
    // 0x209524: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x209524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209528:
    // 0x209528: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x209528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_20952c:
    // 0x20952c: 0xc04d476  jal         func_1351D8
label_209530:
    if (ctx->pc == 0x209530u) {
        ctx->pc = 0x209530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20952Cu;
        // 0x209530: 0x2414026a  addiu       $s4, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209534u;
        goto label_209534;
    }
    ctx->pc = 0x20952Cu;
    SET_GPR_U32(ctx, 31, 0x209534u);
    ctx->pc = 0x209530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20952Cu;
    // 0x209530: 0x2414026a  addiu       $s4, $zero, 0x26A (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x20952Cu, 0x209534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209534u;
label_209534:
    // 0x209534: 0x8e440250  lw          $a0, 0x250($s2)
    ctx->pc = 0x209534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
label_209538:
    // 0x209538: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x209538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_20953c:
    // 0x20953c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20953cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_209540:
    // 0x209540: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x209540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_209544:
    // 0x209544: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x209544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_209548:
    // 0x209548: 0x14740006  bne         $v1, $s4, . + 4 + (0x6 << 2)
label_20954c:
    if (ctx->pc == 0x20954Cu) {
        ctx->pc = 0x20954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209548u;
        // 0x20954c: 0xae440250  sw          $a0, 0x250($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209550u;
        goto label_209550;
    }
    ctx->pc = 0x209548u;
    {
        const bool branch_taken_0x209548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x20954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209548u;
        // 0x20954c: 0xae440250  sw          $a0, 0x250($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209548) {
            ctx->pc = 0x209564u;
            goto label_209564;
        }
    }
    ctx->pc = 0x209550u;
label_209550:
    // 0x209550: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x209550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_209554:
    // 0x209554: 0x24031770  addiu       $v1, $zero, 0x1770
    ctx->pc = 0x209554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
label_209558:
    // 0x209558: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x209558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_20955c:
    // 0x20955c: 0xa64302ae  sh          $v1, 0x2AE($s2)
    ctx->pc = 0x20955cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 686), (uint16_t)GPR_U32(ctx, 3));
label_209560:
    // 0x209560: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x209560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
label_209564:
    // 0x209564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x209564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_209568:
    // 0x209568: 0xc083cc4  jal         func_20F310
label_20956c:
    if (ctx->pc == 0x20956Cu) {
        ctx->pc = 0x20956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209568u;
        // 0x20956c: 0x26511690  addiu       $s1, $s2, 0x1690 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 5776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209570u;
        goto label_209570;
    }
    ctx->pc = 0x209568u;
    SET_GPR_U32(ctx, 31, 0x209570u);
    ctx->pc = 0x20956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209568u;
    // 0x20956c: 0x26511690  addiu       $s1, $s2, 0x1690 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 5776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F310u, 0x209568u, 0x209570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209570u;
label_209570:
    // 0x209570: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x209570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_209574:
    // 0x209574: 0x96420434  lhu         $v0, 0x434($s2)
    ctx->pc = 0x209574u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1076)));
label_209578:
    // 0x209578: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x209578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
label_20957c:
    // 0x20957c: 0xc0b6dac  jal         func_2DB6B0
label_209580:
    if (ctx->pc == 0x209580u) {
        ctx->pc = 0x209580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20957Cu;
        // 0x209580: 0xa6420434  sh          $v0, 0x434($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209584u;
        goto label_209584;
    }
    ctx->pc = 0x20957Cu;
    SET_GPR_U32(ctx, 31, 0x209584u);
    ctx->pc = 0x209580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20957Cu;
    // 0x209580: 0xa6420434  sh          $v0, 0x434($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20957Cu, 0x209584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209584u;
label_209584:
    // 0x209584: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x209584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209588:
    // 0x209588: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x209588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_20958c:
    // 0x20958c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20958cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_209590:
    // 0x209590: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x209590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_209594:
    // 0x209594: 0xc04a95e  jal         func_12A578
label_209598:
    if (ctx->pc == 0x209598u) {
        ctx->pc = 0x209598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209594u;
        // 0x209598: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20959Cu;
        goto label_20959c;
    }
    ctx->pc = 0x209594u;
    SET_GPR_U32(ctx, 31, 0x20959Cu);
    ctx->pc = 0x209598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209594u;
    // 0x209598: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A578u, 0x209594u, 0x20959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20959Cu;
label_20959c:
    // 0x20959c: 0x123d0006  beq         $s1, $sp, . + 4 + (0x6 << 2)
label_2095a0:
    if (ctx->pc == 0x2095A0u) {
        ctx->pc = 0x2095A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20959Cu;
        // 0x2095a0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095A4u;
        goto label_2095a4;
    }
    ctx->pc = 0x20959Cu;
    {
        const bool branch_taken_0x20959c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 29));
        ctx->pc = 0x2095A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20959Cu;
        // 0x2095a0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20959c) {
            ctx->pc = 0x2095B8u;
            goto label_2095b8;
        }
    }
    ctx->pc = 0x2095A4u;
label_2095a4:
    // 0x2095a4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2095a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2095a8:
    // 0x2095a8: 0xe6401690  swc1        $f0, 0x1690($s2)
    ctx->pc = 0x2095a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5776), bits); }
label_2095ac:
    // 0x2095ac: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2095acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2095b0:
    // 0x2095b0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2095b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2095b4:
    // 0x2095b4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2095b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2095b8:
    // 0x2095b8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2095b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_2095bc:
    // 0x2095bc: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x2095bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_2095c0:
    // 0x2095c0: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x2095c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
label_2095c4:
    // 0x2095c4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2095c8:
    if (ctx->pc == 0x2095C8u) {
        ctx->pc = 0x2095C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095C4u;
        // 0x2095c8: 0x8e4500f0  lw          $a1, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095CCu;
        goto label_2095cc;
    }
    ctx->pc = 0x2095C4u;
    {
        const bool branch_taken_0x2095c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2095c4) {
            ctx->pc = 0x2095C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2095C4u;
            // 0x2095c8: 0x8e4500f0  lw          $a1, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2095DCu;
            goto label_2095dc;
        }
    }
    ctx->pc = 0x2095CCu;
label_2095cc:
    // 0x2095cc: 0x10740016  beq         $v1, $s4, . + 4 + (0x16 << 2)
label_2095d0:
    if (ctx->pc == 0x2095D0u) {
        ctx->pc = 0x2095D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095CCu;
        // 0x2095d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095D4u;
        goto label_2095d4;
    }
    ctx->pc = 0x2095CCu;
    {
        const bool branch_taken_0x2095cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x2095D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095CCu;
        // 0x2095d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095cc) {
            ctx->pc = 0x209628u;
            goto label_209628;
        }
    }
    ctx->pc = 0x2095D4u;
label_2095d4:
    // 0x2095d4: 0x10000010  b           . + 4 + (0x10 << 2)
label_2095d8:
    if (ctx->pc == 0x2095D8u) {
        ctx->pc = 0x2095D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095D4u;
        // 0x2095d8: 0x8e4500f0  lw          $a1, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095DCu;
        goto label_2095dc;
    }
    ctx->pc = 0x2095D4u;
    {
        const bool branch_taken_0x2095d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2095D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095D4u;
        // 0x2095d8: 0x8e4500f0  lw          $a1, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095d4) {
            ctx->pc = 0x209618u;
            goto label_209618;
        }
    }
    ctx->pc = 0x2095DCu;
label_2095dc:
    // 0x2095dc: 0xc07dfac  jal         func_1F7EB0
label_2095e0:
    if (ctx->pc == 0x2095E0u) {
        ctx->pc = 0x2095E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095DCu;
        // 0x2095e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095E4u;
        goto label_2095e4;
    }
    ctx->pc = 0x2095DCu;
    SET_GPR_U32(ctx, 31, 0x2095E4u);
    ctx->pc = 0x2095E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2095DCu;
    // 0x2095e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x2095DCu, 0x2095E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2095E4u;
label_2095e4:
    // 0x2095e4: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x2095e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_2095e8:
    // 0x2095e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2095e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2095ec:
    // 0x2095ec: 0xe6400618  swc1        $f0, 0x618($s2)
    ctx->pc = 0x2095ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1560), bits); }
label_2095f0:
    // 0x2095f0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2095f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2095f4:
    // 0x2095f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2095f8:
    if (ctx->pc == 0x2095F8u) {
        ctx->pc = 0x2095F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095F4u;
        // 0x2095f8: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095FCu;
        goto label_2095fc;
    }
    ctx->pc = 0x2095F4u;
    {
        const bool branch_taken_0x2095f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2095F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095F4u;
        // 0x2095f8: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095f4) {
            ctx->pc = 0x209608u;
            goto label_209608;
        }
    }
    ctx->pc = 0x2095FCu;
label_2095fc:
    // 0x2095fc: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x2095fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_209600:
    // 0x209600: 0x10000002  b           . + 4 + (0x2 << 2)
label_209604:
    if (ctx->pc == 0x209604u) {
        ctx->pc = 0x209604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209600u;
        // 0x209604: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209608u;
        goto label_209608;
    }
    ctx->pc = 0x209600u;
    {
        const bool branch_taken_0x209600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209600u;
        // 0x209604: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209600) {
            ctx->pc = 0x20960Cu;
            goto label_20960c;
        }
    }
    ctx->pc = 0x209608u;
label_209608:
    // 0x209608: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x209608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20960c:
    // 0x20960c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_209610:
    if (ctx->pc == 0x209610u) {
        ctx->pc = 0x209610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20960Cu;
        // 0x209610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209614u;
        goto label_209614;
    }
    ctx->pc = 0x20960Cu;
    {
        const bool branch_taken_0x20960c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20960Cu;
        // 0x209610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20960c) {
            ctx->pc = 0x209704u;
            goto label_209704;
        }
    }
    ctx->pc = 0x209614u;
label_209614:
    // 0x209614: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x209614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_209618:
    // 0x209618: 0xc07dfac  jal         func_1F7EB0
label_20961c:
    if (ctx->pc == 0x20961Cu) {
        ctx->pc = 0x209620u;
        goto label_209620;
    }
    ctx->pc = 0x209618u;
    SET_GPR_U32(ctx, 31, 0x209620u);
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x209618u, 0x209620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209620u;
label_209620:
    // 0x209620: 0x10000038  b           . + 4 + (0x38 << 2)
label_209624:
    if (ctx->pc == 0x209624u) {
        ctx->pc = 0x209624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209620u;
        // 0x209624: 0xe6400618  swc1        $f0, 0x618($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1560), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209628u;
        goto label_209628;
    }
    ctx->pc = 0x209620u;
    {
        const bool branch_taken_0x209620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209620u;
        // 0x209624: 0xe6400618  swc1        $f0, 0x618($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209620) {
            ctx->pc = 0x209704u;
            goto label_209704;
        }
    }
    ctx->pc = 0x209628u;
label_209628:
    // 0x209628: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x209628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_20962c:
    // 0x20962c: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x20962cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_209630:
    // 0x209630: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x209630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_209634:
    // 0x209634: 0xc051e62  jal         func_147988
label_209638:
    if (ctx->pc == 0x209638u) {
        ctx->pc = 0x209638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209634u;
        // 0x209638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20963Cu;
        goto label_20963c;
    }
    ctx->pc = 0x209634u;
    SET_GPR_U32(ctx, 31, 0x20963Cu);
    ctx->pc = 0x209638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209634u;
    // 0x209638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x209634u, 0x20963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20963Cu;
label_20963c:
    // 0x20963c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x20963cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_209640:
    // 0x209640: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x209640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_209644:
    // 0x209644: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x209644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_209648:
    // 0x209648: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x209648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_20964c:
    // 0x20964c: 0xc051f10  jal         func_147C40
label_209650:
    if (ctx->pc == 0x209650u) {
        ctx->pc = 0x209650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20964Cu;
        // 0x209650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209654u;
        goto label_209654;
    }
    ctx->pc = 0x20964Cu;
    SET_GPR_U32(ctx, 31, 0x209654u);
    ctx->pc = 0x209650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20964Cu;
    // 0x209650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x20964Cu, 0x209654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209654u;
label_209654:
    // 0x209654: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x209654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
label_209658:
    // 0x209658: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x209658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20965c:
    // 0x20965c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_209660:
    // 0x209660: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x209660u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_209664:
    // 0x209664: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x209664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_209668:
    // 0x209668: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x209668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_20966c:
    // 0x20966c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20966cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209670:
    // 0x209670: 0xc0c28ac  jal         func_30A2B0
label_209674:
    if (ctx->pc == 0x209674u) {
        ctx->pc = 0x209674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209670u;
        // 0x209674: 0xe7b50004  swc1        $f21, 0x4($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209678u;
        goto label_209678;
    }
    ctx->pc = 0x209670u;
    SET_GPR_U32(ctx, 31, 0x209678u);
    ctx->pc = 0x209674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209670u;
    // 0x209674: 0xe7b50004  swc1        $f21, 0x4($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x209670u, 0x209678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209678u;
label_209678:
    // 0x209678: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x209678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_20967c:
    // 0x20967c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20967cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_209680:
    // 0x209680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_209684:
    // 0x209684: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x209684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209688:
    // 0x209688: 0xc07dfac  jal         func_1F7EB0
label_20968c:
    if (ctx->pc == 0x20968Cu) {
        ctx->pc = 0x20968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209688u;
        // 0x20968c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209690u;
        goto label_209690;
    }
    ctx->pc = 0x209688u;
    SET_GPR_U32(ctx, 31, 0x209690u);
    ctx->pc = 0x20968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209688u;
    // 0x20968c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x209688u, 0x209690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209690u;
label_209690:
    // 0x209690: 0xc0b6dac  jal         func_2DB6B0
label_209694:
    if (ctx->pc == 0x209694u) {
        ctx->pc = 0x209694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209690u;
        // 0x209694: 0xe6400618  swc1        $f0, 0x618($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1560), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209698u;
        goto label_209698;
    }
    ctx->pc = 0x209690u;
    SET_GPR_U32(ctx, 31, 0x209698u);
    ctx->pc = 0x209694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209690u;
    // 0x209694: 0xe6400618  swc1        $f0, 0x618($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1560), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x209690u, 0x209698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209698u;
label_209698:
    // 0x209698: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x209698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_20969c:
    // 0x20969c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20969cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2096a0:
    // 0x2096a0: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x2096a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2096a4:
    // 0x2096a4: 0xc0b680e  jal         func_2DA038
label_2096a8:
    if (ctx->pc == 0x2096A8u) {
        ctx->pc = 0x2096A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096A4u;
        // 0x2096a8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096ACu;
        goto label_2096ac;
    }
    ctx->pc = 0x2096A4u;
    SET_GPR_U32(ctx, 31, 0x2096ACu);
    ctx->pc = 0x2096A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2096A4u;
    // 0x2096a8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2096A4u, 0x2096ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2096ACu;
label_2096ac:
    // 0x2096ac: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2096acu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2096b0:
    // 0x2096b0: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x2096b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2096b4:
    // 0x2096b4: 0x0  nop
    ctx->pc = 0x2096b4u;
    // NOP
label_2096b8:
    // 0x2096b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2096bc:
    if (ctx->pc == 0x2096BCu) {
        ctx->pc = 0x2096BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096B8u;
        // 0x2096bc: 0xe640075c  swc1        $f0, 0x75C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1884), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096C0u;
        goto label_2096c0;
    }
    ctx->pc = 0x2096B8u;
    {
        const bool branch_taken_0x2096b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2096BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096B8u;
        // 0x2096bc: 0xe640075c  swc1        $f0, 0x75C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1884), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2096b8) {
            ctx->pc = 0x2096C4u;
            goto label_2096c4;
        }
    }
    ctx->pc = 0x2096C0u;
label_2096c0:
    // 0x2096c0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2096c0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2096c4:
    // 0x2096c4: 0xc0b6dac  jal         func_2DB6B0
label_2096c8:
    if (ctx->pc == 0x2096C8u) {
        ctx->pc = 0x2096C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096C4u;
        // 0x2096c8: 0xe6410760  swc1        $f1, 0x760($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1888), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096CCu;
        goto label_2096cc;
    }
    ctx->pc = 0x2096C4u;
    SET_GPR_U32(ctx, 31, 0x2096CCu);
    ctx->pc = 0x2096C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2096C4u;
    // 0x2096c8: 0xe6410760  swc1        $f1, 0x760($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1888), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2096C4u, 0x2096CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2096CCu;
label_2096cc:
    // 0x2096cc: 0xc0b6dac  jal         func_2DB6B0
label_2096d0:
    if (ctx->pc == 0x2096D0u) {
        ctx->pc = 0x2096D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096CCu;
        // 0x2096d0: 0x8c5000f0  lw          $s0, 0xF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096D4u;
        goto label_2096d4;
    }
    ctx->pc = 0x2096CCu;
    SET_GPR_U32(ctx, 31, 0x2096D4u);
    ctx->pc = 0x2096D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2096CCu;
    // 0x2096d0: 0x8c5000f0  lw          $s0, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2096CCu, 0x2096D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2096D4u;
label_2096d4:
    // 0x2096d4: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x2096d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2096d8:
    // 0x2096d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2096d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2096dc:
    // 0x2096dc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2096dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2096e0:
    // 0x2096e0: 0xc0b680e  jal         func_2DA038
label_2096e4:
    if (ctx->pc == 0x2096E4u) {
        ctx->pc = 0x2096E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096E0u;
        // 0x2096e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096E8u;
        goto label_2096e8;
    }
    ctx->pc = 0x2096E0u;
    SET_GPR_U32(ctx, 31, 0x2096E8u);
    ctx->pc = 0x2096E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2096E0u;
    // 0x2096e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2096E0u, 0x2096E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2096E8u;
label_2096e8:
    // 0x2096e8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2096e8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2096ec:
    // 0x2096ec: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x2096ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2096f0:
    // 0x2096f0: 0x0  nop
    ctx->pc = 0x2096f0u;
    // NOP
label_2096f4:
    // 0x2096f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2096f8:
    if (ctx->pc == 0x2096F8u) {
        ctx->pc = 0x2096F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096F4u;
        // 0x2096f8: 0xe6400764  swc1        $f0, 0x764($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1892), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096FCu;
        goto label_2096fc;
    }
    ctx->pc = 0x2096F4u;
    {
        const bool branch_taken_0x2096f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2096F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096F4u;
        // 0x2096f8: 0xe6400764  swc1        $f0, 0x764($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1892), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2096f4) {
            ctx->pc = 0x209700u;
            goto label_209700;
        }
    }
    ctx->pc = 0x2096FCu;
label_2096fc:
    // 0x2096fc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2096fcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_209700:
    // 0x209700: 0xe6410768  swc1        $f1, 0x768($s2)
    ctx->pc = 0x209700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1896), bits); }
label_209704:
    // 0x209704: 0x8e420258  lw          $v0, 0x258($s2)
    ctx->pc = 0x209704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
label_209708:
    // 0x209708: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x209708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_20970c:
    // 0x20970c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x20970cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_209710:
    // 0x209710: 0x964403ac  lhu         $a0, 0x3AC($s2)
    ctx->pc = 0x209710u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
label_209714:
    // 0x209714: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x209714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_209718:
    // 0x209718: 0x30840424  andi        $a0, $a0, 0x424
    ctx->pc = 0x209718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1060);
label_20971c:
    // 0x20971c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_209720:
    if (ctx->pc == 0x209720u) {
        ctx->pc = 0x209720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20971Cu;
        // 0x209720: 0xae430258  sw          $v1, 0x258($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209724u;
        goto label_209724;
    }
    ctx->pc = 0x20971Cu;
    {
        const bool branch_taken_0x20971c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x209720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20971Cu;
        // 0x209720: 0xae430258  sw          $v1, 0x258($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20971c) {
            ctx->pc = 0x209730u;
            goto label_209730;
        }
    }
    ctx->pc = 0x209724u;
label_209724:
    // 0x209724: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x209724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_209728:
    // 0x209728: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x209728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20972c:
    // 0x20972c: 0xae420258  sw          $v0, 0x258($s2)
    ctx->pc = 0x20972cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 2));
label_209730:
    // 0x209730: 0x8e440250  lw          $a0, 0x250($s2)
    ctx->pc = 0x209730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
label_209734:
    // 0x209734: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x209734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
label_209738:
    // 0x209738: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x209738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_20973c:
    // 0x20973c: 0x8e450564  lw          $a1, 0x564($s2)
    ctx->pc = 0x20973cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_209740:
    // 0x209740: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x209740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_209744:
    // 0x209744: 0x24030264  addiu       $v1, $zero, 0x264
    ctx->pc = 0x209744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
label_209748:
    // 0x209748: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_20974c:
    if (ctx->pc == 0x20974Cu) {
        ctx->pc = 0x20974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209748u;
        // 0x20974c: 0xae440250  sw          $a0, 0x250($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209750u;
        goto label_209750;
    }
    ctx->pc = 0x209748u;
    {
        const bool branch_taken_0x209748 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x20974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209748u;
        // 0x20974c: 0xae440250  sw          $a0, 0x250($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209748) {
            ctx->pc = 0x20975Cu;
            goto label_20975c;
        }
    }
    ctx->pc = 0x209750u;
label_209750:
    // 0x209750: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x209750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_209754:
    // 0x209754: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x209754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_209758:
    // 0x209758: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x209758u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
label_20975c:
    // 0x20975c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x20975cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_209760:
    // 0x209760: 0x924302f4  lbu         $v1, 0x2F4($s2)
    ctx->pc = 0x209760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_209764:
    // 0x209764: 0x2446f1a0  addiu       $a2, $v0, -0xE60
    ctx->pc = 0x209764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963616));
label_209768:
    // 0x209768: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x209768u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20976c:
    // 0x20976c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20976cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_209770:
    // 0x209770: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x209770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_209774:
    // 0x209774: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x209774u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_209778:
    // 0x209778: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_20977c:
    if (ctx->pc == 0x20977Cu) {
        ctx->pc = 0x20977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209778u;
        // 0x20977c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209780u;
        goto label_209780;
    }
    ctx->pc = 0x209778u;
    {
        const bool branch_taken_0x209778 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x20977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209778u;
        // 0x20977c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209778) {
            ctx->pc = 0x2097A4u;
            goto label_2097a4;
        }
    }
    ctx->pc = 0x209780u;
label_209780:
    // 0x209780: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x209780u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_209784:
    // 0x209784: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x209784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_209788:
    // 0x209788: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x209788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_20978c:
    // 0x20978c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20978cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_209790:
    // 0x209790: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x209790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_209794:
    // 0x209794: 0xdc75fff8  ld          $s5, -0x8($v1)
    ctx->pc = 0x209794u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_209798:
    // 0x209798: 0x15303f  dsra32      $a2, $s5, 0
    ctx->pc = 0x209798u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 21) >> (32 + 0));
label_20979c:
    // 0x20979c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2097a0:
    if (ctx->pc == 0x2097A0u) {
        ctx->pc = 0x2097A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20979Cu;
        // 0x2097a0: 0x2503f1a0  addiu       $v1, $t0, -0xE60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2097A4u;
        goto label_2097a4;
    }
    ctx->pc = 0x20979Cu;
    {
        const bool branch_taken_0x20979c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2097A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20979Cu;
        // 0x2097a0: 0x2503f1a0  addiu       $v1, $t0, -0xE60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20979c) {
            ctx->pc = 0x2097B0u;
            goto label_2097b0;
        }
    }
    ctx->pc = 0x2097A4u;
label_2097a4:
    // 0x2097a4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2097a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2097a8:
    // 0x2097a8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2097a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2097ac:
    // 0x2097ac: 0x2503f1a0  addiu       $v1, $t0, -0xE60
    ctx->pc = 0x2097acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963616));
label_2097b0:
    // 0x2097b0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2097b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2097b4:
    // 0x2097b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2097b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2097b8:
    // 0x2097b8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_2097bc:
    if (ctx->pc == 0x2097BCu) {
        ctx->pc = 0x2097BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097B8u;
        // 0x2097bc: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2097C0u;
        goto label_2097c0;
    }
    ctx->pc = 0x2097B8u;
    {
        const bool branch_taken_0x2097b8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2097BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097B8u;
        // 0x2097bc: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2097b8) {
            ctx->pc = 0x2097D4u;
            goto label_2097d4;
        }
    }
    ctx->pc = 0x2097C0u;
label_2097c0:
    // 0x2097c0: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x2097c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
label_2097c4:
    // 0x2097c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2097c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2097c8:
    // 0x2097c8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2097c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2097cc:
    // 0x2097cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2097d0:
    if (ctx->pc == 0x2097D0u) {
        ctx->pc = 0x2097D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097CCu;
        // 0x2097d0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2097D4u;
        goto label_2097d4;
    }
    ctx->pc = 0x2097CCu;
    {
        const bool branch_taken_0x2097cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2097D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097CCu;
        // 0x2097d0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2097cc) {
            ctx->pc = 0x2097D8u;
            goto label_2097d8;
        }
    }
    ctx->pc = 0x2097D4u;
label_2097d4:
    // 0x2097d4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2097d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2097d8:
    // 0x2097d8: 0xc0f809  jalr        $a2
label_2097dc:
    if (ctx->pc == 0x2097DCu) {
        ctx->pc = 0x2097DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097D8u;
        // 0x2097dc: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2097E0u;
        goto label_2097e0;
    }
    ctx->pc = 0x2097D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2097E0u);
        ctx->pc = 0x2097DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097D8u;
        // 0x2097dc: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2097D8u, 0x2097E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2097E0u;
label_2097e0:
    // 0x2097e0: 0x8e440698  lw          $a0, 0x698($s2)
    ctx->pc = 0x2097e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_2097e4:
    // 0x2097e4: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
label_2097e8:
    if (ctx->pc == 0x2097E8u) {
        ctx->pc = 0x2097E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097E4u;
        // 0x2097e8: 0x8e4316f8  lw          $v1, 0x16F8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2097ECu;
        goto label_2097ec;
    }
    ctx->pc = 0x2097E4u;
    {
        const bool branch_taken_0x2097e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2097e4) {
            ctx->pc = 0x2097E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2097E4u;
            // 0x2097e8: 0x8e4316f8  lw          $v1, 0x16F8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5880)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209844u;
            goto label_209844;
        }
    }
    ctx->pc = 0x2097ECu;
label_2097ec:
    // 0x2097ec: 0xc6411770  lwc1        $f1, 0x1770($s2)
    ctx->pc = 0x2097ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2097f0:
    // 0x2097f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2097f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2097f4:
    // 0x2097f4: 0x0  nop
    ctx->pc = 0x2097f4u;
    // NOP
label_2097f8:
    // 0x2097f8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2097f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2097fc:
    // 0x2097fc: 0x0  nop
    ctx->pc = 0x2097fcu;
    // NOP
label_209800:
    // 0x209800: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_209804:
    if (ctx->pc == 0x209804u) {
        ctx->pc = 0x209804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209800u;
        // 0x209804: 0x8e45069c  lw          $a1, 0x69C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209808u;
        goto label_209808;
    }
    ctx->pc = 0x209800u;
    {
        const bool branch_taken_0x209800 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x209804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209800u;
        // 0x209804: 0x8e45069c  lw          $a1, 0x69C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209800) {
            ctx->pc = 0x209828u;
            goto label_209828;
        }
    }
    ctx->pc = 0x209808u;
label_209808:
    // 0x209808: 0xc07f584  jal         func_1FD610
label_20980c:
    if (ctx->pc == 0x20980Cu) {
        ctx->pc = 0x20980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209808u;
        // 0x20980c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209810u;
        goto label_209810;
    }
    ctx->pc = 0x209808u;
    SET_GPR_U32(ctx, 31, 0x209810u);
    ctx->pc = 0x20980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209808u;
    // 0x20980c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD610u, 0x209808u, 0x209810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209810u;
label_209810:
    // 0x209810: 0x8e440698  lw          $a0, 0x698($s2)
    ctx->pc = 0x209810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_209814:
    // 0x209814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x209814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209818:
    // 0x209818: 0xc07f584  jal         func_1FD610
label_20981c:
    if (ctx->pc == 0x20981Cu) {
        ctx->pc = 0x20981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209818u;
        // 0x20981c: 0x8e4506a0  lw          $a1, 0x6A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209820u;
        goto label_209820;
    }
    ctx->pc = 0x209818u;
    SET_GPR_U32(ctx, 31, 0x209820u);
    ctx->pc = 0x20981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209818u;
    // 0x20981c: 0x8e4506a0  lw          $a1, 0x6A0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD610u, 0x209818u, 0x209820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209820u;
label_209820:
    // 0x209820: 0x10000008  b           . + 4 + (0x8 << 2)
label_209824:
    if (ctx->pc == 0x209824u) {
        ctx->pc = 0x209824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209820u;
        // 0x209824: 0x8e4316f8  lw          $v1, 0x16F8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209828u;
        goto label_209828;
    }
    ctx->pc = 0x209820u;
    {
        const bool branch_taken_0x209820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209820u;
        // 0x209824: 0x8e4316f8  lw          $v1, 0x16F8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209820) {
            ctx->pc = 0x209844u;
            goto label_209844;
        }
    }
    ctx->pc = 0x209828u;
label_209828:
    // 0x209828: 0xc07f584  jal         func_1FD610
label_20982c:
    if (ctx->pc == 0x20982Cu) {
        ctx->pc = 0x20982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209828u;
        // 0x20982c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209830u;
        goto label_209830;
    }
    ctx->pc = 0x209828u;
    SET_GPR_U32(ctx, 31, 0x209830u);
    ctx->pc = 0x20982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209828u;
    // 0x20982c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD610u, 0x209828u, 0x209830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209830u;
label_209830:
    // 0x209830: 0x8e440698  lw          $a0, 0x698($s2)
    ctx->pc = 0x209830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_209834:
    // 0x209834: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x209834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209838:
    // 0x209838: 0xc07f584  jal         func_1FD610
label_20983c:
    if (ctx->pc == 0x20983Cu) {
        ctx->pc = 0x20983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209838u;
        // 0x20983c: 0x8e4506a0  lw          $a1, 0x6A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209840u;
        goto label_209840;
    }
    ctx->pc = 0x209838u;
    SET_GPR_U32(ctx, 31, 0x209840u);
    ctx->pc = 0x20983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209838u;
    // 0x20983c: 0x8e4506a0  lw          $a1, 0x6A0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD610u, 0x209838u, 0x209840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209840u;
label_209840:
    // 0x209840: 0x8e4316f8  lw          $v1, 0x16F8($s2)
    ctx->pc = 0x209840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5880)));
label_209844:
    // 0x209844: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_209848:
    if (ctx->pc == 0x209848u) {
        ctx->pc = 0x209848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209844u;
        // 0x209848: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20984Cu;
        goto label_20984c;
    }
    ctx->pc = 0x209844u;
    {
        const bool branch_taken_0x209844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209844u;
        // 0x209848: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209844) {
            ctx->pc = 0x20985Cu;
            goto label_20985c;
        }
    }
    ctx->pc = 0x20984Cu;
label_20984c:
    // 0x20984c: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x20984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
label_209850:
    // 0x209850: 0xae4316f8  sw          $v1, 0x16F8($s2)
    ctx->pc = 0x209850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5880), GPR_U32(ctx, 3));
label_209854:
    // 0x209854: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x209854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_209858:
    // 0x209858: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x209858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
label_20985c:
    // 0x20985c: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x20985cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
label_209860:
    // 0x209860: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x209860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_209864:
    // 0x209864: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_209868:
    if (ctx->pc == 0x209868u) {
        ctx->pc = 0x209868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209864u;
        // 0x209868: 0x8e420258  lw          $v0, 0x258($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20986Cu;
        goto label_20986c;
    }
    ctx->pc = 0x209864u;
    {
        const bool branch_taken_0x209864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209864) {
            ctx->pc = 0x209868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209864u;
            // 0x209868: 0x8e420258  lw          $v0, 0x258($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2098A8u;
            goto label_2098a8;
        }
    }
    ctx->pc = 0x20986Cu;
label_20986c:
    // 0x20986c: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x20986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
label_209870:
    // 0x209870: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x209870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_209874:
    // 0x209874: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_209878:
    if (ctx->pc == 0x209878u) {
        ctx->pc = 0x209878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209874u;
        // 0x209878: 0x8e420258  lw          $v0, 0x258($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20987Cu;
        goto label_20987c;
    }
    ctx->pc = 0x209874u;
    {
        const bool branch_taken_0x209874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209874) {
            ctx->pc = 0x209878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209874u;
            // 0x209878: 0x8e420258  lw          $v0, 0x258($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2098A8u;
            goto label_2098a8;
        }
    }
    ctx->pc = 0x20987Cu;
label_20987c:
    // 0x20987c: 0xc09bbd8  jal         func_26EF60
label_209880:
    if (ctx->pc == 0x209880u) {
        ctx->pc = 0x209880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20987Cu;
        // 0x209880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209884u;
        goto label_209884;
    }
    ctx->pc = 0x20987Cu;
    SET_GPR_U32(ctx, 31, 0x209884u);
    ctx->pc = 0x209880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20987Cu;
    // 0x209880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EF60u, 0x20987Cu, 0x209884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209884u;
label_209884:
    // 0x209884: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_209888:
    if (ctx->pc == 0x209888u) {
        ctx->pc = 0x209888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209884u;
        // 0x209888: 0x8e420258  lw          $v0, 0x258($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20988Cu;
        goto label_20988c;
    }
    ctx->pc = 0x209884u;
    {
        const bool branch_taken_0x209884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209884) {
            ctx->pc = 0x209888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209884u;
            // 0x209888: 0x8e420258  lw          $v0, 0x258($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2098A8u;
            goto label_2098a8;
        }
    }
    ctx->pc = 0x20988Cu;
label_20988c:
    // 0x20988c: 0xde4216d0  ld          $v0, 0x16D0($s2)
    ctx->pc = 0x20988cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 5840)));
label_209890:
    // 0x209890: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x209890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_209894:
    // 0x209894: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x209894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_209898:
    // 0x209898: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x209898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_20989c:
    // 0x20989c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2098a0:
    if (ctx->pc == 0x2098A0u) {
        ctx->pc = 0x2098A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20989Cu;
        // 0x2098a0: 0xde4202f0  ld          $v0, 0x2F0($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2098A4u;
        goto label_2098a4;
    }
    ctx->pc = 0x20989Cu;
    {
        const bool branch_taken_0x20989c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20989c) {
            ctx->pc = 0x2098A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20989Cu;
            // 0x2098a0: 0xde4202f0  ld          $v0, 0x2F0($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2098B8u;
            goto label_2098b8;
        }
    }
    ctx->pc = 0x2098A4u;
label_2098a4:
    // 0x2098a4: 0x8e420258  lw          $v0, 0x258($s2)
    ctx->pc = 0x2098a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
label_2098a8:
    // 0x2098a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2098a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2098ac:
    // 0x2098ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2098acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2098b0:
    // 0x2098b0: 0xae420258  sw          $v0, 0x258($s2)
    ctx->pc = 0x2098b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 2));
label_2098b4:
    // 0x2098b4: 0xde4202f0  ld          $v0, 0x2F0($s2)
    ctx->pc = 0x2098b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 752)));
label_2098b8:
    // 0x2098b8: 0x3410ffff  ori         $s0, $zero, 0xFFFF
    ctx->pc = 0x2098b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2098bc:
    // 0x2098bc: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x2098bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_2098c0:
    // 0x2098c0: 0x34118080  ori         $s1, $zero, 0x8080
    ctx->pc = 0x2098c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
label_2098c4:
    // 0x2098c4: 0x118eb8  dsll        $s1, $s1, 26
    ctx->pc = 0x2098c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 26);
label_2098c8:
    // 0x2098c8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2098c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_2098cc:
    // 0x2098cc: 0x50510004  beql        $v0, $s1, . + 4 + (0x4 << 2)
label_2098d0:
    if (ctx->pc == 0x2098D0u) {
        ctx->pc = 0x2098D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098CCu;
        // 0x2098d0: 0x8e420250  lw          $v0, 0x250($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2098D4u;
        goto label_2098d4;
    }
    ctx->pc = 0x2098CCu;
    {
        const bool branch_taken_0x2098cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2098cc) {
            ctx->pc = 0x2098D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2098CCu;
            // 0x2098d0: 0x8e420250  lw          $v0, 0x250($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2098E0u;
            goto label_2098e0;
        }
    }
    ctx->pc = 0x2098D4u;
label_2098d4:
    // 0x2098d4: 0xc053ed2  jal         func_14FB48
label_2098d8:
    if (ctx->pc == 0x2098D8u) {
        ctx->pc = 0x2098D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098D4u;
        // 0x2098d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2098DCu;
        goto label_2098dc;
    }
    ctx->pc = 0x2098D4u;
    SET_GPR_U32(ctx, 31, 0x2098DCu);
    ctx->pc = 0x2098D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2098D4u;
    // 0x2098d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB48u, 0x2098D4u, 0x2098DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2098DCu;
label_2098dc:
    // 0x2098dc: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x2098dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
label_2098e0:
    // 0x2098e0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2098e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2098e4:
    // 0x2098e4: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x2098e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
label_2098e8:
    // 0x2098e8: 0xde4402f0  ld          $a0, 0x2F0($s2)
    ctx->pc = 0x2098e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 752)));
label_2098ec:
    // 0x2098ec: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x2098ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2098f0:
    // 0x2098f0: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x2098f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
label_2098f4:
    // 0x2098f4: 0x10910053  beq         $a0, $s1, . + 4 + (0x53 << 2)
label_2098f8:
    if (ctx->pc == 0x2098F8u) {
        ctx->pc = 0x2098F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098F4u;
        // 0x2098f8: 0xae450250  sw          $a1, 0x250($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2098FCu;
        goto label_2098fc;
    }
    ctx->pc = 0x2098F4u;
    {
        const bool branch_taken_0x2098f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x2098F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098F4u;
        // 0x2098f8: 0xae450250  sw          $a1, 0x250($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2098f4) {
            ctx->pc = 0x209A44u;
            goto label_209a44;
        }
    }
    ctx->pc = 0x2098FCu;
label_2098fc:
    // 0x2098fc: 0x8e4316d0  lw          $v1, 0x16D0($s2)
    ctx->pc = 0x2098fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
label_209900:
    // 0x209900: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x209900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_209904:
    // 0x209904: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x209904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_209908:
    // 0x209908: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
label_20990c:
    if (ctx->pc == 0x20990Cu) {
        ctx->pc = 0x20990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209908u;
        // 0x20990c: 0x92420623  lbu         $v0, 0x623($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1571)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209910u;
        goto label_209910;
    }
    ctx->pc = 0x209908u;
    {
        const bool branch_taken_0x209908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209908) {
            ctx->pc = 0x20990Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209908u;
            // 0x20990c: 0x92420623  lbu         $v0, 0x623($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1571)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209A48u;
            goto label_209a48;
        }
    }
    ctx->pc = 0x209910u;
label_209910:
    // 0x209910: 0x92421868  lbu         $v0, 0x1868($s2)
    ctx->pc = 0x209910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6248)));
label_209914:
    // 0x209914: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_209918:
    if (ctx->pc == 0x209918u) {
        ctx->pc = 0x209918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209914u;
        // 0x209918: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20991Cu;
        goto label_20991c;
    }
    ctx->pc = 0x209914u;
    {
        const bool branch_taken_0x209914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209914u;
        // 0x209918: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209914) {
            ctx->pc = 0x2099FCu;
            goto label_2099fc;
        }
    }
    ctx->pc = 0x20991Cu;
label_20991c:
    // 0x20991c: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_209920:
    if (ctx->pc == 0x209920u) {
        ctx->pc = 0x209920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20991Cu;
        // 0x209920: 0xc640024c  lwc1        $f0, 0x24C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209924u;
        goto label_209924;
    }
    ctx->pc = 0x20991Cu;
    {
        const bool branch_taken_0x20991c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20991c) {
            ctx->pc = 0x209920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20991Cu;
            // 0x209920: 0xc640024c  lwc1        $f0, 0x24C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2099ACu;
            goto label_2099ac;
        }
    }
    ctx->pc = 0x209924u;
label_209924:
    // 0x209924: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x209924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209928:
    // 0x209928: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x209928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
label_20992c:
    // 0x20992c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20992cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209930:
    // 0x209930: 0x0  nop
    ctx->pc = 0x209930u;
    // NOP
label_209934:
    // 0x209934: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x209934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209938:
    // 0x209938: 0x0  nop
    ctx->pc = 0x209938u;
    // NOP
label_20993c:
    // 0x20993c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_209940:
    if (ctx->pc == 0x209940u) {
        ctx->pc = 0x209940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20993Cu;
        // 0x209940: 0xc640024c  lwc1        $f0, 0x24C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209944u;
        goto label_209944;
    }
    ctx->pc = 0x20993Cu;
    {
        const bool branch_taken_0x20993c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20993Cu;
        // 0x209940: 0xc640024c  lwc1        $f0, 0x24C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20993c) {
            ctx->pc = 0x2099ACu;
            goto label_2099ac;
        }
    }
    ctx->pc = 0x209944u;
label_209944:
    // 0x209944: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_209948:
    // 0x209948: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x209948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20994c:
    // 0x20994c: 0x0  nop
    ctx->pc = 0x20994cu;
    // NOP
label_209950:
    // 0x209950: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x209950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209954:
    // 0x209954: 0x0  nop
    ctx->pc = 0x209954u;
    // NOP
label_209958:
    // 0x209958: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_20995c:
    if (ctx->pc == 0x20995Cu) {
        ctx->pc = 0x20995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209958u;
        // 0x20995c: 0xe641024c  swc1        $f1, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209960u;
        goto label_209960;
    }
    ctx->pc = 0x209958u;
    {
        const bool branch_taken_0x209958 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209958) {
            ctx->pc = 0x20995Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209958u;
            // 0x20995c: 0xe641024c  swc1        $f1, 0x24C($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x209960u;
            goto label_209960;
        }
    }
    ctx->pc = 0x209960u;
label_209960:
    // 0x209960: 0xc640024c  lwc1        $f0, 0x24C($s2)
    ctx->pc = 0x209960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209964:
    // 0x209964: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x209964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_209968:
    // 0x209968: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x209968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_20996c:
    // 0x20996c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20996cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_209970:
    // 0x209970: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x209970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_209974:
    // 0x209974: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x209974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_209978:
    // 0x209978: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x209978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20997c:
    // 0x20997c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20997cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_209980:
    // 0x209980: 0x8e430250  lw          $v1, 0x250($s2)
    ctx->pc = 0x209980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
label_209984:
    // 0x209984: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x209984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_209988:
    // 0x209988: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x209988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20998c:
    // 0x20998c: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x20998cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
label_209990:
    // 0x209990: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_209994:
    if (ctx->pc == 0x209994u) {
        ctx->pc = 0x209994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209990u;
        // 0x209994: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209998u;
        goto label_209998;
    }
    ctx->pc = 0x209990u;
    {
        const bool branch_taken_0x209990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209990u;
        // 0x209994: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209990) {
            ctx->pc = 0x209A44u;
            goto label_209a44;
        }
    }
    ctx->pc = 0x209998u;
label_209998:
    // 0x209998: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x209998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_20999c:
    // 0x20999c: 0x34630012  ori         $v1, $v1, 0x12
    ctx->pc = 0x20999cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18);
label_2099a0:
    // 0x2099a0: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x2099a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_2099a4:
    // 0x2099a4: 0x1000000f  b           . + 4 + (0xF << 2)
label_2099a8:
    if (ctx->pc == 0x2099A8u) {
        ctx->pc = 0x2099A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099A4u;
        // 0x2099a8: 0xae40024c  sw          $zero, 0x24C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2099ACu;
        goto label_2099ac;
    }
    ctx->pc = 0x2099A4u;
    {
        const bool branch_taken_0x2099a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2099A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099A4u;
        // 0x2099a8: 0xae40024c  sw          $zero, 0x24C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2099a4) {
            ctx->pc = 0x2099E4u;
            goto label_2099e4;
        }
    }
    ctx->pc = 0x2099ACu;
label_2099ac:
    // 0x2099ac: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2099acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2099b0:
    // 0x2099b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2099b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2099b4:
    // 0x2099b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2099b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2099b8:
    // 0x2099b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2099b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2099bc:
    // 0x2099bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2099bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2099c0:
    // 0x2099c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2099c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2099c4:
    // 0x2099c4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2099c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2099c8:
    // 0x2099c8: 0x0  nop
    ctx->pc = 0x2099c8u;
    // NOP
label_2099cc:
    // 0x2099cc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2099d0:
    if (ctx->pc == 0x2099D0u) {
        ctx->pc = 0x2099D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099CCu;
        // 0x2099d0: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2099D4u;
        goto label_2099d4;
    }
    ctx->pc = 0x2099CCu;
    {
        const bool branch_taken_0x2099cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2099D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099CCu;
        // 0x2099d0: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2099cc) {
            ctx->pc = 0x2099F0u;
            goto label_2099f0;
        }
    }
    ctx->pc = 0x2099D4u;
label_2099d4:
    // 0x2099d4: 0x8e430250  lw          $v1, 0x250($s2)
    ctx->pc = 0x2099d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
label_2099d8:
    // 0x2099d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2099d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2099dc:
    // 0x2099dc: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x2099dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_2099e0:
    // 0x2099e0: 0xe642024c  swc1        $f2, 0x24C($s2)
    ctx->pc = 0x2099e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
label_2099e4:
    // 0x2099e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2099e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2099e8:
    // 0x2099e8: 0x10000016  b           . + 4 + (0x16 << 2)
label_2099ec:
    if (ctx->pc == 0x2099ECu) {
        ctx->pc = 0x2099ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099E8u;
        // 0x2099ec: 0xae430250  sw          $v1, 0x250($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2099F0u;
        goto label_2099f0;
    }
    ctx->pc = 0x2099E8u;
    {
        const bool branch_taken_0x2099e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2099ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099E8u;
        // 0x2099ec: 0xae430250  sw          $v1, 0x250($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2099e8) {
            ctx->pc = 0x209A44u;
            goto label_209a44;
        }
    }
    ctx->pc = 0x2099F0u;
label_2099f0:
    // 0x2099f0: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x2099f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
label_2099f4:
    // 0x2099f4: 0x10000012  b           . + 4 + (0x12 << 2)
label_2099f8:
    if (ctx->pc == 0x2099F8u) {
        ctx->pc = 0x2099F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099F4u;
        // 0x2099f8: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2099FCu;
        goto label_2099fc;
    }
    ctx->pc = 0x2099F4u;
    {
        const bool branch_taken_0x2099f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2099F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099F4u;
        // 0x2099f8: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2099f4) {
            ctx->pc = 0x209A40u;
            goto label_209a40;
        }
    }
    ctx->pc = 0x2099FCu;
label_2099fc:
    // 0x2099fc: 0xc640024c  lwc1        $f0, 0x24C($s2)
    ctx->pc = 0x2099fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209a00:
    // 0x209a00: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x209a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_209a04:
    // 0x209a04: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x209a04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_209a08:
    // 0x209a08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x209a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_209a0c:
    // 0x209a0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_209a10:
    // 0x209a10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x209a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_209a14:
    // 0x209a14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x209a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_209a18:
    // 0x209a18: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x209a18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209a1c:
    // 0x209a1c: 0x0  nop
    ctx->pc = 0x209a1cu;
    // NOP
label_209a20:
    // 0x209a20: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_209a24:
    if (ctx->pc == 0x209A24u) {
        ctx->pc = 0x209A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A20u;
        // 0x209a24: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A28u;
        goto label_209a28;
    }
    ctx->pc = 0x209A20u;
    {
        const bool branch_taken_0x209a20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A20u;
        // 0x209a24: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209a20) {
            ctx->pc = 0x209A3Cu;
            goto label_209a3c;
        }
    }
    ctx->pc = 0x209A28u;
label_209a28:
    // 0x209a28: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x209a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_209a2c:
    // 0x209a2c: 0xe642024c  swc1        $f2, 0x24C($s2)
    ctx->pc = 0x209a2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
label_209a30:
    // 0x209a30: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x209a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_209a34:
    // 0x209a34: 0x10000002  b           . + 4 + (0x2 << 2)
label_209a38:
    if (ctx->pc == 0x209A38u) {
        ctx->pc = 0x209A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A34u;
        // 0x209a38: 0xa21024  and         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A3Cu;
        goto label_209a3c;
    }
    ctx->pc = 0x209A34u;
    {
        const bool branch_taken_0x209a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A34u;
        // 0x209a38: 0xa21024  and         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209a34) {
            ctx->pc = 0x209A40u;
            goto label_209a40;
        }
    }
    ctx->pc = 0x209A3Cu;
label_209a3c:
    // 0x209a3c: 0x34a20010  ori         $v0, $a1, 0x10
    ctx->pc = 0x209a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
label_209a40:
    // 0x209a40: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x209a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
label_209a44:
    // 0x209a44: 0x92420623  lbu         $v0, 0x623($s2)
    ctx->pc = 0x209a44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1571)));
label_209a48:
    // 0x209a48: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_209a4c:
    if (ctx->pc == 0x209A4Cu) {
        ctx->pc = 0x209A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A48u;
        // 0x209a4c: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A50u;
        goto label_209a50;
    }
    ctx->pc = 0x209A48u;
    {
        const bool branch_taken_0x209a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209a48) {
            ctx->pc = 0x209A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209A48u;
            // 0x209a4c: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209A60u;
            goto label_209a60;
        }
    }
    ctx->pc = 0x209A50u;
label_209a50:
    // 0x209a50: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x209a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
label_209a54:
    // 0x209a54: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x209a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_209a58:
    // 0x209a58: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x209a58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
label_209a5c:
    // 0x209a5c: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x209a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
label_209a60:
    // 0x209a60: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x209a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_209a64:
    // 0x209a64: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_209a68:
    if (ctx->pc == 0x209A68u) {
        ctx->pc = 0x209A6Cu;
        goto label_209a6c;
    }
    ctx->pc = 0x209A64u;
    {
        const bool branch_taken_0x209a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209a64) {
            ctx->pc = 0x209B10u;
            goto label_209b10;
        }
    }
    ctx->pc = 0x209A6Cu;
label_209a6c:
    // 0x209a6c: 0x92421868  lbu         $v0, 0x1868($s2)
    ctx->pc = 0x209a6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6248)));
label_209a70:
    // 0x209a70: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_209a74:
    if (ctx->pc == 0x209A74u) {
        ctx->pc = 0x209A78u;
        goto label_209a78;
    }
    ctx->pc = 0x209A70u;
    {
        const bool branch_taken_0x209a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209a70) {
            ctx->pc = 0x209B10u;
            goto label_209b10;
        }
    }
    ctx->pc = 0x209A78u;
label_209a78:
    // 0x209a78: 0xc09bbd8  jal         func_26EF60
label_209a7c:
    if (ctx->pc == 0x209A7Cu) {
        ctx->pc = 0x209A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A78u;
        // 0x209a7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A80u;
        goto label_209a80;
    }
    ctx->pc = 0x209A78u;
    SET_GPR_U32(ctx, 31, 0x209A80u);
    ctx->pc = 0x209A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A78u;
    // 0x209a7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EF60u, 0x209A78u, 0x209A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A80u;
label_209a80:
    // 0x209a80: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_209a84:
    if (ctx->pc == 0x209A84u) {
        ctx->pc = 0x209A88u;
        goto label_209a88;
    }
    ctx->pc = 0x209A80u;
    {
        const bool branch_taken_0x209a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209a80) {
            ctx->pc = 0x209AD0u;
            goto label_209ad0;
        }
    }
    ctx->pc = 0x209A88u;
label_209a88:
    // 0x209a88: 0xc641024c  lwc1        $f1, 0x24C($s2)
    ctx->pc = 0x209a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209a8c:
    // 0x209a8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209a90:
    // 0x209a90: 0x0  nop
    ctx->pc = 0x209a90u;
    // NOP
label_209a94:
    // 0x209a94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x209a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209a98:
    // 0x209a98: 0x0  nop
    ctx->pc = 0x209a98u;
    // NOP
label_209a9c:
    // 0x209a9c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_209aa0:
    if (ctx->pc == 0x209AA0u) {
        ctx->pc = 0x209AA4u;
        goto label_209aa4;
    }
    ctx->pc = 0x209A9Cu;
    {
        const bool branch_taken_0x209a9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209a9c) {
            ctx->pc = 0x209AD0u;
            goto label_209ad0;
        }
    }
    ctx->pc = 0x209AA4u;
label_209aa4:
    // 0x209aa4: 0xc09d59a  jal         func_275668
label_209aa8:
    if (ctx->pc == 0x209AA8u) {
        ctx->pc = 0x209AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AA4u;
        // 0x209aa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209AACu;
        goto label_209aac;
    }
    ctx->pc = 0x209AA4u;
    SET_GPR_U32(ctx, 31, 0x209AACu);
    ctx->pc = 0x209AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AA4u;
    // 0x209aa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275668u, 0x209AA4u, 0x209AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AACu;
label_209aac:
    // 0x209aac: 0xc0527ae  jal         func_149EB8
label_209ab0:
    if (ctx->pc == 0x209AB0u) {
        ctx->pc = 0x209AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AACu;
        // 0x209ab0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209AB4u;
        goto label_209ab4;
    }
    ctx->pc = 0x209AACu;
    SET_GPR_U32(ctx, 31, 0x209AB4u);
    ctx->pc = 0x209AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AACu;
    // 0x209ab0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x209AACu, 0x209AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AB4u;
label_209ab4:
    // 0x209ab4: 0x26440448  addiu       $a0, $s2, 0x448
    ctx->pc = 0x209ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1096));
label_209ab8:
    // 0x209ab8: 0xc054a88  jal         func_152A20
label_209abc:
    if (ctx->pc == 0x209ABCu) {
        ctx->pc = 0x209ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AB8u;
        // 0x209abc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209AC0u;
        goto label_209ac0;
    }
    ctx->pc = 0x209AB8u;
    SET_GPR_U32(ctx, 31, 0x209AC0u);
    ctx->pc = 0x209ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AB8u;
    // 0x209abc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x209AB8u, 0x209AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AC0u;
label_209ac0:
    // 0x209ac0: 0xc05280e  jal         func_14A038
label_209ac4:
    if (ctx->pc == 0x209AC4u) {
        ctx->pc = 0x209AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AC0u;
        // 0x209ac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209AC8u;
        goto label_209ac8;
    }
    ctx->pc = 0x209AC0u;
    SET_GPR_U32(ctx, 31, 0x209AC8u);
    ctx->pc = 0x209AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AC0u;
    // 0x209ac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x209AC0u, 0x209AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AC8u;
label_209ac8:
    // 0x209ac8: 0xc09c53a  jal         func_2714E8
label_209acc:
    if (ctx->pc == 0x209ACCu) {
        ctx->pc = 0x209ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AC8u;
        // 0x209acc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209AD0u;
        goto label_209ad0;
    }
    ctx->pc = 0x209AC8u;
    SET_GPR_U32(ctx, 31, 0x209AD0u);
    ctx->pc = 0x209ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AC8u;
    // 0x209acc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2714E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2714E8u, 0x209AC8u, 0x209AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AD0u;
label_209ad0:
    // 0x209ad0: 0xc09a142  jal         func_268508
label_209ad4:
    if (ctx->pc == 0x209AD4u) {
        ctx->pc = 0x209AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AD0u;
        // 0x209ad4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209AD8u;
        goto label_209ad8;
    }
    ctx->pc = 0x209AD0u;
    SET_GPR_U32(ctx, 31, 0x209AD8u);
    ctx->pc = 0x209AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AD0u;
    // 0x209ad4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268508u, 0x209AD0u, 0x209AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AD8u;
label_209ad8:
    // 0x209ad8: 0xc09a174  jal         func_2685D0
label_209adc:
    if (ctx->pc == 0x209ADCu) {
        ctx->pc = 0x209ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AD8u;
        // 0x209adc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209AE0u;
        goto label_209ae0;
    }
    ctx->pc = 0x209AD8u;
    SET_GPR_U32(ctx, 31, 0x209AE0u);
    ctx->pc = 0x209ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AD8u;
    // 0x209adc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2685D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2685D0u, 0x209AD8u, 0x209AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AE0u;
label_209ae0:
    // 0x209ae0: 0xc09a372  jal         func_268DC8
label_209ae4:
    if (ctx->pc == 0x209AE4u) {
        ctx->pc = 0x209AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AE0u;
        // 0x209ae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209AE8u;
        goto label_209ae8;
    }
    ctx->pc = 0x209AE0u;
    SET_GPR_U32(ctx, 31, 0x209AE8u);
    ctx->pc = 0x209AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AE0u;
    // 0x209ae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268DC8u, 0x209AE0u, 0x209AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AE8u;
label_209ae8:
    // 0x209ae8: 0xc09a6b0  jal         func_269AC0
label_209aec:
    if (ctx->pc == 0x209AECu) {
        ctx->pc = 0x209AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AE8u;
        // 0x209aec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209AF0u;
        goto label_209af0;
    }
    ctx->pc = 0x209AE8u;
    SET_GPR_U32(ctx, 31, 0x209AF0u);
    ctx->pc = 0x209AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AE8u;
    // 0x209aec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269AC0u, 0x209AE8u, 0x209AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AF0u;
label_209af0:
    // 0x209af0: 0xc09a6d4  jal         func_269B50
label_209af4:
    if (ctx->pc == 0x209AF4u) {
        ctx->pc = 0x209AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AF0u;
        // 0x209af4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209AF8u;
        goto label_209af8;
    }
    ctx->pc = 0x209AF0u;
    SET_GPR_U32(ctx, 31, 0x209AF8u);
    ctx->pc = 0x209AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AF0u;
    // 0x209af4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269B50u, 0x209AF0u, 0x209AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AF8u;
label_209af8:
    // 0x209af8: 0xc09a806  jal         func_26A018
label_209afc:
    if (ctx->pc == 0x209AFCu) {
        ctx->pc = 0x209AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AF8u;
        // 0x209afc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B00u;
        goto label_209b00;
    }
    ctx->pc = 0x209AF8u;
    SET_GPR_U32(ctx, 31, 0x209B00u);
    ctx->pc = 0x209AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AF8u;
    // 0x209afc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A018u, 0x209AF8u, 0x209B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B00u;
label_209b00:
    // 0x209b00: 0xc09d346  jal         func_274D18
label_209b04:
    if (ctx->pc == 0x209B04u) {
        ctx->pc = 0x209B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B00u;
        // 0x209b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B08u;
        goto label_209b08;
    }
    ctx->pc = 0x209B00u;
    SET_GPR_U32(ctx, 31, 0x209B08u);
    ctx->pc = 0x209B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B00u;
    // 0x209b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274D18u, 0x209B00u, 0x209B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B08u;
label_209b08:
    // 0x209b08: 0x10000033  b           . + 4 + (0x33 << 2)
label_209b0c:
    if (ctx->pc == 0x209B0Cu) {
        ctx->pc = 0x209B10u;
        goto label_209b10;
    }
    ctx->pc = 0x209B08u;
    {
        const bool branch_taken_0x209b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209b08) {
            ctx->pc = 0x209BD8u;
            goto label_209bd8;
        }
    }
    ctx->pc = 0x209B10u;
label_209b10:
    // 0x209b10: 0xc09a8f6  jal         func_26A3D8
label_209b14:
    if (ctx->pc == 0x209B14u) {
        ctx->pc = 0x209B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B10u;
        // 0x209b14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B18u;
        goto label_209b18;
    }
    ctx->pc = 0x209B10u;
    SET_GPR_U32(ctx, 31, 0x209B18u);
    ctx->pc = 0x209B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B10u;
    // 0x209b14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A3D8u, 0x209B10u, 0x209B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B18u;
label_209b18:
    // 0x209b18: 0xc09a956  jal         func_26A558
label_209b1c:
    if (ctx->pc == 0x209B1Cu) {
        ctx->pc = 0x209B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B18u;
        // 0x209b1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B20u;
        goto label_209b20;
    }
    ctx->pc = 0x209B18u;
    SET_GPR_U32(ctx, 31, 0x209B20u);
    ctx->pc = 0x209B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B18u;
    // 0x209b1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A558u, 0x209B18u, 0x209B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B20u;
label_209b20:
    // 0x209b20: 0xc09cfe6  jal         func_273F98
label_209b24:
    if (ctx->pc == 0x209B24u) {
        ctx->pc = 0x209B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B20u;
        // 0x209b24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B28u;
        goto label_209b28;
    }
    ctx->pc = 0x209B20u;
    SET_GPR_U32(ctx, 31, 0x209B28u);
    ctx->pc = 0x209B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B20u;
    // 0x209b24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273F98u, 0x209B20u, 0x209B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B28u;
label_209b28:
    // 0x209b28: 0xc09bac8  jal         func_26EB20
label_209b2c:
    if (ctx->pc == 0x209B2Cu) {
        ctx->pc = 0x209B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B28u;
        // 0x209b2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B30u;
        goto label_209b30;
    }
    ctx->pc = 0x209B28u;
    SET_GPR_U32(ctx, 31, 0x209B30u);
    ctx->pc = 0x209B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B28u;
    // 0x209b2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EB20u, 0x209B28u, 0x209B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B30u;
label_209b30:
    // 0x209b30: 0xc09d59a  jal         func_275668
label_209b34:
    if (ctx->pc == 0x209B34u) {
        ctx->pc = 0x209B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B30u;
        // 0x209b34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B38u;
        goto label_209b38;
    }
    ctx->pc = 0x209B30u;
    SET_GPR_U32(ctx, 31, 0x209B38u);
    ctx->pc = 0x209B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B30u;
    // 0x209b34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275668u, 0x209B30u, 0x209B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B38u;
label_209b38:
    // 0x209b38: 0xc09bbd8  jal         func_26EF60
label_209b3c:
    if (ctx->pc == 0x209B3Cu) {
        ctx->pc = 0x209B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B38u;
        // 0x209b3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B40u;
        goto label_209b40;
    }
    ctx->pc = 0x209B38u;
    SET_GPR_U32(ctx, 31, 0x209B40u);
    ctx->pc = 0x209B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B38u;
    // 0x209b3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EF60u, 0x209B38u, 0x209B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B40u;
label_209b40:
    // 0x209b40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_209b44:
    if (ctx->pc == 0x209B44u) {
        ctx->pc = 0x209B48u;
        goto label_209b48;
    }
    ctx->pc = 0x209B40u;
    {
        const bool branch_taken_0x209b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209b40) {
            ctx->pc = 0x209B54u;
            goto label_209b54;
        }
    }
    ctx->pc = 0x209B48u;
label_209b48:
    // 0x209b48: 0x92421868  lbu         $v0, 0x1868($s2)
    ctx->pc = 0x209b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6248)));
label_209b4c:
    // 0x209b4c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_209b50:
    if (ctx->pc == 0x209B50u) {
        ctx->pc = 0x209B54u;
        goto label_209b54;
    }
    ctx->pc = 0x209B4Cu;
    {
        const bool branch_taken_0x209b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209b4c) {
            ctx->pc = 0x209B78u;
            goto label_209b78;
        }
    }
    ctx->pc = 0x209B54u;
label_209b54:
    // 0x209b54: 0xc0527ae  jal         func_149EB8
label_209b58:
    if (ctx->pc == 0x209B58u) {
        ctx->pc = 0x209B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B54u;
        // 0x209b58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B5Cu;
        goto label_209b5c;
    }
    ctx->pc = 0x209B54u;
    SET_GPR_U32(ctx, 31, 0x209B5Cu);
    ctx->pc = 0x209B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B54u;
    // 0x209b58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x209B54u, 0x209B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B5Cu;
label_209b5c:
    // 0x209b5c: 0x26440448  addiu       $a0, $s2, 0x448
    ctx->pc = 0x209b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1096));
label_209b60:
    // 0x209b60: 0xc054a88  jal         func_152A20
label_209b64:
    if (ctx->pc == 0x209B64u) {
        ctx->pc = 0x209B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B60u;
        // 0x209b64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B68u;
        goto label_209b68;
    }
    ctx->pc = 0x209B60u;
    SET_GPR_U32(ctx, 31, 0x209B68u);
    ctx->pc = 0x209B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B60u;
    // 0x209b64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x209B60u, 0x209B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B68u;
label_209b68:
    // 0x209b68: 0xc05280e  jal         func_14A038
label_209b6c:
    if (ctx->pc == 0x209B6Cu) {
        ctx->pc = 0x209B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B68u;
        // 0x209b6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B70u;
        goto label_209b70;
    }
    ctx->pc = 0x209B68u;
    SET_GPR_U32(ctx, 31, 0x209B70u);
    ctx->pc = 0x209B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B68u;
    // 0x209b6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x209B68u, 0x209B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B70u;
label_209b70:
    // 0x209b70: 0xc09c53a  jal         func_2714E8
label_209b74:
    if (ctx->pc == 0x209B74u) {
        ctx->pc = 0x209B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B70u;
        // 0x209b74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B78u;
        goto label_209b78;
    }
    ctx->pc = 0x209B70u;
    SET_GPR_U32(ctx, 31, 0x209B78u);
    ctx->pc = 0x209B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B70u;
    // 0x209b74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2714E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2714E8u, 0x209B70u, 0x209B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B78u;
label_209b78:
    // 0x209b78: 0xc09a142  jal         func_268508
label_209b7c:
    if (ctx->pc == 0x209B7Cu) {
        ctx->pc = 0x209B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B78u;
        // 0x209b7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B80u;
        goto label_209b80;
    }
    ctx->pc = 0x209B78u;
    SET_GPR_U32(ctx, 31, 0x209B80u);
    ctx->pc = 0x209B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B78u;
    // 0x209b7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268508u, 0x209B78u, 0x209B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B80u;
label_209b80:
    // 0x209b80: 0xc09a174  jal         func_2685D0
label_209b84:
    if (ctx->pc == 0x209B84u) {
        ctx->pc = 0x209B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B80u;
        // 0x209b84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B88u;
        goto label_209b88;
    }
    ctx->pc = 0x209B80u;
    SET_GPR_U32(ctx, 31, 0x209B88u);
    ctx->pc = 0x209B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B80u;
    // 0x209b84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2685D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2685D0u, 0x209B80u, 0x209B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B88u;
label_209b88:
    // 0x209b88: 0xc09a1e2  jal         func_268788
label_209b8c:
    if (ctx->pc == 0x209B8Cu) {
        ctx->pc = 0x209B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B88u;
        // 0x209b8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B90u;
        goto label_209b90;
    }
    ctx->pc = 0x209B88u;
    SET_GPR_U32(ctx, 31, 0x209B90u);
    ctx->pc = 0x209B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B88u;
    // 0x209b8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268788u, 0x209B88u, 0x209B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B90u;
label_209b90:
    // 0x209b90: 0xc09a372  jal         func_268DC8
label_209b94:
    if (ctx->pc == 0x209B94u) {
        ctx->pc = 0x209B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B90u;
        // 0x209b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B98u;
        goto label_209b98;
    }
    ctx->pc = 0x209B90u;
    SET_GPR_U32(ctx, 31, 0x209B98u);
    ctx->pc = 0x209B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B90u;
    // 0x209b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268DC8u, 0x209B90u, 0x209B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B98u;
label_209b98:
    // 0x209b98: 0xc09a6b0  jal         func_269AC0
label_209b9c:
    if (ctx->pc == 0x209B9Cu) {
        ctx->pc = 0x209B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B98u;
        // 0x209b9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BA0u;
        goto label_209ba0;
    }
    ctx->pc = 0x209B98u;
    SET_GPR_U32(ctx, 31, 0x209BA0u);
    ctx->pc = 0x209B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B98u;
    // 0x209b9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269AC0u, 0x209B98u, 0x209BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BA0u;
label_209ba0:
    // 0x209ba0: 0xc09a6d4  jal         func_269B50
label_209ba4:
    if (ctx->pc == 0x209BA4u) {
        ctx->pc = 0x209BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BA0u;
        // 0x209ba4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BA8u;
        goto label_209ba8;
    }
    ctx->pc = 0x209BA0u;
    SET_GPR_U32(ctx, 31, 0x209BA8u);
    ctx->pc = 0x209BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BA0u;
    // 0x209ba4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269B50u, 0x209BA0u, 0x209BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BA8u;
label_209ba8:
    // 0x209ba8: 0xc09a806  jal         func_26A018
label_209bac:
    if (ctx->pc == 0x209BACu) {
        ctx->pc = 0x209BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BA8u;
        // 0x209bac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BB0u;
        goto label_209bb0;
    }
    ctx->pc = 0x209BA8u;
    SET_GPR_U32(ctx, 31, 0x209BB0u);
    ctx->pc = 0x209BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BA8u;
    // 0x209bac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A018u, 0x209BA8u, 0x209BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BB0u;
label_209bb0:
    // 0x209bb0: 0xc09a880  jal         func_26A200
label_209bb4:
    if (ctx->pc == 0x209BB4u) {
        ctx->pc = 0x209BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BB0u;
        // 0x209bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BB8u;
        goto label_209bb8;
    }
    ctx->pc = 0x209BB0u;
    SET_GPR_U32(ctx, 31, 0x209BB8u);
    ctx->pc = 0x209BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BB0u;
    // 0x209bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A200u, 0x209BB0u, 0x209BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BB8u;
label_209bb8:
    // 0x209bb8: 0xc09cb76  jal         func_272DD8
label_209bbc:
    if (ctx->pc == 0x209BBCu) {
        ctx->pc = 0x209BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BB8u;
        // 0x209bbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BC0u;
        goto label_209bc0;
    }
    ctx->pc = 0x209BB8u;
    SET_GPR_U32(ctx, 31, 0x209BC0u);
    ctx->pc = 0x209BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BB8u;
    // 0x209bbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272DD8u, 0x209BB8u, 0x209BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BC0u;
label_209bc0:
    // 0x209bc0: 0xc09bd1e  jal         func_26F478
label_209bc4:
    if (ctx->pc == 0x209BC4u) {
        ctx->pc = 0x209BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BC0u;
        // 0x209bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BC8u;
        goto label_209bc8;
    }
    ctx->pc = 0x209BC0u;
    SET_GPR_U32(ctx, 31, 0x209BC8u);
    ctx->pc = 0x209BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BC0u;
    // 0x209bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F478u, 0x209BC0u, 0x209BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BC8u;
label_209bc8:
    // 0x209bc8: 0xc09c0ce  jal         func_270338
label_209bcc:
    if (ctx->pc == 0x209BCCu) {
        ctx->pc = 0x209BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BC8u;
        // 0x209bcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BD0u;
        goto label_209bd0;
    }
    ctx->pc = 0x209BC8u;
    SET_GPR_U32(ctx, 31, 0x209BD0u);
    ctx->pc = 0x209BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BC8u;
    // 0x209bcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270338u, 0x209BC8u, 0x209BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BD0u;
label_209bd0:
    // 0x209bd0: 0xc09d346  jal         func_274D18
label_209bd4:
    if (ctx->pc == 0x209BD4u) {
        ctx->pc = 0x209BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BD0u;
        // 0x209bd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BD8u;
        goto label_209bd8;
    }
    ctx->pc = 0x209BD0u;
    SET_GPR_U32(ctx, 31, 0x209BD8u);
    ctx->pc = 0x209BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BD0u;
    // 0x209bd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274D18u, 0x209BD0u, 0x209BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BD8u;
label_209bd8:
    // 0x209bd8: 0xc09cdd2  jal         func_273748
label_209bdc:
    if (ctx->pc == 0x209BDCu) {
        ctx->pc = 0x209BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BD8u;
        // 0x209bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BE0u;
        goto label_209be0;
    }
    ctx->pc = 0x209BD8u;
    SET_GPR_U32(ctx, 31, 0x209BE0u);
    ctx->pc = 0x209BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BD8u;
    // 0x209bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273748u, 0x209BD8u, 0x209BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BE0u;
label_209be0:
    // 0x209be0: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x209be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_209be4:
    // 0x209be4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x209be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_209be8:
    // 0x209be8: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x209be8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_209bec:
    // 0x209bec: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_209bf0:
    if (ctx->pc == 0x209BF0u) {
        ctx->pc = 0x209BF4u;
        goto label_209bf4;
    }
    ctx->pc = 0x209BECu;
    {
        const bool branch_taken_0x209bec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x209bec) {
            ctx->pc = 0x209C0Cu;
            goto label_209c0c;
        }
    }
    ctx->pc = 0x209BF4u;
label_209bf4:
    // 0x209bf4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x209bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209bf8:
    // 0x209bf8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x209bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_209bfc:
    // 0x209bfc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x209bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209c00:
    // 0x209c00: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x209c00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_209c04:
    // 0x209c04: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x209c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209c08:
    // 0x209c08: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x209c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_209c0c:
    // 0x209c0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_209c10:
    // 0x209c10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x209c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209c14:
    // 0x209c14: 0x26c42fc0  addiu       $a0, $s6, 0x2FC0
    ctx->pc = 0x209c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12224));
label_209c18:
    // 0x209c18: 0xae400474  sw          $zero, 0x474($s2)
    ctx->pc = 0x209c18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1140), GPR_U32(ctx, 0));
label_209c1c:
    // 0x209c1c: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x209c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_209c20:
    // 0x209c20: 0xae400480  sw          $zero, 0x480($s2)
    ctx->pc = 0x209c20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1152), GPR_U32(ctx, 0));
label_209c24:
    // 0x209c24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x209c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_209c28:
    // 0x209c28: 0xae400488  sw          $zero, 0x488($s2)
    ctx->pc = 0x209c28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1160), GPR_U32(ctx, 0));
label_209c2c:
    // 0x209c2c: 0xc04d23a  jal         func_1348E8
label_209c30:
    if (ctx->pc == 0x209C30u) {
        ctx->pc = 0x209C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C2Cu;
        // 0x209c30: 0xe6400484  swc1        $f0, 0x484($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1156), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209C34u;
        goto label_209c34;
    }
    ctx->pc = 0x209C2Cu;
    SET_GPR_U32(ctx, 31, 0x209C34u);
    ctx->pc = 0x209C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209C2Cu;
    // 0x209c30: 0xe6400484  swc1        $f0, 0x484($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1156), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1348E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1348E8u, 0x209C2Cu, 0x209C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C34u;
label_209c34:
    // 0x209c34: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x209c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_209c38:
    // 0x209c38: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x209c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_209c3c:
    // 0x209c3c: 0x10620057  beq         $v1, $v0, . + 4 + (0x57 << 2)
label_209c40:
    if (ctx->pc == 0x209C40u) {
        ctx->pc = 0x209C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C3Cu;
        // 0x209c40: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209C44u;
        goto label_209c44;
    }
    ctx->pc = 0x209C3Cu;
    {
        const bool branch_taken_0x209c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C3Cu;
        // 0x209c40: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209c3c) {
            ctx->pc = 0x209D9Cu;
            goto label_209d9c;
        }
    }
    ctx->pc = 0x209C44u;
label_209c44:
    // 0x209c44: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x209c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
label_209c48:
    // 0x209c48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x209c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_209c4c:
    // 0x209c4c: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_209c50:
    if (ctx->pc == 0x209C50u) {
        ctx->pc = 0x209C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C4Cu;
        // 0x209c50: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209C54u;
        goto label_209c54;
    }
    ctx->pc = 0x209C4Cu;
    {
        const bool branch_taken_0x209c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209c4c) {
            ctx->pc = 0x209C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209C4Cu;
            // 0x209c50: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209CA4u;
            goto label_209ca4;
        }
    }
    ctx->pc = 0x209C54u;
label_209c54:
    // 0x209c54: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x209c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_209c58:
    // 0x209c58: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x209c58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
label_209c5c:
    // 0x209c5c: 0x24060124  addiu       $a2, $zero, 0x124
    ctx->pc = 0x209c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
label_209c60:
    // 0x209c60: 0xc64c16cc  lwc1        $f12, 0x16CC($s2)
    ctx->pc = 0x209c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_209c64:
    // 0x209c64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x209c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209c68:
    // 0x209c68: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x209c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_209c6c:
    // 0x209c6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x209c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_209c70:
    // 0x209c70: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x209c70u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_209c74:
    // 0x209c74: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x209c74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_209c78:
    // 0x209c78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x209c78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209c7c:
    // 0x209c7c: 0xc04cb68  jal         func_132DA0
label_209c80:
    if (ctx->pc == 0x209C80u) {
        ctx->pc = 0x209C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C7Cu;
        // 0x209c80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209C84u;
        goto label_209c84;
    }
    ctx->pc = 0x209C7Cu;
    SET_GPR_U32(ctx, 31, 0x209C84u);
    ctx->pc = 0x209C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209C7Cu;
    // 0x209c80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132DA0u, 0x209C7Cu, 0x209C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C84u;
label_209c84:
    // 0x209c84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_209c88:
    if (ctx->pc == 0x209C88u) {
        ctx->pc = 0x209C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C84u;
        // 0x209c88: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209C8Cu;
        goto label_209c8c;
    }
    ctx->pc = 0x209C84u;
    {
        const bool branch_taken_0x209c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C84u;
        // 0x209c88: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209c84) {
            ctx->pc = 0x209CA0u;
            goto label_209ca0;
        }
    }
    ctx->pc = 0x209C8Cu;
label_209c8c:
    // 0x209c8c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x209c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_209c90:
    // 0x209c90: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x209c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_209c94:
    // 0x209c94: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x209c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_209c98:
    // 0x209c98: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x209c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209c9c:
    // 0x209c9c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x209c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_209ca0:
    // 0x209ca0: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x209ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
label_209ca4:
    // 0x209ca4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x209ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_209ca8:
    // 0x209ca8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x209ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_209cac:
    // 0x209cac: 0x5440003c  bnel        $v0, $zero, . + 4 + (0x3C << 2)
label_209cb0:
    if (ctx->pc == 0x209CB0u) {
        ctx->pc = 0x209CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CACu;
        // 0x209cb0: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CB4u;
        goto label_209cb4;
    }
    ctx->pc = 0x209CACu;
    {
        const bool branch_taken_0x209cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209cac) {
            ctx->pc = 0x209CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209CACu;
            // 0x209cb0: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209DA0u;
            goto label_209da0;
        }
    }
    ctx->pc = 0x209CB4u;
label_209cb4:
    // 0x209cb4: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x209cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_209cb8:
    // 0x209cb8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x209cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_209cbc:
    // 0x209cbc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x209cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_209cc0:
    // 0x209cc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x209cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_209cc4:
    // 0x209cc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x209cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209cc8:
    // 0x209cc8: 0x26460480  addiu       $a2, $s2, 0x480
    ctx->pc = 0x209cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1152));
label_209ccc:
    // 0x209ccc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x209cccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_209cd0:
    // 0x209cd0: 0xc04ca70  jal         func_1329C0
label_209cd4:
    if (ctx->pc == 0x209CD4u) {
        ctx->pc = 0x209CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CD0u;
        // 0x209cd4: 0x27a70094  addiu       $a3, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CD8u;
        goto label_209cd8;
    }
    ctx->pc = 0x209CD0u;
    SET_GPR_U32(ctx, 31, 0x209CD8u);
    ctx->pc = 0x209CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209CD0u;
    // 0x209cd4: 0x27a70094  addiu       $a3, $sp, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1329C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1329C0u, 0x209CD0u, 0x209CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209CD8u;
label_209cd8:
    // 0x209cd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_209cdc:
    if (ctx->pc == 0x209CDCu) {
        ctx->pc = 0x209CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CD8u;
        // 0x209cdc: 0x8fa30094  lw          $v1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CE0u;
        goto label_209ce0;
    }
    ctx->pc = 0x209CD8u;
    {
        const bool branch_taken_0x209cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CD8u;
        // 0x209cdc: 0x8fa30094  lw          $v1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209cd8) {
            ctx->pc = 0x209CF0u;
            goto label_209cf0;
        }
    }
    ctx->pc = 0x209CE0u;
label_209ce0:
    // 0x209ce0: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x209ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_209ce4:
    // 0x209ce4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x209ce4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_209ce8:
    // 0x209ce8: 0x10000009  b           . + 4 + (0x9 << 2)
label_209cec:
    if (ctx->pc == 0x209CECu) {
        ctx->pc = 0x209CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CE8u;
        // 0x209cec: 0xae420474  sw          $v0, 0x474($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CF0u;
        goto label_209cf0;
    }
    ctx->pc = 0x209CE8u;
    {
        const bool branch_taken_0x209ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CE8u;
        // 0x209cec: 0xae420474  sw          $v0, 0x474($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ce8) {
            ctx->pc = 0x209D10u;
            goto label_209d10;
        }
    }
    ctx->pc = 0x209CF0u;
label_209cf0:
    // 0x209cf0: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x209cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_209cf4:
    // 0x209cf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_209cf8:
    // 0x209cf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x209cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209cfc:
    // 0x209cfc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x209cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209d00:
    // 0x209d00: 0xe6400484  swc1        $f0, 0x484($s2)
    ctx->pc = 0x209d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1156), bits); }
label_209d04:
    // 0x209d04: 0x46140b01  sub.s       $f12, $f1, $f20
    ctx->pc = 0x209d04u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_209d08:
    // 0x209d08: 0xae400480  sw          $zero, 0x480($s2)
    ctx->pc = 0x209d08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1152), GPR_U32(ctx, 0));
label_209d0c:
    // 0x209d0c: 0xae400488  sw          $zero, 0x488($s2)
    ctx->pc = 0x209d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1160), GPR_U32(ctx, 0));
label_209d10:
    // 0x209d10: 0xc64205a8  lwc1        $f2, 0x5A8($s2)
    ctx->pc = 0x209d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_209d14:
    // 0x209d14: 0xc640170c  lwc1        $f0, 0x170C($s2)
    ctx->pc = 0x209d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209d18:
    // 0x209d18: 0xc6411710  lwc1        $f1, 0x1710($s2)
    ctx->pc = 0x209d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209d1c:
    // 0x209d1c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x209d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_209d20:
    // 0x209d20: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x209d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_209d24:
    // 0x209d24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x209d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_209d28:
    // 0x209d28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x209d28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_209d2c:
    // 0x209d2c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x209d2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209d30:
    // 0x209d30: 0x0  nop
    ctx->pc = 0x209d30u;
    // NOP
label_209d34:
    // 0x209d34: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_209d38:
    if (ctx->pc == 0x209D38u) {
        ctx->pc = 0x209D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D34u;
        // 0x209d38: 0xe6411710  swc1        $f1, 0x1710($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5904), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D3Cu;
        goto label_209d3c;
    }
    ctx->pc = 0x209D34u;
    {
        const bool branch_taken_0x209d34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D34u;
        // 0x209d38: 0xe6411710  swc1        $f1, 0x1710($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5904), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d34) {
            ctx->pc = 0x209D40u;
            goto label_209d40;
        }
    }
    ctx->pc = 0x209D3Cu;
label_209d3c:
    // 0x209d3c: 0xe6421710  swc1        $f2, 0x1710($s2)
    ctx->pc = 0x209d3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5904), bits); }
label_209d40:
    // 0x209d40: 0x8e4316d0  lw          $v1, 0x16D0($s2)
    ctx->pc = 0x209d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
label_209d44:
    // 0x209d44: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x209d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
label_209d48:
    // 0x209d48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x209d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_209d4c:
    // 0x209d4c: 0xc6411710  lwc1        $f1, 0x1710($s2)
    ctx->pc = 0x209d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209d50:
    // 0x209d50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x209d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_209d54:
    // 0x209d54: 0xc64205a8  lwc1        $f2, 0x5A8($s2)
    ctx->pc = 0x209d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_209d58:
    // 0x209d58: 0xae4316d0  sw          $v1, 0x16D0($s2)
    ctx->pc = 0x209d58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 3));
label_209d5c:
    // 0x209d5c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x209d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_209d60:
    // 0x209d60: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x209d60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_209d64:
    // 0x209d64: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x209d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209d68:
    // 0x209d68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x209d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_209d6c:
    // 0x209d6c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x209d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_209d70:
    // 0x209d70: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x209d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_209d74:
    // 0x209d74: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x209d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209d78:
    // 0x209d78: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x209d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209d7c:
    // 0x209d7c: 0x0  nop
    ctx->pc = 0x209d7cu;
    // NOP
label_209d80:
    // 0x209d80: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_209d84:
    if (ctx->pc == 0x209D84u) {
        ctx->pc = 0x209D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D80u;
        // 0x209d84: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D88u;
        goto label_209d88;
    }
    ctx->pc = 0x209D80u;
    {
        const bool branch_taken_0x209d80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D80u;
        // 0x209d84: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d80) {
            ctx->pc = 0x209DA0u;
            goto label_209da0;
        }
    }
    ctx->pc = 0x209D88u;
label_209d88:
    // 0x209d88: 0xe44c0004  swc1        $f12, 0x4($v0)
    ctx->pc = 0x209d88u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_209d8c:
    // 0x209d8c: 0xae401710  sw          $zero, 0x1710($s2)
    ctx->pc = 0x209d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5904), GPR_U32(ctx, 0));
label_209d90:
    // 0x209d90: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x209d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
label_209d94:
    // 0x209d94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x209d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_209d98:
    // 0x209d98: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x209d98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
label_209d9c:
    // 0x209d9c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x209d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_209da0:
    // 0x209da0: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x209da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_209da4:
    // 0x209da4: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x209da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_209da8:
    // 0x209da8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x209da8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_209dac:
    // 0x209dac: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x209dacu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_209db0:
    // 0x209db0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x209db0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_209db4:
    // 0x209db4: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x209db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_209db8:
    // 0x209db8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x209db8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_209dbc:
    // 0x209dbc: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x209dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_209dc0:
    // 0x209dc0: 0x26420550  addiu       $v0, $s2, 0x550
    ctx->pc = 0x209dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
label_209dc4:
    // 0x209dc4: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
label_209dc8:
    if (ctx->pc == 0x209DC8u) {
        ctx->pc = 0x209DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DC4u;
        // 0x209dc8: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DCCu;
        goto label_209dcc;
    }
    ctx->pc = 0x209DC4u;
    {
        const bool branch_taken_0x209dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x209DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DC4u;
        // 0x209dc8: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209dc4) {
            ctx->pc = 0x209DE0u;
            goto label_209de0;
        }
    }
    ctx->pc = 0x209DCCu;
label_209dcc:
    // 0x209dcc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x209dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209dd0:
    // 0x209dd0: 0xe6400550  swc1        $f0, 0x550($s2)
    ctx->pc = 0x209dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1360), bits); }
label_209dd4:
    // 0x209dd4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x209dd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_209dd8:
    // 0x209dd8: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x209dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209ddc:
    // 0x209ddc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x209ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_209de0:
    // 0x209de0: 0xc09d47c  jal         func_2751F0
label_209de4:
    if (ctx->pc == 0x209DE4u) {
        ctx->pc = 0x209DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DE0u;
        // 0x209de4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DE8u;
        goto label_209de8;
    }
    ctx->pc = 0x209DE0u;
    SET_GPR_U32(ctx, 31, 0x209DE8u);
    ctx->pc = 0x209DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209DE0u;
    // 0x209de4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F0u, 0x209DE0u, 0x209DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209DE8u;
label_209de8:
    // 0x209de8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x209de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_209dec:
    // 0x209dec: 0x26430490  addiu       $v1, $s2, 0x490
    ctx->pc = 0x209decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
label_209df0:
    // 0x209df0: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_209df4:
    if (ctx->pc == 0x209DF4u) {
        ctx->pc = 0x209DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DF0u;
        // 0x209df4: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DF8u;
        goto label_209df8;
    }
    ctx->pc = 0x209DF0u;
    {
        const bool branch_taken_0x209df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x209df0) {
            ctx->pc = 0x209DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209DF0u;
            // 0x209df4: 0x924202f4  lbu         $v0, 0x2F4($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209E14u;
            goto label_209e14;
        }
    }
    ctx->pc = 0x209DF8u;
label_209df8:
    // 0x209df8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x209df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209dfc:
    // 0x209dfc: 0xe6400490  swc1        $f0, 0x490($s2)
    ctx->pc = 0x209dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1168), bits); }
label_209e00:
    // 0x209e00: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x209e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209e04:
    // 0x209e04: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x209e04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_209e08:
    // 0x209e08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x209e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209e0c:
    // 0x209e0c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x209e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_209e10:
    // 0x209e10: 0x924202f4  lbu         $v0, 0x2F4($s2)
    ctx->pc = 0x209e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 756)));
label_209e14:
    // 0x209e14: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x209e14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_209e18:
    // 0x209e18: 0x50510013  beql        $v0, $s1, . + 4 + (0x13 << 2)
label_209e1c:
    if (ctx->pc == 0x209E1Cu) {
        ctx->pc = 0x209E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E18u;
        // 0x209e1c: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E20u;
        goto label_209e20;
    }
    ctx->pc = 0x209E18u;
    {
        const bool branch_taken_0x209e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x209e18) {
            ctx->pc = 0x209E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209E18u;
            // 0x209e1c: 0x964203ac  lhu         $v0, 0x3AC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209E68u;
            goto label_209e68;
        }
    }
    ctx->pc = 0x209E20u;
label_209e20:
    // 0x209e20: 0xc0b6dac  jal         func_2DB6B0
label_209e24:
    if (ctx->pc == 0x209E24u) {
        ctx->pc = 0x209E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E20u;
        // 0x209e24: 0x8e5000f0  lw          $s0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E28u;
        goto label_209e28;
    }
    ctx->pc = 0x209E20u;
    SET_GPR_U32(ctx, 31, 0x209E28u);
    ctx->pc = 0x209E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E20u;
    // 0x209e24: 0x8e5000f0  lw          $s0, 0xF0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x209E20u, 0x209E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E28u;
label_209e28:
    // 0x209e28: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x209e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_209e2c:
    // 0x209e2c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x209e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_209e30:
    // 0x209e30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x209e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_209e34:
    // 0x209e34: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x209e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209e38:
    // 0x209e38: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x209e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209e3c:
    // 0x209e3c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x209e3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_209e40:
    // 0x209e40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x209e40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209e44:
    // 0x209e44: 0x0  nop
    ctx->pc = 0x209e44u;
    // NOP
label_209e48:
    // 0x209e48: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_209e4c:
    if (ctx->pc == 0x209E4Cu) {
        ctx->pc = 0x209E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E48u;
        // 0x209e4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E50u;
        goto label_209e50;
    }
    ctx->pc = 0x209E48u;
    {
        const bool branch_taken_0x209e48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E48u;
        // 0x209e4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e48) {
            ctx->pc = 0x209E64u;
            goto label_209e64;
        }
    }
    ctx->pc = 0x209E50u;
label_209e50:
    // 0x209e50: 0xa25102f5  sb          $s1, 0x2F5($s2)
    ctx->pc = 0x209e50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 17));
label_209e54:
    // 0x209e54: 0xa24202f7  sb          $v0, 0x2F7($s2)
    ctx->pc = 0x209e54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 2));
label_209e58:
    // 0x209e58: 0xa640054a  sh          $zero, 0x54A($s2)
    ctx->pc = 0x209e58u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1354), (uint16_t)GPR_U32(ctx, 0));
label_209e5c:
    // 0x209e5c: 0xa25102f4  sb          $s1, 0x2F4($s2)
    ctx->pc = 0x209e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 17));
label_209e60:
    // 0x209e60: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x209e60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_209e64:
    // 0x209e64: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x209e64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
label_209e68:
    // 0x209e68: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x209e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_209e6c:
    // 0x209e6c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_209e70:
    if (ctx->pc == 0x209E70u) {
        ctx->pc = 0x209E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E6Cu;
        // 0x209e70: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E74u;
        goto label_209e74;
    }
    ctx->pc = 0x209E6Cu;
    {
        const bool branch_taken_0x209e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209e6c) {
            ctx->pc = 0x209E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209E6Cu;
            // 0x209e70: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209E88u;
            goto label_209e88;
        }
    }
    ctx->pc = 0x209E74u;
label_209e74:
    // 0x209e74: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x209e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_209e78:
    // 0x209e78: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x209e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_209e7c:
    // 0x209e7c: 0xc0a4bdc  jal         func_292F70
label_209e80:
    if (ctx->pc == 0x209E80u) {
        ctx->pc = 0x209E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E7Cu;
        // 0x209e80: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E84u;
        goto label_209e84;
    }
    ctx->pc = 0x209E7Cu;
    SET_GPR_U32(ctx, 31, 0x209E84u);
    ctx->pc = 0x209E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E7Cu;
    // 0x209e80: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F70u, 0x209E7Cu, 0x209E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E84u;
label_209e84:
    // 0x209e84: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x209e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
label_209e88:
    // 0x209e88: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x209e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_209e8c:
    // 0x209e8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_209e90:
    if (ctx->pc == 0x209E90u) {
        ctx->pc = 0x209E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E8Cu;
        // 0x209e90: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E94u;
        goto label_209e94;
    }
    ctx->pc = 0x209E8Cu;
    {
        const bool branch_taken_0x209e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E8Cu;
        // 0x209e90: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e8c) {
            ctx->pc = 0x209E9Cu;
            goto label_209e9c;
        }
    }
    ctx->pc = 0x209E94u;
label_209e94:
    // 0x209e94: 0xc0a4c2e  jal         func_2930B8
label_209e98:
    if (ctx->pc == 0x209E98u) {
        ctx->pc = 0x209E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E94u;
        // 0x209e98: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E9Cu;
        goto label_209e9c;
    }
    ctx->pc = 0x209E94u;
    SET_GPR_U32(ctx, 31, 0x209E9Cu);
    ctx->pc = 0x209E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E94u;
    // 0x209e98: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930B8u, 0x209E94u, 0x209E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E9Cu;
label_209e9c:
    // 0x209e9c: 0xc09bc76  jal         func_26F1D8
label_209ea0:
    if (ctx->pc == 0x209EA0u) {
        ctx->pc = 0x209EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E9Cu;
        // 0x209ea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209EA4u;
        goto label_209ea4;
    }
    ctx->pc = 0x209E9Cu;
    SET_GPR_U32(ctx, 31, 0x209EA4u);
    ctx->pc = 0x209EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E9Cu;
    // 0x209ea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x209E9Cu, 0x209EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EA4u;
label_209ea4:
    // 0x209ea4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_209ea8:
    if (ctx->pc == 0x209EA8u) {
        ctx->pc = 0x209EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209EA4u;
        // 0x209ea8: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209EACu;
        goto label_209eac;
    }
    ctx->pc = 0x209EA4u;
    {
        const bool branch_taken_0x209ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209ea4) {
            ctx->pc = 0x209EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209EA4u;
            // 0x209ea8: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209ECCu;
            goto label_209ecc;
        }
    }
    ctx->pc = 0x209EACu;
label_209eac:
    // 0x209eac: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x209eacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
label_209eb0:
    // 0x209eb0: 0x58400006  blezl       $v0, . + 4 + (0x6 << 2)
label_209eb4:
    if (ctx->pc == 0x209EB4u) {
        ctx->pc = 0x209EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209EB0u;
        // 0x209eb4: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209EB8u;
        goto label_209eb8;
    }
    ctx->pc = 0x209EB0u;
    {
        const bool branch_taken_0x209eb0 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x209eb0) {
            ctx->pc = 0x209EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209EB0u;
            // 0x209eb4: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209ECCu;
            goto label_209ecc;
        }
    }
    ctx->pc = 0x209EB8u;
label_209eb8:
    // 0x209eb8: 0x964203ac  lhu         $v0, 0x3AC($s2)
    ctx->pc = 0x209eb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 940)));
label_209ebc:
    // 0x209ebc: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x209ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
label_209ec0:
    // 0x209ec0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_209ec4:
    if (ctx->pc == 0x209EC4u) {
        ctx->pc = 0x209EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209EC0u;
        // 0x209ec4: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209EC8u;
        goto label_209ec8;
    }
    ctx->pc = 0x209EC0u;
    {
        const bool branch_taken_0x209ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209ec0) {
            ctx->pc = 0x209EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209EC0u;
            // 0x209ec4: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209EE0u;
            goto label_209ee0;
        }
    }
    ctx->pc = 0x209EC8u;
label_209ec8:
    // 0x209ec8: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x209ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
label_209ecc:
    // 0x209ecc: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x209eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_209ed0:
    // 0x209ed0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x209ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_209ed4:
    // 0x209ed4: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_209ed8:
    if (ctx->pc == 0x209ED8u) {
        ctx->pc = 0x209ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209ED4u;
        // 0x209ed8: 0xa2400620  sb          $zero, 0x620($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1568), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209EDCu;
        goto label_209edc;
    }
    ctx->pc = 0x209ED4u;
    {
        const bool branch_taken_0x209ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209ed4) {
            ctx->pc = 0x209ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209ED4u;
            // 0x209ed8: 0xa2400620  sb          $zero, 0x620($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1568), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209F4Cu;
            goto label_209f4c;
        }
    }
    ctx->pc = 0x209EDCu;
label_209edc:
    // 0x209edc: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x209edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_209ee0:
    // 0x209ee0: 0x2444fe00  addiu       $a0, $v0, -0x200
    ctx->pc = 0x209ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
label_209ee4:
    // 0x209ee4: 0x2c83007f  sltiu       $v1, $a0, 0x7F
    ctx->pc = 0x209ee4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_209ee8:
    // 0x209ee8: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_209eec:
    if (ctx->pc == 0x209EECu) {
        ctx->pc = 0x209EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209EE8u;
        // 0x209eec: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209EF0u;
        goto label_209ef0;
    }
    ctx->pc = 0x209EE8u;
    {
        const bool branch_taken_0x209ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209EE8u;
        // 0x209eec: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ee8) {
            ctx->pc = 0x209F4Cu;
            goto label_209f4c;
        }
    }
    ctx->pc = 0x209EF0u;
label_209ef0:
    // 0x209ef0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x209ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_209ef4:
    // 0x209ef4: 0x24420690  addiu       $v0, $v0, 0x690
    ctx->pc = 0x209ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
label_209ef8:
    // 0x209ef8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x209ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_209efc:
    // 0x209efc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x209efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_209f00:
    // 0x209f00: 0x800008  jr          $a0
label_209f04:
    if (ctx->pc == 0x209F04u) {
        ctx->pc = 0x209F08u;
        goto label_209f08;
    }
    ctx->pc = 0x209F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209F08u: goto label_209f08;
            case 0x209F28u: goto label_209f28;
            case 0x209F3Cu: goto label_209f3c;
            case 0x209F4Cu: goto label_209f4c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209F00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x209F08u;
label_209f08:
    // 0x209f08: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x209f08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
label_209f0c:
    // 0x209f0c: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x209f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_209f10:
    // 0x209f10: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_209f14:
    if (ctx->pc == 0x209F14u) {
        ctx->pc = 0x209F18u;
        goto label_209f18;
    }
    ctx->pc = 0x209F10u;
    {
        const bool branch_taken_0x209f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209f10) {
            ctx->pc = 0x209F3Cu;
            goto label_209f3c;
        }
    }
    ctx->pc = 0x209F18u;
label_209f18:
    // 0x209f18: 0xc0b71d0  jal         func_2DC740
label_209f1c:
    if (ctx->pc == 0x209F1Cu) {
        ctx->pc = 0x209F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F18u;
        // 0x209f1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209F20u;
        goto label_209f20;
    }
    ctx->pc = 0x209F18u;
    SET_GPR_U32(ctx, 31, 0x209F20u);
    ctx->pc = 0x209F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F18u;
    // 0x209f1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC740u, 0x209F18u, 0x209F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F20u;
label_209f20:
    // 0x209f20: 0x1000000b  b           . + 4 + (0xB << 2)
label_209f24:
    if (ctx->pc == 0x209F24u) {
        ctx->pc = 0x209F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F20u;
        // 0x209f24: 0x8e4316c4  lw          $v1, 0x16C4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209F28u;
        goto label_209f28;
    }
    ctx->pc = 0x209F20u;
    {
        const bool branch_taken_0x209f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F20u;
        // 0x209f24: 0x8e4316c4  lw          $v1, 0x16C4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f20) {
            ctx->pc = 0x209F50u;
            goto label_209f50;
        }
    }
    ctx->pc = 0x209F28u;
label_209f28:
    // 0x209f28: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x209f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
label_209f2c:
    // 0x209f2c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x209f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_209f30:
    // 0x209f30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x209f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_209f34:
    // 0x209f34: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_209f38:
    if (ctx->pc == 0x209F38u) {
        ctx->pc = 0x209F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F34u;
        // 0x209f38: 0x8e4316c4  lw          $v1, 0x16C4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209F3Cu;
        goto label_209f3c;
    }
    ctx->pc = 0x209F34u;
    {
        const bool branch_taken_0x209f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209f34) {
            ctx->pc = 0x209F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209F34u;
            // 0x209f38: 0x8e4316c4  lw          $v1, 0x16C4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5828)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209F50u;
            goto label_209f50;
        }
    }
    ctx->pc = 0x209F3Cu;
label_209f3c:
    // 0x209f3c: 0xc0b7354  jal         func_2DCD50
label_209f40:
    if (ctx->pc == 0x209F40u) {
        ctx->pc = 0x209F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F3Cu;
        // 0x209f40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209F44u;
        goto label_209f44;
    }
    ctx->pc = 0x209F3Cu;
    SET_GPR_U32(ctx, 31, 0x209F44u);
    ctx->pc = 0x209F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F3Cu;
    // 0x209f40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCD50u, 0x209F3Cu, 0x209F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F44u;
label_209f44:
    // 0x209f44: 0x10000002  b           . + 4 + (0x2 << 2)
label_209f48:
    if (ctx->pc == 0x209F48u) {
        ctx->pc = 0x209F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F44u;
        // 0x209f48: 0x8e4316c4  lw          $v1, 0x16C4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209F4Cu;
        goto label_209f4c;
    }
    ctx->pc = 0x209F44u;
    {
        const bool branch_taken_0x209f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F44u;
        // 0x209f48: 0x8e4316c4  lw          $v1, 0x16C4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f44) {
            ctx->pc = 0x209F50u;
            goto label_209f50;
        }
    }
    ctx->pc = 0x209F4Cu;
label_209f4c:
    // 0x209f4c: 0x8e4316c4  lw          $v1, 0x16C4($s2)
    ctx->pc = 0x209f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5828)));
label_209f50:
    // 0x209f50: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x209f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_209f54:
    // 0x209f54: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_209f58:
    if (ctx->pc == 0x209F58u) {
        ctx->pc = 0x209F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F54u;
        // 0x209f58: 0x8e4216d4  lw          $v0, 0x16D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209F5Cu;
        goto label_209f5c;
    }
    ctx->pc = 0x209F54u;
    {
        const bool branch_taken_0x209f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x209f54) {
            ctx->pc = 0x209F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209F54u;
            // 0x209f58: 0x8e4216d4  lw          $v0, 0x16D4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209F84u;
            goto label_209f84;
        }
    }
    ctx->pc = 0x209F5Cu;
label_209f5c:
    // 0x209f5c: 0xc64116c0  lwc1        $f1, 0x16C0($s2)
    ctx->pc = 0x209f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209f60:
    // 0x209f60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209f60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_209f64:
    // 0x209f64: 0x0  nop
    ctx->pc = 0x209f64u;
    // NOP
label_209f68:
    // 0x209f68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x209f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209f6c:
    // 0x209f6c: 0x0  nop
    ctx->pc = 0x209f6cu;
    // NOP
label_209f70:
    // 0x209f70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_209f74:
    if (ctx->pc == 0x209F74u) {
        ctx->pc = 0x209F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F70u;
        // 0x209f74: 0x3c030058  lui         $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209F78u;
        goto label_209f78;
    }
    ctx->pc = 0x209F70u;
    {
        const bool branch_taken_0x209f70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F70u;
        // 0x209f74: 0x3c030058  lui         $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f70) {
            ctx->pc = 0x209F80u;
            goto label_209f80;
        }
    }
    ctx->pc = 0x209F78u;
label_209f78:
    // 0x209f78: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x209f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_209f7c:
    // 0x209f7c: 0xa0626a30  sb          $v0, 0x6A30($v1)
    ctx->pc = 0x209f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27184), (uint8_t)GPR_U32(ctx, 2));
label_209f80:
    // 0x209f80: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x209f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
label_209f84:
    // 0x209f84: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x209f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_209f88:
    // 0x209f88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x209f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_209f8c:
    // 0x209f8c: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_209f90:
    if (ctx->pc == 0x209F90u) {
        ctx->pc = 0x209F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F8Cu;
        // 0x209f90: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209F94u;
        goto label_209f94;
    }
    ctx->pc = 0x209F8Cu;
    {
        const bool branch_taken_0x209f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209f8c) {
            ctx->pc = 0x209F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209F8Cu;
            // 0x209f90: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A028u;
            goto label_20a028;
        }
    }
    ctx->pc = 0x209F94u;
label_209f94:
    // 0x209f94: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x209f94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
label_209f98:
    // 0x209f98: 0x58400023  blezl       $v0, . + 4 + (0x23 << 2)
label_209f9c:
    if (ctx->pc == 0x209F9Cu) {
        ctx->pc = 0x209F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F98u;
        // 0x209f9c: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FA0u;
        goto label_209fa0;
    }
    ctx->pc = 0x209F98u;
    {
        const bool branch_taken_0x209f98 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x209f98) {
            ctx->pc = 0x209F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209F98u;
            // 0x209f9c: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A028u;
            goto label_20a028;
        }
    }
    ctx->pc = 0x209FA0u;
label_209fa0:
    // 0x209fa0: 0x8242186c  lb          $v0, 0x186C($s2)
    ctx->pc = 0x209fa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 6252)));
label_209fa4:
    // 0x209fa4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_209fa8:
    if (ctx->pc == 0x209FA8u) {
        ctx->pc = 0x209FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FA4u;
        // 0x209fa8: 0x9243186c  lbu         $v1, 0x186C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FACu;
        goto label_209fac;
    }
    ctx->pc = 0x209FA4u;
    {
        const bool branch_taken_0x209fa4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x209FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FA4u;
        // 0x209fa8: 0x9243186c  lbu         $v1, 0x186C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fa4) {
            ctx->pc = 0x209FB8u;
            goto label_209fb8;
        }
    }
    ctx->pc = 0x209FACu;
label_209fac:
    // 0x209fac: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x209facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_209fb0:
    // 0x209fb0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_209fb4:
    if (ctx->pc == 0x209FB4u) {
        ctx->pc = 0x209FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FB0u;
        // 0x209fb4: 0xa242186c  sb          $v0, 0x186C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 6252), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FB8u;
        goto label_209fb8;
    }
    ctx->pc = 0x209FB0u;
    {
        const bool branch_taken_0x209fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FB0u;
        // 0x209fb4: 0xa242186c  sb          $v0, 0x186C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 6252), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fb0) {
            ctx->pc = 0x20A024u;
            goto label_20a024;
        }
    }
    ctx->pc = 0x209FB8u;
label_209fb8:
    // 0x209fb8: 0xc0c73f8  jal         func_31CFE0
label_209fbc:
    if (ctx->pc == 0x209FBCu) {
        ctx->pc = 0x209FC0u;
        goto label_209fc0;
    }
    ctx->pc = 0x209FB8u;
    SET_GPR_U32(ctx, 31, 0x209FC0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x209FB8u, 0x209FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209FC0u;
label_209fc0:
    // 0x209fc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x209fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_209fc4:
    // 0x209fc4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_209fc8:
    if (ctx->pc == 0x209FC8u) {
        ctx->pc = 0x209FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FC4u;
        // 0x209fc8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FCCu;
        goto label_209fcc;
    }
    ctx->pc = 0x209FC4u;
    {
        const bool branch_taken_0x209fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FC4u;
        // 0x209fc8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fc4) {
            ctx->pc = 0x209FF8u;
            goto label_209ff8;
        }
    }
    ctx->pc = 0x209FCCu;
label_209fcc:
    // 0x209fcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209fd0:
    // 0x209fd0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x209fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_209fd4:
    // 0x209fd4: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x209fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_209fd8:
    // 0x209fd8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x209fd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_209fdc:
    // 0x209fdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x209fdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209fe0:
    // 0x209fe0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x209fe0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209fe4:
    // 0x209fe4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x209fe4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209fe8:
    // 0x209fe8: 0xc0b2e92  jal         func_2CBA48
label_209fec:
    if (ctx->pc == 0x209FECu) {
        ctx->pc = 0x209FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FE8u;
        // 0x209fec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FF0u;
        goto label_209ff0;
    }
    ctx->pc = 0x209FE8u;
    SET_GPR_U32(ctx, 31, 0x209FF0u);
    ctx->pc = 0x209FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209FE8u;
    // 0x209fec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x209FE8u, 0x209FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209FF0u;
label_209ff0:
    // 0x209ff0: 0x1000000b  b           . + 4 + (0xB << 2)
label_209ff4:
    if (ctx->pc == 0x209FF4u) {
        ctx->pc = 0x209FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FF0u;
        // 0x209ff4: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FF8u;
        goto label_209ff8;
    }
    ctx->pc = 0x209FF0u;
    {
        const bool branch_taken_0x209ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FF0u;
        // 0x209ff4: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ff0) {
            ctx->pc = 0x20A020u;
            goto label_20a020;
        }
    }
    ctx->pc = 0x209FF8u;
label_209ff8:
    // 0x209ff8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209ffc:
    // 0x209ffc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x209ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_20a000:
    // 0x20a000: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x20a000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_20a004:
    // 0x20a004: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x20a004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20a008:
    // 0x20a008: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20a008u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a00c:
    // 0x20a00c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20a00cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a010:
    // 0x20a010: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20a010u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a014:
    // 0x20a014: 0xc0b2e92  jal         func_2CBA48
label_20a018:
    if (ctx->pc == 0x20A018u) {
        ctx->pc = 0x20A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A014u;
        // 0x20a018: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A01Cu;
        goto label_20a01c;
    }
    ctx->pc = 0x20A014u;
    SET_GPR_U32(ctx, 31, 0x20A01Cu);
    ctx->pc = 0x20A018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A014u;
    // 0x20a018: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x20A014u, 0x20A01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A01Cu;
label_20a01c:
    // 0x20a01c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x20a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20a020:
    // 0x20a020: 0xa243186c  sb          $v1, 0x186C($s2)
    ctx->pc = 0x20a020u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6252), (uint8_t)GPR_U32(ctx, 3));
label_20a024:
    // 0x20a024: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x20a024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
label_20a028:
    // 0x20a028: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x20a028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_20a02c:
    // 0x20a02c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20a02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_20a030:
    // 0x20a030: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_20a034:
    if (ctx->pc == 0x20A034u) {
        ctx->pc = 0x20A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A030u;
        // 0x20a034: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A038u;
        goto label_20a038;
    }
    ctx->pc = 0x20A030u;
    {
        const bool branch_taken_0x20a030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A030u;
        // 0x20a034: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a030) {
            ctx->pc = 0x20A148u;
            goto label_20a148;
        }
    }
    ctx->pc = 0x20A038u;
label_20a038:
    // 0x20a038: 0xc0b6dac  jal         func_2DB6B0
label_20a03c:
    if (ctx->pc == 0x20A03Cu) {
        ctx->pc = 0x20A040u;
        goto label_20a040;
    }
    ctx->pc = 0x20A038u;
    SET_GPR_U32(ctx, 31, 0x20A040u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20A038u, 0x20A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A040u;
label_20a040:
    // 0x20a040: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x20a040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_20a044:
    // 0x20a044: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x20a044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_20a048:
    // 0x20a048: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x20a048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_20a04c:
    // 0x20a04c: 0xa0f809  jalr        $a1
label_20a050:
    if (ctx->pc == 0x20A050u) {
        ctx->pc = 0x20A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A04Cu;
        // 0x20a050: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A054u;
        goto label_20a054;
    }
    ctx->pc = 0x20A04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20A054u);
        ctx->pc = 0x20A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A04Cu;
        // 0x20a050: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A04Cu, 0x20A054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A054u;
label_20a054:
    // 0x20a054: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x20a054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_20a058:
    // 0x20a058: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20a058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20a05c:
    // 0x20a05c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x20a05cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_20a060:
    // 0x20a060: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x20a060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_20a064:
    // 0x20a064: 0x40f809  jalr        $v0
label_20a068:
    if (ctx->pc == 0x20A068u) {
        ctx->pc = 0x20A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A064u;
        // 0x20a068: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A06Cu;
        goto label_20a06c;
    }
    ctx->pc = 0x20A064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A06Cu);
        ctx->pc = 0x20A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A064u;
        // 0x20a068: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A064u, 0x20A06Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A06Cu;
label_20a06c:
    // 0x20a06c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x20a06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_20a070:
    // 0x20a070: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x20a070u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_20a074:
    // 0x20a074: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x20a074u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20a078:
    // 0x20a078: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x20a078u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_20a07c:
    // 0x20a07c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x20a07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_20a080:
    // 0x20a080: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x20a080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_20a084:
    // 0x20a084: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x20a084u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20a088:
    // 0x20a088: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x20a088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_20a08c:
    // 0x20a08c: 0xc07df8a  jal         func_1F7E28
label_20a090:
    if (ctx->pc == 0x20A090u) {
        ctx->pc = 0x20A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A08Cu;
        // 0x20a090: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A094u;
        goto label_20a094;
    }
    ctx->pc = 0x20A08Cu;
    SET_GPR_U32(ctx, 31, 0x20A094u);
    ctx->pc = 0x20A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A08Cu;
    // 0x20a090: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x20A08Cu, 0x20A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A094u;
label_20a094:
    // 0x20a094: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x20a094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
label_20a098:
    // 0x20a098: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20a098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20a09c:
    // 0x20a09c: 0x0  nop
    ctx->pc = 0x20a09cu;
    // NOP
label_20a0a0:
    // 0x20a0a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20a0a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20a0a4:
    // 0x20a0a4: 0x0  nop
    ctx->pc = 0x20a0a4u;
    // NOP
label_20a0a8:
    // 0x20a0a8: 0x45000027  bc1f        . + 4 + (0x27 << 2)
label_20a0ac:
    if (ctx->pc == 0x20A0ACu) {
        ctx->pc = 0x20A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0A8u;
        // 0x20a0ac: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0B0u;
        goto label_20a0b0;
    }
    ctx->pc = 0x20A0A8u;
    {
        const bool branch_taken_0x20a0a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0A8u;
        // 0x20a0ac: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0a8) {
            ctx->pc = 0x20A148u;
            goto label_20a148;
        }
    }
    ctx->pc = 0x20A0B0u;
label_20a0b0:
    // 0x20a0b0: 0xc0b6dac  jal         func_2DB6B0
label_20a0b4:
    if (ctx->pc == 0x20A0B4u) {
        ctx->pc = 0x20A0B8u;
        goto label_20a0b8;
    }
    ctx->pc = 0x20A0B0u;
    SET_GPR_U32(ctx, 31, 0x20A0B8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20A0B0u, 0x20A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A0B8u;
label_20a0b8:
    // 0x20a0b8: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x20a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_20a0bc:
    // 0x20a0bc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x20a0bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_20a0c0:
    // 0x20a0c0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x20a0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_20a0c4:
    // 0x20a0c4: 0xa0f809  jalr        $a1
label_20a0c8:
    if (ctx->pc == 0x20A0C8u) {
        ctx->pc = 0x20A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0C4u;
        // 0x20a0c8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0CCu;
        goto label_20a0cc;
    }
    ctx->pc = 0x20A0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20A0CCu);
        ctx->pc = 0x20A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0C4u;
        // 0x20a0c8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A0C4u, 0x20A0CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A0CCu;
label_20a0cc:
    // 0x20a0cc: 0xc0b6dac  jal         func_2DB6B0
label_20a0d0:
    if (ctx->pc == 0x20A0D0u) {
        ctx->pc = 0x20A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0CCu;
        // 0x20a0d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0D4u;
        goto label_20a0d4;
    }
    ctx->pc = 0x20A0CCu;
    SET_GPR_U32(ctx, 31, 0x20A0D4u);
    ctx->pc = 0x20A0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A0CCu;
    // 0x20a0d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20A0CCu, 0x20A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A0D4u;
label_20a0d4:
    // 0x20a0d4: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x20a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_20a0d8:
    // 0x20a0d8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20a0d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20a0dc:
    // 0x20a0dc: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x20a0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20a0e0:
    // 0x20a0e0: 0xa0f809  jalr        $a1
label_20a0e4:
    if (ctx->pc == 0x20A0E4u) {
        ctx->pc = 0x20A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0E0u;
        // 0x20a0e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0E8u;
        goto label_20a0e8;
    }
    ctx->pc = 0x20A0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20A0E8u);
        ctx->pc = 0x20A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0E0u;
        // 0x20a0e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A0E0u, 0x20A0E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A0E8u;
label_20a0e8:
    // 0x20a0e8: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x20a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_20a0ec:
    // 0x20a0ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20a0ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20a0f0:
    // 0x20a0f0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x20a0f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_20a0f4:
    // 0x20a0f4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x20a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_20a0f8:
    // 0x20a0f8: 0x40f809  jalr        $v0
label_20a0fc:
    if (ctx->pc == 0x20A0FCu) {
        ctx->pc = 0x20A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0F8u;
        // 0x20a0fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A100u;
        goto label_20a100;
    }
    ctx->pc = 0x20A0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A100u);
        ctx->pc = 0x20A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0F8u;
        // 0x20a0fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A0F8u, 0x20A100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A100u;
label_20a100:
    // 0x20a100: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x20a100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20a104:
    // 0x20a104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20a104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20a108:
    // 0x20a108: 0x3c013fa7  lui         $at, 0x3FA7
    ctx->pc = 0x20a108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16295 << 16));
label_20a10c:
    // 0x20a10c: 0x34218d36  ori         $at, $at, 0x8D36
    ctx->pc = 0x20a10cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36150);
label_20a110:
    // 0x20a110: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x20a110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20a114:
    // 0x20a114: 0xc0b68b4  jal         func_2DA2D0
label_20a118:
    if (ctx->pc == 0x20A118u) {
        ctx->pc = 0x20A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A114u;
        // 0x20a118: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A11Cu;
        goto label_20a11c;
    }
    ctx->pc = 0x20A114u;
    SET_GPR_U32(ctx, 31, 0x20A11Cu);
    ctx->pc = 0x20A118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A114u;
    // 0x20a118: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2D0u, 0x20A114u, 0x20A11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A11Cu;
label_20a11c:
    // 0x20a11c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_20a120:
    if (ctx->pc == 0x20A120u) {
        ctx->pc = 0x20A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A11Cu;
        // 0x20a120: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A124u;
        goto label_20a124;
    }
    ctx->pc = 0x20A11Cu;
    {
        const bool branch_taken_0x20a11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A11Cu;
        // 0x20a120: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a11c) {
            ctx->pc = 0x20A144u;
            goto label_20a144;
        }
    }
    ctx->pc = 0x20A124u;
label_20a124:
    // 0x20a124: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20a124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20a128:
    // 0x20a128: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x20a128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_20a12c:
    // 0x20a12c: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x20a12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_20a130:
    // 0x20a130: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x20a130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_20a134:
    // 0x20a134: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20a134u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a138:
    // 0x20a138: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20a138u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a13c:
    // 0x20a13c: 0xc07de16  jal         func_1F7858
label_20a140:
    if (ctx->pc == 0x20A140u) {
        ctx->pc = 0x20A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A13Cu;
        // 0x20a140: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A144u;
        goto label_20a144;
    }
    ctx->pc = 0x20A13Cu;
    SET_GPR_U32(ctx, 31, 0x20A144u);
    ctx->pc = 0x20A140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A13Cu;
    // 0x20a140: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x20A13Cu, 0x20A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A144u;
label_20a144:
    // 0x20a144: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x20a144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_20a148:
    // 0x20a148: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x20a148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_20a14c:
    // 0x20a14c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x20a14cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_20a150:
    // 0x20a150: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x20a150u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_20a154:
    // 0x20a154: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x20a154u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_20a158:
    // 0x20a158: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x20a158u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_20a15c:
    // 0x20a15c: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x20a15cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_20a160:
    // 0x20a160: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x20a160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_20a164:
    // 0x20a164: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x20a164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_20a168:
    // 0x20a168: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x20a168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20a16c:
    // 0x20a16c: 0x3e00008  jr          $ra
label_20a170:
    if (ctx->pc == 0x20A170u) {
        ctx->pc = 0x20A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A16Cu;
        // 0x20a170: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A174u;
        goto label_20a174;
    }
    ctx->pc = 0x20A16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A16Cu;
        // 0x20a170: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A174u;
label_20a174:
    // 0x20a174: 0x0  nop
    ctx->pc = 0x20a174u;
    // NOP
    ctx->pc = 0x20a178u;
}
