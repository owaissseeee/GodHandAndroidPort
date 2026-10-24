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

// Function: func_002DAA40
// Address: 0x2daa40 - 0x2dace8
void func_002DAA40_0x2daa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DAA40_0x2daa40");
#endif

    switch (ctx->pc) {
        case 0x2dab18u: goto label_2dab18;
        case 0x2dab28u: goto label_2dab28;
        case 0x2dab34u: goto label_2dab34;
        case 0x2dab44u: goto label_2dab44;
        case 0x2dab50u: goto label_2dab50;
        case 0x2dab60u: goto label_2dab60;
        case 0x2dab7cu: goto label_2dab7c;
        case 0x2dac24u: goto label_2dac24;
        case 0x2dac7cu: goto label_2dac7c;
        case 0x2dacacu: goto label_2dacac;
        default: break;
    }

    ctx->pc = 0x2daa40u;

    // 0x2daa40: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2daa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x2daa44: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x2daa44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x2daa48: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x2daa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x2daa4c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2daa4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daa50: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x2daa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x2daa54: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2daa54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daa58: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x2daa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x2daa5c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2daa5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daa60: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x2daa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x2daa64: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2daa64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daa68: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x2daa68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2daa6c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2daa6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daa70: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x2daa70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2daa74: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x2daa74u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2daa78: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x2daa78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x2daa7c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2daa7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2daa80: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x2daa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x2daa84: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x2daa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x2daa88: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2daa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2daa8c: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x2daa8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2daa90: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2daa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2daa94: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x2daa94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2daa98: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x2daa98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2daa9c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2daa9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2daaa0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2daaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2daaa4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2daaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2daaa8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2daaa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2daaac: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2daaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2daab0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2daab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daab4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2daab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2daab8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2daab8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2daabc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2daabcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2daac0: 0x46020b40  add.s       $f13, $f1, $f2
    ctx->pc = 0x2daac0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2daac4: 0x0  nop
    ctx->pc = 0x2daac4u;
    // NOP
    // 0x2daac8: 0x0  nop
    ctx->pc = 0x2daac8u;
    // NOP
    // 0x2daacc: 0x460d0344  c1          0xD0344
    ctx->pc = 0x2daaccu;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x2daad0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2daad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2daad4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2daad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2daad8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2daad8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2daadc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2daadcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2daae0: 0x0  nop
    ctx->pc = 0x2daae0u;
    // NOP
    // 0x2daae4: 0x0  nop
    ctx->pc = 0x2daae4u;
    // NOP
    // 0x2daae8: 0x46010544  c1          0x10544
    ctx->pc = 0x2daae8u;
    ctx->f[21] = ps2FpuSqrt(ctx->fcr31, ctx->f[1]);
    // 0x2daaec: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2daaecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2daaf0: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x2daaf0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2daaf4: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2daaf4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2daaf8: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2daaf8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2daafc: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2daafcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2dab00: 0xfa440030  sqc2        $vf4, 0x30($s2)
    ctx->pc = 0x2dab00u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2dab04: 0xfa450020  sqc2        $vf5, 0x20($s2)
    ctx->pc = 0x2dab04u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2dab08: 0xfa460010  sqc2        $vf6, 0x10($s2)
    ctx->pc = 0x2dab08u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2dab0c: 0xfa470000  sqc2        $vf7, 0x0($s2)
    ctx->pc = 0x2dab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2dab10: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2DAB10u;
    SET_GPR_U32(ctx, 31, 0x2DAB18u);
    ctx->pc = 0x2DAB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB10u;
    // 0x2dab14: 0xc7ac0004  lwc1        $f12, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2DAB10u, 0x2DAB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB18u;
label_2dab18:
    // 0x2dab18: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2dab18u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2dab1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dab1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab20: 0xc0c29c0  jal         func_30A700
    ctx->pc = 0x2DAB20u;
    SET_GPR_U32(ctx, 31, 0x2DAB28u);
    ctx->pc = 0x2DAB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB20u;
    // 0x2dab24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A700u, 0x2DAB20u, 0x2DAB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB28u;
label_2dab28:
    // 0x2dab28: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2dab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dab2c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2DAB2Cu;
    SET_GPR_U32(ctx, 31, 0x2DAB34u);
    ctx->pc = 0x2DAB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB2Cu;
    // 0x2dab30: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2DAB2Cu, 0x2DAB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB34u;
