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

// Function: func_0027D400
// Address: 0x27d400 - 0x27d670
void func_0027D400_0x27d400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027D400_0x27d400");
#endif

    switch (ctx->pc) {
        case 0x27d4c0u: goto label_27d4c0;
        case 0x27d4d8u: goto label_27d4d8;
        case 0x27d518u: goto label_27d518;
        case 0x27d62cu: goto label_27d62c;
        default: break;
    }

    ctx->pc = 0x27d400u;

    // 0x27d400: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x27d400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x27d404: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x27d404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x27d408: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x27d408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x27d40c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x27d40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x27d410: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27d410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d414: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x27d414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x27d418: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x27d418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x27d41c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x27d41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x27d420: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x27d420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x27d424: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x27d424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x27d428: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x27d428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x27d42c: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x27d42cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x27d430: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x27d430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27d434: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D434u;
    {
        const bool branch_taken_0x27d434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D434u;
        // 0x27d438: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d434) {
            ctx->pc = 0x27D448u;
            goto label_27d448;
        }
    }
    ctx->pc = 0x27D43Cu;
    // 0x27d43c: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x27d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x27d440: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27D440u;
    {
        const bool branch_taken_0x27d440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D440u;
        // 0x27d444: 0x8c53004c  lw          $s3, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d440) {
            ctx->pc = 0x27D44Cu;
            goto label_27d44c;
        }
    }
    ctx->pc = 0x27D448u;
label_27d448:
    // 0x27d448: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27d448u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d44c:
    // 0x27d44c: 0x1260007f  beqz        $s3, . + 4 + (0x7F << 2)
    ctx->pc = 0x27D44Cu;
    {
        const bool branch_taken_0x27d44c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D44Cu;
        // 0x27d450: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d44c) {
            ctx->pc = 0x27D64Cu;
            goto label_27d64c;
        }
    }
    ctx->pc = 0x27D454u;
    // 0x27d454: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x27d454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27d458: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x27d458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x27d45c: 0x26420490  addiu       $v0, $s2, 0x490
    ctx->pc = 0x27d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x27d460: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x27d460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27d464: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x27d464u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27d468: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x27d468u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d46c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x27d46cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x27d470: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x27d470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x27d474: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x27d474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27d478: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x27d478u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27d47c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x27d47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x27d480: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x27d480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d484: 0x265515c0  addiu       $s5, $s2, 0x15C0
    ctx->pc = 0x27d484u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 5568));
    // 0x27d488: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x27d488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d48c: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x27d48cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d490: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x27d490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27d494: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x27d494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27d498: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x27d498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x27d49c: 0xda4415c0  lqc2        $vf4, 0x15C0($s2)
    ctx->pc = 0x27d49cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 5568)));
    // 0x27d4a0: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x27d4a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27d4a4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x27d4a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x27d4a8: 0xfa4415c0  sqc2        $vf4, 0x15C0($s2)
    ctx->pc = 0x27d4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 5568), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x27d4ac: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x27d4acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27d4b0: 0x26760080  addiu       $s6, $s3, 0x80
    ctx->pc = 0x27d4b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x27d4b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d4b8: 0xc051d5a  jal         func_147568
    ctx->pc = 0x27D4B8u;
    SET_GPR_U32(ctx, 31, 0x27D4C0u);
    ctx->pc = 0x27D4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D4B8u;
    // 0x27d4bc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147568u, 0x27D4B8u, 0x27D4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D4C0u;
label_27d4c0:
    // 0x27d4c0: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x27d4c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x27d4c4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x27d4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x27d4c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27d4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d4cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d4d0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x27D4D0u;
    SET_GPR_U32(ctx, 31, 0x27D4D8u);
    ctx->pc = 0x27D4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D4D0u;
    // 0x27d4d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x27D4D0u, 0x27D4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D4D8u;
label_27d4d8:
    // 0x27d4d8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x27d4d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27d4dc: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x27d4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x27d4e0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x27d4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d4e4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x27d4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d4e8: 0x46000342  mul.s       $f13, $f0, $f0
    ctx->pc = 0x27d4e8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x27d4ec: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x27d4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27d4f0: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x27d4f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x27d4f4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x27d4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27d4f8: 0xe7ac0054  swc1        $f12, 0x54($sp)
    ctx->pc = 0x27d4f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x27d4fc: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x27d4fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27d500: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x27d500u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x27d504: 0x0  nop
    ctx->pc = 0x27d504u;
    // NOP
    // 0x27d508: 0x0  nop
    ctx->pc = 0x27d508u;
    // NOP
    // 0x27d50c: 0x460d0344  c1          0xD0344
    ctx->pc = 0x27d50cu;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x27d510: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x27D510u;
    SET_GPR_U32(ctx, 31, 0x27D518u);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x27D510u, 0x27D518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D518u;
label_27d518:
    // 0x27d518: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x27d518u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x27d51c: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x27d51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x27d520: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x27d520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x27d524: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x27d524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27d528: 0x0  nop
    ctx->pc = 0x27d528u;
    // NOP
    // 0x27d52c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x27d52cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d530: 0x0  nop
    ctx->pc = 0x27d530u;
    // NOP
    // 0x27d534: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27D534u;
    {
        const bool branch_taken_0x27d534 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d534) {
            ctx->pc = 0x27D538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D534u;
            // 0x27d538: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D53Cu;
            goto label_27d53c;
        }
    }
    ctx->pc = 0x27D53Cu;
