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

// Function: cEmManage_GetTargetNear
// Address: 0x290a08 - 0x291010
void cEmManage_GetTargetNear_0x290a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_GetTargetNear_0x290a08");
#endif

    switch (ctx->pc) {
        case 0x290a08u: goto label_290a08;
        case 0x290a0cu: goto label_290a0c;
        case 0x290a10u: goto label_290a10;
        case 0x290a14u: goto label_290a14;
        case 0x290a18u: goto label_290a18;
        case 0x290a1cu: goto label_290a1c;
        case 0x290a20u: goto label_290a20;
        case 0x290a24u: goto label_290a24;
        case 0x290a28u: goto label_290a28;
        case 0x290a2cu: goto label_290a2c;
        case 0x290a30u: goto label_290a30;
        case 0x290a34u: goto label_290a34;
        case 0x290a38u: goto label_290a38;
        case 0x290a3cu: goto label_290a3c;
        case 0x290a40u: goto label_290a40;
        case 0x290a44u: goto label_290a44;
        case 0x290a48u: goto label_290a48;
        case 0x290a4cu: goto label_290a4c;
        case 0x290a50u: goto label_290a50;
        case 0x290a54u: goto label_290a54;
        case 0x290a58u: goto label_290a58;
        case 0x290a5cu: goto label_290a5c;
        case 0x290a60u: goto label_290a60;
        case 0x290a64u: goto label_290a64;
        case 0x290a68u: goto label_290a68;
        case 0x290a6cu: goto label_290a6c;
        case 0x290a70u: goto label_290a70;
        case 0x290a74u: goto label_290a74;
        case 0x290a78u: goto label_290a78;
        case 0x290a7cu: goto label_290a7c;
        case 0x290a80u: goto label_290a80;
        case 0x290a84u: goto label_290a84;
        case 0x290a88u: goto label_290a88;
        case 0x290a8cu: goto label_290a8c;
        case 0x290a90u: goto label_290a90;
        case 0x290a94u: goto label_290a94;
        case 0x290a98u: goto label_290a98;
        case 0x290a9cu: goto label_290a9c;
        case 0x290aa0u: goto label_290aa0;
        case 0x290aa4u: goto label_290aa4;
        case 0x290aa8u: goto label_290aa8;
        case 0x290aacu: goto label_290aac;
        case 0x290ab0u: goto label_290ab0;
        case 0x290ab4u: goto label_290ab4;
        case 0x290ab8u: goto label_290ab8;
        case 0x290abcu: goto label_290abc;
        case 0x290ac0u: goto label_290ac0;
        case 0x290ac4u: goto label_290ac4;
        case 0x290ac8u: goto label_290ac8;
        case 0x290accu: goto label_290acc;
        case 0x290ad0u: goto label_290ad0;
        case 0x290ad4u: goto label_290ad4;
        case 0x290ad8u: goto label_290ad8;
        case 0x290adcu: goto label_290adc;
        case 0x290ae0u: goto label_290ae0;
        case 0x290ae4u: goto label_290ae4;
        case 0x290ae8u: goto label_290ae8;
        case 0x290aecu: goto label_290aec;
        case 0x290af0u: goto label_290af0;
        case 0x290af4u: goto label_290af4;
        case 0x290af8u: goto label_290af8;
        case 0x290afcu: goto label_290afc;
        case 0x290b00u: goto label_290b00;
        case 0x290b04u: goto label_290b04;
        case 0x290b08u: goto label_290b08;
        case 0x290b0cu: goto label_290b0c;
        case 0x290b10u: goto label_290b10;
        case 0x290b14u: goto label_290b14;
        case 0x290b18u: goto label_290b18;
        case 0x290b1cu: goto label_290b1c;
        case 0x290b20u: goto label_290b20;
        case 0x290b24u: goto label_290b24;
        case 0x290b28u: goto label_290b28;
        case 0x290b2cu: goto label_290b2c;
        case 0x290b30u: goto label_290b30;
        case 0x290b34u: goto label_290b34;
        case 0x290b38u: goto label_290b38;
        case 0x290b3cu: goto label_290b3c;
        case 0x290b40u: goto label_290b40;
        case 0x290b44u: goto label_290b44;
        case 0x290b48u: goto label_290b48;
        case 0x290b4cu: goto label_290b4c;
        case 0x290b50u: goto label_290b50;
        case 0x290b54u: goto label_290b54;
        case 0x290b58u: goto label_290b58;
        case 0x290b5cu: goto label_290b5c;
        case 0x290b60u: goto label_290b60;
        case 0x290b64u: goto label_290b64;
        case 0x290b68u: goto label_290b68;
        case 0x290b6cu: goto label_290b6c;
        case 0x290b70u: goto label_290b70;
        case 0x290b74u: goto label_290b74;
        case 0x290b78u: goto label_290b78;
        case 0x290b7cu: goto label_290b7c;
        case 0x290b80u: goto label_290b80;
        case 0x290b84u: goto label_290b84;
        case 0x290b88u: goto label_290b88;
        case 0x290b8cu: goto label_290b8c;
        case 0x290b90u: goto label_290b90;
        case 0x290b94u: goto label_290b94;
        case 0x290b98u: goto label_290b98;
        case 0x290b9cu: goto label_290b9c;
        case 0x290ba0u: goto label_290ba0;
        case 0x290ba4u: goto label_290ba4;
        case 0x290ba8u: goto label_290ba8;
        case 0x290bacu: goto label_290bac;
        case 0x290bb0u: goto label_290bb0;
        case 0x290bb4u: goto label_290bb4;
        case 0x290bb8u: goto label_290bb8;
        case 0x290bbcu: goto label_290bbc;
        case 0x290bc0u: goto label_290bc0;
        case 0x290bc4u: goto label_290bc4;
        case 0x290bc8u: goto label_290bc8;
        case 0x290bccu: goto label_290bcc;
        case 0x290bd0u: goto label_290bd0;
        case 0x290bd4u: goto label_290bd4;
        case 0x290bd8u: goto label_290bd8;
        case 0x290bdcu: goto label_290bdc;
        case 0x290be0u: goto label_290be0;
        case 0x290be4u: goto label_290be4;
        case 0x290be8u: goto label_290be8;
        case 0x290becu: goto label_290bec;
        case 0x290bf0u: goto label_290bf0;
        case 0x290bf4u: goto label_290bf4;
        case 0x290bf8u: goto label_290bf8;
        case 0x290bfcu: goto label_290bfc;
        case 0x290c00u: goto label_290c00;
        case 0x290c04u: goto label_290c04;
        case 0x290c08u: goto label_290c08;
        case 0x290c0cu: goto label_290c0c;
        case 0x290c10u: goto label_290c10;
        case 0x290c14u: goto label_290c14;
        case 0x290c18u: goto label_290c18;
        case 0x290c1cu: goto label_290c1c;
        case 0x290c20u: goto label_290c20;
        case 0x290c24u: goto label_290c24;
        case 0x290c28u: goto label_290c28;
        case 0x290c2cu: goto label_290c2c;
        case 0x290c30u: goto label_290c30;
        case 0x290c34u: goto label_290c34;
        case 0x290c38u: goto label_290c38;
        case 0x290c3cu: goto label_290c3c;
        case 0x290c40u: goto label_290c40;
        case 0x290c44u: goto label_290c44;
        case 0x290c48u: goto label_290c48;
        case 0x290c4cu: goto label_290c4c;
        case 0x290c50u: goto label_290c50;
        case 0x290c54u: goto label_290c54;
        case 0x290c58u: goto label_290c58;
        case 0x290c5cu: goto label_290c5c;
        case 0x290c60u: goto label_290c60;
        case 0x290c64u: goto label_290c64;
        case 0x290c68u: goto label_290c68;
        case 0x290c6cu: goto label_290c6c;
        case 0x290c70u: goto label_290c70;
        case 0x290c74u: goto label_290c74;
        case 0x290c78u: goto label_290c78;
        case 0x290c7cu: goto label_290c7c;
        case 0x290c80u: goto label_290c80;
        case 0x290c84u: goto label_290c84;
        case 0x290c88u: goto label_290c88;
        case 0x290c8cu: goto label_290c8c;
        case 0x290c90u: goto label_290c90;
        case 0x290c94u: goto label_290c94;
        case 0x290c98u: goto label_290c98;
        case 0x290c9cu: goto label_290c9c;
        case 0x290ca0u: goto label_290ca0;
        case 0x290ca4u: goto label_290ca4;
        case 0x290ca8u: goto label_290ca8;
        case 0x290cacu: goto label_290cac;
        case 0x290cb0u: goto label_290cb0;
        case 0x290cb4u: goto label_290cb4;
        case 0x290cb8u: goto label_290cb8;
        case 0x290cbcu: goto label_290cbc;
        case 0x290cc0u: goto label_290cc0;
        case 0x290cc4u: goto label_290cc4;
        case 0x290cc8u: goto label_290cc8;
        case 0x290cccu: goto label_290ccc;
        case 0x290cd0u: goto label_290cd0;
        case 0x290cd4u: goto label_290cd4;
        case 0x290cd8u: goto label_290cd8;
        case 0x290cdcu: goto label_290cdc;
        case 0x290ce0u: goto label_290ce0;
        case 0x290ce4u: goto label_290ce4;
        case 0x290ce8u: goto label_290ce8;
        case 0x290cecu: goto label_290cec;
        case 0x290cf0u: goto label_290cf0;
        case 0x290cf4u: goto label_290cf4;
        case 0x290cf8u: goto label_290cf8;
        case 0x290cfcu: goto label_290cfc;
        case 0x290d00u: goto label_290d00;
        case 0x290d04u: goto label_290d04;
        case 0x290d08u: goto label_290d08;
        case 0x290d0cu: goto label_290d0c;
        case 0x290d10u: goto label_290d10;
        case 0x290d14u: goto label_290d14;
        case 0x290d18u: goto label_290d18;
        case 0x290d1cu: goto label_290d1c;
        case 0x290d20u: goto label_290d20;
        case 0x290d24u: goto label_290d24;
        case 0x290d28u: goto label_290d28;
        case 0x290d2cu: goto label_290d2c;
        case 0x290d30u: goto label_290d30;
        case 0x290d34u: goto label_290d34;
        case 0x290d38u: goto label_290d38;
        case 0x290d3cu: goto label_290d3c;
        case 0x290d40u: goto label_290d40;
        case 0x290d44u: goto label_290d44;
        case 0x290d48u: goto label_290d48;
        case 0x290d4cu: goto label_290d4c;
        case 0x290d50u: goto label_290d50;
        case 0x290d54u: goto label_290d54;
        case 0x290d58u: goto label_290d58;
        case 0x290d5cu: goto label_290d5c;
        case 0x290d60u: goto label_290d60;
        case 0x290d64u: goto label_290d64;
        case 0x290d68u: goto label_290d68;
        case 0x290d6cu: goto label_290d6c;
        case 0x290d70u: goto label_290d70;
        case 0x290d74u: goto label_290d74;
        case 0x290d78u: goto label_290d78;
        case 0x290d7cu: goto label_290d7c;
        case 0x290d80u: goto label_290d80;
        case 0x290d84u: goto label_290d84;
        case 0x290d88u: goto label_290d88;
        case 0x290d8cu: goto label_290d8c;
        case 0x290d90u: goto label_290d90;
        case 0x290d94u: goto label_290d94;
        case 0x290d98u: goto label_290d98;
        case 0x290d9cu: goto label_290d9c;
        case 0x290da0u: goto label_290da0;
        case 0x290da4u: goto label_290da4;
        case 0x290da8u: goto label_290da8;
        case 0x290dacu: goto label_290dac;
        case 0x290db0u: goto label_290db0;
        case 0x290db4u: goto label_290db4;
        case 0x290db8u: goto label_290db8;
        case 0x290dbcu: goto label_290dbc;
        case 0x290dc0u: goto label_290dc0;
        case 0x290dc4u: goto label_290dc4;
        case 0x290dc8u: goto label_290dc8;
        case 0x290dccu: goto label_290dcc;
        case 0x290dd0u: goto label_290dd0;
        case 0x290dd4u: goto label_290dd4;
        case 0x290dd8u: goto label_290dd8;
        case 0x290ddcu: goto label_290ddc;
        case 0x290de0u: goto label_290de0;
        case 0x290de4u: goto label_290de4;
        case 0x290de8u: goto label_290de8;
        case 0x290decu: goto label_290dec;
        case 0x290df0u: goto label_290df0;
        case 0x290df4u: goto label_290df4;
        case 0x290df8u: goto label_290df8;
        case 0x290dfcu: goto label_290dfc;
        case 0x290e00u: goto label_290e00;
        case 0x290e04u: goto label_290e04;
        case 0x290e08u: goto label_290e08;
        case 0x290e0cu: goto label_290e0c;
        case 0x290e10u: goto label_290e10;
        case 0x290e14u: goto label_290e14;
        case 0x290e18u: goto label_290e18;
        case 0x290e1cu: goto label_290e1c;
        case 0x290e20u: goto label_290e20;
        case 0x290e24u: goto label_290e24;
        case 0x290e28u: goto label_290e28;
        case 0x290e2cu: goto label_290e2c;
        case 0x290e30u: goto label_290e30;
        case 0x290e34u: goto label_290e34;
        case 0x290e38u: goto label_290e38;
        case 0x290e3cu: goto label_290e3c;
        case 0x290e40u: goto label_290e40;
        case 0x290e44u: goto label_290e44;
        case 0x290e48u: goto label_290e48;
        case 0x290e4cu: goto label_290e4c;
        case 0x290e50u: goto label_290e50;
        case 0x290e54u: goto label_290e54;
        case 0x290e58u: goto label_290e58;
        case 0x290e5cu: goto label_290e5c;
        case 0x290e60u: goto label_290e60;
        case 0x290e64u: goto label_290e64;
        case 0x290e68u: goto label_290e68;
        case 0x290e6cu: goto label_290e6c;
        case 0x290e70u: goto label_290e70;
        case 0x290e74u: goto label_290e74;
        case 0x290e78u: goto label_290e78;
        case 0x290e7cu: goto label_290e7c;
        case 0x290e80u: goto label_290e80;
        case 0x290e84u: goto label_290e84;
        case 0x290e88u: goto label_290e88;
        case 0x290e8cu: goto label_290e8c;
        case 0x290e90u: goto label_290e90;
        case 0x290e94u: goto label_290e94;
        case 0x290e98u: goto label_290e98;
        case 0x290e9cu: goto label_290e9c;
        case 0x290ea0u: goto label_290ea0;
        case 0x290ea4u: goto label_290ea4;
        case 0x290ea8u: goto label_290ea8;
        case 0x290eacu: goto label_290eac;
        case 0x290eb0u: goto label_290eb0;
        case 0x290eb4u: goto label_290eb4;
        case 0x290eb8u: goto label_290eb8;
        case 0x290ebcu: goto label_290ebc;
        case 0x290ec0u: goto label_290ec0;
        case 0x290ec4u: goto label_290ec4;
        case 0x290ec8u: goto label_290ec8;
        case 0x290eccu: goto label_290ecc;
        case 0x290ed0u: goto label_290ed0;
        case 0x290ed4u: goto label_290ed4;
        case 0x290ed8u: goto label_290ed8;
        case 0x290edcu: goto label_290edc;
        case 0x290ee0u: goto label_290ee0;
        case 0x290ee4u: goto label_290ee4;
        case 0x290ee8u: goto label_290ee8;
        case 0x290eecu: goto label_290eec;
        case 0x290ef0u: goto label_290ef0;
        case 0x290ef4u: goto label_290ef4;
        case 0x290ef8u: goto label_290ef8;
        case 0x290efcu: goto label_290efc;
        case 0x290f00u: goto label_290f00;
        case 0x290f04u: goto label_290f04;
        case 0x290f08u: goto label_290f08;
        case 0x290f0cu: goto label_290f0c;
        case 0x290f10u: goto label_290f10;
        case 0x290f14u: goto label_290f14;
        case 0x290f18u: goto label_290f18;
        case 0x290f1cu: goto label_290f1c;
        case 0x290f20u: goto label_290f20;
        case 0x290f24u: goto label_290f24;
        case 0x290f28u: goto label_290f28;
        case 0x290f2cu: goto label_290f2c;
        case 0x290f30u: goto label_290f30;
        case 0x290f34u: goto label_290f34;
        case 0x290f38u: goto label_290f38;
        case 0x290f3cu: goto label_290f3c;
        case 0x290f40u: goto label_290f40;
        case 0x290f44u: goto label_290f44;
        case 0x290f48u: goto label_290f48;
        case 0x290f4cu: goto label_290f4c;
        case 0x290f50u: goto label_290f50;
        case 0x290f54u: goto label_290f54;
        case 0x290f58u: goto label_290f58;
        case 0x290f5cu: goto label_290f5c;
        case 0x290f60u: goto label_290f60;
        case 0x290f64u: goto label_290f64;
        case 0x290f68u: goto label_290f68;
        case 0x290f6cu: goto label_290f6c;
        case 0x290f70u: goto label_290f70;
        case 0x290f74u: goto label_290f74;
        case 0x290f78u: goto label_290f78;
        case 0x290f7cu: goto label_290f7c;
        case 0x290f80u: goto label_290f80;
        case 0x290f84u: goto label_290f84;
        case 0x290f88u: goto label_290f88;
        case 0x290f8cu: goto label_290f8c;
        case 0x290f90u: goto label_290f90;
        case 0x290f94u: goto label_290f94;
        case 0x290f98u: goto label_290f98;
        case 0x290f9cu: goto label_290f9c;
        case 0x290fa0u: goto label_290fa0;
        case 0x290fa4u: goto label_290fa4;
        case 0x290fa8u: goto label_290fa8;
        case 0x290facu: goto label_290fac;
        case 0x290fb0u: goto label_290fb0;
        case 0x290fb4u: goto label_290fb4;
        case 0x290fb8u: goto label_290fb8;
        case 0x290fbcu: goto label_290fbc;
        case 0x290fc0u: goto label_290fc0;
        case 0x290fc4u: goto label_290fc4;
        case 0x290fc8u: goto label_290fc8;
        case 0x290fccu: goto label_290fcc;
        case 0x290fd0u: goto label_290fd0;
        case 0x290fd4u: goto label_290fd4;
        case 0x290fd8u: goto label_290fd8;
        case 0x290fdcu: goto label_290fdc;
        case 0x290fe0u: goto label_290fe0;
        case 0x290fe4u: goto label_290fe4;
        case 0x290fe8u: goto label_290fe8;
        case 0x290fecu: goto label_290fec;
        case 0x290ff0u: goto label_290ff0;
        case 0x290ff4u: goto label_290ff4;
        case 0x290ff8u: goto label_290ff8;
        case 0x290ffcu: goto label_290ffc;
        case 0x291000u: goto label_291000;
        case 0x291004u: goto label_291004;
        case 0x291008u: goto label_291008;
        case 0x29100cu: goto label_29100c;
        default: break;
    }

    ctx->pc = 0x290a08u;

