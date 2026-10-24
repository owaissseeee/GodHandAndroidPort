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

// Function: func_00123938
// Address: 0x123938 - 0x124540
void func_00123938_0x123938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00123938_0x123938");
#endif

    switch (ctx->pc) {
        case 0x123938u: goto label_123938;
        case 0x12393cu: goto label_12393c;
        case 0x123940u: goto label_123940;
        case 0x123944u: goto label_123944;
        case 0x123948u: goto label_123948;
        case 0x12394cu: goto label_12394c;
        case 0x123950u: goto label_123950;
        case 0x123954u: goto label_123954;
        case 0x123958u: goto label_123958;
        case 0x12395cu: goto label_12395c;
        case 0x123960u: goto label_123960;
        case 0x123964u: goto label_123964;
        case 0x123968u: goto label_123968;
        case 0x12396cu: goto label_12396c;
        case 0x123970u: goto label_123970;
        case 0x123974u: goto label_123974;
        case 0x123978u: goto label_123978;
        case 0x12397cu: goto label_12397c;
        case 0x123980u: goto label_123980;
        case 0x123984u: goto label_123984;
        case 0x123988u: goto label_123988;
        case 0x12398cu: goto label_12398c;
        case 0x123990u: goto label_123990;
        case 0x123994u: goto label_123994;
        case 0x123998u: goto label_123998;
        case 0x12399cu: goto label_12399c;
        case 0x1239a0u: goto label_1239a0;
        case 0x1239a4u: goto label_1239a4;
        case 0x1239a8u: goto label_1239a8;
        case 0x1239acu: goto label_1239ac;
        case 0x1239b0u: goto label_1239b0;
        case 0x1239b4u: goto label_1239b4;
        case 0x1239b8u: goto label_1239b8;
        case 0x1239bcu: goto label_1239bc;
        case 0x1239c0u: goto label_1239c0;
        case 0x1239c4u: goto label_1239c4;
        case 0x1239c8u: goto label_1239c8;
        case 0x1239ccu: goto label_1239cc;
        case 0x1239d0u: goto label_1239d0;
        case 0x1239d4u: goto label_1239d4;
        case 0x1239d8u: goto label_1239d8;
        case 0x1239dcu: goto label_1239dc;
        case 0x1239e0u: goto label_1239e0;
        case 0x1239e4u: goto label_1239e4;
        case 0x1239e8u: goto label_1239e8;
        case 0x1239ecu: goto label_1239ec;
        case 0x1239f0u: goto label_1239f0;
        case 0x1239f4u: goto label_1239f4;
        case 0x1239f8u: goto label_1239f8;
        case 0x1239fcu: goto label_1239fc;
        case 0x123a00u: goto label_123a00;
        case 0x123a04u: goto label_123a04;
        case 0x123a08u: goto label_123a08;
        case 0x123a0cu: goto label_123a0c;
        case 0x123a10u: goto label_123a10;
        case 0x123a14u: goto label_123a14;
        case 0x123a18u: goto label_123a18;
        case 0x123a1cu: goto label_123a1c;
        case 0x123a20u: goto label_123a20;
        case 0x123a24u: goto label_123a24;
        case 0x123a28u: goto label_123a28;
        case 0x123a2cu: goto label_123a2c;
        case 0x123a30u: goto label_123a30;
        case 0x123a34u: goto label_123a34;
        case 0x123a38u: goto label_123a38;
        case 0x123a3cu: goto label_123a3c;
        case 0x123a40u: goto label_123a40;
        case 0x123a44u: goto label_123a44;
        case 0x123a48u: goto label_123a48;
        case 0x123a4cu: goto label_123a4c;
        case 0x123a50u: goto label_123a50;
        case 0x123a54u: goto label_123a54;
        case 0x123a58u: goto label_123a58;
        case 0x123a5cu: goto label_123a5c;
        case 0x123a60u: goto label_123a60;
        case 0x123a64u: goto label_123a64;
        case 0x123a68u: goto label_123a68;
        case 0x123a6cu: goto label_123a6c;
        case 0x123a70u: goto label_123a70;
        case 0x123a74u: goto label_123a74;
        case 0x123a78u: goto label_123a78;
        case 0x123a7cu: goto label_123a7c;
        case 0x123a80u: goto label_123a80;
        case 0x123a84u: goto label_123a84;
        case 0x123a88u: goto label_123a88;
        case 0x123a8cu: goto label_123a8c;
        case 0x123a90u: goto label_123a90;
        case 0x123a94u: goto label_123a94;
        case 0x123a98u: goto label_123a98;
        case 0x123a9cu: goto label_123a9c;
        case 0x123aa0u: goto label_123aa0;
        case 0x123aa4u: goto label_123aa4;
        case 0x123aa8u: goto label_123aa8;
        case 0x123aacu: goto label_123aac;
        case 0x123ab0u: goto label_123ab0;
        case 0x123ab4u: goto label_123ab4;
        case 0x123ab8u: goto label_123ab8;
        case 0x123abcu: goto label_123abc;
        case 0x123ac0u: goto label_123ac0;
        case 0x123ac4u: goto label_123ac4;
        case 0x123ac8u: goto label_123ac8;
        case 0x123accu: goto label_123acc;
        case 0x123ad0u: goto label_123ad0;
        case 0x123ad4u: goto label_123ad4;
        case 0x123ad8u: goto label_123ad8;
        case 0x123adcu: goto label_123adc;
        case 0x123ae0u: goto label_123ae0;
        case 0x123ae4u: goto label_123ae4;
        case 0x123ae8u: goto label_123ae8;
        case 0x123aecu: goto label_123aec;
        case 0x123af0u: goto label_123af0;
        case 0x123af4u: goto label_123af4;
        case 0x123af8u: goto label_123af8;
        case 0x123afcu: goto label_123afc;
        case 0x123b00u: goto label_123b00;
        case 0x123b04u: goto label_123b04;
        case 0x123b08u: goto label_123b08;
        case 0x123b0cu: goto label_123b0c;
        case 0x123b10u: goto label_123b10;
        case 0x123b14u: goto label_123b14;
        case 0x123b18u: goto label_123b18;
        case 0x123b1cu: goto label_123b1c;
        case 0x123b20u: goto label_123b20;
        case 0x123b24u: goto label_123b24;
        case 0x123b28u: goto label_123b28;
        case 0x123b2cu: goto label_123b2c;
        case 0x123b30u: goto label_123b30;
        case 0x123b34u: goto label_123b34;
        case 0x123b38u: goto label_123b38;
        case 0x123b3cu: goto label_123b3c;
        case 0x123b40u: goto label_123b40;
        case 0x123b44u: goto label_123b44;
        case 0x123b48u: goto label_123b48;
        case 0x123b4cu: goto label_123b4c;
        case 0x123b50u: goto label_123b50;
        case 0x123b54u: goto label_123b54;
        case 0x123b58u: goto label_123b58;
        case 0x123b5cu: goto label_123b5c;
        case 0x123b60u: goto label_123b60;
        case 0x123b64u: goto label_123b64;
        case 0x123b68u: goto label_123b68;
        case 0x123b6cu: goto label_123b6c;
        case 0x123b70u: goto label_123b70;
        case 0x123b74u: goto label_123b74;
        case 0x123b78u: goto label_123b78;
        case 0x123b7cu: goto label_123b7c;
        case 0x123b80u: goto label_123b80;
        case 0x123b84u: goto label_123b84;
        case 0x123b88u: goto label_123b88;
        case 0x123b8cu: goto label_123b8c;
        case 0x123b90u: goto label_123b90;
        case 0x123b94u: goto label_123b94;
        case 0x123b98u: goto label_123b98;
        case 0x123b9cu: goto label_123b9c;
        case 0x123ba0u: goto label_123ba0;
        case 0x123ba4u: goto label_123ba4;
        case 0x123ba8u: goto label_123ba8;
        case 0x123bacu: goto label_123bac;
        case 0x123bb0u: goto label_123bb0;
        case 0x123bb4u: goto label_123bb4;
        case 0x123bb8u: goto label_123bb8;
        case 0x123bbcu: goto label_123bbc;
        case 0x123bc0u: goto label_123bc0;
        case 0x123bc4u: goto label_123bc4;
        case 0x123bc8u: goto label_123bc8;
        case 0x123bccu: goto label_123bcc;
        case 0x123bd0u: goto label_123bd0;
        case 0x123bd4u: goto label_123bd4;
        case 0x123bd8u: goto label_123bd8;
        case 0x123bdcu: goto label_123bdc;
        case 0x123be0u: goto label_123be0;
        case 0x123be4u: goto label_123be4;
        case 0x123be8u: goto label_123be8;
        case 0x123becu: goto label_123bec;
        case 0x123bf0u: goto label_123bf0;
        case 0x123bf4u: goto label_123bf4;
        case 0x123bf8u: goto label_123bf8;
        case 0x123bfcu: goto label_123bfc;
        case 0x123c00u: goto label_123c00;
        case 0x123c04u: goto label_123c04;
        case 0x123c08u: goto label_123c08;
        case 0x123c0cu: goto label_123c0c;
        case 0x123c10u: goto label_123c10;
        case 0x123c14u: goto label_123c14;
        case 0x123c18u: goto label_123c18;
        case 0x123c1cu: goto label_123c1c;
        case 0x123c20u: goto label_123c20;
        case 0x123c24u: goto label_123c24;
        case 0x123c28u: goto label_123c28;
        case 0x123c2cu: goto label_123c2c;
        case 0x123c30u: goto label_123c30;
        case 0x123c34u: goto label_123c34;
        case 0x123c38u: goto label_123c38;
        case 0x123c3cu: goto label_123c3c;
        case 0x123c40u: goto label_123c40;
        case 0x123c44u: goto label_123c44;
        case 0x123c48u: goto label_123c48;
        case 0x123c4cu: goto label_123c4c;
        case 0x123c50u: goto label_123c50;
        case 0x123c54u: goto label_123c54;
        case 0x123c58u: goto label_123c58;
        case 0x123c5cu: goto label_123c5c;
        case 0x123c60u: goto label_123c60;
        case 0x123c64u: goto label_123c64;
        case 0x123c68u: goto label_123c68;
        case 0x123c6cu: goto label_123c6c;
        case 0x123c70u: goto label_123c70;
        case 0x123c74u: goto label_123c74;
        case 0x123c78u: goto label_123c78;
        case 0x123c7cu: goto label_123c7c;
        case 0x123c80u: goto label_123c80;
        case 0x123c84u: goto label_123c84;
        case 0x123c88u: goto label_123c88;
        case 0x123c8cu: goto label_123c8c;
        case 0x123c90u: goto label_123c90;
        case 0x123c94u: goto label_123c94;
        case 0x123c98u: goto label_123c98;
        case 0x123c9cu: goto label_123c9c;
        case 0x123ca0u: goto label_123ca0;
        case 0x123ca4u: goto label_123ca4;
        case 0x123ca8u: goto label_123ca8;
        case 0x123cacu: goto label_123cac;
        case 0x123cb0u: goto label_123cb0;
        case 0x123cb4u: goto label_123cb4;
        case 0x123cb8u: goto label_123cb8;
        case 0x123cbcu: goto label_123cbc;
        case 0x123cc0u: goto label_123cc0;
        case 0x123cc4u: goto label_123cc4;
        case 0x123cc8u: goto label_123cc8;
        case 0x123cccu: goto label_123ccc;
        case 0x123cd0u: goto label_123cd0;
        case 0x123cd4u: goto label_123cd4;
        case 0x123cd8u: goto label_123cd8;
        case 0x123cdcu: goto label_123cdc;
        case 0x123ce0u: goto label_123ce0;
        case 0x123ce4u: goto label_123ce4;
        case 0x123ce8u: goto label_123ce8;
        case 0x123cecu: goto label_123cec;
        case 0x123cf0u: goto label_123cf0;
        case 0x123cf4u: goto label_123cf4;
        case 0x123cf8u: goto label_123cf8;
        case 0x123cfcu: goto label_123cfc;
        case 0x123d00u: goto label_123d00;
        case 0x123d04u: goto label_123d04;
        case 0x123d08u: goto label_123d08;
        case 0x123d0cu: goto label_123d0c;
        case 0x123d10u: goto label_123d10;
        case 0x123d14u: goto label_123d14;
        case 0x123d18u: goto label_123d18;
        case 0x123d1cu: goto label_123d1c;
        case 0x123d20u: goto label_123d20;
        case 0x123d24u: goto label_123d24;
        case 0x123d28u: goto label_123d28;
        case 0x123d2cu: goto label_123d2c;
        case 0x123d30u: goto label_123d30;
        case 0x123d34u: goto label_123d34;
        case 0x123d38u: goto label_123d38;
        case 0x123d3cu: goto label_123d3c;
        case 0x123d40u: goto label_123d40;
        case 0x123d44u: goto label_123d44;
        case 0x123d48u: goto label_123d48;
        case 0x123d4cu: goto label_123d4c;
        case 0x123d50u: goto label_123d50;
        case 0x123d54u: goto label_123d54;
        case 0x123d58u: goto label_123d58;
        case 0x123d5cu: goto label_123d5c;
        case 0x123d60u: goto label_123d60;
        case 0x123d64u: goto label_123d64;
        case 0x123d68u: goto label_123d68;
        case 0x123d6cu: goto label_123d6c;
        case 0x123d70u: goto label_123d70;
        case 0x123d74u: goto label_123d74;
        case 0x123d78u: goto label_123d78;
        case 0x123d7cu: goto label_123d7c;
        case 0x123d80u: goto label_123d80;
        case 0x123d84u: goto label_123d84;
        case 0x123d88u: goto label_123d88;
        case 0x123d8cu: goto label_123d8c;
        case 0x123d90u: goto label_123d90;
        case 0x123d94u: goto label_123d94;
        case 0x123d98u: goto label_123d98;
        case 0x123d9cu: goto label_123d9c;
        case 0x123da0u: goto label_123da0;
        case 0x123da4u: goto label_123da4;
        case 0x123da8u: goto label_123da8;
        case 0x123dacu: goto label_123dac;
        case 0x123db0u: goto label_123db0;
        case 0x123db4u: goto label_123db4;
        case 0x123db8u: goto label_123db8;
        case 0x123dbcu: goto label_123dbc;
        case 0x123dc0u: goto label_123dc0;
        case 0x123dc4u: goto label_123dc4;
        case 0x123dc8u: goto label_123dc8;
        case 0x123dccu: goto label_123dcc;
        case 0x123dd0u: goto label_123dd0;
        case 0x123dd4u: goto label_123dd4;
        case 0x123dd8u: goto label_123dd8;
        case 0x123ddcu: goto label_123ddc;
        case 0x123de0u: goto label_123de0;
        case 0x123de4u: goto label_123de4;
        case 0x123de8u: goto label_123de8;
        case 0x123decu: goto label_123dec;
        case 0x123df0u: goto label_123df0;
        case 0x123df4u: goto label_123df4;
        case 0x123df8u: goto label_123df8;
        case 0x123dfcu: goto label_123dfc;
        case 0x123e00u: goto label_123e00;
        case 0x123e04u: goto label_123e04;
        case 0x123e08u: goto label_123e08;
        case 0x123e0cu: goto label_123e0c;
        case 0x123e10u: goto label_123e10;
        case 0x123e14u: goto label_123e14;
        case 0x123e18u: goto label_123e18;
        case 0x123e1cu: goto label_123e1c;
        case 0x123e20u: goto label_123e20;
        case 0x123e24u: goto label_123e24;
        case 0x123e28u: goto label_123e28;
        case 0x123e2cu: goto label_123e2c;
        case 0x123e30u: goto label_123e30;
        case 0x123e34u: goto label_123e34;
        case 0x123e38u: goto label_123e38;
        case 0x123e3cu: goto label_123e3c;
        case 0x123e40u: goto label_123e40;
        case 0x123e44u: goto label_123e44;
        case 0x123e48u: goto label_123e48;
        case 0x123e4cu: goto label_123e4c;
        case 0x123e50u: goto label_123e50;
        case 0x123e54u: goto label_123e54;
        case 0x123e58u: goto label_123e58;
        case 0x123e5cu: goto label_123e5c;
        case 0x123e60u: goto label_123e60;
        case 0x123e64u: goto label_123e64;
        case 0x123e68u: goto label_123e68;
        case 0x123e6cu: goto label_123e6c;
        case 0x123e70u: goto label_123e70;
        case 0x123e74u: goto label_123e74;
        case 0x123e78u: goto label_123e78;
        case 0x123e7cu: goto label_123e7c;
        case 0x123e80u: goto label_123e80;
        case 0x123e84u: goto label_123e84;
        case 0x123e88u: goto label_123e88;
        case 0x123e8cu: goto label_123e8c;
        case 0x123e90u: goto label_123e90;
        case 0x123e94u: goto label_123e94;
        case 0x123e98u: goto label_123e98;
        case 0x123e9cu: goto label_123e9c;
        case 0x123ea0u: goto label_123ea0;
        case 0x123ea4u: goto label_123ea4;
        case 0x123ea8u: goto label_123ea8;
        case 0x123eacu: goto label_123eac;
        case 0x123eb0u: goto label_123eb0;
        case 0x123eb4u: goto label_123eb4;
        case 0x123eb8u: goto label_123eb8;
        case 0x123ebcu: goto label_123ebc;
        case 0x123ec0u: goto label_123ec0;
        case 0x123ec4u: goto label_123ec4;
        case 0x123ec8u: goto label_123ec8;
        case 0x123eccu: goto label_123ecc;
        case 0x123ed0u: goto label_123ed0;
        case 0x123ed4u: goto label_123ed4;
        case 0x123ed8u: goto label_123ed8;
        case 0x123edcu: goto label_123edc;
        case 0x123ee0u: goto label_123ee0;
        case 0x123ee4u: goto label_123ee4;
        case 0x123ee8u: goto label_123ee8;
        case 0x123eecu: goto label_123eec;
        case 0x123ef0u: goto label_123ef0;
        case 0x123ef4u: goto label_123ef4;
        case 0x123ef8u: goto label_123ef8;
        case 0x123efcu: goto label_123efc;
        case 0x123f00u: goto label_123f00;
        case 0x123f04u: goto label_123f04;
        case 0x123f08u: goto label_123f08;
        case 0x123f0cu: goto label_123f0c;
        case 0x123f10u: goto label_123f10;
        case 0x123f14u: goto label_123f14;
        case 0x123f18u: goto label_123f18;
        case 0x123f1cu: goto label_123f1c;
        case 0x123f20u: goto label_123f20;
        case 0x123f24u: goto label_123f24;
        case 0x123f28u: goto label_123f28;
        case 0x123f2cu: goto label_123f2c;
        case 0x123f30u: goto label_123f30;
        case 0x123f34u: goto label_123f34;
        case 0x123f38u: goto label_123f38;
        case 0x123f3cu: goto label_123f3c;
        case 0x123f40u: goto label_123f40;
        case 0x123f44u: goto label_123f44;
        case 0x123f48u: goto label_123f48;
        case 0x123f4cu: goto label_123f4c;
        case 0x123f50u: goto label_123f50;
        case 0x123f54u: goto label_123f54;
        case 0x123f58u: goto label_123f58;
        case 0x123f5cu: goto label_123f5c;
        case 0x123f60u: goto label_123f60;
        case 0x123f64u: goto label_123f64;
        case 0x123f68u: goto label_123f68;
        case 0x123f6cu: goto label_123f6c;
        case 0x123f70u: goto label_123f70;
        case 0x123f74u: goto label_123f74;
        case 0x123f78u: goto label_123f78;
        case 0x123f7cu: goto label_123f7c;
        case 0x123f80u: goto label_123f80;
        case 0x123f84u: goto label_123f84;
        case 0x123f88u: goto label_123f88;
        case 0x123f8cu: goto label_123f8c;
        case 0x123f90u: goto label_123f90;
        case 0x123f94u: goto label_123f94;
        case 0x123f98u: goto label_123f98;
        case 0x123f9cu: goto label_123f9c;
        case 0x123fa0u: goto label_123fa0;
        case 0x123fa4u: goto label_123fa4;
        case 0x123fa8u: goto label_123fa8;
        case 0x123facu: goto label_123fac;
        case 0x123fb0u: goto label_123fb0;
        case 0x123fb4u: goto label_123fb4;
        case 0x123fb8u: goto label_123fb8;
        case 0x123fbcu: goto label_123fbc;
        case 0x123fc0u: goto label_123fc0;
        case 0x123fc4u: goto label_123fc4;
        case 0x123fc8u: goto label_123fc8;
        case 0x123fccu: goto label_123fcc;
        case 0x123fd0u: goto label_123fd0;
        case 0x123fd4u: goto label_123fd4;
        case 0x123fd8u: goto label_123fd8;
        case 0x123fdcu: goto label_123fdc;
        case 0x123fe0u: goto label_123fe0;
        case 0x123fe4u: goto label_123fe4;
        case 0x123fe8u: goto label_123fe8;
        case 0x123fecu: goto label_123fec;
        case 0x123ff0u: goto label_123ff0;
        case 0x123ff4u: goto label_123ff4;
        case 0x123ff8u: goto label_123ff8;
        case 0x123ffcu: goto label_123ffc;
        case 0x124000u: goto label_124000;
        case 0x124004u: goto label_124004;
        case 0x124008u: goto label_124008;
        case 0x12400cu: goto label_12400c;
        case 0x124010u: goto label_124010;
        case 0x124014u: goto label_124014;
        case 0x124018u: goto label_124018;
        case 0x12401cu: goto label_12401c;
        case 0x124020u: goto label_124020;
        case 0x124024u: goto label_124024;
        case 0x124028u: goto label_124028;
        case 0x12402cu: goto label_12402c;
        case 0x124030u: goto label_124030;
        case 0x124034u: goto label_124034;
        case 0x124038u: goto label_124038;
        case 0x12403cu: goto label_12403c;
        case 0x124040u: goto label_124040;
        case 0x124044u: goto label_124044;
        case 0x124048u: goto label_124048;
        case 0x12404cu: goto label_12404c;
        case 0x124050u: goto label_124050;
        case 0x124054u: goto label_124054;
        case 0x124058u: goto label_124058;
        case 0x12405cu: goto label_12405c;
        case 0x124060u: goto label_124060;
        case 0x124064u: goto label_124064;
        case 0x124068u: goto label_124068;
        case 0x12406cu: goto label_12406c;
        case 0x124070u: goto label_124070;
        case 0x124074u: goto label_124074;
        case 0x124078u: goto label_124078;
        case 0x12407cu: goto label_12407c;
        case 0x124080u: goto label_124080;
        case 0x124084u: goto label_124084;
        case 0x124088u: goto label_124088;
        case 0x12408cu: goto label_12408c;
        case 0x124090u: goto label_124090;
        case 0x124094u: goto label_124094;
        case 0x124098u: goto label_124098;
        case 0x12409cu: goto label_12409c;
        case 0x1240a0u: goto label_1240a0;
        case 0x1240a4u: goto label_1240a4;
        case 0x1240a8u: goto label_1240a8;
        case 0x1240acu: goto label_1240ac;
        case 0x1240b0u: goto label_1240b0;
        case 0x1240b4u: goto label_1240b4;
        case 0x1240b8u: goto label_1240b8;
        case 0x1240bcu: goto label_1240bc;
        case 0x1240c0u: goto label_1240c0;
        case 0x1240c4u: goto label_1240c4;
        case 0x1240c8u: goto label_1240c8;
        case 0x1240ccu: goto label_1240cc;
        case 0x1240d0u: goto label_1240d0;
        case 0x1240d4u: goto label_1240d4;
        case 0x1240d8u: goto label_1240d8;
        case 0x1240dcu: goto label_1240dc;
        case 0x1240e0u: goto label_1240e0;
        case 0x1240e4u: goto label_1240e4;
        case 0x1240e8u: goto label_1240e8;
        case 0x1240ecu: goto label_1240ec;
        case 0x1240f0u: goto label_1240f0;
        case 0x1240f4u: goto label_1240f4;
        case 0x1240f8u: goto label_1240f8;
        case 0x1240fcu: goto label_1240fc;
        case 0x124100u: goto label_124100;
        case 0x124104u: goto label_124104;
        case 0x124108u: goto label_124108;
        case 0x12410cu: goto label_12410c;
        case 0x124110u: goto label_124110;
        case 0x124114u: goto label_124114;
        case 0x124118u: goto label_124118;
        case 0x12411cu: goto label_12411c;
        case 0x124120u: goto label_124120;
        case 0x124124u: goto label_124124;
        case 0x124128u: goto label_124128;
        case 0x12412cu: goto label_12412c;
        case 0x124130u: goto label_124130;
        case 0x124134u: goto label_124134;
        case 0x124138u: goto label_124138;
        case 0x12413cu: goto label_12413c;
        case 0x124140u: goto label_124140;
        case 0x124144u: goto label_124144;
        case 0x124148u: goto label_124148;
        case 0x12414cu: goto label_12414c;
        case 0x124150u: goto label_124150;
        case 0x124154u: goto label_124154;
        case 0x124158u: goto label_124158;
        case 0x12415cu: goto label_12415c;
        case 0x124160u: goto label_124160;
        case 0x124164u: goto label_124164;
        case 0x124168u: goto label_124168;
        case 0x12416cu: goto label_12416c;
        case 0x124170u: goto label_124170;
        case 0x124174u: goto label_124174;
        case 0x124178u: goto label_124178;
        case 0x12417cu: goto label_12417c;
        case 0x124180u: goto label_124180;
        case 0x124184u: goto label_124184;
        case 0x124188u: goto label_124188;
        case 0x12418cu: goto label_12418c;
        case 0x124190u: goto label_124190;
        case 0x124194u: goto label_124194;
        case 0x124198u: goto label_124198;
        case 0x12419cu: goto label_12419c;
        case 0x1241a0u: goto label_1241a0;
        case 0x1241a4u: goto label_1241a4;
        case 0x1241a8u: goto label_1241a8;
        case 0x1241acu: goto label_1241ac;
        case 0x1241b0u: goto label_1241b0;
        case 0x1241b4u: goto label_1241b4;
        case 0x1241b8u: goto label_1241b8;
        case 0x1241bcu: goto label_1241bc;
        case 0x1241c0u: goto label_1241c0;
        case 0x1241c4u: goto label_1241c4;
        case 0x1241c8u: goto label_1241c8;
        case 0x1241ccu: goto label_1241cc;
        case 0x1241d0u: goto label_1241d0;
        case 0x1241d4u: goto label_1241d4;
        case 0x1241d8u: goto label_1241d8;
        case 0x1241dcu: goto label_1241dc;
        case 0x1241e0u: goto label_1241e0;
        case 0x1241e4u: goto label_1241e4;
        case 0x1241e8u: goto label_1241e8;
        case 0x1241ecu: goto label_1241ec;
        case 0x1241f0u: goto label_1241f0;
        case 0x1241f4u: goto label_1241f4;
        case 0x1241f8u: goto label_1241f8;
        case 0x1241fcu: goto label_1241fc;
        case 0x124200u: goto label_124200;
        case 0x124204u: goto label_124204;
        case 0x124208u: goto label_124208;
        case 0x12420cu: goto label_12420c;
        case 0x124210u: goto label_124210;
        case 0x124214u: goto label_124214;
        case 0x124218u: goto label_124218;
        case 0x12421cu: goto label_12421c;
        case 0x124220u: goto label_124220;
        case 0x124224u: goto label_124224;
        case 0x124228u: goto label_124228;
        case 0x12422cu: goto label_12422c;
        case 0x124230u: goto label_124230;
        case 0x124234u: goto label_124234;
        case 0x124238u: goto label_124238;
        case 0x12423cu: goto label_12423c;
        case 0x124240u: goto label_124240;
        case 0x124244u: goto label_124244;
        case 0x124248u: goto label_124248;
        case 0x12424cu: goto label_12424c;
        case 0x124250u: goto label_124250;
        case 0x124254u: goto label_124254;
        case 0x124258u: goto label_124258;
        case 0x12425cu: goto label_12425c;
        case 0x124260u: goto label_124260;
        case 0x124264u: goto label_124264;
        case 0x124268u: goto label_124268;
        case 0x12426cu: goto label_12426c;
        case 0x124270u: goto label_124270;
        case 0x124274u: goto label_124274;
        case 0x124278u: goto label_124278;
        case 0x12427cu: goto label_12427c;
        case 0x124280u: goto label_124280;
        case 0x124284u: goto label_124284;
        case 0x124288u: goto label_124288;
        case 0x12428cu: goto label_12428c;
        case 0x124290u: goto label_124290;
        case 0x124294u: goto label_124294;
        case 0x124298u: goto label_124298;
        case 0x12429cu: goto label_12429c;
        case 0x1242a0u: goto label_1242a0;
        case 0x1242a4u: goto label_1242a4;
        case 0x1242a8u: goto label_1242a8;
        case 0x1242acu: goto label_1242ac;
        case 0x1242b0u: goto label_1242b0;
        case 0x1242b4u: goto label_1242b4;
        case 0x1242b8u: goto label_1242b8;
        case 0x1242bcu: goto label_1242bc;
        case 0x1242c0u: goto label_1242c0;
        case 0x1242c4u: goto label_1242c4;
        case 0x1242c8u: goto label_1242c8;
        case 0x1242ccu: goto label_1242cc;
        case 0x1242d0u: goto label_1242d0;
        case 0x1242d4u: goto label_1242d4;
        case 0x1242d8u: goto label_1242d8;
        case 0x1242dcu: goto label_1242dc;
        case 0x1242e0u: goto label_1242e0;
        case 0x1242e4u: goto label_1242e4;
        case 0x1242e8u: goto label_1242e8;
        case 0x1242ecu: goto label_1242ec;
        case 0x1242f0u: goto label_1242f0;
        case 0x1242f4u: goto label_1242f4;
        case 0x1242f8u: goto label_1242f8;
        case 0x1242fcu: goto label_1242fc;
        case 0x124300u: goto label_124300;
        case 0x124304u: goto label_124304;
        case 0x124308u: goto label_124308;
        case 0x12430cu: goto label_12430c;
        case 0x124310u: goto label_124310;
        case 0x124314u: goto label_124314;
        case 0x124318u: goto label_124318;
        case 0x12431cu: goto label_12431c;
        case 0x124320u: goto label_124320;
        case 0x124324u: goto label_124324;
        case 0x124328u: goto label_124328;
        case 0x12432cu: goto label_12432c;
        case 0x124330u: goto label_124330;
        case 0x124334u: goto label_124334;
        case 0x124338u: goto label_124338;
        case 0x12433cu: goto label_12433c;
        case 0x124340u: goto label_124340;
        case 0x124344u: goto label_124344;
        case 0x124348u: goto label_124348;
        case 0x12434cu: goto label_12434c;
        case 0x124350u: goto label_124350;
        case 0x124354u: goto label_124354;
        case 0x124358u: goto label_124358;
        case 0x12435cu: goto label_12435c;
        case 0x124360u: goto label_124360;
        case 0x124364u: goto label_124364;
        case 0x124368u: goto label_124368;
        case 0x12436cu: goto label_12436c;
        case 0x124370u: goto label_124370;
        case 0x124374u: goto label_124374;
        case 0x124378u: goto label_124378;
        case 0x12437cu: goto label_12437c;
        case 0x124380u: goto label_124380;
        case 0x124384u: goto label_124384;
        case 0x124388u: goto label_124388;
        case 0x12438cu: goto label_12438c;
        case 0x124390u: goto label_124390;
        case 0x124394u: goto label_124394;
        case 0x124398u: goto label_124398;
        case 0x12439cu: goto label_12439c;
        case 0x1243a0u: goto label_1243a0;
        case 0x1243a4u: goto label_1243a4;
        case 0x1243a8u: goto label_1243a8;
        case 0x1243acu: goto label_1243ac;
        case 0x1243b0u: goto label_1243b0;
        case 0x1243b4u: goto label_1243b4;
        case 0x1243b8u: goto label_1243b8;
        case 0x1243bcu: goto label_1243bc;
        case 0x1243c0u: goto label_1243c0;
        case 0x1243c4u: goto label_1243c4;
        case 0x1243c8u: goto label_1243c8;
        case 0x1243ccu: goto label_1243cc;
        case 0x1243d0u: goto label_1243d0;
        case 0x1243d4u: goto label_1243d4;
        case 0x1243d8u: goto label_1243d8;
        case 0x1243dcu: goto label_1243dc;
        case 0x1243e0u: goto label_1243e0;
        case 0x1243e4u: goto label_1243e4;
        case 0x1243e8u: goto label_1243e8;
        case 0x1243ecu: goto label_1243ec;
        case 0x1243f0u: goto label_1243f0;
        case 0x1243f4u: goto label_1243f4;
        case 0x1243f8u: goto label_1243f8;
        case 0x1243fcu: goto label_1243fc;
        case 0x124400u: goto label_124400;
        case 0x124404u: goto label_124404;
        case 0x124408u: goto label_124408;
        case 0x12440cu: goto label_12440c;
        case 0x124410u: goto label_124410;
        case 0x124414u: goto label_124414;
        case 0x124418u: goto label_124418;
        case 0x12441cu: goto label_12441c;
        case 0x124420u: goto label_124420;
        case 0x124424u: goto label_124424;
        case 0x124428u: goto label_124428;
        case 0x12442cu: goto label_12442c;
        case 0x124430u: goto label_124430;
        case 0x124434u: goto label_124434;
        case 0x124438u: goto label_124438;
        case 0x12443cu: goto label_12443c;
        case 0x124440u: goto label_124440;
        case 0x124444u: goto label_124444;
        case 0x124448u: goto label_124448;
        case 0x12444cu: goto label_12444c;
        case 0x124450u: goto label_124450;
        case 0x124454u: goto label_124454;
        case 0x124458u: goto label_124458;
        case 0x12445cu: goto label_12445c;
        case 0x124460u: goto label_124460;
        case 0x124464u: goto label_124464;
        case 0x124468u: goto label_124468;
        case 0x12446cu: goto label_12446c;
        case 0x124470u: goto label_124470;
        case 0x124474u: goto label_124474;
        case 0x124478u: goto label_124478;
        case 0x12447cu: goto label_12447c;
        case 0x124480u: goto label_124480;
        case 0x124484u: goto label_124484;
        case 0x124488u: goto label_124488;
        case 0x12448cu: goto label_12448c;
        case 0x124490u: goto label_124490;
        case 0x124494u: goto label_124494;
        case 0x124498u: goto label_124498;
        case 0x12449cu: goto label_12449c;
        case 0x1244a0u: goto label_1244a0;
        case 0x1244a4u: goto label_1244a4;
        case 0x1244a8u: goto label_1244a8;
        case 0x1244acu: goto label_1244ac;
        case 0x1244b0u: goto label_1244b0;
        case 0x1244b4u: goto label_1244b4;
        case 0x1244b8u: goto label_1244b8;
        case 0x1244bcu: goto label_1244bc;
        case 0x1244c0u: goto label_1244c0;
        case 0x1244c4u: goto label_1244c4;
        case 0x1244c8u: goto label_1244c8;
        case 0x1244ccu: goto label_1244cc;
        case 0x1244d0u: goto label_1244d0;
        case 0x1244d4u: goto label_1244d4;
        case 0x1244d8u: goto label_1244d8;
        case 0x1244dcu: goto label_1244dc;
        case 0x1244e0u: goto label_1244e0;
        case 0x1244e4u: goto label_1244e4;
        case 0x1244e8u: goto label_1244e8;
        case 0x1244ecu: goto label_1244ec;
        case 0x1244f0u: goto label_1244f0;
        case 0x1244f4u: goto label_1244f4;
        case 0x1244f8u: goto label_1244f8;
        case 0x1244fcu: goto label_1244fc;
        case 0x124500u: goto label_124500;
        case 0x124504u: goto label_124504;
        case 0x124508u: goto label_124508;
        case 0x12450cu: goto label_12450c;
        case 0x124510u: goto label_124510;
        case 0x124514u: goto label_124514;
        case 0x124518u: goto label_124518;
        case 0x12451cu: goto label_12451c;
        case 0x124520u: goto label_124520;
        case 0x124524u: goto label_124524;
        case 0x124528u: goto label_124528;
        case 0x12452cu: goto label_12452c;
        case 0x124530u: goto label_124530;
        case 0x124534u: goto label_124534;
        case 0x124538u: goto label_124538;
        case 0x12453cu: goto label_12453c;
        default: break;
    }

    ctx->pc = 0x123938u;

