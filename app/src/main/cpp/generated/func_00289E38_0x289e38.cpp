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

// Function: func_00289E38
// Address: 0x289e38 - 0x28a2e8
void func_00289E38_0x289e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00289E38_0x289e38");
#endif

    switch (ctx->pc) {
        case 0x289e38u: goto label_289e38;
        case 0x289e3cu: goto label_289e3c;
        case 0x289e40u: goto label_289e40;
        case 0x289e44u: goto label_289e44;
        case 0x289e48u: goto label_289e48;
        case 0x289e4cu: goto label_289e4c;
        case 0x289e50u: goto label_289e50;
        case 0x289e54u: goto label_289e54;
        case 0x289e58u: goto label_289e58;
        case 0x289e5cu: goto label_289e5c;
        case 0x289e60u: goto label_289e60;
        case 0x289e64u: goto label_289e64;
        case 0x289e68u: goto label_289e68;
        case 0x289e6cu: goto label_289e6c;
        case 0x289e70u: goto label_289e70;
        case 0x289e74u: goto label_289e74;
        case 0x289e78u: goto label_289e78;
        case 0x289e7cu: goto label_289e7c;
        case 0x289e80u: goto label_289e80;
        case 0x289e84u: goto label_289e84;
        case 0x289e88u: goto label_289e88;
        case 0x289e8cu: goto label_289e8c;
        case 0x289e90u: goto label_289e90;
        case 0x289e94u: goto label_289e94;
        case 0x289e98u: goto label_289e98;
        case 0x289e9cu: goto label_289e9c;
        case 0x289ea0u: goto label_289ea0;
        case 0x289ea4u: goto label_289ea4;
        case 0x289ea8u: goto label_289ea8;
        case 0x289eacu: goto label_289eac;
        case 0x289eb0u: goto label_289eb0;
        case 0x289eb4u: goto label_289eb4;
        case 0x289eb8u: goto label_289eb8;
        case 0x289ebcu: goto label_289ebc;
        case 0x289ec0u: goto label_289ec0;
        case 0x289ec4u: goto label_289ec4;
        case 0x289ec8u: goto label_289ec8;
        case 0x289eccu: goto label_289ecc;
        case 0x289ed0u: goto label_289ed0;
        case 0x289ed4u: goto label_289ed4;
        case 0x289ed8u: goto label_289ed8;
        case 0x289edcu: goto label_289edc;
        case 0x289ee0u: goto label_289ee0;
        case 0x289ee4u: goto label_289ee4;
        case 0x289ee8u: goto label_289ee8;
        case 0x289eecu: goto label_289eec;
        case 0x289ef0u: goto label_289ef0;
        case 0x289ef4u: goto label_289ef4;
        case 0x289ef8u: goto label_289ef8;
        case 0x289efcu: goto label_289efc;
        case 0x289f00u: goto label_289f00;
        case 0x289f04u: goto label_289f04;
        case 0x289f08u: goto label_289f08;
        case 0x289f0cu: goto label_289f0c;
        case 0x289f10u: goto label_289f10;
        case 0x289f14u: goto label_289f14;
        case 0x289f18u: goto label_289f18;
        case 0x289f1cu: goto label_289f1c;
        case 0x289f20u: goto label_289f20;
        case 0x289f24u: goto label_289f24;
        case 0x289f28u: goto label_289f28;
        case 0x289f2cu: goto label_289f2c;
        case 0x289f30u: goto label_289f30;
        case 0x289f34u: goto label_289f34;
        case 0x289f38u: goto label_289f38;
        case 0x289f3cu: goto label_289f3c;
        case 0x289f40u: goto label_289f40;
        case 0x289f44u: goto label_289f44;
        case 0x289f48u: goto label_289f48;
        case 0x289f4cu: goto label_289f4c;
        case 0x289f50u: goto label_289f50;
        case 0x289f54u: goto label_289f54;
        case 0x289f58u: goto label_289f58;
        case 0x289f5cu: goto label_289f5c;
        case 0x289f60u: goto label_289f60;
        case 0x289f64u: goto label_289f64;
        case 0x289f68u: goto label_289f68;
        case 0x289f6cu: goto label_289f6c;
        case 0x289f70u: goto label_289f70;
        case 0x289f74u: goto label_289f74;
        case 0x289f78u: goto label_289f78;
        case 0x289f7cu: goto label_289f7c;
        case 0x289f80u: goto label_289f80;
        case 0x289f84u: goto label_289f84;
        case 0x289f88u: goto label_289f88;
        case 0x289f8cu: goto label_289f8c;
        case 0x289f90u: goto label_289f90;
        case 0x289f94u: goto label_289f94;
        case 0x289f98u: goto label_289f98;
        case 0x289f9cu: goto label_289f9c;
        case 0x289fa0u: goto label_289fa0;
        case 0x289fa4u: goto label_289fa4;
        case 0x289fa8u: goto label_289fa8;
        case 0x289facu: goto label_289fac;
        case 0x289fb0u: goto label_289fb0;
        case 0x289fb4u: goto label_289fb4;
        case 0x289fb8u: goto label_289fb8;
        case 0x289fbcu: goto label_289fbc;
        case 0x289fc0u: goto label_289fc0;
        case 0x289fc4u: goto label_289fc4;
        case 0x289fc8u: goto label_289fc8;
        case 0x289fccu: goto label_289fcc;
        case 0x289fd0u: goto label_289fd0;
        case 0x289fd4u: goto label_289fd4;
        case 0x289fd8u: goto label_289fd8;
        case 0x289fdcu: goto label_289fdc;
        case 0x289fe0u: goto label_289fe0;
        case 0x289fe4u: goto label_289fe4;
        case 0x289fe8u: goto label_289fe8;
        case 0x289fecu: goto label_289fec;
        case 0x289ff0u: goto label_289ff0;
        case 0x289ff4u: goto label_289ff4;
        case 0x289ff8u: goto label_289ff8;
        case 0x289ffcu: goto label_289ffc;
        case 0x28a000u: goto label_28a000;
        case 0x28a004u: goto label_28a004;
        case 0x28a008u: goto label_28a008;
        case 0x28a00cu: goto label_28a00c;
        case 0x28a010u: goto label_28a010;
        case 0x28a014u: goto label_28a014;
        case 0x28a018u: goto label_28a018;
        case 0x28a01cu: goto label_28a01c;
        case 0x28a020u: goto label_28a020;
        case 0x28a024u: goto label_28a024;
        case 0x28a028u: goto label_28a028;
        case 0x28a02cu: goto label_28a02c;
        case 0x28a030u: goto label_28a030;
        case 0x28a034u: goto label_28a034;
        case 0x28a038u: goto label_28a038;
        case 0x28a03cu: goto label_28a03c;
        case 0x28a040u: goto label_28a040;
        case 0x28a044u: goto label_28a044;
        case 0x28a048u: goto label_28a048;
        case 0x28a04cu: goto label_28a04c;
        case 0x28a050u: goto label_28a050;
        case 0x28a054u: goto label_28a054;
        case 0x28a058u: goto label_28a058;
        case 0x28a05cu: goto label_28a05c;
        case 0x28a060u: goto label_28a060;
        case 0x28a064u: goto label_28a064;
        case 0x28a068u: goto label_28a068;
        case 0x28a06cu: goto label_28a06c;
        case 0x28a070u: goto label_28a070;
        case 0x28a074u: goto label_28a074;
        case 0x28a078u: goto label_28a078;
        case 0x28a07cu: goto label_28a07c;
        case 0x28a080u: goto label_28a080;
        case 0x28a084u: goto label_28a084;
        case 0x28a088u: goto label_28a088;
        case 0x28a08cu: goto label_28a08c;
        case 0x28a090u: goto label_28a090;
        case 0x28a094u: goto label_28a094;
        case 0x28a098u: goto label_28a098;
        case 0x28a09cu: goto label_28a09c;
        case 0x28a0a0u: goto label_28a0a0;
        case 0x28a0a4u: goto label_28a0a4;
        case 0x28a0a8u: goto label_28a0a8;
        case 0x28a0acu: goto label_28a0ac;
        case 0x28a0b0u: goto label_28a0b0;
        case 0x28a0b4u: goto label_28a0b4;
        case 0x28a0b8u: goto label_28a0b8;
        case 0x28a0bcu: goto label_28a0bc;
        case 0x28a0c0u: goto label_28a0c0;
        case 0x28a0c4u: goto label_28a0c4;
        case 0x28a0c8u: goto label_28a0c8;
        case 0x28a0ccu: goto label_28a0cc;
        case 0x28a0d0u: goto label_28a0d0;
        case 0x28a0d4u: goto label_28a0d4;
        case 0x28a0d8u: goto label_28a0d8;
        case 0x28a0dcu: goto label_28a0dc;
        case 0x28a0e0u: goto label_28a0e0;
        case 0x28a0e4u: goto label_28a0e4;
        case 0x28a0e8u: goto label_28a0e8;
        case 0x28a0ecu: goto label_28a0ec;
        case 0x28a0f0u: goto label_28a0f0;
        case 0x28a0f4u: goto label_28a0f4;
        case 0x28a0f8u: goto label_28a0f8;
        case 0x28a0fcu: goto label_28a0fc;
        case 0x28a100u: goto label_28a100;
        case 0x28a104u: goto label_28a104;
        case 0x28a108u: goto label_28a108;
        case 0x28a10cu: goto label_28a10c;
        case 0x28a110u: goto label_28a110;
        case 0x28a114u: goto label_28a114;
        case 0x28a118u: goto label_28a118;
        case 0x28a11cu: goto label_28a11c;
        case 0x28a120u: goto label_28a120;
        case 0x28a124u: goto label_28a124;
        case 0x28a128u: goto label_28a128;
        case 0x28a12cu: goto label_28a12c;
        case 0x28a130u: goto label_28a130;
        case 0x28a134u: goto label_28a134;
        case 0x28a138u: goto label_28a138;
        case 0x28a13cu: goto label_28a13c;
        case 0x28a140u: goto label_28a140;
        case 0x28a144u: goto label_28a144;
        case 0x28a148u: goto label_28a148;
        case 0x28a14cu: goto label_28a14c;
        case 0x28a150u: goto label_28a150;
        case 0x28a154u: goto label_28a154;
        case 0x28a158u: goto label_28a158;
        case 0x28a15cu: goto label_28a15c;
        case 0x28a160u: goto label_28a160;
        case 0x28a164u: goto label_28a164;
        case 0x28a168u: goto label_28a168;
        case 0x28a16cu: goto label_28a16c;
        case 0x28a170u: goto label_28a170;
        case 0x28a174u: goto label_28a174;
        case 0x28a178u: goto label_28a178;
        case 0x28a17cu: goto label_28a17c;
        case 0x28a180u: goto label_28a180;
        case 0x28a184u: goto label_28a184;
        case 0x28a188u: goto label_28a188;
        case 0x28a18cu: goto label_28a18c;
        case 0x28a190u: goto label_28a190;
        case 0x28a194u: goto label_28a194;
        case 0x28a198u: goto label_28a198;
        case 0x28a19cu: goto label_28a19c;
        case 0x28a1a0u: goto label_28a1a0;
        case 0x28a1a4u: goto label_28a1a4;
        case 0x28a1a8u: goto label_28a1a8;
        case 0x28a1acu: goto label_28a1ac;
        case 0x28a1b0u: goto label_28a1b0;
        case 0x28a1b4u: goto label_28a1b4;
        case 0x28a1b8u: goto label_28a1b8;
        case 0x28a1bcu: goto label_28a1bc;
        case 0x28a1c0u: goto label_28a1c0;
        case 0x28a1c4u: goto label_28a1c4;
        case 0x28a1c8u: goto label_28a1c8;
        case 0x28a1ccu: goto label_28a1cc;
        case 0x28a1d0u: goto label_28a1d0;
        case 0x28a1d4u: goto label_28a1d4;
        case 0x28a1d8u: goto label_28a1d8;
        case 0x28a1dcu: goto label_28a1dc;
        case 0x28a1e0u: goto label_28a1e0;
        case 0x28a1e4u: goto label_28a1e4;
        case 0x28a1e8u: goto label_28a1e8;
        case 0x28a1ecu: goto label_28a1ec;
        case 0x28a1f0u: goto label_28a1f0;
        case 0x28a1f4u: goto label_28a1f4;
        case 0x28a1f8u: goto label_28a1f8;
        case 0x28a1fcu: goto label_28a1fc;
        case 0x28a200u: goto label_28a200;
        case 0x28a204u: goto label_28a204;
        case 0x28a208u: goto label_28a208;
        case 0x28a20cu: goto label_28a20c;
        case 0x28a210u: goto label_28a210;
        case 0x28a214u: goto label_28a214;
        case 0x28a218u: goto label_28a218;
        case 0x28a21cu: goto label_28a21c;
        case 0x28a220u: goto label_28a220;
        case 0x28a224u: goto label_28a224;
        case 0x28a228u: goto label_28a228;
        case 0x28a22cu: goto label_28a22c;
        case 0x28a230u: goto label_28a230;
        case 0x28a234u: goto label_28a234;
        case 0x28a238u: goto label_28a238;
        case 0x28a23cu: goto label_28a23c;
        case 0x28a240u: goto label_28a240;
        case 0x28a244u: goto label_28a244;
        case 0x28a248u: goto label_28a248;
        case 0x28a24cu: goto label_28a24c;
        case 0x28a250u: goto label_28a250;
        case 0x28a254u: goto label_28a254;
        case 0x28a258u: goto label_28a258;
        case 0x28a25cu: goto label_28a25c;
        case 0x28a260u: goto label_28a260;
        case 0x28a264u: goto label_28a264;
        case 0x28a268u: goto label_28a268;
        case 0x28a26cu: goto label_28a26c;
        case 0x28a270u: goto label_28a270;
        case 0x28a274u: goto label_28a274;
        case 0x28a278u: goto label_28a278;
        case 0x28a27cu: goto label_28a27c;
        case 0x28a280u: goto label_28a280;
        case 0x28a284u: goto label_28a284;
        case 0x28a288u: goto label_28a288;
        case 0x28a28cu: goto label_28a28c;
        case 0x28a290u: goto label_28a290;
        case 0x28a294u: goto label_28a294;
        case 0x28a298u: goto label_28a298;
        case 0x28a29cu: goto label_28a29c;
        case 0x28a2a0u: goto label_28a2a0;
        case 0x28a2a4u: goto label_28a2a4;
        case 0x28a2a8u: goto label_28a2a8;
        case 0x28a2acu: goto label_28a2ac;
        case 0x28a2b0u: goto label_28a2b0;
        case 0x28a2b4u: goto label_28a2b4;
        case 0x28a2b8u: goto label_28a2b8;
        case 0x28a2bcu: goto label_28a2bc;
        case 0x28a2c0u: goto label_28a2c0;
        case 0x28a2c4u: goto label_28a2c4;
        case 0x28a2c8u: goto label_28a2c8;
        case 0x28a2ccu: goto label_28a2cc;
        case 0x28a2d0u: goto label_28a2d0;
        case 0x28a2d4u: goto label_28a2d4;
        case 0x28a2d8u: goto label_28a2d8;
        case 0x28a2dcu: goto label_28a2dc;
        case 0x28a2e0u: goto label_28a2e0;
        case 0x28a2e4u: goto label_28a2e4;
        default: break;
    }

    ctx->pc = 0x289e38u;

