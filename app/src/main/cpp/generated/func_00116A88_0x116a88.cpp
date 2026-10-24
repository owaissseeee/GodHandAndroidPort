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

// Function: func_00116A88
// Address: 0x116a88 - 0x117600
void func_00116A88_0x116a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00116A88_0x116a88");
#endif

    switch (ctx->pc) {
        case 0x116a88u: goto label_116a88;
        case 0x116a8cu: goto label_116a8c;
        case 0x116a90u: goto label_116a90;
        case 0x116a94u: goto label_116a94;
        case 0x116a98u: goto label_116a98;
        case 0x116a9cu: goto label_116a9c;
        case 0x116aa0u: goto label_116aa0;
        case 0x116aa4u: goto label_116aa4;
        case 0x116aa8u: goto label_116aa8;
        case 0x116aacu: goto label_116aac;
        case 0x116ab0u: goto label_116ab0;
        case 0x116ab4u: goto label_116ab4;
        case 0x116ab8u: goto label_116ab8;
        case 0x116abcu: goto label_116abc;
        case 0x116ac0u: goto label_116ac0;
        case 0x116ac4u: goto label_116ac4;
        case 0x116ac8u: goto label_116ac8;
        case 0x116accu: goto label_116acc;
        case 0x116ad0u: goto label_116ad0;
        case 0x116ad4u: goto label_116ad4;
        case 0x116ad8u: goto label_116ad8;
        case 0x116adcu: goto label_116adc;
        case 0x116ae0u: goto label_116ae0;
        case 0x116ae4u: goto label_116ae4;
        case 0x116ae8u: goto label_116ae8;
        case 0x116aecu: goto label_116aec;
        case 0x116af0u: goto label_116af0;
        case 0x116af4u: goto label_116af4;
        case 0x116af8u: goto label_116af8;
        case 0x116afcu: goto label_116afc;
        case 0x116b00u: goto label_116b00;
        case 0x116b04u: goto label_116b04;
        case 0x116b08u: goto label_116b08;
        case 0x116b0cu: goto label_116b0c;
        case 0x116b10u: goto label_116b10;
        case 0x116b14u: goto label_116b14;
        case 0x116b18u: goto label_116b18;
        case 0x116b1cu: goto label_116b1c;
        case 0x116b20u: goto label_116b20;
        case 0x116b24u: goto label_116b24;
        case 0x116b28u: goto label_116b28;
        case 0x116b2cu: goto label_116b2c;
        case 0x116b30u: goto label_116b30;
        case 0x116b34u: goto label_116b34;
        case 0x116b38u: goto label_116b38;
        case 0x116b3cu: goto label_116b3c;
        case 0x116b40u: goto label_116b40;
        case 0x116b44u: goto label_116b44;
        case 0x116b48u: goto label_116b48;
        case 0x116b4cu: goto label_116b4c;
        case 0x116b50u: goto label_116b50;
        case 0x116b54u: goto label_116b54;
        case 0x116b58u: goto label_116b58;
        case 0x116b5cu: goto label_116b5c;
        case 0x116b60u: goto label_116b60;
        case 0x116b64u: goto label_116b64;
        case 0x116b68u: goto label_116b68;
        case 0x116b6cu: goto label_116b6c;
        case 0x116b70u: goto label_116b70;
        case 0x116b74u: goto label_116b74;
        case 0x116b78u: goto label_116b78;
        case 0x116b7cu: goto label_116b7c;
        case 0x116b80u: goto label_116b80;
        case 0x116b84u: goto label_116b84;
        case 0x116b88u: goto label_116b88;
        case 0x116b8cu: goto label_116b8c;
        case 0x116b90u: goto label_116b90;
        case 0x116b94u: goto label_116b94;
        case 0x116b98u: goto label_116b98;
        case 0x116b9cu: goto label_116b9c;
        case 0x116ba0u: goto label_116ba0;
        case 0x116ba4u: goto label_116ba4;
        case 0x116ba8u: goto label_116ba8;
        case 0x116bacu: goto label_116bac;
        case 0x116bb0u: goto label_116bb0;
        case 0x116bb4u: goto label_116bb4;
        case 0x116bb8u: goto label_116bb8;
        case 0x116bbcu: goto label_116bbc;
        case 0x116bc0u: goto label_116bc0;
        case 0x116bc4u: goto label_116bc4;
        case 0x116bc8u: goto label_116bc8;
        case 0x116bccu: goto label_116bcc;
        case 0x116bd0u: goto label_116bd0;
        case 0x116bd4u: goto label_116bd4;
        case 0x116bd8u: goto label_116bd8;
        case 0x116bdcu: goto label_116bdc;
        case 0x116be0u: goto label_116be0;
        case 0x116be4u: goto label_116be4;
        case 0x116be8u: goto label_116be8;
        case 0x116becu: goto label_116bec;
        case 0x116bf0u: goto label_116bf0;
        case 0x116bf4u: goto label_116bf4;
        case 0x116bf8u: goto label_116bf8;
        case 0x116bfcu: goto label_116bfc;
        case 0x116c00u: goto label_116c00;
        case 0x116c04u: goto label_116c04;
        case 0x116c08u: goto label_116c08;
        case 0x116c0cu: goto label_116c0c;
        case 0x116c10u: goto label_116c10;
        case 0x116c14u: goto label_116c14;
        case 0x116c18u: goto label_116c18;
        case 0x116c1cu: goto label_116c1c;
        case 0x116c20u: goto label_116c20;
        case 0x116c24u: goto label_116c24;
        case 0x116c28u: goto label_116c28;
        case 0x116c2cu: goto label_116c2c;
        case 0x116c30u: goto label_116c30;
        case 0x116c34u: goto label_116c34;
        case 0x116c38u: goto label_116c38;
        case 0x116c3cu: goto label_116c3c;
        case 0x116c40u: goto label_116c40;
        case 0x116c44u: goto label_116c44;
        case 0x116c48u: goto label_116c48;
        case 0x116c4cu: goto label_116c4c;
        case 0x116c50u: goto label_116c50;
        case 0x116c54u: goto label_116c54;
        case 0x116c58u: goto label_116c58;
        case 0x116c5cu: goto label_116c5c;
        case 0x116c60u: goto label_116c60;
        case 0x116c64u: goto label_116c64;
        case 0x116c68u: goto label_116c68;
        case 0x116c6cu: goto label_116c6c;
        case 0x116c70u: goto label_116c70;
        case 0x116c74u: goto label_116c74;
        case 0x116c78u: goto label_116c78;
        case 0x116c7cu: goto label_116c7c;
        case 0x116c80u: goto label_116c80;
        case 0x116c84u: goto label_116c84;
        case 0x116c88u: goto label_116c88;
        case 0x116c8cu: goto label_116c8c;
        case 0x116c90u: goto label_116c90;
        case 0x116c94u: goto label_116c94;
        case 0x116c98u: goto label_116c98;
        case 0x116c9cu: goto label_116c9c;
        case 0x116ca0u: goto label_116ca0;
        case 0x116ca4u: goto label_116ca4;
        case 0x116ca8u: goto label_116ca8;
        case 0x116cacu: goto label_116cac;
        case 0x116cb0u: goto label_116cb0;
        case 0x116cb4u: goto label_116cb4;
        case 0x116cb8u: goto label_116cb8;
        case 0x116cbcu: goto label_116cbc;
        case 0x116cc0u: goto label_116cc0;
        case 0x116cc4u: goto label_116cc4;
        case 0x116cc8u: goto label_116cc8;
        case 0x116cccu: goto label_116ccc;
        case 0x116cd0u: goto label_116cd0;
        case 0x116cd4u: goto label_116cd4;
        case 0x116cd8u: goto label_116cd8;
        case 0x116cdcu: goto label_116cdc;
        case 0x116ce0u: goto label_116ce0;
        case 0x116ce4u: goto label_116ce4;
        case 0x116ce8u: goto label_116ce8;
        case 0x116cecu: goto label_116cec;
        case 0x116cf0u: goto label_116cf0;
        case 0x116cf4u: goto label_116cf4;
        case 0x116cf8u: goto label_116cf8;
        case 0x116cfcu: goto label_116cfc;
        case 0x116d00u: goto label_116d00;
        case 0x116d04u: goto label_116d04;
        case 0x116d08u: goto label_116d08;
        case 0x116d0cu: goto label_116d0c;
        case 0x116d10u: goto label_116d10;
        case 0x116d14u: goto label_116d14;
        case 0x116d18u: goto label_116d18;
        case 0x116d1cu: goto label_116d1c;
        case 0x116d20u: goto label_116d20;
        case 0x116d24u: goto label_116d24;
        case 0x116d28u: goto label_116d28;
        case 0x116d2cu: goto label_116d2c;
        case 0x116d30u: goto label_116d30;
        case 0x116d34u: goto label_116d34;
        case 0x116d38u: goto label_116d38;
        case 0x116d3cu: goto label_116d3c;
        case 0x116d40u: goto label_116d40;
        case 0x116d44u: goto label_116d44;
        case 0x116d48u: goto label_116d48;
        case 0x116d4cu: goto label_116d4c;
        case 0x116d50u: goto label_116d50;
        case 0x116d54u: goto label_116d54;
        case 0x116d58u: goto label_116d58;
        case 0x116d5cu: goto label_116d5c;
        case 0x116d60u: goto label_116d60;
        case 0x116d64u: goto label_116d64;
        case 0x116d68u: goto label_116d68;
        case 0x116d6cu: goto label_116d6c;
        case 0x116d70u: goto label_116d70;
        case 0x116d74u: goto label_116d74;
        case 0x116d78u: goto label_116d78;
        case 0x116d7cu: goto label_116d7c;
        case 0x116d80u: goto label_116d80;
        case 0x116d84u: goto label_116d84;
        case 0x116d88u: goto label_116d88;
        case 0x116d8cu: goto label_116d8c;
        case 0x116d90u: goto label_116d90;
        case 0x116d94u: goto label_116d94;
        case 0x116d98u: goto label_116d98;
        case 0x116d9cu: goto label_116d9c;
        case 0x116da0u: goto label_116da0;
        case 0x116da4u: goto label_116da4;
        case 0x116da8u: goto label_116da8;
        case 0x116dacu: goto label_116dac;
        case 0x116db0u: goto label_116db0;
        case 0x116db4u: goto label_116db4;
        case 0x116db8u: goto label_116db8;
        case 0x116dbcu: goto label_116dbc;
        case 0x116dc0u: goto label_116dc0;
        case 0x116dc4u: goto label_116dc4;
        case 0x116dc8u: goto label_116dc8;
        case 0x116dccu: goto label_116dcc;
        case 0x116dd0u: goto label_116dd0;
        case 0x116dd4u: goto label_116dd4;
        case 0x116dd8u: goto label_116dd8;
        case 0x116ddcu: goto label_116ddc;
        case 0x116de0u: goto label_116de0;
        case 0x116de4u: goto label_116de4;
        case 0x116de8u: goto label_116de8;
        case 0x116decu: goto label_116dec;
        case 0x116df0u: goto label_116df0;
        case 0x116df4u: goto label_116df4;
        case 0x116df8u: goto label_116df8;
        case 0x116dfcu: goto label_116dfc;
        case 0x116e00u: goto label_116e00;
        case 0x116e04u: goto label_116e04;
        case 0x116e08u: goto label_116e08;
        case 0x116e0cu: goto label_116e0c;
        case 0x116e10u: goto label_116e10;
        case 0x116e14u: goto label_116e14;
        case 0x116e18u: goto label_116e18;
        case 0x116e1cu: goto label_116e1c;
        case 0x116e20u: goto label_116e20;
        case 0x116e24u: goto label_116e24;
        case 0x116e28u: goto label_116e28;
        case 0x116e2cu: goto label_116e2c;
        case 0x116e30u: goto label_116e30;
        case 0x116e34u: goto label_116e34;
        case 0x116e38u: goto label_116e38;
        case 0x116e3cu: goto label_116e3c;
        case 0x116e40u: goto label_116e40;
        case 0x116e44u: goto label_116e44;
        case 0x116e48u: goto label_116e48;
        case 0x116e4cu: goto label_116e4c;
        case 0x116e50u: goto label_116e50;
        case 0x116e54u: goto label_116e54;
        case 0x116e58u: goto label_116e58;
        case 0x116e5cu: goto label_116e5c;
        case 0x116e60u: goto label_116e60;
        case 0x116e64u: goto label_116e64;
        case 0x116e68u: goto label_116e68;
        case 0x116e6cu: goto label_116e6c;
        case 0x116e70u: goto label_116e70;
        case 0x116e74u: goto label_116e74;
        case 0x116e78u: goto label_116e78;
        case 0x116e7cu: goto label_116e7c;
        case 0x116e80u: goto label_116e80;
        case 0x116e84u: goto label_116e84;
        case 0x116e88u: goto label_116e88;
        case 0x116e8cu: goto label_116e8c;
        case 0x116e90u: goto label_116e90;
        case 0x116e94u: goto label_116e94;
        case 0x116e98u: goto label_116e98;
        case 0x116e9cu: goto label_116e9c;
        case 0x116ea0u: goto label_116ea0;
        case 0x116ea4u: goto label_116ea4;
        case 0x116ea8u: goto label_116ea8;
        case 0x116eacu: goto label_116eac;
        case 0x116eb0u: goto label_116eb0;
        case 0x116eb4u: goto label_116eb4;
        case 0x116eb8u: goto label_116eb8;
        case 0x116ebcu: goto label_116ebc;
        case 0x116ec0u: goto label_116ec0;
        case 0x116ec4u: goto label_116ec4;
        case 0x116ec8u: goto label_116ec8;
        case 0x116eccu: goto label_116ecc;
        case 0x116ed0u: goto label_116ed0;
        case 0x116ed4u: goto label_116ed4;
        case 0x116ed8u: goto label_116ed8;
        case 0x116edcu: goto label_116edc;
        case 0x116ee0u: goto label_116ee0;
        case 0x116ee4u: goto label_116ee4;
        case 0x116ee8u: goto label_116ee8;
        case 0x116eecu: goto label_116eec;
        case 0x116ef0u: goto label_116ef0;
        case 0x116ef4u: goto label_116ef4;
        case 0x116ef8u: goto label_116ef8;
        case 0x116efcu: goto label_116efc;
        case 0x116f00u: goto label_116f00;
        case 0x116f04u: goto label_116f04;
        case 0x116f08u: goto label_116f08;
        case 0x116f0cu: goto label_116f0c;
        case 0x116f10u: goto label_116f10;
        case 0x116f14u: goto label_116f14;
        case 0x116f18u: goto label_116f18;
        case 0x116f1cu: goto label_116f1c;
        case 0x116f20u: goto label_116f20;
        case 0x116f24u: goto label_116f24;
        case 0x116f28u: goto label_116f28;
        case 0x116f2cu: goto label_116f2c;
        case 0x116f30u: goto label_116f30;
        case 0x116f34u: goto label_116f34;
        case 0x116f38u: goto label_116f38;
        case 0x116f3cu: goto label_116f3c;
        case 0x116f40u: goto label_116f40;
        case 0x116f44u: goto label_116f44;
        case 0x116f48u: goto label_116f48;
        case 0x116f4cu: goto label_116f4c;
        case 0x116f50u: goto label_116f50;
        case 0x116f54u: goto label_116f54;
        case 0x116f58u: goto label_116f58;
        case 0x116f5cu: goto label_116f5c;
        case 0x116f60u: goto label_116f60;
        case 0x116f64u: goto label_116f64;
        case 0x116f68u: goto label_116f68;
        case 0x116f6cu: goto label_116f6c;
        case 0x116f70u: goto label_116f70;
        case 0x116f74u: goto label_116f74;
        case 0x116f78u: goto label_116f78;
        case 0x116f7cu: goto label_116f7c;
        case 0x116f80u: goto label_116f80;
        case 0x116f84u: goto label_116f84;
        case 0x116f88u: goto label_116f88;
        case 0x116f8cu: goto label_116f8c;
        case 0x116f90u: goto label_116f90;
        case 0x116f94u: goto label_116f94;
        case 0x116f98u: goto label_116f98;
        case 0x116f9cu: goto label_116f9c;
        case 0x116fa0u: goto label_116fa0;
        case 0x116fa4u: goto label_116fa4;
        case 0x116fa8u: goto label_116fa8;
        case 0x116facu: goto label_116fac;
        case 0x116fb0u: goto label_116fb0;
        case 0x116fb4u: goto label_116fb4;
        case 0x116fb8u: goto label_116fb8;
        case 0x116fbcu: goto label_116fbc;
        case 0x116fc0u: goto label_116fc0;
        case 0x116fc4u: goto label_116fc4;
        case 0x116fc8u: goto label_116fc8;
        case 0x116fccu: goto label_116fcc;
        case 0x116fd0u: goto label_116fd0;
        case 0x116fd4u: goto label_116fd4;
        case 0x116fd8u: goto label_116fd8;
        case 0x116fdcu: goto label_116fdc;
        case 0x116fe0u: goto label_116fe0;
        case 0x116fe4u: goto label_116fe4;
        case 0x116fe8u: goto label_116fe8;
        case 0x116fecu: goto label_116fec;
        case 0x116ff0u: goto label_116ff0;
        case 0x116ff4u: goto label_116ff4;
        case 0x116ff8u: goto label_116ff8;
        case 0x116ffcu: goto label_116ffc;
        case 0x117000u: goto label_117000;
        case 0x117004u: goto label_117004;
        case 0x117008u: goto label_117008;
        case 0x11700cu: goto label_11700c;
        case 0x117010u: goto label_117010;
        case 0x117014u: goto label_117014;
        case 0x117018u: goto label_117018;
        case 0x11701cu: goto label_11701c;
        case 0x117020u: goto label_117020;
        case 0x117024u: goto label_117024;
        case 0x117028u: goto label_117028;
        case 0x11702cu: goto label_11702c;
        case 0x117030u: goto label_117030;
        case 0x117034u: goto label_117034;
        case 0x117038u: goto label_117038;
        case 0x11703cu: goto label_11703c;
        case 0x117040u: goto label_117040;
        case 0x117044u: goto label_117044;
        case 0x117048u: goto label_117048;
        case 0x11704cu: goto label_11704c;
        case 0x117050u: goto label_117050;
        case 0x117054u: goto label_117054;
        case 0x117058u: goto label_117058;
        case 0x11705cu: goto label_11705c;
        case 0x117060u: goto label_117060;
        case 0x117064u: goto label_117064;
        case 0x117068u: goto label_117068;
        case 0x11706cu: goto label_11706c;
        case 0x117070u: goto label_117070;
        case 0x117074u: goto label_117074;
        case 0x117078u: goto label_117078;
        case 0x11707cu: goto label_11707c;
        case 0x117080u: goto label_117080;
        case 0x117084u: goto label_117084;
        case 0x117088u: goto label_117088;
        case 0x11708cu: goto label_11708c;
        case 0x117090u: goto label_117090;
        case 0x117094u: goto label_117094;
        case 0x117098u: goto label_117098;
        case 0x11709cu: goto label_11709c;
        case 0x1170a0u: goto label_1170a0;
        case 0x1170a4u: goto label_1170a4;
        case 0x1170a8u: goto label_1170a8;
        case 0x1170acu: goto label_1170ac;
        case 0x1170b0u: goto label_1170b0;
        case 0x1170b4u: goto label_1170b4;
        case 0x1170b8u: goto label_1170b8;
        case 0x1170bcu: goto label_1170bc;
        case 0x1170c0u: goto label_1170c0;
        case 0x1170c4u: goto label_1170c4;
        case 0x1170c8u: goto label_1170c8;
        case 0x1170ccu: goto label_1170cc;
        case 0x1170d0u: goto label_1170d0;
        case 0x1170d4u: goto label_1170d4;
        case 0x1170d8u: goto label_1170d8;
        case 0x1170dcu: goto label_1170dc;
        case 0x1170e0u: goto label_1170e0;
        case 0x1170e4u: goto label_1170e4;
        case 0x1170e8u: goto label_1170e8;
        case 0x1170ecu: goto label_1170ec;
        case 0x1170f0u: goto label_1170f0;
        case 0x1170f4u: goto label_1170f4;
        case 0x1170f8u: goto label_1170f8;
        case 0x1170fcu: goto label_1170fc;
        case 0x117100u: goto label_117100;
        case 0x117104u: goto label_117104;
        case 0x117108u: goto label_117108;
        case 0x11710cu: goto label_11710c;
        case 0x117110u: goto label_117110;
        case 0x117114u: goto label_117114;
        case 0x117118u: goto label_117118;
        case 0x11711cu: goto label_11711c;
        case 0x117120u: goto label_117120;
        case 0x117124u: goto label_117124;
        case 0x117128u: goto label_117128;
        case 0x11712cu: goto label_11712c;
        case 0x117130u: goto label_117130;
        case 0x117134u: goto label_117134;
        case 0x117138u: goto label_117138;
        case 0x11713cu: goto label_11713c;
        case 0x117140u: goto label_117140;
        case 0x117144u: goto label_117144;
        case 0x117148u: goto label_117148;
        case 0x11714cu: goto label_11714c;
        case 0x117150u: goto label_117150;
        case 0x117154u: goto label_117154;
        case 0x117158u: goto label_117158;
        case 0x11715cu: goto label_11715c;
        case 0x117160u: goto label_117160;
        case 0x117164u: goto label_117164;
        case 0x117168u: goto label_117168;
        case 0x11716cu: goto label_11716c;
        case 0x117170u: goto label_117170;
        case 0x117174u: goto label_117174;
        case 0x117178u: goto label_117178;
        case 0x11717cu: goto label_11717c;
        case 0x117180u: goto label_117180;
        case 0x117184u: goto label_117184;
        case 0x117188u: goto label_117188;
        case 0x11718cu: goto label_11718c;
        case 0x117190u: goto label_117190;
        case 0x117194u: goto label_117194;
        case 0x117198u: goto label_117198;
        case 0x11719cu: goto label_11719c;
        case 0x1171a0u: goto label_1171a0;
        case 0x1171a4u: goto label_1171a4;
        case 0x1171a8u: goto label_1171a8;
        case 0x1171acu: goto label_1171ac;
        case 0x1171b0u: goto label_1171b0;
        case 0x1171b4u: goto label_1171b4;
        case 0x1171b8u: goto label_1171b8;
        case 0x1171bcu: goto label_1171bc;
        case 0x1171c0u: goto label_1171c0;
        case 0x1171c4u: goto label_1171c4;
        case 0x1171c8u: goto label_1171c8;
        case 0x1171ccu: goto label_1171cc;
        case 0x1171d0u: goto label_1171d0;
        case 0x1171d4u: goto label_1171d4;
        case 0x1171d8u: goto label_1171d8;
        case 0x1171dcu: goto label_1171dc;
        case 0x1171e0u: goto label_1171e0;
        case 0x1171e4u: goto label_1171e4;
        case 0x1171e8u: goto label_1171e8;
        case 0x1171ecu: goto label_1171ec;
        case 0x1171f0u: goto label_1171f0;
        case 0x1171f4u: goto label_1171f4;
        case 0x1171f8u: goto label_1171f8;
        case 0x1171fcu: goto label_1171fc;
        case 0x117200u: goto label_117200;
        case 0x117204u: goto label_117204;
        case 0x117208u: goto label_117208;
        case 0x11720cu: goto label_11720c;
        case 0x117210u: goto label_117210;
        case 0x117214u: goto label_117214;
        case 0x117218u: goto label_117218;
        case 0x11721cu: goto label_11721c;
        case 0x117220u: goto label_117220;
        case 0x117224u: goto label_117224;
        case 0x117228u: goto label_117228;
        case 0x11722cu: goto label_11722c;
        case 0x117230u: goto label_117230;
        case 0x117234u: goto label_117234;
        case 0x117238u: goto label_117238;
        case 0x11723cu: goto label_11723c;
        case 0x117240u: goto label_117240;
        case 0x117244u: goto label_117244;
        case 0x117248u: goto label_117248;
        case 0x11724cu: goto label_11724c;
        case 0x117250u: goto label_117250;
        case 0x117254u: goto label_117254;
        case 0x117258u: goto label_117258;
        case 0x11725cu: goto label_11725c;
        case 0x117260u: goto label_117260;
        case 0x117264u: goto label_117264;
        case 0x117268u: goto label_117268;
        case 0x11726cu: goto label_11726c;
        case 0x117270u: goto label_117270;
        case 0x117274u: goto label_117274;
        case 0x117278u: goto label_117278;
        case 0x11727cu: goto label_11727c;
        case 0x117280u: goto label_117280;
        case 0x117284u: goto label_117284;
        case 0x117288u: goto label_117288;
        case 0x11728cu: goto label_11728c;
        case 0x117290u: goto label_117290;
        case 0x117294u: goto label_117294;
        case 0x117298u: goto label_117298;
        case 0x11729cu: goto label_11729c;
        case 0x1172a0u: goto label_1172a0;
        case 0x1172a4u: goto label_1172a4;
        case 0x1172a8u: goto label_1172a8;
        case 0x1172acu: goto label_1172ac;
        case 0x1172b0u: goto label_1172b0;
        case 0x1172b4u: goto label_1172b4;
        case 0x1172b8u: goto label_1172b8;
        case 0x1172bcu: goto label_1172bc;
        case 0x1172c0u: goto label_1172c0;
        case 0x1172c4u: goto label_1172c4;
        case 0x1172c8u: goto label_1172c8;
        case 0x1172ccu: goto label_1172cc;
        case 0x1172d0u: goto label_1172d0;
        case 0x1172d4u: goto label_1172d4;
        case 0x1172d8u: goto label_1172d8;
        case 0x1172dcu: goto label_1172dc;
        case 0x1172e0u: goto label_1172e0;
        case 0x1172e4u: goto label_1172e4;
        case 0x1172e8u: goto label_1172e8;
        case 0x1172ecu: goto label_1172ec;
        case 0x1172f0u: goto label_1172f0;
        case 0x1172f4u: goto label_1172f4;
        case 0x1172f8u: goto label_1172f8;
        case 0x1172fcu: goto label_1172fc;
        case 0x117300u: goto label_117300;
        case 0x117304u: goto label_117304;
        case 0x117308u: goto label_117308;
        case 0x11730cu: goto label_11730c;
        case 0x117310u: goto label_117310;
        case 0x117314u: goto label_117314;
        case 0x117318u: goto label_117318;
        case 0x11731cu: goto label_11731c;
        case 0x117320u: goto label_117320;
        case 0x117324u: goto label_117324;
        case 0x117328u: goto label_117328;
        case 0x11732cu: goto label_11732c;
        case 0x117330u: goto label_117330;
        case 0x117334u: goto label_117334;
        case 0x117338u: goto label_117338;
        case 0x11733cu: goto label_11733c;
        case 0x117340u: goto label_117340;
        case 0x117344u: goto label_117344;
        case 0x117348u: goto label_117348;
        case 0x11734cu: goto label_11734c;
        case 0x117350u: goto label_117350;
        case 0x117354u: goto label_117354;
        case 0x117358u: goto label_117358;
        case 0x11735cu: goto label_11735c;
        case 0x117360u: goto label_117360;
        case 0x117364u: goto label_117364;
        case 0x117368u: goto label_117368;
        case 0x11736cu: goto label_11736c;
        case 0x117370u: goto label_117370;
        case 0x117374u: goto label_117374;
        case 0x117378u: goto label_117378;
        case 0x11737cu: goto label_11737c;
        case 0x117380u: goto label_117380;
        case 0x117384u: goto label_117384;
        case 0x117388u: goto label_117388;
        case 0x11738cu: goto label_11738c;
        case 0x117390u: goto label_117390;
        case 0x117394u: goto label_117394;
        case 0x117398u: goto label_117398;
        case 0x11739cu: goto label_11739c;
        case 0x1173a0u: goto label_1173a0;
        case 0x1173a4u: goto label_1173a4;
        case 0x1173a8u: goto label_1173a8;
        case 0x1173acu: goto label_1173ac;
        case 0x1173b0u: goto label_1173b0;
        case 0x1173b4u: goto label_1173b4;
        case 0x1173b8u: goto label_1173b8;
        case 0x1173bcu: goto label_1173bc;
        case 0x1173c0u: goto label_1173c0;
        case 0x1173c4u: goto label_1173c4;
        case 0x1173c8u: goto label_1173c8;
        case 0x1173ccu: goto label_1173cc;
        case 0x1173d0u: goto label_1173d0;
        case 0x1173d4u: goto label_1173d4;
        case 0x1173d8u: goto label_1173d8;
        case 0x1173dcu: goto label_1173dc;
        case 0x1173e0u: goto label_1173e0;
        case 0x1173e4u: goto label_1173e4;
        case 0x1173e8u: goto label_1173e8;
        case 0x1173ecu: goto label_1173ec;
        case 0x1173f0u: goto label_1173f0;
        case 0x1173f4u: goto label_1173f4;
        case 0x1173f8u: goto label_1173f8;
        case 0x1173fcu: goto label_1173fc;
        case 0x117400u: goto label_117400;
        case 0x117404u: goto label_117404;
        case 0x117408u: goto label_117408;
        case 0x11740cu: goto label_11740c;
        case 0x117410u: goto label_117410;
        case 0x117414u: goto label_117414;
        case 0x117418u: goto label_117418;
        case 0x11741cu: goto label_11741c;
        case 0x117420u: goto label_117420;
        case 0x117424u: goto label_117424;
        case 0x117428u: goto label_117428;
        case 0x11742cu: goto label_11742c;
        case 0x117430u: goto label_117430;
        case 0x117434u: goto label_117434;
        case 0x117438u: goto label_117438;
        case 0x11743cu: goto label_11743c;
        case 0x117440u: goto label_117440;
        case 0x117444u: goto label_117444;
        case 0x117448u: goto label_117448;
        case 0x11744cu: goto label_11744c;
        case 0x117450u: goto label_117450;
        case 0x117454u: goto label_117454;
        case 0x117458u: goto label_117458;
        case 0x11745cu: goto label_11745c;
        case 0x117460u: goto label_117460;
        case 0x117464u: goto label_117464;
        case 0x117468u: goto label_117468;
        case 0x11746cu: goto label_11746c;
        case 0x117470u: goto label_117470;
        case 0x117474u: goto label_117474;
        case 0x117478u: goto label_117478;
        case 0x11747cu: goto label_11747c;
        case 0x117480u: goto label_117480;
        case 0x117484u: goto label_117484;
        case 0x117488u: goto label_117488;
        case 0x11748cu: goto label_11748c;
        case 0x117490u: goto label_117490;
        case 0x117494u: goto label_117494;
        case 0x117498u: goto label_117498;
        case 0x11749cu: goto label_11749c;
        case 0x1174a0u: goto label_1174a0;
        case 0x1174a4u: goto label_1174a4;
        case 0x1174a8u: goto label_1174a8;
        case 0x1174acu: goto label_1174ac;
        case 0x1174b0u: goto label_1174b0;
        case 0x1174b4u: goto label_1174b4;
        case 0x1174b8u: goto label_1174b8;
        case 0x1174bcu: goto label_1174bc;
        case 0x1174c0u: goto label_1174c0;
        case 0x1174c4u: goto label_1174c4;
        case 0x1174c8u: goto label_1174c8;
        case 0x1174ccu: goto label_1174cc;
        case 0x1174d0u: goto label_1174d0;
        case 0x1174d4u: goto label_1174d4;
        case 0x1174d8u: goto label_1174d8;
        case 0x1174dcu: goto label_1174dc;
        case 0x1174e0u: goto label_1174e0;
        case 0x1174e4u: goto label_1174e4;
        case 0x1174e8u: goto label_1174e8;
        case 0x1174ecu: goto label_1174ec;
        case 0x1174f0u: goto label_1174f0;
        case 0x1174f4u: goto label_1174f4;
        case 0x1174f8u: goto label_1174f8;
        case 0x1174fcu: goto label_1174fc;
        case 0x117500u: goto label_117500;
        case 0x117504u: goto label_117504;
        case 0x117508u: goto label_117508;
        case 0x11750cu: goto label_11750c;
        case 0x117510u: goto label_117510;
        case 0x117514u: goto label_117514;
        case 0x117518u: goto label_117518;
        case 0x11751cu: goto label_11751c;
        case 0x117520u: goto label_117520;
        case 0x117524u: goto label_117524;
        case 0x117528u: goto label_117528;
        case 0x11752cu: goto label_11752c;
        case 0x117530u: goto label_117530;
        case 0x117534u: goto label_117534;
        case 0x117538u: goto label_117538;
        case 0x11753cu: goto label_11753c;
        case 0x117540u: goto label_117540;
        case 0x117544u: goto label_117544;
        case 0x117548u: goto label_117548;
        case 0x11754cu: goto label_11754c;
        case 0x117550u: goto label_117550;
        case 0x117554u: goto label_117554;
        case 0x117558u: goto label_117558;
        case 0x11755cu: goto label_11755c;
        case 0x117560u: goto label_117560;
        case 0x117564u: goto label_117564;
        case 0x117568u: goto label_117568;
        case 0x11756cu: goto label_11756c;
        case 0x117570u: goto label_117570;
        case 0x117574u: goto label_117574;
        case 0x117578u: goto label_117578;
        case 0x11757cu: goto label_11757c;
        case 0x117580u: goto label_117580;
        case 0x117584u: goto label_117584;
        case 0x117588u: goto label_117588;
        case 0x11758cu: goto label_11758c;
        case 0x117590u: goto label_117590;
        case 0x117594u: goto label_117594;
        case 0x117598u: goto label_117598;
        case 0x11759cu: goto label_11759c;
        case 0x1175a0u: goto label_1175a0;
        case 0x1175a4u: goto label_1175a4;
        case 0x1175a8u: goto label_1175a8;
        case 0x1175acu: goto label_1175ac;
        case 0x1175b0u: goto label_1175b0;
        case 0x1175b4u: goto label_1175b4;
        case 0x1175b8u: goto label_1175b8;
        case 0x1175bcu: goto label_1175bc;
        case 0x1175c0u: goto label_1175c0;
        case 0x1175c4u: goto label_1175c4;
        case 0x1175c8u: goto label_1175c8;
        case 0x1175ccu: goto label_1175cc;
        case 0x1175d0u: goto label_1175d0;
        case 0x1175d4u: goto label_1175d4;
        case 0x1175d8u: goto label_1175d8;
        case 0x1175dcu: goto label_1175dc;
        case 0x1175e0u: goto label_1175e0;
        case 0x1175e4u: goto label_1175e4;
        case 0x1175e8u: goto label_1175e8;
        case 0x1175ecu: goto label_1175ec;
        case 0x1175f0u: goto label_1175f0;
        case 0x1175f4u: goto label_1175f4;
        case 0x1175f8u: goto label_1175f8;
        case 0x1175fcu: goto label_1175fc;
        default: break;
    }

    ctx->pc = 0x116a88u;