label_290a08:
    // 0x290a08: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x290a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_290a0c:
    // 0x290a0c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x290a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_290a10:
    // 0x290a10: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x290a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_290a14:
    // 0x290a14: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x290a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_290a18:
    // 0x290a18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x290a18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_290a1c:
    // 0x290a1c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x290a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_290a20:
    // 0x290a20: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x290a20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_290a24:
    // 0x290a24: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x290a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_290a28:
    // 0x290a28: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x290a28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_290a2c:
    // 0x290a2c: 0xe7b80120  swc1        $f24, 0x120($sp)
    ctx->pc = 0x290a2cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_290a30:
    // 0x290a30: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x290a30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290a34:
    // 0x290a34: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x290a34u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_290a38:
    // 0x290a38: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x290a38u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
label_290a3c:
    // 0x290a3c: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x290a3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_290a40:
    // 0x290a40: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x290a40u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
label_290a44:
    // 0x290a44: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x290a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_290a48:
    // 0x290a48: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x290a48u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_290a4c:
    // 0x290a4c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x290a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_290a50:
    // 0x290a50: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x290a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_290a54:
    // 0x290a54: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x290a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_290a58:
    // 0x290a58: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x290a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_290a5c:
    // 0x290a5c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x290a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_290a60:
    // 0x290a60: 0xe7b90128  swc1        $f25, 0x128($sp)
    ctx->pc = 0x290a60u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_290a64:
    // 0x290a64: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x290a64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_290a68:
    // 0x290a68: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x290a68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_290a6c:
    // 0x290a6c: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x290a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_290a70:
    // 0x290a70: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x290a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_290a74:
    // 0x290a74: 0x10520008  beq         $v0, $s2, . + 4 + (0x8 << 2)
