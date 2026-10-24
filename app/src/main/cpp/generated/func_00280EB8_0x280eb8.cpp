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

// Function: func_00280EB8
// Address: 0x280eb8 - 0x281260
void func_00280EB8_0x280eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00280EB8_0x280eb8");
#endif

    switch (ctx->pc) {
        case 0x280eb8u: goto label_280eb8;
        case 0x280ebcu: goto label_280ebc;
        case 0x280ec0u: goto label_280ec0;
        case 0x280ec4u: goto label_280ec4;
        case 0x280ec8u: goto label_280ec8;
        case 0x280eccu: goto label_280ecc;
        case 0x280ed0u: goto label_280ed0;
        case 0x280ed4u: goto label_280ed4;
        case 0x280ed8u: goto label_280ed8;
        case 0x280edcu: goto label_280edc;
        case 0x280ee0u: goto label_280ee0;
        case 0x280ee4u: goto label_280ee4;
        case 0x280ee8u: goto label_280ee8;
        case 0x280eecu: goto label_280eec;
        case 0x280ef0u: goto label_280ef0;
        case 0x280ef4u: goto label_280ef4;
        case 0x280ef8u: goto label_280ef8;
        case 0x280efcu: goto label_280efc;
        case 0x280f00u: goto label_280f00;
        case 0x280f04u: goto label_280f04;
        case 0x280f08u: goto label_280f08;
        case 0x280f0cu: goto label_280f0c;
        case 0x280f10u: goto label_280f10;
        case 0x280f14u: goto label_280f14;
        case 0x280f18u: goto label_280f18;
        case 0x280f1cu: goto label_280f1c;
        case 0x280f20u: goto label_280f20;
        case 0x280f24u: goto label_280f24;
        case 0x280f28u: goto label_280f28;
        case 0x280f2cu: goto label_280f2c;
        case 0x280f30u: goto label_280f30;
        case 0x280f34u: goto label_280f34;
        case 0x280f38u: goto label_280f38;
        case 0x280f3cu: goto label_280f3c;
        case 0x280f40u: goto label_280f40;
        case 0x280f44u: goto label_280f44;
        case 0x280f48u: goto label_280f48;
        case 0x280f4cu: goto label_280f4c;
        case 0x280f50u: goto label_280f50;
        case 0x280f54u: goto label_280f54;
        case 0x280f58u: goto label_280f58;
        case 0x280f5cu: goto label_280f5c;
        case 0x280f60u: goto label_280f60;
        case 0x280f64u: goto label_280f64;
        case 0x280f68u: goto label_280f68;
        case 0x280f6cu: goto label_280f6c;
        case 0x280f70u: goto label_280f70;
        case 0x280f74u: goto label_280f74;
        case 0x280f78u: goto label_280f78;
        case 0x280f7cu: goto label_280f7c;
        case 0x280f80u: goto label_280f80;
        case 0x280f84u: goto label_280f84;
        case 0x280f88u: goto label_280f88;
        case 0x280f8cu: goto label_280f8c;
        case 0x280f90u: goto label_280f90;
        case 0x280f94u: goto label_280f94;
        case 0x280f98u: goto label_280f98;
        case 0x280f9cu: goto label_280f9c;
        case 0x280fa0u: goto label_280fa0;
        case 0x280fa4u: goto label_280fa4;
        case 0x280fa8u: goto label_280fa8;
        case 0x280facu: goto label_280fac;
        case 0x280fb0u: goto label_280fb0;
        case 0x280fb4u: goto label_280fb4;
        case 0x280fb8u: goto label_280fb8;
        case 0x280fbcu: goto label_280fbc;
        case 0x280fc0u: goto label_280fc0;
        case 0x280fc4u: goto label_280fc4;
        case 0x280fc8u: goto label_280fc8;
        case 0x280fccu: goto label_280fcc;
        case 0x280fd0u: goto label_280fd0;
        case 0x280fd4u: goto label_280fd4;
        case 0x280fd8u: goto label_280fd8;
        case 0x280fdcu: goto label_280fdc;
        case 0x280fe0u: goto label_280fe0;
        case 0x280fe4u: goto label_280fe4;
        case 0x280fe8u: goto label_280fe8;
        case 0x280fecu: goto label_280fec;
        case 0x280ff0u: goto label_280ff0;
        case 0x280ff4u: goto label_280ff4;
        case 0x280ff8u: goto label_280ff8;
        case 0x280ffcu: goto label_280ffc;
        case 0x281000u: goto label_281000;
        case 0x281004u: goto label_281004;
        case 0x281008u: goto label_281008;
        case 0x28100cu: goto label_28100c;
        case 0x281010u: goto label_281010;
        case 0x281014u: goto label_281014;
        case 0x281018u: goto label_281018;
        case 0x28101cu: goto label_28101c;
        case 0x281020u: goto label_281020;
        case 0x281024u: goto label_281024;
        case 0x281028u: goto label_281028;
        case 0x28102cu: goto label_28102c;
        case 0x281030u: goto label_281030;
        case 0x281034u: goto label_281034;
        case 0x281038u: goto label_281038;
        case 0x28103cu: goto label_28103c;
        case 0x281040u: goto label_281040;
        case 0x281044u: goto label_281044;
        case 0x281048u: goto label_281048;
        case 0x28104cu: goto label_28104c;
        case 0x281050u: goto label_281050;
        case 0x281054u: goto label_281054;
        case 0x281058u: goto label_281058;
        case 0x28105cu: goto label_28105c;
        case 0x281060u: goto label_281060;
        case 0x281064u: goto label_281064;
        case 0x281068u: goto label_281068;
        case 0x28106cu: goto label_28106c;
        case 0x281070u: goto label_281070;
        case 0x281074u: goto label_281074;
        case 0x281078u: goto label_281078;
        case 0x28107cu: goto label_28107c;
        case 0x281080u: goto label_281080;
        case 0x281084u: goto label_281084;
        case 0x281088u: goto label_281088;
        case 0x28108cu: goto label_28108c;
        case 0x281090u: goto label_281090;
        case 0x281094u: goto label_281094;
        case 0x281098u: goto label_281098;
        case 0x28109cu: goto label_28109c;
        case 0x2810a0u: goto label_2810a0;
        case 0x2810a4u: goto label_2810a4;
        case 0x2810a8u: goto label_2810a8;
        case 0x2810acu: goto label_2810ac;
        case 0x2810b0u: goto label_2810b0;
        case 0x2810b4u: goto label_2810b4;
        case 0x2810b8u: goto label_2810b8;
        case 0x2810bcu: goto label_2810bc;
        case 0x2810c0u: goto label_2810c0;
        case 0x2810c4u: goto label_2810c4;
        case 0x2810c8u: goto label_2810c8;
        case 0x2810ccu: goto label_2810cc;
        case 0x2810d0u: goto label_2810d0;
        case 0x2810d4u: goto label_2810d4;
        case 0x2810d8u: goto label_2810d8;
        case 0x2810dcu: goto label_2810dc;
        case 0x2810e0u: goto label_2810e0;
        case 0x2810e4u: goto label_2810e4;
        case 0x2810e8u: goto label_2810e8;
        case 0x2810ecu: goto label_2810ec;
        case 0x2810f0u: goto label_2810f0;
        case 0x2810f4u: goto label_2810f4;
        case 0x2810f8u: goto label_2810f8;
        case 0x2810fcu: goto label_2810fc;
        case 0x281100u: goto label_281100;
        case 0x281104u: goto label_281104;
        case 0x281108u: goto label_281108;
        case 0x28110cu: goto label_28110c;
        case 0x281110u: goto label_281110;
        case 0x281114u: goto label_281114;
        case 0x281118u: goto label_281118;
        case 0x28111cu: goto label_28111c;
        case 0x281120u: goto label_281120;
        case 0x281124u: goto label_281124;
        case 0x281128u: goto label_281128;
        case 0x28112cu: goto label_28112c;
        case 0x281130u: goto label_281130;
        case 0x281134u: goto label_281134;
        case 0x281138u: goto label_281138;
        case 0x28113cu: goto label_28113c;
        case 0x281140u: goto label_281140;
        case 0x281144u: goto label_281144;
        case 0x281148u: goto label_281148;
        case 0x28114cu: goto label_28114c;
        case 0x281150u: goto label_281150;
        case 0x281154u: goto label_281154;
        case 0x281158u: goto label_281158;
        case 0x28115cu: goto label_28115c;
        case 0x281160u: goto label_281160;
        case 0x281164u: goto label_281164;
        case 0x281168u: goto label_281168;
        case 0x28116cu: goto label_28116c;
        case 0x281170u: goto label_281170;
        case 0x281174u: goto label_281174;
        case 0x281178u: goto label_281178;
        case 0x28117cu: goto label_28117c;
        case 0x281180u: goto label_281180;
        case 0x281184u: goto label_281184;
        case 0x281188u: goto label_281188;
        case 0x28118cu: goto label_28118c;
        case 0x281190u: goto label_281190;
        case 0x281194u: goto label_281194;
        case 0x281198u: goto label_281198;
        case 0x28119cu: goto label_28119c;
        case 0x2811a0u: goto label_2811a0;
        case 0x2811a4u: goto label_2811a4;
        case 0x2811a8u: goto label_2811a8;
        case 0x2811acu: goto label_2811ac;
        case 0x2811b0u: goto label_2811b0;
        case 0x2811b4u: goto label_2811b4;
        case 0x2811b8u: goto label_2811b8;
        case 0x2811bcu: goto label_2811bc;
        case 0x2811c0u: goto label_2811c0;
        case 0x2811c4u: goto label_2811c4;
        case 0x2811c8u: goto label_2811c8;
        case 0x2811ccu: goto label_2811cc;
        case 0x2811d0u: goto label_2811d0;
        case 0x2811d4u: goto label_2811d4;
        case 0x2811d8u: goto label_2811d8;
        case 0x2811dcu: goto label_2811dc;
        case 0x2811e0u: goto label_2811e0;
        case 0x2811e4u: goto label_2811e4;
        case 0x2811e8u: goto label_2811e8;
        case 0x2811ecu: goto label_2811ec;
        case 0x2811f0u: goto label_2811f0;
        case 0x2811f4u: goto label_2811f4;
        case 0x2811f8u: goto label_2811f8;
        case 0x2811fcu: goto label_2811fc;
        case 0x281200u: goto label_281200;
        case 0x281204u: goto label_281204;
        case 0x281208u: goto label_281208;
        case 0x28120cu: goto label_28120c;
        case 0x281210u: goto label_281210;
        case 0x281214u: goto label_281214;
        case 0x281218u: goto label_281218;
        case 0x28121cu: goto label_28121c;
        case 0x281220u: goto label_281220;
        case 0x281224u: goto label_281224;
        case 0x281228u: goto label_281228;
        case 0x28122cu: goto label_28122c;
        case 0x281230u: goto label_281230;
        case 0x281234u: goto label_281234;
        case 0x281238u: goto label_281238;
        case 0x28123cu: goto label_28123c;
        case 0x281240u: goto label_281240;
        case 0x281244u: goto label_281244;
        case 0x281248u: goto label_281248;
        case 0x28124cu: goto label_28124c;
        case 0x281250u: goto label_281250;
        case 0x281254u: goto label_281254;
        case 0x281258u: goto label_281258;
        case 0x28125cu: goto label_28125c;
        default: break;
    }

    ctx->pc = 0x280eb8u;

