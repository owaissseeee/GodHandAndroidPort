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

// Function: capVu0Atan2
// Address: 0x1f8180 - 0x1f8350
void capVu0Atan2_0x1f8180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0Atan2_0x1f8180");
#endif

    ctx->pc = 0x1f8180u;

    // 0x1f8180: 0x46006885  abs.s       $f2, $f13
    ctx->pc = 0x1f8180u;
    ctx->f[2] = FPU_ABS_S(ctx->f[13]);
    // 0x1f8184: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1f8184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1f8188: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1f8188u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1f818c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f818cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f8190: 0x0  nop
    ctx->pc = 0x1f8190u;
    // NOP
    // 0x1f8194: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1f8194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8198: 0x0  nop
    ctx->pc = 0x1f8198u;
    // NOP
    // 0x1f819c: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1F819Cu;
    {
        const bool branch_taken_0x1f819c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F81A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F819Cu;
        // 0x1f81a0: 0x46006005  abs.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_ABS_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f819c) {
            ctx->pc = 0x1F81F4u;
            goto label_1f81f4;
        }
    }
    ctx->pc = 0x1F81A4u;
    // 0x1f81a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f81a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f81a8: 0x0  nop
    ctx->pc = 0x1f81a8u;
    // NOP
    // 0x1f81ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F81ACu;
    {
        const bool branch_taken_0x1f81ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f81ac) {
            ctx->pc = 0x1F81C0u;
            goto label_1f81c0;
        }
    }
    ctx->pc = 0x1F81B4u;
    // 0x1f81b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f81b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f81b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F81B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F81B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F81C0u;
label_1f81c0:
    // 0x1f81c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f81c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f81c4: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1f81c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x1f81c8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f81c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f81cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f81ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f81d0: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x1f81d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f81d4: 0x0  nop
    ctx->pc = 0x1f81d4u;
    // NOP
    // 0x1f81d8: 0x45010054  bc1t        . + 4 + (0x54 << 2)
    ctx->pc = 0x1F81D8u;
    {
        const bool branch_taken_0x1f81d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f81d8) {
            ctx->pc = 0x1F832Cu;
            goto label_1f832c;
        }
    }
    ctx->pc = 0x1F81E0u;
    // 0x1f81e0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1f81e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1f81e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f81e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f81e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f81e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f81ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1F81ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F81ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F81F4u;
label_1f81f4:
    // 0x1f81f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f81f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f81f8: 0x0  nop
    ctx->pc = 0x1f81f8u;
    // NOP
    // 0x1f81fc: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1F81FCu;
    {
        const bool branch_taken_0x1f81fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81FCu;
        // 0x1f8200: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81fc) {
            ctx->pc = 0x1F8248u;
            goto label_1f8248;
        }
    }
    ctx->pc = 0x1F8204u;
    // 0x1f8204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8208: 0x0  nop
    ctx->pc = 0x1f8208u;
    // NOP
    // 0x1f820c: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1f820cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8210: 0x0  nop
    ctx->pc = 0x1f8210u;
    // NOP
    // 0x1f8214: 0x45000045  bc1f        . + 4 + (0x45 << 2)
    ctx->pc = 0x1F8214u;
    {
        const bool branch_taken_0x1f8214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8214) {
            ctx->pc = 0x1F832Cu;
            goto label_1f832c;
        }
    }
    ctx->pc = 0x1F821Cu;
    // 0x1f821c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1f821cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8220: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x1f8220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x1f8224: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f8224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f8228: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f8228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f822c: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x1F822Cu;
    {
        const bool branch_taken_0x1f822c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f822c) {
            ctx->pc = 0x1F832Cu;
            goto label_1f832c;
        }
    }
    ctx->pc = 0x1F8234u;
    // 0x1f8234: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f8234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f8238: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f8238u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f823c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f823cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8240: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8248u;
