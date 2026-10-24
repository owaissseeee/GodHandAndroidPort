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

// Function: func_00104010
// Address: 0x104010 - 0x106218
void func_00104010_0x104010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00104010_0x104010");
#endif

    switch (ctx->pc) {
        case 0x104184u: goto label_104184;
        case 0x1041c4u: goto label_1041c4;
        case 0x1041f8u: goto label_1041f8;
        case 0x104214u: goto label_104214;
        case 0x104234u: goto label_104234;
        case 0x104250u: goto label_104250;
        case 0x10426cu: goto label_10426c;
        case 0x104290u: goto label_104290;
        case 0x104364u: goto label_104364;
        case 0x1043c8u: goto label_1043c8;
        case 0x104438u: goto label_104438;
        case 0x104558u: goto label_104558;
        case 0x104560u: goto label_104560;
        case 0x104654u: goto label_104654;
        case 0x10465cu: goto label_10465c;
        case 0x104778u: goto label_104778;
        case 0x104814u: goto label_104814;
        case 0x10481cu: goto label_10481c;
        case 0x104904u: goto label_104904;
        case 0x104914u: goto label_104914;
        case 0x1049c8u: goto label_1049c8;
        case 0x104ba4u: goto label_104ba4;
        case 0x104c0cu: goto label_104c0c;
        case 0x104c1cu: goto label_104c1c;
        case 0x104d50u: goto label_104d50;
        case 0x104dc4u: goto label_104dc4;
        case 0x104dccu: goto label_104dcc;
        case 0x104e44u: goto label_104e44;
        case 0x104e5cu: goto label_104e5c;
        case 0x104e6cu: goto label_104e6c;
        case 0x104ee8u: goto label_104ee8;
        case 0x104f10u: goto label_104f10;
        case 0x105028u: goto label_105028;
        case 0x105098u: goto label_105098;
        case 0x1050a8u: goto label_1050a8;
        case 0x105198u: goto label_105198;
        case 0x105208u: goto label_105208;
        case 0x105218u: goto label_105218;
        case 0x105314u: goto label_105314;
        case 0x105430u: goto label_105430;
        case 0x105440u: goto label_105440;
        case 0x105534u: goto label_105534;
        case 0x105648u: goto label_105648;
        case 0x105658u: goto label_105658;
        case 0x105750u: goto label_105750;
        case 0x105864u: goto label_105864;
        case 0x105874u: goto label_105874;
        case 0x105920u: goto label_105920;
        case 0x105944u: goto label_105944;
        case 0x105ac0u: goto label_105ac0;
        case 0x105c84u: goto label_105c84;
        case 0x105d80u: goto label_105d80;
        case 0x105db0u: goto label_105db0;
        case 0x105dd0u: goto label_105dd0;
        case 0x105e54u: goto label_105e54;
        case 0x105e64u: goto label_105e64;
        case 0x105f4cu: goto label_105f4c;
        case 0x105f58u: goto label_105f58;
        case 0x10605cu: goto label_10605c;
        case 0x106100u: goto label_106100;
        case 0x106108u: goto label_106108;
        case 0x106154u: goto label_106154;
        case 0x10616cu: goto label_10616c;
        case 0x10617cu: goto label_10617c;
        default: break;
    }

    ctx->pc = 0x104010u;

    // 0x104010: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x104010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x104014: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x104014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x104018: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x104018u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10401c: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x10401cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x104020: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x104020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x104024: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x104024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x104028: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x104028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x10402c: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x10402cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x104030: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x104030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x104034: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x104034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x104038: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x104038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
    // 0x10403c: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x10403cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x104040: 0xe7ba0200  swc1        $f26, 0x200($sp)
    ctx->pc = 0x104040u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x104044: 0xe7b901f8  swc1        $f25, 0x1F8($sp)
    ctx->pc = 0x104044u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x104048: 0xe7b801f0  swc1        $f24, 0x1F0($sp)
    ctx->pc = 0x104048u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x10404c: 0xe7b701e8  swc1        $f23, 0x1E8($sp)
    ctx->pc = 0x10404cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x104050: 0xe7b601e0  swc1        $f22, 0x1E0($sp)
    ctx->pc = 0x104050u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x104054: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x104054u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x104058: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x104058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x10405c: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x10405cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x104060: 0xafa60104  sw          $a2, 0x104($sp)
    ctx->pc = 0x104060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 6));
    // 0x104064: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x104064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x104068: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x104068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10406c: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x10406cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x104070: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x104070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x104074: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x104074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x104078: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x104078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x10407c: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x10407cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x104080: 0x1040084f  beqz        $v0, . + 4 + (0x84F << 2)
    ctx->pc = 0x104080u;
    {
        const bool branch_taken_0x104080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104080u;
        // 0x104084: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104080) {
            ctx->pc = 0x1061C0u;
            goto label_1061c0;
        }
    }
    ctx->pc = 0x104088u;
    // 0x104088: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x104088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x10408c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10408Cu;
    {
        const bool branch_taken_0x10408c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10408Cu;
        // 0x104090: 0xc4780114  lwc1        $f24, 0x114($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10408c) {
            ctx->pc = 0x104098u;
            goto label_104098;
        }
    }
    ctx->pc = 0x104094u;
    // 0x104094: 0xc4580114  lwc1        $f24, 0x114($v0)
    ctx->pc = 0x104094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_104098:
    // 0x104098: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x104098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10409c: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x10409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1040a0: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x1040a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1040a4: 0xc4570004  lwc1        $f23, 0x4($v0)
    ctx->pc = 0x1040a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1040a8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1040A8u;
    {
        const bool branch_taken_0x1040a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1040ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040A8u;
        // 0x1040ac: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040a8) {
            ctx->pc = 0x1040BCu;
            goto label_1040bc;
        }
    }
    ctx->pc = 0x1040B0u;
    // 0x1040b0: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1040b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1040b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1040B4u;
    {
        const bool branch_taken_0x1040b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1040B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040B4u;
        // 0x1040b8: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040b4) {
            ctx->pc = 0x1040C0u;
            goto label_1040c0;
        }
    }
    ctx->pc = 0x1040BCu;
label_1040bc:
    // 0x1040bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1040bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1040c0:
    // 0x1040c0: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x1040c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x1040c4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1040c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1040c8: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1040C8u;
    {
        const bool branch_taken_0x1040c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1040CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040C8u;
        // 0x1040cc: 0xafa30108  sw          $v1, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040c8) {
            ctx->pc = 0x1041A4u;
            goto label_1041a4;
        }
    }
    ctx->pc = 0x1040D0u;
    // 0x1040d0: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x1040d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1040d4: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x1040d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1040d8: 0xfba000f0  sqc2        $vf0, 0xF0($sp)
    ctx->pc = 0x1040d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1040dc: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x1040dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1040e0: 0x8ca200f0  lw          $v0, 0xF0($a1)
    ctx->pc = 0x1040e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x1040e4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1040e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1040e8: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1040E8u;
    {
        const bool branch_taken_0x1040e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1040ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040E8u;
        // 0x1040ec: 0x27b500d0  addiu       $s5, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040e8) {
            ctx->pc = 0x104108u;
            goto label_104108;
        }
    }
    ctx->pc = 0x1040F0u;
    // 0x1040f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1040f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1040f4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1040f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1040f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1040f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1040fc: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x1040fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x104100: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x104100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104104: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x104104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_104108:
    // 0x104108: 0x12a50006  beq         $s5, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x104108u;
    {
        const bool branch_taken_0x104108 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 5));
        ctx->pc = 0x10410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104108u;
        // 0x10410c: 0xc7a000e0  lwc1        $f0, 0xE0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104108) {
            ctx->pc = 0x104124u;
            goto label_104124;
        }
    }
    ctx->pc = 0x104110u;
    // 0x104110: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x104110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x104114: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x104114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104118: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x104118u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x10411c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x10411cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104120: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x104120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_104124:
    // 0x104124: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x104124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104128: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x104128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10412c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x10412cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104130: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x104130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104134: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x104134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x104138: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x104138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10413c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x10413cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x104140: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x104140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x104144: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x104144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x104148: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10414c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x10414cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x104150: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x104150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x104154: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x104154u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x104158: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x104158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x10415c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10415cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x104160: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x104160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104164: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x104164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x104168: 0x24090400  addiu       $t1, $zero, 0x400
    ctx->pc = 0x104168u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x10416c: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x10416cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x104170: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x104170u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104174: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x104174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x104178: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x104178u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10417c: 0xc04c784  jal         func_131E10
    ctx->pc = 0x10417Cu;
    SET_GPR_U32(ctx, 31, 0x104184u);
    ctx->pc = 0x104180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10417Cu;
    // 0x104180: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x10417Cu, 0x104184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104184u;
label_104184:
    // 0x104184: 0x14500008  bne         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x104184u;
    {
        const bool branch_taken_0x104184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x104188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104184u;
        // 0x104188: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104184) {
            ctx->pc = 0x1041A8u;
            goto label_1041a8;
        }
    }
    ctx->pc = 0x10418Cu;
    // 0x10418c: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x10418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104190: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x104190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x104194: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x104194u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x104198: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x104198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10419c: 0x0  nop
    ctx->pc = 0x10419cu;
    // NOP
    // 0x1041a0: 0x46000dc0  add.s       $f23, $f1, $f0
    ctx->pc = 0x1041a0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1041a4:
    // 0x1041a4: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1041a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1041a8:
    // 0x1041a8: 0x8c6202f0  lw          $v0, 0x2F0($v1)
    ctx->pc = 0x1041a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 752)));
    // 0x1041ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1041acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1041b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1041B0u;
    {
        const bool branch_taken_0x1041b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1041B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041B0u;
        // 0x1041b4: 0x8fa60104  lw          $a2, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041b0) {
            ctx->pc = 0x1041C4u;
            goto label_1041c4;
        }
    }
    ctx->pc = 0x1041B8u;
    // 0x1041b8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1041b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041bc: 0xc041f1a  jal         func_107C68
    ctx->pc = 0x1041BCu;
    SET_GPR_U32(ctx, 31, 0x1041C4u);
    ctx->pc = 0x1041C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041BCu;
    // 0x1041c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107C68u, 0x1041BCu, 0x1041C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041C4u;
label_1041c4:
    // 0x1041c4: 0x9282005c  lbu         $v0, 0x5C($s4)
    ctx->pc = 0x1041c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x1041c8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1041c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1041cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1041ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1041d0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1041D0u;
    {
        const bool branch_taken_0x1041d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1041D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041D0u;
        // 0x1041d4: 0xafa00114  sw          $zero, 0x114($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041d0) {
            ctx->pc = 0x1041FCu;
            goto label_1041fc;
        }
    }
    ctx->pc = 0x1041D8u;
    // 0x1041d8: 0x8e830058  lw          $v1, 0x58($s4)
    ctx->pc = 0x1041d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x1041dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1041DCu;
    {
        const bool branch_taken_0x1041dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1041E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041DCu;
        // 0x1041e0: 0x8fa40100  lw          $a0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041dc) {
            ctx->pc = 0x1041ECu;
            goto label_1041ec;
        }
    }
    ctx->pc = 0x1041E4u;
    // 0x1041e4: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x1041e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1041e8: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1041e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1041ec:
    // 0x1041ec: 0x8e850034  lw          $a1, 0x34($s4)
    ctx->pc = 0x1041ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1041f0: 0xc041886  jal         func_106218
    ctx->pc = 0x1041F0u;
    SET_GPR_U32(ctx, 31, 0x1041F8u);
    ctx->pc = 0x1041F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041F0u;
    // 0x1041f4: 0x8e860038  lw          $a2, 0x38($s4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106218u, 0x1041F0u, 0x1041F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041F8u;
label_1041f8:
    // 0x1041f8: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x1041f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_1041fc:
    // 0x1041fc: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x1041fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x104200: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x104200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x104204: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x104204u;
    {
        const bool branch_taken_0x104204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104204) {
            ctx->pc = 0x104208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104204u;
            // 0x104208: 0x8e82005c  lw          $v0, 0x5C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10423Cu;
            goto label_10423c;
        }
    }
    ctx->pc = 0x10420Cu;
    // 0x10420c: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x10420Cu;
    SET_GPR_U32(ctx, 31, 0x104214u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x10420Cu, 0x104214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104214u;
label_104214:
    // 0x104214: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x104214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x104218: 0xc6810048  lwc1        $f1, 0x48($s4)
    ctx->pc = 0x104218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10421c: 0xc442c7c8  lwc1        $f2, -0x3838($v0)
    ctx->pc = 0x10421cu;
    { uint32_t bits = FAST_READ32(0x3BC7C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x104220: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x104220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x104224: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x104224u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x104228: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x104228u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x10422c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x10422Cu;
    SET_GPR_U32(ctx, 31, 0x104234u);
    ctx->pc = 0x104230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10422Cu;
    // 0x104230: 0xe6810048  swc1        $f1, 0x48($s4) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x10422Cu, 0x104234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104234u;
label_104234:
    // 0x104234: 0xe6800048  swc1        $f0, 0x48($s4)
    ctx->pc = 0x104234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
    // 0x104238: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x104238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_10423c:
    // 0x10423c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x10423cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x104240: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x104240u;
    {
        const bool branch_taken_0x104240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104240) {
            ctx->pc = 0x104244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104240u;
            // 0x104244: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104274u;
            goto label_104274;
        }
    }
    ctx->pc = 0x104248u;
    // 0x104248: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x104248u;
    SET_GPR_U32(ctx, 31, 0x104250u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x104248u, 0x104250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104250u;
label_104250:
    // 0x104250: 0xc6810070  lwc1        $f1, 0x70($s4)
    ctx->pc = 0x104250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104254: 0xc6820048  lwc1        $f2, 0x48($s4)
    ctx->pc = 0x104254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x104258: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x104258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10425c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x10425cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x104260: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x104260u;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
    // 0x104264: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x104264u;
    SET_GPR_U32(ctx, 31, 0x10426Cu);
    ctx->pc = 0x104268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104264u;
    // 0x104268: 0xe6820048  swc1        $f2, 0x48($s4) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x104264u, 0x10426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10426Cu;
label_10426c:
    // 0x10426c: 0xe6800048  swc1        $f0, 0x48($s4)
    ctx->pc = 0x10426cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
    // 0x104270: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x104270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_104274:
    // 0x104274: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x104274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x104278: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x104278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x10427c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x10427Cu;
    {
        const bool branch_taken_0x10427c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10427Cu;
        // 0x104280: 0xafa40110  sw          $a0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10427c) {
            ctx->pc = 0x10430Cu;
            goto label_10430c;
        }
    }
    ctx->pc = 0x104284u;
    // 0x104284: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x104284u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104288: 0x240700a0  addiu       $a3, $zero, 0xA0
    ctx->pc = 0x104288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x10428c: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x10428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_104290:
    // 0x104290: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104290u;
    {
        const bool branch_taken_0x104290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104290u;
        // 0x104294: 0x8fa50110  lw          $a1, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104290) {
            ctx->pc = 0x1042A0u;
            goto label_1042a0;
        }
    }
    ctx->pc = 0x104298u;
    // 0x104298: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x104298u;
    {
        const bool branch_taken_0x104298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104298u;
        // 0x10429c: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104298) {
            ctx->pc = 0x1042D4u;
            goto label_1042d4;
        }
    }
    ctx->pc = 0x1042A0u;
label_1042a0:
    // 0x1042a0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1042a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1042a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1042a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042a8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1042a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1042ac: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1042acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1042b0: 0x904302b4  lbu         $v1, 0x2B4($v0)
    ctx->pc = 0x1042b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x1042b4: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x1042b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1042b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1042B8u;
    {
        const bool branch_taken_0x1042b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1042BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042B8u;
        // 0x1042bc: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042b8) {
            ctx->pc = 0x1042C8u;
            goto label_1042c8;
        }
    }
    ctx->pc = 0x1042C0u;
    // 0x1042c0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1042c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1042c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1042c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1042c8:
    // 0x1042c8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1042c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1042cc: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1042ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1042d0: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x1042d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1042d4:
    // 0x1042d4: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x1042d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1042d8: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x1042d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1042dc: 0x400013  mtlo        $v0
    ctx->pc = 0x1042dcu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x1042e0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x1042e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1042e4: 0x70c79800  madd        $s3, $a2, $a3
    ctx->pc = 0x1042e4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x1042e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1042e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1042ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1042ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1042f0: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x1042f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
    // 0x1042f4: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x1042f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x1042f8: 0xa2600090  sb          $zero, 0x90($s3)
    ctx->pc = 0x1042f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x1042fc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1042fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x104300: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x104300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x104304: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x104304u;
    {
        const bool branch_taken_0x104304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104304) {
            ctx->pc = 0x104308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104304u;
            // 0x104308: 0x8e820054  lw          $v0, 0x54($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104290;
        }
    }
    ctx->pc = 0x10430Cu;
label_10430c:
    // 0x10430c: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x10430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x104310: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x104310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x104314: 0x54400199  bnel        $v0, $zero, . + 4 + (0x199 << 2)
    ctx->pc = 0x104314u;
    {
        const bool branch_taken_0x104314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104314) {
            ctx->pc = 0x104318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104314u;
            // 0x104318: 0x8e82005c  lw          $v0, 0x5C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10497Cu;
            goto label_10497c;
        }
    }
    ctx->pc = 0x10431Cu;
    // 0x10431c: 0x8e900058  lw          $s0, 0x58($s4)
    ctx->pc = 0x10431cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x104320: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x104320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x104324: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x104324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x104328: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x104328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x10432c: 0xb0800a  movz        $s0, $a1, $s0
    ctx->pc = 0x10432cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x104330: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x104330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x104334: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x104334u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x104338: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x104338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x10433c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10433Cu;
    {
        const bool branch_taken_0x10433c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10433Cu;
        // 0x104340: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10433c) {
            ctx->pc = 0x10434Cu;
            goto label_10434c;
        }
    }
    ctx->pc = 0x104344u;
    // 0x104344: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x104344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
    // 0x104348: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x104348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10434c:
    // 0x10434c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x10434cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x104350: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x104350u;
    {
        const bool branch_taken_0x104350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104350u;
        // 0x104354: 0x3c040042  lui         $a0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104350) {
            ctx->pc = 0x104394u;
            goto label_104394;
        }
    }
    ctx->pc = 0x104358u;
    // 0x104358: 0x8e0504ac  lw          $a1, 0x4AC($s0)
    ctx->pc = 0x104358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1196)));
    // 0x10435c: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x10435Cu;
    SET_GPR_U32(ctx, 31, 0x104364u);
    ctx->pc = 0x104360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10435Cu;
    // 0x104360: 0x2484b7e8  addiu       $a0, $a0, -0x4818 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x10435Cu, 0x104364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104364u;
