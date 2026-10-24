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

// Function: func_001918D0
// Address: 0x1918d0 - 0x191a60
void func_001918D0_0x1918d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001918D0_0x1918d0");
#endif

    switch (ctx->pc) {
        case 0x191930u: goto label_191930;
        case 0x191940u: goto label_191940;
        case 0x191950u: goto label_191950;
        case 0x191960u: goto label_191960;
        case 0x1919d8u: goto label_1919d8;
        case 0x1919f0u: goto label_1919f0;
        default: break;
    }

    ctx->pc = 0x1918d0u;

    // 0x1918d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1918d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1918d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1918d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1918d8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1918d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1918dc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1918dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1918e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1918e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1918e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1918e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1918e8: 0x103942  srl         $a3, $s0, 5
    ctx->pc = 0x1918e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x1918ec: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1918ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1918f0: 0x26430f80  addiu       $v1, $s2, 0xF80
    ctx->pc = 0x1918f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3968));
    // 0x1918f4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1918f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1918f8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1918f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1918fc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1918fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x191900: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x191900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x191904: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x191904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x191908: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x191908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x19190c: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x19190cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x191910: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x191910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191914: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x191914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x191918: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x191918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19191c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19191cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191920: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x191920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x191924: 0x36110040  ori         $s1, $s0, 0x40
    ctx->pc = 0x191924u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x191928: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x191928u;
    SET_GPR_U32(ctx, 31, 0x191930u);
    ctx->pc = 0x19192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191928u;
    // 0x19192c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x191928u, 0x191930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191930u;
label_191930:
    // 0x191930: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x191930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191934: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191938: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x191938u;
    SET_GPR_U32(ctx, 31, 0x191940u);
    ctx->pc = 0x19193Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191938u;
    // 0x19193c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x191938u, 0x191940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191940u;
label_191940:
    // 0x191940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x191940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191944: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x191944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191948: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x191948u;
    SET_GPR_U32(ctx, 31, 0x191950u);
    ctx->pc = 0x19194Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191948u;
    // 0x19194c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x191948u, 0x191950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191950u;
label_191950:
    // 0x191950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x191950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191954: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191958: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x191958u;
    SET_GPR_U32(ctx, 31, 0x191960u);
    ctx->pc = 0x19195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191958u;
    // 0x19195c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x191958u, 0x191960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191960u;
label_191960:
    // 0x191960: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x191960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x191964: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x191964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x191968: 0x264405c0  addiu       $a0, $s2, 0x5C0
    ctx->pc = 0x191968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x19196c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19196cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x191970: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x191970u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
    // 0x191974: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x191974u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x191978: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x191978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19197c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19197cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x191980: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x191980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191984: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x191984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x191988: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x191988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x19198c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x19198cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x191990: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x191990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x191994: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x191994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x191998: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x191998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x19199c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19199cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1919a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1919a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1919a4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1919a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1919a8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1919a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1919ac: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1919acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1919b0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1919b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1919b4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1919b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1919b8: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x1919b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x1919bc: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1919bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1919c0: 0x24834010  addiu       $v1, $a0, 0x4010
    ctx->pc = 0x1919c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16400));
    // 0x1919c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1919c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1919c8: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x1919c8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1919cc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1919ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1919d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1919D0u;
    {
        const bool branch_taken_0x1919d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1919D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919D0u;
        // 0x1919d4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919d0) {
            ctx->pc = 0x1919F0u;
            goto label_1919f0;
        }
    }
    ctx->pc = 0x1919D8u;
label_1919d8:
    // 0x1919d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1919d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1919dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1919dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1919e0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1919e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1919e4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1919e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1919e8: 0xc064576  jal         func_1915D8
    ctx->pc = 0x1919E8u;
    SET_GPR_U32(ctx, 31, 0x1919F0u);
    ctx->pc = 0x1919ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1919E8u;
    // 0x1919ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1915D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1915D8u, 0x1919E8u, 0x1919F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1919F0u;
label_1919f0:
    // 0x1919f0: 0x26244010  addiu       $a0, $s1, 0x4010
    ctx->pc = 0x1919f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16400));
    // 0x1919f4: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1919f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1919f8: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1919f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1919fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1919fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x191a00: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x191a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191a04: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x191a04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x191a08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x191a0c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x191a0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x191a10: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x191A10u;
    {
        const bool branch_taken_0x191a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a10) {
            ctx->pc = 0x191A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191A10u;
            // 0x191a14: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191A28u;
            goto label_191a28;
        }
    }
    ctx->pc = 0x191A18u;
    // 0x191a18: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x191a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x191a1c: 0x1450ffee  bne         $v0, $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x191A1Cu;
    {
        const bool branch_taken_0x191a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x191A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A1Cu;
        // 0x191a20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a1c) {
            ctx->pc = 0x1919D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1919d8;
        }
    }
    ctx->pc = 0x191A24u;
    // 0x191a24: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x191a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_191a28:
    // 0x191a28: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x191a28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x191a2c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x191a2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x191a30: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x191a30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191a34: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x191a34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191a38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x191a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x191A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A3Cu;
        // 0x191a40: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191A44u;
    // 0x191a44: 0x0  nop
    ctx->pc = 0x191a44u;
    // NOP
    // 0x191a48: 0x0  nop
    ctx->pc = 0x191a48u;
    // NOP
    // 0x191a4c: 0x0  nop
    ctx->pc = 0x191a4cu;
    // NOP
    // 0x191a50: 0x0  nop
    ctx->pc = 0x191a50u;
    // NOP
    // 0x191a54: 0x0  nop
    ctx->pc = 0x191a54u;
    // NOP
    // 0x191a58: 0x0  nop
    ctx->pc = 0x191a58u;
    // NOP
    // 0x191a5c: 0x0  nop
    ctx->pc = 0x191a5cu;
    // NOP
    ctx->pc = 0x191a60u;
}
