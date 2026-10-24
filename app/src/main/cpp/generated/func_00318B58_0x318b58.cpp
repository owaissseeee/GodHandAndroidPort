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

// Function: func_00318B58
// Address: 0x318b58 - 0x319520
void func_00318B58_0x318b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00318B58_0x318b58");
#endif

    switch (ctx->pc) {
        case 0x318b58u: goto label_318b58;
        case 0x318b5cu: goto label_318b5c;
        case 0x318b60u: goto label_318b60;
        case 0x318b64u: goto label_318b64;
        case 0x318b68u: goto label_318b68;
        case 0x318b6cu: goto label_318b6c;
        case 0x318b70u: goto label_318b70;
        case 0x318b74u: goto label_318b74;
        case 0x318b78u: goto label_318b78;
        case 0x318b7cu: goto label_318b7c;
        case 0x318b80u: goto label_318b80;
        case 0x318b84u: goto label_318b84;
        case 0x318b88u: goto label_318b88;
        case 0x318b8cu: goto label_318b8c;
        case 0x318b90u: goto label_318b90;
        case 0x318b94u: goto label_318b94;
        case 0x318b98u: goto label_318b98;
        case 0x318b9cu: goto label_318b9c;
        case 0x318ba0u: goto label_318ba0;
        case 0x318ba4u: goto label_318ba4;
        case 0x318ba8u: goto label_318ba8;
        case 0x318bacu: goto label_318bac;
        case 0x318bb0u: goto label_318bb0;
        case 0x318bb4u: goto label_318bb4;
        case 0x318bb8u: goto label_318bb8;
        case 0x318bbcu: goto label_318bbc;
        case 0x318bc0u: goto label_318bc0;
        case 0x318bc4u: goto label_318bc4;
        case 0x318bc8u: goto label_318bc8;
        case 0x318bccu: goto label_318bcc;
        case 0x318bd0u: goto label_318bd0;
        case 0x318bd4u: goto label_318bd4;
        case 0x318bd8u: goto label_318bd8;
        case 0x318bdcu: goto label_318bdc;
        case 0x318be0u: goto label_318be0;
        case 0x318be4u: goto label_318be4;
        case 0x318be8u: goto label_318be8;
        case 0x318becu: goto label_318bec;
        case 0x318bf0u: goto label_318bf0;
        case 0x318bf4u: goto label_318bf4;
        case 0x318bf8u: goto label_318bf8;
        case 0x318bfcu: goto label_318bfc;
        case 0x318c00u: goto label_318c00;
        case 0x318c04u: goto label_318c04;
        case 0x318c08u: goto label_318c08;
        case 0x318c0cu: goto label_318c0c;
        case 0x318c10u: goto label_318c10;
        case 0x318c14u: goto label_318c14;
        case 0x318c18u: goto label_318c18;
        case 0x318c1cu: goto label_318c1c;
        case 0x318c20u: goto label_318c20;
        case 0x318c24u: goto label_318c24;
        case 0x318c28u: goto label_318c28;
        case 0x318c2cu: goto label_318c2c;
        case 0x318c30u: goto label_318c30;
        case 0x318c34u: goto label_318c34;
        case 0x318c38u: goto label_318c38;
        case 0x318c3cu: goto label_318c3c;
        case 0x318c40u: goto label_318c40;
        case 0x318c44u: goto label_318c44;
        case 0x318c48u: goto label_318c48;
        case 0x318c4cu: goto label_318c4c;
        case 0x318c50u: goto label_318c50;
        case 0x318c54u: goto label_318c54;
        case 0x318c58u: goto label_318c58;
        case 0x318c5cu: goto label_318c5c;
        case 0x318c60u: goto label_318c60;
        case 0x318c64u: goto label_318c64;
        case 0x318c68u: goto label_318c68;
        case 0x318c6cu: goto label_318c6c;
        case 0x318c70u: goto label_318c70;
        case 0x318c74u: goto label_318c74;
        case 0x318c78u: goto label_318c78;
        case 0x318c7cu: goto label_318c7c;
        case 0x318c80u: goto label_318c80;
        case 0x318c84u: goto label_318c84;
        case 0x318c88u: goto label_318c88;
        case 0x318c8cu: goto label_318c8c;
        case 0x318c90u: goto label_318c90;
        case 0x318c94u: goto label_318c94;
        case 0x318c98u: goto label_318c98;
        case 0x318c9cu: goto label_318c9c;
        case 0x318ca0u: goto label_318ca0;
        case 0x318ca4u: goto label_318ca4;
        case 0x318ca8u: goto label_318ca8;
        case 0x318cacu: goto label_318cac;
        case 0x318cb0u: goto label_318cb0;
        case 0x318cb4u: goto label_318cb4;
        case 0x318cb8u: goto label_318cb8;
        case 0x318cbcu: goto label_318cbc;
        case 0x318cc0u: goto label_318cc0;
        case 0x318cc4u: goto label_318cc4;
        case 0x318cc8u: goto label_318cc8;
        case 0x318cccu: goto label_318ccc;
        case 0x318cd0u: goto label_318cd0;
        case 0x318cd4u: goto label_318cd4;
        case 0x318cd8u: goto label_318cd8;
        case 0x318cdcu: goto label_318cdc;
        case 0x318ce0u: goto label_318ce0;
        case 0x318ce4u: goto label_318ce4;
        case 0x318ce8u: goto label_318ce8;
        case 0x318cecu: goto label_318cec;
        case 0x318cf0u: goto label_318cf0;
        case 0x318cf4u: goto label_318cf4;
        case 0x318cf8u: goto label_318cf8;
        case 0x318cfcu: goto label_318cfc;
        case 0x318d00u: goto label_318d00;
        case 0x318d04u: goto label_318d04;
        case 0x318d08u: goto label_318d08;
        case 0x318d0cu: goto label_318d0c;
        case 0x318d10u: goto label_318d10;
        case 0x318d14u: goto label_318d14;
        case 0x318d18u: goto label_318d18;
        case 0x318d1cu: goto label_318d1c;
        case 0x318d20u: goto label_318d20;
        case 0x318d24u: goto label_318d24;
        case 0x318d28u: goto label_318d28;
        case 0x318d2cu: goto label_318d2c;
        case 0x318d30u: goto label_318d30;
        case 0x318d34u: goto label_318d34;
        case 0x318d38u: goto label_318d38;
        case 0x318d3cu: goto label_318d3c;
        case 0x318d40u: goto label_318d40;
        case 0x318d44u: goto label_318d44;
        case 0x318d48u: goto label_318d48;
        case 0x318d4cu: goto label_318d4c;
        case 0x318d50u: goto label_318d50;
        case 0x318d54u: goto label_318d54;
        case 0x318d58u: goto label_318d58;
        case 0x318d5cu: goto label_318d5c;
        case 0x318d60u: goto label_318d60;
        case 0x318d64u: goto label_318d64;
        case 0x318d68u: goto label_318d68;
        case 0x318d6cu: goto label_318d6c;
        case 0x318d70u: goto label_318d70;
        case 0x318d74u: goto label_318d74;
        case 0x318d78u: goto label_318d78;
        case 0x318d7cu: goto label_318d7c;
        case 0x318d80u: goto label_318d80;
        case 0x318d84u: goto label_318d84;
        case 0x318d88u: goto label_318d88;
        case 0x318d8cu: goto label_318d8c;
        case 0x318d90u: goto label_318d90;
        case 0x318d94u: goto label_318d94;
        case 0x318d98u: goto label_318d98;
        case 0x318d9cu: goto label_318d9c;
        case 0x318da0u: goto label_318da0;
        case 0x318da4u: goto label_318da4;
        case 0x318da8u: goto label_318da8;
        case 0x318dacu: goto label_318dac;
        case 0x318db0u: goto label_318db0;
        case 0x318db4u: goto label_318db4;
        case 0x318db8u: goto label_318db8;
        case 0x318dbcu: goto label_318dbc;
        case 0x318dc0u: goto label_318dc0;
        case 0x318dc4u: goto label_318dc4;
        case 0x318dc8u: goto label_318dc8;
        case 0x318dccu: goto label_318dcc;
        case 0x318dd0u: goto label_318dd0;
        case 0x318dd4u: goto label_318dd4;
        case 0x318dd8u: goto label_318dd8;
        case 0x318ddcu: goto label_318ddc;
        case 0x318de0u: goto label_318de0;
        case 0x318de4u: goto label_318de4;
        case 0x318de8u: goto label_318de8;
        case 0x318decu: goto label_318dec;
        case 0x318df0u: goto label_318df0;
        case 0x318df4u: goto label_318df4;
        case 0x318df8u: goto label_318df8;
        case 0x318dfcu: goto label_318dfc;
        case 0x318e00u: goto label_318e00;
        case 0x318e04u: goto label_318e04;
        case 0x318e08u: goto label_318e08;
        case 0x318e0cu: goto label_318e0c;
        case 0x318e10u: goto label_318e10;
        case 0x318e14u: goto label_318e14;
        case 0x318e18u: goto label_318e18;
        case 0x318e1cu: goto label_318e1c;
        case 0x318e20u: goto label_318e20;
        case 0x318e24u: goto label_318e24;
        case 0x318e28u: goto label_318e28;
        case 0x318e2cu: goto label_318e2c;
        case 0x318e30u: goto label_318e30;
        case 0x318e34u: goto label_318e34;
        case 0x318e38u: goto label_318e38;
        case 0x318e3cu: goto label_318e3c;
        case 0x318e40u: goto label_318e40;
        case 0x318e44u: goto label_318e44;
        case 0x318e48u: goto label_318e48;
        case 0x318e4cu: goto label_318e4c;
        case 0x318e50u: goto label_318e50;
        case 0x318e54u: goto label_318e54;
        case 0x318e58u: goto label_318e58;
        case 0x318e5cu: goto label_318e5c;
        case 0x318e60u: goto label_318e60;
        case 0x318e64u: goto label_318e64;
        case 0x318e68u: goto label_318e68;
        case 0x318e6cu: goto label_318e6c;
        case 0x318e70u: goto label_318e70;
        case 0x318e74u: goto label_318e74;
        case 0x318e78u: goto label_318e78;
        case 0x318e7cu: goto label_318e7c;
        case 0x318e80u: goto label_318e80;
        case 0x318e84u: goto label_318e84;
        case 0x318e88u: goto label_318e88;
        case 0x318e8cu: goto label_318e8c;
        case 0x318e90u: goto label_318e90;
        case 0x318e94u: goto label_318e94;
        case 0x318e98u: goto label_318e98;
        case 0x318e9cu: goto label_318e9c;
        case 0x318ea0u: goto label_318ea0;
        case 0x318ea4u: goto label_318ea4;
        case 0x318ea8u: goto label_318ea8;
        case 0x318eacu: goto label_318eac;
        case 0x318eb0u: goto label_318eb0;
        case 0x318eb4u: goto label_318eb4;
        case 0x318eb8u: goto label_318eb8;
        case 0x318ebcu: goto label_318ebc;
        case 0x318ec0u: goto label_318ec0;
        case 0x318ec4u: goto label_318ec4;
        case 0x318ec8u: goto label_318ec8;
        case 0x318eccu: goto label_318ecc;
        case 0x318ed0u: goto label_318ed0;
        case 0x318ed4u: goto label_318ed4;
        case 0x318ed8u: goto label_318ed8;
        case 0x318edcu: goto label_318edc;
        case 0x318ee0u: goto label_318ee0;
        case 0x318ee4u: goto label_318ee4;
        case 0x318ee8u: goto label_318ee8;
        case 0x318eecu: goto label_318eec;
        case 0x318ef0u: goto label_318ef0;
        case 0x318ef4u: goto label_318ef4;
        case 0x318ef8u: goto label_318ef8;
        case 0x318efcu: goto label_318efc;
        case 0x318f00u: goto label_318f00;
        case 0x318f04u: goto label_318f04;
        case 0x318f08u: goto label_318f08;
        case 0x318f0cu: goto label_318f0c;
        case 0x318f10u: goto label_318f10;
        case 0x318f14u: goto label_318f14;
        case 0x318f18u: goto label_318f18;
        case 0x318f1cu: goto label_318f1c;
        case 0x318f20u: goto label_318f20;
        case 0x318f24u: goto label_318f24;
        case 0x318f28u: goto label_318f28;
        case 0x318f2cu: goto label_318f2c;
        case 0x318f30u: goto label_318f30;
        case 0x318f34u: goto label_318f34;
        case 0x318f38u: goto label_318f38;
        case 0x318f3cu: goto label_318f3c;
        case 0x318f40u: goto label_318f40;
        case 0x318f44u: goto label_318f44;
        case 0x318f48u: goto label_318f48;
        case 0x318f4cu: goto label_318f4c;
        case 0x318f50u: goto label_318f50;
        case 0x318f54u: goto label_318f54;
        case 0x318f58u: goto label_318f58;
        case 0x318f5cu: goto label_318f5c;
        case 0x318f60u: goto label_318f60;
        case 0x318f64u: goto label_318f64;
        case 0x318f68u: goto label_318f68;
        case 0x318f6cu: goto label_318f6c;
        case 0x318f70u: goto label_318f70;
        case 0x318f74u: goto label_318f74;
        case 0x318f78u: goto label_318f78;
        case 0x318f7cu: goto label_318f7c;
        case 0x318f80u: goto label_318f80;
        case 0x318f84u: goto label_318f84;
        case 0x318f88u: goto label_318f88;
        case 0x318f8cu: goto label_318f8c;
        case 0x318f90u: goto label_318f90;
        case 0x318f94u: goto label_318f94;
        case 0x318f98u: goto label_318f98;
        case 0x318f9cu: goto label_318f9c;
        case 0x318fa0u: goto label_318fa0;
        case 0x318fa4u: goto label_318fa4;
        case 0x318fa8u: goto label_318fa8;
        case 0x318facu: goto label_318fac;
        case 0x318fb0u: goto label_318fb0;
        case 0x318fb4u: goto label_318fb4;
        case 0x318fb8u: goto label_318fb8;
        case 0x318fbcu: goto label_318fbc;
        case 0x318fc0u: goto label_318fc0;
        case 0x318fc4u: goto label_318fc4;
        case 0x318fc8u: goto label_318fc8;
        case 0x318fccu: goto label_318fcc;
        case 0x318fd0u: goto label_318fd0;
        case 0x318fd4u: goto label_318fd4;
        case 0x318fd8u: goto label_318fd8;
        case 0x318fdcu: goto label_318fdc;
        case 0x318fe0u: goto label_318fe0;
        case 0x318fe4u: goto label_318fe4;
        case 0x318fe8u: goto label_318fe8;
        case 0x318fecu: goto label_318fec;
        case 0x318ff0u: goto label_318ff0;
        case 0x318ff4u: goto label_318ff4;
        case 0x318ff8u: goto label_318ff8;
        case 0x318ffcu: goto label_318ffc;
        case 0x319000u: goto label_319000;
        case 0x319004u: goto label_319004;
        case 0x319008u: goto label_319008;
        case 0x31900cu: goto label_31900c;
        case 0x319010u: goto label_319010;
        case 0x319014u: goto label_319014;
        case 0x319018u: goto label_319018;
        case 0x31901cu: goto label_31901c;
        case 0x319020u: goto label_319020;
        case 0x319024u: goto label_319024;
        case 0x319028u: goto label_319028;
        case 0x31902cu: goto label_31902c;
        case 0x319030u: goto label_319030;
        case 0x319034u: goto label_319034;
        case 0x319038u: goto label_319038;
        case 0x31903cu: goto label_31903c;
        case 0x319040u: goto label_319040;
        case 0x319044u: goto label_319044;
        case 0x319048u: goto label_319048;
        case 0x31904cu: goto label_31904c;
        case 0x319050u: goto label_319050;
        case 0x319054u: goto label_319054;
        case 0x319058u: goto label_319058;
        case 0x31905cu: goto label_31905c;
        case 0x319060u: goto label_319060;
        case 0x319064u: goto label_319064;
        case 0x319068u: goto label_319068;
        case 0x31906cu: goto label_31906c;
        case 0x319070u: goto label_319070;
        case 0x319074u: goto label_319074;
        case 0x319078u: goto label_319078;
        case 0x31907cu: goto label_31907c;
        case 0x319080u: goto label_319080;
        case 0x319084u: goto label_319084;
        case 0x319088u: goto label_319088;
        case 0x31908cu: goto label_31908c;
        case 0x319090u: goto label_319090;
        case 0x319094u: goto label_319094;
        case 0x319098u: goto label_319098;
        case 0x31909cu: goto label_31909c;
        case 0x3190a0u: goto label_3190a0;
        case 0x3190a4u: goto label_3190a4;
        case 0x3190a8u: goto label_3190a8;
        case 0x3190acu: goto label_3190ac;
        case 0x3190b0u: goto label_3190b0;
        case 0x3190b4u: goto label_3190b4;
        case 0x3190b8u: goto label_3190b8;
        case 0x3190bcu: goto label_3190bc;
        case 0x3190c0u: goto label_3190c0;
        case 0x3190c4u: goto label_3190c4;
        case 0x3190c8u: goto label_3190c8;
        case 0x3190ccu: goto label_3190cc;
        case 0x3190d0u: goto label_3190d0;
        case 0x3190d4u: goto label_3190d4;
        case 0x3190d8u: goto label_3190d8;
        case 0x3190dcu: goto label_3190dc;
        case 0x3190e0u: goto label_3190e0;
        case 0x3190e4u: goto label_3190e4;
        case 0x3190e8u: goto label_3190e8;
        case 0x3190ecu: goto label_3190ec;
        case 0x3190f0u: goto label_3190f0;
        case 0x3190f4u: goto label_3190f4;
        case 0x3190f8u: goto label_3190f8;
        case 0x3190fcu: goto label_3190fc;
        case 0x319100u: goto label_319100;
        case 0x319104u: goto label_319104;
        case 0x319108u: goto label_319108;
        case 0x31910cu: goto label_31910c;
        case 0x319110u: goto label_319110;
        case 0x319114u: goto label_319114;
        case 0x319118u: goto label_319118;
        case 0x31911cu: goto label_31911c;
        case 0x319120u: goto label_319120;
        case 0x319124u: goto label_319124;
        case 0x319128u: goto label_319128;
        case 0x31912cu: goto label_31912c;
        case 0x319130u: goto label_319130;
        case 0x319134u: goto label_319134;
        case 0x319138u: goto label_319138;
        case 0x31913cu: goto label_31913c;
        case 0x319140u: goto label_319140;
        case 0x319144u: goto label_319144;
        case 0x319148u: goto label_319148;
        case 0x31914cu: goto label_31914c;
        case 0x319150u: goto label_319150;
        case 0x319154u: goto label_319154;
        case 0x319158u: goto label_319158;
        case 0x31915cu: goto label_31915c;
        case 0x319160u: goto label_319160;
        case 0x319164u: goto label_319164;
        case 0x319168u: goto label_319168;
        case 0x31916cu: goto label_31916c;
        case 0x319170u: goto label_319170;
        case 0x319174u: goto label_319174;
        case 0x319178u: goto label_319178;
        case 0x31917cu: goto label_31917c;
        case 0x319180u: goto label_319180;
        case 0x319184u: goto label_319184;
        case 0x319188u: goto label_319188;
        case 0x31918cu: goto label_31918c;
        case 0x319190u: goto label_319190;
        case 0x319194u: goto label_319194;
        case 0x319198u: goto label_319198;
        case 0x31919cu: goto label_31919c;
        case 0x3191a0u: goto label_3191a0;
        case 0x3191a4u: goto label_3191a4;
        case 0x3191a8u: goto label_3191a8;
        case 0x3191acu: goto label_3191ac;
        case 0x3191b0u: goto label_3191b0;
        case 0x3191b4u: goto label_3191b4;
        case 0x3191b8u: goto label_3191b8;
        case 0x3191bcu: goto label_3191bc;
        case 0x3191c0u: goto label_3191c0;
        case 0x3191c4u: goto label_3191c4;
        case 0x3191c8u: goto label_3191c8;
        case 0x3191ccu: goto label_3191cc;
        case 0x3191d0u: goto label_3191d0;
        case 0x3191d4u: goto label_3191d4;
        case 0x3191d8u: goto label_3191d8;
        case 0x3191dcu: goto label_3191dc;
        case 0x3191e0u: goto label_3191e0;
        case 0x3191e4u: goto label_3191e4;
        case 0x3191e8u: goto label_3191e8;
        case 0x3191ecu: goto label_3191ec;
        case 0x3191f0u: goto label_3191f0;
        case 0x3191f4u: goto label_3191f4;
        case 0x3191f8u: goto label_3191f8;
        case 0x3191fcu: goto label_3191fc;
        case 0x319200u: goto label_319200;
        case 0x319204u: goto label_319204;
        case 0x319208u: goto label_319208;
        case 0x31920cu: goto label_31920c;
        case 0x319210u: goto label_319210;
        case 0x319214u: goto label_319214;
        case 0x319218u: goto label_319218;
        case 0x31921cu: goto label_31921c;
        case 0x319220u: goto label_319220;
        case 0x319224u: goto label_319224;
        case 0x319228u: goto label_319228;
        case 0x31922cu: goto label_31922c;
        case 0x319230u: goto label_319230;
        case 0x319234u: goto label_319234;
        case 0x319238u: goto label_319238;
        case 0x31923cu: goto label_31923c;
        case 0x319240u: goto label_319240;
        case 0x319244u: goto label_319244;
        case 0x319248u: goto label_319248;
        case 0x31924cu: goto label_31924c;
        case 0x319250u: goto label_319250;
        case 0x319254u: goto label_319254;
        case 0x319258u: goto label_319258;
        case 0x31925cu: goto label_31925c;
        case 0x319260u: goto label_319260;
        case 0x319264u: goto label_319264;
        case 0x319268u: goto label_319268;
        case 0x31926cu: goto label_31926c;
        case 0x319270u: goto label_319270;
        case 0x319274u: goto label_319274;
        case 0x319278u: goto label_319278;
        case 0x31927cu: goto label_31927c;
        case 0x319280u: goto label_319280;
        case 0x319284u: goto label_319284;
        case 0x319288u: goto label_319288;
        case 0x31928cu: goto label_31928c;
        case 0x319290u: goto label_319290;
        case 0x319294u: goto label_319294;
        case 0x319298u: goto label_319298;
        case 0x31929cu: goto label_31929c;
        case 0x3192a0u: goto label_3192a0;
        case 0x3192a4u: goto label_3192a4;
        case 0x3192a8u: goto label_3192a8;
        case 0x3192acu: goto label_3192ac;
        case 0x3192b0u: goto label_3192b0;
        case 0x3192b4u: goto label_3192b4;
        case 0x3192b8u: goto label_3192b8;
        case 0x3192bcu: goto label_3192bc;
        case 0x3192c0u: goto label_3192c0;
        case 0x3192c4u: goto label_3192c4;
        case 0x3192c8u: goto label_3192c8;
        case 0x3192ccu: goto label_3192cc;
        case 0x3192d0u: goto label_3192d0;
        case 0x3192d4u: goto label_3192d4;
        case 0x3192d8u: goto label_3192d8;
        case 0x3192dcu: goto label_3192dc;
        case 0x3192e0u: goto label_3192e0;
        case 0x3192e4u: goto label_3192e4;
        case 0x3192e8u: goto label_3192e8;
        case 0x3192ecu: goto label_3192ec;
        case 0x3192f0u: goto label_3192f0;
        case 0x3192f4u: goto label_3192f4;
        case 0x3192f8u: goto label_3192f8;
        case 0x3192fcu: goto label_3192fc;
        case 0x319300u: goto label_319300;
        case 0x319304u: goto label_319304;
        case 0x319308u: goto label_319308;
        case 0x31930cu: goto label_31930c;
        case 0x319310u: goto label_319310;
        case 0x319314u: goto label_319314;
        case 0x319318u: goto label_319318;
        case 0x31931cu: goto label_31931c;
        case 0x319320u: goto label_319320;
        case 0x319324u: goto label_319324;
        case 0x319328u: goto label_319328;
        case 0x31932cu: goto label_31932c;
        case 0x319330u: goto label_319330;
        case 0x319334u: goto label_319334;
        case 0x319338u: goto label_319338;
        case 0x31933cu: goto label_31933c;
        case 0x319340u: goto label_319340;
        case 0x319344u: goto label_319344;
        case 0x319348u: goto label_319348;
        case 0x31934cu: goto label_31934c;
        case 0x319350u: goto label_319350;
        case 0x319354u: goto label_319354;
        case 0x319358u: goto label_319358;
        case 0x31935cu: goto label_31935c;
        case 0x319360u: goto label_319360;
        case 0x319364u: goto label_319364;
        case 0x319368u: goto label_319368;
        case 0x31936cu: goto label_31936c;
        case 0x319370u: goto label_319370;
        case 0x319374u: goto label_319374;
        case 0x319378u: goto label_319378;
        case 0x31937cu: goto label_31937c;
        case 0x319380u: goto label_319380;
        case 0x319384u: goto label_319384;
        case 0x319388u: goto label_319388;
        case 0x31938cu: goto label_31938c;
        case 0x319390u: goto label_319390;
        case 0x319394u: goto label_319394;
        case 0x319398u: goto label_319398;
        case 0x31939cu: goto label_31939c;
        case 0x3193a0u: goto label_3193a0;
        case 0x3193a4u: goto label_3193a4;
        case 0x3193a8u: goto label_3193a8;
        case 0x3193acu: goto label_3193ac;
        case 0x3193b0u: goto label_3193b0;
        case 0x3193b4u: goto label_3193b4;
        case 0x3193b8u: goto label_3193b8;
        case 0x3193bcu: goto label_3193bc;
        case 0x3193c0u: goto label_3193c0;
        case 0x3193c4u: goto label_3193c4;
        case 0x3193c8u: goto label_3193c8;
        case 0x3193ccu: goto label_3193cc;
        case 0x3193d0u: goto label_3193d0;
        case 0x3193d4u: goto label_3193d4;
        case 0x3193d8u: goto label_3193d8;
        case 0x3193dcu: goto label_3193dc;
        case 0x3193e0u: goto label_3193e0;
        case 0x3193e4u: goto label_3193e4;
        case 0x3193e8u: goto label_3193e8;
        case 0x3193ecu: goto label_3193ec;
        case 0x3193f0u: goto label_3193f0;
        case 0x3193f4u: goto label_3193f4;
        case 0x3193f8u: goto label_3193f8;
        case 0x3193fcu: goto label_3193fc;
        case 0x319400u: goto label_319400;
        case 0x319404u: goto label_319404;
        case 0x319408u: goto label_319408;
        case 0x31940cu: goto label_31940c;
        case 0x319410u: goto label_319410;
        case 0x319414u: goto label_319414;
        case 0x319418u: goto label_319418;
        case 0x31941cu: goto label_31941c;
        case 0x319420u: goto label_319420;
        case 0x319424u: goto label_319424;
        case 0x319428u: goto label_319428;
        case 0x31942cu: goto label_31942c;
        case 0x319430u: goto label_319430;
        case 0x319434u: goto label_319434;
        case 0x319438u: goto label_319438;
        case 0x31943cu: goto label_31943c;
        case 0x319440u: goto label_319440;
        case 0x319444u: goto label_319444;
        case 0x319448u: goto label_319448;
        case 0x31944cu: goto label_31944c;
        case 0x319450u: goto label_319450;
        case 0x319454u: goto label_319454;
        case 0x319458u: goto label_319458;
        case 0x31945cu: goto label_31945c;
        case 0x319460u: goto label_319460;
        case 0x319464u: goto label_319464;
        case 0x319468u: goto label_319468;
        case 0x31946cu: goto label_31946c;
        case 0x319470u: goto label_319470;
        case 0x319474u: goto label_319474;
        case 0x319478u: goto label_319478;
        case 0x31947cu: goto label_31947c;
        case 0x319480u: goto label_319480;
        case 0x319484u: goto label_319484;
        case 0x319488u: goto label_319488;
        case 0x31948cu: goto label_31948c;
        case 0x319490u: goto label_319490;
        case 0x319494u: goto label_319494;
        case 0x319498u: goto label_319498;
        case 0x31949cu: goto label_31949c;
        case 0x3194a0u: goto label_3194a0;
        case 0x3194a4u: goto label_3194a4;
        case 0x3194a8u: goto label_3194a8;
        case 0x3194acu: goto label_3194ac;
        case 0x3194b0u: goto label_3194b0;
        case 0x3194b4u: goto label_3194b4;
        case 0x3194b8u: goto label_3194b8;
        case 0x3194bcu: goto label_3194bc;
        case 0x3194c0u: goto label_3194c0;
        case 0x3194c4u: goto label_3194c4;
        case 0x3194c8u: goto label_3194c8;
        case 0x3194ccu: goto label_3194cc;
        case 0x3194d0u: goto label_3194d0;
        case 0x3194d4u: goto label_3194d4;
        case 0x3194d8u: goto label_3194d8;
        case 0x3194dcu: goto label_3194dc;
        case 0x3194e0u: goto label_3194e0;
        case 0x3194e4u: goto label_3194e4;
        case 0x3194e8u: goto label_3194e8;
        case 0x3194ecu: goto label_3194ec;
        case 0x3194f0u: goto label_3194f0;
        case 0x3194f4u: goto label_3194f4;
        case 0x3194f8u: goto label_3194f8;
        case 0x3194fcu: goto label_3194fc;
        case 0x319500u: goto label_319500;
        case 0x319504u: goto label_319504;
        case 0x319508u: goto label_319508;
        case 0x31950cu: goto label_31950c;
        case 0x319510u: goto label_319510;
        case 0x319514u: goto label_319514;
        case 0x319518u: goto label_319518;
        case 0x31951cu: goto label_31951c;
        default: break;
    }

    ctx->pc = 0x318b58u;