label_2dab34:
    // 0x2dab34: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2dab34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2dab38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dab38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab3c: 0xc0c29ee  jal         func_30A7B8
    ctx->pc = 0x2DAB3Cu;
    SET_GPR_U32(ctx, 31, 0x2DAB44u);
    ctx->pc = 0x2DAB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB3Cu;
    // 0x2dab40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7B8u, 0x2DAB3Cu, 0x2DAB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB44u;
label_2dab44:
    // 0x2dab44: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2dab44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dab48: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x2DAB48u;
    SET_GPR_U32(ctx, 31, 0x2DAB50u);
    ctx->pc = 0x2DAB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB48u;
    // 0x2dab4c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x2DAB48u, 0x2DAB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB50u;
label_2dab50:
    // 0x2dab50: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x2dab50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dab54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dab54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab58: 0xc0c28fe  jal         func_30A3F8
    ctx->pc = 0x2DAB58u;
    SET_GPR_U32(ctx, 31, 0x2DAB60u);
    ctx->pc = 0x2DAB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB58u;
    // 0x2dab5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A3F8u, 0x2DAB58u, 0x2DAB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB60u;
label_2dab60:
    // 0x2dab60: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x2dab60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dab64: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2dab64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dab68: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2dab68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2dab6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dab6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dab70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab74: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2DAB74u;
    SET_GPR_U32(ctx, 31, 0x2DAB7Cu);
    ctx->pc = 0x2DAB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB74u;
    // 0x2dab78: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2DAB74u, 0x2DAB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB7Cu;
label_2dab7c:
    // 0x2dab7c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2dab7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2dab80: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2dab80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2dab84: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2dab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dab88: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2dab88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dab8c: 0x0  nop
    ctx->pc = 0x2dab8cu;
    // NOP
    // 0x2dab90: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2dab90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dab94: 0x0  nop
    ctx->pc = 0x2dab94u;
    // NOP
    // 0x2dab98: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x2DAB98u;
    {
        const bool branch_taken_0x2dab98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DAB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAB98u;
        // 0x2dab9c: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dab98) {
            ctx->pc = 0x2DAC84u;
            goto label_2dac84;
        }
    }
    ctx->pc = 0x2DABA0u;
    // 0x2daba0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2daba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2daba4: 0x0  nop
    ctx->pc = 0x2daba4u;
    // NOP
    // 0x2daba8: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x2DABA8u;
    {
        const bool branch_taken_0x2daba8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABA8u;
        // 0x2dabac: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daba8) {
            ctx->pc = 0x2DAC84u;
            goto label_2dac84;
        }
    }
    ctx->pc = 0x2DABB0u;
    // 0x2dabb0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2dabb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dabb4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2dabb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2dabb8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2dabb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2dabbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dabbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dabc0: 0x0  nop
    ctx->pc = 0x2dabc0u;
    // NOP
    // 0x2dabc4: 0x0  nop
    ctx->pc = 0x2dabc4u;
    // NOP
    // 0x2dabc8: 0x46000004  c1          0x4
    ctx->pc = 0x2dabc8u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2dabcc: 0x4616a040  add.s       $f1, $f20, $f22
    ctx->pc = 0x2dabccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x2dabd0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dabd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dabd4: 0x0  nop
    ctx->pc = 0x2dabd4u;
    // NOP
    // 0x2dabd8: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x2DABD8u;
    {
        const bool branch_taken_0x2dabd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABD8u;
        // 0x2dabdc: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabd8) {
            ctx->pc = 0x2DAC84u;
            goto label_2dac84;
        }
    }
    ctx->pc = 0x2DABE0u;
    // 0x2dabe0: 0x56e00001  bnel        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DABE0u;
    {
        const bool branch_taken_0x2dabe0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dabe0) {
            ctx->pc = 0x2DABE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DABE0u;
            // 0x2dabe4: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DABE8u;
            goto label_2dabe8;
        }
    }
    ctx->pc = 0x2DABE8u;
