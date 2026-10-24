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

// Function: func_0018A3E8
// Address: 0x18a3e8 - 0x18a548
void func_0018A3E8_0x18a3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018A3E8_0x18a3e8");
#endif

    switch (ctx->pc) {
        case 0x18a41cu: goto label_18a41c;
        case 0x18a42cu: goto label_18a42c;
        case 0x18a43cu: goto label_18a43c;
        case 0x18a44cu: goto label_18a44c;
        case 0x18a4c8u: goto label_18a4c8;
        case 0x18a4d8u: goto label_18a4d8;
        default: break;
    }

    ctx->pc = 0x18a3e8u;

    // 0x18a3e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18a3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18a3ec: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18a3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x18a3f0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x18a3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x18a3f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18a3f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a3f8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x18a3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x18a3fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18a3fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a400: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x18a400u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a404: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x18a404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x18a408: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18a408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18a40c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18a40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18a410: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18a410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a414: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18A414u;
    SET_GPR_U32(ctx, 31, 0x18A41Cu);
    ctx->pc = 0x18A418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A414u;
    // 0x18a418: 0x36110040  ori         $s1, $s0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18A414u, 0x18A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A41Cu;
label_18a41c:
    // 0x18a41c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18a41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a420: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18a420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a424: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18A424u;
    SET_GPR_U32(ctx, 31, 0x18A42Cu);
    ctx->pc = 0x18A428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A424u;
    // 0x18a428: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18A424u, 0x18A42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A42Cu;
label_18a42c:
    // 0x18a42c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18a42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18a430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a434: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x18A434u;
    SET_GPR_U32(ctx, 31, 0x18A43Cu);
    ctx->pc = 0x18A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A434u;
    // 0x18a438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x18A434u, 0x18A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A43Cu;
label_18a43c:
    // 0x18a43c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18a43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a440: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18a440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a444: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x18A444u;
    SET_GPR_U32(ctx, 31, 0x18A44Cu);
    ctx->pc = 0x18A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A444u;
    // 0x18a448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x18A444u, 0x18A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A44Cu;
label_18a44c:
    // 0x18a44c: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x18a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x18a450: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x18a450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x18a454: 0x264405c0  addiu       $a0, $s2, 0x5C0
    ctx->pc = 0x18a454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x18a458: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18a458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18a45c: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x18a45cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
    // 0x18a460: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x18a460u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18a464: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x18a464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18a468: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18a468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18a46c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18a46cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18a470: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x18a470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18a474: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x18a474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x18a478: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x18a478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x18a47c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x18a47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x18a480: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x18a480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x18a484: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x18a484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x18a488: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18a488u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18a48c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18a48cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a490: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x18a490u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a494: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x18a494u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x18a498: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18a498u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18a49c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18a49cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18a4a0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x18a4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18a4a4: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x18a4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x18a4a8: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x18a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x18a4ac: 0x248336c0  addiu       $v1, $a0, 0x36C0
    ctx->pc = 0x18a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 14016));
    // 0x18a4b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a4b4: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x18a4b4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a4b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18a4b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A4BCu;
    {
        const bool branch_taken_0x18a4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4BCu;
        // 0x18a4c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4bc) {
            ctx->pc = 0x18A4DCu;
            goto label_18a4dc;
        }
    }
    ctx->pc = 0x18A4C4u;
    // 0x18a4c4: 0x0  nop
    ctx->pc = 0x18a4c4u;
    // NOP
label_18a4c8:
    // 0x18a4c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18a4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18a4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4d0: 0xc06284c  jal         func_18A130
    ctx->pc = 0x18A4D0u;
    SET_GPR_U32(ctx, 31, 0x18A4D8u);
    ctx->pc = 0x18A4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A4D0u;
    // 0x18a4d4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A130u, 0x18A4D0u, 0x18A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A4D8u;
label_18a4d8:
    // 0x18a4d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18a4dc:
    // 0x18a4dc: 0x262436c0  addiu       $a0, $s1, 0x36C0
    ctx->pc = 0x18a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14016));
    // 0x18a4e0: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x18a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x18a4e4: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x18a4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18a4e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18a4ec: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x18a4ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a4f0: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x18a4f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x18a4f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a4f8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x18a4f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18a4fc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A4FCu;
    {
        const bool branch_taken_0x18a4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a4fc) {
            ctx->pc = 0x18A500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A4FCu;
            // 0x18a500: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A514u;
            goto label_18a514;
        }
    }
    ctx->pc = 0x18A504u;
    // 0x18a504: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x18a504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x18a508: 0x1450ffef  bne         $v0, $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x18A508u;
    {
        const bool branch_taken_0x18a508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x18A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A508u;
        // 0x18a50c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a508) {
            ctx->pc = 0x18A4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a4c8;
        }
    }
    ctx->pc = 0x18A510u;
    // 0x18a510: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18a510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18a514:
    // 0x18a514: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x18a514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a518: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x18a518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a51c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18a51cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a520: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x18a520u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a524: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18a524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a528: 0x3e00008  jr          $ra
    ctx->pc = 0x18A528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A528u;
        // 0x18a52c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A530u;
    // 0x18a530: 0x0  nop
    ctx->pc = 0x18a530u;
    // NOP
    // 0x18a534: 0x0  nop
    ctx->pc = 0x18a534u;
    // NOP
    // 0x18a538: 0x0  nop
    ctx->pc = 0x18a538u;
    // NOP
    // 0x18a53c: 0x0  nop
    ctx->pc = 0x18a53cu;
    // NOP
    // 0x18a540: 0x0  nop
    ctx->pc = 0x18a540u;
    // NOP
    // 0x18a544: 0x0  nop
    ctx->pc = 0x18a544u;
    // NOP
    ctx->pc = 0x18a548u;
}
