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

// Function: func_002DACE8
// Address: 0x2dace8 - 0x2daf68
void func_002DACE8_0x2dace8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DACE8_0x2dace8");
#endif

    switch (ctx->pc) {
        case 0x2dadbcu: goto label_2dadbc;
        case 0x2dadccu: goto label_2dadcc;
        case 0x2dadd8u: goto label_2dadd8;
        case 0x2dade8u: goto label_2dade8;
        case 0x2dadf4u: goto label_2dadf4;
        case 0x2dae04u: goto label_2dae04;
        case 0x2dae20u: goto label_2dae20;
        case 0x2daf04u: goto label_2daf04;
        default: break;
    }

    ctx->pc = 0x2dace8u;

    // 0x2dace8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2dace8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2dacec: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x2dacecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x2dacf0: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x2dacf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x2dacf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dacf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dacf8: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x2dacf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x2dacfc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2dacfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dad00: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x2dad00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x2dad04: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2dad04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dad08: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x2dad08u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2dad0c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2dad0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dad10: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x2dad10u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2dad14: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x2dad14u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x2dad18: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x2dad18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2dad1c: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x2dad1cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2dad20: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x2dad20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x2dad24: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x2dad24u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x2dad28: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x2dad28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x2dad2c: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2dad2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2dad30: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x2dad30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2dad34: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2dad34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2dad38: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2dad38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2dad3c: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x2dad3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dad40: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2dad40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2dad44: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2dad44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2dad48: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2dad48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dad4c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2dad4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dad50: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2dad50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2dad54: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2dad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dad58: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2dad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dad5c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2dad5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2dad60: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2dad60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2dad64: 0x46020b40  add.s       $f13, $f1, $f2
    ctx->pc = 0x2dad64u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2dad68: 0x0  nop
    ctx->pc = 0x2dad68u;
    // NOP
    // 0x2dad6c: 0x0  nop
    ctx->pc = 0x2dad6cu;
    // NOP
    // 0x2dad70: 0x460d0344  c1          0xD0344
    ctx->pc = 0x2dad70u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x2dad74: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2dad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dad78: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2dad78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2dad7c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2dad7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dad80: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2dad80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2dad84: 0x0  nop
    ctx->pc = 0x2dad84u;
    // NOP
    // 0x2dad88: 0x0  nop
    ctx->pc = 0x2dad88u;
    // NOP
    // 0x2dad8c: 0x46010504  c1          0x10504
    ctx->pc = 0x2dad8cu;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[1]);
    // 0x2dad90: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2dad90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dad94: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x2dad94u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2dad98: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2dad98u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2dad9c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2dad9cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2dada0: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2dada0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2dada4: 0xfa440030  sqc2        $vf4, 0x30($s2)
    ctx->pc = 0x2dada4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2dada8: 0xfa450020  sqc2        $vf5, 0x20($s2)
    ctx->pc = 0x2dada8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2dadac: 0xfa460010  sqc2        $vf6, 0x10($s2)
    ctx->pc = 0x2dadacu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2dadb0: 0xfa470000  sqc2        $vf7, 0x0($s2)
    ctx->pc = 0x2dadb0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2dadb4: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2DADB4u;
    SET_GPR_U32(ctx, 31, 0x2DADBCu);
    ctx->pc = 0x2DADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DADB4u;
    // 0x2dadb8: 0xc7ac0004  lwc1        $f12, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2DADB4u, 0x2DADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DADBCu;
label_2dadbc:
    // 0x2dadbc: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2dadbcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2dadc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dadc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dadc4: 0xc0c29c0  jal         func_30A700
    ctx->pc = 0x2DADC4u;
    SET_GPR_U32(ctx, 31, 0x2DADCCu);
    ctx->pc = 0x2DADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DADC4u;
    // 0x2dadc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A700u, 0x2DADC4u, 0x2DADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DADCCu;
label_2dadcc:
    // 0x2dadcc: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2dadccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dadd0: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2DADD0u;
    SET_GPR_U32(ctx, 31, 0x2DADD8u);
    ctx->pc = 0x2DADD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DADD0u;
    // 0x2dadd4: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2DADD0u, 0x2DADD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DADD8u;