label_123938:
    // 0x123938: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x123938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_12393c:
    // 0x12393c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x12393cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_123940:
    // 0x123940: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x123940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_123944:
    // 0x123944: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123948:
    // 0x123948: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x123948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_12394c:
    // 0x12394c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12394cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_123950:
    // 0x123950: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x123950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_123954:
    // 0x123954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x123954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_123958:
    // 0x123958: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x123958u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_12395c:
    // 0x12395c: 0x8e2515f4  lw          $a1, 0x15F4($s1)
    ctx->pc = 0x12395cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_123960:
    // 0x123960: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x123960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_123964:
    // 0x123964: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_123968:
    if (ctx->pc == 0x123968u) {
        ctx->pc = 0x123968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123964u;
        // 0x123968: 0x30a20200  andi        $v0, $a1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12396Cu;
        goto label_12396c;
    }
    ctx->pc = 0x123964u;
    {
        const bool branch_taken_0x123964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123964u;
        // 0x123968: 0x30a20200  andi        $v0, $a1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123964) {
            ctx->pc = 0x123A0Cu;
            goto label_123a0c;
        }
    }
    ctx->pc = 0x12396Cu;
label_12396c:
    // 0x12396c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x12396cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_123970:
    // 0x123970: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x123970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_123974:
    // 0x123974: 0x2493b000  addiu       $s3, $a0, -0x5000
    ctx->pc = 0x123974u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_123978:
    // 0x123978: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x123978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_12397c:
    // 0x12397c: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x12397cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_123980:
    // 0x123980: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x123980u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_123984:
    // 0x123984: 0x3800b  movn        $s0, $zero, $v1
    ctx->pc = 0x123984u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_123988:
    // 0x123988: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x123988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12398c:
    // 0x12398c: 0xc0aa6b4  jal         func_2A9AD0
label_123990:
    if (ctx->pc == 0x123990u) {
        ctx->pc = 0x123990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12398Cu;
        // 0x123990: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123994u;
        goto label_123994;
    }
    ctx->pc = 0x12398Cu;
    SET_GPR_U32(ctx, 31, 0x123994u);
    ctx->pc = 0x123990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12398Cu;
    // 0x123990: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9AD0u, 0x12398Cu, 0x123994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123994u;
label_123994:
    // 0x123994: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_123998:
    if (ctx->pc == 0x123998u) {
        ctx->pc = 0x12399Cu;
        goto label_12399c;
    }
    ctx->pc = 0x123994u;
    {
        const bool branch_taken_0x123994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123994) {
            ctx->pc = 0x123A0Cu;
            goto label_123a0c;
        }
    }
    ctx->pc = 0x12399Cu;
label_12399c:
    // 0x12399c: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_1239a0:
    if (ctx->pc == 0x1239A0u) {
        ctx->pc = 0x1239A4u;
        goto label_1239a4;
    }
    ctx->pc = 0x12399Cu;
    {
        const bool branch_taken_0x12399c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12399c) {
            ctx->pc = 0x123A0Cu;
            goto label_123a0c;
        }
    }
    ctx->pc = 0x1239A4u;
label_1239a4:
    // 0x1239a4: 0xde2202f0  ld          $v0, 0x2F0($s1)
    ctx->pc = 0x1239a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
label_1239a8:
    // 0x1239a8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1239a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1239ac:
    // 0x1239ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1239acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1239b0:
    // 0x1239b0: 0x34049000  ori         $a0, $zero, 0x9000
    ctx->pc = 0x1239b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
label_1239b4:
    // 0x1239b4: 0x42738  dsll        $a0, $a0, 28
    ctx->pc = 0x1239b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 28);
label_1239b8:
    // 0x1239b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1239b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1239bc:
    // 0x1239bc: 0x10440013  beq         $v0, $a0, . + 4 + (0x13 << 2)
label_1239c0:
    if (ctx->pc == 0x1239C0u) {
        ctx->pc = 0x1239C4u;
        goto label_1239c4;
    }
    ctx->pc = 0x1239BCu;
    {
        const bool branch_taken_0x1239bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1239bc) {
            ctx->pc = 0x123A0Cu;
            goto label_123a0c;
        }
    }
    ctx->pc = 0x1239C4u;
