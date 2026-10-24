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

// Function: func_00172850
// Address: 0x172850 - 0x173198
void func_00172850_0x172850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00172850_0x172850");
#endif

    switch (ctx->pc) {
        case 0x172850u: goto label_172850;
        case 0x172854u: goto label_172854;
        case 0x172858u: goto label_172858;
        case 0x17285cu: goto label_17285c;
        case 0x172860u: goto label_172860;
        case 0x172864u: goto label_172864;
        case 0x172868u: goto label_172868;
        case 0x17286cu: goto label_17286c;
        case 0x172870u: goto label_172870;
        case 0x172874u: goto label_172874;
        case 0x172878u: goto label_172878;
        case 0x17287cu: goto label_17287c;
        case 0x172880u: goto label_172880;
        case 0x172884u: goto label_172884;
        case 0x172888u: goto label_172888;
        case 0x17288cu: goto label_17288c;
        case 0x172890u: goto label_172890;
        case 0x172894u: goto label_172894;
        case 0x172898u: goto label_172898;
        case 0x17289cu: goto label_17289c;
        case 0x1728a0u: goto label_1728a0;
        case 0x1728a4u: goto label_1728a4;
        case 0x1728a8u: goto label_1728a8;
        case 0x1728acu: goto label_1728ac;
        case 0x1728b0u: goto label_1728b0;
        case 0x1728b4u: goto label_1728b4;
        case 0x1728b8u: goto label_1728b8;
        case 0x1728bcu: goto label_1728bc;
        case 0x1728c0u: goto label_1728c0;
        case 0x1728c4u: goto label_1728c4;
        case 0x1728c8u: goto label_1728c8;
        case 0x1728ccu: goto label_1728cc;
        case 0x1728d0u: goto label_1728d0;
        case 0x1728d4u: goto label_1728d4;
        case 0x1728d8u: goto label_1728d8;
        case 0x1728dcu: goto label_1728dc;
        case 0x1728e0u: goto label_1728e0;
        case 0x1728e4u: goto label_1728e4;
        case 0x1728e8u: goto label_1728e8;
        case 0x1728ecu: goto label_1728ec;
        case 0x1728f0u: goto label_1728f0;
        case 0x1728f4u: goto label_1728f4;
        case 0x1728f8u: goto label_1728f8;
        case 0x1728fcu: goto label_1728fc;
        case 0x172900u: goto label_172900;
        case 0x172904u: goto label_172904;
        case 0x172908u: goto label_172908;
        case 0x17290cu: goto label_17290c;
        case 0x172910u: goto label_172910;
        case 0x172914u: goto label_172914;
        case 0x172918u: goto label_172918;
        case 0x17291cu: goto label_17291c;
        case 0x172920u: goto label_172920;
        case 0x172924u: goto label_172924;
        case 0x172928u: goto label_172928;
        case 0x17292cu: goto label_17292c;
        case 0x172930u: goto label_172930;
        case 0x172934u: goto label_172934;
        case 0x172938u: goto label_172938;
        case 0x17293cu: goto label_17293c;
        case 0x172940u: goto label_172940;
        case 0x172944u: goto label_172944;
        case 0x172948u: goto label_172948;
        case 0x17294cu: goto label_17294c;
        case 0x172950u: goto label_172950;
        case 0x172954u: goto label_172954;
        case 0x172958u: goto label_172958;
        case 0x17295cu: goto label_17295c;
        case 0x172960u: goto label_172960;
        case 0x172964u: goto label_172964;
        case 0x172968u: goto label_172968;
        case 0x17296cu: goto label_17296c;
        case 0x172970u: goto label_172970;
        case 0x172974u: goto label_172974;
        case 0x172978u: goto label_172978;
        case 0x17297cu: goto label_17297c;
        case 0x172980u: goto label_172980;
        case 0x172984u: goto label_172984;
        case 0x172988u: goto label_172988;
        case 0x17298cu: goto label_17298c;
        case 0x172990u: goto label_172990;
        case 0x172994u: goto label_172994;
        case 0x172998u: goto label_172998;
        case 0x17299cu: goto label_17299c;
        case 0x1729a0u: goto label_1729a0;
        case 0x1729a4u: goto label_1729a4;
        case 0x1729a8u: goto label_1729a8;
        case 0x1729acu: goto label_1729ac;
        case 0x1729b0u: goto label_1729b0;
        case 0x1729b4u: goto label_1729b4;
        case 0x1729b8u: goto label_1729b8;
        case 0x1729bcu: goto label_1729bc;
        case 0x1729c0u: goto label_1729c0;
        case 0x1729c4u: goto label_1729c4;
        case 0x1729c8u: goto label_1729c8;
        case 0x1729ccu: goto label_1729cc;
        case 0x1729d0u: goto label_1729d0;
        case 0x1729d4u: goto label_1729d4;
        case 0x1729d8u: goto label_1729d8;
        case 0x1729dcu: goto label_1729dc;
        case 0x1729e0u: goto label_1729e0;
        case 0x1729e4u: goto label_1729e4;
        case 0x1729e8u: goto label_1729e8;
        case 0x1729ecu: goto label_1729ec;
        case 0x1729f0u: goto label_1729f0;
        case 0x1729f4u: goto label_1729f4;
        case 0x1729f8u: goto label_1729f8;
        case 0x1729fcu: goto label_1729fc;
        case 0x172a00u: goto label_172a00;
        case 0x172a04u: goto label_172a04;
        case 0x172a08u: goto label_172a08;
        case 0x172a0cu: goto label_172a0c;
        case 0x172a10u: goto label_172a10;
        case 0x172a14u: goto label_172a14;
        case 0x172a18u: goto label_172a18;
        case 0x172a1cu: goto label_172a1c;
        case 0x172a20u: goto label_172a20;
        case 0x172a24u: goto label_172a24;
        case 0x172a28u: goto label_172a28;
        case 0x172a2cu: goto label_172a2c;
        case 0x172a30u: goto label_172a30;
        case 0x172a34u: goto label_172a34;
        case 0x172a38u: goto label_172a38;
        case 0x172a3cu: goto label_172a3c;
        case 0x172a40u: goto label_172a40;
        case 0x172a44u: goto label_172a44;
        case 0x172a48u: goto label_172a48;
        case 0x172a4cu: goto label_172a4c;
        case 0x172a50u: goto label_172a50;
        case 0x172a54u: goto label_172a54;
        case 0x172a58u: goto label_172a58;
        case 0x172a5cu: goto label_172a5c;
        case 0x172a60u: goto label_172a60;
        case 0x172a64u: goto label_172a64;
        case 0x172a68u: goto label_172a68;
        case 0x172a6cu: goto label_172a6c;
        case 0x172a70u: goto label_172a70;
        case 0x172a74u: goto label_172a74;
        case 0x172a78u: goto label_172a78;
        case 0x172a7cu: goto label_172a7c;
        case 0x172a80u: goto label_172a80;
        case 0x172a84u: goto label_172a84;
        case 0x172a88u: goto label_172a88;
        case 0x172a8cu: goto label_172a8c;
        case 0x172a90u: goto label_172a90;
        case 0x172a94u: goto label_172a94;
        case 0x172a98u: goto label_172a98;
        case 0x172a9cu: goto label_172a9c;
        case 0x172aa0u: goto label_172aa0;
        case 0x172aa4u: goto label_172aa4;
        case 0x172aa8u: goto label_172aa8;
        case 0x172aacu: goto label_172aac;
        case 0x172ab0u: goto label_172ab0;
        case 0x172ab4u: goto label_172ab4;
        case 0x172ab8u: goto label_172ab8;
        case 0x172abcu: goto label_172abc;
        case 0x172ac0u: goto label_172ac0;
        case 0x172ac4u: goto label_172ac4;
        case 0x172ac8u: goto label_172ac8;
        case 0x172accu: goto label_172acc;
        case 0x172ad0u: goto label_172ad0;
        case 0x172ad4u: goto label_172ad4;
        case 0x172ad8u: goto label_172ad8;
        case 0x172adcu: goto label_172adc;
        case 0x172ae0u: goto label_172ae0;
        case 0x172ae4u: goto label_172ae4;
        case 0x172ae8u: goto label_172ae8;
        case 0x172aecu: goto label_172aec;
        case 0x172af0u: goto label_172af0;
        case 0x172af4u: goto label_172af4;
        case 0x172af8u: goto label_172af8;
        case 0x172afcu: goto label_172afc;
        case 0x172b00u: goto label_172b00;
        case 0x172b04u: goto label_172b04;
        case 0x172b08u: goto label_172b08;
        case 0x172b0cu: goto label_172b0c;
        case 0x172b10u: goto label_172b10;
        case 0x172b14u: goto label_172b14;
        case 0x172b18u: goto label_172b18;
        case 0x172b1cu: goto label_172b1c;
        case 0x172b20u: goto label_172b20;
        case 0x172b24u: goto label_172b24;
        case 0x172b28u: goto label_172b28;
        case 0x172b2cu: goto label_172b2c;
        case 0x172b30u: goto label_172b30;
        case 0x172b34u: goto label_172b34;
        case 0x172b38u: goto label_172b38;
        case 0x172b3cu: goto label_172b3c;
        case 0x172b40u: goto label_172b40;
        case 0x172b44u: goto label_172b44;
        case 0x172b48u: goto label_172b48;
        case 0x172b4cu: goto label_172b4c;
        case 0x172b50u: goto label_172b50;
        case 0x172b54u: goto label_172b54;
        case 0x172b58u: goto label_172b58;
        case 0x172b5cu: goto label_172b5c;
        case 0x172b60u: goto label_172b60;
        case 0x172b64u: goto label_172b64;
        case 0x172b68u: goto label_172b68;
        case 0x172b6cu: goto label_172b6c;
        case 0x172b70u: goto label_172b70;
        case 0x172b74u: goto label_172b74;
        case 0x172b78u: goto label_172b78;
        case 0x172b7cu: goto label_172b7c;
        case 0x172b80u: goto label_172b80;
        case 0x172b84u: goto label_172b84;
        case 0x172b88u: goto label_172b88;
        case 0x172b8cu: goto label_172b8c;
        case 0x172b90u: goto label_172b90;
        case 0x172b94u: goto label_172b94;
        case 0x172b98u: goto label_172b98;
        case 0x172b9cu: goto label_172b9c;
        case 0x172ba0u: goto label_172ba0;
        case 0x172ba4u: goto label_172ba4;
        case 0x172ba8u: goto label_172ba8;
        case 0x172bacu: goto label_172bac;
        case 0x172bb0u: goto label_172bb0;
        case 0x172bb4u: goto label_172bb4;
        case 0x172bb8u: goto label_172bb8;
        case 0x172bbcu: goto label_172bbc;
        case 0x172bc0u: goto label_172bc0;
        case 0x172bc4u: goto label_172bc4;
        case 0x172bc8u: goto label_172bc8;
        case 0x172bccu: goto label_172bcc;
        case 0x172bd0u: goto label_172bd0;
        case 0x172bd4u: goto label_172bd4;
        case 0x172bd8u: goto label_172bd8;
        case 0x172bdcu: goto label_172bdc;
        case 0x172be0u: goto label_172be0;
        case 0x172be4u: goto label_172be4;
        case 0x172be8u: goto label_172be8;
        case 0x172becu: goto label_172bec;
        case 0x172bf0u: goto label_172bf0;
        case 0x172bf4u: goto label_172bf4;
        case 0x172bf8u: goto label_172bf8;
        case 0x172bfcu: goto label_172bfc;
        case 0x172c00u: goto label_172c00;
        case 0x172c04u: goto label_172c04;
        case 0x172c08u: goto label_172c08;
        case 0x172c0cu: goto label_172c0c;
        case 0x172c10u: goto label_172c10;
        case 0x172c14u: goto label_172c14;
        case 0x172c18u: goto label_172c18;
        case 0x172c1cu: goto label_172c1c;
        case 0x172c20u: goto label_172c20;
        case 0x172c24u: goto label_172c24;
        case 0x172c28u: goto label_172c28;
        case 0x172c2cu: goto label_172c2c;
        case 0x172c30u: goto label_172c30;
        case 0x172c34u: goto label_172c34;
        case 0x172c38u: goto label_172c38;
        case 0x172c3cu: goto label_172c3c;
        case 0x172c40u: goto label_172c40;
        case 0x172c44u: goto label_172c44;
        case 0x172c48u: goto label_172c48;
        case 0x172c4cu: goto label_172c4c;
        case 0x172c50u: goto label_172c50;
        case 0x172c54u: goto label_172c54;
        case 0x172c58u: goto label_172c58;
        case 0x172c5cu: goto label_172c5c;
        case 0x172c60u: goto label_172c60;
        case 0x172c64u: goto label_172c64;
        case 0x172c68u: goto label_172c68;
        case 0x172c6cu: goto label_172c6c;
        case 0x172c70u: goto label_172c70;
        case 0x172c74u: goto label_172c74;
        case 0x172c78u: goto label_172c78;
        case 0x172c7cu: goto label_172c7c;
        case 0x172c80u: goto label_172c80;
        case 0x172c84u: goto label_172c84;
        case 0x172c88u: goto label_172c88;
        case 0x172c8cu: goto label_172c8c;
        case 0x172c90u: goto label_172c90;
        case 0x172c94u: goto label_172c94;
        case 0x172c98u: goto label_172c98;
        case 0x172c9cu: goto label_172c9c;
        case 0x172ca0u: goto label_172ca0;
        case 0x172ca4u: goto label_172ca4;
        case 0x172ca8u: goto label_172ca8;
        case 0x172cacu: goto label_172cac;
        case 0x172cb0u: goto label_172cb0;
        case 0x172cb4u: goto label_172cb4;
        case 0x172cb8u: goto label_172cb8;
        case 0x172cbcu: goto label_172cbc;
        case 0x172cc0u: goto label_172cc0;
        case 0x172cc4u: goto label_172cc4;
        case 0x172cc8u: goto label_172cc8;
        case 0x172cccu: goto label_172ccc;
        case 0x172cd0u: goto label_172cd0;
        case 0x172cd4u: goto label_172cd4;
        case 0x172cd8u: goto label_172cd8;
        case 0x172cdcu: goto label_172cdc;
        case 0x172ce0u: goto label_172ce0;
        case 0x172ce4u: goto label_172ce4;
        case 0x172ce8u: goto label_172ce8;
        case 0x172cecu: goto label_172cec;
        case 0x172cf0u: goto label_172cf0;
        case 0x172cf4u: goto label_172cf4;
        case 0x172cf8u: goto label_172cf8;
        case 0x172cfcu: goto label_172cfc;
        case 0x172d00u: goto label_172d00;
        case 0x172d04u: goto label_172d04;
        case 0x172d08u: goto label_172d08;
        case 0x172d0cu: goto label_172d0c;
        case 0x172d10u: goto label_172d10;
        case 0x172d14u: goto label_172d14;
        case 0x172d18u: goto label_172d18;
        case 0x172d1cu: goto label_172d1c;
        case 0x172d20u: goto label_172d20;
        case 0x172d24u: goto label_172d24;
        case 0x172d28u: goto label_172d28;
        case 0x172d2cu: goto label_172d2c;
        case 0x172d30u: goto label_172d30;
        case 0x172d34u: goto label_172d34;
        case 0x172d38u: goto label_172d38;
        case 0x172d3cu: goto label_172d3c;
        case 0x172d40u: goto label_172d40;
        case 0x172d44u: goto label_172d44;
        case 0x172d48u: goto label_172d48;
        case 0x172d4cu: goto label_172d4c;
        case 0x172d50u: goto label_172d50;
        case 0x172d54u: goto label_172d54;
        case 0x172d58u: goto label_172d58;
        case 0x172d5cu: goto label_172d5c;
        case 0x172d60u: goto label_172d60;
        case 0x172d64u: goto label_172d64;
        case 0x172d68u: goto label_172d68;
        case 0x172d6cu: goto label_172d6c;
        case 0x172d70u: goto label_172d70;
        case 0x172d74u: goto label_172d74;
        case 0x172d78u: goto label_172d78;
        case 0x172d7cu: goto label_172d7c;
        case 0x172d80u: goto label_172d80;
        case 0x172d84u: goto label_172d84;
        case 0x172d88u: goto label_172d88;
        case 0x172d8cu: goto label_172d8c;
        case 0x172d90u: goto label_172d90;
        case 0x172d94u: goto label_172d94;
        case 0x172d98u: goto label_172d98;
        case 0x172d9cu: goto label_172d9c;
        case 0x172da0u: goto label_172da0;
        case 0x172da4u: goto label_172da4;
        case 0x172da8u: goto label_172da8;
        case 0x172dacu: goto label_172dac;
        case 0x172db0u: goto label_172db0;
        case 0x172db4u: goto label_172db4;
        case 0x172db8u: goto label_172db8;
        case 0x172dbcu: goto label_172dbc;
        case 0x172dc0u: goto label_172dc0;
        case 0x172dc4u: goto label_172dc4;
        case 0x172dc8u: goto label_172dc8;
        case 0x172dccu: goto label_172dcc;
        case 0x172dd0u: goto label_172dd0;
        case 0x172dd4u: goto label_172dd4;
        case 0x172dd8u: goto label_172dd8;
        case 0x172ddcu: goto label_172ddc;
        case 0x172de0u: goto label_172de0;
        case 0x172de4u: goto label_172de4;
        case 0x172de8u: goto label_172de8;
        case 0x172decu: goto label_172dec;
        case 0x172df0u: goto label_172df0;
        case 0x172df4u: goto label_172df4;
        case 0x172df8u: goto label_172df8;
        case 0x172dfcu: goto label_172dfc;
        case 0x172e00u: goto label_172e00;
        case 0x172e04u: goto label_172e04;
        case 0x172e08u: goto label_172e08;
        case 0x172e0cu: goto label_172e0c;
        case 0x172e10u: goto label_172e10;
        case 0x172e14u: goto label_172e14;
        case 0x172e18u: goto label_172e18;
        case 0x172e1cu: goto label_172e1c;
        case 0x172e20u: goto label_172e20;
        case 0x172e24u: goto label_172e24;
        case 0x172e28u: goto label_172e28;
        case 0x172e2cu: goto label_172e2c;
        case 0x172e30u: goto label_172e30;
        case 0x172e34u: goto label_172e34;
        case 0x172e38u: goto label_172e38;
        case 0x172e3cu: goto label_172e3c;
        case 0x172e40u: goto label_172e40;
        case 0x172e44u: goto label_172e44;
        case 0x172e48u: goto label_172e48;
        case 0x172e4cu: goto label_172e4c;
        case 0x172e50u: goto label_172e50;
        case 0x172e54u: goto label_172e54;
        case 0x172e58u: goto label_172e58;
        case 0x172e5cu: goto label_172e5c;
        case 0x172e60u: goto label_172e60;
        case 0x172e64u: goto label_172e64;
        case 0x172e68u: goto label_172e68;
        case 0x172e6cu: goto label_172e6c;
        case 0x172e70u: goto label_172e70;
        case 0x172e74u: goto label_172e74;
        case 0x172e78u: goto label_172e78;
        case 0x172e7cu: goto label_172e7c;
        case 0x172e80u: goto label_172e80;
        case 0x172e84u: goto label_172e84;
        case 0x172e88u: goto label_172e88;
        case 0x172e8cu: goto label_172e8c;
        case 0x172e90u: goto label_172e90;
        case 0x172e94u: goto label_172e94;
        case 0x172e98u: goto label_172e98;
        case 0x172e9cu: goto label_172e9c;
        case 0x172ea0u: goto label_172ea0;
        case 0x172ea4u: goto label_172ea4;
        case 0x172ea8u: goto label_172ea8;
        case 0x172eacu: goto label_172eac;
        case 0x172eb0u: goto label_172eb0;
        case 0x172eb4u: goto label_172eb4;
        case 0x172eb8u: goto label_172eb8;
        case 0x172ebcu: goto label_172ebc;
        case 0x172ec0u: goto label_172ec0;
        case 0x172ec4u: goto label_172ec4;
        case 0x172ec8u: goto label_172ec8;
        case 0x172eccu: goto label_172ecc;
        case 0x172ed0u: goto label_172ed0;
        case 0x172ed4u: goto label_172ed4;
        case 0x172ed8u: goto label_172ed8;
        case 0x172edcu: goto label_172edc;
        case 0x172ee0u: goto label_172ee0;
        case 0x172ee4u: goto label_172ee4;
        case 0x172ee8u: goto label_172ee8;
        case 0x172eecu: goto label_172eec;
        case 0x172ef0u: goto label_172ef0;
        case 0x172ef4u: goto label_172ef4;
        case 0x172ef8u: goto label_172ef8;
        case 0x172efcu: goto label_172efc;
        case 0x172f00u: goto label_172f00;
        case 0x172f04u: goto label_172f04;
        case 0x172f08u: goto label_172f08;
        case 0x172f0cu: goto label_172f0c;
        case 0x172f10u: goto label_172f10;
        case 0x172f14u: goto label_172f14;
        case 0x172f18u: goto label_172f18;
        case 0x172f1cu: goto label_172f1c;
        case 0x172f20u: goto label_172f20;
        case 0x172f24u: goto label_172f24;
        case 0x172f28u: goto label_172f28;
        case 0x172f2cu: goto label_172f2c;
        case 0x172f30u: goto label_172f30;
        case 0x172f34u: goto label_172f34;
        case 0x172f38u: goto label_172f38;
        case 0x172f3cu: goto label_172f3c;
        case 0x172f40u: goto label_172f40;
        case 0x172f44u: goto label_172f44;
        case 0x172f48u: goto label_172f48;
        case 0x172f4cu: goto label_172f4c;
        case 0x172f50u: goto label_172f50;
        case 0x172f54u: goto label_172f54;
        case 0x172f58u: goto label_172f58;
        case 0x172f5cu: goto label_172f5c;
        case 0x172f60u: goto label_172f60;
        case 0x172f64u: goto label_172f64;
        case 0x172f68u: goto label_172f68;
        case 0x172f6cu: goto label_172f6c;
        case 0x172f70u: goto label_172f70;
        case 0x172f74u: goto label_172f74;
        case 0x172f78u: goto label_172f78;
        case 0x172f7cu: goto label_172f7c;
        case 0x172f80u: goto label_172f80;
        case 0x172f84u: goto label_172f84;
        case 0x172f88u: goto label_172f88;
        case 0x172f8cu: goto label_172f8c;
        case 0x172f90u: goto label_172f90;
        case 0x172f94u: goto label_172f94;
        case 0x172f98u: goto label_172f98;
        case 0x172f9cu: goto label_172f9c;
        case 0x172fa0u: goto label_172fa0;
        case 0x172fa4u: goto label_172fa4;
        case 0x172fa8u: goto label_172fa8;
        case 0x172facu: goto label_172fac;
        case 0x172fb0u: goto label_172fb0;
        case 0x172fb4u: goto label_172fb4;
        case 0x172fb8u: goto label_172fb8;
        case 0x172fbcu: goto label_172fbc;
        case 0x172fc0u: goto label_172fc0;
        case 0x172fc4u: goto label_172fc4;
        case 0x172fc8u: goto label_172fc8;
        case 0x172fccu: goto label_172fcc;
        case 0x172fd0u: goto label_172fd0;
        case 0x172fd4u: goto label_172fd4;
        case 0x172fd8u: goto label_172fd8;
        case 0x172fdcu: goto label_172fdc;
        case 0x172fe0u: goto label_172fe0;
        case 0x172fe4u: goto label_172fe4;
        case 0x172fe8u: goto label_172fe8;
        case 0x172fecu: goto label_172fec;
        case 0x172ff0u: goto label_172ff0;
        case 0x172ff4u: goto label_172ff4;
        case 0x172ff8u: goto label_172ff8;
        case 0x172ffcu: goto label_172ffc;
        case 0x173000u: goto label_173000;
        case 0x173004u: goto label_173004;
        case 0x173008u: goto label_173008;
        case 0x17300cu: goto label_17300c;
        case 0x173010u: goto label_173010;
        case 0x173014u: goto label_173014;
        case 0x173018u: goto label_173018;
        case 0x17301cu: goto label_17301c;
        case 0x173020u: goto label_173020;
        case 0x173024u: goto label_173024;
        case 0x173028u: goto label_173028;
        case 0x17302cu: goto label_17302c;
        case 0x173030u: goto label_173030;
        case 0x173034u: goto label_173034;
        case 0x173038u: goto label_173038;
        case 0x17303cu: goto label_17303c;
        case 0x173040u: goto label_173040;
        case 0x173044u: goto label_173044;
        case 0x173048u: goto label_173048;
        case 0x17304cu: goto label_17304c;
        case 0x173050u: goto label_173050;
        case 0x173054u: goto label_173054;
        case 0x173058u: goto label_173058;
        case 0x17305cu: goto label_17305c;
        case 0x173060u: goto label_173060;
        case 0x173064u: goto label_173064;
        case 0x173068u: goto label_173068;
        case 0x17306cu: goto label_17306c;
        case 0x173070u: goto label_173070;
        case 0x173074u: goto label_173074;
        case 0x173078u: goto label_173078;
        case 0x17307cu: goto label_17307c;
        case 0x173080u: goto label_173080;
        case 0x173084u: goto label_173084;
        case 0x173088u: goto label_173088;
        case 0x17308cu: goto label_17308c;
        case 0x173090u: goto label_173090;
        case 0x173094u: goto label_173094;
        case 0x173098u: goto label_173098;
        case 0x17309cu: goto label_17309c;
        case 0x1730a0u: goto label_1730a0;
        case 0x1730a4u: goto label_1730a4;
        case 0x1730a8u: goto label_1730a8;
        case 0x1730acu: goto label_1730ac;
        case 0x1730b0u: goto label_1730b0;
        case 0x1730b4u: goto label_1730b4;
        case 0x1730b8u: goto label_1730b8;
        case 0x1730bcu: goto label_1730bc;
        case 0x1730c0u: goto label_1730c0;
        case 0x1730c4u: goto label_1730c4;
        case 0x1730c8u: goto label_1730c8;
        case 0x1730ccu: goto label_1730cc;
        case 0x1730d0u: goto label_1730d0;
        case 0x1730d4u: goto label_1730d4;
        case 0x1730d8u: goto label_1730d8;
        case 0x1730dcu: goto label_1730dc;
        case 0x1730e0u: goto label_1730e0;
        case 0x1730e4u: goto label_1730e4;
        case 0x1730e8u: goto label_1730e8;
        case 0x1730ecu: goto label_1730ec;
        case 0x1730f0u: goto label_1730f0;
        case 0x1730f4u: goto label_1730f4;
        case 0x1730f8u: goto label_1730f8;
        case 0x1730fcu: goto label_1730fc;
        case 0x173100u: goto label_173100;
        case 0x173104u: goto label_173104;
        case 0x173108u: goto label_173108;
        case 0x17310cu: goto label_17310c;
        case 0x173110u: goto label_173110;
        case 0x173114u: goto label_173114;
        case 0x173118u: goto label_173118;
        case 0x17311cu: goto label_17311c;
        case 0x173120u: goto label_173120;
        case 0x173124u: goto label_173124;
        case 0x173128u: goto label_173128;
        case 0x17312cu: goto label_17312c;
        case 0x173130u: goto label_173130;
        case 0x173134u: goto label_173134;
        case 0x173138u: goto label_173138;
        case 0x17313cu: goto label_17313c;
        case 0x173140u: goto label_173140;
        case 0x173144u: goto label_173144;
        case 0x173148u: goto label_173148;
        case 0x17314cu: goto label_17314c;
        case 0x173150u: goto label_173150;
        case 0x173154u: goto label_173154;
        case 0x173158u: goto label_173158;
        case 0x17315cu: goto label_17315c;
        case 0x173160u: goto label_173160;
        case 0x173164u: goto label_173164;
        case 0x173168u: goto label_173168;
        case 0x17316cu: goto label_17316c;
        case 0x173170u: goto label_173170;
        case 0x173174u: goto label_173174;
        case 0x173178u: goto label_173178;
        case 0x17317cu: goto label_17317c;
        case 0x173180u: goto label_173180;
        case 0x173184u: goto label_173184;
        case 0x173188u: goto label_173188;
        case 0x17318cu: goto label_17318c;
        case 0x173190u: goto label_173190;
        case 0x173194u: goto label_173194;
        default: break;
    }

    ctx->pc = 0x172850u;