label_2dadd8:
    // 0x2dadd8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2dadd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2daddc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2daddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dade0: 0xc0c29ee  jal         func_30A7B8
    ctx->pc = 0x2DADE0u;
    SET_GPR_U32(ctx, 31, 0x2DADE8u);
    ctx->pc = 0x2DADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DADE0u;
    // 0x2dade4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7B8u, 0x2DADE0u, 0x2DADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DADE8u;
label_2dade8:
    // 0x2dade8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dade8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dadec: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x2DADECu;
    SET_GPR_U32(ctx, 31, 0x2DADF4u);
    ctx->pc = 0x2DADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DADECu;
    // 0x2dadf0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x2DADECu, 0x2DADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DADF4u;
label_2dadf4:
    // 0x2dadf4: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x2dadf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dadf8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dadf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dadfc: 0xc0c28fe  jal         func_30A3F8
    ctx->pc = 0x2DADFCu;
    SET_GPR_U32(ctx, 31, 0x2DAE04u);
    ctx->pc = 0x2DAE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DADFCu;
    // 0x2dae00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A3F8u, 0x2DADFCu, 0x2DAE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE04u;
label_2dae04:
    // 0x2dae04: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x2dae04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dae08: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2dae08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dae0c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2dae0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2dae10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dae10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dae14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae18: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2DAE18u;
    SET_GPR_U32(ctx, 31, 0x2DAE20u);
    ctx->pc = 0x2DAE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAE18u;
    // 0x2dae1c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2DAE18u, 0x2DAE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE20u;