label_116a88:
    // 0x116a88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x116a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_116a8c:
    // 0x116a8c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x116a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_116a90:
    // 0x116a90: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x116a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_116a94:
    // 0x116a94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116a98:
    // 0x116a98: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x116a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_116a9c:
    // 0x116a9c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x116a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_116aa0:
    // 0x116aa0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x116aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_116aa4:
    // 0x116aa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x116aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_116aa8:
    // 0x116aa8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x116aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_116aac:
    // 0x116aac: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x116aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_116ab0:
    // 0x116ab0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x116ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_116ab4:
    // 0x116ab4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x116ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_116ab8:
    // 0x116ab8: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x116ab8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_116abc:
    // 0x116abc: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x116abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_116ac0:
    // 0x116ac0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x116ac0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_116ac4:
    // 0x116ac4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x116ac4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_116ac8:
    // 0x116ac8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x116ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_116acc:
    // 0x116acc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x116accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_116ad0:
    // 0x116ad0: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x116ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
label_116ad4:
    // 0x116ad4: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x116ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_116ad8:
    // 0x116ad8: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x116ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
label_116adc:
    // 0x116adc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x116adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_116ae0:
    // 0x116ae0: 0xc04d476  jal         func_1351D8
label_116ae4:
    if (ctx->pc == 0x116AE4u) {
        ctx->pc = 0x116AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AE0u;
        // 0x116ae4: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116AE8u;
        goto label_116ae8;
    }
    ctx->pc = 0x116AE0u;
    SET_GPR_U32(ctx, 31, 0x116AE8u);
    ctx->pc = 0x116AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AE0u;
    // 0x116ae4: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x116AE0u, 0x116AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AE8u;
