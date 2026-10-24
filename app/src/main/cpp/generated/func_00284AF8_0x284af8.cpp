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

// Function: func_00284AF8
// Address: 0x284af8 - 0x285678
void func_00284AF8_0x284af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00284AF8_0x284af8");
#endif

    switch (ctx->pc) {
        case 0x284af8u: goto label_284af8;
        case 0x284afcu: goto label_284afc;
        case 0x284b00u: goto label_284b00;
        case 0x284b04u: goto label_284b04;
        case 0x284b08u: goto label_284b08;
        case 0x284b0cu: goto label_284b0c;
        case 0x284b10u: goto label_284b10;
        case 0x284b14u: goto label_284b14;
        case 0x284b18u: goto label_284b18;
        case 0x284b1cu: goto label_284b1c;
        case 0x284b20u: goto label_284b20;
        case 0x284b24u: goto label_284b24;
        case 0x284b28u: goto label_284b28;
        case 0x284b2cu: goto label_284b2c;
        case 0x284b30u: goto label_284b30;
        case 0x284b34u: goto label_284b34;
        case 0x284b38u: goto label_284b38;
        case 0x284b3cu: goto label_284b3c;
        case 0x284b40u: goto label_284b40;
        case 0x284b44u: goto label_284b44;
        case 0x284b48u: goto label_284b48;
        case 0x284b4cu: goto label_284b4c;
        case 0x284b50u: goto label_284b50;
        case 0x284b54u: goto label_284b54;
        case 0x284b58u: goto label_284b58;
        case 0x284b5cu: goto label_284b5c;
        case 0x284b60u: goto label_284b60;
        case 0x284b64u: goto label_284b64;
        case 0x284b68u: goto label_284b68;
        case 0x284b6cu: goto label_284b6c;
        case 0x284b70u: goto label_284b70;
        case 0x284b74u: goto label_284b74;
        case 0x284b78u: goto label_284b78;
        case 0x284b7cu: goto label_284b7c;
        case 0x284b80u: goto label_284b80;
        case 0x284b84u: goto label_284b84;
        case 0x284b88u: goto label_284b88;
        case 0x284b8cu: goto label_284b8c;
        case 0x284b90u: goto label_284b90;
        case 0x284b94u: goto label_284b94;
        case 0x284b98u: goto label_284b98;
        case 0x284b9cu: goto label_284b9c;
        case 0x284ba0u: goto label_284ba0;
        case 0x284ba4u: goto label_284ba4;
        case 0x284ba8u: goto label_284ba8;
        case 0x284bacu: goto label_284bac;
        case 0x284bb0u: goto label_284bb0;
        case 0x284bb4u: goto label_284bb4;
        case 0x284bb8u: goto label_284bb8;
        case 0x284bbcu: goto label_284bbc;
        case 0x284bc0u: goto label_284bc0;
        case 0x284bc4u: goto label_284bc4;
        case 0x284bc8u: goto label_284bc8;
        case 0x284bccu: goto label_284bcc;
        case 0x284bd0u: goto label_284bd0;
        case 0x284bd4u: goto label_284bd4;
        case 0x284bd8u: goto label_284bd8;
        case 0x284bdcu: goto label_284bdc;
        case 0x284be0u: goto label_284be0;
        case 0x284be4u: goto label_284be4;
        case 0x284be8u: goto label_284be8;
        case 0x284becu: goto label_284bec;
        case 0x284bf0u: goto label_284bf0;
        case 0x284bf4u: goto label_284bf4;
        case 0x284bf8u: goto label_284bf8;
        case 0x284bfcu: goto label_284bfc;
        case 0x284c00u: goto label_284c00;
        case 0x284c04u: goto label_284c04;
        case 0x284c08u: goto label_284c08;
        case 0x284c0cu: goto label_284c0c;
        case 0x284c10u: goto label_284c10;
        case 0x284c14u: goto label_284c14;
        case 0x284c18u: goto label_284c18;
        case 0x284c1cu: goto label_284c1c;
        case 0x284c20u: goto label_284c20;
        case 0x284c24u: goto label_284c24;
        case 0x284c28u: goto label_284c28;
        case 0x284c2cu: goto label_284c2c;
        case 0x284c30u: goto label_284c30;
        case 0x284c34u: goto label_284c34;
        case 0x284c38u: goto label_284c38;
        case 0x284c3cu: goto label_284c3c;
        case 0x284c40u: goto label_284c40;
        case 0x284c44u: goto label_284c44;
        case 0x284c48u: goto label_284c48;
        case 0x284c4cu: goto label_284c4c;
        case 0x284c50u: goto label_284c50;
        case 0x284c54u: goto label_284c54;
        case 0x284c58u: goto label_284c58;
        case 0x284c5cu: goto label_284c5c;
        case 0x284c60u: goto label_284c60;
        case 0x284c64u: goto label_284c64;
        case 0x284c68u: goto label_284c68;
        case 0x284c6cu: goto label_284c6c;
        case 0x284c70u: goto label_284c70;
        case 0x284c74u: goto label_284c74;
        case 0x284c78u: goto label_284c78;
        case 0x284c7cu: goto label_284c7c;
        case 0x284c80u: goto label_284c80;
        case 0x284c84u: goto label_284c84;
        case 0x284c88u: goto label_284c88;
        case 0x284c8cu: goto label_284c8c;
        case 0x284c90u: goto label_284c90;
        case 0x284c94u: goto label_284c94;
        case 0x284c98u: goto label_284c98;
        case 0x284c9cu: goto label_284c9c;
        case 0x284ca0u: goto label_284ca0;
        case 0x284ca4u: goto label_284ca4;
        case 0x284ca8u: goto label_284ca8;
        case 0x284cacu: goto label_284cac;
        case 0x284cb0u: goto label_284cb0;
        case 0x284cb4u: goto label_284cb4;
        case 0x284cb8u: goto label_284cb8;
        case 0x284cbcu: goto label_284cbc;
        case 0x284cc0u: goto label_284cc0;
        case 0x284cc4u: goto label_284cc4;
        case 0x284cc8u: goto label_284cc8;
        case 0x284cccu: goto label_284ccc;
        case 0x284cd0u: goto label_284cd0;
        case 0x284cd4u: goto label_284cd4;
        case 0x284cd8u: goto label_284cd8;
        case 0x284cdcu: goto label_284cdc;
        case 0x284ce0u: goto label_284ce0;
        case 0x284ce4u: goto label_284ce4;
        case 0x284ce8u: goto label_284ce8;
        case 0x284cecu: goto label_284cec;
        case 0x284cf0u: goto label_284cf0;
        case 0x284cf4u: goto label_284cf4;
        case 0x284cf8u: goto label_284cf8;
        case 0x284cfcu: goto label_284cfc;
        case 0x284d00u: goto label_284d00;
        case 0x284d04u: goto label_284d04;
        case 0x284d08u: goto label_284d08;
        case 0x284d0cu: goto label_284d0c;
        case 0x284d10u: goto label_284d10;
        case 0x284d14u: goto label_284d14;
        case 0x284d18u: goto label_284d18;
        case 0x284d1cu: goto label_284d1c;
        case 0x284d20u: goto label_284d20;
        case 0x284d24u: goto label_284d24;
        case 0x284d28u: goto label_284d28;
        case 0x284d2cu: goto label_284d2c;
        case 0x284d30u: goto label_284d30;
        case 0x284d34u: goto label_284d34;
        case 0x284d38u: goto label_284d38;
        case 0x284d3cu: goto label_284d3c;
        case 0x284d40u: goto label_284d40;
        case 0x284d44u: goto label_284d44;
        case 0x284d48u: goto label_284d48;
        case 0x284d4cu: goto label_284d4c;
        case 0x284d50u: goto label_284d50;
        case 0x284d54u: goto label_284d54;
        case 0x284d58u: goto label_284d58;
        case 0x284d5cu: goto label_284d5c;
        case 0x284d60u: goto label_284d60;
        case 0x284d64u: goto label_284d64;
        case 0x284d68u: goto label_284d68;
        case 0x284d6cu: goto label_284d6c;
        case 0x284d70u: goto label_284d70;
        case 0x284d74u: goto label_284d74;
        case 0x284d78u: goto label_284d78;
        case 0x284d7cu: goto label_284d7c;
        case 0x284d80u: goto label_284d80;
        case 0x284d84u: goto label_284d84;
        case 0x284d88u: goto label_284d88;
        case 0x284d8cu: goto label_284d8c;
        case 0x284d90u: goto label_284d90;
        case 0x284d94u: goto label_284d94;
        case 0x284d98u: goto label_284d98;
        case 0x284d9cu: goto label_284d9c;
        case 0x284da0u: goto label_284da0;
        case 0x284da4u: goto label_284da4;
        case 0x284da8u: goto label_284da8;
        case 0x284dacu: goto label_284dac;
        case 0x284db0u: goto label_284db0;
        case 0x284db4u: goto label_284db4;
        case 0x284db8u: goto label_284db8;
        case 0x284dbcu: goto label_284dbc;
        case 0x284dc0u: goto label_284dc0;
        case 0x284dc4u: goto label_284dc4;
        case 0x284dc8u: goto label_284dc8;
        case 0x284dccu: goto label_284dcc;
        case 0x284dd0u: goto label_284dd0;
        case 0x284dd4u: goto label_284dd4;
        case 0x284dd8u: goto label_284dd8;
        case 0x284ddcu: goto label_284ddc;
        case 0x284de0u: goto label_284de0;
        case 0x284de4u: goto label_284de4;
        case 0x284de8u: goto label_284de8;
        case 0x284decu: goto label_284dec;
        case 0x284df0u: goto label_284df0;
        case 0x284df4u: goto label_284df4;
        case 0x284df8u: goto label_284df8;
        case 0x284dfcu: goto label_284dfc;
        case 0x284e00u: goto label_284e00;
        case 0x284e04u: goto label_284e04;
        case 0x284e08u: goto label_284e08;
        case 0x284e0cu: goto label_284e0c;
        case 0x284e10u: goto label_284e10;
        case 0x284e14u: goto label_284e14;
        case 0x284e18u: goto label_284e18;
        case 0x284e1cu: goto label_284e1c;
        case 0x284e20u: goto label_284e20;
        case 0x284e24u: goto label_284e24;
        case 0x284e28u: goto label_284e28;
        case 0x284e2cu: goto label_284e2c;
        case 0x284e30u: goto label_284e30;
        case 0x284e34u: goto label_284e34;
        case 0x284e38u: goto label_284e38;
        case 0x284e3cu: goto label_284e3c;
        case 0x284e40u: goto label_284e40;
        case 0x284e44u: goto label_284e44;
        case 0x284e48u: goto label_284e48;
        case 0x284e4cu: goto label_284e4c;
        case 0x284e50u: goto label_284e50;
        case 0x284e54u: goto label_284e54;
        case 0x284e58u: goto label_284e58;
        case 0x284e5cu: goto label_284e5c;
        case 0x284e60u: goto label_284e60;
        case 0x284e64u: goto label_284e64;
        case 0x284e68u: goto label_284e68;
        case 0x284e6cu: goto label_284e6c;
        case 0x284e70u: goto label_284e70;
        case 0x284e74u: goto label_284e74;
        case 0x284e78u: goto label_284e78;
        case 0x284e7cu: goto label_284e7c;
        case 0x284e80u: goto label_284e80;
        case 0x284e84u: goto label_284e84;
        case 0x284e88u: goto label_284e88;
        case 0x284e8cu: goto label_284e8c;
        case 0x284e90u: goto label_284e90;
        case 0x284e94u: goto label_284e94;
        case 0x284e98u: goto label_284e98;
        case 0x284e9cu: goto label_284e9c;
        case 0x284ea0u: goto label_284ea0;
        case 0x284ea4u: goto label_284ea4;
        case 0x284ea8u: goto label_284ea8;
        case 0x284eacu: goto label_284eac;
        case 0x284eb0u: goto label_284eb0;
        case 0x284eb4u: goto label_284eb4;
        case 0x284eb8u: goto label_284eb8;
        case 0x284ebcu: goto label_284ebc;
        case 0x284ec0u: goto label_284ec0;
        case 0x284ec4u: goto label_284ec4;
        case 0x284ec8u: goto label_284ec8;
        case 0x284eccu: goto label_284ecc;
        case 0x284ed0u: goto label_284ed0;
        case 0x284ed4u: goto label_284ed4;
        case 0x284ed8u: goto label_284ed8;
        case 0x284edcu: goto label_284edc;
        case 0x284ee0u: goto label_284ee0;
        case 0x284ee4u: goto label_284ee4;
        case 0x284ee8u: goto label_284ee8;
        case 0x284eecu: goto label_284eec;
        case 0x284ef0u: goto label_284ef0;
        case 0x284ef4u: goto label_284ef4;
        case 0x284ef8u: goto label_284ef8;
        case 0x284efcu: goto label_284efc;
        case 0x284f00u: goto label_284f00;
        case 0x284f04u: goto label_284f04;
        case 0x284f08u: goto label_284f08;
        case 0x284f0cu: goto label_284f0c;
        case 0x284f10u: goto label_284f10;
        case 0x284f14u: goto label_284f14;
        case 0x284f18u: goto label_284f18;
        case 0x284f1cu: goto label_284f1c;
        case 0x284f20u: goto label_284f20;
        case 0x284f24u: goto label_284f24;
        case 0x284f28u: goto label_284f28;
        case 0x284f2cu: goto label_284f2c;
        case 0x284f30u: goto label_284f30;
        case 0x284f34u: goto label_284f34;
        case 0x284f38u: goto label_284f38;
        case 0x284f3cu: goto label_284f3c;
        case 0x284f40u: goto label_284f40;
        case 0x284f44u: goto label_284f44;
        case 0x284f48u: goto label_284f48;
        case 0x284f4cu: goto label_284f4c;
        case 0x284f50u: goto label_284f50;
        case 0x284f54u: goto label_284f54;
        case 0x284f58u: goto label_284f58;
        case 0x284f5cu: goto label_284f5c;
        case 0x284f60u: goto label_284f60;
        case 0x284f64u: goto label_284f64;
        case 0x284f68u: goto label_284f68;
        case 0x284f6cu: goto label_284f6c;
        case 0x284f70u: goto label_284f70;
        case 0x284f74u: goto label_284f74;
        case 0x284f78u: goto label_284f78;
        case 0x284f7cu: goto label_284f7c;
        case 0x284f80u: goto label_284f80;
        case 0x284f84u: goto label_284f84;
        case 0x284f88u: goto label_284f88;
        case 0x284f8cu: goto label_284f8c;
        case 0x284f90u: goto label_284f90;
        case 0x284f94u: goto label_284f94;
        case 0x284f98u: goto label_284f98;
        case 0x284f9cu: goto label_284f9c;
        case 0x284fa0u: goto label_284fa0;
        case 0x284fa4u: goto label_284fa4;
        case 0x284fa8u: goto label_284fa8;
        case 0x284facu: goto label_284fac;
        case 0x284fb0u: goto label_284fb0;
        case 0x284fb4u: goto label_284fb4;
        case 0x284fb8u: goto label_284fb8;
        case 0x284fbcu: goto label_284fbc;
        case 0x284fc0u: goto label_284fc0;
        case 0x284fc4u: goto label_284fc4;
        case 0x284fc8u: goto label_284fc8;
        case 0x284fccu: goto label_284fcc;
        case 0x284fd0u: goto label_284fd0;
        case 0x284fd4u: goto label_284fd4;
        case 0x284fd8u: goto label_284fd8;
        case 0x284fdcu: goto label_284fdc;
        case 0x284fe0u: goto label_284fe0;
        case 0x284fe4u: goto label_284fe4;
        case 0x284fe8u: goto label_284fe8;
        case 0x284fecu: goto label_284fec;
        case 0x284ff0u: goto label_284ff0;
        case 0x284ff4u: goto label_284ff4;
        case 0x284ff8u: goto label_284ff8;
        case 0x284ffcu: goto label_284ffc;
        case 0x285000u: goto label_285000;
        case 0x285004u: goto label_285004;
        case 0x285008u: goto label_285008;
        case 0x28500cu: goto label_28500c;
        case 0x285010u: goto label_285010;
        case 0x285014u: goto label_285014;
        case 0x285018u: goto label_285018;
        case 0x28501cu: goto label_28501c;
        case 0x285020u: goto label_285020;
        case 0x285024u: goto label_285024;
        case 0x285028u: goto label_285028;
        case 0x28502cu: goto label_28502c;
        case 0x285030u: goto label_285030;
        case 0x285034u: goto label_285034;
        case 0x285038u: goto label_285038;
        case 0x28503cu: goto label_28503c;
        case 0x285040u: goto label_285040;
        case 0x285044u: goto label_285044;
        case 0x285048u: goto label_285048;
        case 0x28504cu: goto label_28504c;
        case 0x285050u: goto label_285050;
        case 0x285054u: goto label_285054;
        case 0x285058u: goto label_285058;
        case 0x28505cu: goto label_28505c;
        case 0x285060u: goto label_285060;
        case 0x285064u: goto label_285064;
        case 0x285068u: goto label_285068;
        case 0x28506cu: goto label_28506c;
        case 0x285070u: goto label_285070;
        case 0x285074u: goto label_285074;
        case 0x285078u: goto label_285078;
        case 0x28507cu: goto label_28507c;
        case 0x285080u: goto label_285080;
        case 0x285084u: goto label_285084;
        case 0x285088u: goto label_285088;
        case 0x28508cu: goto label_28508c;
        case 0x285090u: goto label_285090;
        case 0x285094u: goto label_285094;
        case 0x285098u: goto label_285098;
        case 0x28509cu: goto label_28509c;
        case 0x2850a0u: goto label_2850a0;
        case 0x2850a4u: goto label_2850a4;
        case 0x2850a8u: goto label_2850a8;
        case 0x2850acu: goto label_2850ac;
        case 0x2850b0u: goto label_2850b0;
        case 0x2850b4u: goto label_2850b4;
        case 0x2850b8u: goto label_2850b8;
        case 0x2850bcu: goto label_2850bc;
        case 0x2850c0u: goto label_2850c0;
        case 0x2850c4u: goto label_2850c4;
        case 0x2850c8u: goto label_2850c8;
        case 0x2850ccu: goto label_2850cc;
        case 0x2850d0u: goto label_2850d0;
        case 0x2850d4u: goto label_2850d4;
        case 0x2850d8u: goto label_2850d8;
        case 0x2850dcu: goto label_2850dc;
        case 0x2850e0u: goto label_2850e0;
        case 0x2850e4u: goto label_2850e4;
        case 0x2850e8u: goto label_2850e8;
        case 0x2850ecu: goto label_2850ec;
        case 0x2850f0u: goto label_2850f0;
        case 0x2850f4u: goto label_2850f4;
        case 0x2850f8u: goto label_2850f8;
        case 0x2850fcu: goto label_2850fc;
        case 0x285100u: goto label_285100;
        case 0x285104u: goto label_285104;
        case 0x285108u: goto label_285108;
        case 0x28510cu: goto label_28510c;
        case 0x285110u: goto label_285110;
        case 0x285114u: goto label_285114;
        case 0x285118u: goto label_285118;
        case 0x28511cu: goto label_28511c;
        case 0x285120u: goto label_285120;
        case 0x285124u: goto label_285124;
        case 0x285128u: goto label_285128;
        case 0x28512cu: goto label_28512c;
        case 0x285130u: goto label_285130;
        case 0x285134u: goto label_285134;
        case 0x285138u: goto label_285138;
        case 0x28513cu: goto label_28513c;
        case 0x285140u: goto label_285140;
        case 0x285144u: goto label_285144;
        case 0x285148u: goto label_285148;
        case 0x28514cu: goto label_28514c;
        case 0x285150u: goto label_285150;
        case 0x285154u: goto label_285154;
        case 0x285158u: goto label_285158;
        case 0x28515cu: goto label_28515c;
        case 0x285160u: goto label_285160;
        case 0x285164u: goto label_285164;
        case 0x285168u: goto label_285168;
        case 0x28516cu: goto label_28516c;
        case 0x285170u: goto label_285170;
        case 0x285174u: goto label_285174;
        case 0x285178u: goto label_285178;
        case 0x28517cu: goto label_28517c;
        case 0x285180u: goto label_285180;
        case 0x285184u: goto label_285184;
        case 0x285188u: goto label_285188;
        case 0x28518cu: goto label_28518c;
        case 0x285190u: goto label_285190;
        case 0x285194u: goto label_285194;
        case 0x285198u: goto label_285198;
        case 0x28519cu: goto label_28519c;
        case 0x2851a0u: goto label_2851a0;
        case 0x2851a4u: goto label_2851a4;
        case 0x2851a8u: goto label_2851a8;
        case 0x2851acu: goto label_2851ac;
        case 0x2851b0u: goto label_2851b0;
        case 0x2851b4u: goto label_2851b4;
        case 0x2851b8u: goto label_2851b8;
        case 0x2851bcu: goto label_2851bc;
        case 0x2851c0u: goto label_2851c0;
        case 0x2851c4u: goto label_2851c4;
        case 0x2851c8u: goto label_2851c8;
        case 0x2851ccu: goto label_2851cc;
        case 0x2851d0u: goto label_2851d0;
        case 0x2851d4u: goto label_2851d4;
        case 0x2851d8u: goto label_2851d8;
        case 0x2851dcu: goto label_2851dc;
        case 0x2851e0u: goto label_2851e0;
        case 0x2851e4u: goto label_2851e4;
        case 0x2851e8u: goto label_2851e8;
        case 0x2851ecu: goto label_2851ec;
        case 0x2851f0u: goto label_2851f0;
        case 0x2851f4u: goto label_2851f4;
        case 0x2851f8u: goto label_2851f8;
        case 0x2851fcu: goto label_2851fc;
        case 0x285200u: goto label_285200;
        case 0x285204u: goto label_285204;
        case 0x285208u: goto label_285208;
        case 0x28520cu: goto label_28520c;
        case 0x285210u: goto label_285210;
        case 0x285214u: goto label_285214;
        case 0x285218u: goto label_285218;
        case 0x28521cu: goto label_28521c;
        case 0x285220u: goto label_285220;
        case 0x285224u: goto label_285224;
        case 0x285228u: goto label_285228;
        case 0x28522cu: goto label_28522c;
        case 0x285230u: goto label_285230;
        case 0x285234u: goto label_285234;
        case 0x285238u: goto label_285238;
        case 0x28523cu: goto label_28523c;
        case 0x285240u: goto label_285240;
        case 0x285244u: goto label_285244;
        case 0x285248u: goto label_285248;
        case 0x28524cu: goto label_28524c;
        case 0x285250u: goto label_285250;
        case 0x285254u: goto label_285254;
        case 0x285258u: goto label_285258;
        case 0x28525cu: goto label_28525c;
        case 0x285260u: goto label_285260;
        case 0x285264u: goto label_285264;
        case 0x285268u: goto label_285268;
        case 0x28526cu: goto label_28526c;
        case 0x285270u: goto label_285270;
        case 0x285274u: goto label_285274;
        case 0x285278u: goto label_285278;
        case 0x28527cu: goto label_28527c;
        case 0x285280u: goto label_285280;
        case 0x285284u: goto label_285284;
        case 0x285288u: goto label_285288;
        case 0x28528cu: goto label_28528c;
        case 0x285290u: goto label_285290;
        case 0x285294u: goto label_285294;
        case 0x285298u: goto label_285298;
        case 0x28529cu: goto label_28529c;
        case 0x2852a0u: goto label_2852a0;
        case 0x2852a4u: goto label_2852a4;
        case 0x2852a8u: goto label_2852a8;
        case 0x2852acu: goto label_2852ac;
        case 0x2852b0u: goto label_2852b0;
        case 0x2852b4u: goto label_2852b4;
        case 0x2852b8u: goto label_2852b8;
        case 0x2852bcu: goto label_2852bc;
        case 0x2852c0u: goto label_2852c0;
        case 0x2852c4u: goto label_2852c4;
        case 0x2852c8u: goto label_2852c8;
        case 0x2852ccu: goto label_2852cc;
        case 0x2852d0u: goto label_2852d0;
        case 0x2852d4u: goto label_2852d4;
        case 0x2852d8u: goto label_2852d8;
        case 0x2852dcu: goto label_2852dc;
        case 0x2852e0u: goto label_2852e0;
        case 0x2852e4u: goto label_2852e4;
        case 0x2852e8u: goto label_2852e8;
        case 0x2852ecu: goto label_2852ec;
        case 0x2852f0u: goto label_2852f0;
        case 0x2852f4u: goto label_2852f4;
        case 0x2852f8u: goto label_2852f8;
        case 0x2852fcu: goto label_2852fc;
        case 0x285300u: goto label_285300;
        case 0x285304u: goto label_285304;
        case 0x285308u: goto label_285308;
        case 0x28530cu: goto label_28530c;
        case 0x285310u: goto label_285310;
        case 0x285314u: goto label_285314;
        case 0x285318u: goto label_285318;
        case 0x28531cu: goto label_28531c;
        case 0x285320u: goto label_285320;
        case 0x285324u: goto label_285324;
        case 0x285328u: goto label_285328;
        case 0x28532cu: goto label_28532c;
        case 0x285330u: goto label_285330;
        case 0x285334u: goto label_285334;
        case 0x285338u: goto label_285338;
        case 0x28533cu: goto label_28533c;
        case 0x285340u: goto label_285340;
        case 0x285344u: goto label_285344;
        case 0x285348u: goto label_285348;
        case 0x28534cu: goto label_28534c;
        case 0x285350u: goto label_285350;
        case 0x285354u: goto label_285354;
        case 0x285358u: goto label_285358;
        case 0x28535cu: goto label_28535c;
        case 0x285360u: goto label_285360;
        case 0x285364u: goto label_285364;
        case 0x285368u: goto label_285368;
        case 0x28536cu: goto label_28536c;
        case 0x285370u: goto label_285370;
        case 0x285374u: goto label_285374;
        case 0x285378u: goto label_285378;
        case 0x28537cu: goto label_28537c;
        case 0x285380u: goto label_285380;
        case 0x285384u: goto label_285384;
        case 0x285388u: goto label_285388;
        case 0x28538cu: goto label_28538c;
        case 0x285390u: goto label_285390;
        case 0x285394u: goto label_285394;
        case 0x285398u: goto label_285398;
        case 0x28539cu: goto label_28539c;
        case 0x2853a0u: goto label_2853a0;
        case 0x2853a4u: goto label_2853a4;
        case 0x2853a8u: goto label_2853a8;
        case 0x2853acu: goto label_2853ac;
        case 0x2853b0u: goto label_2853b0;
        case 0x2853b4u: goto label_2853b4;
        case 0x2853b8u: goto label_2853b8;
        case 0x2853bcu: goto label_2853bc;
        case 0x2853c0u: goto label_2853c0;
        case 0x2853c4u: goto label_2853c4;
        case 0x2853c8u: goto label_2853c8;
        case 0x2853ccu: goto label_2853cc;
        case 0x2853d0u: goto label_2853d0;
        case 0x2853d4u: goto label_2853d4;
        case 0x2853d8u: goto label_2853d8;
        case 0x2853dcu: goto label_2853dc;
        case 0x2853e0u: goto label_2853e0;
        case 0x2853e4u: goto label_2853e4;
        case 0x2853e8u: goto label_2853e8;
        case 0x2853ecu: goto label_2853ec;
        case 0x2853f0u: goto label_2853f0;
        case 0x2853f4u: goto label_2853f4;
        case 0x2853f8u: goto label_2853f8;
        case 0x2853fcu: goto label_2853fc;
        case 0x285400u: goto label_285400;
        case 0x285404u: goto label_285404;
        case 0x285408u: goto label_285408;
        case 0x28540cu: goto label_28540c;
        case 0x285410u: goto label_285410;
        case 0x285414u: goto label_285414;
        case 0x285418u: goto label_285418;
        case 0x28541cu: goto label_28541c;
        case 0x285420u: goto label_285420;
        case 0x285424u: goto label_285424;
        case 0x285428u: goto label_285428;
        case 0x28542cu: goto label_28542c;
        case 0x285430u: goto label_285430;
        case 0x285434u: goto label_285434;
        case 0x285438u: goto label_285438;
        case 0x28543cu: goto label_28543c;
        case 0x285440u: goto label_285440;
        case 0x285444u: goto label_285444;
        case 0x285448u: goto label_285448;
        case 0x28544cu: goto label_28544c;
        case 0x285450u: goto label_285450;
        case 0x285454u: goto label_285454;
        case 0x285458u: goto label_285458;
        case 0x28545cu: goto label_28545c;
        case 0x285460u: goto label_285460;
        case 0x285464u: goto label_285464;
        case 0x285468u: goto label_285468;
        case 0x28546cu: goto label_28546c;
        case 0x285470u: goto label_285470;
        case 0x285474u: goto label_285474;
        case 0x285478u: goto label_285478;
        case 0x28547cu: goto label_28547c;
        case 0x285480u: goto label_285480;
        case 0x285484u: goto label_285484;
        case 0x285488u: goto label_285488;
        case 0x28548cu: goto label_28548c;
        case 0x285490u: goto label_285490;
        case 0x285494u: goto label_285494;
        case 0x285498u: goto label_285498;
        case 0x28549cu: goto label_28549c;
        case 0x2854a0u: goto label_2854a0;
        case 0x2854a4u: goto label_2854a4;
        case 0x2854a8u: goto label_2854a8;
        case 0x2854acu: goto label_2854ac;
        case 0x2854b0u: goto label_2854b0;
        case 0x2854b4u: goto label_2854b4;
        case 0x2854b8u: goto label_2854b8;
        case 0x2854bcu: goto label_2854bc;
        case 0x2854c0u: goto label_2854c0;
        case 0x2854c4u: goto label_2854c4;
        case 0x2854c8u: goto label_2854c8;
        case 0x2854ccu: goto label_2854cc;
        case 0x2854d0u: goto label_2854d0;
        case 0x2854d4u: goto label_2854d4;
        case 0x2854d8u: goto label_2854d8;
        case 0x2854dcu: goto label_2854dc;
        case 0x2854e0u: goto label_2854e0;
        case 0x2854e4u: goto label_2854e4;
        case 0x2854e8u: goto label_2854e8;
        case 0x2854ecu: goto label_2854ec;
        case 0x2854f0u: goto label_2854f0;
        case 0x2854f4u: goto label_2854f4;
        case 0x2854f8u: goto label_2854f8;
        case 0x2854fcu: goto label_2854fc;
        case 0x285500u: goto label_285500;
        case 0x285504u: goto label_285504;
        case 0x285508u: goto label_285508;
        case 0x28550cu: goto label_28550c;
        case 0x285510u: goto label_285510;
        case 0x285514u: goto label_285514;
        case 0x285518u: goto label_285518;
        case 0x28551cu: goto label_28551c;
        case 0x285520u: goto label_285520;
        case 0x285524u: goto label_285524;
        case 0x285528u: goto label_285528;
        case 0x28552cu: goto label_28552c;
        case 0x285530u: goto label_285530;
        case 0x285534u: goto label_285534;
        case 0x285538u: goto label_285538;
        case 0x28553cu: goto label_28553c;
        case 0x285540u: goto label_285540;
        case 0x285544u: goto label_285544;
        case 0x285548u: goto label_285548;
        case 0x28554cu: goto label_28554c;
        case 0x285550u: goto label_285550;
        case 0x285554u: goto label_285554;
        case 0x285558u: goto label_285558;
        case 0x28555cu: goto label_28555c;
        case 0x285560u: goto label_285560;
        case 0x285564u: goto label_285564;
        case 0x285568u: goto label_285568;
        case 0x28556cu: goto label_28556c;
        case 0x285570u: goto label_285570;
        case 0x285574u: goto label_285574;
        case 0x285578u: goto label_285578;
        case 0x28557cu: goto label_28557c;
        case 0x285580u: goto label_285580;
        case 0x285584u: goto label_285584;
        case 0x285588u: goto label_285588;
        case 0x28558cu: goto label_28558c;
        case 0x285590u: goto label_285590;
        case 0x285594u: goto label_285594;
        case 0x285598u: goto label_285598;
        case 0x28559cu: goto label_28559c;
        case 0x2855a0u: goto label_2855a0;
        case 0x2855a4u: goto label_2855a4;
        case 0x2855a8u: goto label_2855a8;
        case 0x2855acu: goto label_2855ac;
        case 0x2855b0u: goto label_2855b0;
        case 0x2855b4u: goto label_2855b4;
        case 0x2855b8u: goto label_2855b8;
        case 0x2855bcu: goto label_2855bc;
        case 0x2855c0u: goto label_2855c0;
        case 0x2855c4u: goto label_2855c4;
        case 0x2855c8u: goto label_2855c8;
        case 0x2855ccu: goto label_2855cc;
        case 0x2855d0u: goto label_2855d0;
        case 0x2855d4u: goto label_2855d4;
        case 0x2855d8u: goto label_2855d8;
        case 0x2855dcu: goto label_2855dc;
        case 0x2855e0u: goto label_2855e0;
        case 0x2855e4u: goto label_2855e4;
        case 0x2855e8u: goto label_2855e8;
        case 0x2855ecu: goto label_2855ec;
        case 0x2855f0u: goto label_2855f0;
        case 0x2855f4u: goto label_2855f4;
        case 0x2855f8u: goto label_2855f8;
        case 0x2855fcu: goto label_2855fc;
        case 0x285600u: goto label_285600;
        case 0x285604u: goto label_285604;
        case 0x285608u: goto label_285608;
        case 0x28560cu: goto label_28560c;
        case 0x285610u: goto label_285610;
        case 0x285614u: goto label_285614;
        case 0x285618u: goto label_285618;
        case 0x28561cu: goto label_28561c;
        case 0x285620u: goto label_285620;
        case 0x285624u: goto label_285624;
        case 0x285628u: goto label_285628;
        case 0x28562cu: goto label_28562c;
        case 0x285630u: goto label_285630;
        case 0x285634u: goto label_285634;
        case 0x285638u: goto label_285638;
        case 0x28563cu: goto label_28563c;
        case 0x285640u: goto label_285640;
        case 0x285644u: goto label_285644;
        case 0x285648u: goto label_285648;
        case 0x28564cu: goto label_28564c;
        case 0x285650u: goto label_285650;
        case 0x285654u: goto label_285654;
        case 0x285658u: goto label_285658;
        case 0x28565cu: goto label_28565c;
        case 0x285660u: goto label_285660;
        case 0x285664u: goto label_285664;
        case 0x285668u: goto label_285668;
        case 0x28566cu: goto label_28566c;
        case 0x285670u: goto label_285670;
        case 0x285674u: goto label_285674;
        default: break;
    }

    ctx->pc = 0x284af8u;

