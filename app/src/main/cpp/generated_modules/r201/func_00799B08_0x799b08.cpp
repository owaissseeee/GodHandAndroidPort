#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r201_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r201
{
// Function: func_00799B08
// Address: 0x799b08 - 0x79a050
void func_00799B08_0x799b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799B08_0x799b08");
#endif

    switch (ctx->pc) {
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
        default: break;
    }

    ctx->pc = 0x799b08u;

label_799b08:
    // 0x799b08: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x799b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_799b0c:
    // 0x799b0c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x799b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_799b10:
    // 0x799b10: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x799b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_799b14:
    // 0x799b14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x799b14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_799b18:
    // 0x799b18: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x799b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_799b1c:
    // 0x799b1c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x799b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_799b20:
    // 0x799b20: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x799b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_799b24:
    // 0x799b24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x799b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_799b28:
    // 0x799b28: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x799b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_799b2c:
    // 0x799b2c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_799b30:
    // 0x799b30: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_799b34:
    // 0x799b34: 0x2451ea60  addiu       $s1, $v0, -0x15A0
    ctx->pc = 0x799b34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
label_799b38:
    // 0x799b38: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x799b38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799b3c:
    // 0x799b3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799b40:
    // 0x799b40: 0xc0b0a92  jal         func_2C2A48
label_799b44:
    if (ctx->pc == 0x799B44u) {
        ctx->pc = 0x799B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B40u;
        // 0x799b44: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B48u;
        goto label_799b48;
    }
    ctx->pc = 0x799B40u;
    SET_GPR_U32(ctx, 31, 0x799B48u);
    ctx->pc = 0x799B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B40u;
    // 0x799b44: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799B40u, 0x799B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B48u;
label_799b48:
    // 0x799b48: 0x3c12005f  lui         $s2, 0x5F
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
label_799b4c:
    // 0x799b4c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799b50:
    // 0x799b50: 0x8c82bd80  lw          $v0, -0x4280($a0)
    ctx->pc = 0x799b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950272)));
label_799b54:
    // 0x799b54: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x799b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_799b58:
    // 0x799b58: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_799b5c:
    if (ctx->pc == 0x799B5Cu) {
        ctx->pc = 0x799B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B58u;
        // 0x799b5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B60u;
        goto label_799b60;
    }
    ctx->pc = 0x799B58u;
    {
        const bool branch_taken_0x799b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B58u;
        // 0x799b5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b58) {
            ctx->pc = 0x799BC4u;
            goto label_799bc4;
        }
    }
    ctx->pc = 0x799B60u;
label_799b60:
    // 0x799b60: 0x8e428658  lw          $v0, -0x79A8($s2)
    ctx->pc = 0x799b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
label_799b64:
    // 0x799b64: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x799b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_799b68:
    // 0x799b68: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799b6c:
    // 0x799b6c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_799b70:
    // 0x799b70: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_799b74:
    if (ctx->pc == 0x799B74u) {
        ctx->pc = 0x799B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B70u;
        // 0x799b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B78u;
        goto label_799b78;
    }
    ctx->pc = 0x799B70u;
    {
        const bool branch_taken_0x799b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B70u;
        // 0x799b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b70) {
            ctx->pc = 0x799B94u;
            goto label_799b94;
        }
    }
    ctx->pc = 0x799B78u;
label_799b78:
    // 0x799b78: 0xc0b0a54  jal         func_2C2950
label_799b7c:
    if (ctx->pc == 0x799B7Cu) {
        ctx->pc = 0x799B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B78u;
        // 0x799b7c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B80u;
        goto label_799b80;
    }
    ctx->pc = 0x799B78u;
    SET_GPR_U32(ctx, 31, 0x799B80u);
    ctx->pc = 0x799B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B78u;
    // 0x799b7c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799B78u, 0x799B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B80u;
label_799b80:
    // 0x799b80: 0x8e03bd80  lw          $v1, -0x4280($s0)
    ctx->pc = 0x799b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799b84:
    // 0x799b84: 0xc06b646  jal         func_1AD918
label_799b88:
    if (ctx->pc == 0x799B88u) {
        ctx->pc = 0x799B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B84u;
        // 0x799b88: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B8Cu;
        goto label_799b8c;
    }
    ctx->pc = 0x799B84u;
    SET_GPR_U32(ctx, 31, 0x799B8Cu);
    ctx->pc = 0x799B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B84u;
    // 0x799b88: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD918u, 0x799B84u, 0x799B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B8Cu;
label_799b8c:
    // 0x799b8c: 0x10000007  b           . + 4 + (0x7 << 2)
label_799b90:
    if (ctx->pc == 0x799B90u) {
        ctx->pc = 0x799B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B8Cu;
        // 0x799b90: 0x8e05bd80  lw          $a1, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B94u;
        goto label_799b94;
    }
    ctx->pc = 0x799B8Cu;
    {
        const bool branch_taken_0x799b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B8Cu;
        // 0x799b90: 0x8e05bd80  lw          $a1, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b8c) {
            ctx->pc = 0x799BACu;
            goto label_799bac;
        }
    }
    ctx->pc = 0x799B94u;
label_799b94:
    // 0x799b94: 0xc0b0a7e  jal         func_2C29F8
label_799b98:
    if (ctx->pc == 0x799B98u) {
        ctx->pc = 0x799B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B94u;
        // 0x799b98: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B9Cu;
        goto label_799b9c;
    }
    ctx->pc = 0x799B94u;
    SET_GPR_U32(ctx, 31, 0x799B9Cu);
    ctx->pc = 0x799B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B94u;
    // 0x799b98: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799B94u, 0x799B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B9Cu;
label_799b9c:
    // 0x799b9c: 0x8e03bd80  lw          $v1, -0x4280($s0)
    ctx->pc = 0x799b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799ba0:
    // 0x799ba0: 0xc06b672  jal         func_1AD9C8
label_799ba4:
    if (ctx->pc == 0x799BA4u) {
        ctx->pc = 0x799BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BA0u;
        // 0x799ba4: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BA8u;
        goto label_799ba8;
    }
    ctx->pc = 0x799BA0u;
    SET_GPR_U32(ctx, 31, 0x799BA8u);
    ctx->pc = 0x799BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BA0u;
    // 0x799ba4: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD9C8u, 0x799BA0u, 0x799BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BA8u;
label_799ba8:
    // 0x799ba8: 0x8e05bd80  lw          $a1, -0x4280($s0)
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799bac:
    // 0x799bac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x799bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_799bb0:
    // 0x799bb0: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x799bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