label_280eb8:
    // 0x280eb8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x280eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_280ebc:
    // 0x280ebc: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x280ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_280ec0:
    // 0x280ec0: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x280ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_280ec4:
    // 0x280ec4: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x280ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_280ec8:
    // 0x280ec8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x280ec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_280ecc:
    // 0x280ecc: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x280eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_280ed0:
    // 0x280ed0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x280ed0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_280ed4:
    // 0x280ed4: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x280ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_280ed8:
    // 0x280ed8: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x280ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_280edc:
    // 0x280edc: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x280edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_280ee0:
    // 0x280ee0: 0xc0c3ea6  jal         func_30FA98
label_280ee4:
    if (ctx->pc == 0x280EE4u) {
        ctx->pc = 0x280EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280EE0u;
        // 0x280ee4: 0x240403be  addiu       $a0, $zero, 0x3BE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 958));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280EE8u;
        goto label_280ee8;
    }
    ctx->pc = 0x280EE0u;
    SET_GPR_U32(ctx, 31, 0x280EE8u);
    ctx->pc = 0x280EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280EE0u;
    // 0x280ee4: 0x240403be  addiu       $a0, $zero, 0x3BE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 958));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x280EE0u, 0x280EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280EE8u;
label_280ee8:
    // 0x280ee8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x280ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280eec:
    // 0x280eec: 0x520000d4  beql        $s0, $zero, . + 4 + (0xD4 << 2)
