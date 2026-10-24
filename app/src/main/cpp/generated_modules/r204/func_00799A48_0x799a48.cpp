#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r204_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r204
{
// Function: func_00799A48
// Address: 0x799a48 - 0x79a080
void func_00799A48_0x799a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799A48_0x799a48");
#endif

    switch (ctx->pc) {
        case 0x799a48u: goto label_799a48;
        case 0x799a4cu: goto label_799a4c;
        case 0x799a50u: goto label_799a50;
        case 0x799a54u: goto label_799a54;
        case 0x799a58u: goto label_799a58;
        case 0x799a5cu: goto label_799a5c;
        case 0x799a60u: goto label_799a60;
        case 0x799a64u: goto label_799a64;
        case 0x799a68u: goto label_799a68;
        case 0x799a6cu: goto label_799a6c;
        case 0x799a70u: goto label_799a70;
        case 0x799a74u: goto label_799a74;
        case 0x799a78u: goto label_799a78;
        case 0x799a7cu: goto label_799a7c;
        case 0x799a80u: goto label_799a80;
        case 0x799a84u: goto label_799a84;
        case 0x799a88u: goto label_799a88;
        case 0x799a8cu: goto label_799a8c;
        case 0x799a90u: goto label_799a90;
        case 0x799a94u: goto label_799a94;
        case 0x799a98u: goto label_799a98;
        case 0x799a9cu: goto label_799a9c;
        case 0x799aa0u: goto label_799aa0;
        case 0x799aa4u: goto label_799aa4;
        case 0x799aa8u: goto label_799aa8;
        case 0x799aacu: goto label_799aac;
        case 0x799ab0u: goto label_799ab0;
        case 0x799ab4u: goto label_799ab4;
        case 0x799ab8u: goto label_799ab8;
        case 0x799abcu: goto label_799abc;
        case 0x799ac0u: goto label_799ac0;
        case 0x799ac4u: goto label_799ac4;
        case 0x799ac8u: goto label_799ac8;
        case 0x799accu: goto label_799acc;
        case 0x799ad0u: goto label_799ad0;
        case 0x799ad4u: goto label_799ad4;
        case 0x799ad8u: goto label_799ad8;
        case 0x799adcu: goto label_799adc;
        case 0x799ae0u: goto label_799ae0;
        case 0x799ae4u: goto label_799ae4;
        case 0x799ae8u: goto label_799ae8;
        case 0x799aecu: goto label_799aec;
        case 0x799af0u: goto label_799af0;
        case 0x799af4u: goto label_799af4;
        case 0x799af8u: goto label_799af8;
        case 0x799afcu: goto label_799afc;
        case 0x799b00u: goto label_799b00;
        case 0x799b04u: goto label_799b04;
        case 0x799b08u: goto label_799b08;
        case 0x799b0cu: goto label_799b0c;
        case 0x799b10u: goto label_799b10;
        case 0x799b14u: goto label_799b14;
        case 0x799b18u: goto label_799b18;
        case 0x799b1cu: goto label_799b1c;
        case 0x799b20u: goto label_799b20;
        case 0x799b24u: goto label_799b24;
        case 0x799b28u: goto label_799b28;
        case 0x799b2cu: goto label_799b2c;
        case 0x799b30u: goto label_799b30;
        case 0x799b34u: goto label_799b34;
        case 0x799b38u: goto label_799b38;
        case 0x799b3cu: goto label_799b3c;
        case 0x799b40u: goto label_799b40;
        case 0x799b44u: goto label_799b44;
        case 0x799b48u: goto label_799b48;
        case 0x799b4cu: goto label_799b4c;
        case 0x799b50u: goto label_799b50;
        case 0x799b54u: goto label_799b54;
        case 0x799b58u: goto label_799b58;
        case 0x799b5cu: goto label_799b5c;
        case 0x799b60u: goto label_799b60;
        case 0x799b64u: goto label_799b64;
        case 0x799b68u: goto label_799b68;
        case 0x799b6cu: goto label_799b6c;
        case 0x799b70u: goto label_799b70;
        case 0x799b74u: goto label_799b74;
        case 0x799b78u: goto label_799b78;
        case 0x799b7cu: goto label_799b7c;
        case 0x799b80u: goto label_799b80;
        case 0x799b84u: goto label_799b84;
        case 0x799b88u: goto label_799b88;
        case 0x799b8cu: goto label_799b8c;
        case 0x799b90u: goto label_799b90;
        case 0x799b94u: goto label_799b94;
        case 0x799b98u: goto label_799b98;
        case 0x799b9cu: goto label_799b9c;
        case 0x799ba0u: goto label_799ba0;
        case 0x799ba4u: goto label_799ba4;
        case 0x799ba8u: goto label_799ba8;
        case 0x799bacu: goto label_799bac;
        case 0x799bb0u: goto label_799bb0;
        case 0x799bb4u: goto label_799bb4;
        case 0x799bb8u: goto label_799bb8;
        case 0x799bbcu: goto label_799bbc;
        case 0x799bc0u: goto label_799bc0;
        case 0x799bc4u: goto label_799bc4;
        case 0x799bc8u: goto label_799bc8;
        case 0x799bccu: goto label_799bcc;
        case 0x799bd0u: goto label_799bd0;
        case 0x799bd4u: goto label_799bd4;
        case 0x799bd8u: goto label_799bd8;
        case 0x799bdcu: goto label_799bdc;
        case 0x799be0u: goto label_799be0;
        case 0x799be4u: goto label_799be4;
        case 0x799be8u: goto label_799be8;
        case 0x799becu: goto label_799bec;
        case 0x799bf0u: goto label_799bf0;
        case 0x799bf4u: goto label_799bf4;
        case 0x799bf8u: goto label_799bf8;
        case 0x799bfcu: goto label_799bfc;
        case 0x799c00u: goto label_799c00;
        case 0x799c04u: goto label_799c04;
        case 0x799c08u: goto label_799c08;
        case 0x799c0cu: goto label_799c0c;
        case 0x799c10u: goto label_799c10;
        case 0x799c14u: goto label_799c14;
        case 0x799c18u: goto label_799c18;
        case 0x799c1cu: goto label_799c1c;
        case 0x799c20u: goto label_799c20;
        case 0x799c24u: goto label_799c24;
        case 0x799c28u: goto label_799c28;
        case 0x799c2cu: goto label_799c2c;
        case 0x799c30u: goto label_799c30;
        case 0x799c34u: goto label_799c34;
        case 0x799c38u: goto label_799c38;
        case 0x799c3cu: goto label_799c3c;
        case 0x799c40u: goto label_799c40;
        case 0x799c44u: goto label_799c44;
        case 0x799c48u: goto label_799c48;
        case 0x799c4cu: goto label_799c4c;
        case 0x799c50u: goto label_799c50;
        case 0x799c54u: goto label_799c54;
        case 0x799c58u: goto label_799c58;
        case 0x799c5cu: goto label_799c5c;
        case 0x799c60u: goto label_799c60;
        case 0x799c64u: goto label_799c64;
        case 0x799c68u: goto label_799c68;
        case 0x799c6cu: goto label_799c6c;
        case 0x799c70u: goto label_799c70;
        case 0x799c74u: goto label_799c74;
        case 0x799c78u: goto label_799c78;
        case 0x799c7cu: goto label_799c7c;
        case 0x799c80u: goto label_799c80;
        case 0x799c84u: goto label_799c84;
        case 0x799c88u: goto label_799c88;
        case 0x799c8cu: goto label_799c8c;
        case 0x799c90u: goto label_799c90;
        case 0x799c94u: goto label_799c94;
        case 0x799c98u: goto label_799c98;
        case 0x799c9cu: goto label_799c9c;
        case 0x799ca0u: goto label_799ca0;
        case 0x799ca4u: goto label_799ca4;
        case 0x799ca8u: goto label_799ca8;
        case 0x799cacu: goto label_799cac;
        case 0x799cb0u: goto label_799cb0;
        case 0x799cb4u: goto label_799cb4;
        case 0x799cb8u: goto label_799cb8;
        case 0x799cbcu: goto label_799cbc;
        case 0x799cc0u: goto label_799cc0;
        case 0x799cc4u: goto label_799cc4;
        case 0x799cc8u: goto label_799cc8;
        case 0x799cccu: goto label_799ccc;
        case 0x799cd0u: goto label_799cd0;
        case 0x799cd4u: goto label_799cd4;
        case 0x799cd8u: goto label_799cd8;
        case 0x799cdcu: goto label_799cdc;
        case 0x799ce0u: goto label_799ce0;
        case 0x799ce4u: goto label_799ce4;
        case 0x799ce8u: goto label_799ce8;
        case 0x799cecu: goto label_799cec;
        case 0x799cf0u: goto label_799cf0;
        case 0x799cf4u: goto label_799cf4;
        case 0x799cf8u: goto label_799cf8;
        case 0x799cfcu: goto label_799cfc;
        case 0x799d00u: goto label_799d00;
        case 0x799d04u: goto label_799d04;
        case 0x799d08u: goto label_799d08;
        case 0x799d0cu: goto label_799d0c;
        case 0x799d10u: goto label_799d10;
        case 0x799d14u: goto label_799d14;
        case 0x799d18u: goto label_799d18;
        case 0x799d1cu: goto label_799d1c;
        case 0x799d20u: goto label_799d20;
        case 0x799d24u: goto label_799d24;
        case 0x799d28u: goto label_799d28;
        case 0x799d2cu: goto label_799d2c;
        case 0x799d30u: goto label_799d30;
        case 0x799d34u: goto label_799d34;
        case 0x799d38u: goto label_799d38;
        case 0x799d3cu: goto label_799d3c;
        case 0x799d40u: goto label_799d40;
        case 0x799d44u: goto label_799d44;
        case 0x799d48u: goto label_799d48;
        case 0x799d4cu: goto label_799d4c;
        case 0x799d50u: goto label_799d50;
        case 0x799d54u: goto label_799d54;
        case 0x799d58u: goto label_799d58;
        case 0x799d5cu: goto label_799d5c;
        case 0x799d60u: goto label_799d60;
        case 0x799d64u: goto label_799d64;
        case 0x799d68u: goto label_799d68;
        case 0x799d6cu: goto label_799d6c;
        case 0x799d70u: goto label_799d70;
        case 0x799d74u: goto label_799d74;
        case 0x799d78u: goto label_799d78;
        case 0x799d7cu: goto label_799d7c;
        case 0x799d80u: goto label_799d80;
        case 0x799d84u: goto label_799d84;
        case 0x799d88u: goto label_799d88;
        case 0x799d8cu: goto label_799d8c;
        case 0x799d90u: goto label_799d90;
        case 0x799d94u: goto label_799d94;
        case 0x799d98u: goto label_799d98;
        case 0x799d9cu: goto label_799d9c;
        case 0x799da0u: goto label_799da0;
        case 0x799da4u: goto label_799da4;
        case 0x799da8u: goto label_799da8;
        case 0x799dacu: goto label_799dac;
        case 0x799db0u: goto label_799db0;
        case 0x799db4u: goto label_799db4;
        case 0x799db8u: goto label_799db8;
        case 0x799dbcu: goto label_799dbc;
        case 0x799dc0u: goto label_799dc0;
        case 0x799dc4u: goto label_799dc4;
        case 0x799dc8u: goto label_799dc8;
        case 0x799dccu: goto label_799dcc;
        case 0x799dd0u: goto label_799dd0;
        case 0x799dd4u: goto label_799dd4;
        case 0x799dd8u: goto label_799dd8;
        case 0x799ddcu: goto label_799ddc;
        case 0x799de0u: goto label_799de0;
        case 0x799de4u: goto label_799de4;
        case 0x799de8u: goto label_799de8;
        case 0x799decu: goto label_799dec;
        case 0x799df0u: goto label_799df0;
        case 0x799df4u: goto label_799df4;
        case 0x799df8u: goto label_799df8;
        case 0x799dfcu: goto label_799dfc;
        case 0x799e00u: goto label_799e00;
        case 0x799e04u: goto label_799e04;
        case 0x799e08u: goto label_799e08;
        case 0x799e0cu: goto label_799e0c;
        case 0x799e10u: goto label_799e10;
        case 0x799e14u: goto label_799e14;
        case 0x799e18u: goto label_799e18;
        case 0x799e1cu: goto label_799e1c;
        case 0x799e20u: goto label_799e20;
        case 0x799e24u: goto label_799e24;
        case 0x799e28u: goto label_799e28;
        case 0x799e2cu: goto label_799e2c;
        case 0x799e30u: goto label_799e30;
        case 0x799e34u: goto label_799e34;
        case 0x799e38u: goto label_799e38;
        case 0x799e3cu: goto label_799e3c;
        case 0x799e40u: goto label_799e40;
        case 0x799e44u: goto label_799e44;
        case 0x799e48u: goto label_799e48;
        case 0x799e4cu: goto label_799e4c;
        case 0x799e50u: goto label_799e50;
        case 0x799e54u: goto label_799e54;
        case 0x799e58u: goto label_799e58;
        case 0x799e5cu: goto label_799e5c;
        case 0x799e60u: goto label_799e60;
        case 0x799e64u: goto label_799e64;
        case 0x799e68u: goto label_799e68;
        case 0x799e6cu: goto label_799e6c;
        case 0x799e70u: goto label_799e70;
        case 0x799e74u: goto label_799e74;
        case 0x799e78u: goto label_799e78;
        case 0x799e7cu: goto label_799e7c;
        case 0x799e80u: goto label_799e80;
        case 0x799e84u: goto label_799e84;
        case 0x799e88u: goto label_799e88;
        case 0x799e8cu: goto label_799e8c;
        case 0x799e90u: goto label_799e90;
        case 0x799e94u: goto label_799e94;
        case 0x799e98u: goto label_799e98;
        case 0x799e9cu: goto label_799e9c;
        case 0x799ea0u: goto label_799ea0;
        case 0x799ea4u: goto label_799ea4;
        case 0x799ea8u: goto label_799ea8;
        case 0x799eacu: goto label_799eac;
        case 0x799eb0u: goto label_799eb0;
        case 0x799eb4u: goto label_799eb4;
        case 0x799eb8u: goto label_799eb8;
        case 0x799ebcu: goto label_799ebc;
        case 0x799ec0u: goto label_799ec0;
        case 0x799ec4u: goto label_799ec4;
        case 0x799ec8u: goto label_799ec8;
        case 0x799eccu: goto label_799ecc;
        case 0x799ed0u: goto label_799ed0;
        case 0x799ed4u: goto label_799ed4;
        case 0x799ed8u: goto label_799ed8;
        case 0x799edcu: goto label_799edc;
        case 0x799ee0u: goto label_799ee0;
        case 0x799ee4u: goto label_799ee4;
        case 0x799ee8u: goto label_799ee8;
        case 0x799eecu: goto label_799eec;
        case 0x799ef0u: goto label_799ef0;
        case 0x799ef4u: goto label_799ef4;
        case 0x799ef8u: goto label_799ef8;
        case 0x799efcu: goto label_799efc;
        case 0x799f00u: goto label_799f00;
        case 0x799f04u: goto label_799f04;
        case 0x799f08u: goto label_799f08;
        case 0x799f0cu: goto label_799f0c;
        case 0x799f10u: goto label_799f10;
        case 0x799f14u: goto label_799f14;
        case 0x799f18u: goto label_799f18;
        case 0x799f1cu: goto label_799f1c;
        case 0x799f20u: goto label_799f20;
        case 0x799f24u: goto label_799f24;
        case 0x799f28u: goto label_799f28;
        case 0x799f2cu: goto label_799f2c;
        case 0x799f30u: goto label_799f30;
        case 0x799f34u: goto label_799f34;
        case 0x799f38u: goto label_799f38;
        case 0x799f3cu: goto label_799f3c;
        case 0x799f40u: goto label_799f40;
        case 0x799f44u: goto label_799f44;
        case 0x799f48u: goto label_799f48;
        case 0x799f4cu: goto label_799f4c;
        case 0x799f50u: goto label_799f50;
        case 0x799f54u: goto label_799f54;
        case 0x799f58u: goto label_799f58;
        case 0x799f5cu: goto label_799f5c;
        case 0x799f60u: goto label_799f60;
        case 0x799f64u: goto label_799f64;
        case 0x799f68u: goto label_799f68;
        case 0x799f6cu: goto label_799f6c;
        case 0x799f70u: goto label_799f70;
        case 0x799f74u: goto label_799f74;
        case 0x799f78u: goto label_799f78;
        case 0x799f7cu: goto label_799f7c;
        case 0x799f80u: goto label_799f80;
        case 0x799f84u: goto label_799f84;
        case 0x799f88u: goto label_799f88;
        case 0x799f8cu: goto label_799f8c;
        case 0x799f90u: goto label_799f90;
        case 0x799f94u: goto label_799f94;
        case 0x799f98u: goto label_799f98;
        case 0x799f9cu: goto label_799f9c;
        case 0x799fa0u: goto label_799fa0;
        case 0x799fa4u: goto label_799fa4;
        case 0x799fa8u: goto label_799fa8;
        case 0x799facu: goto label_799fac;
        case 0x799fb0u: goto label_799fb0;
        case 0x799fb4u: goto label_799fb4;
        case 0x799fb8u: goto label_799fb8;
        case 0x799fbcu: goto label_799fbc;
        case 0x799fc0u: goto label_799fc0;
        case 0x799fc4u: goto label_799fc4;
        case 0x799fc8u: goto label_799fc8;
        case 0x799fccu: goto label_799fcc;
        case 0x799fd0u: goto label_799fd0;
        case 0x799fd4u: goto label_799fd4;
        case 0x799fd8u: goto label_799fd8;
        case 0x799fdcu: goto label_799fdc;
        case 0x799fe0u: goto label_799fe0;
        case 0x799fe4u: goto label_799fe4;
        case 0x799fe8u: goto label_799fe8;
        case 0x799fecu: goto label_799fec;
        case 0x799ff0u: goto label_799ff0;
        case 0x799ff4u: goto label_799ff4;
        case 0x799ff8u: goto label_799ff8;
        case 0x799ffcu: goto label_799ffc;
        case 0x79a000u: goto label_79a000;
        case 0x79a004u: goto label_79a004;
        case 0x79a008u: goto label_79a008;
        case 0x79a00cu: goto label_79a00c;
        case 0x79a010u: goto label_79a010;
        case 0x79a014u: goto label_79a014;
        case 0x79a018u: goto label_79a018;
        case 0x79a01cu: goto label_79a01c;
        case 0x79a020u: goto label_79a020;
        case 0x79a024u: goto label_79a024;
        case 0x79a028u: goto label_79a028;
        case 0x79a02cu: goto label_79a02c;
        case 0x79a030u: goto label_79a030;
        case 0x79a034u: goto label_79a034;
        case 0x79a038u: goto label_79a038;
        case 0x79a03cu: goto label_79a03c;
        case 0x79a040u: goto label_79a040;
        case 0x79a044u: goto label_79a044;
        case 0x79a048u: goto label_79a048;
        case 0x79a04cu: goto label_79a04c;
        case 0x79a050u: goto label_79a050;
        case 0x79a054u: goto label_79a054;
        case 0x79a058u: goto label_79a058;
        case 0x79a05cu: goto label_79a05c;
        case 0x79a060u: goto label_79a060;
        case 0x79a064u: goto label_79a064;
        case 0x79a068u: goto label_79a068;
        case 0x79a06cu: goto label_79a06c;
        case 0x79a070u: goto label_79a070;
        case 0x79a074u: goto label_79a074;
        case 0x79a078u: goto label_79a078;
        case 0x79a07cu: goto label_79a07c;
        default: break;
    }

    ctx->pc = 0x799a48u;

label_799a48:
    // 0x799a48: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x799a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_799a4c:
    // 0x799a4c: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x799a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_799a50:
    // 0x799a50: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x799a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_799a54:
    // 0x799a54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799a58:
    // 0x799a58: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x799a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_799a5c:
    // 0x799a5c: 0x2413012c  addiu       $s3, $zero, 0x12C
    ctx->pc = 0x799a5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_799a60:
    // 0x799a60: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x799a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_799a64:
    // 0x799a64: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x799a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_799a68:
    // 0x799a68: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x799a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_799a6c:
    // 0x799a6c: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x799a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
label_799a70:
    // 0x799a70: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x799a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
label_799a74:
    // 0x799a74: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x799a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
label_799a78:
    // 0x799a78: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x799a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_799a7c:
    // 0x799a7c: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x799a7cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_799a80:
    // 0x799a80: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x799a80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_799a84:
    // 0x799a84: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x799a84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_799a88:
    // 0x799a88: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x799a88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_799a8c:
    // 0x799a8c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x799a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_799a90:
    // 0x799a90: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x799a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_799a94:
    // 0x799a94: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x799a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_799a98:
    // 0x799a98: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_799a9c:
    // 0x799a9c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_799aa0:
    // 0x799aa0: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
label_799aa4:
    // 0x799aa4: 0xc0b0a92  jal         func_2C2A48
label_799aa8:
    if (ctx->pc == 0x799AA8u) {
        ctx->pc = 0x799AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA4u;
        // 0x799aa8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AACu;
        goto label_799aac;
    }
    ctx->pc = 0x799AA4u;
    SET_GPR_U32(ctx, 31, 0x799AACu);
    ctx->pc = 0x799AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AA4u;
    // 0x799aa8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799AA4u, 0x799AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AACu;
label_799aac:
    // 0x799aac: 0x3c01c115  lui         $at, 0xC115
    ctx->pc = 0x799aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49429 << 16));