label_116ae8:
    // 0x116ae8: 0xc0a4c3c  jal         func_2930F0
label_116aec:
    if (ctx->pc == 0x116AECu) {
        ctx->pc = 0x116AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AE8u;
        // 0x116aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116AF0u;
        goto label_116af0;
    }
    ctx->pc = 0x116AE8u;
    SET_GPR_U32(ctx, 31, 0x116AF0u);
    ctx->pc = 0x116AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AE8u;
    // 0x116aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x116AE8u, 0x116AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AF0u;
label_116af0:
    // 0x116af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_116af4:
    // 0x116af4: 0xc0a480c  jal         func_292030
label_116af8:
    if (ctx->pc == 0x116AF8u) {
        ctx->pc = 0x116AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AF4u;
        // 0x116af8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116AFCu;
        goto label_116afc;
    }
    ctx->pc = 0x116AF4u;
    SET_GPR_U32(ctx, 31, 0x116AFCu);
    ctx->pc = 0x116AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AF4u;
    // 0x116af8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x116AF4u, 0x116AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AFCu;
label_116afc:
    // 0x116afc: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x116afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_116b00:
    // 0x116b00: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x116b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_116b04:
    // 0x116b04: 0x922502f6  lbu         $a1, 0x2F6($s1)
    ctx->pc = 0x116b04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_116b08:
    // 0x116b08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x116b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_116b0c:
    // 0x116b0c: 0x2ca40006  sltiu       $a0, $a1, 0x6
    ctx->pc = 0x116b0cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_116b10:
    // 0x116b10: 0x1080029d  beqz        $a0, . + 4 + (0x29D << 2)
label_116b14:
    if (ctx->pc == 0x116B14u) {
        ctx->pc = 0x116B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B10u;
        // 0x116b14: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116B18u;
        goto label_116b18;
    }
    ctx->pc = 0x116B10u;
    {
        const bool branch_taken_0x116b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x116B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B10u;
        // 0x116b14: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b10) {
            ctx->pc = 0x117588u;
            goto label_117588;
        }
    }
    ctx->pc = 0x116B18u;
label_116b18:
    // 0x116b18: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x116b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_116b1c:
    // 0x116b1c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x116b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_116b20:
    // 0x116b20: 0x2442c290  addiu       $v0, $v0, -0x3D70
    ctx->pc = 0x116b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951568));
label_116b24:
    // 0x116b24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_116b28:
    // 0x116b28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x116b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_116b2c:
    // 0x116b2c: 0x800008  jr          $a0
label_116b30:
    if (ctx->pc == 0x116B30u) {
        ctx->pc = 0x116B34u;
        goto label_116b34;
    }
    ctx->pc = 0x116B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116B34u: goto label_116b34;
            case 0x116CA4u: goto label_116ca4;
            case 0x116F44u: goto label_116f44;
            case 0x11701Cu: goto label_11701c;
            case 0x1174E8u: goto label_1174e8;
            case 0x117534u: goto label_117534;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116B2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x116B34u;
label_116b34:
    // 0x116b34: 0xc04ab0a  jal         func_12AC28
label_116b38:
    if (ctx->pc == 0x116B38u) {
        ctx->pc = 0x116B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B34u;
        // 0x116b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116B3Cu;
        goto label_116b3c;
    }
    ctx->pc = 0x116B34u;
    SET_GPR_U32(ctx, 31, 0x116B3Cu);
    ctx->pc = 0x116B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B34u;
    // 0x116b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x116B34u, 0x116B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B3Cu;
label_116b3c:
    // 0x116b3c: 0xc04ae4a  jal         func_12B928
label_116b40:
    if (ctx->pc == 0x116B40u) {
        ctx->pc = 0x116B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B3Cu;
        // 0x116b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116B44u;
        goto label_116b44;
    }
    ctx->pc = 0x116B3Cu;
    SET_GPR_U32(ctx, 31, 0x116B44u);
    ctx->pc = 0x116B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B3Cu;
    // 0x116b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x116B3Cu, 0x116B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B44u;
label_116b44:
    // 0x116b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_116b48:
    // 0x116b48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x116b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_116b4c:
    // 0x116b4c: 0xc0493d8  jal         func_124F60
label_116b50:
    if (ctx->pc == 0x116B50u) {
        ctx->pc = 0x116B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B4Cu;
        // 0x116b50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116B54u;
        goto label_116b54;
    }
    ctx->pc = 0x116B4Cu;
    SET_GPR_U32(ctx, 31, 0x116B54u);
    ctx->pc = 0x116B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B4Cu;
    // 0x116b50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x116B4Cu, 0x116B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B54u;
label_116b54:
    // 0x116b54: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x116b54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
label_116b58:
    // 0x116b58: 0xc0c73f8  jal         func_31CFE0
label_116b5c:
    if (ctx->pc == 0x116B5Cu) {
        ctx->pc = 0x116B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B58u;
        // 0x116b5c: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116B60u;
        goto label_116b60;
    }
    ctx->pc = 0x116B58u;
    SET_GPR_U32(ctx, 31, 0x116B60u);
    ctx->pc = 0x116B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B58u;
    // 0x116b5c: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x116B58u, 0x116B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B60u;
label_116b60:
    // 0x116b60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x116b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_116b64:
    // 0x116b64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x116b64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116b68:
    // 0x116b68: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_116b6c:
    if (ctx->pc == 0x116B6Cu) {
        ctx->pc = 0x116B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B68u;
        // 0x116b6c: 0xa22202f7  sb          $v0, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116B70u;
        goto label_116b70;
    }
    ctx->pc = 0x116B68u;
    {
        const bool branch_taken_0x116b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B68u;
        // 0x116b6c: 0xa22202f7  sb          $v0, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b68) {
            ctx->pc = 0x116C04u;
            goto label_116c04;
        }
    }
    ctx->pc = 0x116B70u;
label_116b70:
    // 0x116b70: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x116b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_116b74:
    // 0x116b74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x116b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_116b78:
    // 0x116b78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_116b7c:
    // 0x116b7c: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x116b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_116b80:
    // 0x116b80: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x116b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_116b84:
    // 0x116b84: 0x2407002c  addiu       $a3, $zero, 0x2C
    ctx->pc = 0x116b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_116b88:
    // 0x116b88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x116b88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116b8c:
    // 0x116b8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x116b8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_116b90:
    // 0x116b90: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x116b90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_116b94:
    // 0x116b94: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x116b94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_116b98:
    // 0x116b98: 0xc042902  jal         func_10A408
label_116b9c:
    if (ctx->pc == 0x116B9Cu) {
        ctx->pc = 0x116B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B98u;
        // 0x116b9c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116BA0u;
        goto label_116ba0;
    }
    ctx->pc = 0x116B98u;
    SET_GPR_U32(ctx, 31, 0x116BA0u);
    ctx->pc = 0x116B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B98u;
    // 0x116b9c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x116B98u, 0x116BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116BA0u;
label_116ba0:
    // 0x116ba0: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x116ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_116ba4:
    // 0x116ba4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x116ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_116ba8:
    // 0x116ba8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x116ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_116bac:
    // 0x116bac: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x116bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_116bb0:
    // 0x116bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_116bb4:
    // 0x116bb4: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x116bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_116bb8:
    // 0x116bb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x116bb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116bbc:
    // 0x116bbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x116bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_116bc0:
    // 0x116bc0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x116bc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_116bc4:
    // 0x116bc4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x116bc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_116bc8:
    // 0x116bc8: 0xc042908  jal         func_10A420
label_116bcc:
    if (ctx->pc == 0x116BCCu) {
        ctx->pc = 0x116BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BC8u;
        // 0x116bcc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116BD0u;
        goto label_116bd0;
    }
    ctx->pc = 0x116BC8u;
    SET_GPR_U32(ctx, 31, 0x116BD0u);
    ctx->pc = 0x116BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BC8u;
    // 0x116bcc: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x116BC8u, 0x116BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116BD0u;
label_116bd0:
    // 0x116bd0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x116bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_116bd4:
    // 0x116bd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_116bd8:
    // 0x116bd8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x116bd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_116bdc:
    // 0x116bdc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_116be0:
    // 0x116be0: 0x8c45069c  lw          $a1, 0x69C($v0)
    ctx->pc = 0x116be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1692)));
label_116be4:
    // 0x116be4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x116be4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116be8:
    // 0x116be8: 0x8c4606a0  lw          $a2, 0x6A0($v0)
    ctx->pc = 0x116be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1696)));
label_116bec:
    // 0x116bec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x116becu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116bf0:
    // 0x116bf0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x116bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_116bf4:
    // 0x116bf4: 0xc0aa15e  jal         func_2A8578
label_116bf8:
    if (ctx->pc == 0x116BF8u) {
        ctx->pc = 0x116BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BF4u;
        // 0x116bf8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116BFCu;
        goto label_116bfc;
    }
    ctx->pc = 0x116BF4u;
    SET_GPR_U32(ctx, 31, 0x116BFCu);
    ctx->pc = 0x116BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BF4u;
    // 0x116bf8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x116BF4u, 0x116BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116BFCu;
label_116bfc:
    // 0x116bfc: 0x10000025  b           . + 4 + (0x25 << 2)
label_116c00:
    if (ctx->pc == 0x116C00u) {
        ctx->pc = 0x116C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BFCu;
        // 0x116c00: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116C04u;
        goto label_116c04;
    }
    ctx->pc = 0x116BFCu;
    {
        const bool branch_taken_0x116bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BFCu;
        // 0x116c00: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116bfc) {
            ctx->pc = 0x116C94u;
            goto label_116c94;
        }
    }
    ctx->pc = 0x116C04u;
label_116c04:
    // 0x116c04: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x116c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_116c08:
    // 0x116c08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x116c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_116c0c:
    // 0x116c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_116c10:
    // 0x116c10: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x116c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_116c14:
    // 0x116c14: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x116c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_116c18:
    // 0x116c18: 0x2407002c  addiu       $a3, $zero, 0x2C
    ctx->pc = 0x116c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_116c1c:
    // 0x116c1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x116c1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116c20:
    // 0x116c20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x116c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_116c24:
    // 0x116c24: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x116c24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_116c28:
    // 0x116c28: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x116c28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_116c2c:
    // 0x116c2c: 0xc042902  jal         func_10A408