label_172850:
    // 0x172850: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x172850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_172854:
    // 0x172854: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x172854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_172858:
    // 0x172858: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x172858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_17285c:
    // 0x17285c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17285cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_172860:
    // 0x172860: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x172860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_172864:
    // 0x172864: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x172864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_172868:
    // 0x172868: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x172868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_17286c:
    // 0x17286c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x17286cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_172870:
    // 0x172870: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x172870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_172874:
    // 0x172874: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x172874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_172878:
    // 0x172878: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x172878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_17287c:
    // 0x17287c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17287cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_172880:
    // 0x172880: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x172880u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_172884:
    // 0x172884: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x172884u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_172888:
    // 0x172888: 0x924302f5  lbu         $v1, 0x2F5($s2)
    ctx->pc = 0x172888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
label_17288c:
    // 0x17288c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x17288cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_172890:
    // 0x172890: 0x10400233  beqz        $v0, . + 4 + (0x233 << 2)
label_172894:
    if (ctx->pc == 0x172894u) {
        ctx->pc = 0x172894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172890u;
        // 0x172894: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172898u;
        goto label_172898;
    }
    ctx->pc = 0x172890u;
    {
        const bool branch_taken_0x172890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172890u;
        // 0x172894: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172890) {
            ctx->pc = 0x173160u;
            goto label_173160;
        }
    }
    ctx->pc = 0x172898u;
