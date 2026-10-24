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

// Function: func_001B8A50
// Address: 0x1b8a50 - 0x1b8f88
void func_001B8A50_0x1b8a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B8A50_0x1b8a50");
#endif

    switch (ctx->pc) {
        case 0x1b8a50u: goto label_1b8a50;
        case 0x1b8a54u: goto label_1b8a54;
        case 0x1b8a58u: goto label_1b8a58;
        case 0x1b8a5cu: goto label_1b8a5c;
        case 0x1b8a60u: goto label_1b8a60;
        case 0x1b8a64u: goto label_1b8a64;
        case 0x1b8a68u: goto label_1b8a68;
        case 0x1b8a6cu: goto label_1b8a6c;
        case 0x1b8a70u: goto label_1b8a70;
        case 0x1b8a74u: goto label_1b8a74;
        case 0x1b8a78u: goto label_1b8a78;
        case 0x1b8a7cu: goto label_1b8a7c;
        case 0x1b8a80u: goto label_1b8a80;
        case 0x1b8a84u: goto label_1b8a84;
        case 0x1b8a88u: goto label_1b8a88;
        case 0x1b8a8cu: goto label_1b8a8c;
        case 0x1b8a90u: goto label_1b8a90;
        case 0x1b8a94u: goto label_1b8a94;
        case 0x1b8a98u: goto label_1b8a98;
        case 0x1b8a9cu: goto label_1b8a9c;
        case 0x1b8aa0u: goto label_1b8aa0;
        case 0x1b8aa4u: goto label_1b8aa4;
        case 0x1b8aa8u: goto label_1b8aa8;
        case 0x1b8aacu: goto label_1b8aac;
        case 0x1b8ab0u: goto label_1b8ab0;
        case 0x1b8ab4u: goto label_1b8ab4;
        case 0x1b8ab8u: goto label_1b8ab8;
        case 0x1b8abcu: goto label_1b8abc;
        case 0x1b8ac0u: goto label_1b8ac0;
        case 0x1b8ac4u: goto label_1b8ac4;
        case 0x1b8ac8u: goto label_1b8ac8;
        case 0x1b8accu: goto label_1b8acc;
        case 0x1b8ad0u: goto label_1b8ad0;
        case 0x1b8ad4u: goto label_1b8ad4;
        case 0x1b8ad8u: goto label_1b8ad8;
        case 0x1b8adcu: goto label_1b8adc;
        case 0x1b8ae0u: goto label_1b8ae0;
        case 0x1b8ae4u: goto label_1b8ae4;
        case 0x1b8ae8u: goto label_1b8ae8;
        case 0x1b8aecu: goto label_1b8aec;
        case 0x1b8af0u: goto label_1b8af0;
        case 0x1b8af4u: goto label_1b8af4;
        case 0x1b8af8u: goto label_1b8af8;
        case 0x1b8afcu: goto label_1b8afc;
        case 0x1b8b00u: goto label_1b8b00;
        case 0x1b8b04u: goto label_1b8b04;
        case 0x1b8b08u: goto label_1b8b08;
        case 0x1b8b0cu: goto label_1b8b0c;
        case 0x1b8b10u: goto label_1b8b10;
        case 0x1b8b14u: goto label_1b8b14;
        case 0x1b8b18u: goto label_1b8b18;
        case 0x1b8b1cu: goto label_1b8b1c;
        case 0x1b8b20u: goto label_1b8b20;
        case 0x1b8b24u: goto label_1b8b24;
        case 0x1b8b28u: goto label_1b8b28;
        case 0x1b8b2cu: goto label_1b8b2c;
        case 0x1b8b30u: goto label_1b8b30;
        case 0x1b8b34u: goto label_1b8b34;
        case 0x1b8b38u: goto label_1b8b38;
        case 0x1b8b3cu: goto label_1b8b3c;
        case 0x1b8b40u: goto label_1b8b40;
        case 0x1b8b44u: goto label_1b8b44;
        case 0x1b8b48u: goto label_1b8b48;
        case 0x1b8b4cu: goto label_1b8b4c;
        case 0x1b8b50u: goto label_1b8b50;
        case 0x1b8b54u: goto label_1b8b54;
        case 0x1b8b58u: goto label_1b8b58;
        case 0x1b8b5cu: goto label_1b8b5c;
        case 0x1b8b60u: goto label_1b8b60;
        case 0x1b8b64u: goto label_1b8b64;
        case 0x1b8b68u: goto label_1b8b68;
        case 0x1b8b6cu: goto label_1b8b6c;
        case 0x1b8b70u: goto label_1b8b70;
        case 0x1b8b74u: goto label_1b8b74;
        case 0x1b8b78u: goto label_1b8b78;
        case 0x1b8b7cu: goto label_1b8b7c;
        case 0x1b8b80u: goto label_1b8b80;
        case 0x1b8b84u: goto label_1b8b84;
        case 0x1b8b88u: goto label_1b8b88;
        case 0x1b8b8cu: goto label_1b8b8c;
        case 0x1b8b90u: goto label_1b8b90;
        case 0x1b8b94u: goto label_1b8b94;
        case 0x1b8b98u: goto label_1b8b98;
        case 0x1b8b9cu: goto label_1b8b9c;
        case 0x1b8ba0u: goto label_1b8ba0;
        case 0x1b8ba4u: goto label_1b8ba4;
        case 0x1b8ba8u: goto label_1b8ba8;
        case 0x1b8bacu: goto label_1b8bac;
        case 0x1b8bb0u: goto label_1b8bb0;
        case 0x1b8bb4u: goto label_1b8bb4;
        case 0x1b8bb8u: goto label_1b8bb8;
        case 0x1b8bbcu: goto label_1b8bbc;
        case 0x1b8bc0u: goto label_1b8bc0;
        case 0x1b8bc4u: goto label_1b8bc4;
        case 0x1b8bc8u: goto label_1b8bc8;
        case 0x1b8bccu: goto label_1b8bcc;
        case 0x1b8bd0u: goto label_1b8bd0;
        case 0x1b8bd4u: goto label_1b8bd4;
        case 0x1b8bd8u: goto label_1b8bd8;
        case 0x1b8bdcu: goto label_1b8bdc;
        case 0x1b8be0u: goto label_1b8be0;
        case 0x1b8be4u: goto label_1b8be4;
        case 0x1b8be8u: goto label_1b8be8;
        case 0x1b8becu: goto label_1b8bec;
        case 0x1b8bf0u: goto label_1b8bf0;
        case 0x1b8bf4u: goto label_1b8bf4;
        case 0x1b8bf8u: goto label_1b8bf8;
        case 0x1b8bfcu: goto label_1b8bfc;
        case 0x1b8c00u: goto label_1b8c00;
        case 0x1b8c04u: goto label_1b8c04;
        case 0x1b8c08u: goto label_1b8c08;
        case 0x1b8c0cu: goto label_1b8c0c;
        case 0x1b8c10u: goto label_1b8c10;
        case 0x1b8c14u: goto label_1b8c14;
        case 0x1b8c18u: goto label_1b8c18;
        case 0x1b8c1cu: goto label_1b8c1c;
        case 0x1b8c20u: goto label_1b8c20;
        case 0x1b8c24u: goto label_1b8c24;
        case 0x1b8c28u: goto label_1b8c28;
        case 0x1b8c2cu: goto label_1b8c2c;
        case 0x1b8c30u: goto label_1b8c30;
        case 0x1b8c34u: goto label_1b8c34;
        case 0x1b8c38u: goto label_1b8c38;
        case 0x1b8c3cu: goto label_1b8c3c;
        case 0x1b8c40u: goto label_1b8c40;
        case 0x1b8c44u: goto label_1b8c44;
        case 0x1b8c48u: goto label_1b8c48;
        case 0x1b8c4cu: goto label_1b8c4c;
        case 0x1b8c50u: goto label_1b8c50;
        case 0x1b8c54u: goto label_1b8c54;
        case 0x1b8c58u: goto label_1b8c58;
        case 0x1b8c5cu: goto label_1b8c5c;
        case 0x1b8c60u: goto label_1b8c60;
        case 0x1b8c64u: goto label_1b8c64;
        case 0x1b8c68u: goto label_1b8c68;
        case 0x1b8c6cu: goto label_1b8c6c;
        case 0x1b8c70u: goto label_1b8c70;
        case 0x1b8c74u: goto label_1b8c74;
        case 0x1b8c78u: goto label_1b8c78;
        case 0x1b8c7cu: goto label_1b8c7c;
        case 0x1b8c80u: goto label_1b8c80;
        case 0x1b8c84u: goto label_1b8c84;
        case 0x1b8c88u: goto label_1b8c88;
        case 0x1b8c8cu: goto label_1b8c8c;
        case 0x1b8c90u: goto label_1b8c90;
        case 0x1b8c94u: goto label_1b8c94;
        case 0x1b8c98u: goto label_1b8c98;
        case 0x1b8c9cu: goto label_1b8c9c;
        case 0x1b8ca0u: goto label_1b8ca0;
        case 0x1b8ca4u: goto label_1b8ca4;
        case 0x1b8ca8u: goto label_1b8ca8;
        case 0x1b8cacu: goto label_1b8cac;
        case 0x1b8cb0u: goto label_1b8cb0;
        case 0x1b8cb4u: goto label_1b8cb4;
        case 0x1b8cb8u: goto label_1b8cb8;
        case 0x1b8cbcu: goto label_1b8cbc;
        case 0x1b8cc0u: goto label_1b8cc0;
        case 0x1b8cc4u: goto label_1b8cc4;
        case 0x1b8cc8u: goto label_1b8cc8;
        case 0x1b8cccu: goto label_1b8ccc;
        case 0x1b8cd0u: goto label_1b8cd0;
        case 0x1b8cd4u: goto label_1b8cd4;
        case 0x1b8cd8u: goto label_1b8cd8;
        case 0x1b8cdcu: goto label_1b8cdc;
        case 0x1b8ce0u: goto label_1b8ce0;
        case 0x1b8ce4u: goto label_1b8ce4;
        case 0x1b8ce8u: goto label_1b8ce8;
        case 0x1b8cecu: goto label_1b8cec;
        case 0x1b8cf0u: goto label_1b8cf0;
        case 0x1b8cf4u: goto label_1b8cf4;
        case 0x1b8cf8u: goto label_1b8cf8;
        case 0x1b8cfcu: goto label_1b8cfc;
        case 0x1b8d00u: goto label_1b8d00;
        case 0x1b8d04u: goto label_1b8d04;
        case 0x1b8d08u: goto label_1b8d08;
        case 0x1b8d0cu: goto label_1b8d0c;
        case 0x1b8d10u: goto label_1b8d10;
        case 0x1b8d14u: goto label_1b8d14;
        case 0x1b8d18u: goto label_1b8d18;
        case 0x1b8d1cu: goto label_1b8d1c;
        case 0x1b8d20u: goto label_1b8d20;
        case 0x1b8d24u: goto label_1b8d24;
        case 0x1b8d28u: goto label_1b8d28;
        case 0x1b8d2cu: goto label_1b8d2c;
        case 0x1b8d30u: goto label_1b8d30;
        case 0x1b8d34u: goto label_1b8d34;
        case 0x1b8d38u: goto label_1b8d38;
        case 0x1b8d3cu: goto label_1b8d3c;
        case 0x1b8d40u: goto label_1b8d40;
        case 0x1b8d44u: goto label_1b8d44;
        case 0x1b8d48u: goto label_1b8d48;
        case 0x1b8d4cu: goto label_1b8d4c;
        case 0x1b8d50u: goto label_1b8d50;
        case 0x1b8d54u: goto label_1b8d54;
        case 0x1b8d58u: goto label_1b8d58;
        case 0x1b8d5cu: goto label_1b8d5c;
        case 0x1b8d60u: goto label_1b8d60;
        case 0x1b8d64u: goto label_1b8d64;
        case 0x1b8d68u: goto label_1b8d68;
        case 0x1b8d6cu: goto label_1b8d6c;
        case 0x1b8d70u: goto label_1b8d70;
        case 0x1b8d74u: goto label_1b8d74;
        case 0x1b8d78u: goto label_1b8d78;
        case 0x1b8d7cu: goto label_1b8d7c;
        case 0x1b8d80u: goto label_1b8d80;
        case 0x1b8d84u: goto label_1b8d84;
        case 0x1b8d88u: goto label_1b8d88;
        case 0x1b8d8cu: goto label_1b8d8c;
        case 0x1b8d90u: goto label_1b8d90;
        case 0x1b8d94u: goto label_1b8d94;
        case 0x1b8d98u: goto label_1b8d98;
        case 0x1b8d9cu: goto label_1b8d9c;
        case 0x1b8da0u: goto label_1b8da0;
        case 0x1b8da4u: goto label_1b8da4;
        case 0x1b8da8u: goto label_1b8da8;
        case 0x1b8dacu: goto label_1b8dac;
        case 0x1b8db0u: goto label_1b8db0;
        case 0x1b8db4u: goto label_1b8db4;
        case 0x1b8db8u: goto label_1b8db8;
        case 0x1b8dbcu: goto label_1b8dbc;
        case 0x1b8dc0u: goto label_1b8dc0;
        case 0x1b8dc4u: goto label_1b8dc4;
        case 0x1b8dc8u: goto label_1b8dc8;
        case 0x1b8dccu: goto label_1b8dcc;
        case 0x1b8dd0u: goto label_1b8dd0;
        case 0x1b8dd4u: goto label_1b8dd4;
        case 0x1b8dd8u: goto label_1b8dd8;
        case 0x1b8ddcu: goto label_1b8ddc;
        case 0x1b8de0u: goto label_1b8de0;
        case 0x1b8de4u: goto label_1b8de4;
        case 0x1b8de8u: goto label_1b8de8;
        case 0x1b8decu: goto label_1b8dec;
        case 0x1b8df0u: goto label_1b8df0;
        case 0x1b8df4u: goto label_1b8df4;
        case 0x1b8df8u: goto label_1b8df8;
        case 0x1b8dfcu: goto label_1b8dfc;
        case 0x1b8e00u: goto label_1b8e00;
        case 0x1b8e04u: goto label_1b8e04;
        case 0x1b8e08u: goto label_1b8e08;
        case 0x1b8e0cu: goto label_1b8e0c;
        case 0x1b8e10u: goto label_1b8e10;
        case 0x1b8e14u: goto label_1b8e14;
        case 0x1b8e18u: goto label_1b8e18;
        case 0x1b8e1cu: goto label_1b8e1c;
        case 0x1b8e20u: goto label_1b8e20;
        case 0x1b8e24u: goto label_1b8e24;
        case 0x1b8e28u: goto label_1b8e28;
        case 0x1b8e2cu: goto label_1b8e2c;
        case 0x1b8e30u: goto label_1b8e30;
        case 0x1b8e34u: goto label_1b8e34;
        case 0x1b8e38u: goto label_1b8e38;
        case 0x1b8e3cu: goto label_1b8e3c;
        case 0x1b8e40u: goto label_1b8e40;
        case 0x1b8e44u: goto label_1b8e44;
        case 0x1b8e48u: goto label_1b8e48;
        case 0x1b8e4cu: goto label_1b8e4c;
        case 0x1b8e50u: goto label_1b8e50;
        case 0x1b8e54u: goto label_1b8e54;
        case 0x1b8e58u: goto label_1b8e58;
        case 0x1b8e5cu: goto label_1b8e5c;
        case 0x1b8e60u: goto label_1b8e60;
        case 0x1b8e64u: goto label_1b8e64;
        case 0x1b8e68u: goto label_1b8e68;
        case 0x1b8e6cu: goto label_1b8e6c;
        case 0x1b8e70u: goto label_1b8e70;
        case 0x1b8e74u: goto label_1b8e74;
        case 0x1b8e78u: goto label_1b8e78;
        case 0x1b8e7cu: goto label_1b8e7c;
        case 0x1b8e80u: goto label_1b8e80;
        case 0x1b8e84u: goto label_1b8e84;
        case 0x1b8e88u: goto label_1b8e88;
        case 0x1b8e8cu: goto label_1b8e8c;
        case 0x1b8e90u: goto label_1b8e90;
        case 0x1b8e94u: goto label_1b8e94;
        case 0x1b8e98u: goto label_1b8e98;
        case 0x1b8e9cu: goto label_1b8e9c;
        case 0x1b8ea0u: goto label_1b8ea0;
        case 0x1b8ea4u: goto label_1b8ea4;
        case 0x1b8ea8u: goto label_1b8ea8;
        case 0x1b8eacu: goto label_1b8eac;
        case 0x1b8eb0u: goto label_1b8eb0;
        case 0x1b8eb4u: goto label_1b8eb4;
        case 0x1b8eb8u: goto label_1b8eb8;
        case 0x1b8ebcu: goto label_1b8ebc;
        case 0x1b8ec0u: goto label_1b8ec0;
        case 0x1b8ec4u: goto label_1b8ec4;
        case 0x1b8ec8u: goto label_1b8ec8;
        case 0x1b8eccu: goto label_1b8ecc;
        case 0x1b8ed0u: goto label_1b8ed0;
        case 0x1b8ed4u: goto label_1b8ed4;
        case 0x1b8ed8u: goto label_1b8ed8;
        case 0x1b8edcu: goto label_1b8edc;
        case 0x1b8ee0u: goto label_1b8ee0;
        case 0x1b8ee4u: goto label_1b8ee4;
        case 0x1b8ee8u: goto label_1b8ee8;
        case 0x1b8eecu: goto label_1b8eec;
        case 0x1b8ef0u: goto label_1b8ef0;
        case 0x1b8ef4u: goto label_1b8ef4;
        case 0x1b8ef8u: goto label_1b8ef8;
        case 0x1b8efcu: goto label_1b8efc;
        case 0x1b8f00u: goto label_1b8f00;
        case 0x1b8f04u: goto label_1b8f04;
        case 0x1b8f08u: goto label_1b8f08;
        case 0x1b8f0cu: goto label_1b8f0c;
        case 0x1b8f10u: goto label_1b8f10;
        case 0x1b8f14u: goto label_1b8f14;
        case 0x1b8f18u: goto label_1b8f18;
        case 0x1b8f1cu: goto label_1b8f1c;
        case 0x1b8f20u: goto label_1b8f20;
        case 0x1b8f24u: goto label_1b8f24;
        case 0x1b8f28u: goto label_1b8f28;
        case 0x1b8f2cu: goto label_1b8f2c;
        case 0x1b8f30u: goto label_1b8f30;
        case 0x1b8f34u: goto label_1b8f34;
        case 0x1b8f38u: goto label_1b8f38;
        case 0x1b8f3cu: goto label_1b8f3c;
        case 0x1b8f40u: goto label_1b8f40;
        case 0x1b8f44u: goto label_1b8f44;
        case 0x1b8f48u: goto label_1b8f48;
        case 0x1b8f4cu: goto label_1b8f4c;
        case 0x1b8f50u: goto label_1b8f50;
        case 0x1b8f54u: goto label_1b8f54;
        case 0x1b8f58u: goto label_1b8f58;
        case 0x1b8f5cu: goto label_1b8f5c;
        case 0x1b8f60u: goto label_1b8f60;
        case 0x1b8f64u: goto label_1b8f64;
        case 0x1b8f68u: goto label_1b8f68;
        case 0x1b8f6cu: goto label_1b8f6c;
        case 0x1b8f70u: goto label_1b8f70;
        case 0x1b8f74u: goto label_1b8f74;
        case 0x1b8f78u: goto label_1b8f78;
        case 0x1b8f7cu: goto label_1b8f7c;
        case 0x1b8f80u: goto label_1b8f80;
        case 0x1b8f84u: goto label_1b8f84;
        default: break;
    }

    ctx->pc = 0x1b8a50u;