label_799ab0:
    // 0x799ab0: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x799ab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_799ab4:
    // 0x799ab4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_799ab8:
    // 0x799ab8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x799ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_799abc:
    // 0x799abc: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x799abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_799ac0:
    // 0x799ac0: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x799ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
label_799ac4:
    // 0x799ac4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x799ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799ac8:
    // 0x799ac8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x799ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_799acc:
    // 0x799acc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799ad0:
    // 0x799ad0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x799ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_799ad4:
    // 0x799ad4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x799ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_799ad8:
    // 0x799ad8: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x799ad8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799adc:
    // 0x799adc: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x799adcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_799ae0:
    // 0x799ae0: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x799ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_799ae4:
    // 0x799ae4: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x799ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_799ae8:
    // 0x799ae8: 0xa3a40040  sb          $a0, 0x40($sp)
    ctx->pc = 0x799ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 4));
label_799aec:
    // 0x799aec: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_799af0:
    // 0x799af0: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x799af0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
label_799af4:
    // 0x799af4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x799af4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799af8:
    // 0x799af8: 0xa3a60060  sb          $a2, 0x60($sp)
    ctx->pc = 0x799af8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 6));
label_799afc:
    // 0x799afc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x799afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_799b00:
    // 0x799b00: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x799b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_799b04:
    // 0x799b04: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x799b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_799b08:
    // 0x799b08: 0xa3a70070  sb          $a3, 0x70($sp)
    ctx->pc = 0x799b08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 7));