label_289e38:
    // 0x289e38: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x289e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_289e3c:
    // 0x289e3c: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x289e3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_289e40:
    // 0x289e40: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x289e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_289e44:
    // 0x289e44: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x289e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_289e48:
    // 0x289e48: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x289e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_289e4c:
    // 0x289e4c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x289e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_289e50:
    // 0x289e50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x289e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_289e54:
    // 0x289e54: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x289e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_289e58:
    // 0x289e58: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x289e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_289e5c:
    // 0x289e5c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x289e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_289e60:
    // 0x289e60: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x289e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_289e64:
    // 0x289e64: 0x14600117  bnez        $v1, . + 4 + (0x117 << 2)
label_289e68:
    if (ctx->pc == 0x289E68u) {
        ctx->pc = 0x289E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289E64u;
        // 0x289e68: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x289E6Cu;
        goto label_289e6c;
    }
    ctx->pc = 0x289E64u;
    {
        const bool branch_taken_0x289e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289E64u;
        // 0x289e68: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e64) {
            ctx->pc = 0x28A2C4u;
            goto label_28a2c4;
        }
    }
    ctx->pc = 0x289E6Cu;
label_289e6c:
    // 0x289e6c: 0xc0b6dac  jal         func_2DB6B0
label_289e70:
    if (ctx->pc == 0x289E70u) {
        ctx->pc = 0x289E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289E6Cu;
        // 0x289e70: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289E74u;
        goto label_289e74;
    }
    ctx->pc = 0x289E6Cu;
    SET_GPR_U32(ctx, 31, 0x289E74u);
    ctx->pc = 0x289E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E6Cu;
    // 0x289e70: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x289E6Cu, 0x289E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E74u;
