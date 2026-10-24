#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: ExtraInitialize__11cEventActor6eObjIdi
// Address: 0x7a9ab0 - 0x7aa9e8
void ExtraInitialize__11cEventActor6eObjIdi_0x7a9ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExtraInitialize__11cEventActor6eObjIdi_0x7a9ab0");
#endif

    switch (ctx->pc) {
        case 0x7a9ab0u: goto label_7a9ab0;
        case 0x7a9ab4u: goto label_7a9ab4;
        case 0x7a9ab8u: goto label_7a9ab8;
        case 0x7a9abcu: goto label_7a9abc;
        case 0x7a9ac0u: goto label_7a9ac0;
        case 0x7a9ac4u: goto label_7a9ac4;
        case 0x7a9ac8u: goto label_7a9ac8;
        case 0x7a9accu: goto label_7a9acc;
        case 0x7a9ad0u: goto label_7a9ad0;
        case 0x7a9ad4u: goto label_7a9ad4;
        case 0x7a9ad8u: goto label_7a9ad8;
        case 0x7a9adcu: goto label_7a9adc;
        case 0x7a9ae0u: goto label_7a9ae0;
        case 0x7a9ae4u: goto label_7a9ae4;
        case 0x7a9ae8u: goto label_7a9ae8;
        case 0x7a9aecu: goto label_7a9aec;
        case 0x7a9af0u: goto label_7a9af0;
        case 0x7a9af4u: goto label_7a9af4;
        case 0x7a9af8u: goto label_7a9af8;
        case 0x7a9afcu: goto label_7a9afc;
        case 0x7a9b00u: goto label_7a9b00;
        case 0x7a9b04u: goto label_7a9b04;
        case 0x7a9b08u: goto label_7a9b08;
        case 0x7a9b0cu: goto label_7a9b0c;
        case 0x7a9b10u: goto label_7a9b10;
        case 0x7a9b14u: goto label_7a9b14;
        case 0x7a9b18u: goto label_7a9b18;
        case 0x7a9b1cu: goto label_7a9b1c;
        case 0x7a9b20u: goto label_7a9b20;
        case 0x7a9b24u: goto label_7a9b24;
        case 0x7a9b28u: goto label_7a9b28;
        case 0x7a9b2cu: goto label_7a9b2c;
        case 0x7a9b30u: goto label_7a9b30;
        case 0x7a9b34u: goto label_7a9b34;
        case 0x7a9b38u: goto label_7a9b38;
        case 0x7a9b3cu: goto label_7a9b3c;
        case 0x7a9b40u: goto label_7a9b40;
        case 0x7a9b44u: goto label_7a9b44;
        case 0x7a9b48u: goto label_7a9b48;
        case 0x7a9b4cu: goto label_7a9b4c;
        case 0x7a9b50u: goto label_7a9b50;
        case 0x7a9b54u: goto label_7a9b54;
        case 0x7a9b58u: goto label_7a9b58;
        case 0x7a9b5cu: goto label_7a9b5c;
        case 0x7a9b60u: goto label_7a9b60;
        case 0x7a9b64u: goto label_7a9b64;
        case 0x7a9b68u: goto label_7a9b68;
        case 0x7a9b6cu: goto label_7a9b6c;
        case 0x7a9b70u: goto label_7a9b70;
        case 0x7a9b74u: goto label_7a9b74;
        case 0x7a9b78u: goto label_7a9b78;
        case 0x7a9b7cu: goto label_7a9b7c;
        case 0x7a9b80u: goto label_7a9b80;
        case 0x7a9b84u: goto label_7a9b84;
        case 0x7a9b88u: goto label_7a9b88;
        case 0x7a9b8cu: goto label_7a9b8c;
        case 0x7a9b90u: goto label_7a9b90;
        case 0x7a9b94u: goto label_7a9b94;
        case 0x7a9b98u: goto label_7a9b98;
        case 0x7a9b9cu: goto label_7a9b9c;
        case 0x7a9ba0u: goto label_7a9ba0;
        case 0x7a9ba4u: goto label_7a9ba4;
        case 0x7a9ba8u: goto label_7a9ba8;
        case 0x7a9bacu: goto label_7a9bac;
        case 0x7a9bb0u: goto label_7a9bb0;
        case 0x7a9bb4u: goto label_7a9bb4;
        case 0x7a9bb8u: goto label_7a9bb8;
        case 0x7a9bbcu: goto label_7a9bbc;
        case 0x7a9bc0u: goto label_7a9bc0;
        case 0x7a9bc4u: goto label_7a9bc4;
        case 0x7a9bc8u: goto label_7a9bc8;
        case 0x7a9bccu: goto label_7a9bcc;
        case 0x7a9bd0u: goto label_7a9bd0;
        case 0x7a9bd4u: goto label_7a9bd4;
        case 0x7a9bd8u: goto label_7a9bd8;
        case 0x7a9bdcu: goto label_7a9bdc;
        case 0x7a9be0u: goto label_7a9be0;
        case 0x7a9be4u: goto label_7a9be4;
        case 0x7a9be8u: goto label_7a9be8;
        case 0x7a9becu: goto label_7a9bec;
        case 0x7a9bf0u: goto label_7a9bf0;
        case 0x7a9bf4u: goto label_7a9bf4;
        case 0x7a9bf8u: goto label_7a9bf8;
        case 0x7a9bfcu: goto label_7a9bfc;
        case 0x7a9c00u: goto label_7a9c00;
        case 0x7a9c04u: goto label_7a9c04;
        case 0x7a9c08u: goto label_7a9c08;
        case 0x7a9c0cu: goto label_7a9c0c;
        case 0x7a9c10u: goto label_7a9c10;
        case 0x7a9c14u: goto label_7a9c14;
        case 0x7a9c18u: goto label_7a9c18;
        case 0x7a9c1cu: goto label_7a9c1c;
        case 0x7a9c20u: goto label_7a9c20;
        case 0x7a9c24u: goto label_7a9c24;
        case 0x7a9c28u: goto label_7a9c28;
        case 0x7a9c2cu: goto label_7a9c2c;
        case 0x7a9c30u: goto label_7a9c30;
        case 0x7a9c34u: goto label_7a9c34;
        case 0x7a9c38u: goto label_7a9c38;
        case 0x7a9c3cu: goto label_7a9c3c;
        case 0x7a9c40u: goto label_7a9c40;
        case 0x7a9c44u: goto label_7a9c44;
        case 0x7a9c48u: goto label_7a9c48;
        case 0x7a9c4cu: goto label_7a9c4c;
        case 0x7a9c50u: goto label_7a9c50;
        case 0x7a9c54u: goto label_7a9c54;
        case 0x7a9c58u: goto label_7a9c58;
        case 0x7a9c5cu: goto label_7a9c5c;
        case 0x7a9c60u: goto label_7a9c60;
        case 0x7a9c64u: goto label_7a9c64;
        case 0x7a9c68u: goto label_7a9c68;
        case 0x7a9c6cu: goto label_7a9c6c;
        case 0x7a9c70u: goto label_7a9c70;
        case 0x7a9c74u: goto label_7a9c74;
        case 0x7a9c78u: goto label_7a9c78;
        case 0x7a9c7cu: goto label_7a9c7c;
        case 0x7a9c80u: goto label_7a9c80;
        case 0x7a9c84u: goto label_7a9c84;
        case 0x7a9c88u: goto label_7a9c88;
        case 0x7a9c8cu: goto label_7a9c8c;
        case 0x7a9c90u: goto label_7a9c90;
        case 0x7a9c94u: goto label_7a9c94;
        case 0x7a9c98u: goto label_7a9c98;
        case 0x7a9c9cu: goto label_7a9c9c;
        case 0x7a9ca0u: goto label_7a9ca0;
        case 0x7a9ca4u: goto label_7a9ca4;
        case 0x7a9ca8u: goto label_7a9ca8;
        case 0x7a9cacu: goto label_7a9cac;
        case 0x7a9cb0u: goto label_7a9cb0;
        case 0x7a9cb4u: goto label_7a9cb4;
        case 0x7a9cb8u: goto label_7a9cb8;
        case 0x7a9cbcu: goto label_7a9cbc;
        case 0x7a9cc0u: goto label_7a9cc0;
        case 0x7a9cc4u: goto label_7a9cc4;
        case 0x7a9cc8u: goto label_7a9cc8;
        case 0x7a9cccu: goto label_7a9ccc;
        case 0x7a9cd0u: goto label_7a9cd0;
        case 0x7a9cd4u: goto label_7a9cd4;
        case 0x7a9cd8u: goto label_7a9cd8;
        case 0x7a9cdcu: goto label_7a9cdc;
        case 0x7a9ce0u: goto label_7a9ce0;
        case 0x7a9ce4u: goto label_7a9ce4;
        case 0x7a9ce8u: goto label_7a9ce8;
        case 0x7a9cecu: goto label_7a9cec;
        case 0x7a9cf0u: goto label_7a9cf0;
        case 0x7a9cf4u: goto label_7a9cf4;
        case 0x7a9cf8u: goto label_7a9cf8;
        case 0x7a9cfcu: goto label_7a9cfc;
        case 0x7a9d00u: goto label_7a9d00;
        case 0x7a9d04u: goto label_7a9d04;
        case 0x7a9d08u: goto label_7a9d08;
        case 0x7a9d0cu: goto label_7a9d0c;
        case 0x7a9d10u: goto label_7a9d10;
        case 0x7a9d14u: goto label_7a9d14;
        case 0x7a9d18u: goto label_7a9d18;
        case 0x7a9d1cu: goto label_7a9d1c;
        case 0x7a9d20u: goto label_7a9d20;
        case 0x7a9d24u: goto label_7a9d24;
        case 0x7a9d28u: goto label_7a9d28;
        case 0x7a9d2cu: goto label_7a9d2c;
        case 0x7a9d30u: goto label_7a9d30;
        case 0x7a9d34u: goto label_7a9d34;
        case 0x7a9d38u: goto label_7a9d38;
        case 0x7a9d3cu: goto label_7a9d3c;
        case 0x7a9d40u: goto label_7a9d40;
        case 0x7a9d44u: goto label_7a9d44;
        case 0x7a9d48u: goto label_7a9d48;
        case 0x7a9d4cu: goto label_7a9d4c;
        case 0x7a9d50u: goto label_7a9d50;
        case 0x7a9d54u: goto label_7a9d54;
        case 0x7a9d58u: goto label_7a9d58;
        case 0x7a9d5cu: goto label_7a9d5c;
        case 0x7a9d60u: goto label_7a9d60;
        case 0x7a9d64u: goto label_7a9d64;
        case 0x7a9d68u: goto label_7a9d68;
        case 0x7a9d6cu: goto label_7a9d6c;
        case 0x7a9d70u: goto label_7a9d70;
        case 0x7a9d74u: goto label_7a9d74;
        case 0x7a9d78u: goto label_7a9d78;
        case 0x7a9d7cu: goto label_7a9d7c;
        case 0x7a9d80u: goto label_7a9d80;
        case 0x7a9d84u: goto label_7a9d84;
        case 0x7a9d88u: goto label_7a9d88;
        case 0x7a9d8cu: goto label_7a9d8c;
        case 0x7a9d90u: goto label_7a9d90;
        case 0x7a9d94u: goto label_7a9d94;
        case 0x7a9d98u: goto label_7a9d98;
        case 0x7a9d9cu: goto label_7a9d9c;
        case 0x7a9da0u: goto label_7a9da0;
        case 0x7a9da4u: goto label_7a9da4;
        case 0x7a9da8u: goto label_7a9da8;
        case 0x7a9dacu: goto label_7a9dac;
        case 0x7a9db0u: goto label_7a9db0;
        case 0x7a9db4u: goto label_7a9db4;
        case 0x7a9db8u: goto label_7a9db8;
        case 0x7a9dbcu: goto label_7a9dbc;
        case 0x7a9dc0u: goto label_7a9dc0;
        case 0x7a9dc4u: goto label_7a9dc4;
        case 0x7a9dc8u: goto label_7a9dc8;
        case 0x7a9dccu: goto label_7a9dcc;
        case 0x7a9dd0u: goto label_7a9dd0;
        case 0x7a9dd4u: goto label_7a9dd4;
        case 0x7a9dd8u: goto label_7a9dd8;
        case 0x7a9ddcu: goto label_7a9ddc;
        case 0x7a9de0u: goto label_7a9de0;
        case 0x7a9de4u: goto label_7a9de4;
        case 0x7a9de8u: goto label_7a9de8;
        case 0x7a9decu: goto label_7a9dec;
        case 0x7a9df0u: goto label_7a9df0;
        case 0x7a9df4u: goto label_7a9df4;
        case 0x7a9df8u: goto label_7a9df8;
        case 0x7a9dfcu: goto label_7a9dfc;
        case 0x7a9e00u: goto label_7a9e00;
        case 0x7a9e04u: goto label_7a9e04;
        case 0x7a9e08u: goto label_7a9e08;
        case 0x7a9e0cu: goto label_7a9e0c;
        case 0x7a9e10u: goto label_7a9e10;
        case 0x7a9e14u: goto label_7a9e14;
        case 0x7a9e18u: goto label_7a9e18;
        case 0x7a9e1cu: goto label_7a9e1c;
        case 0x7a9e20u: goto label_7a9e20;
        case 0x7a9e24u: goto label_7a9e24;
        case 0x7a9e28u: goto label_7a9e28;
        case 0x7a9e2cu: goto label_7a9e2c;
        case 0x7a9e30u: goto label_7a9e30;
        case 0x7a9e34u: goto label_7a9e34;
        case 0x7a9e38u: goto label_7a9e38;
        case 0x7a9e3cu: goto label_7a9e3c;
        case 0x7a9e40u: goto label_7a9e40;
        case 0x7a9e44u: goto label_7a9e44;
        case 0x7a9e48u: goto label_7a9e48;
        case 0x7a9e4cu: goto label_7a9e4c;
        case 0x7a9e50u: goto label_7a9e50;
        case 0x7a9e54u: goto label_7a9e54;
        case 0x7a9e58u: goto label_7a9e58;
        case 0x7a9e5cu: goto label_7a9e5c;
        case 0x7a9e60u: goto label_7a9e60;
        case 0x7a9e64u: goto label_7a9e64;
        case 0x7a9e68u: goto label_7a9e68;
        case 0x7a9e6cu: goto label_7a9e6c;
        case 0x7a9e70u: goto label_7a9e70;
        case 0x7a9e74u: goto label_7a9e74;
        case 0x7a9e78u: goto label_7a9e78;
        case 0x7a9e7cu: goto label_7a9e7c;
        case 0x7a9e80u: goto label_7a9e80;
        case 0x7a9e84u: goto label_7a9e84;
        case 0x7a9e88u: goto label_7a9e88;
        case 0x7a9e8cu: goto label_7a9e8c;
        case 0x7a9e90u: goto label_7a9e90;
        case 0x7a9e94u: goto label_7a9e94;
        case 0x7a9e98u: goto label_7a9e98;
        case 0x7a9e9cu: goto label_7a9e9c;
        case 0x7a9ea0u: goto label_7a9ea0;
        case 0x7a9ea4u: goto label_7a9ea4;
        case 0x7a9ea8u: goto label_7a9ea8;
        case 0x7a9eacu: goto label_7a9eac;
        case 0x7a9eb0u: goto label_7a9eb0;
        case 0x7a9eb4u: goto label_7a9eb4;
        case 0x7a9eb8u: goto label_7a9eb8;
        case 0x7a9ebcu: goto label_7a9ebc;
        case 0x7a9ec0u: goto label_7a9ec0;
        case 0x7a9ec4u: goto label_7a9ec4;
        case 0x7a9ec8u: goto label_7a9ec8;
        case 0x7a9eccu: goto label_7a9ecc;
        case 0x7a9ed0u: goto label_7a9ed0;
        case 0x7a9ed4u: goto label_7a9ed4;
        case 0x7a9ed8u: goto label_7a9ed8;
        case 0x7a9edcu: goto label_7a9edc;
        case 0x7a9ee0u: goto label_7a9ee0;
        case 0x7a9ee4u: goto label_7a9ee4;
        case 0x7a9ee8u: goto label_7a9ee8;
        case 0x7a9eecu: goto label_7a9eec;
        case 0x7a9ef0u: goto label_7a9ef0;
        case 0x7a9ef4u: goto label_7a9ef4;
        case 0x7a9ef8u: goto label_7a9ef8;
        case 0x7a9efcu: goto label_7a9efc;
        case 0x7a9f00u: goto label_7a9f00;
        case 0x7a9f04u: goto label_7a9f04;
        case 0x7a9f08u: goto label_7a9f08;
        case 0x7a9f0cu: goto label_7a9f0c;
        case 0x7a9f10u: goto label_7a9f10;
        case 0x7a9f14u: goto label_7a9f14;
        case 0x7a9f18u: goto label_7a9f18;
        case 0x7a9f1cu: goto label_7a9f1c;
        case 0x7a9f20u: goto label_7a9f20;
        case 0x7a9f24u: goto label_7a9f24;
        case 0x7a9f28u: goto label_7a9f28;
        case 0x7a9f2cu: goto label_7a9f2c;
        case 0x7a9f30u: goto label_7a9f30;
        case 0x7a9f34u: goto label_7a9f34;
        case 0x7a9f38u: goto label_7a9f38;
        case 0x7a9f3cu: goto label_7a9f3c;
        case 0x7a9f40u: goto label_7a9f40;
        case 0x7a9f44u: goto label_7a9f44;
        case 0x7a9f48u: goto label_7a9f48;
        case 0x7a9f4cu: goto label_7a9f4c;
        case 0x7a9f50u: goto label_7a9f50;
        case 0x7a9f54u: goto label_7a9f54;
        case 0x7a9f58u: goto label_7a9f58;
        case 0x7a9f5cu: goto label_7a9f5c;
        case 0x7a9f60u: goto label_7a9f60;
        case 0x7a9f64u: goto label_7a9f64;
        case 0x7a9f68u: goto label_7a9f68;
        case 0x7a9f6cu: goto label_7a9f6c;
        case 0x7a9f70u: goto label_7a9f70;
        case 0x7a9f74u: goto label_7a9f74;
        case 0x7a9f78u: goto label_7a9f78;
        case 0x7a9f7cu: goto label_7a9f7c;
        case 0x7a9f80u: goto label_7a9f80;
        case 0x7a9f84u: goto label_7a9f84;
        case 0x7a9f88u: goto label_7a9f88;
        case 0x7a9f8cu: goto label_7a9f8c;
        case 0x7a9f90u: goto label_7a9f90;
        case 0x7a9f94u: goto label_7a9f94;
        case 0x7a9f98u: goto label_7a9f98;
        case 0x7a9f9cu: goto label_7a9f9c;
        case 0x7a9fa0u: goto label_7a9fa0;
        case 0x7a9fa4u: goto label_7a9fa4;
        case 0x7a9fa8u: goto label_7a9fa8;
        case 0x7a9facu: goto label_7a9fac;
        case 0x7a9fb0u: goto label_7a9fb0;
        case 0x7a9fb4u: goto label_7a9fb4;
        case 0x7a9fb8u: goto label_7a9fb8;
        case 0x7a9fbcu: goto label_7a9fbc;
        case 0x7a9fc0u: goto label_7a9fc0;
        case 0x7a9fc4u: goto label_7a9fc4;
        case 0x7a9fc8u: goto label_7a9fc8;
        case 0x7a9fccu: goto label_7a9fcc;
        case 0x7a9fd0u: goto label_7a9fd0;
        case 0x7a9fd4u: goto label_7a9fd4;
        case 0x7a9fd8u: goto label_7a9fd8;
        case 0x7a9fdcu: goto label_7a9fdc;
        case 0x7a9fe0u: goto label_7a9fe0;
        case 0x7a9fe4u: goto label_7a9fe4;
        case 0x7a9fe8u: goto label_7a9fe8;
        case 0x7a9fecu: goto label_7a9fec;
        case 0x7a9ff0u: goto label_7a9ff0;
        case 0x7a9ff4u: goto label_7a9ff4;
        case 0x7a9ff8u: goto label_7a9ff8;
        case 0x7a9ffcu: goto label_7a9ffc;
        case 0x7aa000u: goto label_7aa000;
        case 0x7aa004u: goto label_7aa004;
        case 0x7aa008u: goto label_7aa008;
        case 0x7aa00cu: goto label_7aa00c;
        case 0x7aa010u: goto label_7aa010;
        case 0x7aa014u: goto label_7aa014;
        case 0x7aa018u: goto label_7aa018;
        case 0x7aa01cu: goto label_7aa01c;
        case 0x7aa020u: goto label_7aa020;
        case 0x7aa024u: goto label_7aa024;
        case 0x7aa028u: goto label_7aa028;
        case 0x7aa02cu: goto label_7aa02c;
        case 0x7aa030u: goto label_7aa030;
        case 0x7aa034u: goto label_7aa034;
        case 0x7aa038u: goto label_7aa038;
        case 0x7aa03cu: goto label_7aa03c;
        case 0x7aa040u: goto label_7aa040;
        case 0x7aa044u: goto label_7aa044;
        case 0x7aa048u: goto label_7aa048;
        case 0x7aa04cu: goto label_7aa04c;
        case 0x7aa050u: goto label_7aa050;
        case 0x7aa054u: goto label_7aa054;
        case 0x7aa058u: goto label_7aa058;
        case 0x7aa05cu: goto label_7aa05c;
        case 0x7aa060u: goto label_7aa060;
        case 0x7aa064u: goto label_7aa064;
        case 0x7aa068u: goto label_7aa068;
        case 0x7aa06cu: goto label_7aa06c;
        case 0x7aa070u: goto label_7aa070;
        case 0x7aa074u: goto label_7aa074;
        case 0x7aa078u: goto label_7aa078;
        case 0x7aa07cu: goto label_7aa07c;
        case 0x7aa080u: goto label_7aa080;
        case 0x7aa084u: goto label_7aa084;
        case 0x7aa088u: goto label_7aa088;
        case 0x7aa08cu: goto label_7aa08c;
        case 0x7aa090u: goto label_7aa090;
        case 0x7aa094u: goto label_7aa094;
        case 0x7aa098u: goto label_7aa098;
        case 0x7aa09cu: goto label_7aa09c;
        case 0x7aa0a0u: goto label_7aa0a0;
        case 0x7aa0a4u: goto label_7aa0a4;
        case 0x7aa0a8u: goto label_7aa0a8;
        case 0x7aa0acu: goto label_7aa0ac;
        case 0x7aa0b0u: goto label_7aa0b0;
        case 0x7aa0b4u: goto label_7aa0b4;
        case 0x7aa0b8u: goto label_7aa0b8;
        case 0x7aa0bcu: goto label_7aa0bc;
        case 0x7aa0c0u: goto label_7aa0c0;
        case 0x7aa0c4u: goto label_7aa0c4;
        case 0x7aa0c8u: goto label_7aa0c8;
        case 0x7aa0ccu: goto label_7aa0cc;
        case 0x7aa0d0u: goto label_7aa0d0;
        case 0x7aa0d4u: goto label_7aa0d4;
        case 0x7aa0d8u: goto label_7aa0d8;
        case 0x7aa0dcu: goto label_7aa0dc;
        case 0x7aa0e0u: goto label_7aa0e0;
        case 0x7aa0e4u: goto label_7aa0e4;
        case 0x7aa0e8u: goto label_7aa0e8;
        case 0x7aa0ecu: goto label_7aa0ec;
        case 0x7aa0f0u: goto label_7aa0f0;
        case 0x7aa0f4u: goto label_7aa0f4;
        case 0x7aa0f8u: goto label_7aa0f8;
        case 0x7aa0fcu: goto label_7aa0fc;
        case 0x7aa100u: goto label_7aa100;
        case 0x7aa104u: goto label_7aa104;
        case 0x7aa108u: goto label_7aa108;
        case 0x7aa10cu: goto label_7aa10c;
        case 0x7aa110u: goto label_7aa110;
        case 0x7aa114u: goto label_7aa114;
        case 0x7aa118u: goto label_7aa118;
        case 0x7aa11cu: goto label_7aa11c;
        case 0x7aa120u: goto label_7aa120;
        case 0x7aa124u: goto label_7aa124;
        case 0x7aa128u: goto label_7aa128;
        case 0x7aa12cu: goto label_7aa12c;
        case 0x7aa130u: goto label_7aa130;
        case 0x7aa134u: goto label_7aa134;
        case 0x7aa138u: goto label_7aa138;
        case 0x7aa13cu: goto label_7aa13c;
        case 0x7aa140u: goto label_7aa140;
        case 0x7aa144u: goto label_7aa144;
        case 0x7aa148u: goto label_7aa148;
        case 0x7aa14cu: goto label_7aa14c;
        case 0x7aa150u: goto label_7aa150;
        case 0x7aa154u: goto label_7aa154;
        case 0x7aa158u: goto label_7aa158;
        case 0x7aa15cu: goto label_7aa15c;
        case 0x7aa160u: goto label_7aa160;
        case 0x7aa164u: goto label_7aa164;
        case 0x7aa168u: goto label_7aa168;
        case 0x7aa16cu: goto label_7aa16c;
        case 0x7aa170u: goto label_7aa170;
        case 0x7aa174u: goto label_7aa174;
        case 0x7aa178u: goto label_7aa178;
        case 0x7aa17cu: goto label_7aa17c;
        case 0x7aa180u: goto label_7aa180;
        case 0x7aa184u: goto label_7aa184;
        case 0x7aa188u: goto label_7aa188;
        case 0x7aa18cu: goto label_7aa18c;
        case 0x7aa190u: goto label_7aa190;
        case 0x7aa194u: goto label_7aa194;
        case 0x7aa198u: goto label_7aa198;
        case 0x7aa19cu: goto label_7aa19c;
        case 0x7aa1a0u: goto label_7aa1a0;
        case 0x7aa1a4u: goto label_7aa1a4;
        case 0x7aa1a8u: goto label_7aa1a8;
        case 0x7aa1acu: goto label_7aa1ac;
        case 0x7aa1b0u: goto label_7aa1b0;
        case 0x7aa1b4u: goto label_7aa1b4;
        case 0x7aa1b8u: goto label_7aa1b8;
        case 0x7aa1bcu: goto label_7aa1bc;
        case 0x7aa1c0u: goto label_7aa1c0;
        case 0x7aa1c4u: goto label_7aa1c4;
        case 0x7aa1c8u: goto label_7aa1c8;
        case 0x7aa1ccu: goto label_7aa1cc;
        case 0x7aa1d0u: goto label_7aa1d0;
        case 0x7aa1d4u: goto label_7aa1d4;
        case 0x7aa1d8u: goto label_7aa1d8;
        case 0x7aa1dcu: goto label_7aa1dc;
        case 0x7aa1e0u: goto label_7aa1e0;
        case 0x7aa1e4u: goto label_7aa1e4;
        case 0x7aa1e8u: goto label_7aa1e8;
        case 0x7aa1ecu: goto label_7aa1ec;
        case 0x7aa1f0u: goto label_7aa1f0;
        case 0x7aa1f4u: goto label_7aa1f4;
        case 0x7aa1f8u: goto label_7aa1f8;
        case 0x7aa1fcu: goto label_7aa1fc;
        case 0x7aa200u: goto label_7aa200;
        case 0x7aa204u: goto label_7aa204;
        case 0x7aa208u: goto label_7aa208;
        case 0x7aa20cu: goto label_7aa20c;
        case 0x7aa210u: goto label_7aa210;
        case 0x7aa214u: goto label_7aa214;
        case 0x7aa218u: goto label_7aa218;
        case 0x7aa21cu: goto label_7aa21c;
        case 0x7aa220u: goto label_7aa220;
        case 0x7aa224u: goto label_7aa224;
        case 0x7aa228u: goto label_7aa228;
        case 0x7aa22cu: goto label_7aa22c;
        case 0x7aa230u: goto label_7aa230;
        case 0x7aa234u: goto label_7aa234;
        case 0x7aa238u: goto label_7aa238;
        case 0x7aa23cu: goto label_7aa23c;
        case 0x7aa240u: goto label_7aa240;
        case 0x7aa244u: goto label_7aa244;
        case 0x7aa248u: goto label_7aa248;
        case 0x7aa24cu: goto label_7aa24c;
        case 0x7aa250u: goto label_7aa250;
        case 0x7aa254u: goto label_7aa254;
        case 0x7aa258u: goto label_7aa258;
        case 0x7aa25cu: goto label_7aa25c;
        case 0x7aa260u: goto label_7aa260;
        case 0x7aa264u: goto label_7aa264;
        case 0x7aa268u: goto label_7aa268;
        case 0x7aa26cu: goto label_7aa26c;
        case 0x7aa270u: goto label_7aa270;
        case 0x7aa274u: goto label_7aa274;
        case 0x7aa278u: goto label_7aa278;
        case 0x7aa27cu: goto label_7aa27c;
        case 0x7aa280u: goto label_7aa280;
        case 0x7aa284u: goto label_7aa284;
        case 0x7aa288u: goto label_7aa288;
        case 0x7aa28cu: goto label_7aa28c;
        case 0x7aa290u: goto label_7aa290;
        case 0x7aa294u: goto label_7aa294;
        case 0x7aa298u: goto label_7aa298;
        case 0x7aa29cu: goto label_7aa29c;
        case 0x7aa2a0u: goto label_7aa2a0;
        case 0x7aa2a4u: goto label_7aa2a4;
        case 0x7aa2a8u: goto label_7aa2a8;
        case 0x7aa2acu: goto label_7aa2ac;
        case 0x7aa2b0u: goto label_7aa2b0;
        case 0x7aa2b4u: goto label_7aa2b4;
        case 0x7aa2b8u: goto label_7aa2b8;
        case 0x7aa2bcu: goto label_7aa2bc;
        case 0x7aa2c0u: goto label_7aa2c0;
        case 0x7aa2c4u: goto label_7aa2c4;
        case 0x7aa2c8u: goto label_7aa2c8;
        case 0x7aa2ccu: goto label_7aa2cc;
        case 0x7aa2d0u: goto label_7aa2d0;
        case 0x7aa2d4u: goto label_7aa2d4;
        case 0x7aa2d8u: goto label_7aa2d8;
        case 0x7aa2dcu: goto label_7aa2dc;
        case 0x7aa2e0u: goto label_7aa2e0;
        case 0x7aa2e4u: goto label_7aa2e4;
        case 0x7aa2e8u: goto label_7aa2e8;
        case 0x7aa2ecu: goto label_7aa2ec;
        case 0x7aa2f0u: goto label_7aa2f0;
        case 0x7aa2f4u: goto label_7aa2f4;
        case 0x7aa2f8u: goto label_7aa2f8;
        case 0x7aa2fcu: goto label_7aa2fc;
        case 0x7aa300u: goto label_7aa300;
        case 0x7aa304u: goto label_7aa304;
        case 0x7aa308u: goto label_7aa308;
        case 0x7aa30cu: goto label_7aa30c;
        case 0x7aa310u: goto label_7aa310;
        case 0x7aa314u: goto label_7aa314;
        case 0x7aa318u: goto label_7aa318;
        case 0x7aa31cu: goto label_7aa31c;
        case 0x7aa320u: goto label_7aa320;
        case 0x7aa324u: goto label_7aa324;
        case 0x7aa328u: goto label_7aa328;
        case 0x7aa32cu: goto label_7aa32c;
        case 0x7aa330u: goto label_7aa330;
        case 0x7aa334u: goto label_7aa334;
        case 0x7aa338u: goto label_7aa338;
        case 0x7aa33cu: goto label_7aa33c;
        case 0x7aa340u: goto label_7aa340;
        case 0x7aa344u: goto label_7aa344;
        case 0x7aa348u: goto label_7aa348;
        case 0x7aa34cu: goto label_7aa34c;
        case 0x7aa350u: goto label_7aa350;
        case 0x7aa354u: goto label_7aa354;
        case 0x7aa358u: goto label_7aa358;
        case 0x7aa35cu: goto label_7aa35c;
        case 0x7aa360u: goto label_7aa360;
        case 0x7aa364u: goto label_7aa364;
        case 0x7aa368u: goto label_7aa368;
        case 0x7aa36cu: goto label_7aa36c;
        case 0x7aa370u: goto label_7aa370;
        case 0x7aa374u: goto label_7aa374;
        case 0x7aa378u: goto label_7aa378;
        case 0x7aa37cu: goto label_7aa37c;
        case 0x7aa380u: goto label_7aa380;
        case 0x7aa384u: goto label_7aa384;
        case 0x7aa388u: goto label_7aa388;
        case 0x7aa38cu: goto label_7aa38c;
        case 0x7aa390u: goto label_7aa390;
        case 0x7aa394u: goto label_7aa394;
        case 0x7aa398u: goto label_7aa398;
        case 0x7aa39cu: goto label_7aa39c;
        case 0x7aa3a0u: goto label_7aa3a0;
        case 0x7aa3a4u: goto label_7aa3a4;
        case 0x7aa3a8u: goto label_7aa3a8;
        case 0x7aa3acu: goto label_7aa3ac;
        case 0x7aa3b0u: goto label_7aa3b0;
        case 0x7aa3b4u: goto label_7aa3b4;
        case 0x7aa3b8u: goto label_7aa3b8;
        case 0x7aa3bcu: goto label_7aa3bc;
        case 0x7aa3c0u: goto label_7aa3c0;
        case 0x7aa3c4u: goto label_7aa3c4;
        case 0x7aa3c8u: goto label_7aa3c8;
        case 0x7aa3ccu: goto label_7aa3cc;
        case 0x7aa3d0u: goto label_7aa3d0;
        case 0x7aa3d4u: goto label_7aa3d4;
        case 0x7aa3d8u: goto label_7aa3d8;
        case 0x7aa3dcu: goto label_7aa3dc;
        case 0x7aa3e0u: goto label_7aa3e0;
        case 0x7aa3e4u: goto label_7aa3e4;
        case 0x7aa3e8u: goto label_7aa3e8;
        case 0x7aa3ecu: goto label_7aa3ec;
        case 0x7aa3f0u: goto label_7aa3f0;
        case 0x7aa3f4u: goto label_7aa3f4;
        case 0x7aa3f8u: goto label_7aa3f8;
        case 0x7aa3fcu: goto label_7aa3fc;
        case 0x7aa400u: goto label_7aa400;
        case 0x7aa404u: goto label_7aa404;
        case 0x7aa408u: goto label_7aa408;
        case 0x7aa40cu: goto label_7aa40c;
        case 0x7aa410u: goto label_7aa410;
        case 0x7aa414u: goto label_7aa414;
        case 0x7aa418u: goto label_7aa418;
        case 0x7aa41cu: goto label_7aa41c;
        case 0x7aa420u: goto label_7aa420;
        case 0x7aa424u: goto label_7aa424;
        case 0x7aa428u: goto label_7aa428;
        case 0x7aa42cu: goto label_7aa42c;
        case 0x7aa430u: goto label_7aa430;
        case 0x7aa434u: goto label_7aa434;
        case 0x7aa438u: goto label_7aa438;
        case 0x7aa43cu: goto label_7aa43c;
        case 0x7aa440u: goto label_7aa440;
        case 0x7aa444u: goto label_7aa444;
        case 0x7aa448u: goto label_7aa448;
        case 0x7aa44cu: goto label_7aa44c;
        case 0x7aa450u: goto label_7aa450;
        case 0x7aa454u: goto label_7aa454;
        case 0x7aa458u: goto label_7aa458;
        case 0x7aa45cu: goto label_7aa45c;
        case 0x7aa460u: goto label_7aa460;
        case 0x7aa464u: goto label_7aa464;
        case 0x7aa468u: goto label_7aa468;
        case 0x7aa46cu: goto label_7aa46c;
        case 0x7aa470u: goto label_7aa470;
        case 0x7aa474u: goto label_7aa474;
        case 0x7aa478u: goto label_7aa478;
        case 0x7aa47cu: goto label_7aa47c;
        case 0x7aa480u: goto label_7aa480;
        case 0x7aa484u: goto label_7aa484;
        case 0x7aa488u: goto label_7aa488;
        case 0x7aa48cu: goto label_7aa48c;
        case 0x7aa490u: goto label_7aa490;
        case 0x7aa494u: goto label_7aa494;
        case 0x7aa498u: goto label_7aa498;
        case 0x7aa49cu: goto label_7aa49c;
        case 0x7aa4a0u: goto label_7aa4a0;
        case 0x7aa4a4u: goto label_7aa4a4;
        case 0x7aa4a8u: goto label_7aa4a8;
        case 0x7aa4acu: goto label_7aa4ac;
        case 0x7aa4b0u: goto label_7aa4b0;
        case 0x7aa4b4u: goto label_7aa4b4;
        case 0x7aa4b8u: goto label_7aa4b8;
        case 0x7aa4bcu: goto label_7aa4bc;
        case 0x7aa4c0u: goto label_7aa4c0;
        case 0x7aa4c4u: goto label_7aa4c4;
        case 0x7aa4c8u: goto label_7aa4c8;
        case 0x7aa4ccu: goto label_7aa4cc;
        case 0x7aa4d0u: goto label_7aa4d0;
        case 0x7aa4d4u: goto label_7aa4d4;
        case 0x7aa4d8u: goto label_7aa4d8;
        case 0x7aa4dcu: goto label_7aa4dc;
        case 0x7aa4e0u: goto label_7aa4e0;
        case 0x7aa4e4u: goto label_7aa4e4;
        case 0x7aa4e8u: goto label_7aa4e8;
        case 0x7aa4ecu: goto label_7aa4ec;
        case 0x7aa4f0u: goto label_7aa4f0;
        case 0x7aa4f4u: goto label_7aa4f4;
        case 0x7aa4f8u: goto label_7aa4f8;
        case 0x7aa4fcu: goto label_7aa4fc;
        case 0x7aa500u: goto label_7aa500;
        case 0x7aa504u: goto label_7aa504;
        case 0x7aa508u: goto label_7aa508;
        case 0x7aa50cu: goto label_7aa50c;
        case 0x7aa510u: goto label_7aa510;
        case 0x7aa514u: goto label_7aa514;
        case 0x7aa518u: goto label_7aa518;
        case 0x7aa51cu: goto label_7aa51c;
        case 0x7aa520u: goto label_7aa520;
        case 0x7aa524u: goto label_7aa524;
        case 0x7aa528u: goto label_7aa528;
        case 0x7aa52cu: goto label_7aa52c;
        case 0x7aa530u: goto label_7aa530;
        case 0x7aa534u: goto label_7aa534;
        case 0x7aa538u: goto label_7aa538;
        case 0x7aa53cu: goto label_7aa53c;
        case 0x7aa540u: goto label_7aa540;
        case 0x7aa544u: goto label_7aa544;
        case 0x7aa548u: goto label_7aa548;
        case 0x7aa54cu: goto label_7aa54c;
        case 0x7aa550u: goto label_7aa550;
        case 0x7aa554u: goto label_7aa554;
        case 0x7aa558u: goto label_7aa558;
        case 0x7aa55cu: goto label_7aa55c;
        case 0x7aa560u: goto label_7aa560;
        case 0x7aa564u: goto label_7aa564;
        case 0x7aa568u: goto label_7aa568;
        case 0x7aa56cu: goto label_7aa56c;
        case 0x7aa570u: goto label_7aa570;
        case 0x7aa574u: goto label_7aa574;
        case 0x7aa578u: goto label_7aa578;
        case 0x7aa57cu: goto label_7aa57c;
        case 0x7aa580u: goto label_7aa580;
        case 0x7aa584u: goto label_7aa584;
        case 0x7aa588u: goto label_7aa588;
        case 0x7aa58cu: goto label_7aa58c;
        case 0x7aa590u: goto label_7aa590;
        case 0x7aa594u: goto label_7aa594;
        case 0x7aa598u: goto label_7aa598;
        case 0x7aa59cu: goto label_7aa59c;
        case 0x7aa5a0u: goto label_7aa5a0;
        case 0x7aa5a4u: goto label_7aa5a4;
        case 0x7aa5a8u: goto label_7aa5a8;
        case 0x7aa5acu: goto label_7aa5ac;
        case 0x7aa5b0u: goto label_7aa5b0;
        case 0x7aa5b4u: goto label_7aa5b4;
        case 0x7aa5b8u: goto label_7aa5b8;
        case 0x7aa5bcu: goto label_7aa5bc;
        case 0x7aa5c0u: goto label_7aa5c0;
        case 0x7aa5c4u: goto label_7aa5c4;
        case 0x7aa5c8u: goto label_7aa5c8;
        case 0x7aa5ccu: goto label_7aa5cc;
        case 0x7aa5d0u: goto label_7aa5d0;
        case 0x7aa5d4u: goto label_7aa5d4;
        case 0x7aa5d8u: goto label_7aa5d8;
        case 0x7aa5dcu: goto label_7aa5dc;
        case 0x7aa5e0u: goto label_7aa5e0;
        case 0x7aa5e4u: goto label_7aa5e4;
        case 0x7aa5e8u: goto label_7aa5e8;
        case 0x7aa5ecu: goto label_7aa5ec;
        case 0x7aa5f0u: goto label_7aa5f0;
        case 0x7aa5f4u: goto label_7aa5f4;
        case 0x7aa5f8u: goto label_7aa5f8;
        case 0x7aa5fcu: goto label_7aa5fc;
        case 0x7aa600u: goto label_7aa600;
        case 0x7aa604u: goto label_7aa604;
        case 0x7aa608u: goto label_7aa608;
        case 0x7aa60cu: goto label_7aa60c;
        case 0x7aa610u: goto label_7aa610;
        case 0x7aa614u: goto label_7aa614;
        case 0x7aa618u: goto label_7aa618;
        case 0x7aa61cu: goto label_7aa61c;
        case 0x7aa620u: goto label_7aa620;
        case 0x7aa624u: goto label_7aa624;
        case 0x7aa628u: goto label_7aa628;
        case 0x7aa62cu: goto label_7aa62c;
        case 0x7aa630u: goto label_7aa630;
        case 0x7aa634u: goto label_7aa634;
        case 0x7aa638u: goto label_7aa638;
        case 0x7aa63cu: goto label_7aa63c;
        case 0x7aa640u: goto label_7aa640;
        case 0x7aa644u: goto label_7aa644;
        case 0x7aa648u: goto label_7aa648;
        case 0x7aa64cu: goto label_7aa64c;
        case 0x7aa650u: goto label_7aa650;
        case 0x7aa654u: goto label_7aa654;
        case 0x7aa658u: goto label_7aa658;
        case 0x7aa65cu: goto label_7aa65c;
        case 0x7aa660u: goto label_7aa660;
        case 0x7aa664u: goto label_7aa664;
        case 0x7aa668u: goto label_7aa668;
        case 0x7aa66cu: goto label_7aa66c;
        case 0x7aa670u: goto label_7aa670;
        case 0x7aa674u: goto label_7aa674;
        case 0x7aa678u: goto label_7aa678;
        case 0x7aa67cu: goto label_7aa67c;
        case 0x7aa680u: goto label_7aa680;
        case 0x7aa684u: goto label_7aa684;
        case 0x7aa688u: goto label_7aa688;
        case 0x7aa68cu: goto label_7aa68c;
        case 0x7aa690u: goto label_7aa690;
        case 0x7aa694u: goto label_7aa694;
        case 0x7aa698u: goto label_7aa698;
        case 0x7aa69cu: goto label_7aa69c;
        case 0x7aa6a0u: goto label_7aa6a0;
        case 0x7aa6a4u: goto label_7aa6a4;
        case 0x7aa6a8u: goto label_7aa6a8;
        case 0x7aa6acu: goto label_7aa6ac;
        case 0x7aa6b0u: goto label_7aa6b0;
        case 0x7aa6b4u: goto label_7aa6b4;
        case 0x7aa6b8u: goto label_7aa6b8;
        case 0x7aa6bcu: goto label_7aa6bc;
        case 0x7aa6c0u: goto label_7aa6c0;
        case 0x7aa6c4u: goto label_7aa6c4;
        case 0x7aa6c8u: goto label_7aa6c8;
        case 0x7aa6ccu: goto label_7aa6cc;
        case 0x7aa6d0u: goto label_7aa6d0;
        case 0x7aa6d4u: goto label_7aa6d4;
        case 0x7aa6d8u: goto label_7aa6d8;
        case 0x7aa6dcu: goto label_7aa6dc;
        case 0x7aa6e0u: goto label_7aa6e0;
        case 0x7aa6e4u: goto label_7aa6e4;
        case 0x7aa6e8u: goto label_7aa6e8;
        case 0x7aa6ecu: goto label_7aa6ec;
        case 0x7aa6f0u: goto label_7aa6f0;
        case 0x7aa6f4u: goto label_7aa6f4;
        case 0x7aa6f8u: goto label_7aa6f8;
        case 0x7aa6fcu: goto label_7aa6fc;
        case 0x7aa700u: goto label_7aa700;
        case 0x7aa704u: goto label_7aa704;
        case 0x7aa708u: goto label_7aa708;
        case 0x7aa70cu: goto label_7aa70c;
        case 0x7aa710u: goto label_7aa710;
        case 0x7aa714u: goto label_7aa714;
        case 0x7aa718u: goto label_7aa718;
        case 0x7aa71cu: goto label_7aa71c;
        case 0x7aa720u: goto label_7aa720;
        case 0x7aa724u: goto label_7aa724;
        case 0x7aa728u: goto label_7aa728;
        case 0x7aa72cu: goto label_7aa72c;
        case 0x7aa730u: goto label_7aa730;
        case 0x7aa734u: goto label_7aa734;
        case 0x7aa738u: goto label_7aa738;
        case 0x7aa73cu: goto label_7aa73c;
        case 0x7aa740u: goto label_7aa740;
        case 0x7aa744u: goto label_7aa744;
        case 0x7aa748u: goto label_7aa748;
        case 0x7aa74cu: goto label_7aa74c;
        case 0x7aa750u: goto label_7aa750;
        case 0x7aa754u: goto label_7aa754;
        case 0x7aa758u: goto label_7aa758;
        case 0x7aa75cu: goto label_7aa75c;
        case 0x7aa760u: goto label_7aa760;
        case 0x7aa764u: goto label_7aa764;
        case 0x7aa768u: goto label_7aa768;
        case 0x7aa76cu: goto label_7aa76c;
        case 0x7aa770u: goto label_7aa770;
        case 0x7aa774u: goto label_7aa774;
        case 0x7aa778u: goto label_7aa778;
        case 0x7aa77cu: goto label_7aa77c;
        case 0x7aa780u: goto label_7aa780;
        case 0x7aa784u: goto label_7aa784;
        case 0x7aa788u: goto label_7aa788;
        case 0x7aa78cu: goto label_7aa78c;
        case 0x7aa790u: goto label_7aa790;
        case 0x7aa794u: goto label_7aa794;
        case 0x7aa798u: goto label_7aa798;
        case 0x7aa79cu: goto label_7aa79c;
        case 0x7aa7a0u: goto label_7aa7a0;
        case 0x7aa7a4u: goto label_7aa7a4;
        case 0x7aa7a8u: goto label_7aa7a8;
        case 0x7aa7acu: goto label_7aa7ac;
        case 0x7aa7b0u: goto label_7aa7b0;
        case 0x7aa7b4u: goto label_7aa7b4;
        case 0x7aa7b8u: goto label_7aa7b8;
        case 0x7aa7bcu: goto label_7aa7bc;
        case 0x7aa7c0u: goto label_7aa7c0;
        case 0x7aa7c4u: goto label_7aa7c4;
        case 0x7aa7c8u: goto label_7aa7c8;
        case 0x7aa7ccu: goto label_7aa7cc;
        case 0x7aa7d0u: goto label_7aa7d0;
        case 0x7aa7d4u: goto label_7aa7d4;
        case 0x7aa7d8u: goto label_7aa7d8;
        case 0x7aa7dcu: goto label_7aa7dc;
        case 0x7aa7e0u: goto label_7aa7e0;
        case 0x7aa7e4u: goto label_7aa7e4;
        case 0x7aa7e8u: goto label_7aa7e8;
        case 0x7aa7ecu: goto label_7aa7ec;
        case 0x7aa7f0u: goto label_7aa7f0;
        case 0x7aa7f4u: goto label_7aa7f4;
        case 0x7aa7f8u: goto label_7aa7f8;
        case 0x7aa7fcu: goto label_7aa7fc;
        case 0x7aa800u: goto label_7aa800;
        case 0x7aa804u: goto label_7aa804;
        case 0x7aa808u: goto label_7aa808;
        case 0x7aa80cu: goto label_7aa80c;
        case 0x7aa810u: goto label_7aa810;
        case 0x7aa814u: goto label_7aa814;
        case 0x7aa818u: goto label_7aa818;
        case 0x7aa81cu: goto label_7aa81c;
        case 0x7aa820u: goto label_7aa820;
        case 0x7aa824u: goto label_7aa824;
        case 0x7aa828u: goto label_7aa828;
        case 0x7aa82cu: goto label_7aa82c;
        case 0x7aa830u: goto label_7aa830;
        case 0x7aa834u: goto label_7aa834;
        case 0x7aa838u: goto label_7aa838;
        case 0x7aa83cu: goto label_7aa83c;
        case 0x7aa840u: goto label_7aa840;
        case 0x7aa844u: goto label_7aa844;
        case 0x7aa848u: goto label_7aa848;
        case 0x7aa84cu: goto label_7aa84c;
        case 0x7aa850u: goto label_7aa850;
        case 0x7aa854u: goto label_7aa854;
        case 0x7aa858u: goto label_7aa858;
        case 0x7aa85cu: goto label_7aa85c;
        case 0x7aa860u: goto label_7aa860;
        case 0x7aa864u: goto label_7aa864;
        case 0x7aa868u: goto label_7aa868;
        case 0x7aa86cu: goto label_7aa86c;
        case 0x7aa870u: goto label_7aa870;
        case 0x7aa874u: goto label_7aa874;
        case 0x7aa878u: goto label_7aa878;
        case 0x7aa87cu: goto label_7aa87c;
        case 0x7aa880u: goto label_7aa880;
        case 0x7aa884u: goto label_7aa884;
        case 0x7aa888u: goto label_7aa888;
        case 0x7aa88cu: goto label_7aa88c;
        case 0x7aa890u: goto label_7aa890;
        case 0x7aa894u: goto label_7aa894;
        case 0x7aa898u: goto label_7aa898;
        case 0x7aa89cu: goto label_7aa89c;
        case 0x7aa8a0u: goto label_7aa8a0;
        case 0x7aa8a4u: goto label_7aa8a4;
        case 0x7aa8a8u: goto label_7aa8a8;
        case 0x7aa8acu: goto label_7aa8ac;
        case 0x7aa8b0u: goto label_7aa8b0;
        case 0x7aa8b4u: goto label_7aa8b4;
        case 0x7aa8b8u: goto label_7aa8b8;
        case 0x7aa8bcu: goto label_7aa8bc;
        case 0x7aa8c0u: goto label_7aa8c0;
        case 0x7aa8c4u: goto label_7aa8c4;
        case 0x7aa8c8u: goto label_7aa8c8;
        case 0x7aa8ccu: goto label_7aa8cc;
        case 0x7aa8d0u: goto label_7aa8d0;
        case 0x7aa8d4u: goto label_7aa8d4;
        case 0x7aa8d8u: goto label_7aa8d8;
        case 0x7aa8dcu: goto label_7aa8dc;
        case 0x7aa8e0u: goto label_7aa8e0;
        case 0x7aa8e4u: goto label_7aa8e4;
        case 0x7aa8e8u: goto label_7aa8e8;
        case 0x7aa8ecu: goto label_7aa8ec;
        case 0x7aa8f0u: goto label_7aa8f0;
        case 0x7aa8f4u: goto label_7aa8f4;
        case 0x7aa8f8u: goto label_7aa8f8;
        case 0x7aa8fcu: goto label_7aa8fc;
        case 0x7aa900u: goto label_7aa900;
        case 0x7aa904u: goto label_7aa904;
        case 0x7aa908u: goto label_7aa908;
        case 0x7aa90cu: goto label_7aa90c;
        case 0x7aa910u: goto label_7aa910;
        case 0x7aa914u: goto label_7aa914;
        case 0x7aa918u: goto label_7aa918;
        case 0x7aa91cu: goto label_7aa91c;
        case 0x7aa920u: goto label_7aa920;
        case 0x7aa924u: goto label_7aa924;
        case 0x7aa928u: goto label_7aa928;
        case 0x7aa92cu: goto label_7aa92c;
        case 0x7aa930u: goto label_7aa930;
        case 0x7aa934u: goto label_7aa934;
        case 0x7aa938u: goto label_7aa938;
        case 0x7aa93cu: goto label_7aa93c;
        case 0x7aa940u: goto label_7aa940;
        case 0x7aa944u: goto label_7aa944;
        case 0x7aa948u: goto label_7aa948;
        case 0x7aa94cu: goto label_7aa94c;
        case 0x7aa950u: goto label_7aa950;
        case 0x7aa954u: goto label_7aa954;
        case 0x7aa958u: goto label_7aa958;
        case 0x7aa95cu: goto label_7aa95c;
        case 0x7aa960u: goto label_7aa960;
        case 0x7aa964u: goto label_7aa964;
        case 0x7aa968u: goto label_7aa968;
        case 0x7aa96cu: goto label_7aa96c;
        case 0x7aa970u: goto label_7aa970;
        case 0x7aa974u: goto label_7aa974;
        case 0x7aa978u: goto label_7aa978;
        case 0x7aa97cu: goto label_7aa97c;
        case 0x7aa980u: goto label_7aa980;
        case 0x7aa984u: goto label_7aa984;
        case 0x7aa988u: goto label_7aa988;
        case 0x7aa98cu: goto label_7aa98c;
        case 0x7aa990u: goto label_7aa990;
        case 0x7aa994u: goto label_7aa994;
        case 0x7aa998u: goto label_7aa998;
        case 0x7aa99cu: goto label_7aa99c;
        case 0x7aa9a0u: goto label_7aa9a0;
        case 0x7aa9a4u: goto label_7aa9a4;
        case 0x7aa9a8u: goto label_7aa9a8;
        case 0x7aa9acu: goto label_7aa9ac;
        case 0x7aa9b0u: goto label_7aa9b0;
        case 0x7aa9b4u: goto label_7aa9b4;
        case 0x7aa9b8u: goto label_7aa9b8;
        case 0x7aa9bcu: goto label_7aa9bc;
        case 0x7aa9c0u: goto label_7aa9c0;
        case 0x7aa9c4u: goto label_7aa9c4;
        case 0x7aa9c8u: goto label_7aa9c8;
        case 0x7aa9ccu: goto label_7aa9cc;
        case 0x7aa9d0u: goto label_7aa9d0;
        case 0x7aa9d4u: goto label_7aa9d4;
        case 0x7aa9d8u: goto label_7aa9d8;
        case 0x7aa9dcu: goto label_7aa9dc;
        case 0x7aa9e0u: goto label_7aa9e0;
        case 0x7aa9e4u: goto label_7aa9e4;
        default: break;
    }

    ctx->pc = 0x7a9ab0u;