label_318b58:
    // 0x318b58: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x318b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_318b5c:
    // 0x318b5c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x318b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
label_318b60:
    // 0x318b60: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x318b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_318b64:
    // 0x318b64: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x318b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_318b68:
    // 0x318b68: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x318b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_318b6c:
    // 0x318b6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x318b6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318b70:
    // 0x318b70: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x318b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_318b74:
    // 0x318b74: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x318b74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_318b78:
    // 0x318b78: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x318b78u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_318b7c:
    // 0x318b7c: 0x24424c38  addiu       $v0, $v0, 0x4C38
    ctx->pc = 0x318b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19512));
label_318b80:
    // 0x318b80: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x318b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_318b84:
    // 0x318b84: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x318b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
label_318b88:
    // 0x318b88: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x318b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_318b8c:
    // 0x318b8c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x318b8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_318b90:
    // 0x318b90: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x318b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_318b94:
    // 0x318b94: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x318b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_318b98:
    // 0x318b98: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x318b98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_318b9c:
    // 0x318b9c: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x318b9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_318ba0:
    // 0x318ba0: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x318ba0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_318ba4:
    // 0x318ba4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x318ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318ba8:
    // 0x318ba8: 0xc4600574  lwc1        $f0, 0x574($v1)
    ctx->pc = 0x318ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318bac:
    // 0x318bac: 0x9282032c  lbu         $v0, 0x32C($s4)
    ctx->pc = 0x318bacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 812)));