label_1239c4:
    // 0x1239c4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_1239c8:
    if (ctx->pc == 0x1239C8u) {
        ctx->pc = 0x1239C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239C4u;
        // 0x1239c8: 0x962303ac  lhu         $v1, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1239CCu;
        goto label_1239cc;
    }
    ctx->pc = 0x1239C4u;
    {
        const bool branch_taken_0x1239c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1239C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239C4u;
        // 0x1239c8: 0x962303ac  lhu         $v1, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1239c4) {
            ctx->pc = 0x1239D8u;
            goto label_1239d8;
        }
    }
    ctx->pc = 0x1239CCu;
label_1239cc:
    // 0x1239cc: 0x30620070  andi        $v0, $v1, 0x70
    ctx->pc = 0x1239ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)112);
label_1239d0:
    // 0x1239d0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1239d4:
    if (ctx->pc == 0x1239D4u) {
        ctx->pc = 0x1239D8u;
        goto label_1239d8;
    }
    ctx->pc = 0x1239D0u;
    {
        const bool branch_taken_0x1239d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1239d0) {
            ctx->pc = 0x123A0Cu;
            goto label_123a0c;
        }
    }
    ctx->pc = 0x1239D8u;
label_1239d8:
    // 0x1239d8: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x1239d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_1239dc:
    // 0x1239dc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1239e0:
    if (ctx->pc == 0x1239E0u) {
        ctx->pc = 0x1239E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239DCu;
        // 0x1239e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1239E4u;
        goto label_1239e4;
    }
    ctx->pc = 0x1239DCu;
    {
        const bool branch_taken_0x1239dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1239E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239DCu;
        // 0x1239e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1239dc) {
            ctx->pc = 0x123A0Cu;
            goto label_123a0c;
        }
    }
    ctx->pc = 0x1239E4u;
label_1239e4:
    // 0x1239e4: 0xc0aa732  jal         func_2A9CC8
label_1239e8:
    if (ctx->pc == 0x1239E8u) {
        ctx->pc = 0x1239E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239E4u;
        // 0x1239e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1239ECu;
        goto label_1239ec;
    }
    ctx->pc = 0x1239E4u;
    SET_GPR_U32(ctx, 31, 0x1239ECu);
    ctx->pc = 0x1239E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1239E4u;
    // 0x1239e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9CC8u, 0x1239E4u, 0x1239ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1239ECu;
label_1239ec:
    // 0x1239ec: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1239ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1239f0:
    // 0x1239f0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1239f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1239f4:
    // 0x1239f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1239f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1239f8:
    // 0x1239f8: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x1239f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_1239fc:
    // 0x1239fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1239fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123a00:
    // 0x123a00: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x123a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
label_123a04:
    // 0x123a04: 0x100002b4  b           . + 4 + (0x2B4 << 2)
label_123a08:
    if (ctx->pc == 0x123A08u) {
        ctx->pc = 0x123A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A04u;
        // 0x123a08: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A0Cu;
        goto label_123a0c;
    }
    ctx->pc = 0x123A04u;
    {
        const bool branch_taken_0x123a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A04u;
        // 0x123a08: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a04) {
            ctx->pc = 0x1244D8u;
            goto label_1244d8;
        }
    }
    ctx->pc = 0x123A0Cu;
label_123a0c:
    // 0x123a0c: 0x56400016  bnel        $s2, $zero, . + 4 + (0x16 << 2)
label_123a10:
    if (ctx->pc == 0x123A10u) {
        ctx->pc = 0x123A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A0Cu;
        // 0x123a10: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A14u;
        goto label_123a14;
    }
    ctx->pc = 0x123A0Cu;
    {
        const bool branch_taken_0x123a0c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x123a0c) {
            ctx->pc = 0x123A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123A0Cu;
            // 0x123a10: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123A68u;
            goto label_123a68;
        }
    }
    ctx->pc = 0x123A14u;
label_123a14:
    // 0x123a14: 0x8e2415f4  lw          $a0, 0x15F4($s1)
    ctx->pc = 0x123a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_123a18:
    // 0x123a18: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x123a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_123a1c:
    // 0x123a1c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_123a20:
    if (ctx->pc == 0x123A20u) {
        ctx->pc = 0x123A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A1Cu;
        // 0x123a20: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A24u;
        goto label_123a24;
    }
    ctx->pc = 0x123A1Cu;
    {
        const bool branch_taken_0x123a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A1Cu;
        // 0x123a20: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a1c) {
            ctx->pc = 0x123A5Cu;
            goto label_123a5c;
        }
    }
    ctx->pc = 0x123A24u;
label_123a24:
    // 0x123a24: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x123a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
label_123a28:
    // 0x123a28: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_123a2c:
    if (ctx->pc == 0x123A2Cu) {
        ctx->pc = 0x123A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A28u;
        // 0x123a2c: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A30u;
        goto label_123a30;
    }
    ctx->pc = 0x123A28u;
    {
        const bool branch_taken_0x123a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x123A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A28u;
        // 0x123a2c: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a28) {
            ctx->pc = 0x123A5Cu;
            goto label_123a5c;
        }
    }
    ctx->pc = 0x123A30u;
label_123a30:
    // 0x123a30: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_123a34:
    if (ctx->pc == 0x123A34u) {
        ctx->pc = 0x123A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A30u;
        // 0x123a34: 0x34820020  ori         $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A38u;
        goto label_123a38;
    }
    ctx->pc = 0x123A30u;
    {
        const bool branch_taken_0x123a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A30u;
        // 0x123a34: 0x34820020  ori         $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a30) {
            ctx->pc = 0x123A5Cu;
            goto label_123a5c;
        }
    }
    ctx->pc = 0x123A38u;
label_123a38:
    // 0x123a38: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x123a38u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_123a3c:
    // 0x123a3c: 0xae2215f4  sw          $v0, 0x15F4($s1)
    ctx->pc = 0x123a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
label_123a40:
    // 0x123a40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x123a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123a44:
    // 0x123a44: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x123a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_123a48:
    // 0x123a48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x123a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123a4c:
    // 0x123a4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x123a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123a50:
    // 0x123a50: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x123a50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_123a54:
    // 0x123a54: 0xc0c194a  jal         func_306528
label_123a58:
    if (ctx->pc == 0x123A58u) {
        ctx->pc = 0x123A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A54u;
        // 0x123a58: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A5Cu;
        goto label_123a5c;
    }
    ctx->pc = 0x123A54u;
    SET_GPR_U32(ctx, 31, 0x123A5Cu);
    ctx->pc = 0x123A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123A54u;
    // 0x123a58: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x123A54u, 0x123A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A5Cu;
label_123a5c:
    // 0x123a5c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_123a60:
    if (ctx->pc == 0x123A60u) {
        ctx->pc = 0x123A64u;
        goto label_123a64;
    }
    ctx->pc = 0x123A5Cu;
    {
        const bool branch_taken_0x123a5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x123a5c) {
            ctx->pc = 0x123A74u;
            goto label_123a74;
        }
    }
    ctx->pc = 0x123A64u;
label_123a64:
    // 0x123a64: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x123a64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_123a68:
    // 0x123a68: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x123a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_123a6c:
    // 0x123a6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_123a70:
    if (ctx->pc == 0x123A70u) {
        ctx->pc = 0x123A74u;
        goto label_123a74;
    }
    ctx->pc = 0x123A6Cu;
    {
        const bool branch_taken_0x123a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123a6c) {
            ctx->pc = 0x123A84u;
            goto label_123a84;
        }
    }
    ctx->pc = 0x123A74u;
label_123a74:
    // 0x123a74: 0xc045a76  jal         func_1169D8
label_123a78:
    if (ctx->pc == 0x123A78u) {
        ctx->pc = 0x123A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A74u;
        // 0x123a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A7Cu;
        goto label_123a7c;
    }
    ctx->pc = 0x123A74u;
    SET_GPR_U32(ctx, 31, 0x123A7Cu);
    ctx->pc = 0x123A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123A74u;
    // 0x123a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1169D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1169D8u, 0x123A74u, 0x123A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A7Cu;
label_123a7c:
    // 0x123a7c: 0x144002a7  bnez        $v0, . + 4 + (0x2A7 << 2)
label_123a80:
    if (ctx->pc == 0x123A80u) {
        ctx->pc = 0x123A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A7Cu;
        // 0x123a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A84u;
        goto label_123a84;
    }
    ctx->pc = 0x123A7Cu;
    {
        const bool branch_taken_0x123a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A7Cu;
        // 0x123a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a7c) {
            ctx->pc = 0x12451Cu;
            goto label_12451c;
        }
    }
    ctx->pc = 0x123A84u;
label_123a84:
    // 0x123a84: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_123a88:
    if (ctx->pc == 0x123A88u) {
        ctx->pc = 0x123A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A84u;
        // 0x123a88: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A8Cu;
        goto label_123a8c;
    }
    ctx->pc = 0x123A84u;
    {
        const bool branch_taken_0x123a84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x123A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A84u;
        // 0x123a88: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a84) {
            ctx->pc = 0x123A9Cu;
            goto label_123a9c;
        }
    }
    ctx->pc = 0x123A8Cu;
label_123a8c:
    // 0x123a8c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x123a8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_123a90:
    // 0x123a90: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x123a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_123a94:
    // 0x123a94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_123a98:
    if (ctx->pc == 0x123A98u) {
        ctx->pc = 0x123A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A94u;
        // 0x123a98: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123A9Cu;
        goto label_123a9c;
    }
    ctx->pc = 0x123A94u;
    {
        const bool branch_taken_0x123a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A94u;
        // 0x123a98: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a94) {
            ctx->pc = 0x123AB0u;
            goto label_123ab0;
        }
    }
    ctx->pc = 0x123A9Cu;
label_123a9c:
    // 0x123a9c: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x123a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_123aa0:
    // 0x123aa0: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x123aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_123aa4:
    // 0x123aa4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x123aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_123aa8:
    // 0x123aa8: 0x5460028e  bnel        $v1, $zero, . + 4 + (0x28E << 2)
label_123aac:
    if (ctx->pc == 0x123AACu) {
        ctx->pc = 0x123AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AA8u;
        // 0x123aac: 0xde2202f0  ld          $v0, 0x2F0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123AB0u;
        goto label_123ab0;
    }
    ctx->pc = 0x123AA8u;
    {
        const bool branch_taken_0x123aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x123aa8) {
            ctx->pc = 0x123AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123AA8u;
            // 0x123aac: 0xde2202f0  ld          $v0, 0x2F0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1244E4u;
            goto label_1244e4;
        }
    }
    ctx->pc = 0x123AB0u;
label_123ab0:
    // 0x123ab0: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
label_123ab4:
    if (ctx->pc == 0x123AB4u) {
        ctx->pc = 0x123AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AB0u;
        // 0x123ab4: 0x8e2415f4  lw          $a0, 0x15F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123AB8u;
        goto label_123ab8;
    }
    ctx->pc = 0x123AB0u;
    {
        const bool branch_taken_0x123ab0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x123ab0) {
            ctx->pc = 0x123AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123AB0u;
            // 0x123ab4: 0x8e2415f4  lw          $a0, 0x15F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123ACCu;
            goto label_123acc;
        }
    }
    ctx->pc = 0x123AB8u;
label_123ab8:
    // 0x123ab8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x123ab8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_123abc:
    // 0x123abc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x123abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_123ac0:
    // 0x123ac0: 0x10400186  beqz        $v0, . + 4 + (0x186 << 2)
label_123ac4:
    if (ctx->pc == 0x123AC4u) {
        ctx->pc = 0x123AC8u;
        goto label_123ac8;
    }
    ctx->pc = 0x123AC0u;
    {
        const bool branch_taken_0x123ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123ac0) {
            ctx->pc = 0x1240DCu;
            goto label_1240dc;
        }
    }
    ctx->pc = 0x123AC8u;
label_123ac8:
    // 0x123ac8: 0x8e2415f4  lw          $a0, 0x15F4($s1)
    ctx->pc = 0x123ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_123acc:
    // 0x123acc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x123accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_123ad0:
    // 0x123ad0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x123ad0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_123ad4:
    // 0x123ad4: 0x34840400  ori         $a0, $a0, 0x400
    ctx->pc = 0x123ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
label_123ad8:
    // 0x123ad8: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x123ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
label_123adc:
    // 0x123adc: 0xae2415f4  sw          $a0, 0x15F4($s1)
    ctx->pc = 0x123adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 4));
label_123ae0:
    // 0x123ae0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x123ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_123ae4:
    // 0x123ae4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x123ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_123ae8:
    // 0x123ae8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_123aec:
    if (ctx->pc == 0x123AECu) {
        ctx->pc = 0x123AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AE8u;
        // 0x123aec: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123AF0u;
        goto label_123af0;
    }
    ctx->pc = 0x123AE8u;
    {
        const bool branch_taken_0x123ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AE8u;
        // 0x123aec: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ae8) {
            ctx->pc = 0x123B10u;
            goto label_123b10;
        }
    }
    ctx->pc = 0x123AF0u;
label_123af0:
    // 0x123af0: 0x2444b000  addiu       $a0, $v0, -0x5000
    ctx->pc = 0x123af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
label_123af4:
    // 0x123af4: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x123af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_123af8:
    // 0x123af8: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_123afc:
    if (ctx->pc == 0x123AFCu) {
        ctx->pc = 0x123AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AF8u;
        // 0x123afc: 0x82220624  lb          $v0, 0x624($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B00u;
        goto label_123b00;
    }
    ctx->pc = 0x123AF8u;
    {
        const bool branch_taken_0x123af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x123af8) {
            ctx->pc = 0x123AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123AF8u;
            // 0x123afc: 0x82220624  lb          $v0, 0x624($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123B14u;
            goto label_123b14;
        }
    }
    ctx->pc = 0x123B00u;
label_123b00:
    // 0x123b00: 0xc0aa6f0  jal         func_2A9BC0
label_123b04:
    if (ctx->pc == 0x123B04u) {
        ctx->pc = 0x123B08u;
        goto label_123b08;
    }
    ctx->pc = 0x123B00u;
    SET_GPR_U32(ctx, 31, 0x123B08u);
    ctx->pc = 0x2A9BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9BC0u, 0x123B00u, 0x123B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B08u;
label_123b08:
    // 0x123b08: 0x14400270  bnez        $v0, . + 4 + (0x270 << 2)
label_123b0c:
    if (ctx->pc == 0x123B0Cu) {
        ctx->pc = 0x123B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B08u;
        // 0x123b0c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B10u;
        goto label_123b10;
    }
    ctx->pc = 0x123B08u;
    {
        const bool branch_taken_0x123b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B08u;
        // 0x123b0c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b08) {
            ctx->pc = 0x1244CCu;
            goto label_1244cc;
        }
    }
    ctx->pc = 0x123B10u;
label_123b10:
    // 0x123b10: 0x82220624  lb          $v0, 0x624($s1)
    ctx->pc = 0x123b10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1572)));
label_123b14:
    // 0x123b14: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_123b18:
    if (ctx->pc == 0x123B18u) {
        ctx->pc = 0x123B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B14u;
        // 0x123b18: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B1Cu;
        goto label_123b1c;
    }
    ctx->pc = 0x123B14u;
    {
        const bool branch_taken_0x123b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123b14) {
            ctx->pc = 0x123B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123B14u;
            // 0x123b18: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123B40u;
            goto label_123b40;
        }
    }
    ctx->pc = 0x123B1Cu;
label_123b1c:
    // 0x123b1c: 0x8e2206a0  lw          $v0, 0x6A0($s1)
    ctx->pc = 0x123b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_123b20:
    // 0x123b20: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_123b24:
    if (ctx->pc == 0x123B24u) {
        ctx->pc = 0x123B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B20u;
        // 0x123b24: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B28u;
        goto label_123b28;
    }
    ctx->pc = 0x123B20u;
    {
        const bool branch_taken_0x123b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123b20) {
            ctx->pc = 0x123B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123B20u;
            // 0x123b24: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123B40u;
            goto label_123b40;
        }
    }
    ctx->pc = 0x123B28u;
label_123b28:
    // 0x123b28: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x123b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_123b2c:
    // 0x123b2c: 0xc07eb16  jal         func_1FAC58
label_123b30:
    if (ctx->pc == 0x123B30u) {
        ctx->pc = 0x123B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B2Cu;
        // 0x123b30: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B34u;
        goto label_123b34;
    }
    ctx->pc = 0x123B2Cu;
    SET_GPR_U32(ctx, 31, 0x123B34u);
    ctx->pc = 0x123B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B2Cu;
    // 0x123b30: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC58u, 0x123B2Cu, 0x123B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B34u;
label_123b34:
    // 0x123b34: 0x14400265  bnez        $v0, . + 4 + (0x265 << 2)
label_123b38:
    if (ctx->pc == 0x123B38u) {
        ctx->pc = 0x123B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B34u;
        // 0x123b38: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B3Cu;
        goto label_123b3c;
    }
    ctx->pc = 0x123B34u;
    {
        const bool branch_taken_0x123b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B34u;
        // 0x123b38: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b34) {
            ctx->pc = 0x1244CCu;
            goto label_1244cc;
        }
    }
    ctx->pc = 0x123B3Cu;
label_123b3c:
    // 0x123b3c: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x123b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_123b40:
    // 0x123b40: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_123b44:
    if (ctx->pc == 0x123B44u) {
        ctx->pc = 0x123B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B40u;
        // 0x123b44: 0x8e2206a0  lw          $v0, 0x6A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B48u;
        goto label_123b48;
    }
    ctx->pc = 0x123B40u;
    {
        const bool branch_taken_0x123b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123b40) {
            ctx->pc = 0x123B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123B40u;
            // 0x123b44: 0x8e2206a0  lw          $v0, 0x6A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123B80u;
            goto label_123b80;
        }
    }
    ctx->pc = 0x123B48u;
label_123b48:
    // 0x123b48: 0x82220622  lb          $v0, 0x622($s1)
    ctx->pc = 0x123b48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1570)));
label_123b4c:
    // 0x123b4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_123b50:
    if (ctx->pc == 0x123B50u) {
        ctx->pc = 0x123B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B4Cu;
        // 0x123b50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B54u;
        goto label_123b54;
    }
    ctx->pc = 0x123B4Cu;
    {
        const bool branch_taken_0x123b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B4Cu;
        // 0x123b50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b4c) {
            ctx->pc = 0x123B64u;
            goto label_123b64;
        }
    }
    ctx->pc = 0x123B54u;
label_123b54:
    // 0x123b54: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x123b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_123b58:
    // 0x123b58: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x123b58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
label_123b5c:
    // 0x123b5c: 0x1000025e  b           . + 4 + (0x25E << 2)
label_123b60:
    if (ctx->pc == 0x123B60u) {
        ctx->pc = 0x123B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B5Cu;
        // 0x123b60: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B64u;
        goto label_123b64;
    }
    ctx->pc = 0x123B5Cu;
    {
        const bool branch_taken_0x123b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B5Cu;
        // 0x123b60: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b5c) {
            ctx->pc = 0x1244D8u;
            goto label_1244d8;
        }
    }
    ctx->pc = 0x123B64u;
label_123b64:
    // 0x123b64: 0x82220621  lb          $v0, 0x621($s1)
    ctx->pc = 0x123b64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1569)));
label_123b68:
    // 0x123b68: 0x14400258  bnez        $v0, . + 4 + (0x258 << 2)
label_123b6c:
    if (ctx->pc == 0x123B6Cu) {
        ctx->pc = 0x123B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B68u;
        // 0x123b6c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B70u;
        goto label_123b70;
    }
    ctx->pc = 0x123B68u;
    {
        const bool branch_taken_0x123b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B68u;
        // 0x123b6c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b68) {
            ctx->pc = 0x1244CCu;
            goto label_1244cc;
        }
    }
    ctx->pc = 0x123B70u;
label_123b70:
    // 0x123b70: 0x82220623  lb          $v0, 0x623($s1)
    ctx->pc = 0x123b70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1571)));
label_123b74:
    // 0x123b74: 0x14400255  bnez        $v0, . + 4 + (0x255 << 2)
label_123b78:
    if (ctx->pc == 0x123B78u) {
        ctx->pc = 0x123B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B74u;
        // 0x123b78: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B7Cu;
        goto label_123b7c;
    }
    ctx->pc = 0x123B74u;
    {
        const bool branch_taken_0x123b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B74u;
        // 0x123b78: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b74) {
            ctx->pc = 0x1244CCu;
            goto label_1244cc;
        }
    }
    ctx->pc = 0x123B7Cu;
