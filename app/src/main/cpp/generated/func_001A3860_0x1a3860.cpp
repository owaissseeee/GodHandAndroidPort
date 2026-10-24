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

// Function: func_001A3860
// Address: 0x1a3860 - 0x1a3a48
void func_001A3860_0x1a3860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A3860_0x1a3860");
#endif

    switch (ctx->pc) {
        case 0x1a38c4u: goto label_1a38c4;
        case 0x1a38d4u: goto label_1a38d4;
        case 0x1a38e4u: goto label_1a38e4;
        case 0x1a38f4u: goto label_1a38f4;
        case 0x1a39c0u: goto label_1a39c0;
        case 0x1a39d8u: goto label_1a39d8;
        default: break;
    }

    ctx->pc = 0x1a3860u;

    // 0x1a3860: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a3860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a3864: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a3864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3868: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1a3868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1a386c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1a386cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1a3870: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a3870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3874: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a3874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3878: 0x103942  srl         $a3, $s0, 5
    ctx->pc = 0x1a3878u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x1a387c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1a387cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1a3880: 0x26430d90  addiu       $v1, $s2, 0xD90
    ctx->pc = 0x1a3880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3472));
    // 0x1a3884: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a3884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a3888: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1a3888u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a388c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1a388cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1a3890: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1a3890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a3894: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1a3894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1a3898: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x1a3898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1a389c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a389cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a38a0: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x1a38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1a38a4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1a38a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a38a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38ac: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1a38acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a38b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a38b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38b4: 0x36110040  ori         $s1, $s0, 0x40
    ctx->pc = 0x1a38b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x1a38b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a38b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a38bc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1A38BCu;
    SET_GPR_U32(ctx, 31, 0x1A38C4u);
    ctx->pc = 0x1A38C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38BCu;
    // 0x1a38c0: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A38BCu, 0x1A38C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A38C4u;
label_1a38c4:
    // 0x1a38c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a38c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a38c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38cc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1A38CCu;
    SET_GPR_U32(ctx, 31, 0x1A38D4u);
    ctx->pc = 0x1A38D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38CCu;
    // 0x1a38d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A38CCu, 0x1A38D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A38D4u;
label_1a38d4:
    // 0x1a38d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a38d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a38d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38dc: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1A38DCu;
    SET_GPR_U32(ctx, 31, 0x1A38E4u);
    ctx->pc = 0x1A38E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38DCu;
    // 0x1a38e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1A38DCu, 0x1A38E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A38E4u;
label_1a38e4:
    // 0x1a38e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a38e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a38e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38ec: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1A38ECu;
    SET_GPR_U32(ctx, 31, 0x1A38F4u);
    ctx->pc = 0x1A38F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38ECu;
    // 0x1a38f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1A38ECu, 0x1A38F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A38F4u;
label_1a38f4:
    // 0x1a38f4: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x1a38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x1a38f8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a38f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1a38fc: 0x264405c0  addiu       $a0, $s2, 0x5C0
    ctx->pc = 0x1a38fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x1a3900: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a3900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a3904: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x1a3904u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
    // 0x1a3908: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1a3908u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a390c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a390cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a3910: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1a3910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1a3914: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a3914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a3918: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1a3918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1a391c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a391cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3920: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a3920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1a3924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3928: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a392c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a392cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3930: 0x92420d9f  lbu         $v0, 0xD9F($s2)
    ctx->pc = 0x1a3930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3487)));
    // 0x1a3934: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A3934u;
    {
        const bool branch_taken_0x1a3934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3934u;
        // 0x1a3938: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3934) {
            ctx->pc = 0x1A397Cu;
            goto label_1a397c;
        }
    }
    ctx->pc = 0x1A393Cu;
    // 0x1a393c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1a393cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1a3940: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a3940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a3944: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3948: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a3948u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a394c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1a394cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1a3950: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1a3950u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1a3954: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1a3954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a3958: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a3958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a395c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1a395cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3960: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1a3960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1a3964: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1a3964u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x1a3968: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a396c: 0x0  nop
    ctx->pc = 0x1a396cu;
    // NOP
    // 0x1a3970: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a3970u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a3974: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A3974u;
    {
        const bool branch_taken_0x1a3974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3974u;
        // 0x1a3978: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3974) {
            ctx->pc = 0x1A399Cu;
            goto label_1a399c;
        }
    }
    ctx->pc = 0x1A397Cu;
