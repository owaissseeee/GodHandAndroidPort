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

// Function: LengthPositionToGivenLine
// Address: 0x1566c0 - 0x156918
void LengthPositionToGivenLine_0x1566c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LengthPositionToGivenLine_0x1566c0");
#endif

    switch (ctx->pc) {
        case 0x156724u: goto label_156724;
        case 0x15674cu: goto label_15674c;
        case 0x15678cu: goto label_15678c;
        case 0x1567b0u: goto label_1567b0;
        case 0x1567c8u: goto label_1567c8;
        case 0x1567d4u: goto label_1567d4;
        default: break;
    }

    ctx->pc = 0x1566c0u;

    // 0x1566c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1566c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1566c4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1566c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1566c8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1566c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1566cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1566ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1566d0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1566d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1566d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1566d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1566d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1566d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1566dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1566dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1566e0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1566e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1566e4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1566e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1566e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1566e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1566ec: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x1566ecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1566f0: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x1566f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1566f4: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1566f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1566f8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1566f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1566fc: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1566fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x156700: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x156700u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x156704: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x156704u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x156708: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x156708u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15670c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x15670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156710: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x156710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x156714: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x156714u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x156718: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x156718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15671c: 0xc07df7e  jal         func_1F7DF8
    ctx->pc = 0x15671Cu;
    SET_GPR_U32(ctx, 31, 0x156724u);
    ctx->pc = 0x156720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15671Cu;
    // 0x156720: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF8u, 0x15671Cu, 0x156724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156724u;
label_156724:
    // 0x156724: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x156724u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x156728: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x156728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15672c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15672cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x156730: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x156730u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x156734: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x156734u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x156738: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x156738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15673c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x15673cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x156740: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x156740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156744: 0xc07df7e  jal         func_1F7DF8
    ctx->pc = 0x156744u;
    SET_GPR_U32(ctx, 31, 0x15674Cu);
    ctx->pc = 0x156748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156744u;
    // 0x156748: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF8u, 0x156744u, 0x15674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15674Cu;
label_15674c:
    // 0x15674c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x15674cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x156750: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x156750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156754: 0x4615b834  c.lt.s      $f23, $f21
    ctx->pc = 0x156754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156758: 0x0  nop
    ctx->pc = 0x156758u;
    // NOP
    // 0x15675c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15675Cu;
    {
        const bool branch_taken_0x15675c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x156760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15675Cu;
        // 0x156760: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15675c) {
            ctx->pc = 0x156768u;
            goto label_156768;
        }
    }
    ctx->pc = 0x156764u;
    // 0x156764: 0x4600bd86  mov.s       $f22, $f23
    ctx->pc = 0x156764u;
    ctx->f[22] = FPU_MOV_S(ctx->f[23]);
label_156768:
    // 0x156768: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x156768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15676c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15676cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x156770: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x156770u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x156774: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x156774u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x156778: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x156778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15677c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15677cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156780: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x156780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156784: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x156784u;
    SET_GPR_U32(ctx, 31, 0x15678Cu);
    ctx->pc = 0x156788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156784u;
    // 0x156788: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x156784u, 0x15678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15678Cu;