label_7a9ab0:
    // 0x7a9ab0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x7a9ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_7a9ab4:
    // 0x7a9ab4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x7a9ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_7a9ab8:
    // 0x7a9ab8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x7a9ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_7a9abc:
    // 0x7a9abc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7a9abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_7a9ac0:
    // 0x7a9ac0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x7a9ac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_7a9ac4:
    // 0x7a9ac4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x7a9ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_7a9ac8:
    // 0x7a9ac8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x7a9ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_7a9acc:
    // 0x7a9acc: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x7a9accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_7a9ad0:
    // 0x7a9ad0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x7a9ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_7a9ad4:
    // 0x7a9ad4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x7a9ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_7a9ad8:
    // 0x7a9ad8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x7a9ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_7a9adc:
    // 0x7a9adc: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x7a9adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_7a9ae0:
    // 0x7a9ae0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x7a9ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_7a9ae4:
    // 0x7a9ae4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x7a9ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_7a9ae8:
    // 0x7a9ae8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x7a9ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_7a9aec:
    // 0x7a9aec: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x7a9aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_7a9af0:
    // 0x7a9af0: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x7a9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_7a9af4:
    // 0x7a9af4: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x7a9af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_7a9af8:
    // 0x7a9af8: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x7a9af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_7a9afc:
    // 0x7a9afc: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7a9afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
label_7a9b00:
    // 0x7a9b00: 0x8c545280  lw          $s4, 0x5280($v0)
    ctx->pc = 0x7a9b00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21120)));
label_7a9b04:
    // 0x7a9b04: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x7a9b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_7a9b08:
    // 0x7a9b08: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x7a9b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_7a9b0c:
    // 0x7a9b0c: 0x2a020200  slti        $v0, $s0, 0x200
    ctx->pc = 0x7a9b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)512) ? 1 : 0);
label_7a9b10:
    // 0x7a9b10: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x7a9b10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a9b14:
    // 0x7a9b14: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x7a9b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_7a9b18:
    // 0x7a9b18: 0x868821  addu        $s1, $a0, $a2
    ctx->pc = 0x7a9b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_7a9b1c:
    // 0x7a9b1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x7a9b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a9b20:
    // 0x7a9b20: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x7a9b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_7a9b24:
    // 0x7a9b24: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x7a9b24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a9b28:
    // 0x7a9b28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7a9b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7a9b2c:
    // 0x7a9b2c: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x7a9b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_7a9b30:
    // 0x7a9b30: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x7a9b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_7a9b34:
    // 0x7a9b34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_7a9b38:
    if (ctx->pc == 0x7A9B38u) {
        ctx->pc = 0x7A9B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9B34u;
        // 0x7a9b38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9B3Cu;
        goto label_7a9b3c;
    }
    ctx->pc = 0x7A9B34u;
    {
        const bool branch_taken_0x7a9b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9B34u;
        // 0x7a9b38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9b34) {
            ctx->pc = 0x7A9B44u;
            goto label_7a9b44;
        }
    }
    ctx->pc = 0x7A9B3Cu;
label_7a9b3c:
    // 0x7a9b3c: 0x2a020300  slti        $v0, $s0, 0x300
    ctx->pc = 0x7a9b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)768) ? 1 : 0);
label_7a9b40:
    // 0x7a9b40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7a9b40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7a9b44:
    // 0x7a9b44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7a9b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7a9b48:
    // 0x7a9b48: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x7a9b48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a9b4c:
    // 0x7a9b4c: 0x2a020300  slti        $v0, $s0, 0x300
    ctx->pc = 0x7a9b4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)768) ? 1 : 0);
label_7a9b50:
    // 0x7a9b50: 0x83b00b  movn        $s6, $a0, $v1
    ctx->pc = 0x7a9b50u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 4));
label_7a9b54:
    // 0x7a9b54: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x7a9b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_7a9b58:
    // 0x7a9b58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_7a9b5c:
    if (ctx->pc == 0x7A9B5Cu) {
        ctx->pc = 0x7A9B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9B58u;
        // 0x7a9b5c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9B60u;
        goto label_7a9b60;
    }
    ctx->pc = 0x7A9B58u;
    {
        const bool branch_taken_0x7a9b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9B58u;
        // 0x7a9b5c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9b58) {
            ctx->pc = 0x7A9B68u;
            goto label_7a9b68;
        }
    }
    ctx->pc = 0x7A9B60u;
label_7a9b60:
    // 0x7a9b60: 0x2a020500  slti        $v0, $s0, 0x500
    ctx->pc = 0x7a9b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1280) ? 1 : 0);
label_7a9b64:
    // 0x7a9b64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7a9b64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7a9b68:
    // 0x7a9b68: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x7a9b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_7a9b6c:
    // 0x7a9b6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_7a9b70:
    if (ctx->pc == 0x7A9B70u) {
        ctx->pc = 0x7A9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9B6Cu;
        // 0x7a9b70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9B74u;
        goto label_7a9b74;
    }
    ctx->pc = 0x7A9B6Cu;
    {
        const bool branch_taken_0x7a9b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9B6Cu;
        // 0x7a9b70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9b6c) {
            ctx->pc = 0x7A9B7Cu;
            goto label_7a9b7c;
        }
    }
    ctx->pc = 0x7A9B74u;
label_7a9b74:
    // 0x7a9b74: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x7a9b74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a9b78:
    // 0x7a9b78: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x7a9b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_7a9b7c:
    // 0x7a9b7c: 0x2a020630  slti        $v0, $s0, 0x630
    ctx->pc = 0x7a9b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1584) ? 1 : 0);
label_7a9b80:
    // 0x7a9b80: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x7a9b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_7a9b84:
    // 0x7a9b84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_7a9b88:
    if (ctx->pc == 0x7A9B88u) {
        ctx->pc = 0x7A9B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9B84u;
        // 0x7a9b88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9B8Cu;
        goto label_7a9b8c;
    }
    ctx->pc = 0x7A9B84u;
    {
        const bool branch_taken_0x7a9b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9B84u;
        // 0x7a9b88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9b84) {
            ctx->pc = 0x7A9B94u;
            goto label_7a9b94;
        }
    }
    ctx->pc = 0x7A9B8Cu;
label_7a9b8c:
    // 0x7a9b8c: 0x2a020640  slti        $v0, $s0, 0x640
    ctx->pc = 0x7a9b8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1600) ? 1 : 0);
label_7a9b90:
    // 0x7a9b90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7a9b90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7a9b94:
    // 0x7a9b94: 0x3a02ffff  xori        $v0, $s0, 0xFFFF
    ctx->pc = 0x7a9b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)65535);
label_7a9b98:
    // 0x7a9b98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_7a9b9c:
    if (ctx->pc == 0x7A9B9Cu) {
        ctx->pc = 0x7A9B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9B98u;
        // 0x7a9b9c: 0x83b00b  movn        $s6, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9BA0u;
        goto label_7a9ba0;
    }
    ctx->pc = 0x7A9B98u;
    {
        const bool branch_taken_0x7a9b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9B98u;
        // 0x7a9b9c: 0x83b00b  movn        $s6, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9b98) {
            ctx->pc = 0x7A9BACu;
            goto label_7a9bac;
        }
    }
    ctx->pc = 0x7A9BA0u;
label_7a9ba0:
    // 0x7a9ba0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7a9ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7a9ba4:
    // 0x7a9ba4: 0xc0539a4  jal         func_14E690
label_7a9ba8:
    if (ctx->pc == 0x7A9BA8u) {
        ctx->pc = 0x7A9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BA4u;
        // 0x7a9ba8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9BACu;
        goto label_7a9bac;
    }
    ctx->pc = 0x7A9BA4u;
    SET_GPR_U32(ctx, 31, 0x7A9BACu);
    ctx->pc = 0x7A9BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A9BA4u;
    // 0x7a9ba8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E690u, 0x7A9BA4u, 0x7A9BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A9BACu;
label_7a9bac:
    // 0x7a9bac: 0x24020600  addiu       $v0, $zero, 0x600
    ctx->pc = 0x7a9bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_7a9bb0:
    // 0x7a9bb0: 0x120200cb  beq         $s0, $v0, . + 4 + (0xCB << 2)