label_290a78:
    if (ctx->pc == 0x290A78u) {
        ctx->pc = 0x290A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A74u;
        // 0x290a78: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x290A7Cu;
        goto label_290a7c;
    }
    ctx->pc = 0x290A74u;
    {
        const bool branch_taken_0x290a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x290A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A74u;
        // 0x290a78: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a74) {
            ctx->pc = 0x290A98u;
            goto label_290a98;
        }
    }
    ctx->pc = 0x290A7Cu;
label_290a7c:
    // 0x290a7c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x290a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290a80:
    // 0x290a80: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x290a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_290a84:
    // 0x290a84: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x290a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_290a88:
    // 0x290a88: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x290a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_290a8c:
    // 0x290a8c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x290a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_290a90:
    // 0x290a90: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x290a90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_290a94:
    // 0x290a94: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x290a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290a98:
    // 0x290a98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x290a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_290a9c:
    // 0x290a9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x290a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_290aa0:
    // 0x290aa0: 0x8c910500  lw          $s1, 0x500($a0)
    ctx->pc = 0x290aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1280)));
label_290aa4:
    // 0x290aa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x290aa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_290aa8:
    // 0x290aa8: 0x122000a4  beqz        $s1, . + 4 + (0xA4 << 2)
label_290aac:
    if (ctx->pc == 0x290AACu) {
        ctx->pc = 0x290AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AA8u;
        // 0x290aac: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x290AB0u;
        goto label_290ab0;
    }
    ctx->pc = 0x290AA8u;
    {
        const bool branch_taken_0x290aa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x290AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AA8u;
        // 0x290aac: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290aa8) {
            ctx->pc = 0x290D3Cu;
            goto label_290d3c;
        }
    }
    ctx->pc = 0x290AB0u;
label_290ab0:
    // 0x290ab0: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x290ab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_290ab4:
    // 0x290ab4: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x290ab4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_290ab8:
    // 0x290ab8: 0x24150260  addiu       $s5, $zero, 0x260
    ctx->pc = 0x290ab8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_290abc:
    // 0x290abc: 0x2413026a  addiu       $s3, $zero, 0x26A
    ctx->pc = 0x290abcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_290ac0:
    // 0x290ac0: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x290ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_290ac4:
    // 0x290ac4: 0x0  nop
    ctx->pc = 0x290ac4u;
    // NOP
label_290ac8:
    // 0x290ac8: 0x5200009a  beql        $s0, $zero, . + 4 + (0x9A << 2)
label_290acc:
    if (ctx->pc == 0x290ACCu) {
        ctx->pc = 0x290ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AC8u;
        // 0x290acc: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290AD0u;
        goto label_290ad0;
    }
    ctx->pc = 0x290AC8u;
    {
        const bool branch_taken_0x290ac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x290ac8) {
            ctx->pc = 0x290ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290AC8u;
            // 0x290acc: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290D34u;
            goto label_290d34;
        }
    }
    ctx->pc = 0x290AD0u;
label_290ad0:
    // 0x290ad0: 0x52170098  beql        $s0, $s7, . + 4 + (0x98 << 2)
label_290ad4:
    if (ctx->pc == 0x290AD4u) {
        ctx->pc = 0x290AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AD0u;
        // 0x290ad4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290AD8u;
        goto label_290ad8;
    }
    ctx->pc = 0x290AD0u;
    {
        const bool branch_taken_0x290ad0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 23));
        if (branch_taken_0x290ad0) {
            ctx->pc = 0x290AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290AD0u;
            // 0x290ad4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290D34u;
            goto label_290d34;
        }
    }
    ctx->pc = 0x290AD8u;
label_290ad8:
    // 0x290ad8: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x290ad8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_290adc:
    // 0x290adc: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x290adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_290ae0:
    // 0x290ae0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_290ae4:
    if (ctx->pc == 0x290AE4u) {
        ctx->pc = 0x290AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AE0u;
        // 0x290ae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290AE8u;
        goto label_290ae8;
    }
    ctx->pc = 0x290AE0u;
    {
        const bool branch_taken_0x290ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AE0u;
        // 0x290ae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ae0) {
            ctx->pc = 0x290AF0u;
            goto label_290af0;
        }
    }
    ctx->pc = 0x290AE8u;
label_290ae8:
    // 0x290ae8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x290ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_290aec:
    // 0x290aec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x290aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290af0:
    // 0x290af0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x290af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_290af4:
    // 0x290af4: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
label_290af8:
    if (ctx->pc == 0x290AF8u) {
        ctx->pc = 0x290AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AF4u;
        // 0x290af8: 0x28620280  slti        $v0, $v1, 0x280 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)640) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290AFCu;
        goto label_290afc;
    }
    ctx->pc = 0x290AF4u;
    {
        const bool branch_taken_0x290af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AF4u;
        // 0x290af8: 0x28620280  slti        $v0, $v1, 0x280 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)640) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290af4) {
            ctx->pc = 0x290D30u;
            goto label_290d30;
        }
    }
    ctx->pc = 0x290AFCu;
label_290afc:
    // 0x290afc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x290afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_290b00:
    // 0x290b00: 0x5440008c  bnel        $v0, $zero, . + 4 + (0x8C << 2)
label_290b04:
    if (ctx->pc == 0x290B04u) {
        ctx->pc = 0x290B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B00u;
        // 0x290b04: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B08u;
        goto label_290b08;
    }
    ctx->pc = 0x290B00u;
    {
        const bool branch_taken_0x290b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290b00) {
            ctx->pc = 0x290B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290B00u;
            // 0x290b04: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290D34u;
            goto label_290d34;
        }
    }
    ctx->pc = 0x290B08u;
label_290b08:
    // 0x290b08: 0x5296001d  beql        $s4, $s6, . + 4 + (0x1D << 2)
label_290b0c:
    if (ctx->pc == 0x290B0Cu) {
        ctx->pc = 0x290B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B08u;
        // 0x290b0c: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B10u;
        goto label_290b10;
    }
    ctx->pc = 0x290B08u;
    {
        const bool branch_taken_0x290b08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 22));
        if (branch_taken_0x290b08) {
            ctx->pc = 0x290B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290B08u;
            // 0x290b0c: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290B80u;
            goto label_290b80;
        }
    }
    ctx->pc = 0x290B10u;