label_104364:
    // 0x104364: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x104364u;
    {
        const bool branch_taken_0x104364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104364) {
            ctx->pc = 0x104368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104364u;
            // 0x104368: 0x960302fe  lhu         $v1, 0x2FE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104398u;
            goto label_104398;
        }
    }
    ctx->pc = 0x10436Cu;
    // 0x10436c: 0x26020650  addiu       $v0, $s0, 0x650
    ctx->pc = 0x10436cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x104370: 0x27b70090  addiu       $s7, $sp, 0x90
    ctx->pc = 0x104370u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x104374: 0x52e20008  beql        $s7, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x104374u;
    {
        const bool branch_taken_0x104374 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x104374) {
            ctx->pc = 0x104378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104374u;
            // 0x104378: 0x960302fe  lhu         $v1, 0x2FE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104398u;
            goto label_104398;
        }
    }
    ctx->pc = 0x10437Cu;
    // 0x10437c: 0xc6000650  lwc1        $f0, 0x650($s0)
    ctx->pc = 0x10437cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104380: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x104380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x104384: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x104384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104388: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x104388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x10438c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x10438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104390: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x104390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_104394:
    // 0x104394: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x104394u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_104398:
    // 0x104398: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x104398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x10439c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10439Cu;
    {
        const bool branch_taken_0x10439c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1043A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10439Cu;
        // 0x1043a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10439c) {
            ctx->pc = 0x1043ACu;
            goto label_1043ac;
        }
    }
    ctx->pc = 0x1043A4u;
    // 0x1043a4: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1043a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
    // 0x1043a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1043a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1043ac:
    // 0x1043ac: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1043acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1043b0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1043B0u;
    {
        const bool branch_taken_0x1043b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1043b0) {
            ctx->pc = 0x1043B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1043B0u;
            // 0x1043b4: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104400u;
            goto label_104400;
        }
    }
    ctx->pc = 0x1043B8u;
    // 0x1043b8: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x1043b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x1043bc: 0x8e0504ac  lw          $a1, 0x4AC($s0)
    ctx->pc = 0x1043bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1196)));
    // 0x1043c0: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x1043C0u;
    SET_GPR_U32(ctx, 31, 0x1043C8u);
    ctx->pc = 0x1043C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1043C0u;
    // 0x1043c4: 0x2484b7e8  addiu       $a0, $a0, -0x4818 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x1043C0u, 0x1043C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1043C8u;
label_1043c8:
    // 0x1043c8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1043C8u;
    {
        const bool branch_taken_0x1043c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1043c8) {
            ctx->pc = 0x1043CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1043C8u;
            // 0x1043cc: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104400u;
            goto label_104400;
        }
    }
    ctx->pc = 0x1043D0u;
    // 0x1043d0: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1043d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1043d4: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1043d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1043d8: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1043D8u;
    {
        const bool branch_taken_0x1043d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1043d8) {
            ctx->pc = 0x1043DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1043D8u;
            // 0x1043dc: 0xc6190674  lwc1        $f25, 0x674($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1043FCu;
            goto label_1043fc;
        }
    }
    ctx->pc = 0x1043E0u;
    // 0x1043e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1043e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1043e4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1043e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1043e8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1043e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1043ec: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x1043ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1043f0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1043f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1043f4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1043f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1043f8: 0xc6190674  lwc1        $f25, 0x674($s0)
    ctx->pc = 0x1043f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1043fc:
    // 0x1043fc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1043fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_104400:
    // 0x104400: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x104400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x104404: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x104404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x104408: 0x1040015b  beqz        $v0, . + 4 + (0x15B << 2)
    ctx->pc = 0x104408u;
    {
        const bool branch_taken_0x104408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104408u;
        // 0x10440c: 0xafa30110  sw          $v1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104408) {
            ctx->pc = 0x104978u;
            goto label_104978;
        }
    }
    ctx->pc = 0x104410u;
    // 0x104410: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x104410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x104414: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x104414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x104418: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x104418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x10441c: 0x245715f0  addiu       $s7, $v0, 0x15F0
    ctx->pc = 0x10441cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 5616));
    // 0x104420: 0x241600a0  addiu       $s6, $zero, 0xA0
    ctx->pc = 0x104420u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x104424: 0x27b100d0  addiu       $s1, $sp, 0xD0
    ctx->pc = 0x104424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x104428: 0x27b50080  addiu       $s5, $sp, 0x80
    ctx->pc = 0x104428u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x10442c: 0x26920060  addiu       $s2, $s4, 0x60
    ctx->pc = 0x10442cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x104430: 0x27be00b0  addiu       $fp, $sp, 0xB0
    ctx->pc = 0x104430u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x104434: 0x0  nop
    ctx->pc = 0x104434u;
    // NOP
label_104438:
    // 0x104438: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x104438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x10443c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10443Cu;
    {
        const bool branch_taken_0x10443c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10443Cu;
        // 0x104440: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10443c) {
            ctx->pc = 0x10444Cu;
            goto label_10444c;
        }
    }
    ctx->pc = 0x104444u;
    // 0x104444: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x104444u;
    {
        const bool branch_taken_0x104444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104444u;
        // 0x104448: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104444) {
            ctx->pc = 0x104480u;
            goto label_104480;
        }
    }
    ctx->pc = 0x10444Cu;
label_10444c:
    // 0x10444c: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x10444cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x104450: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x104450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x104454: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x104454u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104458: 0x904302b4  lbu         $v1, 0x2B4($v0)
    ctx->pc = 0x104458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x10445c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10445cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104460: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x104460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x104464: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104464u;
    {
        const bool branch_taken_0x104464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104464u;
        // 0x104468: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104464) {
            ctx->pc = 0x104474u;
            goto label_104474;
        }
    }
    ctx->pc = 0x10446Cu;
    // 0x10446c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x10446cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x104470: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x104470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104474:
    // 0x104474: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x104474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x104478: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x104478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10447c: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x10447cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_104480:
    // 0x104480: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x104480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x104484: 0x400013  mtlo        $v0
    ctx->pc = 0x104484u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x104488: 0x70d69800  madd        $s3, $a2, $s6
    ctx->pc = 0x104488u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 22); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x10448c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x10448cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x104490: 0x26630040  addiu       $v1, $s3, 0x40
    ctx->pc = 0x104490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x104494: 0xda640040  lqc2        $vf4, 0x40($s3)
    ctx->pc = 0x104494u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x104498: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x104498u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10449c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x10449cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1044a0: 0xfa640040  sqc2        $vf4, 0x40($s3)
    ctx->pc = 0x1044a0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1044a4: 0x26620050  addiu       $v0, $s3, 0x50
    ctx->pc = 0x1044a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x1044a8: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1044A8u;
    {
        const bool branch_taken_0x1044a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1044a8) {
            ctx->pc = 0x1044ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1044A8u;
            // 0x1044ac: 0x8e830020  lw          $v1, 0x20($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1044CCu;
            goto label_1044cc;
        }
    }
    ctx->pc = 0x1044B0u;
    // 0x1044b0: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x1044b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1044b4: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x1044b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x1044b8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1044b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1044bc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1044bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1044c0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1044c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1044c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1044c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1044c8: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x1044c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1044cc:
    // 0x1044cc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1044CCu;
    {
        const bool branch_taken_0x1044cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1044D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1044CCu;
        // 0x1044d0: 0x8fa4010c  lw          $a0, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1044cc) {
            ctx->pc = 0x1044F0u;
            goto label_1044f0;
        }
    }
    ctx->pc = 0x1044D4u;
    // 0x1044d4: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x1044d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1044d8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1044d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1044dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1044dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1044e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1044e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1044e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1044e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1044e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1044E8u;
    {
        const bool branch_taken_0x1044e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1044ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1044E8u;
        // 0x1044ec: 0xe6610034  swc1        $f1, 0x34($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1044e8) {
            ctx->pc = 0x104500u;
            goto label_104500;
        }
    }
    ctx->pc = 0x1044F0u;
label_1044f0:
    // 0x1044f0: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x1044f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1044f4: 0xc681003c  lwc1        $f1, 0x3C($s4)
    ctx->pc = 0x1044f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1044f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1044f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1044fc: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x1044fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
label_104500:
    // 0x104500: 0x26630030  addiu       $v1, $s3, 0x30
    ctx->pc = 0x104500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x104504: 0xda640040  lqc2        $vf4, 0x40($s3)
    ctx->pc = 0x104504u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x104508: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x104508u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10450c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x10450cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104510: 0xfa640040  sqc2        $vf4, 0x40($s3)
    ctx->pc = 0x104510u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104514: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x104514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x104518: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x104518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x10451c: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x10451Cu;
    {
        const bool branch_taken_0x10451c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10451c) {
            ctx->pc = 0x104520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10451Cu;
            // 0x104520: 0x8e82005c  lw          $v0, 0x5C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104620u;
            goto label_104620;
        }
    }
    ctx->pc = 0x104524u;
    // 0x104524: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x104524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x104528: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x104528u;
    {
        const bool branch_taken_0x104528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104528) {
            ctx->pc = 0x10452Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104528u;
            // 0x10452c: 0x8e82005c  lw          $v0, 0x5C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104620u;
            goto label_104620;
        }
    }
    ctx->pc = 0x104530u;
    // 0x104530: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x104530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x104534: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x104534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x104538: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x104538u;
    {
        const bool branch_taken_0x104538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104538u;
        // 0x10453c: 0x8fa5010c  lw          $a1, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104538) {
            ctx->pc = 0x1045A0u;
            goto label_1045a0;
        }
    }
    ctx->pc = 0x104540u;
    // 0x104540: 0xc6800048  lwc1        $f0, 0x48($s4)
    ctx->pc = 0x104540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104544: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x104544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x104548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10454c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x10454cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x104550: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x104550u;
    SET_GPR_U32(ctx, 31, 0x104558u);
    ctx->pc = 0x104554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104550u;
    // 0x104554: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x104550u, 0x104558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104558u;
label_104558:
    // 0x104558: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x104558u;
    SET_GPR_U32(ctx, 31, 0x104560u);
    ctx->pc = 0x10455Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104558u;
    // 0x10455c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x104558u, 0x104560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104560u;
label_104560:
    // 0x104560: 0x46150580  add.s       $f22, $f0, $f21
    ctx->pc = 0x104560u;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x104564: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x104564u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x104568: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x104568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10456c: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x10456cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x104570: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x104570u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x104574: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x104574u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x104578: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x104578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10457c: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x10457cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104580: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x104580u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104584: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x104584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104588: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x104588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10458c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x10458cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104590: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x104590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x104594: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x104594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x104598: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x104598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x10459c: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x10459cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1045a0:
    // 0x1045a0: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x1045a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1045a4: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1045A4u;
    {
        const bool branch_taken_0x1045a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1045a4) {
            ctx->pc = 0x10460Cu;
            goto label_10460c;
        }
    }
    ctx->pc = 0x1045ACu;
    // 0x1045ac: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1045acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1045b0: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1045b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1045b4: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1045b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1045b8: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x1045b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1045bc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1045bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1045c0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1045c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1045c4: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1045c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1045c8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1045c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1045cc: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1045ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1045d0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1045d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1045d4: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x1045d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1045d8: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x1045d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1045dc: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1045dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1045e0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1045e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1045e4: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x1045e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1045e8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1045e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1045ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1045ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1045f0: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x1045f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1045f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1045f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1045f8: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1045f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1045fc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1045fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x104600: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x104600u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x104604: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x104604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104608: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x104608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_10460c:
    // 0x10460c: 0xda640040  lqc2        $vf4, 0x40($s3)
    ctx->pc = 0x10460cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x104610: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x104610u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x104614: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x104614u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104618: 0xfa640040  sqc2        $vf4, 0x40($s3)
    ctx->pc = 0x104618u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10461c: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x10461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_104620:
    // 0x104620: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x104620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x104624: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x104624u;
    {
        const bool branch_taken_0x104624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104624) {
            ctx->pc = 0x104718u;
            goto label_104718;
        }
    }
    ctx->pc = 0x10462Cu;
    // 0x10462c: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x10462cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x104630: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x104630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x104634: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x104634u;
    {
        const bool branch_taken_0x104634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x104638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104634u;
        // 0x104638: 0x8fa5010c  lw          $a1, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104634) {
            ctx->pc = 0x10469Cu;
            goto label_10469c;
        }
    }
    ctx->pc = 0x10463Cu;
    // 0x10463c: 0xc6800048  lwc1        $f0, 0x48($s4)
    ctx->pc = 0x10463cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104640: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x104640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x104644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104648: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x104648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10464c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x10464Cu;
    SET_GPR_U32(ctx, 31, 0x104654u);
    ctx->pc = 0x104650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10464Cu;
    // 0x104650: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x10464Cu, 0x104654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104654u;
label_104654:
    // 0x104654: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x104654u;
    SET_GPR_U32(ctx, 31, 0x10465Cu);
    ctx->pc = 0x104658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104654u;
    // 0x104658: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x104654u, 0x10465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10465Cu;
label_10465c:
    // 0x10465c: 0x46150580  add.s       $f22, $f0, $f21
    ctx->pc = 0x10465cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x104660: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x104660u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x104664: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x104664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104668: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x104668u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x10466c: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x10466cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x104670: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x104670u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x104674: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x104674u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104678: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x104678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10467c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x10467cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104680: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x104680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104684: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x104684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104688: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x104688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10468c: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x10468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x104690: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x104690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x104694: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x104694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x104698: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x104698u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_10469c:
    // 0x10469c: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x10469cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1046a0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1046A0u;
    {
        const bool branch_taken_0x1046a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1046a0) {
            ctx->pc = 0x104708u;
            goto label_104708;
        }
    }
    ctx->pc = 0x1046A8u;
    // 0x1046a8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1046a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1046ac: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1046acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1046b0: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1046b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1046b4: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x1046b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1046b8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1046b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1046bc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1046bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1046c0: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1046c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1046c4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1046c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1046c8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1046c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1046cc: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1046ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1046d0: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x1046d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1046d4: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x1046d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1046d8: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1046d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1046dc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1046dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1046e0: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x1046e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1046e4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1046e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1046e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1046e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1046ec: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x1046ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1046f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1046f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1046f4: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1046f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1046f8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1046f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1046fc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1046fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x104700: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x104700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104704: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x104704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_104708:
    // 0x104708: 0xda640040  lqc2        $vf4, 0x40($s3)
    ctx->pc = 0x104708u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x10470c: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x10470cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x104710: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x104710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104714: 0xfa640040  sqc2        $vf4, 0x40($s3)
    ctx->pc = 0x104714u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_104718:
    // 0x104718: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x104718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10471c: 0x0  nop
    ctx->pc = 0x10471cu;
    // NOP
    // 0x104720: 0x4619a034  c.lt.s      $f20, $f25
    ctx->pc = 0x104720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104724: 0x0  nop
    ctx->pc = 0x104724u;
    // NOP
    // 0x104728: 0x4502004c  bc1fl       . + 4 + (0x4C << 2)
    ctx->pc = 0x104728u;
    {
        const bool branch_taken_0x104728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x104728) {
            ctx->pc = 0x10472Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104728u;
            // 0x10472c: 0x8e82005c  lw          $v0, 0x5C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10485Cu;
            goto label_10485c;
        }
    }
    ctx->pc = 0x104730u;
    // 0x104730: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x104730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x104734: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x104734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x104738: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x104738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x10473c: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x10473cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x104740: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x104740u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104744: 0xdbc50000  lqc2        $vf5, 0x0($fp)
    ctx->pc = 0x104744u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x104748: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x104748u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10474c: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x10474cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104750: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x104750u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x104754: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x104754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104758: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x104758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10475c: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x10475cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104760: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x104760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x104764: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x104764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x104768: 0xe7b400c4  swc1        $f20, 0xC4($sp)
    ctx->pc = 0x104768u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x10476c: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x10476cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x104770: 0xc04078a  jal         func_101E28
    ctx->pc = 0x104770u;
    SET_GPR_U32(ctx, 31, 0x104778u);
    ctx->pc = 0x104774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104770u;
    // 0x104774: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x104770u, 0x104778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104778u;
label_104778:
    // 0x104778: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x104778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10477c: 0x0  nop
    ctx->pc = 0x10477cu;
    // NOP
    // 0x104780: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x104780u;
    {
        const bool branch_taken_0x104780 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x104784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104780u;
        // 0x104784: 0xc7a300c0  lwc1        $f3, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104780) {
            ctx->pc = 0x1047BCu;
            goto label_1047bc;
        }
    }
    ctx->pc = 0x104788u;
    // 0x104788: 0x0  nop
    ctx->pc = 0x104788u;
    // NOP
    // 0x10478c: 0x0  nop
    ctx->pc = 0x10478cu;
    // NOP
    // 0x104790: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x104790u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x104794: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x104794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x104798: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x104798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10479c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x10479cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1047a0: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1047a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1047a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1047a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1047a8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1047a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1047ac: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x1047acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1047b0: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x1047b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1047b4: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x1047b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1047b8: 0xe7a400e4  swc1        $f4, 0xE4($sp)
    ctx->pc = 0x1047b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1047bc:
    // 0x1047bc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1047bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1047c0: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1047c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1047c4: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1047c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1047c8: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x1047c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1047cc: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x1047ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1047d0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1047d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1047d4: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x1047d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1047d8: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x1047d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1047dc: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1047dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1047e0: 0x4408c800  mfc1        $t0, $f25
    ctx->pc = 0x1047e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[25], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1047e4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1047e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1047e8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1047e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1047ec: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1047ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1047f0: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x1047f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1047f4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1047F4u;
    {
        const bool branch_taken_0x1047f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1047F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1047F4u;
        // 0x1047f8: 0x8fa5010c  lw          $a1, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1047f4) {
            ctx->pc = 0x104844u;
            goto label_104844;
        }
    }
    ctx->pc = 0x1047FCu;
    // 0x1047fc: 0xc6800048  lwc1        $f0, 0x48($s4)
    ctx->pc = 0x1047fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104800: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x104800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x104804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104808: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x104808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10480c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x10480Cu;
    SET_GPR_U32(ctx, 31, 0x104814u);
    ctx->pc = 0x104810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10480Cu;
    // 0x104810: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x10480Cu, 0x104814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104814u;
label_104814:
    // 0x104814: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x104814u;
    SET_GPR_U32(ctx, 31, 0x10481Cu);
    ctx->pc = 0x104818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104814u;
    // 0x104818: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x104814u, 0x10481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10481Cu;
label_10481c:
    // 0x10481c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x10481cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x104820: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x104820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x104824: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x104824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x104828: 0x0  nop
    ctx->pc = 0x104828u;
    // NOP
    // 0x10482c: 0x46010580  add.s       $f22, $f0, $f1
    ctx->pc = 0x10482cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x104830: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x104830u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x104834: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x104834u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x104838: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x104838u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x10483c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x10483cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104840: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x104840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
