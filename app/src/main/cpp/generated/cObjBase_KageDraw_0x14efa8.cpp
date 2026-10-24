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

// Function: cObjBase_KageDraw
// Address: 0x14efa8 - 0x14f928
void cObjBase_KageDraw_0x14efa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjBase_KageDraw_0x14efa8");
#endif

    switch (ctx->pc) {
        case 0x14f0f4u: goto label_14f0f4;
        case 0x14f158u: goto label_14f158;
        case 0x14f17cu: goto label_14f17c;
        case 0x14f1d8u: goto label_14f1d8;
        case 0x14f260u: goto label_14f260;
        case 0x14f454u: goto label_14f454;
        case 0x14f490u: goto label_14f490;
        case 0x14f4b8u: goto label_14f4b8;
        case 0x14f5b0u: goto label_14f5b0;
        case 0x14f694u: goto label_14f694;
        case 0x14f6a4u: goto label_14f6a4;
        case 0x14f76cu: goto label_14f76c;
        case 0x14f83cu: goto label_14f83c;
        case 0x14f86cu: goto label_14f86c;
        case 0x14f878u: goto label_14f878;
        case 0x14f880u: goto label_14f880;
        case 0x14f8ccu: goto label_14f8cc;
        default: break;
    }

    ctx->pc = 0x14efa8u;

    // 0x14efa8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x14efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x14efac: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x14efacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x14efb0: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x14efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x14efb4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x14efb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x14efb8: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x14efb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x14efbc: 0x24467a80  addiu       $a2, $v0, 0x7A80
    ctx->pc = 0x14efbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
    // 0x14efc0: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x14efc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x14efc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14efc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14efc8: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x14efc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x14efcc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x14efccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x14efd0: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x14efd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x14efd4: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x14efd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x14efd8: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x14efd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x14efdc: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x14efdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x14efe0: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x14efe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x14efe4: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x14efe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
    // 0x14efe8: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x14efe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x14efec: 0xe7bc0210  swc1        $f28, 0x210($sp)
    ctx->pc = 0x14efecu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x14eff0: 0xe7bb0208  swc1        $f27, 0x208($sp)
    ctx->pc = 0x14eff0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x14eff4: 0xe7ba0200  swc1        $f26, 0x200($sp)
    ctx->pc = 0x14eff4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x14eff8: 0xe7b901f8  swc1        $f25, 0x1F8($sp)
    ctx->pc = 0x14eff8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x14effc: 0xe7b801f0  swc1        $f24, 0x1F0($sp)
    ctx->pc = 0x14effcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x14f000: 0xe7b701e8  swc1        $f23, 0x1E8($sp)
    ctx->pc = 0x14f000u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x14f004: 0xe7b601e0  swc1        $f22, 0x1E0($sp)
    ctx->pc = 0x14f004u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x14f008: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x14f008u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x14f00c: 0x1460022f  bnez        $v1, . + 4 + (0x22F << 2)
    ctx->pc = 0x14F00Cu;
    {
        const bool branch_taken_0x14f00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F00Cu;
        // 0x14f010: 0xe7b401d0  swc1        $f20, 0x1D0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f00c) {
            ctx->pc = 0x14F8CCu;
            goto label_14f8cc;
        }
    }
    ctx->pc = 0x14F014u;
    // 0x14f014: 0x8e2204a8  lw          $v0, 0x4A8($s1)
    ctx->pc = 0x14f014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1192)));
    // 0x14f018: 0x440022d  bltz        $v0, . + 4 + (0x22D << 2)
    ctx->pc = 0x14F018u;
    {
        const bool branch_taken_0x14f018 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x14F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F018u;
        // 0x14f01c: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f018) {
            ctx->pc = 0x14F8D0u;
            goto label_14f8d0;
        }
    }
    ctx->pc = 0x14F020u;
    // 0x14f020: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x14f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x14f024: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14f024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14f028: 0x5440022a  bnel        $v0, $zero, . + 4 + (0x22A << 2)
    ctx->pc = 0x14F028u;
    {
        const bool branch_taken_0x14f028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f028) {
            ctx->pc = 0x14F02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F028u;
            // 0x14f02c: 0x7bb101b0  lq          $s1, 0x1B0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F8D4u;
            goto label_14f8d4;
        }
    }
    ctx->pc = 0x14F030u;
    // 0x14f030: 0xc621024c  lwc1        $f1, 0x24C($s1)
    ctx->pc = 0x14f030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f034: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x14f034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x14f038: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x14f038u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x14f03c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14f03cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f040: 0x0  nop
    ctx->pc = 0x14f040u;
    // NOP
    // 0x14f044: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f048: 0x0  nop
    ctx->pc = 0x14f048u;
    // NOP
    // 0x14f04c: 0x45030221  bc1tl       . + 4 + (0x221 << 2)
    ctx->pc = 0x14F04Cu;
    {
        const bool branch_taken_0x14f04c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f04c) {
            ctx->pc = 0x14F050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F04Cu;
            // 0x14f050: 0x7bb101b0  lq          $s1, 0x1B0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F8D4u;
            goto label_14f8d4;
        }
    }
    ctx->pc = 0x14F054u;
    // 0x14f054: 0x8e22044c  lw          $v0, 0x44C($s1)
    ctx->pc = 0x14f054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1100)));
    // 0x14f058: 0x5040021e  beql        $v0, $zero, . + 4 + (0x21E << 2)
    ctx->pc = 0x14F058u;
    {
        const bool branch_taken_0x14f058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f058) {
            ctx->pc = 0x14F05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F058u;
            // 0x14f05c: 0x7bb101b0  lq          $s1, 0x1B0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F8D4u;
            goto label_14f8d4;
        }
    }
    ctx->pc = 0x14F060u;
    // 0x14f060: 0x8e270450  lw          $a3, 0x450($s1)
    ctx->pc = 0x14f060u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x14f064: 0x10e0021a  beqz        $a3, . + 4 + (0x21A << 2)
    ctx->pc = 0x14F064u;
    {
        const bool branch_taken_0x14f064 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F064u;
        // 0x14f068: 0x24030750  addiu       $v1, $zero, 0x750 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f064) {
            ctx->pc = 0x14F8D0u;
            goto label_14f8d0;
        }
    }
    ctx->pc = 0x14F06Cu;
    // 0x14f06c: 0x8cc2fc30  lw          $v0, -0x3D0($a2)
    ctx->pc = 0x14f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294966320)));
    // 0x14f070: 0xe00013  mtlo        $a3
    ctx->pc = 0x14f070u;
    ctx->lo = GPR_U64(ctx, 7);
    // 0x14f074: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x14f074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x14f078: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14f078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14f07c: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x14f07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x14f080: 0x70430000  madd        $zero, $v0, $v1
    ctx->pc = 0x14f080u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x14f084: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x14f084u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f088: 0x2012  mflo        $a0
    ctx->pc = 0x14f088u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x14f08c: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x14f08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x14f090: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x14f090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14f094: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x14f094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x14f098: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14f098u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f09c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x14f09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f0a0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x14f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x14f0a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14f0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14f0a8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x14f0a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x14f0ac: 0x2462d880  addiu       $v0, $v1, -0x2780
    ctx->pc = 0x14f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957184));
    // 0x14f0b0: 0xc462d880  lwc1        $f2, -0x2780($v1)
    ctx->pc = 0x14f0b0u;
    { uint32_t bits = FAST_READ32(0x3BD880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f0b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f0b8: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x14f0b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
    // 0x14f0bc: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x14f0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
    // 0x14f0c0: 0x2650a920  addiu       $s0, $s2, -0x56E0
    ctx->pc = 0x14f0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945056));
    // 0x14f0c4: 0x4600c5c6  mov.s       $f23, $f24
    ctx->pc = 0x14f0c4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[24]);
    // 0x14f0c8: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x14f0c8u;
    { uint32_t bits = FAST_READ32(0x3BD88Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14f0cc: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x14f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x14f0d0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x14f0d0u;
    { uint32_t bits = FAST_READ32(0x3BD884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f0d4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x14f0d4u;
    { uint32_t bits = FAST_READ32(0x3BD888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f0d8: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x14f0d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x14f0dc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x14f0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x14f0e0: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x14f0e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x14f0e4: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x14f0e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x14f0e8: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x14f0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14f0ec: 0xc04078a  jal         func_101E28
    ctx->pc = 0x14F0ECu;
    SET_GPR_U32(ctx, 31, 0x14F0F4u);
    ctx->pc = 0x14F0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F0ECu;
    // 0x14f0f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x14F0ECu, 0x14F0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F0F4u;
label_14f0f4:
    // 0x14f0f4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x14f0f4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x14f0f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f0f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f0fc: 0x0  nop
    ctx->pc = 0x14f0fcu;
    // NOP
    // 0x14f100: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14f100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f104: 0x0  nop
    ctx->pc = 0x14f104u;
    // NOP
    // 0x14f108: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x14F108u;
    {
        const bool branch_taken_0x14f108 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F108u;
        // 0x14f10c: 0xc643a920  lwc1        $f3, -0x56E0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294945056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f108) {
            ctx->pc = 0x14F144u;
            goto label_14f144;
        }
    }
    ctx->pc = 0x14F110u;
    // 0x14f110: 0x0  nop
    ctx->pc = 0x14f110u;
    // NOP
    // 0x14f114: 0x0  nop
    ctx->pc = 0x14f114u;
    // NOP
    // 0x14f118: 0x4601b883  div.s       $f2, $f23, $f1
    ctx->pc = 0x14f118u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[23], ctx->f[1]);
    // 0x14f11c: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x14f11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f120: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x14f120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f124: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x14f124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f128: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x14f128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x14f12c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14f12cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14f130: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x14f130u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x14f134: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x14f134u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x14f138: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x14f138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x14f13c: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x14f13cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x14f140: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x14f140u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_14f144:
    // 0x14f144: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x14f144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14f148: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14f148u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f14c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x14f14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f150: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x14F150u;
    SET_GPR_U32(ctx, 31, 0x14F158u);
    ctx->pc = 0x14F154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F150u;
    // 0x14f154: 0x26240110  addiu       $a0, $s1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x14F150u, 0x14F158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F158u;
label_14f158:
    // 0x14f158: 0x0  nop
    ctx->pc = 0x14f158u;
    // NOP
    // 0x14f15c: 0x0  nop
    ctx->pc = 0x14f15cu;
    // NOP
    // 0x14f160: 0x46000584  c1          0x584
    ctx->pc = 0x14f160u;
    ctx->f[22] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x14f164: 0x4616b032  c.eq.s      $f22, $f22
    ctx->pc = 0x14f164u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f168: 0x0  nop
    ctx->pc = 0x14f168u;
    // NOP
    // 0x14f16c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x14F16Cu;
    {
        const bool branch_taken_0x14f16c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f16c) {
            ctx->pc = 0x14F180u;
            goto label_14f180;
        }
    }
    ctx->pc = 0x14F174u;
    // 0x14f174: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x14F174u;
    SET_GPR_U32(ctx, 31, 0x14F17Cu);
    ctx->pc = 0x14F178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F174u;
    // 0x14f178: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x14F174u, 0x14F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F17Cu;
label_14f17c:
    // 0x14f17c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x14f17cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_14f180:
    // 0x14f180: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x14f180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x14f184: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x14f184u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x14f188: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14f188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f18c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x14f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x14f190: 0x8e2204a8  lw          $v0, 0x4A8($s1)
    ctx->pc = 0x14f190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1192)));
    // 0x14f194: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14f194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14f198: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14F198u;
    {
        const bool branch_taken_0x14f198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F198u;
        // 0x14f19c: 0x4600b642  mul.s       $f25, $f22, $f0 (Delay Slot)
        ctx->f[25] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f198) {
            ctx->pc = 0x14F1F4u;
            goto label_14f1f4;
        }
    }
    ctx->pc = 0x14F1A0u;
    // 0x14f1a0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x14f1a4: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x14f1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x14f1a8: 0x8c62aff0  lw          $v0, -0x5010($v1)
    ctx->pc = 0x14f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x14f1ac: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x14f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x14f1b0: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x14f1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14f1b4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14f1b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f1b8: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x14f1b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14f1bc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x14f1bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14f1c0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x14f1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f1c4: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x14f1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14f1c8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x14f1c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f1cc: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x14f1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f1d0: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x14F1D0u;
    SET_GPR_U32(ctx, 31, 0x14F1D8u);
    ctx->pc = 0x14F1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F1D0u;
    // 0x14f1d4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x14F1D0u, 0x14F1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F1D8u;