label_799bb4:
    // 0x799bb4: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x799bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_799bb8:
    // 0x799bb8: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_799bbc:
    // 0x799bbc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_799bc0:
    // 0x799bc0: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x799bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_799bc4:
    // 0x799bc4: 0x8e02bd80  lw          $v0, -0x4280($s0)
    ctx->pc = 0x799bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799bc8:
    // 0x799bc8: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x799bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_799bcc:
    // 0x799bcc: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
label_799bd0:
    if (ctx->pc == 0x799BD0u) {
        ctx->pc = 0x799BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BCCu;
        // 0x799bd0: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BD4u;
        goto label_799bd4;
    }
    ctx->pc = 0x799BCCu;
    {
        const bool branch_taken_0x799bcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BCCu;
        // 0x799bd0: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bcc) {
            ctx->pc = 0x799C60u;
            goto label_799c60;
        }
    }
    ctx->pc = 0x799BD4u;
label_799bd4:
    // 0x799bd4: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x799bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_799bd8:
    // 0x799bd8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799bdc:
    // 0x799bdc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_799be0:
    // 0x799be0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_799be4:
    if (ctx->pc == 0x799BE4u) {
        ctx->pc = 0x799BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE0u;
        // 0x799be4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BE8u;
        goto label_799be8;
    }
    ctx->pc = 0x799BE0u;
    {
        const bool branch_taken_0x799be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE0u;
        // 0x799be4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799be0) {
            ctx->pc = 0x799C1Cu;
            goto label_799c1c;
        }
    }
    ctx->pc = 0x799BE8u;
label_799be8:
    // 0x799be8: 0xc06f45e  jal         func_1BD178
label_799bec:
    if (ctx->pc == 0x799BECu) {
        ctx->pc = 0x799BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE8u;
        // 0x799bec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BF0u;
        goto label_799bf0;
    }
    ctx->pc = 0x799BE8u;
    SET_GPR_U32(ctx, 31, 0x799BF0u);
    ctx->pc = 0x799BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BE8u;
    // 0x799bec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x799BE8u, 0x799BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BF0u;
label_799bf0:
    // 0x799bf0: 0x8e02bd80  lw          $v0, -0x4280($s0)
    ctx->pc = 0x799bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799bf4:
    // 0x799bf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799bf8:
    // 0x799bf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799bfc:
    // 0x799bfc: 0xc06f3ec  jal         func_1BCFB0
label_799c00:
    if (ctx->pc == 0x799C00u) {
        ctx->pc = 0x799C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BFCu;
        // 0x799c00: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C04u;
        goto label_799c04;
    }
    ctx->pc = 0x799BFCu;
    SET_GPR_U32(ctx, 31, 0x799C04u);
    ctx->pc = 0x799C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BFCu;
    // 0x799c00: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x799BFCu, 0x799C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C04u;
label_799c04:
    // 0x799c04: 0x8e02bd80  lw          $v0, -0x4280($s0)
    ctx->pc = 0x799c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799c08:
    // 0x799c08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799c0c:
    // 0x799c0c: 0xc06f45e  jal         func_1BD178
label_799c10:
    if (ctx->pc == 0x799C10u) {
        ctx->pc = 0x799C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C0Cu;
        // 0x799c10: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C14u;
        goto label_799c14;
    }
    ctx->pc = 0x799C0Cu;
    SET_GPR_U32(ctx, 31, 0x799C14u);
    ctx->pc = 0x799C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C0Cu;
    // 0x799c10: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x799C0Cu, 0x799C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C14u;
label_799c14:
    // 0x799c14: 0x1000000c  b           . + 4 + (0xC << 2)
label_799c18:
    if (ctx->pc == 0x799C18u) {
        ctx->pc = 0x799C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C14u;
        // 0x799c18: 0x8e05bd80  lw          $a1, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C1Cu;
        goto label_799c1c;
    }
    ctx->pc = 0x799C14u;
    {
        const bool branch_taken_0x799c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C14u;
        // 0x799c18: 0x8e05bd80  lw          $a1, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c14) {
            ctx->pc = 0x799C48u;
            goto label_799c48;
        }
    }
    ctx->pc = 0x799C1Cu;
label_799c1c:
    // 0x799c1c: 0xc06f45e  jal         func_1BD178
label_799c20:
    if (ctx->pc == 0x799C20u) {
        ctx->pc = 0x799C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C1Cu;
        // 0x799c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C24u;
        goto label_799c24;
    }
    ctx->pc = 0x799C1Cu;
    SET_GPR_U32(ctx, 31, 0x799C24u);
    ctx->pc = 0x799C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C1Cu;
    // 0x799c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x799C1Cu, 0x799C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C24u;
label_799c24:
    // 0x799c24: 0x8e02bd80  lw          $v0, -0x4280($s0)
    ctx->pc = 0x799c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799c28:
    // 0x799c28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799c2c:
    // 0x799c2c: 0xc06f448  jal         func_1BD120
label_799c30:
    if (ctx->pc == 0x799C30u) {
        ctx->pc = 0x799C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C2Cu;
        // 0x799c30: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C34u;
        goto label_799c34;
    }
    ctx->pc = 0x799C2Cu;
    SET_GPR_U32(ctx, 31, 0x799C34u);
    ctx->pc = 0x799C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C2Cu;
    // 0x799c30: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD120u, 0x799C2Cu, 0x799C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C34u;
label_799c34:
    // 0x799c34: 0x8e02bd80  lw          $v0, -0x4280($s0)
    ctx->pc = 0x799c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799c38:
    // 0x799c38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799c3c:
    // 0x799c3c: 0xc06f45e  jal         func_1BD178
label_799c40:
    if (ctx->pc == 0x799C40u) {
        ctx->pc = 0x799C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C3Cu;
        // 0x799c40: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C44u;
        goto label_799c44;
    }
    ctx->pc = 0x799C3Cu;
    SET_GPR_U32(ctx, 31, 0x799C44u);
    ctx->pc = 0x799C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C3Cu;
    // 0x799c40: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x799C3Cu, 0x799C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C44u;
label_799c44:
    // 0x799c44: 0x8e05bd80  lw          $a1, -0x4280($s0)
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799c48:
    // 0x799c48: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x799c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_799c4c:
    // 0x799c4c: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x799c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
label_799c50:
    // 0x799c50: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x799c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_799c54:
    // 0x799c54: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x799c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_799c58:
    // 0x799c58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_799c5c:
    // 0x799c5c: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x799c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_799c60:
    // 0x799c60: 0x8e02bd80  lw          $v0, -0x4280($s0)
    ctx->pc = 0x799c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799c64:
    // 0x799c64: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x799c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_799c68:
    // 0x799c68: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