label_1b8a50:
    // 0x1b8a50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1b8a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1b8a54:
    // 0x1b8a54: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1b8a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1b8a58:
    // 0x1b8a58: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1b8a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1b8a5c:
    // 0x1b8a5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b8a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b8a60:
    // 0x1b8a60: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1b8a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1b8a64:
    // 0x1b8a64: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1b8a64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8a68:
    // 0x1b8a68: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1b8a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1b8a6c:
    // 0x1b8a6c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1b8a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1b8a70:
    // 0x1b8a70: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b8a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1b8a74:
    // 0x1b8a74: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1b8a74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1b8a78:
    // 0x1b8a78: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1b8a78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1b8a7c:
    // 0x1b8a7c: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x1b8a7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_1b8a80:
    // 0x1b8a80: 0x10740029  beq         $v1, $s4, . + 4 + (0x29 << 2)
label_1b8a84:
    if (ctx->pc == 0x1B8A84u) {
        ctx->pc = 0x1B8A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A80u;
        // 0x1b8a84: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A88u;
        goto label_1b8a88;
    }
    ctx->pc = 0x1B8A80u;
    {
        const bool branch_taken_0x1b8a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1B8A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A80u;
        // 0x1b8a84: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a80) {
            ctx->pc = 0x1B8B28u;
            goto label_1b8b28;
        }
    }
    ctx->pc = 0x1B8A88u;