label_280ef0:
    if (ctx->pc == 0x280EF0u) {
        ctx->pc = 0x280EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280EECu;
        // 0x280ef0: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280EF4u;
        goto label_280ef4;
    }
    ctx->pc = 0x280EECu;
    {
        const bool branch_taken_0x280eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x280eec) {
            ctx->pc = 0x280EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280EECu;
            // 0x280ef0: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281240u;
            goto label_281240;
        }
    }
    ctx->pc = 0x280EF4u;
label_280ef4:
    // 0x280ef4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x280ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_280ef8:
    // 0x280ef8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x280ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_280efc:
    // 0x280efc: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x280efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_280f00:
    // 0x280f00: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x280f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_280f04:
    // 0x280f04: 0xc0b6dac  jal         func_2DB6B0
label_280f08:
    if (ctx->pc == 0x280F08u) {
        ctx->pc = 0x280F0Cu;
        goto label_280f0c;
    }
    ctx->pc = 0x280F04u;
    SET_GPR_U32(ctx, 31, 0x280F0Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x280F04u, 0x280F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280F0Cu;
label_280f0c:
    // 0x280f0c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x280f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_280f10:
    // 0x280f10: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x280f10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_280f14:
    // 0x280f14: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
label_280f18:
    if (ctx->pc == 0x280F18u) {
        ctx->pc = 0x280F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F14u;
        // 0x280f18: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x280F1Cu;
        goto label_280f1c;
    }
    ctx->pc = 0x280F14u;
    {
        const bool branch_taken_0x280f14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x280F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F14u;
        // 0x280f18: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f14) {
            ctx->pc = 0x280F38u;
            goto label_280f38;
        }
    }
    ctx->pc = 0x280F1Cu;
