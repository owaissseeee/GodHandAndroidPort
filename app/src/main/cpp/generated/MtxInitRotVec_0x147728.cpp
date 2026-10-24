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

// Function: MtxInitRotVec
// Address: 0x147728 - 0x1478a8
void MtxInitRotVec_0x147728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MtxInitRotVec_0x147728");
#endif

    switch (ctx->pc) {
        case 0x147798u: goto label_147798;
        case 0x1477a8u: goto label_1477a8;
        case 0x1477c0u: goto label_1477c0;
        case 0x1477d0u: goto label_1477d0;
        case 0x1477e8u: goto label_1477e8;
        case 0x1477f8u: goto label_1477f8;
        case 0x147808u: goto label_147808;
        case 0x147820u: goto label_147820;
        case 0x147830u: goto label_147830;
        case 0x147840u: goto label_147840;
        case 0x147858u: goto label_147858;
        case 0x147868u: goto label_147868;
        case 0x147878u: goto label_147878;
        case 0x147890u: goto label_147890;
        default: break;
    }

    ctx->pc = 0x147728u;

    // 0x147728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x147728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14772c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x14772cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x147730: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x147730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x147734: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x147734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x147738: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x147738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14773c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14773cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147740: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x147740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147744: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x147744u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x147748: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x147748u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x14774c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x14774cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x147750: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x147750u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x147754: 0xfa040030  sqc2        $vf4, 0x30($s0)
    ctx->pc = 0x147754u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x147758: 0xfa050020  sqc2        $vf5, 0x20($s0)
    ctx->pc = 0x147758u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x14775c: 0xfa060010  sqc2        $vf6, 0x10($s0)
    ctx->pc = 0x14775cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x147760: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x147760u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x147764: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x147764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x147768: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x147768u;
    {
        const bool branch_taken_0x147768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147768u;
        // 0x14776c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147768) {
            ctx->pc = 0x147890u;
            goto label_147890;
        }
    }
    ctx->pc = 0x147770u;
    // 0x147770: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x147770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x147774: 0x2442ea00  addiu       $v0, $v0, -0x1600
    ctx->pc = 0x147774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961664));
    // 0x147778: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x147778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14777c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14777cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147780: 0x800008  jr          $a0
    ctx->pc = 0x147780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147788u: goto label_147788;
            case 0x1477B0u: goto label_1477b0;
            case 0x1477D8u: goto label_1477d8;
            case 0x147810u: goto label_147810;
            case 0x147848u: goto label_147848;
            case 0x147880u: goto label_147880;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147780u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x147788u;
label_147788:
    // 0x147788: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x147788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14778c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14778cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147790: 0xc0c29c0  jal         func_30A700
    ctx->pc = 0x147790u;
    SET_GPR_U32(ctx, 31, 0x147798u);
    ctx->pc = 0x147794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147790u;
    // 0x147794: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A700u, 0x147790u, 0x147798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147798u;
label_147798:
    // 0x147798: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x147798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14779c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14779cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477a0: 0xc0c29ee  jal         func_30A7B8
    ctx->pc = 0x1477A0u;
    SET_GPR_U32(ctx, 31, 0x1477A8u);
    ctx->pc = 0x1477A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1477A0u;
    // 0x1477a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7B8u, 0x1477A0u, 0x1477A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477A8u;
label_1477a8:
    // 0x1477a8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1477A8u;
    {
        const bool branch_taken_0x1477a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1477ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1477A8u;
        // 0x1477ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1477a8) {
            ctx->pc = 0x1477FCu;
            goto label_1477fc;
        }
    }
    ctx->pc = 0x1477B0u;
label_1477b0:
    // 0x1477b0: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1477b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1477b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1477b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477b8: 0xc0c29c0  jal         func_30A700
    ctx->pc = 0x1477B8u;
    SET_GPR_U32(ctx, 31, 0x1477C0u);
    ctx->pc = 0x1477BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1477B8u;
    // 0x1477bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A700u, 0x1477B8u, 0x1477C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477C0u;
label_1477c0:
    // 0x1477c0: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x1477c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1477c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1477c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477c8: 0xc0c2994  jal         func_30A650
    ctx->pc = 0x1477C8u;
    SET_GPR_U32(ctx, 31, 0x1477D0u);
    ctx->pc = 0x1477CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1477C8u;
    // 0x1477cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A650u, 0x1477C8u, 0x1477D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477D0u;
label_1477d0:
    // 0x1477d0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1477D0u;
    {
        const bool branch_taken_0x1477d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1477D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1477D0u;
        // 0x1477d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1477d0) {
            ctx->pc = 0x14786Cu;
            goto label_14786c;
        }
    }
    ctx->pc = 0x1477D8u;