label_284af8:
    // 0x284af8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x284af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_284afc:
    // 0x284afc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x284afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_284b00:
    // 0x284b00: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x284b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_284b04:
    // 0x284b04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x284b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_284b08:
    // 0x284b08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x284b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_284b0c:
    // 0x284b0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x284b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_284b10:
    // 0x284b10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x284b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_284b14:
    // 0x284b14: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x284b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_284b18:
    // 0x284b18: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x284b18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_284b1c:
    // 0x284b1c: 0x26251530  addiu       $a1, $s1, 0x1530
    ctx->pc = 0x284b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5424));
label_284b20:
    // 0x284b20: 0x26231540  addiu       $v1, $s1, 0x1540
    ctx->pc = 0x284b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5440));
label_284b24:
    // 0x284b24: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x284b24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_284b28:
    // 0x284b28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x284b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_284b2c:
    // 0x284b2c: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
label_284b30:
    if (ctx->pc == 0x284B30u) {
        ctx->pc = 0x284B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B2Cu;
        // 0x284b30: 0xae221530  sw          $v0, 0x1530($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284B34u;
        goto label_284b34;
    }
    ctx->pc = 0x284B2Cu;
    {
        const bool branch_taken_0x284b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x284B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B2Cu;
        // 0x284b30: 0xae221530  sw          $v0, 0x1530($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b2c) {
            ctx->pc = 0x284B4Cu;
            goto label_284b4c;
        }
    }
    ctx->pc = 0x284B34u;