label_14f1d8:
    // 0x14f1d8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x14f1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x14f1dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14f1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f1e0: 0x0  nop
    ctx->pc = 0x14f1e0u;
    // NOP
    // 0x14f1e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f1e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f1e8: 0x0  nop
    ctx->pc = 0x14f1e8u;
    // NOP
    // 0x14f1ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x14F1ECu;
    {
        const bool branch_taken_0x14f1ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1ECu;
        // 0x14f1f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1ec) {
            ctx->pc = 0x14F1F8u;
            goto label_14f1f8;
        }
    }
    ctx->pc = 0x14F1F4u;
label_14f1f4:
    // 0x14f1f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14f1f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f1f8:
    // 0x14f1f8: 0x14400131  bnez        $v0, . + 4 + (0x131 << 2)
    ctx->pc = 0x14F1F8u;
    {
        const bool branch_taken_0x14f1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1F8u;
        // 0x14f1fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1f8) {
            ctx->pc = 0x14F6C0u;
            goto label_14f6c0;
        }
    }
    ctx->pc = 0x14F200u;
    // 0x14f200: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x14f200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14f204: 0x298c0  sll         $s3, $v0, 3
    ctx->pc = 0x14f204u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14f208: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x14f208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14f20c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x14f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14f210: 0x24940080  addiu       $s4, $a0, 0x80
    ctx->pc = 0x14f210u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x14f214: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x14f214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x14f218: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14f218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14f21c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x14f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x14f220: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x14f220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
    // 0x14f224: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x14f224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x14f228: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x14f228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14f22c: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x14f22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x14f230: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x14f230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x14f234: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x14f234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x14f238: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14f238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14f23c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x14f23cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x14f240: 0x4480e000  mtc1        $zero, $f28
    ctx->pc = 0x14f240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x14f244: 0x27be0040  addiu       $fp, $sp, 0x40
    ctx->pc = 0x14f244u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14f248: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x14f248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x14f24c: 0x27b700c0  addiu       $s7, $sp, 0xC0
    ctx->pc = 0x14f24cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14f250: 0xafa4012c  sw          $a0, 0x12C($sp)
    ctx->pc = 0x14f250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 4));
    // 0x14f254: 0x27b600e0  addiu       $s6, $sp, 0xE0
    ctx->pc = 0x14f254u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x14f258: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x14f258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x14f25c: 0x0  nop
    ctx->pc = 0x14f25cu;
    // NOP