label_799b0c:
    // 0x799b0c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x799b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_799b10:
    // 0x799b10: 0xa3a00010  sb          $zero, 0x10($sp)
    ctx->pc = 0x799b10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
label_799b14:
    // 0x799b14: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x799b14u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
label_799b18:
    // 0x799b18: 0xafa90090  sw          $t1, 0x90($sp)
    ctx->pc = 0x799b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 9));
label_799b1c:
    // 0x799b1c: 0x27b700b0  addiu       $s7, $sp, 0xB0
    ctx->pc = 0x799b1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_799b20:
    // 0x799b20: 0xafaa0094  sw          $t2, 0x94($sp)
    ctx->pc = 0x799b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 10));
label_799b24:
    // 0x799b24: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x799b24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_799b28:
    // 0x799b28: 0x6ba30097  ldl         $v1, 0x97($sp)
    ctx->pc = 0x799b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_799b2c:
    // 0x799b2c: 0x6fa30090  ldr         $v1, 0x90($sp)
    ctx->pc = 0x799b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_799b30:
    // 0x799b30: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x799b30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_799b34:
    // 0x799b34: 0xb3a30087  sdl         $v1, 0x87($sp)
    ctx->pc = 0x799b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_799b38:
    // 0x799b38: 0xb7a30080  sdr         $v1, 0x80($sp)
    ctx->pc = 0x799b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_799b3c:
    // 0x799b3c: 0xafa70088  sw          $a3, 0x88($sp)
    ctx->pc = 0x799b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 7));
label_799b40:
    // 0x799b40: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_799b44:
    // 0x799b44: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x799b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
label_799b48:
    // 0x799b48: 0xafa500a4  sw          $a1, 0xA4($sp)
    ctx->pc = 0x799b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
label_799b4c:
    // 0x799b4c: 0xafa800a8  sw          $t0, 0xA8($sp)
    ctx->pc = 0x799b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 8));
label_799b50:
    // 0x799b50: 0x6ba200a7  ldl         $v0, 0xA7($sp)
    ctx->pc = 0x799b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_799b54:
    // 0x799b54: 0x6fa200a0  ldr         $v0, 0xA0($sp)
    ctx->pc = 0x799b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_799b58:
    // 0x799b58: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x799b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_799b5c:
    // 0x799b5c: 0xb3a20097  sdl         $v0, 0x97($sp)
    ctx->pc = 0x799b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_799b60:
    // 0x799b60: 0xb7a20090  sdr         $v0, 0x90($sp)
    ctx->pc = 0x799b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_799b64:
    // 0x799b64: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x799b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
label_799b68:
    // 0x799b68: 0x3c01c094  lui         $at, 0xC094
    ctx->pc = 0x799b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49300 << 16));
label_799b6c:
    // 0x799b6c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799b6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_799b70:
    // 0x799b70: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x799b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_799b74:
    // 0x799b74: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799b78:
    // 0x799b78: 0x3c01c1eb  lui         $at, 0xC1EB
    ctx->pc = 0x799b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49643 << 16));
label_799b7c:
    // 0x799b7c: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x799b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_799b80:
    // 0x799b80: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_799b84:
    // 0x799b84: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_799b88:
    // 0x799b88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_799b8c:
    // 0x799b8c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_799b90:
    // 0x799b90: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799b90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_799b94:
    // 0x799b94: 0x8ea4b000  lw          $a0, -0x5000($s5)
    ctx->pc = 0x799b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946816)));
label_799b98:
    // 0x799b98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x799b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_799b9c:
    // 0x799b9c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_799ba0:
    if (ctx->pc == 0x799BA0u) {
        ctx->pc = 0x799BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B9Cu;
        // 0x799ba0: 0x3c090060  lui         $t1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BA4u;
        goto label_799ba4;
    }
    ctx->pc = 0x799B9Cu;
    {
        const bool branch_taken_0x799b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B9Cu;
        // 0x799ba0: 0x3c090060  lui         $t1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b9c) {
            ctx->pc = 0x799BBCu;
            goto label_799bbc;
        }
    }
    ctx->pc = 0x799BA4u;
label_799ba4:
    // 0x799ba4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x799ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_799ba8:
    // 0x799ba8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_799bac:
    // 0x799bac: 0x8c637a8c  lw          $v1, 0x7A8C($v1)
    ctx->pc = 0x799bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31372)));
label_799bb0:
    // 0x799bb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x799bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_799bb4:
    // 0x799bb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_799bb8:
    if (ctx->pc == 0x799BB8u) {
        ctx->pc = 0x799BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BB4u;
        // 0x799bb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BBCu;
        goto label_799bbc;
    }
    ctx->pc = 0x799BB4u;
    {
        const bool branch_taken_0x799bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BB4u;
        // 0x799bb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bb4) {
            ctx->pc = 0x799BD0u;
            goto label_799bd0;
        }
    }
    ctx->pc = 0x799BBCu;
label_799bbc:
    // 0x799bbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799bc0:
    // 0x799bc0: 0xc0b42ae  jal         func_2D0AB8
label_799bc4:
    if (ctx->pc == 0x799BC4u) {
        ctx->pc = 0x799BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC0u;
        // 0x799bc4: 0x2524ee00  addiu       $a0, $t1, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BC8u;
        goto label_799bc8;
    }
    ctx->pc = 0x799BC0u;
    SET_GPR_U32(ctx, 31, 0x799BC8u);
    ctx->pc = 0x799BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BC0u;
    // 0x799bc4: 0x2524ee00  addiu       $a0, $t1, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x799BC0u, 0x799BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BC8u;
label_799bc8:
    // 0x799bc8: 0x10000116  b           . + 4 + (0x116 << 2)