label_284b34:
    // 0x284b34: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x284b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284b38:
    // 0x284b38: 0xe6201540  swc1        $f0, 0x1540($s1)
    ctx->pc = 0x284b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5440), bits); }
label_284b3c:
    // 0x284b3c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x284b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_284b40:
    // 0x284b40: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x284b40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_284b44:
    // 0x284b44: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x284b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284b48:
    // 0x284b48: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x284b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_284b4c:
    // 0x284b4c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x284b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284b50:
    // 0x284b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_284b54:
    // 0x284b54: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x284b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_284b58:
    // 0x284b58: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x284b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_284b5c:
    // 0x284b5c: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x284b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
label_284b60:
    // 0x284b60: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x284b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_284b64:
    // 0x284b64: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x284b64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
label_284b68:
    // 0x284b68: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x284b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_284b6c:
    // 0x284b6c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x284b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
label_284b70:
    // 0x284b70: 0x92030030  lbu         $v1, 0x30($s0)
    ctx->pc = 0x284b70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
label_284b74:
    // 0x284b74: 0xa0a30030  sb          $v1, 0x30($a1)
    ctx->pc = 0x284b74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
label_284b78:
    // 0x284b78: 0x92020031  lbu         $v0, 0x31($s0)
    ctx->pc = 0x284b78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
label_284b7c:
    // 0x284b7c: 0xa0a20031  sb          $v0, 0x31($a1)
    ctx->pc = 0x284b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 2));
label_284b80:
    // 0x284b80: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x284b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_284b84:
    // 0x284b84: 0xc0a236a  jal         func_288DA8
label_284b88:
    if (ctx->pc == 0x284B88u) {
        ctx->pc = 0x284B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B84u;
        // 0x284b88: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284B8Cu;
        goto label_284b8c;
    }
    ctx->pc = 0x284B84u;
    SET_GPR_U32(ctx, 31, 0x284B8Cu);
    ctx->pc = 0x284B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284B84u;
    // 0x284b88: 0xae230564  sw          $v1, 0x564($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288DA8u, 0x284B84u, 0x284B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284B8Cu;
label_284b8c:
    // 0x284b8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_284b90:
    if (ctx->pc == 0x284B90u) {
        ctx->pc = 0x284B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B8Cu;
        // 0x284b90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284B94u;
        goto label_284b94;
    }
    ctx->pc = 0x284B8Cu;
    {
        const bool branch_taken_0x284b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B8Cu;
        // 0x284b90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b8c) {
            ctx->pc = 0x284B9Cu;
            goto label_284b9c;
        }
    }
    ctx->pc = 0x284B94u;
label_284b94:
    // 0x284b94: 0x100002b1  b           . + 4 + (0x2B1 << 2)
label_284b98:
    if (ctx->pc == 0x284B98u) {
        ctx->pc = 0x284B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B94u;
        // 0x284b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284B9Cu;
        goto label_284b9c;
    }
    ctx->pc = 0x284B94u;
    {
        const bool branch_taken_0x284b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B94u;
        // 0x284b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b94) {
            ctx->pc = 0x28565Cu;
            goto label_28565c;
        }
    }
    ctx->pc = 0x284B9Cu;
label_284b9c:
    // 0x284b9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x284b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_284ba0:
    // 0x284ba0: 0xc0a3afc  jal         func_28EBF0
label_284ba4:
    if (ctx->pc == 0x284BA4u) {
        ctx->pc = 0x284BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BA0u;
        // 0x284ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284BA8u;
        goto label_284ba8;
    }
    ctx->pc = 0x284BA0u;
    SET_GPR_U32(ctx, 31, 0x284BA8u);
    ctx->pc = 0x284BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284BA0u;
    // 0x284ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBF0u, 0x284BA0u, 0x284BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284BA8u;
label_284ba8:
    // 0x284ba8: 0xa2200531  sb          $zero, 0x531($s1)
    ctx->pc = 0x284ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 0));
label_284bac:
    // 0x284bac: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x284bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_284bb0:
    // 0x284bb0: 0xae2015ec  sw          $zero, 0x15EC($s1)
    ctx->pc = 0x284bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5612), GPR_U32(ctx, 0));
label_284bb4:
    // 0x284bb4: 0x90437a51  lbu         $v1, 0x7A51($v0)
    ctx->pc = 0x284bb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 31313)));
label_284bb8:
    // 0x284bb8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x284bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_284bbc:
    // 0x284bbc: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x284bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_284bc0:
    // 0x284bc0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_284bc4:
    if (ctx->pc == 0x284BC4u) {
        ctx->pc = 0x284BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BC0u;
        // 0x284bc4: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284BC8u;
        goto label_284bc8;
    }
    ctx->pc = 0x284BC0u;
    {
        const bool branch_taken_0x284bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BC0u;
        // 0x284bc4: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bc0) {
            ctx->pc = 0x284BE0u;
            goto label_284be0;
        }
    }
    ctx->pc = 0x284BC8u;
label_284bc8:
    // 0x284bc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x284bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_284bcc:
    // 0x284bcc: 0x24428a70  addiu       $v0, $v0, -0x7590
    ctx->pc = 0x284bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937200));
label_284bd0:
    // 0x284bd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x284bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_284bd4:
    // 0x284bd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x284bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_284bd8:
    // 0x284bd8: 0x800008  jr          $a0
label_284bdc:
    if (ctx->pc == 0x284BDCu) {
        ctx->pc = 0x284BE0u;
        goto label_284be0;
    }
    ctx->pc = 0x284BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284BE0u: goto label_284be0;
            case 0x284BE8u: goto label_284be8;
            case 0x284BF0u: goto label_284bf0;
            case 0x284BF8u: goto label_284bf8;
            case 0x284C00u: goto label_284c00;
            case 0x284C08u: goto label_284c08;
            case 0x284C10u: goto label_284c10;
            case 0x284C18u: goto label_284c18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284BD8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x284BE0u;
label_284be0:
    // 0x284be0: 0x1000000e  b           . + 4 + (0xE << 2)
label_284be4:
    if (ctx->pc == 0x284BE4u) {
        ctx->pc = 0x284BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BE0u;
        // 0x284be4: 0x240301f4  addiu       $v1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284BE8u;
        goto label_284be8;
    }
    ctx->pc = 0x284BE0u;
    {
        const bool branch_taken_0x284be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BE0u;
        // 0x284be4: 0x240301f4  addiu       $v1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284be0) {
            ctx->pc = 0x284C1Cu;
            goto label_284c1c;
        }
    }
    ctx->pc = 0x284BE8u;
label_284be8:
    // 0x284be8: 0x1000000c  b           . + 4 + (0xC << 2)
label_284bec:
    if (ctx->pc == 0x284BECu) {
        ctx->pc = 0x284BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BE8u;
        // 0x284bec: 0x24030258  addiu       $v1, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284BF0u;
        goto label_284bf0;
    }
    ctx->pc = 0x284BE8u;
    {
        const bool branch_taken_0x284be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BE8u;
        // 0x284bec: 0x24030258  addiu       $v1, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284be8) {
            ctx->pc = 0x284C1Cu;
            goto label_284c1c;
        }
    }
    ctx->pc = 0x284BF0u;
label_284bf0:
    // 0x284bf0: 0x1000000a  b           . + 4 + (0xA << 2)
label_284bf4:
    if (ctx->pc == 0x284BF4u) {
        ctx->pc = 0x284BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BF0u;
        // 0x284bf4: 0x240302bc  addiu       $v1, $zero, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284BF8u;
        goto label_284bf8;
    }
    ctx->pc = 0x284BF0u;
    {
        const bool branch_taken_0x284bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BF0u;
        // 0x284bf4: 0x240302bc  addiu       $v1, $zero, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bf0) {
            ctx->pc = 0x284C1Cu;
            goto label_284c1c;
        }
    }
    ctx->pc = 0x284BF8u;
label_284bf8:
    // 0x284bf8: 0x10000008  b           . + 4 + (0x8 << 2)
label_284bfc:
    if (ctx->pc == 0x284BFCu) {
        ctx->pc = 0x284BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BF8u;
        // 0x284bfc: 0x24030320  addiu       $v1, $zero, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284C00u;
        goto label_284c00;
    }
    ctx->pc = 0x284BF8u;
    {
        const bool branch_taken_0x284bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BF8u;
        // 0x284bfc: 0x24030320  addiu       $v1, $zero, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bf8) {
            ctx->pc = 0x284C1Cu;
            goto label_284c1c;
        }
    }
    ctx->pc = 0x284C00u;
label_284c00:
    // 0x284c00: 0x10000006  b           . + 4 + (0x6 << 2)
label_284c04:
    if (ctx->pc == 0x284C04u) {
        ctx->pc = 0x284C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C00u;
        // 0x284c04: 0x24030384  addiu       $v1, $zero, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284C08u;
        goto label_284c08;
    }
    ctx->pc = 0x284C00u;
    {
        const bool branch_taken_0x284c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C00u;
        // 0x284c04: 0x24030384  addiu       $v1, $zero, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c00) {
            ctx->pc = 0x284C1Cu;
            goto label_284c1c;
        }
    }
    ctx->pc = 0x284C08u;
label_284c08:
    // 0x284c08: 0x10000004  b           . + 4 + (0x4 << 2)
label_284c0c:
    if (ctx->pc == 0x284C0Cu) {
        ctx->pc = 0x284C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C08u;
        // 0x284c0c: 0x240303e8  addiu       $v1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284C10u;
        goto label_284c10;
    }
    ctx->pc = 0x284C08u;
    {
        const bool branch_taken_0x284c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C08u;
        // 0x284c0c: 0x240303e8  addiu       $v1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c08) {
            ctx->pc = 0x284C1Cu;
            goto label_284c1c;
        }
    }
    ctx->pc = 0x284C10u;
label_284c10:
    // 0x284c10: 0x10000002  b           . + 4 + (0x2 << 2)
label_284c14:
    if (ctx->pc == 0x284C14u) {
        ctx->pc = 0x284C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C10u;
        // 0x284c14: 0x2403044c  addiu       $v1, $zero, 0x44C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284C18u;
        goto label_284c18;
    }
    ctx->pc = 0x284C10u;
    {
        const bool branch_taken_0x284c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C10u;
        // 0x284c14: 0x2403044c  addiu       $v1, $zero, 0x44C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c10) {
            ctx->pc = 0x284C1Cu;
            goto label_284c1c;
        }
    }
    ctx->pc = 0x284C18u;
label_284c18:
    // 0x284c18: 0x240304b0  addiu       $v1, $zero, 0x4B0
    ctx->pc = 0x284c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
