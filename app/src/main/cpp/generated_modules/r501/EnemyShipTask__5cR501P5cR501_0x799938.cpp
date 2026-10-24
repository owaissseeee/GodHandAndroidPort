#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: EnemyShipTask__5cR501P5cR501
// Address: 0x799938 - 0x799e68
void EnemyShipTask__5cR501P5cR501_0x799938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnemyShipTask__5cR501P5cR501_0x799938");
#endif

    switch (ctx->pc) {
        case 0x799938u: goto label_799938;
        case 0x79993cu: goto label_79993c;
        case 0x799940u: goto label_799940;
        case 0x799944u: goto label_799944;
        case 0x799948u: goto label_799948;
        case 0x79994cu: goto label_79994c;
        case 0x799950u: goto label_799950;
        case 0x799954u: goto label_799954;
        case 0x799958u: goto label_799958;
        case 0x79995cu: goto label_79995c;
        case 0x799960u: goto label_799960;
        case 0x799964u: goto label_799964;
        case 0x799968u: goto label_799968;
        case 0x79996cu: goto label_79996c;
        case 0x799970u: goto label_799970;
        case 0x799974u: goto label_799974;
        case 0x799978u: goto label_799978;
        case 0x79997cu: goto label_79997c;
        case 0x799980u: goto label_799980;
        case 0x799984u: goto label_799984;
        case 0x799988u: goto label_799988;
        case 0x79998cu: goto label_79998c;
        case 0x799990u: goto label_799990;
        case 0x799994u: goto label_799994;
        case 0x799998u: goto label_799998;
        case 0x79999cu: goto label_79999c;
        case 0x7999a0u: goto label_7999a0;
        case 0x7999a4u: goto label_7999a4;
        case 0x7999a8u: goto label_7999a8;
        case 0x7999acu: goto label_7999ac;
        case 0x7999b0u: goto label_7999b0;
        case 0x7999b4u: goto label_7999b4;
        case 0x7999b8u: goto label_7999b8;
        case 0x7999bcu: goto label_7999bc;
        case 0x7999c0u: goto label_7999c0;
        case 0x7999c4u: goto label_7999c4;
        case 0x7999c8u: goto label_7999c8;
        case 0x7999ccu: goto label_7999cc;
        case 0x7999d0u: goto label_7999d0;
        case 0x7999d4u: goto label_7999d4;
        case 0x7999d8u: goto label_7999d8;
        case 0x7999dcu: goto label_7999dc;
        case 0x7999e0u: goto label_7999e0;
        case 0x7999e4u: goto label_7999e4;
        case 0x7999e8u: goto label_7999e8;
        case 0x7999ecu: goto label_7999ec;
        case 0x7999f0u: goto label_7999f0;
        case 0x7999f4u: goto label_7999f4;
        case 0x7999f8u: goto label_7999f8;
        case 0x7999fcu: goto label_7999fc;
        case 0x799a00u: goto label_799a00;
        case 0x799a04u: goto label_799a04;
        case 0x799a08u: goto label_799a08;
        case 0x799a0cu: goto label_799a0c;
        case 0x799a10u: goto label_799a10;
        case 0x799a14u: goto label_799a14;
        case 0x799a18u: goto label_799a18;
        case 0x799a1cu: goto label_799a1c;
        case 0x799a20u: goto label_799a20;
        case 0x799a24u: goto label_799a24;
        case 0x799a28u: goto label_799a28;
        case 0x799a2cu: goto label_799a2c;
        case 0x799a30u: goto label_799a30;
        case 0x799a34u: goto label_799a34;
        case 0x799a38u: goto label_799a38;
        case 0x799a3cu: goto label_799a3c;
        case 0x799a40u: goto label_799a40;
        case 0x799a44u: goto label_799a44;
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
        default: break;
    }

    ctx->pc = 0x799938u;

label_799938:
    // 0x799938: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x799938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_79993c:
    // 0x79993c: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x79993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
label_799940:
    // 0x799940: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x799940u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_799944:
    // 0x799944: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x799944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
label_799948:
    // 0x799948: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_79994c:
    // 0x79994c: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x79994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
label_799950:
    // 0x799950: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x799950u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_799954:
    // 0x799954: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x799954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
label_799958:
    // 0x799958: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x799958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79995c:
    // 0x79995c: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x79995cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
label_799960:
    // 0x799960: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x799960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
label_799964:
    // 0x799964: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x799964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
label_799968:
    // 0x799968: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x799968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
label_79996c:
    // 0x79996c: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x79996cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
label_799970:
    // 0x799970: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x799970u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_799974:
    // 0x799974: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x799974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
label_799978:
    // 0x799978: 0x8e740384  lw          $s4, 0x384($s3)
    ctx->pc = 0x799978u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 900)));
label_79997c:
    // 0x79997c: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x79997cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_799980:
    // 0x799980: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x799980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_799984:
    // 0x799984: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x799984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_799988:
    // 0x799988: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x799988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_79998c:
    // 0x79998c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x79998cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_799990:
    // 0x799990: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x799990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_799994:
    // 0x799994: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x799994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_799998:
    // 0x799998: 0x3c01408a  lui         $at, 0x408A
    ctx->pc = 0x799998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16522 << 16));