label_1b8a88:
    // 0x1b8a88: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b8a8c:
    if (ctx->pc == 0x1B8A8Cu) {
        ctx->pc = 0x1B8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A88u;
        // 0x1b8a8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A90u;
        goto label_1b8a90;
    }
    ctx->pc = 0x1B8A88u;
    {
        const bool branch_taken_0x1b8a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8a88) {
            ctx->pc = 0x1B8A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8A88u;
            // 0x1b8a8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8AA0u;
            goto label_1b8aa0;
        }
    }
    ctx->pc = 0x1B8A90u;
label_1b8a90:
    // 0x1b8a90: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1b8a94:
    if (ctx->pc == 0x1B8A94u) {
        ctx->pc = 0x1B8A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A90u;
        // 0x1b8a94: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A98u;
        goto label_1b8a98;
    }
    ctx->pc = 0x1B8A90u;
    {
        const bool branch_taken_0x1b8a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A90u;
        // 0x1b8a94: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a90) {
            ctx->pc = 0x1B8AB8u;
            goto label_1b8ab8;
        }
    }
    ctx->pc = 0x1B8A98u;
label_1b8a98:
    // 0x1b8a98: 0x10000133  b           . + 4 + (0x133 << 2)
label_1b8a9c:
    if (ctx->pc == 0x1B8A9Cu) {
        ctx->pc = 0x1B8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A98u;
        // 0x1b8a9c: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8AA0u;
        goto label_1b8aa0;
    }
    ctx->pc = 0x1B8A98u;
    {
        const bool branch_taken_0x1b8a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A98u;
        // 0x1b8a9c: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a98) {
            ctx->pc = 0x1B8F68u;
            goto label_1b8f68;
        }
    }
    ctx->pc = 0x1B8AA0u;
label_1b8aa0:
    // 0x1b8aa0: 0x10620072  beq         $v1, $v0, . + 4 + (0x72 << 2)
label_1b8aa4:
    if (ctx->pc == 0x1B8AA4u) {
        ctx->pc = 0x1B8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AA0u;
        // 0x1b8aa4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8AA8u;
        goto label_1b8aa8;
    }
    ctx->pc = 0x1B8AA0u;
    {
        const bool branch_taken_0x1b8aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AA0u;
        // 0x1b8aa4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8aa0) {
            ctx->pc = 0x1B8C6Cu;
            goto label_1b8c6c;
        }
    }
    ctx->pc = 0x1B8AA8u;
label_1b8aa8:
    // 0x1b8aa8: 0x10620120  beq         $v1, $v0, . + 4 + (0x120 << 2)
label_1b8aac:
    if (ctx->pc == 0x1B8AACu) {
        ctx->pc = 0x1B8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AA8u;
        // 0x1b8aac: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8AB0u;
        goto label_1b8ab0;
    }
    ctx->pc = 0x1B8AA8u;
    {
        const bool branch_taken_0x1b8aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AA8u;
        // 0x1b8aac: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8aa8) {
            ctx->pc = 0x1B8F2Cu;
            goto label_1b8f2c;
        }
    }
    ctx->pc = 0x1B8AB0u;
label_1b8ab0:
    // 0x1b8ab0: 0x1000012d  b           . + 4 + (0x12D << 2)
label_1b8ab4:
    if (ctx->pc == 0x1B8AB4u) {
        ctx->pc = 0x1B8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AB0u;
        // 0x1b8ab4: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8AB8u;
        goto label_1b8ab8;
    }
    ctx->pc = 0x1B8AB0u;
    {
        const bool branch_taken_0x1b8ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AB0u;
        // 0x1b8ab4: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ab0) {
            ctx->pc = 0x1B8F68u;
            goto label_1b8f68;
        }
    }
    ctx->pc = 0x1B8AB8u;
label_1b8ab8:
    // 0x1b8ab8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1b8ab8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1b8abc:
    // 0x1b8abc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8ac0:
    // 0x1b8ac0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1b8ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1b8ac4:
    // 0x1b8ac4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b8ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b8ac8:
    // 0x1b8ac8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b8ac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8acc:
    // 0x1b8acc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b8accu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8ad0:
    // 0x1b8ad0: 0xc0c194a  jal         func_306528
label_1b8ad4:
    if (ctx->pc == 0x1B8AD4u) {
        ctx->pc = 0x1B8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AD0u;
        // 0x1b8ad4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8AD8u;
        goto label_1b8ad8;
    }
    ctx->pc = 0x1B8AD0u;
    SET_GPR_U32(ctx, 31, 0x1B8AD8u);
    ctx->pc = 0x1B8AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8AD0u;
    // 0x1b8ad4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1B8AD0u, 0x1B8AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8AD8u;