label_7a9bb4:
    if (ctx->pc == 0x7A9BB4u) {
        ctx->pc = 0x7A9BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BB0u;
        // 0x7a9bb4: 0x2a020601  slti        $v0, $s0, 0x601 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1537) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9BB8u;
        goto label_7a9bb8;
    }
    ctx->pc = 0x7A9BB0u;
    {
        const bool branch_taken_0x7a9bb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BB0u;
        // 0x7a9bb4: 0x2a020601  slti        $v0, $s0, 0x601 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1537) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9bb0) {
            ctx->pc = 0x7A9EE0u;
            goto label_7a9ee0;
        }
    }
    ctx->pc = 0x7A9BB8u;
label_7a9bb8:
    // 0x7a9bb8: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_7a9bbc:
    if (ctx->pc == 0x7A9BBCu) {
        ctx->pc = 0x7A9BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BB8u;
        // 0x7a9bbc: 0x2a020267  slti        $v0, $s0, 0x267 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)615) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9BC0u;
        goto label_7a9bc0;
    }
    ctx->pc = 0x7A9BB8u;
    {
        const bool branch_taken_0x7a9bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BB8u;
        // 0x7a9bbc: 0x2a020267  slti        $v0, $s0, 0x267 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)615) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9bb8) {
            ctx->pc = 0x7A9D14u;
            goto label_7a9d14;
        }
    }
    ctx->pc = 0x7A9BC0u;
label_7a9bc0:
    // 0x7a9bc0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_7a9bc4:
    if (ctx->pc == 0x7A9BC4u) {
        ctx->pc = 0x7A9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BC0u;
        // 0x7a9bc4: 0x2a020265  slti        $v0, $s0, 0x265 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)613) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9BC8u;
        goto label_7a9bc8;
    }
    ctx->pc = 0x7A9BC0u;
    {
        const bool branch_taken_0x7a9bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BC0u;
        // 0x7a9bc4: 0x2a020265  slti        $v0, $s0, 0x265 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)613) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9bc0) {
            ctx->pc = 0x7A9C60u;
            goto label_7a9c60;
        }
    }
    ctx->pc = 0x7A9BC8u;
label_7a9bc8:
    // 0x7a9bc8: 0x104002c0  beqz        $v0, . + 4 + (0x2C0 << 2)
label_7a9bcc:
    if (ctx->pc == 0x7A9BCCu) {
        ctx->pc = 0x7A9BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BC8u;
        // 0x7a9bcc: 0x2a02022f  slti        $v0, $s0, 0x22F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)559) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9BD0u;
        goto label_7a9bd0;
    }
    ctx->pc = 0x7A9BC8u;
    {
        const bool branch_taken_0x7a9bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BC8u;
        // 0x7a9bcc: 0x2a02022f  slti        $v0, $s0, 0x22F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)559) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9bc8) {
            ctx->pc = 0x7AA6CCu;
            goto label_7aa6cc;
        }
    }
    ctx->pc = 0x7A9BD0u;
label_7a9bd0:
    // 0x7a9bd0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_7a9bd4:
    if (ctx->pc == 0x7A9BD4u) {
        ctx->pc = 0x7A9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BD0u;
        // 0x7a9bd4: 0x2a020227  slti        $v0, $s0, 0x227 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)551) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9BD8u;
        goto label_7a9bd8;
    }
    ctx->pc = 0x7A9BD0u;
    {
        const bool branch_taken_0x7a9bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BD0u;
        // 0x7a9bd4: 0x2a020227  slti        $v0, $s0, 0x227 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)551) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9bd0) {
            ctx->pc = 0x7A9C14u;
            goto label_7a9c14;
        }
    }
    ctx->pc = 0x7A9BD8u;
label_7a9bd8:
    // 0x7a9bd8: 0x1040029b  beqz        $v0, . + 4 + (0x29B << 2)
label_7a9bdc:
    if (ctx->pc == 0x7A9BDCu) {
        ctx->pc = 0x7A9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BD8u;
        // 0x7a9bdc: 0x2a020216  slti        $v0, $s0, 0x216 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)534) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9BE0u;
        goto label_7a9be0;
    }
    ctx->pc = 0x7A9BD8u;
    {
        const bool branch_taken_0x7a9bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BD8u;
        // 0x7a9bdc: 0x2a020216  slti        $v0, $s0, 0x216 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)534) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9bd8) {
            ctx->pc = 0x7AA648u;
            goto label_7aa648;
        }
    }
    ctx->pc = 0x7A9BE0u;
label_7a9be0:
    // 0x7a9be0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_7a9be4:
    if (ctx->pc == 0x7A9BE4u) {
        ctx->pc = 0x7A9BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BE0u;
        // 0x7a9be4: 0x2a020214  slti        $v0, $s0, 0x214 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)532) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9BE8u;
        goto label_7a9be8;
    }
    ctx->pc = 0x7A9BE0u;
    {
        const bool branch_taken_0x7a9be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BE0u;
        // 0x7a9be4: 0x2a020214  slti        $v0, $s0, 0x214 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)532) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9be0) {
            ctx->pc = 0x7A9C00u;
            goto label_7a9c00;
        }
    }
    ctx->pc = 0x7A9BE8u;
label_7a9be8:
    // 0x7a9be8: 0x10400295  beqz        $v0, . + 4 + (0x295 << 2)
label_7a9bec:
    if (ctx->pc == 0x7A9BECu) {
        ctx->pc = 0x7A9BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BE8u;
        // 0x7a9bec: 0x24020211  addiu       $v0, $zero, 0x211 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9BF0u;
        goto label_7a9bf0;
    }
    ctx->pc = 0x7A9BE8u;
    {
        const bool branch_taken_0x7a9be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BE8u;
        // 0x7a9bec: 0x24020211  addiu       $v0, $zero, 0x211 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9be8) {
            ctx->pc = 0x7AA640u;
            goto label_7aa640;
        }
    }
    ctx->pc = 0x7A9BF0u;
label_7a9bf0:
    // 0x7a9bf0: 0x12020279  beq         $s0, $v0, . + 4 + (0x279 << 2)
label_7a9bf4:
    if (ctx->pc == 0x7A9BF4u) {
        ctx->pc = 0x7A9BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BF0u;
        // 0x7a9bf4: 0x24040212  addiu       $a0, $zero, 0x212 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9BF8u;
        goto label_7a9bf8;
    }
    ctx->pc = 0x7A9BF0u;
    {
        const bool branch_taken_0x7a9bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BF0u;
        // 0x7a9bf4: 0x24040212  addiu       $a0, $zero, 0x212 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9bf0) {
            ctx->pc = 0x7AA5D8u;
            goto label_7aa5d8;
        }
    }
    ctx->pc = 0x7A9BF8u;
label_7a9bf8:
    // 0x7a9bf8: 0x10000335  b           . + 4 + (0x335 << 2)
label_7a9bfc:
    if (ctx->pc == 0x7A9BFCu) {
        ctx->pc = 0x7A9BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BF8u;
        // 0x7a9bfc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9C00u;
        goto label_7a9c00;
    }
    ctx->pc = 0x7A9BF8u;
    {
        const bool branch_taken_0x7a9bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9BF8u;
        // 0x7a9bfc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9bf8) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7A9C00u;
label_7a9c00:
    // 0x7a9c00: 0x2402021c  addiu       $v0, $zero, 0x21C
    ctx->pc = 0x7a9c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
label_7a9c04:
    // 0x7a9c04: 0x12020326  beq         $s0, $v0, . + 4 + (0x326 << 2)
label_7a9c08:
    if (ctx->pc == 0x7A9C08u) {
        ctx->pc = 0x7A9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C04u;
        // 0x7a9c08: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9C0Cu;
        goto label_7a9c0c;
    }
    ctx->pc = 0x7A9C04u;
    {
        const bool branch_taken_0x7a9c04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C04u;
        // 0x7a9c08: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9c04) {
            ctx->pc = 0x7AA8A0u;
            goto label_7aa8a0;
        }
    }
    ctx->pc = 0x7A9C0Cu;
label_7a9c0c:
    // 0x7a9c0c: 0x10000331  b           . + 4 + (0x331 << 2)
label_7a9c10:
    if (ctx->pc == 0x7A9C10u) {
        ctx->pc = 0x7A9C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C0Cu;
        // 0x7a9c10: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9C14u;
        goto label_7a9c14;
    }
    ctx->pc = 0x7A9C0Cu;
    {
        const bool branch_taken_0x7a9c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C0Cu;
        // 0x7a9c10: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9c0c) {
            ctx->pc = 0x7AA8D4u;
            goto label_7aa8d4;
        }
    }
    ctx->pc = 0x7A9C14u;
label_7a9c14:
    // 0x7a9c14: 0x2a02024f  slti        $v0, $s0, 0x24F
    ctx->pc = 0x7a9c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)591) ? 1 : 0);
label_7a9c18:
    // 0x7a9c18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_7a9c1c:
    if (ctx->pc == 0x7A9C1Cu) {
        ctx->pc = 0x7A9C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C18u;
        // 0x7a9c1c: 0x2a02024a  slti        $v0, $s0, 0x24A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)586) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9C20u;
        goto label_7a9c20;
    }
    ctx->pc = 0x7A9C18u;
    {
        const bool branch_taken_0x7a9c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C18u;
        // 0x7a9c1c: 0x2a02024a  slti        $v0, $s0, 0x24A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)586) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9c18) {
            ctx->pc = 0x7A9C38u;
            goto label_7a9c38;
        }
    }
    ctx->pc = 0x7A9C20u;
label_7a9c20:
    // 0x7a9c20: 0x10400289  beqz        $v0, . + 4 + (0x289 << 2)
label_7a9c24:
    if (ctx->pc == 0x7A9C24u) {
        ctx->pc = 0x7A9C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C20u;
        // 0x7a9c24: 0x24020243  addiu       $v0, $zero, 0x243 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9C28u;
        goto label_7a9c28;
    }
    ctx->pc = 0x7A9C20u;
    {
        const bool branch_taken_0x7a9c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C20u;
        // 0x7a9c24: 0x24020243  addiu       $v0, $zero, 0x243 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9c20) {
            ctx->pc = 0x7AA648u;
            goto label_7aa648;
        }
    }
    ctx->pc = 0x7A9C28u;
label_7a9c28:
    // 0x7a9c28: 0x12020287  beq         $s0, $v0, . + 4 + (0x287 << 2)
label_7a9c2c:
    if (ctx->pc == 0x7A9C2Cu) {
        ctx->pc = 0x7A9C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C28u;
        // 0x7a9c2c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9C30u;
        goto label_7a9c30;
    }
    ctx->pc = 0x7A9C28u;
    {
        const bool branch_taken_0x7a9c28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C28u;
        // 0x7a9c2c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9c28) {
            ctx->pc = 0x7AA648u;
            goto label_7aa648;
        }
    }
    ctx->pc = 0x7A9C30u;
label_7a9c30:
    // 0x7a9c30: 0x10000328  b           . + 4 + (0x328 << 2)
label_7a9c34:
    if (ctx->pc == 0x7A9C34u) {
        ctx->pc = 0x7A9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C30u;
        // 0x7a9c34: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9C38u;
        goto label_7a9c38;
    }
    ctx->pc = 0x7A9C30u;
    {
        const bool branch_taken_0x7a9c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C30u;
        // 0x7a9c34: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9c30) {
            ctx->pc = 0x7AA8D4u;
            goto label_7aa8d4;
        }
    }
    ctx->pc = 0x7A9C38u;
label_7a9c38:
    // 0x7a9c38: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x7a9c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_7a9c3c:
    // 0x7a9c3c: 0x12020284  beq         $s0, $v0, . + 4 + (0x284 << 2)
label_7a9c40:
    if (ctx->pc == 0x7A9C40u) {
        ctx->pc = 0x7A9C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C3Cu;
        // 0x7a9c40: 0x2a020260  slti        $v0, $s0, 0x260 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)608) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9C44u;
        goto label_7a9c44;
    }
    ctx->pc = 0x7A9C3Cu;
    {
        const bool branch_taken_0x7a9c3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C3Cu;
        // 0x7a9c40: 0x2a020260  slti        $v0, $s0, 0x260 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)608) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9c3c) {
            ctx->pc = 0x7AA650u;
            goto label_7aa650;
        }
    }
    ctx->pc = 0x7A9C44u;
label_7a9c44:
    // 0x7a9c44: 0x14400322  bnez        $v0, . + 4 + (0x322 << 2)
label_7a9c48:
    if (ctx->pc == 0x7A9C48u) {
        ctx->pc = 0x7A9C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C44u;
        // 0x7a9c48: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9C4Cu;
        goto label_7a9c4c;
    }
    ctx->pc = 0x7A9C44u;
    {
        const bool branch_taken_0x7a9c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A9C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C44u;
        // 0x7a9c48: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9c44) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7A9C4Cu;
label_7a9c4c:
    // 0x7a9c4c: 0x2a020263  slti        $v0, $s0, 0x263
    ctx->pc = 0x7a9c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)611) ? 1 : 0);
label_7a9c50:
    // 0x7a9c50: 0x54400320  bnel        $v0, $zero, . + 4 + (0x320 << 2)
label_7a9c54:
    if (ctx->pc == 0x7A9C54u) {
        ctx->pc = 0x7A9C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C50u;
        // 0x7a9c54: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9C58u;
        goto label_7a9c58;
    }
    ctx->pc = 0x7A9C50u;
    {
        const bool branch_taken_0x7a9c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7a9c50) {
            ctx->pc = 0x7A9C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A9C50u;
            // 0x7a9c54: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AA8D4u;
            goto label_7aa8d4;
        }
    }
    ctx->pc = 0x7A9C58u;
label_7a9c58:
    // 0x7a9c58: 0x1000031d  b           . + 4 + (0x31D << 2)
label_7a9c5c:
    if (ctx->pc == 0x7A9C5Cu) {
        ctx->pc = 0x7A9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C58u;
        // 0x7a9c5c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9C60u;
        goto label_7a9c60;
    }
    ctx->pc = 0x7A9C58u;
    {
        const bool branch_taken_0x7a9c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C58u;
        // 0x7a9c5c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9c58) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7A9C60u;
label_7a9c60:
    // 0x7a9c60: 0x24020273  addiu       $v0, $zero, 0x273
    ctx->pc = 0x7a9c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 627));
label_7a9c64:
    // 0x7a9c64: 0x120202ad  beq         $s0, $v0, . + 4 + (0x2AD << 2)
label_7a9c68:
    if (ctx->pc == 0x7A9C68u) {
        ctx->pc = 0x7A9C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C64u;
        // 0x7a9c68: 0x2a020274  slti        $v0, $s0, 0x274 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)628) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9C6Cu;
        goto label_7a9c6c;
    }
    ctx->pc = 0x7A9C64u;
    {
        const bool branch_taken_0x7a9c64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C64u;
        // 0x7a9c68: 0x2a020274  slti        $v0, $s0, 0x274 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)628) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9c64) {
            ctx->pc = 0x7AA71Cu;
            goto label_7aa71c;
        }
    }
    ctx->pc = 0x7A9C6Cu;
label_7a9c6c:
    // 0x7a9c6c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_7a9c70:
    if (ctx->pc == 0x7A9C70u) {
        ctx->pc = 0x7A9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C6Cu;
        // 0x7a9c70: 0x2a02026d  slti        $v0, $s0, 0x26D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)621) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9C74u;
        goto label_7a9c74;
    }
    ctx->pc = 0x7A9C6Cu;
    {
        const bool branch_taken_0x7a9c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C6Cu;
        // 0x7a9c70: 0x2a02026d  slti        $v0, $s0, 0x26D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)621) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9c6c) {
            ctx->pc = 0x7A9CB8u;
            goto label_7a9cb8;
        }
    }
    ctx->pc = 0x7A9C74u;
label_7a9c74:
    // 0x7a9c74: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_7a9c78:
    if (ctx->pc == 0x7A9C78u) {
        ctx->pc = 0x7A9C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C74u;
        // 0x7a9c78: 0x2a02026b  slti        $v0, $s0, 0x26B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)619) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9C7Cu;
        goto label_7a9c7c;
    }
    ctx->pc = 0x7A9C74u;
    {
        const bool branch_taken_0x7a9c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C74u;
        // 0x7a9c78: 0x2a02026b  slti        $v0, $s0, 0x26B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)619) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9c74) {
            ctx->pc = 0x7A9C94u;
            goto label_7a9c94;
        }
    }
    ctx->pc = 0x7A9C7Cu;
label_7a9c7c:
    // 0x7a9c7c: 0x10400295  beqz        $v0, . + 4 + (0x295 << 2)
label_7a9c80:
    if (ctx->pc == 0x7A9C80u) {
        ctx->pc = 0x7A9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C7Cu;
        // 0x7a9c80: 0x2402026a  addiu       $v0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9C84u;
        goto label_7a9c84;
    }
    ctx->pc = 0x7A9C7Cu;
    {
        const bool branch_taken_0x7a9c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C7Cu;
        // 0x7a9c80: 0x2402026a  addiu       $v0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9c7c) {
            ctx->pc = 0x7AA6D4u;
            goto label_7aa6d4;
        }
    }
    ctx->pc = 0x7A9C84u;
label_7a9c84:
    // 0x7a9c84: 0x12020291  beq         $s0, $v0, . + 4 + (0x291 << 2)
label_7a9c88:
    if (ctx->pc == 0x7A9C88u) {
        ctx->pc = 0x7A9C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C84u;
        // 0x7a9c88: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9C8Cu;
        goto label_7a9c8c;
    }
    ctx->pc = 0x7A9C84u;
    {
        const bool branch_taken_0x7a9c84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C84u;
        // 0x7a9c88: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9c84) {
            ctx->pc = 0x7AA6CCu;
            goto label_7aa6cc;
        }
    }
    ctx->pc = 0x7A9C8Cu;
label_7a9c8c:
    // 0x7a9c8c: 0x10000311  b           . + 4 + (0x311 << 2)
label_7a9c90:
    if (ctx->pc == 0x7A9C90u) {
        ctx->pc = 0x7A9C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C8Cu;
        // 0x7a9c90: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9C94u;
        goto label_7a9c94;
    }
    ctx->pc = 0x7A9C8Cu;
    {
        const bool branch_taken_0x7a9c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C8Cu;
        // 0x7a9c90: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9c8c) {
            ctx->pc = 0x7AA8D4u;
            goto label_7aa8d4;
        }
    }
    ctx->pc = 0x7A9C94u;
label_7a9c94:
    // 0x7a9c94: 0x24020271  addiu       $v0, $zero, 0x271
    ctx->pc = 0x7a9c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
label_7a9c98:
    // 0x7a9c98: 0x12020298  beq         $s0, $v0, . + 4 + (0x298 << 2)
label_7a9c9c:
    if (ctx->pc == 0x7A9C9Cu) {
        ctx->pc = 0x7A9C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C98u;
        // 0x7a9c9c: 0x2a020272  slti        $v0, $s0, 0x272 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)626) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9CA0u;
        goto label_7a9ca0;
    }
    ctx->pc = 0x7A9C98u;
    {
        const bool branch_taken_0x7a9c98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9C98u;
        // 0x7a9c9c: 0x2a020272  slti        $v0, $s0, 0x272 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)626) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9c98) {
            ctx->pc = 0x7AA6FCu;
            goto label_7aa6fc;
        }
    }
    ctx->pc = 0x7A9CA0u;
label_7a9ca0:
    // 0x7a9ca0: 0x1040029a  beqz        $v0, . + 4 + (0x29A << 2)
label_7a9ca4:
    if (ctx->pc == 0x7A9CA4u) {
        ctx->pc = 0x7A9CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CA0u;
        // 0x7a9ca4: 0x24020270  addiu       $v0, $zero, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9CA8u;
        goto label_7a9ca8;
    }
    ctx->pc = 0x7A9CA0u;
    {
        const bool branch_taken_0x7a9ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CA0u;
        // 0x7a9ca4: 0x24020270  addiu       $v0, $zero, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9ca0) {
            ctx->pc = 0x7AA70Cu;
            goto label_7aa70c;
        }
    }
    ctx->pc = 0x7A9CA8u;
label_7a9ca8:
    // 0x7a9ca8: 0x12020265  beq         $s0, $v0, . + 4 + (0x265 << 2)
label_7a9cac:
    if (ctx->pc == 0x7A9CACu) {
        ctx->pc = 0x7A9CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CA8u;
        // 0x7a9cac: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9CB0u;
        goto label_7a9cb0;
    }
    ctx->pc = 0x7A9CA8u;
    {
        const bool branch_taken_0x7a9ca8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CA8u;
        // 0x7a9cac: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9ca8) {
            ctx->pc = 0x7AA640u;
            goto label_7aa640;
        }
    }
    ctx->pc = 0x7A9CB0u;
label_7a9cb0:
    // 0x7a9cb0: 0x10000308  b           . + 4 + (0x308 << 2)
label_7a9cb4:
    if (ctx->pc == 0x7A9CB4u) {
        ctx->pc = 0x7A9CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CB0u;
        // 0x7a9cb4: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9CB8u;
        goto label_7a9cb8;
    }
    ctx->pc = 0x7A9CB0u;
    {
        const bool branch_taken_0x7a9cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CB0u;
        // 0x7a9cb4: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9cb0) {
            ctx->pc = 0x7AA8D4u;
            goto label_7aa8d4;
        }
    }
    ctx->pc = 0x7A9CB8u;
label_7a9cb8:
    // 0x7a9cb8: 0x24020276  addiu       $v0, $zero, 0x276
    ctx->pc = 0x7a9cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
label_7a9cbc:
    // 0x7a9cbc: 0x1202029b  beq         $s0, $v0, . + 4 + (0x29B << 2)
label_7a9cc0:
    if (ctx->pc == 0x7A9CC0u) {
        ctx->pc = 0x7A9CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CBCu;
        // 0x7a9cc0: 0x2a020277  slti        $v0, $s0, 0x277 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)631) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9CC4u;
        goto label_7a9cc4;
    }
    ctx->pc = 0x7A9CBCu;
    {
        const bool branch_taken_0x7a9cbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CBCu;
        // 0x7a9cc0: 0x2a020277  slti        $v0, $s0, 0x277 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)631) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9cbc) {
            ctx->pc = 0x7AA72Cu;
            goto label_7aa72c;
        }
    }
    ctx->pc = 0x7A9CC4u;
label_7a9cc4:
    // 0x7a9cc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_7a9cc8:
    if (ctx->pc == 0x7A9CC8u) {
        ctx->pc = 0x7A9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CC4u;
        // 0x7a9cc8: 0x24020274  addiu       $v0, $zero, 0x274 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 628));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9CCCu;
        goto label_7a9ccc;
    }
    ctx->pc = 0x7A9CC4u;
    {
        const bool branch_taken_0x7a9cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CC4u;
        // 0x7a9cc8: 0x24020274  addiu       $v0, $zero, 0x274 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 628));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9cc4) {
            ctx->pc = 0x7A9CE4u;
            goto label_7a9ce4;
        }
    }
    ctx->pc = 0x7A9CCCu;
label_7a9ccc:
    // 0x7a9ccc: 0x1202025c  beq         $s0, $v0, . + 4 + (0x25C << 2)
label_7a9cd0:
    if (ctx->pc == 0x7A9CD0u) {
        ctx->pc = 0x7A9CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CCCu;
        // 0x7a9cd0: 0x24020275  addiu       $v0, $zero, 0x275 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 629));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9CD4u;
        goto label_7a9cd4;
    }
    ctx->pc = 0x7A9CCCu;
    {
        const bool branch_taken_0x7a9ccc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CCCu;
        // 0x7a9cd0: 0x24020275  addiu       $v0, $zero, 0x275 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 629));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9ccc) {
            ctx->pc = 0x7AA640u;
            goto label_7aa640;
        }
    }
    ctx->pc = 0x7A9CD4u;
label_7a9cd4:
    // 0x7a9cd4: 0x120202b8  beq         $s0, $v0, . + 4 + (0x2B8 << 2)
label_7a9cd8:
    if (ctx->pc == 0x7A9CD8u) {
        ctx->pc = 0x7A9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CD4u;
        // 0x7a9cd8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9CDCu;
        goto label_7a9cdc;
    }
    ctx->pc = 0x7A9CD4u;
    {
        const bool branch_taken_0x7a9cd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CD4u;
        // 0x7a9cd8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9cd4) {
            ctx->pc = 0x7AA7B8u;
            goto label_7aa7b8;
        }
    }
    ctx->pc = 0x7A9CDCu;
label_7a9cdc:
    // 0x7a9cdc: 0x100002fd  b           . + 4 + (0x2FD << 2)
label_7a9ce0:
    if (ctx->pc == 0x7A9CE0u) {
        ctx->pc = 0x7A9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CDCu;
        // 0x7a9ce0: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9CE4u;
        goto label_7a9ce4;
    }
    ctx->pc = 0x7A9CDCu;
    {
        const bool branch_taken_0x7a9cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CDCu;
        // 0x7a9ce0: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9cdc) {
            ctx->pc = 0x7AA8D4u;
            goto label_7aa8d4;
        }
    }
    ctx->pc = 0x7A9CE4u;
label_7a9ce4:
    // 0x7a9ce4: 0x24020366  addiu       $v0, $zero, 0x366
    ctx->pc = 0x7a9ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 870));
label_7a9ce8:
    // 0x7a9ce8: 0x120202f1  beq         $s0, $v0, . + 4 + (0x2F1 << 2)
label_7a9cec:
    if (ctx->pc == 0x7A9CECu) {
        ctx->pc = 0x7A9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CE8u;
        // 0x7a9cec: 0x2a020366  slti        $v0, $s0, 0x366 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)870) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9CF0u;
        goto label_7a9cf0;
    }
    ctx->pc = 0x7A9CE8u;
    {
        const bool branch_taken_0x7a9ce8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CE8u;
        // 0x7a9cec: 0x2a020366  slti        $v0, $s0, 0x366 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)870) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9ce8) {
            ctx->pc = 0x7AA8B0u;
            goto label_7aa8b0;
        }
    }
    ctx->pc = 0x7A9CF0u;
label_7a9cf0:
    // 0x7a9cf0: 0x144002f7  bnez        $v0, . + 4 + (0x2F7 << 2)
label_7a9cf4:
    if (ctx->pc == 0x7A9CF4u) {
        ctx->pc = 0x7A9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CF0u;
        // 0x7a9cf4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9CF8u;
        goto label_7a9cf8;
    }
    ctx->pc = 0x7A9CF0u;
    {
        const bool branch_taken_0x7a9cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CF0u;
        // 0x7a9cf4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9cf0) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7A9CF8u;
label_7a9cf8:
    // 0x7a9cf8: 0x2a0203bb  slti        $v0, $s0, 0x3BB
    ctx->pc = 0x7a9cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)955) ? 1 : 0);
label_7a9cfc:
    // 0x7a9cfc: 0x104002f4  beqz        $v0, . + 4 + (0x2F4 << 2)
label_7a9d00:
    if (ctx->pc == 0x7A9D00u) {
        ctx->pc = 0x7A9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CFCu;
        // 0x7a9d00: 0x2a0203b8  slti        $v0, $s0, 0x3B8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)952) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9D04u;
        goto label_7a9d04;
    }
    ctx->pc = 0x7A9CFCu;
    {
        const bool branch_taken_0x7a9cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9CFCu;
        // 0x7a9d00: 0x2a0203b8  slti        $v0, $s0, 0x3B8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)952) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9cfc) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7A9D04u;
label_7a9d04:
    // 0x7a9d04: 0x544002f3  bnel        $v0, $zero, . + 4 + (0x2F3 << 2)
label_7a9d08:
    if (ctx->pc == 0x7A9D08u) {
        ctx->pc = 0x7A9D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D04u;
        // 0x7a9d08: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9D0Cu;
        goto label_7a9d0c;
    }
    ctx->pc = 0x7A9D04u;
    {
        const bool branch_taken_0x7a9d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7a9d04) {
            ctx->pc = 0x7A9D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A9D04u;
            // 0x7a9d08: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AA8D4u;
            goto label_7aa8d4;
        }
    }
    ctx->pc = 0x7A9D0Cu;
label_7a9d0c:
    // 0x7a9d0c: 0x100002f0  b           . + 4 + (0x2F0 << 2)
label_7a9d10:
    if (ctx->pc == 0x7A9D10u) {
        ctx->pc = 0x7A9D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D0Cu;
        // 0x7a9d10: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9D14u;
        goto label_7a9d14;
    }
    ctx->pc = 0x7A9D0Cu;
    {
        const bool branch_taken_0x7a9d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D0Cu;
        // 0x7a9d10: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9d0c) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7A9D14u;
label_7a9d14:
    // 0x7a9d14: 0x24020616  addiu       $v0, $zero, 0x616
    ctx->pc = 0x7a9d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1558));
label_7a9d18:
    // 0x7a9d18: 0x120201a5  beq         $s0, $v0, . + 4 + (0x1A5 << 2)
label_7a9d1c:
    if (ctx->pc == 0x7A9D1Cu) {
        ctx->pc = 0x7A9D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D18u;
        // 0x7a9d1c: 0x2a020617  slti        $v0, $s0, 0x617 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1559) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9D20u;
        goto label_7a9d20;
    }
    ctx->pc = 0x7A9D18u;
    {
        const bool branch_taken_0x7a9d18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D18u;
        // 0x7a9d1c: 0x2a020617  slti        $v0, $s0, 0x617 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1559) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9d18) {
            ctx->pc = 0x7AA3B0u;
            goto label_7aa3b0;
        }
    }
    ctx->pc = 0x7A9D20u;
label_7a9d20:
    // 0x7a9d20: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_7a9d24:
    if (ctx->pc == 0x7A9D24u) {
        ctx->pc = 0x7A9D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D20u;
        // 0x7a9d24: 0x2402060a  addiu       $v0, $zero, 0x60A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1546));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9D28u;
        goto label_7a9d28;
    }
    ctx->pc = 0x7A9D20u;
    {
        const bool branch_taken_0x7a9d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D20u;
        // 0x7a9d24: 0x2402060a  addiu       $v0, $zero, 0x60A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1546));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9d20) {
            ctx->pc = 0x7A9DECu;
            goto label_7a9dec;
        }
    }
    ctx->pc = 0x7A9D28u;
label_7a9d28:
    // 0x7a9d28: 0x1202010b  beq         $s0, $v0, . + 4 + (0x10B << 2)
label_7a9d2c:
    if (ctx->pc == 0x7A9D2Cu) {
        ctx->pc = 0x7A9D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D28u;
        // 0x7a9d2c: 0x2a02060b  slti        $v0, $s0, 0x60B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1547) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9D30u;
        goto label_7a9d30;
    }
    ctx->pc = 0x7A9D28u;
    {
        const bool branch_taken_0x7a9d28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D28u;
        // 0x7a9d2c: 0x2a02060b  slti        $v0, $s0, 0x60B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1547) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9d28) {
            ctx->pc = 0x7AA158u;
            goto label_7aa158;
        }
    }
    ctx->pc = 0x7A9D30u;
label_7a9d30:
    // 0x7a9d30: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_7a9d34:
    if (ctx->pc == 0x7A9D34u) {
        ctx->pc = 0x7A9D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D30u;
        // 0x7a9d34: 0x24020603  addiu       $v0, $zero, 0x603 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1539));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9D38u;
        goto label_7a9d38;
    }
    ctx->pc = 0x7A9D30u;
    {
        const bool branch_taken_0x7a9d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D30u;
        // 0x7a9d34: 0x24020603  addiu       $v0, $zero, 0x603 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1539));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9d30) {
            ctx->pc = 0x7A9D98u;
            goto label_7a9d98;
        }
    }
    ctx->pc = 0x7A9D38u;
label_7a9d38:
    // 0x7a9d38: 0x120200cc  beq         $s0, $v0, . + 4 + (0xCC << 2)