label_2dabe8:
    // 0x2dabe8: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DABE8u;
    {
        const bool branch_taken_0x2dabe8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABE8u;
        // 0x2dabec: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabe8) {
            ctx->pc = 0x2DAC4Cu;
            goto label_2dac4c;
        }
    }
    ctx->pc = 0x2DABF0u;
    // 0x2dabf0: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x2dabf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dabf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dabf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dabf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dabf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dabfc: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x2dabfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2dac00: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2dac00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2dac04: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x2dac04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2dac08: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x2dac08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x2dac0c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2dac0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2dac10: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2dac10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2dac14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dac14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dac18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dac18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dac1c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2DAC1Cu;
    SET_GPR_U32(ctx, 31, 0x2DAC24u);
    ctx->pc = 0x2DAC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAC1Cu;
    // 0x2dac20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2DAC1Cu, 0x2DAC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAC24u;
label_2dac24:
    // 0x2dac24: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2dac24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dac28: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2dac28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2dac2c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2dac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dac30: 0x12820006  beq         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DAC30u;
    {
        const bool branch_taken_0x2dac30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DAC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC30u;
        // 0x2dac34: 0xc7a000b0  lwc1        $f0, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dac30) {
            ctx->pc = 0x2DAC4Cu;
            goto label_2dac4c;
        }
    }
    ctx->pc = 0x2DAC38u;
    // 0x2dac38: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x2dac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dac3c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2dac3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dac40: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x2dac40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2dac44: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x2dac44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2dac48: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x2dac48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_2dac4c:
    // 0x2dac4c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2dac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2dac50: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x2dac50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x2dac54: 0x2117a  dsrl        $v0, $v0, 5
    ctx->pc = 0x2dac54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 5);
    // 0x2dac58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2dac58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2dac5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DAC5Cu;
    {
        const bool branch_taken_0x2dac5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC5Cu;
        // 0x2dac60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dac5c) {
            ctx->pc = 0x2DAC7Cu;
            goto label_2dac7c;
        }
    }
    ctx->pc = 0x2DAC64u;
    // 0x2dac64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dac64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dac68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dac68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dac6c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2dac6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dac70: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2dac70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2dac74: 0xc057cb8  jal         func_15F2E0
    ctx->pc = 0x2DAC74u;
    SET_GPR_U32(ctx, 31, 0x2DAC7Cu);
    ctx->pc = 0x2DAC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAC74u;
    // 0x2dac78: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F2E0u, 0x2DAC74u, 0x2DAC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAC7Cu;
label_2dac7c:
    // 0x2dac7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DAC7Cu;
    {
        const bool branch_taken_0x2dac7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC7Cu;
        // 0x2dac80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dac7c) {
            ctx->pc = 0x2DACB0u;
            goto label_2dacb0;
        }
    }
    ctx->pc = 0x2DAC84u;
label_2dac84:
    // 0x2dac84: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x2dac84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31276)));
    // 0x2dac88: 0x2117a  dsrl        $v0, $v0, 5
    ctx->pc = 0x2dac88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 5);
    // 0x2dac8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2dac8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2dac90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DAC90u;
    {
        const bool branch_taken_0x2dac90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC90u;
        // 0x2dac94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dac90) {
            ctx->pc = 0x2DACACu;
            goto label_2dacac;
        }
    }
    ctx->pc = 0x2DAC98u;
    // 0x2dac98: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2dac98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2dac9c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2dac9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daca0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2daca0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2daca4: 0xc057cb8  jal         func_15F2E0
    ctx->pc = 0x2DACA4u;
    SET_GPR_U32(ctx, 31, 0x2DACACu);
    ctx->pc = 0x2DACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DACA4u;
    // 0x2daca8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F2E0u, 0x2DACA4u, 0x2DACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DACACu;
label_2dacac:
    // 0x2dacac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dacacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dacb0:
    // 0x2dacb0: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x2dacb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2dacb4: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x2dacb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2dacb8: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x2dacb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2dacbc: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x2dacbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2dacc0: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x2dacc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2dacc4: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x2dacc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2dacc8: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x2dacc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2daccc: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x2dacccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2dacd0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2dacd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2dacd4: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x2dacd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2dacd8: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x2dacd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2dacdc: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x2dacdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dace0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DACE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DACE0u;
        // 0x2dace4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DACE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DACE8u;
}