label_104844:
    // 0x104844: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x104844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x104848: 0xda640040  lqc2        $vf4, 0x40($s3)
    ctx->pc = 0x104848u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x10484c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x10484cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104850: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x104850u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104854: 0xfa640040  sqc2        $vf4, 0x40($s3)
    ctx->pc = 0x104854u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104858: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x104858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_10485c:
    // 0x10485c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x10485cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x104860: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x104860u;
    {
        const bool branch_taken_0x104860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104860) {
            ctx->pc = 0x104864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104860u;
            // 0x104864: 0x92620091  lbu         $v0, 0x91($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104924u;
            goto label_104924;
        }
    }
    ctx->pc = 0x104868u;
    // 0x104868: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x104868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10486c: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x10486cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104870: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x104870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x104874: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x104874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x104878: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x104878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10487c: 0x0  nop
    ctx->pc = 0x10487cu;
    // NOP
    // 0x104880: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
    ctx->pc = 0x104880u;
    {
        const bool branch_taken_0x104880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x104880) {
            ctx->pc = 0x104884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104880u;
            // 0x104884: 0x92620091  lbu         $v0, 0x91($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104924u;
            goto label_104924;
        }
    }
    ctx->pc = 0x104888u;
    // 0x104888: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x104888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x10488c: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x10488cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x104890: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x104890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x104894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104898: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x104898u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10489c: 0x2c8300ff  sltiu       $v1, $a0, 0xFF
    ctx->pc = 0x10489cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x1048a0: 0x50600020  beql        $v1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1048A0u;
    {
        const bool branch_taken_0x1048a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1048a0) {
            ctx->pc = 0x1048A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1048A0u;
            // 0x1048a4: 0x92620091  lbu         $v0, 0x91($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104924u;
            goto label_104924;
        }
    }
    ctx->pc = 0x1048A8u;
    // 0x1048a8: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x1048a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1048ac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1048ACu;
    {
        const bool branch_taken_0x1048ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1048B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1048ACu;
        // 0x1048b0: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1048ac) {
            ctx->pc = 0x1048C4u;
            goto label_1048c4;
        }
    }
    ctx->pc = 0x1048B4u;
    // 0x1048b4: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x1048b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1048b8: 0x90a202b4  lbu         $v0, 0x2B4($a1)
    ctx->pc = 0x1048b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x1048bc: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1048bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1048c0: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x1048c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_1048c4:
    // 0x1048c4: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x1048c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1048c8: 0x400013  mtlo        $v0
    ctx->pc = 0x1048c8u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x1048cc: 0x70961800  madd        $v1, $a0, $s6
    ctx->pc = 0x1048ccu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1048d0: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1048d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1048d4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1048d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1048d8: 0x0  nop
    ctx->pc = 0x1048d8u;
    // NOP
    // 0x1048dc: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x1048DCu;
    {
        const bool branch_taken_0x1048dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1048dc) {
            ctx->pc = 0x1048E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1048DCu;
            // 0x1048e0: 0x92620091  lbu         $v0, 0x91($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104924u;
            goto label_104924;
        }
    }
    ctx->pc = 0x1048E4u;
    // 0x1048e4: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x1048e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1048e8: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x1048e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1048ec: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1048ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1048f0: 0x0  nop
    ctx->pc = 0x1048f0u;
    // NOP
    // 0x1048f4: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x1048F4u;
    {
        const bool branch_taken_0x1048f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1048f4) {
            ctx->pc = 0x1048F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1048F4u;
            // 0x1048f8: 0x92620091  lbu         $v0, 0x91($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104924u;
            goto label_104924;
        }
    }
    ctx->pc = 0x1048FCu;
    // 0x1048fc: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1048FCu;
    SET_GPR_U32(ctx, 31, 0x104904u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1048FCu, 0x104904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104904u;
label_104904:
    // 0x104904: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x104904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104908: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x104908u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x10490c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x10490Cu;
    SET_GPR_U32(ctx, 31, 0x104914u);
    ctx->pc = 0x104910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10490Cu;
    // 0x104910: 0xe6610040  swc1        $f1, 0x40($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x10490Cu, 0x104914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104914u;
label_104914:
    // 0x104914: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x104914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104918: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x104918u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x10491c: 0xe6610048  swc1        $f1, 0x48($s3)
    ctx->pc = 0x10491cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
    // 0x104920: 0x92620091  lbu         $v0, 0x91($s3)
    ctx->pc = 0x104920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
label_104924:
    // 0x104924: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x104924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x104928: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x104928u;
    {
        const bool branch_taken_0x104928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104928u;
        // 0x10492c: 0x26630040  addiu       $v1, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104928) {
            ctx->pc = 0x104954u;
            goto label_104954;
        }
    }
    ctx->pc = 0x104930u;
    // 0x104930: 0x26620080  addiu       $v0, $s3, 0x80
    ctx->pc = 0x104930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x104934: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x104934u;
    {
        const bool branch_taken_0x104934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x104934) {
            ctx->pc = 0x104938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104934u;
            // 0x104938: 0x8fa3010c  lw          $v1, 0x10C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104958u;
            goto label_104958;
        }
    }
    ctx->pc = 0x10493Cu;
    // 0x10493c: 0xc6600080  lwc1        $f0, 0x80($s3)
    ctx->pc = 0x10493cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104940: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x104940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    // 0x104944: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x104944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104948: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x104948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x10494c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x10494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104950: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x104950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_104954:
    // 0x104954: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x104954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_104958:
    // 0x104958: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x104958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10495c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x10495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x104960: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x104960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x104964: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x104964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x104968: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x104968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
    // 0x10496c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x10496cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x104970: 0x1440feb1  bnez        $v0, . + 4 + (-0x14F << 2)
    ctx->pc = 0x104970u;
    {
        const bool branch_taken_0x104970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104970u;
        // 0x104974: 0xafa40110  sw          $a0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104970) {
            ctx->pc = 0x104438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104438;
        }
    }
    ctx->pc = 0x104978u;
label_104978:
    // 0x104978: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x104978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_10497c:
    // 0x10497c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x10497cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x104980: 0x14400150  bnez        $v0, . + 4 + (0x150 << 2)
    ctx->pc = 0x104980u;
    {
        const bool branch_taken_0x104980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104980u;
        // 0x104984: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104980) {
            ctx->pc = 0x104EC4u;
            goto label_104ec4;
        }
    }
    ctx->pc = 0x104988u;
    // 0x104988: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x104988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x10498c: 0x5040014e  beql        $v0, $zero, . + 4 + (0x14E << 2)
    ctx->pc = 0x10498Cu;
    {
        const bool branch_taken_0x10498c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10498c) {
            ctx->pc = 0x104990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10498Cu;
            // 0x104990: 0x8e82005c  lw          $v0, 0x5C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104EC8u;
            goto label_104ec8;
        }
    }
    ctx->pc = 0x104994u;
    // 0x104994: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x104994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x104998: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x104998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x10499c: 0x10800149  beqz        $a0, . + 4 + (0x149 << 2)
    ctx->pc = 0x10499Cu;
    {
        const bool branch_taken_0x10499c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1049A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10499Cu;
        // 0x1049a0: 0xafa50110  sw          $a1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10499c) {
            ctx->pc = 0x104EC4u;
            goto label_104ec4;
        }
    }
    ctx->pc = 0x1049A4u;
    // 0x1049a4: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1049a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1049a8: 0x4480d000  mtc1        $zero, $f26
    ctx->pc = 0x1049a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x1049ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1049acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1049b0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1049b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1049b4: 0x27be00d0  addiu       $fp, $sp, 0xD0
    ctx->pc = 0x1049b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1049b8: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x1049b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x1049bc: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x1049bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1049c0: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x1049c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1049c4: 0x0  nop
    ctx->pc = 0x1049c4u;
    // NOP
label_1049c8:
    // 0x1049c8: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x1049c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1049cc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1049CCu;
    {
        const bool branch_taken_0x1049cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1049D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049CCu;
        // 0x1049d0: 0x8fa50110  lw          $a1, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1049cc) {
            ctx->pc = 0x1049ECu;
            goto label_1049ec;
        }
    }
    ctx->pc = 0x1049D4u;
    // 0x1049d4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1049d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1049d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1049d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1049dc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1049dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1049e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1049e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1049e4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1049E4u;
    {
        const bool branch_taken_0x1049e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1049E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049E4u;
        // 0x1049e8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1049e4) {
            ctx->pc = 0x104A40u;
            goto label_104a40;
        }
    }
    ctx->pc = 0x1049ECu;
label_1049ec:
    // 0x1049ec: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1049ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1049f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1049f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1049f4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1049f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1049f8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1049f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1049fc: 0x904302b4  lbu         $v1, 0x2B4($v0)
    ctx->pc = 0x1049fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x104a00: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x104a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x104a04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104A04u;
    {
        const bool branch_taken_0x104a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A04u;
        // 0x104a08: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a04) {
            ctx->pc = 0x104A14u;
            goto label_104a14;
        }
    }
    ctx->pc = 0x104A0Cu;
    // 0x104a0c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x104a0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x104a10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x104a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104a14:
    // 0x104a14: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x104a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x104a18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x104A18u;
    {
        const bool branch_taken_0x104a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A18u;
        // 0x104a1c: 0x8fa50100  lw          $a1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a18) {
            ctx->pc = 0x104A34u;
            goto label_104a34;
        }
    }
    ctx->pc = 0x104A20u;
    // 0x104a20: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x104a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x104a24: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x104a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x104a28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104a2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104A2Cu;
    {
        const bool branch_taken_0x104a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A2Cu;
        // 0x104a30: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a2c) {
            ctx->pc = 0x104A38u;
            goto label_104a38;
        }
    }
    ctx->pc = 0x104A34u;
label_104a34:
    // 0x104a34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x104a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104a38:
    // 0x104a38: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x104a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x104a3c: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x104a3cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_104a40:
    // 0x104a40: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x104a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x104a44: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x104a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x104a48: 0x400013  mtlo        $v0
    ctx->pc = 0x104a48u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x104a4c: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x104a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x104a50: 0x70c29800  madd        $s3, $a2, $v0
    ctx->pc = 0x104a50u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x104a54: 0x92620091  lbu         $v0, 0x91($s3)
    ctx->pc = 0x104a54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
    // 0x104a58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x104a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x104a5c: 0x1440010f  bnez        $v0, . + 4 + (0x10F << 2)
    ctx->pc = 0x104A5Cu;
    {
        const bool branch_taken_0x104a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A5Cu;
        // 0x104a60: 0x8fa4010c  lw          $a0, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a5c) {
            ctx->pc = 0x104E9Cu;
            goto label_104e9c;
        }
    }
    ctx->pc = 0x104A64u;
    // 0x104a64: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x104a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x104a68: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x104a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x104a6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104a70: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x104a70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104a74: 0x2c8300ff  sltiu       $v1, $a0, 0xFF
    ctx->pc = 0x104a74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x104a78: 0x50600060  beql        $v1, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x104A78u;
    {
        const bool branch_taken_0x104a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x104a78) {
            ctx->pc = 0x104A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104A78u;
            // 0x104a7c: 0x8fa20108  lw          $v0, 0x108($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104BFCu;
            goto label_104bfc;
        }
    }
    ctx->pc = 0x104A80u;
    // 0x104a80: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x104a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x104a84: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x104A84u;
    {
        const bool branch_taken_0x104a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x104A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A84u;
        // 0x104a88: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a84) {
            ctx->pc = 0x104AC0u;
            goto label_104ac0;
        }
    }
    ctx->pc = 0x104A8Cu;
    // 0x104a8c: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x104a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x104a90: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x104a90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x104a94: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x104a94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x104a98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104A9Cu;
    {
        const bool branch_taken_0x104a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A9Cu;
        // 0x104aa0: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a9c) {
            ctx->pc = 0x104AACu;
            goto label_104aac;
        }
    }
    ctx->pc = 0x104AA4u;
    // 0x104aa4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x104aa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x104aa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x104aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104aac:
    // 0x104aac: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x104aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x104ab0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x104AB0u;
    {
        const bool branch_taken_0x104ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AB0u;
        // 0x104ab4: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ab0) {
            ctx->pc = 0x104ACCu;
            goto label_104acc;
        }
    }
    ctx->pc = 0x104AB8u;
    // 0x104ab8: 0x8c430278  lw          $v1, 0x278($v0)
    ctx->pc = 0x104ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
    // 0x104abc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x104abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_104ac0:
    // 0x104ac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104ac4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104AC4u;
    {
        const bool branch_taken_0x104ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AC4u;
        // 0x104ac8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ac4) {
            ctx->pc = 0x104AD0u;
            goto label_104ad0;
        }
    }
    ctx->pc = 0x104ACCu;
label_104acc:
    // 0x104acc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x104accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104ad0:
    // 0x104ad0: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x104ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x104ad4: 0x600013  mtlo        $v1
    ctx->pc = 0x104ad4u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x104ad8: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x104ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x104adc: 0x70839000  madd        $s2, $a0, $v1
    ctx->pc = 0x104adcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x104ae0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x104ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x104ae4: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x104ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x104ae8: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x104ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x104aec: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x104AECu;
    {
        const bool branch_taken_0x104aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x104aec) {
            ctx->pc = 0x104AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104AECu;
            // 0x104af0: 0x8c4200f0  lw          $v0, 0xF0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104B10u;
            goto label_104b10;
        }
    }
    ctx->pc = 0x104AF4u;
    // 0x104af4: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x104af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104af8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x104af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x104afc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x104afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104b00: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x104b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x104b04: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x104b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104b08: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x104b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x104b0c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x104b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_104b10:
    // 0x104b10: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x104b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x104b14: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x104b14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104b18: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x104b18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104b1c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x104b1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104b20: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x104b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104b24: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x104b24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x104b28: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x104b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104b2c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x104b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104b30: 0x27b500d0  addiu       $s5, $sp, 0xD0
    ctx->pc = 0x104b30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x104b34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x104b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x104b38: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x104b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x104b3c: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x104b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x104b40: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x104b40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104b44: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x104b44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x104b48: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x104b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x104b4c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x104B4Cu;
    {
        const bool branch_taken_0x104b4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x104B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B4Cu;
        // 0x104b50: 0xe7a30098  swc1        $f3, 0x98($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b4c) {
            ctx->pc = 0x104B98u;
            goto label_104b98;
        }
    }
    ctx->pc = 0x104B54u;
    // 0x104b54: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x104b54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104b58: 0x0  nop
    ctx->pc = 0x104b58u;
    // NOP
    // 0x104b5c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x104B5Cu;
    {
        const bool branch_taken_0x104b5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x104b5c) {
            ctx->pc = 0x104B98u;
            goto label_104b98;
        }
    }
    ctx->pc = 0x104B64u;
    // 0x104b64: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x104b64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104b68: 0x0  nop
    ctx->pc = 0x104b68u;
    // NOP
    // 0x104b6c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x104B6Cu;
    {
        const bool branch_taken_0x104b6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x104B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B6Cu;
        // 0x104b70: 0x26620010  addiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b6c) {
            ctx->pc = 0x104B98u;
            goto label_104b98;
        }
    }
    ctx->pc = 0x104B74u;
    // 0x104b74: 0x12020043  beq         $s0, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x104B74u;
    {
        const bool branch_taken_0x104b74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x104B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B74u;
        // 0x104b78: 0x27b70090  addiu       $s7, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b74) {
            ctx->pc = 0x104C84u;
            goto label_104c84;
        }
    }
    ctx->pc = 0x104B7Cu;
    // 0x104b7c: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x104b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104b80: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x104b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x104b84: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x104b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104b88: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x104b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x104b8c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x104b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104b90: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x104B90u;
    {
        const bool branch_taken_0x104b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B90u;
        // 0x104b94: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b90) {
            ctx->pc = 0x104C84u;
            goto label_104c84;
        }
    }
    ctx->pc = 0x104B98u;
label_104b98:
    // 0x104b98: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x104b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x104b9c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x104B9Cu;
    SET_GPR_U32(ctx, 31, 0x104BA4u);
    ctx->pc = 0x104BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104B9Cu;
    // 0x104ba0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x104B9Cu, 0x104BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BA4u;
label_104ba4:
    // 0x104ba4: 0x4600d034  c.lt.s      $f26, $f0
    ctx->pc = 0x104ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104ba8: 0x0  nop
    ctx->pc = 0x104ba8u;
    // NOP
    // 0x104bac: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x104BACu;
    {
        const bool branch_taken_0x104bac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x104BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BACu;
        // 0x104bb0: 0xc7a30090  lwc1        $f3, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bac) {
            ctx->pc = 0x104BE8u;
            goto label_104be8;
        }
    }
    ctx->pc = 0x104BB4u;
    // 0x104bb4: 0x0  nop
    ctx->pc = 0x104bb4u;
    // NOP
    // 0x104bb8: 0x0  nop
    ctx->pc = 0x104bb8u;
    // NOP
    // 0x104bbc: 0x4600c883  div.s       $f2, $f25, $f0
    ctx->pc = 0x104bbcu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[25], ctx->f[0]);
    // 0x104bc0: 0xc7a40094  lwc1        $f4, 0x94($sp)
    ctx->pc = 0x104bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x104bc4: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x104bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104bc8: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x104bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104bcc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x104bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x104bd0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x104bd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x104bd4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x104bd4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x104bd8: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x104bd8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x104bdc: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x104bdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x104be0: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x104be0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x104be4: 0xe7a400d4  swc1        $f4, 0xD4($sp)
    ctx->pc = 0x104be4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_104be8:
    // 0x104be8: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x104be8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x104bec: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x104becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104bf0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x104bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104bf4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x104BF4u;
    {
        const bool branch_taken_0x104bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BF4u;
        // 0x104bf8: 0x27b70090  addiu       $s7, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bf4) {
            ctx->pc = 0x104C70u;
            goto label_104c70;
        }
    }
    ctx->pc = 0x104BFCu;
label_104bfc:
    // 0x104bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c00: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x104c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x104c04: 0xc07e0d4  jal         func_1F8350
    ctx->pc = 0x104C04u;
    SET_GPR_U32(ctx, 31, 0x104C0Cu);
    ctx->pc = 0x104C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C04u;
    // 0x104c08: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8350u, 0x104C04u, 0x104C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C0Cu;
label_104c0c:
    // 0x104c0c: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x104c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x104c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c14: 0xc04078a  jal         func_101E28
    ctx->pc = 0x104C14u;
    SET_GPR_U32(ctx, 31, 0x104C1Cu);
    ctx->pc = 0x104C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C14u;
    // 0x104c18: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x104C14u, 0x104C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C1Cu;
label_104c1c:
    // 0x104c1c: 0x4600d034  c.lt.s      $f26, $f0
    ctx->pc = 0x104c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104c20: 0x0  nop
    ctx->pc = 0x104c20u;
    // NOP
    // 0x104c24: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x104C24u;
    {
        const bool branch_taken_0x104c24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x104C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C24u;
        // 0x104c28: 0xc7a30090  lwc1        $f3, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c24) {
            ctx->pc = 0x104C60u;
            goto label_104c60;
        }
    }
    ctx->pc = 0x104C2Cu;
    // 0x104c2c: 0x0  nop
    ctx->pc = 0x104c2cu;
    // NOP
    // 0x104c30: 0x0  nop
    ctx->pc = 0x104c30u;
    // NOP
    // 0x104c34: 0x4600c883  div.s       $f2, $f25, $f0
    ctx->pc = 0x104c34u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[25], ctx->f[0]);
    // 0x104c38: 0xc7a40094  lwc1        $f4, 0x94($sp)
    ctx->pc = 0x104c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x104c3c: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x104c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104c40: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x104c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104c44: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x104c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x104c48: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x104c48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x104c4c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x104c4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x104c50: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x104c50u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x104c54: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x104c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x104c58: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x104c58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x104c5c: 0xe7a400d4  swc1        $f4, 0xD4($sp)
    ctx->pc = 0x104c5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_104c60:
    // 0x104c60: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x104c60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x104c64: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x104c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104c68: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x104c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104c6c: 0x27b500d0  addiu       $s5, $sp, 0xD0
    ctx->pc = 0x104c6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_104c70:
    // 0x104c70: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x104c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104c74: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x104c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x104c78: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x104c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x104c7c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x104c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x104c80: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x104c80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_104c84:
    // 0x104c84: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x104c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x104c88: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x104c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x104c8c: 0x26630040  addiu       $v1, $s3, 0x40
    ctx->pc = 0x104c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x104c90: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x104c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x104c94: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x104c94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104c98: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x104c98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104c9c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x104c9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104ca0: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x104ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104ca4: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x104ca4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x104ca8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x104ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104cac: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x104cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x104cb0: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x104cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104cb4: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x104cb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x104cb8: 0xc7a500c8  lwc1        $f5, 0xC8($sp)
    ctx->pc = 0x104cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x104cbc: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x104cbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x104cc0: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x104cc0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x104cc4: 0x460528c2  mul.s       $f3, $f5, $f5
    ctx->pc = 0x104cc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x104cc8: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x104cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x104ccc: 0xe7a500a8  swc1        $f5, 0xA8($sp)
    ctx->pc = 0x104cccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x104cd0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x104cd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x104cd4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x104cd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x104cd8: 0x0  nop
    ctx->pc = 0x104cd8u;
    // NOP
    // 0x104cdc: 0x0  nop
    ctx->pc = 0x104cdcu;
    // NOP
    // 0x104ce0: 0x46000544  c1          0x544
    ctx->pc = 0x104ce0u;
    ctx->f[21] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x104ce4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x104ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104ce8: 0x0  nop
    ctx->pc = 0x104ce8u;
    // NOP
    // 0x104cec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x104cecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104cf0: 0x0  nop
    ctx->pc = 0x104cf0u;
    // NOP
    // 0x104cf4: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x104CF4u;
    {
        const bool branch_taken_0x104cf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x104CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104CF4u;
        // 0x104cf8: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104cf4) {
            ctx->pc = 0x104D44u;
            goto label_104d44;
        }
    }
    ctx->pc = 0x104CFCu;
    // 0x104cfc: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x104cfcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104d00: 0x0  nop
    ctx->pc = 0x104d00u;
    // NOP
    // 0x104d04: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x104D04u;
    {
        const bool branch_taken_0x104d04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x104d04) {
            ctx->pc = 0x104D44u;
            goto label_104d44;
        }
    }
    ctx->pc = 0x104D0Cu;
    // 0x104d0c: 0x46002832  c.eq.s      $f5, $f0
    ctx->pc = 0x104d0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104d10: 0x0  nop
    ctx->pc = 0x104d10u;
    // NOP
    // 0x104d14: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x104D14u;
    {
        const bool branch_taken_0x104d14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x104D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D14u;
        // 0x104d18: 0x8fa40118  lw          $a0, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d14) {
            ctx->pc = 0x104D44u;
            goto label_104d44;
        }
    }
    ctx->pc = 0x104D1Cu;
    // 0x104d1c: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x104d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x104d20: 0x10820025  beq         $a0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x104D20u;
    {
        const bool branch_taken_0x104d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x104D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D20u;
        // 0x104d24: 0x27b200a0  addiu       $s2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d20) {
            ctx->pc = 0x104DB8u;
            goto label_104db8;
        }
    }
    ctx->pc = 0x104D28u;
    // 0x104d28: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x104d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104d2c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x104d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x104d30: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x104d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104d34: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x104d34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x104d38: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x104d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104d3c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x104D3Cu;
    {
        const bool branch_taken_0x104d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D3Cu;
        // 0x104d40: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d3c) {
            ctx->pc = 0x104DB8u;
            goto label_104db8;
        }
    }
    ctx->pc = 0x104D44u;
