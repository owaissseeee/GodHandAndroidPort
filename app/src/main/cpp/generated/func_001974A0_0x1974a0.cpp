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

// Function: func_001974A0
// Address: 0x1974a0 - 0x197630
void func_001974A0_0x1974a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001974A0_0x1974a0");
#endif

    switch (ctx->pc) {
        case 0x197500u: goto label_197500;
        case 0x197510u: goto label_197510;
        case 0x197520u: goto label_197520;
        case 0x197530u: goto label_197530;
        case 0x1975a8u: goto label_1975a8;
        case 0x1975c0u: goto label_1975c0;
        default: break;
    }

    ctx->pc = 0x1974a0u;

    // 0x1974a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1974a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1974a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1974a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1974a8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1974a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1974ac: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1974acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1974b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1974b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1974b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974b8: 0x103942  srl         $a3, $s0, 5
    ctx->pc = 0x1974b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x1974bc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1974bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1974c0: 0x264309d0  addiu       $v1, $s2, 0x9D0
    ctx->pc = 0x1974c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2512));
    // 0x1974c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1974c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1974c8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1974c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1974cc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1974ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1974d0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1974d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1974d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1974d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1974d8: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x1974d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1974dc: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x1974dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1974e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1974e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974e4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1974e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1974e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1974e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1974ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1974f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1974f4: 0x36110040  ori         $s1, $s0, 0x40
    ctx->pc = 0x1974f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x1974f8: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1974F8u;
    SET_GPR_U32(ctx, 31, 0x197500u);
    ctx->pc = 0x1974FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1974F8u;
    // 0x1974fc: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1974F8u, 0x197500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197500u;
label_197500:
    // 0x197500: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x197500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197504: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x197504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197508: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x197508u;
    SET_GPR_U32(ctx, 31, 0x197510u);
    ctx->pc = 0x19750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197508u;
    // 0x19750c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x197508u, 0x197510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197510u;
label_197510:
    // 0x197510: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x197510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197514: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x197514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197518: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x197518u;
    SET_GPR_U32(ctx, 31, 0x197520u);
    ctx->pc = 0x19751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197518u;
    // 0x19751c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x197518u, 0x197520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197520u;
label_197520:
    // 0x197520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x197520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197524: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x197524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197528: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x197528u;
    SET_GPR_U32(ctx, 31, 0x197530u);
    ctx->pc = 0x19752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197528u;
    // 0x19752c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x197528u, 0x197530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197530u;
label_197530:
    // 0x197530: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x197530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x197534: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x197534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x197538: 0x264405c0  addiu       $a0, $s2, 0x5C0
    ctx->pc = 0x197538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x19753c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19753cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x197540: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x197540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
    // 0x197544: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x197544u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197548: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x197548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19754c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19754cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x197550: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x197550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197554: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x197554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197558: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x197558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x19755c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x19755cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x197560: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x197560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x197564: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x197564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x197568: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x197568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x19756c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19756cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x197570: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x197570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197574: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x197574u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197578: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x197578u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19757c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x19757cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x197580: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x197580u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x197584: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x197584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x197588: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x197588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x19758c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x19758cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x197590: 0x24834ed0  addiu       $v1, $a0, 0x4ED0
    ctx->pc = 0x197590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20176));
    // 0x197594: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197598: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x197598u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19759c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x19759cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1975a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1975A0u;
    {
        const bool branch_taken_0x1975a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1975A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975A0u;
        // 0x1975a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975a0) {
            ctx->pc = 0x1975C0u;
            goto label_1975c0;
        }
    }
    ctx->pc = 0x1975A8u;
label_1975a8:
    // 0x1975a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1975a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1975ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1975acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1975b0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1975b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1975b4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1975b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1975b8: 0xc065c6a  jal         func_1971A8
    ctx->pc = 0x1975B8u;
    SET_GPR_U32(ctx, 31, 0x1975C0u);
    ctx->pc = 0x1975BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1975B8u;
    // 0x1975bc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1971A8u, 0x1975B8u, 0x1975C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975C0u;
label_1975c0:
    // 0x1975c0: 0x26244ed0  addiu       $a0, $s1, 0x4ED0
    ctx->pc = 0x1975c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20176));
    // 0x1975c4: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1975c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1975c8: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1975c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1975cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1975ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1975d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1975d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1975d4: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x1975d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1975d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1975d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1975dc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1975dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1975e0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1975E0u;
    {
        const bool branch_taken_0x1975e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1975e0) {
            ctx->pc = 0x1975E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1975E0u;
            // 0x1975e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1975F8u;
            goto label_1975f8;
        }
    }
    ctx->pc = 0x1975E8u;
    // 0x1975e8: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1975e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1975ec: 0x1450ffee  bne         $v0, $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1975ECu;
    {
        const bool branch_taken_0x1975ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1975F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975ECu;
        // 0x1975f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975ec) {
            ctx->pc = 0x1975A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1975a8;
        }
    }
    ctx->pc = 0x1975F4u;
    // 0x1975f4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1975f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1975f8:
    // 0x1975f8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1975f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1975fc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1975fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197600: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x197600u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197604: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x197604u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197608: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x197608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19760c: 0x3e00008  jr          $ra
    ctx->pc = 0x19760Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19760Cu;
        // 0x197610: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19760Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197614u;
    // 0x197614: 0x0  nop
    ctx->pc = 0x197614u;
    // NOP
    // 0x197618: 0x0  nop
    ctx->pc = 0x197618u;
    // NOP
    // 0x19761c: 0x0  nop
    ctx->pc = 0x19761cu;
    // NOP
    // 0x197620: 0x0  nop
    ctx->pc = 0x197620u;
    // NOP
    // 0x197624: 0x0  nop
    ctx->pc = 0x197624u;
    // NOP
    // 0x197628: 0x0  nop
    ctx->pc = 0x197628u;
    // NOP
    // 0x19762c: 0x0  nop
    ctx->pc = 0x19762cu;
    // NOP
    ctx->pc = 0x197630u;
}