label_172898:
    // 0x172898: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x172898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17289c:
    // 0x17289c: 0x24420ed0  addiu       $v0, $v0, 0xED0
    ctx->pc = 0x17289cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3792));
label_1728a0:
    // 0x1728a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1728a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1728a4:
    // 0x1728a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1728a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1728a8:
    // 0x1728a8: 0x800008  jr          $a0
label_1728ac:
    if (ctx->pc == 0x1728ACu) {
        ctx->pc = 0x1728B0u;
        goto label_1728b0;
    }
    ctx->pc = 0x1728A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1728B0u: goto label_1728b0;
            case 0x172DF4u: goto label_172df4;
            case 0x172F30u: goto label_172f30;
            case 0x172F54u: goto label_172f54;
            case 0x1730C4u: goto label_1730c4;
            case 0x173108u: goto label_173108;
            case 0x17314Cu: goto label_17314c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1728A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1728B0u;
label_1728b0:
    // 0x1728b0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1728b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1728b4:
    // 0x1728b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1728b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1728b8:
    // 0x1728b8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1728b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1728bc:
    // 0x1728bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1728bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1728c0:
    // 0x1728c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1728c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1728c4:
    // 0x1728c4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1728c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1728c8:
    // 0x1728c8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1728c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_1728cc:
    // 0x1728cc: 0xc0c194a  jal         func_306528
label_1728d0:
    if (ctx->pc == 0x1728D0u) {
        ctx->pc = 0x1728D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1728CCu;
        // 0x1728d0: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1728D4u;
        goto label_1728d4;
    }
    ctx->pc = 0x1728CCu;
    SET_GPR_U32(ctx, 31, 0x1728D4u);
    ctx->pc = 0x1728D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1728CCu;
    // 0x1728d0: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1728CCu, 0x1728D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1728D4u;
label_1728d4:
    // 0x1728d4: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x1728d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_1728d8:
    // 0x1728d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1728d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1728dc:
    // 0x1728dc: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x1728dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_1728e0:
    // 0x1728e0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1728e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1728e4:
    // 0x1728e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1728e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1728e8:
    // 0x1728e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1728e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1728ec:
    // 0x1728ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1728ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1728f0:
    // 0x1728f0: 0xc0b2e92  jal         func_2CBA48
label_1728f4:
    if (ctx->pc == 0x1728F4u) {
        ctx->pc = 0x1728F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1728F0u;
        // 0x1728f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1728F8u;
        goto label_1728f8;
    }
    ctx->pc = 0x1728F0u;
    SET_GPR_U32(ctx, 31, 0x1728F8u);
    ctx->pc = 0x1728F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1728F0u;
    // 0x1728f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1728F0u, 0x1728F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1728F8u;
label_1728f8:
    // 0x1728f8: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x1728f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1728fc:
    // 0x1728fc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1728fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_172900:
    // 0x172900: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x172900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_172904:
    // 0x172904: 0x40f809  jalr        $v0
label_172908:
    if (ctx->pc == 0x172908u) {
        ctx->pc = 0x172908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172904u;
        // 0x172908: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17290Cu;
        goto label_17290c;
    }
    ctx->pc = 0x172904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17290Cu);
        ctx->pc = 0x172908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172904u;
        // 0x172908: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172904u, 0x17290Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17290Cu;
label_17290c:
    // 0x17290c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x17290cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172910:
    // 0x172910: 0x82420d9a  lb          $v0, 0xD9A($s2)
    ctx->pc = 0x172910u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3482)));
label_172914:
    // 0x172914: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_172918:
    if (ctx->pc == 0x172918u) {
        ctx->pc = 0x172918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172914u;
        // 0x172918: 0xe6400d9c  swc1        $f0, 0xD9C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3484), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17291Cu;
        goto label_17291c;
    }
    ctx->pc = 0x172914u;
    {
        const bool branch_taken_0x172914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172914u;
        // 0x172918: 0xe6400d9c  swc1        $f0, 0xD9C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3484), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172914) {
            ctx->pc = 0x17292Cu;
            goto label_17292c;
        }
    }
    ctx->pc = 0x17291Cu;
label_17291c:
    // 0x17291c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17291cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_172920:
    // 0x172920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172924:
    // 0x172924: 0xc05cdaa  jal         func_1736A8
label_172928:
    if (ctx->pc == 0x172928u) {
        ctx->pc = 0x172928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172924u;
        // 0x172928: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17292Cu;
        goto label_17292c;
    }
    ctx->pc = 0x172924u;
    SET_GPR_U32(ctx, 31, 0x17292Cu);
    ctx->pc = 0x172928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172924u;
    // 0x172928: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1736A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1736A8u, 0x172924u, 0x17292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17292Cu;
label_17292c:
    // 0x17292c: 0x82450d9a  lb          $a1, 0xD9A($s2)
    ctx->pc = 0x17292cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3482)));
label_172930:
    // 0x172930: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x172930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_172934:
    // 0x172934: 0xc05cd8e  jal         func_173638
label_172938:
    if (ctx->pc == 0x172938u) {
        ctx->pc = 0x172938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172934u;
        // 0x172938: 0x26550d90  addiu       $s5, $s2, 0xD90 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 3472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17293Cu;
        goto label_17293c;
    }
    ctx->pc = 0x172934u;
    SET_GPR_U32(ctx, 31, 0x17293Cu);
    ctx->pc = 0x172938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172934u;
    // 0x172938: 0x26550d90  addiu       $s5, $s2, 0xD90 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 3472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173638u, 0x172934u, 0x17293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17293Cu;
label_17293c:
    // 0x17293c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x17293cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_172940:
    // 0x172940: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x172940u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_172944:
    // 0x172944: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x172944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172948:
    // 0x172948: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17294c:
    // 0x17294c: 0x0  nop
    ctx->pc = 0x17294cu;
    // NOP
label_172950:
    // 0x172950: 0x61942  srl         $v1, $a2, 5
    ctx->pc = 0x172950u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
label_172954:
    // 0x172954: 0x30c4001f  andi        $a0, $a2, 0x1F
    ctx->pc = 0x172954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
label_172958:
    // 0x172958: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x172958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17295c:
    // 0x17295c: 0x892006  srlv        $a0, $t1, $a0
    ctx->pc = 0x17295cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
label_172960:
    // 0x172960: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x172960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_172964:
    // 0x172964: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x172964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_172968:
    // 0x172968: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x172968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17296c:
    // 0x17296c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x17296cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_172970:
    // 0x172970: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x172970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_172974:
    // 0x172974: 0x10c0fff6  beqz        $a2, . + 4 + (-0xA << 2)
label_172978:
    if (ctx->pc == 0x172978u) {
        ctx->pc = 0x172978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172974u;
        // 0x172978: 0xa2380b  movn        $a3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17297Cu;
        goto label_17297c;
    }
    ctx->pc = 0x172974u;
    {
        const bool branch_taken_0x172974 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x172978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172974u;
        // 0x172978: 0xa2380b  movn        $a3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172974) {
            ctx->pc = 0x172950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172950;
        }
    }
    ctx->pc = 0x17297Cu;
label_17297c:
    // 0x17297c: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
label_172980:
    if (ctx->pc == 0x172980u) {
        ctx->pc = 0x172984u;
        goto label_172984;
    }
    ctx->pc = 0x17297Cu;
    {
        const bool branch_taken_0x17297c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x17297c) {
            ctx->pc = 0x172990u;
            goto label_172990;
        }
    }
    ctx->pc = 0x172984u;
label_172984:
    // 0x172984: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x172984u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_172988:
    // 0x172988: 0x100001f3  b           . + 4 + (0x1F3 << 2)
label_17298c:
    if (ctx->pc == 0x17298Cu) {
        ctx->pc = 0x17298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172988u;
        // 0x17298c: 0xa24002f4  sb          $zero, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172990u;
        goto label_172990;
    }
    ctx->pc = 0x172988u;
    {
        const bool branch_taken_0x172988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172988u;
        // 0x17298c: 0xa24002f4  sb          $zero, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172988) {
            ctx->pc = 0x173158u;
            goto label_173158;
        }
    }
    ctx->pc = 0x172990u;
label_172990:
    // 0x172990: 0xc06de42  jal         func_1B7908
label_172994:
    if (ctx->pc == 0x172994u) {
        ctx->pc = 0x172994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172990u;
        // 0x172994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172998u;
        goto label_172998;
    }
    ctx->pc = 0x172990u;
    SET_GPR_U32(ctx, 31, 0x172998u);
    ctx->pc = 0x172994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172990u;
    // 0x172994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x172990u, 0x172998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172998u;