label_14f260:
    // 0x14f260: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x14f260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x14f264: 0x1c6000bb  bgtz        $v1, . + 4 + (0xBB << 2)
    ctx->pc = 0x14F264u;
    {
        const bool branch_taken_0x14f264 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x14F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F264u;
        // 0x14f268: 0x8fa40108  lw          $a0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f264) {
            ctx->pc = 0x14F554u;
            goto label_14f554;
        }
    }
    ctx->pc = 0x14F26Cu;
    // 0x14f26c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x14f26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x14f270: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x14f270u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x14f274: 0x8e22044c  lw          $v0, 0x44C($s1)
    ctx->pc = 0x14f274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1100)));
    // 0x14f278: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x14f278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14f27c: 0xafa4010c  sw          $a0, 0x10C($sp)
    ctx->pc = 0x14f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 4));
    // 0x14f280: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x14f280u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14f284: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x14f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x14f288: 0x90420005  lbu         $v0, 0x5($v0)
    ctx->pc = 0x14f288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x14f28c: 0x107e0007  beq         $v1, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x14F28Cu;
    {
        const bool branch_taken_0x14f28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        ctx->pc = 0x14F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F28Cu;
        // 0x14f290: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f28c) {
            ctx->pc = 0x14F2ACu;
            goto label_14f2ac;
        }
    }
    ctx->pc = 0x14F294u;
    // 0x14f294: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x14f294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f298: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x14f298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f29c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x14f29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x14f2a0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x14f2a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x14f2a4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x14f2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f2a8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x14f2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_14f2ac:
    // 0x14f2ac: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x14f2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f2b0: 0x4600c6c6  mov.s       $f27, $f24
    ctx->pc = 0x14f2b0u;
    ctx->f[27] = FPU_MOV_S(ctx->f[24]);
    // 0x14f2b4: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x14f2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14f2b8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x14f2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f2bc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14f2c0: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x14f2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f2c4: 0x8e22044c  lw          $v0, 0x44C($s1)
    ctx->pc = 0x14f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1100)));
    // 0x14f2c8: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x14f2c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x14f2cc: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x14f2ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x14f2d0: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x14f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x14f2d4: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x14f2d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x14f2d8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x14f2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14f2dc: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x14f2dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14f2e0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F2E0u;
    {
        const bool branch_taken_0x14f2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2E0u;
        // 0x14f2e4: 0x4600be86  mov.s       $f26, $f23 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2e0) {
            ctx->pc = 0x14F2F4u;
            goto label_14f2f4;
        }
    }
    ctx->pc = 0x14F2E8u;
    // 0x14f2e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f2ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14F2ECu;
    {
        const bool branch_taken_0x14f2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2ECu;
        // 0x14f2f0: 0xafa20104  sw          $v0, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2ec) {
            ctx->pc = 0x14F338u;
            goto label_14f338;
        }
    }
    ctx->pc = 0x14F2F4u;