label_123b7c:
    // 0x123b7c: 0x8e2206a0  lw          $v0, 0x6A0($s1)
    ctx->pc = 0x123b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_123b80:
    // 0x123b80: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_123b84:
    if (ctx->pc == 0x123B84u) {
        ctx->pc = 0x123B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B80u;
        // 0x123b84: 0x962205e0  lhu         $v0, 0x5E0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1504)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123B88u;
        goto label_123b88;
    }
    ctx->pc = 0x123B80u;
    {
        const bool branch_taken_0x123b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123b80) {
            ctx->pc = 0x123B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123B80u;
            // 0x123b84: 0x962205e0  lhu         $v0, 0x5E0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123BA8u;
            goto label_123ba8;
        }
    }
    ctx->pc = 0x123B88u;
label_123b88:
    // 0x123b88: 0xde220620  ld          $v0, 0x620($s1)
    ctx->pc = 0x123b88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1568)));
label_123b8c:
    // 0x123b8c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x123b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_123b90:
    // 0x123b90: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x123b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_123b94:
    // 0x123b94: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x123b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_123b98:
    // 0x123b98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_123b9c:
    // 0x123b9c: 0x1440024b  bnez        $v0, . + 4 + (0x24B << 2)
label_123ba0:
    if (ctx->pc == 0x123BA0u) {
        ctx->pc = 0x123BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B9Cu;
        // 0x123ba0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123BA4u;
        goto label_123ba4;
    }
    ctx->pc = 0x123B9Cu;
    {
        const bool branch_taken_0x123b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B9Cu;
        // 0x123ba0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b9c) {
            ctx->pc = 0x1244CCu;
            goto label_1244cc;
        }
    }
    ctx->pc = 0x123BA4u;
label_123ba4:
    // 0x123ba4: 0x962205e0  lhu         $v0, 0x5E0($s1)
    ctx->pc = 0x123ba4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1504)));
label_123ba8:
    // 0x123ba8: 0x5440004c  bnel        $v0, $zero, . + 4 + (0x4C << 2)
label_123bac:
    if (ctx->pc == 0x123BACu) {
        ctx->pc = 0x123BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BA8u;
        // 0x123bac: 0x82220622  lb          $v0, 0x622($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1570)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123BB0u;
        goto label_123bb0;
    }
    ctx->pc = 0x123BA8u;
    {
        const bool branch_taken_0x123ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123ba8) {
            ctx->pc = 0x123BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123BA8u;
            // 0x123bac: 0x82220622  lb          $v0, 0x622($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1570)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123CDCu;
            goto label_123cdc;
        }
    }
    ctx->pc = 0x123BB0u;
label_123bb0:
    // 0x123bb0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x123bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_123bb4:
    // 0x123bb4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x123bb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_123bb8:
    // 0x123bb8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x123bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_123bbc:
    // 0x123bbc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x123bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_123bc0:
    // 0x123bc0: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x123bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_123bc4:
    // 0x123bc4: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x123bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_123bc8:
    // 0x123bc8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x123bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_123bcc:
    // 0x123bcc: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x123bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
label_123bd0:
    // 0x123bd0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x123bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_123bd4:
    // 0x123bd4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x123bd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_123bd8:
    // 0x123bd8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x123bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_123bdc:
    // 0x123bdc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x123bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_123be0:
    // 0x123be0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x123be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123be4:
    // 0x123be4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x123be4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123be8:
    // 0x123be8: 0xc0a4404  jal         func_291010
label_123bec:
    if (ctx->pc == 0x123BECu) {
        ctx->pc = 0x123BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BE8u;
        // 0x123bec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123BF0u;
        goto label_123bf0;
    }
    ctx->pc = 0x123BE8u;
    SET_GPR_U32(ctx, 31, 0x123BF0u);
    ctx->pc = 0x123BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123BE8u;
    // 0x123bec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x123BE8u, 0x123BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123BF0u;
label_123bf0:
    // 0x123bf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x123bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123bf4:
    // 0x123bf4: 0x52000039  beql        $s0, $zero, . + 4 + (0x39 << 2)
label_123bf8:
    if (ctx->pc == 0x123BF8u) {
        ctx->pc = 0x123BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123BF4u;
        // 0x123bf8: 0x82220622  lb          $v0, 0x622($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1570)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123BFCu;
        goto label_123bfc;
    }
    ctx->pc = 0x123BF4u;
    {
        const bool branch_taken_0x123bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x123bf4) {
            ctx->pc = 0x123BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123BF4u;
            // 0x123bf8: 0x82220622  lb          $v0, 0x622($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1570)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123CDCu;
            goto label_123cdc;
        }
    }
    ctx->pc = 0x123BFCu;
label_123bfc:
    // 0x123bfc: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x123bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_123c00:
    // 0x123c00: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x123c00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_123c04:
    // 0x123c04: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x123c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_123c08:
    // 0x123c08: 0x40f809  jalr        $v0
label_123c0c:
    if (ctx->pc == 0x123C0Cu) {
        ctx->pc = 0x123C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C08u;
        // 0x123c0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C10u;
        goto label_123c10;
    }
    ctx->pc = 0x123C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123C10u);
        ctx->pc = 0x123C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C08u;
        // 0x123c0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123C08u, 0x123C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123C10u;
label_123c10:
    // 0x123c10: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x123c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_123c14:
    // 0x123c14: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x123c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_123c18:
    // 0x123c18: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x123c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123c1c:
    // 0x123c1c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x123c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_123c20:
    // 0x123c20: 0x46020501  sub.s       $f20, $f0, $f2
    ctx->pc = 0x123c20u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_123c24:
    // 0x123c24: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x123c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123c28:
    // 0x123c28: 0x0  nop
    ctx->pc = 0x123c28u;
    // NOP
label_123c2c:
    // 0x123c2c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_123c30:
    if (ctx->pc == 0x123C30u) {
        ctx->pc = 0x123C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C2Cu;
        // 0x123c30: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C34u;
        goto label_123c34;
    }
    ctx->pc = 0x123C2Cu;
    {
        const bool branch_taken_0x123c2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x123c2c) {
            ctx->pc = 0x123C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123C2Cu;
            // 0x123c30: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x123C34u;
            goto label_123c34;
        }
    }
    ctx->pc = 0x123C34u;
label_123c34:
    // 0x123c34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123c38:
    // 0x123c38: 0xc0493f6  jal         func_124FD8
label_123c3c:
    if (ctx->pc == 0x123C3Cu) {
        ctx->pc = 0x123C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C38u;
        // 0x123c3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C40u;
        goto label_123c40;
    }
    ctx->pc = 0x123C38u;
    SET_GPR_U32(ctx, 31, 0x123C40u);
    ctx->pc = 0x123C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C38u;
    // 0x123c3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124FD8u, 0x123C38u, 0x123C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C40u;
label_123c40:
    // 0x123c40: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_123c44:
    if (ctx->pc == 0x123C44u) {
        ctx->pc = 0x123C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C40u;
        // 0x123c44: 0x82220622  lb          $v0, 0x622($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1570)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C48u;
        goto label_123c48;
    }
    ctx->pc = 0x123C40u;
    {
        const bool branch_taken_0x123c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C40u;
        // 0x123c44: 0x82220622  lb          $v0, 0x622($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1570)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c40) {
            ctx->pc = 0x123CDCu;
            goto label_123cdc;
        }
    }
    ctx->pc = 0x123C48u;
label_123c48:
    // 0x123c48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x123c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_123c4c:
    // 0x123c4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x123c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123c50:
    // 0x123c50: 0x0  nop
    ctx->pc = 0x123c50u;
    // NOP
label_123c54:
    // 0x123c54: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x123c54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123c58:
    // 0x123c58: 0x0  nop
    ctx->pc = 0x123c58u;
    // NOP
label_123c5c:
    // 0x123c5c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_123c60:
    if (ctx->pc == 0x123C60u) {
        ctx->pc = 0x123C64u;
        goto label_123c64;
    }
    ctx->pc = 0x123C5Cu;
    {
        const bool branch_taken_0x123c5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x123c5c) {
            ctx->pc = 0x123CDCu;
            goto label_123cdc;
        }
    }
    ctx->pc = 0x123C64u;
label_123c64:
    // 0x123c64: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_123c68:
    if (ctx->pc == 0x123C68u) {
        ctx->pc = 0x123C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C64u;
        // 0x123c68: 0x8e2206a0  lw          $v0, 0x6A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C6Cu;
        goto label_123c6c;
    }
    ctx->pc = 0x123C64u;
    {
        const bool branch_taken_0x123c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123c64) {
            ctx->pc = 0x123C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123C64u;
            // 0x123c68: 0x8e2206a0  lw          $v0, 0x6A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123CBCu;
            goto label_123cbc;
        }
    }
    ctx->pc = 0x123C6Cu;
label_123c6c:
    // 0x123c6c: 0x9222061f  lbu         $v0, 0x61F($s1)
    ctx->pc = 0x123c6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
label_123c70:
    // 0x123c70: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_123c74:
    if (ctx->pc == 0x123C74u) {
        ctx->pc = 0x123C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C70u;
        // 0x123c74: 0x8e2206a0  lw          $v0, 0x6A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C78u;
        goto label_123c78;
    }
    ctx->pc = 0x123C70u;
    {
        const bool branch_taken_0x123c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123c70) {
            ctx->pc = 0x123C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123C70u;
            // 0x123c74: 0x8e2206a0  lw          $v0, 0x6A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123CBCu;
            goto label_123cbc;
        }
    }
    ctx->pc = 0x123C78u;
label_123c78:
    // 0x123c78: 0xc6210608  lwc1        $f1, 0x608($s1)
    ctx->pc = 0x123c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123c7c:
    // 0x123c7c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x123c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_123c80:
    // 0x123c80: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x123c80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_123c84:
    // 0x123c84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x123c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123c88:
    // 0x123c88: 0x0  nop
    ctx->pc = 0x123c88u;
    // NOP
label_123c8c:
    // 0x123c8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x123c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123c90:
    // 0x123c90: 0x0  nop
    ctx->pc = 0x123c90u;
    // NOP
label_123c94:
    // 0x123c94: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_123c98:
    if (ctx->pc == 0x123C98u) {
        ctx->pc = 0x123C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C94u;
        // 0x123c98: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123C9Cu;
        goto label_123c9c;
    }
    ctx->pc = 0x123C94u;
    {
        const bool branch_taken_0x123c94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C94u;
        // 0x123c98: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c94) {
            ctx->pc = 0x123CB8u;
            goto label_123cb8;
        }
    }
    ctx->pc = 0x123C9Cu;
label_123c9c:
    // 0x123c9c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x123c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_123ca0:
    // 0x123ca0: 0xae300640  sw          $s0, 0x640($s1)
    ctx->pc = 0x123ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 16));
label_123ca4:
    // 0x123ca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123ca8:
    // 0x123ca8: 0xa2230648  sb          $v1, 0x648($s1)
    ctx->pc = 0x123ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 3));
label_123cac:
    // 0x123cac: 0xa22402f5  sb          $a0, 0x2F5($s1)
    ctx->pc = 0x123cacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
label_123cb0:
    // 0x123cb0: 0x10000209  b           . + 4 + (0x209 << 2)
label_123cb4:
    if (ctx->pc == 0x123CB4u) {
        ctx->pc = 0x123CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CB0u;
        // 0x123cb4: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123CB8u;
        goto label_123cb8;
    }
    ctx->pc = 0x123CB0u;
    {
        const bool branch_taken_0x123cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CB0u;
        // 0x123cb4: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123cb0) {
            ctx->pc = 0x1244D8u;
            goto label_1244d8;
        }
    }
    ctx->pc = 0x123CB8u;
label_123cb8:
    // 0x123cb8: 0x8e2206a0  lw          $v0, 0x6A0($s1)
    ctx->pc = 0x123cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_123cbc:
    // 0x123cbc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_123cc0:
    if (ctx->pc == 0x123CC0u) {
        ctx->pc = 0x123CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CBCu;
        // 0x123cc0: 0x82220622  lb          $v0, 0x622($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1570)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123CC4u;
        goto label_123cc4;
    }
    ctx->pc = 0x123CBCu;
    {
        const bool branch_taken_0x123cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123cbc) {
            ctx->pc = 0x123CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123CBCu;
            // 0x123cc0: 0x82220622  lb          $v0, 0x622($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1570)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123CDCu;
            goto label_123cdc;
        }
    }
    ctx->pc = 0x123CC4u;
label_123cc4:
    // 0x123cc4: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x123cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_123cc8:
    // 0x123cc8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_123ccc:
    if (ctx->pc == 0x123CCCu) {
        ctx->pc = 0x123CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CC8u;
        // 0x123ccc: 0x82220622  lb          $v0, 0x622($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1570)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123CD0u;
        goto label_123cd0;
    }
    ctx->pc = 0x123CC8u;
    {
        const bool branch_taken_0x123cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123cc8) {
            ctx->pc = 0x123CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123CC8u;
            // 0x123ccc: 0x82220622  lb          $v0, 0x622($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1570)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123CDCu;
            goto label_123cdc;
        }
    }
    ctx->pc = 0x123CD0u;
label_123cd0:
    // 0x123cd0: 0xc0b6f04  jal         func_2DBC10
label_123cd4:
    if (ctx->pc == 0x123CD4u) {
        ctx->pc = 0x123CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CD0u;
        // 0x123cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123CD8u;
        goto label_123cd8;
    }
    ctx->pc = 0x123CD0u;
    SET_GPR_U32(ctx, 31, 0x123CD8u);
    ctx->pc = 0x123CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CD0u;
    // 0x123cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBC10u, 0x123CD0u, 0x123CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CD8u;
label_123cd8:
    // 0x123cd8: 0x82220622  lb          $v0, 0x622($s1)
    ctx->pc = 0x123cd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1570)));
label_123cdc:
    // 0x123cdc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_123ce0:
    if (ctx->pc == 0x123CE0u) {
        ctx->pc = 0x123CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CDCu;
        // 0x123ce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123CE4u;
        goto label_123ce4;
    }
    ctx->pc = 0x123CDCu;
    {
        const bool branch_taken_0x123cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CDCu;
        // 0x123ce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123cdc) {
            ctx->pc = 0x123DC8u;
            goto label_123dc8;
        }
    }
    ctx->pc = 0x123CE4u;
label_123ce4:
    // 0x123ce4: 0xc049150  jal         func_124540
label_123ce8:
    if (ctx->pc == 0x123CE8u) {
        ctx->pc = 0x123CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CE4u;
        // 0x123ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123CECu;
        goto label_123cec;
    }
    ctx->pc = 0x123CE4u;
    SET_GPR_U32(ctx, 31, 0x123CECu);
    ctx->pc = 0x123CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CE4u;
    // 0x123ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124540u, 0x123CE4u, 0x123CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CECu;
label_123cec:
    // 0x123cec: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x123cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_123cf0:
    // 0x123cf0: 0x10a00035  beqz        $a1, . + 4 + (0x35 << 2)
label_123cf4:
    if (ctx->pc == 0x123CF4u) {
        ctx->pc = 0x123CF8u;
        goto label_123cf8;
    }
    ctx->pc = 0x123CF0u;
    {
        const bool branch_taken_0x123cf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x123cf0) {
            ctx->pc = 0x123DC8u;
            goto label_123dc8;
        }
    }
    ctx->pc = 0x123CF8u;
label_123cf8:
    // 0x123cf8: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x123cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_123cfc:
    // 0x123cfc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x123cfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_123d00:
    // 0x123d00: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x123d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_123d04:
    // 0x123d04: 0x40f809  jalr        $v0
label_123d08:
    if (ctx->pc == 0x123D08u) {
        ctx->pc = 0x123D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D04u;
        // 0x123d08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D0Cu;
        goto label_123d0c;
    }
    ctx->pc = 0x123D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123D0Cu);
        ctx->pc = 0x123D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D04u;
        // 0x123d08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123D04u, 0x123D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123D0Cu;
label_123d0c:
    // 0x123d0c: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x123d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_123d10:
    // 0x123d10: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x123d10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_123d14:
    // 0x123d14: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x123d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_123d18:
    // 0x123d18: 0xc4540004  lwc1        $f20, 0x4($v0)
    ctx->pc = 0x123d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_123d1c:
    // 0x123d1c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x123d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123d20:
    // 0x123d20: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x123d20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_123d24:
    // 0x123d24: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x123d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_123d28:
    // 0x123d28: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x123d28u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_123d2c:
    // 0x123d2c: 0x40f809  jalr        $v0
label_123d30:
    if (ctx->pc == 0x123D30u) {
        ctx->pc = 0x123D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D2Cu;
        // 0x123d30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D34u;
        goto label_123d34;
    }
    ctx->pc = 0x123D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123D34u);
        ctx->pc = 0x123D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D2Cu;
        // 0x123d30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123D2Cu, 0x123D34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123D34u;
label_123d34:
    // 0x123d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x123d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123d38:
    // 0x123d38: 0xc07dfac  jal         func_1F7EB0
label_123d3c:
    if (ctx->pc == 0x123D3Cu) {
        ctx->pc = 0x123D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D38u;
        // 0x123d3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D40u;
        goto label_123d40;
    }
    ctx->pc = 0x123D38u;
    SET_GPR_U32(ctx, 31, 0x123D40u);
    ctx->pc = 0x123D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D38u;
    // 0x123d3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x123D38u, 0x123D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D40u;
label_123d40:
    // 0x123d40: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x123d40u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_123d44:
    // 0x123d44: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x123d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_123d48:
    // 0x123d48: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x123d48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_123d4c:
    // 0x123d4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x123d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123d50:
    // 0x123d50: 0x0  nop
    ctx->pc = 0x123d50u;
    // NOP
label_123d54:
    // 0x123d54: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x123d54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123d58:
    // 0x123d58: 0x0  nop
    ctx->pc = 0x123d58u;
    // NOP
label_123d5c:
    // 0x123d5c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_123d60:
    if (ctx->pc == 0x123D60u) {
        ctx->pc = 0x123D64u;
        goto label_123d64;
    }
    ctx->pc = 0x123D5Cu;
    {
        const bool branch_taken_0x123d5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x123d5c) {
            ctx->pc = 0x123DC8u;
            goto label_123dc8;
        }
    }
    ctx->pc = 0x123D64u;
label_123d64:
    // 0x123d64: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x123d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_123d68:
    // 0x123d68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x123d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123d6c:
    // 0x123d6c: 0x0  nop
    ctx->pc = 0x123d6cu;
    // NOP
label_123d70:
    // 0x123d70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x123d70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123d74:
    // 0x123d74: 0x0  nop
    ctx->pc = 0x123d74u;
    // NOP
label_123d78:
    // 0x123d78: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_123d7c:
    if (ctx->pc == 0x123D7Cu) {
        ctx->pc = 0x123D80u;
        goto label_123d80;
    }
    ctx->pc = 0x123D78u;
    {
        const bool branch_taken_0x123d78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x123d78) {
            ctx->pc = 0x123DC8u;
            goto label_123dc8;
        }
    }
    ctx->pc = 0x123D80u;
label_123d80:
    // 0x123d80: 0x9222061f  lbu         $v0, 0x61F($s1)
    ctx->pc = 0x123d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
label_123d84:
    // 0x123d84: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_123d88:
    if (ctx->pc == 0x123D88u) {
        ctx->pc = 0x123D8Cu;
        goto label_123d8c;
    }
    ctx->pc = 0x123D84u;
    {
        const bool branch_taken_0x123d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123d84) {
            ctx->pc = 0x123DC8u;
            goto label_123dc8;
        }
    }
    ctx->pc = 0x123D8Cu;
label_123d8c:
    // 0x123d8c: 0xc6210608  lwc1        $f1, 0x608($s1)
    ctx->pc = 0x123d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123d90:
    // 0x123d90: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x123d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
label_123d94:
    // 0x123d94: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x123d94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_123d98:
    // 0x123d98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x123d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123d9c:
    // 0x123d9c: 0x0  nop
    ctx->pc = 0x123d9cu;
    // NOP
label_123da0:
    // 0x123da0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x123da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123da4:
    // 0x123da4: 0x0  nop
    ctx->pc = 0x123da4u;
    // NOP