label_116c30:
    if (ctx->pc == 0x116C30u) {
        ctx->pc = 0x116C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C2Cu;
        // 0x116c30: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116C34u;
        goto label_116c34;
    }
    ctx->pc = 0x116C2Cu;
    SET_GPR_U32(ctx, 31, 0x116C34u);
    ctx->pc = 0x116C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C2Cu;
    // 0x116c30: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x116C2Cu, 0x116C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C34u;
label_116c34:
    // 0x116c34: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x116c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_116c38:
    // 0x116c38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x116c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_116c3c:
    // 0x116c3c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x116c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_116c40:
    // 0x116c40: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x116c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_116c44:
    // 0x116c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_116c48:
    // 0x116c48: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x116c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_116c4c:
    // 0x116c4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x116c4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116c50:
    // 0x116c50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x116c50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_116c54:
    // 0x116c54: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x116c54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_116c58:
    // 0x116c58: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x116c58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_116c5c:
    // 0x116c5c: 0xc042908  jal         func_10A420
label_116c60:
    if (ctx->pc == 0x116C60u) {
        ctx->pc = 0x116C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C5Cu;
        // 0x116c60: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116C64u;
        goto label_116c64;
    }
    ctx->pc = 0x116C5Cu;
    SET_GPR_U32(ctx, 31, 0x116C64u);
    ctx->pc = 0x116C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C5Cu;
    // 0x116c60: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x116C5Cu, 0x116C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C64u;
label_116c64:
    // 0x116c64: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x116c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_116c68:
    // 0x116c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_116c6c:
    // 0x116c6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x116c6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_116c70:
    // 0x116c70: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_116c74:
    // 0x116c74: 0x8c450800  lw          $a1, 0x800($v0)
    ctx->pc = 0x116c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2048)));
label_116c78:
    // 0x116c78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x116c78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116c7c:
    // 0x116c7c: 0x8c460804  lw          $a2, 0x804($v0)
    ctx->pc = 0x116c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2052)));
label_116c80:
    // 0x116c80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x116c80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116c84:
    // 0x116c84: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x116c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_116c88:
    // 0x116c88: 0xc0aa15e  jal         func_2A8578
label_116c8c:
    if (ctx->pc == 0x116C8Cu) {
        ctx->pc = 0x116C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C88u;
        // 0x116c8c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116C90u;
        goto label_116c90;
    }
    ctx->pc = 0x116C88u;
    SET_GPR_U32(ctx, 31, 0x116C90u);
    ctx->pc = 0x116C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C88u;
    // 0x116c8c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x116C88u, 0x116C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C90u;
label_116c90:
    // 0x116c90: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x116c90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_116c94:
    // 0x116c94: 0xa2201684  sb          $zero, 0x1684($s1)
    ctx->pc = 0x116c94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 0));
label_116c98:
    // 0x116c98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x116c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_116c9c:
    // 0x116c9c: 0xae2015b8  sw          $zero, 0x15B8($s1)
    ctx->pc = 0x116c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 0));
label_116ca0:
    // 0x116ca0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x116ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_116ca4:
    // 0x116ca4: 0xc0b6dea  jal         func_2DB7A8
label_116ca8:
    if (ctx->pc == 0x116CA8u) {
        ctx->pc = 0x116CACu;
        goto label_116cac;
    }
    ctx->pc = 0x116CA4u;
    SET_GPR_U32(ctx, 31, 0x116CACu);
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x116CA4u, 0x116CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116CACu;
label_116cac:
    // 0x116cac: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x116cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_116cb0:
    // 0x116cb0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_116cb4:
    if (ctx->pc == 0x116CB4u) {
        ctx->pc = 0x116CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116CB0u;
        // 0x116cb4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116CB8u;
        goto label_116cb8;
    }
    ctx->pc = 0x116CB0u;
    {
        const bool branch_taken_0x116cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116CB0u;
        // 0x116cb4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116cb0) {
            ctx->pc = 0x116CBCu;
            goto label_116cbc;
        }
    }
    ctx->pc = 0x116CB8u;
label_116cb8:
    // 0x116cb8: 0xa2220648  sb          $v0, 0x648($s1)
    ctx->pc = 0x116cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
label_116cbc:
    // 0x116cbc: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x116cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
label_116cc0:
    // 0x116cc0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x116cc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_116cc4:
    // 0x116cc4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x116cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_116cc8:
    // 0x116cc8: 0xc04939a  jal         func_124E68
label_116ccc:
    if (ctx->pc == 0x116CCCu) {
        ctx->pc = 0x116CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116CC8u;
        // 0x116ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116CD0u;
        goto label_116cd0;
    }
    ctx->pc = 0x116CC8u;
    SET_GPR_U32(ctx, 31, 0x116CD0u);
    ctx->pc = 0x116CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116CC8u;
    // 0x116ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x116CC8u, 0x116CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116CD0u;
label_116cd0:
    // 0x116cd0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x116cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_116cd4:
    // 0x116cd4: 0x8c6274a8  lw          $v0, 0x74A8($v1)
    ctx->pc = 0x116cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29864)));
label_116cd8:
    // 0x116cd8: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x116cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_116cdc:
    // 0x116cdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_116ce0:
    if (ctx->pc == 0x116CE0u) {
        ctx->pc = 0x116CE4u;
        goto label_116ce4;
    }
    ctx->pc = 0x116CDCu;
    {
        const bool branch_taken_0x116cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116cdc) {
            ctx->pc = 0x116CF0u;
            goto label_116cf0;
        }
    }
    ctx->pc = 0x116CE4u;
label_116ce4:
    // 0x116ce4: 0x8e2215b8  lw          $v0, 0x15B8($s1)
    ctx->pc = 0x116ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
label_116ce8:
    // 0x116ce8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x116ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_116cec:
    // 0x116cec: 0xae2215b8  sw          $v0, 0x15B8($s1)
    ctx->pc = 0x116cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
label_116cf0:
    // 0x116cf0: 0xc055f06  jal         func_157C18
label_116cf4:
    if (ctx->pc == 0x116CF4u) {
        ctx->pc = 0x116CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116CF0u;
        // 0x116cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116CF8u;
        goto label_116cf8;
    }
    ctx->pc = 0x116CF0u;
    SET_GPR_U32(ctx, 31, 0x116CF8u);
    ctx->pc = 0x116CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116CF0u;
    // 0x116cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x116CF0u, 0x116CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116CF8u;
label_116cf8:
    // 0x116cf8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_116cfc:
    if (ctx->pc == 0x116CFCu) {
        ctx->pc = 0x116CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116CF8u;
        // 0x116cfc: 0x8e250640  lw          $a1, 0x640($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116D00u;
        goto label_116d00;
    }
    ctx->pc = 0x116CF8u;
    {
        const bool branch_taken_0x116cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116CF8u;
        // 0x116cfc: 0x8e250640  lw          $a1, 0x640($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116cf8) {
            ctx->pc = 0x116D68u;
            goto label_116d68;
        }
    }
    ctx->pc = 0x116D00u;
label_116d00:
    // 0x116d00: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_116d04:
    if (ctx->pc == 0x116D04u) {
        ctx->pc = 0x116D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D00u;
        // 0x116d04: 0x8ca30214  lw          $v1, 0x214($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116D08u;
        goto label_116d08;
    }
    ctx->pc = 0x116D00u;
    {
        const bool branch_taken_0x116d00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x116d00) {
            ctx->pc = 0x116D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116D00u;
            // 0x116d04: 0x8ca30214  lw          $v1, 0x214($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116D10u;
            goto label_116d10;
        }
    }
    ctx->pc = 0x116D08u;
label_116d08:
    // 0x116d08: 0x10000015  b           . + 4 + (0x15 << 2)
label_116d0c:
    if (ctx->pc == 0x116D0Cu) {
        ctx->pc = 0x116D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D08u;
        // 0x116d0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116D10u;
        goto label_116d10;
    }
    ctx->pc = 0x116D08u;
    {
        const bool branch_taken_0x116d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D08u;
        // 0x116d0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d08) {
            ctx->pc = 0x116D60u;
            goto label_116d60;
        }
    }
    ctx->pc = 0x116D10u;
label_116d10:
    // 0x116d10: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x116d10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_116d14:
    // 0x116d14: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x116d14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_116d18:
    // 0x116d18: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x116d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_116d1c:
    // 0x116d1c: 0x40f809  jalr        $v0
label_116d20:
    if (ctx->pc == 0x116D20u) {
        ctx->pc = 0x116D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D1Cu;
        // 0x116d20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116D24u;
        goto label_116d24;
    }
    ctx->pc = 0x116D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x116D24u);
        ctx->pc = 0x116D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D1Cu;
        // 0x116d20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116D1Cu, 0x116D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x116D24u;
label_116d24:
    // 0x116d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_116d28:
    // 0x116d28: 0xc07dfac  jal         func_1F7EB0
label_116d2c:
    if (ctx->pc == 0x116D2Cu) {
        ctx->pc = 0x116D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D28u;
        // 0x116d2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116D30u;
        goto label_116d30;
    }
    ctx->pc = 0x116D28u;
    SET_GPR_U32(ctx, 31, 0x116D30u);
    ctx->pc = 0x116D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D28u;
    // 0x116d2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x116D28u, 0x116D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D30u;
label_116d30:
    // 0x116d30: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x116d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_116d34:
    // 0x116d34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x116d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_116d38:
    // 0x116d38: 0x0  nop
    ctx->pc = 0x116d38u;
    // NOP
label_116d3c:
    // 0x116d3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x116d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_116d40:
    // 0x116d40: 0x0  nop
    ctx->pc = 0x116d40u;
    // NOP
label_116d44:
    // 0x116d44: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_116d48:
    if (ctx->pc == 0x116D48u) {
        ctx->pc = 0x116D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D44u;
        // 0x116d48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116D4Cu;
        goto label_116d4c;
    }
    ctx->pc = 0x116D44u;
    {
        const bool branch_taken_0x116d44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x116D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D44u;
        // 0x116d48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d44) {
            ctx->pc = 0x116D60u;
            goto label_116d60;
        }
    }
    ctx->pc = 0x116D4Cu;
label_116d4c:
    // 0x116d4c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x116d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_116d50:
    // 0x116d50: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x116d50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_116d54:
    // 0x116d54: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x116d54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_116d58:
    // 0x116d58: 0x10000002  b           . + 4 + (0x2 << 2)
label_116d5c:
    if (ctx->pc == 0x116D5Cu) {
        ctx->pc = 0x116D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D58u;
        // 0x116d5c: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116D60u;
        goto label_116d60;
    }
    ctx->pc = 0x116D58u;
    {
        const bool branch_taken_0x116d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D58u;
        // 0x116d5c: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d58) {
            ctx->pc = 0x116D64u;
            goto label_116d64;
        }
    }
    ctx->pc = 0x116D60u;
label_116d60:
    // 0x116d60: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x116d60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_116d64:
    // 0x116d64: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x116d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_116d68:
    // 0x116d68: 0x10a001d5  beqz        $a1, . + 4 + (0x1D5 << 2)
label_116d6c:
    if (ctx->pc == 0x116D6Cu) {
        ctx->pc = 0x116D70u;
        goto label_116d70;
    }
    ctx->pc = 0x116D68u;
    {
        const bool branch_taken_0x116d68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x116d68) {
            ctx->pc = 0x1174C0u;
            goto label_1174c0;
        }
    }
    ctx->pc = 0x116D70u;
label_116d70:
    // 0x116d70: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x116d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_116d74:
    // 0x116d74: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x116d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_116d78:
    // 0x116d78: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x116d78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_116d7c:
    // 0x116d7c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x116d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_116d80:
    // 0x116d80: 0x40f809  jalr        $v0
label_116d84:
    if (ctx->pc == 0x116D84u) {
        ctx->pc = 0x116D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D80u;
        // 0x116d84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116D88u;
        goto label_116d88;
    }
    ctx->pc = 0x116D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x116D88u);
        ctx->pc = 0x116D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D80u;
        // 0x116d84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116D80u, 0x116D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x116D88u;
label_116d88:
    // 0x116d88: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x116d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_116d8c:
    // 0x116d8c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x116d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_116d90:
    // 0x116d90: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x116d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_116d94:
    // 0x116d94: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x116d94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_116d98:
    // 0x116d98: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x116d98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_116d9c:
    // 0x116d9c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x116d9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_116da0:
    // 0x116da0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x116da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_116da4:
    // 0x116da4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x116da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_116da8:
    // 0x116da8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x116da8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_116dac:
    // 0x116dac: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x116dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_116db0:
    // 0x116db0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x116db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_116db4:
    // 0x116db4: 0x13b00007  beq         $sp, $s0, . + 4 + (0x7 << 2)
label_116db8:
    if (ctx->pc == 0x116DB8u) {
        ctx->pc = 0x116DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DB4u;
        // 0x116db8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116DBCu;
        goto label_116dbc;
    }
    ctx->pc = 0x116DB4u;
    {
        const bool branch_taken_0x116db4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 16));
        ctx->pc = 0x116DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DB4u;
        // 0x116db8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116db4) {
            ctx->pc = 0x116DD4u;
            goto label_116dd4;
        }
    }
    ctx->pc = 0x116DBCu;
label_116dbc:
    // 0x116dbc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x116dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_116dc0:
    // 0x116dc0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x116dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_116dc4:
    // 0x116dc4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x116dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_116dc8:
    // 0x116dc8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x116dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_116dcc:
    // 0x116dcc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x116dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_116dd0:
    // 0x116dd0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x116dd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_116dd4:
    // 0x116dd4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x116dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_116dd8:
    // 0x116dd8: 0xc07df8a  jal         func_1F7E28
label_116ddc:
    if (ctx->pc == 0x116DDCu) {
        ctx->pc = 0x116DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DD8u;
        // 0x116ddc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116DE0u;
        goto label_116de0;
    }
    ctx->pc = 0x116DD8u;
    SET_GPR_U32(ctx, 31, 0x116DE0u);
    ctx->pc = 0x116DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116DD8u;
    // 0x116ddc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x116DD8u, 0x116DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116DE0u;
label_116de0:
    // 0x116de0: 0x0  nop
    ctx->pc = 0x116de0u;
    // NOP
label_116de4:
    // 0x116de4: 0x0  nop
    ctx->pc = 0x116de4u;
    // NOP
label_116de8:
    // 0x116de8: 0x46000504  c1          0x504
    ctx->pc = 0x116de8u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
label_116dec:
    // 0x116dec: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x116decu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_116df0:
    // 0x116df0: 0x0  nop
    ctx->pc = 0x116df0u;
    // NOP
label_116df4:
    // 0x116df4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_116df8:
    if (ctx->pc == 0x116DF8u) {
        ctx->pc = 0x116DFCu;
        goto label_116dfc;
    }
    ctx->pc = 0x116DF4u;
    {
        const bool branch_taken_0x116df4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x116df4) {
            ctx->pc = 0x116E08u;
            goto label_116e08;
        }
    }
    ctx->pc = 0x116DFCu;
label_116dfc:
    // 0x116dfc: 0xc0e8910  jal         func_3A2440
label_116e00:
    if (ctx->pc == 0x116E00u) {
        ctx->pc = 0x116E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DFCu;
        // 0x116e00: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x116E04u;
        goto label_116e04;
    }
    ctx->pc = 0x116DFCu;
    SET_GPR_U32(ctx, 31, 0x116E04u);
    ctx->pc = 0x116E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116DFCu;
    // 0x116e00: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x116DFCu, 0x116E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E04u;
label_116e04:
    // 0x116e04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x116e04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_116e08:
    // 0x116e08: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x116e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_116e0c:
    // 0x116e0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x116e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_116e10:
    // 0x116e10: 0x0  nop
    ctx->pc = 0x116e10u;
    // NOP