label_1b8ad8:
    // 0x1b8ad8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b8ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1b8adc:
    // 0x1b8adc: 0x26230600  addiu       $v1, $s1, 0x600
    ctx->pc = 0x1b8adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
label_1b8ae0:
    // 0x1b8ae0: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_1b8ae4:
    if (ctx->pc == 0x1B8AE4u) {
        ctx->pc = 0x1B8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AE0u;
        // 0x1b8ae4: 0x92220630  lbu         $v0, 0x630($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8AE8u;
        goto label_1b8ae8;
    }
    ctx->pc = 0x1B8AE0u;
    {
        const bool branch_taken_0x1b8ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b8ae0) {
            ctx->pc = 0x1B8AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8AE0u;
            // 0x1b8ae4: 0x92220630  lbu         $v0, 0x630($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8B04u;
            goto label_1b8b04;
        }
    }
    ctx->pc = 0x1B8AE8u;
label_1b8ae8:
    // 0x1b8ae8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b8ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8aec:
    // 0x1b8aec: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x1b8aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
label_1b8af0:
    // 0x1b8af0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b8af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8af4:
    // 0x1b8af4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1b8af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1b8af8:
    // 0x1b8af8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b8af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8afc:
    // 0x1b8afc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1b8afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1b8b00:
    // 0x1b8b00: 0x92220630  lbu         $v0, 0x630($s1)
    ctx->pc = 0x1b8b00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1584)));
label_1b8b04:
    // 0x1b8b04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b8b08:
    if (ctx->pc == 0x1B8B08u) {
        ctx->pc = 0x1B8B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B04u;
        // 0x1b8b08: 0x240200b4  addiu       $v0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B0Cu;
        goto label_1b8b0c;
    }
    ctx->pc = 0x1B8B04u;
    {
        const bool branch_taken_0x1b8b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B04u;
        // 0x1b8b08: 0x240200b4  addiu       $v0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b04) {
            ctx->pc = 0x1B8B14u;
            goto label_1b8b14;
        }
    }
    ctx->pc = 0x1B8B0Cu;
label_1b8b0c:
    // 0x1b8b0c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1b8b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1b8b10:
    // 0x1b8b10: 0xa2340630  sb          $s4, 0x630($s1)
    ctx->pc = 0x1b8b10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1584), (uint8_t)GPR_U32(ctx, 20));
label_1b8b14:
    // 0x1b8b14: 0xa6220628  sh          $v0, 0x628($s1)
    ctx->pc = 0x1b8b14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 2));
label_1b8b18:
    // 0x1b8b18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8b1c:
    // 0x1b8b1c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1b8b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1b8b20:
    // 0x1b8b20: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x1b8b20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_1b8b24:
    // 0x1b8b24: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1b8b24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1b8b28:
    // 0x1b8b28: 0x86220628  lh          $v0, 0x628($s1)
    ctx->pc = 0x1b8b28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1576)));
label_1b8b2c:
    // 0x1b8b2c: 0x1c40004d  bgtz        $v0, . + 4 + (0x4D << 2)
label_1b8b30:
    if (ctx->pc == 0x1B8B30u) {
        ctx->pc = 0x1B8B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B2Cu;
        // 0x1b8b30: 0x96230628  lhu         $v1, 0x628($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B34u;
        goto label_1b8b34;
    }
    ctx->pc = 0x1B8B2Cu;
    {
        const bool branch_taken_0x1b8b2c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1B8B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B2Cu;
        // 0x1b8b30: 0x96230628  lhu         $v1, 0x628($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b2c) {
            ctx->pc = 0x1B8C64u;
            goto label_1b8c64;
        }
    }
    ctx->pc = 0x1B8B34u;
label_1b8b34:
    // 0x1b8b34: 0x9e2205b8  lwu         $v0, 0x5B8($s1)
    ctx->pc = 0x1b8b34u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1464)));
label_1b8b38:
    // 0x1b8b38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b8b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b8b3c:
    // 0x1b8b3c: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
label_1b8b40:
    if (ctx->pc == 0x1B8B40u) {
        ctx->pc = 0x1B8B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B3Cu;
        // 0x1b8b40: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B44u;
        goto label_1b8b44;
    }
    ctx->pc = 0x1B8B3Cu;
    {
        const bool branch_taken_0x1b8b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B3Cu;
        // 0x1b8b40: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b3c) {
            ctx->pc = 0x1B8F60u;
            goto label_1b8f60;
        }
    }
    ctx->pc = 0x1B8B44u;
label_1b8b44:
    // 0x1b8b44: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1b8b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1b8b48:
    // 0x1b8b48: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b8b48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b8b4c:
    // 0x1b8b4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b8b4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8b50:
    // 0x1b8b50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b8b50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8b54:
    // 0x1b8b54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b8b54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8b58:
    // 0x1b8b58: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b8b58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8b5c:
    // 0x1b8b5c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b8b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1b8b60:
    // 0x1b8b60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b8b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b8b64:
    // 0x1b8b64: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b8b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1b8b68:
    // 0x1b8b68: 0xc0b2e92  jal         func_2CBA48
label_1b8b6c:
    if (ctx->pc == 0x1B8B6Cu) {
        ctx->pc = 0x1B8B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B68u;
        // 0x1b8b6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B70u;
        goto label_1b8b70;
    }
    ctx->pc = 0x1B8B68u;
    SET_GPR_U32(ctx, 31, 0x1B8B70u);
    ctx->pc = 0x1B8B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8B68u;
    // 0x1b8b6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B8B68u, 0x1B8B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8B70u;
label_1b8b70:
    // 0x1b8b70: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1b8b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1b8b74:
    // 0x1b8b74: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1b8b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b8b78:
    // 0x1b8b78: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1b8b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1b8b7c:
    // 0x1b8b7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8b80:
    // 0x1b8b80: 0xae22062c  sw          $v0, 0x62C($s1)
    ctx->pc = 0x1b8b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1580), GPR_U32(ctx, 2));
label_1b8b84:
    // 0x1b8b84: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1b8b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1b8b88:
    // 0x1b8b88: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b8b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1b8b8c:
    // 0x1b8b8c: 0xc0b6dac  jal         func_2DB6B0
label_1b8b90:
    if (ctx->pc == 0x1B8B90u) {
        ctx->pc = 0x1B8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B8Cu;
        // 0x1b8b90: 0xe615000c  swc1        $f21, 0xC($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B94u;
        goto label_1b8b94;
    }
    ctx->pc = 0x1B8B8Cu;
    SET_GPR_U32(ctx, 31, 0x1B8B94u);
    ctx->pc = 0x1B8B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8B8Cu;
    // 0x1b8b90: 0xe615000c  swc1        $f21, 0xC($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1B8B8Cu, 0x1B8B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8B94u;
label_1b8b94:
    // 0x1b8b94: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x1b8b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b8b98:
    // 0x1b8b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8b9c:
    // 0x1b8b9c: 0xc054222  jal         func_150888
label_1b8ba0:
    if (ctx->pc == 0x1B8BA0u) {
        ctx->pc = 0x1B8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B9Cu;
        // 0x1b8ba0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8BA4u;
        goto label_1b8ba4;
    }
    ctx->pc = 0x1B8B9Cu;
    SET_GPR_U32(ctx, 31, 0x1B8BA4u);
    ctx->pc = 0x1B8BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8B9Cu;
    // 0x1b8ba0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150888u, 0x1B8B9Cu, 0x1B8BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8BA4u;
label_1b8ba4:
    // 0x1b8ba4: 0xc0b6dac  jal         func_2DB6B0