label_799c6c:
    if (ctx->pc == 0x799C6Cu) {
        ctx->pc = 0x799C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C68u;
        // 0x799c6c: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C70u;
        goto label_799c70;
    }
    ctx->pc = 0x799C68u;
    {
        const bool branch_taken_0x799c68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C68u;
        // 0x799c6c: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c68) {
            ctx->pc = 0x799CFCu;
            goto label_799cfc;
        }
    }
    ctx->pc = 0x799C70u;
label_799c70:
    // 0x799c70: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x799c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_799c74:
    // 0x799c74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799c78:
    // 0x799c78: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_799c7c:
    // 0x799c7c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_799c80:
    if (ctx->pc == 0x799C80u) {
        ctx->pc = 0x799C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C7Cu;
        // 0x799c80: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C84u;
        goto label_799c84;
    }
    ctx->pc = 0x799C7Cu;
    {
        const bool branch_taken_0x799c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C7Cu;
        // 0x799c80: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c7c) {
            ctx->pc = 0x799CB8u;
            goto label_799cb8;
        }
    }
    ctx->pc = 0x799C84u;
label_799c84:
    // 0x799c84: 0xc06f45e  jal         func_1BD178
label_799c88:
    if (ctx->pc == 0x799C88u) {
        ctx->pc = 0x799C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C84u;
        // 0x799c88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C8Cu;
        goto label_799c8c;
    }
    ctx->pc = 0x799C84u;
    SET_GPR_U32(ctx, 31, 0x799C8Cu);
    ctx->pc = 0x799C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C84u;
    // 0x799c88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x799C84u, 0x799C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C8Cu;
label_799c8c:
    // 0x799c8c: 0x8e02bd80  lw          $v0, -0x4280($s0)
    ctx->pc = 0x799c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799c90:
    // 0x799c90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799c94:
    // 0x799c94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799c98:
    // 0x799c98: 0xc06f3ec  jal         func_1BCFB0
label_799c9c:
    if (ctx->pc == 0x799C9Cu) {
        ctx->pc = 0x799C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C98u;
        // 0x799c9c: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CA0u;
        goto label_799ca0;
    }
    ctx->pc = 0x799C98u;
    SET_GPR_U32(ctx, 31, 0x799CA0u);
    ctx->pc = 0x799C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C98u;
    // 0x799c9c: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x799C98u, 0x799CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CA0u;
label_799ca0:
    // 0x799ca0: 0x8e02bd80  lw          $v0, -0x4280($s0)
    ctx->pc = 0x799ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799ca4:
    // 0x799ca4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799ca8:
    // 0x799ca8: 0xc06f45e  jal         func_1BD178
label_799cac:
    if (ctx->pc == 0x799CACu) {
        ctx->pc = 0x799CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CA8u;
        // 0x799cac: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CB0u;
        goto label_799cb0;
    }
    ctx->pc = 0x799CA8u;
    SET_GPR_U32(ctx, 31, 0x799CB0u);
    ctx->pc = 0x799CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CA8u;
    // 0x799cac: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x799CA8u, 0x799CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CB0u;
label_799cb0:
    // 0x799cb0: 0x1000000c  b           . + 4 + (0xC << 2)
label_799cb4:
    if (ctx->pc == 0x799CB4u) {
        ctx->pc = 0x799CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CB0u;
        // 0x799cb4: 0x8e05bd80  lw          $a1, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CB8u;
        goto label_799cb8;
    }
    ctx->pc = 0x799CB0u;
    {
        const bool branch_taken_0x799cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CB0u;
        // 0x799cb4: 0x8e05bd80  lw          $a1, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cb0) {
            ctx->pc = 0x799CE4u;
            goto label_799ce4;
        }
    }
    ctx->pc = 0x799CB8u;
label_799cb8:
    // 0x799cb8: 0xc06f45e  jal         func_1BD178
label_799cbc:
    if (ctx->pc == 0x799CBCu) {
        ctx->pc = 0x799CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CB8u;
        // 0x799cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CC0u;
        goto label_799cc0;
    }
    ctx->pc = 0x799CB8u;
    SET_GPR_U32(ctx, 31, 0x799CC0u);
    ctx->pc = 0x799CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CB8u;
    // 0x799cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x799CB8u, 0x799CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CC0u;
label_799cc0:
    // 0x799cc0: 0x8e02bd80  lw          $v0, -0x4280($s0)
    ctx->pc = 0x799cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799cc4:
    // 0x799cc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799cc8:
    // 0x799cc8: 0xc06f448  jal         func_1BD120
label_799ccc:
    if (ctx->pc == 0x799CCCu) {
        ctx->pc = 0x799CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CC8u;
        // 0x799ccc: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CD0u;
        goto label_799cd0;
    }
    ctx->pc = 0x799CC8u;
    SET_GPR_U32(ctx, 31, 0x799CD0u);
    ctx->pc = 0x799CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CC8u;
    // 0x799ccc: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD120u, 0x799CC8u, 0x799CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CD0u;
label_799cd0:
    // 0x799cd0: 0x8e02bd80  lw          $v0, -0x4280($s0)
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799cd4:
    // 0x799cd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799cd8:
    // 0x799cd8: 0xc06f45e  jal         func_1BD178
label_799cdc:
    if (ctx->pc == 0x799CDCu) {
        ctx->pc = 0x799CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CD8u;
        // 0x799cdc: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CE0u;
        goto label_799ce0;
    }
    ctx->pc = 0x799CD8u;
    SET_GPR_U32(ctx, 31, 0x799CE0u);
    ctx->pc = 0x799CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CD8u;
    // 0x799cdc: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x799CD8u, 0x799CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CE0u;
label_799ce0:
    // 0x799ce0: 0x8e05bd80  lw          $a1, -0x4280($s0)
    ctx->pc = 0x799ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799ce4:
    // 0x799ce4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x799ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_799ce8:
    // 0x799ce8: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x799ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
label_799cec:
    // 0x799cec: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x799cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_799cf0:
    // 0x799cf0: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_799cf4:
    // 0x799cf4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_799cf8:
    // 0x799cf8: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x799cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_799cfc:
    // 0x799cfc: 0x8e02bd80  lw          $v0, -0x4280($s0)
    ctx->pc = 0x799cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799d00:
    // 0x799d00: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x799d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_799d04:
    // 0x799d04: 0x10a0004d  beqz        $a1, . + 4 + (0x4D << 2)