label_289e74:
    // 0x289e74: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x289e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_289e78:
    // 0x289e78: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x289e78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289e7c:
    // 0x289e7c: 0xc07dfac  jal         func_1F7EB0
label_289e80:
    if (ctx->pc == 0x289E80u) {
        ctx->pc = 0x289E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289E7Cu;
        // 0x289e80: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289E84u;
        goto label_289e84;
    }
    ctx->pc = 0x289E7Cu;
    SET_GPR_U32(ctx, 31, 0x289E84u);
    ctx->pc = 0x289E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E7Cu;
    // 0x289e80: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x289E7Cu, 0x289E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E84u;
label_289e84:
    // 0x289e84: 0xe6200618  swc1        $f0, 0x618($s1)
    ctx->pc = 0x289e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
label_289e88:
    // 0x289e88: 0xc0a28ba  jal         func_28A2E8
label_289e8c:
    if (ctx->pc == 0x289E8Cu) {
        ctx->pc = 0x289E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289E88u;
        // 0x289e8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289E90u;
        goto label_289e90;
    }
    ctx->pc = 0x289E88u;
    SET_GPR_U32(ctx, 31, 0x289E90u);
    ctx->pc = 0x289E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E88u;
    // 0x289e8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A2E8u, 0x289E88u, 0x289E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E90u;
label_289e90:
    // 0x289e90: 0x8e2315a0  lw          $v1, 0x15A0($s1)
    ctx->pc = 0x289e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5536)));
label_289e94:
    // 0x289e94: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x289e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_289e98:
    // 0x289e98: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x289e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
label_289e9c:
    // 0x289e9c: 0x26042fc0  addiu       $a0, $s0, 0x2FC0
    ctx->pc = 0x289e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
label_289ea0:
    // 0x289ea0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x289ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_289ea4:
    // 0x289ea4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x289ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289ea8:
    // 0x289ea8: 0xae2315a0  sw          $v1, 0x15A0($s1)
    ctx->pc = 0x289ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5536), GPR_U32(ctx, 3));
label_289eac:
    // 0x289eac: 0xc04d476  jal         func_1351D8
label_289eb0:
    if (ctx->pc == 0x289EB0u) {
        ctx->pc = 0x289EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289EACu;
        // 0x289eb0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289EB4u;
        goto label_289eb4;
    }
    ctx->pc = 0x289EACu;
    SET_GPR_U32(ctx, 31, 0x289EB4u);
    ctx->pc = 0x289EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289EACu;
    // 0x289eb0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x289EACu, 0x289EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289EB4u;
label_289eb4:
    // 0x289eb4: 0xc62115ac  lwc1        $f1, 0x15AC($s1)
    ctx->pc = 0x289eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_289eb8:
    // 0x289eb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x289eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289ebc:
    // 0x289ebc: 0x0  nop
    ctx->pc = 0x289ebcu;
    // NOP
label_289ec0:
    // 0x289ec0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x289ec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289ec4:
    // 0x289ec4: 0x0  nop
    ctx->pc = 0x289ec4u;
    // NOP
label_289ec8:
    // 0x289ec8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_289ecc:
    if (ctx->pc == 0x289ECCu) {
        ctx->pc = 0x289ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289EC8u;
        // 0x289ecc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289ED0u;
        goto label_289ed0;
    }
    ctx->pc = 0x289EC8u;
    {
        const bool branch_taken_0x289ec8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289EC8u;
        // 0x289ecc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ec8) {
            ctx->pc = 0x289EDCu;
            goto label_289edc;
        }
    }
    ctx->pc = 0x289ED0u;
label_289ed0:
    // 0x289ed0: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x289ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289ed4:
    // 0x289ed4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x289ed4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_289ed8:
    // 0x289ed8: 0xe62015ac  swc1        $f0, 0x15AC($s1)
    ctx->pc = 0x289ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5548), bits); }
label_289edc:
    // 0x289edc: 0x922302f4  lbu         $v1, 0x2F4($s1)
    ctx->pc = 0x289edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