label_7a9d3c:
    if (ctx->pc == 0x7A9D3Cu) {
        ctx->pc = 0x7A9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D38u;
        // 0x7a9d3c: 0x2a020604  slti        $v0, $s0, 0x604 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1540) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9D40u;
        goto label_7a9d40;
    }
    ctx->pc = 0x7A9D38u;
    {
        const bool branch_taken_0x7a9d38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D38u;
        // 0x7a9d3c: 0x2a020604  slti        $v0, $s0, 0x604 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1540) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9d38) {
            ctx->pc = 0x7AA06Cu;
            goto label_7aa06c;
        }
    }
    ctx->pc = 0x7A9D40u;
label_7a9d40:
    // 0x7a9d40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_7a9d44:
    if (ctx->pc == 0x7A9D44u) {
        ctx->pc = 0x7A9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D40u;
        // 0x7a9d44: 0x24020601  addiu       $v0, $zero, 0x601 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1537));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9D48u;
        goto label_7a9d48;
    }
    ctx->pc = 0x7A9D40u;
    {
        const bool branch_taken_0x7a9d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D40u;
        // 0x7a9d44: 0x24020601  addiu       $v0, $zero, 0x601 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1537));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9d40) {
            ctx->pc = 0x7A9D60u;
            goto label_7a9d60;
        }
    }
    ctx->pc = 0x7A9D48u;
label_7a9d48:
    // 0x7a9d48: 0x120200b3  beq         $s0, $v0, . + 4 + (0xB3 << 2)
label_7a9d4c:
    if (ctx->pc == 0x7A9D4Cu) {
        ctx->pc = 0x7A9D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D48u;
        // 0x7a9d4c: 0x24020602  addiu       $v0, $zero, 0x602 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9D50u;
        goto label_7a9d50;
    }
    ctx->pc = 0x7A9D48u;
    {
        const bool branch_taken_0x7a9d48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D48u;
        // 0x7a9d4c: 0x24020602  addiu       $v0, $zero, 0x602 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9d48) {
            ctx->pc = 0x7AA018u;
            goto label_7aa018;
        }
    }
    ctx->pc = 0x7A9D50u;
label_7a9d50:
    // 0x7a9d50: 0x520200b4  beql        $s0, $v0, . + 4 + (0xB4 << 2)
label_7a9d54:
    if (ctx->pc == 0x7A9D54u) {
        ctx->pc = 0x7A9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D50u;
        // 0x7a9d54: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9D58u;
        goto label_7a9d58;
    }
    ctx->pc = 0x7A9D50u;
    {
        const bool branch_taken_0x7a9d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x7a9d50) {
            ctx->pc = 0x7A9D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A9D50u;
            // 0x7a9d54: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AA024u;
            goto label_7aa024;
        }
    }
    ctx->pc = 0x7A9D58u;
label_7a9d58:
    // 0x7a9d58: 0x100002dd  b           . + 4 + (0x2DD << 2)
label_7a9d5c:
    if (ctx->pc == 0x7A9D5Cu) {
        ctx->pc = 0x7A9D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D58u;
        // 0x7a9d5c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9D60u;
        goto label_7a9d60;
    }
    ctx->pc = 0x7A9D58u;
    {
        const bool branch_taken_0x7a9d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D58u;
        // 0x7a9d5c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9d58) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7A9D60u;
label_7a9d60:
    // 0x7a9d60: 0x24020606  addiu       $v0, $zero, 0x606
    ctx->pc = 0x7a9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1542));
label_7a9d64:
    // 0x7a9d64: 0x120200f6  beq         $s0, $v0, . + 4 + (0xF6 << 2)
label_7a9d68:
    if (ctx->pc == 0x7A9D68u) {
        ctx->pc = 0x7A9D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D64u;
        // 0x7a9d68: 0x2a020607  slti        $v0, $s0, 0x607 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1543) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9D6Cu;
        goto label_7a9d6c;
    }
    ctx->pc = 0x7A9D64u;
    {
        const bool branch_taken_0x7a9d64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D64u;
        // 0x7a9d68: 0x2a020607  slti        $v0, $s0, 0x607 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1543) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9d64) {
            ctx->pc = 0x7AA140u;
            goto label_7aa140;
        }
    }
    ctx->pc = 0x7A9D6Cu;
label_7a9d6c:
    // 0x7a9d6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_7a9d70:
    if (ctx->pc == 0x7A9D70u) {
        ctx->pc = 0x7A9D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D6Cu;
        // 0x7a9d70: 0x24020605  addiu       $v0, $zero, 0x605 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1541));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9D74u;
        goto label_7a9d74;
    }
    ctx->pc = 0x7A9D6Cu;
    {
        const bool branch_taken_0x7a9d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D6Cu;
        // 0x7a9d70: 0x24020605  addiu       $v0, $zero, 0x605 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1541));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9d6c) {
            ctx->pc = 0x7A9D84u;
            goto label_7a9d84;
        }
    }
    ctx->pc = 0x7A9D74u;
label_7a9d74:
    // 0x7a9d74: 0x120200cd  beq         $s0, $v0, . + 4 + (0xCD << 2)
label_7a9d78:
    if (ctx->pc == 0x7A9D78u) {
        ctx->pc = 0x7A9D7Cu;
        goto label_7a9d7c;
    }
    ctx->pc = 0x7A9D74u;
    {
        const bool branch_taken_0x7a9d74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x7a9d74) {
            ctx->pc = 0x7AA0ACu;
            goto label_7aa0ac;
        }
    }
    ctx->pc = 0x7A9D7Cu;
label_7a9d7c:
    // 0x7a9d7c: 0x100002d4  b           . + 4 + (0x2D4 << 2)
label_7a9d80:
    if (ctx->pc == 0x7A9D80u) {
        ctx->pc = 0x7A9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D7Cu;
        // 0x7a9d80: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9D84u;
        goto label_7a9d84;
    }
    ctx->pc = 0x7A9D7Cu;
    {
        const bool branch_taken_0x7a9d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D7Cu;
        // 0x7a9d80: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9d7c) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7A9D84u;
label_7a9d84:
    // 0x7a9d84: 0x24020607  addiu       $v0, $zero, 0x607
    ctx->pc = 0x7a9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1543));
label_7a9d88:
    // 0x7a9d88: 0x120200f0  beq         $s0, $v0, . + 4 + (0xF0 << 2)
label_7a9d8c:
    if (ctx->pc == 0x7A9D8Cu) {
        ctx->pc = 0x7A9D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D88u;
        // 0x7a9d8c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9D90u;
        goto label_7a9d90;
    }
    ctx->pc = 0x7A9D88u;
    {
        const bool branch_taken_0x7a9d88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D88u;
        // 0x7a9d8c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9d88) {
            ctx->pc = 0x7AA14Cu;
            goto label_7aa14c;
        }
    }
    ctx->pc = 0x7A9D90u;
label_7a9d90:
    // 0x7a9d90: 0x100002d0  b           . + 4 + (0x2D0 << 2)
label_7a9d94:
    if (ctx->pc == 0x7A9D94u) {
        ctx->pc = 0x7A9D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D90u;
        // 0x7a9d94: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9D98u;
        goto label_7a9d98;
    }
    ctx->pc = 0x7A9D90u;
    {
        const bool branch_taken_0x7a9d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D90u;
        // 0x7a9d94: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9d90) {
            ctx->pc = 0x7AA8D4u;
            goto label_7aa8d4;
        }
    }
    ctx->pc = 0x7A9D98u;
label_7a9d98:
    // 0x7a9d98: 0x24020610  addiu       $v0, $zero, 0x610
    ctx->pc = 0x7a9d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
label_7a9d9c:
    // 0x7a9d9c: 0x12020157  beq         $s0, $v0, . + 4 + (0x157 << 2)
label_7a9da0:
    if (ctx->pc == 0x7A9DA0u) {
        ctx->pc = 0x7A9DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D9Cu;
        // 0x7a9da0: 0x2a020611  slti        $v0, $s0, 0x611 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1553) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9DA4u;
        goto label_7a9da4;
    }
    ctx->pc = 0x7A9D9Cu;
    {
        const bool branch_taken_0x7a9d9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9D9Cu;
        // 0x7a9da0: 0x2a020611  slti        $v0, $s0, 0x611 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1553) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9d9c) {
            ctx->pc = 0x7AA2FCu;
            goto label_7aa2fc;
        }
    }
    ctx->pc = 0x7A9DA4u;
label_7a9da4:
    // 0x7a9da4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_7a9da8:
    if (ctx->pc == 0x7A9DA8u) {
        ctx->pc = 0x7A9DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DA4u;
        // 0x7a9da8: 0x2402060b  addiu       $v0, $zero, 0x60B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1547));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9DACu;
        goto label_7a9dac;
    }
    ctx->pc = 0x7A9DA4u;
    {
        const bool branch_taken_0x7a9da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DA4u;
        // 0x7a9da8: 0x2402060b  addiu       $v0, $zero, 0x60B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9da4) {
            ctx->pc = 0x7A9DC4u;
            goto label_7a9dc4;
        }
    }
    ctx->pc = 0x7A9DACu;
label_7a9dac:
    // 0x7a9dac: 0x1202013c  beq         $s0, $v0, . + 4 + (0x13C << 2)
label_7a9db0:
    if (ctx->pc == 0x7A9DB0u) {
        ctx->pc = 0x7A9DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DACu;
        // 0x7a9db0: 0x2402060c  addiu       $v0, $zero, 0x60C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1548));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9DB4u;
        goto label_7a9db4;
    }
    ctx->pc = 0x7A9DACu;
    {
        const bool branch_taken_0x7a9dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DACu;
        // 0x7a9db0: 0x2402060c  addiu       $v0, $zero, 0x60C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1548));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9dac) {
            ctx->pc = 0x7AA2A0u;
            goto label_7aa2a0;
        }
    }
    ctx->pc = 0x7A9DB4u;
label_7a9db4:
    // 0x7a9db4: 0x1202014a  beq         $s0, $v0, . + 4 + (0x14A << 2)
label_7a9db8:
    if (ctx->pc == 0x7A9DB8u) {
        ctx->pc = 0x7A9DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DB4u;
        // 0x7a9db8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9DBCu;
        goto label_7a9dbc;
    }
    ctx->pc = 0x7A9DB4u;
    {
        const bool branch_taken_0x7a9db4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DB4u;
        // 0x7a9db8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9db4) {
            ctx->pc = 0x7AA2E0u;
            goto label_7aa2e0;
        }
    }
    ctx->pc = 0x7A9DBCu;
label_7a9dbc:
    // 0x7a9dbc: 0x100002c5  b           . + 4 + (0x2C5 << 2)
label_7a9dc0:
    if (ctx->pc == 0x7A9DC0u) {
        ctx->pc = 0x7A9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DBCu;
        // 0x7a9dc0: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9DC4u;
        goto label_7a9dc4;
    }
    ctx->pc = 0x7A9DBCu;
    {
        const bool branch_taken_0x7a9dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DBCu;
        // 0x7a9dc0: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9dbc) {
            ctx->pc = 0x7AA8D4u;
            goto label_7aa8d4;
        }
    }
    ctx->pc = 0x7A9DC4u;
label_7a9dc4:
    // 0x7a9dc4: 0x24020612  addiu       $v0, $zero, 0x612
    ctx->pc = 0x7a9dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1554));
label_7a9dc8:
    // 0x7a9dc8: 0x12020157  beq         $s0, $v0, . + 4 + (0x157 << 2)
label_7a9dcc:
    if (ctx->pc == 0x7A9DCCu) {
        ctx->pc = 0x7A9DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DC8u;
        // 0x7a9dcc: 0x2a020612  slti        $v0, $s0, 0x612 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1554) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9DD0u;
        goto label_7a9dd0;
    }
    ctx->pc = 0x7A9DC8u;
    {
        const bool branch_taken_0x7a9dc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DC8u;
        // 0x7a9dcc: 0x2a020612  slti        $v0, $s0, 0x612 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1554) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9dc8) {
            ctx->pc = 0x7AA328u;
            goto label_7aa328;
        }
    }
    ctx->pc = 0x7A9DD0u;
label_7a9dd0:
    // 0x7a9dd0: 0x14400153  bnez        $v0, . + 4 + (0x153 << 2)
label_7a9dd4:
    if (ctx->pc == 0x7A9DD4u) {
        ctx->pc = 0x7A9DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DD0u;
        // 0x7a9dd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9DD8u;
        goto label_7a9dd8;
    }
    ctx->pc = 0x7A9DD0u;
    {
        const bool branch_taken_0x7a9dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A9DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DD0u;
        // 0x7a9dd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9dd0) {
            ctx->pc = 0x7AA320u;
            goto label_7aa320;
        }
    }
    ctx->pc = 0x7A9DD8u;
label_7a9dd8:
    // 0x7a9dd8: 0x24020615  addiu       $v0, $zero, 0x615
    ctx->pc = 0x7a9dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1557));
label_7a9ddc:
    // 0x7a9ddc: 0x12020157  beq         $s0, $v0, . + 4 + (0x157 << 2)
label_7a9de0:
    if (ctx->pc == 0x7A9DE0u) {
        ctx->pc = 0x7A9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DDCu;
        // 0x7a9de0: 0x24040253  addiu       $a0, $zero, 0x253 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9DE4u;
        goto label_7a9de4;
    }
    ctx->pc = 0x7A9DDCu;
    {
        const bool branch_taken_0x7a9ddc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DDCu;
        // 0x7a9de0: 0x24040253  addiu       $a0, $zero, 0x253 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9ddc) {
            ctx->pc = 0x7AA33Cu;
            goto label_7aa33c;
        }
    }
    ctx->pc = 0x7A9DE4u;
label_7a9de4:
    // 0x7a9de4: 0x100002ba  b           . + 4 + (0x2BA << 2)
label_7a9de8:
    if (ctx->pc == 0x7A9DE8u) {
        ctx->pc = 0x7A9DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DE4u;
        // 0x7a9de8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9DECu;
        goto label_7a9dec;
    }
    ctx->pc = 0x7A9DE4u;
    {
        const bool branch_taken_0x7a9de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DE4u;
        // 0x7a9de8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9de4) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7A9DECu;
label_7a9dec:
    // 0x7a9dec: 0x24020626  addiu       $v0, $zero, 0x626
    ctx->pc = 0x7a9decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1574));
label_7a9df0:
    // 0x7a9df0: 0x120201bf  beq         $s0, $v0, . + 4 + (0x1BF << 2)
label_7a9df4:
    if (ctx->pc == 0x7A9DF4u) {
        ctx->pc = 0x7A9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DF0u;
        // 0x7a9df4: 0x2a020627  slti        $v0, $s0, 0x627 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1575) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9DF8u;
        goto label_7a9df8;
    }
    ctx->pc = 0x7A9DF0u;
    {
        const bool branch_taken_0x7a9df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DF0u;
        // 0x7a9df4: 0x2a020627  slti        $v0, $s0, 0x627 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1575) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9df0) {
            ctx->pc = 0x7AA4F0u;
            goto label_7aa4f0;
        }
    }
    ctx->pc = 0x7A9DF8u;
label_7a9df8:
    // 0x7a9df8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_7a9dfc:
    if (ctx->pc == 0x7A9DFCu) {
        ctx->pc = 0x7A9DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DF8u;
        // 0x7a9dfc: 0x2402061a  addiu       $v0, $zero, 0x61A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1562));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9E00u;
        goto label_7a9e00;
    }
    ctx->pc = 0x7A9DF8u;
    {
        const bool branch_taken_0x7a9df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9DF8u;
        // 0x7a9dfc: 0x2402061a  addiu       $v0, $zero, 0x61A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1562));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9df8) {
            ctx->pc = 0x7A9E60u;
            goto label_7a9e60;
        }
    }
    ctx->pc = 0x7A9E00u;
label_7a9e00:
    // 0x7a9e00: 0x1202014c  beq         $s0, $v0, . + 4 + (0x14C << 2)
label_7a9e04:
    if (ctx->pc == 0x7A9E04u) {
        ctx->pc = 0x7A9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E00u;
        // 0x7a9e04: 0x2a02061b  slti        $v0, $s0, 0x61B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1563) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9E08u;
        goto label_7a9e08;
    }
    ctx->pc = 0x7A9E00u;
    {
        const bool branch_taken_0x7a9e00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E00u;
        // 0x7a9e04: 0x2a02061b  slti        $v0, $s0, 0x61B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1563) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9e00) {
            ctx->pc = 0x7AA334u;
            goto label_7aa334;
        }
    }
    ctx->pc = 0x7A9E08u;
label_7a9e08:
    // 0x7a9e08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_7a9e0c:
    if (ctx->pc == 0x7A9E0Cu) {
        ctx->pc = 0x7A9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E08u;
        // 0x7a9e0c: 0x24020617  addiu       $v0, $zero, 0x617 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1559));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9E10u;
        goto label_7a9e10;
    }
    ctx->pc = 0x7A9E08u;
    {
        const bool branch_taken_0x7a9e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E08u;
        // 0x7a9e0c: 0x24020617  addiu       $v0, $zero, 0x617 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9e08) {
            ctx->pc = 0x7A9E28u;
            goto label_7a9e28;
        }
    }
    ctx->pc = 0x7A9E10u;
label_7a9e10:
    // 0x7a9e10: 0x12020172  beq         $s0, $v0, . + 4 + (0x172 << 2)
label_7a9e14:
    if (ctx->pc == 0x7A9E14u) {
        ctx->pc = 0x7A9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E10u;
        // 0x7a9e14: 0x24020618  addiu       $v0, $zero, 0x618 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9E18u;
        goto label_7a9e18;
    }
    ctx->pc = 0x7A9E10u;
    {
        const bool branch_taken_0x7a9e10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E10u;
        // 0x7a9e14: 0x24020618  addiu       $v0, $zero, 0x618 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9e10) {
            ctx->pc = 0x7AA3DCu;
            goto label_7aa3dc;
        }
    }
    ctx->pc = 0x7A9E18u;
label_7a9e18:
    // 0x7a9e18: 0x12020173  beq         $s0, $v0, . + 4 + (0x173 << 2)
label_7a9e1c:
    if (ctx->pc == 0x7A9E1Cu) {
        ctx->pc = 0x7A9E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E18u;
        // 0x7a9e1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9E20u;
        goto label_7a9e20;
    }
    ctx->pc = 0x7A9E18u;
    {
        const bool branch_taken_0x7a9e18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E18u;
        // 0x7a9e1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9e18) {
            ctx->pc = 0x7AA3E8u;
            goto label_7aa3e8;
        }
    }
    ctx->pc = 0x7A9E20u;
label_7a9e20:
    // 0x7a9e20: 0x100002ab  b           . + 4 + (0x2AB << 2)
label_7a9e24:
    if (ctx->pc == 0x7A9E24u) {
        ctx->pc = 0x7A9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E20u;
        // 0x7a9e24: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9E28u;
        goto label_7a9e28;
    }
    ctx->pc = 0x7A9E20u;
    {
        const bool branch_taken_0x7a9e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E20u;
        // 0x7a9e24: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9e20) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7A9E28u;
label_7a9e28:
    // 0x7a9e28: 0x24020622  addiu       $v0, $zero, 0x622
    ctx->pc = 0x7a9e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1570));
label_7a9e2c:
    // 0x7a9e2c: 0x12020186  beq         $s0, $v0, . + 4 + (0x186 << 2)
label_7a9e30:
    if (ctx->pc == 0x7A9E30u) {
        ctx->pc = 0x7A9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E2Cu;
        // 0x7a9e30: 0x2a020623  slti        $v0, $s0, 0x623 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1571) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9E34u;
        goto label_7a9e34;
    }
    ctx->pc = 0x7A9E2Cu;
    {
        const bool branch_taken_0x7a9e2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E2Cu;
        // 0x7a9e30: 0x2a020623  slti        $v0, $s0, 0x623 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1571) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9e2c) {
            ctx->pc = 0x7AA448u;
            goto label_7aa448;
        }
    }
    ctx->pc = 0x7A9E34u;
label_7a9e34:
    // 0x7a9e34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_7a9e38:
    if (ctx->pc == 0x7A9E38u) {
        ctx->pc = 0x7A9E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E34u;
        // 0x7a9e38: 0x24020621  addiu       $v0, $zero, 0x621 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1569));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9E3Cu;
        goto label_7a9e3c;
    }
    ctx->pc = 0x7A9E34u;
    {
        const bool branch_taken_0x7a9e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E34u;
        // 0x7a9e38: 0x24020621  addiu       $v0, $zero, 0x621 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1569));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9e34) {
            ctx->pc = 0x7A9E4Cu;
            goto label_7a9e4c;
        }
    }
    ctx->pc = 0x7A9E3Cu;
label_7a9e3c:
    // 0x7a9e3c: 0x12020178  beq         $s0, $v0, . + 4 + (0x178 << 2)
label_7a9e40:
    if (ctx->pc == 0x7A9E40u) {
        ctx->pc = 0x7A9E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E3Cu;
        // 0x7a9e40: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9E44u;
        goto label_7a9e44;
    }
    ctx->pc = 0x7A9E3Cu;
    {
        const bool branch_taken_0x7a9e3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E3Cu;
        // 0x7a9e40: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9e3c) {
            ctx->pc = 0x7AA420u;
            goto label_7aa420;
        }
    }
    ctx->pc = 0x7A9E44u;
label_7a9e44:
    // 0x7a9e44: 0x100002a3  b           . + 4 + (0x2A3 << 2)
label_7a9e48:
    if (ctx->pc == 0x7A9E48u) {
        ctx->pc = 0x7A9E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E44u;
        // 0x7a9e48: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9E4Cu;
        goto label_7a9e4c;
    }
    ctx->pc = 0x7A9E44u;
    {
        const bool branch_taken_0x7a9e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E44u;
        // 0x7a9e48: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9e44) {
            ctx->pc = 0x7AA8D4u;
            goto label_7aa8d4;
        }
    }
    ctx->pc = 0x7A9E4Cu;
label_7a9e4c:
    // 0x7a9e4c: 0x24020625  addiu       $v0, $zero, 0x625
    ctx->pc = 0x7a9e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1573));
label_7a9e50:
    // 0x7a9e50: 0x12020180  beq         $s0, $v0, . + 4 + (0x180 << 2)
label_7a9e54:
    if (ctx->pc == 0x7A9E54u) {
        ctx->pc = 0x7A9E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E50u;
        // 0x7a9e54: 0x24040628  addiu       $a0, $zero, 0x628 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9E58u;
        goto label_7a9e58;
    }
    ctx->pc = 0x7A9E50u;
    {
        const bool branch_taken_0x7a9e50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E50u;
        // 0x7a9e54: 0x24040628  addiu       $a0, $zero, 0x628 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9e50) {
            ctx->pc = 0x7AA454u;
            goto label_7aa454;
        }
    }
    ctx->pc = 0x7A9E58u;
label_7a9e58:
    // 0x7a9e58: 0x1000029d  b           . + 4 + (0x29D << 2)
label_7a9e5c:
    if (ctx->pc == 0x7A9E5Cu) {
        ctx->pc = 0x7A9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E58u;
        // 0x7a9e5c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9E60u;
        goto label_7a9e60;
    }
    ctx->pc = 0x7A9E58u;
    {
        const bool branch_taken_0x7a9e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E58u;
        // 0x7a9e5c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9e58) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7A9E60u;
label_7a9e60:
    // 0x7a9e60: 0x2402064a  addiu       $v0, $zero, 0x64A
    ctx->pc = 0x7a9e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1610));
label_7a9e64:
    // 0x7a9e64: 0x120201cb  beq         $s0, $v0, . + 4 + (0x1CB << 2)
label_7a9e68:
    if (ctx->pc == 0x7A9E68u) {
        ctx->pc = 0x7A9E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E64u;
        // 0x7a9e68: 0x2a02064b  slti        $v0, $s0, 0x64B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1611) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9E6Cu;
        goto label_7a9e6c;
    }
    ctx->pc = 0x7A9E64u;
    {
        const bool branch_taken_0x7a9e64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E64u;
        // 0x7a9e68: 0x2a02064b  slti        $v0, $s0, 0x64B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1611) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9e64) {
            ctx->pc = 0x7AA594u;
            goto label_7aa594;
        }
    }
    ctx->pc = 0x7A9E6Cu;
label_7a9e6c:
    // 0x7a9e6c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_7a9e70:
    if (ctx->pc == 0x7A9E70u) {
        ctx->pc = 0x7A9E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E6Cu;
        // 0x7a9e70: 0x24020642  addiu       $v0, $zero, 0x642 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1602));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9E74u;
        goto label_7a9e74;
    }
    ctx->pc = 0x7A9E6Cu;
    {
        const bool branch_taken_0x7a9e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E6Cu;
        // 0x7a9e70: 0x24020642  addiu       $v0, $zero, 0x642 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1602));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9e6c) {
            ctx->pc = 0x7A9EA8u;
            goto label_7a9ea8;
        }
    }
    ctx->pc = 0x7A9E74u;
label_7a9e74:
    // 0x7a9e74: 0x120201ba  beq         $s0, $v0, . + 4 + (0x1BA << 2)
label_7a9e78:
    if (ctx->pc == 0x7A9E78u) {
        ctx->pc = 0x7A9E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E74u;
        // 0x7a9e78: 0x2a020643  slti        $v0, $s0, 0x643 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1603) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9E7Cu;
        goto label_7a9e7c;
    }
    ctx->pc = 0x7A9E74u;
    {
        const bool branch_taken_0x7a9e74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E74u;
        // 0x7a9e78: 0x2a020643  slti        $v0, $s0, 0x643 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1603) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9e74) {
            ctx->pc = 0x7AA560u;
            goto label_7aa560;
        }
    }
    ctx->pc = 0x7A9E7Cu;
label_7a9e7c:
    // 0x7a9e7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_7a9e80:
    if (ctx->pc == 0x7A9E80u) {
        ctx->pc = 0x7A9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E7Cu;
        // 0x7a9e80: 0x24020627  addiu       $v0, $zero, 0x627 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1575));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9E84u;
        goto label_7a9e84;
    }
    ctx->pc = 0x7A9E7Cu;
    {
        const bool branch_taken_0x7a9e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E7Cu;
        // 0x7a9e80: 0x24020627  addiu       $v0, $zero, 0x627 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1575));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9e7c) {
            ctx->pc = 0x7A9E94u;
            goto label_7a9e94;
        }
    }
    ctx->pc = 0x7A9E84u;
label_7a9e84:
    // 0x7a9e84: 0x520201ae  beql        $s0, $v0, . + 4 + (0x1AE << 2)
label_7a9e88:
    if (ctx->pc == 0x7A9E88u) {
        ctx->pc = 0x7A9E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E84u;
        // 0x7a9e88: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9E8Cu;
        goto label_7a9e8c;
    }
    ctx->pc = 0x7A9E84u;
    {
        const bool branch_taken_0x7a9e84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x7a9e84) {
            ctx->pc = 0x7A9E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A9E84u;
            // 0x7a9e88: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AA540u;
            goto label_7aa540;
        }
    }
    ctx->pc = 0x7A9E8Cu;
label_7a9e8c:
    // 0x7a9e8c: 0x10000290  b           . + 4 + (0x290 << 2)
label_7a9e90:
    if (ctx->pc == 0x7A9E90u) {
        ctx->pc = 0x7A9E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E8Cu;
        // 0x7a9e90: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9E94u;
        goto label_7a9e94;
    }
    ctx->pc = 0x7A9E8Cu;
    {
        const bool branch_taken_0x7a9e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E8Cu;
        // 0x7a9e90: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9e8c) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7A9E94u;
label_7a9e94:
    // 0x7a9e94: 0x24020647  addiu       $v0, $zero, 0x647
    ctx->pc = 0x7a9e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1607));
label_7a9e98:
    // 0x7a9e98: 0x120201b4  beq         $s0, $v0, . + 4 + (0x1B4 << 2)
label_7a9e9c:
    if (ctx->pc == 0x7A9E9Cu) {
        ctx->pc = 0x7A9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E98u;
        // 0x7a9e9c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9EA0u;
        goto label_7a9ea0;
    }
    ctx->pc = 0x7A9E98u;
    {
        const bool branch_taken_0x7a9e98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9E98u;
        // 0x7a9e9c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9e98) {
            ctx->pc = 0x7AA56Cu;
            goto label_7aa56c;
        }
    }
    ctx->pc = 0x7A9EA0u;
label_7a9ea0:
    // 0x7a9ea0: 0x1000028c  b           . + 4 + (0x28C << 2)
label_7a9ea4:
    if (ctx->pc == 0x7A9EA4u) {
        ctx->pc = 0x7A9EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9EA0u;
        // 0x7a9ea4: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9EA8u;
        goto label_7a9ea8;
    }
    ctx->pc = 0x7A9EA0u;
    {
        const bool branch_taken_0x7a9ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9EA0u;
        // 0x7a9ea4: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9ea0) {
            ctx->pc = 0x7AA8D4u;
            goto label_7aa8d4;
        }
    }
    ctx->pc = 0x7A9EA8u;
label_7a9ea8:
    // 0x7a9ea8: 0x2402066e  addiu       $v0, $zero, 0x66E
    ctx->pc = 0x7a9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1646));
label_7a9eac:
    // 0x7a9eac: 0x120201c1  beq         $s0, $v0, . + 4 + (0x1C1 << 2)
label_7a9eb0:
    if (ctx->pc == 0x7A9EB0u) {
        ctx->pc = 0x7A9EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9EACu;
        // 0x7a9eb0: 0x2a02066f  slti        $v0, $s0, 0x66F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1647) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9EB4u;
        goto label_7a9eb4;
    }
    ctx->pc = 0x7A9EACu;
    {
        const bool branch_taken_0x7a9eac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9EACu;
        // 0x7a9eb0: 0x2a02066f  slti        $v0, $s0, 0x66F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1647) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9eac) {
            ctx->pc = 0x7AA5B4u;
            goto label_7aa5b4;
        }
    }
    ctx->pc = 0x7A9EB4u;
label_7a9eb4:
    // 0x7a9eb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_7a9eb8:
    if (ctx->pc == 0x7A9EB8u) {
        ctx->pc = 0x7A9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9EB4u;
        // 0x7a9eb8: 0x24020650  addiu       $v0, $zero, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9EBCu;
        goto label_7a9ebc;
    }
    ctx->pc = 0x7A9EB4u;
    {
        const bool branch_taken_0x7a9eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9EB4u;
        // 0x7a9eb8: 0x24020650  addiu       $v0, $zero, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9eb4) {
            ctx->pc = 0x7A9ECCu;
            goto label_7a9ecc;
        }
    }
    ctx->pc = 0x7A9EBCu;
label_7a9ebc:
    // 0x7a9ebc: 0x120201bb  beq         $s0, $v0, . + 4 + (0x1BB << 2)
label_7a9ec0:
    if (ctx->pc == 0x7A9EC0u) {
        ctx->pc = 0x7A9EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9EBCu;
        // 0x7a9ec0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9EC4u;
        goto label_7a9ec4;
    }
    ctx->pc = 0x7A9EBCu;
    {
        const bool branch_taken_0x7a9ebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9EBCu;
        // 0x7a9ec0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9ebc) {
            ctx->pc = 0x7AA5ACu;
            goto label_7aa5ac;
        }
    }
    ctx->pc = 0x7A9EC4u;
label_7a9ec4:
    // 0x7a9ec4: 0x10000283  b           . + 4 + (0x283 << 2)
label_7a9ec8:
    if (ctx->pc == 0x7A9EC8u) {
        ctx->pc = 0x7A9EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9EC4u;
        // 0x7a9ec8: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9ECCu;
        goto label_7a9ecc;
    }
    ctx->pc = 0x7A9EC4u;
    {
        const bool branch_taken_0x7a9ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9EC4u;
        // 0x7a9ec8: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9ec4) {
            ctx->pc = 0x7AA8D4u;
            goto label_7aa8d4;
        }
    }
    ctx->pc = 0x7A9ECCu;
label_7a9ecc:
    // 0x7a9ecc: 0x24020676  addiu       $v0, $zero, 0x676
    ctx->pc = 0x7a9eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1654));