label_123da8:
    // 0x123da8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_123dac:
    if (ctx->pc == 0x123DACu) {
        ctx->pc = 0x123DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DA8u;
        // 0x123dac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123DB0u;
        goto label_123db0;
    }
    ctx->pc = 0x123DA8u;
    {
        const bool branch_taken_0x123da8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DA8u;
        // 0x123dac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123da8) {
            ctx->pc = 0x123DC0u;
            goto label_123dc0;
        }
    }
    ctx->pc = 0x123DB0u;
label_123db0:
    // 0x123db0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x123db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_123db4:
    // 0x123db4: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x123db4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
label_123db8:
    // 0x123db8: 0x100001c7  b           . + 4 + (0x1C7 << 2)
label_123dbc:
    if (ctx->pc == 0x123DBCu) {
        ctx->pc = 0x123DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DB8u;
        // 0x123dbc: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123DC0u;
        goto label_123dc0;
    }
    ctx->pc = 0x123DB8u;
    {
        const bool branch_taken_0x123db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DB8u;
        // 0x123dbc: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123db8) {
            ctx->pc = 0x1244D8u;
            goto label_1244d8;
        }
    }
    ctx->pc = 0x123DC0u;
label_123dc0:
    // 0x123dc0: 0x100001c2  b           . + 4 + (0x1C2 << 2)
label_123dc4:
    if (ctx->pc == 0x123DC4u) {
        ctx->pc = 0x123DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DC0u;
        // 0x123dc4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123DC8u;
        goto label_123dc8;
    }
    ctx->pc = 0x123DC0u;
    {
        const bool branch_taken_0x123dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DC0u;
        // 0x123dc4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123dc0) {
            ctx->pc = 0x1244CCu;
            goto label_1244cc;
        }
    }
    ctx->pc = 0x123DC8u;
label_123dc8:
    // 0x123dc8: 0xc04a732  jal         func_129CC8
label_123dcc:
    if (ctx->pc == 0x123DCCu) {
        ctx->pc = 0x123DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DC8u;
        // 0x123dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123DD0u;
        goto label_123dd0;
    }
    ctx->pc = 0x123DC8u;
    SET_GPR_U32(ctx, 31, 0x123DD0u);
    ctx->pc = 0x123DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123DC8u;
    // 0x123dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129CC8u, 0x123DC8u, 0x123DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123DD0u;
label_123dd0:
    // 0x123dd0: 0xc04a842  jal         func_12A108
label_123dd4:
    if (ctx->pc == 0x123DD4u) {
        ctx->pc = 0x123DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DD0u;
        // 0x123dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123DD8u;
        goto label_123dd8;
    }
    ctx->pc = 0x123DD0u;
    SET_GPR_U32(ctx, 31, 0x123DD8u);
    ctx->pc = 0x123DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123DD0u;
    // 0x123dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A108u, 0x123DD0u, 0x123DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123DD8u;
label_123dd8:
    // 0x123dd8: 0x82220623  lb          $v0, 0x623($s1)
    ctx->pc = 0x123dd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1571)));
label_123ddc:
    // 0x123ddc: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_123de0:
    if (ctx->pc == 0x123DE0u) {
        ctx->pc = 0x123DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DDCu;
        // 0x123de0: 0x82220622  lb          $v0, 0x622($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1570)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123DE4u;
        goto label_123de4;
    }
    ctx->pc = 0x123DDCu;
    {
        const bool branch_taken_0x123ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123ddc) {
            ctx->pc = 0x123DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123DDCu;
            // 0x123de0: 0x82220622  lb          $v0, 0x622($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1570)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123EC4u;
            goto label_123ec4;
        }
    }
    ctx->pc = 0x123DE4u;
label_123de4:
    // 0x123de4: 0x9222061f  lbu         $v0, 0x61F($s1)
    ctx->pc = 0x123de4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
label_123de8:
    // 0x123de8: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_123dec:
    if (ctx->pc == 0x123DECu) {
        ctx->pc = 0x123DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DE8u;
        // 0x123dec: 0x8e2215f4  lw          $v0, 0x15F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123DF0u;
        goto label_123df0;
    }
    ctx->pc = 0x123DE8u;
    {
        const bool branch_taken_0x123de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123de8) {
            ctx->pc = 0x123DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123DE8u;
            // 0x123dec: 0x8e2215f4  lw          $v0, 0x15F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123E5Cu;
            goto label_123e5c;
        }
    }
    ctx->pc = 0x123DF0u;
label_123df0:
    // 0x123df0: 0xc6210608  lwc1        $f1, 0x608($s1)
    ctx->pc = 0x123df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123df4:
    // 0x123df4: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x123df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
label_123df8:
    // 0x123df8: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x123df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_123dfc:
    // 0x123dfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x123dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123e00:
    // 0x123e00: 0x0  nop
    ctx->pc = 0x123e00u;
    // NOP
label_123e04:
    // 0x123e04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x123e04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123e08:
    // 0x123e08: 0x0  nop
    ctx->pc = 0x123e08u;
    // NOP
label_123e0c:
    // 0x123e0c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_123e10:
    if (ctx->pc == 0x123E10u) {
        ctx->pc = 0x123E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E0Cu;
        // 0x123e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E14u;
        goto label_123e14;
    }
    ctx->pc = 0x123E0Cu;
    {
        const bool branch_taken_0x123e0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E0Cu;
        // 0x123e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e0c) {
            ctx->pc = 0x123E58u;
            goto label_123e58;
        }
    }
    ctx->pc = 0x123E14u;
label_123e14:
    // 0x123e14: 0xc04b000  jal         func_12C000
label_123e18:
    if (ctx->pc == 0x123E18u) {
        ctx->pc = 0x123E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E14u;
        // 0x123e18: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E1Cu;
        goto label_123e1c;
    }
    ctx->pc = 0x123E14u;
    SET_GPR_U32(ctx, 31, 0x123E1Cu);
    ctx->pc = 0x123E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123E14u;
    // 0x123e18: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C000u, 0x123E14u, 0x123E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E1Cu;
label_123e1c:
    // 0x123e1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_123e20:
    if (ctx->pc == 0x123E20u) {
        ctx->pc = 0x123E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E1Cu;
        // 0x123e20: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E24u;
        goto label_123e24;
    }
    ctx->pc = 0x123E1Cu;
    {
        const bool branch_taken_0x123e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E1Cu;
        // 0x123e20: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e1c) {
            ctx->pc = 0x123E3Cu;
            goto label_123e3c;
        }
    }
    ctx->pc = 0x123E24u;
label_123e24:
    // 0x123e24: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_123e28:
    if (ctx->pc == 0x123E28u) {
        ctx->pc = 0x123E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E24u;
        // 0x123e28: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E2Cu;
        goto label_123e2c;
    }
    ctx->pc = 0x123E24u;
    {
        const bool branch_taken_0x123e24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E24u;
        // 0x123e28: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e24) {
            ctx->pc = 0x123E40u;
            goto label_123e40;
        }
    }
    ctx->pc = 0x123E2Cu;
label_123e2c:
    // 0x123e2c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x123e2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_123e30:
    // 0x123e30: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x123e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_123e34:
    // 0x123e34: 0x104001b8  beqz        $v0, . + 4 + (0x1B8 << 2)
label_123e38:
    if (ctx->pc == 0x123E38u) {
        ctx->pc = 0x123E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E34u;
        // 0x123e38: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E3Cu;
        goto label_123e3c;
    }
    ctx->pc = 0x123E34u;
    {
        const bool branch_taken_0x123e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E34u;
        // 0x123e38: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e34) {
            ctx->pc = 0x124518u;
            goto label_124518;
        }
    }
    ctx->pc = 0x123E3Cu;
label_123e3c:
    // 0x123e3c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x123e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_123e40:
    // 0x123e40: 0xa62205e2  sh          $v0, 0x5E2($s1)
    ctx->pc = 0x123e40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 2));
label_123e44:
    // 0x123e44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123e48:
    // 0x123e48: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x123e48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_123e4c:
    // 0x123e4c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x123e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_123e50:
    // 0x123e50: 0x100001a1  b           . + 4 + (0x1A1 << 2)
label_123e54:
    if (ctx->pc == 0x123E54u) {
        ctx->pc = 0x123E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E50u;
        // 0x123e54: 0xa62005e0  sh          $zero, 0x5E0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E58u;
        goto label_123e58;
    }
    ctx->pc = 0x123E50u;
    {
        const bool branch_taken_0x123e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E50u;
        // 0x123e54: 0xa62005e0  sh          $zero, 0x5E0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e50) {
            ctx->pc = 0x1244D8u;
            goto label_1244d8;
        }
    }
    ctx->pc = 0x123E58u;
label_123e58:
    // 0x123e58: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x123e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_123e5c:
    // 0x123e5c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x123e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_123e60:
    // 0x123e60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_123e64:
    if (ctx->pc == 0x123E64u) {
        ctx->pc = 0x123E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E60u;
        // 0x123e64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E68u;
        goto label_123e68;
    }
    ctx->pc = 0x123E60u;
    {
        const bool branch_taken_0x123e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E60u;
        // 0x123e64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e60) {
            ctx->pc = 0x123E7Cu;
            goto label_123e7c;
        }
    }
    ctx->pc = 0x123E68u;
label_123e68:
    // 0x123e68: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x123e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_123e6c:
    // 0x123e6c: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x123e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
label_123e70:
    // 0x123e70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123e74:
    // 0x123e74: 0x10000198  b           . + 4 + (0x198 << 2)
label_123e78:
    if (ctx->pc == 0x123E78u) {
        ctx->pc = 0x123E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E74u;
        // 0x123e78: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E7Cu;
        goto label_123e7c;
    }
    ctx->pc = 0x123E74u;
    {
        const bool branch_taken_0x123e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E74u;
        // 0x123e78: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e74) {
            ctx->pc = 0x1244D8u;
            goto label_1244d8;
        }
    }
    ctx->pc = 0x123E7Cu;
label_123e7c:
    // 0x123e7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123e80:
    // 0x123e80: 0xc04b000  jal         func_12C000
label_123e84:
    if (ctx->pc == 0x123E84u) {
        ctx->pc = 0x123E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E80u;
        // 0x123e84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E88u;
        goto label_123e88;
    }
    ctx->pc = 0x123E80u;
    SET_GPR_U32(ctx, 31, 0x123E88u);
    ctx->pc = 0x123E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123E80u;
    // 0x123e84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C000u, 0x123E80u, 0x123E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E88u;
label_123e88:
    // 0x123e88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_123e8c:
    if (ctx->pc == 0x123E8Cu) {
        ctx->pc = 0x123E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E88u;
        // 0x123e8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E90u;
        goto label_123e90;
    }
    ctx->pc = 0x123E88u;
    {
        const bool branch_taken_0x123e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E88u;
        // 0x123e8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e88) {
            ctx->pc = 0x123EA8u;
            goto label_123ea8;
        }
    }
    ctx->pc = 0x123E90u;
label_123e90:
    // 0x123e90: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_123e94:
    if (ctx->pc == 0x123E94u) {
        ctx->pc = 0x123E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E90u;
        // 0x123e94: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E98u;
        goto label_123e98;
    }
    ctx->pc = 0x123E90u;
    {
        const bool branch_taken_0x123e90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E90u;
        // 0x123e94: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e90) {
            ctx->pc = 0x123EACu;
            goto label_123eac;
        }
    }
    ctx->pc = 0x123E98u;
label_123e98:
    // 0x123e98: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x123e98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_123e9c:
    // 0x123e9c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x123e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_123ea0:
    // 0x123ea0: 0x1040019d  beqz        $v0, . + 4 + (0x19D << 2)
label_123ea4:
    if (ctx->pc == 0x123EA4u) {
        ctx->pc = 0x123EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EA0u;
        // 0x123ea4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123EA8u;
        goto label_123ea8;
    }
    ctx->pc = 0x123EA0u;
    {
        const bool branch_taken_0x123ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EA0u;
        // 0x123ea4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ea0) {
            ctx->pc = 0x124518u;
            goto label_124518;
        }
    }
    ctx->pc = 0x123EA8u;
label_123ea8:
    // 0x123ea8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x123ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_123eac:
    // 0x123eac: 0xa62205e2  sh          $v0, 0x5E2($s1)
    ctx->pc = 0x123eacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 2));
label_123eb0:
    // 0x123eb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123eb4:
    // 0x123eb4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x123eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_123eb8:
    // 0x123eb8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x123eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_123ebc:
    // 0x123ebc: 0x10000186  b           . + 4 + (0x186 << 2)
label_123ec0:
    if (ctx->pc == 0x123EC0u) {
        ctx->pc = 0x123EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EBCu;
        // 0x123ec0: 0xa62005e0  sh          $zero, 0x5E0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123EC4u;
        goto label_123ec4;
    }
    ctx->pc = 0x123EBCu;
    {
        const bool branch_taken_0x123ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EBCu;
        // 0x123ec0: 0xa62005e0  sh          $zero, 0x5E0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ebc) {
            ctx->pc = 0x1244D8u;
            goto label_1244d8;
        }
    }
    ctx->pc = 0x123EC4u;
label_123ec4:
    // 0x123ec4: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
label_123ec8:
    if (ctx->pc == 0x123EC8u) {
        ctx->pc = 0x123EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EC4u;
        // 0x123ec8: 0x82220621  lb          $v0, 0x621($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1569)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123ECCu;
        goto label_123ecc;
    }
    ctx->pc = 0x123EC4u;
    {
        const bool branch_taken_0x123ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123ec4) {
            ctx->pc = 0x123EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123EC4u;
            // 0x123ec8: 0x82220621  lb          $v0, 0x621($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1569)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123FC8u;
            goto label_123fc8;
        }
    }
    ctx->pc = 0x123ECCu;
label_123ecc:
    // 0x123ecc: 0x9222061f  lbu         $v0, 0x61F($s1)
    ctx->pc = 0x123eccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
label_123ed0:
    // 0x123ed0: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_123ed4:
    if (ctx->pc == 0x123ED4u) {
        ctx->pc = 0x123ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123ED0u;
        // 0x123ed4: 0x8e2315f4  lw          $v1, 0x15F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123ED8u;
        goto label_123ed8;
    }
    ctx->pc = 0x123ED0u;
    {
        const bool branch_taken_0x123ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123ed0) {
            ctx->pc = 0x123ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123ED0u;
            // 0x123ed4: 0x8e2315f4  lw          $v1, 0x15F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123F44u;
            goto label_123f44;
        }
    }
    ctx->pc = 0x123ED8u;
label_123ed8:
    // 0x123ed8: 0xc6210608  lwc1        $f1, 0x608($s1)
    ctx->pc = 0x123ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123edc:
    // 0x123edc: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x123edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
label_123ee0:
    // 0x123ee0: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x123ee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_123ee4:
    // 0x123ee4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x123ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123ee8:
    // 0x123ee8: 0x0  nop
    ctx->pc = 0x123ee8u;
    // NOP
label_123eec:
    // 0x123eec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x123eecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123ef0:
    // 0x123ef0: 0x0  nop
    ctx->pc = 0x123ef0u;
    // NOP
label_123ef4:
    // 0x123ef4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_123ef8:
    if (ctx->pc == 0x123EF8u) {
        ctx->pc = 0x123EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EF4u;
        // 0x123ef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123EFCu;
        goto label_123efc;
    }
    ctx->pc = 0x123EF4u;
    {
        const bool branch_taken_0x123ef4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EF4u;
        // 0x123ef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ef4) {
            ctx->pc = 0x123F40u;
            goto label_123f40;
        }
    }
    ctx->pc = 0x123EFCu;
label_123efc:
    // 0x123efc: 0xc04b000  jal         func_12C000
label_123f00:
    if (ctx->pc == 0x123F00u) {
        ctx->pc = 0x123F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EFCu;
        // 0x123f00: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F04u;
        goto label_123f04;
    }
    ctx->pc = 0x123EFCu;
    SET_GPR_U32(ctx, 31, 0x123F04u);
    ctx->pc = 0x123F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123EFCu;
    // 0x123f00: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C000u, 0x123EFCu, 0x123F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123F04u;
label_123f04:
    // 0x123f04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_123f08:
    if (ctx->pc == 0x123F08u) {
        ctx->pc = 0x123F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F04u;
        // 0x123f08: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F0Cu;
        goto label_123f0c;
    }
    ctx->pc = 0x123F04u;
    {
        const bool branch_taken_0x123f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F04u;
        // 0x123f08: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f04) {
            ctx->pc = 0x123F24u;
            goto label_123f24;
        }
    }
    ctx->pc = 0x123F0Cu;
label_123f0c:
    // 0x123f0c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_123f10:
    if (ctx->pc == 0x123F10u) {
        ctx->pc = 0x123F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F0Cu;
        // 0x123f10: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F14u;
        goto label_123f14;
    }
    ctx->pc = 0x123F0Cu;
    {
        const bool branch_taken_0x123f0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F0Cu;
        // 0x123f10: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f0c) {
            ctx->pc = 0x123F28u;
            goto label_123f28;
        }
    }
    ctx->pc = 0x123F14u;
label_123f14:
    // 0x123f14: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x123f14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_123f18:
    // 0x123f18: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x123f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_123f1c:
    // 0x123f1c: 0x1040017e  beqz        $v0, . + 4 + (0x17E << 2)
label_123f20:
    if (ctx->pc == 0x123F20u) {
        ctx->pc = 0x123F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F1Cu;
        // 0x123f20: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F24u;
        goto label_123f24;
    }
    ctx->pc = 0x123F1Cu;
    {
        const bool branch_taken_0x123f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F1Cu;
        // 0x123f20: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f1c) {
            ctx->pc = 0x124518u;
            goto label_124518;
        }
    }
    ctx->pc = 0x123F24u;
label_123f24:
    // 0x123f24: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x123f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_123f28:
    // 0x123f28: 0xa62205e2  sh          $v0, 0x5E2($s1)
    ctx->pc = 0x123f28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 2));
label_123f2c:
    // 0x123f2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123f30:
    // 0x123f30: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x123f30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_123f34:
    // 0x123f34: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x123f34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_123f38:
    // 0x123f38: 0x10000167  b           . + 4 + (0x167 << 2)
label_123f3c:
    if (ctx->pc == 0x123F3Cu) {
        ctx->pc = 0x123F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F38u;
        // 0x123f3c: 0xa62005e0  sh          $zero, 0x5E0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F40u;
        goto label_123f40;
    }
    ctx->pc = 0x123F38u;
    {
        const bool branch_taken_0x123f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F38u;
        // 0x123f3c: 0xa62005e0  sh          $zero, 0x5E0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f38) {
            ctx->pc = 0x1244D8u;
            goto label_1244d8;
        }
    }
    ctx->pc = 0x123F40u;
label_123f40:
    // 0x123f40: 0x8e2315f4  lw          $v1, 0x15F4($s1)
    ctx->pc = 0x123f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_123f44:
    // 0x123f44: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x123f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_123f48:
    // 0x123f48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_123f4c:
    if (ctx->pc == 0x123F4Cu) {
        ctx->pc = 0x123F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F48u;
        // 0x123f4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F50u;
        goto label_123f50;
    }
    ctx->pc = 0x123F48u;
    {
        const bool branch_taken_0x123f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F48u;
        // 0x123f4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f48) {
            ctx->pc = 0x123F60u;
            goto label_123f60;
        }
    }
    ctx->pc = 0x123F50u;
label_123f50:
    // 0x123f50: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x123f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_123f54:
    // 0x123f54: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x123f54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
label_123f58:
    // 0x123f58: 0x1000015f  b           . + 4 + (0x15F << 2)
label_123f5c:
    if (ctx->pc == 0x123F5Cu) {
        ctx->pc = 0x123F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F58u;
        // 0x123f5c: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F60u;
        goto label_123f60;
    }
    ctx->pc = 0x123F58u;
    {
        const bool branch_taken_0x123f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F58u;
        // 0x123f5c: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f58) {
            ctx->pc = 0x1244D8u;
            goto label_1244d8;
        }
    }
    ctx->pc = 0x123F60u;
label_123f60:
    // 0x123f60: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x123f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_123f64:
    // 0x123f64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x123f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_123f68:
    // 0x123f68: 0x14400158  bnez        $v0, . + 4 + (0x158 << 2)
label_123f6c:
    if (ctx->pc == 0x123F6Cu) {
        ctx->pc = 0x123F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F68u;
        // 0x123f6c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F70u;
        goto label_123f70;
    }
    ctx->pc = 0x123F68u;
    {
        const bool branch_taken_0x123f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F68u;
        // 0x123f6c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f68) {
            ctx->pc = 0x1244CCu;
            goto label_1244cc;
        }
    }
    ctx->pc = 0x123F70u;