label_27d53c:
    // 0x27d53c: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x27d53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
    // 0x27d540: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x27d540u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x27d544: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x27d544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x27d548: 0x0  nop
    ctx->pc = 0x27d548u;
    // NOP
    // 0x27d54c: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x27d54cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d550: 0x0  nop
    ctx->pc = 0x27d550u;
    // NOP
    // 0x27d554: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27D554u;
    {
        const bool branch_taken_0x27d554 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d554) {
            ctx->pc = 0x27D558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D554u;
            // 0x27d558: 0x46002086  mov.s       $f2, $f4 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D55Cu;
            goto label_27d55c;
        }
    }
    ctx->pc = 0x27D55Cu;
label_27d55c:
    // 0x27d55c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27d55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27d560: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x27d560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x27d564: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x27d564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d568: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x27d568u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x27d56c: 0xc6600100  lwc1        $f0, 0x100($s3)
    ctx->pc = 0x27d56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d570: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27d570u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x27d574: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d578: 0xe6600100  swc1        $f0, 0x100($s3)
    ctx->pc = 0x27d578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
    // 0x27d57c: 0xc64115d0  lwc1        $f1, 0x15D0($s2)
    ctx->pc = 0x27d57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d580: 0xc64205a8  lwc1        $f2, 0x5A8($s2)
    ctx->pc = 0x27d580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27d584: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27d584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x27d588: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d588u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d58c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x27d58cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d590: 0x0  nop
    ctx->pc = 0x27d590u;
    // NOP
    // 0x27d594: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27D594u;
    {
        const bool branch_taken_0x27d594 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D594u;
        // 0x27d598: 0xe6600100  swc1        $f0, 0x100($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d594) {
            ctx->pc = 0x27D5A4u;
            goto label_27d5a4;
        }
    }
    ctx->pc = 0x27D59Cu;
    // 0x27d59c: 0xe6630100  swc1        $f3, 0x100($s3)
    ctx->pc = 0x27d59cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
    // 0x27d5a0: 0xae4015d0  sw          $zero, 0x15D0($s2)
    ctx->pc = 0x27d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5584), GPR_U32(ctx, 0));
label_27d5a4:
    // 0x27d5a4: 0xc6600100  lwc1        $f0, 0x100($s3)
    ctx->pc = 0x27d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d5a8: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x27d5a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d5ac: 0x0  nop
    ctx->pc = 0x27d5acu;
    // NOP
    // 0x27d5b0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x27D5B0u;
    {
        const bool branch_taken_0x27d5b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d5b0) {
            ctx->pc = 0x27D5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D5B0u;
            // 0x27d5b4: 0xc64405a8  lwc1        $f4, 0x5A8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D5C4u;
            goto label_27d5c4;
        }
    }
    ctx->pc = 0x27D5B8u;
    // 0x27d5b8: 0xe6640100  swc1        $f4, 0x100($s3)
    ctx->pc = 0x27d5b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
    // 0x27d5bc: 0xae4015d0  sw          $zero, 0x15D0($s2)
    ctx->pc = 0x27d5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5584), GPR_U32(ctx, 0));
    // 0x27d5c0: 0xc64405a8  lwc1        $f4, 0x5A8($s2)
    ctx->pc = 0x27d5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27d5c4:
    // 0x27d5c4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x27d5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5c8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x27d5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x27d5cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27d5ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x27d5d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27d5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d5d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27d5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27d5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27d5dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27d5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d5e0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x27d5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5e4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x27d5e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x27d5e8: 0xc64215d0  lwc1        $f2, 0x15D0($s2)
    ctx->pc = 0x27d5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27d5ec: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x27d5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x27d5f0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x27d5f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x27d5f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x27d5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27d5f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27d5f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27d5fc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x27d5fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27d600: 0xe64215d0  swc1        $f2, 0x15D0($s2)
    ctx->pc = 0x27d600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5584), bits); }
    // 0x27d604: 0xc6600100  lwc1        $f0, 0x100($s3)
    ctx->pc = 0x27d604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d608: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x27d608u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27d60c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x27d60cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x27d610: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x27d610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x27d614: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x27d614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x27d618: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x27d618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x27d61c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27d61cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x27d620: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27d620u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27d624: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x27D624u;
    SET_GPR_U32(ctx, 31, 0x27D62Cu);
    ctx->pc = 0x27D628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D624u;
    // 0x27d628: 0xe64215d0  swc1        $f2, 0x15D0($s2) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5584), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x27D624u, 0x27D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D62Cu;
label_27d62c:
    // 0x27d62c: 0x12b40006  beq         $s5, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x27D62Cu;
    {
        const bool branch_taken_0x27d62c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 20));
        ctx->pc = 0x27D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D62Cu;
        // 0x27d630: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d62c) {
            ctx->pc = 0x27D648u;
            goto label_27d648;
        }
    }
    ctx->pc = 0x27D634u;
    // 0x27d634: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x27d634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d638: 0xe64015c0  swc1        $f0, 0x15C0($s2)
    ctx->pc = 0x27d638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5568), bits); }
    // 0x27d63c: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x27d63cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x27d640: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x27d640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d644: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x27d644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_27d648:
    // 0x27d648: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x27d648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_27d64c:
    // 0x27d64c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x27d64cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27d650: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x27d650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27d654: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x27d654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27d658: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x27d658u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27d65c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x27d65cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27d660: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x27d660u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27d664: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x27d664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27d668: 0x3e00008  jr          $ra
    ctx->pc = 0x27D668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D668u;
        // 0x27d66c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D670u;
}