label_284c1c:
    // 0x284c1c: 0xa6230548  sh          $v1, 0x548($s1)
    ctx->pc = 0x284c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 3));
label_284c20:
    // 0x284c20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x284c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284c24:
    // 0x284c24: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x284c24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_284c28:
    // 0x284c28: 0x92231560  lbu         $v1, 0x1560($s1)
    ctx->pc = 0x284c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5472)));
label_284c2c:
    // 0x284c2c: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x284c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_284c30:
    // 0x284c30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_284c34:
    if (ctx->pc == 0x284C34u) {
        ctx->pc = 0x284C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C30u;
        // 0x284c34: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284C38u;
        goto label_284c38;
    }
    ctx->pc = 0x284C30u;
    {
        const bool branch_taken_0x284c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C30u;
        // 0x284c34: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c30) {
            ctx->pc = 0x284C50u;
            goto label_284c50;
        }
    }
    ctx->pc = 0x284C38u;
label_284c38:
    // 0x284c38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x284c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_284c3c:
    // 0x284c3c: 0x24428a90  addiu       $v0, $v0, -0x7570
    ctx->pc = 0x284c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937232));
label_284c40:
    // 0x284c40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x284c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_284c44:
    // 0x284c44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x284c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_284c48:
    // 0x284c48: 0x800008  jr          $a0
label_284c4c:
    if (ctx->pc == 0x284C4Cu) {
        ctx->pc = 0x284C50u;
        goto label_284c50;
    }
    ctx->pc = 0x284C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284C50u: goto label_284c50;
            case 0x284C88u: goto label_284c88;
            case 0x284CC0u: goto label_284cc0;
            case 0x284CFCu: goto label_284cfc;
            case 0x284D38u: goto label_284d38;
            case 0x284D70u: goto label_284d70;
            case 0x284DACu: goto label_284dac;
            case 0x284DE4u: goto label_284de4;
            case 0x284E1Cu: goto label_284e1c;
            case 0x284EB8u: goto label_284eb8;
            case 0x285028u: goto label_285028;
            case 0x285074u: goto label_285074;
            case 0x2850A8u: goto label_2850a8;
            case 0x2850DCu: goto label_2850dc;
            case 0x285124u: goto label_285124;
            case 0x285174u: goto label_285174;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284C48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x284C50u;
label_284c50:
    // 0x284c50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x284c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_284c54:
    // 0x284c54: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x284c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_284c58:
    // 0x284c58: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x284c58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_284c5c:
    // 0x284c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_284c60:
    // 0x284c60: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x284c60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_284c64:
    // 0x284c64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x284c64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284c68:
    // 0x284c68: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x284c68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_284c6c:
    // 0x284c6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x284c6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284c70:
    // 0x284c70: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x284c70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_284c74:
    // 0x284c74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_284c78:
    // 0x284c78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x284c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_284c7c:
    // 0x284c7c: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x284c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_284c80:
    // 0x284c80: 0x10000122  b           . + 4 + (0x122 << 2)
label_284c84:
    if (ctx->pc == 0x284C84u) {
        ctx->pc = 0x284C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C80u;
        // 0x284c84: 0x8c66002c  lw          $a2, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284C88u;
        goto label_284c88;
    }
    ctx->pc = 0x284C80u;
    {
        const bool branch_taken_0x284c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C80u;
        // 0x284c84: 0x8c66002c  lw          $a2, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c80) {
            ctx->pc = 0x28510Cu;
            goto label_28510c;
        }
    }
    ctx->pc = 0x284C88u;
label_284c88:
    // 0x284c88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x284c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_284c8c:
    // 0x284c8c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x284c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_284c90:
    // 0x284c90: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x284c90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_284c94:
    // 0x284c94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_284c98:
    // 0x284c98: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x284c98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_284c9c:
    // 0x284c9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x284c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284ca0:
    // 0x284ca0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x284ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_284ca4:
    // 0x284ca4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x284ca4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284ca8:
    // 0x284ca8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x284ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_284cac:
    // 0x284cac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_284cb0:
    // 0x284cb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x284cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_284cb4:
    // 0x284cb4: 0x8c6500c0  lw          $a1, 0xC0($v1)
    ctx->pc = 0x284cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_284cb8:
    // 0x284cb8: 0x10000114  b           . + 4 + (0x114 << 2)
label_284cbc:
    if (ctx->pc == 0x284CBCu) {
        ctx->pc = 0x284CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CB8u;
        // 0x284cbc: 0x8c6600c4  lw          $a2, 0xC4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284CC0u;
        goto label_284cc0;
    }
    ctx->pc = 0x284CB8u;
    {
        const bool branch_taken_0x284cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CB8u;
        // 0x284cbc: 0x8c6600c4  lw          $a2, 0xC4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cb8) {
            ctx->pc = 0x28510Cu;
            goto label_28510c;
        }
    }
    ctx->pc = 0x284CC0u;
label_284cc0:
    // 0x284cc0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x284cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_284cc4:
    // 0x284cc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x284cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_284cc8:
    // 0x284cc8: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x284cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_284ccc:
    // 0x284ccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_284cd0:
    // 0x284cd0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x284cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_284cd4:
    // 0x284cd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x284cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284cd8:
    // 0x284cd8: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x284cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
label_284cdc:
    // 0x284cdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x284cdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284ce0:
    // 0x284ce0: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x284ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_284ce4:
    // 0x284ce4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x284ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_284ce8:
    // 0x284ce8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_284cec:
    // 0x284cec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x284cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_284cf0:
    // 0x284cf0: 0x8c4500c8  lw          $a1, 0xC8($v0)
    ctx->pc = 0x284cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_284cf4:
    // 0x284cf4: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_284cf8:
    if (ctx->pc == 0x284CF8u) {
        ctx->pc = 0x284CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CF4u;
        // 0x284cf8: 0x8c4600cc  lw          $a2, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284CFCu;
        goto label_284cfc;
    }
    ctx->pc = 0x284CF4u;
    {
        const bool branch_taken_0x284cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CF4u;
        // 0x284cf8: 0x8c4600cc  lw          $a2, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cf4) {
            ctx->pc = 0x28505Cu;
            goto label_28505c;
        }
    }
    ctx->pc = 0x284CFCu;
label_284cfc:
    // 0x284cfc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x284cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_284d00:
    // 0x284d00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x284d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_284d04:
    // 0x284d04: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x284d04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_284d08:
    // 0x284d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_284d0c:
    // 0x284d0c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x284d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_284d10:
    // 0x284d10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x284d10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284d14:
    // 0x284d14: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x284d14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
label_284d18:
    // 0x284d18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x284d18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284d1c:
    // 0x284d1c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x284d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_284d20:
    // 0x284d20: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x284d20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_284d24:
    // 0x284d24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_284d28:
    // 0x284d28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x284d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_284d2c:
    // 0x284d2c: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x284d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
label_284d30:
    // 0x284d30: 0x100000ca  b           . + 4 + (0xCA << 2)
label_284d34:
    if (ctx->pc == 0x284D34u) {
        ctx->pc = 0x284D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D30u;
        // 0x284d34: 0x8c4600d4  lw          $a2, 0xD4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284D38u;
        goto label_284d38;
    }
    ctx->pc = 0x284D30u;
    {
        const bool branch_taken_0x284d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D30u;
        // 0x284d34: 0x8c4600d4  lw          $a2, 0xD4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d30) {
            ctx->pc = 0x28505Cu;
            goto label_28505c;
        }
    }
    ctx->pc = 0x284D38u;
label_284d38:
    // 0x284d38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x284d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_284d3c:
    // 0x284d3c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x284d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_284d40:
    // 0x284d40: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x284d40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
label_284d44:
    // 0x284d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_284d48:
    // 0x284d48: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x284d48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_284d4c:
    // 0x284d4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x284d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284d50:
    // 0x284d50: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x284d50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_284d54:
    // 0x284d54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x284d54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284d58:
    // 0x284d58: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x284d58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_284d5c:
    // 0x284d5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_284d60:
    // 0x284d60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x284d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_284d64:
    // 0x284d64: 0x8c4500d8  lw          $a1, 0xD8($v0)
    ctx->pc = 0x284d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_284d68:
    // 0x284d68: 0x100000bc  b           . + 4 + (0xBC << 2)
label_284d6c:
    if (ctx->pc == 0x284D6Cu) {
        ctx->pc = 0x284D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D68u;
        // 0x284d6c: 0x8c4600dc  lw          $a2, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284D70u;
        goto label_284d70;
    }
    ctx->pc = 0x284D68u;
    {
        const bool branch_taken_0x284d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D68u;
        // 0x284d6c: 0x8c4600dc  lw          $a2, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d68) {
            ctx->pc = 0x28505Cu;
            goto label_28505c;
        }
    }
    ctx->pc = 0x284D70u;
label_284d70:
    // 0x284d70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x284d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_284d74:
    // 0x284d74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x284d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_284d78:
    // 0x284d78: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x284d78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_284d7c:
    // 0x284d7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_284d80:
    // 0x284d80: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x284d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_284d84:
    // 0x284d84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x284d84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284d88:
    // 0x284d88: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x284d88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
label_284d8c:
    // 0x284d8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x284d8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284d90:
    // 0x284d90: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x284d90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_284d94:
    // 0x284d94: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x284d94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_284d98:
    // 0x284d98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_284d9c:
    // 0x284d9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x284d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_284da0:
    // 0x284da0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x284da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_284da4:
    // 0x284da4: 0x100000ad  b           . + 4 + (0xAD << 2)
label_284da8:
    if (ctx->pc == 0x284DA8u) {
        ctx->pc = 0x284DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DA4u;
        // 0x284da8: 0x8c46002c  lw          $a2, 0x2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284DACu;
        goto label_284dac;
    }
    ctx->pc = 0x284DA4u;
    {
        const bool branch_taken_0x284da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DA4u;
        // 0x284da8: 0x8c46002c  lw          $a2, 0x2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284da4) {
            ctx->pc = 0x28505Cu;
            goto label_28505c;
        }
    }
    ctx->pc = 0x284DACu;
label_284dac:
    // 0x284dac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x284dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_284db0:
    // 0x284db0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x284db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_284db4:
    // 0x284db4: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x284db4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_284db8:
    // 0x284db8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_284dbc:
    // 0x284dbc: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x284dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_284dc0:
    // 0x284dc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x284dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284dc4:
    // 0x284dc4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x284dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_284dc8:
    // 0x284dc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x284dc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284dcc:
    // 0x284dcc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x284dccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_284dd0:
    // 0x284dd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_284dd4:
    // 0x284dd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x284dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_284dd8:
    // 0x284dd8: 0x8c650110  lw          $a1, 0x110($v1)
    ctx->pc = 0x284dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_284ddc:
    // 0x284ddc: 0x100000cb  b           . + 4 + (0xCB << 2)
label_284de0:
    if (ctx->pc == 0x284DE0u) {
        ctx->pc = 0x284DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DDCu;
        // 0x284de0: 0x8c660114  lw          $a2, 0x114($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284DE4u;
        goto label_284de4;
    }
    ctx->pc = 0x284DDCu;
    {
        const bool branch_taken_0x284ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DDCu;
        // 0x284de0: 0x8c660114  lw          $a2, 0x114($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ddc) {
            ctx->pc = 0x28510Cu;
            goto label_28510c;
        }
    }
    ctx->pc = 0x284DE4u;
label_284de4:
    // 0x284de4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x284de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_284de8:
    // 0x284de8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x284de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_284dec:
    // 0x284dec: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x284decu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_284df0:
    // 0x284df0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_284df4:
    // 0x284df4: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x284df4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_284df8:
    // 0x284df8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x284df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284dfc:
    // 0x284dfc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x284dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_284e00:
    // 0x284e00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x284e00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284e04:
    // 0x284e04: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x284e04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_284e08:
    // 0x284e08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_284e0c:
    // 0x284e0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x284e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_284e10:
    // 0x284e10: 0x8c650120  lw          $a1, 0x120($v1)
    ctx->pc = 0x284e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
label_284e14:
    // 0x284e14: 0x100000bd  b           . + 4 + (0xBD << 2)
label_284e18:
    if (ctx->pc == 0x284E18u) {
        ctx->pc = 0x284E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E14u;
        // 0x284e18: 0x8c660124  lw          $a2, 0x124($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284E1Cu;
        goto label_284e1c;
    }
    ctx->pc = 0x284E14u;
    {
        const bool branch_taken_0x284e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E14u;
        // 0x284e18: 0x8c660124  lw          $a2, 0x124($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284e14) {
            ctx->pc = 0x28510Cu;
            goto label_28510c;
        }
    }
    ctx->pc = 0x284E1Cu;
label_284e1c:
    // 0x284e1c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x284e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_284e20:
    // 0x284e20: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x284e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_284e24:
    // 0x284e24: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x284e24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_284e28:
    // 0x284e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_284e2c:
    // 0x284e2c: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x284e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_284e30:
    // 0x284e30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x284e30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284e34:
    // 0x284e34: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x284e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_284e38:
    // 0x284e38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x284e38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284e3c:
    // 0x284e3c: 0xa6230548  sh          $v1, 0x548($s1)
    ctx->pc = 0x284e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 3));
label_284e40:
    // 0x284e40: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x284e40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_284e44:
    // 0x284e44: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x284e44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_284e48:
    // 0x284e48: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x284e48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_284e4c:
    // 0x284e4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x284e4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_284e50:
    // 0x284e50: 0x8c450140  lw          $a1, 0x140($v0)
    ctx->pc = 0x284e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
label_284e54:
    // 0x284e54: 0x8c460144  lw          $a2, 0x144($v0)
    ctx->pc = 0x284e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_284e58:
    // 0x284e58: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x284e58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_284e5c:
    // 0x284e5c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x284e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_284e60:
    // 0x284e60: 0xc055d5a  jal         func_157568
label_284e64:
    if (ctx->pc == 0x284E64u) {
        ctx->pc = 0x284E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E60u;
        // 0x284e64: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284E68u;
        goto label_284e68;
    }
    ctx->pc = 0x284E60u;
    SET_GPR_U32(ctx, 31, 0x284E68u);
    ctx->pc = 0x284E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284E60u;
    // 0x284e64: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157568u, 0x284E60u, 0x284E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E68u;
label_284e68:
    // 0x284e68: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x284e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_284e6c:
    // 0x284e6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_284e70:
    // 0x284e70: 0xc052dcc  jal         func_14B730
label_284e74:
    if (ctx->pc == 0x284E74u) {
        ctx->pc = 0x284E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E70u;
        // 0x284e74: 0x24a58a08  addiu       $a1, $a1, -0x75F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284E78u;
        goto label_284e78;
    }
    ctx->pc = 0x284E70u;
    SET_GPR_U32(ctx, 31, 0x284E78u);
    ctx->pc = 0x284E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284E70u;
    // 0x284e74: 0x24a58a08  addiu       $a1, $a1, -0x75F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x284E70u, 0x284E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E78u;
label_284e78:
    // 0x284e78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x284e78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_284e7c:
    // 0x284e7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_284e80:
    if (ctx->pc == 0x284E80u) {
        ctx->pc = 0x284E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E7Cu;
        // 0x284e80: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284E84u;
        goto label_284e84;
    }
    ctx->pc = 0x284E7Cu;
    {
        const bool branch_taken_0x284e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E7Cu;
        // 0x284e80: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284e7c) {
            ctx->pc = 0x284E90u;
            goto label_284e90;
        }
    }
    ctx->pc = 0x284E84u;
label_284e84:
    // 0x284e84: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x284e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_284e88:
    // 0x284e88: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x284e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_284e8c:
    // 0x284e8c: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x284e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_284e90:
    // 0x284e90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_284e94:
    // 0x284e94: 0xc052dcc  jal         func_14B730