label_799d08:
    if (ctx->pc == 0x799D08u) {
        ctx->pc = 0x799D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D04u;
        // 0x799d08: 0x8e03bd80  lw          $v1, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D0Cu;
        goto label_799d0c;
    }
    ctx->pc = 0x799D04u;
    {
        const bool branch_taken_0x799d04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D04u;
        // 0x799d08: 0x8e03bd80  lw          $v1, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d04) {
            ctx->pc = 0x799E3Cu;
            goto label_799e3c;
        }
    }
    ctx->pc = 0x799D0Cu;
label_799d0c:
    // 0x799d0c: 0x8ca30250  lw          $v1, 0x250($a1)
    ctx->pc = 0x799d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
label_799d10:
    // 0x799d10: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x799d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_799d14:
    // 0x799d14: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x799d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_799d18:
    // 0x799d18: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x799d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_799d1c:
    // 0x799d1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x799d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_799d20:
    // 0x799d20: 0xaca30250  sw          $v1, 0x250($a1)
    ctx->pc = 0x799d20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 592), GPR_U32(ctx, 3));
label_799d24:
    // 0x799d24: 0x8e428658  lw          $v0, -0x79A8($s2)
    ctx->pc = 0x799d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
label_799d28:
    // 0x799d28: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799d2c:
    // 0x799d2c: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x799d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_799d30:
    // 0x799d30: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_799d34:
    if (ctx->pc == 0x799D34u) {
        ctx->pc = 0x799D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D30u;
        // 0x799d34: 0x8e02bd80  lw          $v0, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D38u;
        goto label_799d38;
    }
    ctx->pc = 0x799D30u;
    {
        const bool branch_taken_0x799d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D30u;
        // 0x799d34: 0x8e02bd80  lw          $v0, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d30) {
            ctx->pc = 0x799D84u;
            goto label_799d84;
        }
    }
    ctx->pc = 0x799D38u;
label_799d38:
    // 0x799d38: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x799d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799d3c:
    // 0x799d3c: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_799d40:
    if (ctx->pc == 0x799D40u) {
        ctx->pc = 0x799D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D3Cu;
        // 0x799d40: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D44u;
        goto label_799d44;
    }
    ctx->pc = 0x799D3Cu;
    {
        const bool branch_taken_0x799d3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x799d3c) {
            ctx->pc = 0x799D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D3Cu;
            // 0x799d40: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D60u;
            goto label_799d60;
        }
    }
    ctx->pc = 0x799D44u;
label_799d44:
    // 0x799d44: 0x8ca20214  lw          $v0, 0x214($a1)
    ctx->pc = 0x799d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_799d48:
    // 0x799d48: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x799d48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_799d4c:
    // 0x799d4c: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x799d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_799d50:
    // 0x799d50: 0x60f809  jalr        $v1
label_799d54:
    if (ctx->pc == 0x799D54u) {
        ctx->pc = 0x799D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D50u;
        // 0x799d54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D58u;
        goto label_799d58;
    }
    ctx->pc = 0x799D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799D58u);
        ctx->pc = 0x799D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D50u;
        // 0x799d54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D50u, 0x799D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799D58u;
label_799d58:
    // 0x799d58: 0x8e02bd80  lw          $v0, -0x4280($s0)
    ctx->pc = 0x799d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799d5c:
    // 0x799d5c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x799d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_799d60:
    // 0x799d60: 0x10a00036  beqz        $a1, . + 4 + (0x36 << 2)
label_799d64:
    if (ctx->pc == 0x799D64u) {
        ctx->pc = 0x799D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D60u;
        // 0x799d64: 0x8e03bd80  lw          $v1, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D68u;
        goto label_799d68;
    }
    ctx->pc = 0x799D60u;
    {
        const bool branch_taken_0x799d60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D60u;
        // 0x799d64: 0x8e03bd80  lw          $v1, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d60) {
            ctx->pc = 0x799E3Cu;
            goto label_799e3c;
        }
    }
    ctx->pc = 0x799D68u;
label_799d68:
    // 0x799d68: 0x8ca20214  lw          $v0, 0x214($a1)
    ctx->pc = 0x799d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_799d6c:
    // 0x799d6c: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x799d6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_799d70:
    // 0x799d70: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x799d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_799d74:
    // 0x799d74: 0x60f809  jalr        $v1
label_799d78:
    if (ctx->pc == 0x799D78u) {
        ctx->pc = 0x799D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D74u;
        // 0x799d78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D7Cu;
        goto label_799d7c;
    }
    ctx->pc = 0x799D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799D7Cu);
        ctx->pc = 0x799D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D74u;
        // 0x799d78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D74u, 0x799D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799D7Cu;
label_799d7c:
    // 0x799d7c: 0x1000002f  b           . + 4 + (0x2F << 2)
label_799d80:
    if (ctx->pc == 0x799D80u) {
        ctx->pc = 0x799D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D7Cu;
        // 0x799d80: 0x8e03bd80  lw          $v1, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D84u;
        goto label_799d84;
    }
    ctx->pc = 0x799D7Cu;
    {
        const bool branch_taken_0x799d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D7Cu;
        // 0x799d80: 0x8e03bd80  lw          $v1, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d7c) {
            ctx->pc = 0x799E3Cu;
            goto label_799e3c;
        }
    }
    ctx->pc = 0x799D84u;
label_799d84:
    // 0x799d84: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x799d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_799d88:
    // 0x799d88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x799d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_799d8c:
    // 0x799d8c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_799d90:
    if (ctx->pc == 0x799D90u) {
        ctx->pc = 0x799D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D8Cu;
        // 0x799d90: 0x8e02bd80  lw          $v0, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D94u;
        goto label_799d94;
    }
    ctx->pc = 0x799D8Cu;
    {
        const bool branch_taken_0x799d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D8Cu;
        // 0x799d90: 0x8e02bd80  lw          $v0, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d8c) {
            ctx->pc = 0x799E38u;
            goto label_799e38;
        }
    }
    ctx->pc = 0x799D94u;
label_799d94:
    // 0x799d94: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x799d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799d98:
    // 0x799d98: 0x50a00011  beql        $a1, $zero, . + 4 + (0x11 << 2)
label_799d9c:
    if (ctx->pc == 0x799D9Cu) {
        ctx->pc = 0x799D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D98u;
        // 0x799d9c: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DA0u;
        goto label_799da0;
    }
    ctx->pc = 0x799D98u;
    {
        const bool branch_taken_0x799d98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x799d98) {
            ctx->pc = 0x799D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D98u;
            // 0x799d9c: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799DE0u;
            goto label_799de0;
        }
    }
    ctx->pc = 0x799DA0u;