label_799bcc:
    if (ctx->pc == 0x799BCCu) {
        ctx->pc = 0x799BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC8u;
        // 0x799bcc: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BD0u;
        goto label_799bd0;
    }
    ctx->pc = 0x799BC8u;
    {
        const bool branch_taken_0x799bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC8u;
        // 0x799bcc: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bc8) {
            ctx->pc = 0x79A024u;
            goto label_79a024;
        }
    }
    ctx->pc = 0x799BD0u;
label_799bd0:
    // 0x799bd0: 0x12420059  beq         $s2, $v0, . + 4 + (0x59 << 2)
label_799bd4:
    if (ctx->pc == 0x799BD4u) {
        ctx->pc = 0x799BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD0u;
        // 0x799bd4: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BD8u;
        goto label_799bd8;
    }
    ctx->pc = 0x799BD0u;
    {
        const bool branch_taken_0x799bd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x799BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD0u;
        // 0x799bd4: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bd0) {
            ctx->pc = 0x799D38u;
            goto label_799d38;
        }
    }
    ctx->pc = 0x799BD8u;
label_799bd8:
    // 0x799bd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_799bdc:
    if (ctx->pc == 0x799BDCu) {
        ctx->pc = 0x799BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD8u;
        // 0x799bdc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BE0u;
        goto label_799be0;
    }
    ctx->pc = 0x799BD8u;
    {
        const bool branch_taken_0x799bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD8u;
        // 0x799bdc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bd8) {
            ctx->pc = 0x799BF0u;
            goto label_799bf0;
        }
    }
    ctx->pc = 0x799BE0u;
label_799be0:
    // 0x799be0: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_799be4:
    if (ctx->pc == 0x799BE4u) {
        ctx->pc = 0x799BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE0u;
        // 0x799be4: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BE8u;
        goto label_799be8;
    }
    ctx->pc = 0x799BE0u;
    {
        const bool branch_taken_0x799be0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE0u;
        // 0x799be4: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799be0) {
            ctx->pc = 0x799C08u;
            goto label_799c08;
        }
    }
    ctx->pc = 0x799BE8u;
label_799be8:
    // 0x799be8: 0x10000109  b           . + 4 + (0x109 << 2)
label_799bec:
    if (ctx->pc == 0x799BECu) {
        ctx->pc = 0x799BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE8u;
        // 0x799bec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BF0u;
        goto label_799bf0;
    }
    ctx->pc = 0x799BE8u;
    {
        const bool branch_taken_0x799be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE8u;
        // 0x799bec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799be8) {
            ctx->pc = 0x79A010u;
            goto label_79a010;
        }
    }
    ctx->pc = 0x799BF0u;
label_799bf0:
    // 0x799bf0: 0x12420084  beq         $s2, $v0, . + 4 + (0x84 << 2)
label_799bf4:
    if (ctx->pc == 0x799BF4u) {
        ctx->pc = 0x799BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF0u;
        // 0x799bf4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BF8u;
        goto label_799bf8;
    }
    ctx->pc = 0x799BF0u;
    {
        const bool branch_taken_0x799bf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x799BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF0u;
        // 0x799bf4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bf0) {
            ctx->pc = 0x799E04u;
            goto label_799e04;
        }
    }
    ctx->pc = 0x799BF8u;
label_799bf8:
    // 0x799bf8: 0x124200ab  beq         $s2, $v0, . + 4 + (0xAB << 2)
label_799bfc:
    if (ctx->pc == 0x799BFCu) {
        ctx->pc = 0x799BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF8u;
        // 0x799bfc: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C00u;
        goto label_799c00;
    }
    ctx->pc = 0x799BF8u;
    {
        const bool branch_taken_0x799bf8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x799BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF8u;
        // 0x799bfc: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bf8) {
            ctx->pc = 0x799EA8u;
            goto label_799ea8;
        }
    }
    ctx->pc = 0x799C00u;
label_799c00:
    // 0x799c00: 0x10000103  b           . + 4 + (0x103 << 2)
label_799c04:
    if (ctx->pc == 0x799C04u) {
        ctx->pc = 0x799C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C00u;
        // 0x799c04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C08u;
        goto label_799c08;
    }
    ctx->pc = 0x799C00u;
    {
        const bool branch_taken_0x799c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C00u;
        // 0x799c04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c00) {
            ctx->pc = 0x79A010u;
            goto label_79a010;
        }
    }
    ctx->pc = 0x799C08u;
label_799c08:
    // 0x799c08: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x799c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_799c0c:
    // 0x799c0c: 0xc0c3ea6  jal         func_30FA98
label_799c10:
    if (ctx->pc == 0x799C10u) {
        ctx->pc = 0x799C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C0Cu;
        // 0x799c10: 0x240403bb  addiu       $a0, $zero, 0x3BB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 955));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C14u;
        goto label_799c14;
    }
    ctx->pc = 0x799C0Cu;
    SET_GPR_U32(ctx, 31, 0x799C14u);
    ctx->pc = 0x799C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C0Cu;
    // 0x799c10: 0x240403bb  addiu       $a0, $zero, 0x3BB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 955));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x799C0Cu, 0x799C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C14u;
label_799c14:
    // 0x799c14: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x799c14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799c18:
    // 0x799c18: 0x8ea3b000  lw          $v1, -0x5000($s5)
    ctx->pc = 0x799c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946816)));
label_799c1c:
    // 0x799c1c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_799c20:
    // 0x799c20: 0x8ea2b000  lw          $v0, -0x5000($s5)
    ctx->pc = 0x799c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946816)));
label_799c24:
    // 0x799c24: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x799c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799c28:
    // 0x799c28: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x799c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_799c2c:
    // 0x799c2c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x799c2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_799c30:
    // 0x799c30: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x799c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_799c34:
    // 0x799c34: 0x40f809  jalr        $v0
label_799c38:
    if (ctx->pc == 0x799C38u) {
        ctx->pc = 0x799C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C34u;
        // 0x799c38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C3Cu;
        goto label_799c3c;
    }
    ctx->pc = 0x799C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799C3Cu);
        ctx->pc = 0x799C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C34u;
        // 0x799c38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C34u, 0x799C3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799C3Cu;
label_799c3c:
    // 0x799c3c: 0x8ea3b000  lw          $v1, -0x5000($s5)
    ctx->pc = 0x799c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946816)));
label_799c40:
    // 0x799c40: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799c44:
    // 0x799c44: 0x8c460214  lw          $a2, 0x214($v0)
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799c48:
    // 0x799c48: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x799c48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_799c4c:
    // 0x799c4c: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x799c4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_799c50:
    // 0x799c50: 0xe6f70004  swc1        $f23, 0x4($s7)
    ctx->pc = 0x799c50u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_799c54:
    // 0x799c54: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x799c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799c58:
    // 0x799c58: 0xe6f50008  swc1        $f21, 0x8($s7)
    ctx->pc = 0x799c58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_799c5c:
    // 0x799c5c: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x799c5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_799c60:
    // 0x799c60: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x799c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_799c64:
    // 0x799c64: 0x40f809  jalr        $v0
label_799c68:
    if (ctx->pc == 0x799C68u) {
        ctx->pc = 0x799C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C64u;
        // 0x799c68: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C6Cu;
        goto label_799c6c;
    }
    ctx->pc = 0x799C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799C6Cu);
        ctx->pc = 0x799C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C64u;
        // 0x799c68: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C64u, 0x799C6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799C6Cu;
label_799c6c:
    // 0x799c6c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x799c6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_799c70:
    // 0x799c70: 0xc0c3ea6  jal         func_30FA98
label_799c74:
    if (ctx->pc == 0x799C74u) {
        ctx->pc = 0x799C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C70u;
        // 0x799c74: 0x240403bb  addiu       $a0, $zero, 0x3BB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 955));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C78u;
        goto label_799c78;
    }
    ctx->pc = 0x799C70u;
    SET_GPR_U32(ctx, 31, 0x799C78u);
    ctx->pc = 0x799C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C70u;
    // 0x799c74: 0x240403bb  addiu       $a0, $zero, 0x3BB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 955));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x799C70u, 0x799C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C78u;
label_799c78:
    // 0x799c78: 0x8ea3b000  lw          $v1, -0x5000($s5)
    ctx->pc = 0x799c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946816)));
label_799c7c:
    // 0x799c7c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x799c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_799c80:
    // 0x799c80: 0x8ea2b000  lw          $v0, -0x5000($s5)
    ctx->pc = 0x799c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946816)));
label_799c84:
    // 0x799c84: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x799c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_799c88:
    // 0x799c88: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x799c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_799c8c:
    // 0x799c8c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x799c8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_799c90:
    // 0x799c90: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x799c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_799c94:
    // 0x799c94: 0x40f809  jalr        $v0
label_799c98:
    if (ctx->pc == 0x799C98u) {
        ctx->pc = 0x799C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C94u;
        // 0x799c98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C9Cu;
        goto label_799c9c;
    }
    ctx->pc = 0x799C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799C9Cu);
        ctx->pc = 0x799C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C94u;
        // 0x799c98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C94u, 0x799C9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799C9Cu;
label_799c9c:
    // 0x799c9c: 0x8ea3b000  lw          $v1, -0x5000($s5)
    ctx->pc = 0x799c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946816)));