label_172998:
    // 0x172998: 0x8e450da8  lw          $a1, 0xDA8($s2)
    ctx->pc = 0x172998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3496)));
label_17299c:
    // 0x17299c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_1729a0:
    if (ctx->pc == 0x1729A0u) {
        ctx->pc = 0x1729A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17299Cu;
        // 0x1729a0: 0x3c04005d  lui         $a0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1729A4u;
        goto label_1729a4;
    }
    ctx->pc = 0x17299Cu;
    {
        const bool branch_taken_0x17299c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1729A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17299Cu;
        // 0x1729a0: 0x3c04005d  lui         $a0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17299c) {
            ctx->pc = 0x1729B0u;
            goto label_1729b0;
        }
    }
    ctx->pc = 0x1729A4u;
label_1729a4:
    // 0x1729a4: 0xc04bb16  jal         func_12EC58
label_1729a8:
    if (ctx->pc == 0x1729A8u) {
        ctx->pc = 0x1729A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729A4u;
        // 0x1729a8: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1729ACu;
        goto label_1729ac;
    }
    ctx->pc = 0x1729A4u;
    SET_GPR_U32(ctx, 31, 0x1729ACu);
    ctx->pc = 0x1729A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1729A4u;
    // 0x1729a8: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC58u, 0x1729A4u, 0x1729ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1729ACu;
label_1729ac:
    // 0x1729ac: 0xae400da8  sw          $zero, 0xDA8($s2)
    ctx->pc = 0x1729acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3496), GPR_U32(ctx, 0));
label_1729b0:
    // 0x1729b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1729b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1729b4:
    // 0x1729b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1729b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1729b8:
    // 0x1729b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1729b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1729bc:
    // 0x1729bc: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1729bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1729c0:
    // 0x1729c0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1729c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1729c4:
    // 0x1729c4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1729c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1729c8:
    // 0x1729c8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1729c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_1729cc:
    // 0x1729cc: 0xc0c73f8  jal         func_31CFE0
label_1729d0:
    if (ctx->pc == 0x1729D0u) {
        ctx->pc = 0x1729D4u;
        goto label_1729d4;
    }
    ctx->pc = 0x1729CCu;
    SET_GPR_U32(ctx, 31, 0x1729D4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1729CCu, 0x1729D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1729D4u;
label_1729d4:
    // 0x1729d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1729d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1729d8:
    // 0x1729d8: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x1729d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
label_1729dc:
    // 0x1729dc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1729dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1729e0:
    // 0x1729e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1729e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1729e4:
    // 0x1729e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1729e8:
    if (ctx->pc == 0x1729E8u) {
        ctx->pc = 0x1729ECu;
        goto label_1729ec;
    }
    ctx->pc = 0x1729E4u;
    {
        const bool branch_taken_0x1729e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1729e4) {
            ctx->pc = 0x1729F8u;
            goto label_1729f8;
        }
    }
    ctx->pc = 0x1729ECu;
label_1729ec:
    // 0x1729ec: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1729ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_1729f0:
    // 0x1729f0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1729f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1729f4:
    // 0x1729f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1729f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1729f8:
    // 0x1729f8: 0xc0c7408  jal         func_31D020
label_1729fc:
    if (ctx->pc == 0x1729FCu) {
        ctx->pc = 0x1729FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729F8u;
        // 0x1729fc: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172A00u;
        goto label_172a00;
    }
    ctx->pc = 0x1729F8u;
    SET_GPR_U32(ctx, 31, 0x172A00u);
    ctx->pc = 0x1729FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1729F8u;
    // 0x1729fc: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1729F8u, 0x172A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172A00u;
label_172a00:
    // 0x172a00: 0x3c1e0042  lui         $fp, 0x42
    ctx->pc = 0x172a00u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)66 << 16));
label_172a04:
    // 0x172a04: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x172a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_172a08:
    // 0x172a08: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x172a08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_172a0c:
    // 0x172a0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x172a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172a10:
    // 0x172a10: 0x264205c0  addiu       $v0, $s2, 0x5C0
    ctx->pc = 0x172a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
label_172a14:
    // 0x172a14: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x172a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_172a18:
    // 0x172a18: 0x27d60fa8  addiu       $s6, $fp, 0xFA8
    ctx->pc = 0x172a18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 4008));
label_172a1c:
    // 0x172a1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x172a1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_172a20:
    // 0x172a20: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x172a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
label_172a24:
    // 0x172a24: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x172a24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_172a28:
    // 0x172a28: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x172a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_172a2c:
    // 0x172a2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x172a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_172a30:
    // 0x172a30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x172a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_172a34:
    // 0x172a34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x172a34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172a38:
    // 0x172a38: 0xc0c7408  jal         func_31D020
label_172a3c:
    if (ctx->pc == 0x172A3Cu) {
        ctx->pc = 0x172A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A38u;
        // 0x172a3c: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172A40u;
        goto label_172a40;
    }
    ctx->pc = 0x172A38u;
    SET_GPR_U32(ctx, 31, 0x172A40u);
    ctx->pc = 0x172A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172A38u;
    // 0x172a3c: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x172A38u, 0x172A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172A40u;
label_172a40:
    // 0x172a40: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x172a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_172a44:
    // 0x172a44: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x172a44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_172a48:
    // 0x172a48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x172a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172a4c:
    // 0x172a4c: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x172a4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_172a50:
    // 0x172a50: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x172a50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_172a54:
    // 0x172a54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x172a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_172a58:
    // 0x172a58: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x172a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_172a5c:
    // 0x172a5c: 0x131942  srl         $v1, $s3, 5
    ctx->pc = 0x172a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
label_172a60:
    // 0x172a60: 0x3265001f  andi        $a1, $s3, 0x1F
    ctx->pc = 0x172a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
label_172a64:
    // 0x172a64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x172a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_172a68:
    // 0x172a68: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x172a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_172a6c:
    // 0x172a6c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x172a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_172a70:
    // 0x172a70: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x172a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_172a74:
    // 0x172a74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x172a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_172a78:
    // 0x172a78: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x172a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_172a7c:
    // 0x172a7c: 0x54400058  bnel        $v0, $zero, . + 4 + (0x58 << 2)
label_172a80:
    if (ctx->pc == 0x172A80u) {
        ctx->pc = 0x172A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A7Cu;
        // 0x172a80: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172A84u;
        goto label_172a84;
    }
    ctx->pc = 0x172A7Cu;
    {
        const bool branch_taken_0x172a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172a7c) {
            ctx->pc = 0x172A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172A7Cu;
            // 0x172a80: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172BE0u;
            goto label_172be0;
        }
    }
    ctx->pc = 0x172A84u;
label_172a84:
    // 0x172a84: 0x92c20006  lbu         $v0, 0x6($s6)
    ctx->pc = 0x172a84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
label_172a88:
    // 0x172a88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172a8c:
    // 0x172a8c: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x172a8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_172a90:
    // 0x172a90: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x172a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_172a94:
    // 0x172a94: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_172a98:
    if (ctx->pc == 0x172A98u) {
        ctx->pc = 0x172A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A94u;
        // 0x172a98: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172A9Cu;
        goto label_172a9c;
    }
    ctx->pc = 0x172A94u;
    {
        const bool branch_taken_0x172a94 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x172A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A94u;
        // 0x172a98: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a94) {
            ctx->pc = 0x172AA4u;
            goto label_172aa4;
        }
    }
    ctx->pc = 0x172A9Cu;
label_172a9c:
    // 0x172a9c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x172a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_172aa0:
    // 0x172aa0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x172aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172aa4:
    // 0x172aa4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x172aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_172aa8:
    // 0x172aa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_172aac:
    if (ctx->pc == 0x172AACu) {
        ctx->pc = 0x172AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AA8u;
        // 0x172aac: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172AB0u;
        goto label_172ab0;
    }
    ctx->pc = 0x172AA8u;
    {
        const bool branch_taken_0x172aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AA8u;
        // 0x172aac: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172aa8) {
            ctx->pc = 0x172AC0u;
            goto label_172ac0;
        }
    }
    ctx->pc = 0x172AB0u;
label_172ab0:
    // 0x172ab0: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x172ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_172ab4:
    // 0x172ab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_172ab8:
    // 0x172ab8: 0x10000002  b           . + 4 + (0x2 << 2)
label_172abc:
    if (ctx->pc == 0x172ABCu) {
        ctx->pc = 0x172ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AB8u;
        // 0x172abc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172AC0u;
        goto label_172ac0;
    }
    ctx->pc = 0x172AB8u;
    {
        const bool branch_taken_0x172ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AB8u;
        // 0x172abc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ab8) {
            ctx->pc = 0x172AC4u;
            goto label_172ac4;
        }
    }
    ctx->pc = 0x172AC0u;
label_172ac0:
    // 0x172ac0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x172ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172ac4:
    // 0x172ac4: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x172ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_172ac8:
    // 0x172ac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172acc:
    // 0x172acc: 0x92c30006  lbu         $v1, 0x6($s6)
    ctx->pc = 0x172accu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
label_172ad0:
    // 0x172ad0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x172ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_172ad4:
    // 0x172ad4: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x172ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
label_172ad8:
    // 0x172ad8: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x172ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_172adc:
    // 0x172adc: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x172adcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_172ae0:
    // 0x172ae0: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_172ae4:
    if (ctx->pc == 0x172AE4u) {
        ctx->pc = 0x172AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AE0u;
        // 0x172ae4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172AE8u;
        goto label_172ae8;
    }
    ctx->pc = 0x172AE0u;
    {
        const bool branch_taken_0x172ae0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x172AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AE0u;
        // 0x172ae4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ae0) {
            ctx->pc = 0x172AF0u;
            goto label_172af0;
        }
    }
    ctx->pc = 0x172AE8u;
label_172ae8:
    // 0x172ae8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x172ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_172aec:
    // 0x172aec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x172aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172af0:
    // 0x172af0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x172af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_172af4:
    // 0x172af4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_172af8:
    if (ctx->pc == 0x172AF8u) {
        ctx->pc = 0x172AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AF4u;
        // 0x172af8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172AFCu;
        goto label_172afc;
    }
    ctx->pc = 0x172AF4u;
    {
        const bool branch_taken_0x172af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AF4u;
        // 0x172af8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172af4) {
            ctx->pc = 0x172B0Cu;
            goto label_172b0c;
        }
    }
    ctx->pc = 0x172AFCu;
label_172afc:
    // 0x172afc: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x172afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_172b00:
    // 0x172b00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_172b04:
    // 0x172b04: 0x10000002  b           . + 4 + (0x2 << 2)
label_172b08:
    if (ctx->pc == 0x172B08u) {
        ctx->pc = 0x172B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B04u;
        // 0x172b08: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B0Cu;
        goto label_172b0c;
    }
    ctx->pc = 0x172B04u;
    {
        const bool branch_taken_0x172b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B04u;
        // 0x172b08: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b04) {
            ctx->pc = 0x172B10u;
            goto label_172b10;
        }
    }
    ctx->pc = 0x172B0Cu;
label_172b0c:
    // 0x172b0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x172b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172b10:
    // 0x172b10: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x172b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_172b14:
    // 0x172b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172b18:
    // 0x172b18: 0x92c30006  lbu         $v1, 0x6($s6)
    ctx->pc = 0x172b18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
label_172b1c:
    // 0x172b1c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x172b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_172b20:
    // 0x172b20: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x172b20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
label_172b24:
    // 0x172b24: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x172b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_172b28:
    // 0x172b28: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x172b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_172b2c:
    // 0x172b2c: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_172b30:
    if (ctx->pc == 0x172B30u) {
        ctx->pc = 0x172B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B2Cu;
        // 0x172b30: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B34u;
        goto label_172b34;
    }
    ctx->pc = 0x172B2Cu;
    {
        const bool branch_taken_0x172b2c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x172B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B2Cu;
        // 0x172b30: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b2c) {
            ctx->pc = 0x172B3Cu;
            goto label_172b3c;
        }
    }
    ctx->pc = 0x172B34u;
label_172b34:
    // 0x172b34: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x172b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_172b38:
    // 0x172b38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x172b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172b3c:
    // 0x172b3c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x172b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_172b40:
    // 0x172b40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_172b44:
    if (ctx->pc == 0x172B44u) {
        ctx->pc = 0x172B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B40u;
        // 0x172b44: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B48u;
        goto label_172b48;
    }
    ctx->pc = 0x172B40u;
    {
        const bool branch_taken_0x172b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B40u;
        // 0x172b44: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b40) {
            ctx->pc = 0x172B58u;
            goto label_172b58;
        }
    }
    ctx->pc = 0x172B48u;
label_172b48:
    // 0x172b48: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x172b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_172b4c:
    // 0x172b4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_172b50:
    // 0x172b50: 0x10000002  b           . + 4 + (0x2 << 2)