label_799da0:
    // 0x799da0: 0xdca202f0  ld          $v0, 0x2F0($a1)
    ctx->pc = 0x799da0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 752)));
label_799da4:
    // 0x799da4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x799da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_799da8:
    // 0x799da8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x799da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_799dac:
    // 0x799dac: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x799dacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_799db0:
    // 0x799db0: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x799db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
label_799db4:
    // 0x799db4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_799db8:
    // 0x799db8: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
label_799dbc:
    if (ctx->pc == 0x799DBCu) {
        ctx->pc = 0x799DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DB8u;
        // 0x799dbc: 0x8e02bd80  lw          $v0, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DC0u;
        goto label_799dc0;
    }
    ctx->pc = 0x799DB8u;
    {
        const bool branch_taken_0x799db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x799DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DB8u;
        // 0x799dbc: 0x8e02bd80  lw          $v0, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799db8) {
            ctx->pc = 0x799DDCu;
            goto label_799ddc;
        }
    }
    ctx->pc = 0x799DC0u;
label_799dc0:
    // 0x799dc0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x799dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_799dc4:
    // 0x799dc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x799dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799dc8:
    // 0x799dc8: 0xa0a202f5  sb          $v0, 0x2F5($a1)
    ctx->pc = 0x799dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 757), (uint8_t)GPR_U32(ctx, 2));
label_799dcc:
    // 0x799dcc: 0xa0a302f6  sb          $v1, 0x2F6($a1)
    ctx->pc = 0x799dccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 758), (uint8_t)GPR_U32(ctx, 3));
label_799dd0:
    // 0x799dd0: 0xa0a002f7  sb          $zero, 0x2F7($a1)
    ctx->pc = 0x799dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 759), (uint8_t)GPR_U32(ctx, 0));
label_799dd4:
    // 0x799dd4: 0xa0a002f4  sb          $zero, 0x2F4($a1)
    ctx->pc = 0x799dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 756), (uint8_t)GPR_U32(ctx, 0));
label_799dd8:
    // 0x799dd8: 0x8e02bd80  lw          $v0, -0x4280($s0)
    ctx->pc = 0x799dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799ddc:
    // 0x799ddc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x799ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_799de0:
    // 0x799de0: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_799de4:
    if (ctx->pc == 0x799DE4u) {
        ctx->pc = 0x799DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DE0u;
        // 0x799de4: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DE8u;
        goto label_799de8;
    }
    ctx->pc = 0x799DE0u;
    {
        const bool branch_taken_0x799de0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DE0u;
        // 0x799de4: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799de0) {
            ctx->pc = 0x799E24u;
            goto label_799e24;
        }
    }
    ctx->pc = 0x799DE8u;
label_799de8:
    // 0x799de8: 0xdca202f0  ld          $v0, 0x2F0($a1)
    ctx->pc = 0x799de8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 752)));
label_799dec:
    // 0x799dec: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x799decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_799df0:
    // 0x799df0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x799df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_799df4:
    // 0x799df4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x799df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_799df8:
    // 0x799df8: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x799df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
label_799dfc:
    // 0x799dfc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_799e00:
    // 0x799e00: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
label_799e04:
    if (ctx->pc == 0x799E04u) {
        ctx->pc = 0x799E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E00u;
        // 0x799e04: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E08u;
        goto label_799e08;
    }
    ctx->pc = 0x799E00u;
    {
        const bool branch_taken_0x799e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x799E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E00u;
        // 0x799e04: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e00) {
            ctx->pc = 0x799E24u;
            goto label_799e24;
        }
    }
    ctx->pc = 0x799E08u;
label_799e08:
    // 0x799e08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x799e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_799e0c:
    // 0x799e0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x799e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799e10:
    // 0x799e10: 0xa0a202f5  sb          $v0, 0x2F5($a1)
    ctx->pc = 0x799e10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 757), (uint8_t)GPR_U32(ctx, 2));
label_799e14:
    // 0x799e14: 0xa0a302f6  sb          $v1, 0x2F6($a1)
    ctx->pc = 0x799e14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 758), (uint8_t)GPR_U32(ctx, 3));
label_799e18:
    // 0x799e18: 0xa0a002f7  sb          $zero, 0x2F7($a1)
    ctx->pc = 0x799e18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 759), (uint8_t)GPR_U32(ctx, 0));
label_799e1c:
    // 0x799e1c: 0xa0a002f4  sb          $zero, 0x2F4($a1)
    ctx->pc = 0x799e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 756), (uint8_t)GPR_U32(ctx, 0));
label_799e20:
    // 0x799e20: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_799e24:
    // 0x799e24: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x799e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_799e28:
    // 0x799e28: 0x8c64d6e8  lw          $a0, -0x2918($v1)
    ctx->pc = 0x799e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956776)));
label_799e2c:
    // 0x799e2c: 0x8c821f20  lw          $v0, 0x1F20($a0)
    ctx->pc = 0x799e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7968)));
label_799e30:
    // 0x799e30: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x799e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_799e34:
    // 0x799e34: 0xac821f20  sw          $v0, 0x1F20($a0)
    ctx->pc = 0x799e34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7968), GPR_U32(ctx, 2));
label_799e38:
    // 0x799e38: 0x8e03bd80  lw          $v1, -0x4280($s0)
    ctx->pc = 0x799e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_799e3c:
    // 0x799e3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799e40:
    // 0x799e40: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_799e44:
    // 0x799e44: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x799e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_799e48:
    // 0x799e48: 0xc0a4230  jal         func_2908C0
label_799e4c:
    if (ctx->pc == 0x799E4Cu) {
        ctx->pc = 0x799E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E48u;
        // 0x799e4c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E50u;
        goto label_799e50;
    }
    ctx->pc = 0x799E48u;
    SET_GPR_U32(ctx, 31, 0x799E50u);
    ctx->pc = 0x799E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E48u;
    // 0x799e4c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2908C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2908C0u, 0x799E48u, 0x799E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E50u;
label_799e50:
    // 0x799e50: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_799e54:
    // 0x799e54: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x799e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_799e58:
    // 0x799e58: 0x24506ab0  addiu       $s0, $v0, 0x6AB0
    ctx->pc = 0x799e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
label_799e5c:
    // 0x799e5c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x799e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_799e60:
    // 0x799e60: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x799e60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
label_799e64:
    // 0x799e64: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x799e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_799e68:
    // 0x799e68: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x799e68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
label_799e6c:
    // 0x799e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799e70:
    // 0x799e70: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x799e70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
label_799e74:
    // 0x799e74: 0xc0a54b4  jal         func_2952D0