label_79999c:
    // 0x79999c: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x79999cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_7999a0:
    // 0x7999a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7999a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7999a4:
    // 0x7999a4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x7999a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_7999a8:
    // 0x7999a8: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x7999a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
label_7999ac:
    // 0x7999ac: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x7999acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
label_7999b0:
    // 0x7999b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7999b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_7999b4:
    // 0x7999b4: 0x2467d880  addiu       $a3, $v1, -0x2780
    ctx->pc = 0x7999b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957184));
label_7999b8:
    // 0x7999b8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x7999b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_7999bc:
    // 0x7999bc: 0x3c0a007a  lui         $t2, 0x7A
    ctx->pc = 0x7999bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)122 << 16));
label_7999c0:
    // 0x7999c0: 0xc460d880  lwc1        $f0, -0x2780($v1)
    ctx->pc = 0x7999c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_7999c4:
    // 0x7999c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7999c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7999c8:
    // 0x7999c8: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x7999c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_7999cc:
    // 0x7999cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7999ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7999d0:
    // 0x7999d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7999d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_7999d4:
    // 0x7999d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7999d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_7999d8:
    // 0x7999d8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x7999d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_7999dc:
    // 0x7999dc: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x7999dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_7999e0:
    // 0x7999e0: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x7999e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
label_7999e4:
    // 0x7999e4: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x7999e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
label_7999e8:
    // 0x7999e8: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x7999e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_7999ec:
    // 0x7999ec: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x7999ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_7999f0:
    // 0x7999f0: 0xe5240008  swc1        $f4, 0x8($t1)
    ctx->pc = 0x7999f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_7999f4:
    // 0x7999f4: 0xe5230004  swc1        $f3, 0x4($t1)
    ctx->pc = 0x7999f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_7999f8:
    // 0x7999f8: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x7999f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
label_7999fc:
    // 0x7999fc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x7999fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_799a00:
    // 0x799a00: 0xc5420710  lwc1        $f2, 0x710($t2)
    ctx->pc = 0x799a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 1808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_799a04:
    // 0x799a04: 0x3c01c188  lui         $at, 0xC188
    ctx->pc = 0x799a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49544 << 16));
label_799a08:
    // 0x799a08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799a0c:
    // 0x799a0c: 0xe5640008  swc1        $f4, 0x8($t3)
    ctx->pc = 0x799a0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
label_799a10:
    // 0x799a10: 0xe5630004  swc1        $f3, 0x4($t3)
    ctx->pc = 0x799a10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_799a14:
    // 0x799a14: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x799a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_799a18:
    // 0x799a18: 0xe441006c  swc1        $f1, 0x6C($v0)
    ctx->pc = 0x799a18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
label_799a1c:
    // 0x799a1c: 0xe442007c  swc1        $f2, 0x7C($v0)
    ctx->pc = 0x799a1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
label_799a20:
    // 0x799a20: 0xa0400078  sb          $zero, 0x78($v0)
    ctx->pc = 0x799a20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 120), (uint8_t)GPR_U32(ctx, 0));
label_799a24:
    // 0x799a24: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x799a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
label_799a28:
    // 0x799a28: 0xa0400079  sb          $zero, 0x79($v0)
    ctx->pc = 0x799a28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 121), (uint8_t)GPR_U32(ctx, 0));
label_799a2c:
    // 0x799a2c: 0xa040007b  sb          $zero, 0x7B($v0)
    ctx->pc = 0x799a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 123), (uint8_t)GPR_U32(ctx, 0));
label_799a30:
    // 0x799a30: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x799a30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_799a34:
    // 0x799a34: 0xc0e94bc  jal         func_3A52F0
label_799a38:
    if (ctx->pc == 0x799A38u) {
        ctx->pc = 0x799A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A34u;
        // 0x799a38: 0xa0400080  sb          $zero, 0x80($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A3Cu;
        goto label_799a3c;
    }
    ctx->pc = 0x799A34u;
    SET_GPR_U32(ctx, 31, 0x799A3Cu);
    ctx->pc = 0x799A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A34u;
    // 0x799a38: 0xa0400080  sb          $zero, 0x80($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x799A34u, 0x799A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A3Cu;
label_799a3c:
    // 0x799a3c: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
label_799a40:
    // 0x799a40: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x799a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_799a44:
    // 0x799a44: 0x8c644c38  lw          $a0, 0x4C38($v1)
    ctx->pc = 0x799a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19512)));
label_799a48:
    // 0x799a48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799a4c:
    // 0x799a4c: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x799a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_799a50:
    // 0x799a50: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x799a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_799a54:
    // 0x799a54: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x799a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_799a58:
    // 0x799a58: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x799a58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_799a5c:
    // 0x799a5c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_799a60:
    if (ctx->pc == 0x799A60u) {
        ctx->pc = 0x799A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A5Cu;
        // 0x799a60: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A64u;
        goto label_799a64;
    }
    ctx->pc = 0x799A5Cu;
    {
        const bool branch_taken_0x799a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A5Cu;
        // 0x799a60: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a5c) {
            ctx->pc = 0x799AC0u;
            goto label_799ac0;
        }
    }
    ctx->pc = 0x799A64u;