label_1b8ba8:
    if (ctx->pc == 0x1B8BA8u) {
        ctx->pc = 0x1B8BACu;
        goto label_1b8bac;
    }
    ctx->pc = 0x1B8BA4u;
    SET_GPR_U32(ctx, 31, 0x1B8BACu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1B8BA4u, 0x1B8BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8BACu;
label_1b8bac:
    // 0x1b8bac: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1b8bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1b8bb0:
    // 0x1b8bb0: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b8bb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b8bb4:
    // 0x1b8bb4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1b8bb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1b8bb8:
    // 0x1b8bb8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b8bb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1b8bbc:
    // 0x1b8bbc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b8bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b8bc0:
    // 0x1b8bc0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1b8bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_1b8bc4:
    // 0x1b8bc4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b8bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b8bc8:
    // 0x1b8bc8: 0xc0c7408  jal         func_31D020
label_1b8bcc:
    if (ctx->pc == 0x1B8BCCu) {
        ctx->pc = 0x1B8BD0u;
        goto label_1b8bd0;
    }
    ctx->pc = 0x1B8BC8u;
    SET_GPR_U32(ctx, 31, 0x1B8BD0u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1B8BC8u, 0x1B8BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8BD0u;
label_1b8bd0:
    // 0x1b8bd0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1b8bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8bd4:
    // 0x1b8bd4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b8bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1b8bd8:
    // 0x1b8bd8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b8bd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b8bdc:
    // 0x1b8bdc: 0xc0c7408  jal         func_31D020
label_1b8be0:
    if (ctx->pc == 0x1B8BE0u) {
        ctx->pc = 0x1B8BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8BDCu;
        // 0x1b8be0: 0xe7a10030  swc1        $f1, 0x30($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8BE4u;
        goto label_1b8be4;
    }
    ctx->pc = 0x1B8BDCu;
    SET_GPR_U32(ctx, 31, 0x1B8BE4u);
    ctx->pc = 0x1B8BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8BDCu;
    // 0x1b8be0: 0xe7a10030  swc1        $f1, 0x30($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1B8BDCu, 0x1B8BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8BE4u;
label_1b8be4:
    // 0x1b8be4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b8be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1b8be8:
    // 0x1b8be8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1b8be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8bec:
    // 0x1b8bec: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x1b8becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1b8bf0:
    // 0x1b8bf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b8bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8bf4:
    // 0x1b8bf4: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x1b8bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b8bf8:
    // 0x1b8bf8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b8bf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b8bfc:
    // 0x1b8bfc: 0xc0b69ea  jal         func_2DA7A8
label_1b8c00:
    if (ctx->pc == 0x1B8C00u) {
        ctx->pc = 0x1B8C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8BFCu;
        // 0x1b8c00: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C04u;
        goto label_1b8c04;
    }
    ctx->pc = 0x1B8BFCu;
    SET_GPR_U32(ctx, 31, 0x1B8C04u);
    ctx->pc = 0x1B8C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8BFCu;
    // 0x1b8c00: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA7A8u, 0x1B8BFCu, 0x1B8C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8C04u;
label_1b8c04:
    // 0x1b8c04: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x1b8c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8c08:
    // 0x1b8c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b8c0c:
    // 0x1b8c0c: 0x8e2600f0  lw          $a2, 0xF0($s1)
    ctx->pc = 0x1b8c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1b8c10:
    // 0x1b8c10: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b8c10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8c14:
    // 0x1b8c14: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b8c14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b8c18:
    // 0x1b8c18: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x1b8c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
label_1b8c1c:
    // 0x1b8c1c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b8c1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1b8c20:
    // 0x1b8c20: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b8c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b8c24:
    // 0x1b8c24: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1b8c24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1b8c28:
    // 0x1b8c28: 0x26250610  addiu       $a1, $s1, 0x610
    ctx->pc = 0x1b8c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
label_1b8c2c:
    // 0x1b8c2c: 0xc06df12  jal         func_1B7C48
label_1b8c30:
    if (ctx->pc == 0x1B8C30u) {
        ctx->pc = 0x1B8C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C2Cu;
        // 0x1b8c30: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C34u;
        goto label_1b8c34;
    }
    ctx->pc = 0x1B8C2Cu;
    SET_GPR_U32(ctx, 31, 0x1B8C34u);
    ctx->pc = 0x1B8C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8C2Cu;
    // 0x1b8c30: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C48u, 0x1B8C2Cu, 0x1B8C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8C34u;
label_1b8c34:
    // 0x1b8c34: 0x8e240624  lw          $a0, 0x624($s1)
    ctx->pc = 0x1b8c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
label_1b8c38:
    // 0x1b8c38: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1b8c3c:
    if (ctx->pc == 0x1B8C3Cu) {
        ctx->pc = 0x1B8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C38u;
        // 0x1b8c3c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C40u;
        goto label_1b8c40;
    }
    ctx->pc = 0x1B8C38u;
    {
        const bool branch_taken_0x1b8c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C38u;
        // 0x1b8c3c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c38) {
            ctx->pc = 0x1B8C4Cu;
            goto label_1b8c4c;
        }
    }
    ctx->pc = 0x1B8C40u;
label_1b8c40:
    // 0x1b8c40: 0xc07f59a  jal         func_1FD668
label_1b8c44:
    if (ctx->pc == 0x1B8C44u) {
        ctx->pc = 0x1B8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C40u;
        // 0x1b8c44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C48u;
        goto label_1b8c48;
    }
    ctx->pc = 0x1B8C40u;
    SET_GPR_U32(ctx, 31, 0x1B8C48u);
    ctx->pc = 0x1B8C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8C40u;
    // 0x1b8c44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B8C40u, 0x1B8C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8C48u;
label_1b8c48:
    // 0x1b8c48: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1b8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1b8c4c:
    // 0x1b8c4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b8c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b8c50:
    // 0x1b8c50: 0xa6220628  sh          $v0, 0x628($s1)
    ctx->pc = 0x1b8c50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 2));
label_1b8c54:
    // 0x1b8c54: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x1b8c54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_1b8c58:
    // 0x1b8c58: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1b8c58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1b8c5c:
    // 0x1b8c5c: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_1b8c60:
    if (ctx->pc == 0x1B8C60u) {
        ctx->pc = 0x1B8C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C5Cu;
        // 0x1b8c60: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C64u;
        goto label_1b8c64;
    }
    ctx->pc = 0x1B8C5Cu;
    {
        const bool branch_taken_0x1b8c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C5Cu;
        // 0x1b8c60: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c5c) {
            ctx->pc = 0x1B8F60u;
            goto label_1b8f60;
        }
    }
    ctx->pc = 0x1B8C64u;
label_1b8c64:
    // 0x1b8c64: 0x100000bd  b           . + 4 + (0xBD << 2)
label_1b8c68:
    if (ctx->pc == 0x1B8C68u) {
        ctx->pc = 0x1B8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C64u;
        // 0x1b8c68: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C6Cu;
        goto label_1b8c6c;
    }
    ctx->pc = 0x1B8C64u;
    {
        const bool branch_taken_0x1b8c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C64u;
        // 0x1b8c68: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c64) {
            ctx->pc = 0x1B8F5Cu;
            goto label_1b8f5c;
        }
    }
    ctx->pc = 0x1B8C6Cu;
label_1b8c6c:
    // 0x1b8c6c: 0x8e250624  lw          $a1, 0x624($s1)
    ctx->pc = 0x1b8c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
label_1b8c70:
    // 0x1b8c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b8c74:
    // 0x1b8c74: 0xc06dce0  jal         func_1B7380
label_1b8c78:
    if (ctx->pc == 0x1B8C78u) {
        ctx->pc = 0x1B8C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C74u;
        // 0x1b8c78: 0x26330610  addiu       $s3, $s1, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C7Cu;
        goto label_1b8c7c;
    }
    ctx->pc = 0x1B8C74u;
    SET_GPR_U32(ctx, 31, 0x1B8C7Cu);
    ctx->pc = 0x1B8C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8C74u;
    // 0x1b8c78: 0x26330610  addiu       $s3, $s1, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x1B8C74u, 0x1B8C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8C7Cu;
label_1b8c7c:
    // 0x1b8c7c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1b8c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b8c80:
    // 0x1b8c80: 0x1454001e  bne         $v0, $s4, . + 4 + (0x1E << 2)
label_1b8c84:
    if (ctx->pc == 0x1B8C84u) {
        ctx->pc = 0x1B8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C80u;
        // 0x1b8c84: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8C88u;
        goto label_1b8c88;
    }
    ctx->pc = 0x1B8C80u;
    {
        const bool branch_taken_0x1b8c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1B8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C80u;
        // 0x1b8c84: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c80) {
            ctx->pc = 0x1B8CFCu;
            goto label_1b8cfc;
        }
    }
    ctx->pc = 0x1B8C88u;
label_1b8c88:
    // 0x1b8c88: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1b8c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_1b8c8c:
    // 0x1b8c8c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b8c8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1b8c90:
    // 0x1b8c90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8c94:
    // 0x1b8c94: 0x262205c0  addiu       $v0, $s1, 0x5C0
    ctx->pc = 0x1b8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
label_1b8c98:
    // 0x1b8c98: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b8c98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b8c9c:
    // 0x1b8c9c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b8c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b8ca0:
    // 0x1b8ca0: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b8ca0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b8ca4:
    // 0x1b8ca4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1b8ca4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1b8ca8:
    // 0x1b8ca8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b8ca8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1b8cac:
    // 0x1b8cac: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b8cacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1b8cb0:
    // 0x1b8cb0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b8cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b8cb4:
    // 0x1b8cb4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1b8cb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1b8cb8:
    // 0x1b8cb8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b8cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b8cbc:
    // 0x1b8cbc: 0x12720006  beq         $s3, $s2, . + 4 + (0x6 << 2)