label_14f2f4:
    // 0x14f2f4: 0x90840004  lbu         $a0, 0x4($a0)
    ctx->pc = 0x14f2f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14f2f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14f2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f2fc: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x14f2fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x14f300: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x14f300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x14f304: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F304u;
    {
        const bool branch_taken_0x14f304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F304u;
        // 0x14f308: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f304) {
            ctx->pc = 0x14F314u;
            goto label_14f314;
        }
    }
    ctx->pc = 0x14F30Cu;
    // 0x14f30c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x14f30cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14f310: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14f310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14f314:
    // 0x14f314: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x14f314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14f318: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F318u;
    {
        const bool branch_taken_0x14f318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F318u;
        // 0x14f31c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f318) {
            ctx->pc = 0x14F330u;
            goto label_14f330;
        }
    }
    ctx->pc = 0x14F320u;
    // 0x14f320: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x14f320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x14f324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14f324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14f328: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14F328u;
    {
        const bool branch_taken_0x14f328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F328u;
        // 0x14f32c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f328) {
            ctx->pc = 0x14F334u;
            goto label_14f334;
        }
    }
    ctx->pc = 0x14F330u;
label_14f330:
    // 0x14f330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14f330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f334:
    // 0x14f334: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x14f334u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14f338:
    // 0x14f338: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x14f338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x14f33c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f340: 0x75200a  movz        $a0, $v1, $s5
    ctx->pc = 0x14f340u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x14f344: 0xafa40104  sw          $a0, 0x104($sp)
    ctx->pc = 0x14f344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 4));
    // 0x14f348: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x14f348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14f34c: 0x12a0002a  beqz        $s5, . + 4 + (0x2A << 2)
    ctx->pc = 0x14F34Cu;
    {
        const bool branch_taken_0x14f34c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F34Cu;
        // 0x14f350: 0x8fa20118  lw          $v0, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f34c) {
            ctx->pc = 0x14F3F8u;
            goto label_14f3f8;
        }
    }
    ctx->pc = 0x14F354u;
    // 0x14f354: 0xc6a000b0  lwc1        $f0, 0xB0($s5)
    ctx->pc = 0x14f354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f358: 0xc6a100b4  lwc1        $f1, 0xB4($s5)
    ctx->pc = 0x14f358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f35c: 0xc6a200b8  lwc1        $f2, 0xB8($s5)
    ctx->pc = 0x14f35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f360: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x14f360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x14f364: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x14f364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x14f368: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x14f368u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x14f36c: 0xe455000c  swc1        $f21, 0xC($v0)
    ctx->pc = 0x14f36cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x14f370: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x14f370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f374: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x14f374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f378: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x14f378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f37c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x14f37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x14f380: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x14f380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x14f384: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x14f384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x14f388: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x14f388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x14f38c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x14f38cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14f390: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x14f390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f394: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x14f394u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14f398: 0x4408c800  mfc1        $t0, $f25
    ctx->pc = 0x14f398u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[25], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x14f39c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x14f39cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x14f3a0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x14f3a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14f3a4: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x14f3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f3a8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x14f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x14f3ac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14f3acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f3b0: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x14f3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f3b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14f3b8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x14f3b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14f3bc: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x14f3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f3c0: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x14f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x14f3c4: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x14f3c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14f3c8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x14f3c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f3cc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x14f3ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14f3d0: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x14f3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f3d4: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x14f3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x14f3d8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x14f3d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14f3dc: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x14f3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f3e0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x14f3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f3e4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x14f3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f3e8: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x14f3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f3ec: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x14f3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x14f3f0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x14f3f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x14f3f4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x14f3f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_14f3f8:
    // 0x14f3f8: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x14f3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14f3fc: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x14f3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x14f400: 0x8e027a78  lw          $v0, 0x7A78($s0)
    ctx->pc = 0x14f400u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A78u));
    // 0x14f404: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x14f404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x14f408: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14F408u;
    {
        const bool branch_taken_0x14f408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F408u;
        // 0x14f40c: 0x8e027a78  lw          $v0, 0x7A78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f408) {
            ctx->pc = 0x14F45Cu;
            goto label_14f45c;
        }
    }
    ctx->pc = 0x14F410u;
    // 0x14f410: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x14f410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x14f414: 0x5440004e  bnel        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x14F414u;
    {
        const bool branch_taken_0x14f414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f414) {
            ctx->pc = 0x14F418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F414u;
            // 0x14f418: 0xafa00110  sw          $zero, 0x110($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F550u;
            goto label_14f550;
        }
    }
    ctx->pc = 0x14F41Cu;
    // 0x14f41c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x14f41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x14f420: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14f420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14f424: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x14f424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x14f428: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14f428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f42c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x14f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x14f430: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14f430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f434: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x14f434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x14f438: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x14f438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14f43c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x14f43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x14f440: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14f440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f444: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14f444u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f448: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14f448u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f44c: 0xc04c784  jal         func_131E10
    ctx->pc = 0x14F44Cu;
    SET_GPR_U32(ctx, 31, 0x14F454u);
    ctx->pc = 0x14F450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F44Cu;
    // 0x14f450: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x14F44Cu, 0x14F454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F454u;
label_14f454:
    // 0x14f454: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x14F454u;
    {
        const bool branch_taken_0x14f454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F454u;
        // 0x14f458: 0x8e027a78  lw          $v0, 0x7A78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f454) {
            ctx->pc = 0x14F54Cu;
            goto label_14f54c;
        }
    }
    ctx->pc = 0x14F45Cu;