label_104d44:
    // 0x104d44: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x104d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x104d48: 0xc04078a  jal         func_101E28
    ctx->pc = 0x104D48u;
    SET_GPR_U32(ctx, 31, 0x104D50u);
    ctx->pc = 0x104D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104D48u;
    // 0x104d4c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x104D48u, 0x104D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D50u;
label_104d50:
    // 0x104d50: 0x4600d034  c.lt.s      $f26, $f0
    ctx->pc = 0x104d50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104d54: 0x0  nop
    ctx->pc = 0x104d54u;
    // NOP
    // 0x104d58: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x104D58u;
    {
        const bool branch_taken_0x104d58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x104D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D58u;
        // 0x104d5c: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d58) {
            ctx->pc = 0x104D94u;
            goto label_104d94;
        }
    }
    ctx->pc = 0x104D60u;
    // 0x104d60: 0x0  nop
    ctx->pc = 0x104d60u;
    // NOP
    // 0x104d64: 0x0  nop
    ctx->pc = 0x104d64u;
    // NOP
    // 0x104d68: 0x4600c883  div.s       $f2, $f25, $f0
    ctx->pc = 0x104d68u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[25], ctx->f[0]);
    // 0x104d6c: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x104d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x104d70: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x104d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104d74: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x104d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104d78: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x104d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x104d7c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x104d7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x104d80: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x104d80u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x104d84: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x104d84u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x104d88: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x104d88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x104d8c: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x104d8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x104d90: 0xe7a400d4  swc1        $f4, 0xD4($sp)
    ctx->pc = 0x104d90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_104d94:
    // 0x104d94: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x104d94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x104d98: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x104d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104d9c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x104d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104da0: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x104da0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x104da4: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x104da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104da8: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x104da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x104dac: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x104dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x104db0: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x104db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x104db4: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x104db4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_104db8:
    // 0x104db8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x104db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104dbc: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x104DBCu;
    SET_GPR_U32(ctx, 31, 0x104DC4u);
    ctx->pc = 0x104DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104DBCu;
    // 0x104dc0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x104DBCu, 0x104DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104DC4u;
label_104dc4:
    // 0x104dc4: 0xc07e050  jal         func_1F8140
    ctx->pc = 0x104DC4u;
    SET_GPR_U32(ctx, 31, 0x104DCCu);
    ctx->pc = 0x104DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104DC4u;
    // 0x104dc8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8140u, 0x104DC4u, 0x104DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104DCCu;
label_104dcc:
    // 0x104dcc: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x104dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x104dd0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x104dd0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x104dd4: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x104dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x104dd8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x104dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x104ddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104de0: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x104de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x104de4: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x104de4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104de8: 0x0  nop
    ctx->pc = 0x104de8u;
    // NOP
    // 0x104dec: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x104DECu;
    {
        const bool branch_taken_0x104dec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x104DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DECu;
        // 0x104df0: 0x8fa4010c  lw          $a0, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104dec) {
            ctx->pc = 0x104E9Cu;
            goto label_104e9c;
        }
    }
    ctx->pc = 0x104DF4u;
    // 0x104df4: 0x3c014048  lui         $at, 0x4048
    ctx->pc = 0x104df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16456 << 16));
    // 0x104df8: 0x34216c04  ori         $at, $at, 0x6C04
    ctx->pc = 0x104df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27652);
    // 0x104dfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x104dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104e00: 0x0  nop
    ctx->pc = 0x104e00u;
    // NOP
    // 0x104e04: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x104e04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104e08: 0x0  nop
    ctx->pc = 0x104e08u;
    // NOP
    // 0x104e0c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x104E0Cu;
    {
        const bool branch_taken_0x104e0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x104E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E0Cu;
        // 0x104e10: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e0c) {
            ctx->pc = 0x104E9Cu;
            goto label_104e9c;
        }
    }
    ctx->pc = 0x104E14u;
    // 0x104e14: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x104e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x104e18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x104e18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x104e1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x104e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x104e20: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x104e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x104e24: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x104e24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x104e28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x104e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104e2c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x104e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e30: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x104e30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x104e34: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x104e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e38: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x104e38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x104e3c: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x104E3Cu;
    SET_GPR_U32(ctx, 31, 0x104E44u);
    ctx->pc = 0x104E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104E3Cu;
    // 0x104e40: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x104E3Cu, 0x104E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E44u;
label_104e44:
    // 0x104e44: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x104e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x104e48: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x104e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x104e4c: 0x2446d880  addiu       $a2, $v0, -0x2780
    ctx->pc = 0x104e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x104e50: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x104e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e54: 0xc056bcc  jal         func_15AF30
    ctx->pc = 0x104E54u;
    SET_GPR_U32(ctx, 31, 0x104E5Cu);
    ctx->pc = 0x104E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104E54u;
    // 0x104e58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AF30u, 0x104E54u, 0x104E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E5Cu;
label_104e5c:
    // 0x104e5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e60: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x104e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e64: 0xc07e0d4  jal         func_1F8350
    ctx->pc = 0x104E64u;
    SET_GPR_U32(ctx, 31, 0x104E6Cu);
    ctx->pc = 0x104E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104E64u;
    // 0x104e68: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8350u, 0x104E64u, 0x104E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E6Cu;
label_104e6c:
    // 0x104e6c: 0xda640040  lqc2        $vf4, 0x40($s3)
    ctx->pc = 0x104e6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x104e70: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x104e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x104e74: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x104e74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x104e78: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x104e78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104e7c: 0xfa640040  sqc2        $vf4, 0x40($s3)
    ctx->pc = 0x104e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104e80: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x104e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x104e84: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x104e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x104e88: 0xda640040  lqc2        $vf4, 0x40($s3)
    ctx->pc = 0x104e88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x104e8c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x104e8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104e90: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x104e90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104e94: 0xfa640040  sqc2        $vf4, 0x40($s3)
    ctx->pc = 0x104e94u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104e98: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x104e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_104e9c:
    // 0x104e9c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x104e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x104ea0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x104ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x104ea4: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x104ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x104ea8: 0xafa4010c  sw          $a0, 0x10C($sp)
    ctx->pc = 0x104ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 4));
    // 0x104eac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x104eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x104eb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x104eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104eb4: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x104eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x104eb8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x104eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x104ebc: 0x1440fec2  bnez        $v0, . + 4 + (-0x13E << 2)
    ctx->pc = 0x104EBCu;
    {
        const bool branch_taken_0x104ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EBCu;
        // 0x104ec0: 0xafa50110  sw          $a1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ebc) {
            ctx->pc = 0x1049C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1049c8;
        }
    }
    ctx->pc = 0x104EC4u;
label_104ec4:
    // 0x104ec4: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x104ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_104ec8:
    // 0x104ec8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x104ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x104ecc: 0x544002f1  bnel        $v0, $zero, . + 4 + (0x2F1 << 2)
    ctx->pc = 0x104ECCu;
    {
        const bool branch_taken_0x104ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104ecc) {
            ctx->pc = 0x104ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104ECCu;
            // 0x104ed0: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105A94u;
            goto label_105a94;
        }
    }
    ctx->pc = 0x104ED4u;
    // 0x104ed4: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x104ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x104ed8: 0x104002ed  beqz        $v0, . + 4 + (0x2ED << 2)
    ctx->pc = 0x104ED8u;
    {
        const bool branch_taken_0x104ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104ED8u;
        // 0x104edc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ed8) {
            ctx->pc = 0x105A90u;
            goto label_105a90;
        }
    }
    ctx->pc = 0x104EE0u;
    // 0x104ee0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x104ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x104ee4: 0x0  nop
    ctx->pc = 0x104ee4u;
    // NOP
label_104ee8:
    // 0x104ee8: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x104ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
    // 0x104eec: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x104eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x104ef0: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x104ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x104ef4: 0x108002e1  beqz        $a0, . + 4 + (0x2E1 << 2)
    ctx->pc = 0x104EF4u;
    {
        const bool branch_taken_0x104ef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EF4u;
        // 0x104ef8: 0xafa50110  sw          $a1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ef4) {
            ctx->pc = 0x105A7Cu;
            goto label_105a7c;
        }
    }
    ctx->pc = 0x104EFCu;
    // 0x104efc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x104efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x104f00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x104f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x104f04: 0x241700a0  addiu       $s7, $zero, 0xA0
    ctx->pc = 0x104f04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x104f08: 0x27be0070  addiu       $fp, $sp, 0x70
    ctx->pc = 0x104f08u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x104f0c: 0x0  nop
    ctx->pc = 0x104f0cu;
    // NOP
label_104f10:
    // 0x104f10: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x104f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x104f14: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x104F14u;
    {
        const bool branch_taken_0x104f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F14u;
        // 0x104f18: 0x8fa30110  lw          $v1, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f14) {
            ctx->pc = 0x104F38u;
            goto label_104f38;
        }
    }
    ctx->pc = 0x104F1Cu;
    // 0x104f1c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x104f1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104f20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x104f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x104f24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x104f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x104f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x104f2c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x104f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104f30: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x104F30u;
    {
        const bool branch_taken_0x104f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F30u;
        // 0x104f34: 0xafa30108  sw          $v1, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f30) {
            ctx->pc = 0x104F90u;
            goto label_104f90;
        }
    }
    ctx->pc = 0x104F38u;
label_104f38:
    // 0x104f38: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x104f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x104f3c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x104f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x104f40: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x104f40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104f44: 0x904302b4  lbu         $v1, 0x2B4($v0)
    ctx->pc = 0x104f44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x104f48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f4c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x104f4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x104f50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104F50u;
    {
        const bool branch_taken_0x104f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F50u;
        // 0x104f54: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f50) {
            ctx->pc = 0x104F60u;
            goto label_104f60;
        }
    }
    ctx->pc = 0x104F58u;
    // 0x104f58: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x104f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x104f5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x104f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104f60:
    // 0x104f60: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x104f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x104f64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x104F64u;
    {
        const bool branch_taken_0x104f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F64u;
        // 0x104f68: 0x8fa50100  lw          $a1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f64) {
            ctx->pc = 0x104F80u;
            goto label_104f80;
        }
    }
    ctx->pc = 0x104F6Cu;
    // 0x104f6c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x104f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x104f70: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x104f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x104f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104f78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104F78u;
    {
        const bool branch_taken_0x104f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F78u;
        // 0x104f7c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f78) {
            ctx->pc = 0x104F84u;
            goto label_104f84;
        }
    }
    ctx->pc = 0x104F80u;
label_104f80:
    // 0x104f80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x104f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104f84:
    // 0x104f84: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x104f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x104f88: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x104f88u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104f8c: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x104f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_104f90:
    // 0x104f90: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x104f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x104f94: 0x27b500d0  addiu       $s5, $sp, 0xD0
    ctx->pc = 0x104f94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x104f98: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x104f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x104f9c: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x104f9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x104fa0: 0x600013  mtlo        $v1
    ctx->pc = 0x104fa0u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x104fa4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x104fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x104fa8: 0x144001cd  bnez        $v0, . + 4 + (0x1CD << 2)
    ctx->pc = 0x104FA8u;
    {
        const bool branch_taken_0x104fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FA8u;
        // 0x104fac: 0x70d79800  madd        $s3, $a2, $s7 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 23); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 19, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fa8) {
            ctx->pc = 0x1056E0u;
            goto label_1056e0;
        }
    }
    ctx->pc = 0x104FB0u;
    // 0x104fb0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x104fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x104fb4: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x104FB4u;
    {
        const bool branch_taken_0x104fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FB4u;
        // 0x104fb8: 0x26710040  addiu       $s1, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fb4) {
            ctx->pc = 0x10512Cu;
            goto label_10512c;
        }
    }
    ctx->pc = 0x104FBCu;
    // 0x104fbc: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x104fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x104fc0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x104fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x104fc4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x104fc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104fc8: 0x2c8300ff  sltiu       $v1, $a0, 0xFF
    ctx->pc = 0x104fc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x104fcc: 0x50600058  beql        $v1, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x104FCCu;
    {
        const bool branch_taken_0x104fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x104fcc) {
            ctx->pc = 0x104FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104FCCu;
            // 0x104fd0: 0x8e820014  lw          $v0, 0x14($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105130u;
            goto label_105130;
        }
    }
    ctx->pc = 0x104FD4u;
    // 0x104fd4: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x104fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x104fd8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x104FD8u;
    {
        const bool branch_taken_0x104fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FD8u;
        // 0x104fdc: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fd8) {
            ctx->pc = 0x105008u;
            goto label_105008;
        }
    }
    ctx->pc = 0x104FE0u;
    // 0x104fe0: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x104fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x104fe4: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x104fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x104fe8: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x104fe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x104fec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ff0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104FF0u;
    {
        const bool branch_taken_0x104ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FF0u;
        // 0x104ff4: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ff0) {
            ctx->pc = 0x105000u;
            goto label_105000;
        }
    }
    ctx->pc = 0x104FF8u;
    // 0x104ff8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x104ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x104ffc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x104ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105000:
    // 0x105000: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x105000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x105004: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x105004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_105008:
    // 0x105008: 0x8fa60114  lw          $a2, 0x114($sp)
    ctx->pc = 0x105008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x10500c: 0x400013  mtlo        $v0
    ctx->pc = 0x10500cu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x105010: 0x70979000  madd        $s2, $a0, $s7
    ctx->pc = 0x105010u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x105014: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x105014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x105018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10501c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10501cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105020: 0xc041cd8  jal         func_107360
    ctx->pc = 0x105020u;
    SET_GPR_U32(ctx, 31, 0x105028u);
    ctx->pc = 0x105024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105020u;
    // 0x105024: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107360u, 0x105020u, 0x105028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105028u;
label_105028:
    // 0x105028: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x105028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x10502c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x10502cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x105030: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x105030u;
    {
        const bool branch_taken_0x105030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105030) {
            ctx->pc = 0x105034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105030u;
            // 0x105034: 0x92620091  lbu         $v0, 0x91($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1050CCu;
            goto label_1050cc;
        }
    }
    ctx->pc = 0x105038u;
    // 0x105038: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x105038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10503c: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x10503cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105040: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x105040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x105044: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x105044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x105048: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x105048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10504c: 0x0  nop
    ctx->pc = 0x10504cu;
    // NOP
    // 0x105050: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x105050u;
    {
        const bool branch_taken_0x105050 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x105050) {
            ctx->pc = 0x105054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105050u;
            // 0x105054: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1050B8u;
            goto label_1050b8;
        }
    }
    ctx->pc = 0x105058u;
    // 0x105058: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x105058u;
    {
        const bool branch_taken_0x105058 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105058u;
        // 0x10505c: 0xe6600044  swc1        $f0, 0x44($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105058) {
            ctx->pc = 0x1050B4u;
            goto label_1050b4;
        }
    }
    ctx->pc = 0x105060u;
    // 0x105060: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x105060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105064: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x105064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105068: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x105068u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10506c: 0x0  nop
    ctx->pc = 0x10506cu;
    // NOP
    // 0x105070: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x105070u;
    {
        const bool branch_taken_0x105070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x105070) {
            ctx->pc = 0x105074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105070u;
            // 0x105074: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1050B8u;
            goto label_1050b8;
        }
    }
    ctx->pc = 0x105078u;
    // 0x105078: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x105078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10507c: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x10507cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105080: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x105080u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105084: 0x0  nop
    ctx->pc = 0x105084u;
    // NOP
    // 0x105088: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x105088u;
    {
        const bool branch_taken_0x105088 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x105088) {
            ctx->pc = 0x10508Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105088u;
            // 0x10508c: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1050B8u;
            goto label_1050b8;
        }
    }
    ctx->pc = 0x105090u;
    // 0x105090: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x105090u;
    SET_GPR_U32(ctx, 31, 0x105098u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x105090u, 0x105098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105098u;
label_105098:
    // 0x105098: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x105098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10509c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x10509cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1050a0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1050A0u;
    SET_GPR_U32(ctx, 31, 0x1050A8u);
    ctx->pc = 0x1050A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1050A0u;
    // 0x1050a4: 0xe6610040  swc1        $f1, 0x40($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1050A0u, 0x1050A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050A8u;
label_1050a8:
    // 0x1050a8: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x1050a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1050ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1050acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1050b0: 0xe6610048  swc1        $f1, 0x48($s3)
    ctx->pc = 0x1050b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
label_1050b4:
    // 0x1050b4: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x1050b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1050b8:
    // 0x1050b8: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1050b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1050bc: 0x0  nop
    ctx->pc = 0x1050bcu;
    // NOP
    // 0x1050c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1050C0u;
    {
        const bool branch_taken_0x1050c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1050c0) {
            ctx->pc = 0x1050C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1050C0u;
            // 0x1050c4: 0xe6570044  swc1        $f23, 0x44($s2) (Delay Slot)
            { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1050C8u;
            goto label_1050c8;
        }
    }
    ctx->pc = 0x1050C8u;
label_1050c8:
    // 0x1050c8: 0x92620091  lbu         $v0, 0x91($s3)
    ctx->pc = 0x1050c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
label_1050cc:
    // 0x1050cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1050ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1050d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1050D0u;
    {
        const bool branch_taken_0x1050d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1050D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050D0u;
        // 0x1050d4: 0x26620080  addiu       $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1050d0) {
            ctx->pc = 0x1050F8u;
            goto label_1050f8;
        }
    }
    ctx->pc = 0x1050D8u;
    // 0x1050d8: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1050D8u;
    {
        const bool branch_taken_0x1050d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1050d8) {
            ctx->pc = 0x1050DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1050D8u;
            // 0x1050dc: 0x92420091  lbu         $v0, 0x91($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1050FCu;
            goto label_1050fc;
        }
    }
    ctx->pc = 0x1050E0u;
    // 0x1050e0: 0xc6600080  lwc1        $f0, 0x80($s3)
    ctx->pc = 0x1050e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1050e4: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x1050e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    // 0x1050e8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1050e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1050ec: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1050ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1050f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1050f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1050f4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1050f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1050f8:
    // 0x1050f8: 0x92420091  lbu         $v0, 0x91($s2)
    ctx->pc = 0x1050f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 145)));
