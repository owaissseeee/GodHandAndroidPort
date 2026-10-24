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

// Function: func_001736A8
// Address: 0x1736a8 - 0x173820
void func_001736A8_0x1736a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001736A8_0x1736a8");
#endif

    switch (ctx->pc) {
        case 0x173708u: goto label_173708;
        case 0x173718u: goto label_173718;
        case 0x173728u: goto label_173728;
        case 0x173738u: goto label_173738;
        case 0x1737b0u: goto label_1737b0;
        case 0x1737c8u: goto label_1737c8;
        default: break;
    }

    ctx->pc = 0x1736a8u;

    // 0x1736a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1736a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1736ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1736acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1736b0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1736b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1736b4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1736b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1736b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1736b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1736bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736c0: 0x103942  srl         $a3, $s0, 5
    ctx->pc = 0x1736c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x1736c4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1736c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1736c8: 0x26430d90  addiu       $v1, $s2, 0xD90
    ctx->pc = 0x1736c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3472));
    // 0x1736cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1736ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1736d0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1736d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1736d4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1736d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1736d8: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1736d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1736dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1736dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1736e0: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x1736e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1736e4: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x1736e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1736e8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1736e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736ec: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1736ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1736f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1736f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1736f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1736f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1736fc: 0x36110040  ori         $s1, $s0, 0x40
    ctx->pc = 0x1736fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x173700: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x173700u;
    SET_GPR_U32(ctx, 31, 0x173708u);
    ctx->pc = 0x173704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173700u;
    // 0x173704: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x173700u, 0x173708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173708u;
label_173708:
    // 0x173708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x173708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17370c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17370cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173710: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x173710u;
    SET_GPR_U32(ctx, 31, 0x173718u);
    ctx->pc = 0x173714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173710u;
    // 0x173714: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x173710u, 0x173718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173718u;
label_173718:
    // 0x173718: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17371c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17371cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173720: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x173720u;
    SET_GPR_U32(ctx, 31, 0x173728u);
    ctx->pc = 0x173724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173720u;
    // 0x173724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x173720u, 0x173728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173728u;
label_173728:
    // 0x173728: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x173728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17372c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17372cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173730: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x173730u;
    SET_GPR_U32(ctx, 31, 0x173738u);
    ctx->pc = 0x173734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173730u;
    // 0x173734: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x173730u, 0x173738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173738u;
label_173738:
    // 0x173738: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x173738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x17373c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x17373cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x173740: 0x264405c0  addiu       $a0, $s2, 0x5C0
    ctx->pc = 0x173740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x173744: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x173744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x173748: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x173748u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
    // 0x17374c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x17374cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x173750: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x173750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x173754: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x173754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x173758: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x173758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17375c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x17375cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173760: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x173760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x173764: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x173764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x173768: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x173768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x17376c: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x17376cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x173770: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x173770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x173774: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x173774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x173778: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x173778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17377c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x17377cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173780: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x173780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x173784: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x173784u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x173788: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x173788u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17378c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x17378cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x173790: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x173790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x173794: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x173794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x173798: 0x24830fa8  addiu       $v1, $a0, 0xFA8
    ctx->pc = 0x173798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4008));
    // 0x17379c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17379cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1737a0: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x1737a0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1737a4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1737a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1737a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1737A8u;
    {
        const bool branch_taken_0x1737a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1737ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737A8u;
        // 0x1737ac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1737a8) {
            ctx->pc = 0x1737C8u;
            goto label_1737c8;
        }
    }
    ctx->pc = 0x1737B0u;
label_1737b0:
    // 0x1737b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1737b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1737b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1737b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1737b8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1737b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1737bc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1737bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1737c0: 0xc05ccec  jal         func_1733B0
    ctx->pc = 0x1737C0u;
    SET_GPR_U32(ctx, 31, 0x1737C8u);
    ctx->pc = 0x1737C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1737C0u;
    // 0x1737c4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1733B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733B0u, 0x1737C0u, 0x1737C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1737C8u;
label_1737c8:
    // 0x1737c8: 0x26240fa8  addiu       $a0, $s1, 0xFA8
    ctx->pc = 0x1737c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4008));
    // 0x1737cc: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1737ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1737d0: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1737d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1737d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1737d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1737d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1737d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1737dc: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x1737dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1737e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1737e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1737e4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1737e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1737e8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1737E8u;
    {
        const bool branch_taken_0x1737e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1737e8) {
            ctx->pc = 0x1737ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1737E8u;
            // 0x1737ec: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173800u;
            goto label_173800;
        }
    }
    ctx->pc = 0x1737F0u;
    // 0x1737f0: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1737f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1737f4: 0x1450ffee  bne         $v0, $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1737F4u;
    {
        const bool branch_taken_0x1737f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1737F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737F4u;
        // 0x1737f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1737f4) {
            ctx->pc = 0x1737B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1737b0;
        }
    }
    ctx->pc = 0x1737FCu;
    // 0x1737fc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1737fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_173800:
    // 0x173800: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x173800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x173804: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x173804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173808: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x173808u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17380c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x17380cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173810: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173814: 0x3e00008  jr          $ra
    ctx->pc = 0x173814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173814u;
        // 0x173818: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17381Cu;
    // 0x17381c: 0x0  nop
    ctx->pc = 0x17381cu;
    // NOP
    ctx->pc = 0x173820u;
}