label_1477d8:
    // 0x1477d8: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1477d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1477dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1477dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477e0: 0xc0c29ee  jal         func_30A7B8
    ctx->pc = 0x1477E0u;
    SET_GPR_U32(ctx, 31, 0x1477E8u);
    ctx->pc = 0x1477E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1477E0u;
    // 0x1477e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7B8u, 0x1477E0u, 0x1477E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477E8u;
label_1477e8:
    // 0x1477e8: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1477e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1477ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1477ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477f0: 0xc0c29c0  jal         func_30A700
    ctx->pc = 0x1477F0u;
    SET_GPR_U32(ctx, 31, 0x1477F8u);
    ctx->pc = 0x1477F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1477F0u;
    // 0x1477f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A700u, 0x1477F0u, 0x1477F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477F8u;
label_1477f8:
    // 0x1477f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1477f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1477fc:
    // 0x1477fc: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x1477fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147800: 0xc0c2994  jal         func_30A650
    ctx->pc = 0x147800u;
    SET_GPR_U32(ctx, 31, 0x147808u);
    ctx->pc = 0x147804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147800u;
    // 0x147804: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A650u, 0x147800u, 0x147808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147808u;
label_147808:
    // 0x147808: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x147808u;
    {
        const bool branch_taken_0x147808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147808u;
        // 0x14780c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147808) {
            ctx->pc = 0x147894u;
            goto label_147894;
        }
    }
    ctx->pc = 0x147810u;
label_147810:
    // 0x147810: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x147810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147818: 0xc0c29ee  jal         func_30A7B8
    ctx->pc = 0x147818u;
    SET_GPR_U32(ctx, 31, 0x147820u);
    ctx->pc = 0x14781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147818u;
    // 0x14781c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7B8u, 0x147818u, 0x147820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147820u;
label_147820:
    // 0x147820: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x147820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147828: 0xc0c2994  jal         func_30A650
    ctx->pc = 0x147828u;
    SET_GPR_U32(ctx, 31, 0x147830u);
    ctx->pc = 0x14782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147828u;
    // 0x14782c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A650u, 0x147828u, 0x147830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147830u;
label_147830:
    // 0x147830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147834: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x147834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147838: 0xc0c29c0  jal         func_30A700
    ctx->pc = 0x147838u;
    SET_GPR_U32(ctx, 31, 0x147840u);
    ctx->pc = 0x14783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147838u;
    // 0x14783c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A700u, 0x147838u, 0x147840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147840u;
label_147840:
    // 0x147840: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x147840u;
    {
        const bool branch_taken_0x147840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147840u;
        // 0x147844: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147840) {
            ctx->pc = 0x147894u;
            goto label_147894;
        }
    }
    ctx->pc = 0x147848u;
label_147848:
    // 0x147848: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x147848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14784c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14784cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147850: 0xc0c2994  jal         func_30A650
    ctx->pc = 0x147850u;
    SET_GPR_U32(ctx, 31, 0x147858u);
    ctx->pc = 0x147854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147850u;
    // 0x147854: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A650u, 0x147850u, 0x147858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147858u;
label_147858:
    // 0x147858: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x147858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14785c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14785cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147860: 0xc0c29c0  jal         func_30A700
    ctx->pc = 0x147860u;
    SET_GPR_U32(ctx, 31, 0x147868u);
    ctx->pc = 0x147864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147860u;
    // 0x147864: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A700u, 0x147860u, 0x147868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147868u;
label_147868:
    // 0x147868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14786c:
    // 0x14786c: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x14786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147870: 0xc0c29ee  jal         func_30A7B8
    ctx->pc = 0x147870u;
    SET_GPR_U32(ctx, 31, 0x147878u);
    ctx->pc = 0x147874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147870u;
    // 0x147874: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7B8u, 0x147870u, 0x147878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147878u;
label_147878:
    // 0x147878: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x147878u;
    {
        const bool branch_taken_0x147878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147878u;
        // 0x14787c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147878) {
            ctx->pc = 0x147894u;
            goto label_147894;
        }
    }
    ctx->pc = 0x147880u;
label_147880:
    // 0x147880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147884: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x147884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147888: 0xc0c2a1c  jal         func_30A870
    ctx->pc = 0x147888u;
    SET_GPR_U32(ctx, 31, 0x147890u);
    ctx->pc = 0x14788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147888u;
    // 0x14788c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A870u, 0x147888u, 0x147890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147890u;
label_147890:
    // 0x147890: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x147890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_147894:
    // 0x147894: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x147894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14789c: 0x3e00008  jr          $ra
    ctx->pc = 0x14789Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1478A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14789Cu;
        // 0x1478a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14789Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1478A4u;
    // 0x1478a4: 0x0  nop
    ctx->pc = 0x1478a4u;
    // NOP
    ctx->pc = 0x1478a8u;
}