label_14f45c:
    // 0x14f45c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x14f45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x14f460: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14F460u;
    {
        const bool branch_taken_0x14f460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F460u;
        // 0x14f464: 0x27b000a0  addiu       $s0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f460) {
            ctx->pc = 0x14F490u;
            goto label_14f490;
        }
    }
    ctx->pc = 0x14F468u;
    // 0x14f468: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x14f468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x14f46c: 0x2463d8b0  addiu       $v1, $v1, -0x2750
    ctx->pc = 0x14f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957232));
    // 0x14f470: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x14f470u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD8B0u));
    // 0x14f474: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x14f474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f478: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14f478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f47c: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x14f47cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x14f480: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14f480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f484: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14f484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14f488: 0xc04d7b2  jal         func_135EC8
    ctx->pc = 0x14F488u;
    SET_GPR_U32(ctx, 31, 0x14F490u);
    ctx->pc = 0x14F48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F488u;
    // 0x14f48c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135EC8u, 0x14F488u, 0x14F490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F490u;
label_14f490:
    // 0x14f490: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14f490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f494: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x14f494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x14f498: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x14f498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x14f49c: 0x2442d8b0  addiu       $v0, $v0, -0x2750
    ctx->pc = 0x14f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957232));
    // 0x14f4a0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14f4a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD8B0u));
    // 0x14f4a4: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x14f4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f4a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14f4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f4ac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14f4b0: 0xc056a1e  jal         func_15A878
    ctx->pc = 0x14F4B0u;
    SET_GPR_U32(ctx, 31, 0x14F4B8u);
    ctx->pc = 0x14F4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F4B0u;
    // 0x14f4b4: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A878u, 0x14F4B0u, 0x14F4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F4B8u;
label_14f4b8:
    // 0x14f4b8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x14f4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f4bc: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x14f4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f4c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14f4c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14f4c4: 0x46190003  div.s       $f0, $f0, $f25
    ctx->pc = 0x14f4c4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[25]);
    // 0x14f4c8: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x14f4c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x14f4cc: 0x461c0034  c.lt.s      $f0, $f28
    ctx->pc = 0x14f4ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f4d0: 0x0  nop
    ctx->pc = 0x14f4d0u;
    // NOP
    // 0x14f4d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14F4D4u;
    {
        const bool branch_taken_0x14f4d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4D4u;
        // 0x14f4d8: 0xe7b500f0  swc1        $f21, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4d4) {
            ctx->pc = 0x14F4E0u;
            goto label_14f4e0;
        }
    }
    ctx->pc = 0x14F4DCu;
    // 0x14f4dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f4dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f4e0:
    // 0x14f4e0: 0x0  nop
    ctx->pc = 0x14f4e0u;
    // NOP
    // 0x14f4e4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x14f4e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f4e8: 0x0  nop
    ctx->pc = 0x14f4e8u;
    // NOP
    // 0x14f4ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14F4ECu;
    {
        const bool branch_taken_0x14f4ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4ECu;
        // 0x14f4f0: 0x4600a906  mov.s       $f4, $f21 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4ec) {
            ctx->pc = 0x14F4F8u;
            goto label_14f4f8;
        }
    }
    ctx->pc = 0x14F4F4u;
    // 0x14f4f4: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x14f4f4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
label_14f4f8:
    // 0x14f4f8: 0x8e22044c  lw          $v0, 0x44C($s1)
    ctx->pc = 0x14f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1100)));
    // 0x14f4fc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x14f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x14f500: 0x24634700  addiu       $v1, $v1, 0x4700
    ctx->pc = 0x14f500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18176));
    // 0x14f504: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x14f504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x14f508: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x14f508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x14f50c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14f50cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f510: 0xc4636230  lwc1        $f3, 0x6230($v1)
    ctx->pc = 0x14f510u;
    { uint32_t bits = FAST_READ32(0x61A930u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14f514: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x14f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x14f518: 0x90430006  lbu         $v1, 0x6($v0)
    ctx->pc = 0x14f518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x14f51c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f51cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f520: 0xc622024c  lwc1        $f2, 0x24C($s1)
    ctx->pc = 0x14f520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f524: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14f524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f528: 0x0  nop
    ctx->pc = 0x14f528u;
    // NOP
    // 0x14f52c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14f52cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14f530: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x14f530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x14f534: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x14f534u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x14f538: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14f538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f53c: 0x461605c2  mul.s       $f23, $f0, $f22
    ctx->pc = 0x14f53cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x14f540: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x14f540u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x14f544: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14F544u;
    {
        const bool branch_taken_0x14f544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F544u;
        // 0x14f548: 0x46020e02  mul.s       $f24, $f1, $f2 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f544) {
            ctx->pc = 0x14F550u;
            goto label_14f550;
        }
    }
    ctx->pc = 0x14F54Cu;
label_14f54c:
    // 0x14f54c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x14f54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_14f550:
    // 0x14f550: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x14f550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_14f554:
    // 0x14f554: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x14f554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x14f558: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14f558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14f55c: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x14F55Cu;
    {
        const bool branch_taken_0x14f55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F55Cu;
        // 0x14f560: 0xafa40108  sw          $a0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f55c) {
            ctx->pc = 0x14F69Cu;
            goto label_14f69c;
        }
    }
    ctx->pc = 0x14F564u;
    // 0x14f564: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x14f564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x14f568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f56c: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x14F56Cu;
    {
        const bool branch_taken_0x14f56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F56Cu;
        // 0x14f570: 0x8fa4010c  lw          $a0, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f56c) {
            ctx->pc = 0x14F69Cu;
            goto label_14f69c;
        }
    }
    ctx->pc = 0x14F574u;
    // 0x14f574: 0x14830049  bne         $a0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x14F574u;
    {
        const bool branch_taken_0x14f574 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F574u;
        // 0x14f578: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f574) {
            ctx->pc = 0x14F69Cu;
            goto label_14f69c;
        }
    }
    ctx->pc = 0x14F57Cu;
    // 0x14f57c: 0x8e23044c  lw          $v1, 0x44C($s1)
    ctx->pc = 0x14f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1100)));
    // 0x14f580: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x14f580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f584: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14f584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14f588: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x14f588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14f58c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x14f58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x14f590: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x14f590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14f594: 0x90620005  lbu         $v0, 0x5($v1)
    ctx->pc = 0x14f594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x14f598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f59c: 0x0  nop
    ctx->pc = 0x14f59cu;
    // NOP
    // 0x14f5a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14f5a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14f5a4: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x14f5a4u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x14f5a8: 0xc0569a8  jal         func_15A6A0
    ctx->pc = 0x14F5A8u;
    SET_GPR_U32(ctx, 31, 0x14F5B0u);
    ctx->pc = 0x14F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F5A8u;
    // 0x14f5ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A6A0u, 0x14F5A8u, 0x14F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F5B0u;