label_799a64:
    // 0x799a64: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x799a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_799a68:
    // 0x799a68: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x799a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_799a6c:
    // 0x799a6c: 0x908202fd  lbu         $v0, 0x2FD($a0)
    ctx->pc = 0x799a6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 765)));
label_799a70:
    // 0x799a70: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_799a74:
    if (ctx->pc == 0x799A74u) {
        ctx->pc = 0x799A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A70u;
        // 0x799a74: 0x8ce34c38  lw          $v1, 0x4C38($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 19512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A78u;
        goto label_799a78;
    }
    ctx->pc = 0x799A70u;
    {
        const bool branch_taken_0x799a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A70u;
        // 0x799a74: 0x8ce34c38  lw          $v1, 0x4C38($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 19512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a70) {
            ctx->pc = 0x799A84u;
            goto label_799a84;
        }
    }
    ctx->pc = 0x799A78u;
label_799a78:
    // 0x799a78: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x799a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_799a7c:
    // 0x799a7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799a80:
    // 0x799a80: 0x8ce34c38  lw          $v1, 0x4C38($a3)
    ctx->pc = 0x799a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 19512)));
label_799a84:
    // 0x799a84: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x799a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_799a88:
    // 0x799a88: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x799a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_799a8c:
    // 0x799a8c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x799a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_799a90:
    // 0x799a90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_799a94:
    if (ctx->pc == 0x799A94u) {
        ctx->pc = 0x799A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A90u;
        // 0x799a94: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A98u;
        goto label_799a98;
    }
    ctx->pc = 0x799A90u;
    {
        const bool branch_taken_0x799a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A90u;
        // 0x799a94: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a90) {
            ctx->pc = 0x799AC0u;
            goto label_799ac0;
        }
    }
    ctx->pc = 0x799A98u;
label_799a98:
    // 0x799a98: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x799a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_799a9c:
    // 0x799a9c: 0x908202fd  lbu         $v0, 0x2FD($a0)
    ctx->pc = 0x799a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 765)));
label_799aa0:
    // 0x799aa0: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
label_799aa4:
    if (ctx->pc == 0x799AA4u) {
        ctx->pc = 0x799AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA0u;
        // 0x799aa4: 0x8ce34c38  lw          $v1, 0x4C38($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 19512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AA8u;
        goto label_799aa8;
    }
    ctx->pc = 0x799AA0u;
    {
        const bool branch_taken_0x799aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA0u;
        // 0x799aa4: 0x8ce34c38  lw          $v1, 0x4C38($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 19512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799aa0) {
            ctx->pc = 0x799A84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a84;
        }
    }
    ctx->pc = 0x799AA8u;
label_799aa8:
    // 0x799aa8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x799aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_799aac:
    // 0x799aac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x799aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_799ab0:
    // 0x799ab0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x799ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_799ab4:
    // 0x799ab4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_799ab8:
    // 0x799ab8: 0x14c3fff1  bne         $a2, $v1, . + 4 + (-0xF << 2)
label_799abc:
    if (ctx->pc == 0x799ABCu) {
        ctx->pc = 0x799ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AB8u;
        // 0x799abc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AC0u;
        goto label_799ac0;
    }
    ctx->pc = 0x799AB8u;
    {
        const bool branch_taken_0x799ab8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x799ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AB8u;
        // 0x799abc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ab8) {
            ctx->pc = 0x799A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a80;
        }
    }
    ctx->pc = 0x799AC0u;
label_799ac0:
    // 0x799ac0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x799ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_799ac4:
    // 0x799ac4: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x799ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_799ac8:
    // 0x799ac8: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x799ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_799acc:
    // 0x799acc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_799ad0:
    if (ctx->pc == 0x799AD0u) {
        ctx->pc = 0x799AD4u;
        goto label_799ad4;
    }
    ctx->pc = 0x799ACCu;
    {
        const bool branch_taken_0x799acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x799acc) {
            ctx->pc = 0x799AECu;
            goto label_799aec;
        }
    }
    ctx->pc = 0x799AD4u;
label_799ad4:
    // 0x799ad4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x799ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799ad8:
    // 0x799ad8: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x799ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
label_799adc:
    // 0x799adc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x799adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_799ae0:
    // 0x799ae0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x799ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_799ae4:
    // 0x799ae4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x799ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799ae8:
    // 0x799ae8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x799ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_799aec:
    // 0x799aec: 0x3c01c20c  lui         $at, 0xC20C
    ctx->pc = 0x799aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49676 << 16));
label_799af0:
    // 0x799af0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799af4:
    // 0x799af4: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x799af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
label_799af8:
    // 0x799af8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_799afc:
    // 0x799afc: 0xc0c7414  jal         func_31D050
label_799b00:
    if (ctx->pc == 0x799B00u) {
        ctx->pc = 0x799B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AFCu;
        // 0x799b00: 0x26500020  addiu       $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B04u;
        goto label_799b04;
    }
    ctx->pc = 0x799AFCu;
    SET_GPR_U32(ctx, 31, 0x799B04u);
    ctx->pc = 0x799B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AFCu;
    // 0x799b00: 0x26500020  addiu       $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x799AFCu, 0x799B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B04u;