label_123f70:
    // 0x123f70: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x123f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_123f74:
    // 0x123f74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x123f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_123f78:
    // 0x123f78: 0x14400154  bnez        $v0, . + 4 + (0x154 << 2)
label_123f7c:
    if (ctx->pc == 0x123F7Cu) {
        ctx->pc = 0x123F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F78u;
        // 0x123f7c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F80u;
        goto label_123f80;
    }
    ctx->pc = 0x123F78u;
    {
        const bool branch_taken_0x123f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F78u;
        // 0x123f7c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f78) {
            ctx->pc = 0x1244CCu;
            goto label_1244cc;
        }
    }
    ctx->pc = 0x123F80u;
label_123f80:
    // 0x123f80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123f84:
    // 0x123f84: 0xc04b000  jal         func_12C000
label_123f88:
    if (ctx->pc == 0x123F88u) {
        ctx->pc = 0x123F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F84u;
        // 0x123f88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F8Cu;
        goto label_123f8c;
    }
    ctx->pc = 0x123F84u;
    SET_GPR_U32(ctx, 31, 0x123F8Cu);
    ctx->pc = 0x123F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123F84u;
    // 0x123f88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C000u, 0x123F84u, 0x123F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123F8Cu;
label_123f8c:
    // 0x123f8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_123f90:
    if (ctx->pc == 0x123F90u) {
        ctx->pc = 0x123F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F8Cu;
        // 0x123f90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F94u;
        goto label_123f94;
    }
    ctx->pc = 0x123F8Cu;
    {
        const bool branch_taken_0x123f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F8Cu;
        // 0x123f90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f8c) {
            ctx->pc = 0x123FACu;
            goto label_123fac;
        }
    }
    ctx->pc = 0x123F94u;
label_123f94:
    // 0x123f94: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_123f98:
    if (ctx->pc == 0x123F98u) {
        ctx->pc = 0x123F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F94u;
        // 0x123f98: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F9Cu;
        goto label_123f9c;
    }
    ctx->pc = 0x123F94u;
    {
        const bool branch_taken_0x123f94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F94u;
        // 0x123f98: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f94) {
            ctx->pc = 0x123FB0u;
            goto label_123fb0;
        }
    }
    ctx->pc = 0x123F9Cu;
label_123f9c:
    // 0x123f9c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x123f9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_123fa0:
    // 0x123fa0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x123fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_123fa4:
    // 0x123fa4: 0x1040015c  beqz        $v0, . + 4 + (0x15C << 2)
label_123fa8:
    if (ctx->pc == 0x123FA8u) {
        ctx->pc = 0x123FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FA4u;
        // 0x123fa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123FACu;
        goto label_123fac;
    }
    ctx->pc = 0x123FA4u;
    {
        const bool branch_taken_0x123fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FA4u;
        // 0x123fa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123fa4) {
            ctx->pc = 0x124518u;
            goto label_124518;
        }
    }
    ctx->pc = 0x123FACu;
label_123fac:
    // 0x123fac: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x123facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_123fb0:
    // 0x123fb0: 0xa62205e2  sh          $v0, 0x5E2($s1)
    ctx->pc = 0x123fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 2));
label_123fb4:
    // 0x123fb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123fb8:
    // 0x123fb8: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x123fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_123fbc:
    // 0x123fbc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x123fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_123fc0:
    // 0x123fc0: 0x10000145  b           . + 4 + (0x145 << 2)
label_123fc4:
    if (ctx->pc == 0x123FC4u) {
        ctx->pc = 0x123FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FC0u;
        // 0x123fc4: 0xa62005e0  sh          $zero, 0x5E0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123FC8u;
        goto label_123fc8;
    }
    ctx->pc = 0x123FC0u;
    {
        const bool branch_taken_0x123fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FC0u;
        // 0x123fc4: 0xa62005e0  sh          $zero, 0x5E0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123fc0) {
            ctx->pc = 0x1244D8u;
            goto label_1244d8;
        }
    }
    ctx->pc = 0x123FC8u;
label_123fc8:
    // 0x123fc8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_123fcc:
    if (ctx->pc == 0x123FCCu) {
        ctx->pc = 0x123FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FC8u;
        // 0x123fcc: 0x266374a0  addiu       $v1, $s3, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123FD0u;
        goto label_123fd0;
    }
    ctx->pc = 0x123FC8u;
    {
        const bool branch_taken_0x123fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FC8u;
        // 0x123fcc: 0x266374a0  addiu       $v1, $s3, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123fc8) {
            ctx->pc = 0x124098u;
            goto label_124098;
        }
    }
    ctx->pc = 0x123FD0u;
label_123fd0:
    // 0x123fd0: 0x9222061f  lbu         $v0, 0x61F($s1)
    ctx->pc = 0x123fd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
label_123fd4:
    // 0x123fd4: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_123fd8:
    if (ctx->pc == 0x123FD8u) {
        ctx->pc = 0x123FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FD4u;
        // 0x123fd8: 0x8e2215f4  lw          $v0, 0x15F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123FDCu;
        goto label_123fdc;
    }
    ctx->pc = 0x123FD4u;
    {
        const bool branch_taken_0x123fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123fd4) {
            ctx->pc = 0x123FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123FD4u;
            // 0x123fd8: 0x8e2215f4  lw          $v0, 0x15F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124048u;
            goto label_124048;
        }
    }
    ctx->pc = 0x123FDCu;
label_123fdc:
    // 0x123fdc: 0xc6210608  lwc1        $f1, 0x608($s1)
    ctx->pc = 0x123fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123fe0:
    // 0x123fe0: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x123fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
label_123fe4:
    // 0x123fe4: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x123fe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_123fe8:
    // 0x123fe8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x123fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123fec:
    // 0x123fec: 0x0  nop
    ctx->pc = 0x123fecu;
    // NOP
label_123ff0:
    // 0x123ff0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x123ff0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123ff4:
    // 0x123ff4: 0x0  nop
    ctx->pc = 0x123ff4u;
    // NOP
label_123ff8:
    // 0x123ff8: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_123ffc:
    if (ctx->pc == 0x123FFCu) {
        ctx->pc = 0x123FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FF8u;
        // 0x123ffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124000u;
        goto label_124000;
    }
    ctx->pc = 0x123FF8u;
    {
        const bool branch_taken_0x123ff8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FF8u;
        // 0x123ffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ff8) {
            ctx->pc = 0x124044u;
            goto label_124044;
        }
    }
    ctx->pc = 0x124000u;
label_124000:
    // 0x124000: 0xc04b000  jal         func_12C000
label_124004:
    if (ctx->pc == 0x124004u) {
        ctx->pc = 0x124004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124000u;
        // 0x124004: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124008u;
        goto label_124008;
    }
    ctx->pc = 0x124000u;
    SET_GPR_U32(ctx, 31, 0x124008u);
    ctx->pc = 0x124004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124000u;
    // 0x124004: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C000u, 0x124000u, 0x124008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124008u;
label_124008:
    // 0x124008: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_12400c:
    if (ctx->pc == 0x12400Cu) {
        ctx->pc = 0x12400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124008u;
        // 0x12400c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124010u;
        goto label_124010;
    }
    ctx->pc = 0x124008u;
    {
        const bool branch_taken_0x124008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124008u;
        // 0x12400c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124008) {
            ctx->pc = 0x124028u;
            goto label_124028;
        }
    }
    ctx->pc = 0x124010u;
label_124010:
    // 0x124010: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_124014:
    if (ctx->pc == 0x124014u) {
        ctx->pc = 0x124014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124010u;
        // 0x124014: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124018u;
        goto label_124018;
    }
    ctx->pc = 0x124010u;
    {
        const bool branch_taken_0x124010 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x124014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124010u;
        // 0x124014: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124010) {
            ctx->pc = 0x12402Cu;
            goto label_12402c;
        }
    }
    ctx->pc = 0x124018u;
label_124018:
    // 0x124018: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x124018u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_12401c:
    // 0x12401c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x12401cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_124020:
    // 0x124020: 0x1040013d  beqz        $v0, . + 4 + (0x13D << 2)
label_124024:
    if (ctx->pc == 0x124024u) {
        ctx->pc = 0x124024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124020u;
        // 0x124024: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124028u;
        goto label_124028;
    }
    ctx->pc = 0x124020u;
    {
        const bool branch_taken_0x124020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124020u;
        // 0x124024: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124020) {
            ctx->pc = 0x124518u;
            goto label_124518;
        }
    }
    ctx->pc = 0x124028u;
label_124028:
    // 0x124028: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x124028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_12402c:
    // 0x12402c: 0xa62205e2  sh          $v0, 0x5E2($s1)
    ctx->pc = 0x12402cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 2));
label_124030:
    // 0x124030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124034:
    // 0x124034: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x124034u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_124038:
    // 0x124038: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x124038u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_12403c:
    // 0x12403c: 0x10000126  b           . + 4 + (0x126 << 2)
label_124040:
    if (ctx->pc == 0x124040u) {
        ctx->pc = 0x124040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12403Cu;
        // 0x124040: 0xa62005e0  sh          $zero, 0x5E0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124044u;
        goto label_124044;
    }
    ctx->pc = 0x12403Cu;
    {
        const bool branch_taken_0x12403c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12403Cu;
        // 0x124040: 0xa62005e0  sh          $zero, 0x5E0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12403c) {
            ctx->pc = 0x1244D8u;
            goto label_1244d8;
        }
    }
    ctx->pc = 0x124044u;
label_124044:
    // 0x124044: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x124044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_124048:
    // 0x124048: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x124048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_12404c:
    // 0x12404c: 0x1440011f  bnez        $v0, . + 4 + (0x11F << 2)
label_124050:
    if (ctx->pc == 0x124050u) {
        ctx->pc = 0x124050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12404Cu;
        // 0x124050: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124054u;
        goto label_124054;
    }
    ctx->pc = 0x12404Cu;
    {
        const bool branch_taken_0x12404c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12404Cu;
        // 0x124050: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12404c) {
            ctx->pc = 0x1244CCu;
            goto label_1244cc;
        }
    }
    ctx->pc = 0x124054u;
label_124054:
    // 0x124054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124058:
    // 0x124058: 0xc04b000  jal         func_12C000
label_12405c:
    if (ctx->pc == 0x12405Cu) {
        ctx->pc = 0x12405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124058u;
        // 0x12405c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124060u;
        goto label_124060;
    }
    ctx->pc = 0x124058u;
    SET_GPR_U32(ctx, 31, 0x124060u);
    ctx->pc = 0x12405Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124058u;
    // 0x12405c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C000u, 0x124058u, 0x124060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124060u;
label_124060:
    // 0x124060: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_124064:
    if (ctx->pc == 0x124064u) {
        ctx->pc = 0x124064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124060u;
        // 0x124064: 0x962205e2  lhu         $v0, 0x5E2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1506)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124068u;
        goto label_124068;
    }
    ctx->pc = 0x124060u;
    {
        const bool branch_taken_0x124060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124060) {
            ctx->pc = 0x124064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124060u;
            // 0x124064: 0x962205e2  lhu         $v0, 0x5E2($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1506)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124084u;
            goto label_124084;
        }
    }
    ctx->pc = 0x124068u;
label_124068:
    // 0x124068: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
label_12406c:
    if (ctx->pc == 0x12406Cu) {
        ctx->pc = 0x12406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124068u;
        // 0x12406c: 0x962205e2  lhu         $v0, 0x5E2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1506)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124070u;
        goto label_124070;
    }
    ctx->pc = 0x124068u;
    {
        const bool branch_taken_0x124068 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x124068) {
            ctx->pc = 0x12406Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124068u;
            // 0x12406c: 0x962205e2  lhu         $v0, 0x5E2($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1506)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124084u;
            goto label_124084;
        }
    }
    ctx->pc = 0x124070u;
label_124070:
    // 0x124070: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x124070u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_124074:
    // 0x124074: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x124074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_124078:
    // 0x124078: 0x10400128  beqz        $v0, . + 4 + (0x128 << 2)
label_12407c:
    if (ctx->pc == 0x12407Cu) {
        ctx->pc = 0x12407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124078u;
        // 0x12407c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124080u;
        goto label_124080;
    }
    ctx->pc = 0x124078u;
    {
        const bool branch_taken_0x124078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124078u;
        // 0x12407c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124078) {
            ctx->pc = 0x12451Cu;
            goto label_12451c;
        }
    }
    ctx->pc = 0x124080u;
label_124080:
    // 0x124080: 0x962205e2  lhu         $v0, 0x5E2($s1)
    ctx->pc = 0x124080u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1506)));
label_124084:
    // 0x124084: 0x10400111  beqz        $v0, . + 4 + (0x111 << 2)
label_124088:
    if (ctx->pc == 0x124088u) {
        ctx->pc = 0x124088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124084u;
        // 0x124088: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12408Cu;
        goto label_12408c;
    }
    ctx->pc = 0x124084u;
    {
        const bool branch_taken_0x124084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124084u;
        // 0x124088: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124084) {
            ctx->pc = 0x1244CCu;
            goto label_1244cc;
        }
    }
    ctx->pc = 0x12408Cu;
label_12408c:
    // 0x12408c: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x12408cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
label_124090:
    // 0x124090: 0x1000010e  b           . + 4 + (0x10E << 2)
label_124094:
    if (ctx->pc == 0x124094u) {
        ctx->pc = 0x124094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124090u;
        // 0x124094: 0xa62005e0  sh          $zero, 0x5E0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124098u;
        goto label_124098;
    }
    ctx->pc = 0x124090u;
    {
        const bool branch_taken_0x124090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124090u;
        // 0x124094: 0xa62005e0  sh          $zero, 0x5E0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124090) {
            ctx->pc = 0x1244CCu;
            goto label_1244cc;
        }
    }
    ctx->pc = 0x124098u;
label_124098:
    // 0x124098: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x124098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_12409c:
    // 0x12409c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1240a0:
    // 0x1240a0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1240a4:
    if (ctx->pc == 0x1240A4u) {
        ctx->pc = 0x1240A8u;
        goto label_1240a8;
    }
    ctx->pc = 0x1240A0u;
    {
        const bool branch_taken_0x1240a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1240a0) {
            ctx->pc = 0x1240DCu;
            goto label_1240dc;
        }
    }
    ctx->pc = 0x1240A8u;
label_1240a8:
    // 0x1240a8: 0x8e2206a0  lw          $v0, 0x6A0($s1)
    ctx->pc = 0x1240a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_1240ac:
    // 0x1240ac: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1240b0:
    if (ctx->pc == 0x1240B0u) {
        ctx->pc = 0x1240B4u;
        goto label_1240b4;
    }
    ctx->pc = 0x1240ACu;
    {
        const bool branch_taken_0x1240ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1240ac) {
            ctx->pc = 0x1240DCu;
            goto label_1240dc;
        }
    }
    ctx->pc = 0x1240B4u;
label_1240b4:
    // 0x1240b4: 0xde2202f0  ld          $v0, 0x2F0($s1)
    ctx->pc = 0x1240b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
label_1240b8:
    // 0x1240b8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1240b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1240bc:
    // 0x1240bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1240bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1240c0:
    // 0x1240c0: 0x3404a000  ori         $a0, $zero, 0xA000
    ctx->pc = 0x1240c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
label_1240c4:
    // 0x1240c4: 0x42738  dsll        $a0, $a0, 28
    ctx->pc = 0x1240c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 28);
label_1240c8:
    // 0x1240c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1240c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1240cc:
    // 0x1240cc: 0x10440112  beq         $v0, $a0, . + 4 + (0x112 << 2)
label_1240d0:
    if (ctx->pc == 0x1240D0u) {
        ctx->pc = 0x1240D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240CCu;
        // 0x1240d0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240D4u;
        goto label_1240d4;
    }
    ctx->pc = 0x1240CCu;
    {
        const bool branch_taken_0x1240cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1240D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240CCu;
        // 0x1240d0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240cc) {
            ctx->pc = 0x124518u;
            goto label_124518;
        }
    }
    ctx->pc = 0x1240D4u;
label_1240d4:
    // 0x1240d4: 0x100000fe  b           . + 4 + (0xFE << 2)
label_1240d8:
    if (ctx->pc == 0x1240D8u) {
        ctx->pc = 0x1240D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240D4u;
        // 0x1240d8: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240DCu;
        goto label_1240dc;
    }
    ctx->pc = 0x1240D4u;
    {
        const bool branch_taken_0x1240d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1240D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240D4u;
        // 0x1240d8: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240d4) {
            ctx->pc = 0x1244D0u;
            goto label_1244d0;
        }
    }
    ctx->pc = 0x1240DCu;
label_1240dc:
    // 0x1240dc: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
label_1240e0:
    if (ctx->pc == 0x1240E0u) {
        ctx->pc = 0x1240E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240DCu;
        // 0x1240e0: 0x8e2206a0  lw          $v0, 0x6A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1240E4u;
        goto label_1240e4;
    }
    ctx->pc = 0x1240DCu;
    {
        const bool branch_taken_0x1240dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1240dc) {
            ctx->pc = 0x1240E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1240DCu;
            // 0x1240e0: 0x8e2206a0  lw          $v0, 0x6A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1240F8u;
            goto label_1240f8;
        }
    }
    ctx->pc = 0x1240E4u;
label_1240e4:
    // 0x1240e4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x1240e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_1240e8:
    // 0x1240e8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1240e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1240ec:
    // 0x1240ec: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_1240f0:
    if (ctx->pc == 0x1240F0u) {
        ctx->pc = 0x1240F4u;
        goto label_1240f4;
    }
    ctx->pc = 0x1240ECu;
    {
        const bool branch_taken_0x1240ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1240ec) {
            ctx->pc = 0x124228u;
            goto label_124228;
        }
    }
    ctx->pc = 0x1240F4u;
label_1240f4:
    // 0x1240f4: 0x8e2206a0  lw          $v0, 0x6A0($s1)
    ctx->pc = 0x1240f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_1240f8:
    // 0x1240f8: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_1240fc:
    if (ctx->pc == 0x1240FCu) {
        ctx->pc = 0x124100u;
        goto label_124100;
    }
    ctx->pc = 0x1240F8u;
    {
        const bool branch_taken_0x1240f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1240f8) {
            ctx->pc = 0x124228u;
            goto label_124228;
        }
    }
    ctx->pc = 0x124100u;
label_124100:
    // 0x124100: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x124100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_124104:
    // 0x124104: 0x82230627  lb          $v1, 0x627($s1)
    ctx->pc = 0x124104u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1575)));
label_124108:
    // 0x124108: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x124108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_12410c:
    // 0x12410c: 0xae2215f4  sw          $v0, 0x15F4($s1)
    ctx->pc = 0x12410cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
label_124110:
    // 0x124110: 0x146000ee  bnez        $v1, . + 4 + (0xEE << 2)
label_124114:
    if (ctx->pc == 0x124114u) {
        ctx->pc = 0x124114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124110u;
        // 0x124114: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124118u;
        goto label_124118;
    }
    ctx->pc = 0x124110u;
    {
        const bool branch_taken_0x124110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x124114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124110u;
        // 0x124114: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124110) {
            ctx->pc = 0x1244CCu;
            goto label_1244cc;
        }
    }
    ctx->pc = 0x124118u;
label_124118:
    // 0x124118: 0x9222061e  lbu         $v0, 0x61E($s1)
    ctx->pc = 0x124118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1566)));
label_12411c:
    // 0x12411c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_124120:
    if (ctx->pc == 0x124120u) {
        ctx->pc = 0x124120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12411Cu;
        // 0x124120: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124124u;
        goto label_124124;
    }
    ctx->pc = 0x12411Cu;
    {
        const bool branch_taken_0x12411c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12411Cu;
        // 0x124120: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12411c) {
            ctx->pc = 0x124228u;
            goto label_124228;
        }
    }
    ctx->pc = 0x124124u;
label_124124:
    // 0x124124: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x124124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124128:
    // 0x124128: 0x24503050  addiu       $s0, $v0, 0x3050
    ctx->pc = 0x124128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
label_12412c:
    // 0x12412c: 0xc04e3e2  jal         func_138F88
label_124130:
    if (ctx->pc == 0x124130u) {
        ctx->pc = 0x124130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12412Cu;
        // 0x124130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124134u;
        goto label_124134;
    }
    ctx->pc = 0x12412Cu;
    SET_GPR_U32(ctx, 31, 0x124134u);
    ctx->pc = 0x124130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12412Cu;
    // 0x124130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138F88u, 0x12412Cu, 0x124134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124134u;