label_2dae20:
    // 0x2dae20: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2dae20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2dae24: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2dae24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2dae28: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2dae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dae2c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2dae2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2dae30: 0x0  nop
    ctx->pc = 0x2dae30u;
    // NOP
    // 0x2dae34: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2dae34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dae38: 0x0  nop
    ctx->pc = 0x2dae38u;
    // NOP
    // 0x2dae3c: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x2DAE3Cu;
    {
        const bool branch_taken_0x2dae3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DAE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE3Cu;
        // 0x2dae40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae3c) {
            ctx->pc = 0x2DAF30u;
            goto label_2daf30;
        }
    }
    ctx->pc = 0x2DAE44u;
    // 0x2dae44: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2dae44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dae48: 0x0  nop
    ctx->pc = 0x2dae48u;
    // NOP
    // 0x2dae4c: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x2DAE4Cu;
    {
        const bool branch_taken_0x2dae4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE4Cu;
        // 0x2dae50: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae4c) {
            ctx->pc = 0x2DAF30u;
            goto label_2daf30;
        }
    }
    ctx->pc = 0x2DAE54u;
    // 0x2dae54: 0x4615b340  add.s       $f13, $f22, $f21
    ctx->pc = 0x2dae54u;
    ctx->f[13] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x2dae58: 0x46006807  neg.s       $f0, $f13
    ctx->pc = 0x2dae58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[13]);
    // 0x2dae5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dae5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dae60: 0x0  nop
    ctx->pc = 0x2dae60u;
    // NOP
    // 0x2dae64: 0x45020033  bc1fl       . + 4 + (0x33 << 2)
    ctx->pc = 0x2DAE64u;
    {
        const bool branch_taken_0x2dae64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dae64) {
            ctx->pc = 0x2DAE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAE64u;
            // 0x2dae68: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAF34u;
            goto label_2daf34;
        }
    }
    ctx->pc = 0x2DAE6Cu;
    // 0x2dae6c: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x2dae6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dae70: 0x0  nop
    ctx->pc = 0x2dae70u;
    // NOP
    // 0x2dae74: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x2DAE74u;
    {
        const bool branch_taken_0x2dae74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DAE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE74u;
        // 0x2dae78: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae74) {
            ctx->pc = 0x2DAF30u;
            goto label_2daf30;
        }
    }
    ctx->pc = 0x2DAE7Cu;
    // 0x2dae7c: 0x4615bb00  add.s       $f12, $f23, $f21
    ctx->pc = 0x2dae7cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
    // 0x2dae80: 0x46006007  neg.s       $f0, $f12
    ctx->pc = 0x2dae80u;
    ctx->f[0] = FPU_NEG_S(ctx->f[12]);
    // 0x2dae84: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2dae84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dae88: 0x0  nop
    ctx->pc = 0x2dae88u;
    // NOP
    // 0x2dae8c: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
    ctx->pc = 0x2DAE8Cu;
    {
        const bool branch_taken_0x2dae8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dae8c) {
            ctx->pc = 0x2DAE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAE8Cu;
            // 0x2dae90: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAF34u;
            goto label_2daf34;
        }
    }
    ctx->pc = 0x2DAE94u;
    // 0x2dae94: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x2dae94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dae98: 0x0  nop
    ctx->pc = 0x2dae98u;
    // NOP
    // 0x2dae9c: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
    ctx->pc = 0x2DAE9Cu;
    {
        const bool branch_taken_0x2dae9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dae9c) {
            ctx->pc = 0x2DAEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAE9Cu;
            // 0x2daea0: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAF34u;
            goto label_2daf34;
        }
    }
    ctx->pc = 0x2DAEA4u;
    // 0x2daea4: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DAEA4u;
    {
        const bool branch_taken_0x2daea4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daea4) {
            ctx->pc = 0x2DAEC8u;
            goto label_2daec8;
        }
    }
    ctx->pc = 0x2DAEACu;
    // 0x2daeac: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x2daeacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2daeb0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2daeb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2daeb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2daeb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2daeb8: 0x0  nop
    ctx->pc = 0x2daeb8u;
    // NOP
    // 0x2daebc: 0x0  nop
    ctx->pc = 0x2daebcu;
    // NOP
    // 0x2daec0: 0x46000004  c1          0x4
    ctx->pc = 0x2daec0u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2daec4: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2daec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_2daec8:
    // 0x2daec8: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DAEC8u;
    {
        const bool branch_taken_0x2daec8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAEC8u;
        // 0x2daecc: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daec8) {
            ctx->pc = 0x2DAF2Cu;
            goto label_2daf2c;
        }
    }
    ctx->pc = 0x2DAED0u;
    // 0x2daed0: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x2daed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2daed4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2daed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2daed8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2daed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2daedc: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x2daedcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2daee0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2daee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2daee4: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x2daee4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2daee8: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x2daee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x2daeec: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2daeecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2daef0: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2daef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2daef4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2daef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2daef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daefc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2DAEFCu;
    SET_GPR_U32(ctx, 31, 0x2DAF04u);
    ctx->pc = 0x2DAF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAEFCu;
    // 0x2daf00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2DAEFCu, 0x2DAF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF04u;
label_2daf04:
    // 0x2daf04: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2daf04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2daf08: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2daf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2daf0c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2daf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2daf10: 0x12820006  beq         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DAF10u;
    {
        const bool branch_taken_0x2daf10 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF10u;
        // 0x2daf14: 0xc7a000b0  lwc1        $f0, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf10) {
            ctx->pc = 0x2DAF2Cu;
            goto label_2daf2c;
        }
    }
    ctx->pc = 0x2DAF18u;
    // 0x2daf18: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x2daf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2daf1c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2daf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daf20: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x2daf20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2daf24: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x2daf24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2daf28: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x2daf28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_2daf2c:
    // 0x2daf2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2daf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2daf30:
    // 0x2daf30: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x2daf30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2daf34:
    // 0x2daf34: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x2daf34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2daf38: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x2daf38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2daf3c: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x2daf3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2daf40: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x2daf40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2daf44: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x2daf44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2daf48: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2daf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2daf4c: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x2daf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2daf50: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x2daf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2daf54: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x2daf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2daf58: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x2daf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2daf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF5Cu;
        // 0x2daf60: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAF64u;
    // 0x2daf64: 0x0  nop
    ctx->pc = 0x2daf64u;
    // NOP
    ctx->pc = 0x2daf68u;
}