label_116e14:
    // 0x116e14: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x116e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_116e18:
    // 0x116e18: 0x0  nop
    ctx->pc = 0x116e18u;
    // NOP
label_116e1c:
    // 0x116e1c: 0x450001a8  bc1f        . + 4 + (0x1A8 << 2)
label_116e20:
    if (ctx->pc == 0x116E20u) {
        ctx->pc = 0x116E24u;
        goto label_116e24;
    }
    ctx->pc = 0x116E1Cu;
    {
        const bool branch_taken_0x116e1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x116e1c) {
            ctx->pc = 0x1174C0u;
            goto label_1174c0;
        }
    }
    ctx->pc = 0x116E24u;
label_116e24:
    // 0x116e24: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x116e24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_116e28:
    // 0x116e28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_116e2c:
    if (ctx->pc == 0x116E2Cu) {
        ctx->pc = 0x116E30u;
        goto label_116e30;
    }
    ctx->pc = 0x116E28u;
    {
        const bool branch_taken_0x116e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116e28) {
            ctx->pc = 0x116E50u;
            goto label_116e50;
        }
    }
    ctx->pc = 0x116E30u;
label_116e30:
    // 0x116e30: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x116e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_116e34:
    // 0x116e34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x116e34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_116e38:
    // 0x116e38: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x116e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_116e3c:
    // 0x116e3c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x116e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_116e40:
    // 0x116e40: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x116e40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_116e44:
    // 0x116e44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x116e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_116e48:
    // 0x116e48: 0x10000007  b           . + 4 + (0x7 << 2)
label_116e4c:
    if (ctx->pc == 0x116E4Cu) {
        ctx->pc = 0x116E50u;
        goto label_116e50;
    }
    ctx->pc = 0x116E48u;
    {
        const bool branch_taken_0x116e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116e48) {
            ctx->pc = 0x116E68u;
            goto label_116e68;
        }
    }
    ctx->pc = 0x116E50u;
label_116e50:
    // 0x116e50: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x116e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_116e54:
    // 0x116e54: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x116e54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_116e58:
    // 0x116e58: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x116e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_116e5c:
    // 0x116e5c: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x116e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_116e60:
    // 0x116e60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x116e60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_116e64:
    // 0x116e64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x116e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_116e68:
    // 0x116e68: 0x0  nop
    ctx->pc = 0x116e68u;
    // NOP
label_116e6c:
    // 0x116e6c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x116e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_116e70:
    // 0x116e70: 0x0  nop
    ctx->pc = 0x116e70u;
    // NOP
label_116e74:
    // 0x116e74: 0x45000030  bc1f        . + 4 + (0x30 << 2)
label_116e78:
    if (ctx->pc == 0x116E78u) {
        ctx->pc = 0x116E7Cu;
        goto label_116e7c;
    }
    ctx->pc = 0x116E74u;
    {
        const bool branch_taken_0x116e74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x116e74) {
            ctx->pc = 0x116F38u;
            goto label_116f38;
        }
    }
    ctx->pc = 0x116E7Cu;
label_116e7c:
    // 0x116e7c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x116e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_116e80:
    // 0x116e80: 0xc04078a  jal         func_101E28
label_116e84:
    if (ctx->pc == 0x116E84u) {
        ctx->pc = 0x116E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E80u;
        // 0x116e84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116E88u;
        goto label_116e88;
    }
    ctx->pc = 0x116E80u;
    SET_GPR_U32(ctx, 31, 0x116E88u);
    ctx->pc = 0x116E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E80u;
    // 0x116e84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x116E80u, 0x116E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E88u;
label_116e88:
    // 0x116e88: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x116e88u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_116e8c:
    // 0x116e8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x116e8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_116e90:
    // 0x116e90: 0x0  nop
    ctx->pc = 0x116e90u;
    // NOP
label_116e94:
    // 0x116e94: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x116e94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_116e98:
    // 0x116e98: 0x0  nop
    ctx->pc = 0x116e98u;
    // NOP
label_116e9c:
    // 0x116e9c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_116ea0:
    if (ctx->pc == 0x116EA0u) {
        ctx->pc = 0x116EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E9Cu;
        // 0x116ea0: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x116EA4u;
        goto label_116ea4;
    }
    ctx->pc = 0x116E9Cu;
    {
        const bool branch_taken_0x116e9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x116EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E9Cu;
        // 0x116ea0: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e9c) {
            ctx->pc = 0x116EE0u;
            goto label_116ee0;
        }
    }
    ctx->pc = 0x116EA4u;
label_116ea4:
    // 0x116ea4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x116ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_116ea8:
    // 0x116ea8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x116ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_116eac:
    // 0x116eac: 0x0  nop
    ctx->pc = 0x116eacu;
    // NOP
label_116eb0:
    // 0x116eb0: 0x0  nop
    ctx->pc = 0x116eb0u;
    // NOP
label_116eb4:
    // 0x116eb4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x116eb4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
label_116eb8:
    // 0x116eb8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x116eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_116ebc:
    // 0x116ebc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x116ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_116ec0:
    // 0x116ec0: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x116ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_116ec4:
    // 0x116ec4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x116ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_116ec8:
    // 0x116ec8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x116ec8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_116ecc:
    // 0x116ecc: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x116eccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_116ed0:
    // 0x116ed0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x116ed0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_116ed4:
    // 0x116ed4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x116ed4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_116ed8:
    // 0x116ed8: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x116ed8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_116edc:
    // 0x116edc: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x116edcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_116ee0:
    // 0x116ee0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x116ee0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_116ee4:
    // 0x116ee4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x116ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_116ee8:
    // 0x116ee8: 0x13b00006  beq         $sp, $s0, . + 4 + (0x6 << 2)
label_116eec:
    if (ctx->pc == 0x116EECu) {
        ctx->pc = 0x116EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EE8u;
        // 0x116eec: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x116EF0u;
        goto label_116ef0;
    }
    ctx->pc = 0x116EE8u;
    {
        const bool branch_taken_0x116ee8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 16));
        ctx->pc = 0x116EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EE8u;
        // 0x116eec: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ee8) {
            ctx->pc = 0x116F04u;
            goto label_116f04;
        }
    }
    ctx->pc = 0x116EF0u;
label_116ef0:
    // 0x116ef0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x116ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_116ef4:
    // 0x116ef4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x116ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_116ef8:
    // 0x116ef8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x116ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_116efc:
    // 0x116efc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x116efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_116f00:
    // 0x116f00: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x116f00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_116f04:
    // 0x116f04: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x116f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_116f08:
    // 0x116f08: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x116f08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_116f0c:
    // 0x116f0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x116f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_116f10:
    // 0x116f10: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x116f10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_116f14:
    // 0x116f14: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x116f14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_116f18:
    // 0x116f18: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x116f18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_116f1c:
    // 0x116f1c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x116f1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_116f20:
    // 0x116f20: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x116f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_116f24:
    // 0x116f24: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x116f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_116f28:
    // 0x116f28: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x116f28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_116f2c:
    // 0x116f2c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x116f2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_116f30:
    // 0x116f30: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x116f30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_116f34:
    // 0x116f34: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x116f34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_116f38:
    // 0x116f38: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x116f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_116f3c:
    // 0x116f3c: 0x1000012e  b           . + 4 + (0x12E << 2)
label_116f40:
    if (ctx->pc == 0x116F40u) {
        ctx->pc = 0x116F44u;
        goto label_116f44;
    }
    ctx->pc = 0x116F3Cu;
    {
        const bool branch_taken_0x116f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116f3c) {
            ctx->pc = 0x1173F8u;
            goto label_1173f8;
        }
    }
    ctx->pc = 0x116F44u;
label_116f44:
    // 0x116f44: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x116f44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_116f48:
    // 0x116f48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_116f4c:
    if (ctx->pc == 0x116F4Cu) {
        ctx->pc = 0x116F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F48u;
        // 0x116f4c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116F50u;
        goto label_116f50;
    }
    ctx->pc = 0x116F48u;
    {
        const bool branch_taken_0x116f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F48u;
        // 0x116f4c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f48) {
            ctx->pc = 0x116F5Cu;
            goto label_116f5c;
        }
    }
    ctx->pc = 0x116F50u;
label_116f50:
    // 0x116f50: 0x8c4306a4  lw          $v1, 0x6A4($v0)
    ctx->pc = 0x116f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1700)));
label_116f54:
    // 0x116f54: 0x10000003  b           . + 4 + (0x3 << 2)
label_116f58:
    if (ctx->pc == 0x116F58u) {
        ctx->pc = 0x116F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F54u;
        // 0x116f58: 0x8c4406a8  lw          $a0, 0x6A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116F5Cu;
        goto label_116f5c;
    }
    ctx->pc = 0x116F54u;
    {
        const bool branch_taken_0x116f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F54u;
        // 0x116f58: 0x8c4406a8  lw          $a0, 0x6A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f54) {
            ctx->pc = 0x116F64u;
            goto label_116f64;
        }
    }
    ctx->pc = 0x116F5Cu;
label_116f5c:
    // 0x116f5c: 0x8c430808  lw          $v1, 0x808($v0)
    ctx->pc = 0x116f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2056)));
label_116f60:
    // 0x116f60: 0x8c44080c  lw          $a0, 0x80C($v0)
    ctx->pc = 0x116f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2060)));
label_116f64:
    // 0x116f64: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x116f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_116f68:
    // 0x116f68: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x116f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_116f6c:
    // 0x116f6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x116f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_116f70:
    // 0x116f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_116f74:
    // 0x116f74: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x116f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_116f78:
    // 0x116f78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x116f78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116f7c:
    // 0x116f7c: 0xc0aa15e  jal         func_2A8578
label_116f80:
    if (ctx->pc == 0x116F80u) {
        ctx->pc = 0x116F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F7Cu;
        // 0x116f80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116F84u;
        goto label_116f84;
    }
    ctx->pc = 0x116F7Cu;
    SET_GPR_U32(ctx, 31, 0x116F84u);
    ctx->pc = 0x116F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F7Cu;
    // 0x116f80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x116F7Cu, 0x116F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116F84u;
label_116f84:
    // 0x116f84: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x116f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_116f88:
    // 0x116f88: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x116f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_116f8c:
    // 0x116f8c: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x116f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_116f90:
    // 0x116f90: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x116f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
label_116f94:
    // 0x116f94: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x116f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_116f98:
    // 0x116f98: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
label_116f9c:
    if (ctx->pc == 0x116F9Cu) {
        ctx->pc = 0x116F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F98u;
        // 0x116f9c: 0xae2015b8  sw          $zero, 0x15B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116FA0u;
        goto label_116fa0;
    }
    ctx->pc = 0x116F98u;
    {
        const bool branch_taken_0x116f98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F98u;
        // 0x116f9c: 0xae2015b8  sw          $zero, 0x15B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f98) {
            ctx->pc = 0x117010u;
            goto label_117010;
        }
    }
    ctx->pc = 0x116FA0u;
label_116fa0:
    // 0x116fa0: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x116fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_116fa4:
    // 0x116fa4: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x116fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_116fa8:
    // 0x116fa8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x116fa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_116fac:
    // 0x116fac: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x116facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_116fb0:
    // 0x116fb0: 0x40f809  jalr        $v0
label_116fb4:
    if (ctx->pc == 0x116FB4u) {
        ctx->pc = 0x116FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116FB0u;
        // 0x116fb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116FB8u;
        goto label_116fb8;
    }
    ctx->pc = 0x116FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x116FB8u);
        ctx->pc = 0x116FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116FB0u;
        // 0x116fb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116FB0u, 0x116FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x116FB8u;
label_116fb8:
    // 0x116fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_116fbc:
    // 0x116fbc: 0xc07dfac  jal         func_1F7EB0
label_116fc0:
    if (ctx->pc == 0x116FC0u) {
        ctx->pc = 0x116FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116FBCu;
        // 0x116fc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116FC4u;
        goto label_116fc4;
    }
    ctx->pc = 0x116FBCu;
    SET_GPR_U32(ctx, 31, 0x116FC4u);
    ctx->pc = 0x116FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116FBCu;
    // 0x116fc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x116FBCu, 0x116FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116FC4u;
label_116fc4:
    // 0x116fc4: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x116fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
label_116fc8:
    // 0x116fc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x116fc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_116fcc:
    // 0x116fcc: 0x0  nop
    ctx->pc = 0x116fccu;
    // NOP
label_116fd0:
    // 0x116fd0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x116fd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_116fd4:
    // 0x116fd4: 0x0  nop
    ctx->pc = 0x116fd4u;
    // NOP
label_116fd8:
    // 0x116fd8: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_116fdc:
    if (ctx->pc == 0x116FDCu) {
        ctx->pc = 0x116FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116FD8u;
        // 0x116fdc: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116FE0u;
        goto label_116fe0;
    }
    ctx->pc = 0x116FD8u;
    {
        const bool branch_taken_0x116fd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x116fd8) {
            ctx->pc = 0x116FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116FD8u;
            // 0x116fdc: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117014u;
            goto label_117014;
        }
    }
    ctx->pc = 0x116FE0u;
label_116fe0:
    // 0x116fe0: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x116fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_116fe4:
    // 0x116fe4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x116fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_116fe8:
    // 0x116fe8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x116fe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_116fec:
    // 0x116fec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x116fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_116ff0:
    // 0x116ff0: 0x8e230640  lw          $v1, 0x640($s1)
    ctx->pc = 0x116ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_116ff4:
    // 0x116ff4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x116ff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_116ff8:
    // 0x116ff8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x116ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
label_116ffc:
    // 0x116ffc: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x116ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_117000:
    // 0x117000: 0xc07df52  jal         func_1F7D48
label_117004:
    if (ctx->pc == 0x117004u) {
        ctx->pc = 0x117004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117000u;
        // 0x117004: 0xc44c0104  lwc1        $f12, 0x104($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117008u;
        goto label_117008;
    }
    ctx->pc = 0x117000u;
    SET_GPR_U32(ctx, 31, 0x117008u);
    ctx->pc = 0x117004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117000u;
    // 0x117004: 0xc44c0104  lwc1        $f12, 0x104($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x117000u, 0x117008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117008u;
label_117008:
    // 0x117008: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x117008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_11700c:
    // 0x11700c: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x11700cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_117010:
    // 0x117010: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x117010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_117014:
    // 0x117014: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x117014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_117018:
    // 0x117018: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x117018u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11701c:
    // 0x11701c: 0xc0b6dea  jal         func_2DB7A8
label_117020:
    if (ctx->pc == 0x117020u) {
        ctx->pc = 0x117024u;
        goto label_117024;
    }
    ctx->pc = 0x11701Cu;
    SET_GPR_U32(ctx, 31, 0x117024u);
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x11701Cu, 0x117024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117024u;
label_117024:
    // 0x117024: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x117024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_117028:
    // 0x117028: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_11702c:
    if (ctx->pc == 0x11702Cu) {
        ctx->pc = 0x11702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117028u;
        // 0x11702c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117030u;
        goto label_117030;
    }
    ctx->pc = 0x117028u;
    {
        const bool branch_taken_0x117028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117028u;
        // 0x11702c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117028) {
            ctx->pc = 0x117034u;
            goto label_117034;
        }
    }
    ctx->pc = 0x117030u;
label_117030:
    // 0x117030: 0xa2220648  sb          $v0, 0x648($s1)
    ctx->pc = 0x117030u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
label_117034:
    // 0x117034: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x117034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
label_117038:
    // 0x117038: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x117038u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_11703c:
    // 0x11703c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11703cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_117040:
    // 0x117040: 0xc04939a  jal         func_124E68