label_1a397c:
    // 0x1a397c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1a397cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1a3980: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a3980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a3984: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3988: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a3988u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a398c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1a398cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1a3990: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1a3990u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1a3994: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1a3994u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a3998: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a3998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a399c:
    // 0x1a399c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a399cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a39a0: 0x142040  sll         $a0, $s4, 1
    ctx->pc = 0x1a39a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1a39a4: 0x24437040  addiu       $v1, $v0, 0x7040
    ctx->pc = 0x1a39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28736));
    // 0x1a39a8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a39a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a39ac: 0x90700000  lbu         $s0, 0x0($v1)
    ctx->pc = 0x1a39acu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a39b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a39b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a39b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A39B4u;
    {
        const bool branch_taken_0x1a39b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A39B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39B4u;
        // 0x1a39b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a39b4) {
            ctx->pc = 0x1A39D8u;
            goto label_1a39d8;
        }
    }
    ctx->pc = 0x1A39BCu;
    // 0x1a39bc: 0x0  nop
    ctx->pc = 0x1a39bcu;
    // NOP
label_1a39c0:
    // 0x1a39c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a39c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a39c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a39c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a39c8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1a39c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a39cc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1a39ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a39d0: 0xc068d30  jal         func_1A34C0
    ctx->pc = 0x1A39D0u;
    SET_GPR_U32(ctx, 31, 0x1A39D8u);
    ctx->pc = 0x1A39D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A39D0u;
    // 0x1a39d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34C0u, 0x1A39D0u, 0x1A39D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A39D8u;
label_1a39d8:
    // 0x1a39d8: 0x26627040  addiu       $v0, $s3, 0x7040
    ctx->pc = 0x1a39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 28736));
    // 0x1a39dc: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x1a39dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a39e0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a39e4: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x1a39e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1a39e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a39e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a39ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a39ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a39f0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1a39f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a39f4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A39F4u;
    {
        const bool branch_taken_0x1a39f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a39f4) {
            ctx->pc = 0x1A39F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A39F4u;
            // 0x1a39f8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3A0Cu;
            goto label_1a3a0c;
        }
    }
    ctx->pc = 0x1A39FCu;
    // 0x1a39fc: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1a39fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1a3a00: 0x1450ffef  bne         $v0, $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1A3A00u;
    {
        const bool branch_taken_0x1a3a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1A3A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A00u;
        // 0x1a3a04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a00) {
            ctx->pc = 0x1A39C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a39c0;
        }
    }
    ctx->pc = 0x1A3A08u;
    // 0x1a3a08: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1a3a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a3a0c:
    // 0x1a3a0c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1a3a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a3a10: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1a3a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a3a14: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1a3a14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3a18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a3a18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3a1c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1a3a1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3a20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a3a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3a24: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A24u;
        // 0x1a3a28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3A2Cu;
    // 0x1a3a2c: 0x0  nop
    ctx->pc = 0x1a3a2cu;
    // NOP
    // 0x1a3a30: 0x0  nop
    ctx->pc = 0x1a3a30u;
    // NOP
    // 0x1a3a34: 0x0  nop
    ctx->pc = 0x1a3a34u;
    // NOP
    // 0x1a3a38: 0x0  nop
    ctx->pc = 0x1a3a38u;
    // NOP
    // 0x1a3a3c: 0x0  nop
    ctx->pc = 0x1a3a3cu;
    // NOP
    // 0x1a3a40: 0x0  nop
    ctx->pc = 0x1a3a40u;
    // NOP
    // 0x1a3a44: 0x0  nop
    ctx->pc = 0x1a3a44u;
    // NOP
    ctx->pc = 0x1a3a48u;
}