label_172b54:
    if (ctx->pc == 0x172B54u) {
        ctx->pc = 0x172B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B50u;
        // 0x172b54: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B58u;
        goto label_172b58;
    }
    ctx->pc = 0x172B50u;
    {
        const bool branch_taken_0x172b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B50u;
        // 0x172b54: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b50) {
            ctx->pc = 0x172B5Cu;
            goto label_172b5c;
        }
    }
    ctx->pc = 0x172B58u;
label_172b58:
    // 0x172b58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x172b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172b5c:
    // 0x172b5c: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x172b5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_172b60:
    // 0x172b60: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x172b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_172b64:
    // 0x172b64: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x172b64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_172b68:
    // 0x172b68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x172b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172b6c:
    // 0x172b6c: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x172b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_172b70:
    // 0x172b70: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x172b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
label_172b74:
    // 0x172b74: 0xc05bd90  jal         func_16F640
label_172b78:
    if (ctx->pc == 0x172B78u) {
        ctx->pc = 0x172B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B74u;
        // 0x172b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B7Cu;
        goto label_172b7c;
    }
    ctx->pc = 0x172B74u;
    SET_GPR_U32(ctx, 31, 0x172B7Cu);
    ctx->pc = 0x172B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B74u;
    // 0x172b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x172B74u, 0x172B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B7Cu;
label_172b7c:
    // 0x172b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172b80:
    // 0x172b80: 0xc05ce66  jal         func_173998
label_172b84:
    if (ctx->pc == 0x172B84u) {
        ctx->pc = 0x172B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B80u;
        // 0x172b84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B88u;
        goto label_172b88;
    }
    ctx->pc = 0x172B80u;
    SET_GPR_U32(ctx, 31, 0x172B88u);
    ctx->pc = 0x172B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B80u;
    // 0x172b84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x172B80u, 0x172B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B88u;
label_172b88:
    // 0x172b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172b8c:
    // 0x172b8c: 0xc051f18  jal         func_147C60
label_172b90:
    if (ctx->pc == 0x172B90u) {
        ctx->pc = 0x172B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B8Cu;
        // 0x172b90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B94u;
        goto label_172b94;
    }
    ctx->pc = 0x172B8Cu;
    SET_GPR_U32(ctx, 31, 0x172B94u);
    ctx->pc = 0x172B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B8Cu;
    // 0x172b90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x172B8Cu, 0x172B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B94u;
label_172b94:
    // 0x172b94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172b98:
    // 0x172b98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172b9c:
    // 0x172b9c: 0xc051f22  jal         func_147C88
label_172ba0:
    if (ctx->pc == 0x172BA0u) {
        ctx->pc = 0x172BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B9Cu;
        // 0x172ba0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172BA4u;
        goto label_172ba4;
    }
    ctx->pc = 0x172B9Cu;
    SET_GPR_U32(ctx, 31, 0x172BA4u);
    ctx->pc = 0x172BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B9Cu;
    // 0x172ba0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x172B9Cu, 0x172BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172BA4u;
label_172ba4:
    // 0x172ba4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x172ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_172ba8:
    // 0x172ba8: 0xc05ce42  jal         func_173908
label_172bac:
    if (ctx->pc == 0x172BACu) {
        ctx->pc = 0x172BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BA8u;
        // 0x172bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172BB0u;
        goto label_172bb0;
    }
    ctx->pc = 0x172BA8u;
    SET_GPR_U32(ctx, 31, 0x172BB0u);
    ctx->pc = 0x172BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172BA8u;
    // 0x172bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x172BA8u, 0x172BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172BB0u;
label_172bb0:
    // 0x172bb0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x172bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_172bb4:
    // 0x172bb4: 0xc05ce4e  jal         func_173938
label_172bb8:
    if (ctx->pc == 0x172BB8u) {
        ctx->pc = 0x172BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BB4u;
        // 0x172bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172BBCu;
        goto label_172bbc;
    }
    ctx->pc = 0x172BB4u;
    SET_GPR_U32(ctx, 31, 0x172BBCu);
    ctx->pc = 0x172BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172BB4u;
    // 0x172bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x172BB4u, 0x172BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172BBCu;
label_172bbc:
    // 0x172bbc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x172bbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_172bc0:
    // 0x172bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172bc4:
    // 0x172bc4: 0xe6940004  swc1        $f20, 0x4($s4)
    ctx->pc = 0x172bc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_172bc8:
    // 0x172bc8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x172bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_172bcc:
    // 0x172bcc: 0xe6940008  swc1        $f20, 0x8($s4)
    ctx->pc = 0x172bccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_172bd0:
    // 0x172bd0: 0xc05ce5a  jal         func_173968
label_172bd4:
    if (ctx->pc == 0x172BD4u) {
        ctx->pc = 0x172BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BD0u;
        // 0x172bd4: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172BD8u;
        goto label_172bd8;
    }
    ctx->pc = 0x172BD0u;
    SET_GPR_U32(ctx, 31, 0x172BD8u);
    ctx->pc = 0x172BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172BD0u;
    // 0x172bd4: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x172BD0u, 0x172BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172BD8u;
label_172bd8:
    // 0x172bd8: 0xe6150058  swc1        $f21, 0x58($s0)
    ctx->pc = 0x172bd8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_172bdc:
    // 0x172bdc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x172bdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_172be0:
    // 0x172be0: 0x1260ff9f  beqz        $s3, . + 4 + (-0x61 << 2)
label_172be4:
    if (ctx->pc == 0x172BE4u) {
        ctx->pc = 0x172BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BE0u;
        // 0x172be4: 0x131942  srl         $v1, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172BE8u;
        goto label_172be8;
    }
    ctx->pc = 0x172BE0u;
    {
        const bool branch_taken_0x172be0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x172BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BE0u;
        // 0x172be4: 0x131942  srl         $v1, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172be0) {
            ctx->pc = 0x172A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172a60;
        }
    }
    ctx->pc = 0x172BE8u;
label_172be8:
    // 0x172be8: 0x27c20fa8  addiu       $v0, $fp, 0xFA8
    ctx->pc = 0x172be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4008));
label_172bec:
    // 0x172bec: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x172becu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_172bf0:
    // 0x172bf0: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x172bf0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_172bf4:
    // 0x172bf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172bf8:
    // 0x172bf8: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x172bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_172bfc:
    // 0x172bfc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_172c00:
    if (ctx->pc == 0x172C00u) {
        ctx->pc = 0x172C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BFCu;
        // 0x172c00: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C04u;
        goto label_172c04;
    }
    ctx->pc = 0x172BFCu;
    {
        const bool branch_taken_0x172bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BFCu;
        // 0x172c00: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172bfc) {
            ctx->pc = 0x172C0Cu;
            goto label_172c0c;
        }
    }
    ctx->pc = 0x172C04u;
label_172c04:
    // 0x172c04: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x172c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_172c08:
    // 0x172c08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x172c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172c0c:
    // 0x172c0c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x172c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_172c10:
    // 0x172c10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_172c14:
    if (ctx->pc == 0x172C14u) {
        ctx->pc = 0x172C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C10u;
        // 0x172c14: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C18u;
        goto label_172c18;
    }
    ctx->pc = 0x172C10u;
    {
        const bool branch_taken_0x172c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C10u;
        // 0x172c14: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c10) {
            ctx->pc = 0x172C28u;
            goto label_172c28;
        }
    }
    ctx->pc = 0x172C18u;
label_172c18:
    // 0x172c18: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x172c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_172c1c:
    // 0x172c1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_172c20:
    // 0x172c20: 0x10000002  b           . + 4 + (0x2 << 2)
label_172c24:
    if (ctx->pc == 0x172C24u) {
        ctx->pc = 0x172C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C20u;
        // 0x172c24: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C28u;
        goto label_172c28;
    }
    ctx->pc = 0x172C20u;
    {
        const bool branch_taken_0x172c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C20u;
        // 0x172c24: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c20) {
            ctx->pc = 0x172C2Cu;
            goto label_172c2c;
        }
    }
    ctx->pc = 0x172C28u;
label_172c28:
    // 0x172c28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172c2c:
    // 0x172c2c: 0x8ca20154  lw          $v0, 0x154($a1)
    ctx->pc = 0x172c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
label_172c30:
    // 0x172c30: 0x27c30fa8  addiu       $v1, $fp, 0xFA8
    ctx->pc = 0x172c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4008));
label_172c34:
    // 0x172c34: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x172c34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_172c38:
    // 0x172c38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172c3c:
    // 0x172c3c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x172c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_172c40:
    // 0x172c40: 0xaca20154  sw          $v0, 0x154($a1)
    ctx->pc = 0x172c40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 2));
label_172c44:
    // 0x172c44: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x172c44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_172c48:
    // 0x172c48: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x172c48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_172c4c:
    // 0x172c4c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_172c50:
    if (ctx->pc == 0x172C50u) {
        ctx->pc = 0x172C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C4Cu;
        // 0x172c50: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C54u;
        goto label_172c54;
    }
    ctx->pc = 0x172C4Cu;
    {
        const bool branch_taken_0x172c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x172C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C4Cu;
        // 0x172c50: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c4c) {
            ctx->pc = 0x172C5Cu;
            goto label_172c5c;
        }
    }
    ctx->pc = 0x172C54u;
label_172c54:
    // 0x172c54: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x172c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_172c58:
    // 0x172c58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x172c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172c5c:
    // 0x172c5c: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x172c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_172c60:
    // 0x172c60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_172c64:
    if (ctx->pc == 0x172C64u) {
        ctx->pc = 0x172C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C60u;
        // 0x172c64: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C68u;
        goto label_172c68;
    }
    ctx->pc = 0x172C60u;
    {
        const bool branch_taken_0x172c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C60u;
        // 0x172c64: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c60) {
            ctx->pc = 0x172C78u;
            goto label_172c78;
        }
    }
    ctx->pc = 0x172C68u;
label_172c68:
    // 0x172c68: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x172c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_172c6c:
    // 0x172c6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_172c70:
    // 0x172c70: 0x10000002  b           . + 4 + (0x2 << 2)
label_172c74:
    if (ctx->pc == 0x172C74u) {
        ctx->pc = 0x172C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C70u;
        // 0x172c74: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C78u;
        goto label_172c78;
    }
    ctx->pc = 0x172C70u;
    {
        const bool branch_taken_0x172c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C70u;
        // 0x172c74: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c70) {
            ctx->pc = 0x172C7Cu;
            goto label_172c7c;
        }
    }
    ctx->pc = 0x172C78u;
label_172c78:
    // 0x172c78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x172c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172c7c:
    // 0x172c7c: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x172c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_172c80:
    // 0x172c80: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x172c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_172c84:
    // 0x172c84: 0x90650faa  lbu         $a1, 0xFAA($v1)
    ctx->pc = 0x172c84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4010)));
label_172c88:
    // 0x172c88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172c8c:
    // 0x172c8c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x172c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_172c90:
    // 0x172c90: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x172c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
label_172c94:
    // 0x172c94: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x172c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_172c98:
    // 0x172c98: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x172c98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_172c9c:
    // 0x172c9c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_172ca0:
    if (ctx->pc == 0x172CA0u) {
        ctx->pc = 0x172CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C9Cu;
        // 0x172ca0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172CA4u;
        goto label_172ca4;
    }
    ctx->pc = 0x172C9Cu;
    {
        const bool branch_taken_0x172c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x172CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C9Cu;
        // 0x172ca0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c9c) {
            ctx->pc = 0x172CACu;
            goto label_172cac;
        }
    }
    ctx->pc = 0x172CA4u;
label_172ca4:
    // 0x172ca4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x172ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_172ca8:
    // 0x172ca8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x172ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172cac:
    // 0x172cac: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x172cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_172cb0:
    // 0x172cb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_172cb4:
    if (ctx->pc == 0x172CB4u) {
        ctx->pc = 0x172CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CB0u;
        // 0x172cb4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172CB8u;
        goto label_172cb8;
    }
    ctx->pc = 0x172CB0u;
    {
        const bool branch_taken_0x172cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CB0u;
        // 0x172cb4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172cb0) {
            ctx->pc = 0x172CC8u;
            goto label_172cc8;
        }
    }
    ctx->pc = 0x172CB8u;
label_172cb8:
    // 0x172cb8: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x172cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_172cbc:
    // 0x172cbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_172cc0:
    // 0x172cc0: 0x10000002  b           . + 4 + (0x2 << 2)
label_172cc4:
    if (ctx->pc == 0x172CC4u) {
        ctx->pc = 0x172CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CC0u;
        // 0x172cc4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172CC8u;
        goto label_172cc8;
    }
    ctx->pc = 0x172CC0u;
    {
        const bool branch_taken_0x172cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CC0u;
        // 0x172cc4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172cc0) {
            ctx->pc = 0x172CCCu;
            goto label_172ccc;
        }
    }
    ctx->pc = 0x172CC8u;