label_15678c:
    // 0x15678c: 0x4616b042  mul.s       $f1, $f22, $f22
    ctx->pc = 0x15678cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x156790: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x156790u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156794: 0x460c0504  c1          0xC0504
    ctx->pc = 0x156794u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x156798: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x156798u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15679c: 0x0  nop
    ctx->pc = 0x15679cu;
    // NOP
    // 0x1567a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1567A0u;
    {
        const bool branch_taken_0x1567a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1567A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567A0u;
        // 0x1567a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1567a0) {
            ctx->pc = 0x1567B8u;
            goto label_1567b8;
        }
    }
    ctx->pc = 0x1567A8u;
    // 0x1567a8: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x1567A8u;
    SET_GPR_U32(ctx, 31, 0x1567B0u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x1567A8u, 0x1567B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1567B0u;
label_1567b0:
    // 0x1567b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1567b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1567b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1567b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1567b8:
    // 0x1567b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1567b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1567bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567c0: 0xc055968  jal         func_1565A0
    ctx->pc = 0x1567C0u;
    SET_GPR_U32(ctx, 31, 0x1567C8u);
    ctx->pc = 0x1567C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1567C0u;
    // 0x1567c4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1565A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565A0u, 0x1567C0u, 0x1567C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1567C8u;
label_1567c8:
    // 0x1567c8: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1567c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1567cc: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1567CCu;
    SET_GPR_U32(ctx, 31, 0x1567D4u);
    ctx->pc = 0x1567D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1567CCu;
    // 0x1567d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1567CCu, 0x1567D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1567D4u;
label_1567d4:
    // 0x1567d4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1567d4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1567d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1567d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1567dc: 0x0  nop
    ctx->pc = 0x1567dcu;
    // NOP
    // 0x1567e0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1567e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1567e4: 0x0  nop
    ctx->pc = 0x1567e4u;
    // NOP
    // 0x1567e8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1567E8u;
    {
        const bool branch_taken_0x1567e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1567ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567E8u;
        // 0x1567ec: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1567e8) {
            ctx->pc = 0x15682Cu;
            goto label_15682c;
        }
    }
    ctx->pc = 0x1567F0u;
    // 0x1567f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1567f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1567f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1567f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1567f8: 0x0  nop
    ctx->pc = 0x1567f8u;
    // NOP
    // 0x1567fc: 0x0  nop
    ctx->pc = 0x1567fcu;
    // NOP
    // 0x156800: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x156800u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x156804: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x156804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x156808: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x156808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15680c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x15680cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156810: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x156810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x156814: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x156814u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x156818: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x156818u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x15681c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x15681cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x156820: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x156820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x156824: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x156824u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x156828: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x156828u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_15682c:
    // 0x15682c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x15682cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x156830: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x156830u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156834: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x156834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156838: 0x13b10006  beq         $sp, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x156838u;
    {
        const bool branch_taken_0x156838 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 17));
        ctx->pc = 0x15683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156838u;
        // 0x15683c: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156838) {
            ctx->pc = 0x156854u;
            goto label_156854;
        }
    }
    ctx->pc = 0x156840u;
    // 0x156840: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x156840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156844: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x156844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156848: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x156848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15684c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15684cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x156850: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x156850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_156854:
    // 0x156854: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x156854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x156858: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x156858u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15685c: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x15685cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x156860: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x156860u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x156864: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x156864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156868: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x156868u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15686c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x15686cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156870: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x156870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156874: 0x4617a036  c.le.s      $f20, $f23
    ctx->pc = 0x156874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156878: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x156878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15687c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x15687cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156880: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x156880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x156884: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x156884u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x156888: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x156888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15688c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x15688cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x156890: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x156890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156894: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156898: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x156898u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x15689c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x15689Cu;
    {
        const bool branch_taken_0x15689c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1568A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15689Cu;
        // 0x1568a0: 0x46011800  add.s       $f0, $f3, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15689c) {
            ctx->pc = 0x1568B4u;
            goto label_1568b4;
        }
    }
    ctx->pc = 0x1568A4u;
    // 0x1568a4: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x1568a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1568a8: 0x0  nop
    ctx->pc = 0x1568a8u;
    // NOP
    // 0x1568ac: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1568ACu;
    {
        const bool branch_taken_0x1568ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1568ac) {
            ctx->pc = 0x1568DCu;
            goto label_1568dc;
        }
    }
    ctx->pc = 0x1568B4u;
label_1568b4:
    // 0x1568b4: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x1568B4u;
    {
        const bool branch_taken_0x1568b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1568B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568B4u;
        // 0x1568b8: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568b4) {
            ctx->pc = 0x1568E8u;
            goto label_1568e8;
        }
    }
    ctx->pc = 0x1568BCu;
    // 0x1568bc: 0x4615b834  c.lt.s      $f23, $f21
    ctx->pc = 0x1568bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1568c0: 0x0  nop
    ctx->pc = 0x1568c0u;
    // NOP
    // 0x1568c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1568C4u;
    {
        const bool branch_taken_0x1568c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1568C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568C4u;
        // 0x1568c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568c4) {
            ctx->pc = 0x1568D0u;
            goto label_1568d0;
        }
    }
    ctx->pc = 0x1568CCu;
    // 0x1568cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1568ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1568d0:
    // 0x1568d0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1568d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1568d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1568D4u;
    {
        const bool branch_taken_0x1568d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1568D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568D4u;
        // 0x1568d8: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568d4) {
            ctx->pc = 0x1568E8u;
            goto label_1568e8;
        }
    }
    ctx->pc = 0x1568DCu;
label_1568dc:
    // 0x1568dc: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x1568DCu;
    {
        const bool branch_taken_0x1568dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1568E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568DCu;
        // 0x1568e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568dc) {
            ctx->pc = 0x1568E8u;
            goto label_1568e8;
        }
    }
    ctx->pc = 0x1568E4u;
    // 0x1568e4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1568e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1568e8:
    // 0x1568e8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1568e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1568ec: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1568ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1568f0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1568f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1568f4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1568f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1568f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1568f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1568fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1568fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156900: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x156900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x156904: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x156904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x156908: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x156908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15690c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x15690cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x156910: 0x3e00008  jr          $ra
    ctx->pc = 0x156910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156910u;
        // 0x156914: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156918u;
}