label_124134:
    // 0x124134: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_124138:
    if (ctx->pc == 0x124138u) {
        ctx->pc = 0x124138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124134u;
        // 0x124138: 0xc6210614  lwc1        $f1, 0x614($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12413Cu;
        goto label_12413c;
    }
    ctx->pc = 0x124134u;
    {
        const bool branch_taken_0x124134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124134) {
            ctx->pc = 0x124138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124134u;
            // 0x124138: 0xc6210614  lwc1        $f1, 0x614($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x124154u;
            goto label_124154;
        }
    }
    ctx->pc = 0x12413Cu;
label_12413c:
    // 0x12413c: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_124140:
    if (ctx->pc == 0x124140u) {
        ctx->pc = 0x124140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12413Cu;
        // 0x124140: 0xc6210614  lwc1        $f1, 0x614($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x124144u;
        goto label_124144;
    }
    ctx->pc = 0x12413Cu;
    {
        const bool branch_taken_0x12413c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12413c) {
            ctx->pc = 0x124140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12413Cu;
            // 0x124140: 0xc6210614  lwc1        $f1, 0x614($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x124154u;
            goto label_124154;
        }
    }
    ctx->pc = 0x124144u;
label_124144:
    // 0x124144: 0x8e020520  lw          $v0, 0x520($s0)
    ctx->pc = 0x124144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1312)));
label_124148:
    // 0x124148: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
label_12414c:
    if (ctx->pc == 0x12414Cu) {
        ctx->pc = 0x12414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124148u;
        // 0x12414c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124150u;
        goto label_124150;
    }
    ctx->pc = 0x124148u;
    {
        const bool branch_taken_0x124148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124148u;
        // 0x12414c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124148) {
            ctx->pc = 0x12451Cu;
            goto label_12451c;
        }
    }
    ctx->pc = 0x124150u;
label_124150:
    // 0x124150: 0xc6210614  lwc1        $f1, 0x614($s1)
    ctx->pc = 0x124150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_124154:
    // 0x124154: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x124154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_124158:
    // 0x124158: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x124158u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12415c:
    // 0x12415c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12415cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_124160:
    // 0x124160: 0x0  nop
    ctx->pc = 0x124160u;
    // NOP
label_124164:
    // 0x124164: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x124164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_124168:
    // 0x124168: 0x0  nop
    ctx->pc = 0x124168u;
    // NOP
label_12416c:
    // 0x12416c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_124170:
    if (ctx->pc == 0x124170u) {
        ctx->pc = 0x124170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12416Cu;
        // 0x124170: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124174u;
        goto label_124174;
    }
    ctx->pc = 0x12416Cu;
    {
        const bool branch_taken_0x12416c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12416Cu;
        // 0x124170: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12416c) {
            ctx->pc = 0x12418Cu;
            goto label_12418c;
        }
    }
    ctx->pc = 0x124174u;
label_124174:
    // 0x124174: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x124174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_124178:
    // 0x124178: 0xa2221603  sb          $v0, 0x1603($s1)
    ctx->pc = 0x124178u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5635), (uint8_t)GPR_U32(ctx, 2));
label_12417c:
    // 0x12417c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124180:
    // 0x124180: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x124180u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_124184:
    // 0x124184: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_124188:
    if (ctx->pc == 0x124188u) {
        ctx->pc = 0x124188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124184u;
        // 0x124188: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12418Cu;
        goto label_12418c;
    }
    ctx->pc = 0x124184u;
    {
        const bool branch_taken_0x124184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124184u;
        // 0x124188: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124184) {
            ctx->pc = 0x1244D8u;
            goto label_1244d8;
        }
    }
    ctx->pc = 0x12418Cu;
label_12418c:
    // 0x12418c: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x12418cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
label_124190:
    // 0x124190: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x124190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_124194:
    // 0x124194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x124194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_124198:
    // 0x124198: 0x0  nop
    ctx->pc = 0x124198u;
    // NOP
label_12419c:
    // 0x12419c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12419cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1241a0:
    // 0x1241a0: 0x0  nop
    ctx->pc = 0x1241a0u;
    // NOP
label_1241a4:
    // 0x1241a4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1241a8:
    if (ctx->pc == 0x1241A8u) {
        ctx->pc = 0x1241A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241A4u;
        // 0x1241a8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1241ACu;
        goto label_1241ac;
    }
    ctx->pc = 0x1241A4u;
    {
        const bool branch_taken_0x1241a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1241A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241A4u;
        // 0x1241a8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241a4) {
            ctx->pc = 0x1241CCu;
            goto label_1241cc;
        }
    }
    ctx->pc = 0x1241ACu;
label_1241ac:
    // 0x1241ac: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1241acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_1241b0:
    // 0x1241b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1241b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1241b4:
    // 0x1241b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1241b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1241b8:
    // 0x1241b8: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x1241b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_1241bc:
    // 0x1241bc: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x1241bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
label_1241c0:
    // 0x1241c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1241c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1241c4:
    // 0x1241c4: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_1241c8:
    if (ctx->pc == 0x1241C8u) {
        ctx->pc = 0x1241C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241C4u;
        // 0x1241c8: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1241CCu;
        goto label_1241cc;
    }
    ctx->pc = 0x1241C4u;
    {
        const bool branch_taken_0x1241c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1241C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241C4u;
        // 0x1241c8: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241c4) {
            ctx->pc = 0x1244D8u;
            goto label_1244d8;
        }
    }
    ctx->pc = 0x1241CCu;
label_1241cc:
    // 0x1241cc: 0xc6210610  lwc1        $f1, 0x610($s1)
    ctx->pc = 0x1241ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1241d0:
    // 0x1241d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1241d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1241d4:
    // 0x1241d4: 0x0  nop
    ctx->pc = 0x1241d4u;
    // NOP
label_1241d8:
    // 0x1241d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1241d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1241dc:
    // 0x1241dc: 0x0  nop
    ctx->pc = 0x1241dcu;
    // NOP
label_1241e0:
    // 0x1241e0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1241e4:
    if (ctx->pc == 0x1241E4u) {
        ctx->pc = 0x1241E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241E0u;
        // 0x1241e4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1241E8u;
        goto label_1241e8;
    }
    ctx->pc = 0x1241E0u;
    {
        const bool branch_taken_0x1241e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1241E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241E0u;
        // 0x1241e4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241e0) {
            ctx->pc = 0x124204u;
            goto label_124204;
        }
    }
    ctx->pc = 0x1241E8u;
label_1241e8:
    // 0x1241e8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1241e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_1241ec:
    // 0x1241ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1241ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1241f0:
    // 0x1241f0: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x1241f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_1241f4:
    // 0x1241f4: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x1241f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
label_1241f8:
    // 0x1241f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1241f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1241fc:
    // 0x1241fc: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_124200:
    if (ctx->pc == 0x124200u) {
        ctx->pc = 0x124200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241FCu;
        // 0x124200: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x124204u;
        goto label_124204;
    }
    ctx->pc = 0x1241FCu;
    {
        const bool branch_taken_0x1241fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1241FCu;
        // 0x124200: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241fc) {
            ctx->pc = 0x1244D8u;
            goto label_1244d8;
        }
    }
    ctx->pc = 0x124204u;
label_124204:
    // 0x124204: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x124204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_124208:
    // 0x124208: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x124208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_12420c:
    // 0x12420c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12420cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_124210:
    // 0x124210: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x124210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_124214:
    // 0x124214: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x124214u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_124218:
    // 0x124218: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x124218u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
label_12421c:
    // 0x12421c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12421cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124220:
    // 0x124220: 0x100000ad  b           . + 4 + (0xAD << 2)
label_124224:
    if (ctx->pc == 0x124224u) {
        ctx->pc = 0x124224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124220u;
        // 0x124224: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x124228u;
        goto label_124228;
    }
    ctx->pc = 0x124220u;
    {
        const bool branch_taken_0x124220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124220u;
        // 0x124224: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x124220) {
            ctx->pc = 0x1244D8u;
            goto label_1244d8;
        }
    }
    ctx->pc = 0x124228u;
label_124228:
    // 0x124228: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
label_12422c:
    if (ctx->pc == 0x12422Cu) {
        ctx->pc = 0x12422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124228u;
        // 0x12422c: 0x8e2215f4  lw          $v0, 0x15F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124230u;
        goto label_124230;
    }
    ctx->pc = 0x124228u;
    {
        const bool branch_taken_0x124228 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x124228) {
            ctx->pc = 0x12422Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124228u;
            // 0x12422c: 0x8e2215f4  lw          $v0, 0x15F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124244u;
            goto label_124244;
        }
    }
    ctx->pc = 0x124230u;
label_124230:
    // 0x124230: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x124230u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_124234:
    // 0x124234: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x124234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_124238:
    // 0x124238: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_12423c:
    if (ctx->pc == 0x12423Cu) {
        ctx->pc = 0x124240u;
        goto label_124240;
    }
    ctx->pc = 0x124238u;
    {
        const bool branch_taken_0x124238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124238) {
            ctx->pc = 0x124288u;
            goto label_124288;
        }
    }
    ctx->pc = 0x124240u;
label_124240:
    // 0x124240: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x124240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_124244:
    // 0x124244: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x124244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_124248:
    // 0x124248: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x124248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_12424c:
    // 0x12424c: 0xae2215f4  sw          $v0, 0x15F4($s1)
    ctx->pc = 0x12424cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
label_124250:
    // 0x124250: 0x8c8374a8  lw          $v1, 0x74A8($a0)
    ctx->pc = 0x124250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29864)));
label_124254:
    // 0x124254: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x124254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_124258:
    // 0x124258: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_12425c:
    if (ctx->pc == 0x12425Cu) {
        ctx->pc = 0x124260u;
        goto label_124260;
    }
    ctx->pc = 0x124258u;
    {
        const bool branch_taken_0x124258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124258) {
            ctx->pc = 0x124288u;
            goto label_124288;
        }
    }
    ctx->pc = 0x124260u;
label_124260:
    // 0x124260: 0xde2202f0  ld          $v0, 0x2F0($s1)
    ctx->pc = 0x124260u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
label_124264:
    // 0x124264: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x124264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_124268:
    // 0x124268: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x124268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_12426c:
    // 0x12426c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x12426cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_124270:
    // 0x124270: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x124270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
label_124274:
    // 0x124274: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x124274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_124278:
    // 0x124278: 0x104400a7  beq         $v0, $a0, . + 4 + (0xA7 << 2)
label_12427c:
    if (ctx->pc == 0x12427Cu) {
        ctx->pc = 0x12427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124278u;
        // 0x12427c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124280u;
        goto label_124280;
    }
    ctx->pc = 0x124278u;
    {
        const bool branch_taken_0x124278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x12427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124278u;
        // 0x12427c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124278) {
            ctx->pc = 0x124518u;
            goto label_124518;
        }
    }
    ctx->pc = 0x124280u;
label_124280:
    // 0x124280: 0x10000093  b           . + 4 + (0x93 << 2)
label_124284:
    if (ctx->pc == 0x124284u) {
        ctx->pc = 0x124284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124280u;
        // 0x124284: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124288u;
        goto label_124288;
    }
    ctx->pc = 0x124280u;
    {
        const bool branch_taken_0x124280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124280u;
        // 0x124284: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124280) {
            ctx->pc = 0x1244D0u;
            goto label_1244d0;
        }
    }
    ctx->pc = 0x124288u;
label_124288:
    // 0x124288: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
label_12428c:
    if (ctx->pc == 0x12428Cu) {
        ctx->pc = 0x12428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124288u;
        // 0x12428c: 0x8e2206a0  lw          $v0, 0x6A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124290u;
        goto label_124290;
    }
    ctx->pc = 0x124288u;
    {
        const bool branch_taken_0x124288 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x124288) {
            ctx->pc = 0x12428Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124288u;
            // 0x12428c: 0x8e2206a0  lw          $v0, 0x6A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1242A4u;
            goto label_1242a4;
        }
    }
    ctx->pc = 0x124290u;
label_124290:
    // 0x124290: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x124290u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_124294:
    // 0x124294: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x124294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_124298:
    // 0x124298: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_12429c:
    if (ctx->pc == 0x12429Cu) {
        ctx->pc = 0x1242A0u;
        goto label_1242a0;
    }
    ctx->pc = 0x124298u;
    {
        const bool branch_taken_0x124298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124298) {
            ctx->pc = 0x1242C4u;
            goto label_1242c4;
        }
    }
    ctx->pc = 0x1242A0u;
label_1242a0:
    // 0x1242a0: 0x8e2206a0  lw          $v0, 0x6A0($s1)
    ctx->pc = 0x1242a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_1242a4:
    // 0x1242a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1242a8:
    if (ctx->pc == 0x1242A8u) {
        ctx->pc = 0x1242ACu;
        goto label_1242ac;
    }
    ctx->pc = 0x1242A4u;
    {
        const bool branch_taken_0x1242a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1242a4) {
            ctx->pc = 0x1242C4u;
            goto label_1242c4;
        }
    }
    ctx->pc = 0x1242ACu;
label_1242ac:
    // 0x1242ac: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x1242acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_1242b0:
    // 0x1242b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1242b4:
    if (ctx->pc == 0x1242B4u) {
        ctx->pc = 0x1242B8u;
        goto label_1242b8;
    }
    ctx->pc = 0x1242B0u;
    {
        const bool branch_taken_0x1242b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1242b0) {
            ctx->pc = 0x1242C4u;
            goto label_1242c4;
        }
    }
    ctx->pc = 0x1242B8u;
label_1242b8:
    // 0x1242b8: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x1242b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_1242bc:
    // 0x1242bc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1242bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_1242c0:
    // 0x1242c0: 0xae2215f4  sw          $v0, 0x15F4($s1)
    ctx->pc = 0x1242c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
label_1242c4:
    // 0x1242c4: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
label_1242c8:
    if (ctx->pc == 0x1242C8u) {
        ctx->pc = 0x1242C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242C4u;
        // 0x1242c8: 0x8e2215f4  lw          $v0, 0x15F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1242CCu;
        goto label_1242cc;
    }
    ctx->pc = 0x1242C4u;
    {
        const bool branch_taken_0x1242c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1242c4) {
            ctx->pc = 0x1242C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1242C4u;
            // 0x1242c8: 0x8e2215f4  lw          $v0, 0x15F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1242E0u;
            goto label_1242e0;
        }
    }
    ctx->pc = 0x1242CCu;
label_1242cc:
    // 0x1242cc: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x1242ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_1242d0:
    // 0x1242d0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1242d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1242d4:
    // 0x1242d4: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_1242d8:
    if (ctx->pc == 0x1242D8u) {
        ctx->pc = 0x1242D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242D4u;
        // 0x1242d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1242DCu;
        goto label_1242dc;
    }
    ctx->pc = 0x1242D4u;
    {
        const bool branch_taken_0x1242d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1242D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242D4u;
        // 0x1242d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242d4) {
            ctx->pc = 0x12451Cu;
            goto label_12451c;
        }
    }
    ctx->pc = 0x1242DCu;
label_1242dc:
    // 0x1242dc: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x1242dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_1242e0:
    // 0x1242e0: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1242e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_1242e4:
    // 0x1242e4: 0x30430020  andi        $v1, $v0, 0x20
    ctx->pc = 0x1242e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1242e8:
    // 0x1242e8: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_1242ec:
    if (ctx->pc == 0x1242ECu) {
        ctx->pc = 0x1242ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242E8u;
        // 0x1242ec: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1242F0u;
        goto label_1242f0;
    }
    ctx->pc = 0x1242E8u;
    {
        const bool branch_taken_0x1242e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1242ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242E8u;
        // 0x1242ec: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242e8) {
            ctx->pc = 0x124378u;
            goto label_124378;
        }
    }
    ctx->pc = 0x1242F0u;
label_1242f0:
    // 0x1242f0: 0x8e2206a0  lw          $v0, 0x6A0($s1)
    ctx->pc = 0x1242f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_1242f4:
    // 0x1242f4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1242f8:
    if (ctx->pc == 0x1242F8u) {
        ctx->pc = 0x1242FCu;
        goto label_1242fc;
    }
    ctx->pc = 0x1242F4u;
    {
        const bool branch_taken_0x1242f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1242f4) {
            ctx->pc = 0x124370u;
            goto label_124370;
        }
    }
    ctx->pc = 0x1242FCu;
label_1242fc:
    // 0x1242fc: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x1242fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_124300:
    // 0x124300: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_124304:
    if (ctx->pc == 0x124304u) {
        ctx->pc = 0x124304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124300u;
        // 0x124304: 0x8e2206a0  lw          $v0, 0x6A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124308u;
        goto label_124308;
    }
    ctx->pc = 0x124300u;
    {
        const bool branch_taken_0x124300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124300) {
            ctx->pc = 0x124304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124300u;
            // 0x124304: 0x8e2206a0  lw          $v0, 0x6A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124344u;
            goto label_124344;
        }
    }
    ctx->pc = 0x124308u;
label_124308:
    // 0x124308: 0xc04a984  jal         func_12A610
label_12430c:
    if (ctx->pc == 0x12430Cu) {
        ctx->pc = 0x12430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124308u;
        // 0x12430c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124310u;
        goto label_124310;
    }
    ctx->pc = 0x124308u;
    SET_GPR_U32(ctx, 31, 0x124310u);
    ctx->pc = 0x12430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124308u;
    // 0x12430c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A610u, 0x124308u, 0x124310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124310u;
label_124310:
    // 0x124310: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_124314:
    if (ctx->pc == 0x124314u) {
        ctx->pc = 0x124314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124310u;
        // 0x124314: 0xae22069c  sw          $v0, 0x69C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124318u;
        goto label_124318;
    }
    ctx->pc = 0x124310u;
    {
        const bool branch_taken_0x124310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124310u;
        // 0x124314: 0xae22069c  sw          $v0, 0x69C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124310) {
            ctx->pc = 0x124340u;
            goto label_124340;
        }
    }
    ctx->pc = 0x124318u;
label_124318:
    // 0x124318: 0xc0741fa  jal         func_1D07E8
label_12431c:
    if (ctx->pc == 0x12431Cu) {
        ctx->pc = 0x12431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124318u;
        // 0x12431c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124320u;
        goto label_124320;
    }
    ctx->pc = 0x124318u;
    SET_GPR_U32(ctx, 31, 0x124320u);
    ctx->pc = 0x12431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124318u;
    // 0x12431c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D07E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D07E8u, 0x124318u, 0x124320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124320u;
label_124320:
    // 0x124320: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_124324:
    if (ctx->pc == 0x124324u) {
        ctx->pc = 0x124324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124320u;
        // 0x124324: 0x8e22069c  lw          $v0, 0x69C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124328u;
        goto label_124328;
    }
    ctx->pc = 0x124320u;
    {
        const bool branch_taken_0x124320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124320u;
        // 0x124324: 0x8e22069c  lw          $v0, 0x69C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124320) {
            ctx->pc = 0x124338u;
            goto label_124338;
        }
    }
    ctx->pc = 0x124328u;
label_124328:
    // 0x124328: 0xc0b6fec  jal         func_2DBFB0
label_12432c:
    if (ctx->pc == 0x12432Cu) {
        ctx->pc = 0x12432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124328u;
        // 0x12432c: 0x8c4400f0  lw          $a0, 0xF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124330u;
        goto label_124330;
    }
    ctx->pc = 0x124328u;
    SET_GPR_U32(ctx, 31, 0x124330u);
    ctx->pc = 0x12432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124328u;
    // 0x12432c: 0x8c4400f0  lw          $a0, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBFB0u, 0x124328u, 0x124330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124330u;
label_124330:
    // 0x124330: 0x10000004  b           . + 4 + (0x4 << 2)
label_124334:
    if (ctx->pc == 0x124334u) {
        ctx->pc = 0x124334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124330u;
        // 0x124334: 0x8e2206a0  lw          $v0, 0x6A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124338u;
        goto label_124338;
    }
    ctx->pc = 0x124330u;
    {
        const bool branch_taken_0x124330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124330u;
        // 0x124334: 0x8e2206a0  lw          $v0, 0x6A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124330) {
            ctx->pc = 0x124344u;
            goto label_124344;
        }
    }
    ctx->pc = 0x124338u;
label_124338:
    // 0x124338: 0xc0b6f50  jal         func_2DBD40