label_172cc8:
    // 0x172cc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x172cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172ccc:
    // 0x172ccc: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x172cccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_172cd0:
    // 0x172cd0: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x172cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_172cd4:
    // 0x172cd4: 0xb01018  mult        $v0, $a1, $s0
    ctx->pc = 0x172cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_172cd8:
    // 0x172cd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x172cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_172cdc:
    // 0x172cdc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x172cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_172ce0:
    // 0x172ce0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x172ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172ce4:
    // 0x172ce4: 0x3c01bc83  lui         $at, 0xBC83
    ctx->pc = 0x172ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48259 << 16));
label_172ce8:
    // 0x172ce8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x172ce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_172cec:
    // 0x172cec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x172cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_172cf0:
    // 0x172cf0: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x172cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_172cf4:
    // 0x172cf4: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x172cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
label_172cf8:
    // 0x172cf8: 0xc05bd90  jal         func_16F640
label_172cfc:
    if (ctx->pc == 0x172CFCu) {
        ctx->pc = 0x172CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CF8u;
        // 0x172cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172D00u;
        goto label_172d00;
    }
    ctx->pc = 0x172CF8u;
    SET_GPR_U32(ctx, 31, 0x172D00u);
    ctx->pc = 0x172CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172CF8u;
    // 0x172cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x172CF8u, 0x172D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D00u;
label_172d00:
    // 0x172d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172d04:
    // 0x172d04: 0xc05ce66  jal         func_173998
label_172d08:
    if (ctx->pc == 0x172D08u) {
        ctx->pc = 0x172D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D04u;
        // 0x172d08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172D0Cu;
        goto label_172d0c;
    }
    ctx->pc = 0x172D04u;
    SET_GPR_U32(ctx, 31, 0x172D0Cu);
    ctx->pc = 0x172D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172D04u;
    // 0x172d08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x172D04u, 0x172D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D0Cu;
label_172d0c:
    // 0x172d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172d10:
    // 0x172d10: 0xc051f18  jal         func_147C60
label_172d14:
    if (ctx->pc == 0x172D14u) {
        ctx->pc = 0x172D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D10u;
        // 0x172d14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172D18u;
        goto label_172d18;
    }
    ctx->pc = 0x172D10u;
    SET_GPR_U32(ctx, 31, 0x172D18u);
    ctx->pc = 0x172D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172D10u;
    // 0x172d14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x172D10u, 0x172D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D18u;
label_172d18:
    // 0x172d18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172d1c:
    // 0x172d1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172d20:
    // 0x172d20: 0xc051f22  jal         func_147C88
label_172d24:
    if (ctx->pc == 0x172D24u) {
        ctx->pc = 0x172D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D20u;
        // 0x172d24: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172D28u;
        goto label_172d28;
    }
    ctx->pc = 0x172D20u;
    SET_GPR_U32(ctx, 31, 0x172D28u);
    ctx->pc = 0x172D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172D20u;
    // 0x172d24: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x172D20u, 0x172D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D28u;
label_172d28:
    // 0x172d28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x172d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_172d2c:
    // 0x172d2c: 0xc05ce42  jal         func_173908
label_172d30:
    if (ctx->pc == 0x172D30u) {
        ctx->pc = 0x172D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D2Cu;
        // 0x172d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172D34u;
        goto label_172d34;
    }
    ctx->pc = 0x172D2Cu;
    SET_GPR_U32(ctx, 31, 0x172D34u);
    ctx->pc = 0x172D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172D2Cu;
    // 0x172d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x172D2Cu, 0x172D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D34u;
label_172d34:
    // 0x172d34: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x172d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_172d38:
    // 0x172d38: 0xc05ce4e  jal         func_173938
label_172d3c:
    if (ctx->pc == 0x172D3Cu) {
        ctx->pc = 0x172D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D38u;
        // 0x172d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172D40u;
        goto label_172d40;
    }
    ctx->pc = 0x172D38u;
    SET_GPR_U32(ctx, 31, 0x172D40u);
    ctx->pc = 0x172D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172D38u;
    // 0x172d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x172D38u, 0x172D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D40u;
label_172d40:
    // 0x172d40: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x172d40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_172d44:
    // 0x172d44: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x172d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_172d48:
    // 0x172d48: 0xe6f50004  swc1        $f21, 0x4($s7)
    ctx->pc = 0x172d48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_172d4c:
    // 0x172d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172d50:
    // 0x172d50: 0xe6f50008  swc1        $f21, 0x8($s7)
    ctx->pc = 0x172d50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_172d54:
    // 0x172d54: 0xc05ce5a  jal         func_173968
label_172d58:
    if (ctx->pc == 0x172D58u) {
        ctx->pc = 0x172D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D54u;
        // 0x172d58: 0xe6f5000c  swc1        $f21, 0xC($s7) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172D5Cu;
        goto label_172d5c;
    }
    ctx->pc = 0x172D54u;
    SET_GPR_U32(ctx, 31, 0x172D5Cu);
    ctx->pc = 0x172D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172D54u;
    // 0x172d58: 0xe6f5000c  swc1        $f21, 0xC($s7) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x172D54u, 0x172D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D5Cu;
label_172d5c:
    // 0x172d5c: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x172d5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_172d60:
    // 0x172d60: 0x8e4505ec  lw          $a1, 0x5EC($s2)
    ctx->pc = 0x172d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1516)));
label_172d64:
    // 0x172d64: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_172d68:
    if (ctx->pc == 0x172D68u) {
        ctx->pc = 0x172D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D64u;
        // 0x172d68: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172D6Cu;
        goto label_172d6c;
    }
    ctx->pc = 0x172D64u;
    {
        const bool branch_taken_0x172d64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D64u;
        // 0x172d68: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d64) {
            ctx->pc = 0x172D8Cu;
            goto label_172d8c;
        }
    }
    ctx->pc = 0x172D6Cu;
label_172d6c:
    // 0x172d6c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x172d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_172d70:
    // 0x172d70: 0x8e4405f0  lw          $a0, 0x5F0($s2)
    ctx->pc = 0x172d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
label_172d74:
    // 0x172d74: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x172d74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_172d78:
    // 0x172d78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172d7c:
    // 0x172d7c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x172d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_172d80:
    // 0x172d80: 0xc0c1a0e  jal         func_306838
label_172d84:
    if (ctx->pc == 0x172D84u) {
        ctx->pc = 0x172D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D80u;
        // 0x172d84: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172D88u;
        goto label_172d88;
    }
    ctx->pc = 0x172D80u;
    SET_GPR_U32(ctx, 31, 0x172D88u);
    ctx->pc = 0x172D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172D80u;
    // 0x172d84: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x172D80u, 0x172D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D88u;
label_172d88:
    // 0x172d88: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x172d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_172d8c:
    // 0x172d8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x172d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_172d90:
    // 0x172d90: 0x2464ee00  addiu       $a0, $v1, -0x1200
    ctx->pc = 0x172d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
label_172d94:
    // 0x172d94: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x172d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_172d98:
    // 0x172d98: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x172d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_172d9c:
    // 0x172d9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x172d9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172da0:
    // 0x172da0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x172da0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172da4:
    // 0x172da4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x172da4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172da8:
    // 0x172da8: 0xc0b2e92  jal         func_2CBA48
label_172dac:
    if (ctx->pc == 0x172DACu) {
        ctx->pc = 0x172DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DA8u;
        // 0x172dac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172DB0u;
        goto label_172db0;
    }
    ctx->pc = 0x172DA8u;
    SET_GPR_U32(ctx, 31, 0x172DB0u);
    ctx->pc = 0x172DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172DA8u;
    // 0x172dac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x172DA8u, 0x172DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172DB0u;
label_172db0:
    // 0x172db0: 0xae4005c0  sw          $zero, 0x5C0($s2)
    ctx->pc = 0x172db0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1472), GPR_U32(ctx, 0));
label_172db4:
    // 0x172db4: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x172db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_172db8:
    // 0x172db8: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x172db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_172dbc:
    // 0x172dbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x172dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172dc0:
    // 0x172dc0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x172dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_172dc4:
    // 0x172dc4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x172dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_172dc8:
    // 0x172dc8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x172dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_172dcc:
    // 0x172dcc: 0xa6420d94  sh          $v0, 0xD94($s2)
    ctx->pc = 0x172dccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3476), (uint16_t)GPR_U32(ctx, 2));
label_172dd0:
    // 0x172dd0: 0x8e440604  lw          $a0, 0x604($s2)
    ctx->pc = 0x172dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
label_172dd4:
    // 0x172dd4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_172dd8:
    if (ctx->pc == 0x172DD8u) {
        ctx->pc = 0x172DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DD4u;
        // 0x172dd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172DDCu;
        goto label_172ddc;
    }
    ctx->pc = 0x172DD4u;
    {
        const bool branch_taken_0x172dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172dd4) {
            ctx->pc = 0x172DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172DD4u;
            // 0x172dd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172DE8u;
            goto label_172de8;
        }
    }
    ctx->pc = 0x172DDCu;
label_172ddc:
    // 0x172ddc: 0xc07f59a  jal         func_1FD668
label_172de0:
    if (ctx->pc == 0x172DE0u) {
        ctx->pc = 0x172DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DDCu;
        // 0x172de0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172DE4u;
        goto label_172de4;
    }
    ctx->pc = 0x172DDCu;
    SET_GPR_U32(ctx, 31, 0x172DE4u);
    ctx->pc = 0x172DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172DDCu;
    // 0x172de0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x172DDCu, 0x172DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172DE4u;
label_172de4:
    // 0x172de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172de8:
    // 0x172de8: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x172de8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_172dec:
    // 0x172dec: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x172decu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_172df0:
    // 0x172df0: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x172df0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_172df4:
    // 0x172df4: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x172df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
label_172df8:
    // 0x172df8: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x172df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_172dfc:
    // 0x172dfc: 0x24820fa8  addiu       $v0, $a0, 0xFA8
    ctx->pc = 0x172dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4008));
label_172e00:
    // 0x172e00: 0x96430d94  lhu         $v1, 0xD94($s2)
    ctx->pc = 0x172e00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3476)));
label_172e04:
    // 0x172e04: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x172e04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_172e08:
    // 0x172e08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x172e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_172e0c:
    // 0x172e0c: 0xa63818  mult        $a3, $a1, $a2
    ctx->pc = 0x172e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_172e10:
    // 0x172e10: 0xa6430d94  sh          $v1, 0xD94($s2)
    ctx->pc = 0x172e10u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3476), (uint16_t)GPR_U32(ctx, 3));
label_172e14:
    // 0x172e14: 0xf21021  addu        $v0, $a3, $s2
    ctx->pc = 0x172e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
label_172e18:
    // 0x172e18: 0x24420610  addiu       $v0, $v0, 0x610
    ctx->pc = 0x172e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
label_172e1c:
    // 0x172e1c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x172e1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_172e20:
    // 0x172e20: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x172e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_172e24:
    // 0x172e24: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x172e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172e28:
    // 0x172e28: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x172e28u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_172e2c:
    // 0x172e2c: 0xc6400d9c  lwc1        $f0, 0xD9C($s2)
    ctx->pc = 0x172e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172e30:
    // 0x172e30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x172e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172e34:
    // 0x172e34: 0x0  nop
    ctx->pc = 0x172e34u;
    // NOP
label_172e38:
    // 0x172e38: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_172e3c:
    if (ctx->pc == 0x172E3Cu) {
        ctx->pc = 0x172E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E38u;
        // 0x172e3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172E40u;
        goto label_172e40;
    }
    ctx->pc = 0x172E38u;
    {
        const bool branch_taken_0x172e38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x172E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E38u;
        // 0x172e3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e38) {
            ctx->pc = 0x172E44u;
            goto label_172e44;
        }
    }
    ctx->pc = 0x172E40u;
label_172e40:
    // 0x172e40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x172e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172e44:
    // 0x172e44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x172e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_172e48:
    // 0x172e48: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
label_172e4c:
    if (ctx->pc == 0x172E4Cu) {
        ctx->pc = 0x172E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E48u;
        // 0x172e4c: 0xa61818  mult        $v1, $a1, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172E50u;
        goto label_172e50;
    }
    ctx->pc = 0x172E48u;
    {
        const bool branch_taken_0x172e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E48u;
        // 0x172e4c: 0xa61818  mult        $v1, $a1, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e48) {
            ctx->pc = 0x173160u;
            goto label_173160;
        }
    }
    ctx->pc = 0x172E50u;
label_172e50:
    // 0x172e50: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x172e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_172e54:
    // 0x172e54: 0x24420630  addiu       $v0, $v0, 0x630
    ctx->pc = 0x172e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
label_172e58:
    // 0x172e58: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x172e58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_172e5c:
    // 0x172e5c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x172e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_172e60:
    // 0x172e60: 0xa61018  mult        $v0, $a1, $a2
    ctx->pc = 0x172e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_172e64:
    // 0x172e64: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x172e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_172e68:
    // 0x172e68: 0x24630640  addiu       $v1, $v1, 0x640
    ctx->pc = 0x172e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1600));