label_290b10:
    // 0x290b10: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x290b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_290b14:
    // 0x290b14: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x290b14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_290b18:
    // 0x290b18: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x290b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_290b1c:
    // 0x290b1c: 0x40f809  jalr        $v0
label_290b20:
    if (ctx->pc == 0x290B20u) {
        ctx->pc = 0x290B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B1Cu;
        // 0x290b20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B24u;
        goto label_290b24;
    }
    ctx->pc = 0x290B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290B24u);
        ctx->pc = 0x290B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B1Cu;
        // 0x290b20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290B1Cu, 0x290B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290B24u;
label_290b24:
    // 0x290b24: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_290b28:
    if (ctx->pc == 0x290B28u) {
        ctx->pc = 0x290B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B24u;
        // 0x290b28: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B2Cu;
        goto label_290b2c;
    }
    ctx->pc = 0x290B24u;
    {
        const bool branch_taken_0x290b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290b24) {
            ctx->pc = 0x290B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290B24u;
            // 0x290b28: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290B80u;
            goto label_290b80;
        }
    }
    ctx->pc = 0x290B2Cu;
label_290b2c:
    // 0x290b2c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x290b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_290b30:
    // 0x290b30: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x290b30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_290b34:
    // 0x290b34: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x290b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_290b38:
    // 0x290b38: 0x40f809  jalr        $v0
label_290b3c:
    if (ctx->pc == 0x290B3Cu) {
        ctx->pc = 0x290B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B38u;
        // 0x290b3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B40u;
        goto label_290b40;
    }
    ctx->pc = 0x290B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290B40u);
        ctx->pc = 0x290B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B38u;
        // 0x290b3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290B38u, 0x290B40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290B40u;
label_290b40:
    // 0x290b40: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x290b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_290b44:
    // 0x290b44: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x290b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290b48:
    // 0x290b48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x290b48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_290b4c:
    // 0x290b4c: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x290b4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290b50:
    // 0x290b50: 0x0  nop
    ctx->pc = 0x290b50u;
    // NOP
label_290b54:
    // 0x290b54: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_290b58:
    if (ctx->pc == 0x290B58u) {
        ctx->pc = 0x290B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B54u;
        // 0x290b58: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B5Cu;
        goto label_290b5c;
    }
    ctx->pc = 0x290B54u;
    {
        const bool branch_taken_0x290b54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B54u;
        // 0x290b58: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b54) {
            ctx->pc = 0x290B60u;
            goto label_290b60;
        }
    }
    ctx->pc = 0x290B5Cu;
label_290b5c:
    // 0x290b5c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x290b5cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_290b60:
    // 0x290b60: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x290b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_290b64:
    // 0x290b64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x290b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290b68:
    // 0x290b68: 0x0  nop
    ctx->pc = 0x290b68u;
    // NOP
label_290b6c:
    // 0x290b6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x290b6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290b70:
    // 0x290b70: 0x0  nop
    ctx->pc = 0x290b70u;
    // NOP
label_290b74:
    // 0x290b74: 0x4503006f  bc1tl       . + 4 + (0x6F << 2)
label_290b78:
    if (ctx->pc == 0x290B78u) {
        ctx->pc = 0x290B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B74u;
        // 0x290b78: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B7Cu;
        goto label_290b7c;
    }
    ctx->pc = 0x290B74u;
    {
        const bool branch_taken_0x290b74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x290b74) {
            ctx->pc = 0x290B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290B74u;
            // 0x290b78: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290D34u;
            goto label_290d34;
        }
    }
    ctx->pc = 0x290B7Cu;
label_290b7c:
    // 0x290b7c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x290b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_290b80:
    // 0x290b80: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x290b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_290b84:
    // 0x290b84: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x290b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
label_290b88:
    // 0x290b88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_290b8c:
    if (ctx->pc == 0x290B8Cu) {
        ctx->pc = 0x290B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B88u;
        // 0x290b8c: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290B90u;
        goto label_290b90;
    }
    ctx->pc = 0x290B88u;
    {
        const bool branch_taken_0x290b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B88u;
        // 0x290b8c: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b88) {
            ctx->pc = 0x290BA8u;
            goto label_290ba8;
        }
    }
    ctx->pc = 0x290B90u;
label_290b90:
    // 0x290b90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_290b94:
    if (ctx->pc == 0x290B94u) {
        ctx->pc = 0x290B98u;
        goto label_290b98;
    }
    ctx->pc = 0x290B90u;
    {
        const bool branch_taken_0x290b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290b90) {
            ctx->pc = 0x290BB8u;
            goto label_290bb8;
        }
    }
    ctx->pc = 0x290B98u;
label_290b98:
    // 0x290b98: 0x10750007  beq         $v1, $s5, . + 4 + (0x7 << 2)
label_290b9c:
    if (ctx->pc == 0x290B9Cu) {
        ctx->pc = 0x290BA0u;
        goto label_290ba0;
    }
    ctx->pc = 0x290B98u;
    {
        const bool branch_taken_0x290b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x290b98) {
            ctx->pc = 0x290BB8u;
            goto label_290bb8;
        }
    }
    ctx->pc = 0x290BA0u;
label_290ba0:
    // 0x290ba0: 0x1000000b  b           . + 4 + (0xB << 2)
label_290ba4:
    if (ctx->pc == 0x290BA4u) {
        ctx->pc = 0x290BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BA0u;
        // 0x290ba4: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BA8u;
        goto label_290ba8;
    }
    ctx->pc = 0x290BA0u;
    {
        const bool branch_taken_0x290ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BA0u;
        // 0x290ba4: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ba0) {
            ctx->pc = 0x290BD0u;
            goto label_290bd0;
        }
    }
    ctx->pc = 0x290BA8u;
label_290ba8:
    // 0x290ba8: 0x10730007  beq         $v1, $s3, . + 4 + (0x7 << 2)
label_290bac:
    if (ctx->pc == 0x290BACu) {
        ctx->pc = 0x290BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BA8u;
        // 0x290bac: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BB0u;
        goto label_290bb0;
    }
    ctx->pc = 0x290BA8u;
    {
        const bool branch_taken_0x290ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x290BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BA8u;
        // 0x290bac: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ba8) {
            ctx->pc = 0x290BC8u;
            goto label_290bc8;
        }
    }
    ctx->pc = 0x290BB0u;
label_290bb0:
    // 0x290bb0: 0x10000008  b           . + 4 + (0x8 << 2)
label_290bb4:
    if (ctx->pc == 0x290BB4u) {
        ctx->pc = 0x290BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BB0u;
        // 0x290bb4: 0x84640068  lh          $a0, 0x68($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BB8u;
        goto label_290bb8;
    }
    ctx->pc = 0x290BB0u;
    {
        const bool branch_taken_0x290bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BB0u;
        // 0x290bb4: 0x84640068  lh          $a0, 0x68($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bb0) {
            ctx->pc = 0x290BD4u;
            goto label_290bd4;
        }
    }
    ctx->pc = 0x290BB8u;
label_290bb8:
    // 0x290bb8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x290bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_290bbc:
    // 0x290bbc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x290bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_290bc0:
    // 0x290bc0: 0x10000003  b           . + 4 + (0x3 << 2)
label_290bc4:
    if (ctx->pc == 0x290BC4u) {
        ctx->pc = 0x290BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BC0u;
        // 0x290bc4: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BC8u;
        goto label_290bc8;
    }
    ctx->pc = 0x290BC0u;
    {
        const bool branch_taken_0x290bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BC0u;
        // 0x290bc4: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bc0) {
            ctx->pc = 0x290BD0u;
            goto label_290bd0;
        }
    }
    ctx->pc = 0x290BC8u;
label_290bc8:
    // 0x290bc8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x290bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_290bcc:
    // 0x290bcc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x290bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_290bd0:
    // 0x290bd0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x290bd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_290bd4:
    // 0x290bd4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x290bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_290bd8:
    // 0x290bd8: 0x40f809  jalr        $v0
label_290bdc:
    if (ctx->pc == 0x290BDCu) {
        ctx->pc = 0x290BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BD8u;
        // 0x290bdc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BE0u;
        goto label_290be0;
    }
    ctx->pc = 0x290BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290BE0u);
        ctx->pc = 0x290BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BD8u;
        // 0x290bdc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290BD8u, 0x290BE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290BE0u;
label_290be0:
    // 0x290be0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x290be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290be4:
    // 0x290be4: 0xc07dfac  jal         func_1F7EB0
label_290be8:
    if (ctx->pc == 0x290BE8u) {
        ctx->pc = 0x290BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BE4u;
        // 0x290be8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290BECu;
        goto label_290bec;
    }
    ctx->pc = 0x290BE4u;
    SET_GPR_U32(ctx, 31, 0x290BECu);
    ctx->pc = 0x290BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290BE4u;
    // 0x290be8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x290BE4u, 0x290BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BECu;
label_290bec:
    // 0x290bec: 0x4614b840  add.s       $f1, $f23, $f20
    ctx->pc = 0x290becu;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
label_290bf0:
    // 0x290bf0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x290bf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_290bf4:
    // 0x290bf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x290bf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290bf8:
    // 0x290bf8: 0x0  nop
    ctx->pc = 0x290bf8u;
    // NOP