label_799b04:
    // 0x799b04: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x799b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_799b08:
    // 0x799b08: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x799b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_799b0c:
    // 0x799b0c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x799b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_799b10:
    // 0x799b10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_799b14:
    // 0x799b14: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x799b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
label_799b18:
    // 0x799b18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799b1c:
    // 0x799b1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_799b20:
    if (ctx->pc == 0x799B20u) {
        ctx->pc = 0x799B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B1Cu;
        // 0x799b20: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B24u;
        goto label_799b24;
    }
    ctx->pc = 0x799B1Cu;
    {
        const bool branch_taken_0x799b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B1Cu;
        // 0x799b20: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b1c) {
            ctx->pc = 0x799B2Cu;
            goto label_799b2c;
        }
    }
    ctx->pc = 0x799B24u;
label_799b24:
    // 0x799b24: 0x3c01c188  lui         $at, 0xC188
    ctx->pc = 0x799b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49544 << 16));
label_799b28:
    // 0x799b28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799b2c:
    // 0x799b2c: 0x26319b70  addiu       $s1, $s1, -0x6490
    ctx->pc = 0x799b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
label_799b30:
    // 0x799b30: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x799b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_799b34:
    // 0x799b34: 0xc07e804  jal         func_1FA010
label_799b38:
    if (ctx->pc == 0x799B38u) {
        ctx->pc = 0x799B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B34u;
        // 0x799b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B3Cu;
        goto label_799b3c;
    }
    ctx->pc = 0x799B34u;
    SET_GPR_U32(ctx, 31, 0x799B3Cu);
    ctx->pc = 0x799B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B34u;
    // 0x799b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x799B34u, 0x799B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B3Cu;
label_799b3c:
    // 0x799b3c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x799b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_799b40:
    // 0x799b40: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_799b44:
    if (ctx->pc == 0x799B44u) {
        ctx->pc = 0x799B48u;
        goto label_799b48;
    }
    ctx->pc = 0x799B40u;
    {
        const bool branch_taken_0x799b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799b40) {
            ctx->pc = 0x799B64u;
            goto label_799b64;
        }
    }
    ctx->pc = 0x799B48u;
label_799b48:
    // 0x799b48: 0x3c013e42  lui         $at, 0x3E42
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15938 << 16));
label_799b4c:
    // 0x799b4c: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x799b4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_799b50:
    // 0x799b50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799b54:
    // 0x799b54: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x799b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_799b58:
    // 0x799b58: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_799b5c:
    // 0x799b5c: 0x10000019  b           . + 4 + (0x19 << 2)
label_799b60:
    if (ctx->pc == 0x799B60u) {
        ctx->pc = 0x799B64u;
        goto label_799b64;
    }
    ctx->pc = 0x799B5Cu;
    {
        const bool branch_taken_0x799b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799b5c) {
            ctx->pc = 0x799BC4u;
            goto label_799bc4;
        }
    }
    ctx->pc = 0x799B64u;
label_799b64:
    // 0x799b64: 0xc07e804  jal         func_1FA010
label_799b68:
    if (ctx->pc == 0x799B68u) {
        ctx->pc = 0x799B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B64u;
        // 0x799b68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B6Cu;
        goto label_799b6c;
    }
    ctx->pc = 0x799B64u;
    SET_GPR_U32(ctx, 31, 0x799B6Cu);
    ctx->pc = 0x799B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B64u;
    // 0x799b68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x799B64u, 0x799B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B6Cu;
label_799b6c:
    // 0x799b6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x799b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799b70:
    // 0x799b70: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_799b74:
    if (ctx->pc == 0x799B74u) {
        ctx->pc = 0x799B78u;
        goto label_799b78;
    }
    ctx->pc = 0x799B70u;
    {
        const bool branch_taken_0x799b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x799b70) {
            ctx->pc = 0x799B98u;
            goto label_799b98;
        }
    }
    ctx->pc = 0x799B78u;
label_799b78:
    // 0x799b78: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x799b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_799b7c:
    // 0x799b7c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x799b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_799b80:
    // 0x799b80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799b84:
    // 0x799b84: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x799b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_799b88:
    // 0x799b88: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799b88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_799b8c:
    // 0x799b8c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_799b90:
    // 0x799b90: 0x1000000c  b           . + 4 + (0xC << 2)
label_799b94:
    if (ctx->pc == 0x799B94u) {
        ctx->pc = 0x799B98u;
        goto label_799b98;
    }
    ctx->pc = 0x799B90u;
    {
        const bool branch_taken_0x799b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799b90) {
            ctx->pc = 0x799BC4u;
            goto label_799bc4;
        }
    }
    ctx->pc = 0x799B98u;
label_799b98:
    // 0x799b98: 0xc07e804  jal         func_1FA010
label_799b9c:
    if (ctx->pc == 0x799B9Cu) {
        ctx->pc = 0x799B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B98u;
        // 0x799b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BA0u;
        goto label_799ba0;
    }
    ctx->pc = 0x799B98u;
    SET_GPR_U32(ctx, 31, 0x799BA0u);
    ctx->pc = 0x799B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B98u;
    // 0x799b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x799B98u, 0x799BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BA0u;