label_7a9ed0:
    // 0x7a9ed0: 0x120201b6  beq         $s0, $v0, . + 4 + (0x1B6 << 2)
label_7a9ed4:
    if (ctx->pc == 0x7A9ED4u) {
        ctx->pc = 0x7A9ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9ED0u;
        // 0x7a9ed4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9ED8u;
        goto label_7a9ed8;
    }
    ctx->pc = 0x7A9ED0u;
    {
        const bool branch_taken_0x7a9ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A9ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9ED0u;
        // 0x7a9ed4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9ed0) {
            ctx->pc = 0x7AA5ACu;
            goto label_7aa5ac;
        }
    }
    ctx->pc = 0x7A9ED8u;
label_7a9ed8:
    // 0x7a9ed8: 0x1000027e  b           . + 4 + (0x27E << 2)
label_7a9edc:
    if (ctx->pc == 0x7A9EDCu) {
        ctx->pc = 0x7A9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9ED8u;
        // 0x7a9edc: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9EE0u;
        goto label_7a9ee0;
    }
    ctx->pc = 0x7A9ED8u;
    {
        const bool branch_taken_0x7a9ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9ED8u;
        // 0x7a9edc: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9ed8) {
            ctx->pc = 0x7AA8D4u;
            goto label_7aa8d4;
        }
    }
    ctx->pc = 0x7A9EE0u;
label_7a9ee0:
    // 0x7a9ee0: 0xc0b6dac  jal         func_2DB6B0
label_7a9ee4:
    if (ctx->pc == 0x7A9EE4u) {
        ctx->pc = 0x7A9EE8u;
        goto label_7a9ee8;
    }
    ctx->pc = 0x7A9EE0u;
    SET_GPR_U32(ctx, 31, 0x7A9EE8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7A9EE0u, 0x7A9EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A9EE8u;
label_7a9ee8:
    // 0x7a9ee8: 0xc0b6db0  jal         func_2DB6C0
label_7a9eec:
    if (ctx->pc == 0x7A9EECu) {
        ctx->pc = 0x7A9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9EE8u;
        // 0x7a9eec: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9EF0u;
        goto label_7a9ef0;
    }
    ctx->pc = 0x7A9EE8u;
    SET_GPR_U32(ctx, 31, 0x7A9EF0u);
    ctx->pc = 0x7A9EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A9EE8u;
    // 0x7a9eec: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6C0u, 0x7A9EE8u, 0x7A9EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A9EF0u;
label_7a9ef0:
    // 0x7a9ef0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7a9ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7a9ef4:
    // 0x7a9ef4: 0x12000276  beqz        $s0, . + 4 + (0x276 << 2)
label_7a9ef8:
    if (ctx->pc == 0x7A9EF8u) {
        ctx->pc = 0x7A9EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9EF4u;
        // 0x7a9ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9EFCu;
        goto label_7a9efc;
    }
    ctx->pc = 0x7A9EF4u;
    {
        const bool branch_taken_0x7a9ef4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9EF4u;
        // 0x7a9ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9ef4) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7A9EFCu;
label_7a9efc:
    // 0x7a9efc: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x7a9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_7a9f00:
    // 0x7a9f00: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x7a9f00u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_7a9f04:
    // 0x7a9f04: 0x36737fff  ori         $s3, $s3, 0x7FFF
    ctx->pc = 0x7a9f04u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32767);
label_7a9f08:
    // 0x7a9f08: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x7a9f08u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_7a9f0c:
    // 0x7a9f0c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x7a9f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_7a9f10:
    // 0x7a9f10: 0x3652fffd  ori         $s2, $s2, 0xFFFD
    ctx->pc = 0x7a9f10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65533);
label_7a9f14:
    // 0x7a9f14: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x7a9f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_7a9f18:
    // 0x7a9f18: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x7a9f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_7a9f1c:
    // 0x7a9f1c: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x7a9f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_7a9f20:
    // 0x7a9f20: 0xc0403b6  jal         func_100ED8
label_7a9f24:
    if (ctx->pc == 0x7A9F24u) {
        ctx->pc = 0x7A9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9F20u;
        // 0x7a9f24: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9F28u;
        goto label_7a9f28;
    }
    ctx->pc = 0x7A9F20u;
    SET_GPR_U32(ctx, 31, 0x7A9F28u);
    ctx->pc = 0x7A9F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A9F20u;
    // 0x7a9f24: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100ED8u, 0x7A9F20u, 0x7A9F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A9F28u;
label_7a9f28:
    // 0x7a9f28: 0x8e0302f0  lw          $v1, 0x2F0($s0)
    ctx->pc = 0x7a9f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
label_7a9f2c:
    // 0x7a9f2c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x7a9f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_7a9f30:
    // 0x7a9f30: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x7a9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_7a9f34:
    // 0x7a9f34: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x7a9f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_7a9f38:
    // 0x7a9f38: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x7a9f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_7a9f3c:
    // 0x7a9f3c: 0xae0302f0  sw          $v1, 0x2F0($s0)
    ctx->pc = 0x7a9f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 3));
label_7a9f40:
    // 0x7a9f40: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x7a9f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_7a9f44:
    // 0x7a9f44: 0x8eb406a8  lw          $s4, 0x6A8($s5)
    ctx->pc = 0x7a9f44u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1704)));
label_7a9f48:
    // 0x7a9f48: 0x12800023  beqz        $s4, . + 4 + (0x23 << 2)
label_7a9f4c:
    if (ctx->pc == 0x7A9F4Cu) {
        ctx->pc = 0x7A9F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9F48u;
        // 0x7a9f4c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9F50u;
        goto label_7a9f50;
    }
    ctx->pc = 0x7A9F48u;
    {
        const bool branch_taken_0x7a9f48 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9F48u;
        // 0x7a9f4c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9f48) {
            ctx->pc = 0x7A9FD8u;
            goto label_7a9fd8;
        }
    }
    ctx->pc = 0x7A9F50u;
label_7a9f50:
    // 0x7a9f50: 0x8e820250  lw          $v0, 0x250($s4)
    ctx->pc = 0x7a9f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 592)));
label_7a9f54:
    // 0x7a9f54: 0x3c013d40  lui         $at, 0x3D40
    ctx->pc = 0x7a9f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15680 << 16));
label_7a9f58:
    // 0x7a9f58: 0x34218312  ori         $at, $at, 0x8312
    ctx->pc = 0x7a9f58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33554);
label_7a9f5c:
    // 0x7a9f5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7a9f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7a9f60:
    // 0x7a9f60: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x7a9f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_7a9f64:
    // 0x7a9f64: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x7a9f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_7a9f68:
    // 0x7a9f68: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x7a9f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_7a9f6c:
    // 0x7a9f6c: 0xae820250  sw          $v0, 0x250($s4)
    ctx->pc = 0x7a9f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 592), GPR_U32(ctx, 2));
label_7a9f70:
    // 0x7a9f70: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x7a9f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_7a9f74:
    // 0x7a9f74: 0xc07f02a  jal         func_1FC0A8
label_7a9f78:
    if (ctx->pc == 0x7A9F78u) {
        ctx->pc = 0x7A9F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9F74u;
        // 0x7a9f78: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9F7Cu;
        goto label_7a9f7c;
    }
    ctx->pc = 0x7A9F74u;
    SET_GPR_U32(ctx, 31, 0x7A9F7Cu);
    ctx->pc = 0x7A9F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A9F74u;
    // 0x7a9f78: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x7A9F74u, 0x7A9F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A9F7Cu;
label_7a9f7c:
    // 0x7a9f7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7a9f7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7a9f80:
    // 0x7a9f80: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x7a9f80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_7a9f84:
    // 0x7a9f84: 0x3c01be0f  lui         $at, 0xBE0F
    ctx->pc = 0x7a9f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48655 << 16));
label_7a9f88:
    // 0x7a9f88: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x7a9f88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_7a9f8c:
    // 0x7a9f8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7a9f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7a9f90:
    // 0x7a9f90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_7a9f94:
    if (ctx->pc == 0x7A9F94u) {
        ctx->pc = 0x7A9F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9F90u;
        // 0x7a9f94: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9F98u;
        goto label_7a9f98;
    }
    ctx->pc = 0x7A9F90u;
    {
        const bool branch_taken_0x7a9f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9F90u;
        // 0x7a9f94: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9f90) {
            ctx->pc = 0x7A9FACu;
            goto label_7a9fac;
        }
    }
    ctx->pc = 0x7A9F98u;
label_7a9f98:
    // 0x7a9f98: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_7a9f9c:
    if (ctx->pc == 0x7A9F9Cu) {
        ctx->pc = 0x7A9F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9F98u;
        // 0x7a9f9c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9FA0u;
        goto label_7a9fa0;
    }
    ctx->pc = 0x7A9F98u;
    {
        const bool branch_taken_0x7a9f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7a9f98) {
            ctx->pc = 0x7A9F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A9F98u;
            // 0x7a9f9c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A9FB4u;
            goto label_7a9fb4;
        }
    }
    ctx->pc = 0x7A9FA0u;
label_7a9fa0:
    // 0x7a9fa0: 0x3c01be1e  lui         $at, 0xBE1E
    ctx->pc = 0x7a9fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48670 << 16));
label_7a9fa4:
    // 0x7a9fa4: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x7a9fa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_7a9fa8:
    // 0x7a9fa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7a9fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7a9fac:
    // 0x7a9fac: 0x0  nop
    ctx->pc = 0x7a9facu;
    // NOP
label_7a9fb0:
    // 0x7a9fb0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x7a9fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_7a9fb4:
    // 0x7a9fb4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x7a9fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_7a9fb8:
    // 0x7a9fb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x7a9fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_7a9fbc:
    // 0x7a9fbc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x7a9fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_7a9fc0:
    // 0x7a9fc0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x7a9fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7a9fc4:
    // 0x7a9fc4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x7a9fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_7a9fc8:
    // 0x7a9fc8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x7a9fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7a9fcc:
    // 0x7a9fcc: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x7a9fccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_7a9fd0:
    // 0x7a9fd0: 0xc073c58  jal         func_1CF160
label_7a9fd4:
    if (ctx->pc == 0x7A9FD4u) {
        ctx->pc = 0x7A9FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9FD0u;
        // 0x7a9fd4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9FD8u;
        goto label_7a9fd8;
    }
    ctx->pc = 0x7A9FD0u;
    SET_GPR_U32(ctx, 31, 0x7A9FD8u);
    ctx->pc = 0x7A9FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A9FD0u;
    // 0x7a9fd4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF160u, 0x7A9FD0u, 0x7A9FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A9FD8u;
label_7a9fd8:
    // 0x7a9fd8: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x7a9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_7a9fdc:
    // 0x7a9fdc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7a9fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7a9fe0:
    // 0x7a9fe0: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x7a9fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_7a9fe4:
    // 0x7a9fe4: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x7a9fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
label_7a9fe8:
    // 0x7a9fe8: 0xae350028  sw          $s5, 0x28($s1)
    ctx->pc = 0x7a9fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 21));
label_7a9fec:
    // 0x7a9fec: 0x10800237  beqz        $a0, . + 4 + (0x237 << 2)
label_7a9ff0:
    if (ctx->pc == 0x7A9FF0u) {
        ctx->pc = 0x7A9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9FECu;
        // 0x7a9ff0: 0xae34003c  sw          $s4, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7A9FF4u;
        goto label_7a9ff4;
    }
    ctx->pc = 0x7A9FECu;
    {
        const bool branch_taken_0x7a9fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9FECu;
        // 0x7a9ff0: 0xae34003c  sw          $s4, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9fec) {
            ctx->pc = 0x7AA8CCu;
            goto label_7aa8cc;
        }
    }
    ctx->pc = 0x7A9FF4u;
label_7a9ff4:
    // 0x7a9ff4: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7a9ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
label_7a9ff8:
    // 0x7a9ff8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7a9ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a9ffc:
    // 0x7a9ffc: 0xc0528ce  jal         func_14A338
label_7aa000:
    if (ctx->pc == 0x7AA000u) {
        ctx->pc = 0x7AA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9FFCu;
        // 0x7aa000: 0x24a54d88  addiu       $a1, $a1, 0x4D88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA004u;
        goto label_7aa004;
    }
    ctx->pc = 0x7A9FFCu;
    SET_GPR_U32(ctx, 31, 0x7AA004u);
    ctx->pc = 0x7AA000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A9FFCu;
    // 0x7aa000: 0x24a54d88  addiu       $a1, $a1, 0x4D88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7A9FFCu, 0x7AA004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA004u;
label_7aa004:
    // 0x7aa004: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa008:
    // 0x7aa008: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7aa008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
label_7aa00c:
    // 0x7aa00c: 0x24a54d90  addiu       $a1, $a1, 0x4D90
    ctx->pc = 0x7aa00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19856));
label_7aa010:
    // 0x7aa010: 0x1000012e  b           . + 4 + (0x12E << 2)
label_7aa014:
    if (ctx->pc == 0x7AA014u) {
        ctx->pc = 0x7AA014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA010u;
        // 0x7aa014: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA018u;
        goto label_7aa018;
    }
    ctx->pc = 0x7AA010u;
    {
        const bool branch_taken_0x7aa010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA010u;
        // 0x7aa014: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa010) {
            ctx->pc = 0x7AA4CCu;
            goto label_7aa4cc;
        }
    }
    ctx->pc = 0x7AA018u;
label_7aa018:
    // 0x7aa018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7aa018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7aa01c:
    // 0x7aa01c: 0x10000102  b           . + 4 + (0x102 << 2)
label_7aa020:
    if (ctx->pc == 0x7AA020u) {
        ctx->pc = 0x7AA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA01Cu;
        // 0x7aa020: 0x24050600  addiu       $a1, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA024u;
        goto label_7aa024;
    }
    ctx->pc = 0x7AA01Cu;
    {
        const bool branch_taken_0x7aa01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA01Cu;
        // 0x7aa020: 0x24050600  addiu       $a1, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa01c) {
            ctx->pc = 0x7AA428u;
            goto label_7aa428;
        }
    }
    ctx->pc = 0x7AA024u;
label_7aa024:
    // 0x7aa024: 0x1080022a  beqz        $a0, . + 4 + (0x22A << 2)
label_7aa028:
    if (ctx->pc == 0x7AA028u) {
        ctx->pc = 0x7AA028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA024u;
        // 0x7aa028: 0x3c05007b  lui         $a1, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA02Cu;
        goto label_7aa02c;
    }
    ctx->pc = 0x7AA024u;
    {
        const bool branch_taken_0x7aa024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA024u;
        // 0x7aa028: 0x3c05007b  lui         $a1, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa024) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA02Cu;
label_7aa02c:
    // 0x7aa02c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7aa02cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7aa030:
    // 0x7aa030: 0xc0528ce  jal         func_14A338
label_7aa034:
    if (ctx->pc == 0x7AA034u) {
        ctx->pc = 0x7AA034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA030u;
        // 0x7aa034: 0x24a54d88  addiu       $a1, $a1, 0x4D88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA038u;
        goto label_7aa038;
    }
    ctx->pc = 0x7AA030u;
    SET_GPR_U32(ctx, 31, 0x7AA038u);
    ctx->pc = 0x7AA034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA030u;
    // 0x7aa034: 0x24a54d88  addiu       $a1, $a1, 0x4D88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA030u, 0x7AA038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA038u;
label_7aa038:
    // 0x7aa038: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa03c:
    // 0x7aa03c: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7aa03cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
label_7aa040:
    // 0x7aa040: 0x24a54d90  addiu       $a1, $a1, 0x4D90
    ctx->pc = 0x7aa040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19856));
label_7aa044:
    // 0x7aa044: 0xc0528ce  jal         func_14A338
label_7aa048:
    if (ctx->pc == 0x7AA048u) {
        ctx->pc = 0x7AA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA044u;
        // 0x7aa048: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA04Cu;
        goto label_7aa04c;
    }
    ctx->pc = 0x7AA044u;
    SET_GPR_U32(ctx, 31, 0x7AA04Cu);
    ctx->pc = 0x7AA048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA044u;
    // 0x7aa048: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA044u, 0x7AA04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA04Cu;
label_7aa04c:
    // 0x7aa04c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa050:
    // 0x7aa050: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7aa050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
label_7aa054:
    // 0x7aa054: 0x24a54d98  addiu       $a1, $a1, 0x4D98
    ctx->pc = 0x7aa054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19864));
label_7aa058:
    // 0x7aa058: 0xc0528ce  jal         func_14A338
label_7aa05c:
    if (ctx->pc == 0x7AA05Cu) {
        ctx->pc = 0x7AA05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA058u;
        // 0x7aa05c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA060u;
        goto label_7aa060;
    }
    ctx->pc = 0x7AA058u;
    SET_GPR_U32(ctx, 31, 0x7AA060u);
    ctx->pc = 0x7AA05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA058u;
    // 0x7aa05c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA058u, 0x7AA060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA060u;
label_7aa060:
    // 0x7aa060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7aa060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7aa064:
    // 0x7aa064: 0x10000143  b           . + 4 + (0x143 << 2)
label_7aa068:
    if (ctx->pc == 0x7AA068u) {
        ctx->pc = 0x7AA068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA064u;
        // 0x7aa068: 0x24050600  addiu       $a1, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA06Cu;
        goto label_7aa06c;
    }
    ctx->pc = 0x7AA064u;
    {
        const bool branch_taken_0x7aa064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA064u;
        // 0x7aa068: 0x24050600  addiu       $a1, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa064) {
            ctx->pc = 0x7AA574u;
            goto label_7aa574;
        }
    }
    ctx->pc = 0x7AA06Cu;
label_7aa06c:
    // 0x7aa06c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x7aa06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_7aa070:
    // 0x7aa070: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x7aa070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
label_7aa074:
    // 0x7aa074: 0xc07f02a  jal         func_1FC0A8
label_7aa078:
    if (ctx->pc == 0x7AA078u) {
        ctx->pc = 0x7AA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA074u;
        // 0x7aa078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA07Cu;
        goto label_7aa07c;
    }
    ctx->pc = 0x7AA074u;
    SET_GPR_U32(ctx, 31, 0x7AA07Cu);
    ctx->pc = 0x7AA078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA074u;
    // 0x7aa078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x7AA074u, 0x7AA07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA07Cu;
label_7aa07c:
    // 0x7aa07c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x7aa07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7aa080:
    // 0x7aa080: 0x10430213  beq         $v0, $v1, . + 4 + (0x213 << 2)
label_7aa084:
    if (ctx->pc == 0x7AA084u) {
        ctx->pc = 0x7AA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA080u;
        // 0x7aa084: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA088u;
        goto label_7aa088;
    }
    ctx->pc = 0x7AA080u;
    {
        const bool branch_taken_0x7aa080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x7AA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA080u;
        // 0x7aa084: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa080) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA088u;
label_7aa088:
    // 0x7aa088: 0xc07f02a  jal         func_1FC0A8
label_7aa08c:
    if (ctx->pc == 0x7AA08Cu) {
        ctx->pc = 0x7AA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA088u;
        // 0x7aa08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA090u;
        goto label_7aa090;
    }
    ctx->pc = 0x7AA088u;
    SET_GPR_U32(ctx, 31, 0x7AA090u);
    ctx->pc = 0x7AA08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA088u;
    // 0x7aa08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x7AA088u, 0x7AA090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA090u;
label_7aa090:
    // 0x7aa090: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x7aa090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_7aa094:
    // 0x7aa094: 0x1043020e  beq         $v0, $v1, . + 4 + (0x20E << 2)
label_7aa098:
    if (ctx->pc == 0x7AA098u) {
        ctx->pc = 0x7AA098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA094u;
        // 0x7aa098: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA09Cu;
        goto label_7aa09c;
    }
    ctx->pc = 0x7AA094u;
    {
        const bool branch_taken_0x7aa094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x7AA098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA094u;
        // 0x7aa098: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa094) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA09Cu;
label_7aa09c:
    // 0x7aa09c: 0xc0b6db0  jal         func_2DB6C0
label_7aa0a0:
    if (ctx->pc == 0x7AA0A0u) {
        ctx->pc = 0x7AA0A4u;
        goto label_7aa0a4;
    }
    ctx->pc = 0x7AA09Cu;
    SET_GPR_U32(ctx, 31, 0x7AA0A4u);
    ctx->pc = 0x2DB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6C0u, 0x7AA09Cu, 0x7AA0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA0A4u;
label_7aa0a4:
    // 0x7aa0a4: 0x1000020a  b           . + 4 + (0x20A << 2)
label_7aa0a8:
    if (ctx->pc == 0x7AA0A8u) {
        ctx->pc = 0x7AA0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA0A4u;
        // 0x7aa0a8: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA0ACu;
        goto label_7aa0ac;
    }
    ctx->pc = 0x7AA0A4u;
    {
        const bool branch_taken_0x7aa0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA0A4u;
        // 0x7aa0a8: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa0a4) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA0ACu;
label_7aa0ac:
    // 0x7aa0ac: 0xc0b6dac  jal         func_2DB6B0
label_7aa0b0:
    if (ctx->pc == 0x7AA0B0u) {
        ctx->pc = 0x7AA0B4u;
        goto label_7aa0b4;
    }
    ctx->pc = 0x7AA0ACu;
    SET_GPR_U32(ctx, 31, 0x7AA0B4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7AA0ACu, 0x7AA0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA0B4u;
label_7aa0b4:
    // 0x7aa0b4: 0xc0b6db0  jal         func_2DB6C0
label_7aa0b8:
    if (ctx->pc == 0x7AA0B8u) {
        ctx->pc = 0x7AA0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA0B4u;
        // 0x7aa0b8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA0BCu;
        goto label_7aa0bc;
    }
    ctx->pc = 0x7AA0B4u;
    SET_GPR_U32(ctx, 31, 0x7AA0BCu);
    ctx->pc = 0x7AA0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA0B4u;
    // 0x7aa0b8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6C0u, 0x7AA0B4u, 0x7AA0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA0BCu;
label_7aa0bc:
    // 0x7aa0bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7aa0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7aa0c0:
    // 0x7aa0c0: 0x12000203  beqz        $s0, . + 4 + (0x203 << 2)
label_7aa0c4:
    if (ctx->pc == 0x7AA0C4u) {
        ctx->pc = 0x7AA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA0C0u;
        // 0x7aa0c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA0C8u;
        goto label_7aa0c8;
    }
    ctx->pc = 0x7AA0C0u;
    {
        const bool branch_taken_0x7aa0c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA0C0u;
        // 0x7aa0c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa0c0) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA0C8u;
label_7aa0c8:
    // 0x7aa0c8: 0x8e050250  lw          $a1, 0x250($s0)
    ctx->pc = 0x7aa0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_7aa0cc:
    // 0x7aa0cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x7aa0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_7aa0d0:
    // 0x7aa0d0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x7aa0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_7aa0d4:
    // 0x7aa0d4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7aa0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_7aa0d8:
    // 0x7aa0d8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x7aa0d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_7aa0dc:
    // 0x7aa0dc: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x7aa0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
label_7aa0e0:
    // 0x7aa0e0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x7aa0e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_7aa0e4:
    // 0x7aa0e4: 0xae050250  sw          $a1, 0x250($s0)
    ctx->pc = 0x7aa0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 5));
label_7aa0e8:
    // 0x7aa0e8: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x7aa0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_7aa0ec:
    // 0x7aa0ec: 0xc0403b6  jal         func_100ED8
label_7aa0f0:
    if (ctx->pc == 0x7AA0F0u) {
        ctx->pc = 0x7AA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA0ECu;
        // 0x7aa0f0: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA0F4u;
        goto label_7aa0f4;
    }
    ctx->pc = 0x7AA0ECu;
    SET_GPR_U32(ctx, 31, 0x7AA0F4u);
    ctx->pc = 0x7AA0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA0ECu;
    // 0x7aa0f0: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100ED8u, 0x7AA0ECu, 0x7AA0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA0F4u;
label_7aa0f4:
    // 0x7aa0f4: 0x8e0302f0  lw          $v1, 0x2F0($s0)
    ctx->pc = 0x7aa0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
label_7aa0f8:
    // 0x7aa0f8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x7aa0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_7aa0fc:
    // 0x7aa0fc: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x7aa0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_7aa100:
    // 0x7aa100: 0x24050102  addiu       $a1, $zero, 0x102
    ctx->pc = 0x7aa100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_7aa104:
    // 0x7aa104: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x7aa104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_7aa108:
    // 0x7aa108: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x7aa108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_7aa10c:
    // 0x7aa10c: 0xae0302f0  sw          $v1, 0x2F0($s0)
    ctx->pc = 0x7aa10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 3));
label_7aa110:
    // 0x7aa110: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x7aa110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_7aa114:
    // 0x7aa114: 0xae250030  sw          $a1, 0x30($s1)
    ctx->pc = 0x7aa114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 5));
label_7aa118:
    // 0x7aa118: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa11c:
    // 0x7aa11c: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x7aa11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
label_7aa120:
    // 0x7aa120: 0x108001ea  beqz        $a0, . + 4 + (0x1EA << 2)
label_7aa124:
    if (ctx->pc == 0x7AA124u) {
        ctx->pc = 0x7AA124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA120u;
        // 0x7aa124: 0xae350028  sw          $s5, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA128u;
        goto label_7aa128;
    }
    ctx->pc = 0x7AA120u;
    {
        const bool branch_taken_0x7aa120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA120u;
        // 0x7aa124: 0xae350028  sw          $s5, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa120) {
            ctx->pc = 0x7AA8CCu;
            goto label_7aa8cc;
        }
    }
    ctx->pc = 0x7AA128u;
label_7aa128:
    // 0x7aa128: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7aa128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
label_7aa12c:
    // 0x7aa12c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7aa12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7aa130:
    // 0x7aa130: 0xc0528ce  jal         func_14A338
label_7aa134:
    if (ctx->pc == 0x7AA134u) {
        ctx->pc = 0x7AA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA130u;
        // 0x7aa134: 0x24a54d88  addiu       $a1, $a1, 0x4D88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA138u;
        goto label_7aa138;
    }
    ctx->pc = 0x7AA130u;
    SET_GPR_U32(ctx, 31, 0x7AA138u);
    ctx->pc = 0x7AA134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA130u;
    // 0x7aa134: 0x24a54d88  addiu       $a1, $a1, 0x4D88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA130u, 0x7AA138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA138u;
label_7aa138:
    // 0x7aa138: 0x100001e5  b           . + 4 + (0x1E5 << 2)
label_7aa13c:
    if (ctx->pc == 0x7AA13Cu) {
        ctx->pc = 0x7AA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA138u;
        // 0x7aa13c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA140u;
        goto label_7aa140;
    }
    ctx->pc = 0x7AA138u;
    {
        const bool branch_taken_0x7aa138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA138u;
        // 0x7aa13c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa138) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA140u;
label_7aa140:
    // 0x7aa140: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7aa140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7aa144:
    // 0x7aa144: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_7aa148:
    if (ctx->pc == 0x7AA148u) {
        ctx->pc = 0x7AA148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA144u;
        // 0x7aa148: 0x24050605  addiu       $a1, $zero, 0x605 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1541));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA14Cu;
        goto label_7aa14c;
    }
    ctx->pc = 0x7AA144u;
    {
        const bool branch_taken_0x7aa144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA144u;
        // 0x7aa148: 0x24050605  addiu       $a1, $zero, 0x605 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1541));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa144) {
            ctx->pc = 0x7AA428u;
            goto label_7aa428;
        }
    }
    ctx->pc = 0x7AA14Cu;
label_7aa14c:
    // 0x7aa14c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7aa14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7aa150:
    // 0x7aa150: 0x10000108  b           . + 4 + (0x108 << 2)
label_7aa154:
    if (ctx->pc == 0x7AA154u) {
        ctx->pc = 0x7AA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA150u;
        // 0x7aa154: 0x24050605  addiu       $a1, $zero, 0x605 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1541));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA158u;
        goto label_7aa158;
    }
    ctx->pc = 0x7AA150u;
    {
        const bool branch_taken_0x7aa150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA150u;
        // 0x7aa154: 0x24050605  addiu       $a1, $zero, 0x605 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1541));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa150) {
            ctx->pc = 0x7AA574u;
            goto label_7aa574;
        }
    }
    ctx->pc = 0x7AA158u;
label_7aa158:
    // 0x7aa158: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x7aa158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_7aa15c:
    // 0x7aa15c: 0x1450004b  bne         $v0, $s0, . + 4 + (0x4B << 2)
label_7aa160:
    if (ctx->pc == 0x7AA160u) {
        ctx->pc = 0x7AA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA15Cu;
        // 0x7aa160: 0x3a820024  xori        $v0, $s4, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)36);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA164u;
        goto label_7aa164;
    }
    ctx->pc = 0x7AA15Cu;
    {
        const bool branch_taken_0x7aa15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x7AA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA15Cu;
        // 0x7aa160: 0x3a820024  xori        $v0, $s4, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)36);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa15c) {
            ctx->pc = 0x7AA28Cu;
            goto label_7aa28c;
        }
    }
    ctx->pc = 0x7AA164u;
label_7aa164:
    // 0x7aa164: 0x2404060d  addiu       $a0, $zero, 0x60D
    ctx->pc = 0x7aa164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1549));
label_7aa168:
    // 0x7aa168: 0xc0c4aa0  jal         func_312A80
label_7aa16c:
    if (ctx->pc == 0x7AA16Cu) {
        ctx->pc = 0x7AA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA168u;
        // 0x7aa16c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA170u;
        goto label_7aa170;
    }
    ctx->pc = 0x7AA168u;
    SET_GPR_U32(ctx, 31, 0x7AA170u);
    ctx->pc = 0x7AA16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA168u;
    // 0x7aa16c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x312A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312A80u, 0x7AA168u, 0x7AA170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA170u;
label_7aa170:
    // 0x7aa170: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7aa170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7aa174:
    // 0x7aa174: 0x12000045  beqz        $s0, . + 4 + (0x45 << 2)
label_7aa178:
    if (ctx->pc == 0x7AA178u) {
        ctx->pc = 0x7AA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA174u;
        // 0x7aa178: 0x3a820024  xori        $v0, $s4, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)36);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA17Cu;
        goto label_7aa17c;
    }
    ctx->pc = 0x7AA174u;
    {
        const bool branch_taken_0x7aa174 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA174u;
        // 0x7aa178: 0x3a820024  xori        $v0, $s4, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)36);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa174) {
            ctx->pc = 0x7AA28Cu;
            goto label_7aa28c;
        }
    }
    ctx->pc = 0x7AA17Cu;
label_7aa17c:
    // 0x7aa17c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x7aa17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_7aa180:
    // 0x7aa180: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x7aa180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_7aa184:
    // 0x7aa184: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x7aa184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_7aa188:
    // 0x7aa188: 0x40f809  jalr        $v0
label_7aa18c:
    if (ctx->pc == 0x7AA18Cu) {
        ctx->pc = 0x7AA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA188u;
        // 0x7aa18c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA190u;
        goto label_7aa190;
    }
    ctx->pc = 0x7AA188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7AA190u);
        ctx->pc = 0x7AA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA188u;
        // 0x7aa18c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AA188u, 0x7AA190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7AA190u;
label_7aa190:
    // 0x7aa190: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_7aa194:
    if (ctx->pc == 0x7AA194u) {
        ctx->pc = 0x7AA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA190u;
        // 0x7aa194: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA198u;
        goto label_7aa198;
    }
    ctx->pc = 0x7AA190u;
    {
        const bool branch_taken_0x7aa190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA190u;
        // 0x7aa194: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa190) {
            ctx->pc = 0x7AA288u;
            goto label_7aa288;
        }
    }
    ctx->pc = 0x7AA198u;
label_7aa198:
    // 0x7aa198: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa19c:
    // 0x7aa19c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x7aa19cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7aa1a0:
    // 0x7aa1a0: 0xc1ea060  jal         func_7A8180