label_1050fc:
    // 0x1050fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1050fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105100: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x105100u;
    {
        const bool branch_taken_0x105100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105100u;
        // 0x105104: 0x26430040  addiu       $v1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105100) {
            ctx->pc = 0x10512Cu;
            goto label_10512c;
        }
    }
    ctx->pc = 0x105108u;
    // 0x105108: 0x26420080  addiu       $v0, $s2, 0x80
    ctx->pc = 0x105108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x10510c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10510Cu;
    {
        const bool branch_taken_0x10510c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10510c) {
            ctx->pc = 0x105110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10510Cu;
            // 0x105110: 0x8e820014  lw          $v0, 0x14($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105130u;
            goto label_105130;
        }
    }
    ctx->pc = 0x105114u;
    // 0x105114: 0xc6400080  lwc1        $f0, 0x80($s2)
    ctx->pc = 0x105114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105118: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x105118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x10511c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x10511cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105120: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x105120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x105124: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x105124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105128: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x105128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_10512c:
    // 0x10512c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x10512cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_105130:
    // 0x105130: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x105130u;
    {
        const bool branch_taken_0x105130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105130u;
        // 0x105134: 0x8fa3010c  lw          $v1, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105130) {
            ctx->pc = 0x10529Cu;
            goto label_10529c;
        }
    }
    ctx->pc = 0x105138u;
    // 0x105138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10513c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x10513cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105140: 0x2c8300ff  sltiu       $v1, $a0, 0xFF
    ctx->pc = 0x105140u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x105144: 0x50600056  beql        $v1, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x105144u;
    {
        const bool branch_taken_0x105144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x105144) {
            ctx->pc = 0x105148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105144u;
            // 0x105148: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1052A0u;
            goto label_1052a0;
        }
    }
    ctx->pc = 0x10514Cu;
    // 0x10514c: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x10514cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x105150: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x105150u;
    {
        const bool branch_taken_0x105150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105150u;
        // 0x105154: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105150) {
            ctx->pc = 0x105180u;
            goto label_105180;
        }
    }
    ctx->pc = 0x105158u;
    // 0x105158: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x105158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10515c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x10515cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x105160: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x105160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x105164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105168: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105168u;
    {
        const bool branch_taken_0x105168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105168u;
        // 0x10516c: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105168) {
            ctx->pc = 0x105178u;
            goto label_105178;
        }
    }
    ctx->pc = 0x105170u;
    // 0x105170: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x105170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x105174: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105178:
    // 0x105178: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x105178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x10517c: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x10517cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_105180:
    // 0x105180: 0x8fa60114  lw          $a2, 0x114($sp)
    ctx->pc = 0x105180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x105184: 0x400013  mtlo        $v0
    ctx->pc = 0x105184u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x105188: 0x70979000  madd        $s2, $a0, $s7
    ctx->pc = 0x105188u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x10518c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10518cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105190: 0xc041cd8  jal         func_107360
    ctx->pc = 0x105190u;
    SET_GPR_U32(ctx, 31, 0x105198u);
    ctx->pc = 0x105194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105190u;
    // 0x105194: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107360u, 0x105190u, 0x105198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105198u;
label_105198:
    // 0x105198: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x105198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x10519c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x10519cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1051a0: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1051A0u;
    {
        const bool branch_taken_0x1051a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1051a0) {
            ctx->pc = 0x1051A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1051A0u;
            // 0x1051a4: 0x92620091  lbu         $v0, 0x91($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10523Cu;
            goto label_10523c;
        }
    }
    ctx->pc = 0x1051A8u;
    // 0x1051a8: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x1051a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1051ac: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x1051acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1051b0: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x1051b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x1051b4: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x1051b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x1051b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1051b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1051bc: 0x0  nop
    ctx->pc = 0x1051bcu;
    // NOP
    // 0x1051c0: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x1051C0u;
    {
        const bool branch_taken_0x1051c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1051c0) {
            ctx->pc = 0x1051C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1051C0u;
            // 0x1051c4: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105228u;
            goto label_105228;
        }
    }
    ctx->pc = 0x1051C8u;
    // 0x1051c8: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1051C8u;
    {
        const bool branch_taken_0x1051c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051C8u;
        // 0x1051cc: 0xe6600044  swc1        $f0, 0x44($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051c8) {
            ctx->pc = 0x105224u;
            goto label_105224;
        }
    }
    ctx->pc = 0x1051D0u;
    // 0x1051d0: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x1051d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1051d4: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x1051d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1051d8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1051d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1051dc: 0x0  nop
    ctx->pc = 0x1051dcu;
    // NOP
    // 0x1051e0: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x1051E0u;
    {
        const bool branch_taken_0x1051e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1051e0) {
            ctx->pc = 0x1051E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1051E0u;
            // 0x1051e4: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105228u;
            goto label_105228;
        }
    }
    ctx->pc = 0x1051E8u;
    // 0x1051e8: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x1051e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1051ec: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x1051ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1051f0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1051f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1051f4: 0x0  nop
    ctx->pc = 0x1051f4u;
    // NOP
    // 0x1051f8: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x1051F8u;
    {
        const bool branch_taken_0x1051f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1051f8) {
            ctx->pc = 0x1051FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1051F8u;
            // 0x1051fc: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105228u;
            goto label_105228;
        }
    }
    ctx->pc = 0x105200u;
    // 0x105200: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x105200u;
    SET_GPR_U32(ctx, 31, 0x105208u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x105200u, 0x105208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105208u;
label_105208:
    // 0x105208: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x105208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10520c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x10520cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x105210: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x105210u;
    SET_GPR_U32(ctx, 31, 0x105218u);
    ctx->pc = 0x105214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105210u;
    // 0x105214: 0xe6610040  swc1        $f1, 0x40($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x105210u, 0x105218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105218u;
label_105218:
    // 0x105218: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x105218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10521c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x10521cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x105220: 0xe6610048  swc1        $f1, 0x48($s3)
    ctx->pc = 0x105220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
label_105224:
    // 0x105224: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x105224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_105228:
    // 0x105228: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x105228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10522c: 0x0  nop
    ctx->pc = 0x10522cu;
    // NOP
    // 0x105230: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x105230u;
    {
        const bool branch_taken_0x105230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x105230) {
            ctx->pc = 0x105234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105230u;
            // 0x105234: 0xe6570044  swc1        $f23, 0x44($s2) (Delay Slot)
            { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105238u;
            goto label_105238;
        }
    }
    ctx->pc = 0x105238u;
label_105238:
    // 0x105238: 0x92620091  lbu         $v0, 0x91($s3)
    ctx->pc = 0x105238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
label_10523c:
    // 0x10523c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10523cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105240: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x105240u;
    {
        const bool branch_taken_0x105240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105240u;
        // 0x105244: 0x26620080  addiu       $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105240) {
            ctx->pc = 0x105268u;
            goto label_105268;
        }
    }
    ctx->pc = 0x105248u;
    // 0x105248: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x105248u;
    {
        const bool branch_taken_0x105248 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x105248) {
            ctx->pc = 0x10524Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105248u;
            // 0x10524c: 0x92420091  lbu         $v0, 0x91($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10526Cu;
            goto label_10526c;
        }
    }
    ctx->pc = 0x105250u;
    // 0x105250: 0xc6600080  lwc1        $f0, 0x80($s3)
    ctx->pc = 0x105250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105254: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x105254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    // 0x105258: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x105258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10525c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x10525cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x105260: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x105260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105264: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x105264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_105268:
    // 0x105268: 0x92420091  lbu         $v0, 0x91($s2)
    ctx->pc = 0x105268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 145)));
label_10526c:
    // 0x10526c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10526cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105270: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x105270u;
    {
        const bool branch_taken_0x105270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105270u;
        // 0x105274: 0x26430040  addiu       $v1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105270) {
            ctx->pc = 0x10529Cu;
            goto label_10529c;
        }
    }
    ctx->pc = 0x105278u;
    // 0x105278: 0x26420080  addiu       $v0, $s2, 0x80
    ctx->pc = 0x105278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x10527c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10527Cu;
    {
        const bool branch_taken_0x10527c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10527c) {
            ctx->pc = 0x105280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10527Cu;
            // 0x105280: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1052A0u;
            goto label_1052a0;
        }
    }
    ctx->pc = 0x105284u;
    // 0x105284: 0xc6400080  lwc1        $f0, 0x80($s2)
    ctx->pc = 0x105284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105288: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x105288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x10528c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x10528cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105290: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x105290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x105294: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x105294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105298: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x105298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_10529c:
    // 0x10529c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x10529cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1052a0:
    // 0x1052a0: 0x27b500d0  addiu       $s5, $sp, 0xD0
    ctx->pc = 0x1052a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1052a4: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x1052A4u;
    {
        const bool branch_taken_0x1052a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1052A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052A4u;
        // 0x1052a8: 0x27b60070  addiu       $s6, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052a4) {
            ctx->pc = 0x1054C4u;
            goto label_1054c4;
        }
    }
    ctx->pc = 0x1052ACu;
    // 0x1052ac: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x1052acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1052b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1052b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1052b4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1052b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1052b8: 0x2c8200ff  sltiu       $v0, $a0, 0xFF
    ctx->pc = 0x1052b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x1052bc: 0x50400082  beql        $v0, $zero, . + 4 + (0x82 << 2)
    ctx->pc = 0x1052BCu;
    {
        const bool branch_taken_0x1052bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1052bc) {
            ctx->pc = 0x1052C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1052BCu;
            // 0x1052c0: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1054C8u;
            goto label_1054c8;
        }
    }
    ctx->pc = 0x1052C4u;
    // 0x1052c4: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x1052c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1052c8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1052C8u;
    {
        const bool branch_taken_0x1052c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1052CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052C8u;
        // 0x1052cc: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052c8) {
            ctx->pc = 0x1052F8u;
            goto label_1052f8;
        }
    }
    ctx->pc = 0x1052D0u;
    // 0x1052d0: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x1052d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1052d4: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1052d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1052d8: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x1052d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x1052dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1052dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1052e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1052E0u;
    {
        const bool branch_taken_0x1052e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1052E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052E0u;
        // 0x1052e4: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052e0) {
            ctx->pc = 0x1052F0u;
            goto label_1052f0;
        }
    }
    ctx->pc = 0x1052E8u;
    // 0x1052e8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1052e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1052ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1052ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1052f0:
    // 0x1052f0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1052f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1052f4: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x1052f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_1052f8:
    // 0x1052f8: 0x8fa60114  lw          $a2, 0x114($sp)
    ctx->pc = 0x1052f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x1052fc: 0x400013  mtlo        $v0
    ctx->pc = 0x1052fcu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x105300: 0x70979000  madd        $s2, $a0, $s7
    ctx->pc = 0x105300u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x105304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105308: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x105308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x10530c: 0xc041cd8  jal         func_107360
    ctx->pc = 0x10530Cu;
    SET_GPR_U32(ctx, 31, 0x105314u);
    ctx->pc = 0x105310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10530Cu;
    // 0x105310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107360u, 0x10530Cu, 0x105314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105314u;
label_105314:
    // 0x105314: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x105314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x105318: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x105318u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10531c: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x10531cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x105320: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x105320u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x105324: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x105324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105328: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x105328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x10532c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x10532cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105330: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x105330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105334: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x105334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105338: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x105338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10533c: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x10533cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x105340: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x105340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105344: 0x46031942  mul.s       $f5, $f3, $f3
    ctx->pc = 0x105344u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x105348: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x105348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x10534c: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x10534cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x105350: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x105350u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x105354: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x105354u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x105358: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x105358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x10535c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x10535cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x105360: 0x0  nop
    ctx->pc = 0x105360u;
    // NOP
    // 0x105364: 0x0  nop
    ctx->pc = 0x105364u;
    // NOP
    // 0x105368: 0x46000544  c1          0x544
    ctx->pc = 0x105368u;
    ctx->f[21] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x10536c: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x10536cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105370: 0x4614a802  mul.s       $f0, $f21, $f20
    ctx->pc = 0x105370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x105374: 0xc682004c  lwc1        $f2, 0x4C($s4)
    ctx->pc = 0x105374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105378: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x105378u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x10537c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x10537cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x105380: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x105380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x105384: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x105384u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[21]);
    // 0x105388: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x105388u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10538c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x10538cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x105390: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x105390u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x105394: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x105394u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x105398: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x105398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10539c: 0xda640040  lqc2        $vf4, 0x40($s3)
    ctx->pc = 0x10539cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1053a0: 0xdbc50000  lqc2        $vf5, 0x0($fp)
    ctx->pc = 0x1053a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1053a4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1053a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1053a8: 0xfa640040  sqc2        $vf4, 0x40($s3)
    ctx->pc = 0x1053a8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1053ac: 0xda440040  lqc2        $vf4, 0x40($s2)
    ctx->pc = 0x1053acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1053b0: 0xdbc50000  lqc2        $vf5, 0x0($fp)
    ctx->pc = 0x1053b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1053b4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1053b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1053b8: 0xfa440040  sqc2        $vf4, 0x40($s2)
    ctx->pc = 0x1053b8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1053bc: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x1053bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x1053c0: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1053c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1053c4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1053c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1053c8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1053C8u;
    {
        const bool branch_taken_0x1053c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1053CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053C8u;
        // 0x1053cc: 0x27b60070  addiu       $s6, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053c8) {
            ctx->pc = 0x105460u;
            goto label_105460;
        }
    }
    ctx->pc = 0x1053D0u;
    // 0x1053d0: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x1053d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1053d4: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x1053d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1053d8: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x1053d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x1053dc: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x1053dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x1053e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1053e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1053e4: 0x0  nop
    ctx->pc = 0x1053e4u;
    // NOP
    // 0x1053e8: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x1053E8u;
    {
        const bool branch_taken_0x1053e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1053e8) {
            ctx->pc = 0x1053ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1053E8u;
            // 0x1053ec: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105450u;
            goto label_105450;
        }
    }
    ctx->pc = 0x1053F0u;
    // 0x1053f0: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1053F0u;
    {
        const bool branch_taken_0x1053f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1053F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053F0u;
        // 0x1053f4: 0xe6600044  swc1        $f0, 0x44($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053f0) {
            ctx->pc = 0x10544Cu;
            goto label_10544c;
        }
    }
    ctx->pc = 0x1053F8u;
    // 0x1053f8: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x1053f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1053fc: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x1053fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105400: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x105400u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105404: 0x0  nop
    ctx->pc = 0x105404u;
    // NOP
    // 0x105408: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x105408u;
    {
        const bool branch_taken_0x105408 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x105408) {
            ctx->pc = 0x10540Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105408u;
            // 0x10540c: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105450u;
            goto label_105450;
        }
    }
    ctx->pc = 0x105410u;
    // 0x105410: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x105410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105414: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x105414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105418: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x105418u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10541c: 0x0  nop
    ctx->pc = 0x10541cu;
    // NOP
    // 0x105420: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x105420u;
    {
        const bool branch_taken_0x105420 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x105420) {
            ctx->pc = 0x105424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105420u;
            // 0x105424: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105450u;
            goto label_105450;
        }
    }
    ctx->pc = 0x105428u;
    // 0x105428: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x105428u;
    SET_GPR_U32(ctx, 31, 0x105430u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x105428u, 0x105430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105430u;
label_105430:
    // 0x105430: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x105430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105434: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x105434u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x105438: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x105438u;
    SET_GPR_U32(ctx, 31, 0x105440u);
    ctx->pc = 0x10543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105438u;
    // 0x10543c: 0xe6610040  swc1        $f1, 0x40($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x105438u, 0x105440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105440u;
label_105440:
    // 0x105440: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x105440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105444: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x105444u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x105448: 0xe6610048  swc1        $f1, 0x48($s3)
    ctx->pc = 0x105448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
label_10544c:
    // 0x10544c: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x10544cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_105450:
    // 0x105450: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x105450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105454: 0x0  nop
    ctx->pc = 0x105454u;
    // NOP
    // 0x105458: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x105458u;
    {
        const bool branch_taken_0x105458 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x105458) {
            ctx->pc = 0x10545Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105458u;
            // 0x10545c: 0xe6570044  swc1        $f23, 0x44($s2) (Delay Slot)
            { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105460u;
            goto label_105460;
        }
    }
    ctx->pc = 0x105460u;
label_105460:
    // 0x105460: 0x92620091  lbu         $v0, 0x91($s3)
    ctx->pc = 0x105460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
    // 0x105464: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x105464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105468: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x105468u;
    {
        const bool branch_taken_0x105468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105468u;
        // 0x10546c: 0x26620080  addiu       $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105468) {
            ctx->pc = 0x105490u;
            goto label_105490;
        }
    }
    ctx->pc = 0x105470u;
    // 0x105470: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x105470u;
    {
        const bool branch_taken_0x105470 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x105470) {
            ctx->pc = 0x105474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105470u;
            // 0x105474: 0x92420091  lbu         $v0, 0x91($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105494u;
            goto label_105494;
        }
    }
    ctx->pc = 0x105478u;
    // 0x105478: 0xc6600080  lwc1        $f0, 0x80($s3)
    ctx->pc = 0x105478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10547c: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x10547cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    // 0x105480: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x105480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105484: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x105484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x105488: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x105488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10548c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x10548cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_105490:
    // 0x105490: 0x92420091  lbu         $v0, 0x91($s2)
    ctx->pc = 0x105490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 145)));
label_105494:
    // 0x105494: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x105494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105498: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x105498u;
    {
        const bool branch_taken_0x105498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105498u;
        // 0x10549c: 0x26430040  addiu       $v1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105498) {
            ctx->pc = 0x1054C4u;
            goto label_1054c4;
        }
    }
    ctx->pc = 0x1054A0u;
    // 0x1054a0: 0x26420080  addiu       $v0, $s2, 0x80
    ctx->pc = 0x1054a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x1054a4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1054A4u;
    {
        const bool branch_taken_0x1054a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1054a4) {
            ctx->pc = 0x1054A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1054A4u;
            // 0x1054a8: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1054C8u;
            goto label_1054c8;
        }
    }
    ctx->pc = 0x1054ACu;
    // 0x1054ac: 0xc6400080  lwc1        $f0, 0x80($s2)
    ctx->pc = 0x1054acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1054b0: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x1054b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x1054b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1054b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1054b8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1054b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1054bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1054bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1054c0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1054c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1054c4:
    // 0x1054c4: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1054c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1054c8:
    // 0x1054c8: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x1054C8u;
    {
        const bool branch_taken_0x1054c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054C8u;
        // 0x1054cc: 0x8fa3010c  lw          $v1, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054c8) {
            ctx->pc = 0x1056E0u;
            goto label_1056e0;
        }
    }
    ctx->pc = 0x1054D0u;
    // 0x1054d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1054d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1054d4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1054d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1054d8: 0x2c8300ff  sltiu       $v1, $a0, 0xFF
    ctx->pc = 0x1054d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x1054dc: 0x10600081  beqz        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x1054DCu;
    {
        const bool branch_taken_0x1054dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054DCu;
        // 0x1054e0: 0x8fa3010c  lw          $v1, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054dc) {
            ctx->pc = 0x1056E4u;
            goto label_1056e4;
        }
    }
    ctx->pc = 0x1054E4u;
    // 0x1054e4: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x1054e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1054e8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1054E8u;
    {
        const bool branch_taken_0x1054e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1054ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054E8u;
        // 0x1054ec: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054e8) {
            ctx->pc = 0x105518u;
            goto label_105518;
        }
    }
    ctx->pc = 0x1054F0u;
    // 0x1054f0: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x1054f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1054f4: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1054f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1054f8: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x1054f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x1054fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1054fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105500: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105500u;
    {
        const bool branch_taken_0x105500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105500u;
        // 0x105504: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105500) {
            ctx->pc = 0x105510u;
            goto label_105510;
        }
    }
    ctx->pc = 0x105508u;
    // 0x105508: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x105508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10550c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10550cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105510:
    // 0x105510: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x105510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x105514: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x105514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_105518:
    // 0x105518: 0x8fa60114  lw          $a2, 0x114($sp)
    ctx->pc = 0x105518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x10551c: 0x400013  mtlo        $v0
    ctx->pc = 0x10551cu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x105520: 0x70979000  madd        $s2, $a0, $s7
    ctx->pc = 0x105520u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x105524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105528: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x105528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x10552c: 0xc041cd8  jal         func_107360
    ctx->pc = 0x10552Cu;
    SET_GPR_U32(ctx, 31, 0x105534u);
    ctx->pc = 0x105530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10552Cu;
    // 0x105530: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107360u, 0x10552Cu, 0x105534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105534u;