label_172e6c:
    // 0x172e6c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x172e6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_172e70:
    // 0x172e70: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x172e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_172e74:
    // 0x172e74: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x172e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172e78:
    // 0x172e78: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x172e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_172e7c:
    // 0x172e7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x172e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_172e80:
    // 0x172e80: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x172e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_172e84:
    // 0x172e84: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x172e84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172e88:
    // 0x172e88: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x172e88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_172e8c:
    // 0x172e8c: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x172e8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172e90:
    // 0x172e90: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x172e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_172e94:
    // 0x172e94: 0x3c01bd75  lui         $at, 0xBD75
    ctx->pc = 0x172e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48501 << 16));
label_172e98:
    // 0x172e98: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x172e98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_172e9c:
    // 0x172e9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x172e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172ea0:
    // 0x172ea0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_172ea4:
    if (ctx->pc == 0x172EA4u) {
        ctx->pc = 0x172EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172EA0u;
        // 0x172ea4: 0x27c20fa8  addiu       $v0, $fp, 0xFA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172EA8u;
        goto label_172ea8;
    }
    ctx->pc = 0x172EA0u;
    {
        const bool branch_taken_0x172ea0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x172EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172EA0u;
        // 0x172ea4: 0x27c20fa8  addiu       $v0, $fp, 0xFA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ea0) {
            ctx->pc = 0x172EB4u;
            goto label_172eb4;
        }
    }
    ctx->pc = 0x172EA8u;
label_172ea8:
    // 0x172ea8: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x172ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_172eac:
    // 0x172eac: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x172eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_172eb0:
    // 0x172eb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x172eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172eb4:
    // 0x172eb4: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x172eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_172eb8:
    // 0x172eb8: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x172eb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_172ebc:
    // 0x172ebc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x172ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_172ec0:
    // 0x172ec0: 0x443018  mult        $a2, $v0, $a0
    ctx->pc = 0x172ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_172ec4:
    // 0x172ec4: 0xd22821  addu        $a1, $a2, $s2
    ctx->pc = 0x172ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_172ec8:
    // 0x172ec8: 0x24a50610  addiu       $a1, $a1, 0x610
    ctx->pc = 0x172ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1552));
label_172ecc:
    // 0x172ecc: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x172eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_172ed0:
    // 0x172ed0: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
label_172ed4:
    if (ctx->pc == 0x172ED4u) {
        ctx->pc = 0x172ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172ED0u;
        // 0x172ed4: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172ED8u;
        goto label_172ed8;
    }
    ctx->pc = 0x172ED0u;
    {
        const bool branch_taken_0x172ed0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x172ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172ED0u;
        // 0x172ed4: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ed0) {
            ctx->pc = 0x172EF0u;
            goto label_172ef0;
        }
    }
    ctx->pc = 0x172ED8u;
label_172ed8:
    // 0x172ed8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x172ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172edc:
    // 0x172edc: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x172edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_172ee0:
    // 0x172ee0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x172ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172ee4:
    // 0x172ee4: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x172ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_172ee8:
    // 0x172ee8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x172ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172eec:
    // 0x172eec: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x172eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_172ef0:
    // 0x172ef0: 0x442818  mult        $a1, $v0, $a0
    ctx->pc = 0x172ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_172ef4:
    // 0x172ef4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x172ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_172ef8:
    // 0x172ef8: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x172ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_172efc:
    // 0x172efc: 0x24630610  addiu       $v1, $v1, 0x610
    ctx->pc = 0x172efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1552));
label_172f00:
    // 0x172f00: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x172f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_172f04:
    // 0x172f04: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_172f08:
    if (ctx->pc == 0x172F08u) {
        ctx->pc = 0x172F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F04u;
        // 0x172f08: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F0Cu;
        goto label_172f0c;
    }
    ctx->pc = 0x172F04u;
    {
        const bool branch_taken_0x172f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x172F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F04u;
        // 0x172f08: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f04) {
            ctx->pc = 0x172F20u;
            goto label_172f20;
        }
    }
    ctx->pc = 0x172F0Cu;
label_172f0c:
    // 0x172f0c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x172f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_172f10:
    // 0x172f10: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172f14:
    // 0x172f14: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x172f14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_172f18:
    // 0x172f18: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x172f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172f1c:
    // 0x172f1c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x172f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_172f20:
    // 0x172f20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x172f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_172f24:
    // 0x172f24: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x172f24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_172f28:
    // 0x172f28: 0x1000008c  b           . + 4 + (0x8C << 2)
label_172f2c:
    if (ctx->pc == 0x172F2Cu) {
        ctx->pc = 0x172F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F28u;
        // 0x172f2c: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F30u;
        goto label_172f30;
    }
    ctx->pc = 0x172F28u;
    {
        const bool branch_taken_0x172f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F28u;
        // 0x172f2c: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f28) {
            ctx->pc = 0x17315Cu;
            goto label_17315c;
        }
    }
    ctx->pc = 0x172F30u;
label_172f30:
    // 0x172f30: 0x96420d94  lhu         $v0, 0xD94($s2)
    ctx->pc = 0x172f30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3476)));
label_172f34:
    // 0x172f34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x172f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_172f38:
    // 0x172f38: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x172f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_172f3c:
    // 0x172f3c: 0x1c600088  bgtz        $v1, . + 4 + (0x88 << 2)
label_172f40:
    if (ctx->pc == 0x172F40u) {
        ctx->pc = 0x172F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F3Cu;
        // 0x172f40: 0xa6420d94  sh          $v0, 0xD94($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 3476), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F44u;
        goto label_172f44;
    }
    ctx->pc = 0x172F3Cu;
    {
        const bool branch_taken_0x172f3c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x172F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F3Cu;
        // 0x172f40: 0xa6420d94  sh          $v0, 0xD94($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 3476), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f3c) {
            ctx->pc = 0x173160u;
            goto label_173160;
        }
    }
    ctx->pc = 0x172F44u;
label_172f44:
    // 0x172f44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x172f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_172f48:
    // 0x172f48: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x172f48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_172f4c:
    // 0x172f4c: 0x10000083  b           . + 4 + (0x83 << 2)
label_172f50:
    if (ctx->pc == 0x172F50u) {
        ctx->pc = 0x172F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F4Cu;
        // 0x172f50: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F54u;
        goto label_172f54;
    }
    ctx->pc = 0x172F4Cu;
    {
        const bool branch_taken_0x172f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F4Cu;
        // 0x172f50: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f4c) {
            ctx->pc = 0x17315Cu;
            goto label_17315c;
        }
    }
    ctx->pc = 0x172F54u;
label_172f54:
    // 0x172f54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x172f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172f58:
    // 0x172f58: 0x26550d90  addiu       $s5, $s2, 0xD90
    ctx->pc = 0x172f58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 3472));
label_172f5c:
    // 0x172f5c: 0x3c1e0042  lui         $fp, 0x42
    ctx->pc = 0x172f5cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)66 << 16));
label_172f60:
    // 0x172f60: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x172f60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
label_172f64:
    // 0x172f64: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x172f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_172f68:
    // 0x172f68: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x172f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
label_172f6c:
    // 0x172f6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x172f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_172f70:
    // 0x172f70: 0x912006  srlv        $a0, $s1, $a0
    ctx->pc = 0x172f70u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 4) & 0x1F));
label_172f74:
    // 0x172f74: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x172f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_172f78:
    // 0x172f78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x172f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_172f7c:
    // 0x172f7c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x172f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_172f80:
    // 0x172f80: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_172f84:
    if (ctx->pc == 0x172F84u) {
        ctx->pc = 0x172F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F80u;
        // 0x172f84: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F88u;
        goto label_172f88;
    }
    ctx->pc = 0x172F80u;
    {
        const bool branch_taken_0x172f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x172f80) {
            ctx->pc = 0x172F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172F80u;
            // 0x172f84: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172FA4u;
            goto label_172fa4;
        }
    }
    ctx->pc = 0x172F88u;
label_172f88:
    // 0x172f88: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_172f8c:
    if (ctx->pc == 0x172F8Cu) {
        ctx->pc = 0x172F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F88u;
        // 0x172f8c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F90u;
        goto label_172f90;
    }
    ctx->pc = 0x172F88u;
    {
        const bool branch_taken_0x172f88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x172f88) {
            ctx->pc = 0x172F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172F88u;
            // 0x172f8c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172FA4u;
            goto label_172fa4;
        }
    }
    ctx->pc = 0x172F90u;
label_172f90:
    // 0x172f90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x172f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_172f94:
    // 0x172f94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172f98:
    // 0x172f98: 0xc05cdaa  jal         func_1736A8
label_172f9c:
    if (ctx->pc == 0x172F9Cu) {
        ctx->pc = 0x172F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F98u;
        // 0x172f9c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172FA0u;
        goto label_172fa0;
    }
    ctx->pc = 0x172F98u;
    SET_GPR_U32(ctx, 31, 0x172FA0u);
    ctx->pc = 0x172F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F98u;
    // 0x172f9c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1736A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1736A8u, 0x172F98u, 0x172FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172FA0u;
label_172fa0:
    // 0x172fa0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x172fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_172fa4:
    // 0x172fa4: 0x1200fff0  beqz        $s0, . + 4 + (-0x10 << 2)
label_172fa8:
    if (ctx->pc == 0x172FA8u) {
        ctx->pc = 0x172FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FA4u;
        // 0x172fa8: 0x101142  srl         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172FACu;
        goto label_172fac;
    }
    ctx->pc = 0x172FA4u;
    {
        const bool branch_taken_0x172fa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x172FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FA4u;
        // 0x172fa8: 0x101142  srl         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172fa4) {
            ctx->pc = 0x172F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172f68;
        }
    }
    ctx->pc = 0x172FACu;
label_172fac:
    // 0x172fac: 0x27c20fa8  addiu       $v0, $fp, 0xFA8
    ctx->pc = 0x172facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4008));
label_172fb0:
    // 0x172fb0: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x172fb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_172fb4:
    // 0x172fb4: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x172fb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_172fb8:
    // 0x172fb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172fbc:
    // 0x172fbc: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x172fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_172fc0:
    // 0x172fc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_172fc4:
    if (ctx->pc == 0x172FC4u) {
        ctx->pc = 0x172FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FC0u;
        // 0x172fc4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172FC8u;
        goto label_172fc8;
    }
    ctx->pc = 0x172FC0u;
    {
        const bool branch_taken_0x172fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FC0u;
        // 0x172fc4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172fc0) {
            ctx->pc = 0x172FD0u;
            goto label_172fd0;
        }
    }
    ctx->pc = 0x172FC8u;
label_172fc8:
    // 0x172fc8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x172fc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_172fcc:
    // 0x172fcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x172fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172fd0:
    // 0x172fd0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x172fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_172fd4:
    // 0x172fd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_172fd8:
    if (ctx->pc == 0x172FD8u) {
        ctx->pc = 0x172FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FD4u;
        // 0x172fd8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172FDCu;
        goto label_172fdc;
    }
    ctx->pc = 0x172FD4u;
    {
        const bool branch_taken_0x172fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FD4u;
        // 0x172fd8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172fd4) {
            ctx->pc = 0x172FECu;
            goto label_172fec;
        }
    }
    ctx->pc = 0x172FDCu;
label_172fdc:
    // 0x172fdc: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x172fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_172fe0:
    // 0x172fe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_172fe4:
    // 0x172fe4: 0x10000002  b           . + 4 + (0x2 << 2)
label_172fe8:
    if (ctx->pc == 0x172FE8u) {
        ctx->pc = 0x172FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FE4u;
        // 0x172fe8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172FECu;
        goto label_172fec;
    }
    ctx->pc = 0x172FE4u;
    {
        const bool branch_taken_0x172fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FE4u;
        // 0x172fe8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172fe4) {
            ctx->pc = 0x172FF0u;
            goto label_172ff0;
        }
    }
    ctx->pc = 0x172FECu;
label_172fec:
    // 0x172fec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172ff0:
    // 0x172ff0: 0x27c20fa8  addiu       $v0, $fp, 0xFA8
    ctx->pc = 0x172ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4008));
label_172ff4:
    // 0x172ff4: 0x90430007  lbu         $v1, 0x7($v0)
    ctx->pc = 0x172ff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
label_172ff8:
    // 0x172ff8: 0x90500006  lbu         $s0, 0x6($v0)
    ctx->pc = 0x172ff8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
label_172ffc:
    // 0x172ffc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x172ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_173000:
    // 0x173000: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x173000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_173004:
    // 0x173004: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_173008:
    if (ctx->pc == 0x173008u) {
        ctx->pc = 0x173008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173004u;
        // 0x173008: 0x24b40080  addiu       $s4, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17300Cu;
        goto label_17300c;
    }
    ctx->pc = 0x173004u;
    {
        const bool branch_taken_0x173004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173004u;
        // 0x173008: 0x24b40080  addiu       $s4, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173004) {
            ctx->pc = 0x17309Cu;
            goto label_17309c;
        }
    }
    ctx->pc = 0x17300Cu;