label_290bfc:
    // 0x290bfc: 0x4503004d  bc1tl       . + 4 + (0x4D << 2)
label_290c00:
    if (ctx->pc == 0x290C00u) {
        ctx->pc = 0x290C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BFCu;
        // 0x290c00: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C04u;
        goto label_290c04;
    }
    ctx->pc = 0x290BFCu;
    {
        const bool branch_taken_0x290bfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x290bfc) {
            ctx->pc = 0x290C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290BFCu;
            // 0x290c00: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290D34u;
            goto label_290d34;
        }
    }
    ctx->pc = 0x290C04u;
label_290c04:
    // 0x290c04: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x290c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_290c08:
    // 0x290c08: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x290c08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_290c0c:
    // 0x290c0c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x290c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_290c10:
    // 0x290c10: 0x40f809  jalr        $v0
label_290c14:
    if (ctx->pc == 0x290C14u) {
        ctx->pc = 0x290C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C10u;
        // 0x290c14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C18u;
        goto label_290c18;
    }
    ctx->pc = 0x290C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290C18u);
        ctx->pc = 0x290C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C10u;
        // 0x290c14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290C10u, 0x290C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290C18u;
label_290c18:
    // 0x290c18: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x290c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_290c1c:
    // 0x290c1c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x290c1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_290c20:
    // 0x290c20: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x290c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_290c24:
    // 0x290c24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x290c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290c28:
    // 0x290c28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x290c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_290c2c:
    // 0x290c2c: 0xc0b680e  jal         func_2DA038
label_290c30:
    if (ctx->pc == 0x290C30u) {
        ctx->pc = 0x290C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C2Cu;
        // 0x290c30: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C34u;
        goto label_290c34;
    }
    ctx->pc = 0x290C2Cu;
    SET_GPR_U32(ctx, 31, 0x290C34u);
    ctx->pc = 0x290C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C2Cu;
    // 0x290c30: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x290C2Cu, 0x290C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C34u;
label_290c34:
    // 0x290c34: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x290c34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_290c38:
    // 0x290c38: 0x4619a034  c.lt.s      $f20, $f25
    ctx->pc = 0x290c38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290c3c:
    // 0x290c3c: 0x0  nop
    ctx->pc = 0x290c3cu;
    // NOP
label_290c40:
    // 0x290c40: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_290c44:
    if (ctx->pc == 0x290C44u) {
        ctx->pc = 0x290C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C40u;
        // 0x290c44: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C48u;
        goto label_290c48;
    }
    ctx->pc = 0x290C40u;
    {
        const bool branch_taken_0x290c40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C40u;
        // 0x290c44: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c40) {
            ctx->pc = 0x290C4Cu;
            goto label_290c4c;
        }
    }
    ctx->pc = 0x290C48u;
label_290c48:
    // 0x290c48: 0x4600a547  neg.s       $f21, $f20
    ctx->pc = 0x290c48u;
    ctx->f[21] = FPU_NEG_S(ctx->f[20]);
label_290c4c:
    // 0x290c4c: 0x4615b034  c.lt.s      $f22, $f21
    ctx->pc = 0x290c4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290c50:
    // 0x290c50: 0x0  nop
    ctx->pc = 0x290c50u;
    // NOP
label_290c54:
    // 0x290c54: 0x45030037  bc1tl       . + 4 + (0x37 << 2)
label_290c58:
    if (ctx->pc == 0x290C58u) {
        ctx->pc = 0x290C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C54u;
        // 0x290c58: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C5Cu;
        goto label_290c5c;
    }
    ctx->pc = 0x290C54u;
    {
        const bool branch_taken_0x290c54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x290c54) {
            ctx->pc = 0x290C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290C54u;
            // 0x290c58: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290D34u;
            goto label_290d34;
        }
    }
    ctx->pc = 0x290C5Cu;
label_290c5c:
    // 0x290c5c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x290c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_290c60:
    // 0x290c60: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x290c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
label_290c64:
    // 0x290c64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_290c68:
    if (ctx->pc == 0x290C68u) {
        ctx->pc = 0x290C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C64u;
        // 0x290c68: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C6Cu;
        goto label_290c6c;
    }
    ctx->pc = 0x290C64u;
    {
        const bool branch_taken_0x290c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C64u;
        // 0x290c68: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290c64) {
            ctx->pc = 0x290C84u;
            goto label_290c84;
        }
    }
    ctx->pc = 0x290C6Cu;
label_290c6c:
    // 0x290c6c: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
label_290c70:
    if (ctx->pc == 0x290C70u) {
        ctx->pc = 0x290C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C6Cu;
        // 0x290c70: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C74u;
        goto label_290c74;
    }
    ctx->pc = 0x290C6Cu;
    {
        const bool branch_taken_0x290c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290c6c) {
            ctx->pc = 0x290C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290C6Cu;
            // 0x290c70: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290D2Cu;
            goto label_290d2c;
        }
    }
    ctx->pc = 0x290C74u;
label_290c74:
    // 0x290c74: 0x5075002d  beql        $v1, $s5, . + 4 + (0x2D << 2)
label_290c78:
    if (ctx->pc == 0x290C78u) {
        ctx->pc = 0x290C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C74u;
        // 0x290c78: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C7Cu;
        goto label_290c7c;
    }
    ctx->pc = 0x290C74u;
    {
        const bool branch_taken_0x290c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x290c74) {
            ctx->pc = 0x290C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290C74u;
            // 0x290c78: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290D2Cu;
            goto label_290d2c;
        }
    }
    ctx->pc = 0x290C7Cu;
label_290c7c:
    // 0x290c7c: 0x10000003  b           . + 4 + (0x3 << 2)
label_290c80:
    if (ctx->pc == 0x290C80u) {
        ctx->pc = 0x290C84u;
        goto label_290c84;
    }
    ctx->pc = 0x290C7Cu;
    {
        const bool branch_taken_0x290c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290c7c) {
            ctx->pc = 0x290C8Cu;
            goto label_290c8c;
        }
    }
    ctx->pc = 0x290C84u;
label_290c84:
    // 0x290c84: 0x50730029  beql        $v1, $s3, . + 4 + (0x29 << 2)
label_290c88:
    if (ctx->pc == 0x290C88u) {
        ctx->pc = 0x290C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C84u;
        // 0x290c88: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C8Cu;
        goto label_290c8c;
    }
    ctx->pc = 0x290C84u;
    {
        const bool branch_taken_0x290c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x290c84) {
            ctx->pc = 0x290C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290C84u;
            // 0x290c88: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290D2Cu;
            goto label_290d2c;
        }
    }
    ctx->pc = 0x290C8Cu;
label_290c8c:
    // 0x290c8c: 0x52800004  beql        $s4, $zero, . + 4 + (0x4 << 2)
label_290c90:
    if (ctx->pc == 0x290C90u) {
        ctx->pc = 0x290C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C8Cu;
        // 0x290c90: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C94u;
        goto label_290c94;
    }
    ctx->pc = 0x290C8Cu;
    {
        const bool branch_taken_0x290c8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x290c8c) {
            ctx->pc = 0x290C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290C8Cu;
            // 0x290c90: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290CA0u;
            goto label_290ca0;
        }
    }
    ctx->pc = 0x290C94u;
label_290c94:
    // 0x290c94: 0x56960025  bnel        $s4, $s6, . + 4 + (0x25 << 2)
label_290c98:
    if (ctx->pc == 0x290C98u) {
        ctx->pc = 0x290C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C94u;
        // 0x290c98: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290C9Cu;
        goto label_290c9c;
    }
    ctx->pc = 0x290C94u;
    {
        const bool branch_taken_0x290c94 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 22));
        if (branch_taken_0x290c94) {
            ctx->pc = 0x290C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290C94u;
            // 0x290c98: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290D2Cu;
            goto label_290d2c;
        }
    }
    ctx->pc = 0x290C9Cu;
label_290c9c:
    // 0x290c9c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x290c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_290ca0:
    // 0x290ca0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x290ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_290ca4:
    // 0x290ca4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x290ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_290ca8:
    // 0x290ca8: 0x40f809  jalr        $v0
label_290cac:
    if (ctx->pc == 0x290CACu) {
        ctx->pc = 0x290CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CA8u;
        // 0x290cac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290CB0u;
        goto label_290cb0;
    }
    ctx->pc = 0x290CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290CB0u);
        ctx->pc = 0x290CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CA8u;
        // 0x290cac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290CA8u, 0x290CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290CB0u;
label_290cb0:
    // 0x290cb0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x290cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_290cb4:
    // 0x290cb4: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_290cb8:
    if (ctx->pc == 0x290CB8u) {
        ctx->pc = 0x290CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CB4u;
        // 0x290cb8: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x290CBCu;
        goto label_290cbc;
    }
    ctx->pc = 0x290CB4u;
    {
        const bool branch_taken_0x290cb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x290CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CB4u;
        // 0x290cb8: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290cb4) {
            ctx->pc = 0x290CD8u;
            goto label_290cd8;
        }
    }
    ctx->pc = 0x290CBCu;