label_105534:
    // 0x105534: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x105534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x105538: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x105538u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10553c: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x10553cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x105540: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x105540u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x105544: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x105544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105548: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x105548u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x10554c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x10554cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105550: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x105550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105554: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x105554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105558: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x105558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x10555c: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x10555cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105560: 0x46031942  mul.s       $f5, $f3, $f3
    ctx->pc = 0x105560u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x105564: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x105564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x105568: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x105568u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x10556c: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x10556cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x105570: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x105570u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x105574: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x105574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x105578: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x105578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x10557c: 0x0  nop
    ctx->pc = 0x10557cu;
    // NOP
    // 0x105580: 0x0  nop
    ctx->pc = 0x105580u;
    // NOP
    // 0x105584: 0x46000544  c1          0x544
    ctx->pc = 0x105584u;
    ctx->f[21] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x105588: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x105588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10558c: 0x4614a802  mul.s       $f0, $f21, $f20
    ctx->pc = 0x10558cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x105590: 0xc682004c  lwc1        $f2, 0x4C($s4)
    ctx->pc = 0x105590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105594: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x105594u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x105598: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x105598u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x10559c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x10559cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1055a0: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x1055a0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[21]);
    // 0x1055a4: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1055a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1055a8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1055a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1055ac: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1055acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1055b0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1055b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1055b4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1055b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1055b8: 0xda640040  lqc2        $vf4, 0x40($s3)
    ctx->pc = 0x1055b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1055bc: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x1055bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1055c0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1055c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1055c4: 0xfa640040  sqc2        $vf4, 0x40($s3)
    ctx->pc = 0x1055c4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1055c8: 0xda440040  lqc2        $vf4, 0x40($s2)
    ctx->pc = 0x1055c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1055cc: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x1055ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1055d0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1055d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1055d4: 0xfa440040  sqc2        $vf4, 0x40($s2)
    ctx->pc = 0x1055d4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1055d8: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x1055d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x1055dc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1055dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1055e0: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1055E0u;
    {
        const bool branch_taken_0x1055e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1055e0) {
            ctx->pc = 0x1055E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1055E0u;
            // 0x1055e4: 0x92620091  lbu         $v0, 0x91($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10567Cu;
            goto label_10567c;
        }
    }
    ctx->pc = 0x1055E8u;
    // 0x1055e8: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x1055e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1055ec: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x1055ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1055f0: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x1055f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x1055f4: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x1055f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x1055f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1055f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1055fc: 0x0  nop
    ctx->pc = 0x1055fcu;
    // NOP
    // 0x105600: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x105600u;
    {
        const bool branch_taken_0x105600 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x105600) {
            ctx->pc = 0x105604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105600u;
            // 0x105604: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105668u;
            goto label_105668;
        }
    }
    ctx->pc = 0x105608u;
    // 0x105608: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x105608u;
    {
        const bool branch_taken_0x105608 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105608u;
        // 0x10560c: 0xe6600044  swc1        $f0, 0x44($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105608) {
            ctx->pc = 0x105664u;
            goto label_105664;
        }
    }
    ctx->pc = 0x105610u;
    // 0x105610: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x105610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105614: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x105614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105618: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x105618u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10561c: 0x0  nop
    ctx->pc = 0x10561cu;
    // NOP
    // 0x105620: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x105620u;
    {
        const bool branch_taken_0x105620 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x105620) {
            ctx->pc = 0x105624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105620u;
            // 0x105624: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105668u;
            goto label_105668;
        }
    }
    ctx->pc = 0x105628u;
    // 0x105628: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x105628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10562c: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x10562cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105630: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x105630u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105634: 0x0  nop
    ctx->pc = 0x105634u;
    // NOP
    // 0x105638: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x105638u;
    {
        const bool branch_taken_0x105638 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x105638) {
            ctx->pc = 0x10563Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105638u;
            // 0x10563c: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105668u;
            goto label_105668;
        }
    }
    ctx->pc = 0x105640u;
    // 0x105640: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x105640u;
    SET_GPR_U32(ctx, 31, 0x105648u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x105640u, 0x105648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105648u;
label_105648:
    // 0x105648: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x105648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10564c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x10564cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x105650: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x105650u;
    SET_GPR_U32(ctx, 31, 0x105658u);
    ctx->pc = 0x105654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105650u;
    // 0x105654: 0xe6610040  swc1        $f1, 0x40($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x105650u, 0x105658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105658u;
label_105658:
    // 0x105658: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x105658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10565c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x10565cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x105660: 0xe6610048  swc1        $f1, 0x48($s3)
    ctx->pc = 0x105660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
label_105664:
    // 0x105664: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x105664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_105668:
    // 0x105668: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x105668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10566c: 0x0  nop
    ctx->pc = 0x10566cu;
    // NOP
    // 0x105670: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x105670u;
    {
        const bool branch_taken_0x105670 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x105670) {
            ctx->pc = 0x105674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105670u;
            // 0x105674: 0xe6570044  swc1        $f23, 0x44($s2) (Delay Slot)
            { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105678u;
            goto label_105678;
        }
    }
    ctx->pc = 0x105678u;
label_105678:
    // 0x105678: 0x92620091  lbu         $v0, 0x91($s3)
    ctx->pc = 0x105678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
label_10567c:
    // 0x10567c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10567cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105680: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x105680u;
    {
        const bool branch_taken_0x105680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105680u;
        // 0x105684: 0x26630040  addiu       $v1, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105680) {
            ctx->pc = 0x1056ACu;
            goto label_1056ac;
        }
    }
    ctx->pc = 0x105688u;
    // 0x105688: 0x26620080  addiu       $v0, $s3, 0x80
    ctx->pc = 0x105688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x10568c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10568Cu;
    {
        const bool branch_taken_0x10568c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10568c) {
            ctx->pc = 0x105690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10568Cu;
            // 0x105690: 0x92420091  lbu         $v0, 0x91($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1056B0u;
            goto label_1056b0;
        }
    }
    ctx->pc = 0x105694u;
    // 0x105694: 0xc6600080  lwc1        $f0, 0x80($s3)
    ctx->pc = 0x105694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105698: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x105698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    // 0x10569c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x10569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1056a0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1056a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1056a4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1056a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1056a8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1056a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1056ac:
    // 0x1056ac: 0x92420091  lbu         $v0, 0x91($s2)
    ctx->pc = 0x1056acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 145)));
label_1056b0:
    // 0x1056b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1056b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1056b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1056B4u;
    {
        const bool branch_taken_0x1056b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1056B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1056B4u;
        // 0x1056b8: 0x26430040  addiu       $v1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1056b4) {
            ctx->pc = 0x1056E0u;
            goto label_1056e0;
        }
    }
    ctx->pc = 0x1056BCu;
    // 0x1056bc: 0x26420080  addiu       $v0, $s2, 0x80
    ctx->pc = 0x1056bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x1056c0: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1056C0u;
    {
        const bool branch_taken_0x1056c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1056c0) {
            ctx->pc = 0x1056C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1056C0u;
            // 0x1056c4: 0x8fa3010c  lw          $v1, 0x10C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1056E4u;
            goto label_1056e4;
        }
    }
    ctx->pc = 0x1056C8u;
    // 0x1056c8: 0xc6400080  lwc1        $f0, 0x80($s2)
    ctx->pc = 0x1056c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1056cc: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x1056ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x1056d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1056d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1056d4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1056d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1056d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1056d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1056dc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1056dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1056e0:
    // 0x1056e0: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x1056e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_1056e4:
    // 0x1056e4: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x1056e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1056e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1056e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1056ec: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1056ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1056f0: 0x2c8300ff  sltiu       $v1, $a0, 0xFF
    ctx->pc = 0x1056f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x1056f4: 0x50600081  beql        $v1, $zero, . + 4 + (0x81 << 2)
    ctx->pc = 0x1056F4u;
    {
        const bool branch_taken_0x1056f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1056f4) {
            ctx->pc = 0x1056F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1056F4u;
            // 0x1056f8: 0x8e82005c  lw          $v0, 0x5C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1058FCu;
            goto label_1058fc;
        }
    }
    ctx->pc = 0x1056FCu;
    // 0x1056fc: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x1056fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x105700: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x105700u;
    {
        const bool branch_taken_0x105700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105700u;
        // 0x105704: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105700) {
            ctx->pc = 0x105730u;
            goto label_105730;
        }
    }
    ctx->pc = 0x105708u;
    // 0x105708: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x105708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10570c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x10570cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x105710: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x105710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x105714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105718: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105718u;
    {
        const bool branch_taken_0x105718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105718u;
        // 0x10571c: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105718) {
            ctx->pc = 0x105728u;
            goto label_105728;
        }
    }
    ctx->pc = 0x105720u;
    // 0x105720: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x105720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x105724: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105728:
    // 0x105728: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x105728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x10572c: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x10572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_105730:
    // 0x105730: 0x26710040  addiu       $s1, $s3, 0x40
    ctx->pc = 0x105730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x105734: 0x8fa60114  lw          $a2, 0x114($sp)
    ctx->pc = 0x105734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x105738: 0x400013  mtlo        $v0
    ctx->pc = 0x105738u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x10573c: 0x70979000  madd        $s2, $a0, $s7
    ctx->pc = 0x10573cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x105740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105744: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x105744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x105748: 0xc041cd8  jal         func_107360
    ctx->pc = 0x105748u;
    SET_GPR_U32(ctx, 31, 0x105750u);
    ctx->pc = 0x10574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105748u;
    // 0x10574c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107360u, 0x105748u, 0x105750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105750u;
label_105750:
    // 0x105750: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x105750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x105754: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x105754u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x105758: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x105758u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10575c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x10575cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x105760: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x105760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105764: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x105764u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x105768: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x105768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10576c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x10576cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105770: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x105770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105774: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x105774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x105778: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x105778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10577c: 0x46031942  mul.s       $f5, $f3, $f3
    ctx->pc = 0x10577cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x105780: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x105780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x105784: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x105784u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x105788: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x105788u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x10578c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x10578cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x105790: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x105790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x105794: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x105794u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x105798: 0x0  nop
    ctx->pc = 0x105798u;
    // NOP
    // 0x10579c: 0x0  nop
    ctx->pc = 0x10579cu;
    // NOP
    // 0x1057a0: 0x46010544  c1          0x10544
    ctx->pc = 0x1057a0u;
    ctx->f[21] = ps2FpuSqrt(ctx->fcr31, ctx->f[1]);
    // 0x1057a4: 0xc6600060  lwc1        $f0, 0x60($s3)
    ctx->pc = 0x1057a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1057a8: 0xc681004c  lwc1        $f1, 0x4C($s4)
    ctx->pc = 0x1057a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1057ac: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x1057acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x1057b0: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x1057b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x1057b4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1057b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1057b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1057b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1057bc: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x1057bcu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[21]);
    // 0x1057c0: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1057c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1057c4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1057c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1057c8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1057c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1057cc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1057ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1057d0: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1057d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1057d4: 0xda640040  lqc2        $vf4, 0x40($s3)
    ctx->pc = 0x1057d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1057d8: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x1057d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1057dc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1057dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1057e0: 0xfa640040  sqc2        $vf4, 0x40($s3)
    ctx->pc = 0x1057e0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1057e4: 0xda440040  lqc2        $vf4, 0x40($s2)
    ctx->pc = 0x1057e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1057e8: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x1057e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1057ec: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1057ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1057f0: 0xfa440040  sqc2        $vf4, 0x40($s2)
    ctx->pc = 0x1057f0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1057f4: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x1057f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x1057f8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1057f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1057fc: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1057FCu;
    {
        const bool branch_taken_0x1057fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1057fc) {
            ctx->pc = 0x105800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1057FCu;
            // 0x105800: 0x92620091  lbu         $v0, 0x91($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105898u;
            goto label_105898;
        }
    }
    ctx->pc = 0x105804u;
    // 0x105804: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x105804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105808: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x105808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10580c: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x10580cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x105810: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x105810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x105814: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x105814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105818: 0x0  nop
    ctx->pc = 0x105818u;
    // NOP
    // 0x10581c: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x10581Cu;
    {
        const bool branch_taken_0x10581c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10581c) {
            ctx->pc = 0x105820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10581Cu;
            // 0x105820: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105884u;
            goto label_105884;
        }
    }
    ctx->pc = 0x105824u;
    // 0x105824: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x105824u;
    {
        const bool branch_taken_0x105824 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x105828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105824u;
        // 0x105828: 0xe6600044  swc1        $f0, 0x44($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105824) {
            ctx->pc = 0x105880u;
            goto label_105880;
        }
    }
    ctx->pc = 0x10582Cu;
    // 0x10582c: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x10582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105830: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x105830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105834: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x105834u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105838: 0x0  nop
    ctx->pc = 0x105838u;
    // NOP
    // 0x10583c: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x10583Cu;
    {
        const bool branch_taken_0x10583c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10583c) {
            ctx->pc = 0x105840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10583Cu;
            // 0x105840: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105884u;
            goto label_105884;
        }
    }
    ctx->pc = 0x105844u;
    // 0x105844: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x105844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105848: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x105848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10584c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x10584cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105850: 0x0  nop
    ctx->pc = 0x105850u;
    // NOP
    // 0x105854: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x105854u;
    {
        const bool branch_taken_0x105854 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x105854) {
            ctx->pc = 0x105858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105854u;
            // 0x105858: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105884u;
            goto label_105884;
        }
    }
    ctx->pc = 0x10585Cu;
    // 0x10585c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x10585Cu;
    SET_GPR_U32(ctx, 31, 0x105864u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x10585Cu, 0x105864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105864u;
label_105864:
    // 0x105864: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x105864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105868: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x105868u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x10586c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x10586Cu;
    SET_GPR_U32(ctx, 31, 0x105874u);
    ctx->pc = 0x105870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10586Cu;
    // 0x105870: 0xe6610040  swc1        $f1, 0x40($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x10586Cu, 0x105874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105874u;
label_105874:
    // 0x105874: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x105874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105878: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x105878u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x10587c: 0xe6610048  swc1        $f1, 0x48($s3)
    ctx->pc = 0x10587cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
label_105880:
    // 0x105880: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x105880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_105884:
    // 0x105884: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x105884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105888: 0x0  nop
    ctx->pc = 0x105888u;
    // NOP
    // 0x10588c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10588Cu;
    {
        const bool branch_taken_0x10588c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10588c) {
            ctx->pc = 0x105890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10588Cu;
            // 0x105890: 0xe6570044  swc1        $f23, 0x44($s2) (Delay Slot)
            { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105894u;
            goto label_105894;
        }
    }
    ctx->pc = 0x105894u;
label_105894:
    // 0x105894: 0x92620091  lbu         $v0, 0x91($s3)
    ctx->pc = 0x105894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
label_105898:
    // 0x105898: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x105898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10589c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10589Cu;
    {
        const bool branch_taken_0x10589c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1058A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10589Cu;
        // 0x1058a0: 0x26620080  addiu       $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10589c) {
            ctx->pc = 0x1058C4u;
            goto label_1058c4;
        }
    }
    ctx->pc = 0x1058A4u;
    // 0x1058a4: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1058A4u;
    {
        const bool branch_taken_0x1058a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1058a4) {
            ctx->pc = 0x1058A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1058A4u;
            // 0x1058a8: 0x92420091  lbu         $v0, 0x91($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1058C8u;
            goto label_1058c8;
        }
    }
    ctx->pc = 0x1058ACu;
    // 0x1058ac: 0xc6600080  lwc1        $f0, 0x80($s3)
    ctx->pc = 0x1058acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1058b0: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x1058b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    // 0x1058b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1058b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1058b8: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1058b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1058bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1058bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1058c0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1058c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1058c4:
    // 0x1058c4: 0x92420091  lbu         $v0, 0x91($s2)
    ctx->pc = 0x1058c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 145)));
label_1058c8:
    // 0x1058c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1058c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1058cc: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1058CCu;
    {
        const bool branch_taken_0x1058cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1058D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058CCu;
        // 0x1058d0: 0x26430040  addiu       $v1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058cc) {
            ctx->pc = 0x105A54u;
            goto label_105a54;
        }
    }
    ctx->pc = 0x1058D4u;
    // 0x1058d4: 0x26420080  addiu       $v0, $s2, 0x80
    ctx->pc = 0x1058d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x1058d8: 0x1062005f  beq         $v1, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1058D8u;
    {
        const bool branch_taken_0x1058d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1058DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058D8u;
        // 0x1058dc: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058d8) {
            ctx->pc = 0x105A58u;
            goto label_105a58;
        }
    }
    ctx->pc = 0x1058E0u;
    // 0x1058e0: 0xc6400080  lwc1        $f0, 0x80($s2)
    ctx->pc = 0x1058e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1058e4: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x1058e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x1058e8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1058e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1058ec: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1058ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1058f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1058f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1058f4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1058F4u;
    {
        const bool branch_taken_0x1058f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1058F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058F4u;
        // 0x1058f8: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058f4) {
            ctx->pc = 0x105A54u;
            goto label_105a54;
        }
    }
    ctx->pc = 0x1058FCu;
label_1058fc:
    // 0x1058fc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1058fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x105900: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x105900u;
    {
        const bool branch_taken_0x105900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105900u;
        // 0x105904: 0x8fa30108  lw          $v1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105900) {
            ctx->pc = 0x105928u;
            goto label_105928;
        }
    }
    ctx->pc = 0x105908u;
    // 0x105908: 0x26700040  addiu       $s0, $s3, 0x40
    ctx->pc = 0x105908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x10590c: 0x8fa60114  lw          $a2, 0x114($sp)
    ctx->pc = 0x10590cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x105910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105914: 0x8c6500f0  lw          $a1, 0xF0($v1)
    ctx->pc = 0x105914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x105918: 0xc041afe  jal         func_106BF8
    ctx->pc = 0x105918u;
    SET_GPR_U32(ctx, 31, 0x105920u);
    ctx->pc = 0x10591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105918u;
    // 0x10591c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106BF8u, 0x105918u, 0x105920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105920u;
label_105920:
    // 0x105920: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x105920u;
    {
        const bool branch_taken_0x105920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105920) {
            ctx->pc = 0x105944u;
            goto label_105944;
        }
    }
    ctx->pc = 0x105928u;
label_105928:
    // 0x105928: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x105928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x10592c: 0x26700040  addiu       $s0, $s3, 0x40
    ctx->pc = 0x10592cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x105930: 0x8fa60114  lw          $a2, 0x114($sp)
    ctx->pc = 0x105930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x105934: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x105934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105938: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x105938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x10593c: 0xc0419ee  jal         func_1067B8
    ctx->pc = 0x10593Cu;
    SET_GPR_U32(ctx, 31, 0x105944u);
    ctx->pc = 0x105940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10593Cu;
    // 0x105940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1067B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1067B8u, 0x10593Cu, 0x105944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105944u;