label_7aa1a4:
    if (ctx->pc == 0x7AA1A4u) {
        ctx->pc = 0x7AA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA1A0u;
        // 0x7aa1a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA1A8u;
        goto label_7aa1a8;
    }
    ctx->pc = 0x7AA1A0u;
    SET_GPR_U32(ctx, 31, 0x7AA1A8u);
    ctx->pc = 0x7AA1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA1A0u;
    // 0x7aa1a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8180u, 0x7AA1A0u, 0x7AA1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA1A8u;
label_7aa1a8:
    // 0x7aa1a8: 0x104001c9  beqz        $v0, . + 4 + (0x1C9 << 2)
label_7aa1ac:
    if (ctx->pc == 0x7AA1ACu) {
        ctx->pc = 0x7AA1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA1A8u;
        // 0x7aa1ac: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA1B0u;
        goto label_7aa1b0;
    }
    ctx->pc = 0x7AA1A8u;
    {
        const bool branch_taken_0x7aa1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA1A8u;
        // 0x7aa1ac: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa1a8) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA1B0u;
label_7aa1b0:
    // 0x7aa1b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa1b4:
    // 0x7aa1b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x7aa1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7aa1b8:
    // 0x7aa1b8: 0xc1ea060  jal         func_7A8180
label_7aa1bc:
    if (ctx->pc == 0x7AA1BCu) {
        ctx->pc = 0x7AA1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA1B8u;
        // 0x7aa1bc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA1C0u;
        goto label_7aa1c0;
    }
    ctx->pc = 0x7AA1B8u;
    SET_GPR_U32(ctx, 31, 0x7AA1C0u);
    ctx->pc = 0x7AA1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA1B8u;
    // 0x7aa1bc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8180u, 0x7AA1B8u, 0x7AA1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA1C0u;
label_7aa1c0:
    // 0x7aa1c0: 0x104001c3  beqz        $v0, . + 4 + (0x1C3 << 2)
label_7aa1c4:
    if (ctx->pc == 0x7AA1C4u) {
        ctx->pc = 0x7AA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA1C0u;
        // 0x7aa1c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA1C8u;
        goto label_7aa1c8;
    }
    ctx->pc = 0x7AA1C0u;
    {
        const bool branch_taken_0x7aa1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA1C0u;
        // 0x7aa1c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa1c0) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA1C8u;
label_7aa1c8:
    // 0x7aa1c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa1cc:
    // 0x7aa1cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x7aa1ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7aa1d0:
    // 0x7aa1d0: 0xc1ea060  jal         func_7A8180
label_7aa1d4:
    if (ctx->pc == 0x7AA1D4u) {
        ctx->pc = 0x7AA1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA1D0u;
        // 0x7aa1d4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA1D8u;
        goto label_7aa1d8;
    }
    ctx->pc = 0x7AA1D0u;
    SET_GPR_U32(ctx, 31, 0x7AA1D8u);
    ctx->pc = 0x7AA1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA1D0u;
    // 0x7aa1d4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8180u, 0x7AA1D0u, 0x7AA1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA1D8u;
label_7aa1d8:
    // 0x7aa1d8: 0x104001bd  beqz        $v0, . + 4 + (0x1BD << 2)
label_7aa1dc:
    if (ctx->pc == 0x7AA1DCu) {
        ctx->pc = 0x7AA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA1D8u;
        // 0x7aa1dc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA1E0u;
        goto label_7aa1e0;
    }
    ctx->pc = 0x7AA1D8u;
    {
        const bool branch_taken_0x7aa1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA1D8u;
        // 0x7aa1dc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa1d8) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA1E0u;
label_7aa1e0:
    // 0x7aa1e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa1e4:
    // 0x7aa1e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x7aa1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7aa1e8:
    // 0x7aa1e8: 0xc1ea060  jal         func_7A8180
label_7aa1ec:
    if (ctx->pc == 0x7AA1ECu) {
        ctx->pc = 0x7AA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA1E8u;
        // 0x7aa1ec: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA1F0u;
        goto label_7aa1f0;
    }
    ctx->pc = 0x7AA1E8u;
    SET_GPR_U32(ctx, 31, 0x7AA1F0u);
    ctx->pc = 0x7AA1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA1E8u;
    // 0x7aa1ec: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8180u, 0x7AA1E8u, 0x7AA1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA1F0u;
label_7aa1f0:
    // 0x7aa1f0: 0x104001b7  beqz        $v0, . + 4 + (0x1B7 << 2)
label_7aa1f4:
    if (ctx->pc == 0x7AA1F4u) {
        ctx->pc = 0x7AA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA1F0u;
        // 0x7aa1f4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA1F8u;
        goto label_7aa1f8;
    }
    ctx->pc = 0x7AA1F0u;
    {
        const bool branch_taken_0x7aa1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA1F0u;
        // 0x7aa1f4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa1f0) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA1F8u;
label_7aa1f8:
    // 0x7aa1f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa1fc:
    // 0x7aa1fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x7aa1fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7aa200:
    // 0x7aa200: 0xc1ea060  jal         func_7A8180
label_7aa204:
    if (ctx->pc == 0x7AA204u) {
        ctx->pc = 0x7AA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA200u;
        // 0x7aa204: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA208u;
        goto label_7aa208;
    }
    ctx->pc = 0x7AA200u;
    SET_GPR_U32(ctx, 31, 0x7AA208u);
    ctx->pc = 0x7AA204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA200u;
    // 0x7aa204: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8180u, 0x7AA200u, 0x7AA208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA208u;
label_7aa208:
    // 0x7aa208: 0x104001b1  beqz        $v0, . + 4 + (0x1B1 << 2)
label_7aa20c:
    if (ctx->pc == 0x7AA20Cu) {
        ctx->pc = 0x7AA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA208u;
        // 0x7aa20c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA210u;
        goto label_7aa210;
    }
    ctx->pc = 0x7AA208u;
    {
        const bool branch_taken_0x7aa208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA208u;
        // 0x7aa20c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa208) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA210u;
label_7aa210:
    // 0x7aa210: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa214:
    // 0x7aa214: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x7aa214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7aa218:
    // 0x7aa218: 0xc1ea060  jal         func_7A8180
label_7aa21c:
    if (ctx->pc == 0x7AA21Cu) {
        ctx->pc = 0x7AA21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA218u;
        // 0x7aa21c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA220u;
        goto label_7aa220;
    }
    ctx->pc = 0x7AA218u;
    SET_GPR_U32(ctx, 31, 0x7AA220u);
    ctx->pc = 0x7AA21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA218u;
    // 0x7aa21c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8180u, 0x7AA218u, 0x7AA220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA220u;
label_7aa220:
    // 0x7aa220: 0x104001ab  beqz        $v0, . + 4 + (0x1AB << 2)
label_7aa224:
    if (ctx->pc == 0x7AA224u) {
        ctx->pc = 0x7AA224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA220u;
        // 0x7aa224: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA228u;
        goto label_7aa228;
    }
    ctx->pc = 0x7AA220u;
    {
        const bool branch_taken_0x7aa220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA220u;
        // 0x7aa224: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa220) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA228u;
label_7aa228:
    // 0x7aa228: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa22c:
    // 0x7aa22c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x7aa22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7aa230:
    // 0x7aa230: 0xc1ea060  jal         func_7A8180
label_7aa234:
    if (ctx->pc == 0x7AA234u) {
        ctx->pc = 0x7AA234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA230u;
        // 0x7aa234: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA238u;
        goto label_7aa238;
    }
    ctx->pc = 0x7AA230u;
    SET_GPR_U32(ctx, 31, 0x7AA238u);
    ctx->pc = 0x7AA234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA230u;
    // 0x7aa234: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8180u, 0x7AA230u, 0x7AA238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA238u;
label_7aa238:
    // 0x7aa238: 0x104001a5  beqz        $v0, . + 4 + (0x1A5 << 2)
label_7aa23c:
    if (ctx->pc == 0x7AA23Cu) {
        ctx->pc = 0x7AA23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA238u;
        // 0x7aa23c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA240u;
        goto label_7aa240;
    }
    ctx->pc = 0x7AA238u;
    {
        const bool branch_taken_0x7aa238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA238u;
        // 0x7aa23c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa238) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA240u;
label_7aa240:
    // 0x7aa240: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x7aa240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_7aa244:
    // 0x7aa244: 0x24427b00  addiu       $v0, $v0, 0x7B00
    ctx->pc = 0x7aa244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
label_7aa248:
    // 0x7aa248: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7aa248u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_7aa24c:
    // 0x7aa24c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x7aa24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_7aa250:
    // 0x7aa250: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x7aa250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_7aa254:
    // 0x7aa254: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7aa254u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_7aa258:
    // 0x7aa258: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x7aa258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_7aa25c:
    // 0x7aa25c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x7aa25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa260:
    // 0x7aa260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7aa260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7aa264:
    // 0x7aa264: 0xc0ae162  jal         func_2B8588
label_7aa268:
    if (ctx->pc == 0x7AA268u) {
        ctx->pc = 0x7AA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA264u;
        // 0x7aa268: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA26Cu;
        goto label_7aa26c;
    }
    ctx->pc = 0x7AA264u;
    SET_GPR_U32(ctx, 31, 0x7AA26Cu);
    ctx->pc = 0x7AA268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA264u;
    // 0x7aa268: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8588u, 0x7AA264u, 0x7AA26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA26Cu;
label_7aa26c:
    // 0x7aa26c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x7aa26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7aa270:
    // 0x7aa270: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x7aa270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_7aa274:
    // 0x7aa274: 0xae0230a4  sw          $v0, 0x30A4($s0)
    ctx->pc = 0x7aa274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12452), GPR_U32(ctx, 2));
label_7aa278:
    // 0x7aa278: 0x2403060d  addiu       $v1, $zero, 0x60D
    ctx->pc = 0x7aa278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1549));
label_7aa27c:
    // 0x7aa27c: 0xa20402b5  sb          $a0, 0x2B5($s0)
    ctx->pc = 0x7aa27cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 693), (uint8_t)GPR_U32(ctx, 4));
label_7aa280:
    // 0x7aa280: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x7aa280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_7aa284:
    // 0x7aa284: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x7aa284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
label_7aa288:
    // 0x7aa288: 0x3a820024  xori        $v0, $s4, 0x24
    ctx->pc = 0x7aa288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)36);
label_7aa28c:
    // 0x7aa28c: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x7aa28cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7aa290:
    // 0x7aa290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7aa290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7aa294:
    // 0x7aa294: 0x2b80b  movn        $s7, $zero, $v0
    ctx->pc = 0x7aa294u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_7aa298:
    // 0x7aa298: 0x1000018c  b           . + 4 + (0x18C << 2)
label_7aa29c:
    if (ctx->pc == 0x7AA29Cu) {
        ctx->pc = 0x7AA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA298u;
        // 0x7aa29c: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA2A0u;
        goto label_7aa2a0;
    }
    ctx->pc = 0x7AA298u;
    {
        const bool branch_taken_0x7aa298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA298u;
        // 0x7aa29c: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa298) {
            ctx->pc = 0x7AA8CCu;
            goto label_7aa8cc;
        }
    }
    ctx->pc = 0x7AA2A0u;
label_7aa2a0:
    // 0x7aa2a0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x7aa2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_7aa2a4:
    // 0x7aa2a4: 0x3a820024  xori        $v0, $s4, 0x24
    ctx->pc = 0x7aa2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)36);
label_7aa2a8:
    // 0x7aa2a8: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x7aa2a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7aa2ac:
    // 0x7aa2ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7aa2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7aa2b0:
    // 0x7aa2b0: 0x62b80b  movn        $s7, $v1, $v0
    ctx->pc = 0x7aa2b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
label_7aa2b4:
    // 0x7aa2b4: 0x2405060a  addiu       $a1, $zero, 0x60A
    ctx->pc = 0x7aa2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1546));
label_7aa2b8:
    // 0x7aa2b8: 0xc1ea5b0  jal         func_7A96C0
label_7aa2bc:
    if (ctx->pc == 0x7AA2BCu) {
        ctx->pc = 0x7AA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA2B8u;
        // 0x7aa2bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA2C0u;
        goto label_7aa2c0;
    }
    ctx->pc = 0x7AA2B8u;
    SET_GPR_U32(ctx, 31, 0x7AA2C0u);
    ctx->pc = 0x7AA2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA2B8u;
    // 0x7aa2bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A96C0u, 0x7AA2B8u, 0x7AA2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA2C0u;
label_7aa2c0:
    // 0x7aa2c0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x7aa2c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7aa2c4:
    // 0x7aa2c4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x7aa2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa2c8:
    // 0x7aa2c8: 0xc1ea090  jal         func_7A8240
label_7aa2cc:
    if (ctx->pc == 0x7AA2CCu) {
        ctx->pc = 0x7AA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA2C8u;
        // 0x7aa2cc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA2D0u;
        goto label_7aa2d0;
    }
    ctx->pc = 0x7AA2C8u;
    SET_GPR_U32(ctx, 31, 0x7AA2D0u);
    ctx->pc = 0x7AA2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA2C8u;
    // 0x7aa2cc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8240u, 0x7AA2C8u, 0x7AA2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA2D0u;
label_7aa2d0:
    // 0x7aa2d0: 0x240302a0  addiu       $v1, $zero, 0x2A0
    ctx->pc = 0x7aa2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
label_7aa2d4:
    // 0x7aa2d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x7aa2d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7aa2d8:
    // 0x7aa2d8: 0x1000017d  b           . + 4 + (0x17D << 2)
label_7aa2dc:
    if (ctx->pc == 0x7AA2DCu) {
        ctx->pc = 0x7AA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA2D8u;
        // 0x7aa2dc: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA2E0u;
        goto label_7aa2e0;
    }
    ctx->pc = 0x7AA2D8u;
    {
        const bool branch_taken_0x7aa2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA2D8u;
        // 0x7aa2dc: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa2d8) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA2E0u;
label_7aa2e0:
    // 0x7aa2e0: 0x3a820024  xori        $v0, $s4, 0x24
    ctx->pc = 0x7aa2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)36);
label_7aa2e4:
    // 0x7aa2e4: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x7aa2e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7aa2e8:
    // 0x7aa2e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7aa2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7aa2ec:
    // 0x7aa2ec: 0x2405060a  addiu       $a1, $zero, 0x60A
    ctx->pc = 0x7aa2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1546));
label_7aa2f0:
    // 0x7aa2f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7aa2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7aa2f4:
    // 0x7aa2f4: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_7aa2f8:
    if (ctx->pc == 0x7AA2F8u) {
        ctx->pc = 0x7AA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA2F4u;
        // 0x7aa2f8: 0x2b80b  movn        $s7, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA2FCu;
        goto label_7aa2fc;
    }
    ctx->pc = 0x7AA2F4u;
    {
        const bool branch_taken_0x7aa2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA2F4u;
        // 0x7aa2f8: 0x2b80b  movn        $s7, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa2f4) {
            ctx->pc = 0x7AA578u;
            goto label_7aa578;
        }
    }
    ctx->pc = 0x7AA2FCu;
label_7aa2fc:
    // 0x7aa2fc: 0x24020250  addiu       $v0, $zero, 0x250
    ctx->pc = 0x7aa2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
label_7aa300:
    // 0x7aa300: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x7aa300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_7aa304:
    // 0x7aa304: 0x12830171  beq         $s4, $v1, . + 4 + (0x171 << 2)
label_7aa308:
    if (ctx->pc == 0x7AA308u) {
        ctx->pc = 0x7AA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA304u;
        // 0x7aa308: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA30Cu;
        goto label_7aa30c;
    }
    ctx->pc = 0x7AA304u;
    {
        const bool branch_taken_0x7aa304 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x7AA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA304u;
        // 0x7aa308: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa304) {
            ctx->pc = 0x7AA8CCu;
            goto label_7aa8cc;
        }
    }
    ctx->pc = 0x7AA30Cu;
label_7aa30c:
    // 0x7aa30c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa310:
    // 0x7aa310: 0xc0ae13e  jal         func_2B84F8
label_7aa314:
    if (ctx->pc == 0x7AA314u) {
        ctx->pc = 0x7AA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA310u;
        // 0x7aa314: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA318u;
        goto label_7aa318;
    }
    ctx->pc = 0x7AA310u;
    SET_GPR_U32(ctx, 31, 0x7AA318u);
    ctx->pc = 0x7AA314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA310u;
    // 0x7aa314: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B84F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B84F8u, 0x7AA310u, 0x7AA318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA318u;
label_7aa318:
    // 0x7aa318: 0x1000016d  b           . + 4 + (0x16D << 2)
label_7aa31c:
    if (ctx->pc == 0x7AA31Cu) {
        ctx->pc = 0x7AA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA318u;
        // 0x7aa31c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA320u;
        goto label_7aa320;
    }
    ctx->pc = 0x7AA318u;
    {
        const bool branch_taken_0x7aa318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA318u;
        // 0x7aa31c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa318) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA320u;
label_7aa320:
    // 0x7aa320: 0x10000041  b           . + 4 + (0x41 << 2)
label_7aa324:
    if (ctx->pc == 0x7AA324u) {
        ctx->pc = 0x7AA324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA320u;
        // 0x7aa324: 0x24050610  addiu       $a1, $zero, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA328u;
        goto label_7aa328;
    }
    ctx->pc = 0x7AA320u;
    {
        const bool branch_taken_0x7aa320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA320u;
        // 0x7aa324: 0x24050610  addiu       $a1, $zero, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa320) {
            ctx->pc = 0x7AA428u;
            goto label_7aa428;
        }
    }
    ctx->pc = 0x7AA328u;
label_7aa328:
    // 0x7aa328: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7aa328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7aa32c:
    // 0x7aa32c: 0x10000091  b           . + 4 + (0x91 << 2)
label_7aa330:
    if (ctx->pc == 0x7AA330u) {
        ctx->pc = 0x7AA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA32Cu;
        // 0x7aa330: 0x24050610  addiu       $a1, $zero, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA334u;
        goto label_7aa334;
    }
    ctx->pc = 0x7AA32Cu;
    {
        const bool branch_taken_0x7aa32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA32Cu;
        // 0x7aa330: 0x24050610  addiu       $a1, $zero, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa32c) {
            ctx->pc = 0x7AA574u;
            goto label_7aa574;
        }
    }
    ctx->pc = 0x7AA334u;
label_7aa334:
    // 0x7aa334: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x7aa334u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7aa338:
    // 0x7aa338: 0x24040253  addiu       $a0, $zero, 0x253
    ctx->pc = 0x7aa338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
label_7aa33c:
    // 0x7aa33c: 0xc0c4aa0  jal         func_312A80
label_7aa340:
    if (ctx->pc == 0x7AA340u) {
        ctx->pc = 0x7AA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA33Cu;
        // 0x7aa340: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA344u;
        goto label_7aa344;
    }
    ctx->pc = 0x7AA33Cu;
    SET_GPR_U32(ctx, 31, 0x7AA344u);
    ctx->pc = 0x7AA340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA33Cu;
    // 0x7aa340: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x312A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312A80u, 0x7AA33Cu, 0x7AA344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA344u;
label_7aa344:
    // 0x7aa344: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7aa344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7aa348:
    // 0x7aa348: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_7aa34c:
    if (ctx->pc == 0x7AA34Cu) {
        ctx->pc = 0x7AA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA348u;
        // 0x7aa34c: 0x24020253  addiu       $v0, $zero, 0x253 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA350u;
        goto label_7aa350;
    }
    ctx->pc = 0x7AA348u;
    {
        const bool branch_taken_0x7aa348 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA348u;
        // 0x7aa34c: 0x24020253  addiu       $v0, $zero, 0x253 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa348) {
            ctx->pc = 0x7AA398u;
            goto label_7aa398;
        }
    }
    ctx->pc = 0x7AA350u;
label_7aa350:
    // 0x7aa350: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x7aa350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_7aa354:
    // 0x7aa354: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x7aa354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_7aa358:
    // 0x7aa358: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x7aa358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_7aa35c:
    // 0x7aa35c: 0x40f809  jalr        $v0
label_7aa360:
    if (ctx->pc == 0x7AA360u) {
        ctx->pc = 0x7AA360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA35Cu;
        // 0x7aa360: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA364u;
        goto label_7aa364;
    }
    ctx->pc = 0x7AA35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7AA364u);
        ctx->pc = 0x7AA360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA35Cu;
        // 0x7aa360: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AA35Cu, 0x7AA364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7AA364u;
label_7aa364:
    // 0x7aa364: 0x1040015a  beqz        $v0, . + 4 + (0x15A << 2)
label_7aa368:
    if (ctx->pc == 0x7AA368u) {
        ctx->pc = 0x7AA368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA364u;
        // 0x7aa368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA36Cu;
        goto label_7aa36c;
    }
    ctx->pc = 0x7AA364u;
    {
        const bool branch_taken_0x7aa364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA364u;
        // 0x7aa368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa364) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA36Cu;
label_7aa36c:
    // 0x7aa36c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x7aa36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa370:
    // 0x7aa370: 0xc09e9da  jal         func_27A768
label_7aa374:
    if (ctx->pc == 0x7AA374u) {
        ctx->pc = 0x7AA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA370u;
        // 0x7aa374: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA378u;
        goto label_7aa378;
    }
    ctx->pc = 0x7AA370u;
    SET_GPR_U32(ctx, 31, 0x7AA378u);
    ctx->pc = 0x7AA374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA370u;
    // 0x7aa374: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A768u, 0x7AA370u, 0x7AA378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA378u;
label_7aa378:
    // 0x7aa378: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x7aa378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
label_7aa37c:
    // 0x7aa37c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x7aa37cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_7aa380:
    // 0x7aa380: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x7aa380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_7aa384:
    // 0x7aa384: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7aa384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_7aa388:
    // 0x7aa388: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7aa388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_7aa38c:
    // 0x7aa38c: 0xae0202f0  sw          $v0, 0x2F0($s0)
    ctx->pc = 0x7aa38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
label_7aa390:
    // 0x7aa390: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x7aa390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_7aa394:
    // 0x7aa394: 0x24020253  addiu       $v0, $zero, 0x253
    ctx->pc = 0x7aa394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
label_7aa398:
    // 0x7aa398: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x7aa398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
label_7aa39c:
    // 0x7aa39c: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x7aa39cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_7aa3a0:
    // 0x7aa3a0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x7aa3a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7aa3a4:
    // 0x7aa3a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7aa3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7aa3a8:
    // 0x7aa3a8: 0x10000149  b           . + 4 + (0x149 << 2)
label_7aa3ac:
    if (ctx->pc == 0x7AA3ACu) {
        ctx->pc = 0x7AA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA3A8u;
        // 0x7aa3ac: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA3B0u;
        goto label_7aa3b0;
    }
    ctx->pc = 0x7AA3A8u;
    {
        const bool branch_taken_0x7aa3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA3A8u;
        // 0x7aa3ac: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa3a8) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA3B0u;
label_7aa3b0:
    // 0x7aa3b0: 0x24020252  addiu       $v0, $zero, 0x252
    ctx->pc = 0x7aa3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 594));
label_7aa3b4:
    // 0x7aa3b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7aa3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7aa3b8:
    // 0x7aa3b8: 0x24050615  addiu       $a1, $zero, 0x615
    ctx->pc = 0x7aa3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1557));
label_7aa3bc:
    // 0x7aa3bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7aa3bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7aa3c0:
    // 0x7aa3c0: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x7aa3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_7aa3c4:
    // 0x7aa3c4: 0xc1ea5b0  jal         func_7A96C0
label_7aa3c8:
    if (ctx->pc == 0x7AA3C8u) {
        ctx->pc = 0x7AA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA3C4u;
        // 0x7aa3c8: 0x2417fffe  addiu       $s7, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA3CCu;
        goto label_7aa3cc;
    }
    ctx->pc = 0x7AA3C4u;
    SET_GPR_U32(ctx, 31, 0x7AA3CCu);
    ctx->pc = 0x7AA3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA3C4u;
    // 0x7aa3c8: 0x2417fffe  addiu       $s7, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A96C0u, 0x7AA3C4u, 0x7AA3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA3CCu;
label_7aa3cc:
    // 0x7aa3cc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x7aa3ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7aa3d0:
    // 0x7aa3d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x7aa3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa3d4:
    // 0x7aa3d4: 0x10000018  b           . + 4 + (0x18 << 2)
label_7aa3d8:
    if (ctx->pc == 0x7AA3D8u) {
        ctx->pc = 0x7AA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA3D4u;
        // 0x7aa3d8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA3DCu;
        goto label_7aa3dc;
    }
    ctx->pc = 0x7AA3D4u;
    {
        const bool branch_taken_0x7aa3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA3D4u;
        // 0x7aa3d8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa3d4) {
            ctx->pc = 0x7AA438u;
            goto label_7aa438;
        }
    }
    ctx->pc = 0x7AA3DCu;
label_7aa3dc:
    // 0x7aa3dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7aa3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7aa3e0:
    // 0x7aa3e0: 0x10000064  b           . + 4 + (0x64 << 2)
label_7aa3e4:
    if (ctx->pc == 0x7AA3E4u) {
        ctx->pc = 0x7AA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA3E0u;
        // 0x7aa3e4: 0x24050615  addiu       $a1, $zero, 0x615 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1557));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA3E8u;
        goto label_7aa3e8;
    }
    ctx->pc = 0x7AA3E0u;
    {
        const bool branch_taken_0x7aa3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA3E0u;
        // 0x7aa3e4: 0x24050615  addiu       $a1, $zero, 0x615 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1557));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa3e0) {
            ctx->pc = 0x7AA574u;
            goto label_7aa574;
        }
    }
    ctx->pc = 0x7AA3E8u;
label_7aa3e8:
    // 0x7aa3e8: 0x24050615  addiu       $a1, $zero, 0x615
    ctx->pc = 0x7aa3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1557));
label_7aa3ec:
    // 0x7aa3ec: 0xc1ea59a  jal         func_7A9668
label_7aa3f0:
    if (ctx->pc == 0x7AA3F0u) {
        ctx->pc = 0x7AA3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA3ECu;
        // 0x7aa3f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA3F4u;
        goto label_7aa3f4;
    }
    ctx->pc = 0x7AA3ECu;
    SET_GPR_U32(ctx, 31, 0x7AA3F4u);
    ctx->pc = 0x7AA3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA3ECu;
    // 0x7aa3f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A9668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A9668u, 0x7AA3ECu, 0x7AA3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA3F4u;
label_7aa3f4:
    // 0x7aa3f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7aa3f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7aa3f8:
    // 0x7aa3f8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x7aa3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_7aa3fc:
    // 0x7aa3fc: 0x10620134  beq         $v1, $v0, . + 4 + (0x134 << 2)
label_7aa400:
    if (ctx->pc == 0x7AA400u) {
        ctx->pc = 0x7AA400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA3FCu;
        // 0x7aa400: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA404u;
        goto label_7aa404;
    }
    ctx->pc = 0x7AA3FCu;
    {
        const bool branch_taken_0x7aa3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AA400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA3FCu;
        // 0x7aa400: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa3fc) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA404u;
label_7aa404:
    // 0x7aa404: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x7aa404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_7aa408:
    // 0x7aa408: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x7aa408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_7aa40c:
    // 0x7aa40c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x7aa40cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7aa410:
    // 0x7aa410: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x7aa410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_7aa414:
    // 0x7aa414: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x7aa414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_7aa418:
    // 0x7aa418: 0x1000012d  b           . + 4 + (0x12D << 2)
label_7aa41c:
    if (ctx->pc == 0x7AA41Cu) {
        ctx->pc = 0x7AA41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA418u;
        // 0x7aa41c: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA420u;
        goto label_7aa420;
    }
    ctx->pc = 0x7AA418u;
    {
        const bool branch_taken_0x7aa418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA418u;
        // 0x7aa41c: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa418) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA420u;
label_7aa420:
    // 0x7aa420: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7aa420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7aa424:
    // 0x7aa424: 0x24050620  addiu       $a1, $zero, 0x620
    ctx->pc = 0x7aa424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1568));
label_7aa428:
    // 0x7aa428: 0xc1ea5b0  jal         func_7A96C0
label_7aa42c:
    if (ctx->pc == 0x7AA42Cu) {
        ctx->pc = 0x7AA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA428u;
        // 0x7aa42c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA430u;
        goto label_7aa430;
    }
    ctx->pc = 0x7AA428u;
    SET_GPR_U32(ctx, 31, 0x7AA430u);
    ctx->pc = 0x7AA42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA428u;
    // 0x7aa42c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A96C0u, 0x7AA428u, 0x7AA430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA430u;
label_7aa430:
    // 0x7aa430: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x7aa430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa434:
    // 0x7aa434: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7aa434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7aa438:
    // 0x7aa438: 0xc1ea090  jal         func_7A8240
label_7aa43c:
    if (ctx->pc == 0x7AA43Cu) {
        ctx->pc = 0x7AA440u;
        goto label_7aa440;
    }
    ctx->pc = 0x7AA438u;
    SET_GPR_U32(ctx, 31, 0x7AA440u);
    ctx->pc = 0x7A8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8240u, 0x7AA438u, 0x7AA440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA440u;
label_7aa440:
    // 0x7aa440: 0x10000123  b           . + 4 + (0x123 << 2)
label_7aa444:
    if (ctx->pc == 0x7AA444u) {
        ctx->pc = 0x7AA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA440u;
        // 0x7aa444: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA448u;
        goto label_7aa448;
    }
    ctx->pc = 0x7AA440u;
    {
        const bool branch_taken_0x7aa440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA440u;
        // 0x7aa444: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa440) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA448u;
label_7aa448:
    // 0x7aa448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7aa448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7aa44c:
    // 0x7aa44c: 0x10000049  b           . + 4 + (0x49 << 2)
label_7aa450:
    if (ctx->pc == 0x7AA450u) {
        ctx->pc = 0x7AA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA44Cu;
        // 0x7aa450: 0x24050620  addiu       $a1, $zero, 0x620 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA454u;
        goto label_7aa454;
    }
    ctx->pc = 0x7AA44Cu;
    {
        const bool branch_taken_0x7aa44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA44Cu;
        // 0x7aa450: 0x24050620  addiu       $a1, $zero, 0x620 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa44c) {
            ctx->pc = 0x7AA574u;
            goto label_7aa574;
        }
    }
    ctx->pc = 0x7AA454u;
label_7aa454:
    // 0x7aa454: 0xc0c4aa0  jal         func_312A80
label_7aa458:
    if (ctx->pc == 0x7AA458u) {
        ctx->pc = 0x7AA458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA454u;
        // 0x7aa458: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA45Cu;
        goto label_7aa45c;
    }
    ctx->pc = 0x7AA454u;
    SET_GPR_U32(ctx, 31, 0x7AA45Cu);
    ctx->pc = 0x7AA458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA454u;
    // 0x7aa458: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x312A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312A80u, 0x7AA454u, 0x7AA45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA45Cu;
label_7aa45c:
    // 0x7aa45c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7aa45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7aa460:
    // 0x7aa460: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_7aa464:
    if (ctx->pc == 0x7AA464u) {
        ctx->pc = 0x7AA464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA460u;
        // 0x7aa464: 0x24020257  addiu       $v0, $zero, 0x257 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA468u;
        goto label_7aa468;
    }
    ctx->pc = 0x7AA460u;
    {
        const bool branch_taken_0x7aa460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA460u;
        // 0x7aa464: 0x24020257  addiu       $v0, $zero, 0x257 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa460) {
            ctx->pc = 0x7AA4B0u;
            goto label_7aa4b0;
        }
    }
    ctx->pc = 0x7AA468u;
label_7aa468:
    // 0x7aa468: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x7aa468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_7aa46c:
    // 0x7aa46c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x7aa46cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_7aa470:
    // 0x7aa470: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x7aa470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_7aa474:
    // 0x7aa474: 0x40f809  jalr        $v0