label_799e78:
    if (ctx->pc == 0x799E78u) {
        ctx->pc = 0x799E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E74u;
        // 0x799e78: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E7Cu;
        goto label_799e7c;
    }
    ctx->pc = 0x799E74u;
    SET_GPR_U32(ctx, 31, 0x799E7Cu);
    ctx->pc = 0x799E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E74u;
    // 0x799e78: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799E74u, 0x799E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E7Cu;
label_799e7c:
    // 0x799e7c: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x799e7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_799e80:
    // 0x799e80: 0xc0a54b4  jal         func_2952D0
label_799e84:
    if (ctx->pc == 0x799E84u) {
        ctx->pc = 0x799E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E80u;
        // 0x799e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E88u;
        goto label_799e88;
    }
    ctx->pc = 0x799E80u;
    SET_GPR_U32(ctx, 31, 0x799E88u);
    ctx->pc = 0x799E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E80u;
    // 0x799e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799E80u, 0x799E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E88u;
label_799e88:
    // 0x799e88: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x799e88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_799e8c:
    // 0x799e8c: 0xc0a54b4  jal         func_2952D0
label_799e90:
    if (ctx->pc == 0x799E90u) {
        ctx->pc = 0x799E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E8Cu;
        // 0x799e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E94u;
        goto label_799e94;
    }
    ctx->pc = 0x799E8Cu;
    SET_GPR_U32(ctx, 31, 0x799E94u);
    ctx->pc = 0x799E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E8Cu;
    // 0x799e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799E8Cu, 0x799E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E94u;
label_799e94:
    // 0x799e94: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x799e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
label_799e98:
    // 0x799e98: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x799e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_799e9c:
    // 0x799e9c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799ea0:
    // 0x799ea0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x799ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_799ea4:
    // 0x799ea4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_799ea8:
    if (ctx->pc == 0x799EA8u) {
        ctx->pc = 0x799EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EA4u;
        // 0x799ea8: 0x2690ea60  addiu       $s0, $s4, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EACu;
        goto label_799eac;
    }
    ctx->pc = 0x799EA4u;
    {
        const bool branch_taken_0x799ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799ea4) {
            ctx->pc = 0x799EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799EA4u;
            // 0x799ea8: 0x2690ea60  addiu       $s0, $s4, -0x15A0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799EE4u;
            goto label_799ee4;
        }
    }
    ctx->pc = 0x799EACu;
label_799eac:
    // 0x799eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799eb0:
    // 0x799eb0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x799eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_799eb4:
    // 0x799eb4: 0xc0a54e0  jal         func_295380
label_799eb8:
    if (ctx->pc == 0x799EB8u) {
        ctx->pc = 0x799EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EB4u;
        // 0x799eb8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EBCu;
        goto label_799ebc;
    }
    ctx->pc = 0x799EB4u;
    SET_GPR_U32(ctx, 31, 0x799EBCu);
    ctx->pc = 0x799EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EB4u;
    // 0x799eb8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295380u, 0x799EB4u, 0x799EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EBCu;
label_799ebc:
    // 0x799ebc: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x799ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_799ec0:
    // 0x799ec0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x799ec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_799ec4:
    // 0x799ec4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799ec8:
    // 0x799ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799ecc:
    // 0x799ecc: 0xc0a5500  jal         func_295400
label_799ed0:
    if (ctx->pc == 0x799ED0u) {
        ctx->pc = 0x799ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ECCu;
        // 0x799ed0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799ED4u;
        goto label_799ed4;
    }
    ctx->pc = 0x799ECCu;
    SET_GPR_U32(ctx, 31, 0x799ED4u);
    ctx->pc = 0x799ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ECCu;
    // 0x799ed0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295400u, 0x799ECCu, 0x799ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ED4u;
label_799ed4:
    // 0x799ed4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x799ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799ed8:
    // 0x799ed8: 0xc0a588c  jal         func_296230
label_799edc:
    if (ctx->pc == 0x799EDCu) {
        ctx->pc = 0x799EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ED8u;
        // 0x799edc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EE0u;
        goto label_799ee0;
    }
    ctx->pc = 0x799ED8u;
    SET_GPR_U32(ctx, 31, 0x799EE0u);
    ctx->pc = 0x799EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ED8u;
    // 0x799edc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x799ED8u, 0x799EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EE0u;
label_799ee0:
    // 0x799ee0: 0x2690ea60  addiu       $s0, $s4, -0x15A0
    ctx->pc = 0x799ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
label_799ee4:
    // 0x799ee4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799ee8:
    // 0x799ee8: 0xc0b0a7e  jal         func_2C29F8
label_799eec:
    if (ctx->pc == 0x799EECu) {
        ctx->pc = 0x799EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EE8u;
        // 0x799eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EF0u;
        goto label_799ef0;
    }
    ctx->pc = 0x799EE8u;
    SET_GPR_U32(ctx, 31, 0x799EF0u);
    ctx->pc = 0x799EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EE8u;
    // 0x799eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799EE8u, 0x799EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EF0u;
label_799ef0:
    // 0x799ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799ef4:
    // 0x799ef4: 0xc0b0a7e  jal         func_2C29F8
label_799ef8:
    if (ctx->pc == 0x799EF8u) {
        ctx->pc = 0x799EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EF4u;
        // 0x799ef8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EFCu;
        goto label_799efc;
    }
    ctx->pc = 0x799EF4u;
    SET_GPR_U32(ctx, 31, 0x799EFCu);
    ctx->pc = 0x799EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EF4u;
    // 0x799ef8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799EF4u, 0x799EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EFCu;
label_799efc:
    // 0x799efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799f00:
    // 0x799f00: 0xc0b0a54  jal         func_2C2950
label_799f04:
    if (ctx->pc == 0x799F04u) {
        ctx->pc = 0x799F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F00u;
        // 0x799f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F08u;
        goto label_799f08;
    }
    ctx->pc = 0x799F00u;
    SET_GPR_U32(ctx, 31, 0x799F08u);
    ctx->pc = 0x799F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F00u;
    // 0x799f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799F00u, 0x799F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F08u;
label_799f08:
    // 0x799f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799f0c:
    // 0x799f0c: 0xc0b0a54  jal         func_2C2950
label_799f10:
    if (ctx->pc == 0x799F10u) {
        ctx->pc = 0x799F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F0Cu;
        // 0x799f10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F14u;
        goto label_799f14;
    }
    ctx->pc = 0x799F0Cu;
    SET_GPR_U32(ctx, 31, 0x799F14u);
    ctx->pc = 0x799F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F0Cu;
    // 0x799f10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799F0Cu, 0x799F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F14u;