label_318bb0:
    // 0x318bb0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_318bb4:
    if (ctx->pc == 0x318BB4u) {
        ctx->pc = 0x318BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318BB0u;
        // 0x318bb4: 0x460105c2  mul.s       $f23, $f0, $f1 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318BB8u;
        goto label_318bb8;
    }
    ctx->pc = 0x318BB0u;
    {
        const bool branch_taken_0x318bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318BB0u;
        // 0x318bb4: 0x460105c2  mul.s       $f23, $f0, $f1 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318bb0) {
            ctx->pc = 0x318BD4u;
            goto label_318bd4;
        }
    }
    ctx->pc = 0x318BB8u;
label_318bb8:
    // 0x318bb8: 0x8e830214  lw          $v1, 0x214($s4)
    ctx->pc = 0x318bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 532)));
label_318bbc:
    // 0x318bbc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x318bbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_318bc0:
    // 0x318bc0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x318bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_318bc4:
    // 0x318bc4: 0x40f809  jalr        $v0
label_318bc8:
    if (ctx->pc == 0x318BC8u) {
        ctx->pc = 0x318BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318BC4u;
        // 0x318bc8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318BCCu;
        goto label_318bcc;
    }
    ctx->pc = 0x318BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x318BCCu);
        ctx->pc = 0x318BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318BC4u;
        // 0x318bc8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318BC4u, 0x318BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x318BCCu;
label_318bcc:
    // 0x318bcc: 0xc0527ae  jal         func_149EB8
label_318bd0:
    if (ctx->pc == 0x318BD0u) {
        ctx->pc = 0x318BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318BCCu;
        // 0x318bd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318BD4u;
        goto label_318bd4;
    }
    ctx->pc = 0x318BCCu;
    SET_GPR_U32(ctx, 31, 0x318BD4u);
    ctx->pc = 0x318BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318BCCu;
    // 0x318bd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x318BCCu, 0x318BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318BD4u;
label_318bd4:
    // 0x318bd4: 0x8e830320  lw          $v1, 0x320($s4)
    ctx->pc = 0x318bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_318bd8:
    // 0x318bd8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x318bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_318bdc:
    // 0x318bdc: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x318bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_318be0:
    // 0x318be0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x318be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_318be4:
    // 0x318be4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_318be8:
    if (ctx->pc == 0x318BE8u) {
        ctx->pc = 0x318BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318BE4u;
        // 0x318be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318BECu;
        goto label_318bec;
    }
    ctx->pc = 0x318BE4u;
    {
        const bool branch_taken_0x318be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318BE4u;
        // 0x318be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318be4) {
            ctx->pc = 0x318C1Cu;
            goto label_318c1c;
        }
    }
    ctx->pc = 0x318BECu;
label_318bec:
    // 0x318bec: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x318becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
label_318bf0:
    // 0x318bf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x318bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_318bf4:
    // 0x318bf4: 0xc680024c  lwc1        $f0, 0x24C($s4)
    ctx->pc = 0x318bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318bf8:
    // 0x318bf8: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x318bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
label_318bfc:
    // 0x318bfc: 0x34c6100d  ori         $a2, $a2, 0x100D
    ctx->pc = 0x318bfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4109);
label_318c00:
    // 0x318c00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x318c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_318c04:
    // 0x318c04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x318c04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_318c08:
    // 0x318c08: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x318c08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_318c0c:
    // 0x318c0c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x318c0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_318c10:
    // 0x318c10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x318c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_318c14:
    // 0x318c14: 0x1000001b  b           . + 4 + (0x1B << 2)
label_318c18:
    if (ctx->pc == 0x318C18u) {
        ctx->pc = 0x318C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C14u;
        // 0x318c18: 0x2182a  slt         $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C1Cu;
        goto label_318c1c;
    }
    ctx->pc = 0x318C14u;
    {
        const bool branch_taken_0x318c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C14u;
        // 0x318c18: 0x2182a  slt         $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c14) {
            ctx->pc = 0x318C84u;
            goto label_318c84;
        }
    }
    ctx->pc = 0x318C1Cu;
label_318c1c:
    // 0x318c1c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x318c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_318c20:
    // 0x318c20: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x318c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_318c24:
    // 0x318c24: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x318c24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_318c28:
    // 0x318c28: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_318c2c:
    if (ctx->pc == 0x318C2Cu) {
        ctx->pc = 0x318C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C28u;
        // 0x318c2c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C30u;
        goto label_318c30;
    }
    ctx->pc = 0x318C28u;
    {
        const bool branch_taken_0x318c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C28u;
        // 0x318c2c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c28) {
            ctx->pc = 0x318C48u;
            goto label_318c48;
        }
    }
    ctx->pc = 0x318C30u;
label_318c30:
    // 0x318c30: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x318c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_318c34:
    // 0x318c34: 0x34a5000d  ori         $a1, $a1, 0xD
    ctx->pc = 0x318c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13);
label_318c38:
    // 0x318c38: 0xc0c6758  jal         func_319D60
label_318c3c:
    if (ctx->pc == 0x318C3Cu) {
        ctx->pc = 0x318C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C38u;
        // 0x318c3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C40u;
        goto label_318c40;
    }
    ctx->pc = 0x318C38u;
    SET_GPR_U32(ctx, 31, 0x318C40u);
    ctx->pc = 0x318C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318C38u;
    // 0x318c3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319D60u, 0x318C38u, 0x318C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C40u;
label_318c40:
    // 0x318c40: 0x1000002f  b           . + 4 + (0x2F << 2)
label_318c44:
    if (ctx->pc == 0x318C44u) {
        ctx->pc = 0x318C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C40u;
        // 0x318c44: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C48u;
        goto label_318c48;
    }
    ctx->pc = 0x318C40u;
    {
        const bool branch_taken_0x318c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C40u;
        // 0x318c44: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c40) {
            ctx->pc = 0x318D00u;
            goto label_318d00;
        }
    }
    ctx->pc = 0x318C48u;
label_318c48:
    // 0x318c48: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x318c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_318c4c:
    // 0x318c4c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_318c50:
    if (ctx->pc == 0x318C50u) {
        ctx->pc = 0x318C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C4Cu;
        // 0x318c50: 0x30824000  andi        $v0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C54u;
        goto label_318c54;
    }
    ctx->pc = 0x318C4Cu;
    {
        const bool branch_taken_0x318c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C4Cu;
        // 0x318c50: 0x30824000  andi        $v0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c4c) {
            ctx->pc = 0x318C9Cu;
            goto label_318c9c;
        }
    }
    ctx->pc = 0x318C54u;
label_318c54:
    // 0x318c54: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x318c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
label_318c58:
    // 0x318c58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x318c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_318c5c:
    // 0x318c5c: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x318c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
label_318c60:
    // 0x318c60: 0x34c6000d  ori         $a2, $a2, 0xD
    ctx->pc = 0x318c60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
label_318c64:
    // 0x318c64: 0xc680024c  lwc1        $f0, 0x24C($s4)
    ctx->pc = 0x318c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318c68:
    // 0x318c68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x318c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_318c6c:
    // 0x318c6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x318c6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_318c70:
    // 0x318c70: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x318c70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_318c74:
    // 0x318c74: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x318c74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_318c78:
    // 0x318c78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x318c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318c7c:
    // 0x318c7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x318c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_318c80:
    // 0x318c80: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x318c80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_318c84:
    // 0x318c84: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x318c84u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_318c88:
    // 0x318c88: 0x52938  dsll        $a1, $a1, 4
    ctx->pc = 0x318c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
label_318c8c:
    // 0x318c8c: 0xc0c6758  jal         func_319D60
label_318c90:
    if (ctx->pc == 0x318C90u) {
        ctx->pc = 0x318C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C8Cu;
        // 0x318c90: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C94u;
        goto label_318c94;
    }
    ctx->pc = 0x318C8Cu;
    SET_GPR_U32(ctx, 31, 0x318C94u);
    ctx->pc = 0x318C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318C8Cu;
    // 0x318c90: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319D60u, 0x318C8Cu, 0x318C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C94u;
label_318c94:
    // 0x318c94: 0x1000001a  b           . + 4 + (0x1A << 2)
label_318c98:
    if (ctx->pc == 0x318C98u) {
        ctx->pc = 0x318C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C94u;
        // 0x318c98: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C9Cu;
        goto label_318c9c;
    }
    ctx->pc = 0x318C94u;
    {
        const bool branch_taken_0x318c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C94u;
        // 0x318c98: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c94) {
            ctx->pc = 0x318D00u;
            goto label_318d00;
        }
    }
    ctx->pc = 0x318C9Cu;
label_318c9c:
    // 0x318c9c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x318c9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_318ca0:
    // 0x318ca0: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_318ca4:
    if (ctx->pc == 0x318CA4u) {
        ctx->pc = 0x318CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CA0u;
        // 0x318ca4: 0xc680024c  lwc1        $f0, 0x24C($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318CA8u;
        goto label_318ca8;
    }
    ctx->pc = 0x318CA0u;
    {
        const bool branch_taken_0x318ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x318ca0) {
            ctx->pc = 0x318CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318CA0u;
            // 0x318ca4: 0xc680024c  lwc1        $f0, 0x24C($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x318CC0u;
            goto label_318cc0;
        }
    }
    ctx->pc = 0x318CA8u;
label_318ca8:
    // 0x318ca8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x318ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_318cac:
    // 0x318cac: 0x34a51001  ori         $a1, $a1, 0x1001
    ctx->pc = 0x318cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4097);
label_318cb0:
    // 0x318cb0: 0xc0c6758  jal         func_319D60
label_318cb4:
    if (ctx->pc == 0x318CB4u) {
        ctx->pc = 0x318CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CB0u;
        // 0x318cb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318CB8u;
        goto label_318cb8;
    }
    ctx->pc = 0x318CB0u;
    SET_GPR_U32(ctx, 31, 0x318CB8u);
    ctx->pc = 0x318CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318CB0u;
    // 0x318cb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319D60u, 0x318CB0u, 0x318CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318CB8u;
label_318cb8:
    // 0x318cb8: 0x10000011  b           . + 4 + (0x11 << 2)
label_318cbc:
    if (ctx->pc == 0x318CBCu) {
        ctx->pc = 0x318CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CB8u;
        // 0x318cbc: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318CC0u;
        goto label_318cc0;
    }
    ctx->pc = 0x318CB8u;
    {
        const bool branch_taken_0x318cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CB8u;
        // 0x318cbc: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318cb8) {
            ctx->pc = 0x318D00u;
            goto label_318d00;
        }
    }
    ctx->pc = 0x318CC0u;
label_318cc0:
    // 0x318cc0: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x318cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
label_318cc4:
    // 0x318cc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x318cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_318cc8:
    // 0x318cc8: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x318cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