label_284e98:
    if (ctx->pc == 0x284E98u) {
        ctx->pc = 0x284E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E94u;
        // 0x284e98: 0x24a58a18  addiu       $a1, $a1, -0x75E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284E9Cu;
        goto label_284e9c;
    }
    ctx->pc = 0x284E94u;
    SET_GPR_U32(ctx, 31, 0x284E9Cu);
    ctx->pc = 0x284E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284E94u;
    // 0x284e98: 0x24a58a18  addiu       $a1, $a1, -0x75E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x284E94u, 0x284E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E9Cu;
label_284e9c:
    // 0x284e9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x284e9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_284ea0:
    // 0x284ea0: 0x506000c5  beql        $v1, $zero, . + 4 + (0xC5 << 2)
label_284ea4:
    if (ctx->pc == 0x284EA4u) {
        ctx->pc = 0x284EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284EA0u;
        // 0x284ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284EA8u;
        goto label_284ea8;
    }
    ctx->pc = 0x284EA0u;
    {
        const bool branch_taken_0x284ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284ea0) {
            ctx->pc = 0x284EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284EA0u;
            // 0x284ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2851B8u;
            goto label_2851b8;
        }
    }
    ctx->pc = 0x284EA8u;
label_284ea8:
    // 0x284ea8: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x284ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_284eac:
    // 0x284eac: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x284eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_284eb0:
    // 0x284eb0: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_284eb4:
    if (ctx->pc == 0x284EB4u) {
        ctx->pc = 0x284EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284EB0u;
        // 0x284eb4: 0xac620380  sw          $v0, 0x380($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284EB8u;
        goto label_284eb8;
    }
    ctx->pc = 0x284EB0u;
    {
        const bool branch_taken_0x284eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284EB0u;
        // 0x284eb4: 0xac620380  sw          $v0, 0x380($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284eb0) {
            ctx->pc = 0x2851B4u;
            goto label_2851b4;
        }
    }
    ctx->pc = 0x284EB8u;
label_284eb8:
    // 0x284eb8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x284eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_284ebc:
    // 0x284ebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x284ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_284ec0:
    // 0x284ec0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x284ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_284ec4:
    // 0x284ec4: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x284ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_284ec8:
    // 0x284ec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x284ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_284ecc:
    // 0x284ecc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x284eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_284ed0:
    // 0x284ed0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x284ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284ed4:
    // 0x284ed4: 0xe6200604  swc1        $f0, 0x604($s1)
    ctx->pc = 0x284ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
label_284ed8:
    // 0x284ed8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x284ed8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284edc:
    // 0x284edc: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x284edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
label_284ee0:
    // 0x284ee0: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x284ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_284ee4:
    // 0x284ee4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x284ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_284ee8:
    // 0x284ee8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x284ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_284eec:
    // 0x284eec: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x284eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_284ef0:
    // 0x284ef0: 0x8c450168  lw          $a1, 0x168($v0)
    ctx->pc = 0x284ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 360)));
label_284ef4:
    // 0x284ef4: 0x8c46016c  lw          $a2, 0x16C($v0)
    ctx->pc = 0x284ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
label_284ef8:
    // 0x284ef8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x284ef8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_284efc:
    // 0x284efc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x284efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_284f00:
    // 0x284f00: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x284f00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_284f04:
    // 0x284f04: 0xc055d5a  jal         func_157568
label_284f08:
    if (ctx->pc == 0x284F08u) {
        ctx->pc = 0x284F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F04u;
        // 0x284f08: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F0Cu;
        goto label_284f0c;
    }
    ctx->pc = 0x284F04u;
    SET_GPR_U32(ctx, 31, 0x284F0Cu);
    ctx->pc = 0x284F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284F04u;
    // 0x284f08: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157568u, 0x284F04u, 0x284F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284F0Cu;
label_284f0c:
    // 0x284f0c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x284f0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_284f10:
    // 0x284f10: 0xc0c3ea6  jal         func_30FA98
label_284f14:
    if (ctx->pc == 0x284F14u) {
        ctx->pc = 0x284F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F10u;
        // 0x284f14: 0x240403b1  addiu       $a0, $zero, 0x3B1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 945));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F18u;
        goto label_284f18;
    }
    ctx->pc = 0x284F10u;
    SET_GPR_U32(ctx, 31, 0x284F18u);
    ctx->pc = 0x284F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284F10u;
    // 0x284f14: 0x240403b1  addiu       $a0, $zero, 0x3B1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 945));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x284F10u, 0x284F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284F18u;
label_284f18:
    // 0x284f18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x284f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_284f1c:
    // 0x284f1c: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
label_284f20:
    if (ctx->pc == 0x284F20u) {
        ctx->pc = 0x284F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F1Cu;
        // 0x284f20: 0xae2515ec  sw          $a1, 0x15EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5612), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F24u;
        goto label_284f24;
    }
    ctx->pc = 0x284F1Cu;
    {
        const bool branch_taken_0x284f1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x284F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F1Cu;
        // 0x284f20: 0xae2515ec  sw          $a1, 0x15EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5612), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f1c) {
            ctx->pc = 0x285000u;
            goto label_285000;
        }
    }
    ctx->pc = 0x284F24u;
label_284f24:
    // 0x284f24: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x284f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_284f28:
    // 0x284f28: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x284f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_284f2c:
    // 0x284f2c: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x284f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_284f30:
    // 0x284f30: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x284f30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_284f34:
    // 0x284f34: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x284f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_284f38:
    // 0x284f38: 0x40f809  jalr        $v0
label_284f3c:
    if (ctx->pc == 0x284F3Cu) {
        ctx->pc = 0x284F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F38u;
        // 0x284f3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F40u;
        goto label_284f40;
    }
    ctx->pc = 0x284F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x284F40u);
        ctx->pc = 0x284F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F38u;
        // 0x284f3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284F38u, 0x284F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x284F40u;
label_284f40:
    // 0x284f40: 0x8e2215ec  lw          $v0, 0x15EC($s1)
    ctx->pc = 0x284f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5612)));
label_284f44:
    // 0x284f44: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x284f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_284f48:
    // 0x284f48: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x284f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_284f4c:
    // 0x284f4c: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
label_284f50:
    if (ctx->pc == 0x284F50u) {
        ctx->pc = 0x284F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F4Cu;
        // 0x284f50: 0x8e2415ec  lw          $a0, 0x15EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F54u;
        goto label_284f54;
    }
    ctx->pc = 0x284F4Cu;
    {
        const bool branch_taken_0x284f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x284f4c) {
            ctx->pc = 0x284F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284F4Cu;
            // 0x284f50: 0x8e2415ec  lw          $a0, 0x15EC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284F70u;
            goto label_284f70;
        }
    }
    ctx->pc = 0x284F54u;
label_284f54:
    // 0x284f54: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x284f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284f58:
    // 0x284f58: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x284f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_284f5c:
    // 0x284f5c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x284f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_284f60:
    // 0x284f60: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x284f60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_284f64:
    // 0x284f64: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x284f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284f68:
    // 0x284f68: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x284f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_284f6c:
    // 0x284f6c: 0x8e2415ec  lw          $a0, 0x15EC($s1)
    ctx->pc = 0x284f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5612)));
label_284f70:
    // 0x284f70: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x284f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_284f74:
    // 0x284f74: 0x24830490  addiu       $v1, $a0, 0x490
    ctx->pc = 0x284f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
label_284f78:
    // 0x284f78: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_284f7c:
    if (ctx->pc == 0x284F7Cu) {
        ctx->pc = 0x284F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F78u;
        // 0x284f7c: 0x8e2215ec  lw          $v0, 0x15EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F80u;
        goto label_284f80;
    }
    ctx->pc = 0x284F78u;
    {
        const bool branch_taken_0x284f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x284f78) {
            ctx->pc = 0x284F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284F78u;
            // 0x284f7c: 0x8e2215ec  lw          $v0, 0x15EC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284F9Cu;
            goto label_284f9c;
        }
    }
    ctx->pc = 0x284F80u;
label_284f80:
    // 0x284f80: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x284f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284f84:
    // 0x284f84: 0xe4800490  swc1        $f0, 0x490($a0)
    ctx->pc = 0x284f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1168), bits); }
label_284f88:
    // 0x284f88: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x284f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_284f8c:
    // 0x284f8c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x284f8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_284f90:
    // 0x284f90: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x284f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284f94:
    // 0x284f94: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x284f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_284f98:
    // 0x284f98: 0x8e2215ec  lw          $v0, 0x15EC($s1)
    ctx->pc = 0x284f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5612)));
label_284f9c:
    // 0x284f9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x284f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_284fa0:
    // 0x284fa0: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x284fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_284fa4:
    // 0x284fa4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x284fa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_284fa8:
    // 0x284fa8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x284fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_284fac:
    // 0x284fac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x284facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_284fb0:
    // 0x284fb0: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x284fb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
label_284fb4:
    // 0x284fb4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x284fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_284fb8:
    // 0x284fb8: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x284fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_284fbc:
    // 0x284fbc: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x284fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_284fc0:
    // 0x284fc0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x284fc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_284fc4:
    // 0x284fc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x284fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_284fc8:
    // 0x284fc8: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x284fc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_284fcc:
    // 0x284fcc: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x284fccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_284fd0:
    // 0x284fd0: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x284fd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_284fd4:
    // 0x284fd4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x284fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_284fd8:
    // 0x284fd8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x284fd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_284fdc:
    // 0x284fdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x284fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_284fe0:
    // 0x284fe0: 0x8e2415ec  lw          $a0, 0x15EC($s1)
    ctx->pc = 0x284fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5612)));
label_284fe4:
    // 0x284fe4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x284fe4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_284fe8:
    // 0x284fe8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x284fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_284fec:
    // 0x284fec: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x284fecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_284ff0:
    // 0x284ff0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x284ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_284ff4:
    // 0x284ff4: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x284ff4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_284ff8:
    // 0x284ff8: 0xc073c58  jal         func_1CF160
label_284ffc:
    if (ctx->pc == 0x284FFCu) {
        ctx->pc = 0x284FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FF8u;
        // 0x284ffc: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x285000u;
        goto label_285000;
    }
    ctx->pc = 0x284FF8u;
    SET_GPR_U32(ctx, 31, 0x285000u);
    ctx->pc = 0x284FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284FF8u;
    // 0x284ffc: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF160u, 0x284FF8u, 0x285000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285000u;
label_285000:
    // 0x285000: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x285000u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_285004:
    // 0x285004: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x285004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285008:
    // 0x285008: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x285008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28500c:
    // 0x28500c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28500cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285010:
    // 0x285010: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x285010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285014:
    // 0x285014: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x285014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_285018:
    // 0x285018: 0xc0c194a  jal         func_306528
label_28501c:
    if (ctx->pc == 0x28501Cu) {
        ctx->pc = 0x28501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285018u;
        // 0x28501c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285020u;
        goto label_285020;
    }
    ctx->pc = 0x285018u;
    SET_GPR_U32(ctx, 31, 0x285020u);
    ctx->pc = 0x28501Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285018u;
    // 0x28501c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x285018u, 0x285020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285020u;
label_285020:
    // 0x285020: 0x10000065  b           . + 4 + (0x65 << 2)
label_285024:
    if (ctx->pc == 0x285024u) {
        ctx->pc = 0x285024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285020u;
        // 0x285024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285028u;
        goto label_285028;
    }
    ctx->pc = 0x285020u;
    {
        const bool branch_taken_0x285020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285020u;
        // 0x285024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285020) {
            ctx->pc = 0x2851B8u;
            goto label_2851b8;
        }
    }
    ctx->pc = 0x285028u;
label_285028:
    // 0x285028: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x285028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_28502c:
    // 0x28502c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x28502cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_285030:
    // 0x285030: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x285030u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_285034:
    // 0x285034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285038:
    // 0x285038: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x285038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_28503c:
    // 0x28503c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28503cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285040:
    // 0x285040: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x285040u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
label_285044:
    // 0x285044: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x285044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285048:
    // 0x285048: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x285048u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_28504c:
    // 0x28504c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x28504cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_285050:
    // 0x285050: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x285050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_285054:
    // 0x285054: 0x8c450148  lw          $a1, 0x148($v0)
    ctx->pc = 0x285054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
label_285058:
    // 0x285058: 0x8c46014c  lw          $a2, 0x14C($v0)
    ctx->pc = 0x285058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_28505c:
    // 0x28505c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x28505cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_285060:
    // 0x285060: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x285060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_285064:
    // 0x285064: 0xc055d5a  jal         func_157568
label_285068:
    if (ctx->pc == 0x285068u) {
        ctx->pc = 0x285068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285064u;
        // 0x285068: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28506Cu;
        goto label_28506c;
    }
    ctx->pc = 0x285064u;
    SET_GPR_U32(ctx, 31, 0x28506Cu);
    ctx->pc = 0x285068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285064u;
    // 0x285068: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157568u, 0x285064u, 0x28506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28506Cu;
label_28506c:
    // 0x28506c: 0x10000052  b           . + 4 + (0x52 << 2)
label_285070:
    if (ctx->pc == 0x285070u) {
        ctx->pc = 0x285070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28506Cu;
        // 0x285070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285074u;
        goto label_285074;
    }
    ctx->pc = 0x28506Cu;
    {
        const bool branch_taken_0x28506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28506Cu;
        // 0x285070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28506c) {
            ctx->pc = 0x2851B8u;
            goto label_2851b8;
        }
    }
    ctx->pc = 0x285074u;
label_285074:
    // 0x285074: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x285074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_285078:
    // 0x285078: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x285078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_28507c:
    // 0x28507c: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x28507cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_285080:
    // 0x285080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285084:
    // 0x285084: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x285084u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_285088:
    // 0x285088: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x285088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28508c:
    // 0x28508c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x28508cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_285090:
    // 0x285090: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x285090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285094:
    // 0x285094: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x285094u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_285098:
    // 0x285098: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x285098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28509c:
    // 0x28509c: 0x8c650168  lw          $a1, 0x168($v1)
    ctx->pc = 0x28509cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 360)));
label_2850a0:
    // 0x2850a0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2850a4:
    if (ctx->pc == 0x2850A4u) {
        ctx->pc = 0x2850A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850A0u;
        // 0x2850a4: 0x8c66016c  lw          $a2, 0x16C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2850A8u;
        goto label_2850a8;
    }
    ctx->pc = 0x2850A0u;
    {
        const bool branch_taken_0x2850a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2850A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850A0u;
        // 0x2850a4: 0x8c66016c  lw          $a2, 0x16C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850a0) {
            ctx->pc = 0x28510Cu;
            goto label_28510c;
        }
    }
    ctx->pc = 0x2850A8u;
label_2850a8:
    // 0x2850a8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2850a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2850ac:
    // 0x2850ac: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2850acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_2850b0:
    // 0x2850b0: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x2850b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_2850b4:
    // 0x2850b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2850b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2850b8:
    // 0x2850b8: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x2850b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_2850bc:
    // 0x2850bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2850bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2850c0:
    // 0x2850c0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x2850c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_2850c4:
    // 0x2850c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2850c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2850c8:
    // 0x2850c8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x2850c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_2850cc:
    // 0x2850cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2850ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2850d0:
    // 0x2850d0: 0x8c650180  lw          $a1, 0x180($v1)
    ctx->pc = 0x2850d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
label_2850d4:
    // 0x2850d4: 0x1000000d  b           . + 4 + (0xD << 2)