label_117044:
    if (ctx->pc == 0x117044u) {
        ctx->pc = 0x117044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117040u;
        // 0x117044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117048u;
        goto label_117048;
    }
    ctx->pc = 0x117040u;
    SET_GPR_U32(ctx, 31, 0x117048u);
    ctx->pc = 0x117044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117040u;
    // 0x117044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x117040u, 0x117048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117048u;
label_117048:
    // 0x117048: 0x8e2215b8  lw          $v0, 0x15B8($s1)
    ctx->pc = 0x117048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
label_11704c:
    // 0x11704c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_117050:
    if (ctx->pc == 0x117050u) {
        ctx->pc = 0x117050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11704Cu;
        // 0x117050: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117054u;
        goto label_117054;
    }
    ctx->pc = 0x11704Cu;
    {
        const bool branch_taken_0x11704c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11704Cu;
        // 0x117050: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11704c) {
            ctx->pc = 0x117058u;
            goto label_117058;
        }
    }
    ctx->pc = 0x117054u;
label_117054:
    // 0x117054: 0xae2215b8  sw          $v0, 0x15B8($s1)
    ctx->pc = 0x117054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
label_117058:
    // 0x117058: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x117058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_11705c:
    // 0x11705c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x11705cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_117060:
    // 0x117060: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x117060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_117064:
    // 0x117064: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x117064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
label_117068:
    // 0x117068: 0x8c8374a8  lw          $v1, 0x74A8($a0)
    ctx->pc = 0x117068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29864)));
label_11706c:
    // 0x11706c: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x11706cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
label_117070:
    // 0x117070: 0x50600034  beql        $v1, $zero, . + 4 + (0x34 << 2)
label_117074:
    if (ctx->pc == 0x117074u) {
        ctx->pc = 0x117074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117070u;
        // 0x117074: 0x8e2215b8  lw          $v0, 0x15B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117078u;
        goto label_117078;
    }
    ctx->pc = 0x117070u;
    {
        const bool branch_taken_0x117070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x117070) {
            ctx->pc = 0x117074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117070u;
            // 0x117074: 0x8e2215b8  lw          $v0, 0x15B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117144u;
            goto label_117144;
        }
    }
    ctx->pc = 0x117078u;
label_117078:
    // 0x117078: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x117078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_11707c:
    // 0x11707c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x11707cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_117080:
    // 0x117080: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_117084:
    if (ctx->pc == 0x117084u) {
        ctx->pc = 0x117084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117080u;
        // 0x117084: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117088u;
        goto label_117088;
    }
    ctx->pc = 0x117080u;
    {
        const bool branch_taken_0x117080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117080u;
        // 0x117084: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117080) {
            ctx->pc = 0x1170A0u;
            goto label_1170a0;
        }
    }
    ctx->pc = 0x117088u;
label_117088:
    // 0x117088: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x117088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_11708c:
    // 0x11708c: 0x2442c2b0  addiu       $v0, $v0, -0x3D50
    ctx->pc = 0x11708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951600));
label_117090:
    // 0x117090: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x117090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_117094:
    // 0x117094: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x117094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_117098:
    // 0x117098: 0x800008  jr          $a0
label_11709c:
    if (ctx->pc == 0x11709Cu) {
        ctx->pc = 0x1170A0u;
        goto label_1170a0;
    }
    ctx->pc = 0x117098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1170A0u: goto label_1170a0;
            case 0x1170A8u: goto label_1170a8;
            case 0x1170B0u: goto label_1170b0;
            case 0x1170B8u: goto label_1170b8;
            case 0x1170C0u: goto label_1170c0;
            case 0x1170C8u: goto label_1170c8;
            case 0x1170D0u: goto label_1170d0;
            case 0x1170D8u: goto label_1170d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117098u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1170A0u;
label_1170a0:
    // 0x1170a0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1170a4:
    if (ctx->pc == 0x1170A4u) {
        ctx->pc = 0x1170A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170A0u;
        // 0x1170a4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1170A8u;
        goto label_1170a8;
    }
    ctx->pc = 0x1170A0u;
    {
        const bool branch_taken_0x1170a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170A0u;
        // 0x1170a4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170a0) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x1170A8u;
label_1170a8:
    // 0x1170a8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1170ac:
    if (ctx->pc == 0x1170ACu) {
        ctx->pc = 0x1170ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170A8u;
        // 0x1170ac: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1170B0u;
        goto label_1170b0;
    }
    ctx->pc = 0x1170A8u;
    {
        const bool branch_taken_0x1170a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170A8u;
        // 0x1170ac: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170a8) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x1170B0u;
label_1170b0:
    // 0x1170b0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1170b4:
    if (ctx->pc == 0x1170B4u) {
        ctx->pc = 0x1170B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170B0u;
        // 0x1170b4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1170B8u;
        goto label_1170b8;
    }
    ctx->pc = 0x1170B0u;
    {
        const bool branch_taken_0x1170b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170B0u;
        // 0x1170b4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170b0) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x1170B8u;
label_1170b8:
    // 0x1170b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1170bc:
    if (ctx->pc == 0x1170BCu) {
        ctx->pc = 0x1170BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170B8u;
        // 0x1170bc: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1170C0u;
        goto label_1170c0;
    }
    ctx->pc = 0x1170B8u;
    {
        const bool branch_taken_0x1170b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170B8u;
        // 0x1170bc: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170b8) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x1170C0u;
label_1170c0:
    // 0x1170c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1170c4:
    if (ctx->pc == 0x1170C4u) {
        ctx->pc = 0x1170C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170C0u;
        // 0x1170c4: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1170C8u;
        goto label_1170c8;
    }
    ctx->pc = 0x1170C0u;
    {
        const bool branch_taken_0x1170c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170C0u;
        // 0x1170c4: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170c0) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x1170C8u;
label_1170c8:
    // 0x1170c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1170cc:
    if (ctx->pc == 0x1170CCu) {
        ctx->pc = 0x1170CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170C8u;
        // 0x1170cc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1170D0u;
        goto label_1170d0;
    }
    ctx->pc = 0x1170C8u;
    {
        const bool branch_taken_0x1170c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170C8u;
        // 0x1170cc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170c8) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x1170D0u;
label_1170d0:
    // 0x1170d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1170d4:
    if (ctx->pc == 0x1170D4u) {
        ctx->pc = 0x1170D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170D0u;
        // 0x1170d4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1170D8u;
        goto label_1170d8;
    }
    ctx->pc = 0x1170D0u;
    {
        const bool branch_taken_0x1170d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170D0u;
        // 0x1170d4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170d0) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x1170D8u;
label_1170d8:
    // 0x1170d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1170d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1170dc:
    // 0x1170dc: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x1170dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_1170e0:
    // 0x1170e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1170e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1170e4:
    // 0x1170e4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1170e8:
    if (ctx->pc == 0x1170E8u) {
        ctx->pc = 0x1170E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170E4u;
        // 0x1170e8: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1170ECu;
        goto label_1170ec;
    }
    ctx->pc = 0x1170E4u;
    {
        const bool branch_taken_0x1170e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1170e4) {
            ctx->pc = 0x1170E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1170E4u;
            // 0x1170e8: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1170FCu;
            goto label_1170fc;
        }
    }
    ctx->pc = 0x1170ECu;
label_1170ec:
    // 0x1170ec: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x1170ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_1170f0:
    // 0x1170f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1170f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1170f4:
    // 0x1170f4: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x1170f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
label_1170f8:
    // 0x1170f8: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x1170f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_1170fc:
    // 0x1170fc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1170fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_117100:
    // 0x117100: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_117104:
    if (ctx->pc == 0x117104u) {
        ctx->pc = 0x117104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117100u;
        // 0x117104: 0x8e2215b4  lw          $v0, 0x15B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117108u;
        goto label_117108;
    }
    ctx->pc = 0x117100u;
    {
        const bool branch_taken_0x117100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117100u;
        // 0x117104: 0x8e2215b4  lw          $v0, 0x15B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117100) {
            ctx->pc = 0x117114u;
            goto label_117114;
        }
    }
    ctx->pc = 0x117108u;
label_117108:
    // 0x117108: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x117108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_11710c:
    // 0x11710c: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x11710cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
label_117110:
    // 0x117110: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x117110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_117114:
    // 0x117114: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_117118:
    if (ctx->pc == 0x117118u) {
        ctx->pc = 0x117118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117114u;
        // 0x117118: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11711Cu;
        goto label_11711c;
    }
    ctx->pc = 0x117114u;
    {
        const bool branch_taken_0x117114 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x117114) {
            ctx->pc = 0x117118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117114u;
            // 0x117118: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11711Cu;
            goto label_11711c;
        }
    }
    ctx->pc = 0x11711Cu;
label_11711c:
    // 0x11711c: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x11711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_117120:
    // 0x117120: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x117120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_117124:
    // 0x117124: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_117128:
    if (ctx->pc == 0x117128u) {
        ctx->pc = 0x117128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117124u;
        // 0x117128: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11712Cu;
        goto label_11712c;
    }
    ctx->pc = 0x117124u;
    {
        const bool branch_taken_0x117124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117124u;
        // 0x117128: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117124) {
            ctx->pc = 0x117138u;
            goto label_117138;
        }
    }
    ctx->pc = 0x11712Cu;
label_11712c:
    // 0x11712c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x11712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_117130:
    // 0x117130: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x117130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
label_117134:
    // 0x117134: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x117134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_117138:
    // 0x117138: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x117138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
label_11713c:
    // 0x11713c: 0x1000000a  b           . + 4 + (0xA << 2)
label_117140:
    if (ctx->pc == 0x117140u) {
        ctx->pc = 0x117140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11713Cu;
        // 0x117140: 0xae2215b8  sw          $v0, 0x15B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117144u;
        goto label_117144;
    }
    ctx->pc = 0x11713Cu;
    {
        const bool branch_taken_0x11713c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11713Cu;
        // 0x117140: 0xae2215b8  sw          $v0, 0x15B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11713c) {
            ctx->pc = 0x117168u;
            goto label_117168;
        }
    }
    ctx->pc = 0x117144u;
label_117144:
    // 0x117144: 0x5c400009  bgtzl       $v0, . + 4 + (0x9 << 2)
label_117148:
    if (ctx->pc == 0x117148u) {
        ctx->pc = 0x117148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117144u;
        // 0x117148: 0x8e2315b4  lw          $v1, 0x15B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11714Cu;
        goto label_11714c;
    }
    ctx->pc = 0x117144u;
    {
        const bool branch_taken_0x117144 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x117144) {
            ctx->pc = 0x117148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117144u;
            // 0x117148: 0x8e2315b4  lw          $v1, 0x15B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11716Cu;
            goto label_11716c;
        }
    }
    ctx->pc = 0x11714Cu;
label_11714c:
    // 0x11714c: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x11714cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_117150:
    // 0x117150: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x117150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_117154:
    // 0x117154: 0xae2315b8  sw          $v1, 0x15B8($s1)
    ctx->pc = 0x117154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 3));
label_117158:
    // 0x117158: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x117158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_11715c:
    // 0x11715c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_117160:
    if (ctx->pc == 0x117160u) {
        ctx->pc = 0x117160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11715Cu;
        // 0x117160: 0xae2215b4  sw          $v0, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117164u;
        goto label_117164;
    }
    ctx->pc = 0x11715Cu;
    {
        const bool branch_taken_0x11715c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x117160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11715Cu;
        // 0x117160: 0xae2215b4  sw          $v0, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11715c) {
            ctx->pc = 0x117168u;
            goto label_117168;
        }
    }
    ctx->pc = 0x117164u;
label_117164:
    // 0x117164: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x117164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_117168:
    // 0x117168: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x117168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_11716c:
    // 0x11716c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x11716cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_117170:
    // 0x117170: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_117174:
    if (ctx->pc == 0x117174u) {
        ctx->pc = 0x117174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117170u;
        // 0x117174: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117178u;
        goto label_117178;
    }
    ctx->pc = 0x117170u;
    {
        const bool branch_taken_0x117170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117170u;
        // 0x117174: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117170) {
            ctx->pc = 0x117190u;
            goto label_117190;
        }
    }
    ctx->pc = 0x117178u;
label_117178:
    // 0x117178: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x117178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_11717c:
    // 0x11717c: 0x2442c2d0  addiu       $v0, $v0, -0x3D30
    ctx->pc = 0x11717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951632));
label_117180:
    // 0x117180: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x117180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_117184:
    // 0x117184: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x117184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_117188:
    // 0x117188: 0x800008  jr          $a0
label_11718c:
    if (ctx->pc == 0x11718Cu) {
        ctx->pc = 0x117190u;
        goto label_117190;
    }
    ctx->pc = 0x117188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117190u: goto label_117190;
            case 0x1171A0u: goto label_1171a0;
            case 0x1171B0u: goto label_1171b0;
            case 0x1171C0u: goto label_1171c0;
            case 0x1171D0u: goto label_1171d0;
            case 0x1171E0u: goto label_1171e0;
            case 0x1171F0u: goto label_1171f0;
            case 0x117200u: goto label_117200;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117188u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x117190u;
label_117190:
    // 0x117190: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x117190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_117194:
    // 0x117194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_117198:
    // 0x117198: 0x1000001d  b           . + 4 + (0x1D << 2)
label_11719c:
    if (ctx->pc == 0x11719Cu) {
        ctx->pc = 0x11719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117198u;
        // 0x11719c: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1171A0u;
        goto label_1171a0;
    }
    ctx->pc = 0x117198u;
    {
        const bool branch_taken_0x117198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117198u;
        // 0x11719c: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117198) {
            ctx->pc = 0x117210u;
            goto label_117210;
        }
    }
    ctx->pc = 0x1171A0u;
label_1171a0:
    // 0x1171a0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1171a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1171a4:
    // 0x1171a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1171a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1171a8:
    // 0x1171a8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1171ac:
    if (ctx->pc == 0x1171ACu) {
        ctx->pc = 0x1171ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171A8u;
        // 0x1171ac: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1171B0u;
        goto label_1171b0;
    }
    ctx->pc = 0x1171A8u;
    {
        const bool branch_taken_0x1171a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171A8u;
        // 0x1171ac: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171a8) {
            ctx->pc = 0x117210u;
            goto label_117210;
        }
    }
    ctx->pc = 0x1171B0u;
label_1171b0:
    // 0x1171b0: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x1171b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_1171b4:
    // 0x1171b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1171b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1171b8:
    // 0x1171b8: 0x10000015  b           . + 4 + (0x15 << 2)
label_1171bc:
    if (ctx->pc == 0x1171BCu) {
        ctx->pc = 0x1171BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171B8u;
        // 0x1171bc: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1171C0u;
        goto label_1171c0;
    }
    ctx->pc = 0x1171B8u;
    {
        const bool branch_taken_0x1171b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171B8u;
        // 0x1171bc: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171b8) {
            ctx->pc = 0x117210u;
            goto label_117210;
        }
    }
    ctx->pc = 0x1171C0u;
label_1171c0:
    // 0x1171c0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1171c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1171c4:
    // 0x1171c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1171c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1171c8:
    // 0x1171c8: 0x10000011  b           . + 4 + (0x11 << 2)
label_1171cc:
    if (ctx->pc == 0x1171CCu) {
        ctx->pc = 0x1171CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171C8u;
        // 0x1171cc: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1171D0u;
        goto label_1171d0;
    }
    ctx->pc = 0x1171C8u;
    {
        const bool branch_taken_0x1171c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171C8u;
        // 0x1171cc: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171c8) {
            ctx->pc = 0x117210u;
            goto label_117210;
        }
    }
    ctx->pc = 0x1171D0u;