label_1b8cc0:
    if (ctx->pc == 0x1B8CC0u) {
        ctx->pc = 0x1B8CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8CBCu;
        // 0x1b8cc0: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8CC4u;
        goto label_1b8cc4;
    }
    ctx->pc = 0x1B8CBCu;
    {
        const bool branch_taken_0x1b8cbc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        ctx->pc = 0x1B8CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8CBCu;
        // 0x1b8cc0: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8cbc) {
            ctx->pc = 0x1B8CD8u;
            goto label_1b8cd8;
        }
    }
    ctx->pc = 0x1B8CC4u;
label_1b8cc4:
    // 0x1b8cc4: 0xe6200610  swc1        $f0, 0x610($s1)
    ctx->pc = 0x1b8cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1552), bits); }
label_1b8cc8:
    // 0x1b8cc8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1b8cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8ccc:
    // 0x1b8ccc: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x1b8cccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1b8cd0:
    // 0x1b8cd0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1b8cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8cd4:
    // 0x1b8cd4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1b8cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1b8cd8:
    // 0x1b8cd8: 0xc6200614  lwc1        $f0, 0x614($s1)
    ctx->pc = 0x1b8cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8cdc:
    // 0x1b8cdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8ce0:
    // 0x1b8ce0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b8ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1b8ce4:
    // 0x1b8ce4: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1b8ce4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
label_1b8ce8:
    // 0x1b8ce8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b8ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8cec:
    // 0x1b8cec: 0x8e240624  lw          $a0, 0x624($s1)
    ctx->pc = 0x1b8cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
label_1b8cf0:
    // 0x1b8cf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b8cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b8cf4:
    // 0x1b8cf4: 0xc07f59a  jal         func_1FD668
label_1b8cf8:
    if (ctx->pc == 0x1B8CF8u) {
        ctx->pc = 0x1B8CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8CF4u;
        // 0x1b8cf8: 0xe6200614  swc1        $f0, 0x614($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8CFCu;
        goto label_1b8cfc;
    }
    ctx->pc = 0x1B8CF4u;
    SET_GPR_U32(ctx, 31, 0x1B8CFCu);
    ctx->pc = 0x1B8CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8CF4u;
    // 0x1b8cf8: 0xe6200614  swc1        $f0, 0x614($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B8CF4u, 0x1B8CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8CFCu;
label_1b8cfc:
    // 0x1b8cfc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1b8cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1b8d00:
    // 0x1b8d00: 0xc0a4bd4  jal         func_292F50
label_1b8d04:
    if (ctx->pc == 0x1B8D04u) {
        ctx->pc = 0x1B8D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D00u;
        // 0x1b8d04: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8D08u;
        goto label_1b8d08;
    }
    ctx->pc = 0x1B8D00u;
    SET_GPR_U32(ctx, 31, 0x1B8D08u);
    ctx->pc = 0x1B8D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8D00u;
    // 0x1b8d04: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B8D00u, 0x1B8D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8D08u;
label_1b8d08:
    // 0x1b8d08: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1b8d08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1b8d0c:
    // 0x1b8d0c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b8d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b8d10:
    // 0x1b8d10: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b8d10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b8d14:
    // 0x1b8d14: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1b8d14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1b8d18:
    // 0x1b8d18: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b8d18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1b8d1c:
    // 0x1b8d1c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b8d1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1b8d20:
    // 0x1b8d20: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b8d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b8d24:
    // 0x1b8d24: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1b8d24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1b8d28:
    // 0x1b8d28: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b8d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b8d2c:
    // 0x1b8d2c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b8d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1b8d30:
    // 0x1b8d30: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b8d30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b8d34:
    // 0x1b8d34: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x1b8d34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1b8d38:
    // 0x1b8d38: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b8d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1b8d3c:
    // 0x1b8d3c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b8d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b8d40:
    // 0x1b8d40: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x1b8d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
label_1b8d44:
    // 0x1b8d44: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b8d44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1b8d48:
    // 0x1b8d48: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b8d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b8d4c:
    // 0x1b8d4c: 0xc6210614  lwc1        $f1, 0x614($s1)
    ctx->pc = 0x1b8d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8d50:
    // 0x1b8d50: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b8d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b8d54:
    // 0x1b8d54: 0x86220628  lh          $v0, 0x628($s1)
    ctx->pc = 0x1b8d54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1576)));
label_1b8d58:
    // 0x1b8d58: 0x96230628  lhu         $v1, 0x628($s1)
    ctx->pc = 0x1b8d58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1576)));
label_1b8d5c:
    // 0x1b8d5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b8d5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b8d60:
    // 0x1b8d60: 0x1c400070  bgtz        $v0, . + 4 + (0x70 << 2)
label_1b8d64:
    if (ctx->pc == 0x1B8D64u) {
        ctx->pc = 0x1B8D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D60u;
        // 0x1b8d64: 0xe6210614  swc1        $f1, 0x614($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8D68u;
        goto label_1b8d68;
    }
    ctx->pc = 0x1B8D60u;
    {
        const bool branch_taken_0x1b8d60 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1B8D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D60u;
        // 0x1b8d64: 0xe6210614  swc1        $f1, 0x614($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d60) {
            ctx->pc = 0x1B8F24u;
            goto label_1b8f24;
        }
    }
    ctx->pc = 0x1B8D68u;
label_1b8d68:
    // 0x1b8d68: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1b8d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_1b8d6c:
    // 0x1b8d6c: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x1b8d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1b8d70:
    // 0x1b8d70: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b8d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8d74:
    // 0x1b8d74: 0x26240490  addiu       $a0, $s1, 0x490
    ctx->pc = 0x1b8d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_1b8d78:
    // 0x1b8d78: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x1b8d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
label_1b8d7c:
    // 0x1b8d7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b8d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b8d80:
    // 0x1b8d80: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b8d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d84:
    // 0x1b8d84: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b8d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1b8d88:
    // 0x1b8d88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b8d88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d8c:
    // 0x1b8d8c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1b8d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1b8d90:
    // 0x1b8d90: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1b8d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b8d94:
    // 0x1b8d94: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b8d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1b8d98:
    // 0x1b8d98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b8d98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d9c:
    // 0x1b8d9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b8d9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8da0:
    // 0x1b8da0: 0xc04c784  jal         func_131E10
label_1b8da4:
    if (ctx->pc == 0x1B8DA4u) {
        ctx->pc = 0x1B8DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DA0u;
        // 0x1b8da4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8DA8u;
        goto label_1b8da8;
    }
    ctx->pc = 0x1B8DA0u;
    SET_GPR_U32(ctx, 31, 0x1B8DA8u);
    ctx->pc = 0x1B8DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8DA0u;
    // 0x1b8da4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1B8DA0u, 0x1B8DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8DA8u;
label_1b8da8:
    // 0x1b8da8: 0xc0b6dac  jal         func_2DB6B0
label_1b8dac:
    if (ctx->pc == 0x1B8DACu) {
        ctx->pc = 0x1B8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DA8u;
        // 0x1b8dac: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8DB0u;
        goto label_1b8db0;
    }
    ctx->pc = 0x1B8DA8u;
    SET_GPR_U32(ctx, 31, 0x1B8DB0u);
    ctx->pc = 0x1B8DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8DA8u;
    // 0x1b8dac: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1B8DA8u, 0x1B8DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8DB0u;
label_1b8db0:
    // 0x1b8db0: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1b8db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1b8db4:
    // 0x1b8db4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1b8db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1b8db8:
    // 0x1b8db8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b8db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b8dbc:
    // 0x1b8dbc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1b8dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8dc0:
    // 0x1b8dc0: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x1b8dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1b8dc4:
    // 0x1b8dc4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b8dc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b8dc8:
    // 0x1b8dc8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1b8dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8dcc:
    // 0x1b8dcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b8dccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8dd0:
    // 0x1b8dd0: 0x0  nop
    ctx->pc = 0x1b8dd0u;
    // NOP
label_1b8dd4:
    // 0x1b8dd4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1b8dd8:
    if (ctx->pc == 0x1B8DD8u) {
        ctx->pc = 0x1B8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DD4u;
        // 0x1b8dd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8DDCu;
        goto label_1b8ddc;
    }
    ctx->pc = 0x1B8DD4u;
    {
        const bool branch_taken_0x1b8dd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DD4u;
        // 0x1b8dd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8dd4) {
            ctx->pc = 0x1B8E00u;
            goto label_1b8e00;
        }
    }
    ctx->pc = 0x1B8DDCu;