label_799ca0:
    // 0x799ca0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x799ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_799ca4:
    // 0x799ca4: 0x8c460214  lw          $a2, 0x214($v0)
    ctx->pc = 0x799ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799ca8:
    // 0x799ca8: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x799ca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_799cac:
    // 0x799cac: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x799cacu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_799cb0:
    // 0x799cb0: 0xe6970004  swc1        $f23, 0x4($s4)
    ctx->pc = 0x799cb0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_799cb4:
    // 0x799cb4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x799cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799cb8:
    // 0x799cb8: 0xe6950008  swc1        $f21, 0x8($s4)
    ctx->pc = 0x799cb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_799cbc:
    // 0x799cbc: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x799cbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_799cc0:
    // 0x799cc0: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x799cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_799cc4:
    // 0x799cc4: 0x40f809  jalr        $v0
label_799cc8:
    if (ctx->pc == 0x799CC8u) {
        ctx->pc = 0x799CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CC4u;
        // 0x799cc8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CCCu;
        goto label_799ccc;
    }
    ctx->pc = 0x799CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799CCCu);
        ctx->pc = 0x799CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CC4u;
        // 0x799cc8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CC4u, 0x799CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799CCCu;
label_799ccc:
    // 0x799ccc: 0x8ea3b000  lw          $v1, -0x5000($s5)
    ctx->pc = 0x799cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946816)));
label_799cd0:
    // 0x799cd0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_799cd4:
    // 0x799cd4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x799cd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_799cd8:
    // 0x799cd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799cdc:
    // 0x799cdc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x799cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_799ce0:
    // 0x799ce0: 0x8c460214  lw          $a2, 0x214($v0)
    ctx->pc = 0x799ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799ce4:
    // 0x799ce4: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x799ce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_799ce8:
    // 0x799ce8: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x799ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_799cec:
    // 0x799cec: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x799cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_799cf0:
    // 0x799cf0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799cf4:
    // 0x799cf4: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x799cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_799cf8:
    // 0x799cf8: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x799cf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_799cfc:
    // 0x799cfc: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x799cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_799d00:
    // 0x799d00: 0x40f809  jalr        $v0
label_799d04:
    if (ctx->pc == 0x799D04u) {
        ctx->pc = 0x799D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D00u;
        // 0x799d04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D08u;
        goto label_799d08;
    }
    ctx->pc = 0x799D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799D08u);
        ctx->pc = 0x799D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D00u;
        // 0x799d04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D00u, 0x799D08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799D08u;
label_799d08:
    // 0x799d08: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x799d08u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
label_799d0c:
    // 0x799d0c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799d10:
    // 0x799d10: 0x8d442f84  lw          $a0, 0x2F84($t2)
    ctx->pc = 0x799d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12164)));
label_799d14:
    // 0x799d14: 0x24a5a1f8  addiu       $a1, $a1, -0x5E08
    ctx->pc = 0x799d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943224));
label_799d18:
    // 0x799d18: 0xc0b0e24  jal         func_2C3890
label_799d1c:
    if (ctx->pc == 0x799D1Cu) {
        ctx->pc = 0x799D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D18u;
        // 0x799d1c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D20u;
        goto label_799d20;
    }
    ctx->pc = 0x799D18u;
    SET_GPR_U32(ctx, 31, 0x799D20u);
    ctx->pc = 0x799D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D18u;
    // 0x799d1c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799D18u, 0x799D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D20u;
label_799d20:
    // 0x799d20: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_799d24:
    // 0x799d24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799d28:
    // 0x799d28: 0xc0b42ae  jal         func_2D0AB8
label_799d2c:
    if (ctx->pc == 0x799D2Cu) {
        ctx->pc = 0x799D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D28u;
        // 0x799d2c: 0x2444ee00  addiu       $a0, $v0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D30u;
        goto label_799d30;
    }
    ctx->pc = 0x799D28u;
    SET_GPR_U32(ctx, 31, 0x799D30u);
    ctx->pc = 0x799D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D28u;
    // 0x799d2c: 0x2444ee00  addiu       $a0, $v0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x799D28u, 0x799D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D30u;
label_799d30:
    // 0x799d30: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_799d34:
    if (ctx->pc == 0x799D34u) {
        ctx->pc = 0x799D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D30u;
        // 0x799d34: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D38u;
        goto label_799d38;
    }
    ctx->pc = 0x799D30u;
    {
        const bool branch_taken_0x799d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D30u;
        // 0x799d34: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d30) {
            ctx->pc = 0x79A00Cu;
            goto label_79a00c;
        }
    }
    ctx->pc = 0x799D38u;
label_799d38:
    // 0x799d38: 0x46100b4  bgez        $v1, . + 4 + (0xB4 << 2)
label_799d3c:
    if (ctx->pc == 0x799D3Cu) {
        ctx->pc = 0x799D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D38u;
        // 0x799d3c: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D40u;
        goto label_799d40;
    }
    ctx->pc = 0x799D38u;
    {
        const bool branch_taken_0x799d38 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x799D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D38u;
        // 0x799d3c: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d38) {
            ctx->pc = 0x79A00Cu;
            goto label_79a00c;
        }
    }
    ctx->pc = 0x799D40u;
label_799d40:
    // 0x799d40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799d44:
    // 0x799d44: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x799d44u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
label_799d48:
    // 0x799d48: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x799d48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_799d4c:
    // 0x799d4c: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x799d4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799d50:
    // 0x799d50: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x799d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_799d54:
    // 0x799d54: 0x0  nop
    ctx->pc = 0x799d54u;
    // NOP
label_799d58:
    // 0x799d58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799d5c:
    // 0x799d5c: 0x26446ab0  addiu       $a0, $s2, 0x6AB0
    ctx->pc = 0x799d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 27312));
label_799d60:
    // 0x799d60: 0xc0a54b4  jal         func_2952D0
label_799d64:
    if (ctx->pc == 0x799D64u) {
        ctx->pc = 0x799D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D60u;
        // 0x799d64: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D68u;
        goto label_799d68;
    }
    ctx->pc = 0x799D60u;
    SET_GPR_U32(ctx, 31, 0x799D68u);
    ctx->pc = 0x799D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D60u;
    // 0x799d64: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799D60u, 0x799D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D68u;
label_799d68:
    // 0x799d68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799d6c:
    // 0x799d6c: 0xc0a57b8  jal         func_295EE0
label_799d70:
    if (ctx->pc == 0x799D70u) {
        ctx->pc = 0x799D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D6Cu;
        // 0x799d70: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D74u;
        goto label_799d74;
    }
    ctx->pc = 0x799D6Cu;
    SET_GPR_U32(ctx, 31, 0x799D74u);
    ctx->pc = 0x799D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D6Cu;
    // 0x799d70: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295EE0u, 0x799D6Cu, 0x799D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D74u;
label_799d74:
    // 0x799d74: 0x27c48658  addiu       $a0, $fp, -0x79A8
    ctx->pc = 0x799d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936152));
label_799d78:
    // 0x799d78: 0xc0afc42  jal         func_2BF108
label_799d7c:
    if (ctx->pc == 0x799D7Cu) {
        ctx->pc = 0x799D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D78u;
        // 0x799d7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D80u;
        goto label_799d80;
    }
    ctx->pc = 0x799D78u;
    SET_GPR_U32(ctx, 31, 0x799D80u);
    ctx->pc = 0x799D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D78u;
    // 0x799d7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799D78u, 0x799D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D80u;
label_799d80:
    // 0x799d80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799d84:
    // 0x799d84: 0x56230004  bnel        $s1, $v1, . + 4 + (0x4 << 2)
label_799d88:
    if (ctx->pc == 0x799D88u) {
        ctx->pc = 0x799D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D84u;
        // 0x799d88: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D8Cu;
        goto label_799d8c;
    }
    ctx->pc = 0x799D84u;
    {
        const bool branch_taken_0x799d84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x799d84) {
            ctx->pc = 0x799D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D84u;
            // 0x799d88: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D98u;
            goto label_799d98;
        }
    }
    ctx->pc = 0x799D8Cu;
label_799d8c:
    // 0x799d8c: 0xc0a573a  jal         func_295CE8
label_799d90:
    if (ctx->pc == 0x799D90u) {
        ctx->pc = 0x799D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D8Cu;
        // 0x799d90: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D94u;
        goto label_799d94;
    }
    ctx->pc = 0x799D8Cu;
    SET_GPR_U32(ctx, 31, 0x799D94u);
    ctx->pc = 0x799D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D8Cu;
    // 0x799d90: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799D8Cu, 0x799D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D94u;
label_799d94:
    // 0x799d94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799d94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_799d98:
    // 0x799d98: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x799d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_799d9c:
    // 0x799d9c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_799da0:
    if (ctx->pc == 0x799DA0u) {
        ctx->pc = 0x799DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D9Cu;
        // 0x799da0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DA4u;
        goto label_799da4;
    }
    ctx->pc = 0x799D9Cu;
    {
        const bool branch_taken_0x799d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D9Cu;
        // 0x799da0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d9c) {
            ctx->pc = 0x799D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d58;
        }
    }
    ctx->pc = 0x799DA4u;
label_799da4:
    // 0x799da4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x799da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_799da8:
    // 0x799da8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799dac:
    // 0x799dac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799db0:
    // 0x799db0: 0x26446ab0  addiu       $a0, $s2, 0x6AB0
    ctx->pc = 0x799db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 27312));
label_799db4:
    // 0x799db4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799db4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_799db8:
    // 0x799db8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x799db8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_799dbc:
    // 0x799dbc: 0xc0a54b4  jal         func_2952D0
label_799dc0:
    if (ctx->pc == 0x799DC0u) {
        ctx->pc = 0x799DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DBCu;
        // 0x799dc0: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DC4u;
        goto label_799dc4;
    }
    ctx->pc = 0x799DBCu;
    SET_GPR_U32(ctx, 31, 0x799DC4u);
    ctx->pc = 0x799DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DBCu;
    // 0x799dc0: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799DBCu, 0x799DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DC4u;