label_799f14:
    // 0x799f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799f18:
    // 0x799f18: 0xc0b0a7e  jal         func_2C29F8
label_799f1c:
    if (ctx->pc == 0x799F1Cu) {
        ctx->pc = 0x799F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F18u;
        // 0x799f1c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F20u;
        goto label_799f20;
    }
    ctx->pc = 0x799F18u;
    SET_GPR_U32(ctx, 31, 0x799F20u);
    ctx->pc = 0x799F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F18u;
    // 0x799f1c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799F18u, 0x799F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F20u;
label_799f20:
    // 0x799f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799f24:
    // 0x799f24: 0xc0b0a7e  jal         func_2C29F8
label_799f28:
    if (ctx->pc == 0x799F28u) {
        ctx->pc = 0x799F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F24u;
        // 0x799f28: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F2Cu;
        goto label_799f2c;
    }
    ctx->pc = 0x799F24u;
    SET_GPR_U32(ctx, 31, 0x799F2Cu);
    ctx->pc = 0x799F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F24u;
    // 0x799f28: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799F24u, 0x799F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F2Cu;
label_799f2c:
    // 0x799f2c: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x799f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
label_799f30:
    // 0x799f30: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x799f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_799f34:
    // 0x799f34: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799f38:
    // 0x799f38: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x799f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_799f3c:
    // 0x799f3c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_799f40:
    if (ctx->pc == 0x799F40u) {
        ctx->pc = 0x799F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F3Cu;
        // 0x799f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F44u;
        goto label_799f44;
    }
    ctx->pc = 0x799F3Cu;
    {
        const bool branch_taken_0x799f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F3Cu;
        // 0x799f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f3c) {
            ctx->pc = 0x799F60u;
            goto label_799f60;
        }
    }
    ctx->pc = 0x799F44u;
label_799f44:
    // 0x799f44: 0xc0b0a54  jal         func_2C2950
label_799f48:
    if (ctx->pc == 0x799F48u) {
        ctx->pc = 0x799F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F44u;
        // 0x799f48: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F4Cu;
        goto label_799f4c;
    }
    ctx->pc = 0x799F44u;
    SET_GPR_U32(ctx, 31, 0x799F4Cu);
    ctx->pc = 0x799F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F44u;
    // 0x799f48: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799F44u, 0x799F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F4Cu;
label_799f4c:
    // 0x799f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799f50:
    // 0x799f50: 0xc0b0a54  jal         func_2C2950
label_799f54:
    if (ctx->pc == 0x799F54u) {
        ctx->pc = 0x799F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F50u;
        // 0x799f54: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F58u;
        goto label_799f58;
    }
    ctx->pc = 0x799F50u;
    SET_GPR_U32(ctx, 31, 0x799F58u);
    ctx->pc = 0x799F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F50u;
    // 0x799f54: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799F50u, 0x799F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F58u;
label_799f58:
    // 0x799f58: 0x10000007  b           . + 4 + (0x7 << 2)
label_799f5c:
    if (ctx->pc == 0x799F5Cu) {
        ctx->pc = 0x799F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F58u;
        // 0x799f5c: 0x2690ea60  addiu       $s0, $s4, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F60u;
        goto label_799f60;
    }
    ctx->pc = 0x799F58u;
    {
        const bool branch_taken_0x799f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F58u;
        // 0x799f5c: 0x2690ea60  addiu       $s0, $s4, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f58) {
            ctx->pc = 0x799F78u;
            goto label_799f78;
        }
    }
    ctx->pc = 0x799F60u;
label_799f60:
    // 0x799f60: 0xc0b0a7e  jal         func_2C29F8
label_799f64:
    if (ctx->pc == 0x799F64u) {
        ctx->pc = 0x799F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F60u;
        // 0x799f64: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F68u;
        goto label_799f68;
    }
    ctx->pc = 0x799F60u;
    SET_GPR_U32(ctx, 31, 0x799F68u);
    ctx->pc = 0x799F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F60u;
    // 0x799f64: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799F60u, 0x799F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F68u;
label_799f68:
    // 0x799f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799f6c:
    // 0x799f6c: 0xc0b0a7e  jal         func_2C29F8
label_799f70:
    if (ctx->pc == 0x799F70u) {
        ctx->pc = 0x799F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F6Cu;
        // 0x799f70: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F74u;
        goto label_799f74;
    }
    ctx->pc = 0x799F6Cu;
    SET_GPR_U32(ctx, 31, 0x799F74u);
    ctx->pc = 0x799F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F6Cu;
    // 0x799f70: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799F6Cu, 0x799F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F74u;
label_799f74:
    // 0x799f74: 0x2690ea60  addiu       $s0, $s4, -0x15A0
    ctx->pc = 0x799f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
label_799f78:
    // 0x799f78: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x799f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_799f7c:
    // 0x799f7c: 0xc0b0a7e  jal         func_2C29F8
label_799f80:
    if (ctx->pc == 0x799F80u) {
        ctx->pc = 0x799F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F7Cu;
        // 0x799f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F84u;
        goto label_799f84;
    }
    ctx->pc = 0x799F7Cu;
    SET_GPR_U32(ctx, 31, 0x799F84u);
    ctx->pc = 0x799F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F7Cu;
    // 0x799f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799F7Cu, 0x799F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F84u;
label_799f84:
    // 0x799f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799f88:
    // 0x799f88: 0xc0b0ab8  jal         func_2C2AE0
label_799f8c:
    if (ctx->pc == 0x799F8Cu) {
        ctx->pc = 0x799F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F88u;
        // 0x799f8c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F90u;
        goto label_799f90;
    }
    ctx->pc = 0x799F88u;
    SET_GPR_U32(ctx, 31, 0x799F90u);
    ctx->pc = 0x799F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F88u;
    // 0x799f8c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799F88u, 0x799F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F90u;
label_799f90:
    // 0x799f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799f94:
    // 0x799f94: 0xc0b0a68  jal         func_2C29A0
label_799f98:
    if (ctx->pc == 0x799F98u) {
        ctx->pc = 0x799F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F94u;
        // 0x799f98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F9Cu;
        goto label_799f9c;
    }
    ctx->pc = 0x799F94u;
    SET_GPR_U32(ctx, 31, 0x799F9Cu);
    ctx->pc = 0x799F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F94u;
    // 0x799f98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29A0u, 0x799F94u, 0x799F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F9Cu;
label_799f9c:
    // 0x799f9c: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x799f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