label_799ba0:
    // 0x799ba0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x799ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_799ba4:
    // 0x799ba4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_799ba8:
    if (ctx->pc == 0x799BA8u) {
        ctx->pc = 0x799BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BA4u;
        // 0x799ba8: 0xae7d0380  sw          $sp, 0x380($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 896), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BACu;
        goto label_799bac;
    }
    ctx->pc = 0x799BA4u;
    {
        const bool branch_taken_0x799ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799ba4) {
            ctx->pc = 0x799BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BA4u;
            // 0x799ba8: 0xae7d0380  sw          $sp, 0x380($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 896), GPR_U32(ctx, 29));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799BD4u;
            goto label_799bd4;
        }
    }
    ctx->pc = 0x799BACu;
label_799bac:
    // 0x799bac: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x799bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_799bb0:
    // 0x799bb0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x799bb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_799bb4:
    // 0x799bb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799bb8:
    // 0x799bb8: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
label_799bbc:
    // 0x799bbc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x799bbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_799bc0:
    // 0x799bc0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_799bc4:
    // 0x799bc4: 0xc0c7414  jal         func_31D050
label_799bc8:
    if (ctx->pc == 0x799BC8u) {
        ctx->pc = 0x799BCCu;
        goto label_799bcc;
    }
    ctx->pc = 0x799BC4u;
    SET_GPR_U32(ctx, 31, 0x799BCCu);
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x799BC4u, 0x799BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BCCu;
label_799bcc:
    // 0x799bcc: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x799bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_799bd0:
    // 0x799bd0: 0xae7d0380  sw          $sp, 0x380($s3)
    ctx->pc = 0x799bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 896), GPR_U32(ctx, 29));
label_799bd4:
    // 0x799bd4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x799bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_799bd8:
    // 0x799bd8: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x799bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_799bdc:
    // 0x799bdc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x799bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_799be0:
    // 0x799be0: 0xae5400a4  sw          $s4, 0xA4($s2)
    ctx->pc = 0x799be0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 20));
label_799be4:
    // 0x799be4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x799be4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799be8:
    // 0x799be8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x799be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_799bec:
    // 0x799bec: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x799becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_799bf0:
    // 0x799bf0: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799bf4:
    // 0x799bf4: 0x0  nop
    ctx->pc = 0x799bf4u;
    // NOP
label_799bf8:
    // 0x799bf8: 0x248306e0  addiu       $v1, $a0, 0x6E0
    ctx->pc = 0x799bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1760));
label_799bfc:
    // 0x799bfc: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x799bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_799c00:
    // 0x799c00: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x799c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_799c04:
    // 0x799c04: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x799c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_799c08:
    // 0x799c08: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x799c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_799c0c:
    // 0x799c0c: 0x68620017  ldl         $v0, 0x17($v1)
    ctx->pc = 0x799c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_799c10:
    // 0x799c10: 0x6c620010  ldr         $v0, 0x10($v1)
    ctx->pc = 0x799c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_799c14:
    // 0x799c14: 0xb3a500b7  sdl         $a1, 0xB7($sp)
    ctx->pc = 0x799c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_799c18:
    // 0x799c18: 0xb7a500b0  sdr         $a1, 0xB0($sp)
    ctx->pc = 0x799c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_799c1c:
    // 0x799c1c: 0xb3a600bf  sdl         $a2, 0xBF($sp)
    ctx->pc = 0x799c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_799c20:
    // 0x799c20: 0xb7a600b8  sdr         $a2, 0xB8($sp)
    ctx->pc = 0x799c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_799c24:
    // 0x799c24: 0xb3a200c7  sdl         $v0, 0xC7($sp)
    ctx->pc = 0x799c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_799c28:
    // 0x799c28: 0xb7a200c0  sdr         $v0, 0xC0($sp)
    ctx->pc = 0x799c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_799c2c:
    // 0x799c2c: 0x6865001f  ldl         $a1, 0x1F($v1)
    ctx->pc = 0x799c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_799c30:
    // 0x799c30: 0x6c650018  ldr         $a1, 0x18($v1)
    ctx->pc = 0x799c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_799c34:
    // 0x799c34: 0xb3a500cf  sdl         $a1, 0xCF($sp)
    ctx->pc = 0x799c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_799c38:
    // 0x799c38: 0xb7a500c8  sdr         $a1, 0xC8($sp)
    ctx->pc = 0x799c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_799c3c:
    // 0x799c3c: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x799c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_799c40:
    // 0x799c40: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799c44:
    // 0x799c44: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_799c48:
    // 0x799c48: 0x24850700  addiu       $a1, $a0, 0x700
    ctx->pc = 0x799c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
label_799c4c:
    // 0x799c4c: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x799c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
label_799c50:
    // 0x799c50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_799c54:
    // 0x799c54: 0x8cc42f84  lw          $a0, 0x2F84($a2)
    ctx->pc = 0x799c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12164)));
label_799c58:
    // 0x799c58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x799c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799c5c:
    // 0x799c5c: 0xc1e810a  jal         func_7A0428
