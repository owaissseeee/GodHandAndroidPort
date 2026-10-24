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

// Function: func_001A23C0
// Address: 0x1a23c0 - 0x1a2550
void func_001A23C0_0x1a23c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A23C0_0x1a23c0");
#endif

    switch (ctx->pc) {
        case 0x1a2420u: goto label_1a2420;
        case 0x1a2430u: goto label_1a2430;
        case 0x1a2440u: goto label_1a2440;
        case 0x1a2450u: goto label_1a2450;
        case 0x1a24c8u: goto label_1a24c8;
        case 0x1a24e0u: goto label_1a24e0;
        default: break;
    }

    ctx->pc = 0x1a23c0u;

    // 0x1a23c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a23c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a23c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a23c8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1a23c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1a23cc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1a23ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1a23d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a23d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a23d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a23d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a23d8: 0x103942  srl         $a3, $s0, 5
    ctx->pc = 0x1a23d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x1a23dc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1a23dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1a23e0: 0x26430d90  addiu       $v1, $s2, 0xD90
    ctx->pc = 0x1a23e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3472));
    // 0x1a23e4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a23e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a23e8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1a23e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a23ec: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1a23ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1a23f0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1a23f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a23f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a23f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a23f8: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x1a23f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1a23fc: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x1a23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1a2400: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a2400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2404: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1a2404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a2408: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a2408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a240c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a240cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2410: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a2410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a2414: 0x36110040  ori         $s1, $s0, 0x40
    ctx->pc = 0x1a2414u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x1a2418: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1A2418u;
    SET_GPR_U32(ctx, 31, 0x1A2420u);
    ctx->pc = 0x1A241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2418u;
    // 0x1a241c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A2418u, 0x1A2420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2420u;
label_1a2420:
    // 0x1a2420: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a2420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2424: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a2424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2428: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1A2428u;
    SET_GPR_U32(ctx, 31, 0x1A2430u);
    ctx->pc = 0x1A242Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2428u;
    // 0x1a242c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A2428u, 0x1A2430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2430u;
label_1a2430:
    // 0x1a2430: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a2430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2434: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a2434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2438: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1A2438u;
    SET_GPR_U32(ctx, 31, 0x1A2440u);
    ctx->pc = 0x1A243Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2438u;
    // 0x1a243c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1A2438u, 0x1A2440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2440u;
label_1a2440:
    // 0x1a2440: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a2440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2444: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a2444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2448: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1A2448u;
    SET_GPR_U32(ctx, 31, 0x1A2450u);
    ctx->pc = 0x1A244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2448u;
    // 0x1a244c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1A2448u, 0x1A2450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2450u;
label_1a2450:
    // 0x1a2450: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x1a2450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x1a2454: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a2454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1a2458: 0x264405c0  addiu       $a0, $s2, 0x5C0
    ctx->pc = 0x1a2458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x1a245c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a245cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a2460: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x1a2460u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
    // 0x1a2464: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1a2464u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a2468: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a2468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a246c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a246cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a2470: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a2470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a2474: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1a2474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a2478: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1a2478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1a247c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1a247cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1a2480: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a2480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1a2484: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x1a2484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1a2488: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1a2488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1a248c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a248cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a2490: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2494: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a2494u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2498: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1a2498u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1a249c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1a249cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1a24a0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1a24a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a24a4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a24a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a24a8: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x1a24a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x1a24ac: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1a24acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1a24b0: 0x24836f30  addiu       $v1, $a0, 0x6F30
    ctx->pc = 0x1a24b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28464));
    // 0x1a24b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a24b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a24b8: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x1a24b8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a24bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a24bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A24C0u;
    {
        const bool branch_taken_0x1a24c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24C0u;
        // 0x1a24c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a24c0) {
            ctx->pc = 0x1A24E0u;
            goto label_1a24e0;
        }
    }
    ctx->pc = 0x1A24C8u;
label_1a24c8:
    // 0x1a24c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a24c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a24ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24d0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1a24d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24d4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1a24d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24d8: 0xc068832  jal         func_1A20C8
    ctx->pc = 0x1A24D8u;
    SET_GPR_U32(ctx, 31, 0x1A24E0u);
    ctx->pc = 0x1A24DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A24D8u;
    // 0x1a24dc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A20C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A20C8u, 0x1A24D8u, 0x1A24E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A24E0u;
label_1a24e0:
    // 0x1a24e0: 0x26246f30  addiu       $a0, $s1, 0x6F30
    ctx->pc = 0x1a24e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28464));
    // 0x1a24e4: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1a24e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1a24e8: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1a24e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a24ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a24ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a24f0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a24f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a24f4: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x1a24f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1a24f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a24f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a24fc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1a24fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a2500: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2500u;
    {
        const bool branch_taken_0x1a2500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2500) {
            ctx->pc = 0x1A2504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2500u;
            // 0x1a2504: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2518u;
            goto label_1a2518;
        }
    }
    ctx->pc = 0x1A2508u;
    // 0x1a2508: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1a2508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a250c: 0x1450ffee  bne         $v0, $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1A250Cu;
    {
        const bool branch_taken_0x1a250c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1A2510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A250Cu;
        // 0x1a2510: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a250c) {
            ctx->pc = 0x1A24C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a24c8;
        }
    }
    ctx->pc = 0x1A2514u;
    // 0x1a2514: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1a2514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a2518:
    // 0x1a2518: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1a2518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a251c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1a251cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a2520: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a2520u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2524: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1a2524u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2528: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a2528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a252c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A252Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A252Cu;
        // 0x1a2530: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A252Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2534u;
    // 0x1a2534: 0x0  nop
    ctx->pc = 0x1a2534u;
    // NOP
    // 0x1a2538: 0x0  nop
    ctx->pc = 0x1a2538u;
    // NOP
    // 0x1a253c: 0x0  nop
    ctx->pc = 0x1a253cu;
    // NOP
    // 0x1a2540: 0x0  nop
    ctx->pc = 0x1a2540u;
    // NOP
    // 0x1a2544: 0x0  nop
    ctx->pc = 0x1a2544u;
    // NOP
    // 0x1a2548: 0x0  nop
    ctx->pc = 0x1a2548u;
    // NOP
    // 0x1a254c: 0x0  nop
    ctx->pc = 0x1a254cu;
    // NOP
    ctx->pc = 0x1a2550u;
}