label_318ccc:
    // 0x318ccc: 0x34c6100d  ori         $a2, $a2, 0x100D
    ctx->pc = 0x318cccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4109);
label_318cd0:
    // 0x318cd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x318cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_318cd4:
    // 0x318cd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x318cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_318cd8:
    // 0x318cd8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x318cd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_318cdc:
    // 0x318cdc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x318cdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_318ce0:
    // 0x318ce0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x318ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318ce4:
    // 0x318ce4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x318ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_318ce8:
    // 0x318ce8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x318ce8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_318cec:
    // 0x318cec: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x318cecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_318cf0:
    // 0x318cf0: 0x52938  dsll        $a1, $a1, 4
    ctx->pc = 0x318cf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
label_318cf4:
    // 0x318cf4: 0xc0c6758  jal         func_319D60
label_318cf8:
    if (ctx->pc == 0x318CF8u) {
        ctx->pc = 0x318CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CF4u;
        // 0x318cf8: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318CFCu;
        goto label_318cfc;
    }
    ctx->pc = 0x318CF4u;
    SET_GPR_U32(ctx, 31, 0x318CFCu);
    ctx->pc = 0x318CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318CF4u;
    // 0x318cf8: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319D60u, 0x318CF4u, 0x318CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318CFCu;
label_318cfc:
    // 0x318cfc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x318cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_318d00:
    // 0x318d00: 0x3c110800  lui         $s1, 0x800
    ctx->pc = 0x318d00u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)2048 << 16));
label_318d04:
    // 0x318d04: 0x8c627a78  lw          $v0, 0x7A78($v1)
    ctx->pc = 0x318d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31352)));
label_318d08:
    // 0x318d08: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x318d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_318d0c:
    // 0x318d0c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_318d10:
    if (ctx->pc == 0x318D10u) {
        ctx->pc = 0x318D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D0Cu;
        // 0x318d10: 0x24707a78  addiu       $s0, $v1, 0x7A78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 31352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318D14u;
        goto label_318d14;
    }
    ctx->pc = 0x318D0Cu;
    {
        const bool branch_taken_0x318d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D0Cu;
        // 0x318d10: 0x24707a78  addiu       $s0, $v1, 0x7A78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 31352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d0c) {
            ctx->pc = 0x318DF0u;
            goto label_318df0;
        }
    }
    ctx->pc = 0x318D14u;
label_318d14:
    // 0x318d14: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x318d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_318d18:
    // 0x318d18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x318d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_318d1c:
    // 0x318d1c: 0xa28202b6  sb          $v0, 0x2B6($s4)
    ctx->pc = 0x318d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 694), (uint8_t)GPR_U32(ctx, 2));
label_318d20:
    // 0x318d20: 0xc0c6730  jal         func_319CC0
label_318d24:
    if (ctx->pc == 0x318D24u) {
        ctx->pc = 0x318D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D20u;
        // 0x318d24: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318D28u;
        goto label_318d28;
    }
    ctx->pc = 0x318D20u;
    SET_GPR_U32(ctx, 31, 0x318D28u);
    ctx->pc = 0x318D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318D20u;
    // 0x318d24: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319CC0u, 0x318D20u, 0x318D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318D28u;
label_318d28:
    // 0x318d28: 0xc0b6dac  jal         func_2DB6B0
label_318d2c:
    if (ctx->pc == 0x318D2Cu) {
        ctx->pc = 0x318D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D28u;
        // 0x318d2c: 0x9610fffc  lhu         $s0, -0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318D30u;
        goto label_318d30;
    }
    ctx->pc = 0x318D28u;
    SET_GPR_U32(ctx, 31, 0x318D30u);
    ctx->pc = 0x318D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318D28u;
    // 0x318d2c: 0x9610fffc  lhu         $s0, -0x4($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x318D28u, 0x318D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318D30u;
label_318d30:
    // 0x318d30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x318d30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318d34:
    // 0x318d34: 0x8e820350  lw          $v0, 0x350($s4)
    ctx->pc = 0x318d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 848)));
label_318d38:
    // 0x318d38: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x318d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_318d3c:
    // 0x318d3c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_318d40:
    if (ctx->pc == 0x318D40u) {
        ctx->pc = 0x318D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D3Cu;
        // 0x318d40: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318D44u;
        goto label_318d44;
    }
    ctx->pc = 0x318D3Cu;
    {
        const bool branch_taken_0x318d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D3Cu;
        // 0x318d40: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d3c) {
            ctx->pc = 0x318DB4u;
            goto label_318db4;
        }
    }
    ctx->pc = 0x318D44u;
label_318d44:
    // 0x318d44: 0x4490a000  mtc1        $s0, $f20
    ctx->pc = 0x318d44u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_318d48:
    // 0x318d48: 0x0  nop
    ctx->pc = 0x318d48u;
    // NOP
label_318d4c:
    // 0x318d4c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x318d4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_318d50:
    // 0x318d50: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x318d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_318d54:
    // 0x318d54: 0x8c46aff0  lw          $a2, -0x5010($v0)
    ctx->pc = 0x318d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
label_318d58:
    // 0x318d58: 0x26900260  addiu       $s0, $s4, 0x260
    ctx->pc = 0x318d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 608));
label_318d5c:
    // 0x318d5c: 0x26910080  addiu       $s1, $s4, 0x80
    ctx->pc = 0x318d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_318d60:
    // 0x318d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x318d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_318d64:
    // 0x318d64: 0x24c60210  addiu       $a2, $a2, 0x210
    ctx->pc = 0x318d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 528));
label_318d68:
    // 0x318d68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x318d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_318d6c:
    // 0x318d6c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x318d6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_318d70:
    // 0x318d70: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x318d70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_318d74:
    // 0x318d74: 0xc07e41c  jal         func_1F9070
label_318d78:
    if (ctx->pc == 0x318D78u) {
        ctx->pc = 0x318D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D74u;
        // 0x318d78: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318D7Cu;
        goto label_318d7c;
    }
    ctx->pc = 0x318D74u;
    SET_GPR_U32(ctx, 31, 0x318D7Cu);
    ctx->pc = 0x318D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318D74u;
    // 0x318d78: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9070u, 0x318D74u, 0x318D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318D7Cu;
label_318d7c:
    // 0x318d7c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_318d80:
    if (ctx->pc == 0x318D80u) {
        ctx->pc = 0x318D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D7Cu;
        // 0x318d80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318D84u;
        goto label_318d84;
    }
    ctx->pc = 0x318D7Cu;
    {
        const bool branch_taken_0x318d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D7Cu;
        // 0x318d80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d7c) {
            ctx->pc = 0x318DA8u;
            goto label_318da8;
        }
    }
    ctx->pc = 0x318D84u;
label_318d84:
    // 0x318d84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x318d84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_318d88:
    // 0x318d88: 0x8e4600f0  lw          $a2, 0xF0($s2)
    ctx->pc = 0x318d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_318d8c:
    // 0x318d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x318d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_318d90:
    // 0x318d90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x318d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_318d94:
    // 0x318d94: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x318d94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_318d98:
    // 0x318d98: 0xc07e41c  jal         func_1F9070
label_318d9c:
    if (ctx->pc == 0x318D9Cu) {
        ctx->pc = 0x318D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D98u;
        // 0x318d9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318DA0u;
        goto label_318da0;
    }
    ctx->pc = 0x318D98u;
    SET_GPR_U32(ctx, 31, 0x318DA0u);
    ctx->pc = 0x318D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318D98u;
    // 0x318d9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9070u, 0x318D98u, 0x318DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318DA0u;
label_318da0:
    // 0x318da0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_318da4:
    if (ctx->pc == 0x318DA4u) {
        ctx->pc = 0x318DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DA0u;
        // 0x318da4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318DA8u;
        goto label_318da8;
    }
    ctx->pc = 0x318DA0u;
    {
        const bool branch_taken_0x318da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DA0u;
        // 0x318da4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318da0) {
            ctx->pc = 0x318DB0u;
            goto label_318db0;
        }
    }
    ctx->pc = 0x318DA8u;
label_318da8:
    // 0x318da8: 0xc0c6730  jal         func_319CC0
label_318dac:
    if (ctx->pc == 0x318DACu) {
        ctx->pc = 0x318DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DA8u;
        // 0x318dac: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318DB0u;
        goto label_318db0;
    }
    ctx->pc = 0x318DA8u;
    SET_GPR_U32(ctx, 31, 0x318DB0u);
    ctx->pc = 0x318DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318DA8u;
    // 0x318dac: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319CC0u, 0x318DA8u, 0x318DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318DB0u;
label_318db0:
    // 0x318db0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x318db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_318db4:
    // 0x318db4: 0x90627a2c  lbu         $v0, 0x7A2C($v1)
    ctx->pc = 0x318db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 31276)));
label_318db8:
    // 0x318db8: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x318db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
label_318dbc:
    // 0x318dbc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_318dc0:
    if (ctx->pc == 0x318DC0u) {
        ctx->pc = 0x318DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DBCu;
        // 0x318dc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318DC4u;
        goto label_318dc4;
    }
    ctx->pc = 0x318DBCu;
    {
        const bool branch_taken_0x318dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DBCu;
        // 0x318dc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318dbc) {
            ctx->pc = 0x318DE0u;
            goto label_318de0;
        }
    }
    ctx->pc = 0x318DC4u;
label_318dc4:
    // 0x318dc4: 0x8e820320  lw          $v0, 0x320($s4)
    ctx->pc = 0x318dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_318dc8:
    // 0x318dc8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x318dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_318dcc:
    // 0x318dcc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x318dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_318dd0:
    // 0x318dd0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x318dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_318dd4:
    // 0x318dd4: 0x106001c5  beqz        $v1, . + 4 + (0x1C5 << 2)
label_318dd8:
    if (ctx->pc == 0x318DD8u) {
        ctx->pc = 0x318DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DD4u;
        // 0x318dd8: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318DDCu;
        goto label_318ddc;
    }
    ctx->pc = 0x318DD4u;
    {
        const bool branch_taken_0x318dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DD4u;
        // 0x318dd8: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318dd4) {
            ctx->pc = 0x3194ECu;
            goto label_3194ec;
        }
    }
    ctx->pc = 0x318DDCu;
label_318ddc:
    // 0x318ddc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x318ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_318de0:
    // 0x318de0: 0xc0c6730  jal         func_319CC0
label_318de4:
    if (ctx->pc == 0x318DE4u) {
        ctx->pc = 0x318DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DE0u;
        // 0x318de4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318DE8u;
        goto label_318de8;
    }
    ctx->pc = 0x318DE0u;
    SET_GPR_U32(ctx, 31, 0x318DE8u);
    ctx->pc = 0x318DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318DE0u;
    // 0x318de4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319CC0u, 0x318DE0u, 0x318DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318DE8u;
label_318de8:
    // 0x318de8: 0x100001c0  b           . + 4 + (0x1C0 << 2)
label_318dec:
    if (ctx->pc == 0x318DECu) {
        ctx->pc = 0x318DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DE8u;
        // 0x318dec: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318DF0u;
        goto label_318df0;
    }
    ctx->pc = 0x318DE8u;
    {
        const bool branch_taken_0x318de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DE8u;
        // 0x318dec: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318de8) {
            ctx->pc = 0x3194ECu;
            goto label_3194ec;
        }
    }
    ctx->pc = 0x318DF0u;
label_318df0:
    // 0x318df0: 0x8e820350  lw          $v0, 0x350($s4)
    ctx->pc = 0x318df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 848)));
label_318df4:
    // 0x318df4: 0x44001bc  bltz        $v0, . + 4 + (0x1BC << 2)
label_318df8:
    if (ctx->pc == 0x318DF8u) {
        ctx->pc = 0x318DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DF4u;
        // 0x318df8: 0x26454c38  addiu       $a1, $s2, 0x4C38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 19512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318DFCu;
        goto label_318dfc;
    }
    ctx->pc = 0x318DF4u;
    {
        const bool branch_taken_0x318df4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x318DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DF4u;
        // 0x318df8: 0x26454c38  addiu       $a1, $s2, 0x4C38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 19512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318df4) {
            ctx->pc = 0x3194E8u;
            goto label_3194e8;
        }
    }
    ctx->pc = 0x318DFCu;
label_318dfc:
    // 0x318dfc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x318dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_318e00:
    // 0x318e00: 0x18600039  blez        $v1, . + 4 + (0x39 << 2)
label_318e04:
    if (ctx->pc == 0x318E04u) {
        ctx->pc = 0x318E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E00u;
        // 0x318e04: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318E08u;
        goto label_318e08;
    }
    ctx->pc = 0x318E00u;
    {
        const bool branch_taken_0x318e00 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x318E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E00u;
        // 0x318e04: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e00) {
            ctx->pc = 0x318EE8u;
            goto label_318ee8;
        }
    }
    ctx->pc = 0x318E08u;
label_318e08:
    // 0x318e08: 0x8e820320  lw          $v0, 0x320($s4)
    ctx->pc = 0x318e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_318e0c:
    // 0x318e0c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x318e0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_318e10:
    // 0x318e10: 0x0  nop
    ctx->pc = 0x318e10u;
    // NOP
label_318e14:
    // 0x318e14: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x318e14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_318e18:
    // 0x318e18: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x318e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318e1c:
    // 0x318e1c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x318e1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_318e20:
    // 0x318e20: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x318e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_318e24:
    // 0x318e24: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x318e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_318e28:
    // 0x318e28: 0x9043003d  lbu         $v1, 0x3D($v0)
    ctx->pc = 0x318e28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 61)));
label_318e2c:
    // 0x318e2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x318e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_318e30:
    // 0x318e30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x318e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_318e34:
    // 0x318e34: 0x26820310  addiu       $v0, $s4, 0x310
    ctx->pc = 0x318e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
label_318e38:
    // 0x318e38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318e38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318e3c:
    // 0x318e3c: 0x0  nop
    ctx->pc = 0x318e3cu;
    // NOP
label_318e40:
    // 0x318e40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x318e40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_318e44:
    // 0x318e44: 0x0  nop
    ctx->pc = 0x318e44u;
    // NOP
