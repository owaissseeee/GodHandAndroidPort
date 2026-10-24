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

// Function: func_00136030
// Address: 0x136030 - 0x1361a0
void func_00136030_0x136030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00136030_0x136030");
#endif

    switch (ctx->pc) {
        case 0x1360c0u: goto label_1360c0;
        case 0x1360ccu: goto label_1360cc;
        case 0x1360d8u: goto label_1360d8;
        case 0x1360f4u: goto label_1360f4;
        case 0x136108u: goto label_136108;
        case 0x136114u: goto label_136114;
        case 0x13613cu: goto label_13613c;
        case 0x136148u: goto label_136148;
        default: break;
    }

    ctx->pc = 0x136030u;

    // 0x136030: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x136030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x136034: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x136034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x136038: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x136038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x13603c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x13603cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x136040: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x136040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x136044: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x136044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x136048: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x136048u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x13604c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x13604cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x136050: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x136050u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x136054: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x136054u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x136058: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x136058u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x13605c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x13605cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136060: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x136060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x136064: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x136064u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x136068: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x136068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13606c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x13606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x136070: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x136070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x136074: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x136074u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136078: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x136078u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13607c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x13607cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x136080: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x136080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136084: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x136084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x136088: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x136088u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13608c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x13608cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136090: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x136090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x136094: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x136094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x136098: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x136098u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13609c: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x13609cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1360a0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1360a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1360a4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1360a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1360a8: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1360a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1360ac: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1360acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1360b0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1360b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1360b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1360b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360b8: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x1360B8u;
    SET_GPR_U32(ctx, 31, 0x1360C0u);
    ctx->pc = 0x1360BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1360B8u;
    // 0x1360bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x1360B8u, 0x1360C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1360C0u;
label_1360c0:
    // 0x1360c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1360c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360c4: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x1360C4u;
    SET_GPR_U32(ctx, 31, 0x1360CCu);
    ctx->pc = 0x1360C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1360C4u;
    // 0x1360c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x1360C4u, 0x1360CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1360CCu;
label_1360cc:
    // 0x1360cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1360ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360d0: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x1360D0u;
    SET_GPR_U32(ctx, 31, 0x1360D8u);
    ctx->pc = 0x1360D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1360D0u;
    // 0x1360d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x1360D0u, 0x1360D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1360D8u;
label_1360d8:
    // 0x1360d8: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1360d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1360dc: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1360dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1360e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1360e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1360e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360e8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1360e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1360ec: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x1360ECu;
    SET_GPR_U32(ctx, 31, 0x1360F4u);
    ctx->pc = 0x1360F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1360ECu;
    // 0x1360f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x1360ECu, 0x1360F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1360F4u;
label_1360f4:
    // 0x1360f4: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1360f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1360f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1360f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1360fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136100: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x136100u;
    SET_GPR_U32(ctx, 31, 0x136108u);
    ctx->pc = 0x136104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136100u;
    // 0x136104: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x136100u, 0x136108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136108u;
label_136108:
    // 0x136108: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13610c: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x13610Cu;
    SET_GPR_U32(ctx, 31, 0x136114u);
    ctx->pc = 0x136110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13610Cu;
    // 0x136110: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x13610Cu, 0x136114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136114u;
label_136114:
    // 0x136114: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x136114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136118: 0x0  nop
    ctx->pc = 0x136118u;
    // NOP
    // 0x13611c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x13611Cu;
    {
        const bool branch_taken_0x13611c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13611c) {
            ctx->pc = 0x136158u;
            goto label_136158;
        }
    }
    ctx->pc = 0x136124u;
    // 0x136124: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x136124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x136128: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x136128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13612c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13612cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136130: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x136130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136134: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x136134u;
    SET_GPR_U32(ctx, 31, 0x13613Cu);
    ctx->pc = 0x136138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136134u;
    // 0x136138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x136134u, 0x13613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13613Cu;
label_13613c:
    // 0x13613c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13613cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136140: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x136140u;
    SET_GPR_U32(ctx, 31, 0x136148u);
    ctx->pc = 0x136144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136140u;
    // 0x136144: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x136140u, 0x136148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136148u;
label_136148:
    // 0x136148: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x136148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13614c: 0x0  nop
    ctx->pc = 0x13614cu;
    // NOP
    // 0x136150: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x136150u;
    {
        const bool branch_taken_0x136150 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136150u;
        // 0x136154: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136150) {
            ctx->pc = 0x136180u;
            goto label_136180;
        }
    }
    ctx->pc = 0x136158u;
label_136158:
    // 0x136158: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x136158u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x13615c: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x13615cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x136160: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x136160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x136164: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136168: 0x0  nop
    ctx->pc = 0x136168u;
    // NOP
    // 0x13616c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13616cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136170: 0x0  nop
    ctx->pc = 0x136170u;
    // NOP
    // 0x136174: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x136174u;
    {
        const bool branch_taken_0x136174 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x136178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136174u;
        // 0x136178: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136174) {
            ctx->pc = 0x136180u;
            goto label_136180;
        }
    }
    ctx->pc = 0x13617Cu;
    // 0x13617c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13617cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136180:
    // 0x136180: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x136180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x136184: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x136184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x136188: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x136188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13618c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x13618cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x136190: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x136190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x136194: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x136194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x136198: 0x3e00008  jr          $ra
    ctx->pc = 0x136198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136198u;
        // 0x13619c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1361A0u;
}