label_290cbc:
    // 0x290cbc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x290cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290cc0:
    // 0x290cc0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x290cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_290cc4:
    // 0x290cc4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x290cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_290cc8:
    // 0x290cc8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x290cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_290ccc:
    // 0x290ccc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x290cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290cd0:
    // 0x290cd0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x290cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_290cd4:
    // 0x290cd4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x290cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290cd8:
    // 0x290cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290cdc:
    // 0x290cdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x290cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_290ce0:
    // 0x290ce0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x290ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_290ce4:
    // 0x290ce4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x290ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_290ce8:
    // 0x290ce8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x290ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_290cec:
    // 0x290cec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x290cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290cf0:
    // 0x290cf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x290cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_290cf4:
    // 0x290cf4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x290cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_290cf8:
    // 0x290cf8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x290cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_290cfc:
    // 0x290cfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x290cfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290d00:
    // 0x290d00: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x290d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_290d04:
    // 0x290d04: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x290d04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_290d08:
    // 0x290d08: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x290d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_290d0c:
    // 0x290d0c: 0x2409013c  addiu       $t1, $zero, 0x13C
    ctx->pc = 0x290d0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
label_290d10:
    // 0x290d10: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x290d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_290d14:
    // 0x290d14: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x290d14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290d18:
    // 0x290d18: 0xc04c784  jal         func_131E10
label_290d1c:
    if (ctx->pc == 0x290D1Cu) {
        ctx->pc = 0x290D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D18u;
        // 0x290d1c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D20u;
        goto label_290d20;
    }
    ctx->pc = 0x290D18u;
    SET_GPR_U32(ctx, 31, 0x290D20u);
    ctx->pc = 0x290D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D18u;
    // 0x290d1c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x290D18u, 0x290D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D20u;
label_290d20:
    // 0x290d20: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_290d24:
    if (ctx->pc == 0x290D24u) {
        ctx->pc = 0x290D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D20u;
        // 0x290d24: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D28u;
        goto label_290d28;
    }
    ctx->pc = 0x290D20u;
    {
        const bool branch_taken_0x290d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290d20) {
            ctx->pc = 0x290D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290D20u;
            // 0x290d24: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290D34u;
            goto label_290d34;
        }
    }
    ctx->pc = 0x290D28u;
label_290d28:
    // 0x290d28: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x290d28u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_290d2c:
    // 0x290d2c: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x290d2cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
label_290d30:
    // 0x290d30: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x290d30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_290d34:
    // 0x290d34: 0x5620ff64  bnel        $s1, $zero, . + 4 + (-0x9C << 2)
label_290d38:
    if (ctx->pc == 0x290D38u) {
        ctx->pc = 0x290D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D34u;
        // 0x290d38: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D3Cu;
        goto label_290d3c;
    }
    ctx->pc = 0x290D34u;
    {
        const bool branch_taken_0x290d34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x290d34) {
            ctx->pc = 0x290D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290D34u;
            // 0x290d38: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290ac8;
        }
    }
    ctx->pc = 0x290D3Cu;
label_290d3c:
    // 0x290d3c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x290d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
label_290d40:
    // 0x290d40: 0x8c434c58  lw          $v1, 0x4C58($v0)
    ctx->pc = 0x290d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19544)));
label_290d44:
    // 0x290d44: 0x8c750008  lw          $s5, 0x8($v1)
    ctx->pc = 0x290d44u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_290d48:
    // 0x290d48: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x290d48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_290d4c:
    // 0x290d4c: 0x1275009c  beq         $s3, $s5, . + 4 + (0x9C << 2)
label_290d50:
    if (ctx->pc == 0x290D50u) {
        ctx->pc = 0x290D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D4Cu;
        // 0x290d50: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D54u;
        goto label_290d54;
    }
    ctx->pc = 0x290D4Cu;
    {
        const bool branch_taken_0x290d4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        ctx->pc = 0x290D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D4Cu;
        // 0x290d50: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d4c) {
            ctx->pc = 0x290FC0u;
            goto label_290fc0;
        }
    }
    ctx->pc = 0x290D54u;
label_290d54:
    // 0x290d54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x290d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_290d58:
    // 0x290d58: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x290d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_290d5c:
    // 0x290d5c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x290d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_290d60:
    // 0x290d60: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x290d60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_290d64:
    // 0x290d64: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x290d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_290d68:
    // 0x290d68: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x290d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_290d6c:
    // 0x290d6c: 0x14400092  bnez        $v0, . + 4 + (0x92 << 2)
label_290d70:
    if (ctx->pc == 0x290D70u) {
        ctx->pc = 0x290D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D6Cu;
        // 0x290d70: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D74u;
        goto label_290d74;
    }
    ctx->pc = 0x290D6Cu;
    {
        const bool branch_taken_0x290d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D6Cu;
        // 0x290d70: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d6c) {
            ctx->pc = 0x290FB8u;
            goto label_290fb8;
        }
    }
    ctx->pc = 0x290D74u;
label_290d74:
    // 0x290d74: 0x4600090  bltz        $v1, . + 4 + (0x90 << 2)
label_290d78:
    if (ctx->pc == 0x290D78u) {
        ctx->pc = 0x290D7Cu;
        goto label_290d7c;
    }
    ctx->pc = 0x290D74u;
    {
        const bool branch_taken_0x290d74 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x290d74) {
            ctx->pc = 0x290FB8u;
            goto label_290fb8;
        }
    }
    ctx->pc = 0x290D7Cu;
label_290d7c:
    // 0x290d7c: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x290d7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_290d80:
    // 0x290d80: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x290d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_290d84:
    // 0x290d84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_290d88:
    if (ctx->pc == 0x290D88u) {
        ctx->pc = 0x290D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D84u;
        // 0x290d88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D8Cu;
        goto label_290d8c;
    }
    ctx->pc = 0x290D84u;
    {
        const bool branch_taken_0x290d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D84u;
        // 0x290d88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d84) {
            ctx->pc = 0x290D94u;
            goto label_290d94;
        }
    }
    ctx->pc = 0x290D8Cu;
label_290d8c:
    // 0x290d8c: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x290d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_290d90:
    // 0x290d90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x290d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290d94:
    // 0x290d94: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x290d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_290d98:
    // 0x290d98: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
label_290d9c:
    if (ctx->pc == 0x290D9Cu) {
        ctx->pc = 0x290DA0u;
        goto label_290da0;
    }
    ctx->pc = 0x290D98u;
    {
        const bool branch_taken_0x290d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290d98) {
            ctx->pc = 0x290FB8u;
            goto label_290fb8;
        }
    }
    ctx->pc = 0x290DA0u;
label_290da0:
    // 0x290da0: 0xc06de78  jal         func_1B79E0
label_290da4:
    if (ctx->pc == 0x290DA4u) {
        ctx->pc = 0x290DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DA0u;
        // 0x290da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DA8u;
        goto label_290da8;
    }
    ctx->pc = 0x290DA0u;
    SET_GPR_U32(ctx, 31, 0x290DA8u);
    ctx->pc = 0x290DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290DA0u;
    // 0x290da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B79E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79E0u, 0x290DA0u, 0x290DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290DA8u;
label_290da8:
    // 0x290da8: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
label_290dac:
    if (ctx->pc == 0x290DACu) {
        ctx->pc = 0x290DB0u;
        goto label_290db0;
    }
    ctx->pc = 0x290DA8u;
    {
        const bool branch_taken_0x290da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290da8) {
            ctx->pc = 0x290FB8u;
            goto label_290fb8;
        }
    }
    ctx->pc = 0x290DB0u;
label_290db0:
    // 0x290db0: 0x12170081  beq         $s0, $s7, . + 4 + (0x81 << 2)
label_290db4:
    if (ctx->pc == 0x290DB4u) {
        ctx->pc = 0x290DB8u;
        goto label_290db8;
    }
    ctx->pc = 0x290DB0u;
    {
        const bool branch_taken_0x290db0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 23));
        if (branch_taken_0x290db0) {
            ctx->pc = 0x290FB8u;
            goto label_290fb8;
        }
    }
    ctx->pc = 0x290DB8u;
label_290db8:
    // 0x290db8: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x290db8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_290dbc:
    // 0x290dbc: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x290dbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_290dc0:
    // 0x290dc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x290dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_290dc4:
    // 0x290dc4: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
label_290dc8:
    if (ctx->pc == 0x290DC8u) {
        ctx->pc = 0x290DCCu;
        goto label_290dcc;
    }
    ctx->pc = 0x290DC4u;
    {
        const bool branch_taken_0x290dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290dc4) {
            ctx->pc = 0x290FB8u;
            goto label_290fb8;
        }
    }
    ctx->pc = 0x290DCCu;
label_290dcc:
    // 0x290dcc: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x290dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_290dd0:
    // 0x290dd0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x290dd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_290dd4:
    // 0x290dd4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x290dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_290dd8:
    // 0x290dd8: 0x40f809  jalr        $v0