label_289ee0:
    // 0x289ee0: 0x24460468  addiu       $a2, $v0, 0x468
    ctx->pc = 0x289ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1128));
label_289ee4:
    // 0x289ee4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x289ee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289ee8:
    // 0x289ee8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x289ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_289eec:
    // 0x289eec: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x289eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_289ef0:
    // 0x289ef0: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x289ef0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_289ef4:
    // 0x289ef4: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_289ef8:
    if (ctx->pc == 0x289EF8u) {
        ctx->pc = 0x289EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289EF4u;
        // 0x289ef8: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289EFCu;
        goto label_289efc;
    }
    ctx->pc = 0x289EF4u;
    {
        const bool branch_taken_0x289ef4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x289EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289EF4u;
        // 0x289ef8: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ef4) {
            ctx->pc = 0x289F20u;
            goto label_289f20;
        }
    }
    ctx->pc = 0x289EFCu;
label_289efc:
    // 0x289efc: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x289efcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_289f00:
    // 0x289f00: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x289f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_289f04:
    // 0x289f04: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x289f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_289f08:
    // 0x289f08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x289f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_289f0c:
    // 0x289f0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x289f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_289f10:
    // 0x289f10: 0xdc72fff8  ld          $s2, -0x8($v1)
    ctx->pc = 0x289f10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_289f14:
    // 0x289f14: 0x12303f  dsra32      $a2, $s2, 0
    ctx->pc = 0x289f14u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 18) >> (32 + 0));
label_289f18:
    // 0x289f18: 0x10000004  b           . + 4 + (0x4 << 2)
label_289f1c:
    if (ctx->pc == 0x289F1Cu) {
        ctx->pc = 0x289F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F18u;
        // 0x289f1c: 0x25030468  addiu       $v1, $t0, 0x468 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289F20u;
        goto label_289f20;
    }
    ctx->pc = 0x289F18u;
    {
        const bool branch_taken_0x289f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F18u;
        // 0x289f1c: 0x25030468  addiu       $v1, $t0, 0x468 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f18) {
            ctx->pc = 0x289F2Cu;
            goto label_289f2c;
        }
    }
    ctx->pc = 0x289F20u;
label_289f20:
    // 0x289f20: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x289f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_289f24:
    // 0x289f24: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x289f24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_289f28:
    // 0x289f28: 0x25030468  addiu       $v1, $t0, 0x468
    ctx->pc = 0x289f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1128));
label_289f2c:
    // 0x289f2c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x289f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_289f30:
    // 0x289f30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x289f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_289f34:
    // 0x289f34: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_289f38:
    if (ctx->pc == 0x289F38u) {
        ctx->pc = 0x289F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F34u;
        // 0x289f38: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289F3Cu;
        goto label_289f3c;
    }
    ctx->pc = 0x289F34u;
    {
        const bool branch_taken_0x289f34 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x289F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F34u;
        // 0x289f38: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f34) {
            ctx->pc = 0x289F50u;
            goto label_289f50;
        }
    }
    ctx->pc = 0x289F3Cu;
label_289f3c:
    // 0x289f3c: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x289f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_289f40:
    // 0x289f40: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x289f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_289f44:
    // 0x289f44: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x289f44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_289f48:
    // 0x289f48: 0x10000002  b           . + 4 + (0x2 << 2)
label_289f4c:
    if (ctx->pc == 0x289F4Cu) {
        ctx->pc = 0x289F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F48u;
        // 0x289f4c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289F50u;
        goto label_289f50;
    }
    ctx->pc = 0x289F48u;
    {
        const bool branch_taken_0x289f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F48u;
        // 0x289f4c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f48) {
            ctx->pc = 0x289F54u;
            goto label_289f54;
        }
    }
    ctx->pc = 0x289F50u;
label_289f50:
    // 0x289f50: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x289f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_289f54:
    // 0x289f54: 0xc0f809  jalr        $a2
label_289f58:
    if (ctx->pc == 0x289F58u) {
        ctx->pc = 0x289F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F54u;
        // 0x289f58: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289F5Cu;
        goto label_289f5c;
    }
    ctx->pc = 0x289F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x289F5Cu);
        ctx->pc = 0x289F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F54u;
        // 0x289f58: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289F54u, 0x289F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x289F5Cu;
label_289f5c:
    // 0x289f5c: 0x8e250250  lw          $a1, 0x250($s1)
    ctx->pc = 0x289f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_289f60:
    // 0x289f60: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x289f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_289f64:
    // 0x289f64: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x289f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_289f68:
    // 0x289f68: 0xde2402f0  ld          $a0, 0x2F0($s1)
    ctx->pc = 0x289f68u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 752)));
label_289f6c:
    // 0x289f6c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x289f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_289f70:
    // 0x289f70: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x289f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_289f74:
    // 0x289f74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x289f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_289f78:
    // 0x289f78: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x289f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_289f7c:
    // 0x289f7c: 0x34028100  ori         $v0, $zero, 0x8100
    ctx->pc = 0x289f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
label_289f80:
    // 0x289f80: 0x21678  dsll        $v0, $v0, 25
    ctx->pc = 0x289f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 25);
label_289f84:
    // 0x289f84: 0x10820051  beq         $a0, $v0, . + 4 + (0x51 << 2)
label_289f88:
    if (ctx->pc == 0x289F88u) {
        ctx->pc = 0x289F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F84u;
        // 0x289f88: 0xae250250  sw          $a1, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289F8Cu;
        goto label_289f8c;
    }
    ctx->pc = 0x289F84u;
    {
        const bool branch_taken_0x289f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x289F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F84u;
        // 0x289f88: 0xae250250  sw          $a1, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f84) {
            ctx->pc = 0x28A0CCu;
            goto label_28a0cc;
        }
    }
    ctx->pc = 0x289F8Cu;
label_289f8c:
    // 0x289f8c: 0xc6200618  lwc1        $f0, 0x618($s1)
    ctx->pc = 0x289f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289f90:
    // 0x289f90: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x289f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
label_289f94:
    // 0x289f94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x289f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_289f98:
    // 0x289f98: 0x0  nop
    ctx->pc = 0x289f98u;
    // NOP
label_289f9c:
    // 0x289f9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x289f9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289fa0:
    // 0x289fa0: 0x0  nop
    ctx->pc = 0x289fa0u;
    // NOP
label_289fa4:
    // 0x289fa4: 0x45020035  bc1fl       . + 4 + (0x35 << 2)
label_289fa8:
    if (ctx->pc == 0x289FA8u) {
        ctx->pc = 0x289FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289FA4u;
        // 0x289fa8: 0xc620024c  lwc1        $f0, 0x24C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x289FACu;
        goto label_289fac;
    }
    ctx->pc = 0x289FA4u;
    {
        const bool branch_taken_0x289fa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x289fa4) {
            ctx->pc = 0x289FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289FA4u;
            // 0x289fa8: 0xc620024c  lwc1        $f0, 0x24C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A07Cu;
            goto label_28a07c;
        }
    }
    ctx->pc = 0x289FACu;