label_799c60:
    if (ctx->pc == 0x799C60u) {
        ctx->pc = 0x799C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C5Cu;
        // 0x799c60: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C64u;
        goto label_799c64;
    }
    ctx->pc = 0x799C5Cu;
    SET_GPR_U32(ctx, 31, 0x799C64u);
    ctx->pc = 0x799C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C5Cu;
    // 0x799c60: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A0428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A0428u, 0x799C5Cu, 0x799C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C64u;
label_799c64:
    // 0x799c64: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x799c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_799c68:
    // 0x799c68: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
label_799c6c:
    if (ctx->pc == 0x799C6Cu) {
        ctx->pc = 0x799C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C68u;
        // 0x799c6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C70u;
        goto label_799c70;
    }
    ctx->pc = 0x799C68u;
    {
        const bool branch_taken_0x799c68 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x799C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C68u;
        // 0x799c6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c68) {
            ctx->pc = 0x799C74u;
            goto label_799c74;
        }
    }
    ctx->pc = 0x799C70u;
label_799c70:
    // 0x799c70: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x799c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_799c74:
    // 0x799c74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x799c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_799c78:
    // 0x799c78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_799c7c:
    if (ctx->pc == 0x799C7Cu) {
        ctx->pc = 0x799C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C78u;
        // 0x799c7c: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C80u;
        goto label_799c80;
    }
    ctx->pc = 0x799C78u;
    {
        const bool branch_taken_0x799c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C78u;
        // 0x799c7c: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c78) {
            ctx->pc = 0x799C98u;
            goto label_799c98;
        }
    }
    ctx->pc = 0x799C80u;
label_799c80:
    // 0x799c80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x799c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_799c84:
    // 0x799c84: 0x24a50718  addiu       $a1, $a1, 0x718
    ctx->pc = 0x799c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1816));
label_799c88:
    // 0x799c88: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x799c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_799c8c:
    // 0x799c8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799c90:
    // 0x799c90: 0x60f809  jalr        $v1
label_799c94:
    if (ctx->pc == 0x799C94u) {
        ctx->pc = 0x799C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C90u;
        // 0x799c94: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C98u;
        goto label_799c98;
    }
    ctx->pc = 0x799C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799C98u);
        ctx->pc = 0x799C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C90u;
        // 0x799c94: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C90u, 0x799C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799C98u;
label_799c98:
    // 0x799c98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x799c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_799c9c:
    // 0x799c9c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_799ca0:
    if (ctx->pc == 0x799CA0u) {
        ctx->pc = 0x799CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C9Cu;
        // 0x799ca0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CA4u;
        goto label_799ca4;
    }
    ctx->pc = 0x799C9Cu;
    {
        const bool branch_taken_0x799c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C9Cu;
        // 0x799ca0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c9c) {
            ctx->pc = 0x799DFCu;
            goto label_799dfc;
        }
    }
    ctx->pc = 0x799CA4u;
label_799ca4:
    // 0x799ca4: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x799ca4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_799ca8:
    // 0x799ca8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_799cac:
    // 0x799cac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_799cb0:
    // 0x799cb0: 0x3673fffd  ori         $s3, $s3, 0xFFFD
    ctx->pc = 0x799cb0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65533);
label_799cb4:
    // 0x799cb4: 0x27b500e0  addiu       $s5, $sp, 0xE0
    ctx->pc = 0x799cb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_799cb8:
    // 0x799cb8: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x799cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_799cbc:
    // 0x799cbc: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x799cbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_799cc0:
    // 0x799cc0: 0x27b200f0  addiu       $s2, $sp, 0xF0
    ctx->pc = 0x799cc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_799cc4:
    // 0x799cc4: 0x27be0100  addiu       $fp, $sp, 0x100
    ctx->pc = 0x799cc4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_799cc8:
    // 0x799cc8: 0x27b700d0  addiu       $s7, $sp, 0xD0
    ctx->pc = 0x799cc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_799ccc:
    // 0x799ccc: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x799cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799cd0:
    // 0x799cd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799cd4:
    // 0x799cd4: 0x0  nop
    ctx->pc = 0x799cd4u;
    // NOP
label_799cd8:
    // 0x799cd8: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x799cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_799cdc:
    // 0x799cdc: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x799cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_799ce0:
    // 0x799ce0: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x799ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_799ce4:
    // 0x799ce4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x799ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_799ce8:
    // 0x799ce8: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x799ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_799cec:
    // 0x799cec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x799cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_799cf0:
    // 0x799cf0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_799cf4:
    if (ctx->pc == 0x799CF4u) {
        ctx->pc = 0x799CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CF0u;
        // 0x799cf4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CF8u;
        goto label_799cf8;
    }
    ctx->pc = 0x799CF0u;
    {
        const bool branch_taken_0x799cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CF0u;
        // 0x799cf4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cf0) {
            ctx->pc = 0x799D58u;
            goto label_799d58;
        }
    }
    ctx->pc = 0x799CF8u;
label_799cf8:
    // 0x799cf8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x799cf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_799cfc:
    // 0x799cfc: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x799cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
label_799d00:
    // 0x799d00: 0xdba400f0  lqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x799d00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_799d04:
    // 0x799d04: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x799d04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_799d08:
    // 0x799d08: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x799d08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_799d0c:
    // 0x799d0c: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x799d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