label_2850d8:
    if (ctx->pc == 0x2850D8u) {
        ctx->pc = 0x2850D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850D4u;
        // 0x2850d8: 0x8c660184  lw          $a2, 0x184($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2850DCu;
        goto label_2850dc;
    }
    ctx->pc = 0x2850D4u;
    {
        const bool branch_taken_0x2850d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2850D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850D4u;
        // 0x2850d8: 0x8c660184  lw          $a2, 0x184($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850d4) {
            ctx->pc = 0x28510Cu;
            goto label_28510c;
        }
    }
    ctx->pc = 0x2850DCu;
label_2850dc:
    // 0x2850dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2850dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2850e0:
    // 0x2850e0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2850e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_2850e4:
    // 0x2850e4: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x2850e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_2850e8:
    // 0x2850e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2850e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2850ec:
    // 0x2850ec: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x2850ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_2850f0:
    // 0x2850f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2850f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2850f4:
    // 0x2850f4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x2850f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_2850f8:
    // 0x2850f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2850f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2850fc:
    // 0x2850fc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x2850fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_285100:
    // 0x285100: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x285100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_285104:
    // 0x285104: 0x8c650140  lw          $a1, 0x140($v1)
    ctx->pc = 0x285104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
label_285108:
    // 0x285108: 0x8c660144  lw          $a2, 0x144($v1)
    ctx->pc = 0x285108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_28510c:
    // 0x28510c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x28510cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_285110:
    // 0x285110: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x285110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_285114:
    // 0x285114: 0xc055d5a  jal         func_157568
label_285118:
    if (ctx->pc == 0x285118u) {
        ctx->pc = 0x285118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285114u;
        // 0x285118: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28511Cu;
        goto label_28511c;
    }
    ctx->pc = 0x285114u;
    SET_GPR_U32(ctx, 31, 0x28511Cu);
    ctx->pc = 0x285118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285114u;
    // 0x285118: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157568u, 0x285114u, 0x28511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28511Cu;
label_28511c:
    // 0x28511c: 0x10000026  b           . + 4 + (0x26 << 2)
label_285120:
    if (ctx->pc == 0x285120u) {
        ctx->pc = 0x285120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28511Cu;
        // 0x285120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285124u;
        goto label_285124;
    }
    ctx->pc = 0x28511Cu;
    {
        const bool branch_taken_0x28511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28511Cu;
        // 0x285120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28511c) {
            ctx->pc = 0x2851B8u;
            goto label_2851b8;
        }
    }
    ctx->pc = 0x285124u;
label_285124:
    // 0x285124: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x285124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_285128:
    // 0x285128: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x285128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_28512c:
    // 0x28512c: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x28512cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_285130:
    // 0x285130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285134:
    // 0x285134: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x285134u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_285138:
    // 0x285138: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x285138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28513c:
    // 0x28513c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x28513cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_285140:
    // 0x285140: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x285140u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285144:
    // 0x285144: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x285144u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_285148:
    // 0x285148: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x285148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28514c:
    // 0x28514c: 0x8c650140  lw          $a1, 0x140($v1)
    ctx->pc = 0x28514cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
label_285150:
    // 0x285150: 0x8c660144  lw          $a2, 0x144($v1)
    ctx->pc = 0x285150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_285154:
    // 0x285154: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x285154u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_285158:
    // 0x285158: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x285158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_28515c:
    // 0x28515c: 0xc055d5a  jal         func_157568
label_285160:
    if (ctx->pc == 0x285160u) {
        ctx->pc = 0x285160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28515Cu;
        // 0x285160: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285164u;
        goto label_285164;
    }
    ctx->pc = 0x28515Cu;
    SET_GPR_U32(ctx, 31, 0x285164u);
    ctx->pc = 0x285160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28515Cu;
    // 0x285160: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157568u, 0x28515Cu, 0x285164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285164u;
label_285164:
    // 0x285164: 0x8e2315b0  lw          $v1, 0x15B0($s1)
    ctx->pc = 0x285164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_285168:
    // 0x285168: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x285168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_28516c:
    // 0x28516c: 0x10000011  b           . + 4 + (0x11 << 2)
label_285170:
    if (ctx->pc == 0x285170u) {
        ctx->pc = 0x285170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28516Cu;
        // 0x285170: 0xae2315b0  sw          $v1, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285174u;
        goto label_285174;
    }
    ctx->pc = 0x28516Cu;
    {
        const bool branch_taken_0x28516c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28516Cu;
        // 0x285170: 0xae2315b0  sw          $v1, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28516c) {
            ctx->pc = 0x2851B4u;
            goto label_2851b4;
        }
    }
    ctx->pc = 0x285174u;
label_285174:
    // 0x285174: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x285174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_285178:
    // 0x285178: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x285178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_28517c:
    // 0x28517c: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x28517cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_285180:
    // 0x285180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285184:
    // 0x285184: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x285184u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_285188:
    // 0x285188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x285188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28518c:
    // 0x28518c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x28518cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_285190:
    // 0x285190: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x285190u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285194:
    // 0x285194: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x285194u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_285198:
    // 0x285198: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x285198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28519c:
    // 0x28519c: 0x8c650140  lw          $a1, 0x140($v1)
    ctx->pc = 0x28519cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
label_2851a0:
    // 0x2851a0: 0x8c660144  lw          $a2, 0x144($v1)
    ctx->pc = 0x2851a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_2851a4:
    // 0x2851a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2851a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2851a8:
    // 0x2851a8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2851a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2851ac:
    // 0x2851ac: 0xc055d5a  jal         func_157568
label_2851b0:
    if (ctx->pc == 0x2851B0u) {
        ctx->pc = 0x2851B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851ACu;
        // 0x2851b0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2851B4u;
        goto label_2851b4;
    }
    ctx->pc = 0x2851ACu;
    SET_GPR_U32(ctx, 31, 0x2851B4u);
    ctx->pc = 0x2851B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2851ACu;
    // 0x2851b0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157568u, 0x2851ACu, 0x2851B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2851B4u;
label_2851b4:
    // 0x2851b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2851b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2851b8:
    // 0x2851b8: 0xc055f06  jal         func_157C18
label_2851bc:
    if (ctx->pc == 0x2851BCu) {
        ctx->pc = 0x2851BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851B8u;
        // 0x2851bc: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2851C0u;
        goto label_2851c0;
    }
    ctx->pc = 0x2851B8u;
    SET_GPR_U32(ctx, 31, 0x2851C0u);
    ctx->pc = 0x2851BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2851B8u;
    // 0x2851bc: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2851B8u, 0x2851C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2851C0u;
label_2851c0:
    // 0x2851c0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2851c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2851c4:
    // 0x2851c4: 0xc0527ae  jal         func_149EB8
label_2851c8:
    if (ctx->pc == 0x2851C8u) {
        ctx->pc = 0x2851C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851C4u;
        // 0x2851c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2851CCu;
        goto label_2851cc;
    }
    ctx->pc = 0x2851C4u;
    SET_GPR_U32(ctx, 31, 0x2851CCu);
    ctx->pc = 0x2851C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2851C4u;
    // 0x2851c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x2851C4u, 0x2851CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2851CCu;
label_2851cc:
    // 0x2851cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2851ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2851d0:
    // 0x2851d0: 0xc054a88  jal         func_152A20
label_2851d4:
    if (ctx->pc == 0x2851D4u) {
        ctx->pc = 0x2851D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851D0u;
        // 0x2851d4: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2851D8u;
        goto label_2851d8;
    }
    ctx->pc = 0x2851D0u;
    SET_GPR_U32(ctx, 31, 0x2851D8u);
    ctx->pc = 0x2851D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2851D0u;
    // 0x2851d4: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x2851D0u, 0x2851D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2851D8u;
label_2851d8:
    // 0x2851d8: 0xc05280e  jal         func_14A038
label_2851dc:
    if (ctx->pc == 0x2851DCu) {
        ctx->pc = 0x2851DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851D8u;
        // 0x2851dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2851E0u;
        goto label_2851e0;
    }
    ctx->pc = 0x2851D8u;
    SET_GPR_U32(ctx, 31, 0x2851E0u);
    ctx->pc = 0x2851DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2851D8u;
    // 0x2851dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x2851D8u, 0x2851E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2851E0u;
label_2851e0:
    // 0x2851e0: 0x26042fc0  addiu       $a0, $s0, 0x2FC0
    ctx->pc = 0x2851e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
label_2851e4:
    // 0x2851e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2851e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2851e8:
    // 0x2851e8: 0xc04d476  jal         func_1351D8
label_2851ec:
    if (ctx->pc == 0x2851ECu) {
        ctx->pc = 0x2851ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851E8u;
        // 0x2851ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2851F0u;
        goto label_2851f0;
    }
    ctx->pc = 0x2851E8u;
    SET_GPR_U32(ctx, 31, 0x2851F0u);
    ctx->pc = 0x2851ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2851E8u;
    // 0x2851ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2851E8u, 0x2851F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2851F0u;
label_2851f0:
    // 0x2851f0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2851f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_2851f4:
    // 0x2851f4: 0x26231590  addiu       $v1, $s1, 0x1590
    ctx->pc = 0x2851f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5520));
label_2851f8:
    // 0x2851f8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2851fc:
    if (ctx->pc == 0x2851FCu) {
        ctx->pc = 0x2851FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851F8u;
        // 0x2851fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285200u;
        goto label_285200;
    }
    ctx->pc = 0x2851F8u;
    {
        const bool branch_taken_0x2851f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2851FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851F8u;
        // 0x2851fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2851f8) {
            ctx->pc = 0x285218u;
            goto label_285218;
        }
    }
    ctx->pc = 0x285200u;
label_285200:
    // 0x285200: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x285200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285204:
    // 0x285204: 0xe6201590  swc1        $f0, 0x1590($s1)
    ctx->pc = 0x285204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5520), bits); }
label_285208:
    // 0x285208: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x285208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28520c:
    // 0x28520c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x28520cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_285210:
    // 0x285210: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x285210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285214:
    // 0x285214: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x285214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_285218:
    // 0x285218: 0xc05404a  jal         func_150128
label_28521c:
    if (ctx->pc == 0x28521Cu) {
        ctx->pc = 0x28521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285218u;
        // 0x28521c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285220u;
        goto label_285220;
    }
    ctx->pc = 0x285218u;
    SET_GPR_U32(ctx, 31, 0x285220u);
    ctx->pc = 0x28521Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285218u;
    // 0x28521c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x285218u, 0x285220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285220u;
label_285220:
    // 0x285220: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x285220u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
label_285224:
    // 0x285224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285228:
    // 0x285228: 0x24c63f68  addiu       $a2, $a2, 0x3F68
    ctx->pc = 0x285228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16232));
label_28522c:
    // 0x28522c: 0xc053bd4  jal         func_14EF50
label_285230:
    if (ctx->pc == 0x285230u) {
        ctx->pc = 0x285230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28522Cu;
        // 0x285230: 0x26250690  addiu       $a1, $s1, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285234u;
        goto label_285234;
    }
    ctx->pc = 0x28522Cu;
    SET_GPR_U32(ctx, 31, 0x285234u);
    ctx->pc = 0x285230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28522Cu;
    // 0x285230: 0x26250690  addiu       $a1, $s1, 0x690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF50u, 0x28522Cu, 0x285234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285234u;
label_285234:
    // 0x285234: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x285234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_285238:
    // 0x285238: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x285238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28523c:
    // 0x28523c: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x28523cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
label_285240:
    // 0x285240: 0xc07f886  jal         func_1FE218
label_285244:
    if (ctx->pc == 0x285244u) {
        ctx->pc = 0x285244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285240u;
        // 0x285244: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285248u;
        goto label_285248;
    }
    ctx->pc = 0x285240u;
    SET_GPR_U32(ctx, 31, 0x285248u);
    ctx->pc = 0x285244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285240u;
    // 0x285244: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x285240u, 0x285248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285248u;
label_285248:
    // 0x285248: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x285248u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_28524c:
    // 0x28524c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28524cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285250:
    // 0x285250: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x285250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
label_285254:
    // 0x285254: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x285254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_285258:
    // 0x285258: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28525c:
    if (ctx->pc == 0x28525Cu) {
        ctx->pc = 0x28525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285258u;
        // 0x28525c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285260u;
        goto label_285260;
    }
    ctx->pc = 0x285258u;
    {
        const bool branch_taken_0x285258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285258u;
        // 0x28525c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285258) {
            ctx->pc = 0x28526Cu;
            goto label_28526c;
        }
    }
    ctx->pc = 0x285260u;
label_285260:
    // 0x285260: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x285260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_285264:
    // 0x285264: 0x10000002  b           . + 4 + (0x2 << 2)
label_285268:
    if (ctx->pc == 0x285268u) {
        ctx->pc = 0x285268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285264u;
        // 0x285268: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28526Cu;
        goto label_28526c;
    }
    ctx->pc = 0x285264u;
    {
        const bool branch_taken_0x285264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285264u;
        // 0x285268: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285264) {
            ctx->pc = 0x285270u;
            goto label_285270;
        }
    }
    ctx->pc = 0x28526Cu;
label_28526c:
    // 0x28526c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28526cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285270:
    // 0x285270: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x285270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_285274:
    // 0x285274: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x285274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_285278:
    // 0x285278: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x285278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_28527c:
    // 0x28527c: 0x8e240670  lw          $a0, 0x670($s1)
    ctx->pc = 0x28527cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_285280:
    // 0x285280: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x285280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_285284:
    // 0x285284: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x285284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_285288:
    // 0x285288: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x285288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28528c:
    // 0x28528c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x28528cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_285290:
    // 0x285290: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x285290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_285294:
    // 0x285294: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x285294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_285298:
    // 0x285298: 0xc07f6bc  jal         func_1FDAF0
label_28529c:
    if (ctx->pc == 0x28529Cu) {
        ctx->pc = 0x28529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285298u;
        // 0x28529c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2852A0u;
        goto label_2852a0;
    }
    ctx->pc = 0x285298u;
    SET_GPR_U32(ctx, 31, 0x2852A0u);
    ctx->pc = 0x28529Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285298u;
    // 0x28529c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x285298u, 0x2852A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2852A0u;
label_2852a0:
    // 0x2852a0: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x2852a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_2852a4:
    // 0x2852a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2852a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2852a8:
    // 0x2852a8: 0xae220674  sw          $v0, 0x674($s1)
    ctx->pc = 0x2852a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 2));
label_2852ac:
    // 0x2852ac: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2852acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2852b0:
    // 0x2852b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2852b4:
    if (ctx->pc == 0x2852B4u) {
        ctx->pc = 0x2852B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852B0u;
        // 0x2852b4: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2852B8u;
        goto label_2852b8;
    }
    ctx->pc = 0x2852B0u;
    {
        const bool branch_taken_0x2852b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2852B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852B0u;
        // 0x2852b4: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2852b0) {
            ctx->pc = 0x2852C4u;
            goto label_2852c4;
        }
    }
    ctx->pc = 0x2852B8u;
label_2852b8:
    // 0x2852b8: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x2852b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_2852bc:
    // 0x2852bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2852c0:
    if (ctx->pc == 0x2852C0u) {
        ctx->pc = 0x2852C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852BCu;
        // 0x2852c0: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2852C4u;
        goto label_2852c4;
    }
    ctx->pc = 0x2852BCu;
    {
        const bool branch_taken_0x2852bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2852C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852BCu;
        // 0x2852c0: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2852bc) {
            ctx->pc = 0x2852C8u;
            goto label_2852c8;
        }
    }
    ctx->pc = 0x2852C4u;