label_799dc4:
    // 0x799dc4: 0x2e230003  sltiu       $v1, $s1, 0x3
    ctx->pc = 0x799dc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_799dc8:
    // 0x799dc8: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_799dcc:
    if (ctx->pc == 0x799DCCu) {
        ctx->pc = 0x799DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DC8u;
        // 0x799dcc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DD0u;
        goto label_799dd0;
    }
    ctx->pc = 0x799DC8u;
    {
        const bool branch_taken_0x799dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799dc8) {
            ctx->pc = 0x799DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799DC8u;
            // 0x799dcc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799db0;
        }
    }
    ctx->pc = 0x799DD0u;
label_799dd0:
    // 0x799dd0: 0x27c48658  addiu       $a0, $fp, -0x79A8
    ctx->pc = 0x799dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936152));
label_799dd4:
    // 0x799dd4: 0xc0afc42  jal         func_2BF108
label_799dd8:
    if (ctx->pc == 0x799DD8u) {
        ctx->pc = 0x799DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DD4u;
        // 0x799dd8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DDCu;
        goto label_799ddc;
    }
    ctx->pc = 0x799DD4u;
    SET_GPR_U32(ctx, 31, 0x799DDCu);
    ctx->pc = 0x799DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DD4u;
    // 0x799dd8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799DD4u, 0x799DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DDCu;
label_799ddc:
    // 0x799ddc: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x799ddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_799de0:
    // 0x799de0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799de4:
    // 0x799de4: 0x241301c2  addiu       $s3, $zero, 0x1C2
    ctx->pc = 0x799de4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
label_799de8:
    // 0x799de8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_799dec:
    // 0x799dec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x799decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_799df0:
    // 0x799df0: 0x8ea2b000  lw          $v0, -0x5000($s5)
    ctx->pc = 0x799df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946816)));
label_799df4:
    // 0x799df4: 0xc06e120  jal         func_1B8480
label_799df8:
    if (ctx->pc == 0x799DF8u) {
        ctx->pc = 0x799DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DF4u;
        // 0x799df8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DFCu;
        goto label_799dfc;
    }
    ctx->pc = 0x799DF4u;
    SET_GPR_U32(ctx, 31, 0x799DFCu);
    ctx->pc = 0x799DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DF4u;
    // 0x799df8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8480u, 0x799DF4u, 0x799DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DFCu;
label_799dfc:
    // 0x799dfc: 0x10000083  b           . + 4 + (0x83 << 2)
label_799e00:
    if (ctx->pc == 0x799E00u) {
        ctx->pc = 0x799E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DFCu;
        // 0x799e00: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E04u;
        goto label_799e04;
    }
    ctx->pc = 0x799DFCu;
    {
        const bool branch_taken_0x799dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DFCu;
        // 0x799e00: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dfc) {
            ctx->pc = 0x79A00Cu;
            goto label_79a00c;
        }
    }
    ctx->pc = 0x799E04u;
label_799e04:
    // 0x799e04: 0x13102a  slt         $v0, $zero, $s3
    ctx->pc = 0x799e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_799e08:
    // 0x799e08: 0x27d08658  addiu       $s0, $fp, -0x79A8
    ctx->pc = 0x799e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936152));
label_799e0c:
    // 0x799e0c: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x799e0cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_799e10:
    // 0x799e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799e14:
    // 0x799e14: 0xc0afc42  jal         func_2BF108
label_799e18:
    if (ctx->pc == 0x799E18u) {
        ctx->pc = 0x799E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E14u;
        // 0x799e18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E1Cu;
        goto label_799e1c;
    }
    ctx->pc = 0x799E14u;
    SET_GPR_U32(ctx, 31, 0x799E1Cu);
    ctx->pc = 0x799E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E14u;
    // 0x799e18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799E14u, 0x799E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E1Cu;
label_799e1c:
    // 0x799e1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799e20:
    // 0x799e20: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x799e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_799e24:
    // 0x799e24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x799e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_799e28:
    // 0x799e28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799e2c:
    // 0x799e2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x799e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_799e30:
    // 0x799e30: 0xc0a57ca  jal         func_295F28
label_799e34:
    if (ctx->pc == 0x799E34u) {
        ctx->pc = 0x799E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E30u;
        // 0x799e34: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E38u;
        goto label_799e38;
    }
    ctx->pc = 0x799E30u;
    SET_GPR_U32(ctx, 31, 0x799E38u);
    ctx->pc = 0x799E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E30u;
    // 0x799e34: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799E30u, 0x799E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E38u;
label_799e38:
    // 0x799e38: 0x2980b  movn        $s3, $zero, $v0
    ctx->pc = 0x799e38u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_799e3c:
    // 0x799e3c: 0x16600073  bnez        $s3, . + 4 + (0x73 << 2)
label_799e40:
    if (ctx->pc == 0x799E40u) {
        ctx->pc = 0x799E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E3Cu;
        // 0x799e40: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E44u;
        goto label_799e44;
    }
    ctx->pc = 0x799E3Cu;
    {
        const bool branch_taken_0x799e3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E3Cu;
        // 0x799e40: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e3c) {
            ctx->pc = 0x79A00Cu;
            goto label_79a00c;
        }
    }
    ctx->pc = 0x799E44u;
label_799e44:
    // 0x799e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799e48:
    // 0x799e48: 0xc0afc42  jal         func_2BF108
label_799e4c:
    if (ctx->pc == 0x799E4Cu) {
        ctx->pc = 0x799E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E48u;
        // 0x799e4c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E50u;
        goto label_799e50;
    }
    ctx->pc = 0x799E48u;
    SET_GPR_U32(ctx, 31, 0x799E50u);
    ctx->pc = 0x799E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E48u;
    // 0x799e4c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799E48u, 0x799E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E50u;
label_799e50:
    // 0x799e50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799e54:
    // 0x799e54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x799e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_799e58:
    // 0x799e58: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x799e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_799e5c:
    // 0x799e5c: 0xc0a57ca  jal         func_295F28
label_799e60:
    if (ctx->pc == 0x799E60u) {
        ctx->pc = 0x799E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E5Cu;
        // 0x799e60: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E64u;
        goto label_799e64;
    }
    ctx->pc = 0x799E5Cu;
    SET_GPR_U32(ctx, 31, 0x799E64u);
    ctx->pc = 0x799E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E5Cu;
    // 0x799e60: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799E5Cu, 0x799E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E64u;
label_799e64:
    // 0x799e64: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_799e68:
    if (ctx->pc == 0x799E68u) {
        ctx->pc = 0x799E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E64u;
        // 0x799e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E6Cu;
        goto label_799e6c;
    }
    ctx->pc = 0x799E64u;
    {
        const bool branch_taken_0x799e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E64u;
        // 0x799e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e64) {
            ctx->pc = 0x799E8Cu;
            goto label_799e8c;
        }
    }
    ctx->pc = 0x799E6Cu;
label_799e6c:
    // 0x799e6c: 0xc0afc42  jal         func_2BF108
label_799e70:
    if (ctx->pc == 0x799E70u) {
        ctx->pc = 0x799E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E6Cu;
        // 0x799e70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E74u;
        goto label_799e74;
    }
    ctx->pc = 0x799E6Cu;
    SET_GPR_U32(ctx, 31, 0x799E74u);
    ctx->pc = 0x799E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E6Cu;
    // 0x799e70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799E6Cu, 0x799E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E74u;
label_799e74:
    // 0x799e74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799e78:
    // 0x799e78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x799e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_799e7c:
    // 0x799e7c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x799e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_799e80:
    // 0x799e80: 0xc0a573a  jal         func_295CE8
label_799e84:
    if (ctx->pc == 0x799E84u) {
        ctx->pc = 0x799E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E80u;
        // 0x799e84: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E88u;
        goto label_799e88;
    }
    ctx->pc = 0x799E80u;
    SET_GPR_U32(ctx, 31, 0x799E88u);
    ctx->pc = 0x799E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E80u;
    // 0x799e84: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799E80u, 0x799E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E88u;
label_799e88:
    // 0x799e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799e8c:
    // 0x799e8c: 0xc0afc42  jal         func_2BF108
label_799e90:
    if (ctx->pc == 0x799E90u) {
        ctx->pc = 0x799E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E8Cu;
        // 0x799e90: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E94u;
        goto label_799e94;
    }
    ctx->pc = 0x799E8Cu;
    SET_GPR_U32(ctx, 31, 0x799E94u);
    ctx->pc = 0x799E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E8Cu;
    // 0x799e90: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799E8Cu, 0x799E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E94u;
label_799e94:
    // 0x799e94: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x799e94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799e98:
    // 0x799e98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799e9c:
    // 0x799e9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_799ea0:
    // 0x799ea0: 0x10000059  b           . + 4 + (0x59 << 2)
label_799ea4:
    if (ctx->pc == 0x799EA4u) {
        ctx->pc = 0x799EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EA0u;
        // 0x799ea4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EA8u;
        goto label_799ea8;
    }
    ctx->pc = 0x799EA0u;
    {
        const bool branch_taken_0x799ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EA0u;
        // 0x799ea4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ea0) {
            ctx->pc = 0x79A008u;
            goto label_79a008;
        }
    }
    ctx->pc = 0x799EA8u;
label_799ea8:
    // 0x799ea8: 0xc06e1c6  jal         func_1B8718
label_799eac:
    if (ctx->pc == 0x799EACu) {
        ctx->pc = 0x799EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EA8u;
        // 0x799eac: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EB0u;
        goto label_799eb0;
    }
    ctx->pc = 0x799EA8u;
    SET_GPR_U32(ctx, 31, 0x799EB0u);
    ctx->pc = 0x799EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EA8u;
    // 0x799eac: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8718u, 0x799EA8u, 0x799EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EB0u;