label_289fac:
    // 0x289fac: 0x8e2215a0  lw          $v0, 0x15A0($s1)
    ctx->pc = 0x289facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5536)));
label_289fb0:
    // 0x289fb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x289fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_289fb4:
    // 0x289fb4: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_289fb8:
    if (ctx->pc == 0x289FB8u) {
        ctx->pc = 0x289FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289FB4u;
        // 0x289fb8: 0xc620024c  lwc1        $f0, 0x24C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x289FBCu;
        goto label_289fbc;
    }
    ctx->pc = 0x289FB4u;
    {
        const bool branch_taken_0x289fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x289fb4) {
            ctx->pc = 0x289FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289FB4u;
            // 0x289fb8: 0xc620024c  lwc1        $f0, 0x24C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A07Cu;
            goto label_28a07c;
        }
    }
    ctx->pc = 0x289FBCu;
label_289fbc:
    // 0x289fbc: 0x922215f4  lbu         $v0, 0x15F4($s1)
    ctx->pc = 0x289fbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5620)));
label_289fc0:
    // 0x289fc0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_289fc4:
    if (ctx->pc == 0x289FC4u) {
        ctx->pc = 0x289FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289FC0u;
        // 0x289fc4: 0xc620024c  lwc1        $f0, 0x24C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x289FC8u;
        goto label_289fc8;
    }
    ctx->pc = 0x289FC0u;
    {
        const bool branch_taken_0x289fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289FC0u;
        // 0x289fc4: 0xc620024c  lwc1        $f0, 0x24C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289fc0) {
            ctx->pc = 0x28A07Cu;
            goto label_28a07c;
        }
    }
    ctx->pc = 0x289FC8u;
label_289fc8:
    // 0x289fc8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_289fcc:
    if (ctx->pc == 0x289FCCu) {
        ctx->pc = 0x289FD0u;
        goto label_289fd0;
    }
    ctx->pc = 0x289FC8u;
    {
        const bool branch_taken_0x289fc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x289fc8) {
            ctx->pc = 0x28A038u;
            goto label_28a038;
        }
    }
    ctx->pc = 0x289FD0u;
label_289fd0:
    // 0x289fd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x289fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_289fd4:
    // 0x289fd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x289fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_289fd8:
    // 0x289fd8: 0x0  nop
    ctx->pc = 0x289fd8u;
    // NOP
label_289fdc:
    // 0x289fdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x289fdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289fe0:
    // 0x289fe0: 0x0  nop
    ctx->pc = 0x289fe0u;
    // NOP
label_289fe4:
    // 0x289fe4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_289fe8:
    if (ctx->pc == 0x289FE8u) {
        ctx->pc = 0x289FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289FE4u;
        // 0x289fe8: 0xe621024c  swc1        $f1, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x289FECu;
        goto label_289fec;
    }
    ctx->pc = 0x289FE4u;
    {
        const bool branch_taken_0x289fe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x289fe4) {
            ctx->pc = 0x289FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289FE4u;
            // 0x289fe8: 0xe621024c  swc1        $f1, 0x24C($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x289FECu;
            goto label_289fec;
        }
    }
    ctx->pc = 0x289FECu;
label_289fec:
    // 0x289fec: 0xc620024c  lwc1        $f0, 0x24C($s1)
    ctx->pc = 0x289fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289ff0:
    // 0x289ff0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x289ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_289ff4:
    // 0x289ff4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x289ff4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_289ff8:
    // 0x289ff8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x289ff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_289ffc:
    // 0x289ffc: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x289ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_28a000:
    // 0x28a000: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28a000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_28a004:
    // 0x28a004: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28a004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28a008:
    // 0x28a008: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28a008u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_28a00c:
    // 0x28a00c: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x28a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_28a010:
    // 0x28a010: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x28a010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_28a014:
    // 0x28a014: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x28a014u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28a018:
    // 0x28a018: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x28a018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_28a01c:
    // 0x28a01c: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
label_28a020:
    if (ctx->pc == 0x28A020u) {
        ctx->pc = 0x28A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A01Cu;
        // 0x28a020: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A024u;
        goto label_28a024;
    }
    ctx->pc = 0x28A01Cu;
    {
        const bool branch_taken_0x28a01c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A01Cu;
        // 0x28a020: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a01c) {
            ctx->pc = 0x28A0CCu;
            goto label_28a0cc;
        }
    }
    ctx->pc = 0x28A024u;
label_28a024:
    // 0x28a024: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28a024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_28a028:
    // 0x28a028: 0x34630012  ori         $v1, $v1, 0x12
    ctx->pc = 0x28a028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18);
label_28a02c:
    // 0x28a02c: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x28a02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_28a030:
    // 0x28a030: 0x10000020  b           . + 4 + (0x20 << 2)
label_28a034:
    if (ctx->pc == 0x28A034u) {
        ctx->pc = 0x28A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A030u;
        // 0x28a034: 0xae20024c  sw          $zero, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A038u;
        goto label_28a038;
    }
    ctx->pc = 0x28A030u;
    {
        const bool branch_taken_0x28a030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A030u;
        // 0x28a034: 0xae20024c  sw          $zero, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a030) {
            ctx->pc = 0x28A0B4u;
            goto label_28a0b4;
        }
    }
    ctx->pc = 0x28A038u;
label_28a038:
    // 0x28a038: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x28a038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_28a03c:
    // 0x28a03c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28a03cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_28a040:
    // 0x28a040: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28a040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28a044:
    // 0x28a044: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28a044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28a048:
    // 0x28a048: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28a048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28a04c:
    // 0x28a04c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28a04cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28a050:
    // 0x28a050: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x28a050u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28a054:
    // 0x28a054: 0x0  nop
    ctx->pc = 0x28a054u;
    // NOP
label_28a058:
    // 0x28a058: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_28a05c:
    if (ctx->pc == 0x28A05Cu) {
        ctx->pc = 0x28A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A058u;
        // 0x28a05c: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A060u;
        goto label_28a060;
    }
    ctx->pc = 0x28A058u;
    {
        const bool branch_taken_0x28a058 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A058u;
        // 0x28a05c: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a058) {
            ctx->pc = 0x28A074u;
            goto label_28a074;
        }
    }
    ctx->pc = 0x28A060u;
label_28a060:
    // 0x28a060: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28a060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_28a064:
    // 0x28a064: 0xe622024c  swc1        $f2, 0x24C($s1)
    ctx->pc = 0x28a064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
label_28a068:
    // 0x28a068: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x28a068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_28a06c:
    // 0x28a06c: 0x10000016  b           . + 4 + (0x16 << 2)
label_28a070:
    if (ctx->pc == 0x28A070u) {
        ctx->pc = 0x28A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A06Cu;
        // 0x28a070: 0xa21024  and         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A074u;
        goto label_28a074;
    }
    ctx->pc = 0x28A06Cu;
    {
        const bool branch_taken_0x28a06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A06Cu;
        // 0x28a070: 0xa21024  and         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a06c) {
            ctx->pc = 0x28A0C8u;
            goto label_28a0c8;
        }
    }
    ctx->pc = 0x28A074u;