label_14f5b0:
    // 0x14f5b0: 0x4618d801  sub.s       $f0, $f27, $f24
    ctx->pc = 0x14f5b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[27], ctx->f[24]);
    // 0x14f5b4: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x14f5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x14f5b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14f5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14f5bc: 0x0  nop
    ctx->pc = 0x14f5bcu;
    // NOP
    // 0x14f5c0: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x14f5c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x14f5c4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14f5c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14f5c8: 0x4600c040  add.s       $f1, $f24, $f0
    ctx->pc = 0x14f5c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x14f5cc: 0x461c0834  c.lt.s      $f1, $f28
    ctx->pc = 0x14f5ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f5d0: 0x0  nop
    ctx->pc = 0x14f5d0u;
    // NOP
    // 0x14f5d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14F5D4u;
    {
        const bool branch_taken_0x14f5d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5D4u;
        // 0x14f5d8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5d4) {
            ctx->pc = 0x14F5E0u;
            goto label_14f5e0;
        }
    }
    ctx->pc = 0x14F5DCu;
    // 0x14f5dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f5e0:
    // 0x14f5e0: 0x0  nop
    ctx->pc = 0x14f5e0u;
    // NOP
    // 0x14f5e4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x14f5e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f5e8: 0x0  nop
    ctx->pc = 0x14f5e8u;
    // NOP
    // 0x14f5ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14F5ECu;
    {
        const bool branch_taken_0x14f5ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5ECu;
        // 0x14f5f0: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5ec) {
            ctx->pc = 0x14F5F8u;
            goto label_14f5f8;
        }
    }
    ctx->pc = 0x14F5F4u;
    // 0x14f5f4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x14f5f4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_14f5f8:
    // 0x14f5f8: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x14f5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14f5fc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x14f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x14f600: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14f600u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f604: 0xdbc50000  lqc2        $vf5, 0x0($fp)
    ctx->pc = 0x14f604u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14f608: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x14f608u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14f60c: 0xfae40020  sqc2        $vf4, 0x20($s7)
    ctx->pc = 0x14f60cu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f610: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x14f610u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14f614: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x14f614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f618: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x14f618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x14f61c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x14f61cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f620: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x14f620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f624: 0xdba400e0  lqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x14f624u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14f628: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x14f628u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x14f62c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x14f62cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x14f630: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x14f630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14f634: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x14f634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f638: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x14f638u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14f63c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x14f63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f640: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x14f640u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14f644: 0xfae40020  sqc2        $vf4, 0x20($s7)
    ctx->pc = 0x14f644u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f648: 0xdba400e0  lqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x14f648u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14f64c: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x14f64cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14f650: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x14f650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14f654: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x14f654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f658: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x14f658u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14f65c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x14f65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f660: 0x4617d301  sub.s       $f12, $f26, $f23
    ctx->pc = 0x14f660u;
    ctx->f[12] = FPU_SUB_S(ctx->f[26], ctx->f[23]);
    // 0x14f664: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14f664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14f668: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14f668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f66c: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f66cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x14f670: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x14f670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x14f674: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x14f674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14f678: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14f678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f67c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x14f67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14f680: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x14f680u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x14f684: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x14f684u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x14f688: 0x460cbb00  add.s       $f12, $f23, $f12
    ctx->pc = 0x14f688u;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[12]);
    // 0x14f68c: 0xc057b18  jal         func_15EC60
    ctx->pc = 0x14F68Cu;
    SET_GPR_U32(ctx, 31, 0x14F694u);
    ctx->pc = 0x14F690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F68Cu;
    // 0x14f690: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC60u, 0x14F68Cu, 0x14F694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F694u;
label_14f694:
    // 0x14f694: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14F694u;
    {
        const bool branch_taken_0x14f694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F694u;
        // 0x14f698: 0x8fa20114  lw          $v0, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f694) {
            ctx->pc = 0x14F6A8u;
            goto label_14f6a8;
        }
    }
    ctx->pc = 0x14F69Cu;
label_14f69c:
    // 0x14f69c: 0xc057bb8  jal         func_15EEE0
    ctx->pc = 0x14F69Cu;
    SET_GPR_U32(ctx, 31, 0x14F6A4u);
    ctx->pc = 0x14F6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F69Cu;
    // 0x14f6a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EEE0u, 0x14F69Cu, 0x14F6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6A4u;
label_14f6a4:
    // 0x14f6a4: 0x8fa20114  lw          $v0, 0x114($sp)
    ctx->pc = 0x14f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_14f6a8:
    // 0x14f6a8: 0x26940090  addiu       $s4, $s4, 0x90
    ctx->pc = 0x14f6a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x14f6ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14f6b0: 0x441feeb  bgez        $v0, . + 4 + (-0x115 << 2)
    ctx->pc = 0x14F6B0u;
    {
        const bool branch_taken_0x14f6b0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x14F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6B0u;
        // 0x14f6b4: 0xafa20114  sw          $v0, 0x114($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6b0) {
            ctx->pc = 0x14F260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f260;
        }
    }
    ctx->pc = 0x14F6B8u;
    // 0x14f6b8: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x14F6B8u;
    {
        const bool branch_taken_0x14f6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6B8u;
        // 0x14f6bc: 0x822202b5  lb          $v0, 0x2B5($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 693)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6b8) {
            ctx->pc = 0x14F894u;
            goto label_14f894;
        }
    }
    ctx->pc = 0x14F6C0u;