label_280f1c:
    // 0x280f1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x280f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280f20:
    // 0x280f20: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x280f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_280f24:
    // 0x280f24: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x280f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_280f28:
    // 0x280f28: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x280f28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_280f2c:
    // 0x280f2c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x280f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280f30:
    // 0x280f30: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x280f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_280f34:
    // 0x280f34: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x280f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280f38:
    // 0x280f38: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x280f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_280f3c:
    // 0x280f3c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x280f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_280f40:
    // 0x280f40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x280f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_280f44:
    // 0x280f44: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x280f44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_280f48:
    // 0x280f48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280f48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_280f4c:
    // 0x280f4c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x280f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_280f50:
    // 0x280f50: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x280f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_280f54:
    // 0x280f54: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x280f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_280f58:
    // 0x280f58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_280f5c:
    if (ctx->pc == 0x280F5Cu) {
        ctx->pc = 0x280F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F58u;
        // 0x280f5c: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x280F60u;
        goto label_280f60;
    }
    ctx->pc = 0x280F58u;
    {
        const bool branch_taken_0x280f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F58u;
        // 0x280f5c: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f58) {
            ctx->pc = 0x280F6Cu;
            goto label_280f6c;
        }
    }
    ctx->pc = 0x280F60u;
label_280f60:
    // 0x280f60: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x280f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_280f64:
    // 0x280f64: 0x10000002  b           . + 4 + (0x2 << 2)
label_280f68:
    if (ctx->pc == 0x280F68u) {
        ctx->pc = 0x280F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F64u;
        // 0x280f68: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280F6Cu;
        goto label_280f6c;
    }
    ctx->pc = 0x280F64u;
    {
        const bool branch_taken_0x280f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F64u;
        // 0x280f68: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f64) {
            ctx->pc = 0x280F70u;
            goto label_280f70;
        }
    }
    ctx->pc = 0x280F6Cu;
label_280f6c:
    // 0x280f6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280f70:
    // 0x280f70: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_280f74:
    if (ctx->pc == 0x280F74u) {
        ctx->pc = 0x280F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F70u;
        // 0x280f74: 0x27b20050  addiu       $s2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280F78u;
        goto label_280f78;
    }
    ctx->pc = 0x280F70u;
    {
        const bool branch_taken_0x280f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F70u;
        // 0x280f74: 0x27b20050  addiu       $s2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f70) {
            ctx->pc = 0x28101Cu;
            goto label_28101c;
        }
    }
    ctx->pc = 0x280F78u;
label_280f78:
    // 0x280f78: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x280f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_280f7c:
    // 0x280f7c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x280f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_280f80:
    // 0x280f80: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x280f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_280f84:
    // 0x280f84: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x280f84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_280f88:
    // 0x280f88: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x280f88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_280f8c:
    // 0x280f8c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x280f8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_280f90:
    // 0x280f90: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x280f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_280f94:
    // 0x280f94: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x280f94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_280f98:
    // 0x280f98: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x280f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_280f9c:
    // 0x280f9c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x280f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280fa0:
    // 0x280fa0: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x280fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_280fa4:
    // 0x280fa4: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x280fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_280fa8:
    // 0x280fa8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x280fa8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_280fac:
    // 0x280fac: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x280facu;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