label_799eb0:
    // 0x799eb0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_799eb4:
    if (ctx->pc == 0x799EB4u) {
        ctx->pc = 0x799EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EB0u;
        // 0x799eb4: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EB8u;
        goto label_799eb8;
    }
    ctx->pc = 0x799EB0u;
    {
        const bool branch_taken_0x799eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EB0u;
        // 0x799eb4: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799eb0) {
            ctx->pc = 0x799ECCu;
            goto label_799ecc;
        }
    }
    ctx->pc = 0x799EB8u;
label_799eb8:
    // 0x799eb8: 0x8ea2b000  lw          $v0, -0x5000($s5)
    ctx->pc = 0x799eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946816)));
label_799ebc:
    // 0x799ebc: 0xc06e1c6  jal         func_1B8718
label_799ec0:
    if (ctx->pc == 0x799EC0u) {
        ctx->pc = 0x799EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EBCu;
        // 0x799ec0: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EC4u;
        goto label_799ec4;
    }
    ctx->pc = 0x799EBCu;
    SET_GPR_U32(ctx, 31, 0x799EC4u);
    ctx->pc = 0x799EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EBCu;
    // 0x799ec0: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8718u, 0x799EBCu, 0x799EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EC4u;
label_799ec4:
    // 0x799ec4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_799ec8:
    if (ctx->pc == 0x799EC8u) {
        ctx->pc = 0x799EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EC4u;
        // 0x799ec8: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799ECCu;
        goto label_799ecc;
    }
    ctx->pc = 0x799EC4u;
    {
        const bool branch_taken_0x799ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EC4u;
        // 0x799ec8: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ec4) {
            ctx->pc = 0x799EE4u;
            goto label_799ee4;
        }
    }
    ctx->pc = 0x799ECCu;
label_799ecc:
    // 0x799ecc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799ed0:
    // 0x799ed0: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x799ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
label_799ed4:
    // 0x799ed4: 0x24a5a5d8  addiu       $a1, $a1, -0x5A28
    ctx->pc = 0x799ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944216));
label_799ed8:
    // 0x799ed8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799edc:
    // 0x799edc: 0xc0b0e24  jal         func_2C3890
label_799ee0:
    if (ctx->pc == 0x799EE0u) {
        ctx->pc = 0x799EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EDCu;
        // 0x799ee0: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EE4u;
        goto label_799ee4;
    }
    ctx->pc = 0x799EDCu;
    SET_GPR_U32(ctx, 31, 0x799EE4u);
    ctx->pc = 0x799EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EDCu;
    // 0x799ee0: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799EDCu, 0x799EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EE4u;
label_799ee4:
    // 0x799ee4: 0xc1e6ab2  jal         func_79AAC8
label_799ee8:
    if (ctx->pc == 0x799EE8u) {
        ctx->pc = 0x799EECu;
        goto label_799eec;
    }
    ctx->pc = 0x799EE4u;
    SET_GPR_U32(ctx, 31, 0x799EECu);
    ctx->pc = 0x79AAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AAC8u, 0x799EE4u, 0x799EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EECu;
label_799eec:
    // 0x799eec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799ef0:
    // 0x799ef0: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x799ef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
label_799ef4:
    // 0x799ef4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_799ef8:
    if (ctx->pc == 0x799EF8u) {
        ctx->pc = 0x799EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EF4u;
        // 0x799ef8: 0x27d08658  addiu       $s0, $fp, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EFCu;
        goto label_799efc;
    }
    ctx->pc = 0x799EF4u;
    {
        const bool branch_taken_0x799ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EF4u;
        // 0x799ef8: 0x27d08658  addiu       $s0, $fp, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ef4) {
            ctx->pc = 0x799F20u;
            goto label_799f20;
        }
    }
    ctx->pc = 0x799EFCu;
label_799efc:
    // 0x799efc: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x799efcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
label_799f00:
    // 0x799f00: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799f04:
    // 0x799f04: 0x8cc42f84  lw          $a0, 0x2F84($a2)
    ctx->pc = 0x799f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12164)));
label_799f08:
    // 0x799f08: 0x24a5a358  addiu       $a1, $a1, -0x5CA8
    ctx->pc = 0x799f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943576));
label_799f0c:
    // 0x799f0c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799f10:
    // 0x799f10: 0xc0b0e24  jal         func_2C3890
label_799f14:
    if (ctx->pc == 0x799F14u) {
        ctx->pc = 0x799F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F10u;
        // 0x799f14: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F18u;
        goto label_799f18;
    }
    ctx->pc = 0x799F10u;
    SET_GPR_U32(ctx, 31, 0x799F18u);
    ctx->pc = 0x799F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F10u;
    // 0x799f14: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799F10u, 0x799F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F18u;
label_799f18:
    // 0x799f18: 0x1000003c  b           . + 4 + (0x3C << 2)
label_799f1c:
    if (ctx->pc == 0x799F1Cu) {
        ctx->pc = 0x799F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F18u;
        // 0x799f1c: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F20u;
        goto label_799f20;
    }
    ctx->pc = 0x799F18u;
    {
        const bool branch_taken_0x799f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F18u;
        // 0x799f1c: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f18) {
            ctx->pc = 0x79A00Cu;
            goto label_79a00c;
        }
    }
    ctx->pc = 0x799F20u;
label_799f20:
    // 0x799f20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799f24:
    // 0x799f24: 0xc0afc42  jal         func_2BF108
label_799f28:
    if (ctx->pc == 0x799F28u) {
        ctx->pc = 0x799F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F24u;
        // 0x799f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F2Cu;
        goto label_799f2c;
    }
    ctx->pc = 0x799F24u;
    SET_GPR_U32(ctx, 31, 0x799F2Cu);
    ctx->pc = 0x799F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F24u;
    // 0x799f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799F24u, 0x799F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F2Cu;
label_799f2c:
    // 0x799f2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799f30:
    // 0x799f30: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x799f30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_799f34:
    // 0x799f34: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_799f38:
    if (ctx->pc == 0x799F38u) {
        ctx->pc = 0x799F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F34u;
        // 0x799f38: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F3Cu;
        goto label_799f3c;
    }
    ctx->pc = 0x799F34u;
    {
        const bool branch_taken_0x799f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F34u;
        // 0x799f38: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f34) {
            ctx->pc = 0x799F7Cu;
            goto label_799f7c;
        }
    }
    ctx->pc = 0x799F3Cu;
label_799f3c:
    // 0x799f3c: 0xc1e6a8a  jal         func_79AA28
label_799f40:
    if (ctx->pc == 0x799F40u) {
        ctx->pc = 0x799F44u;
        goto label_799f44;
    }
    ctx->pc = 0x799F3Cu;
    SET_GPR_U32(ctx, 31, 0x799F44u);
    ctx->pc = 0x79AA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AA28u, 0x799F3Cu, 0x799F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F44u;
label_799f44:
    // 0x799f44: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x799f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_799f48:
    // 0x799f48: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_799f4c:
    if (ctx->pc == 0x799F4Cu) {
        ctx->pc = 0x799F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F48u;
        // 0x799f4c: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F50u;
        goto label_799f50;
    }
    ctx->pc = 0x799F48u;
    {
        const bool branch_taken_0x799f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F48u;
        // 0x799f4c: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f48) {
            ctx->pc = 0x799F7Cu;
            goto label_799f7c;
        }
    }
    ctx->pc = 0x799F50u;
label_799f50:
    // 0x799f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799f54:
    // 0x799f54: 0xc0afc42  jal         func_2BF108
label_799f58:
    if (ctx->pc == 0x799F58u) {
        ctx->pc = 0x799F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F54u;
        // 0x799f58: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F5Cu;
        goto label_799f5c;
    }
    ctx->pc = 0x799F54u;
    SET_GPR_U32(ctx, 31, 0x799F5Cu);
    ctx->pc = 0x799F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F54u;
    // 0x799f58: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799F54u, 0x799F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F5Cu;
label_799f5c:
    // 0x799f5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799f60:
    // 0x799f60: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x799f60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_799f64:
    // 0x799f64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_799f68:
    // 0x799f68: 0x3a42821  addu        $a1, $sp, $a0
    ctx->pc = 0x799f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_799f6c:
    // 0x799f6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x799f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_799f70:
    // 0x799f70: 0xc0a573a  jal         func_295CE8
label_799f74:
    if (ctx->pc == 0x799F74u) {
        ctx->pc = 0x799F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F70u;
        // 0x799f74: 0x8ca40080  lw          $a0, 0x80($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F78u;
        goto label_799f78;
    }
    ctx->pc = 0x799F70u;
    SET_GPR_U32(ctx, 31, 0x799F78u);
    ctx->pc = 0x799F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F70u;
    // 0x799f74: 0x8ca40080  lw          $a0, 0x80($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799F70u, 0x799F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F78u;
label_799f78:
    // 0x799f78: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x799f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_799f7c:
    // 0x799f7c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_799f80:
    if (ctx->pc == 0x799F80u) {
        ctx->pc = 0x799F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F7Cu;
        // 0x799f80: 0x2a220006  slti        $v0, $s1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F84u;
        goto label_799f84;
    }
    ctx->pc = 0x799F7Cu;
    {
        const bool branch_taken_0x799f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F7Cu;
        // 0x799f80: 0x2a220006  slti        $v0, $s1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f7c) {
            ctx->pc = 0x799FD4u;
            goto label_799fd4;
        }
    }
    ctx->pc = 0x799F84u;
label_799f84:
    // 0x799f84: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x799f84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_799f88:
    // 0x799f88: 0x14e00012  bnez        $a3, . + 4 + (0x12 << 2)