label_318e48:
    // 0x318e48: 0x0  nop
    ctx->pc = 0x318e48u;
    // NOP
label_318e4c:
    // 0x318e4c: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x318e4cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[4]);
label_318e50:
    // 0x318e50: 0x0  nop
    ctx->pc = 0x318e50u;
    // NOP
label_318e54:
    // 0x318e54: 0x0  nop
    ctx->pc = 0x318e54u;
    // NOP
label_318e58:
    // 0x318e58: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x318e58u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
label_318e5c:
    // 0x318e5c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x318e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_318e60:
    // 0x318e60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x318e60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_318e64:
    // 0x318e64: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x318e64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_318e68:
    // 0x318e68: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x318e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_318e6c:
    // 0x318e6c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x318e6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_318e70:
    // 0x318e70: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x318e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_318e74:
    // 0x318e74: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x318e74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_318e78:
    // 0x318e78: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x318e78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_318e7c:
    // 0x318e7c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x318e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_318e80:
    // 0x318e80: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x318e80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_318e84:
    // 0x318e84: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x318e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_318e88:
    // 0x318e88: 0x26840240  addiu       $a0, $s4, 0x240
    ctx->pc = 0x318e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 576));
label_318e8c:
    // 0x318e8c: 0x109d0006  beq         $a0, $sp, . + 4 + (0x6 << 2)
label_318e90:
    if (ctx->pc == 0x318E90u) {
        ctx->pc = 0x318E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E8Cu;
        // 0x318e90: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318E94u;
        goto label_318e94;
    }
    ctx->pc = 0x318E8Cu;
    {
        const bool branch_taken_0x318e8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 29));
        ctx->pc = 0x318E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E8Cu;
        // 0x318e90: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e8c) {
            ctx->pc = 0x318EA8u;
            goto label_318ea8;
        }
    }
    ctx->pc = 0x318E94u;
label_318e94:
    // 0x318e94: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x318e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318e98:
    // 0x318e98: 0xe6800240  swc1        $f0, 0x240($s4)
    ctx->pc = 0x318e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 576), bits); }
label_318e9c:
    // 0x318e9c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x318e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_318ea0:
    // 0x318ea0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x318ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318ea4:
    // 0x318ea4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x318ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_318ea8:
    // 0x318ea8: 0x8e830320  lw          $v1, 0x320($s4)
    ctx->pc = 0x318ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_318eac:
    // 0x318eac: 0x90620035  lbu         $v0, 0x35($v1)
    ctx->pc = 0x318eacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 53)));
label_318eb0:
    // 0x318eb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x318eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_318eb4:
    // 0x318eb4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_318eb8:
    if (ctx->pc == 0x318EB8u) {
        ctx->pc = 0x318EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318EB4u;
        // 0x318eb8: 0xc680031c  lwc1        $f0, 0x31C($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318EBCu;
        goto label_318ebc;
    }
    ctx->pc = 0x318EB4u;
    {
        const bool branch_taken_0x318eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318eb4) {
            ctx->pc = 0x318EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318EB4u;
            // 0x318eb8: 0xc680031c  lwc1        $f0, 0x31C($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x318EE0u;
            goto label_318ee0;
        }
    }
    ctx->pc = 0x318EBCu;
label_318ebc:
    // 0x318ebc: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x318ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318ec0:
    // 0x318ec0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x318ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_318ec4:
    // 0x318ec4: 0xc681031c  lwc1        $f1, 0x31C($s4)
    ctx->pc = 0x318ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318ec8:
    // 0x318ec8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x318ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318ecc:
    // 0x318ecc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x318eccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_318ed0:
    // 0x318ed0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x318ed0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
label_318ed4:
    // 0x318ed4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x318ed4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_318ed8:
    // 0x318ed8: 0x10000030  b           . + 4 + (0x30 << 2)
label_318edc:
    if (ctx->pc == 0x318EDCu) {
        ctx->pc = 0x318EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318ED8u;
        // 0x318edc: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318EE0u;
        goto label_318ee0;
    }
    ctx->pc = 0x318ED8u;
    {
        const bool branch_taken_0x318ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318ED8u;
        // 0x318edc: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ed8) {
            ctx->pc = 0x318F9Cu;
            goto label_318f9c;
        }
    }
    ctx->pc = 0x318EE0u;
label_318ee0:
    // 0x318ee0: 0x1000002e  b           . + 4 + (0x2E << 2)
label_318ee4:
    if (ctx->pc == 0x318EE4u) {
        ctx->pc = 0x318EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318EE0u;
        // 0x318ee4: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318EE8u;
        goto label_318ee8;
    }
    ctx->pc = 0x318EE0u;
    {
        const bool branch_taken_0x318ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318EE0u;
        // 0x318ee4: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ee0) {
            ctx->pc = 0x318F9Cu;
            goto label_318f9c;
        }
    }
    ctx->pc = 0x318EE8u;
label_318ee8:
    // 0x318ee8: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x318ee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_318eec:
    // 0x318eec: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_318ef0:
    if (ctx->pc == 0x318EF0u) {
        ctx->pc = 0x318EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318EECu;
        // 0x318ef0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318EF4u;
        goto label_318ef4;
    }
    ctx->pc = 0x318EECu;
    {
        const bool branch_taken_0x318eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318EECu;
        // 0x318ef0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318eec) {
            ctx->pc = 0x318F74u;
            goto label_318f74;
        }
    }
    ctx->pc = 0x318EF4u;
label_318ef4:
    // 0x318ef4: 0x8e830320  lw          $v1, 0x320($s4)
    ctx->pc = 0x318ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_318ef8:
    // 0x318ef8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x318ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_318efc:
    // 0x318efc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x318efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_318f00:
    // 0x318f00: 0x26840310  addiu       $a0, $s4, 0x310
    ctx->pc = 0x318f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
label_318f04:
    // 0x318f04: 0x9062003d  lbu         $v0, 0x3D($v1)
    ctx->pc = 0x318f04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 61)));
label_318f08:
    // 0x318f08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x318f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_318f0c:
    // 0x318f0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x318f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_318f10:
    // 0x318f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318f14:
    // 0x318f14: 0x0  nop
    ctx->pc = 0x318f14u;
    // NOP
label_318f18:
    // 0x318f18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x318f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_318f1c:
    // 0x318f1c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x318f1cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
label_318f20:
    // 0x318f20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x318f20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_318f24:
    // 0x318f24: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x318f24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_318f28:
    // 0x318f28: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x318f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_318f2c:
    // 0x318f2c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x318f2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_318f30:
    // 0x318f30: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x318f30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_318f34:
    // 0x318f34: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x318f34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_318f38:
    // 0x318f38: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x318f38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_318f3c:
    // 0x318f3c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x318f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_318f40:
    // 0x318f40: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x318f40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_318f44:
    // 0x318f44: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x318f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_318f48:
    // 0x318f48: 0x26820240  addiu       $v0, $s4, 0x240
    ctx->pc = 0x318f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 576));
label_318f4c:
    // 0x318f4c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
label_318f50:
    if (ctx->pc == 0x318F50u) {
        ctx->pc = 0x318F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F4Cu;
        // 0x318f50: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318F54u;
        goto label_318f54;
    }
    ctx->pc = 0x318F4Cu;
    {
        const bool branch_taken_0x318f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x318F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F4Cu;
        // 0x318f50: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318f4c) {
            ctx->pc = 0x318F68u;
            goto label_318f68;
        }
    }
    ctx->pc = 0x318F54u;
label_318f54:
    // 0x318f54: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x318f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318f58:
    // 0x318f58: 0xe6800240  swc1        $f0, 0x240($s4)
    ctx->pc = 0x318f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 576), bits); }
label_318f5c:
    // 0x318f5c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x318f5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_318f60:
    // 0x318f60: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x318f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318f64:
    // 0x318f64: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x318f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_318f68:
    // 0x318f68: 0xc680031c  lwc1        $f0, 0x31C($s4)
    ctx->pc = 0x318f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318f6c:
    // 0x318f6c: 0x1000000b  b           . + 4 + (0xB << 2)
label_318f70:
    if (ctx->pc == 0x318F70u) {
        ctx->pc = 0x318F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F6Cu;
        // 0x318f70: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318F74u;
        goto label_318f74;
    }
    ctx->pc = 0x318F6Cu;
    {
        const bool branch_taken_0x318f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F6Cu;
        // 0x318f70: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318f6c) {
            ctx->pc = 0x318F9Cu;
            goto label_318f9c;
        }
    }
    ctx->pc = 0x318F74u;
label_318f74:
    // 0x318f74: 0x26830240  addiu       $v1, $s4, 0x240
    ctx->pc = 0x318f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 576));
label_318f78:
    // 0x318f78: 0x26820310  addiu       $v0, $s4, 0x310
    ctx->pc = 0x318f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
label_318f7c:
    // 0x318f7c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_318f80:
    if (ctx->pc == 0x318F80u) {
        ctx->pc = 0x318F84u;
        goto label_318f84;
    }
    ctx->pc = 0x318F7Cu;
    {
        const bool branch_taken_0x318f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x318f7c) {
            ctx->pc = 0x318F9Cu;
            goto label_318f9c;
        }
    }
    ctx->pc = 0x318F84u;
label_318f84:
    // 0x318f84: 0xc6800310  lwc1        $f0, 0x310($s4)
    ctx->pc = 0x318f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318f88:
    // 0x318f88: 0xe6800240  swc1        $f0, 0x240($s4)
    ctx->pc = 0x318f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 576), bits); }
label_318f8c:
    // 0x318f8c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x318f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318f90:
    // 0x318f90: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x318f90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_318f94:
    // 0x318f94: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x318f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318f98:
    // 0x318f98: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x318f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_318f9c:
    // 0x318f9c: 0xc0c665c  jal         func_319970
label_318fa0:
    if (ctx->pc == 0x318FA0u) {
        ctx->pc = 0x318FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F9Cu;
        // 0x318fa0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318FA4u;
        goto label_318fa4;
    }
    ctx->pc = 0x318F9Cu;
    SET_GPR_U32(ctx, 31, 0x318FA4u);
    ctx->pc = 0x318FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318F9Cu;
    // 0x318fa0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319970u, 0x318F9Cu, 0x318FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318FA4u;
label_318fa4:
    // 0x318fa4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x318fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_318fa8:
    // 0x318fa8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x318fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_318fac:
    // 0x318fac: 0x8c62affc  lw          $v0, -0x5004($v1)
    ctx->pc = 0x318facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946812)));
label_318fb0:
    // 0x318fb0: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x318fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_318fb4:
    // 0x318fb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x318fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_318fb8:
    // 0x318fb8: 0xac62affc  sw          $v0, -0x5004($v1)
    ctx->pc = 0x318fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294946812), GPR_U32(ctx, 2));
label_318fbc:
    // 0x318fbc: 0xa28402b6  sb          $a0, 0x2B6($s4)
    ctx->pc = 0x318fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 694), (uint8_t)GPR_U32(ctx, 4));
label_318fc0:
    // 0x318fc0: 0x8e830320  lw          $v1, 0x320($s4)
    ctx->pc = 0x318fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_318fc4:
    // 0x318fc4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x318fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_318fc8:
    // 0x318fc8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x318fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_318fcc:
    // 0x318fcc: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_318fd0:
    if (ctx->pc == 0x318FD0u) {
        ctx->pc = 0x318FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FCCu;
        // 0x318fd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318FD4u;
        goto label_318fd4;
    }
    ctx->pc = 0x318FCCu;
    {
        const bool branch_taken_0x318fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FCCu;
        // 0x318fd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318fcc) {
            ctx->pc = 0x319094u;
            goto label_319094;
        }
    }
    ctx->pc = 0x318FD4u;
label_318fd4:
    // 0x318fd4: 0xc052dbe  jal         func_14B6F8
label_318fd8:
    if (ctx->pc == 0x318FD8u) {
        ctx->pc = 0x318FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FD4u;
        // 0x318fd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318FDCu;
        goto label_318fdc;
    }
    ctx->pc = 0x318FD4u;
    SET_GPR_U32(ctx, 31, 0x318FDCu);
    ctx->pc = 0x318FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318FD4u;
    // 0x318fd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x318FD4u, 0x318FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318FDCu;
label_318fdc:
    // 0x318fdc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x318fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_318fe0:
    // 0x318fe0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x318fe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_318fe4:
    // 0x318fe4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x318fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_318fe8:
    // 0x318fe8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x318fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318fec:
    // 0x318fec: 0x8e8500f0  lw          $a1, 0xF0($s4)
    ctx->pc = 0x318fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
label_318ff0:
    // 0x318ff0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x318ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_318ff4:
    // 0x318ff4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x318ff4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_318ff8:
    // 0x318ff8: 0x8c43aff0  lw          $v1, -0x5010($v0)
    ctx->pc = 0x318ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
label_318ffc:
    // 0x318ffc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x318ffcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_319000:
    // 0x319000: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x319000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_319004:
    // 0x319004: 0x27a700e4  addiu       $a3, $sp, 0xE4
    ctx->pc = 0x319004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_319008:
    // 0x319008: 0xc46d0224  lwc1        $f13, 0x224($v1)
    ctx->pc = 0x319008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_31900c:
    // 0x31900c: 0x24640210  addiu       $a0, $v1, 0x210
    ctx->pc = 0x31900cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
label_319010:
    // 0x319010: 0xc0b691a  jal         func_2DA468
label_319014:
    if (ctx->pc == 0x319014u) {
        ctx->pc = 0x319014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319010u;
        // 0x319014: 0xc46c0220  lwc1        $f12, 0x220($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x319018u;
        goto label_319018;
    }
    ctx->pc = 0x319010u;
    SET_GPR_U32(ctx, 31, 0x319018u);
    ctx->pc = 0x319014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319010u;
    // 0x319014: 0xc46c0220  lwc1        $f12, 0x220($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA468u, 0x319010u, 0x319018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319018u;
label_319018:
    // 0x319018: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x319018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31901c:
    // 0x31901c: 0x26a274a0  addiu       $v0, $s5, 0x74A0
    ctx->pc = 0x31901cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 29856));