label_280fb0:
    // 0x280fb0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x280fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_280fb4:
    // 0x280fb4: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x280fb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_280fb8:
    // 0x280fb8: 0xc07e060  jal         func_1F8180
label_280fbc:
    if (ctx->pc == 0x280FBCu) {
        ctx->pc = 0x280FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FB8u;
        // 0x280fbc: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x280FC0u;
        goto label_280fc0;
    }
    ctx->pc = 0x280FB8u;
    SET_GPR_U32(ctx, 31, 0x280FC0u);
    ctx->pc = 0x280FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280FB8u;
    // 0x280fbc: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x280FB8u, 0x280FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280FC0u;
label_280fc0:
    // 0x280fc0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x280fc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_280fc4:
    // 0x280fc4: 0xc051e62  jal         func_147988
label_280fc8:
    if (ctx->pc == 0x280FC8u) {
        ctx->pc = 0x280FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FC4u;
        // 0x280fc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280FCCu;
        goto label_280fcc;
    }
    ctx->pc = 0x280FC4u;
    SET_GPR_U32(ctx, 31, 0x280FCCu);
    ctx->pc = 0x280FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280FC4u;
    // 0x280fc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x280FC4u, 0x280FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280FCCu;
label_280fcc:
    // 0x280fcc: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x280fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_280fd0:
    // 0x280fd0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x280fd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_280fd4:
    // 0x280fd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_280fd8:
    // 0x280fd8: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_280fdc:
    if (ctx->pc == 0x280FDCu) {
        ctx->pc = 0x280FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FD8u;
        // 0x280fdc: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280FE0u;
        goto label_280fe0;
    }
    ctx->pc = 0x280FD8u;
    {
        const bool branch_taken_0x280fd8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x280FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FD8u;
        // 0x280fdc: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280fd8) {
            ctx->pc = 0x280FECu;
            goto label_280fec;
        }
    }
    ctx->pc = 0x280FE0u;
label_280fe0:
    // 0x280fe0: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x280fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
label_280fe4:
    // 0x280fe4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x280fe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_280fe8:
    // 0x280fe8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_280fec:
    // 0x280fec: 0x0  nop
    ctx->pc = 0x280fecu;
    // NOP
label_280ff0:
    // 0x280ff0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x280ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_280ff4:
    // 0x280ff4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x280ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_280ff8:
    // 0x280ff8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x280ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_280ffc:
    // 0x280ffc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x280ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_281000:
    // 0x281000: 0xc0c28ac  jal         func_30A2B0
label_281004:
    if (ctx->pc == 0x281004u) {
        ctx->pc = 0x281004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281000u;
        // 0x281004: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281008u;
        goto label_281008;
    }
    ctx->pc = 0x281000u;
    SET_GPR_U32(ctx, 31, 0x281008u);
    ctx->pc = 0x281004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281000u;
    // 0x281004: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x281000u, 0x281008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281008u;
label_281008:
    // 0x281008: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x281008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_28100c:
    // 0x28100c: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x28100cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_281010:
    // 0x281010: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x281010u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_281014:
    // 0x281014: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x281014u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_281018:
    // 0x281018: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x281018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_28101c:
    // 0x28101c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x28101cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_281020:
    // 0x281020: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x281020u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_281024:
    // 0x281024: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x281024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_281028:
    // 0x281028: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x281028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28102c:
    // 0x28102c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x28102cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_281030:
    // 0x281030: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x281030u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_281034:
    // 0x281034: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x281034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_281038:
    // 0x281038: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x281038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_28103c:
    // 0x28103c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28103cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_281040:
    // 0x281040: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x281040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_281044:
    // 0x281044: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x281044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_281048:
    // 0x281048: 0xc0c28ac  jal         func_30A2B0
label_28104c:
    if (ctx->pc == 0x28104Cu) {
        ctx->pc = 0x28104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281048u;
        // 0x28104c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281050u;
        goto label_281050;
    }
    ctx->pc = 0x281048u;
    SET_GPR_U32(ctx, 31, 0x281050u);
    ctx->pc = 0x28104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281048u;
    // 0x28104c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x281048u, 0x281050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281050u;
