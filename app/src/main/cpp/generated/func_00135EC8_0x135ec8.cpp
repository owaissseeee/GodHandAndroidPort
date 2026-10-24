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

// Function: func_00135EC8
// Address: 0x135ec8 - 0x136030
void func_00135EC8_0x135ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00135EC8_0x135ec8");
#endif

    switch (ctx->pc) {
        case 0x135f20u: goto label_135f20;
        case 0x135f2cu: goto label_135f2c;
        case 0x135f3cu: goto label_135f3c;
        case 0x135f4cu: goto label_135f4c;
        default: break;
    }

    ctx->pc = 0x135ec8u;

    // 0x135ec8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x135ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x135ecc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x135eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x135ed0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x135ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x135ed4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x135ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135ed8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x135ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x135edc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x135edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135ee0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x135ee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135ee4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x135ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x135ee8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x135ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x135eec: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x135eecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x135ef0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x135ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x135ef4: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x135ef4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x135ef8: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x135ef8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x135efc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x135efcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135f00: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x135f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135f04: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x135f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x135f08: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x135f08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x135f0c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x135f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135f10: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x135f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x135f14: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x135f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f18: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x135F18u;
    SET_GPR_U32(ctx, 31, 0x135F20u);
    ctx->pc = 0x135F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135F18u;
    // 0x135f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x135F18u, 0x135F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F20u;
label_135f20:
    // 0x135f20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x135f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f24: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x135F24u;
    SET_GPR_U32(ctx, 31, 0x135F2Cu);
    ctx->pc = 0x135F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135F24u;
    // 0x135f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x135F24u, 0x135F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F2Cu;
label_135f2c:
    // 0x135f2c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x135f2cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x135f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f34: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x135F34u;
    SET_GPR_U32(ctx, 31, 0x135F3Cu);
    ctx->pc = 0x135F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135F34u;
    // 0x135f38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x135F34u, 0x135F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F3Cu;
label_135f3c:
    // 0x135f3c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x135f3cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x135f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f44: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x135F44u;
    SET_GPR_U32(ctx, 31, 0x135F4Cu);
    ctx->pc = 0x135F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135F44u;
    // 0x135f48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x135F44u, 0x135F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F4Cu;
label_135f4c:
    // 0x135f4c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x135f4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x135f50: 0x0  nop
    ctx->pc = 0x135f50u;
    // NOP
    // 0x135f54: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x135f54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135f58: 0x0  nop
    ctx->pc = 0x135f58u;
    // NOP
    // 0x135f5c: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x135F5Cu;
    {
        const bool branch_taken_0x135f5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x135F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F5Cu;
        // 0x135f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135f5c) {
            ctx->pc = 0x136010u;
            goto label_136010;
        }
    }
    ctx->pc = 0x135F64u;
    // 0x135f64: 0x0  nop
    ctx->pc = 0x135f64u;
    // NOP
    // 0x135f68: 0x0  nop
    ctx->pc = 0x135f68u;
    // NOP
    // 0x135f6c: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x135f6cu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x135f70: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x135f70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135f74: 0x0  nop
    ctx->pc = 0x135f74u;
    // NOP
    // 0x135f78: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
    ctx->pc = 0x135F78u;
    {
        const bool branch_taken_0x135f78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x135f78) {
            ctx->pc = 0x135F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135F78u;
            // 0x135f7c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136014u;
            goto label_136014;
        }
    }
    ctx->pc = 0x135F80u;
    // 0x135f80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x135f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x135f84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x135f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135f88: 0x0  nop
    ctx->pc = 0x135f88u;
    // NOP
    // 0x135f8c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x135f8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135f90: 0x0  nop
    ctx->pc = 0x135f90u;
    // NOP
    // 0x135f94: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
    ctx->pc = 0x135F94u;
    {
        const bool branch_taken_0x135f94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x135f94) {
            ctx->pc = 0x135F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135F94u;
            // 0x135f98: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136014u;
            goto label_136014;
        }
    }
    ctx->pc = 0x135F9Cu;
    // 0x135f9c: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x135F9Cu;
    {
        const bool branch_taken_0x135f9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x135FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F9Cu;
        // 0x135fa0: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135f9c) {
            ctx->pc = 0x13600Cu;
            goto label_13600c;
        }
    }
    ctx->pc = 0x135FA4u;
    // 0x135fa4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x135fa4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135fa8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x135fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135fac: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x135facu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135fb0: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x135fb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x135fb4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x135fb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x135fb8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x135fb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135fbc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x135fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135fc0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x135fc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135fc4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x135fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135fc8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x135fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x135fcc: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x135fccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x135fd0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x135fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135fd4: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x135fd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135fd8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x135fd8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135fdc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x135fdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135fe0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x135fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135fe4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x135fe4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135fe8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x135fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135fec: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x135fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135ff0: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x135FF0u;
    {
        const bool branch_taken_0x135ff0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x135FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135FF0u;
        // 0x135ff4: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ff0) {
            ctx->pc = 0x13600Cu;
            goto label_13600c;
        }
    }
    ctx->pc = 0x135FF8u;
    // 0x135ff8: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x135ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135ffc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x135ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136000: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x136000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x136004: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x136004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x136008: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x136008u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_13600c:
    // 0x13600c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13600cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136010:
    // 0x136010: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x136010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_136014:
    // 0x136014: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x136014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x136018: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x136018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13601c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x13601cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x136020: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x136020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x136024: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x136024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x136028: 0x3e00008  jr          $ra
    ctx->pc = 0x136028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136028u;
        // 0x13602c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136030u;
}