label_7aa478:
    if (ctx->pc == 0x7AA478u) {
        ctx->pc = 0x7AA478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA474u;
        // 0x7aa478: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA47Cu;
        goto label_7aa47c;
    }
    ctx->pc = 0x7AA474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7AA47Cu);
        ctx->pc = 0x7AA478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA474u;
        // 0x7aa478: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AA474u, 0x7AA47Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7AA47Cu;
label_7aa47c:
    // 0x7aa47c: 0x10400114  beqz        $v0, . + 4 + (0x114 << 2)
label_7aa480:
    if (ctx->pc == 0x7AA480u) {
        ctx->pc = 0x7AA480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA47Cu;
        // 0x7aa480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA484u;
        goto label_7aa484;
    }
    ctx->pc = 0x7AA47Cu;
    {
        const bool branch_taken_0x7aa47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA47Cu;
        // 0x7aa480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa47c) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA484u;
label_7aa484:
    // 0x7aa484: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x7aa484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa488:
    // 0x7aa488: 0xc09ec98  jal         func_27B260
label_7aa48c:
    if (ctx->pc == 0x7AA48Cu) {
        ctx->pc = 0x7AA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA488u;
        // 0x7aa48c: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA490u;
        goto label_7aa490;
    }
    ctx->pc = 0x7AA488u;
    SET_GPR_U32(ctx, 31, 0x7AA490u);
    ctx->pc = 0x7AA48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA488u;
    // 0x7aa48c: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B260u, 0x7AA488u, 0x7AA490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA490u;
label_7aa490:
    // 0x7aa490: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x7aa490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
label_7aa494:
    // 0x7aa494: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x7aa494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_7aa498:
    // 0x7aa498: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x7aa498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_7aa49c:
    // 0x7aa49c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7aa49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_7aa4a0:
    // 0x7aa4a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7aa4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_7aa4a4:
    // 0x7aa4a4: 0xae0202f0  sw          $v0, 0x2F0($s0)
    ctx->pc = 0x7aa4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
label_7aa4a8:
    // 0x7aa4a8: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x7aa4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_7aa4ac:
    // 0x7aa4ac: 0x24020257  addiu       $v0, $zero, 0x257
    ctx->pc = 0x7aa4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
label_7aa4b0:
    // 0x7aa4b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa4b4:
    // 0x7aa4b4: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x7aa4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_7aa4b8:
    // 0x7aa4b8: 0x10800104  beqz        $a0, . + 4 + (0x104 << 2)
label_7aa4bc:
    if (ctx->pc == 0x7AA4BCu) {
        ctx->pc = 0x7AA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA4B8u;
        // 0x7aa4bc: 0xae30002c  sw          $s0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA4C0u;
        goto label_7aa4c0;
    }
    ctx->pc = 0x7AA4B8u;
    {
        const bool branch_taken_0x7aa4b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA4B8u;
        // 0x7aa4bc: 0xae30002c  sw          $s0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa4b8) {
            ctx->pc = 0x7AA8CCu;
            goto label_7aa8cc;
        }
    }
    ctx->pc = 0x7AA4C0u;
label_7aa4c0:
    // 0x7aa4c0: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7aa4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
label_7aa4c4:
    // 0x7aa4c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7aa4c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7aa4c8:
    // 0x7aa4c8: 0x24a54d90  addiu       $a1, $a1, 0x4D90
    ctx->pc = 0x7aa4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19856));
label_7aa4cc:
    // 0x7aa4cc: 0xc0528ce  jal         func_14A338
label_7aa4d0:
    if (ctx->pc == 0x7AA4D0u) {
        ctx->pc = 0x7AA4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA4CCu;
        // 0x7aa4d0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA4D4u;
        goto label_7aa4d4;
    }
    ctx->pc = 0x7AA4CCu;
    SET_GPR_U32(ctx, 31, 0x7AA4D4u);
    ctx->pc = 0x7AA4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA4CCu;
    // 0x7aa4d0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA4CCu, 0x7AA4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA4D4u;
label_7aa4d4:
    // 0x7aa4d4: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7aa4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
label_7aa4d8:
    // 0x7aa4d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa4dc:
    // 0x7aa4dc: 0x24a54d98  addiu       $a1, $a1, 0x4D98
    ctx->pc = 0x7aa4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19864));
label_7aa4e0:
    // 0x7aa4e0: 0xc0528ce  jal         func_14A338
label_7aa4e4:
    if (ctx->pc == 0x7AA4E4u) {
        ctx->pc = 0x7AA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA4E0u;
        // 0x7aa4e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA4E8u;
        goto label_7aa4e8;
    }
    ctx->pc = 0x7AA4E0u;
    SET_GPR_U32(ctx, 31, 0x7AA4E8u);
    ctx->pc = 0x7AA4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA4E0u;
    // 0x7aa4e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA4E0u, 0x7AA4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA4E8u;
label_7aa4e8:
    // 0x7aa4e8: 0x100000fa  b           . + 4 + (0xFA << 2)
label_7aa4ec:
    if (ctx->pc == 0x7AA4ECu) {
        ctx->pc = 0x7AA4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA4E8u;
        // 0x7aa4ec: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA4F0u;
        goto label_7aa4f0;
    }
    ctx->pc = 0x7AA4E8u;
    {
        const bool branch_taken_0x7aa4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA4E8u;
        // 0x7aa4ec: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa4e8) {
            ctx->pc = 0x7AA8D4u;
            goto label_7aa8d4;
        }
    }
    ctx->pc = 0x7AA4F0u;
label_7aa4f0:
    // 0x7aa4f0: 0x24020256  addiu       $v0, $zero, 0x256
    ctx->pc = 0x7aa4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
label_7aa4f4:
    // 0x7aa4f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7aa4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7aa4f8:
    // 0x7aa4f8: 0x24050625  addiu       $a1, $zero, 0x625
    ctx->pc = 0x7aa4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1573));
label_7aa4fc:
    // 0x7aa4fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7aa4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7aa500:
    // 0x7aa500: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x7aa500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_7aa504:
    // 0x7aa504: 0xc1ea5b0  jal         func_7A96C0
label_7aa508:
    if (ctx->pc == 0x7AA508u) {
        ctx->pc = 0x7AA508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA504u;
        // 0x7aa508: 0x2417fffe  addiu       $s7, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA50Cu;
        goto label_7aa50c;
    }
    ctx->pc = 0x7AA504u;
    SET_GPR_U32(ctx, 31, 0x7AA50Cu);
    ctx->pc = 0x7AA508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA504u;
    // 0x7aa508: 0x2417fffe  addiu       $s7, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A96C0u, 0x7AA504u, 0x7AA50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA50Cu;
label_7aa50c:
    // 0x7aa50c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x7aa50cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7aa510:
    // 0x7aa510: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x7aa510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa514:
    // 0x7aa514: 0xc1ea090  jal         func_7A8240
label_7aa518:
    if (ctx->pc == 0x7AA518u) {
        ctx->pc = 0x7AA518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA514u;
        // 0x7aa518: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA51Cu;
        goto label_7aa51c;
    }
    ctx->pc = 0x7AA514u;
    SET_GPR_U32(ctx, 31, 0x7AA51Cu);
    ctx->pc = 0x7AA518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA514u;
    // 0x7aa518: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8240u, 0x7AA514u, 0x7AA51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA51Cu;
label_7aa51c:
    // 0x7aa51c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa520:
    // 0x7aa520: 0x108000eb  beqz        $a0, . + 4 + (0xEB << 2)
label_7aa524:
    if (ctx->pc == 0x7AA524u) {
        ctx->pc = 0x7AA524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA520u;
        // 0x7aa524: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA528u;
        goto label_7aa528;
    }
    ctx->pc = 0x7AA520u;
    {
        const bool branch_taken_0x7aa520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA520u;
        // 0x7aa524: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa520) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA528u;
label_7aa528:
    // 0x7aa528: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7aa528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
label_7aa52c:
    // 0x7aa52c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7aa52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7aa530:
    // 0x7aa530: 0xc0528ce  jal         func_14A338
label_7aa534:
    if (ctx->pc == 0x7AA534u) {
        ctx->pc = 0x7AA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA530u;
        // 0x7aa534: 0x24a54da0  addiu       $a1, $a1, 0x4DA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19872));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA538u;
        goto label_7aa538;
    }
    ctx->pc = 0x7AA530u;
    SET_GPR_U32(ctx, 31, 0x7AA538u);
    ctx->pc = 0x7AA534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA530u;
    // 0x7aa534: 0x24a54da0  addiu       $a1, $a1, 0x4DA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA530u, 0x7AA538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA538u;
label_7aa538:
    // 0x7aa538: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_7aa53c:
    if (ctx->pc == 0x7AA53Cu) {
        ctx->pc = 0x7AA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA538u;
        // 0x7aa53c: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA540u;
        goto label_7aa540;
    }
    ctx->pc = 0x7AA538u;
    {
        const bool branch_taken_0x7aa538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA538u;
        // 0x7aa53c: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa538) {
            ctx->pc = 0x7AA8D4u;
            goto label_7aa8d4;
        }
    }
    ctx->pc = 0x7AA540u;
label_7aa540:
    // 0x7aa540: 0x108000e3  beqz        $a0, . + 4 + (0xE3 << 2)
label_7aa544:
    if (ctx->pc == 0x7AA544u) {
        ctx->pc = 0x7AA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA540u;
        // 0x7aa544: 0x3c05007b  lui         $a1, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA548u;
        goto label_7aa548;
    }
    ctx->pc = 0x7AA540u;
    {
        const bool branch_taken_0x7aa540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA540u;
        // 0x7aa544: 0x3c05007b  lui         $a1, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa540) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA548u;
label_7aa548:
    // 0x7aa548: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7aa548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7aa54c:
    // 0x7aa54c: 0xc0528ce  jal         func_14A338
label_7aa550:
    if (ctx->pc == 0x7AA550u) {
        ctx->pc = 0x7AA550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA54Cu;
        // 0x7aa550: 0x24a54d90  addiu       $a1, $a1, 0x4D90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA554u;
        goto label_7aa554;
    }
    ctx->pc = 0x7AA54Cu;
    SET_GPR_U32(ctx, 31, 0x7AA554u);
    ctx->pc = 0x7AA550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA54Cu;
    // 0x7aa550: 0x24a54d90  addiu       $a1, $a1, 0x4D90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA54Cu, 0x7AA554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA554u;
label_7aa554:
    // 0x7aa554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7aa554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7aa558:
    // 0x7aa558: 0x10000006  b           . + 4 + (0x6 << 2)
label_7aa55c:
    if (ctx->pc == 0x7AA55Cu) {
        ctx->pc = 0x7AA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA558u;
        // 0x7aa55c: 0x24050625  addiu       $a1, $zero, 0x625 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1573));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA560u;
        goto label_7aa560;
    }
    ctx->pc = 0x7AA558u;
    {
        const bool branch_taken_0x7aa558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA558u;
        // 0x7aa55c: 0x24050625  addiu       $a1, $zero, 0x625 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1573));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa558) {
            ctx->pc = 0x7AA574u;
            goto label_7aa574;
        }
    }
    ctx->pc = 0x7AA560u;
label_7aa560:
    // 0x7aa560: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7aa560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7aa564:
    // 0x7aa564: 0x10000003  b           . + 4 + (0x3 << 2)
label_7aa568:
    if (ctx->pc == 0x7AA568u) {
        ctx->pc = 0x7AA568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA564u;
        // 0x7aa568: 0x24050641  addiu       $a1, $zero, 0x641 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1601));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA56Cu;
        goto label_7aa56c;
    }
    ctx->pc = 0x7AA564u;
    {
        const bool branch_taken_0x7aa564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA564u;
        // 0x7aa568: 0x24050641  addiu       $a1, $zero, 0x641 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1601));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa564) {
            ctx->pc = 0x7AA574u;
            goto label_7aa574;
        }
    }
    ctx->pc = 0x7AA56Cu;
label_7aa56c:
    // 0x7aa56c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7aa56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7aa570:
    // 0x7aa570: 0x24050646  addiu       $a1, $zero, 0x646
    ctx->pc = 0x7aa570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1606));
label_7aa574:
    // 0x7aa574: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7aa574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7aa578:
    // 0x7aa578: 0xc1ea5b0  jal         func_7A96C0
label_7aa57c:
    if (ctx->pc == 0x7AA57Cu) {
        ctx->pc = 0x7AA580u;
        goto label_7aa580;
    }
    ctx->pc = 0x7AA578u;
    SET_GPR_U32(ctx, 31, 0x7AA580u);
    ctx->pc = 0x7A96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A96C0u, 0x7AA578u, 0x7AA580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA580u;
label_7aa580:
    // 0x7aa580: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x7aa580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa584:
    // 0x7aa584: 0xc1ea0c0  jal         func_7A8300
label_7aa588:
    if (ctx->pc == 0x7AA588u) {
        ctx->pc = 0x7AA588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA584u;
        // 0x7aa588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA58Cu;
        goto label_7aa58c;
    }
    ctx->pc = 0x7AA584u;
    SET_GPR_U32(ctx, 31, 0x7AA58Cu);
    ctx->pc = 0x7AA588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA584u;
    // 0x7aa588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8300u, 0x7AA584u, 0x7AA58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA58Cu;
label_7aa58c:
    // 0x7aa58c: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_7aa590:
    if (ctx->pc == 0x7AA590u) {
        ctx->pc = 0x7AA590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA58Cu;
        // 0x7aa590: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA594u;
        goto label_7aa594;
    }
    ctx->pc = 0x7AA58Cu;
    {
        const bool branch_taken_0x7aa58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA58Cu;
        // 0x7aa590: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa58c) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA594u;
label_7aa594:
    // 0x7aa594: 0x2402021c  addiu       $v0, $zero, 0x21C
    ctx->pc = 0x7aa594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
label_7aa598:
    // 0x7aa598: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x7aa598u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7aa59c:
    // 0x7aa59c: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x7aa59cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_7aa5a0:
    // 0x7aa5a0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x7aa5a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7aa5a4:
    // 0x7aa5a4: 0x100000ca  b           . + 4 + (0xCA << 2)
label_7aa5a8:
    if (ctx->pc == 0x7AA5A8u) {
        ctx->pc = 0x7AA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA5A4u;
        // 0x7aa5a8: 0xafb60040  sw          $s6, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA5ACu;
        goto label_7aa5ac;
    }
    ctx->pc = 0x7AA5A4u;
    {
        const bool branch_taken_0x7aa5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA5A4u;
        // 0x7aa5a8: 0xafb60040  sw          $s6, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa5a4) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA5ACu;
label_7aa5ac:
    // 0x7aa5ac: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_7aa5b0:
    if (ctx->pc == 0x7AA5B0u) {
        ctx->pc = 0x7AA5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA5ACu;
        // 0x7aa5b0: 0x2417fff6  addiu       $s7, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA5B4u;
        goto label_7aa5b4;
    }
    ctx->pc = 0x7AA5ACu;
    {
        const bool branch_taken_0x7aa5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA5ACu;
        // 0x7aa5b0: 0x2417fff6  addiu       $s7, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa5ac) {
            ctx->pc = 0x7AA8CCu;
            goto label_7aa8cc;
        }
    }
    ctx->pc = 0x7AA5B4u;
label_7aa5b4:
    // 0x7aa5b4: 0x92260008  lbu         $a2, 0x8($s1)
    ctx->pc = 0x7aa5b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_7aa5b8:
    // 0x7aa5b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7aa5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7aa5bc:
    // 0x7aa5bc: 0xc1ea5b0  jal         func_7A96C0
label_7aa5c0:
    if (ctx->pc == 0x7AA5C0u) {
        ctx->pc = 0x7AA5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA5BCu;
        // 0x7aa5c0: 0x24050634  addiu       $a1, $zero, 0x634 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1588));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA5C4u;
        goto label_7aa5c4;
    }
    ctx->pc = 0x7AA5BCu;
    SET_GPR_U32(ctx, 31, 0x7AA5C4u);
    ctx->pc = 0x7AA5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA5BCu;
    // 0x7aa5c0: 0x24050634  addiu       $a1, $zero, 0x634 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1588));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A96C0u, 0x7AA5BCu, 0x7AA5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA5C4u;
label_7aa5c4:
    // 0x7aa5c4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x7aa5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa5c8:
    // 0x7aa5c8: 0xc1ea0f6  jal         func_7A83D8
label_7aa5cc:
    if (ctx->pc == 0x7AA5CCu) {
        ctx->pc = 0x7AA5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA5C8u;
        // 0x7aa5cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA5D0u;
        goto label_7aa5d0;
    }
    ctx->pc = 0x7AA5C8u;
    SET_GPR_U32(ctx, 31, 0x7AA5D0u);
    ctx->pc = 0x7AA5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA5C8u;
    // 0x7aa5cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A83D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A83D8u, 0x7AA5C8u, 0x7AA5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA5D0u;
label_7aa5d0:
    // 0x7aa5d0: 0x100000bf  b           . + 4 + (0xBF << 2)
label_7aa5d4:
    if (ctx->pc == 0x7AA5D4u) {
        ctx->pc = 0x7AA5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA5D0u;
        // 0x7aa5d4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA5D8u;
        goto label_7aa5d8;
    }
    ctx->pc = 0x7AA5D0u;
    {
        const bool branch_taken_0x7aa5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA5D0u;
        // 0x7aa5d4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa5d0) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA5D8u;
label_7aa5d8:
    // 0x7aa5d8: 0xc0c4aa0  jal         func_312A80
label_7aa5dc:
    if (ctx->pc == 0x7AA5DCu) {
        ctx->pc = 0x7AA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA5D8u;
        // 0x7aa5dc: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA5E0u;
        goto label_7aa5e0;
    }
    ctx->pc = 0x7AA5D8u;
    SET_GPR_U32(ctx, 31, 0x7AA5E0u);
    ctx->pc = 0x7AA5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA5D8u;
    // 0x7aa5dc: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x312A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312A80u, 0x7AA5D8u, 0x7AA5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA5E0u;
label_7aa5e0:
    // 0x7aa5e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7aa5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7aa5e4:
    // 0x7aa5e4: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_7aa5e8:
    if (ctx->pc == 0x7AA5E8u) {
        ctx->pc = 0x7AA5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA5E4u;
        // 0x7aa5e8: 0x24020212  addiu       $v0, $zero, 0x212 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA5ECu;
        goto label_7aa5ec;
    }
    ctx->pc = 0x7AA5E4u;
    {
        const bool branch_taken_0x7aa5e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA5E4u;
        // 0x7aa5e8: 0x24020212  addiu       $v0, $zero, 0x212 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa5e4) {
            ctx->pc = 0x7AA634u;
            goto label_7aa634;
        }
    }
    ctx->pc = 0x7AA5ECu;
label_7aa5ec:
    // 0x7aa5ec: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x7aa5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_7aa5f0:
    // 0x7aa5f0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x7aa5f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_7aa5f4:
    // 0x7aa5f4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x7aa5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_7aa5f8:
    // 0x7aa5f8: 0x40f809  jalr        $v0
label_7aa5fc:
    if (ctx->pc == 0x7AA5FCu) {
        ctx->pc = 0x7AA5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA5F8u;
        // 0x7aa5fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA600u;
        goto label_7aa600;
    }
    ctx->pc = 0x7AA5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7AA600u);
        ctx->pc = 0x7AA5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA5F8u;
        // 0x7aa5fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AA5F8u, 0x7AA600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7AA600u;
label_7aa600:
    // 0x7aa600: 0x104000b3  beqz        $v0, . + 4 + (0xB3 << 2)
label_7aa604:
    if (ctx->pc == 0x7AA604u) {
        ctx->pc = 0x7AA604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA600u;
        // 0x7aa604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA608u;
        goto label_7aa608;
    }
    ctx->pc = 0x7AA600u;
    {
        const bool branch_taken_0x7aa600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA600u;
        // 0x7aa604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa600) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA608u;
label_7aa608:
    // 0x7aa608: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x7aa608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa60c:
    // 0x7aa60c: 0xc09dba4  jal         func_276E90
label_7aa610:
    if (ctx->pc == 0x7AA610u) {
        ctx->pc = 0x7AA610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA60Cu;
        // 0x7aa610: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA614u;
        goto label_7aa614;
    }
    ctx->pc = 0x7AA60Cu;
    SET_GPR_U32(ctx, 31, 0x7AA614u);
    ctx->pc = 0x7AA610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA60Cu;
    // 0x7aa610: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276E90u, 0x7AA60Cu, 0x7AA614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA614u;
label_7aa614:
    // 0x7aa614: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x7aa614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
label_7aa618:
    // 0x7aa618: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x7aa618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_7aa61c:
    // 0x7aa61c: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x7aa61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_7aa620:
    // 0x7aa620: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7aa620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_7aa624:
    // 0x7aa624: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7aa624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_7aa628:
    // 0x7aa628: 0xae0202f0  sw          $v0, 0x2F0($s0)
    ctx->pc = 0x7aa628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
label_7aa62c:
    // 0x7aa62c: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x7aa62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_7aa630:
    // 0x7aa630: 0x24020212  addiu       $v0, $zero, 0x212
    ctx->pc = 0x7aa630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
label_7aa634:
    // 0x7aa634: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x7aa634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
label_7aa638:
    // 0x7aa638: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_7aa63c:
    if (ctx->pc == 0x7AA63Cu) {
        ctx->pc = 0x7AA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA638u;
        // 0x7aa63c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA640u;
        goto label_7aa640;
    }
    ctx->pc = 0x7AA638u;
    {
        const bool branch_taken_0x7aa638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA638u;
        // 0x7aa63c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa638) {
            ctx->pc = 0x7AA8CCu;
            goto label_7aa8cc;
        }
    }
    ctx->pc = 0x7AA640u;
label_7aa640:
    // 0x7aa640: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_7aa644:
    if (ctx->pc == 0x7AA644u) {
        ctx->pc = 0x7AA644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA640u;
        // 0x7aa644: 0xae300034  sw          $s0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA648u;
        goto label_7aa648;
    }
    ctx->pc = 0x7AA640u;
    {
        const bool branch_taken_0x7aa640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA640u;
        // 0x7aa644: 0xae300034  sw          $s0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa640) {
            ctx->pc = 0x7AA8CCu;
            goto label_7aa8cc;
        }
    }
    ctx->pc = 0x7AA648u;
label_7aa648:
    // 0x7aa648: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_7aa64c:
    if (ctx->pc == 0x7AA64Cu) {
        ctx->pc = 0x7AA64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA648u;
        // 0x7aa64c: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA650u;
        goto label_7aa650;
    }
    ctx->pc = 0x7AA648u;
    {
        const bool branch_taken_0x7aa648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA648u;
        // 0x7aa64c: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa648) {
            ctx->pc = 0x7AA8CCu;
            goto label_7aa8cc;
        }
    }
    ctx->pc = 0x7AA650u;
label_7aa650:
    // 0x7aa650: 0x24040374  addiu       $a0, $zero, 0x374
    ctx->pc = 0x7aa650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 884));
label_7aa654:
    // 0x7aa654: 0xc0c4aa0  jal         func_312A80
label_7aa658:
    if (ctx->pc == 0x7AA658u) {
        ctx->pc = 0x7AA658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA654u;
        // 0x7aa658: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA65Cu;
        goto label_7aa65c;
    }
    ctx->pc = 0x7AA654u;
    SET_GPR_U32(ctx, 31, 0x7AA65Cu);
    ctx->pc = 0x7AA658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA654u;
    // 0x7aa658: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x312A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312A80u, 0x7AA654u, 0x7AA65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA65Cu;
label_7aa65c:
    // 0x7aa65c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7aa65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7aa660:
    // 0x7aa660: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_7aa664:
    if (ctx->pc == 0x7AA664u) {
        ctx->pc = 0x7AA664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA660u;
        // 0x7aa664: 0x24020374  addiu       $v0, $zero, 0x374 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 884));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA668u;
        goto label_7aa668;
    }
    ctx->pc = 0x7AA660u;
    {
        const bool branch_taken_0x7aa660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA660u;
        // 0x7aa664: 0x24020374  addiu       $v0, $zero, 0x374 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 884));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa660) {
            ctx->pc = 0x7AA6C4u;
            goto label_7aa6c4;
        }
    }
    ctx->pc = 0x7AA668u;
label_7aa668:
    // 0x7aa668: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x7aa668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_7aa66c:
    // 0x7aa66c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x7aa66cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_7aa670:
    // 0x7aa670: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x7aa670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_7aa674:
    // 0x7aa674: 0x40f809  jalr        $v0
label_7aa678:
    if (ctx->pc == 0x7AA678u) {
        ctx->pc = 0x7AA678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA674u;
        // 0x7aa678: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA67Cu;
        goto label_7aa67c;
    }
    ctx->pc = 0x7AA674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7AA67Cu);
        ctx->pc = 0x7AA678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA674u;
        // 0x7aa678: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AA674u, 0x7AA67Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7AA67Cu;
label_7aa67c:
    // 0x7aa67c: 0x50400095  beql        $v0, $zero, . + 4 + (0x95 << 2)
label_7aa680:
    if (ctx->pc == 0x7AA680u) {
        ctx->pc = 0x7AA680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA67Cu;
        // 0x7aa680: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA684u;
        goto label_7aa684;
    }
    ctx->pc = 0x7AA67Cu;
    {
        const bool branch_taken_0x7aa67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7aa67c) {
            ctx->pc = 0x7AA680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AA67Cu;
            // 0x7aa680: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AA8D4u;
            goto label_7aa8d4;
        }
    }
    ctx->pc = 0x7AA684u;
label_7aa684:
    // 0x7aa684: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7aa684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_7aa688:
    // 0x7aa688: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x7aa688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_7aa68c:
    // 0x7aa68c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x7aa68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_7aa690:
    // 0x7aa690: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x7aa690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_7aa694:
    // 0x7aa694: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x7aa694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_7aa698:
    // 0x7aa698: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x7aa698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_7aa69c:
    // 0x7aa69c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x7aa69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa6a0:
    // 0x7aa6a0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_7aa6a4:
    if (ctx->pc == 0x7AA6A4u) {
        ctx->pc = 0x7AA6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA6A0u;
        // 0x7aa6a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA6A8u;
        goto label_7aa6a8;
    }
    ctx->pc = 0x7AA6A0u;
    {
        const bool branch_taken_0x7aa6a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA6A0u;
        // 0x7aa6a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa6a0) {
            ctx->pc = 0x7AA6B8u;
            goto label_7aa6b8;
        }
    }
    ctx->pc = 0x7AA6A8u;
label_7aa6a8:
    // 0x7aa6a8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x7aa6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7aa6ac:
    // 0x7aa6ac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x7aa6acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7aa6b0:
    // 0x7aa6b0: 0xc073c58  jal         func_1CF160
label_7aa6b4:
    if (ctx->pc == 0x7AA6B4u) {
        ctx->pc = 0x7AA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA6B0u;
        // 0x7aa6b4: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA6B8u;
        goto label_7aa6b8;
    }
    ctx->pc = 0x7AA6B0u;
    SET_GPR_U32(ctx, 31, 0x7AA6B8u);
    ctx->pc = 0x7AA6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA6B0u;
    // 0x7aa6b4: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF160u, 0x7AA6B0u, 0x7AA6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA6B8u;
label_7aa6b8:
    // 0x7aa6b8: 0xc0741f2  jal         func_1D07C8
label_7aa6bc:
    if (ctx->pc == 0x7AA6BCu) {
        ctx->pc = 0x7AA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA6B8u;
        // 0x7aa6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA6C0u;
        goto label_7aa6c0;
    }
    ctx->pc = 0x7AA6B8u;
    SET_GPR_U32(ctx, 31, 0x7AA6C0u);
    ctx->pc = 0x7AA6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA6B8u;
    // 0x7aa6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D07C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D07C8u, 0x7AA6B8u, 0x7AA6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA6C0u;
label_7aa6c0:
    // 0x7aa6c0: 0x24020374  addiu       $v0, $zero, 0x374
    ctx->pc = 0x7aa6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 884));
label_7aa6c4:
    // 0x7aa6c4: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x7aa6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
label_7aa6c8:
    // 0x7aa6c8: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x7aa6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_7aa6cc:
    // 0x7aa6cc: 0x1000007f  b           . + 4 + (0x7F << 2)
label_7aa6d0:
    if (ctx->pc == 0x7AA6D0u) {
        ctx->pc = 0x7AA6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA6CCu;
        // 0x7aa6d0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA6D4u;
        goto label_7aa6d4;
    }
    ctx->pc = 0x7AA6CCu;
    {
        const bool branch_taken_0x7aa6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA6CCu;
        // 0x7aa6d0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa6cc) {
            ctx->pc = 0x7AA8CCu;
            goto label_7aa8cc;
        }
    }
    ctx->pc = 0x7AA6D4u;
label_7aa6d4:
    // 0x7aa6d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7aa6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7aa6d8:
    // 0x7aa6d8: 0x2405026a  addiu       $a1, $zero, 0x26A
    ctx->pc = 0x7aa6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_7aa6dc:
    // 0x7aa6dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7aa6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7aa6e0:
    // 0x7aa6e0: 0xc1ea5b0  jal         func_7A96C0
label_7aa6e4:
    if (ctx->pc == 0x7AA6E4u) {
        ctx->pc = 0x7AA6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA6E0u;
        // 0x7aa6e4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA6E8u;
        goto label_7aa6e8;
    }
    ctx->pc = 0x7AA6E0u;
    SET_GPR_U32(ctx, 31, 0x7AA6E8u);
    ctx->pc = 0x7AA6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA6E0u;
    // 0x7aa6e4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A96C0u, 0x7AA6E0u, 0x7AA6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA6E8u;
label_7aa6e8:
    // 0x7aa6e8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x7aa6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa6ec:
    // 0x7aa6ec: 0xc1ea120  jal         func_7A8480
label_7aa6f0:
    if (ctx->pc == 0x7AA6F0u) {
        ctx->pc = 0x7AA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA6ECu;
        // 0x7aa6f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA6F4u;
        goto label_7aa6f4;
    }
    ctx->pc = 0x7AA6ECu;
    SET_GPR_U32(ctx, 31, 0x7AA6F4u);
    ctx->pc = 0x7AA6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA6ECu;
    // 0x7aa6f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8480u, 0x7AA6ECu, 0x7AA6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA6F4u;
label_7aa6f4:
    // 0x7aa6f4: 0x10000076  b           . + 4 + (0x76 << 2)
label_7aa6f8:
    if (ctx->pc == 0x7AA6F8u) {
        ctx->pc = 0x7AA6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA6F4u;
        // 0x7aa6f8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA6FCu;
        goto label_7aa6fc;
    }
    ctx->pc = 0x7AA6F4u;
    {
        const bool branch_taken_0x7aa6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA6F4u;
        // 0x7aa6f8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa6f4) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA6FCu;
label_7aa6fc:
    // 0x7aa6fc: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x7aa6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
label_7aa700:
    // 0x7aa700: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x7aa700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7aa704:
    // 0x7aa704: 0x10000072  b           . + 4 + (0x72 << 2)
label_7aa708:
    if (ctx->pc == 0x7AA708u) {
        ctx->pc = 0x7AA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA704u;
        // 0x7aa708: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA70Cu;
        goto label_7aa70c;
    }
    ctx->pc = 0x7AA704u;
    {
        const bool branch_taken_0x7aa704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA704u;
        // 0x7aa708: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa704) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA70Cu;
label_7aa70c:
    // 0x7aa70c: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x7aa70cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
label_7aa710:
    // 0x7aa710: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7aa710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7aa714:
    // 0x7aa714: 0x1000006d  b           . + 4 + (0x6D << 2)
label_7aa718:
    if (ctx->pc == 0x7AA718u) {
        ctx->pc = 0x7AA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA714u;
        // 0x7aa718: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA71Cu;
        goto label_7aa71c;
    }
    ctx->pc = 0x7AA714u;
    {
        const bool branch_taken_0x7aa714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA714u;
        // 0x7aa718: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa714) {
            ctx->pc = 0x7AA8CCu;
            goto label_7aa8cc;
        }
    }
    ctx->pc = 0x7AA71Cu;
label_7aa71c:
    // 0x7aa71c: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x7aa71cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
label_7aa720:
    // 0x7aa720: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7aa720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7aa724:
    // 0x7aa724: 0x10000069  b           . + 4 + (0x69 << 2)
label_7aa728:
    if (ctx->pc == 0x7AA728u) {
        ctx->pc = 0x7AA728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA724u;
        // 0x7aa728: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA72Cu;
        goto label_7aa72c;
    }
    ctx->pc = 0x7AA724u;
    {
        const bool branch_taken_0x7aa724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA724u;
        // 0x7aa728: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa724) {
            ctx->pc = 0x7AA8CCu;
            goto label_7aa8cc;
        }
    }
    ctx->pc = 0x7AA72Cu;