label_281050:
    // 0x281050: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_281054:
    if (ctx->pc == 0x281054u) {
        ctx->pc = 0x281054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281050u;
        // 0x281054: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281058u;
        goto label_281058;
    }
    ctx->pc = 0x281050u;
    {
        const bool branch_taken_0x281050 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x281054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281050u;
        // 0x281054: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281050) {
            ctx->pc = 0x281074u;
            goto label_281074;
        }
    }
    ctx->pc = 0x281058u;
label_281058:
    // 0x281058: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x281058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_28105c:
    // 0x28105c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28105cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_281060:
    // 0x281060: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_281064:
    if (ctx->pc == 0x281064u) {
        ctx->pc = 0x281064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281060u;
        // 0x281064: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281068u;
        goto label_281068;
    }
    ctx->pc = 0x281060u;
    {
        const bool branch_taken_0x281060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281060u;
        // 0x281064: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281060) {
            ctx->pc = 0x281094u;
            goto label_281094;
        }
    }
    ctx->pc = 0x281068u;
label_281068:
    // 0x281068: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x281068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_28106c:
    // 0x28106c: 0x1000000a  b           . + 4 + (0xA << 2)
label_281070:
    if (ctx->pc == 0x281070u) {
        ctx->pc = 0x281070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28106Cu;
        // 0x281070: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281074u;
        goto label_281074;
    }
    ctx->pc = 0x28106Cu;
    {
        const bool branch_taken_0x28106c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28106Cu;
        // 0x281070: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28106c) {
            ctx->pc = 0x281098u;
            goto label_281098;
        }
    }
    ctx->pc = 0x281074u;
label_281074:
    // 0x281074: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x281074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_281078:
    // 0x281078: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x281078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28107c:
    // 0x28107c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28107cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_281080:
    // 0x281080: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_281084:
    if (ctx->pc == 0x281084u) {
        ctx->pc = 0x281084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281080u;
        // 0x281084: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281088u;
        goto label_281088;
    }
    ctx->pc = 0x281080u;
    {
        const bool branch_taken_0x281080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281080u;
        // 0x281084: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281080) {
            ctx->pc = 0x281094u;
            goto label_281094;
        }
    }
    ctx->pc = 0x281088u;
label_281088:
    // 0x281088: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x281088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_28108c:
    // 0x28108c: 0x10000002  b           . + 4 + (0x2 << 2)
label_281090:
    if (ctx->pc == 0x281090u) {
        ctx->pc = 0x281090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28108Cu;
        // 0x281090: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281094u;
        goto label_281094;
    }
    ctx->pc = 0x28108Cu;
    {
        const bool branch_taken_0x28108c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28108Cu;
        // 0x281090: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28108c) {
            ctx->pc = 0x281098u;
            goto label_281098;
        }
    }
    ctx->pc = 0x281094u;
label_281094:
    // 0x281094: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x281094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281098:
    // 0x281098: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_28109c:
    if (ctx->pc == 0x28109Cu) {
        ctx->pc = 0x2810A0u;
        goto label_2810a0;
    }
    ctx->pc = 0x281098u;
    {
        const bool branch_taken_0x281098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281098) {
            ctx->pc = 0x2810C4u;
            goto label_2810c4;
        }
    }
    ctx->pc = 0x2810A0u;
label_2810a0:
    // 0x2810a0: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x2810a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_2810a4:
    // 0x2810a4: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_2810a8:
    if (ctx->pc == 0x2810A8u) {
        ctx->pc = 0x2810ACu;
        goto label_2810ac;
    }
    ctx->pc = 0x2810A4u;
    {
        const bool branch_taken_0x2810a4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x2810a4) {
            ctx->pc = 0x2810C4u;
            goto label_2810c4;
        }
    }
    ctx->pc = 0x2810ACu;
label_2810ac:
    // 0x2810ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2810acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2810b0:
    // 0x2810b0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2810b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2810b4:
    // 0x2810b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2810b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2810b8:
    // 0x2810b8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2810b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2810bc:
    // 0x2810bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2810bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2810c0:
    // 0x2810c0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2810c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2810c4:
    // 0x2810c4: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2810c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_2810c8:
    // 0x2810c8: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2810c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2810cc:
    // 0x2810cc: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2810ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2810d0:
    // 0x2810d0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2810d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2810d4:
    // 0x2810d4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2810d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_2810d8:
    // 0x2810d8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2810d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2810dc:
    // 0x2810dc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2810dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_2810e0:
    // 0x2810e0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2810e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2810e4:
    // 0x2810e4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2810e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2810e8:
    // 0x2810e8: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2810e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2810ec:
    // 0x2810ec: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2810ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2810f0:
    // 0x2810f0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2810f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2810f4:
    // 0x2810f4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2810f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2810f8:
    // 0x2810f8: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2810f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_2810fc:
    // 0x2810fc: 0xc04078a  jal         func_101E28