label_105944:
    // 0x105944: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x105944u;
    {
        const bool branch_taken_0x105944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105944u;
        // 0x105948: 0x8fa50108  lw          $a1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105944) {
            ctx->pc = 0x10595Cu;
            goto label_10595c;
        }
    }
    ctx->pc = 0x10594Cu;
    // 0x10594c: 0x92620090  lbu         $v0, 0x90($s3)
    ctx->pc = 0x10594cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x105950: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x105950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x105954: 0xa2620090  sb          $v0, 0x90($s3)
    ctx->pc = 0x105954u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 144), (uint8_t)GPR_U32(ctx, 2));
    // 0x105958: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x105958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_10595c:
    // 0x10595c: 0x8ca200f0  lw          $v0, 0xF0($a1)
    ctx->pc = 0x10595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x105960: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x105960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x105964: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x105964u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105968: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x105968u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10596c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x10596cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x105970: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x105970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105974: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x105974u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x105978: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x105978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10597c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x10597cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105980: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x105980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105984: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x105984u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x105988: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x105988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10598c: 0x46031942  mul.s       $f5, $f3, $f3
    ctx->pc = 0x10598cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x105990: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x105990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x105994: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x105994u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x105998: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x105998u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x10599c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x10599cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1059a0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1059a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1059a4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1059a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1059a8: 0x0  nop
    ctx->pc = 0x1059a8u;
    // NOP
    // 0x1059ac: 0x0  nop
    ctx->pc = 0x1059acu;
    // NOP
    // 0x1059b0: 0x46010544  c1          0x10544
    ctx->pc = 0x1059b0u;
    ctx->f[21] = ps2FpuSqrt(ctx->fcr31, ctx->f[1]);
    // 0x1059b4: 0xc6600060  lwc1        $f0, 0x60($s3)
    ctx->pc = 0x1059b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1059b8: 0xc681004c  lwc1        $f1, 0x4C($s4)
    ctx->pc = 0x1059b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1059bc: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x1059bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x1059c0: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x1059c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x1059c4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1059c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1059c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1059c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1059cc: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x1059ccu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[21]);
    // 0x1059d0: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1059d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1059d4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1059d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1059d8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1059d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1059dc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1059dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1059e0: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1059e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1059e4: 0xda640040  lqc2        $vf4, 0x40($s3)
    ctx->pc = 0x1059e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1059e8: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x1059e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1059ec: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1059ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1059f0: 0xfa640040  sqc2        $vf4, 0x40($s3)
    ctx->pc = 0x1059f0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1059f4: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x1059f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x1059f8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1059f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1059fc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1059FCu;
    {
        const bool branch_taken_0x1059fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1059fc) {
            ctx->pc = 0x105A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1059FCu;
            // 0x105a00: 0x92620091  lbu         $v0, 0x91($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105A28u;
            goto label_105a28;
        }
    }
    ctx->pc = 0x105A04u;
    // 0x105a04: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x105a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105a08: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x105a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105a0c: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x105a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x105a10: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x105a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x105a14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x105a14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105a18: 0x0  nop
    ctx->pc = 0x105a18u;
    // NOP
    // 0x105a1c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x105A1Cu;
    {
        const bool branch_taken_0x105a1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x105a1c) {
            ctx->pc = 0x105A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105A1Cu;
            // 0x105a20: 0xe6600044  swc1        $f0, 0x44($s3) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105A24u;
            goto label_105a24;
        }
    }
    ctx->pc = 0x105A24u;
label_105a24:
    // 0x105a24: 0x92620091  lbu         $v0, 0x91($s3)
    ctx->pc = 0x105a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
label_105a28:
    // 0x105a28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x105a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105a2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x105A2Cu;
    {
        const bool branch_taken_0x105a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A2Cu;
        // 0x105a30: 0x26620080  addiu       $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a2c) {
            ctx->pc = 0x105A54u;
            goto label_105a54;
        }
    }
    ctx->pc = 0x105A34u;
    // 0x105a34: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x105A34u;
    {
        const bool branch_taken_0x105a34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x105A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A34u;
        // 0x105a38: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a34) {
            ctx->pc = 0x105A58u;
            goto label_105a58;
        }
    }
    ctx->pc = 0x105A3Cu;
    // 0x105a3c: 0xc6600080  lwc1        $f0, 0x80($s3)
    ctx->pc = 0x105a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105a40: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x105a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    // 0x105a44: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x105a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105a48: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x105a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x105a4c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x105a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105a50: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x105a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_105a54:
    // 0x105a54: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x105a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_105a58:
    // 0x105a58: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x105a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x105a5c: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x105a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x105a60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x105a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x105a64: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x105a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x105a68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x105a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x105a6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a70: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x105a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x105a74: 0x1440fd26  bnez        $v0, . + 4 + (-0x2DA << 2)
    ctx->pc = 0x105A74u;
    {
        const bool branch_taken_0x105a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A74u;
        // 0x105a78: 0xafa3010c  sw          $v1, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a74) {
            ctx->pc = 0x104F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104f10;
        }
    }
    ctx->pc = 0x105A7Cu;
label_105a7c:
    // 0x105a7c: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x105a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x105a80: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x105a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x105a84: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x105a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x105a88: 0x5440fd17  bnel        $v0, $zero, . + 4 + (-0x2E9 << 2)
    ctx->pc = 0x105A88u;
    {
        const bool branch_taken_0x105a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105a88) {
            ctx->pc = 0x105A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105A88u;
            // 0x105a8c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104ee8;
        }
    }
    ctx->pc = 0x105A90u;
label_105a90:
    // 0x105a90: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x105a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_105a94:
    // 0x105a94: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x105a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x105a98: 0x108001c9  beqz        $a0, . + 4 + (0x1C9 << 2)
    ctx->pc = 0x105A98u;
    {
        const bool branch_taken_0x105a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A98u;
        // 0x105a9c: 0xafa50110  sw          $a1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a98) {
            ctx->pc = 0x1061C0u;
            goto label_1061c0;
        }
    }
    ctx->pc = 0x105AA0u;
    // 0x105aa0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x105aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x105aa4: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x105aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x105aa8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x105aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x105aac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x105aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x105ab0: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x105ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x105ab4: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x105ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x105ab8: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x105ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x105abc: 0x0  nop
    ctx->pc = 0x105abcu;
    // NOP
label_105ac0:
    // 0x105ac0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x105AC0u;
    {
        const bool branch_taken_0x105ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x105AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105AC0u;
        // 0x105ac4: 0x8fa50110  lw          $a1, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ac0) {
            ctx->pc = 0x105AE0u;
            goto label_105ae0;
        }
    }
    ctx->pc = 0x105AC8u;
    // 0x105ac8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x105ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105acc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x105accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x105ad0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x105ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ad4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x105ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x105ad8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x105AD8u;
    {
        const bool branch_taken_0x105ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105AD8u;
        // 0x105adc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ad8) {
            ctx->pc = 0x105B34u;
            goto label_105b34;
        }
    }
    ctx->pc = 0x105AE0u;
label_105ae0:
    // 0x105ae0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x105ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x105ae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ae8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x105ae8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105aec: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x105aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x105af0: 0x904302b4  lbu         $v1, 0x2B4($v0)
    ctx->pc = 0x105af0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x105af4: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x105af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x105af8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105AF8u;
    {
        const bool branch_taken_0x105af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105AF8u;
        // 0x105afc: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105af8) {
            ctx->pc = 0x105B08u;
            goto label_105b08;
        }
    }
    ctx->pc = 0x105B00u;
    // 0x105b00: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x105b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x105b04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105b08:
    // 0x105b08: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x105b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x105b0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105B0Cu;
    {
        const bool branch_taken_0x105b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B0Cu;
        // 0x105b10: 0x8fa50100  lw          $a1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b0c) {
            ctx->pc = 0x105B28u;
            goto label_105b28;
        }
    }
    ctx->pc = 0x105B14u;
    // 0x105b14: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x105b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x105b18: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x105b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x105b1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105b20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105B20u;
    {
        const bool branch_taken_0x105b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B20u;
        // 0x105b24: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b20) {
            ctx->pc = 0x105B2Cu;
            goto label_105b2c;
        }
    }
    ctx->pc = 0x105B28u;
label_105b28:
    // 0x105b28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x105b28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105b2c:
    // 0x105b2c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x105b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x105b30: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x105b30u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_105b34:
    // 0x105b34: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x105b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x105b38: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x105b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x105b3c: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x105b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x105b40: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x105b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x105b44: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x105b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x105b48: 0x800013  mtlo        $a0
    ctx->pc = 0x105b48u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x105b4c: 0x70c39800  madd        $s3, $a2, $v1
    ctx->pc = 0x105b4cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x105b50: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x105b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x105b54: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x105b54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105b58: 0x2c8300ff  sltiu       $v1, $a0, 0xFF
    ctx->pc = 0x105b58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x105b5c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x105B5Cu;
    {
        const bool branch_taken_0x105b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B5Cu;
        // 0x105b60: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b5c) {
            ctx->pc = 0x105BD0u;
            goto label_105bd0;
        }
    }
    ctx->pc = 0x105B64u;
    // 0x105b64: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x105b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x105b68: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x105B68u;
    {
        const bool branch_taken_0x105b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B68u;
        // 0x105b6c: 0x8fa50108  lw          $a1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b68) {
            ctx->pc = 0x105B98u;
            goto label_105b98;
        }
    }
    ctx->pc = 0x105B70u;
    // 0x105b70: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x105b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x105b74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b78: 0x904302b4  lbu         $v1, 0x2B4($v0)
    ctx->pc = 0x105b78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x105b7c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x105b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x105b80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105B80u;
    {
        const bool branch_taken_0x105b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B80u;
        // 0x105b84: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b80) {
            ctx->pc = 0x105B90u;
            goto label_105b90;
        }
    }
    ctx->pc = 0x105B88u;
    // 0x105b88: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x105b88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x105b8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105b90:
    // 0x105b90: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x105b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x105b94: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x105b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_105b98:
    // 0x105b98: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x105b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x105b9c: 0x8ca300f0  lw          $v1, 0xF0($a1)
    ctx->pc = 0x105b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x105ba0: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x105ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x105ba4: 0xa00013  mtlo        $a1
    ctx->pc = 0x105ba4u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x105ba8: 0x70829000  madd        $s2, $a0, $v0
    ctx->pc = 0x105ba8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x105bac: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x105bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x105bb0: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x105BB0u;
    {
        const bool branch_taken_0x105bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x105bb0) {
            ctx->pc = 0x105BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105BB0u;
            // 0x105bb4: 0x8e82005c  lw          $v0, 0x5C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105BD4u;
            goto label_105bd4;
        }
    }
    ctx->pc = 0x105BB8u;
    // 0x105bb8: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x105bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105bbc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x105bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x105bc0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x105bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105bc4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x105bc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x105bc8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x105bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105bcc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x105bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_105bd0:
    // 0x105bd0: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x105bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_105bd4:
    // 0x105bd4: 0x27b500d0  addiu       $s5, $sp, 0xD0
    ctx->pc = 0x105bd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x105bd8: 0x26710040  addiu       $s1, $s3, 0x40
    ctx->pc = 0x105bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x105bdc: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x105bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x105be0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x105be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x105be4: 0x267e0010  addiu       $fp, $s3, 0x10
    ctx->pc = 0x105be4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x105be8: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x105BE8u;
    {
        const bool branch_taken_0x105be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BE8u;
        // 0x105bec: 0x27b60070  addiu       $s6, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105be8) {
            ctx->pc = 0x105D60u;
            goto label_105d60;
        }
    }
    ctx->pc = 0x105BF0u;
    // 0x105bf0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x105bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x105bf4: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x105bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x105bf8: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x105bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x105bfc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x105bfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x105c00: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x105c00u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105c04: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x105c04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x105c08: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x105c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105c0c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x105c0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x105c10: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x105c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105c14: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x105c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105c18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x105c18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x105c1c: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x105c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105c20: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x105c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105c24: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x105c24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105c28: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x105c28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x105c2c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x105c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x105c30: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x105C30u;
    {
        const bool branch_taken_0x105c30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x105C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C30u;
        // 0x105c34: 0xe7a30078  swc1        $f3, 0x78($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c30) {
            ctx->pc = 0x105C78u;
            goto label_105c78;
        }
    }
    ctx->pc = 0x105C38u;
    // 0x105c38: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x105c38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105c3c: 0x0  nop
    ctx->pc = 0x105c3cu;
    // NOP
    // 0x105c40: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x105C40u;
    {
        const bool branch_taken_0x105c40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x105c40) {
            ctx->pc = 0x105C78u;
            goto label_105c78;
        }
    }
    ctx->pc = 0x105C48u;
    // 0x105c48: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x105c48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105c4c: 0x0  nop
    ctx->pc = 0x105c4cu;
    // NOP
    // 0x105c50: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x105C50u;
    {
        const bool branch_taken_0x105c50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x105C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C50u;
        // 0x105c54: 0x8fa4011c  lw          $a0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c50) {
            ctx->pc = 0x105C78u;
            goto label_105c78;
        }
    }
    ctx->pc = 0x105C58u;
    // 0x105c58: 0x509e0029  beql        $a0, $fp, . + 4 + (0x29 << 2)
    ctx->pc = 0x105C58u;
    {
        const bool branch_taken_0x105c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 30));
        if (branch_taken_0x105c58) {
            ctx->pc = 0x105C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105C58u;
            // 0x105c5c: 0xc6600060  lwc1        $f0, 0x60($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x105D00u;
            goto label_105d00;
        }
    }
    ctx->pc = 0x105C60u;
    // 0x105c60: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x105c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105c64: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x105c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x105c68: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x105c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105c6c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x105c6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x105c70: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x105C70u;
    {
        const bool branch_taken_0x105c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C70u;
        // 0x105c74: 0xc7c00008  lwc1        $f0, 0x8($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c70) {
            ctx->pc = 0x105CF8u;
            goto label_105cf8;
        }
    }
    ctx->pc = 0x105C78u;
label_105c78:
    // 0x105c78: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x105c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x105c7c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x105C7Cu;
    SET_GPR_U32(ctx, 31, 0x105C84u);
    ctx->pc = 0x105C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105C7Cu;
    // 0x105c80: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x105C7Cu, 0x105C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C84u;
label_105c84:
    // 0x105c84: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x105c84u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x105c88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x105c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105c8c: 0x0  nop
    ctx->pc = 0x105c8cu;
    // NOP
    // 0x105c90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x105c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105c94: 0x0  nop
    ctx->pc = 0x105c94u;
    // NOP
    // 0x105c98: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x105C98u;
    {
        const bool branch_taken_0x105c98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x105C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C98u;
        // 0x105c9c: 0xc7a30070  lwc1        $f3, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c98) {
            ctx->pc = 0x105CD4u;
            goto label_105cd4;
        }
    }
    ctx->pc = 0x105CA0u;
    // 0x105ca0: 0x0  nop
    ctx->pc = 0x105ca0u;
    // NOP
    // 0x105ca4: 0x0  nop
    ctx->pc = 0x105ca4u;
    // NOP
    // 0x105ca8: 0x4601a883  div.s       $f2, $f21, $f1
    ctx->pc = 0x105ca8u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[1]);
    // 0x105cac: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x105cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x105cb0: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x105cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105cb4: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x105cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105cb8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x105cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x105cbc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x105cbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x105cc0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x105cc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x105cc4: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x105cc4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x105cc8: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x105cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x105ccc: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x105cccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x105cd0: 0xe7a400d4  swc1        $f4, 0xD4($sp)
    ctx->pc = 0x105cd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_105cd4:
    // 0x105cd4: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x105cd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x105cd8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x105cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105cdc: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x105cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105ce0: 0x267e0010  addiu       $fp, $s3, 0x10
    ctx->pc = 0x105ce0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x105ce4: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x105ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105ce8: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x105ce8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x105cec: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x105cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105cf0: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x105cf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x105cf4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x105cf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_105cf8:
    // 0x105cf8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x105cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x105cfc: 0xc6600060  lwc1        $f0, 0x60($s3)
    ctx->pc = 0x105cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_105d00:
    // 0x105d00: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x105d00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x105d04: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x105d04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x105d08: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x105d08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x105d0c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x105d0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x105d10: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x105d10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x105d14: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x105d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105d18: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x105d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x105d1c: 0x8ca200f0  lw          $v0, 0xF0($a1)
    ctx->pc = 0x105d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x105d20: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x105d20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105d24: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x105d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105d28: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x105d28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x105d2c: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x105d2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x105d30: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x105d30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x105d34: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x105d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105d38: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x105d38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x105d3c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x105d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105d40: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x105d40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x105d44: 0x12300006  beq         $s1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105D44u;
    {
        const bool branch_taken_0x105d44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x105D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D44u;
        // 0x105d48: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d44) {
            ctx->pc = 0x105D60u;
            goto label_105d60;
        }
    }
    ctx->pc = 0x105D4Cu;
    // 0x105d4c: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x105d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    // 0x105d50: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x105d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105d54: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x105d54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x105d58: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x105d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105d5c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x105d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_105d60:
    // 0x105d60: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x105D60u;
    {
        const bool branch_taken_0x105d60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D60u;
        // 0x105d64: 0x8e82005c  lw          $v0, 0x5C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d60) {
            ctx->pc = 0x105D94u;
            goto label_105d94;
        }
    }
    ctx->pc = 0x105D68u;
    // 0x105d68: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x105d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x105d6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105D6Cu;
    {
        const bool branch_taken_0x105d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D6Cu;
        // 0x105d70: 0x8fa60114  lw          $a2, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d6c) {
            ctx->pc = 0x105D88u;
            goto label_105d88;
        }
    }
    ctx->pc = 0x105D74u;
    // 0x105d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d78: 0xc041afe  jal         func_106BF8
    ctx->pc = 0x105D78u;
    SET_GPR_U32(ctx, 31, 0x105D80u);
    ctx->pc = 0x105D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105D78u;
    // 0x105d7c: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106BF8u, 0x105D78u, 0x105D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D80u;
label_105d80:
    // 0x105d80: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x105D80u;
    {
        const bool branch_taken_0x105d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105d80) {
            ctx->pc = 0x105DD0u;
            goto label_105dd0;
        }
    }
    ctx->pc = 0x105D88u;
label_105d88:
    // 0x105d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d8c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x105D8Cu;
    {
        const bool branch_taken_0x105d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D8Cu;
        // 0x105d90: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d8c) {
            ctx->pc = 0x105DC8u;
            goto label_105dc8;
        }
    }
    ctx->pc = 0x105D94u;
label_105d94:
    // 0x105d94: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x105d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x105d98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x105D98u;
    {
        const bool branch_taken_0x105d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D98u;
        // 0x105d9c: 0x8fa20108  lw          $v0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d98) {
            ctx->pc = 0x105DB8u;
            goto label_105db8;
        }
    }
    ctx->pc = 0x105DA0u;
    // 0x105da0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105da4: 0x8fa60114  lw          $a2, 0x114($sp)
    ctx->pc = 0x105da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x105da8: 0xc041afe  jal         func_106BF8
    ctx->pc = 0x105DA8u;
    SET_GPR_U32(ctx, 31, 0x105DB0u);
    ctx->pc = 0x105DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105DA8u;
    // 0x105dac: 0x8c4500f0  lw          $a1, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106BF8u, 0x105DA8u, 0x105DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105DB0u;
label_105db0:
    // 0x105db0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x105DB0u;
    {
        const bool branch_taken_0x105db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105db0) {
            ctx->pc = 0x105DD0u;
            goto label_105dd0;
        }
    }
    ctx->pc = 0x105DB8u;
label_105db8:
    // 0x105db8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x105db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x105dbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105dc0: 0x8fa60114  lw          $a2, 0x114($sp)
    ctx->pc = 0x105dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x105dc4: 0x8c6500f0  lw          $a1, 0xF0($v1)
    ctx->pc = 0x105dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_105dc8:
    // 0x105dc8: 0xc0419ee  jal         func_1067B8
    ctx->pc = 0x105DC8u;
    SET_GPR_U32(ctx, 31, 0x105DD0u);
    ctx->pc = 0x1067B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1067B8u, 0x105DC8u, 0x105DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105DD0u;