label_12433c:
    if (ctx->pc == 0x12433Cu) {
        ctx->pc = 0x12433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124338u;
        // 0x12433c: 0x8c4400f0  lw          $a0, 0xF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124340u;
        goto label_124340;
    }
    ctx->pc = 0x124338u;
    SET_GPR_U32(ctx, 31, 0x124340u);
    ctx->pc = 0x12433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124338u;
    // 0x12433c: 0x8c4400f0  lw          $a0, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBD40u, 0x124338u, 0x124340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124340u;
label_124340:
    // 0x124340: 0x8e2206a0  lw          $v0, 0x6A0($s1)
    ctx->pc = 0x124340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_124344:
    // 0x124344: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_124348:
    if (ctx->pc == 0x124348u) {
        ctx->pc = 0x12434Cu;
        goto label_12434c;
    }
    ctx->pc = 0x124344u;
    {
        const bool branch_taken_0x124344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124344) {
            ctx->pc = 0x124370u;
            goto label_124370;
        }
    }
    ctx->pc = 0x12434Cu;
label_12434c:
    // 0x12434c: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x12434cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_124350:
    // 0x124350: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_124354:
    if (ctx->pc == 0x124354u) {
        ctx->pc = 0x124358u;
        goto label_124358;
    }
    ctx->pc = 0x124350u;
    {
        const bool branch_taken_0x124350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124350) {
            ctx->pc = 0x124370u;
            goto label_124370;
        }
    }
    ctx->pc = 0x124358u;
label_124358:
    // 0x124358: 0xc04acca  jal         func_12B328
label_12435c:
    if (ctx->pc == 0x12435Cu) {
        ctx->pc = 0x12435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124358u;
        // 0x12435c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124360u;
        goto label_124360;
    }
    ctx->pc = 0x124358u;
    SET_GPR_U32(ctx, 31, 0x124360u);
    ctx->pc = 0x12435Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124358u;
    // 0x12435c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B328u, 0x124358u, 0x124360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124360u;
label_124360:
    // 0x124360: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_124364:
    if (ctx->pc == 0x124364u) {
        ctx->pc = 0x124364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124360u;
        // 0x124364: 0xae2206a4  sw          $v0, 0x6A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124368u;
        goto label_124368;
    }
    ctx->pc = 0x124360u;
    {
        const bool branch_taken_0x124360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124360u;
        // 0x124364: 0xae2206a4  sw          $v0, 0x6A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124360) {
            ctx->pc = 0x124370u;
            goto label_124370;
        }
    }
    ctx->pc = 0x124368u;
label_124368:
    // 0x124368: 0xc0b7042  jal         func_2DC108
label_12436c:
    if (ctx->pc == 0x12436Cu) {
        ctx->pc = 0x12436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124368u;
        // 0x12436c: 0x8c4400f0  lw          $a0, 0xF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124370u;
        goto label_124370;
    }
    ctx->pc = 0x124368u;
    SET_GPR_U32(ctx, 31, 0x124370u);
    ctx->pc = 0x12436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124368u;
    // 0x12436c: 0x8c4400f0  lw          $a0, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC108u, 0x124368u, 0x124370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124370u;
label_124370:
    // 0x124370: 0xc04b1d6  jal         func_12C758
label_124374:
    if (ctx->pc == 0x124374u) {
        ctx->pc = 0x124374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124370u;
        // 0x124374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124378u;
        goto label_124378;
    }
    ctx->pc = 0x124370u;
    SET_GPR_U32(ctx, 31, 0x124378u);
    ctx->pc = 0x124374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124370u;
    // 0x124374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C758u, 0x124370u, 0x124378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124378u;
label_124378:
    // 0x124378: 0x9222061f  lbu         $v0, 0x61F($s1)
    ctx->pc = 0x124378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
label_12437c:
    // 0x12437c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_124380:
    if (ctx->pc == 0x124380u) {
        ctx->pc = 0x124380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12437Cu;
        // 0x124380: 0xc6210608  lwc1        $f1, 0x608($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x124384u;
        goto label_124384;
    }
    ctx->pc = 0x12437Cu;
    {
        const bool branch_taken_0x12437c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12437c) {
            ctx->pc = 0x124380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12437Cu;
            // 0x124380: 0xc6210608  lwc1        $f1, 0x608($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1243ACu;
            goto label_1243ac;
        }
    }
    ctx->pc = 0x124384u;
label_124384:
    // 0x124384: 0x16400065  bnez        $s2, . + 4 + (0x65 << 2)
label_124388:
    if (ctx->pc == 0x124388u) {
        ctx->pc = 0x124388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124384u;
        // 0x124388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12438Cu;
        goto label_12438c;
    }
    ctx->pc = 0x124384u;
    {
        const bool branch_taken_0x124384 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x124388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124384u;
        // 0x124388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124384) {
            ctx->pc = 0x12451Cu;
            goto label_12451c;
        }
    }
    ctx->pc = 0x12438Cu;
label_12438c:
    // 0x12438c: 0x82221601  lb          $v0, 0x1601($s1)
    ctx->pc = 0x12438cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5633)));
label_124390:
    // 0x124390: 0x1c400062  bgtz        $v0, . + 4 + (0x62 << 2)
label_124394:
    if (ctx->pc == 0x124394u) {
        ctx->pc = 0x124394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124390u;
        // 0x124394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124398u;
        goto label_124398;
    }
    ctx->pc = 0x124390u;
    {
        const bool branch_taken_0x124390 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x124394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124390u;
        // 0x124394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124390) {
            ctx->pc = 0x12451Cu;
            goto label_12451c;
        }
    }
    ctx->pc = 0x124398u;
label_124398:
    // 0x124398: 0x82221602  lb          $v0, 0x1602($s1)
    ctx->pc = 0x124398u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5634)));
label_12439c:
    // 0x12439c: 0x1c40005f  bgtz        $v0, . + 4 + (0x5F << 2)
label_1243a0:
    if (ctx->pc == 0x1243A0u) {
        ctx->pc = 0x1243A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12439Cu;
        // 0x1243a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1243A4u;
        goto label_1243a4;
    }
    ctx->pc = 0x12439Cu;
    {
        const bool branch_taken_0x12439c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1243A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12439Cu;
        // 0x1243a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12439c) {
            ctx->pc = 0x12451Cu;
            goto label_12451c;
        }
    }
    ctx->pc = 0x1243A4u;
label_1243a4:
    // 0x1243a4: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1243a8:
    if (ctx->pc == 0x1243A8u) {
        ctx->pc = 0x1243A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243A4u;
        // 0x1243a8: 0xde2202f0  ld          $v0, 0x2F0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1243ACu;
        goto label_1243ac;
    }
    ctx->pc = 0x1243A4u;
    {
        const bool branch_taken_0x1243a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243A4u;
        // 0x1243a8: 0xde2202f0  ld          $v0, 0x2F0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243a4) {
            ctx->pc = 0x1244E4u;
            goto label_1244e4;
        }
    }
    ctx->pc = 0x1243ACu;
label_1243ac:
    // 0x1243ac: 0x3c013f9c  lui         $at, 0x3F9C
    ctx->pc = 0x1243acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16284 << 16));
label_1243b0:
    // 0x1243b0: 0x342161aa  ori         $at, $at, 0x61AA
    ctx->pc = 0x1243b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25002);
label_1243b4:
    // 0x1243b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1243b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1243b8:
    // 0x1243b8: 0x0  nop
    ctx->pc = 0x1243b8u;
    // NOP
label_1243bc:
    // 0x1243bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1243bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1243c0:
    // 0x1243c0: 0x0  nop
    ctx->pc = 0x1243c0u;
    // NOP
label_1243c4:
    // 0x1243c4: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_1243c8:
    if (ctx->pc == 0x1243C8u) {
        ctx->pc = 0x1243CCu;
        goto label_1243cc;
    }
    ctx->pc = 0x1243C4u;
    {
        const bool branch_taken_0x1243c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1243c4) {
            ctx->pc = 0x124484u;
            goto label_124484;
        }
    }
    ctx->pc = 0x1243CCu;
label_1243cc:
    // 0x1243cc: 0xc621060c  lwc1        $f1, 0x60C($s1)
    ctx->pc = 0x1243ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1243d0:
    // 0x1243d0: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x1243d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_1243d4:
    // 0x1243d4: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1243d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_1243d8:
    // 0x1243d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1243d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1243dc:
    // 0x1243dc: 0x0  nop
    ctx->pc = 0x1243dcu;
    // NOP
label_1243e0:
    // 0x1243e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1243e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1243e4:
    // 0x1243e4: 0x0  nop
    ctx->pc = 0x1243e4u;
    // NOP
label_1243e8:
    // 0x1243e8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_1243ec:
    if (ctx->pc == 0x1243ECu) {
        ctx->pc = 0x1243ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243E8u;
        // 0x1243ec: 0xde2202f0  ld          $v0, 0x2F0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1243F0u;
        goto label_1243f0;
    }
    ctx->pc = 0x1243E8u;
    {
        const bool branch_taken_0x1243e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1243ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243E8u;
        // 0x1243ec: 0xde2202f0  ld          $v0, 0x2F0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243e8) {
            ctx->pc = 0x124424u;
            goto label_124424;
        }
    }
    ctx->pc = 0x1243F0u;
label_1243f0:
    // 0x1243f0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1243f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1243f4:
    // 0x1243f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1243f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1243f8:
    // 0x1243f8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1243f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1243fc:
    // 0x1243fc: 0x42678  dsll        $a0, $a0, 25
    ctx->pc = 0x1243fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 25);
label_124400:
    // 0x124400: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x124400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_124404:
    // 0x124404: 0x10440045  beq         $v0, $a0, . + 4 + (0x45 << 2)
label_124408:
    if (ctx->pc == 0x124408u) {
        ctx->pc = 0x124408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124404u;
        // 0x124408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12440Cu;
        goto label_12440c;
    }
    ctx->pc = 0x124404u;
    {
        const bool branch_taken_0x124404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x124408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124404u;
        // 0x124408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124404) {
            ctx->pc = 0x12451Cu;
            goto label_12451c;
        }
    }
    ctx->pc = 0x12440Cu;
label_12440c:
    // 0x12440c: 0xc04afee  jal         func_12BFB8
label_124410:
    if (ctx->pc == 0x124410u) {
        ctx->pc = 0x124410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12440Cu;
        // 0x124410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124414u;
        goto label_124414;
    }
    ctx->pc = 0x12440Cu;
    SET_GPR_U32(ctx, 31, 0x124414u);
    ctx->pc = 0x124410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12440Cu;
    // 0x124410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BFB8u, 0x12440Cu, 0x124414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124414u;
label_124414:
    // 0x124414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124418:
    // 0x124418: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x124418u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_12441c:
    // 0x12441c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_124420:
    if (ctx->pc == 0x124420u) {
        ctx->pc = 0x124420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12441Cu;
        // 0x124420: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124424u;
        goto label_124424;
    }
    ctx->pc = 0x12441Cu;
    {
        const bool branch_taken_0x12441c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12441Cu;
        // 0x124420: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12441c) {
            ctx->pc = 0x1244D8u;
            goto label_1244d8;
        }
    }
    ctx->pc = 0x124424u;
label_124424:
    // 0x124424: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x124424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_124428:
    // 0x124428: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x124428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_12442c:
    // 0x12442c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x12442cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_124430:
    // 0x124430: 0x426b8  dsll        $a0, $a0, 26
    ctx->pc = 0x124430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 26);
label_124434:
    // 0x124434: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x124434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_124438:
    // 0x124438: 0x10440038  beq         $v0, $a0, . + 4 + (0x38 << 2)
label_12443c:
    if (ctx->pc == 0x12443Cu) {
        ctx->pc = 0x12443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124438u;
        // 0x12443c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124440u;
        goto label_124440;
    }
    ctx->pc = 0x124438u;
    {
        const bool branch_taken_0x124438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x12443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124438u;
        // 0x12443c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124438) {
            ctx->pc = 0x12451Cu;
            goto label_12451c;
        }
    }
    ctx->pc = 0x124440u;
label_124440:
    // 0x124440: 0xc04afee  jal         func_12BFB8
label_124444:
    if (ctx->pc == 0x124444u) {
        ctx->pc = 0x124444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124440u;
        // 0x124444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124448u;
        goto label_124448;
    }
    ctx->pc = 0x124440u;
    SET_GPR_U32(ctx, 31, 0x124448u);
    ctx->pc = 0x124444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124440u;
    // 0x124444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BFB8u, 0x124440u, 0x124448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124448u;
label_124448:
    // 0x124448: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x124448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_12444c:
    // 0x12444c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x12444cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_124450:
    // 0x124450: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_124454:
    if (ctx->pc == 0x124454u) {
        ctx->pc = 0x124454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124450u;
        // 0x124454: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124458u;
        goto label_124458;
    }
    ctx->pc = 0x124450u;
    {
        const bool branch_taken_0x124450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124450u;
        // 0x124454: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124450) {
            ctx->pc = 0x124468u;
            goto label_124468;
        }
    }
    ctx->pc = 0x124458u;
label_124458:
    // 0x124458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12445c:
    // 0x12445c: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x12445cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
label_124460:
    // 0x124460: 0x10000004  b           . + 4 + (0x4 << 2)
label_124464:
    if (ctx->pc == 0x124464u) {
        ctx->pc = 0x124464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124460u;
        // 0x124464: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124468u;
        goto label_124468;
    }
    ctx->pc = 0x124460u;
    {
        const bool branch_taken_0x124460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124460u;
        // 0x124464: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124460) {
            ctx->pc = 0x124474u;
            goto label_124474;
        }
    }
    ctx->pc = 0x124468u;
label_124468:
    // 0x124468: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x124468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12446c:
    // 0x12446c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x12446cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_124470:
    // 0x124470: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x124470u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_124474:
    // 0x124474: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x124474u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_124478:
    // 0x124478: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x124478u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_12447c:
    // 0x12447c: 0x10000027  b           . + 4 + (0x27 << 2)
label_124480:
    if (ctx->pc == 0x124480u) {
        ctx->pc = 0x124480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12447Cu;
        // 0x124480: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124484u;
        goto label_124484;
    }
    ctx->pc = 0x12447Cu;
    {
        const bool branch_taken_0x12447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12447Cu;
        // 0x124480: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12447c) {
            ctx->pc = 0x12451Cu;
            goto label_12451c;
        }
    }
    ctx->pc = 0x124484u;
label_124484:
    // 0x124484: 0x3c014006  lui         $at, 0x4006
    ctx->pc = 0x124484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16390 << 16));
label_124488:
    // 0x124488: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x124488u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_12448c:
    // 0x12448c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12448cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_124490:
    // 0x124490: 0x0  nop
    ctx->pc = 0x124490u;
    // NOP
label_124494:
    // 0x124494: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x124494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_124498:
    // 0x124498: 0x0  nop
    ctx->pc = 0x124498u;
    // NOP
label_12449c:
    // 0x12449c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1244a0:
    if (ctx->pc == 0x1244A0u) {
        ctx->pc = 0x1244A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12449Cu;
        // 0x1244a0: 0xde2202f0  ld          $v0, 0x2F0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244A4u;
        goto label_1244a4;
    }
    ctx->pc = 0x12449Cu;
    {
        const bool branch_taken_0x12449c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1244A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12449Cu;
        // 0x1244a0: 0xde2202f0  ld          $v0, 0x2F0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12449c) {
            ctx->pc = 0x1244E4u;
            goto label_1244e4;
        }
    }
    ctx->pc = 0x1244A4u;
label_1244a4:
    // 0x1244a4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1244a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1244a8:
    // 0x1244a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1244a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1244ac:
    // 0x1244ac: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x1244acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
label_1244b0:
    // 0x1244b0: 0x426b8  dsll        $a0, $a0, 26
    ctx->pc = 0x1244b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 26);
label_1244b4:
    // 0x1244b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1244b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1244b8:
    // 0x1244b8: 0x10440018  beq         $v0, $a0, . + 4 + (0x18 << 2)
label_1244bc:
    if (ctx->pc == 0x1244BCu) {
        ctx->pc = 0x1244BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244B8u;
        // 0x1244bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244C0u;
        goto label_1244c0;
    }
    ctx->pc = 0x1244B8u;
    {
        const bool branch_taken_0x1244b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1244BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244B8u;
        // 0x1244bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244b8) {
            ctx->pc = 0x12451Cu;
            goto label_12451c;
        }
    }
    ctx->pc = 0x1244C0u;
label_1244c0:
    // 0x1244c0: 0xc04afee  jal         func_12BFB8
label_1244c4:
    if (ctx->pc == 0x1244C4u) {
        ctx->pc = 0x1244C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244C0u;
        // 0x1244c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244C8u;
        goto label_1244c8;
    }
    ctx->pc = 0x1244C0u;
    SET_GPR_U32(ctx, 31, 0x1244C8u);
    ctx->pc = 0x1244C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1244C0u;
    // 0x1244c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BFB8u, 0x1244C0u, 0x1244C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1244C8u;
label_1244c8:
    // 0x1244c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1244c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1244cc:
    // 0x1244cc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1244ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1244d0:
    // 0x1244d0: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x1244d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_1244d4:
    // 0x1244d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1244d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1244d8:
    // 0x1244d8: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1244d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_1244dc:
    // 0x1244dc: 0x1000000f  b           . + 4 + (0xF << 2)
label_1244e0:
    if (ctx->pc == 0x1244E0u) {
        ctx->pc = 0x1244E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244DCu;
        // 0x1244e0: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244E4u;
        goto label_1244e4;
    }
    ctx->pc = 0x1244DCu;
    {
        const bool branch_taken_0x1244dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1244E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244DCu;
        // 0x1244e0: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244dc) {
            ctx->pc = 0x12451Cu;
            goto label_12451c;
        }
    }
    ctx->pc = 0x1244E4u;
label_1244e4:
    // 0x1244e4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1244e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1244e8:
    // 0x1244e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1244e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1244ec:
    // 0x1244ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1244ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1244f0:
    // 0x1244f0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1244f4:
    if (ctx->pc == 0x1244F4u) {
        ctx->pc = 0x1244F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244F0u;
        // 0x1244f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244F8u;
        goto label_1244f8;
    }
    ctx->pc = 0x1244F0u;
    {
        const bool branch_taken_0x1244f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1244F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244F0u;
        // 0x1244f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244f0) {
            ctx->pc = 0x12451Cu;
            goto label_12451c;
        }
    }
    ctx->pc = 0x1244F8u;
label_1244f8:
    // 0x1244f8: 0xc04afee  jal         func_12BFB8
label_1244fc:
    if (ctx->pc == 0x1244FCu) {
        ctx->pc = 0x1244FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244F8u;
        // 0x1244fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124500u;
        goto label_124500;
    }
    ctx->pc = 0x1244F8u;
    SET_GPR_U32(ctx, 31, 0x124500u);
    ctx->pc = 0x1244FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1244F8u;
    // 0x1244fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BFB8u, 0x1244F8u, 0x124500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124500u;
label_124500:
    // 0x124500: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x124500u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_124504:
    // 0x124504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124508:
    // 0x124508: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x124508u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_12450c:
    // 0x12450c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x12450cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_124510:
    // 0x124510: 0x10000002  b           . + 4 + (0x2 << 2)
label_124514:
    if (ctx->pc == 0x124514u) {
        ctx->pc = 0x124514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124510u;
        // 0x124514: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124518u;
        goto label_124518;
    }
    ctx->pc = 0x124510u;
    {
        const bool branch_taken_0x124510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124510u;
        // 0x124514: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124510) {
            ctx->pc = 0x12451Cu;
            goto label_12451c;
        }
    }
    ctx->pc = 0x124518u;
label_124518:
    // 0x124518: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x124518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12451c:
    // 0x12451c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x12451cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_124520:
    // 0x124520: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x124520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_124524:
    // 0x124524: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x124524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_124528:
    // 0x124528: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x124528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12452c:
    // 0x12452c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12452cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_124530:
    // 0x124530: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x124530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_124534:
    // 0x124534: 0x3e00008  jr          $ra
label_124538:
    if (ctx->pc == 0x124538u) {
        ctx->pc = 0x124538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124534u;
        // 0x124538: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12453Cu;
        goto label_12453c;
    }
    ctx->pc = 0x124534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124534u;
        // 0x124538: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12453Cu;
label_12453c:
    // 0x12453c: 0x0  nop
    ctx->pc = 0x12453cu;
    // NOP
    ctx->pc = 0x124540u;
}