label_281100:
    if (ctx->pc == 0x281100u) {
        ctx->pc = 0x281100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2810FCu;
        // 0x281100: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281104u;
        goto label_281104;
    }
    ctx->pc = 0x2810FCu;
    SET_GPR_U32(ctx, 31, 0x281104u);
    ctx->pc = 0x281100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2810FCu;
    // 0x281100: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2810FCu, 0x281104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281104u;
label_281104:
    // 0x281104: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x281104u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_281108:
    // 0x281108: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x281108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28110c:
    // 0x28110c: 0x0  nop
    ctx->pc = 0x28110cu;
    // NOP
label_281110:
    // 0x281110: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x281110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_281114:
    // 0x281114: 0x0  nop
    ctx->pc = 0x281114u;
    // NOP
label_281118:
    // 0x281118: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_28111c:
    if (ctx->pc == 0x28111Cu) {
        ctx->pc = 0x28111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281118u;
        // 0x28111c: 0xc7a40020  lwc1        $f4, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x281120u;
        goto label_281120;
    }
    ctx->pc = 0x281118u;
    {
        const bool branch_taken_0x281118 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281118u;
        // 0x28111c: 0xc7a40020  lwc1        $f4, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x281118) {
            ctx->pc = 0x28115Cu;
            goto label_28115c;
        }
    }
    ctx->pc = 0x281120u;
label_281120:
    // 0x281120: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x281120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_281124:
    // 0x281124: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x281124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_281128:
    // 0x281128: 0x0  nop
    ctx->pc = 0x281128u;
    // NOP
label_28112c:
    // 0x28112c: 0x0  nop
    ctx->pc = 0x28112cu;
    // NOP
label_281130:
    // 0x281130: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x281130u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
label_281134:
    // 0x281134: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x281134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_281138:
    // 0x281138: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x281138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28113c:
    // 0x28113c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x28113cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281140:
    // 0x281140: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x281140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_281144:
    // 0x281144: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x281144u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_281148:
    // 0x281148: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x281148u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_28114c:
    // 0x28114c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x28114cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_281150:
    // 0x281150: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x281150u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_281154:
    // 0x281154: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x281154u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_281158:
    // 0x281158: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x281158u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_28115c:
    // 0x28115c: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x28115cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_281160:
    // 0x281160: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x281160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_281164:
    // 0x281164: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x281164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_281168:
    // 0x281168: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x281168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_28116c:
    // 0x28116c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x28116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_281170:
    // 0x281170: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x281170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_281174:
    // 0x281174: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x281174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281178:
    // 0x281178: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x281178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_28117c:
    // 0x28117c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x28117cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_281180:
    // 0x281180: 0xc07e804  jal         func_1FA010
label_281184:
    if (ctx->pc == 0x281184u) {
        ctx->pc = 0x281184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281180u;
        // 0x281184: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x281188u;
        goto label_281188;
    }
    ctx->pc = 0x281180u;
    SET_GPR_U32(ctx, 31, 0x281188u);
    ctx->pc = 0x281184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281180u;
    // 0x281184: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x281180u, 0x281188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281188u;
label_281188:
    // 0x281188: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x281188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_28118c:
    // 0x28118c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x28118cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_281190:
    // 0x281190: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x281190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_281194:
    // 0x281194: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_281198:
    if (ctx->pc == 0x281198u) {
        ctx->pc = 0x28119Cu;
        goto label_28119c;
    }
    ctx->pc = 0x281194u;
    {
        const bool branch_taken_0x281194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x281194) {
            ctx->pc = 0x2811A8u;
            goto label_2811a8;
        }
    }
    ctx->pc = 0x28119Cu;