label_799f8c:
    if (ctx->pc == 0x799F8Cu) {
        ctx->pc = 0x799F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F88u;
        // 0x799f8c: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F90u;
        goto label_799f90;
    }
    ctx->pc = 0x799F88u;
    {
        const bool branch_taken_0x799f88 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F88u;
        // 0x799f8c: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f88) {
            ctx->pc = 0x799FD4u;
            goto label_799fd4;
        }
    }
    ctx->pc = 0x799F90u;
label_799f90:
    // 0x799f90: 0xc0a57ca  jal         func_295F28
label_799f94:
    if (ctx->pc == 0x799F94u) {
        ctx->pc = 0x799F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F90u;
        // 0x799f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F98u;
        goto label_799f98;
    }
    ctx->pc = 0x799F90u;
    SET_GPR_U32(ctx, 31, 0x799F98u);
    ctx->pc = 0x799F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F90u;
    // 0x799f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799F90u, 0x799F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F98u;
label_799f98:
    // 0x799f98: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_799f9c:
    if (ctx->pc == 0x799F9Cu) {
        ctx->pc = 0x799F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F98u;
        // 0x799f9c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FA0u;
        goto label_799fa0;
    }
    ctx->pc = 0x799F98u;
    {
        const bool branch_taken_0x799f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F98u;
        // 0x799f9c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f98) {
            ctx->pc = 0x799FCCu;
            goto label_799fcc;
        }
    }
    ctx->pc = 0x799FA0u;
label_799fa0:
    // 0x799fa0: 0xc0b6dac  jal         func_2DB6B0
label_799fa4:
    if (ctx->pc == 0x799FA4u) {
        ctx->pc = 0x799FA8u;
        goto label_799fa8;
    }
    ctx->pc = 0x799FA0u;
    SET_GPR_U32(ctx, 31, 0x799FA8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799FA0u, 0x799FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FA8u;
label_799fa8:
    // 0x799fa8: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_799fac:
    // 0x799fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799fb0:
    // 0x799fb0: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_799fb4:
    // 0x799fb4: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799fb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_799fb8:
    // 0x799fb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799fbc:
    // 0x799fbc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799fc0:
    // 0x799fc0: 0xc0a57e0  jal         func_295F80
label_799fc4:
    if (ctx->pc == 0x799FC4u) {
        ctx->pc = 0x799FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FC0u;
        // 0x799fc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FC8u;
        goto label_799fc8;
    }
    ctx->pc = 0x799FC0u;
    SET_GPR_U32(ctx, 31, 0x799FC8u);
    ctx->pc = 0x799FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FC0u;
    // 0x799fc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799FC0u, 0x799FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FC8u;
label_799fc8:
    // 0x799fc8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x799fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799fcc:
    // 0x799fcc: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x799fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
label_799fd0:
    // 0x799fd0: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x799fd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_799fd4:
    // 0x799fd4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_799fd8:
    if (ctx->pc == 0x799FD8u) {
        ctx->pc = 0x799FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FD4u;
        // 0x799fd8: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FDCu;
        goto label_799fdc;
    }
    ctx->pc = 0x799FD4u;
    {
        const bool branch_taken_0x799fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FD4u;
        // 0x799fd8: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fd4) {
            ctx->pc = 0x79A00Cu;
            goto label_79a00c;
        }
    }
    ctx->pc = 0x799FDCu;
label_799fdc:
    // 0x799fdc: 0x8faa00c4  lw          $t2, 0xC4($sp)
    ctx->pc = 0x799fdcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_799fe0:
    // 0x799fe0: 0x1540000b  bnez        $t2, . + 4 + (0xB << 2)
label_799fe4:
    if (ctx->pc == 0x799FE4u) {
        ctx->pc = 0x799FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FE0u;
        // 0x799fe4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FE8u;
        goto label_799fe8;
    }
    ctx->pc = 0x799FE0u;
    {
        const bool branch_taken_0x799fe0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x799FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FE0u;
        // 0x799fe4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fe0) {
            ctx->pc = 0x79A010u;
            goto label_79a010;
        }
    }
    ctx->pc = 0x799FE8u;
label_799fe8:
    // 0x799fe8: 0xc0a57ca  jal         func_295F28
label_799fec:
    if (ctx->pc == 0x799FECu) {
        ctx->pc = 0x799FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FE8u;
        // 0x799fec: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FF0u;
        goto label_799ff0;
    }
    ctx->pc = 0x799FE8u;
    SET_GPR_U32(ctx, 31, 0x799FF0u);
    ctx->pc = 0x799FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FE8u;
    // 0x799fec: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799FE8u, 0x799FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FF0u;
label_799ff0:
    // 0x799ff0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_799ff4:
    if (ctx->pc == 0x799FF4u) {
        ctx->pc = 0x799FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FF0u;
        // 0x799ff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FF8u;
        goto label_799ff8;
    }
    ctx->pc = 0x799FF0u;
    {
        const bool branch_taken_0x799ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FF0u;
        // 0x799ff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ff0) {
            ctx->pc = 0x79A004u;
            goto label_79a004;
        }
    }
    ctx->pc = 0x799FF8u;
label_799ff8:
    // 0x799ff8: 0xc0a573a  jal         func_295CE8
label_799ffc:
    if (ctx->pc == 0x799FFCu) {
        ctx->pc = 0x799FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FF8u;
        // 0x799ffc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A000u;
        goto label_79a000;
    }
    ctx->pc = 0x799FF8u;
    SET_GPR_U32(ctx, 31, 0x79A000u);
    ctx->pc = 0x799FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF8u;
    // 0x799ffc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799FF8u, 0x79A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A000u;
label_79a000:
    // 0x79a000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79a000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a004:
    // 0x79a004: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x79a004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_79a008:
    // 0x79a008: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79a008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79a00c:
    // 0x79a00c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a010:
    // 0x79a010: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79a010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
label_79a014:
    // 0x79a014: 0xc0b56a8  jal         func_2D5AA0
label_79a018:
    if (ctx->pc == 0x79A018u) {
        ctx->pc = 0x79A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A014u;
        // 0x79a018: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A01Cu;
        goto label_79a01c;
    }
    ctx->pc = 0x79A014u;
    SET_GPR_U32(ctx, 31, 0x79A01Cu);
    ctx->pc = 0x79A018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A014u;
    // 0x79a018: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A014u, 0x79A01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A01Cu;
label_79a01c:
    // 0x79a01c: 0x1000fede  b           . + 4 + (-0x122 << 2)
label_79a020:
    if (ctx->pc == 0x79A020u) {
        ctx->pc = 0x79A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A01Cu;
        // 0x79a020: 0x8ea4b000  lw          $a0, -0x5000($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946816)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A024u;
        goto label_79a024;
    }
    ctx->pc = 0x79A01Cu;
    {
        const bool branch_taken_0x79a01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A01Cu;
        // 0x79a020: 0x8ea4b000  lw          $a0, -0x5000($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a01c) {
            ctx->pc = 0x799B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b98;
        }
    }
    ctx->pc = 0x79A024u;
label_79a024:
    // 0x79a024: 0x24a4ea60  addiu       $a0, $a1, -0x15A0
    ctx->pc = 0x79a024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_79a028:
    // 0x79a028: 0xc0b0a7e  jal         func_2C29F8
label_79a02c:
    if (ctx->pc == 0x79A02Cu) {
        ctx->pc = 0x79A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A028u;
        // 0x79a02c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A030u;
        goto label_79a030;
    }
    ctx->pc = 0x79A028u;
    SET_GPR_U32(ctx, 31, 0x79A030u);
    ctx->pc = 0x79A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A028u;
    // 0x79a02c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79A028u, 0x79A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A030u;
label_79a030:
    // 0x79a030: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x79a030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
label_79a034:
    // 0x79a034: 0x8cc32f84  lw          $v1, 0x2F84($a2)
    ctx->pc = 0x79a034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12164)));
label_79a038:
    // 0x79a038: 0xc0b5692  jal         func_2D5A48
label_79a03c:
    if (ctx->pc == 0x79A03Cu) {
        ctx->pc = 0x79A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A038u;
        // 0x79a03c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A040u;
        goto label_79a040;
    }
    ctx->pc = 0x79A038u;
    SET_GPR_U32(ctx, 31, 0x79A040u);
    ctx->pc = 0x79A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A038u;
    // 0x79a03c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A038u, 0x79A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A040u;
label_79a040:
    // 0x79a040: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x79a040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_79a044:
    // 0x79a044: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x79a044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_79a048:
    // 0x79a048: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x79a048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_79a04c:
    // 0x79a04c: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x79a04cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_79a050:
    // 0x79a050: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x79a050u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_79a054:
    // 0x79a054: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x79a054u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_79a058:
    // 0x79a058: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x79a058u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_79a05c:
    // 0x79a05c: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x79a05cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_79a060:
    // 0x79a060: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x79a060u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_79a064:
    // 0x79a064: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x79a064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_79a068:
    // 0x79a068: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x79a068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_79a06c:
    // 0x79a06c: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x79a06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_79a070:
    // 0x79a070: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x79a070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_79a074:
    // 0x79a074: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x79a074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79a078:
    // 0x79a078: 0x3e00008  jr          $ra
label_79a07c:
    if (ctx->pc == 0x79A07Cu) {
        ctx->pc = 0x79A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A078u;
        // 0x79a07c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A080u;
        goto label_fallthrough_0x79a078;
    }
    ctx->pc = 0x79A078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A078u;
        // 0x79a07c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79a078:
    ctx->pc = 0x79A080u;
}
} // namespace gh_r204