label_2852c4:
    // 0x2852c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2852c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2852c8:
    // 0x2852c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2852c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2852cc:
    // 0x2852cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2852ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2852d0:
    // 0x2852d0: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x2852d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_2852d4:
    // 0x2852d4: 0x8e240670  lw          $a0, 0x670($s1)
    ctx->pc = 0x2852d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_2852d8:
    // 0x2852d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2852d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2852dc:
    // 0x2852dc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2852dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2852e0:
    // 0x2852e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2852e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2852e4:
    // 0x2852e4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2852e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2852e8:
    // 0x2852e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2852e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2852ec:
    // 0x2852ec: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2852ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2852f0:
    // 0x2852f0: 0xc07f6bc  jal         func_1FDAF0
label_2852f4:
    if (ctx->pc == 0x2852F4u) {
        ctx->pc = 0x2852F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852F0u;
        // 0x2852f4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2852F8u;
        goto label_2852f8;
    }
    ctx->pc = 0x2852F0u;
    SET_GPR_U32(ctx, 31, 0x2852F8u);
    ctx->pc = 0x2852F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2852F0u;
    // 0x2852f4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x2852F0u, 0x2852F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2852F8u;
label_2852f8:
    // 0x2852f8: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x2852f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_2852fc:
    // 0x2852fc: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2852fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_285300:
    // 0x285300: 0xae220678  sw          $v0, 0x678($s1)
    ctx->pc = 0x285300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 2));
label_285304:
    // 0x285304: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x285304u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_285308:
    // 0x285308: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28530c:
    if (ctx->pc == 0x28530Cu) {
        ctx->pc = 0x28530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285308u;
        // 0x28530c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285310u;
        goto label_285310;
    }
    ctx->pc = 0x285308u;
    {
        const bool branch_taken_0x285308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285308u;
        // 0x28530c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285308) {
            ctx->pc = 0x28531Cu;
            goto label_28531c;
        }
    }
    ctx->pc = 0x285310u;
label_285310:
    // 0x285310: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x285310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_285314:
    // 0x285314: 0x10000002  b           . + 4 + (0x2 << 2)
label_285318:
    if (ctx->pc == 0x285318u) {
        ctx->pc = 0x285318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285314u;
        // 0x285318: 0x8c45004c  lw          $a1, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28531Cu;
        goto label_28531c;
    }
    ctx->pc = 0x285314u;
    {
        const bool branch_taken_0x285314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285314u;
        // 0x285318: 0x8c45004c  lw          $a1, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285314) {
            ctx->pc = 0x285320u;
            goto label_285320;
        }
    }
    ctx->pc = 0x28531Cu;
label_28531c:
    // 0x28531c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28531cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285320:
    // 0x285320: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x285320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_285324:
    // 0x285324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x285324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_285328:
    // 0x285328: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x285328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_28532c:
    // 0x28532c: 0x8e240670  lw          $a0, 0x670($s1)
    ctx->pc = 0x28532cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_285330:
    // 0x285330: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x285330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_285334:
    // 0x285334: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x285334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_285338:
    // 0x285338: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x285338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28533c:
    // 0x28533c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x28533cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_285340:
    // 0x285340: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x285340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_285344:
    // 0x285344: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x285344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_285348:
    // 0x285348: 0xc07f6bc  jal         func_1FDAF0
label_28534c:
    if (ctx->pc == 0x28534Cu) {
        ctx->pc = 0x28534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285348u;
        // 0x28534c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285350u;
        goto label_285350;
    }
    ctx->pc = 0x285348u;
    SET_GPR_U32(ctx, 31, 0x285350u);
    ctx->pc = 0x28534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285348u;
    // 0x28534c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x285348u, 0x285350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285350u;
label_285350:
    // 0x285350: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x285350u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_285354:
    // 0x285354: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x285354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_285358:
    // 0x285358: 0xae22067c  sw          $v0, 0x67C($s1)
    ctx->pc = 0x285358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1660), GPR_U32(ctx, 2));
label_28535c:
    // 0x28535c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x28535cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_285360:
    // 0x285360: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_285364:
    if (ctx->pc == 0x285364u) {
        ctx->pc = 0x285364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285360u;
        // 0x285364: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285368u;
        goto label_285368;
    }
    ctx->pc = 0x285360u;
    {
        const bool branch_taken_0x285360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285360u;
        // 0x285364: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285360) {
            ctx->pc = 0x285374u;
            goto label_285374;
        }
    }
    ctx->pc = 0x285368u;
label_285368:
    // 0x285368: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x285368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_28536c:
    // 0x28536c: 0x10000002  b           . + 4 + (0x2 << 2)
label_285370:
    if (ctx->pc == 0x285370u) {
        ctx->pc = 0x285370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28536Cu;
        // 0x285370: 0x8c45005c  lw          $a1, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285374u;
        goto label_285374;
    }
    ctx->pc = 0x28536Cu;
    {
        const bool branch_taken_0x28536c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28536Cu;
        // 0x285370: 0x8c45005c  lw          $a1, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28536c) {
            ctx->pc = 0x285378u;
            goto label_285378;
        }
    }
    ctx->pc = 0x285374u;
label_285374:
    // 0x285374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x285374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285378:
    // 0x285378: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x285378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28537c:
    // 0x28537c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28537cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_285380:
    // 0x285380: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x285380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_285384:
    // 0x285384: 0x8e240670  lw          $a0, 0x670($s1)
    ctx->pc = 0x285384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_285388:
    // 0x285388: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x285388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_28538c:
    // 0x28538c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x28538cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_285390:
    // 0x285390: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x285390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_285394:
    // 0x285394: 0x26502fc0  addiu       $s0, $s2, 0x2FC0
    ctx->pc = 0x285394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12224));
label_285398:
    // 0x285398: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x285398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_28539c:
    // 0x28539c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x28539cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2853a0:
    // 0x2853a0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2853a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2853a4:
    // 0x2853a4: 0xc07f6bc  jal         func_1FDAF0
label_2853a8:
    if (ctx->pc == 0x2853A8u) {
        ctx->pc = 0x2853A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853A4u;
        // 0x2853a8: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2853ACu;
        goto label_2853ac;
    }
    ctx->pc = 0x2853A4u;
    SET_GPR_U32(ctx, 31, 0x2853ACu);
    ctx->pc = 0x2853A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2853A4u;
    // 0x2853a8: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x2853A4u, 0x2853ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2853ACu;
label_2853ac:
    // 0x2853ac: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2853acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2853b0:
    // 0x2853b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2853b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2853b4:
    // 0x2853b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2853b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2853b8:
    // 0x2853b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2853b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2853bc:
    // 0x2853bc: 0xae220680  sw          $v0, 0x680($s1)
    ctx->pc = 0x2853bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 2));
label_2853c0:
    // 0x2853c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2853c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2853c4:
    // 0x2853c4: 0xc04d1be  jal         func_1346F8
label_2853c8:
    if (ctx->pc == 0x2853C8u) {
        ctx->pc = 0x2853C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853C4u;
        // 0x2853c8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2853CCu;
        goto label_2853cc;
    }
    ctx->pc = 0x2853C4u;
    SET_GPR_U32(ctx, 31, 0x2853CCu);
    ctx->pc = 0x2853C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2853C4u;
    // 0x2853c8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346F8u, 0x2853C4u, 0x2853CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2853CCu;
label_2853cc:
    // 0x2853cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2853ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2853d0:
    // 0x2853d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2853d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2853d4:
    // 0x2853d4: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x2853d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_2853d8:
    // 0x2853d8: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x2853d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2853dc:
    // 0x2853dc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2853dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2853e0:
    // 0x2853e0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2853e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2853e4:
    // 0x2853e4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2853e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2853e8:
    // 0x2853e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2853e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2853ec:
    // 0x2853ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2853ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2853f0:
    // 0x2853f0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2853f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2853f4:
    // 0x2853f4: 0xc04d220  jal         func_134880
label_2853f8:
    if (ctx->pc == 0x2853F8u) {
        ctx->pc = 0x2853F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853F4u;
        // 0x2853f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2853FCu;
        goto label_2853fc;
    }
    ctx->pc = 0x2853F4u;
    SET_GPR_U32(ctx, 31, 0x2853FCu);
    ctx->pc = 0x2853F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2853F4u;
    // 0x2853f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x2853F4u, 0x2853FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2853FCu;
label_2853fc:
    // 0x2853fc: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x2853fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_285400:
    // 0x285400: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x285400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_285404:
    // 0x285404: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x285404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_285408:
    // 0x285408: 0xae2015b8  sw          $zero, 0x15B8($s1)
    ctx->pc = 0x285408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 0));
label_28540c:
    // 0x28540c: 0xc0c7400  jal         func_31D000
label_285410:
    if (ctx->pc == 0x285410u) {
        ctx->pc = 0x285410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28540Cu;
        // 0x285410: 0xe62015b4  swc1        $f0, 0x15B4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5556), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x285414u;
        goto label_285414;
    }
    ctx->pc = 0x28540Cu;
    SET_GPR_U32(ctx, 31, 0x285414u);
    ctx->pc = 0x285410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28540Cu;
    // 0x285410: 0xe62015b4  swc1        $f0, 0x15B4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5556), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x28540Cu, 0x285414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285414u;
label_285414:
    // 0x285414: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x285414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
label_285418:
    // 0x285418: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x285418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28541c:
    // 0x28541c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28541cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_285420:
    // 0x285420: 0x24a58a28  addiu       $a1, $a1, -0x75D8
    ctx->pc = 0x285420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937128));
label_285424:
    // 0x285424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285428:
    // 0x285428: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x285428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28542c:
    // 0x28542c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28542cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_285430:
    // 0x285430: 0xc052dcc  jal         func_14B730
label_285434:
    if (ctx->pc == 0x285434u) {
        ctx->pc = 0x285434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285430u;
        // 0x285434: 0xe62015bc  swc1        $f0, 0x15BC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x285438u;
        goto label_285438;
    }
    ctx->pc = 0x285430u;
    SET_GPR_U32(ctx, 31, 0x285438u);
    ctx->pc = 0x285434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285430u;
    // 0x285434: 0xe62015bc  swc1        $f0, 0x15BC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5564), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x285430u, 0x285438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285438u;
label_285438:
    // 0x285438: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x285438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28543c:
    // 0x28543c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28543cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285440:
    // 0x285440: 0x24a58a30  addiu       $a1, $a1, -0x75D0
    ctx->pc = 0x285440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937136));
label_285444:
    // 0x285444: 0xc052dcc  jal         func_14B730
label_285448:
    if (ctx->pc == 0x285448u) {
        ctx->pc = 0x285448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285444u;
        // 0x285448: 0xae2215cc  sw          $v0, 0x15CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28544Cu;
        goto label_28544c;
    }
    ctx->pc = 0x285444u;
    SET_GPR_U32(ctx, 31, 0x28544Cu);
    ctx->pc = 0x285448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285444u;
    // 0x285448: 0xae2215cc  sw          $v0, 0x15CC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5580), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x285444u, 0x28544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28544Cu;
label_28544c:
    // 0x28544c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28544cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_285450:
    // 0x285450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285454:
    // 0x285454: 0x24a58a38  addiu       $a1, $a1, -0x75C8
    ctx->pc = 0x285454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937144));
label_285458:
    // 0x285458: 0xc052dcc  jal         func_14B730
label_28545c:
    if (ctx->pc == 0x28545Cu) {
        ctx->pc = 0x28545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285458u;
        // 0x28545c: 0xae2215d0  sw          $v0, 0x15D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285460u;
        goto label_285460;
    }
    ctx->pc = 0x285458u;
    SET_GPR_U32(ctx, 31, 0x285460u);
    ctx->pc = 0x28545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285458u;
    // 0x28545c: 0xae2215d0  sw          $v0, 0x15D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5584), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x285458u, 0x285460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285460u;
label_285460:
    // 0x285460: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x285460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_285464:
    // 0x285464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285468:
    // 0x285468: 0x24a58a40  addiu       $a1, $a1, -0x75C0
    ctx->pc = 0x285468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937152));
label_28546c:
    // 0x28546c: 0xc052dcc  jal         func_14B730
label_285470:
    if (ctx->pc == 0x285470u) {
        ctx->pc = 0x285470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28546Cu;
        // 0x285470: 0xae2215d4  sw          $v0, 0x15D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285474u;
        goto label_285474;
    }
    ctx->pc = 0x28546Cu;
    SET_GPR_U32(ctx, 31, 0x285474u);
    ctx->pc = 0x285470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28546Cu;
    // 0x285470: 0xae2215d4  sw          $v0, 0x15D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5588), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28546Cu, 0x285474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285474u;
label_285474:
    // 0x285474: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x285474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_285478:
    // 0x285478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28547c:
    // 0x28547c: 0x24a58a48  addiu       $a1, $a1, -0x75B8
    ctx->pc = 0x28547cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937160));
label_285480:
    // 0x285480: 0xc052dcc  jal         func_14B730
label_285484:
    if (ctx->pc == 0x285484u) {
        ctx->pc = 0x285484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285480u;
        // 0x285484: 0xae2215d8  sw          $v0, 0x15D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285488u;
        goto label_285488;
    }
    ctx->pc = 0x285480u;
    SET_GPR_U32(ctx, 31, 0x285488u);
    ctx->pc = 0x285484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285480u;
    // 0x285484: 0xae2215d8  sw          $v0, 0x15D8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x285480u, 0x285488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285488u;
label_285488:
    // 0x285488: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x285488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28548c:
    // 0x28548c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28548cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285490:
    // 0x285490: 0x24a58a50  addiu       $a1, $a1, -0x75B0
    ctx->pc = 0x285490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937168));
label_285494:
    // 0x285494: 0xc052dcc  jal         func_14B730
label_285498:
    if (ctx->pc == 0x285498u) {
        ctx->pc = 0x285498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285494u;
        // 0x285498: 0xae2215dc  sw          $v0, 0x15DC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28549Cu;
        goto label_28549c;
    }
    ctx->pc = 0x285494u;
    SET_GPR_U32(ctx, 31, 0x28549Cu);
    ctx->pc = 0x285498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285494u;
    // 0x285498: 0xae2215dc  sw          $v0, 0x15DC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5596), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x285494u, 0x28549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28549Cu;
label_28549c:
    // 0x28549c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28549cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2854a0:
    // 0x2854a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2854a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2854a4:
    // 0x2854a4: 0x24a58a58  addiu       $a1, $a1, -0x75A8
    ctx->pc = 0x2854a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937176));
label_2854a8:
    // 0x2854a8: 0xc052dcc  jal         func_14B730
label_2854ac:
    if (ctx->pc == 0x2854ACu) {
        ctx->pc = 0x2854ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854A8u;
        // 0x2854ac: 0xae2215e0  sw          $v0, 0x15E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854B0u;
        goto label_2854b0;
    }
    ctx->pc = 0x2854A8u;
    SET_GPR_U32(ctx, 31, 0x2854B0u);
    ctx->pc = 0x2854ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2854A8u;
    // 0x2854ac: 0xae2215e0  sw          $v0, 0x15E0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5600), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2854A8u, 0x2854B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2854B0u;
label_2854b0:
    // 0x2854b0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2854b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2854b4:
    // 0x2854b4: 0xae2215e4  sw          $v0, 0x15E4($s1)
    ctx->pc = 0x2854b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5604), GPR_U32(ctx, 2));
label_2854b8:
    // 0x2854b8: 0x24a58a60  addiu       $a1, $a1, -0x75A0
    ctx->pc = 0x2854b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937184));
label_2854bc:
    // 0x2854bc: 0xc052dcc  jal         func_14B730
label_2854c0:
    if (ctx->pc == 0x2854C0u) {
        ctx->pc = 0x2854C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854BCu;
        // 0x2854c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854C4u;
        goto label_2854c4;
    }
    ctx->pc = 0x2854BCu;
    SET_GPR_U32(ctx, 31, 0x2854C4u);
    ctx->pc = 0x2854C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2854BCu;
    // 0x2854c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2854BCu, 0x2854C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2854C4u;