label_799d10:
    // 0x799d10: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x799d10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_799d14:
    // 0x799d14: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x799d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
label_799d18:
    // 0x799d18: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x799d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_799d1c:
    // 0x799d1c: 0xc4c00060  lwc1        $f0, 0x60($a2)
    ctx->pc = 0x799d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799d20:
    // 0x799d20: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x799d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_799d24:
    // 0x799d24: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x799d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_799d28:
    // 0x799d28: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x799d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
label_799d2c:
    // 0x799d2c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x799d2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_799d30:
    // 0x799d30: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x799d30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_799d34:
    // 0x799d34: 0xfaa40020  sqc2        $vf4, 0x20($s5)
    ctx->pc = 0x799d34u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_799d38:
    // 0x799d38: 0xdba40100  lqc2        $vf4, 0x100($sp)
    ctx->pc = 0x799d38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_799d3c:
    // 0x799d3c: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x799d3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_799d40:
    // 0x799d40: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x799d40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_799d44:
    // 0x799d44: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x799d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
label_799d48:
    // 0x799d48: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x799d48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_799d4c:
    // 0x799d4c: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x799d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
label_799d50:
    // 0x799d50: 0x10000004  b           . + 4 + (0x4 << 2)
label_799d54:
    if (ctx->pc == 0x799D54u) {
        ctx->pc = 0x799D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D50u;
        // 0x799d54: 0x8c6200f0  lw          $v0, 0xF0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D58u;
        goto label_799d58;
    }
    ctx->pc = 0x799D50u;
    {
        const bool branch_taken_0x799d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D50u;
        // 0x799d54: 0x8c6200f0  lw          $v0, 0xF0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d50) {
            ctx->pc = 0x799D64u;
            goto label_799d64;
        }
    }
    ctx->pc = 0x799D58u;
label_799d58:
    // 0x799d58: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x799d58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_799d5c:
    // 0x799d5c: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x799d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
label_799d60:
    // 0x799d60: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x799d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_799d64:
    // 0x799d64: 0x10570006  beq         $v0, $s7, . + 4 + (0x6 << 2)
label_799d68:
    if (ctx->pc == 0x799D68u) {
        ctx->pc = 0x799D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D64u;
        // 0x799d68: 0xc7a000d0  lwc1        $f0, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D6Cu;
        goto label_799d6c;
    }
    ctx->pc = 0x799D64u;
    {
        const bool branch_taken_0x799d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x799D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D64u;
        // 0x799d68: 0xc7a000d0  lwc1        $f0, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d64) {
            ctx->pc = 0x799D80u;
            goto label_799d80;
        }
    }
    ctx->pc = 0x799D6Cu;
label_799d6c:
    // 0x799d6c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x799d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_799d70:
    // 0x799d70: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x799d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_799d74:
    // 0x799d74: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x799d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_799d78:
    // 0x799d78: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x799d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799d7c:
    // 0x799d7c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x799d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_799d80:
    // 0x799d80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799d84:
    // 0x799d84: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x799d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_799d88:
    // 0x799d88: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x799d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_799d8c:
    // 0x799d8c: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
label_799d90:
    if (ctx->pc == 0x799D90u) {
        ctx->pc = 0x799D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D8Cu;
        // 0x799d90: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D94u;
        goto label_799d94;
    }
    ctx->pc = 0x799D8Cu;
    {
        const bool branch_taken_0x799d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x799d8c) {
            ctx->pc = 0x799D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D8Cu;
            // 0x799d90: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799DB0u;
            goto label_799db0;
        }
    }
    ctx->pc = 0x799D94u;
label_799d94:
    // 0x799d94: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x799d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799d98:
    // 0x799d98: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x799d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
label_799d9c:
    // 0x799d9c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x799d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_799da0:
    // 0x799da0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x799da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_799da4:
    // 0x799da4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x799da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799da8:
    // 0x799da8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x799da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_799dac:
    // 0x799dac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x799dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799db0:
    // 0x799db0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x799db0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_799db4:
    // 0x799db4: 0xc620008c  lwc1        $f0, 0x8C($s1)
    ctx->pc = 0x799db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799db8:
    // 0x799db8: 0xe460024c  swc1        $f0, 0x24C($v1)
    ctx->pc = 0x799db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 588), bits); }
label_799dbc:
    // 0x799dbc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799dc0:
    // 0x799dc0: 0xc620009c  lwc1        $f0, 0x9C($s1)
    ctx->pc = 0x799dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799dc4:
    // 0x799dc4: 0x24430110  addiu       $v1, $v0, 0x110
    ctx->pc = 0x799dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_799dc8:
    // 0x799dc8: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x799dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_799dcc:
    // 0x799dcc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x799dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_799dd0:
    // 0x799dd0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x799dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_799dd4:
    // 0x799dd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799dd8:
    // 0x799dd8: 0x7fa50120  sq          $a1, 0x120($sp)
    ctx->pc = 0x799dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 5));
label_799ddc:
    // 0x799ddc: 0xc0527ae  jal         func_149EB8