label_28a074:
    // 0x28a074: 0x10000014  b           . + 4 + (0x14 << 2)
label_28a078:
    if (ctx->pc == 0x28A078u) {
        ctx->pc = 0x28A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A074u;
        // 0x28a078: 0x34a20010  ori         $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A07Cu;
        goto label_28a07c;
    }
    ctx->pc = 0x28A074u;
    {
        const bool branch_taken_0x28a074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A074u;
        // 0x28a078: 0x34a20010  ori         $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a074) {
            ctx->pc = 0x28A0C8u;
            goto label_28a0c8;
        }
    }
    ctx->pc = 0x28A07Cu;
label_28a07c:
    // 0x28a07c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x28a07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_28a080:
    // 0x28a080: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28a080u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_28a084:
    // 0x28a084: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28a084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28a088:
    // 0x28a088: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28a088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28a08c:
    // 0x28a08c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28a08cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28a090:
    // 0x28a090: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28a090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28a094:
    // 0x28a094: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x28a094u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28a098:
    // 0x28a098: 0x0  nop
    ctx->pc = 0x28a098u;
    // NOP
label_28a09c:
    // 0x28a09c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_28a0a0:
    if (ctx->pc == 0x28A0A0u) {
        ctx->pc = 0x28A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A09Cu;
        // 0x28a0a0: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A0A4u;
        goto label_28a0a4;
    }
    ctx->pc = 0x28A09Cu;
    {
        const bool branch_taken_0x28a09c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A09Cu;
        // 0x28a0a0: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a09c) {
            ctx->pc = 0x28A0C0u;
            goto label_28a0c0;
        }
    }
    ctx->pc = 0x28A0A4u;
label_28a0a4:
    // 0x28a0a4: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x28a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_28a0a8:
    // 0x28a0a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_28a0ac:
    // 0x28a0ac: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x28a0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_28a0b0:
    // 0x28a0b0: 0xe622024c  swc1        $f2, 0x24C($s1)
    ctx->pc = 0x28a0b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
label_28a0b4:
    // 0x28a0b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28a0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_28a0b8:
    // 0x28a0b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_28a0bc:
    if (ctx->pc == 0x28A0BCu) {
        ctx->pc = 0x28A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0B8u;
        // 0x28a0bc: 0xae230250  sw          $v1, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A0C0u;
        goto label_28a0c0;
    }
    ctx->pc = 0x28A0B8u;
    {
        const bool branch_taken_0x28a0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0B8u;
        // 0x28a0bc: 0xae230250  sw          $v1, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a0b8) {
            ctx->pc = 0x28A0CCu;
            goto label_28a0cc;
        }
    }
    ctx->pc = 0x28A0C0u;
label_28a0c0:
    // 0x28a0c0: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x28a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_28a0c4:
    // 0x28a0c4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x28a0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_28a0c8:
    // 0x28a0c8: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x28a0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_28a0cc:
    // 0x28a0cc: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x28a0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_28a0d0:
    // 0x28a0d0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x28a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_28a0d4:
    // 0x28a0d4: 0x53a20008  beql        $sp, $v0, . + 4 + (0x8 << 2)
label_28a0d8:
    if (ctx->pc == 0x28A0D8u) {
        ctx->pc = 0x28A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0D4u;
        // 0x28a0d8: 0xc6210618  lwc1        $f1, 0x618($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A0DCu;
        goto label_28a0dc;
    }
    ctx->pc = 0x28A0D4u;
    {
        const bool branch_taken_0x28a0d4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x28a0d4) {
            ctx->pc = 0x28A0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A0D4u;
            // 0x28a0d8: 0xc6210618  lwc1        $f1, 0x618($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A0F8u;
            goto label_28a0f8;
        }
    }
    ctx->pc = 0x28A0DCu;
label_28a0dc:
    // 0x28a0dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28a0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28a0e0:
    // 0x28a0e0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x28a0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_28a0e4:
    // 0x28a0e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28a0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28a0e8:
    // 0x28a0e8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x28a0e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_28a0ec:
    // 0x28a0ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x28a0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28a0f0:
    // 0x28a0f0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x28a0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_28a0f4:
    // 0x28a0f4: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x28a0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28a0f8:
    // 0x28a0f8: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x28a0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
label_28a0fc:
    // 0x28a0fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28a0fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28a100:
    // 0x28a100: 0x0  nop
    ctx->pc = 0x28a100u;
    // NOP
label_28a104:
    // 0x28a104: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28a104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28a108:
    // 0x28a108: 0x0  nop
    ctx->pc = 0x28a108u;
    // NOP
label_28a10c:
    // 0x28a10c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_28a110:
    if (ctx->pc == 0x28A110u) {
        ctx->pc = 0x28A114u;
        goto label_28a114;
    }
    ctx->pc = 0x28A10Cu;
    {
        const bool branch_taken_0x28a10c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28a10c) {
            ctx->pc = 0x28A144u;
            goto label_28a144;
        }
    }
    ctx->pc = 0x28A114u;
label_28a114:
    // 0x28a114: 0x8e2215a0  lw          $v0, 0x15A0($s1)
    ctx->pc = 0x28a114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5536)));
label_28a118:
    // 0x28a118: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28a118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28a11c:
    // 0x28a11c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_28a120:
    if (ctx->pc == 0x28A120u) {
        ctx->pc = 0x28A124u;
        goto label_28a124;
    }
    ctx->pc = 0x28A11Cu;
    {
        const bool branch_taken_0x28a11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a11c) {
            ctx->pc = 0x28A144u;
            goto label_28a144;
        }
    }
    ctx->pc = 0x28A124u;
label_28a124:
    // 0x28a124: 0x922215f4  lbu         $v0, 0x15F4($s1)
    ctx->pc = 0x28a124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5620)));
label_28a128:
    // 0x28a128: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_28a12c:
    if (ctx->pc == 0x28A12Cu) {
        ctx->pc = 0x28A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A128u;
        // 0x28a12c: 0x26642fc0  addiu       $a0, $s3, 0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A130u;
        goto label_28a130;
    }
    ctx->pc = 0x28A128u;
    {
        const bool branch_taken_0x28a128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A128u;
        // 0x28a12c: 0x26642fc0  addiu       $a0, $s3, 0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a128) {
            ctx->pc = 0x28A144u;
            goto label_28a144;
        }
    }
    ctx->pc = 0x28A130u;
label_28a130:
    // 0x28a130: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28a130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a134:
    // 0x28a134: 0xc04d476  jal         func_1351D8
label_28a138:
    if (ctx->pc == 0x28A138u) {
        ctx->pc = 0x28A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A134u;
        // 0x28a138: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A13Cu;
        goto label_28a13c;
    }
    ctx->pc = 0x28A134u;
    SET_GPR_U32(ctx, 31, 0x28A13Cu);
    ctx->pc = 0x28A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A134u;
    // 0x28a138: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x28A134u, 0x28A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A13Cu;
label_28a13c:
    // 0x28a13c: 0x10000046  b           . + 4 + (0x46 << 2)