label_319020:
    // 0x319020: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x319020u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_319024:
    // 0x319024: 0x0  nop
    ctx->pc = 0x319024u;
    // NOP
label_319028:
    // 0x319028: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x319028u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[20]);
label_31902c:
    // 0x31902c: 0xe6010390  swc1        $f1, 0x390($s0)
    ctx->pc = 0x31902cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 912), bits); }
label_319030:
    // 0x319030: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x319030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319034:
    // 0x319034: 0x0  nop
    ctx->pc = 0x319034u;
    // NOP
label_319038:
    // 0x319038: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x319038u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[20]);
label_31903c:
    // 0x31903c: 0xe600038c  swc1        $f0, 0x38C($s0)
    ctx->pc = 0x31903cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 908), bits); }
label_319040:
    // 0x319040: 0x8c420210  lw          $v0, 0x210($v0)
    ctx->pc = 0x319040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
label_319044:
    // 0x319044: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x319044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_319048:
    // 0x319048: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_31904c:
    if (ctx->pc == 0x31904Cu) {
        ctx->pc = 0x31904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319048u;
        // 0x31904c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319050u;
        goto label_319050;
    }
    ctx->pc = 0x319048u;
    {
        const bool branch_taken_0x319048 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x31904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319048u;
        // 0x31904c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319048) {
            ctx->pc = 0x319064u;
            goto label_319064;
        }
    }
    ctx->pc = 0x319050u;
label_319050:
    // 0x319050: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x319050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_319054:
    // 0x319054: 0x0  nop
    ctx->pc = 0x319054u;
    // NOP
label_319058:
    // 0x319058: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x319058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_31905c:
    // 0x31905c: 0x10000007  b           . + 4 + (0x7 << 2)
label_319060:
    if (ctx->pc == 0x319060u) {
        ctx->pc = 0x319064u;
        goto label_319064;
    }
    ctx->pc = 0x31905Cu;
    {
        const bool branch_taken_0x31905c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31905c) {
            ctx->pc = 0x31907Cu;
            goto label_31907c;
        }
    }
    ctx->pc = 0x319064u;
label_319064:
    // 0x319064: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x319064u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_319068:
    // 0x319068: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x319068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_31906c:
    // 0x31906c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x31906cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_319070:
    // 0x319070: 0x0  nop
    ctx->pc = 0x319070u;
    // NOP
label_319074:
    // 0x319074: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x319074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_319078:
    // 0x319078: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x319078u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_31907c:
    // 0x31907c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x31907cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_319080:
    // 0x319080: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x319080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319084:
    // 0x319084: 0xc6010390  lwc1        $f1, 0x390($s0)
    ctx->pc = 0x319084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319088:
    // 0x319088: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x319088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_31908c:
    // 0x31908c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31908cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319090:
    // 0x319090: 0xe6010390  swc1        $f1, 0x390($s0)
    ctx->pc = 0x319090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 912), bits); }
label_319094:
    // 0x319094: 0x8e820350  lw          $v0, 0x350($s4)
    ctx->pc = 0x319094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 848)));
label_319098:
    // 0x319098: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x319098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_31909c:
    // 0x31909c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31909cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3190a0:
    // 0x3190a0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_3190a4:
    if (ctx->pc == 0x3190A4u) {
        ctx->pc = 0x3190A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3190A0u;
        // 0x3190a4: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3190A8u;
        goto label_3190a8;
    }
    ctx->pc = 0x3190A0u;
    {
        const bool branch_taken_0x3190a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3190A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3190A0u;
        // 0x3190a4: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3190a0) {
            ctx->pc = 0x319114u;
            goto label_319114;
        }
    }
    ctx->pc = 0x3190A8u;
label_3190a8:
    // 0x3190a8: 0x26820340  addiu       $v0, $s4, 0x340
    ctx->pc = 0x3190a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 832));
label_3190ac:
    // 0x3190ac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x3190acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3190b0:
    // 0x3190b0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x3190b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_3190b4:
    // 0x3190b4: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x3190b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3190b8:
    // 0x3190b8: 0x4408b800  mfc1        $t0, $f23
    ctx->pc = 0x3190b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_3190bc:
    // 0x3190bc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x3190bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_3190c0:
    // 0x3190c0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x3190c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3190c4:
    // 0x3190c4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x3190c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_3190c8:
    // 0x3190c8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x3190c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3190cc:
    // 0x3190cc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x3190ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_3190d0:
    // 0x3190d0: 0x26840100  addiu       $a0, $s4, 0x100
    ctx->pc = 0x3190d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
label_3190d4:
    // 0x3190d4: 0xda840100  lqc2        $vf4, 0x100($s4)
    ctx->pc = 0x3190d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 256)));
label_3190d8:
    // 0x3190d8: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x3190d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3190dc:
    // 0x3190dc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3190dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3190e0:
    // 0x3190e0: 0xfa840100  sqc2        $vf4, 0x100($s4)
    ctx->pc = 0x3190e0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 256), _mm_castps_si128(ctx->vu0_vf[4]));
label_3190e4:
    // 0x3190e4: 0xc07df68  jal         func_1F7DA0
label_3190e8:
    if (ctx->pc == 0x3190E8u) {
        ctx->pc = 0x3190ECu;
        goto label_3190ec;
    }
    ctx->pc = 0x3190E4u;
    SET_GPR_U32(ctx, 31, 0x3190ECu);
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x3190E4u, 0x3190ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3190ECu;
label_3190ec:
    // 0x3190ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3190ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3190f0:
    // 0x3190f0: 0xc05404a  jal         func_150128
label_3190f4:
    if (ctx->pc == 0x3190F4u) {
        ctx->pc = 0x3190F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3190F0u;
        // 0x3190f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3190F8u;
        goto label_3190f8;
    }
    ctx->pc = 0x3190F0u;
    SET_GPR_U32(ctx, 31, 0x3190F8u);
    ctx->pc = 0x3190F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3190F0u;
    // 0x3190f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x3190F0u, 0x3190F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3190F8u;
label_3190f8:
    // 0x3190f8: 0x8e820250  lw          $v0, 0x250($s4)
    ctx->pc = 0x3190f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 592)));
label_3190fc:
    // 0x3190fc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x3190fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_319100:
    // 0x319100: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x319100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_319104:
    // 0x319104: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_319108:
    if (ctx->pc == 0x319108u) {
        ctx->pc = 0x319108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319104u;
        // 0x319108: 0x8e820350  lw          $v0, 0x350($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31910Cu;
        goto label_31910c;
    }
    ctx->pc = 0x319104u;
    {
        const bool branch_taken_0x319104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319104) {
            ctx->pc = 0x319108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319104u;
            // 0x319108: 0x8e820350  lw          $v0, 0x350($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319118u;
            goto label_319118;
        }
    }
    ctx->pc = 0x31910Cu;
label_31910c:
    // 0x31910c: 0xc0527ae  jal         func_149EB8
label_319110:
    if (ctx->pc == 0x319110u) {
        ctx->pc = 0x319110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31910Cu;
        // 0x319110: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319114u;
        goto label_319114;
    }
    ctx->pc = 0x31910Cu;
    SET_GPR_U32(ctx, 31, 0x319114u);
    ctx->pc = 0x319110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31910Cu;
    // 0x319110: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x31910Cu, 0x319114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319114u;
label_319114:
    // 0x319114: 0x8e820350  lw          $v0, 0x350($s4)
    ctx->pc = 0x319114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 848)));
label_319118:
    // 0x319118: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x319118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_31911c:
    // 0x31911c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31911cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_319120:
    // 0x319120: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
label_319124:
    if (ctx->pc == 0x319124u) {
        ctx->pc = 0x319124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319120u;
        // 0x319124: 0x8e830320  lw          $v1, 0x320($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319128u;
        goto label_319128;
    }
    ctx->pc = 0x319120u;
    {
        const bool branch_taken_0x319120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319120u;
        // 0x319124: 0x8e830320  lw          $v1, 0x320($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319120) {
            ctx->pc = 0x319284u;
            goto label_319284;
        }
    }
    ctx->pc = 0x319128u;
label_319128:
    // 0x319128: 0x9062004a  lbu         $v0, 0x4A($v1)
    ctx->pc = 0x319128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 74)));
label_31912c:
    // 0x31912c: 0x50400056  beql        $v0, $zero, . + 4 + (0x56 << 2)
label_319130:
    if (ctx->pc == 0x319130u) {
        ctx->pc = 0x319130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31912Cu;
        // 0x319130: 0xdc620038  ld          $v0, 0x38($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319134u;
        goto label_319134;
    }
    ctx->pc = 0x31912Cu;
    {
        const bool branch_taken_0x31912c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31912c) {
            ctx->pc = 0x319130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31912Cu;
            // 0x319130: 0xdc620038  ld          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319288u;
            goto label_319288;
        }
    }
    ctx->pc = 0x319134u;
label_319134:
    // 0x319134: 0x9062004b  lbu         $v0, 0x4B($v1)
    ctx->pc = 0x319134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 75)));
label_319138:
    // 0x319138: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_31913c:
    if (ctx->pc == 0x31913Cu) {
        ctx->pc = 0x31913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319138u;
        // 0x31913c: 0x26a274a0  addiu       $v0, $s5, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 29856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319140u;
        goto label_319140;
    }
    ctx->pc = 0x319138u;
    {
        const bool branch_taken_0x319138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319138u;
        // 0x31913c: 0x26a274a0  addiu       $v0, $s5, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319138) {
            ctx->pc = 0x319284u;
            goto label_319284;
        }
    }
    ctx->pc = 0x319140u;
label_319140:
    // 0x319140: 0x8c420210  lw          $v0, 0x210($v0)
    ctx->pc = 0x319140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
label_319144:
    // 0x319144: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
label_319148:
    if (ctx->pc == 0x319148u) {
        ctx->pc = 0x319148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319144u;
        // 0x319148: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31914Cu;
        goto label_31914c;
    }
    ctx->pc = 0x319144u;
    {
        const bool branch_taken_0x319144 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x319144) {
            ctx->pc = 0x319148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319144u;
            // 0x319148: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319160u;
            goto label_319160;
        }
    }
    ctx->pc = 0x31914Cu;
label_31914c:
    // 0x31914c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x31914cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_319150:
    // 0x319150: 0x0  nop
    ctx->pc = 0x319150u;
    // NOP
label_319154:
    // 0x319154: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x319154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_319158:
    // 0x319158: 0x10000009  b           . + 4 + (0x9 << 2)
label_31915c:
    if (ctx->pc == 0x31915Cu) {
        ctx->pc = 0x31915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319158u;
        // 0x31915c: 0x8c620034  lw          $v0, 0x34($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319160u;
        goto label_319160;
    }
    ctx->pc = 0x319158u;
    {
        const bool branch_taken_0x319158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319158u;
        // 0x31915c: 0x8c620034  lw          $v0, 0x34($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319158) {
            ctx->pc = 0x319180u;
            goto label_319180;
        }
    }
    ctx->pc = 0x319160u;
label_319160:
    // 0x319160: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x319160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_319164:
    // 0x319164: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x319164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_319168:
    // 0x319168: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x319168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_31916c:
    // 0x31916c: 0x0  nop
    ctx->pc = 0x31916cu;
    // NOP
label_319170:
    // 0x319170: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x319170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_319174:
    // 0x319174: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x319174u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_319178:
    // 0x319178: 0x8e830320  lw          $v1, 0x320($s4)
    ctx->pc = 0x319178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_31917c:
    // 0x31917c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x31917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_319180:
    // 0x319180: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x319180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
label_319184:
    // 0x319184: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x319184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_319188:
    // 0x319188: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_31918c:
    if (ctx->pc == 0x31918Cu) {
        ctx->pc = 0x31918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319188u;
        // 0x31918c: 0x9062004a  lbu         $v0, 0x4A($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 74)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319190u;
        goto label_319190;
    }
    ctx->pc = 0x319188u;
    {
        const bool branch_taken_0x319188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319188u;
        // 0x31918c: 0x9062004a  lbu         $v0, 0x4A($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 74)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319188) {
            ctx->pc = 0x3191A0u;
            goto label_3191a0;
        }
    }
    ctx->pc = 0x319190u;
label_319190:
    // 0x319190: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x319190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
label_319194:
    // 0x319194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x319194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319198:
    // 0x319198: 0x0  nop
    ctx->pc = 0x319198u;
    // NOP
label_31919c:
    // 0x31919c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x31919cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3191a0:
    // 0x3191a0: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x3191a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_3191a4:
    // 0x3191a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3191a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3191a8:
    // 0x3191a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3191a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3191ac:
    // 0x3191ac: 0x0  nop
    ctx->pc = 0x3191acu;
    // NOP
label_3191b0:
    // 0x3191b0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x3191b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3191b4:
    // 0x3191b4: 0x9063004b  lbu         $v1, 0x4B($v1)
    ctx->pc = 0x3191b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 75)));
label_3191b8:
    // 0x3191b8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3191b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3191bc:
    // 0x3191bc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3191bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3191c0:
    // 0x3191c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3191c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3191c4:
    // 0x3191c4: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x3191c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3191c8:
    // 0x3191c8: 0x0  nop
    ctx->pc = 0x3191c8u;
    // NOP
label_3191cc:
    // 0x3191cc: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x3191ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3191d0:
    // 0x3191d0: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3191d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_3191d4:
    // 0x3191d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3191d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3191d8:
    // 0x3191d8: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x3191d8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_3191dc:
    // 0x3191dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3191dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3191e0:
    // 0x3191e0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3191e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3191e4:
    // 0x3191e4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x3191e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3191e8:
    // 0x3191e8: 0x0  nop
    ctx->pc = 0x3191e8u;
    // NOP
label_3191ec:
    // 0x3191ec: 0x0  nop
    ctx->pc = 0x3191ecu;
    // NOP
label_3191f0:
    // 0x3191f0: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x3191f0u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