label_14f6c0:
    // 0x14f6c0: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x14f6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14f6c4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x14f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x14f6c8: 0x24040750  addiu       $a0, $zero, 0x750
    ctx->pc = 0x14f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1872));
    // 0x14f6cc: 0x8c4376b0  lw          $v1, 0x76B0($v0)
    ctx->pc = 0x14f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7476B0u));
    // 0x14f6d0: 0x4600c807  neg.s       $f0, $f25
    ctx->pc = 0x14f6d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[25]);
    // 0x14f6d4: 0x8e250450  lw          $a1, 0x450($s1)
    ctx->pc = 0x14f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x14f6d8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x14f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x14f6dc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x14f6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x14f6e0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x14f6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x14f6e4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x14f6e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14f6e8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x14f6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x14f6ec: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x14f6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x14f6f0: 0x27b600b0  addiu       $s6, $sp, 0xB0
    ctx->pc = 0x14f6f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14f6f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14f6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14f6f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14f6f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14f6fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14f6fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f700: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x14f700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x14f704: 0xa3a821  addu        $s5, $a1, $v1
    ctx->pc = 0x14f704u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14f708: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x14f708u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x14f70c: 0x26b20080  addiu       $s2, $s5, 0x80
    ctx->pc = 0x14f70cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x14f710: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x14f710u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14f714: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x14f714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f718: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x14f718u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14f71c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x14f71cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f720: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x14f720u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14f724: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x14f724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f728: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x14f728u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14f72c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x14f72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f730: 0x26340460  addiu       $s4, $s1, 0x460
    ctx->pc = 0x14f730u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1120));
    // 0x14f734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f738: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x14f738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x14f73c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x14f73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14f740: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x14f740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x14f744: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x14f744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14f748: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x14f748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x14f74c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x14f74cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f750: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x14f750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x14f754: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14f754u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f758: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x14f758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x14f75c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14f75cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f760: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14f760u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f764: 0xc04c784  jal         func_131E10
    ctx->pc = 0x14F764u;
    SET_GPR_U32(ctx, 31, 0x14F76Cu);
    ctx->pc = 0x14F768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F764u;
    // 0x14f768: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x14F764u, 0x14F76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F76Cu;
label_14f76c:
    // 0x14f76c: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x14F76Cu;
    {
        const bool branch_taken_0x14f76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F76Cu;
        // 0x14f770: 0xc7a00084  lwc1        $f0, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f76c) {
            ctx->pc = 0x14F884u;
            goto label_14f884;
        }
    }
    ctx->pc = 0x14F774u;
    // 0x14f774: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x14f774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x14f778: 0xe6200470  swc1        $f0, 0x470($s1)
    ctx->pc = 0x14f778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1136), bits); }
    // 0x14f77c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x14f77cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x14f780: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x14f780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f784: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14f784u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14f788: 0x46190003  div.s       $f0, $f0, $f25
    ctx->pc = 0x14f788u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[25]);
    // 0x14f78c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x14f78cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x14f790: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x14f790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f794: 0x0  nop
    ctx->pc = 0x14f794u;
    // NOP
    // 0x14f798: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14F798u;
    {
        const bool branch_taken_0x14f798 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F798u;
        // 0x14f79c: 0xe7b400f8  swc1        $f20, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f798) {
            ctx->pc = 0x14F7A4u;
            goto label_14f7a4;
        }
    }
    ctx->pc = 0x14F7A0u;
    // 0x14f7a0: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x14f7a0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_14f7a4:
    // 0x14f7a4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x14f7a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f7a8: 0x0  nop
    ctx->pc = 0x14f7a8u;
    // NOP
    // 0x14f7ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14F7ACu;
    {
        const bool branch_taken_0x14f7ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F7ACu;
        // 0x14f7b0: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7ac) {
            ctx->pc = 0x14F7B8u;
            goto label_14f7b8;
        }
    }
    ctx->pc = 0x14F7B4u;
    // 0x14f7b4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x14f7b4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_14f7b8:
    // 0x14f7b8: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x14f7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x14f7bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14f7bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14f7c0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x14f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x14f7c4: 0x24424700  addiu       $v0, $v0, 0x4700
    ctx->pc = 0x14f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18176));
    // 0x14f7c8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x14f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x14f7cc: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x14f7ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x14f7d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14f7d4: 0xc4416230  lwc1        $f1, 0x6230($v0)
    ctx->pc = 0x14f7d4u;
    { uint32_t bits = FAST_READ32(0x61A930u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f7d8: 0xc622024c  lwc1        $f2, 0x24C($s1)
    ctx->pc = 0x14f7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f7dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14f7dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14f7e0: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x14f7e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x14f7e4: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x14f7e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14f7e8: 0x4604a034  c.lt.s      $f20, $f4
    ctx->pc = 0x14f7e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f7ec: 0x0  nop
    ctx->pc = 0x14f7ecu;
    // NOP
    // 0x14f7f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14F7F0u;
    {
        const bool branch_taken_0x14f7f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F7F0u;
        // 0x14f7f4: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7f0) {
            ctx->pc = 0x14F7FCu;
            goto label_14f7fc;
        }
    }
    ctx->pc = 0x14F7F8u;
    // 0x14f7f8: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x14f7f8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_14f7fc:
    // 0x14f7fc: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x14f7fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f800: 0x0  nop
    ctx->pc = 0x14f800u;
    // NOP
    // 0x14f804: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14F804u;
    {
        const bool branch_taken_0x14f804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F804u;
        // 0x14f808: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f804) {
            ctx->pc = 0x14F810u;
            goto label_14f810;
        }
    }
    ctx->pc = 0x14F80Cu;
    // 0x14f80c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x14f80cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_14f810:
    // 0x14f810: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x14f810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x14f814: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x14f814u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x14f818: 0x2442d8b0  addiu       $v0, $v0, -0x2750
    ctx->pc = 0x14f818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957232));
    // 0x14f81c: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x14f81cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14f820: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14f820u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD8B0u));
    // 0x14f824: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x14f824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14f828: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x14f828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f82c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14f82cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f834: 0xc056a1e  jal         func_15A878
    ctx->pc = 0x14F834u;
    SET_GPR_U32(ctx, 31, 0x14F83Cu);
    ctx->pc = 0x14F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F834u;
    // 0x14f838: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A878u, 0x14F834u, 0x14F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F83Cu;