label_28a140:
    if (ctx->pc == 0x28A140u) {
        ctx->pc = 0x28A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A13Cu;
        // 0x28a140: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A144u;
        goto label_28a144;
    }
    ctx->pc = 0x28A13Cu;
    {
        const bool branch_taken_0x28a13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A13Cu;
        // 0x28a140: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a13c) {
            ctx->pc = 0x28A258u;
            goto label_28a258;
        }
    }
    ctx->pc = 0x28A144u;
label_28a144:
    // 0x28a144: 0xc053ed2  jal         func_14FB48
label_28a148:
    if (ctx->pc == 0x28A148u) {
        ctx->pc = 0x28A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A144u;
        // 0x28a148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A14Cu;
        goto label_28a14c;
    }
    ctx->pc = 0x28A144u;
    SET_GPR_U32(ctx, 31, 0x28A14Cu);
    ctx->pc = 0x28A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A144u;
    // 0x28a148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB48u, 0x28A144u, 0x28A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A14Cu;
label_28a14c:
    // 0x28a14c: 0xc0527ae  jal         func_149EB8
label_28a150:
    if (ctx->pc == 0x28A150u) {
        ctx->pc = 0x28A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A14Cu;
        // 0x28a150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A154u;
        goto label_28a154;
    }
    ctx->pc = 0x28A14Cu;
    SET_GPR_U32(ctx, 31, 0x28A154u);
    ctx->pc = 0x28A150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A14Cu;
    // 0x28a150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x28A14Cu, 0x28A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A154u;
label_28a154:
    // 0x28a154: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28a154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a158:
    // 0x28a158: 0xc054a88  jal         func_152A20
label_28a15c:
    if (ctx->pc == 0x28A15Cu) {
        ctx->pc = 0x28A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A158u;
        // 0x28a15c: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A160u;
        goto label_28a160;
    }
    ctx->pc = 0x28A158u;
    SET_GPR_U32(ctx, 31, 0x28A160u);
    ctx->pc = 0x28A15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A158u;
    // 0x28a15c: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x28A158u, 0x28A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A160u;
label_28a160:
    // 0x28a160: 0xc05280e  jal         func_14A038
label_28a164:
    if (ctx->pc == 0x28A164u) {
        ctx->pc = 0x28A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A160u;
        // 0x28a164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A168u;
        goto label_28a168;
    }
    ctx->pc = 0x28A160u;
    SET_GPR_U32(ctx, 31, 0x28A168u);
    ctx->pc = 0x28A164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A160u;
    // 0x28a164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x28A160u, 0x28A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A168u;
label_28a168:
    // 0x28a168: 0xc0a2b86  jal         func_28AE18
label_28a16c:
    if (ctx->pc == 0x28A16Cu) {
        ctx->pc = 0x28A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A168u;
        // 0x28a16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A170u;
        goto label_28a170;
    }
    ctx->pc = 0x28A168u;
    SET_GPR_U32(ctx, 31, 0x28A170u);
    ctx->pc = 0x28A16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A168u;
    // 0x28a16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AE18u, 0x28A168u, 0x28A170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A170u;
label_28a170:
    // 0x28a170: 0x26642fc0  addiu       $a0, $s3, 0x2FC0
    ctx->pc = 0x28a170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12224));
label_28a174:
    // 0x28a174: 0xc04d23a  jal         func_1348E8
label_28a178:
    if (ctx->pc == 0x28A178u) {
        ctx->pc = 0x28A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A174u;
        // 0x28a178: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A17Cu;
        goto label_28a17c;
    }
    ctx->pc = 0x28A174u;
    SET_GPR_U32(ctx, 31, 0x28A17Cu);
    ctx->pc = 0x28A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A174u;
    // 0x28a178: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1348E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1348E8u, 0x28A174u, 0x28A17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A17Cu;
label_28a17c:
    // 0x28a17c: 0x8e2315a0  lw          $v1, 0x15A0($s1)
    ctx->pc = 0x28a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5536)));
label_28a180:
    // 0x28a180: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x28a180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_28a184:
    // 0x28a184: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_28a188:
    if (ctx->pc == 0x28A188u) {
        ctx->pc = 0x28A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A184u;
        // 0x28a188: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A18Cu;
        goto label_28a18c;
    }
    ctx->pc = 0x28A184u;
    {
        const bool branch_taken_0x28a184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A184u;
        // 0x28a188: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a184) {
            ctx->pc = 0x28A1D4u;
            goto label_28a1d4;
        }
    }
    ctx->pc = 0x28A18Cu;
label_28a18c:
    // 0x28a18c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x28a18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_28a190:
    // 0x28a190: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x28a190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_28a194:
    // 0x28a194: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28a194u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_28a198:
    // 0x28a198: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28a198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28a19c:
    // 0x28a19c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28a19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28a1a0:
    // 0x28a1a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a1a4:
    // 0x28a1a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a1a8:
    // 0x28a1a8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x28a1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_28a1ac:
    // 0x28a1ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28a1acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a1b0:
    // 0x28a1b0: 0xc04cb68  jal         func_132DA0
label_28a1b4:
    if (ctx->pc == 0x28A1B4u) {
        ctx->pc = 0x28A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A1B0u;
        // 0x28a1b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A1B8u;
        goto label_28a1b8;
    }
    ctx->pc = 0x28A1B0u;
    SET_GPR_U32(ctx, 31, 0x28A1B8u);
    ctx->pc = 0x28A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A1B0u;
    // 0x28a1b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132DA0u, 0x28A1B0u, 0x28A1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A1B8u;
label_28a1b8:
    // 0x28a1b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_28a1bc:
    if (ctx->pc == 0x28A1BCu) {
        ctx->pc = 0x28A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A1B8u;
        // 0x28a1bc: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A1C0u;
        goto label_28a1c0;
    }
    ctx->pc = 0x28A1B8u;
    {
        const bool branch_taken_0x28a1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A1B8u;
        // 0x28a1bc: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a1b8) {
            ctx->pc = 0x28A1D4u;
            goto label_28a1d4;
        }
    }
    ctx->pc = 0x28A1C0u;
label_28a1c0:
    // 0x28a1c0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x28a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_28a1c4:
    // 0x28a1c4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28a1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28a1c8:
    // 0x28a1c8: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x28a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_28a1cc:
    // 0x28a1cc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x28a1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28a1d0:
    // 0x28a1d0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28a1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_28a1d4:
    // 0x28a1d4: 0x8e2215a0  lw          $v0, 0x15A0($s1)
    ctx->pc = 0x28a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5536)));
label_28a1d8:
    // 0x28a1d8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x28a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_28a1dc:
    // 0x28a1dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28a1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_28a1e0:
    // 0x28a1e0: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_28a1e4:
    if (ctx->pc == 0x28A1E4u) {
        ctx->pc = 0x28A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A1E0u;
        // 0x28a1e4: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A1E8u;
        goto label_28a1e8;
    }
    ctx->pc = 0x28A1E0u;
    {
        const bool branch_taken_0x28a1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a1e0) {
            ctx->pc = 0x28A1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A1E0u;
            // 0x28a1e4: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A25Cu;
            goto label_28a25c;
        }
    }
    ctx->pc = 0x28A1E8u;