label_1b8ddc:
    // 0x1b8ddc: 0x12440008  beq         $s2, $a0, . + 4 + (0x8 << 2)
label_1b8de0:
    if (ctx->pc == 0x1B8DE0u) {
        ctx->pc = 0x1B8DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DDCu;
        // 0x1b8de0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8DE4u;
        goto label_1b8de4;
    }
    ctx->pc = 0x1B8DDCu;
    {
        const bool branch_taken_0x1b8ddc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B8DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DDCu;
        // 0x1b8de0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ddc) {
            ctx->pc = 0x1B8E00u;
            goto label_1b8e00;
        }
    }
    ctx->pc = 0x1B8DE4u;
label_1b8de4:
    // 0x1b8de4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1b8de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8de8:
    // 0x1b8de8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1b8de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1b8dec:
    // 0x1b8dec: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1b8decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8df0:
    // 0x1b8df0: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1b8df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1b8df4:
    // 0x1b8df4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1b8df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8df8:
    // 0x1b8df8: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1b8df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1b8dfc:
    // 0x1b8dfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8e00:
    // 0x1b8e00: 0x16020058  bne         $s0, $v0, . + 4 + (0x58 << 2)
label_1b8e04:
    if (ctx->pc == 0x1B8E04u) {
        ctx->pc = 0x1B8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E00u;
        // 0x1b8e04: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E08u;
        goto label_1b8e08;
    }
    ctx->pc = 0x1B8E00u;
    {
        const bool branch_taken_0x1b8e00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E00u;
        // 0x1b8e04: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e00) {
            ctx->pc = 0x1B8F64u;
            goto label_1b8f64;
        }
    }
    ctx->pc = 0x1B8E08u;
label_1b8e08:
    // 0x1b8e08: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b8e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1b8e0c:
    // 0x1b8e0c: 0x8e25062c  lw          $a1, 0x62C($s1)
    ctx->pc = 0x1b8e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1580)));
label_1b8e10:
    // 0x1b8e10: 0x2450ee00  addiu       $s0, $v0, -0x1200
    ctx->pc = 0x1b8e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_1b8e14:
    // 0x1b8e14: 0xc0b2ee8  jal         func_2CBBA0
label_1b8e18:
    if (ctx->pc == 0x1B8E18u) {
        ctx->pc = 0x1B8E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E14u;
        // 0x1b8e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E1Cu;
        goto label_1b8e1c;
    }
    ctx->pc = 0x1B8E14u;
    SET_GPR_U32(ctx, 31, 0x1B8E1Cu);
    ctx->pc = 0x1B8E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8E14u;
    // 0x1b8e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1B8E14u, 0x1B8E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E1Cu;
label_1b8e1c:
    // 0x1b8e1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b8e20:
    // 0x1b8e20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8e24:
    // 0x1b8e24: 0xc0c1880  jal         func_306200
label_1b8e28:
    if (ctx->pc == 0x1B8E28u) {
        ctx->pc = 0x1B8E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E24u;
        // 0x1b8e28: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E2Cu;
        goto label_1b8e2c;
    }
    ctx->pc = 0x1B8E24u;
    SET_GPR_U32(ctx, 31, 0x1B8E2Cu);
    ctx->pc = 0x1B8E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8E24u;
    // 0x1b8e28: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1B8E24u, 0x1B8E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E2Cu;
label_1b8e2c:
    // 0x1b8e2c: 0x8e240620  lw          $a0, 0x620($s1)
    ctx->pc = 0x1b8e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
label_1b8e30:
    // 0x1b8e30: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_1b8e34:
    if (ctx->pc == 0x1B8E34u) {
        ctx->pc = 0x1B8E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E30u;
        // 0x1b8e34: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E38u;
        goto label_1b8e38;
    }
    ctx->pc = 0x1B8E30u;
    {
        const bool branch_taken_0x1b8e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8e30) {
            ctx->pc = 0x1B8E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8E30u;
            // 0x1b8e34: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8E50u;
            goto label_1b8e50;
        }
    }
    ctx->pc = 0x1B8E38u;
label_1b8e38:
    // 0x1b8e38: 0xc07f622  jal         func_1FD888
label_1b8e3c:
    if (ctx->pc == 0x1B8E3Cu) {
        ctx->pc = 0x1B8E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E38u;
        // 0x1b8e3c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E40u;
        goto label_1b8e40;
    }
    ctx->pc = 0x1B8E38u;
    SET_GPR_U32(ctx, 31, 0x1B8E40u);
    ctx->pc = 0x1B8E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8E38u;
    // 0x1b8e3c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x1B8E38u, 0x1B8E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E40u;
label_1b8e40:
    // 0x1b8e40: 0x8e240620  lw          $a0, 0x620($s1)
    ctx->pc = 0x1b8e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
label_1b8e44:
    // 0x1b8e44: 0xc07f59a  jal         func_1FD668
label_1b8e48:
    if (ctx->pc == 0x1B8E48u) {
        ctx->pc = 0x1B8E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E44u;
        // 0x1b8e48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E4Cu;
        goto label_1b8e4c;
    }
    ctx->pc = 0x1B8E44u;
    SET_GPR_U32(ctx, 31, 0x1B8E4Cu);
    ctx->pc = 0x1B8E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8E44u;
    // 0x1b8e48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B8E44u, 0x1B8E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E4Cu;
label_1b8e4c:
    // 0x1b8e4c: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1b8e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1b8e50:
    // 0x1b8e50: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1b8e50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1b8e54:
    // 0x1b8e54: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1b8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1b8e58:
    // 0x1b8e58: 0x40f809  jalr        $v0
label_1b8e5c:
    if (ctx->pc == 0x1B8E5Cu) {
        ctx->pc = 0x1B8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E58u;
        // 0x1b8e5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E60u;
        goto label_1b8e60;
    }
    ctx->pc = 0x1B8E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B8E60u);
        ctx->pc = 0x1B8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E58u;
        // 0x1b8e5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8E58u, 0x1B8E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8E60u;
label_1b8e60:
    // 0x1b8e60: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b8e60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8e64:
    // 0x1b8e64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8e68:
    // 0x1b8e68: 0x2406005b  addiu       $a2, $zero, 0x5B
    ctx->pc = 0x1b8e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_1b8e6c:
    // 0x1b8e6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b8e6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8e70:
    // 0x1b8e70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b8e70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8e74:
    // 0x1b8e74: 0xc0b2e5a  jal         func_2CB968
label_1b8e78:
    if (ctx->pc == 0x1B8E78u) {
        ctx->pc = 0x1B8E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E74u;
        // 0x1b8e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E7Cu;
        goto label_1b8e7c;
    }
    ctx->pc = 0x1B8E74u;
    SET_GPR_U32(ctx, 31, 0x1B8E7Cu);
    ctx->pc = 0x1B8E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8E74u;
    // 0x1b8e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1B8E74u, 0x1B8E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E7Cu;
label_1b8e7c:
    // 0x1b8e7c: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1b8e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1b8e80:
    // 0x1b8e80: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1b8e80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1b8e84:
    // 0x1b8e84: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1b8e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1b8e88:
    // 0x1b8e88: 0x40f809  jalr        $v0
label_1b8e8c:
    if (ctx->pc == 0x1B8E8Cu) {
        ctx->pc = 0x1B8E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E88u;
        // 0x1b8e8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E90u;
        goto label_1b8e90;
    }
    ctx->pc = 0x1B8E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B8E90u);
        ctx->pc = 0x1B8E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E88u;
        // 0x1b8e8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8E88u, 0x1B8E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8E90u;
label_1b8e90:
    // 0x1b8e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8e94:
    // 0x1b8e94: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b8e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8e98:
    // 0x1b8e98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b8e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b8e9c:
    // 0x1b8e9c: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x1b8e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1b8ea0:
    // 0x1b8ea0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b8ea0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8ea4:
    // 0x1b8ea4: 0xc0b2e5a  jal         func_2CB968
label_1b8ea8:
    if (ctx->pc == 0x1B8EA8u) {
        ctx->pc = 0x1B8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EA4u;
        // 0x1b8ea8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EACu;
        goto label_1b8eac;
    }
    ctx->pc = 0x1B8EA4u;
    SET_GPR_U32(ctx, 31, 0x1B8EACu);
    ctx->pc = 0x1B8EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8EA4u;
    // 0x1b8ea8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1B8EA4u, 0x1B8EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8EACu;