label_290ddc:
    if (ctx->pc == 0x290DDCu) {
        ctx->pc = 0x290DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DD8u;
        // 0x290ddc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DE0u;
        goto label_290de0;
    }
    ctx->pc = 0x290DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290DE0u);
        ctx->pc = 0x290DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DD8u;
        // 0x290ddc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290DD8u, 0x290DE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290DE0u;
label_290de0:
    // 0x290de0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x290de0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_290de4:
    // 0x290de4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x290de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_290de8:
    // 0x290de8: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x290de8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_290dec:
    // 0x290dec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x290decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_290df0:
    // 0x290df0: 0xc07dfac  jal         func_1F7EB0
label_290df4:
    if (ctx->pc == 0x290DF4u) {
        ctx->pc = 0x290DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DF0u;
        // 0x290df4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DF8u;
        goto label_290df8;
    }
    ctx->pc = 0x290DF0u;
    SET_GPR_U32(ctx, 31, 0x290DF8u);
    ctx->pc = 0x290DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290DF0u;
    // 0x290df4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x290DF0u, 0x290DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290DF8u;
label_290df8:
    // 0x290df8: 0x9e0205b8  lwu         $v0, 0x5B8($s0)
    ctx->pc = 0x290df8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1464)));
label_290dfc:
    // 0x290dfc: 0x212bb  dsra        $v0, $v0, 10
    ctx->pc = 0x290dfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 10);
label_290e00:
    // 0x290e00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x290e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_290e04:
    // 0x290e04: 0x14560029  bne         $v0, $s6, . + 4 + (0x29 << 2)
label_290e08:
    if (ctx->pc == 0x290E08u) {
        ctx->pc = 0x290E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E04u;
        // 0x290e08: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290E0Cu;
        goto label_290e0c;
    }
    ctx->pc = 0x290E04u;
    {
        const bool branch_taken_0x290e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x290E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E04u;
        // 0x290e08: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e04) {
            ctx->pc = 0x290EACu;
            goto label_290eac;
        }
    }
    ctx->pc = 0x290E0Cu;
label_290e0c:
    // 0x290e0c: 0x4617b800  add.s       $f0, $f23, $f23
    ctx->pc = 0x290e0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
label_290e10:
    // 0x290e10: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x290e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_290e14:
    // 0x290e14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x290e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290e18:
    // 0x290e18: 0x0  nop
    ctx->pc = 0x290e18u;
    // NOP
label_290e1c:
    // 0x290e1c: 0x45010066  bc1t        . + 4 + (0x66 << 2)
label_290e20:
    if (ctx->pc == 0x290E20u) {
        ctx->pc = 0x290E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E1Cu;
        // 0x290e20: 0xc7a00054  lwc1        $f0, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x290E24u;
        goto label_290e24;
    }
    ctx->pc = 0x290E1Cu;
    {
        const bool branch_taken_0x290e1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E1Cu;
        // 0x290e20: 0xc7a00054  lwc1        $f0, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e1c) {
            ctx->pc = 0x290FB8u;
            goto label_290fb8;
        }
    }
    ctx->pc = 0x290E24u;
label_290e24:
    // 0x290e24: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x290e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_290e28:
    // 0x290e28: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x290e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_290e2c:
    // 0x290e2c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x290e2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_290e30:
    // 0x290e30: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x290e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290e34:
    // 0x290e34: 0x0  nop
    ctx->pc = 0x290e34u;
    // NOP
label_290e38:
    // 0x290e38: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_290e3c:
    if (ctx->pc == 0x290E3Cu) {
        ctx->pc = 0x290E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E38u;
        // 0x290e3c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290E40u;
        goto label_290e40;
    }
    ctx->pc = 0x290E38u;
    {
        const bool branch_taken_0x290e38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E38u;
        // 0x290e3c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e38) {
            ctx->pc = 0x290E44u;
            goto label_290e44;
        }
    }
    ctx->pc = 0x290E40u;
label_290e40:
    // 0x290e40: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x290e40u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_290e44:
    // 0x290e44: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x290e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_290e48:
    // 0x290e48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x290e48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290e4c:
    // 0x290e4c: 0x0  nop
    ctx->pc = 0x290e4cu;
    // NOP
label_290e50:
    // 0x290e50: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x290e50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290e54:
    // 0x290e54: 0x0  nop
    ctx->pc = 0x290e54u;
    // NOP
label_290e58:
    // 0x290e58: 0x45010057  bc1t        . + 4 + (0x57 << 2)
label_290e5c:
    if (ctx->pc == 0x290E5Cu) {
        ctx->pc = 0x290E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E58u;
        // 0x290e5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290E60u;
        goto label_290e60;
    }
    ctx->pc = 0x290E58u;
    {
        const bool branch_taken_0x290e58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E58u;
        // 0x290e5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e58) {
            ctx->pc = 0x290FB8u;
            goto label_290fb8;
        }
    }
    ctx->pc = 0x290E60u;
label_290e60:
    // 0x290e60: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x290e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_290e64:
    // 0x290e64: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x290e64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_290e68:
    // 0x290e68: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x290e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_290e6c:
    // 0x290e6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x290e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_290e70:
    // 0x290e70: 0xc0b680e  jal         func_2DA038
label_290e74:
    if (ctx->pc == 0x290E74u) {
        ctx->pc = 0x290E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E70u;
        // 0x290e74: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290E78u;
        goto label_290e78;
    }
    ctx->pc = 0x290E70u;
    SET_GPR_U32(ctx, 31, 0x290E78u);
    ctx->pc = 0x290E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290E70u;
    // 0x290e74: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x290E70u, 0x290E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290E78u;
label_290e78:
    // 0x290e78: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x290e78u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_290e7c:
    // 0x290e7c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x290e7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290e80:
    // 0x290e80: 0x0  nop
    ctx->pc = 0x290e80u;
    // NOP
label_290e84:
    // 0x290e84: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_290e88:
    if (ctx->pc == 0x290E88u) {
        ctx->pc = 0x290E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E84u;
        // 0x290e88: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290E8Cu;
        goto label_290e8c;
    }
    ctx->pc = 0x290E84u;
    {
        const bool branch_taken_0x290e84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E84u;
        // 0x290e88: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e84) {
            ctx->pc = 0x290E90u;
            goto label_290e90;
        }
    }
    ctx->pc = 0x290E8Cu;
label_290e8c:
    // 0x290e8c: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x290e8cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
label_290e90:
    // 0x290e90: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x290e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_290e94:
    // 0x290e94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x290e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_290e98:
    // 0x290e98: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x290e98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_290e9c:
    // 0x290e9c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x290e9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_290ea0:
    // 0x290ea0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x290ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290ea4:
    // 0x290ea4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_290ea8:
    if (ctx->pc == 0x290EA8u) {
        ctx->pc = 0x290EACu;
        goto label_290eac;
    }
    ctx->pc = 0x290EA4u;
    {
        const bool branch_taken_0x290ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290ea4) {
            ctx->pc = 0x290F24u;
            goto label_290f24;
        }
    }
    ctx->pc = 0x290EACu;
label_290eac:
    // 0x290eac: 0x4617b802  mul.s       $f0, $f23, $f23
    ctx->pc = 0x290eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
label_290eb0:
    // 0x290eb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x290eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290eb4:
    // 0x290eb4: 0x0  nop
    ctx->pc = 0x290eb4u;
    // NOP
label_290eb8:
    // 0x290eb8: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
label_290ebc:
    if (ctx->pc == 0x290EBCu) {
        ctx->pc = 0x290EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EB8u;
        // 0x290ebc: 0xc7a00054  lwc1        $f0, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x290EC0u;
        goto label_290ec0;
    }
    ctx->pc = 0x290EB8u;
    {
        const bool branch_taken_0x290eb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EB8u;
        // 0x290ebc: 0xc7a00054  lwc1        $f0, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290eb8) {
            ctx->pc = 0x290FB8u;
            goto label_290fb8;
        }
    }
    ctx->pc = 0x290EC0u;
label_290ec0:
    // 0x290ec0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x290ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_290ec4:
    // 0x290ec4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x290ec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_290ec8:
    // 0x290ec8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x290ec8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_290ecc:
    // 0x290ecc: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x290eccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290ed0:
    // 0x290ed0: 0x0  nop
    ctx->pc = 0x290ed0u;
    // NOP
label_290ed4:
    // 0x290ed4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_290ed8:
    if (ctx->pc == 0x290ED8u) {
        ctx->pc = 0x290ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290ED4u;
        // 0x290ed8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290EDCu;
        goto label_290edc;
    }
    ctx->pc = 0x290ED4u;
    {
        const bool branch_taken_0x290ed4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x290ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290ED4u;
        // 0x290ed8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ed4) {
            ctx->pc = 0x290EE0u;
            goto label_290ee0;
        }
    }
    ctx->pc = 0x290EDCu;
label_290edc:
    // 0x290edc: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x290edcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_290ee0:
    // 0x290ee0: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x290ee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290ee4:
    // 0x290ee4: 0x0  nop
    ctx->pc = 0x290ee4u;
    // NOP
label_290ee8:
    // 0x290ee8: 0x45010033  bc1t        . + 4 + (0x33 << 2)