label_2854c4:
    // 0x2854c4: 0x8e2315cc  lw          $v1, 0x15CC($s1)
    ctx->pc = 0x2854c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5580)));
label_2854c8:
    // 0x2854c8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2854cc:
    if (ctx->pc == 0x2854CCu) {
        ctx->pc = 0x2854CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854C8u;
        // 0x2854cc: 0xae2215e8  sw          $v0, 0x15E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854D0u;
        goto label_2854d0;
    }
    ctx->pc = 0x2854C8u;
    {
        const bool branch_taken_0x2854c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2854CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854C8u;
        // 0x2854cc: 0xae2215e8  sw          $v0, 0x15E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854c8) {
            ctx->pc = 0x2854DCu;
            goto label_2854dc;
        }
    }
    ctx->pc = 0x2854D0u;
label_2854d0:
    // 0x2854d0: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x2854d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_2854d4:
    // 0x2854d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2854d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2854d8:
    // 0x2854d8: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x2854d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_2854dc:
    // 0x2854dc: 0x8e2315d0  lw          $v1, 0x15D0($s1)
    ctx->pc = 0x2854dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5584)));
label_2854e0:
    // 0x2854e0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_2854e4:
    if (ctx->pc == 0x2854E4u) {
        ctx->pc = 0x2854E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854E0u;
        // 0x2854e4: 0x8e2315d4  lw          $v1, 0x15D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854E8u;
        goto label_2854e8;
    }
    ctx->pc = 0x2854E0u;
    {
        const bool branch_taken_0x2854e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2854e0) {
            ctx->pc = 0x2854E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2854E0u;
            // 0x2854e4: 0x8e2315d4  lw          $v1, 0x15D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2854F8u;
            goto label_2854f8;
        }
    }
    ctx->pc = 0x2854E8u;
label_2854e8:
    // 0x2854e8: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x2854e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_2854ec:
    // 0x2854ec: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2854ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2854f0:
    // 0x2854f0: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x2854f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_2854f4:
    // 0x2854f4: 0x8e2315d4  lw          $v1, 0x15D4($s1)
    ctx->pc = 0x2854f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5588)));
label_2854f8:
    // 0x2854f8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_2854fc:
    if (ctx->pc == 0x2854FCu) {
        ctx->pc = 0x2854FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854F8u;
        // 0x2854fc: 0x8e2315d8  lw          $v1, 0x15D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285500u;
        goto label_285500;
    }
    ctx->pc = 0x2854F8u;
    {
        const bool branch_taken_0x2854f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2854f8) {
            ctx->pc = 0x2854FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2854F8u;
            // 0x2854fc: 0x8e2315d8  lw          $v1, 0x15D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285510u;
            goto label_285510;
        }
    }
    ctx->pc = 0x285500u;
label_285500:
    // 0x285500: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x285500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_285504:
    // 0x285504: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x285504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_285508:
    // 0x285508: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x285508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_28550c:
    // 0x28550c: 0x8e2315d8  lw          $v1, 0x15D8($s1)
    ctx->pc = 0x28550cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5592)));
label_285510:
    // 0x285510: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_285514:
    if (ctx->pc == 0x285514u) {
        ctx->pc = 0x285514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285510u;
        // 0x285514: 0x8e2315dc  lw          $v1, 0x15DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285518u;
        goto label_285518;
    }
    ctx->pc = 0x285510u;
    {
        const bool branch_taken_0x285510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285510) {
            ctx->pc = 0x285514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285510u;
            // 0x285514: 0x8e2315dc  lw          $v1, 0x15DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285528u;
            goto label_285528;
        }
    }
    ctx->pc = 0x285518u;
label_285518:
    // 0x285518: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x285518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_28551c:
    // 0x28551c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28551cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_285520:
    // 0x285520: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x285520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_285524:
    // 0x285524: 0x8e2315dc  lw          $v1, 0x15DC($s1)
    ctx->pc = 0x285524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5596)));
label_285528:
    // 0x285528: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_28552c:
    if (ctx->pc == 0x28552Cu) {
        ctx->pc = 0x28552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285528u;
        // 0x28552c: 0x8e2315e0  lw          $v1, 0x15E0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285530u;
        goto label_285530;
    }
    ctx->pc = 0x285528u;
    {
        const bool branch_taken_0x285528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285528) {
            ctx->pc = 0x28552Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285528u;
            // 0x28552c: 0x8e2315e0  lw          $v1, 0x15E0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285540u;
            goto label_285540;
        }
    }
    ctx->pc = 0x285530u;
label_285530:
    // 0x285530: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x285530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_285534:
    // 0x285534: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x285534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_285538:
    // 0x285538: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x285538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_28553c:
    // 0x28553c: 0x8e2315e0  lw          $v1, 0x15E0($s1)
    ctx->pc = 0x28553cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5600)));
label_285540:
    // 0x285540: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_285544:
    if (ctx->pc == 0x285544u) {
        ctx->pc = 0x285544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285540u;
        // 0x285544: 0x8e2315e4  lw          $v1, 0x15E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285548u;
        goto label_285548;
    }
    ctx->pc = 0x285540u;
    {
        const bool branch_taken_0x285540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285540) {
            ctx->pc = 0x285544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285540u;
            // 0x285544: 0x8e2315e4  lw          $v1, 0x15E4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285558u;
            goto label_285558;
        }
    }
    ctx->pc = 0x285548u;
label_285548:
    // 0x285548: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x285548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_28554c:
    // 0x28554c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28554cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_285550:
    // 0x285550: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x285550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_285554:
    // 0x285554: 0x8e2315e4  lw          $v1, 0x15E4($s1)
    ctx->pc = 0x285554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5604)));
label_285558:
    // 0x285558: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_28555c:
    if (ctx->pc == 0x28555Cu) {
        ctx->pc = 0x28555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285558u;
        // 0x28555c: 0x8e2315e8  lw          $v1, 0x15E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285560u;
        goto label_285560;
    }
    ctx->pc = 0x285558u;
    {
        const bool branch_taken_0x285558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285558) {
            ctx->pc = 0x28555Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285558u;
            // 0x28555c: 0x8e2315e8  lw          $v1, 0x15E8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285570u;
            goto label_285570;
        }
    }
    ctx->pc = 0x285560u;
label_285560:
    // 0x285560: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x285560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_285564:
    // 0x285564: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x285564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_285568:
    // 0x285568: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x285568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_28556c:
    // 0x28556c: 0x8e2315e8  lw          $v1, 0x15E8($s1)
    ctx->pc = 0x28556cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5608)));
label_285570:
    // 0x285570: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_285574:
    if (ctx->pc == 0x285574u) {
        ctx->pc = 0x285574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285570u;
        // 0x285574: 0x8e2415cc  lw          $a0, 0x15CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285578u;
        goto label_285578;
    }
    ctx->pc = 0x285570u;
    {
        const bool branch_taken_0x285570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285570) {
            ctx->pc = 0x285574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285570u;
            // 0x285574: 0x8e2415cc  lw          $a0, 0x15CC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285588u;
            goto label_285588;
        }
    }
    ctx->pc = 0x285578u;
label_285578:
    // 0x285578: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x285578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_28557c:
    // 0x28557c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28557cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_285580:
    // 0x285580: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x285580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_285584:
    // 0x285584: 0x8e2415cc  lw          $a0, 0x15CC($s1)
    ctx->pc = 0x285584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5580)));
label_285588:
    // 0x285588: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_28558c:
    if (ctx->pc == 0x28558Cu) {
        ctx->pc = 0x28558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285588u;
        // 0x28558c: 0x8e2415dc  lw          $a0, 0x15DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285590u;
        goto label_285590;
    }
    ctx->pc = 0x285588u;
    {
        const bool branch_taken_0x285588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x285588) {
            ctx->pc = 0x28558Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285588u;
            // 0x28558c: 0x8e2415dc  lw          $a0, 0x15DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2855A8u;
            goto label_2855a8;
        }
    }
    ctx->pc = 0x285590u;
label_285590:
    // 0x285590: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x285590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
label_285594:
    // 0x285594: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x285594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_285598:
    // 0x285598: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x285598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_28559c:
    // 0x28559c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28559cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2855a0:
    // 0x2855a0: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x2855a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_2855a4:
    // 0x2855a4: 0x8e2415dc  lw          $a0, 0x15DC($s1)
    ctx->pc = 0x2855a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5596)));
label_2855a8:
    // 0x2855a8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2855ac:
    if (ctx->pc == 0x2855ACu) {
        ctx->pc = 0x2855ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855A8u;
        // 0x2855ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2855B0u;
        goto label_2855b0;
    }
    ctx->pc = 0x2855A8u;
    {
        const bool branch_taken_0x2855a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2855ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855A8u;
        // 0x2855ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2855a8) {
            ctx->pc = 0x2855C8u;
            goto label_2855c8;
        }
    }
    ctx->pc = 0x2855B0u;
label_2855b0:
    // 0x2855b0: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x2855b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
label_2855b4:
    // 0x2855b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2855b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2855b8:
    // 0x2855b8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2855b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_2855bc:
    // 0x2855bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2855bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2855c0:
    // 0x2855c0: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x2855c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_2855c4:
    // 0x2855c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2855c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2855c8:
    // 0x2855c8: 0xc0c73f8  jal         func_31CFE0
label_2855cc:
    if (ctx->pc == 0x2855CCu) {
        ctx->pc = 0x2855CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855C8u;
        // 0x2855cc: 0xa2221604  sb          $v0, 0x1604($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5636), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2855D0u;
        goto label_2855d0;
    }
    ctx->pc = 0x2855C8u;
    SET_GPR_U32(ctx, 31, 0x2855D0u);
    ctx->pc = 0x2855CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2855C8u;
    // 0x2855cc: 0xa2221604  sb          $v0, 0x1604($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 5636), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2855C8u, 0x2855D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2855D0u;
label_2855d0:
    // 0x2855d0: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x2855d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_2855d4:
    // 0x2855d4: 0x240203c1  addiu       $v0, $zero, 0x3C1
    ctx->pc = 0x2855d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 961));
label_2855d8:
    // 0x2855d8: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x2855d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2855dc:
    // 0x2855dc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2855e0:
    if (ctx->pc == 0x2855E0u) {
        ctx->pc = 0x2855E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855DCu;
        // 0x2855e0: 0xae220560  sw          $v0, 0x560($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2855E4u;
        goto label_2855e4;
    }
    ctx->pc = 0x2855DCu;
    {
        const bool branch_taken_0x2855dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2855E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855DCu;
        // 0x2855e0: 0xae220560  sw          $v0, 0x560($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2855dc) {
            ctx->pc = 0x2855ECu;
            goto label_2855ec;
        }
    }
    ctx->pc = 0x2855E4u;
label_2855e4:
    // 0x2855e4: 0x240203c8  addiu       $v0, $zero, 0x3C8
    ctx->pc = 0x2855e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 968));
label_2855e8:
    // 0x2855e8: 0xae220560  sw          $v0, 0x560($s1)
    ctx->pc = 0x2855e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
label_2855ec:
    // 0x2855ec: 0x2c82000d  sltiu       $v0, $a0, 0xD
    ctx->pc = 0x2855ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_2855f0:
    // 0x2855f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2855f4:
    if (ctx->pc == 0x2855F4u) {
        ctx->pc = 0x2855F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855F0u;
        // 0x2855f4: 0x2c82000f  sltiu       $v0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2855F8u;
        goto label_2855f8;
    }
    ctx->pc = 0x2855F0u;
    {
        const bool branch_taken_0x2855f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2855F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855F0u;
        // 0x2855f4: 0x2c82000f  sltiu       $v0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2855f0) {
            ctx->pc = 0x285604u;
            goto label_285604;
        }
    }
    ctx->pc = 0x2855F8u;
label_2855f8:
    // 0x2855f8: 0x240203d1  addiu       $v0, $zero, 0x3D1
    ctx->pc = 0x2855f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 977));
label_2855fc:
    // 0x2855fc: 0xae220560  sw          $v0, 0x560($s1)
    ctx->pc = 0x2855fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
label_285600:
    // 0x285600: 0x2c82000f  sltiu       $v0, $a0, 0xF
    ctx->pc = 0x285600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_285604:
    // 0x285604: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_285608:
    if (ctx->pc == 0x285608u) {
        ctx->pc = 0x285608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285604u;
        // 0x285608: 0x240203d0  addiu       $v0, $zero, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28560Cu;
        goto label_28560c;
    }
    ctx->pc = 0x285604u;
    {
        const bool branch_taken_0x285604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285604u;
        // 0x285608: 0x240203d0  addiu       $v0, $zero, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285604) {
            ctx->pc = 0x285610u;
            goto label_285610;
        }
    }
    ctx->pc = 0x28560Cu;
label_28560c:
    // 0x28560c: 0xae220560  sw          $v0, 0x560($s1)
    ctx->pc = 0x28560cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
label_285610:
    // 0x285610: 0xc0c73f8  jal         func_31CFE0
label_285614:
    if (ctx->pc == 0x285614u) {
        ctx->pc = 0x285618u;
        goto label_285618;
    }
    ctx->pc = 0x285610u;
    SET_GPR_U32(ctx, 31, 0x285618u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x285610u, 0x285618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285618u;
label_285618:
    // 0x285618: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x285618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_28561c:
    // 0x28561c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_285620:
    if (ctx->pc == 0x285620u) {
        ctx->pc = 0x285620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28561Cu;
        // 0x285620: 0x8e221554  lw          $v0, 0x1554($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5460)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285624u;
        goto label_285624;
    }
    ctx->pc = 0x28561Cu;
    {
        const bool branch_taken_0x28561c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28561c) {
            ctx->pc = 0x285620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28561Cu;
            // 0x285620: 0x8e221554  lw          $v0, 0x1554($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285630u;
            goto label_285630;
        }
    }
    ctx->pc = 0x285624u;
label_285624:
    // 0x285624: 0x240203d8  addiu       $v0, $zero, 0x3D8
    ctx->pc = 0x285624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 984));
label_285628:
    // 0x285628: 0xae220560  sw          $v0, 0x560($s1)
    ctx->pc = 0x285628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
label_28562c:
    // 0x28562c: 0x8e221554  lw          $v0, 0x1554($s1)
    ctx->pc = 0x28562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5460)));
label_285630:
    // 0x285630: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x285630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_285634:
    // 0x285634: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x285634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_285638:
    // 0x285638: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_28563c:
    if (ctx->pc == 0x28563Cu) {
        ctx->pc = 0x285640u;
        goto label_285640;
    }
    ctx->pc = 0x285638u;
    {
        const bool branch_taken_0x285638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285638) {
            ctx->pc = 0x28564Cu;
            goto label_28564c;
        }
    }
    ctx->pc = 0x285640u;
label_285640:
    // 0x285640: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x285640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_285644:
    // 0x285644: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x285644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_285648:
    // 0x285648: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x285648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
label_28564c:
    // 0x28564c: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x28564cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_285650:
    // 0x285650: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x285650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_285654:
    // 0x285654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285658:
    // 0x285658: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x285658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_28565c:
    // 0x28565c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x28565cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_285660:
    // 0x285660: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x285660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_285664:
    // 0x285664: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x285664u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_285668:
    // 0x285668: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x285668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28566c:
    // 0x28566c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x28566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_285670:
    // 0x285670: 0x3e00008  jr          $ra
label_285674:
    if (ctx->pc == 0x285674u) {
        ctx->pc = 0x285674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285670u;
        // 0x285674: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285678u;
        goto label_fallthrough_0x285670;
    }
    ctx->pc = 0x285670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285670u;
        // 0x285674: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x285670:
    ctx->pc = 0x285678u;
}