label_17300c:
    // 0x17300c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x17300cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_173010:
    // 0x173010: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x173010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173014:
    // 0x173014: 0x0  nop
    ctx->pc = 0x173014u;
    // NOP
label_173018:
    // 0x173018: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x173018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_17301c:
    // 0x17301c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17301cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173020:
    // 0x173020: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
label_173024:
    if (ctx->pc == 0x173024u) {
        ctx->pc = 0x173024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173020u;
        // 0x173024: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173028u;
        goto label_173028;
    }
    ctx->pc = 0x173020u;
    {
        const bool branch_taken_0x173020 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x173024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173020u;
        // 0x173024: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173020) {
            ctx->pc = 0x17302Cu;
            goto label_17302c;
        }
    }
    ctx->pc = 0x173028u;
label_173028:
    // 0x173028: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x173028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17302c:
    // 0x17302c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17302cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_173030:
    // 0x173030: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_173034:
    if (ctx->pc == 0x173034u) {
        ctx->pc = 0x173034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173030u;
        // 0x173034: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173038u;
        goto label_173038;
    }
    ctx->pc = 0x173030u;
    {
        const bool branch_taken_0x173030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173030u;
        // 0x173034: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173030) {
            ctx->pc = 0x173048u;
            goto label_173048;
        }
    }
    ctx->pc = 0x173038u;
label_173038:
    // 0x173038: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x173038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_17303c:
    // 0x17303c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17303cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_173040:
    // 0x173040: 0x10000002  b           . + 4 + (0x2 << 2)
label_173044:
    if (ctx->pc == 0x173044u) {
        ctx->pc = 0x173044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173040u;
        // 0x173044: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173048u;
        goto label_173048;
    }
    ctx->pc = 0x173040u;
    {
        const bool branch_taken_0x173040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173040u;
        // 0x173044: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173040) {
            ctx->pc = 0x17304Cu;
            goto label_17304c;
        }
    }
    ctx->pc = 0x173048u;
label_173048:
    // 0x173048: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17304c:
    // 0x17304c: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x17304cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_173050:
    // 0x173050: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x173050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_173054:
    // 0x173054: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173058:
    // 0x173058: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
label_17305c:
    if (ctx->pc == 0x17305Cu) {
        ctx->pc = 0x17305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173058u;
        // 0x17305c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173060u;
        goto label_173060;
    }
    ctx->pc = 0x173058u;
    {
        const bool branch_taken_0x173058 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x17305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173058u;
        // 0x17305c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173058) {
            ctx->pc = 0x173064u;
            goto label_173064;
        }
    }
    ctx->pc = 0x173060u;
label_173060:
    // 0x173060: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x173060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_173064:
    // 0x173064: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x173064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_173068:
    // 0x173068: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_17306c:
    if (ctx->pc == 0x17306Cu) {
        ctx->pc = 0x17306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173068u;
        // 0x17306c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173070u;
        goto label_173070;
    }
    ctx->pc = 0x173068u;
    {
        const bool branch_taken_0x173068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173068u;
        // 0x17306c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173068) {
            ctx->pc = 0x173080u;
            goto label_173080;
        }
    }
    ctx->pc = 0x173070u;
label_173070:
    // 0x173070: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x173070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_173074:
    // 0x173074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_173078:
    // 0x173078: 0x10000002  b           . + 4 + (0x2 << 2)
label_17307c:
    if (ctx->pc == 0x17307Cu) {
        ctx->pc = 0x17307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173078u;
        // 0x17307c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173080u;
        goto label_173080;
    }
    ctx->pc = 0x173078u;
    {
        const bool branch_taken_0x173078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173078u;
        // 0x17307c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173078) {
            ctx->pc = 0x173084u;
            goto label_173084;
        }
    }
    ctx->pc = 0x173080u;
label_173080:
    // 0x173080: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x173080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173084:
    // 0x173084: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x173084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_173088:
    // 0x173088: 0xc051d52  jal         func_147548
label_17308c:
    if (ctx->pc == 0x17308Cu) {
        ctx->pc = 0x17308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173088u;
        // 0x17308c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173090u;
        goto label_173090;
    }
    ctx->pc = 0x173088u;
    SET_GPR_U32(ctx, 31, 0x173090u);
    ctx->pc = 0x17308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173088u;
    // 0x17308c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x173088u, 0x173090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173090u;
label_173090:
    // 0x173090: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x173090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_173094:
    // 0x173094: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_173098:
    if (ctx->pc == 0x173098u) {
        ctx->pc = 0x173098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173094u;
        // 0x173098: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17309Cu;
        goto label_17309c;
    }
    ctx->pc = 0x173094u;
    {
        const bool branch_taken_0x173094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173094u;
        // 0x173098: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173094) {
            ctx->pc = 0x173018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173018;
        }
    }
    ctx->pc = 0x17309Cu;
label_17309c:
    // 0x17309c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17309cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1730a0:
    // 0x1730a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1730a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1730a4:
    // 0x1730a4: 0xc05cdaa  jal         func_1736A8
label_1730a8:
    if (ctx->pc == 0x1730A8u) {
        ctx->pc = 0x1730A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730A4u;
        // 0x1730a8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1730ACu;
        goto label_1730ac;
    }
    ctx->pc = 0x1730A4u;
    SET_GPR_U32(ctx, 31, 0x1730ACu);
    ctx->pc = 0x1730A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1730A4u;
    // 0x1730a8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1736A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1736A8u, 0x1730A4u, 0x1730ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1730ACu;
label_1730ac:
    // 0x1730ac: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1730acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1730b0:
    // 0x1730b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1730b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1730b4:
    // 0x1730b4: 0xa6420d94  sh          $v0, 0xD94($s2)
    ctx->pc = 0x1730b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3476), (uint16_t)GPR_U32(ctx, 2));
label_1730b8:
    // 0x1730b8: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x1730b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
label_1730bc:
    // 0x1730bc: 0x10000027  b           . + 4 + (0x27 << 2)
label_1730c0:
    if (ctx->pc == 0x1730C0u) {
        ctx->pc = 0x1730C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730BCu;
        // 0x1730c0: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1730C4u;
        goto label_1730c4;
    }
    ctx->pc = 0x1730BCu;
    {
        const bool branch_taken_0x1730bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1730C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730BCu;
        // 0x1730c0: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730bc) {
            ctx->pc = 0x17315Cu;
            goto label_17315c;
        }
    }
    ctx->pc = 0x1730C4u;
label_1730c4:
    // 0x1730c4: 0x96420d94  lhu         $v0, 0xD94($s2)
    ctx->pc = 0x1730c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3476)));
label_1730c8:
    // 0x1730c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1730c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1730cc:
    // 0x1730cc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1730ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1730d0:
    // 0x1730d0: 0x1c600023  bgtz        $v1, . + 4 + (0x23 << 2)
label_1730d4:
    if (ctx->pc == 0x1730D4u) {
        ctx->pc = 0x1730D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730D0u;
        // 0x1730d4: 0xa6420d94  sh          $v0, 0xD94($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 3476), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1730D8u;
        goto label_1730d8;
    }
    ctx->pc = 0x1730D0u;
    {
        const bool branch_taken_0x1730d0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1730D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730D0u;
        // 0x1730d4: 0xa6420d94  sh          $v0, 0xD94($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 3476), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730d0) {
            ctx->pc = 0x173160u;
            goto label_173160;
        }
    }
    ctx->pc = 0x1730D8u;
label_1730d8:
    // 0x1730d8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1730d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1730dc:
    // 0x1730dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1730dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1730e0:
    // 0x1730e0: 0x8e440604  lw          $a0, 0x604($s2)
    ctx->pc = 0x1730e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
label_1730e4:
    // 0x1730e4: 0xa6420d94  sh          $v0, 0xD94($s2)
    ctx->pc = 0x1730e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3476), (uint16_t)GPR_U32(ctx, 2));
label_1730e8:
    // 0x1730e8: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x1730e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
label_1730ec:
    // 0x1730ec: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1730ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1730f0:
    // 0x1730f0: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_1730f4:
    if (ctx->pc == 0x1730F4u) {
        ctx->pc = 0x1730F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730F0u;
        // 0x1730f4: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1730F8u;
        goto label_1730f8;
    }
    ctx->pc = 0x1730F0u;
    {
        const bool branch_taken_0x1730f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1730F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730F0u;
        // 0x1730f4: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730f0) {
            ctx->pc = 0x173160u;
            goto label_173160;
        }
    }
    ctx->pc = 0x1730F8u;
label_1730f8:
    // 0x1730f8: 0xc07f59a  jal         func_1FD668
label_1730fc:
    if (ctx->pc == 0x1730FCu) {
        ctx->pc = 0x1730FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730F8u;
        // 0x1730fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173100u;
        goto label_173100;
    }
    ctx->pc = 0x1730F8u;
    SET_GPR_U32(ctx, 31, 0x173100u);
    ctx->pc = 0x1730FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1730F8u;
    // 0x1730fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1730F8u, 0x173100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173100u;
label_173100:
    // 0x173100: 0x10000018  b           . + 4 + (0x18 << 2)
label_173104:
    if (ctx->pc == 0x173104u) {
        ctx->pc = 0x173104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173100u;
        // 0x173104: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173108u;
        goto label_173108;
    }
    ctx->pc = 0x173100u;
    {
        const bool branch_taken_0x173100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173100u;
        // 0x173104: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173100) {
            ctx->pc = 0x173164u;
            goto label_173164;
        }
    }
    ctx->pc = 0x173108u;
label_173108:
    // 0x173108: 0x96420d94  lhu         $v0, 0xD94($s2)
    ctx->pc = 0x173108u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3476)));
label_17310c:
    // 0x17310c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x17310cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_173110:
    // 0x173110: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x173110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_173114:
    // 0x173114: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x173114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_173118:
    // 0x173118: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x173118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17311c:
    // 0x17311c: 0xa6420d94  sh          $v0, 0xD94($s2)
    ctx->pc = 0x17311cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3476), (uint16_t)GPR_U32(ctx, 2));
label_173120:
    // 0x173120: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x173120u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_173124:
    // 0x173124: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x173124u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173128:
    // 0x173128: 0x0  nop
    ctx->pc = 0x173128u;
    // NOP
label_17312c:
    // 0x17312c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17312cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_173130:
    // 0x173130: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x173130u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_173134:
    // 0x173134: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
label_173138:
    if (ctx->pc == 0x173138u) {
        ctx->pc = 0x173138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173134u;
        // 0x173138: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17313Cu;
        goto label_17313c;
    }
    ctx->pc = 0x173134u;
    {
        const bool branch_taken_0x173134 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x173138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173134u;
        // 0x173138: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x173134) {
            ctx->pc = 0x173160u;
            goto label_173160;
        }
    }
    ctx->pc = 0x17313Cu;
label_17313c:
    // 0x17313c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x17313cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_173140:
    // 0x173140: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x173140u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_173144:
    // 0x173144: 0x10000005  b           . + 4 + (0x5 << 2)
label_173148:
    if (ctx->pc == 0x173148u) {
        ctx->pc = 0x173148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173144u;
        // 0x173148: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17314Cu;
        goto label_17314c;
    }
    ctx->pc = 0x173144u;
    {
        const bool branch_taken_0x173144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173144u;
        // 0x173148: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173144) {
            ctx->pc = 0x17315Cu;
            goto label_17315c;
        }
    }
    ctx->pc = 0x17314Cu;
label_17314c:
    // 0x17314c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17314cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_173150:
    // 0x173150: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x173150u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_173154:
    // 0x173154: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x173154u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
label_173158:
    // 0x173158: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x173158u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
label_17315c:
    // 0x17315c: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x17315cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_173160:
    // 0x173160: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x173160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_173164:
    // 0x173164: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x173164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_173168:
    // 0x173168: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x173168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_17316c:
    // 0x17316c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x17316cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_173170:
    // 0x173170: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x173170u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_173174:
    // 0x173174: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x173174u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_173178:
    // 0x173178: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x173178u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17317c:
    // 0x17317c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17317cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_173180:
    // 0x173180: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x173180u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_173184:
    // 0x173184: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x173184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_173188:
    // 0x173188: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x173188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17318c:
    // 0x17318c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x17318cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_173190:
    // 0x173190: 0x3e00008  jr          $ra
label_173194:
    if (ctx->pc == 0x173194u) {
        ctx->pc = 0x173194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173190u;
        // 0x173194: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173198u;
        goto label_fallthrough_0x173190;
    }
    ctx->pc = 0x173190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173190u;
        // 0x173194: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x173190:
    ctx->pc = 0x173198u;
}