label_799de0:
    if (ctx->pc == 0x799DE0u) {
        ctx->pc = 0x799DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DDCu;
        // 0x799de0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DE4u;
        goto label_799de4;
    }
    ctx->pc = 0x799DDCu;
    SET_GPR_U32(ctx, 31, 0x799DE4u);
    ctx->pc = 0x799DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DDCu;
    // 0x799de0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x799DDCu, 0x799DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DE4u;
label_799de4:
    // 0x799de4: 0x2ac20008  slti        $v0, $s6, 0x8
    ctx->pc = 0x799de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)8) ? 1 : 0);
label_799de8:
    // 0x799de8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_799dec:
    if (ctx->pc == 0x799DECu) {
        ctx->pc = 0x799DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DE8u;
        // 0x799dec: 0x7ba50120  lq          $a1, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DF0u;
        goto label_799df0;
    }
    ctx->pc = 0x799DE8u;
    {
        const bool branch_taken_0x799de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DE8u;
        // 0x799dec: 0x7ba50120  lq          $a1, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799de8) {
            ctx->pc = 0x799DFCu;
            goto label_799dfc;
        }
    }
    ctx->pc = 0x799DF0u;
label_799df0:
    // 0x799df0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799df4:
    // 0x799df4: 0x5440ffb8  bnel        $v0, $zero, . + 4 + (-0x48 << 2)
label_799df8:
    if (ctx->pc == 0x799DF8u) {
        ctx->pc = 0x799DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DF4u;
        // 0x799df8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DFCu;
        goto label_799dfc;
    }
    ctx->pc = 0x799DF4u;
    {
        const bool branch_taken_0x799df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799df4) {
            ctx->pc = 0x799DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799DF4u;
            // 0x799df8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799cd8;
        }
    }
    ctx->pc = 0x799DFCu;
label_799dfc:
    // 0x799dfc: 0x92220099  lbu         $v0, 0x99($s1)
    ctx->pc = 0x799dfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 153)));
label_799e00:
    // 0x799e00: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
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
        const bool branch_taken_0x799e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E00u;
        // 0x799e04: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e00) {
            ctx->pc = 0x799E20u;
            goto label_799e20;
        }
    }
    ctx->pc = 0x799E08u;
label_799e08:
    // 0x799e08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799e0c:
    // 0x799e0c: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
label_799e10:
    // 0x799e10: 0xc0b56a8  jal         func_2D5AA0
label_799e14:
    if (ctx->pc == 0x799E14u) {
        ctx->pc = 0x799E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E10u;
        // 0x799e14: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E18u;
        goto label_799e18;
    }
    ctx->pc = 0x799E10u;
    SET_GPR_U32(ctx, 31, 0x799E18u);
    ctx->pc = 0x799E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E10u;
    // 0x799e14: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799E10u, 0x799E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E18u;
label_799e18:
    // 0x799e18: 0x1000ff77  b           . + 4 + (-0x89 << 2)
label_799e1c:
    if (ctx->pc == 0x799E1Cu) {
        ctx->pc = 0x799E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E18u;
        // 0x799e1c: 0x3c04007a  lui         $a0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E20u;
        goto label_799e20;
    }
    ctx->pc = 0x799E18u;
    {
        const bool branch_taken_0x799e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E18u;
        // 0x799e1c: 0x3c04007a  lui         $a0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e18) {
            ctx->pc = 0x799BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799bf8;
        }
    }
    ctx->pc = 0x799E20u;
label_799e20:
    // 0x799e20: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x799e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_799e24:
    // 0x799e24: 0x8c822f84  lw          $v0, 0x2F84($a0)
    ctx->pc = 0x799e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12164)));
label_799e28:
    // 0x799e28: 0xc0b5692  jal         func_2D5A48
label_799e2c:
    if (ctx->pc == 0x799E2Cu) {
        ctx->pc = 0x799E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E28u;
        // 0x799e2c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E30u;
        goto label_799e30;
    }
    ctx->pc = 0x799E28u;
    SET_GPR_U32(ctx, 31, 0x799E30u);
    ctx->pc = 0x799E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E28u;
    // 0x799e2c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799E28u, 0x799E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E30u;
label_799e30:
    // 0x799e30: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x799e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_799e34:
    // 0x799e34: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x799e34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_799e38:
    // 0x799e38: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x799e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_799e3c:
    // 0x799e3c: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x799e3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_799e40:
    // 0x799e40: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x799e40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_799e44:
    // 0x799e44: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x799e44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_799e48:
    // 0x799e48: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x799e48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_799e4c:
    // 0x799e4c: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x799e4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_799e50:
    // 0x799e50: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x799e50u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_799e54:
    // 0x799e54: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x799e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_799e58:
    // 0x799e58: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x799e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_799e5c:
    // 0x799e5c: 0x3e00008  jr          $ra
label_799e60:
    if (ctx->pc == 0x799E60u) {
        ctx->pc = 0x799E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E5Cu;
        // 0x799e60: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E64u;
        goto label_799e64;
    }
    ctx->pc = 0x799E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E5Cu;
        // 0x799e60: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799E64u;
label_799e64:
    // 0x799e64: 0x0  nop
    ctx->pc = 0x799e64u;
    // NOP
    ctx->pc = 0x799e68u;
}
} // namespace gh_r501