label_28119c:
    // 0x28119c: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x28119cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_2811a0:
    // 0x2811a0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2811a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2811a4:
    // 0x2811a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2811a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2811a8:
    // 0x2811a8: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2811a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2811ac:
    // 0x2811ac: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2811acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_2811b0:
    // 0x2811b0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2811b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_2811b4:
    // 0x2811b4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2811b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2811b8:
    // 0x2811b8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2811b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_2811bc:
    // 0x2811bc: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x2811bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_2811c0:
    // 0x2811c0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x2811c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2811c4:
    // 0x2811c4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2811c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2811c8:
    // 0x2811c8: 0x40f809  jalr        $v0
label_2811cc:
    if (ctx->pc == 0x2811CCu) {
        ctx->pc = 0x2811CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2811C8u;
        // 0x2811cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2811D0u;
        goto label_2811d0;
    }
    ctx->pc = 0x2811C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2811D0u);
        ctx->pc = 0x2811CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2811C8u;
        // 0x2811cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2811C8u, 0x2811D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2811D0u;
label_2811d0:
    // 0x2811d0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2811d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2811d4:
    // 0x2811d4: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
label_2811d8:
    if (ctx->pc == 0x2811D8u) {
        ctx->pc = 0x2811D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2811D4u;
        // 0x2811d8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2811DCu;
        goto label_2811dc;
    }
    ctx->pc = 0x2811D4u;
    {
        const bool branch_taken_0x2811d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2811D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2811D4u;
        // 0x2811d8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2811d4) {
            ctx->pc = 0x2811F4u;
            goto label_2811f4;
        }
    }
    ctx->pc = 0x2811DCu;
label_2811dc:
    // 0x2811dc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2811dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2811e0:
    // 0x2811e0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2811e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2811e4:
    // 0x2811e4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2811e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2811e8:
    // 0x2811e8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2811e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2811ec:
    // 0x2811ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2811ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2811f0:
    // 0x2811f0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2811f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2811f4:
    // 0x2811f4: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x2811f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
label_2811f8:
    // 0x2811f8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_2811fc:
    if (ctx->pc == 0x2811FCu) {
        ctx->pc = 0x2811FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2811F8u;
        // 0x2811fc: 0x26020100  addiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281200u;
        goto label_281200;
    }
    ctx->pc = 0x2811F8u;
    {
        const bool branch_taken_0x2811f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2811f8) {
            ctx->pc = 0x2811FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2811F8u;
            // 0x2811fc: 0x26020100  addiu       $v0, $s0, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28121Cu;
            goto label_28121c;
        }
    }
    ctx->pc = 0x281200u;
label_281200:
    // 0x281200: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x281200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281204:
    // 0x281204: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x281204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
label_281208:
    // 0x281208: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x281208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28120c:
    // 0x28120c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x28120cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_281210:
    // 0x281210: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x281210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281214:
    // 0x281214: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x281214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_281218:
    // 0x281218: 0x26020100  addiu       $v0, $s0, 0x100
    ctx->pc = 0x281218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_28121c:
    // 0x28121c: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x28121cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_281220:
    // 0x281220: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x281220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_281224:
    // 0x281224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_281228:
    // 0x281228: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x281228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28122c:
    // 0x28122c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x28122cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_281230:
    // 0x281230: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x281230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_281234:
    // 0x281234: 0xc06ed52  jal         func_1BB548
label_281238:
    if (ctx->pc == 0x281238u) {
        ctx->pc = 0x281238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281234u;
        // 0x281238: 0x2407001e  addiu       $a3, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28123Cu;
        goto label_28123c;
    }
    ctx->pc = 0x281234u;
    SET_GPR_U32(ctx, 31, 0x28123Cu);
    ctx->pc = 0x281238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281234u;
    // 0x281238: 0x2407001e  addiu       $a3, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB548u, 0x281234u, 0x28123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28123Cu;
label_28123c:
    // 0x28123c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x28123cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_281240:
    // 0x281240: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x281240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_281244:
    // 0x281244: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x281244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_281248:
    // 0x281248: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x281248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_28124c:
    // 0x28124c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x28124cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_281250:
    // 0x281250: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x281250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_281254:
    // 0x281254: 0x3e00008  jr          $ra
label_281258:
    if (ctx->pc == 0x281258u) {
        ctx->pc = 0x281258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281254u;
        // 0x281258: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28125Cu;
        goto label_28125c;
    }
    ctx->pc = 0x281254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281254u;
        // 0x281258: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28125Cu;
label_28125c:
    // 0x28125c: 0x0  nop
    ctx->pc = 0x28125cu;
    // NOP
    ctx->pc = 0x281260u;
}
