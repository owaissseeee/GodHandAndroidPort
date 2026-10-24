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

// Function: GetDistCalcPointSegment
// Address: 0x157220 - 0x1573c8
void GetDistCalcPointSegment_0x157220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDistCalcPointSegment_0x157220");
#endif

    switch (ctx->pc) {
        case 0x15728cu: goto label_15728c;
        case 0x15729cu: goto label_15729c;
        case 0x15739cu: goto label_15739c;
        default: break;
    }

    ctx->pc = 0x157220u;

    // 0x157220: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x157220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x157224: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x157224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x157228: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x157228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x15722c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x15722cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157230: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x157230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157234: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x157234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x157238: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x157238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15723c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x15723cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x157240: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x157240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x157244: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x157244u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x157248: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x157248u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15724c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x15724cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157250: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x157250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157254: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x157254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x157258: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x157258u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15725c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x15725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157260: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x157260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x157264: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x157264u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x157268: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x157268u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15726c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x15726cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157270: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x157270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157274: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x157274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157278: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x157278u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15727c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x15727cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157280: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x157280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157284: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x157284u;
    SET_GPR_U32(ctx, 31, 0x15728Cu);
    ctx->pc = 0x157288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157284u;
    // 0x157288: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x157284u, 0x15728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15728Cu;
label_15728c:
    // 0x15728c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15728cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x157290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157294: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x157294u;
    SET_GPR_U32(ctx, 31, 0x15729Cu);
    ctx->pc = 0x157298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157294u;
    // 0x157298: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x157294u, 0x15729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15729Cu;
label_15729c:
    // 0x15729c: 0x0  nop
    ctx->pc = 0x15729cu;
    // NOP
    // 0x1572a0: 0x0  nop
    ctx->pc = 0x1572a0u;
    // NOP
    // 0x1572a4: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x1572a4u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x1572a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1572a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1572ac: 0x0  nop
    ctx->pc = 0x1572acu;
    // NOP
    // 0x1572b0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1572b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1572b4: 0x0  nop
    ctx->pc = 0x1572b4u;
    // NOP
    // 0x1572b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1572B8u;
    {
        const bool branch_taken_0x1572b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1572b8) {
            ctx->pc = 0x1572C8u;
            goto label_1572c8;
        }
    }
    ctx->pc = 0x1572C0u;
    // 0x1572c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1572C0u;
    {
        const bool branch_taken_0x1572c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1572C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1572C0u;
        // 0x1572c4: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1572c0) {
            ctx->pc = 0x1572E4u;
            goto label_1572e4;
        }
    }
    ctx->pc = 0x1572C8u;
label_1572c8:
    // 0x1572c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1572c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1572cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1572ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1572d0: 0x0  nop
    ctx->pc = 0x1572d0u;
    // NOP
    // 0x1572d4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1572d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1572d8: 0x0  nop
    ctx->pc = 0x1572d8u;
    // NOP
    // 0x1572dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1572DCu;
    {
        const bool branch_taken_0x1572dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1572dc) {
            ctx->pc = 0x1572E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1572DCu;
            // 0x1572e0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1572E4u;
            goto label_1572e4;
        }
    }
    ctx->pc = 0x1572E4u;
label_1572e4:
    // 0x1572e4: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1572e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1572e8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1572e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1572ec: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1572ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1572f0: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1572f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1572f4: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1572f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1572f8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1572f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1572fc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1572fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157300: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x157300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157304: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x157304u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157308: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x157308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15730c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15730cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x157310: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x157310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x157314: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x157314u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157318: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x157318u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15731c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x15731cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157320: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x157320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157324: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x157324u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157328: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x157328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15732c: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x15732Cu;
    {
        const bool branch_taken_0x15732c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x157330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15732Cu;
        // 0x157330: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15732c) {
            ctx->pc = 0x157394u;
            goto label_157394;
        }
    }
    ctx->pc = 0x157334u;
    // 0x157334: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x157334u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x157338: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x157338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15733c: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x15733cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x157340: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x157340u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x157344: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x157344u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x157348: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x157348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15734c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x15734cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157350: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x157350u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157354: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x157354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157358: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x157358u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15735c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x15735cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157360: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x157360u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x157364: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x157364u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157368: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x157368u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15736c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x15736cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157370: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x157370u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157374: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x157374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157378: 0x12240006  beq         $s1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157378u;
    {
        const bool branch_taken_0x157378 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x15737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157378u;
        // 0x15737c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157378) {
            ctx->pc = 0x157394u;
            goto label_157394;
        }
    }
    ctx->pc = 0x157380u;
    // 0x157380: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x157380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157384: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x157384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157388: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x157388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x15738c: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x15738cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x157390: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x157390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_157394:
    // 0x157394: 0xc07df7e  jal         func_1F7DF8
    ctx->pc = 0x157394u;
    SET_GPR_U32(ctx, 31, 0x15739Cu);
    ctx->pc = 0x157398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157394u;
    // 0x157398: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF8u, 0x157394u, 0x15739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15739Cu;
label_15739c:
    // 0x15739c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x15739cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1573a0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1573a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1573a4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1573a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1573a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1573a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1573ac: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1573acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1573b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1573B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1573B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573B0u;
        // 0x1573b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1573B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1573B8u;
    // 0x1573b8: 0x0  nop
    ctx->pc = 0x1573b8u;
    // NOP
    // 0x1573bc: 0x0  nop
    ctx->pc = 0x1573bcu;
    // NOP
    // 0x1573c0: 0x0  nop
    ctx->pc = 0x1573c0u;
    // NOP
    // 0x1573c4: 0x0  nop
    ctx->pc = 0x1573c4u;
    // NOP
    ctx->pc = 0x1573c8u;
}