label_1f8248:
    // 0x1f8248: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x1f8248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x1f824c: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x1f824cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1f8250: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x1f8250u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1f8254: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1f8254u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8258: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1f8258u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f825c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1f825cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f8260: 0x48a83800  qmtc2.ni    $t0, $vf7
    ctx->pc = 0x1f8260u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1f8264: 0x48a94000  qmtc2.ni    $t1, $vf8
    ctx->pc = 0x1f8264u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x1f8268: 0x4b083a68  vadd.x      $vf9, $vf7, $vf8
    ctx->pc = 0x1f8268u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1f826c: 0x4b07422c  vsub.x      $vf8, $vf8, $vf7
    ctx->pc = 0x1f826cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f8270: 0x4a0943bc  vdiv        $Q, $vf8x, $vf9x
    ctx->pc = 0x1f8270u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = ps2VuDivide(ctx->vu0_status, fs, ft); }
    // 0x1f8274: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f8274u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f8278: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x1f8278u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f827c: 0x4b073a2a  vmul.x      $vf8, $vf7, $vf7
    ctx->pc = 0x1f827cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f8280: 0x4b0439bc  vmulax.x    $ACC, $vf7, $vf4x
    ctx->pc = 0x1f8280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1f8284: 0x4b0839ea  vmul.x      $vf7, $vf7, $vf8
    ctx->pc = 0x1f8284u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f8288: 0x4b0438bd  vmadday.x   $ACC, $vf7, $vf4y
    ctx->pc = 0x1f8288u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1f828c: 0x4b0839ea  vmul.x      $vf7, $vf7, $vf8
    ctx->pc = 0x1f828cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f8290: 0x4b0438be  vmaddaz.x   $ACC, $vf7, $vf4z
    ctx->pc = 0x1f8290u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1f8294: 0x4b0839ea  vmul.x      $vf7, $vf7, $vf8
    ctx->pc = 0x1f8294u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f8298: 0x4b0438bf  vmaddaw.x   $ACC, $vf7, $vf4w
    ctx->pc = 0x1f8298u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1f829c: 0x4b0839ea  vmul.x      $vf7, $vf7, $vf8
    ctx->pc = 0x1f829cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f82a0: 0x4b0538bc  vmaddax.x   $ACC, $vf7, $vf5x
    ctx->pc = 0x1f82a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1f82a4: 0x4b0839ea  vmul.x      $vf7, $vf7, $vf8
    ctx->pc = 0x1f82a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f82a8: 0x4b0538bd  vmadday.x   $ACC, $vf7, $vf5y
    ctx->pc = 0x1f82a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1f82ac: 0x4b0839ea  vmul.x      $vf7, $vf7, $vf8
    ctx->pc = 0x1f82acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f82b0: 0x4b0538be  vmaddaz.x   $ACC, $vf7, $vf5z
    ctx->pc = 0x1f82b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1f82b4: 0x4b0839ea  vmul.x      $vf7, $vf7, $vf8
    ctx->pc = 0x1f82b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f82b8: 0x4b0538bf  vmaddaw.x   $ACC, $vf7, $vf5w
    ctx->pc = 0x1f82b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1f82bc: 0x4b0031cb  vmaddw.x    $vf7, $vf6, $vf0w
    ctx->pc = 0x1f82bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f82c0: 0x48283800  qmfc2.ni    $t0, $vf7
    ctx->pc = 0x1f82c0u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1f82c4: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1f82c4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f82c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f82c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f82cc: 0x0  nop
    ctx->pc = 0x1f82ccu;
    // NOP
    // 0x1f82d0: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1f82d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f82d4: 0x0  nop
    ctx->pc = 0x1f82d4u;
    // NOP
    // 0x1f82d8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1F82D8u;
    {
        const bool branch_taken_0x1f82d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f82d8) {
            ctx->pc = 0x1F8318u;
            goto label_1f8318;
        }
    }
    ctx->pc = 0x1F82E0u;
    // 0x1f82e0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1f82e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f82e4: 0x0  nop
    ctx->pc = 0x1f82e4u;
    // NOP
    // 0x1f82e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F82E8u;
    {
        const bool branch_taken_0x1f82e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f82e8) {
            ctx->pc = 0x1F8304u;
            goto label_1f8304;
        }
    }
    ctx->pc = 0x1F82F0u;
    // 0x1f82f0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f82f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f82f4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f82f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f82f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f82f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f82fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F82FCu;
    {
        const bool branch_taken_0x1f82fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82FCu;
        // 0x1f8300: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f82fc) {
            ctx->pc = 0x1F8328u;
            goto label_1f8328;
        }
    }
    ctx->pc = 0x1F8304u;
label_1f8304:
    // 0x1f8304: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f8304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f8308: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f8308u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f830c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f830cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8310: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8310u;
    {
        const bool branch_taken_0x1f8310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8310u;
        // 0x1f8314: 0x46010041  sub.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8310) {
            ctx->pc = 0x1F8328u;
            goto label_1f8328;
        }
    }
    ctx->pc = 0x1F8318u;
label_1f8318:
    // 0x1f8318: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1f8318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f831c: 0x0  nop
    ctx->pc = 0x1f831cu;
    // NOP
    // 0x1f8320: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F8320u;
    {
        const bool branch_taken_0x1f8320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8320) {
            ctx->pc = 0x1F8324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8320u;
            // 0x1f8324: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8328u;
            goto label_1f8328;
        }
    }
    ctx->pc = 0x1F8328u;
label_1f8328:
    // 0x1f8328: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1f8328u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1f832c:
    // 0x1f832c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F832Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F832Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8334u;
    // 0x1f8334: 0x0  nop
    ctx->pc = 0x1f8334u;
    // NOP
    // 0x1f8338: 0x0  nop
    ctx->pc = 0x1f8338u;
    // NOP
    // 0x1f833c: 0x0  nop
    ctx->pc = 0x1f833cu;
    // NOP
    // 0x1f8340: 0x0  nop
    ctx->pc = 0x1f8340u;
    // NOP
    // 0x1f8344: 0x0  nop
    ctx->pc = 0x1f8344u;
    // NOP
    // 0x1f8348: 0x0  nop
    ctx->pc = 0x1f8348u;
    // NOP
    // 0x1f834c: 0x0  nop
    ctx->pc = 0x1f834cu;
    // NOP
    ctx->pc = 0x1f8350u;
}