label_1171d0:
    // 0x1171d0: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x1171d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_1171d4:
    // 0x1171d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1171d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1171d8:
    // 0x1171d8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1171dc:
    if (ctx->pc == 0x1171DCu) {
        ctx->pc = 0x1171DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171D8u;
        // 0x1171dc: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1171E0u;
        goto label_1171e0;
    }
    ctx->pc = 0x1171D8u;
    {
        const bool branch_taken_0x1171d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171D8u;
        // 0x1171dc: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171d8) {
            ctx->pc = 0x117210u;
            goto label_117210;
        }
    }
    ctx->pc = 0x1171E0u;
label_1171e0:
    // 0x1171e0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1171e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_1171e4:
    // 0x1171e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1171e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1171e8:
    // 0x1171e8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1171ec:
    if (ctx->pc == 0x1171ECu) {
        ctx->pc = 0x1171ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171E8u;
        // 0x1171ec: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1171F0u;
        goto label_1171f0;
    }
    ctx->pc = 0x1171E8u;
    {
        const bool branch_taken_0x1171e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171E8u;
        // 0x1171ec: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171e8) {
            ctx->pc = 0x117210u;
            goto label_117210;
        }
    }
    ctx->pc = 0x1171F0u;
label_1171f0:
    // 0x1171f0: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x1171f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
label_1171f4:
    // 0x1171f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1171f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1171f8:
    // 0x1171f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1171fc:
    if (ctx->pc == 0x1171FCu) {
        ctx->pc = 0x1171FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171F8u;
        // 0x1171fc: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117200u;
        goto label_117200;
    }
    ctx->pc = 0x1171F8u;
    {
        const bool branch_taken_0x1171f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171F8u;
        // 0x1171fc: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171f8) {
            ctx->pc = 0x117210u;
            goto label_117210;
        }
    }
    ctx->pc = 0x117200u;
label_117200:
    // 0x117200: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x117200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_117204:
    // 0x117204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_117208:
    // 0x117208: 0x0  nop
    ctx->pc = 0x117208u;
    // NOP
label_11720c:
    // 0x11720c: 0xe62005a8  swc1        $f0, 0x5A8($s1)
    ctx->pc = 0x11720cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
label_117210:
    // 0x117210: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x117210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_117214:
    // 0x117214: 0xc0560a2  jal         func_158288
label_117218:
    if (ctx->pc == 0x117218u) {
        ctx->pc = 0x117218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117214u;
        // 0x117218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11721Cu;
        goto label_11721c;
    }
    ctx->pc = 0x117214u;
    SET_GPR_U32(ctx, 31, 0x11721Cu);
    ctx->pc = 0x117218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117214u;
    // 0x117218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x117214u, 0x11721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11721Cu;
label_11721c:
    // 0x11721c: 0xc0493b0  jal         func_124EC0
label_117220:
    if (ctx->pc == 0x117220u) {
        ctx->pc = 0x117220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11721Cu;
        // 0x117220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117224u;
        goto label_117224;
    }
    ctx->pc = 0x11721Cu;
    SET_GPR_U32(ctx, 31, 0x117224u);
    ctx->pc = 0x117220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11721Cu;
    // 0x117220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11721Cu, 0x117224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117224u;
label_117224:
    // 0x117224: 0xc055f06  jal         func_157C18
label_117228:
    if (ctx->pc == 0x117228u) {
        ctx->pc = 0x117228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117224u;
        // 0x117228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11722Cu;
        goto label_11722c;
    }
    ctx->pc = 0x117224u;
    SET_GPR_U32(ctx, 31, 0x11722Cu);
    ctx->pc = 0x117228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117224u;
    // 0x117228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x117224u, 0x11722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11722Cu;
label_11722c:
    // 0x11722c: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x11722cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
label_117230:
    // 0x117230: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_117234:
    if (ctx->pc == 0x117234u) {
        ctx->pc = 0x117234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117230u;
        // 0x117234: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117238u;
        goto label_117238;
    }
    ctx->pc = 0x117230u;
    {
        const bool branch_taken_0x117230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117230u;
        // 0x117234: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117230) {
            ctx->pc = 0x117248u;
            goto label_117248;
        }
    }
    ctx->pc = 0x117238u;
label_117238:
    // 0x117238: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x117238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_11723c:
    // 0x11723c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x11723cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_117240:
    // 0x117240: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
label_117244:
    if (ctx->pc == 0x117244u) {
        ctx->pc = 0x117244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117240u;
        // 0x117244: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117248u;
        goto label_117248;
    }
    ctx->pc = 0x117240u;
    {
        const bool branch_taken_0x117240 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x117244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117240u;
        // 0x117244: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117240) {
            ctx->pc = 0x117254u;
            goto label_117254;
        }
    }
    ctx->pc = 0x117248u;
label_117248:
    // 0x117248: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x117248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_11724c:
    // 0x11724c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11724cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_117250:
    // 0x117250: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x117250u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_117254:
    // 0x117254: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x117254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_117258:
    // 0x117258: 0x10a00099  beqz        $a1, . + 4 + (0x99 << 2)
label_11725c:
    if (ctx->pc == 0x11725Cu) {
        ctx->pc = 0x117260u;
        goto label_117260;
    }
    ctx->pc = 0x117258u;
    {
        const bool branch_taken_0x117258 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x117258) {
            ctx->pc = 0x1174C0u;
            goto label_1174c0;
        }
    }
    ctx->pc = 0x117260u;
label_117260:
    // 0x117260: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x117260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_117264:
    // 0x117264: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x117264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_117268:
    // 0x117268: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x117268u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_11726c:
    // 0x11726c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x11726cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_117270:
    // 0x117270: 0x40f809  jalr        $v0
label_117274:
    if (ctx->pc == 0x117274u) {
        ctx->pc = 0x117274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117270u;
        // 0x117274: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117278u;
        goto label_117278;
    }
    ctx->pc = 0x117270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117278u);
        ctx->pc = 0x117274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117270u;
        // 0x117274: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117270u, 0x117278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117278u;
label_117278:
    // 0x117278: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x117278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_11727c:
    // 0x11727c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11727cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_117280:
    // 0x117280: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x117280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_117284:
    // 0x117284: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x117284u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_117288:
    // 0x117288: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x117288u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_11728c:
    // 0x11728c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11728cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_117290:
    // 0x117290: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x117290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_117294:
    // 0x117294: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x117294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_117298:
    // 0x117298: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x117298u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_11729c:
    // 0x11729c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x11729cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1172a0:
    // 0x1172a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1172a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1172a4:
    // 0x1172a4: 0x13b00007  beq         $sp, $s0, . + 4 + (0x7 << 2)
label_1172a8:
    if (ctx->pc == 0x1172A8u) {
        ctx->pc = 0x1172A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172A4u;
        // 0x1172a8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1172ACu;
        goto label_1172ac;
    }
    ctx->pc = 0x1172A4u;
    {
        const bool branch_taken_0x1172a4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 16));
        ctx->pc = 0x1172A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172A4u;
        // 0x1172a8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172a4) {
            ctx->pc = 0x1172C4u;
            goto label_1172c4;
        }
    }
    ctx->pc = 0x1172ACu;
label_1172ac:
    // 0x1172ac: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1172acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1172b0:
    // 0x1172b0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1172b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1172b4:
    // 0x1172b4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1172b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1172b8:
    // 0x1172b8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1172b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1172bc:
    // 0x1172bc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1172bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1172c0:
    // 0x1172c0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1172c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1172c4:
    // 0x1172c4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1172c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1172c8:
    // 0x1172c8: 0xc07df8a  jal         func_1F7E28
label_1172cc:
    if (ctx->pc == 0x1172CCu) {
        ctx->pc = 0x1172CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172C8u;
        // 0x1172cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1172D0u;
        goto label_1172d0;
    }
    ctx->pc = 0x1172C8u;
    SET_GPR_U32(ctx, 31, 0x1172D0u);
    ctx->pc = 0x1172CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1172C8u;
    // 0x1172cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1172C8u, 0x1172D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1172D0u;
label_1172d0:
    // 0x1172d0: 0x0  nop
    ctx->pc = 0x1172d0u;
    // NOP
label_1172d4:
    // 0x1172d4: 0x0  nop
    ctx->pc = 0x1172d4u;
    // NOP
label_1172d8:
    // 0x1172d8: 0x46000504  c1          0x504
    ctx->pc = 0x1172d8u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
label_1172dc:
    // 0x1172dc: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x1172dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1172e0:
    // 0x1172e0: 0x0  nop
    ctx->pc = 0x1172e0u;
    // NOP
label_1172e4:
    // 0x1172e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1172e8:
    if (ctx->pc == 0x1172E8u) {
        ctx->pc = 0x1172ECu;
        goto label_1172ec;
    }
    ctx->pc = 0x1172E4u;
    {
        const bool branch_taken_0x1172e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1172e4) {
            ctx->pc = 0x1172F8u;
            goto label_1172f8;
        }
    }
    ctx->pc = 0x1172ECu;
label_1172ec:
    // 0x1172ec: 0xc0e8910  jal         func_3A2440
label_1172f0:
    if (ctx->pc == 0x1172F0u) {
        ctx->pc = 0x1172F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172ECu;
        // 0x1172f0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1172F4u;
        goto label_1172f4;
    }
    ctx->pc = 0x1172ECu;
    SET_GPR_U32(ctx, 31, 0x1172F4u);
    ctx->pc = 0x1172F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1172ECu;
    // 0x1172f0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x1172ECu, 0x1172F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1172F4u;
label_1172f4:
    // 0x1172f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1172f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1172f8:
    // 0x1172f8: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1172f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_1172fc:
    // 0x1172fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1172fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_117300:
    // 0x117300: 0x0  nop
    ctx->pc = 0x117300u;
    // NOP
label_117304:
    // 0x117304: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x117304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_117308:
    // 0x117308: 0x0  nop
    ctx->pc = 0x117308u;
    // NOP
label_11730c:
    // 0x11730c: 0x4500006c  bc1f        . + 4 + (0x6C << 2)
label_117310:
    if (ctx->pc == 0x117310u) {
        ctx->pc = 0x117314u;
        goto label_117314;
    }
    ctx->pc = 0x11730Cu;
    {
        const bool branch_taken_0x11730c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11730c) {
            ctx->pc = 0x1174C0u;
            goto label_1174c0;
        }
    }
    ctx->pc = 0x117314u;
label_117314:
    // 0x117314: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_117318:
    // 0x117318: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x117318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_11731c:
    // 0x11731c: 0x0  nop
    ctx->pc = 0x11731cu;
    // NOP
label_117320:
    // 0x117320: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x117320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_117324:
    // 0x117324: 0x0  nop
    ctx->pc = 0x117324u;
    // NOP
label_117328:
    // 0x117328: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_11732c:
    if (ctx->pc == 0x11732Cu) {
        ctx->pc = 0x117330u;
        goto label_117330;
    }
    ctx->pc = 0x117328u;
    {
        const bool branch_taken_0x117328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x117328) {
            ctx->pc = 0x1173E4u;
            goto label_1173e4;
        }
    }
    ctx->pc = 0x117330u;
label_117330:
    // 0x117330: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x117330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_117334:
    // 0x117334: 0xc04078a  jal         func_101E28
label_117338:
    if (ctx->pc == 0x117338u) {
        ctx->pc = 0x117338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117334u;
        // 0x117338: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11733Cu;
        goto label_11733c;
    }
    ctx->pc = 0x117334u;
    SET_GPR_U32(ctx, 31, 0x11733Cu);
    ctx->pc = 0x117338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117334u;
    // 0x117338: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x117334u, 0x11733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11733Cu;
label_11733c:
    // 0x11733c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x11733cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_117340:
    // 0x117340: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x117340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_117344:
    // 0x117344: 0x0  nop
    ctx->pc = 0x117344u;
    // NOP
label_117348:
    // 0x117348: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x117348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11734c:
    // 0x11734c: 0x0  nop
    ctx->pc = 0x11734cu;
    // NOP
label_117350:
    // 0x117350: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_117354:
    if (ctx->pc == 0x117354u) {
        ctx->pc = 0x117354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117350u;
        // 0x117354: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117358u;
        goto label_117358;
    }
    ctx->pc = 0x117350u;
    {
        const bool branch_taken_0x117350 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x117354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117350u;
        // 0x117354: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117350) {
            ctx->pc = 0x11738Cu;
            goto label_11738c;
        }
    }
    ctx->pc = 0x117358u;
label_117358:
    // 0x117358: 0x0  nop
    ctx->pc = 0x117358u;
    // NOP
label_11735c:
    // 0x11735c: 0x0  nop
    ctx->pc = 0x11735cu;
    // NOP
label_117360:
    // 0x117360: 0x4602a883  div.s       $f2, $f21, $f2
    ctx->pc = 0x117360u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[2]);
label_117364:
    // 0x117364: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x117364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_117368:
    // 0x117368: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x117368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11736c:
    // 0x11736c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x11736cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_117370:
    // 0x117370: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x117370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_117374:
    // 0x117374: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x117374u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_117378:
    // 0x117378: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x117378u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_11737c:
    // 0x11737c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x11737cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_117380:
    // 0x117380: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x117380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_117384:
    // 0x117384: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x117384u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_117388:
    // 0x117388: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x117388u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_11738c:
    // 0x11738c: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x11738cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_117390:
    // 0x117390: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x117390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_117394:
    // 0x117394: 0x13b00006  beq         $sp, $s0, . + 4 + (0x6 << 2)
label_117398:
    if (ctx->pc == 0x117398u) {
        ctx->pc = 0x117398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117394u;
        // 0x117398: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11739Cu;
        goto label_11739c;
    }
    ctx->pc = 0x117394u;
    {
        const bool branch_taken_0x117394 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 16));
        ctx->pc = 0x117398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117394u;
        // 0x117398: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117394) {
            ctx->pc = 0x1173B0u;
            goto label_1173b0;
        }
    }
    ctx->pc = 0x11739Cu;
label_11739c:
    // 0x11739c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x11739cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1173a0:
    // 0x1173a0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1173a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1173a4:
    // 0x1173a4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1173a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1173a8:
    // 0x1173a8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1173a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1173ac:
    // 0x1173ac: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1173acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1173b0:
    // 0x1173b0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1173b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1173b4:
    // 0x1173b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1173b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1173b8:
    // 0x1173b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1173b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1173bc:
    // 0x1173bc: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1173bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1173c0:
    // 0x1173c0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1173c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1173c4:
    // 0x1173c4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1173c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1173c8:
    // 0x1173c8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1173c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1173cc:
    // 0x1173cc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1173ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1173d0:
    // 0x1173d0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1173d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1173d4:
    // 0x1173d4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1173d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1173d8:
    // 0x1173d8: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1173d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1173dc:
    // 0x1173dc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1173dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1173e0:
    // 0x1173e0: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1173e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1173e4:
    // 0x1173e4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1173e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_1173e8:
    // 0x1173e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1173e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1173ec:
    // 0x1173ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1173ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1173f0:
    // 0x1173f0: 0x0  nop
    ctx->pc = 0x1173f0u;
    // NOP
label_1173f4:
    // 0x1173f4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1173f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1173f8:
    // 0x1173f8: 0x0  nop
    ctx->pc = 0x1173f8u;
    // NOP
label_1173fc:
    // 0x1173fc: 0x45000030  bc1f        . + 4 + (0x30 << 2)
label_117400:
    if (ctx->pc == 0x117400u) {
        ctx->pc = 0x117404u;
        goto label_117404;
    }
    ctx->pc = 0x1173FCu;
    {
        const bool branch_taken_0x1173fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1173fc) {
            ctx->pc = 0x1174C0u;
            goto label_1174c0;
        }
    }
    ctx->pc = 0x117404u;
label_117404:
    // 0x117404: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x117404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_117408:
    // 0x117408: 0xc04078a  jal         func_101E28