label_799fa0:
    // 0x799fa0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x799fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_799fa4:
    // 0x799fa4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799fa8:
    // 0x799fa8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x799fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_799fac:
    // 0x799fac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_799fb0:
    if (ctx->pc == 0x799FB0u) {
        ctx->pc = 0x799FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FACu;
        // 0x799fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FB4u;
        goto label_799fb4;
    }
    ctx->pc = 0x799FACu;
    {
        const bool branch_taken_0x799fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FACu;
        // 0x799fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fac) {
            ctx->pc = 0x799FE4u;
            goto label_799fe4;
        }
    }
    ctx->pc = 0x799FB4u;
label_799fb4:
    // 0x799fb4: 0xc0b0ab8  jal         func_2C2AE0
label_799fb8:
    if (ctx->pc == 0x799FB8u) {
        ctx->pc = 0x799FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FB4u;
        // 0x799fb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FBCu;
        goto label_799fbc;
    }
    ctx->pc = 0x799FB4u;
    SET_GPR_U32(ctx, 31, 0x799FBCu);
    ctx->pc = 0x799FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FB4u;
    // 0x799fb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799FB4u, 0x799FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FBCu;
label_799fbc:
    // 0x799fbc: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799fc0:
    // 0x799fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799fc4:
    // 0x799fc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799fc8:
    // 0x799fc8: 0x24e7b5a8  addiu       $a3, $a3, -0x4A58
    ctx->pc = 0x799fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948264));
label_799fcc:
    // 0x799fcc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799fd0:
    // 0x799fd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799fd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799fd4:
    // 0x799fd4: 0xc0b09d4  jal         func_2C2750
label_799fd8:
    if (ctx->pc == 0x799FD8u) {
        ctx->pc = 0x799FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FD4u;
        // 0x799fd8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FDCu;
        goto label_799fdc;
    }
    ctx->pc = 0x799FD4u;
    SET_GPR_U32(ctx, 31, 0x799FDCu);
    ctx->pc = 0x799FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FD4u;
    // 0x799fd8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x799FD4u, 0x799FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FDCu;
label_799fdc:
    // 0x799fdc: 0x10000006  b           . + 4 + (0x6 << 2)
label_799fe0:
    if (ctx->pc == 0x799FE0u) {
        ctx->pc = 0x799FE4u;
        goto label_799fe4;
    }
    ctx->pc = 0x799FDCu;
    {
        const bool branch_taken_0x799fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799fdc) {
            ctx->pc = 0x799FF8u;
            goto label_799ff8;
        }
    }
    ctx->pc = 0x799FE4u;
label_799fe4:
    // 0x799fe4: 0xc0b0ab8  jal         func_2C2AE0
label_799fe8:
    if (ctx->pc == 0x799FE8u) {
        ctx->pc = 0x799FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FE4u;
        // 0x799fe8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FECu;
        goto label_799fec;
    }
    ctx->pc = 0x799FE4u;
    SET_GPR_U32(ctx, 31, 0x799FECu);
    ctx->pc = 0x799FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FE4u;
    // 0x799fe8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799FE4u, 0x799FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FECu;
label_799fec:
    // 0x799fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799ff0:
    // 0x799ff0: 0xc0b0a02  jal         func_2C2808
label_799ff4:
    if (ctx->pc == 0x799FF4u) {
        ctx->pc = 0x799FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FF0u;
        // 0x799ff4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FF8u;
        goto label_799ff8;
    }
    ctx->pc = 0x799FF0u;
    SET_GPR_U32(ctx, 31, 0x799FF8u);
    ctx->pc = 0x799FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF0u;
    // 0x799ff4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2808u, 0x799FF0u, 0x799FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FF8u;
label_799ff8:
    // 0x799ff8: 0xc1e6dfe  jal         func_79B7F8
label_799ffc:
    if (ctx->pc == 0x799FFCu) {
        ctx->pc = 0x79A000u;
        goto label_79a000;
    }
    ctx->pc = 0x799FF8u;
    SET_GPR_U32(ctx, 31, 0x79A000u);
    ctx->pc = 0x79B7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B7F8u, 0x799FF8u, 0x79A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A000u;
label_79a000:
    // 0x79a000: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
label_79a004:
    if (ctx->pc == 0x79A004u) {
        ctx->pc = 0x79A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A000u;
        // 0x79a004: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A008u;
        goto label_79a008;
    }
    ctx->pc = 0x79A000u;
    {
        const bool branch_taken_0x79a000 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A000u;
        // 0x79a004: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a000) {
            ctx->pc = 0x79A024u;
            goto label_79a024;
        }
    }
    ctx->pc = 0x79A008u;
label_79a008:
    // 0x79a008: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79a00c:
    // 0x79a00c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a010:
    // 0x79a010: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x79a010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
label_79a014:
    // 0x79a014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a018:
    // 0x79a018: 0xc0b016c  jal         func_2C05B0
label_79a01c:
    if (ctx->pc == 0x79A01Cu) {
        ctx->pc = 0x79A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A018u;
        // 0x79a01c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A020u;
        goto label_79a020;
    }
    ctx->pc = 0x79A018u;
    SET_GPR_U32(ctx, 31, 0x79A020u);
    ctx->pc = 0x79A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A018u;
    // 0x79a01c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79A018u, 0x79A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A020u;
label_79a020:
    // 0x79a020: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79a024:
    // 0x79a024: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79a024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_79a028:
    // 0x79a028: 0xc0b5692  jal         func_2D5A48
label_79a02c:
    if (ctx->pc == 0x79A02Cu) {
        ctx->pc = 0x79A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A028u;
        // 0x79a02c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A030u;
        goto label_79a030;
    }
    ctx->pc = 0x79A028u;
    SET_GPR_U32(ctx, 31, 0x79A030u);
    ctx->pc = 0x79A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A028u;
    // 0x79a02c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A028u, 0x79A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A030u;
label_79a030:
    // 0x79a030: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x79a030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79a034:
    // 0x79a034: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x79a034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79a038:
    // 0x79a038: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x79a038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79a03c:
    // 0x79a03c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x79a03cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79a040:
    // 0x79a040: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x79a040u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79a044:
    // 0x79a044: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x79a044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_79a048:
    // 0x79a048: 0x3e00008  jr          $ra
label_79a04c:
    if (ctx->pc == 0x79A04Cu) {
        ctx->pc = 0x79A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A048u;
        // 0x79a04c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A050u;
        goto label_fallthrough_0x79a048;
    }
    ctx->pc = 0x79A048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A048u;
        // 0x79a04c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79a048:
    ctx->pc = 0x79A050u;
}
} // namespace gh_r201