label_3191f4:
    // 0x3191f4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x3191f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_3191f8:
    // 0x3191f8: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x3191f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_3191fc:
    // 0x3191fc: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x3191fcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_319200:
    // 0x319200: 0x46026301  sub.s       $f12, $f12, $f2
    ctx->pc = 0x319200u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
label_319204:
    // 0x319204: 0xc07df52  jal         func_1F7D48
label_319208:
    if (ctx->pc == 0x319208u) {
        ctx->pc = 0x319208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319204u;
        // 0x319208: 0x46036302  mul.s       $f12, $f12, $f3 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31920Cu;
        goto label_31920c;
    }
    ctx->pc = 0x319204u;
    SET_GPR_U32(ctx, 31, 0x31920Cu);
    ctx->pc = 0x319208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319204u;
    // 0x319208: 0x46036302  mul.s       $f12, $f12, $f3 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x319204u, 0x31920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31920Cu;
label_31920c:
    // 0x31920c: 0xc07dfee  jal         func_1F7FB8
label_319210:
    if (ctx->pc == 0x319210u) {
        ctx->pc = 0x319210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31920Cu;
        // 0x319210: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319214u;
        goto label_319214;
    }
    ctx->pc = 0x31920Cu;
    SET_GPR_U32(ctx, 31, 0x319214u);
    ctx->pc = 0x319210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31920Cu;
    // 0x319210: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x31920Cu, 0x319214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319214u;
label_319214:
    // 0x319214: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x319214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_319218:
    // 0x319218: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x319218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31921c:
    // 0x31921c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x31921cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_319220:
    // 0x319220: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x319220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_319224:
    // 0x319224: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x319224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319228:
    // 0x319228: 0x0  nop
    ctx->pc = 0x319228u;
    // NOP
label_31922c:
    // 0x31922c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_319230:
    if (ctx->pc == 0x319230u) {
        ctx->pc = 0x319230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31922Cu;
        // 0x319230: 0xe7a200e8  swc1        $f2, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x319234u;
        goto label_319234;
    }
    ctx->pc = 0x31922Cu;
    {
        const bool branch_taken_0x31922c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31922Cu;
        // 0x319230: 0xe7a200e8  swc1        $f2, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31922c) {
            ctx->pc = 0x319238u;
            goto label_319238;
        }
    }
    ctx->pc = 0x319234u;
label_319234:
    // 0x319234: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x319234u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_319238:
    // 0x319238: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x319238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31923c:
    // 0x31923c: 0x0  nop
    ctx->pc = 0x31923cu;
    // NOP
label_319240:
    // 0x319240: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_319244:
    if (ctx->pc == 0x319244u) {
        ctx->pc = 0x319244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319240u;
        // 0x319244: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319248u;
        goto label_319248;
    }
    ctx->pc = 0x319240u;
    {
        const bool branch_taken_0x319240 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319240u;
        // 0x319244: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319240) {
            ctx->pc = 0x31924Cu;
            goto label_31924c;
        }
    }
    ctx->pc = 0x319248u;
label_319248:
    // 0x319248: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x319248u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_31924c:
    // 0x31924c: 0x8e830320  lw          $v1, 0x320($s4)
    ctx->pc = 0x31924cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_319250:
    // 0x319250: 0x90620034  lbu         $v0, 0x34($v1)
    ctx->pc = 0x319250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
label_319254:
    // 0x319254: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x319254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
label_319258:
    // 0x319258: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_31925c:
    if (ctx->pc == 0x31925Cu) {
        ctx->pc = 0x31925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319258u;
        // 0x31925c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319260u;
        goto label_319260;
    }
    ctx->pc = 0x319258u;
    {
        const bool branch_taken_0x319258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319258u;
        // 0x31925c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319258) {
            ctx->pc = 0x319274u;
            goto label_319274;
        }
    }
    ctx->pc = 0x319260u;
label_319260:
    // 0x319260: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x319260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319264:
    // 0x319264: 0x0  nop
    ctx->pc = 0x319264u;
    // NOP
label_319268:
    // 0x319268: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_31926c:
    if (ctx->pc == 0x31926Cu) {
        ctx->pc = 0x31926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319268u;
        // 0x31926c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319270u;
        goto label_319270;
    }
    ctx->pc = 0x319268u;
    {
        const bool branch_taken_0x319268 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319268u;
        // 0x31926c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319268) {
            ctx->pc = 0x319274u;
            goto label_319274;
        }
    }
    ctx->pc = 0x319270u;
label_319270:
    // 0x319270: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x319270u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_319274:
    // 0x319274: 0xe6800310  swc1        $f0, 0x310($s4)
    ctx->pc = 0x319274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 784), bits); }
label_319278:
    // 0x319278: 0xe6800318  swc1        $f0, 0x318($s4)
    ctx->pc = 0x319278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 792), bits); }
label_31927c:
    // 0x31927c: 0xe6800314  swc1        $f0, 0x314($s4)
    ctx->pc = 0x31927cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 788), bits); }
label_319280:
    // 0x319280: 0x8e830320  lw          $v1, 0x320($s4)
    ctx->pc = 0x319280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_319284:
    // 0x319284: 0xdc620038  ld          $v0, 0x38($v1)
    ctx->pc = 0x319284u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 56)));
label_319288:
    // 0x319288: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x319288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
label_31928c:
    // 0x31928c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31928cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_319290:
    // 0x319290: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x319290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_319294:
    // 0x319294: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_319298:
    if (ctx->pc == 0x319298u) {
        ctx->pc = 0x319298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319294u;
        // 0x319298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31929Cu;
        goto label_31929c;
    }
    ctx->pc = 0x319294u;
    {
        const bool branch_taken_0x319294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319294u;
        // 0x319298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319294) {
            ctx->pc = 0x3192C0u;
            goto label_3192c0;
        }
    }
    ctx->pc = 0x31929Cu;
label_31929c:
    // 0x31929c: 0xc052dbe  jal         func_14B6F8
label_3192a0:
    if (ctx->pc == 0x3192A0u) {
        ctx->pc = 0x3192A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31929Cu;
        // 0x3192a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3192A4u;
        goto label_3192a4;
    }
    ctx->pc = 0x31929Cu;
    SET_GPR_U32(ctx, 31, 0x3192A4u);
    ctx->pc = 0x3192A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31929Cu;
    // 0x3192a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x31929Cu, 0x3192A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3192A4u;
label_3192a4:
    // 0x3192a4: 0x8e830320  lw          $v1, 0x320($s4)
    ctx->pc = 0x3192a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_3192a8:
    // 0x3192a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3192a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3192ac:
    // 0x3192ac: 0xdc650038  ld          $a1, 0x38($v1)
    ctx->pc = 0x3192acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 56)));
label_3192b0:
    // 0x3192b0: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x3192b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
label_3192b4:
    // 0x3192b4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3192b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3192b8:
    // 0x3192b8: 0xc0523ca  jal         func_148F28
label_3192bc:
    if (ctx->pc == 0x3192BCu) {
        ctx->pc = 0x3192BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192B8u;
        // 0x3192bc: 0x30a5000f  andi        $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3192C0u;
        goto label_3192c0;
    }
    ctx->pc = 0x3192B8u;
    SET_GPR_U32(ctx, 31, 0x3192C0u);
    ctx->pc = 0x3192BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3192B8u;
    // 0x3192bc: 0x30a5000f  andi        $a1, $a1, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x148F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148F28u, 0x3192B8u, 0x3192C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3192C0u;
label_3192c0:
    // 0x3192c0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3192c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3192c4:
    // 0x3192c4: 0x26a374a0  addiu       $v1, $s5, 0x74A0
    ctx->pc = 0x3192c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 29856));
label_3192c8:
    // 0x3192c8: 0xa28202be  sb          $v0, 0x2BE($s4)
    ctx->pc = 0x3192c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 702), (uint8_t)GPR_U32(ctx, 2));
label_3192cc:
    // 0x3192cc: 0xc0b6dac  jal         func_2DB6B0
label_3192d0:
    if (ctx->pc == 0x3192D0u) {
        ctx->pc = 0x3192D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192CCu;
        // 0x3192d0: 0x947005d4  lhu         $s0, 0x5D4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1492)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3192D4u;
        goto label_3192d4;
    }
    ctx->pc = 0x3192CCu;
    SET_GPR_U32(ctx, 31, 0x3192D4u);
    ctx->pc = 0x3192D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3192CCu;
    // 0x3192d0: 0x947005d4  lhu         $s0, 0x5D4($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1492)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x3192CCu, 0x3192D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3192D4u;
label_3192d4:
    // 0x3192d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3192d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3192d8:
    // 0x3192d8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3192d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_3192dc:
    // 0x3192dc: 0x8e820350  lw          $v0, 0x350($s4)
    ctx->pc = 0x3192dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 848)));
label_3192e0:
    // 0x3192e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3192e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3192e4:
    // 0x3192e4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_3192e8:
    if (ctx->pc == 0x3192E8u) {
        ctx->pc = 0x3192E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192E4u;
        // 0x3192e8: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3192ECu;
        goto label_3192ec;
    }
    ctx->pc = 0x3192E4u;
    {
        const bool branch_taken_0x3192e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3192E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192E4u;
        // 0x3192e8: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3192e4) {
            ctx->pc = 0x319358u;
            goto label_319358;
        }
    }
    ctx->pc = 0x3192ECu;
label_3192ec:
    // 0x3192ec: 0x4490a000  mtc1        $s0, $f20
    ctx->pc = 0x3192ecu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3192f0:
    // 0x3192f0: 0x0  nop
    ctx->pc = 0x3192f0u;
    // NOP
label_3192f4:
    // 0x3192f4: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x3192f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3192f8:
    // 0x3192f8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3192f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_3192fc:
    // 0x3192fc: 0x8c46aff0  lw          $a2, -0x5010($v0)
    ctx->pc = 0x3192fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
label_319300:
    // 0x319300: 0x26900260  addiu       $s0, $s4, 0x260
    ctx->pc = 0x319300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 608));
label_319304:
    // 0x319304: 0x26910080  addiu       $s1, $s4, 0x80
    ctx->pc = 0x319304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_319308:
    // 0x319308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x319308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31930c:
    // 0x31930c: 0x24c60210  addiu       $a2, $a2, 0x210
    ctx->pc = 0x31930cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 528));
label_319310:
    // 0x319310: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x319310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_319314:
    // 0x319314: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x319314u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_319318:
    // 0x319318: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x319318u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_31931c:
    // 0x31931c: 0xc07e41c  jal         func_1F9070
label_319320:
    if (ctx->pc == 0x319320u) {
        ctx->pc = 0x319320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31931Cu;
        // 0x319320: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319324u;
        goto label_319324;
    }
    ctx->pc = 0x31931Cu;
    SET_GPR_U32(ctx, 31, 0x319324u);
    ctx->pc = 0x319320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31931Cu;
    // 0x319320: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9070u, 0x31931Cu, 0x319324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319324u;
label_319324:
    // 0x319324: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_319328:
    if (ctx->pc == 0x319328u) {
        ctx->pc = 0x319328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319324u;
        // 0x319328: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31932Cu;
        goto label_31932c;
    }
    ctx->pc = 0x319324u;
    {
        const bool branch_taken_0x319324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319324u;
        // 0x319328: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319324) {
            ctx->pc = 0x319350u;
            goto label_319350;
        }
    }
    ctx->pc = 0x31932Cu;
label_31932c:
    // 0x31932c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x31932cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_319330:
    // 0x319330: 0x8e4600f0  lw          $a2, 0xF0($s2)
    ctx->pc = 0x319330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_319334:
    // 0x319334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x319334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_319338:
    // 0x319338: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x319338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31933c:
    // 0x31933c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x31933cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_319340:
    // 0x319340: 0xc07e41c  jal         func_1F9070
label_319344:
    if (ctx->pc == 0x319344u) {
        ctx->pc = 0x319344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319340u;
        // 0x319344: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319348u;
        goto label_319348;
    }
    ctx->pc = 0x319340u;
    SET_GPR_U32(ctx, 31, 0x319348u);
    ctx->pc = 0x319344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319340u;
    // 0x319344: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9070u, 0x319340u, 0x319348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319348u;
label_319348:
    // 0x319348: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_31934c:
    if (ctx->pc == 0x31934Cu) {
        ctx->pc = 0x31934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319348u;
        // 0x31934c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319350u;
        goto label_319350;
    }
    ctx->pc = 0x319348u;
    {
        const bool branch_taken_0x319348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319348u;
        // 0x31934c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319348) {
            ctx->pc = 0x319354u;
            goto label_319354;
        }
    }
    ctx->pc = 0x319350u;
label_319350:
    // 0x319350: 0xa28202be  sb          $v0, 0x2BE($s4)
    ctx->pc = 0x319350u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 702), (uint8_t)GPR_U32(ctx, 2));
label_319354:
    // 0x319354: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x319354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_319358:
    // 0x319358: 0x90627a2c  lbu         $v0, 0x7A2C($v1)
    ctx->pc = 0x319358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 31276)));
label_31935c:
    // 0x31935c: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x31935cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
label_319360:
    // 0x319360: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_319364:
    if (ctx->pc == 0x319364u) {
        ctx->pc = 0x319364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319360u;
        // 0x319364: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319368u;
        goto label_319368;
    }
    ctx->pc = 0x319360u;
    {
        const bool branch_taken_0x319360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319360u;
        // 0x319364: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319360) {
            ctx->pc = 0x319380u;
            goto label_319380;
        }
    }
    ctx->pc = 0x319368u;
label_319368:
    // 0x319368: 0x8e820320  lw          $v0, 0x320($s4)
    ctx->pc = 0x319368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_31936c:
    // 0x31936c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x31936cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_319370:
    // 0x319370: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x319370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_319374:
    // 0x319374: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x319374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_319378:
    // 0x319378: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_31937c:
    if (ctx->pc == 0x31937Cu) {
        ctx->pc = 0x31937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319378u;
        // 0x31937c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319380u;
        goto label_319380;
    }
    ctx->pc = 0x319378u;
    {
        const bool branch_taken_0x319378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319378u;
        // 0x31937c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319378) {
            ctx->pc = 0x319384u;
            goto label_319384;
        }
    }
    ctx->pc = 0x319380u;