label_11740c:
    if (ctx->pc == 0x11740Cu) {
        ctx->pc = 0x11740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117408u;
        // 0x11740c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117410u;
        goto label_117410;
    }
    ctx->pc = 0x117408u;
    SET_GPR_U32(ctx, 31, 0x117410u);
    ctx->pc = 0x11740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117408u;
    // 0x11740c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x117408u, 0x117410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117410u;
label_117410:
    // 0x117410: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x117410u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_117414:
    // 0x117414: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x117414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_117418:
    // 0x117418: 0x0  nop
    ctx->pc = 0x117418u;
    // NOP
label_11741c:
    // 0x11741c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x11741cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_117420:
    // 0x117420: 0x0  nop
    ctx->pc = 0x117420u;
    // NOP
label_117424:
    // 0x117424: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_117428:
    if (ctx->pc == 0x117428u) {
        ctx->pc = 0x117428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117424u;
        // 0x117428: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11742Cu;
        goto label_11742c;
    }
    ctx->pc = 0x117424u;
    {
        const bool branch_taken_0x117424 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x117428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117424u;
        // 0x117428: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117424) {
            ctx->pc = 0x117468u;
            goto label_117468;
        }
    }
    ctx->pc = 0x11742Cu;
label_11742c:
    // 0x11742c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11742cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_117430:
    // 0x117430: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x117430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_117434:
    // 0x117434: 0x0  nop
    ctx->pc = 0x117434u;
    // NOP
label_117438:
    // 0x117438: 0x0  nop
    ctx->pc = 0x117438u;
    // NOP
label_11743c:
    // 0x11743c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x11743cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
label_117440:
    // 0x117440: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x117440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_117444:
    // 0x117444: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x117444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_117448:
    // 0x117448: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x117448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11744c:
    // 0x11744c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x11744cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_117450:
    // 0x117450: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x117450u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_117454:
    // 0x117454: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x117454u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_117458:
    // 0x117458: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x117458u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_11745c:
    // 0x11745c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x11745cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_117460:
    // 0x117460: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x117460u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_117464:
    // 0x117464: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x117464u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_117468:
    // 0x117468: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x117468u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_11746c:
    // 0x11746c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x11746cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_117470:
    // 0x117470: 0x13b00006  beq         $sp, $s0, . + 4 + (0x6 << 2)
label_117474:
    if (ctx->pc == 0x117474u) {
        ctx->pc = 0x117474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117470u;
        // 0x117474: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x117478u;
        goto label_117478;
    }
    ctx->pc = 0x117470u;
    {
        const bool branch_taken_0x117470 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 16));
        ctx->pc = 0x117474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117470u;
        // 0x117474: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117470) {
            ctx->pc = 0x11748Cu;
            goto label_11748c;
        }
    }
    ctx->pc = 0x117478u;
label_117478:
    // 0x117478: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x117478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11747c:
    // 0x11747c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x11747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_117480:
    // 0x117480: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x117480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_117484:
    // 0x117484: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x117484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_117488:
    // 0x117488: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x117488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_11748c:
    // 0x11748c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x11748cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_117490:
    // 0x117490: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x117490u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_117494:
    // 0x117494: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_117498:
    // 0x117498: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x117498u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11749c:
    // 0x11749c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x11749cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1174a0:
    // 0x1174a0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1174a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1174a4:
    // 0x1174a4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1174a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1174a8:
    // 0x1174a8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1174a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1174ac:
    // 0x1174ac: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1174acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1174b0:
    // 0x1174b0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1174b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1174b4:
    // 0x1174b4: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1174b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1174b8:
    // 0x1174b8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1174b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1174bc:
    // 0x1174bc: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1174bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1174c0:
    // 0x1174c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1174c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1174c4:
    // 0x1174c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1174c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1174c8:
    // 0x1174c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1174c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1174cc:
    // 0x1174cc: 0xc053e7c  jal         func_14F9F0
label_1174d0:
    if (ctx->pc == 0x1174D0u) {
        ctx->pc = 0x1174D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174CCu;
        // 0x1174d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1174D4u;
        goto label_1174d4;
    }
    ctx->pc = 0x1174CCu;
    SET_GPR_U32(ctx, 31, 0x1174D4u);
    ctx->pc = 0x1174D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1174CCu;
    // 0x1174d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1174CCu, 0x1174D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1174D4u;
label_1174d4:
    // 0x1174d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1174d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1174d8:
    // 0x1174d8: 0xc053e4a  jal         func_14F928
label_1174dc:
    if (ctx->pc == 0x1174DCu) {
        ctx->pc = 0x1174DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174D8u;
        // 0x1174dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1174E0u;
        goto label_1174e0;
    }
    ctx->pc = 0x1174D8u;
    SET_GPR_U32(ctx, 31, 0x1174E0u);
    ctx->pc = 0x1174DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1174D8u;
    // 0x1174dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1174D8u, 0x1174E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1174E0u;
label_1174e0:
    // 0x1174e0: 0x10000029  b           . + 4 + (0x29 << 2)
label_1174e4:
    if (ctx->pc == 0x1174E4u) {
        ctx->pc = 0x1174E8u;
        goto label_1174e8;
    }
    ctx->pc = 0x1174E0u;
    {
        const bool branch_taken_0x1174e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1174e0) {
            ctx->pc = 0x117588u;
            goto label_117588;
        }
    }
    ctx->pc = 0x1174E8u;
label_1174e8:
    // 0x1174e8: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x1174e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_1174ec:
    // 0x1174ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1174f0:
    if (ctx->pc == 0x1174F0u) {
        ctx->pc = 0x1174F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174ECu;
        // 0x1174f0: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1174F4u;
        goto label_1174f4;
    }
    ctx->pc = 0x1174ECu;
    {
        const bool branch_taken_0x1174ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1174F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174ECu;
        // 0x1174f0: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1174ec) {
            ctx->pc = 0x117500u;
            goto label_117500;
        }
    }
    ctx->pc = 0x1174F4u;
label_1174f4:
    // 0x1174f4: 0x8c4306ac  lw          $v1, 0x6AC($v0)
    ctx->pc = 0x1174f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1708)));
label_1174f8:
    // 0x1174f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1174fc:
    if (ctx->pc == 0x1174FCu) {
        ctx->pc = 0x1174FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174F8u;
        // 0x1174fc: 0x8c4406b0  lw          $a0, 0x6B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1712)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117500u;
        goto label_117500;
    }
    ctx->pc = 0x1174F8u;
    {
        const bool branch_taken_0x1174f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1174FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174F8u;
        // 0x1174fc: 0x8c4406b0  lw          $a0, 0x6B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1174f8) {
            ctx->pc = 0x117508u;
            goto label_117508;
        }
    }
    ctx->pc = 0x117500u;
label_117500:
    // 0x117500: 0x8c430810  lw          $v1, 0x810($v0)
    ctx->pc = 0x117500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2064)));
label_117504:
    // 0x117504: 0x8c440814  lw          $a0, 0x814($v0)
    ctx->pc = 0x117504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2068)));
label_117508:
    // 0x117508: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x117508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11750c:
    // 0x11750c: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x11750cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_117510:
    // 0x117510: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x117510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_117514:
    // 0x117514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_117518:
    // 0x117518: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x117518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_11751c:
    // 0x11751c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11751cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117520:
    // 0x117520: 0xc0aa15e  jal         func_2A8578
label_117524:
    if (ctx->pc == 0x117524u) {
        ctx->pc = 0x117524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117520u;
        // 0x117524: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117528u;
        goto label_117528;
    }
    ctx->pc = 0x117520u;
    SET_GPR_U32(ctx, 31, 0x117528u);
    ctx->pc = 0x117524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117520u;
    // 0x117524: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x117520u, 0x117528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117528u;
label_117528:
    // 0x117528: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x117528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_11752c:
    // 0x11752c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11752cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_117530:
    // 0x117530: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x117530u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_117534:
    // 0x117534: 0xc0493b0  jal         func_124EC0
label_117538:
    if (ctx->pc == 0x117538u) {
        ctx->pc = 0x117538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117534u;
        // 0x117538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11753Cu;
        goto label_11753c;
    }
    ctx->pc = 0x117534u;
    SET_GPR_U32(ctx, 31, 0x11753Cu);
    ctx->pc = 0x117538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117534u;
    // 0x117538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x117534u, 0x11753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11753Cu;
label_11753c:
    // 0x11753c: 0xc055f06  jal         func_157C18
label_117540:
    if (ctx->pc == 0x117540u) {
        ctx->pc = 0x117540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11753Cu;
        // 0x117540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117544u;
        goto label_117544;
    }
    ctx->pc = 0x11753Cu;
    SET_GPR_U32(ctx, 31, 0x117544u);
    ctx->pc = 0x117540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11753Cu;
    // 0x117540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11753Cu, 0x117544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117544u;
label_117544:
    // 0x117544: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_117548:
    if (ctx->pc == 0x117548u) {
        ctx->pc = 0x117548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117544u;
        // 0x117548: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11754Cu;
        goto label_11754c;
    }
    ctx->pc = 0x117544u;
    {
        const bool branch_taken_0x117544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117544u;
        // 0x117548: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117544) {
            ctx->pc = 0x117568u;
            goto label_117568;
        }
    }
    ctx->pc = 0x11754Cu;
label_11754c:
    // 0x11754c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11754cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_117550:
    // 0x117550: 0xc0493d8  jal         func_124F60
label_117554:
    if (ctx->pc == 0x117554u) {
        ctx->pc = 0x117554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117550u;
        // 0x117554: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117558u;
        goto label_117558;
    }
    ctx->pc = 0x117550u;
    SET_GPR_U32(ctx, 31, 0x117558u);
    ctx->pc = 0x117554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117550u;
    // 0x117554: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x117550u, 0x117558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117558u;
label_117558:
    // 0x117558: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x117558u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_11755c:
    // 0x11755c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11755cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_117560:
    // 0x117560: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x117560u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_117564:
    // 0x117564: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x117564u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_117568:
    // 0x117568: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11756c:
    // 0x11756c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11756cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_117570:
    // 0x117570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_117574:
    // 0x117574: 0xc053e7c  jal         func_14F9F0
label_117578:
    if (ctx->pc == 0x117578u) {
        ctx->pc = 0x117578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117574u;
        // 0x117578: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11757Cu;
        goto label_11757c;
    }
    ctx->pc = 0x117574u;
    SET_GPR_U32(ctx, 31, 0x11757Cu);
    ctx->pc = 0x117578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117574u;
    // 0x117578: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x117574u, 0x11757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11757Cu;
label_11757c:
    // 0x11757c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11757cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_117580:
    // 0x117580: 0xc053e4a  jal         func_14F928
label_117584:
    if (ctx->pc == 0x117584u) {
        ctx->pc = 0x117584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117580u;
        // 0x117584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117588u;
        goto label_117588;
    }
    ctx->pc = 0x117580u;
    SET_GPR_U32(ctx, 31, 0x117588u);
    ctx->pc = 0x117584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117580u;
    // 0x117584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x117580u, 0x117588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117588u;
label_117588:
    // 0x117588: 0xc04290e  jal         func_10A438
label_11758c:
    if (ctx->pc == 0x11758Cu) {
        ctx->pc = 0x11758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117588u;
        // 0x11758c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117590u;
        goto label_117590;
    }
    ctx->pc = 0x117588u;
    SET_GPR_U32(ctx, 31, 0x117590u);
    ctx->pc = 0x11758Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117588u;
    // 0x11758c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x117588u, 0x117590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117590u;
label_117590:
    // 0x117590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_117594:
    // 0x117594: 0xc048e4e  jal         func_123938
label_117598:
    if (ctx->pc == 0x117598u) {
        ctx->pc = 0x117598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117594u;
        // 0x117598: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11759Cu;
        goto label_11759c;
    }
    ctx->pc = 0x117594u;
    SET_GPR_U32(ctx, 31, 0x11759Cu);
    ctx->pc = 0x117598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117594u;
    // 0x117598: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x117594u, 0x11759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11759Cu;
label_11759c:
    // 0x11759c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1175a0:
    if (ctx->pc == 0x1175A0u) {
        ctx->pc = 0x1175A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11759Cu;
        // 0x1175a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1175A4u;
        goto label_1175a4;
    }
    ctx->pc = 0x11759Cu;
    {
        const bool branch_taken_0x11759c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1175A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11759Cu;
        // 0x1175a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11759c) {
            ctx->pc = 0x1175B8u;
            goto label_1175b8;
        }
    }
    ctx->pc = 0x1175A4u;
label_1175a4:
    // 0x1175a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1175a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1175a8:
    // 0x1175a8: 0xc0493d8  jal         func_124F60
label_1175ac:
    if (ctx->pc == 0x1175ACu) {
        ctx->pc = 0x1175ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175A8u;
        // 0x1175ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1175B0u;
        goto label_1175b0;
    }
    ctx->pc = 0x1175A8u;
    SET_GPR_U32(ctx, 31, 0x1175B0u);
    ctx->pc = 0x1175ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1175A8u;
    // 0x1175ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x1175A8u, 0x1175B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1175B0u;
label_1175b0:
    // 0x1175b0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1175b4:
    if (ctx->pc == 0x1175B4u) {
        ctx->pc = 0x1175B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175B0u;
        // 0x1175b4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1175B8u;
        goto label_1175b8;
    }
    ctx->pc = 0x1175B0u;
    {
        const bool branch_taken_0x1175b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1175B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175B0u;
        // 0x1175b4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175b0) {
            ctx->pc = 0x1175E0u;
            goto label_1175e0;
        }
    }
    ctx->pc = 0x1175B8u;
label_1175b8:
    // 0x1175b8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x1175b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_1175bc:
    // 0x1175bc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1175bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_1175c0:
    // 0x1175c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1175c4:
    if (ctx->pc == 0x1175C4u) {
        ctx->pc = 0x1175C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175C0u;
        // 0x1175c4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1175C8u;
        goto label_1175c8;
    }
    ctx->pc = 0x1175C0u;
    {
        const bool branch_taken_0x1175c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1175C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175C0u;
        // 0x1175c4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175c0) {
            ctx->pc = 0x1175E0u;
            goto label_1175e0;
        }
    }
    ctx->pc = 0x1175C8u;
label_1175c8:
    // 0x1175c8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1175c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1175cc:
    // 0x1175cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1175ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1175d0:
    // 0x1175d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1175d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1175d4:
    // 0x1175d4: 0xc0a4bce  jal         func_292F38
label_1175d8:
    if (ctx->pc == 0x1175D8u) {
        ctx->pc = 0x1175D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175D4u;
        // 0x1175d8: 0x266464f0  addiu       $a0, $s3, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1175DCu;
        goto label_1175dc;
    }
    ctx->pc = 0x1175D4u;
    SET_GPR_U32(ctx, 31, 0x1175DCu);
    ctx->pc = 0x1175D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1175D4u;
    // 0x1175d8: 0x266464f0  addiu       $a0, $s3, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x1175D4u, 0x1175DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1175DCu;
label_1175dc:
    // 0x1175dc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1175dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1175e0:
    // 0x1175e0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1175e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1175e4:
    // 0x1175e4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1175e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1175e8:
    // 0x1175e8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1175e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1175ec:
    // 0x1175ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1175ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1175f0:
    // 0x1175f0: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x1175f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1175f4:
    // 0x1175f4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1175f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1175f8:
    // 0x1175f8: 0x3e00008  jr          $ra
label_1175fc:
    if (ctx->pc == 0x1175FCu) {
        ctx->pc = 0x1175FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175F8u;
        // 0x1175fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117600u;
        goto label_fallthrough_0x1175f8;
    }
    ctx->pc = 0x1175F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1175FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175F8u;
        // 0x1175fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1175F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1175f8:
    ctx->pc = 0x117600u;
}