label_1b8eac:
    // 0x1b8eac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b8eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b8eb0:
    // 0x1b8eb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b8eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b8eb4:
    // 0x1b8eb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8eb8:
    // 0x1b8eb8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1b8eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b8ebc:
    // 0x1b8ebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8ec0:
    // 0x1b8ec0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1b8ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b8ec4:
    // 0x1b8ec4: 0xc0c1a0e  jal         func_306838
label_1b8ec8:
    if (ctx->pc == 0x1B8EC8u) {
        ctx->pc = 0x1B8EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EC4u;
        // 0x1b8ec8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8ECCu;
        goto label_1b8ecc;
    }
    ctx->pc = 0x1B8EC4u;
    SET_GPR_U32(ctx, 31, 0x1B8ECCu);
    ctx->pc = 0x1B8EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8EC4u;
    // 0x1b8ec8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1B8EC4u, 0x1B8ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8ECCu;
label_1b8ecc:
    // 0x1b8ecc: 0x8e240624  lw          $a0, 0x624($s1)
    ctx->pc = 0x1b8eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
label_1b8ed0:
    // 0x1b8ed0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1b8ed4:
    if (ctx->pc == 0x1B8ED4u) {
        ctx->pc = 0x1B8ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8ED0u;
        // 0x1b8ed4: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8ED8u;
        goto label_1b8ed8;
    }
    ctx->pc = 0x1B8ED0u;
    {
        const bool branch_taken_0x1b8ed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ed0) {
            ctx->pc = 0x1B8ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8ED0u;
            // 0x1b8ed4: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8EE4u;
            goto label_1b8ee4;
        }
    }
    ctx->pc = 0x1B8ED8u;
label_1b8ed8:
    // 0x1b8ed8: 0xc07f59a  jal         func_1FD668
label_1b8edc:
    if (ctx->pc == 0x1B8EDCu) {
        ctx->pc = 0x1B8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8ED8u;
        // 0x1b8edc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EE0u;
        goto label_1b8ee0;
    }
    ctx->pc = 0x1B8ED8u;
    SET_GPR_U32(ctx, 31, 0x1B8EE0u);
    ctx->pc = 0x1B8EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8ED8u;
    // 0x1b8edc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B8ED8u, 0x1B8EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8EE0u;
label_1b8ee0:
    // 0x1b8ee0: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1b8ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1b8ee4:
    // 0x1b8ee4: 0x26220600  addiu       $v0, $s1, 0x600
    ctx->pc = 0x1b8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
label_1b8ee8:
    // 0x1b8ee8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_1b8eec:
    if (ctx->pc == 0x1B8EECu) {
        ctx->pc = 0x1B8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EE8u;
        // 0x1b8eec: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EF0u;
        goto label_1b8ef0;
    }
    ctx->pc = 0x1B8EE8u;
    {
        const bool branch_taken_0x1b8ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b8ee8) {
            ctx->pc = 0x1B8EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8EE8u;
            // 0x1b8eec: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8F0Cu;
            goto label_1b8f0c;
        }
    }
    ctx->pc = 0x1B8EF0u;
label_1b8ef0:
    // 0x1b8ef0: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x1b8ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8ef4:
    // 0x1b8ef4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b8ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b8ef8:
    // 0x1b8ef8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b8ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8efc:
    // 0x1b8efc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1b8efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1b8f00:
    // 0x1b8f00: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b8f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8f04:
    // 0x1b8f04: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1b8f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1b8f08:
    // 0x1b8f08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b8f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b8f0c:
    // 0x1b8f0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b8f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b8f10:
    // 0x1b8f10: 0xa6220628  sh          $v0, 0x628($s1)
    ctx->pc = 0x1b8f10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 2));
label_1b8f14:
    // 0x1b8f14: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x1b8f14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_1b8f18:
    // 0x1b8f18: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1b8f18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1b8f1c:
    // 0x1b8f1c: 0x10000010  b           . + 4 + (0x10 << 2)
label_1b8f20:
    if (ctx->pc == 0x1B8F20u) {
        ctx->pc = 0x1B8F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F1Cu;
        // 0x1b8f20: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F24u;
        goto label_1b8f24;
    }
    ctx->pc = 0x1B8F1Cu;
    {
        const bool branch_taken_0x1b8f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F1Cu;
        // 0x1b8f20: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f1c) {
            ctx->pc = 0x1B8F60u;
            goto label_1b8f60;
        }
    }
    ctx->pc = 0x1B8F24u;
label_1b8f24:
    // 0x1b8f24: 0x1000000d  b           . + 4 + (0xD << 2)
label_1b8f28:
    if (ctx->pc == 0x1B8F28u) {
        ctx->pc = 0x1B8F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F24u;
        // 0x1b8f28: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F2Cu;
        goto label_1b8f2c;
    }
    ctx->pc = 0x1B8F24u;
    {
        const bool branch_taken_0x1b8f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F24u;
        // 0x1b8f28: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f24) {
            ctx->pc = 0x1B8F5Cu;
            goto label_1b8f5c;
        }
    }
    ctx->pc = 0x1B8F2Cu;
label_1b8f2c:
    // 0x1b8f2c: 0x86220628  lh          $v0, 0x628($s1)
    ctx->pc = 0x1b8f2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1576)));
label_1b8f30:
    // 0x1b8f30: 0x5c400009  bgtzl       $v0, . + 4 + (0x9 << 2)
label_1b8f34:
    if (ctx->pc == 0x1B8F34u) {
        ctx->pc = 0x1B8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F30u;
        // 0x1b8f34: 0x96220628  lhu         $v0, 0x628($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F38u;
        goto label_1b8f38;
    }
    ctx->pc = 0x1B8F30u;
    {
        const bool branch_taken_0x1b8f30 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x1b8f30) {
            ctx->pc = 0x1B8F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8F30u;
            // 0x1b8f34: 0x96220628  lhu         $v0, 0x628($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1576)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8F58u;
            goto label_1b8f58;
        }
    }
    ctx->pc = 0x1B8F38u;
label_1b8f38:
    // 0x1b8f38: 0x8e240620  lw          $a0, 0x620($s1)
    ctx->pc = 0x1b8f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
label_1b8f3c:
    // 0x1b8f3c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1b8f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_1b8f40:
    // 0x1b8f40: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1b8f40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1b8f44:
    // 0x1b8f44: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1b8f48:
    if (ctx->pc == 0x1B8F48u) {
        ctx->pc = 0x1B8F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F44u;
        // 0x1b8f48: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F4Cu;
        goto label_1b8f4c;
    }
    ctx->pc = 0x1B8F44u;
    {
        const bool branch_taken_0x1b8f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F44u;
        // 0x1b8f48: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f44) {
            ctx->pc = 0x1B8F54u;
            goto label_1b8f54;
        }
    }
    ctx->pc = 0x1B8F4Cu;
label_1b8f4c:
    // 0x1b8f4c: 0xc07f59a  jal         func_1FD668
label_1b8f50:
    if (ctx->pc == 0x1B8F50u) {
        ctx->pc = 0x1B8F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F4Cu;
        // 0x1b8f50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F54u;
        goto label_1b8f54;
    }
    ctx->pc = 0x1B8F4Cu;
    SET_GPR_U32(ctx, 31, 0x1B8F54u);
    ctx->pc = 0x1B8F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8F4Cu;
    // 0x1b8f50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B8F4Cu, 0x1B8F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8F54u;
label_1b8f54:
    // 0x1b8f54: 0x96220628  lhu         $v0, 0x628($s1)
    ctx->pc = 0x1b8f54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1576)));
label_1b8f58:
    // 0x1b8f58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b8f5c:
    // 0x1b8f5c: 0xa6220628  sh          $v0, 0x628($s1)
    ctx->pc = 0x1b8f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1576), (uint16_t)GPR_U32(ctx, 2));
label_1b8f60:
    // 0x1b8f60: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1b8f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1b8f64:
    // 0x1b8f64: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1b8f64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b8f68:
    // 0x1b8f68: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1b8f68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b8f6c:
    // 0x1b8f6c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1b8f6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b8f70:
    // 0x1b8f70: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1b8f70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b8f74:
    // 0x1b8f74: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b8f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b8f78:
    // 0x1b8f78: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1b8f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b8f7c:
    // 0x1b8f7c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1b8f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b8f80:
    // 0x1b8f80: 0x3e00008  jr          $ra
label_1b8f84:
    if (ctx->pc == 0x1B8F84u) {
        ctx->pc = 0x1B8F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F80u;
        // 0x1b8f84: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F88u;
        goto label_fallthrough_0x1b8f80;
    }
    ctx->pc = 0x1B8F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F80u;
        // 0x1b8f84: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b8f80:
    ctx->pc = 0x1B8F88u;
}