label_319380:
    // 0x319380: 0xa28202be  sb          $v0, 0x2BE($s4)
    ctx->pc = 0x319380u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 702), (uint8_t)GPR_U32(ctx, 2));
label_319384:
    // 0x319384: 0x8e830320  lw          $v1, 0x320($s4)
    ctx->pc = 0x319384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_319388:
    // 0x319388: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x319388u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
label_31938c:
    // 0x31938c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x31938cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_319390:
    // 0x319390: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x319390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_319394:
    // 0x319394: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_319398:
    if (ctx->pc == 0x319398u) {
        ctx->pc = 0x319398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319394u;
        // 0x319398: 0x8e820320  lw          $v0, 0x320($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31939Cu;
        goto label_31939c;
    }
    ctx->pc = 0x319394u;
    {
        const bool branch_taken_0x319394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319394) {
            ctx->pc = 0x319398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319394u;
            // 0x319398: 0x8e820320  lw          $v0, 0x320($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319444u;
            goto label_319444;
        }
    }
    ctx->pc = 0x31939Cu;
label_31939c:
    // 0x31939c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31939cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3193a0:
    // 0x3193a0: 0xc052dbe  jal         func_14B6F8
label_3193a4:
    if (ctx->pc == 0x3193A4u) {
        ctx->pc = 0x3193A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193A0u;
        // 0x3193a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3193A8u;
        goto label_3193a8;
    }
    ctx->pc = 0x3193A0u;
    SET_GPR_U32(ctx, 31, 0x3193A8u);
    ctx->pc = 0x3193A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3193A0u;
    // 0x3193a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x3193A0u, 0x3193A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3193A8u;
label_3193a8:
    // 0x3193a8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3193a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3193ac:
    // 0x3193ac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3193acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3193b0:
    // 0x3193b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3193b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3193b4:
    // 0x3193b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3193b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3193b8:
    // 0x3193b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3193b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3193bc:
    // 0x3193bc: 0x8e220380  lw          $v0, 0x380($s1)
    ctx->pc = 0x3193bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_3193c0:
    // 0x3193c0: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x3193c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3193c4:
    // 0x3193c4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3193c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3193c8:
    // 0x3193c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3193c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3193cc:
    // 0x3193cc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x3193ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_3193d0:
    // 0x3193d0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3193d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3193d4:
    // 0x3193d4: 0xc052080  jal         func_148200
label_3193d8:
    if (ctx->pc == 0x3193D8u) {
        ctx->pc = 0x3193D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193D4u;
        // 0x3193d8: 0xae220380  sw          $v0, 0x380($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3193DCu;
        goto label_3193dc;
    }
    ctx->pc = 0x3193D4u;
    SET_GPR_U32(ctx, 31, 0x3193DCu);
    ctx->pc = 0x3193D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3193D4u;
    // 0x3193d8: 0xae220380  sw          $v0, 0x380($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148200u, 0x3193D4u, 0x3193DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3193DCu;
label_3193dc:
    // 0x3193dc: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x3193dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3193e0:
    // 0x3193e0: 0xc62c038c  lwc1        $f12, 0x38C($s1)
    ctx->pc = 0x3193e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3193e4:
    // 0x3193e4: 0xc0520b0  jal         func_1482C0
label_3193e8:
    if (ctx->pc == 0x3193E8u) {
        ctx->pc = 0x3193E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193E4u;
        // 0x3193e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3193ECu;
        goto label_3193ec;
    }
    ctx->pc = 0x3193E4u;
    SET_GPR_U32(ctx, 31, 0x3193ECu);
    ctx->pc = 0x3193E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3193E4u;
    // 0x3193e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1482C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1482C0u, 0x3193E4u, 0x3193ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3193ECu;
label_3193ec:
    // 0x3193ec: 0xc07df52  jal         func_1F7D48
label_3193f0:
    if (ctx->pc == 0x3193F0u) {
        ctx->pc = 0x3193F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193ECu;
        // 0x3193f0: 0xc62c038c  lwc1        $f12, 0x38C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3193F4u;
        goto label_3193f4;
    }
    ctx->pc = 0x3193ECu;
    SET_GPR_U32(ctx, 31, 0x3193F4u);
    ctx->pc = 0x3193F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3193ECu;
    // 0x3193f0: 0xc62c038c  lwc1        $f12, 0x38C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x3193ECu, 0x3193F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3193F4u;
label_3193f4:
    // 0x3193f4: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x3193f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3193f8:
    // 0x3193f8: 0xe620038c  swc1        $f0, 0x38C($s1)
    ctx->pc = 0x3193f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 908), bits); }
label_3193fc:
    // 0x3193fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3193fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_319400:
    // 0x319400: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x319400u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_319404:
    // 0x319404: 0xc052080  jal         func_148200
label_319408:
    if (ctx->pc == 0x319408u) {
        ctx->pc = 0x319408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319404u;
        // 0x319408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31940Cu;
        goto label_31940c;
    }
    ctx->pc = 0x319404u;
    SET_GPR_U32(ctx, 31, 0x31940Cu);
    ctx->pc = 0x319408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319404u;
    // 0x319408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148200u, 0x319404u, 0x31940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31940Cu;
label_31940c:
    // 0x31940c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31940cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_319410:
    // 0x319410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x319410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_319414:
    // 0x319414: 0xc051d52  jal         func_147548
label_319418:
    if (ctx->pc == 0x319418u) {
        ctx->pc = 0x319418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319414u;
        // 0x319418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31941Cu;
        goto label_31941c;
    }
    ctx->pc = 0x319414u;
    SET_GPR_U32(ctx, 31, 0x31941Cu);
    ctx->pc = 0x319418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319414u;
    // 0x319418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x319414u, 0x31941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31941Cu;
label_31941c:
    // 0x31941c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31941cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_319420:
    // 0x319420: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x319420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_319424:
    // 0x319424: 0xc051d52  jal         func_147548
label_319428:
    if (ctx->pc == 0x319428u) {
        ctx->pc = 0x319428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319424u;
        // 0x319428: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31942Cu;
        goto label_31942c;
    }
    ctx->pc = 0x319424u;
    SET_GPR_U32(ctx, 31, 0x31942Cu);
    ctx->pc = 0x319428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319424u;
    // 0x319428: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x319424u, 0x31942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31942Cu;
label_31942c:
    // 0x31942c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31942cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_319430:
    // 0x319430: 0xc052474  jal         func_1491D0
label_319434:
    if (ctx->pc == 0x319434u) {
        ctx->pc = 0x319434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319430u;
        // 0x319434: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319438u;
        goto label_319438;
    }
    ctx->pc = 0x319430u;
    SET_GPR_U32(ctx, 31, 0x319438u);
    ctx->pc = 0x319434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319430u;
    // 0x319434: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1491D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1491D0u, 0x319430u, 0x319438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319438u;
label_319438:
    // 0x319438: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x319438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_31943c:
    // 0x31943c: 0xa28202be  sb          $v0, 0x2BE($s4)
    ctx->pc = 0x31943cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 702), (uint8_t)GPR_U32(ctx, 2));
label_319440:
    // 0x319440: 0x8e820320  lw          $v0, 0x320($s4)
    ctx->pc = 0x319440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_319444:
    // 0x319444: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x319444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_319448:
    // 0x319448: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x319448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_31944c:
    // 0x31944c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x31944cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_319450:
    // 0x319450: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_319454:
    if (ctx->pc == 0x319454u) {
        ctx->pc = 0x319454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319450u;
        // 0x319454: 0x26b074a0  addiu       $s0, $s5, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 29856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319458u;
        goto label_319458;
    }
    ctx->pc = 0x319450u;
    {
        const bool branch_taken_0x319450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x319454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319450u;
        // 0x319454: 0x26b074a0  addiu       $s0, $s5, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319450) {
            ctx->pc = 0x3194D8u;
            goto label_3194d8;
        }
    }
    ctx->pc = 0x319458u;
label_319458:
    // 0x319458: 0x8e020608  lw          $v0, 0x608($s0)
    ctx->pc = 0x319458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
label_31945c:
    // 0x31945c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_319460:
    if (ctx->pc == 0x319460u) {
        ctx->pc = 0x319460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31945Cu;
        // 0x319460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319464u;
        goto label_319464;
    }
    ctx->pc = 0x31945Cu;
    {
        const bool branch_taken_0x31945c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31945Cu;
        // 0x319460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31945c) {
            ctx->pc = 0x3194D8u;
            goto label_3194d8;
        }
    }
    ctx->pc = 0x319464u;
label_319464:
    // 0x319464: 0xc052dbe  jal         func_14B6F8
label_319468:
    if (ctx->pc == 0x319468u) {
        ctx->pc = 0x319468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319464u;
        // 0x319468: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31946Cu;
        goto label_31946c;
    }
    ctx->pc = 0x319464u;
    SET_GPR_U32(ctx, 31, 0x31946Cu);
    ctx->pc = 0x319468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319464u;
    // 0x319468: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x319464u, 0x31946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31946Cu;
label_31946c:
    // 0x31946c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31946cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_319470:
    // 0x319470: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x319470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_319474:
    // 0x319474: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_319478:
    if (ctx->pc == 0x319478u) {
        ctx->pc = 0x319478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319474u;
        // 0x319478: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31947Cu;
        goto label_31947c;
    }
    ctx->pc = 0x319474u;
    {
        const bool branch_taken_0x319474 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x319478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319474u;
        // 0x319478: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319474) {
            ctx->pc = 0x319490u;
            goto label_319490;
        }
    }
    ctx->pc = 0x31947Cu;
label_31947c:
    // 0x31947c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31947cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319480:
    // 0x319480: 0x0  nop
    ctx->pc = 0x319480u;
    // NOP
label_319484:
    // 0x319484: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x319484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_319488:
    // 0x319488: 0x10000008  b           . + 4 + (0x8 << 2)
label_31948c:
    if (ctx->pc == 0x31948Cu) {
        ctx->pc = 0x31948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319488u;
        // 0x31948c: 0x4600b802  mul.s       $f0, $f23, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319490u;
        goto label_319490;
    }
    ctx->pc = 0x319488u;
    {
        const bool branch_taken_0x319488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319488u;
        // 0x31948c: 0x4600b802  mul.s       $f0, $f23, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319488) {
            ctx->pc = 0x3194ACu;
            goto label_3194ac;
        }
    }
    ctx->pc = 0x319490u;
label_319490:
    // 0x319490: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x319490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_319494:
    // 0x319494: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x319494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_319498:
    // 0x319498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31949c:
    // 0x31949c: 0x0  nop
    ctx->pc = 0x31949cu;
    // NOP
label_3194a0:
    // 0x3194a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3194a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3194a4:
    // 0x3194a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3194a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3194a8:
    // 0x3194a8: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x3194a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_3194ac:
    // 0x3194ac: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3194acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_3194b0:
    // 0x3194b0: 0x2404fff6  addiu       $a0, $zero, -0xA
    ctx->pc = 0x3194b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
label_3194b4:
    // 0x3194b4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3194b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3194b8:
    // 0x3194b8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3194b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3194bc:
    // 0x3194bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3194bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3194c0:
    // 0x3194c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3194c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3194c4:
    // 0x3194c4: 0x0  nop
    ctx->pc = 0x3194c4u;
    // NOP
label_3194c8:
    // 0x3194c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3194c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3194cc:
    // 0x3194cc: 0xe4a0038c  swc1        $f0, 0x38C($a1)
    ctx->pc = 0x3194ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 908), bits); }
label_3194d0:
    // 0x3194d0: 0xa28302be  sb          $v1, 0x2BE($s4)
    ctx->pc = 0x3194d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 702), (uint8_t)GPR_U32(ctx, 3));
label_3194d4:
    // 0x3194d4: 0xa28402b5  sb          $a0, 0x2B5($s4)
    ctx->pc = 0x3194d4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 693), (uint8_t)GPR_U32(ctx, 4));
label_3194d8:
    // 0x3194d8: 0xc0c6658  jal         func_319960
label_3194dc:
    if (ctx->pc == 0x3194DCu) {
        ctx->pc = 0x3194DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194D8u;
        // 0x3194dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3194E0u;
        goto label_3194e0;
    }
    ctx->pc = 0x3194D8u;
    SET_GPR_U32(ctx, 31, 0x3194E0u);
    ctx->pc = 0x3194DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3194D8u;
    // 0x3194dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319960u, 0x3194D8u, 0x3194E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3194E0u;
label_3194e0:
    // 0x3194e0: 0xc0c665a  jal         func_319968
label_3194e4:
    if (ctx->pc == 0x3194E4u) {
        ctx->pc = 0x3194E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194E0u;
        // 0x3194e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3194E8u;
        goto label_3194e8;
    }
    ctx->pc = 0x3194E0u;
    SET_GPR_U32(ctx, 31, 0x3194E8u);
    ctx->pc = 0x3194E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3194E0u;
    // 0x3194e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319968u, 0x3194E0u, 0x3194E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3194E8u;
label_3194e8:
    // 0x3194e8: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x3194e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3194ec:
    // 0x3194ec: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x3194ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3194f0:
    // 0x3194f0: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x3194f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3194f4:
    // 0x3194f4: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x3194f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3194f8:
    // 0x3194f8: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x3194f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3194fc:
    // 0x3194fc: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x3194fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_319500:
    // 0x319500: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x319500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_319504:
    // 0x319504: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x319504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_319508:
    // 0x319508: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x319508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_31950c:
    // 0x31950c: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x31950cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_319510:
    // 0x319510: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x319510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_319514:
    // 0x319514: 0x3e00008  jr          $ra
label_319518:
    if (ctx->pc == 0x319518u) {
        ctx->pc = 0x319518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319514u;
        // 0x319518: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31951Cu;
        goto label_31951c;
    }
    ctx->pc = 0x319514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319514u;
        // 0x319518: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31951Cu;
label_31951c:
    // 0x31951c: 0x0  nop
    ctx->pc = 0x31951cu;
    // NOP
    ctx->pc = 0x319520u;
}