label_28a1e8:
    // 0x28a1e8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x28a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_28a1ec:
    // 0x28a1ec: 0xc4540004  lwc1        $f20, 0x4($v0)
    ctx->pc = 0x28a1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28a1f0:
    // 0x28a1f0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x28a1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_28a1f4:
    // 0x28a1f4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x28a1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_28a1f8:
    // 0x28a1f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28a1f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28a1fc:
    // 0x28a1fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a200:
    // 0x28a200: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28a200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28a204:
    // 0x28a204: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a208:
    // 0x28a208: 0xc04ca70  jal         func_1329C0
label_28a20c:
    if (ctx->pc == 0x28A20Cu) {
        ctx->pc = 0x28A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A208u;
        // 0x28a20c: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A210u;
        goto label_28a210;
    }
    ctx->pc = 0x28A208u;
    SET_GPR_U32(ctx, 31, 0x28A210u);
    ctx->pc = 0x28A20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A208u;
    // 0x28a20c: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1329C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1329C0u, 0x28A208u, 0x28A210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A210u;
label_28a210:
    // 0x28a210: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_28a214:
    if (ctx->pc == 0x28A214u) {
        ctx->pc = 0x28A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A210u;
        // 0x28a214: 0xc7b40014  lwc1        $f20, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A218u;
        goto label_28a218;
    }
    ctx->pc = 0x28A210u;
    {
        const bool branch_taken_0x28a210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a210) {
            ctx->pc = 0x28A214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A210u;
            // 0x28a214: 0xc7b40014  lwc1        $f20, 0x14($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A218u;
            goto label_28a218;
        }
    }
    ctx->pc = 0x28A218u;
label_28a218:
    // 0x28a218: 0xc62115a8  lwc1        $f1, 0x15A8($s1)
    ctx->pc = 0x28a218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28a21c:
    // 0x28a21c: 0xc62015a4  lwc1        $f0, 0x15A4($s1)
    ctx->pc = 0x28a21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28a220:
    // 0x28a220: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x28a220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_28a224:
    // 0x28a224: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28a224u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_28a228:
    // 0x28a228: 0xe62115a8  swc1        $f1, 0x15A8($s1)
    ctx->pc = 0x28a228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5544), bits); }
label_28a22c:
    // 0x28a22c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x28a22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28a230:
    // 0x28a230: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28a230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28a234:
    // 0x28a234: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28a234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28a238:
    // 0x28a238: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x28a238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_28a23c:
    // 0x28a23c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x28a23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28a240:
    // 0x28a240: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x28a240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28a244:
    // 0x28a244: 0x0  nop
    ctx->pc = 0x28a244u;
    // NOP
label_28a248:
    // 0x28a248: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_28a24c:
    if (ctx->pc == 0x28A24Cu) {
        ctx->pc = 0x28A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A248u;
        // 0x28a24c: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A250u;
        goto label_28a250;
    }
    ctx->pc = 0x28A248u;
    {
        const bool branch_taken_0x28a248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28a248) {
            ctx->pc = 0x28A24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A248u;
            // 0x28a24c: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A25Cu;
            goto label_28a25c;
        }
    }
    ctx->pc = 0x28A250u;
label_28a250:
    // 0x28a250: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x28a250u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28a254:
    // 0x28a254: 0xae2015a8  sw          $zero, 0x15A8($s1)
    ctx->pc = 0x28a254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5544), GPR_U32(ctx, 0));
label_28a258:
    // 0x28a258: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x28a258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_28a25c:
    // 0x28a25c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x28a25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_28a260:
    // 0x28a260: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x28a260u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_28a264:
    // 0x28a264: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x28a264u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28a268:
    // 0x28a268: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x28a268u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_28a26c:
    // 0x28a26c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x28a26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_28a270:
    // 0x28a270: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x28a270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_28a274:
    // 0x28a274: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x28a274u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28a278:
    // 0x28a278: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x28a278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_28a27c:
    // 0x28a27c: 0x26220550  addiu       $v0, $s1, 0x550
    ctx->pc = 0x28a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_28a280:
    // 0x28a280: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
label_28a284:
    if (ctx->pc == 0x28A284u) {
        ctx->pc = 0x28A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A280u;
        // 0x28a284: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A288u;
        goto label_28a288;
    }
    ctx->pc = 0x28A280u;
    {
        const bool branch_taken_0x28a280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x28A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A280u;
        // 0x28a284: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a280) {
            ctx->pc = 0x28A29Cu;
            goto label_28a29c;
        }
    }
    ctx->pc = 0x28A288u;
label_28a288:
    // 0x28a288: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x28a288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28a28c:
    // 0x28a28c: 0xe6200550  swc1        $f0, 0x550($s1)
    ctx->pc = 0x28a28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1360), bits); }
label_28a290:
    // 0x28a290: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x28a290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28a294:
    // 0x28a294: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x28a294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28a298:
    // 0x28a298: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28a298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28a29c:
    // 0x28a29c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x28a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_28a2a0:
    // 0x28a2a0: 0x26230490  addiu       $v1, $s1, 0x490
    ctx->pc = 0x28a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_28a2a4:
    // 0x28a2a4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_28a2a8:
    if (ctx->pc == 0x28A2A8u) {
        ctx->pc = 0x28A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A2A4u;
        // 0x28a2a8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A2ACu;
        goto label_28a2ac;
    }
    ctx->pc = 0x28A2A4u;
    {
        const bool branch_taken_0x28a2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A2A4u;
        // 0x28a2a8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a2a4) {
            ctx->pc = 0x28A2C8u;
            goto label_28a2c8;
        }
    }
    ctx->pc = 0x28A2ACu;
label_28a2ac:
    // 0x28a2ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28a2b0:
    // 0x28a2b0: 0xe6200490  swc1        $f0, 0x490($s1)
    ctx->pc = 0x28a2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1168), bits); }
label_28a2b4:
    // 0x28a2b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28a2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28a2b8:
    // 0x28a2b8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x28a2b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_28a2bc:
    // 0x28a2bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x28a2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28a2c0:
    // 0x28a2c0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28a2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_28a2c4:
    // 0x28a2c4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x28a2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28a2c8:
    // 0x28a2c8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x28a2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28a2cc:
    // 0x28a2cc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x28a2ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28a2d0:
    // 0x28a2d0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x28a2d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28a2d4:
    // 0x28a2d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28a2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28a2d8:
    // 0x28a2d8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x28a2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28a2dc:
    // 0x28a2dc: 0x3e00008  jr          $ra
label_28a2e0:
    if (ctx->pc == 0x28A2E0u) {
        ctx->pc = 0x28A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A2DCu;
        // 0x28a2e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A2E4u;
        goto label_28a2e4;
    }
    ctx->pc = 0x28A2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A2DCu;
        // 0x28a2e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A2E4u;
label_28a2e4:
    // 0x28a2e4: 0x0  nop
    ctx->pc = 0x28a2e4u;
    // NOP
    ctx->pc = 0x28a2e8u;
}