label_105dd0:
    // 0x105dd0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x105DD0u;
    {
        const bool branch_taken_0x105dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105dd0) {
            ctx->pc = 0x105DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105DD0u;
            // 0x105dd4: 0x8e82005c  lw          $v0, 0x5C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105DE8u;
            goto label_105de8;
        }
    }
    ctx->pc = 0x105DD8u;
    // 0x105dd8: 0x92620090  lbu         $v0, 0x90($s3)
    ctx->pc = 0x105dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x105ddc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x105ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x105de0: 0xa2620090  sb          $v0, 0x90($s3)
    ctx->pc = 0x105de0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 144), (uint8_t)GPR_U32(ctx, 2));
    // 0x105de4: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x105de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_105de8:
    // 0x105de8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x105de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x105dec: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x105DECu;
    {
        const bool branch_taken_0x105dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105dec) {
            ctx->pc = 0x105DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105DECu;
            // 0x105df0: 0x92620091  lbu         $v0, 0x91($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105E74u;
            goto label_105e74;
        }
    }
    ctx->pc = 0x105DF4u;
    // 0x105df4: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x105df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105df8: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x105df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105dfc: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x105dfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x105e00: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x105e00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x105e04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x105e04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105e08: 0x0  nop
    ctx->pc = 0x105e08u;
    // NOP
    // 0x105e0c: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x105E0Cu;
    {
        const bool branch_taken_0x105e0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x105e0c) {
            ctx->pc = 0x105E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105E0Cu;
            // 0x105e10: 0x92620091  lbu         $v0, 0x91($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105E74u;
            goto label_105e74;
        }
    }
    ctx->pc = 0x105E14u;
    // 0x105e14: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x105E14u;
    {
        const bool branch_taken_0x105e14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E14u;
        // 0x105e18: 0xe6600044  swc1        $f0, 0x44($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e14) {
            ctx->pc = 0x105E70u;
            goto label_105e70;
        }
    }
    ctx->pc = 0x105E1Cu;
    // 0x105e1c: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x105e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105e20: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x105e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105e24: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x105e24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105e28: 0x0  nop
    ctx->pc = 0x105e28u;
    // NOP
    // 0x105e2c: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x105E2Cu;
    {
        const bool branch_taken_0x105e2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x105e2c) {
            ctx->pc = 0x105E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105E2Cu;
            // 0x105e30: 0x92620091  lbu         $v0, 0x91($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105E74u;
            goto label_105e74;
        }
    }
    ctx->pc = 0x105E34u;
    // 0x105e34: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x105e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105e38: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x105e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105e3c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x105e3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105e40: 0x0  nop
    ctx->pc = 0x105e40u;
    // NOP
    // 0x105e44: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x105E44u;
    {
        const bool branch_taken_0x105e44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x105e44) {
            ctx->pc = 0x105E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105E44u;
            // 0x105e48: 0x92620091  lbu         $v0, 0x91($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105E74u;
            goto label_105e74;
        }
    }
    ctx->pc = 0x105E4Cu;
    // 0x105e4c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x105E4Cu;
    SET_GPR_U32(ctx, 31, 0x105E54u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x105E4Cu, 0x105E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105E54u;
label_105e54:
    // 0x105e54: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x105e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105e58: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x105e58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x105e5c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x105E5Cu;
    SET_GPR_U32(ctx, 31, 0x105E64u);
    ctx->pc = 0x105E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105E5Cu;
    // 0x105e60: 0xe6610040  swc1        $f1, 0x40($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x105E5Cu, 0x105E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105E64u;
label_105e64:
    // 0x105e64: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x105e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105e68: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x105e68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x105e6c: 0xe6610048  swc1        $f1, 0x48($s3)
    ctx->pc = 0x105e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
label_105e70:
    // 0x105e70: 0x92620091  lbu         $v0, 0x91($s3)
    ctx->pc = 0x105e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 145)));
label_105e74:
    // 0x105e74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x105e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105e78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x105E78u;
    {
        const bool branch_taken_0x105e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E78u;
        // 0x105e7c: 0x26620080  addiu       $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e78) {
            ctx->pc = 0x105EA0u;
            goto label_105ea0;
        }
    }
    ctx->pc = 0x105E80u;
    // 0x105e80: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x105E80u;
    {
        const bool branch_taken_0x105e80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x105e80) {
            ctx->pc = 0x105E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105E80u;
            // 0x105e84: 0x8e830024  lw          $v1, 0x24($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105EA4u;
            goto label_105ea4;
        }
    }
    ctx->pc = 0x105E88u;
    // 0x105e88: 0xc6600080  lwc1        $f0, 0x80($s3)
    ctx->pc = 0x105e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105e8c: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x105e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    // 0x105e90: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x105e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105e94: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x105e94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x105e98: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x105e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105e9c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x105e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_105ea0:
    // 0x105ea0: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x105ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_105ea4:
    // 0x105ea4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x105EA4u;
    {
        const bool branch_taken_0x105ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EA4u;
        // 0x105ea8: 0x8fa4010c  lw          $a0, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ea4) {
            ctx->pc = 0x105EBCu;
            goto label_105ebc;
        }
    }
    ctx->pc = 0x105EACu;
    // 0x105eac: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x105eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x105eb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105eb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105EB4u;
    {
        const bool branch_taken_0x105eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EB4u;
        // 0x105eb8: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105eb4) {
            ctx->pc = 0x105EC0u;
            goto label_105ec0;
        }
    }
    ctx->pc = 0x105EBCu;
label_105ebc:
    // 0x105ebc: 0xc6940040  lwc1        $f20, 0x40($s4)
    ctx->pc = 0x105ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_105ec0:
    // 0x105ec0: 0x92620090  lbu         $v0, 0x90($s3)
    ctx->pc = 0x105ec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x105ec4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x105ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105ec8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105EC8u;
    {
        const bool branch_taken_0x105ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EC8u;
        // 0x105ecc: 0x26620050  addiu       $v0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ec8) {
            ctx->pc = 0x105EE4u;
            goto label_105ee4;
        }
    }
    ctx->pc = 0x105ED0u;
    // 0x105ed0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x105ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x105ed4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x105ed4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x105ed8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x105ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105edc: 0x0  nop
    ctx->pc = 0x105edcu;
    // NOP
    // 0x105ee0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x105ee0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_105ee4:
    // 0x105ee4: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x105ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x105ee8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x105ee8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x105eec: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x105eecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105ef0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x105ef0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x105ef4: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x105ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105ef8: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x105ef8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x105efc: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x105efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105f00: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x105f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x105f04: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105F04u;
    {
        const bool branch_taken_0x105f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x105F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F04u;
        // 0x105f08: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f04) {
            ctx->pc = 0x105F20u;
            goto label_105f20;
        }
    }
    ctx->pc = 0x105F0Cu;
    // 0x105f0c: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x105f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x105f10: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x105f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105f14: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x105f14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x105f18: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x105f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105f1c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x105f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_105f20:
    // 0x105f20: 0xda640030  lqc2        $vf4, 0x30($s3)
    ctx->pc = 0x105f20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x105f24: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x105f24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x105f28: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x105f28u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x105f2c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x105f2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x105f30: 0xfa640030  sqc2        $vf4, 0x30($s3)
    ctx->pc = 0x105f30u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105f34: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x105f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x105f38: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x105f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f3c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x105f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x105f40: 0x24b00080  addiu       $s0, $a1, 0x80
    ctx->pc = 0x105f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x105f44: 0xc07e0d4  jal         func_1F8350
    ctx->pc = 0x105F44u;
    SET_GPR_U32(ctx, 31, 0x105F4Cu);
    ctx->pc = 0x105F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105F44u;
    // 0x105f48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8350u, 0x105F44u, 0x105F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F4Cu;
label_105f4c:
    // 0x105f4c: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x105f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x105f50: 0xc04078a  jal         func_101E28
    ctx->pc = 0x105F50u;
    SET_GPR_U32(ctx, 31, 0x105F58u);
    ctx->pc = 0x105F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105F50u;
    // 0x105f54: 0x8fa40120  lw          $a0, 0x120($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x105F50u, 0x105F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F58u;
label_105f58:
    // 0x105f58: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x105f58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x105f5c: 0x0  nop
    ctx->pc = 0x105f5cu;
    // NOP
    // 0x105f60: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x105f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105f64: 0x0  nop
    ctx->pc = 0x105f64u;
    // NOP
    // 0x105f68: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x105F68u;
    {
        const bool branch_taken_0x105f68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x105F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F68u;
        // 0x105f6c: 0x8fb70120  lw          $s7, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f68) {
            ctx->pc = 0x105FA8u;
            goto label_105fa8;
        }
    }
    ctx->pc = 0x105F70u;
    // 0x105f70: 0x0  nop
    ctx->pc = 0x105f70u;
    // NOP
    // 0x105f74: 0x0  nop
    ctx->pc = 0x105f74u;
    // NOP
    // 0x105f78: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x105f78u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x105f7c: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x105f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105f80: 0xc7a40094  lwc1        $f4, 0x94($sp)
    ctx->pc = 0x105f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x105f84: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x105f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105f88: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x105f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105f8c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x105f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x105f90: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x105f90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x105f94: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x105f94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x105f98: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x105f98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x105f9c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x105f9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x105fa0: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x105fa0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x105fa4: 0xe7a400d4  swc1        $f4, 0xD4($sp)
    ctx->pc = 0x105fa4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_105fa8:
    // 0x105fa8: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x105fa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x105fac: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x105facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105fb0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x105fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105fb4: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x105fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105fb8: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x105fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105fbc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x105fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x105fc0: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x105fc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x105fc4: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x105fc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x105fc8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x105fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x105fcc: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x105fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x105fd0: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x105fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x105fd4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x105fd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x105fd8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x105fd8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105fdc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x105fdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x105fe0: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x105fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105fe4: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x105fe4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x105fe8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x105fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105fec: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x105fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105ff0: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x105ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x105ff4: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x105ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105ff8: 0x46050032  c.eq.s      $f0, $f5
    ctx->pc = 0x105ff8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105ffc: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x105ffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x106000: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x106000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x106004: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x106004u;
    {
        const bool branch_taken_0x106004 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x106008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106004u;
        // 0x106008: 0xe7a200a8  swc1        $f2, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106004) {
            ctx->pc = 0x106050u;
            goto label_106050;
        }
    }
    ctx->pc = 0x10600Cu;
    // 0x10600c: 0x46050832  c.eq.s      $f1, $f5
    ctx->pc = 0x10600cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106010: 0x0  nop
    ctx->pc = 0x106010u;
    // NOP
    // 0x106014: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x106014u;
    {
        const bool branch_taken_0x106014 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x106014) {
            ctx->pc = 0x106050u;
            goto label_106050;
        }
    }
    ctx->pc = 0x10601Cu;
    // 0x10601c: 0x46051032  c.eq.s      $f2, $f5
    ctx->pc = 0x10601cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106020: 0x0  nop
    ctx->pc = 0x106020u;
    // NOP
    // 0x106024: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x106024u;
    {
        const bool branch_taken_0x106024 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x106028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106024u;
        // 0x106028: 0x27b200a0  addiu       $s2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106024) {
            ctx->pc = 0x106050u;
            goto label_106050;
        }
    }
    ctx->pc = 0x10602Cu;
    // 0x10602c: 0x125e0029  beq         $s2, $fp, . + 4 + (0x29 << 2)
    ctx->pc = 0x10602Cu;
    {
        const bool branch_taken_0x10602c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 30));
        ctx->pc = 0x106030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10602Cu;
        // 0x106030: 0x8fa40108  lw          $a0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10602c) {
            ctx->pc = 0x1060D4u;
            goto label_1060d4;
        }
    }
    ctx->pc = 0x106034u;
    // 0x106034: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x106034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106038: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x106038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x10603c: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x10603cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106040: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x106040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x106044: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x106044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106048: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x106048u;
    {
        const bool branch_taken_0x106048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106048u;
        // 0x10604c: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106048) {
            ctx->pc = 0x1060D0u;
            goto label_1060d0;
        }
    }
    ctx->pc = 0x106050u;
label_106050:
    // 0x106050: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x106050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106054: 0xc04078a  jal         func_101E28
    ctx->pc = 0x106054u;
    SET_GPR_U32(ctx, 31, 0x10605Cu);
    ctx->pc = 0x106058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106054u;
    // 0x106058: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x106054u, 0x10605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10605Cu;
label_10605c:
    // 0x10605c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x10605cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x106060: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x106060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x106064: 0x0  nop
    ctx->pc = 0x106064u;
    // NOP
    // 0x106068: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x106068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10606c: 0x0  nop
    ctx->pc = 0x10606cu;
    // NOP
    // 0x106070: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x106070u;
    {
        const bool branch_taken_0x106070 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x106074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106070u;
        // 0x106074: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106070) {
            ctx->pc = 0x1060ACu;
            goto label_1060ac;
        }
    }
    ctx->pc = 0x106078u;
    // 0x106078: 0x0  nop
    ctx->pc = 0x106078u;
    // NOP
    // 0x10607c: 0x0  nop
    ctx->pc = 0x10607cu;
    // NOP
    // 0x106080: 0x4601a883  div.s       $f2, $f21, $f1
    ctx->pc = 0x106080u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[1]);
    // 0x106084: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x106084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x106088: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x106088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10608c: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x10608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106090: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x106090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x106094: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x106094u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x106098: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x106098u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x10609c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x10609cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1060a0: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x1060a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1060a4: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x1060a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1060a8: 0xe7a400d4  swc1        $f4, 0xD4($sp)
    ctx->pc = 0x1060a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1060ac:
    // 0x1060ac: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1060acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1060b0: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1060b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1060b4: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1060b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1060b8: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x1060b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1060bc: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1060bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1060c0: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x1060c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1060c4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1060c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1060c8: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x1060c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1060cc: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x1060ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1060d0:
    // 0x1060d0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x1060d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1060d4:
    // 0x1060d4: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x1060d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1060d8: 0x12c20007  beq         $s6, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1060D8u;
    {
        const bool branch_taken_0x1060d8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1060DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060D8u;
        // 0x1060dc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060d8) {
            ctx->pc = 0x1060F8u;
            goto label_1060f8;
        }
    }
    ctx->pc = 0x1060E0u;
    // 0x1060e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1060e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1060e4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1060e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1060e8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1060e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1060ec: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1060ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1060f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1060f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1060f4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1060f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1060f8:
    // 0x1060f8: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x1060F8u;
    SET_GPR_U32(ctx, 31, 0x106100u);
    ctx->pc = 0x1060FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1060F8u;
    // 0x1060fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x1060F8u, 0x106100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106100u;
label_106100:
    // 0x106100: 0xc07e050  jal         func_1F8140
    ctx->pc = 0x106100u;
    SET_GPR_U32(ctx, 31, 0x106108u);
    ctx->pc = 0x106104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106100u;
    // 0x106104: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8140u, 0x106100u, 0x106108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106108u;
label_106108:
    // 0x106108: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x106108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x10610c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x10610cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x106110: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x106110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x106114: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x106114u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x106118: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x106118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10611c: 0x0  nop
    ctx->pc = 0x10611cu;
    // NOP
    // 0x106120: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x106120u;
    {
        const bool branch_taken_0x106120 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x106124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106120u;
        // 0x106124: 0x8fa5010c  lw          $a1, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106120) {
            ctx->pc = 0x106180u;
            goto label_106180;
        }
    }
    ctx->pc = 0x106128u;
    // 0x106128: 0x3c014048  lui         $at, 0x4048
    ctx->pc = 0x106128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16456 << 16));
    // 0x10612c: 0x34216c04  ori         $at, $at, 0x6C04
    ctx->pc = 0x10612cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27652);
    // 0x106130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x106130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x106134: 0x0  nop
    ctx->pc = 0x106134u;
    // NOP
    // 0x106138: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x106138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10613c: 0x0  nop
    ctx->pc = 0x10613cu;
    // NOP
    // 0x106140: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x106140u;
    {
        const bool branch_taken_0x106140 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x106144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106140u;
        // 0x106144: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106140) {
            ctx->pc = 0x106180u;
            goto label_106180;
        }
    }
    ctx->pc = 0x106148u;
    // 0x106148: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x106148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10614c: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x10614Cu;
    SET_GPR_U32(ctx, 31, 0x106154u);
    ctx->pc = 0x106150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10614Cu;
    // 0x106150: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x10614Cu, 0x106154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106154u;
label_106154:
    // 0x106154: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x106154u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x106158: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x106158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10615c: 0x24c6d880  addiu       $a2, $a2, -0x2780
    ctx->pc = 0x10615cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957184));
    // 0x106160: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x106160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x106164: 0xc056bcc  jal         func_15AF30
    ctx->pc = 0x106164u;
    SET_GPR_U32(ctx, 31, 0x10616Cu);
    ctx->pc = 0x106168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106164u;
    // 0x106168: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AF30u, 0x106164u, 0x10616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10616Cu;
label_10616c:
    // 0x10616c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10616cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106170: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x106170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x106174: 0xc051d52  jal         func_147548
    ctx->pc = 0x106174u;
    SET_GPR_U32(ctx, 31, 0x10617Cu);
    ctx->pc = 0x106178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106174u;
    // 0x106178: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x106174u, 0x10617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10617Cu;
label_10617c:
    // 0x10617c: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x10617cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_106180:
    // 0x106180: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x106180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x106184: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x106184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106188: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x106188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10618c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x10618cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x106190: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x106190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x106194: 0xafa5010c  sw          $a1, 0x10C($sp)
    ctx->pc = 0x106194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 5));
    // 0x106198: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x106198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x10619c: 0xe46100b0  swc1        $f1, 0xB0($v1)
    ctx->pc = 0x10619cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
    // 0x1061a0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1061a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1061a4: 0xe46000b4  swc1        $f0, 0xB4($v1)
    ctx->pc = 0x1061a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
    // 0x1061a8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1061a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1061ac: 0xe46100b8  swc1        $f1, 0xB8($v1)
    ctx->pc = 0x1061acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
    // 0x1061b0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1061b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1061b4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1061b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1061b8: 0x5440fe41  bnel        $v0, $zero, . + 4 + (-0x1BF << 2)
    ctx->pc = 0x1061B8u;
    {
        const bool branch_taken_0x1061b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1061b8) {
            ctx->pc = 0x1061BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1061B8u;
            // 0x1061bc: 0x8e840054  lw          $a0, 0x54($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105ac0;
        }
    }
    ctx->pc = 0x1061C0u;
label_1061c0:
    // 0x1061c0: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x1061c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1061c4: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x1061c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1061c8: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x1061c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1061cc: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x1061ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1061d0: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x1061d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1061d4: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x1061d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1061d8: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x1061d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1061dc: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x1061dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1061e0: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x1061e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1061e4: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1061e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1061e8: 0xc7ba0200  lwc1        $f26, 0x200($sp)
    ctx->pc = 0x1061e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1061ec: 0xc7b901f8  lwc1        $f25, 0x1F8($sp)
    ctx->pc = 0x1061ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1061f0: 0xc7b801f0  lwc1        $f24, 0x1F0($sp)
    ctx->pc = 0x1061f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1061f4: 0xc7b701e8  lwc1        $f23, 0x1E8($sp)
    ctx->pc = 0x1061f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1061f8: 0xc7b601e0  lwc1        $f22, 0x1E0($sp)
    ctx->pc = 0x1061f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1061fc: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x1061fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x106200: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x106200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x106204: 0x3e00008  jr          $ra
    ctx->pc = 0x106204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106204u;
        // 0x106208: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10620Cu;
    // 0x10620c: 0x0  nop
    ctx->pc = 0x10620cu;
    // NOP
    // 0x106210: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x106210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x106214: 0x0  nop
    ctx->pc = 0x106214u;
    // NOP
    ctx->pc = 0x106218u;
}