label_7aa72c:
    // 0x7aa72c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa730:
    // 0x7aa730: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_7aa734:
    if (ctx->pc == 0x7AA734u) {
        ctx->pc = 0x7AA734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA730u;
        // 0x7aa734: 0x3c05007b  lui         $a1, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA738u;
        goto label_7aa738;
    }
    ctx->pc = 0x7AA730u;
    {
        const bool branch_taken_0x7aa730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA730u;
        // 0x7aa734: 0x3c05007b  lui         $a1, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa730) {
            ctx->pc = 0x7AA744u;
            goto label_7aa744;
        }
    }
    ctx->pc = 0x7AA738u;
label_7aa738:
    // 0x7aa738: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7aa738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7aa73c:
    // 0x7aa73c: 0xc0528ce  jal         func_14A338
label_7aa740:
    if (ctx->pc == 0x7AA740u) {
        ctx->pc = 0x7AA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA73Cu;
        // 0x7aa740: 0x24a54da8  addiu       $a1, $a1, 0x4DA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA744u;
        goto label_7aa744;
    }
    ctx->pc = 0x7AA73Cu;
    SET_GPR_U32(ctx, 31, 0x7AA744u);
    ctx->pc = 0x7AA740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA73Cu;
    // 0x7aa740: 0x24a54da8  addiu       $a1, $a1, 0x4DA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA73Cu, 0x7AA744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA744u;
label_7aa744:
    // 0x7aa744: 0x2404036e  addiu       $a0, $zero, 0x36E
    ctx->pc = 0x7aa744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 878));
label_7aa748:
    // 0x7aa748: 0xc0c4aa0  jal         func_312A80
label_7aa74c:
    if (ctx->pc == 0x7AA74Cu) {
        ctx->pc = 0x7AA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA748u;
        // 0x7aa74c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA750u;
        goto label_7aa750;
    }
    ctx->pc = 0x7AA748u;
    SET_GPR_U32(ctx, 31, 0x7AA750u);
    ctx->pc = 0x7AA74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA748u;
    // 0x7aa74c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x312A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312A80u, 0x7AA748u, 0x7AA750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA750u;
label_7aa750:
    // 0x7aa750: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7aa750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7aa754:
    // 0x7aa754: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_7aa758:
    if (ctx->pc == 0x7AA758u) {
        ctx->pc = 0x7AA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA754u;
        // 0x7aa758: 0x2402036e  addiu       $v0, $zero, 0x36E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 878));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA75Cu;
        goto label_7aa75c;
    }
    ctx->pc = 0x7AA754u;
    {
        const bool branch_taken_0x7aa754 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA754u;
        // 0x7aa758: 0x2402036e  addiu       $v0, $zero, 0x36E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 878));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa754) {
            ctx->pc = 0x7AA7B0u;
            goto label_7aa7b0;
        }
    }
    ctx->pc = 0x7AA75Cu;
label_7aa75c:
    // 0x7aa75c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x7aa75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_7aa760:
    // 0x7aa760: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x7aa760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_7aa764:
    // 0x7aa764: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x7aa764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_7aa768:
    // 0x7aa768: 0x40f809  jalr        $v0
label_7aa76c:
    if (ctx->pc == 0x7AA76Cu) {
        ctx->pc = 0x7AA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA768u;
        // 0x7aa76c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA770u;
        goto label_7aa770;
    }
    ctx->pc = 0x7AA768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7AA770u);
        ctx->pc = 0x7AA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA768u;
        // 0x7aa76c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AA768u, 0x7AA770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7AA770u;
label_7aa770:
    // 0x7aa770: 0x50400058  beql        $v0, $zero, . + 4 + (0x58 << 2)
label_7aa774:
    if (ctx->pc == 0x7AA774u) {
        ctx->pc = 0x7AA774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA770u;
        // 0x7aa774: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA778u;
        goto label_7aa778;
    }
    ctx->pc = 0x7AA770u;
    {
        const bool branch_taken_0x7aa770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7aa770) {
            ctx->pc = 0x7AA774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AA770u;
            // 0x7aa774: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AA8D4u;
            goto label_7aa8d4;
        }
    }
    ctx->pc = 0x7AA778u;
label_7aa778:
    // 0x7aa778: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7aa778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_7aa77c:
    // 0x7aa77c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x7aa77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_7aa780:
    // 0x7aa780: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x7aa780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_7aa784:
    // 0x7aa784: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x7aa784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_7aa788:
    // 0x7aa788: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x7aa788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_7aa78c:
    // 0x7aa78c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x7aa78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_7aa790:
    // 0x7aa790: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x7aa790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa794:
    // 0x7aa794: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_7aa798:
    if (ctx->pc == 0x7AA798u) {
        ctx->pc = 0x7AA798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA794u;
        // 0x7aa798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA79Cu;
        goto label_7aa79c;
    }
    ctx->pc = 0x7AA794u;
    {
        const bool branch_taken_0x7aa794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA794u;
        // 0x7aa798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa794) {
            ctx->pc = 0x7AA7ACu;
            goto label_7aa7ac;
        }
    }
    ctx->pc = 0x7AA79Cu;
label_7aa79c:
    // 0x7aa79c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x7aa79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7aa7a0:
    // 0x7aa7a0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x7aa7a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7aa7a4:
    // 0x7aa7a4: 0xc073c58  jal         func_1CF160
label_7aa7a8:
    if (ctx->pc == 0x7AA7A8u) {
        ctx->pc = 0x7AA7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA7A4u;
        // 0x7aa7a8: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA7ACu;
        goto label_7aa7ac;
    }
    ctx->pc = 0x7AA7A4u;
    SET_GPR_U32(ctx, 31, 0x7AA7ACu);
    ctx->pc = 0x7AA7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA7A4u;
    // 0x7aa7a8: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF160u, 0x7AA7A4u, 0x7AA7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA7ACu;
label_7aa7ac:
    // 0x7aa7ac: 0x2402036e  addiu       $v0, $zero, 0x36E
    ctx->pc = 0x7aa7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 878));
label_7aa7b0:
    // 0x7aa7b0: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x7aa7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
label_7aa7b4:
    // 0x7aa7b4: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x7aa7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_7aa7b8:
    // 0x7aa7b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa7bc:
    // 0x7aa7bc: 0x10800043  beqz        $a0, . + 4 + (0x43 << 2)
label_7aa7c0:
    if (ctx->pc == 0x7AA7C0u) {
        ctx->pc = 0x7AA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA7BCu;
        // 0x7aa7c0: 0x3c05007b  lui         $a1, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA7C4u;
        goto label_7aa7c4;
    }
    ctx->pc = 0x7AA7BCu;
    {
        const bool branch_taken_0x7aa7bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA7BCu;
        // 0x7aa7c0: 0x3c05007b  lui         $a1, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa7bc) {
            ctx->pc = 0x7AA8CCu;
            goto label_7aa8cc;
        }
    }
    ctx->pc = 0x7AA7C4u;
label_7aa7c4:
    // 0x7aa7c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7aa7c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7aa7c8:
    // 0x7aa7c8: 0xc0528ce  jal         func_14A338
label_7aa7cc:
    if (ctx->pc == 0x7AA7CCu) {
        ctx->pc = 0x7AA7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA7C8u;
        // 0x7aa7cc: 0x24a54db0  addiu       $a1, $a1, 0x4DB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA7D0u;
        goto label_7aa7d0;
    }
    ctx->pc = 0x7AA7C8u;
    SET_GPR_U32(ctx, 31, 0x7AA7D0u);
    ctx->pc = 0x7AA7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA7C8u;
    // 0x7aa7cc: 0x24a54db0  addiu       $a1, $a1, 0x4DB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA7C8u, 0x7AA7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA7D0u;
label_7aa7d0:
    // 0x7aa7d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa7d4:
    // 0x7aa7d4: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7aa7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
label_7aa7d8:
    // 0x7aa7d8: 0x24a54db8  addiu       $a1, $a1, 0x4DB8
    ctx->pc = 0x7aa7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19896));
label_7aa7dc:
    // 0x7aa7dc: 0xc0528ce  jal         func_14A338
label_7aa7e0:
    if (ctx->pc == 0x7AA7E0u) {
        ctx->pc = 0x7AA7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA7DCu;
        // 0x7aa7e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA7E4u;
        goto label_7aa7e4;
    }
    ctx->pc = 0x7AA7DCu;
    SET_GPR_U32(ctx, 31, 0x7AA7E4u);
    ctx->pc = 0x7AA7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA7DCu;
    // 0x7aa7e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA7DCu, 0x7AA7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA7E4u;
label_7aa7e4:
    // 0x7aa7e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa7e8:
    // 0x7aa7e8: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7aa7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
label_7aa7ec:
    // 0x7aa7ec: 0x24a54dc0  addiu       $a1, $a1, 0x4DC0
    ctx->pc = 0x7aa7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19904));
label_7aa7f0:
    // 0x7aa7f0: 0xc0528ce  jal         func_14A338
label_7aa7f4:
    if (ctx->pc == 0x7AA7F4u) {
        ctx->pc = 0x7AA7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA7F0u;
        // 0x7aa7f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA7F8u;
        goto label_7aa7f8;
    }
    ctx->pc = 0x7AA7F0u;
    SET_GPR_U32(ctx, 31, 0x7AA7F8u);
    ctx->pc = 0x7AA7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA7F0u;
    // 0x7aa7f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA7F0u, 0x7AA7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA7F8u;
label_7aa7f8:
    // 0x7aa7f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa7fc:
    // 0x7aa7fc: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7aa7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
label_7aa800:
    // 0x7aa800: 0x24a54dc8  addiu       $a1, $a1, 0x4DC8
    ctx->pc = 0x7aa800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19912));
label_7aa804:
    // 0x7aa804: 0xc0528ce  jal         func_14A338
label_7aa808:
    if (ctx->pc == 0x7AA808u) {
        ctx->pc = 0x7AA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA804u;
        // 0x7aa808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA80Cu;
        goto label_7aa80c;
    }
    ctx->pc = 0x7AA804u;
    SET_GPR_U32(ctx, 31, 0x7AA80Cu);
    ctx->pc = 0x7AA808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA804u;
    // 0x7aa808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA804u, 0x7AA80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA80Cu;
label_7aa80c:
    // 0x7aa80c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa810:
    // 0x7aa810: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7aa810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
label_7aa814:
    // 0x7aa814: 0x24a54dd0  addiu       $a1, $a1, 0x4DD0
    ctx->pc = 0x7aa814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19920));
label_7aa818:
    // 0x7aa818: 0xc0528ce  jal         func_14A338
label_7aa81c:
    if (ctx->pc == 0x7AA81Cu) {
        ctx->pc = 0x7AA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA818u;
        // 0x7aa81c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA820u;
        goto label_7aa820;
    }
    ctx->pc = 0x7AA818u;
    SET_GPR_U32(ctx, 31, 0x7AA820u);
    ctx->pc = 0x7AA81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA818u;
    // 0x7aa81c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA818u, 0x7AA820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA820u;
label_7aa820:
    // 0x7aa820: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa824:
    // 0x7aa824: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7aa824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
label_7aa828:
    // 0x7aa828: 0x24a54dd8  addiu       $a1, $a1, 0x4DD8
    ctx->pc = 0x7aa828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19928));
label_7aa82c:
    // 0x7aa82c: 0xc0528ce  jal         func_14A338
label_7aa830:
    if (ctx->pc == 0x7AA830u) {
        ctx->pc = 0x7AA830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA82Cu;
        // 0x7aa830: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA834u;
        goto label_7aa834;
    }
    ctx->pc = 0x7AA82Cu;
    SET_GPR_U32(ctx, 31, 0x7AA834u);
    ctx->pc = 0x7AA830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA82Cu;
    // 0x7aa830: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA82Cu, 0x7AA834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA834u;
label_7aa834:
    // 0x7aa834: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa838:
    // 0x7aa838: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7aa838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
label_7aa83c:
    // 0x7aa83c: 0x24a54de0  addiu       $a1, $a1, 0x4DE0
    ctx->pc = 0x7aa83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19936));
label_7aa840:
    // 0x7aa840: 0xc0528ce  jal         func_14A338
label_7aa844:
    if (ctx->pc == 0x7AA844u) {
        ctx->pc = 0x7AA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA840u;
        // 0x7aa844: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA848u;
        goto label_7aa848;
    }
    ctx->pc = 0x7AA840u;
    SET_GPR_U32(ctx, 31, 0x7AA848u);
    ctx->pc = 0x7AA844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA840u;
    // 0x7aa844: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA840u, 0x7AA848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA848u;
label_7aa848:
    // 0x7aa848: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa84c:
    // 0x7aa84c: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7aa84cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
label_7aa850:
    // 0x7aa850: 0x24a54de8  addiu       $a1, $a1, 0x4DE8
    ctx->pc = 0x7aa850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19944));
label_7aa854:
    // 0x7aa854: 0xc0528ce  jal         func_14A338
label_7aa858:
    if (ctx->pc == 0x7AA858u) {
        ctx->pc = 0x7AA858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA854u;
        // 0x7aa858: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA85Cu;
        goto label_7aa85c;
    }
    ctx->pc = 0x7AA854u;
    SET_GPR_U32(ctx, 31, 0x7AA85Cu);
    ctx->pc = 0x7AA858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA854u;
    // 0x7aa858: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA854u, 0x7AA85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA85Cu;
label_7aa85c:
    // 0x7aa85c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa860:
    // 0x7aa860: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7aa860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
label_7aa864:
    // 0x7aa864: 0x24a54df0  addiu       $a1, $a1, 0x4DF0
    ctx->pc = 0x7aa864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19952));
label_7aa868:
    // 0x7aa868: 0xc0528ce  jal         func_14A338
label_7aa86c:
    if (ctx->pc == 0x7AA86Cu) {
        ctx->pc = 0x7AA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA868u;
        // 0x7aa86c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA870u;
        goto label_7aa870;
    }
    ctx->pc = 0x7AA868u;
    SET_GPR_U32(ctx, 31, 0x7AA870u);
    ctx->pc = 0x7AA86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA868u;
    // 0x7aa86c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA868u, 0x7AA870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA870u;
label_7aa870:
    // 0x7aa870: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa874:
    // 0x7aa874: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7aa874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
label_7aa878:
    // 0x7aa878: 0x24a54df8  addiu       $a1, $a1, 0x4DF8
    ctx->pc = 0x7aa878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19960));
label_7aa87c:
    // 0x7aa87c: 0xc0528ce  jal         func_14A338
label_7aa880:
    if (ctx->pc == 0x7AA880u) {
        ctx->pc = 0x7AA880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA87Cu;
        // 0x7aa880: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA884u;
        goto label_7aa884;
    }
    ctx->pc = 0x7AA87Cu;
    SET_GPR_U32(ctx, 31, 0x7AA884u);
    ctx->pc = 0x7AA880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA87Cu;
    // 0x7aa880: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA87Cu, 0x7AA884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA884u;
label_7aa884:
    // 0x7aa884: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7aa884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
label_7aa888:
    // 0x7aa888: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa88c:
    // 0x7aa88c: 0x24a54e00  addiu       $a1, $a1, 0x4E00
    ctx->pc = 0x7aa88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19968));
label_7aa890:
    // 0x7aa890: 0xc0528ce  jal         func_14A338
label_7aa894:
    if (ctx->pc == 0x7AA894u) {
        ctx->pc = 0x7AA894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA890u;
        // 0x7aa894: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA898u;
        goto label_7aa898;
    }
    ctx->pc = 0x7AA890u;
    SET_GPR_U32(ctx, 31, 0x7AA898u);
    ctx->pc = 0x7AA894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA890u;
    // 0x7aa894: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x7AA890u, 0x7AA898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA898u;
label_7aa898:
    // 0x7aa898: 0x1000000d  b           . + 4 + (0xD << 2)
label_7aa89c:
    if (ctx->pc == 0x7AA89Cu) {
        ctx->pc = 0x7AA89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA898u;
        // 0x7aa89c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA8A0u;
        goto label_7aa8a0;
    }
    ctx->pc = 0x7AA898u;
    {
        const bool branch_taken_0x7aa898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA898u;
        // 0x7aa89c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa898) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA8A0u;
label_7aa8a0:
    // 0x7aa8a0: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x7aa8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
label_7aa8a4:
    // 0x7aa8a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7aa8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7aa8a8:
    // 0x7aa8a8: 0x10000008  b           . + 4 + (0x8 << 2)
label_7aa8ac:
    if (ctx->pc == 0x7AA8ACu) {
        ctx->pc = 0x7AA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA8A8u;
        // 0x7aa8ac: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA8B0u;
        goto label_7aa8b0;
    }
    ctx->pc = 0x7AA8A8u;
    {
        const bool branch_taken_0x7aa8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA8A8u;
        // 0x7aa8ac: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa8a8) {
            ctx->pc = 0x7AA8CCu;
            goto label_7aa8cc;
        }
    }
    ctx->pc = 0x7AA8B0u;
label_7aa8b0:
    // 0x7aa8b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa8b4:
    // 0x7aa8b4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x7aa8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_7aa8b8:
    // 0x7aa8b8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x7aa8b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7aa8bc:
    // 0x7aa8bc: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x7aa8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_7aa8c0:
    // 0x7aa8c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7aa8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_7aa8c4:
    // 0x7aa8c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_7aa8c8:
    if (ctx->pc == 0x7AA8C8u) {
        ctx->pc = 0x7AA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA8C4u;
        // 0x7aa8c8: 0xac820250  sw          $v0, 0x250($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA8CCu;
        goto label_7aa8cc;
    }
    ctx->pc = 0x7AA8C4u;
    {
        const bool branch_taken_0x7aa8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA8C4u;
        // 0x7aa8c8: 0xac820250  sw          $v0, 0x250($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa8c4) {
            ctx->pc = 0x7AA8D0u;
            goto label_7aa8d0;
        }
    }
    ctx->pc = 0x7AA8CCu;
label_7aa8cc:
    // 0x7aa8cc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x7aa8ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7aa8d0:
    // 0x7aa8d0: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x7aa8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_7aa8d4:
    // 0x7aa8d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x7aa8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_7aa8d8:
    // 0x7aa8d8: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_7aa8dc:
    if (ctx->pc == 0x7AA8DCu) {
        ctx->pc = 0x7AA8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA8D8u;
        // 0x7aa8dc: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA8E0u;
        goto label_7aa8e0;
    }
    ctx->pc = 0x7AA8D8u;
    {
        const bool branch_taken_0x7aa8d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7AA8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA8D8u;
        // 0x7aa8dc: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa8d8) {
            ctx->pc = 0x7AA904u;
            goto label_7aa904;
        }
    }
    ctx->pc = 0x7AA8E0u;
label_7aa8e0:
    // 0x7aa8e0: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_7aa8e4:
    if (ctx->pc == 0x7AA8E4u) {
        ctx->pc = 0x7AA8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA8E0u;
        // 0x7aa8e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA8E8u;
        goto label_7aa8e8;
    }
    ctx->pc = 0x7AA8E0u;
    {
        const bool branch_taken_0x7aa8e0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA8E0u;
        // 0x7aa8e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa8e0) {
            ctx->pc = 0x7AA8F8u;
            goto label_7aa8f8;
        }
    }
    ctx->pc = 0x7AA8E8u;
label_7aa8e8:
    // 0x7aa8e8: 0xc0ae142  jal         func_2B8508
label_7aa8ec:
    if (ctx->pc == 0x7AA8ECu) {
        ctx->pc = 0x7AA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA8E8u;
        // 0x7aa8ec: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA8F0u;
        goto label_7aa8f0;
    }
    ctx->pc = 0x7AA8E8u;
    SET_GPR_U32(ctx, 31, 0x7AA8F0u);
    ctx->pc = 0x7AA8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA8E8u;
    // 0x7aa8ec: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8508u, 0x7AA8E8u, 0x7AA8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA8F0u;
label_7aa8f0:
    // 0x7aa8f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_7aa8f4:
    if (ctx->pc == 0x7AA8F4u) {
        ctx->pc = 0x7AA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA8F0u;
        // 0x7aa8f4: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA8F8u;
        goto label_7aa8f8;
    }
    ctx->pc = 0x7AA8F0u;
    {
        const bool branch_taken_0x7aa8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA8F0u;
        // 0x7aa8f4: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa8f0) {
            ctx->pc = 0x7AA904u;
            goto label_7aa904;
        }
    }
    ctx->pc = 0x7AA8F8u;
label_7aa8f8:
    // 0x7aa8f8: 0xc0ae142  jal         func_2B8508
label_7aa8fc:
    if (ctx->pc == 0x7AA8FCu) {
        ctx->pc = 0x7AA8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA8F8u;
        // 0x7aa8fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA900u;
        goto label_7aa900;
    }
    ctx->pc = 0x7AA8F8u;
    SET_GPR_U32(ctx, 31, 0x7AA900u);
    ctx->pc = 0x7AA8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA8F8u;
    // 0x7aa8fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8508u, 0x7AA8F8u, 0x7AA900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA900u;
label_7aa900:
    // 0x7aa900: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x7aa900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_7aa904:
    // 0x7aa904: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_7aa908:
    if (ctx->pc == 0x7AA908u) {
        ctx->pc = 0x7AA90Cu;
        goto label_7aa90c;
    }
    ctx->pc = 0x7AA904u;
    {
        const bool branch_taken_0x7aa904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7aa904) {
            ctx->pc = 0x7AA924u;
            goto label_7aa924;
        }
    }
    ctx->pc = 0x7AA90Cu;
label_7aa90c:
    // 0x7aa90c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa910:
    // 0x7aa910: 0xc0ae140  jal         func_2B8500
label_7aa914:
    if (ctx->pc == 0x7AA914u) {
        ctx->pc = 0x7AA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA910u;
        // 0x7aa914: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA918u;
        goto label_7aa918;
    }
    ctx->pc = 0x7AA910u;
    SET_GPR_U32(ctx, 31, 0x7AA918u);
    ctx->pc = 0x7AA914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA910u;
    // 0x7aa914: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8500u, 0x7AA910u, 0x7AA918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA918u;
label_7aa918:
    // 0x7aa918: 0x96220024  lhu         $v0, 0x24($s1)
    ctx->pc = 0x7aa918u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
label_7aa91c:
    // 0x7aa91c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x7aa91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_7aa920:
    // 0x7aa920: 0xa6220024  sh          $v0, 0x24($s1)
    ctx->pc = 0x7aa920u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
label_7aa924:
    // 0x7aa924: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_7aa928:
    if (ctx->pc == 0x7AA928u) {
        ctx->pc = 0x7AA928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA924u;
        // 0x7aa928: 0x8fa30048  lw          $v1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA92Cu;
        goto label_7aa92c;
    }
    ctx->pc = 0x7AA924u;
    {
        const bool branch_taken_0x7aa924 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA924u;
        // 0x7aa928: 0x8fa30048  lw          $v1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa924) {
            ctx->pc = 0x7AA93Cu;
            goto label_7aa93c;
        }
    }
    ctx->pc = 0x7AA92Cu;
label_7aa92c:
    // 0x7aa92c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa930:
    // 0x7aa930: 0xc0ae0ee  jal         func_2B83B8
label_7aa934:
    if (ctx->pc == 0x7AA934u) {
        ctx->pc = 0x7AA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA930u;
        // 0x7aa934: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA938u;
        goto label_7aa938;
    }
    ctx->pc = 0x7AA930u;
    SET_GPR_U32(ctx, 31, 0x7AA938u);
    ctx->pc = 0x7AA934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA930u;
    // 0x7aa934: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B83B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B83B8u, 0x7AA930u, 0x7AA938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA938u;
label_7aa938:
    // 0x7aa938: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x7aa938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_7aa93c:
    // 0x7aa93c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7aa93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7aa940:
    // 0x7aa940: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_7aa944:
    if (ctx->pc == 0x7AA944u) {
        ctx->pc = 0x7AA948u;
        goto label_7aa948;
    }
    ctx->pc = 0x7AA940u;
    {
        const bool branch_taken_0x7aa940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x7aa940) {
            ctx->pc = 0x7AA954u;
            goto label_7aa954;
        }
    }
    ctx->pc = 0x7AA948u;
label_7aa948:
    // 0x7aa948: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa94c:
    // 0x7aa94c: 0xc0ae18c  jal         func_2B8630
label_7aa950:
    if (ctx->pc == 0x7AA950u) {
        ctx->pc = 0x7AA950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA94Cu;
        // 0x7aa950: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA954u;
        goto label_7aa954;
    }
    ctx->pc = 0x7AA94Cu;
    SET_GPR_U32(ctx, 31, 0x7AA954u);
    ctx->pc = 0x7AA950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA94Cu;
    // 0x7aa950: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8630u, 0x7AA94Cu, 0x7AA954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA954u;
label_7aa954:
    // 0x7aa954: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
label_7aa958:
    if (ctx->pc == 0x7AA958u) {
        ctx->pc = 0x7AA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA954u;
        // 0x7aa958: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA95Cu;
        goto label_7aa95c;
    }
    ctx->pc = 0x7AA954u;
    {
        const bool branch_taken_0x7aa954 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA954u;
        // 0x7aa958: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa954) {
            ctx->pc = 0x7AA968u;
            goto label_7aa968;
        }
    }
    ctx->pc = 0x7AA95Cu;
label_7aa95c:
    // 0x7aa95c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x7aa95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa960:
    // 0x7aa960: 0xa05702b5  sb          $s7, 0x2B5($v0)
    ctx->pc = 0x7aa960u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 693), (uint8_t)GPR_U32(ctx, 23));
label_7aa964:
    // 0x7aa964: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x7aa964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_7aa968:
    // 0x7aa968: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_7aa96c:
    if (ctx->pc == 0x7AA96Cu) {
        ctx->pc = 0x7AA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA968u;
        // 0x7aa96c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA970u;
        goto label_7aa970;
    }
    ctx->pc = 0x7AA968u;
    {
        const bool branch_taken_0x7aa968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA968u;
        // 0x7aa96c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa968) {
            ctx->pc = 0x7AA9B8u;
            goto label_7aa9b8;
        }
    }
    ctx->pc = 0x7AA970u;
label_7aa970:
    // 0x7aa970: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7aa970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7aa974:
    // 0x7aa974: 0xc052dbe  jal         func_14B6F8
label_7aa978:
    if (ctx->pc == 0x7AA978u) {
        ctx->pc = 0x7AA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA974u;
        // 0x7aa978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA97Cu;
        goto label_7aa97c;
    }
    ctx->pc = 0x7AA974u;
    SET_GPR_U32(ctx, 31, 0x7AA97Cu);
    ctx->pc = 0x7AA978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AA974u;
    // 0x7aa978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x7AA974u, 0x7AA97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AA97Cu;
label_7aa97c:
    // 0x7aa97c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7aa97cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7aa980:
    // 0x7aa980: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_7aa984:
    if (ctx->pc == 0x7AA984u) {
        ctx->pc = 0x7AA984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA980u;
        // 0x7aa984: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA988u;
        goto label_7aa988;
    }
    ctx->pc = 0x7AA980u;
    {
        const bool branch_taken_0x7aa980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AA984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA980u;
        // 0x7aa984: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aa980) {
            ctx->pc = 0x7AA9B8u;
            goto label_7aa9b8;
        }
    }
    ctx->pc = 0x7AA988u;
label_7aa988:
    // 0x7aa988: 0x9062040c  lbu         $v0, 0x40C($v1)
    ctx->pc = 0x7aa988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1036)));
label_7aa98c:
    // 0x7aa98c: 0x0  nop
    ctx->pc = 0x7aa98cu;
    // NOP
label_7aa990:
    // 0x7aa990: 0x2c420040  sltiu       $v0, $v0, 0x40
    ctx->pc = 0x7aa990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_7aa994:
    // 0x7aa994: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_7aa998:
    if (ctx->pc == 0x7AA998u) {
        ctx->pc = 0x7AA998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA994u;
        // 0x7aa998: 0x8c630404  lw          $v1, 0x404($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1028)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA99Cu;
        goto label_7aa99c;
    }
    ctx->pc = 0x7AA994u;
    {
        const bool branch_taken_0x7aa994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7aa994) {
            ctx->pc = 0x7AA998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AA994u;
            // 0x7aa998: 0x8c630404  lw          $v1, 0x404($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AA9ACu;
            goto label_7aa9ac;
        }
    }
    ctx->pc = 0x7AA99Cu;
label_7aa99c:
    // 0x7aa99c: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x7aa99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_7aa9a0:
    // 0x7aa9a0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7aa9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_7aa9a4:
    // 0x7aa9a4: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x7aa9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_7aa9a8:
    // 0x7aa9a8: 0x8c630404  lw          $v1, 0x404($v1)
    ctx->pc = 0x7aa9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1028)));
label_7aa9ac:
    // 0x7aa9ac: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_7aa9b0:
    if (ctx->pc == 0x7AA9B0u) {
        ctx->pc = 0x7AA9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA9ACu;
        // 0x7aa9b0: 0x9062040c  lbu         $v0, 0x40C($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA9B4u;
        goto label_7aa9b4;
    }
    ctx->pc = 0x7AA9ACu;
    {
        const bool branch_taken_0x7aa9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x7aa9ac) {
            ctx->pc = 0x7AA9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AA9ACu;
            // 0x7aa9b0: 0x9062040c  lbu         $v0, 0x40C($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1036)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AA990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7aa990;
        }
    }
    ctx->pc = 0x7AA9B4u;
label_7aa9b4:
    // 0x7aa9b4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x7aa9b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_7aa9b8:
    // 0x7aa9b8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x7aa9b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_7aa9bc:
    // 0x7aa9bc: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x7aa9bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_7aa9c0:
    // 0x7aa9c0: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x7aa9c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_7aa9c4:
    // 0x7aa9c4: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x7aa9c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_7aa9c8:
    // 0x7aa9c8: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x7aa9c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_7aa9cc:
    // 0x7aa9cc: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x7aa9ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_7aa9d0:
    // 0x7aa9d0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x7aa9d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_7aa9d4:
    // 0x7aa9d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x7aa9d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_7aa9d8:
    // 0x7aa9d8: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x7aa9d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7aa9dc:
    // 0x7aa9dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x7aa9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_7aa9e0:
    // 0x7aa9e0: 0x3e00008  jr          $ra
label_7aa9e4:
    if (ctx->pc == 0x7AA9E4u) {
        ctx->pc = 0x7AA9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA9E0u;
        // 0x7aa9e4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7AA9E8u;
        goto label_fallthrough_0x7aa9e0;
    }
    ctx->pc = 0x7AA9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AA9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AA9E0u;
        // 0x7aa9e4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AA9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7aa9e0:
    ctx->pc = 0x7AA9E8u;
}
} // namespace gh_event