label_290eec:
    if (ctx->pc == 0x290EECu) {
        ctx->pc = 0x290EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EE8u;
        // 0x290eec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290EF0u;
        goto label_290ef0;
    }
    ctx->pc = 0x290EE8u;
    {
        const bool branch_taken_0x290ee8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EE8u;
        // 0x290eec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ee8) {
            ctx->pc = 0x290FB8u;
            goto label_290fb8;
        }
    }
    ctx->pc = 0x290EF0u;
label_290ef0:
    // 0x290ef0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x290ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_290ef4:
    // 0x290ef4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x290ef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_290ef8:
    // 0x290ef8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x290ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_290efc:
    // 0x290efc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x290efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_290f00:
    // 0x290f00: 0xc0b680e  jal         func_2DA038
label_290f04:
    if (ctx->pc == 0x290F04u) {
        ctx->pc = 0x290F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F00u;
        // 0x290f04: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290F08u;
        goto label_290f08;
    }
    ctx->pc = 0x290F00u;
    SET_GPR_U32(ctx, 31, 0x290F08u);
    ctx->pc = 0x290F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F00u;
    // 0x290f04: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x290F00u, 0x290F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F08u;
label_290f08:
    // 0x290f08: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x290f08u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_290f0c:
    // 0x290f0c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x290f0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290f10:
    // 0x290f10: 0x0  nop
    ctx->pc = 0x290f10u;
    // NOP
label_290f14:
    // 0x290f14: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_290f18:
    if (ctx->pc == 0x290F18u) {
        ctx->pc = 0x290F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F14u;
        // 0x290f18: 0x4600a007  neg.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290F1Cu;
        goto label_290f1c;
    }
    ctx->pc = 0x290F14u;
    {
        const bool branch_taken_0x290f14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x290f14) {
            ctx->pc = 0x290F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290F14u;
            // 0x290f18: 0x4600a007  neg.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x290F1Cu;
            goto label_290f1c;
        }
    }
    ctx->pc = 0x290F1Cu;
label_290f1c:
    // 0x290f1c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x290f1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_290f20:
    // 0x290f20: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x290f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_290f24:
    // 0x290f24: 0x0  nop
    ctx->pc = 0x290f24u;
    // NOP
label_290f28:
    // 0x290f28: 0x45010023  bc1t        . + 4 + (0x23 << 2)
label_290f2c:
    if (ctx->pc == 0x290F2Cu) {
        ctx->pc = 0x290F30u;
        goto label_290f30;
    }
    ctx->pc = 0x290F28u;
    {
        const bool branch_taken_0x290f28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x290f28) {
            ctx->pc = 0x290FB8u;
            goto label_290fb8;
        }
    }
    ctx->pc = 0x290F30u;
label_290f30:
    // 0x290f30: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_290f34:
    if (ctx->pc == 0x290F34u) {
        ctx->pc = 0x290F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F30u;
        // 0x290f34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290F38u;
        goto label_290f38;
    }
    ctx->pc = 0x290F30u;
    {
        const bool branch_taken_0x290f30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x290F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F30u;
        // 0x290f34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f30) {
            ctx->pc = 0x290F40u;
            goto label_290f40;
        }
    }
    ctx->pc = 0x290F38u;
label_290f38:
    // 0x290f38: 0x5682001e  bnel        $s4, $v0, . + 4 + (0x1E << 2)
label_290f3c:
    if (ctx->pc == 0x290F3Cu) {
        ctx->pc = 0x290F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F38u;
        // 0x290f3c: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290F40u;
        goto label_290f40;
    }
    ctx->pc = 0x290F38u;
    {
        const bool branch_taken_0x290f38 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x290f38) {
            ctx->pc = 0x290F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290F38u;
            // 0x290f3c: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290FB4u;
            goto label_290fb4;
        }
    }
    ctx->pc = 0x290F40u;
label_290f40:
    // 0x290f40: 0x9e0205b8  lwu         $v0, 0x5B8($s0)
    ctx->pc = 0x290f40u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1464)));
label_290f44:
    // 0x290f44: 0x211fb  dsra        $v0, $v0, 7
    ctx->pc = 0x290f44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 7);
label_290f48:
    // 0x290f48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x290f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_290f4c:
    // 0x290f4c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_290f50:
    if (ctx->pc == 0x290F50u) {
        ctx->pc = 0x290F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F4Cu;
        // 0x290f50: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290F54u;
        goto label_290f54;
    }
    ctx->pc = 0x290F4Cu;
    {
        const bool branch_taken_0x290f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290f4c) {
            ctx->pc = 0x290F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290F4Cu;
            // 0x290f50: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290FB4u;
            goto label_290fb4;
        }
    }
    ctx->pc = 0x290F54u;
label_290f54:
    // 0x290f54: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x290f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_290f58:
    // 0x290f58: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x290f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_290f5c:
    // 0x290f5c: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x290f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_290f60:
    // 0x290f60: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x290f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_290f64:
    // 0x290f64: 0x46190000  add.s       $f0, $f0, $f25
    ctx->pc = 0x290f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
label_290f68:
    // 0x290f68: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x290f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_290f6c:
    // 0x290f6c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x290f6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_290f70:
    // 0x290f70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x290f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290f74:
    // 0x290f74: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x290f74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_290f78:
    // 0x290f78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x290f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290f7c:
    // 0x290f7c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x290f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_290f80:
    // 0x290f80: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x290f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_290f84:
    // 0x290f84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x290f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_290f88:
    // 0x290f88: 0x2409013c  addiu       $t1, $zero, 0x13C
    ctx->pc = 0x290f88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
label_290f8c:
    // 0x290f8c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x290f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_290f90:
    // 0x290f90: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x290f90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290f94:
    // 0x290f94: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x290f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_290f98:
    // 0x290f98: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x290f98u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290f9c:
    // 0x290f9c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x290f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_290fa0:
    // 0x290fa0: 0xc04c784  jal         func_131E10
label_290fa4:
    if (ctx->pc == 0x290FA4u) {
        ctx->pc = 0x290FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FA0u;
        // 0x290fa4: 0xafb60020  sw          $s6, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290FA8u;
        goto label_290fa8;
    }
    ctx->pc = 0x290FA0u;
    SET_GPR_U32(ctx, 31, 0x290FA8u);
    ctx->pc = 0x290FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290FA0u;
    // 0x290fa4: 0xafb60020  sw          $s6, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x290FA0u, 0x290FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290FA8u;
label_290fa8:
    // 0x290fa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_290fac:
    if (ctx->pc == 0x290FACu) {
        ctx->pc = 0x290FB0u;
        goto label_290fb0;
    }
    ctx->pc = 0x290FA8u;
    {
        const bool branch_taken_0x290fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290fa8) {
            ctx->pc = 0x290FB8u;
            goto label_290fb8;
        }
    }
    ctx->pc = 0x290FB0u;
label_290fb0:
    // 0x290fb0: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x290fb0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_290fb4:
    // 0x290fb4: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x290fb4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
label_290fb8:
    // 0x290fb8: 0x1675ff69  bne         $s3, $s5, . + 4 + (-0x97 << 2)
label_290fbc:
    if (ctx->pc == 0x290FBCu) {
        ctx->pc = 0x290FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FB8u;
        // 0x290fbc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290FC0u;
        goto label_290fc0;
    }
    ctx->pc = 0x290FB8u;
    {
        const bool branch_taken_0x290fb8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x290FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FB8u;
        // 0x290fbc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fb8) {
            ctx->pc = 0x290D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290d60;
        }
    }
    ctx->pc = 0x290FC0u;
label_290fc0:
    // 0x290fc0: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x290fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_290fc4:
    // 0x290fc4: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x290fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_290fc8:
    // 0x290fc8: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x290fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_290fcc:
    // 0x290fcc: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x290fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_290fd0:
    // 0x290fd0: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x290fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_290fd4:
    // 0x290fd4: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x290fd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_290fd8:
    // 0x290fd8: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x290fd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_290fdc:
    // 0x290fdc: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x290fdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_290fe0:
    // 0x290fe0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x290fe0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_290fe4:
    // 0x290fe4: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x290fe4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_290fe8:
    // 0x290fe8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x290fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_290fec:
    // 0x290fec: 0xc7b90128  lwc1        $f25, 0x128($sp)
    ctx->pc = 0x290fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_290ff0:
    // 0x290ff0: 0xc7b80120  lwc1        $f24, 0x120($sp)
    ctx->pc = 0x290ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_290ff4:
    // 0x290ff4: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x290ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_290ff8:
    // 0x290ff8: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x290ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_290ffc:
    // 0x290ffc: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x290ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_291000:
    // 0x291000: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x291000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_291004:
    // 0x291004: 0x3e00008  jr          $ra
label_291008:
    if (ctx->pc == 0x291008u) {
        ctx->pc = 0x291008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291004u;
        // 0x291008: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29100Cu;
        goto label_29100c;
    }
    ctx->pc = 0x291004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291004u;
        // 0x291008: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29100Cu;
label_29100c:
    // 0x29100c: 0x0  nop
    ctx->pc = 0x29100cu;
    // NOP
    ctx->pc = 0x291010u;
}