label_14f83c:
    // 0x14f83c: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x14f83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x14f840: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x14f840u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x14f844: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14f844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f848: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f848u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14f84c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x14f84cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x14f850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14f850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f854: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x14f854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14f858: 0x460cb302  mul.s       $f12, $f22, $f12
    ctx->pc = 0x14f858u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
    // 0x14f85c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14f85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f860: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x14f860u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x14f864: 0xc057b18  jal         func_15EC60
    ctx->pc = 0x14F864u;
    SET_GPR_U32(ctx, 31, 0x14F86Cu);
    ctx->pc = 0x14F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F864u;
    // 0x14f868: 0x26b20110  addiu       $s2, $s5, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC60u, 0x14F864u, 0x14F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F86Cu;
label_14f86c:
    // 0x14f86c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14F86Cu;
    {
        const bool branch_taken_0x14f86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F86Cu;
        // 0x14f870: 0x2a62000c  slti        $v0, $s3, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f86c) {
            ctx->pc = 0x14F888u;
            goto label_14f888;
        }
    }
    ctx->pc = 0x14F874u;
    // 0x14f874: 0x0  nop
    ctx->pc = 0x14f874u;
    // NOP
label_14f878:
    // 0x14f878: 0xc057bb8  jal         func_15EEE0
    ctx->pc = 0x14F878u;
    SET_GPR_U32(ctx, 31, 0x14F880u);
    ctx->pc = 0x14F87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F878u;
    // 0x14f87c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EEE0u, 0x14F878u, 0x14F880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F880u;
label_14f880:
    // 0x14f880: 0x26520090  addiu       $s2, $s2, 0x90
    ctx->pc = 0x14f880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_14f884:
    // 0x14f884: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x14f884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
label_14f888:
    // 0x14f888: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14F888u;
    {
        const bool branch_taken_0x14f888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F888u;
        // 0x14f88c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f888) {
            ctx->pc = 0x14F878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f878;
        }
    }
    ctx->pc = 0x14F890u;
    // 0x14f890: 0x822202b5  lb          $v0, 0x2B5($s1)
    ctx->pc = 0x14f890u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 693)));
label_14f894:
    // 0x14f894: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x14f894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x14f898: 0x862802ac  lh          $t0, 0x2AC($s1)
    ctx->pc = 0x14f898u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 684)));
    // 0x14f89c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14f89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f8a0: 0x24644c80  addiu       $a0, $v1, 0x4C80
    ctx->pc = 0x14f8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
    // 0x14f8a4: 0x240903fe  addiu       $t1, $zero, 0x3FE
    ctx->pc = 0x14f8a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
    // 0x14f8a8: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x14f8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x14f8ac: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x14f8acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14f8b0: 0x25080034  addiu       $t0, $t0, 0x34
    ctx->pc = 0x14f8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 52));
    // 0x14f8b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14f8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f8b8: 0x29020001  slti        $v0, $t0, 0x1
    ctx->pc = 0x14f8b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x14f8bc: 0x102300a  movz        $a2, $t0, $v0
    ctx->pc = 0x14f8bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
    // 0x14f8c0: 0x28c303fe  slti        $v1, $a2, 0x3FE
    ctx->pc = 0x14f8c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1022) ? 1 : 0);
    // 0x14f8c4: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14F8C4u;
    SET_GPR_U32(ctx, 31, 0x14F8CCu);
    ctx->pc = 0x14F8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F8C4u;
    // 0x14f8c8: 0x123300a  movz        $a2, $t1, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14F8C4u, 0x14F8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F8CCu;
label_14f8cc:
    // 0x14f8cc: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x14f8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_14f8d0:
    // 0x14f8d0: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x14f8d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_14f8d4:
    // 0x14f8d4: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x14f8d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x14f8d8: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x14f8d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x14f8dc: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x14f8dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x14f8e0: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x14f8e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x14f8e4: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x14f8e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x14f8e8: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x14f8e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x14f8ec: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x14f8ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x14f8f0: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x14f8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x14f8f4: 0xc7bc0210  lwc1        $f28, 0x210($sp)
    ctx->pc = 0x14f8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x14f8f8: 0xc7bb0208  lwc1        $f27, 0x208($sp)
    ctx->pc = 0x14f8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x14f8fc: 0xc7ba0200  lwc1        $f26, 0x200($sp)
    ctx->pc = 0x14f8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x14f900: 0xc7b901f8  lwc1        $f25, 0x1F8($sp)
    ctx->pc = 0x14f900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x14f904: 0xc7b801f0  lwc1        $f24, 0x1F0($sp)
    ctx->pc = 0x14f904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x14f908: 0xc7b701e8  lwc1        $f23, 0x1E8($sp)
    ctx->pc = 0x14f908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x14f90c: 0xc7b601e0  lwc1        $f22, 0x1E0($sp)
    ctx->pc = 0x14f90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x14f910: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x14f910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14f914: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x14f914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14f918: 0x3e00008  jr          $ra
    ctx->pc = 0x14F918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F918u;
        // 0x14f91c: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F920u;
    // 0x14f920: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14f920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14f924: 0x0  nop
    ctx->pc = 0x14f924u;
    // NOP
    ctx->pc = 0x14f928u;
}
