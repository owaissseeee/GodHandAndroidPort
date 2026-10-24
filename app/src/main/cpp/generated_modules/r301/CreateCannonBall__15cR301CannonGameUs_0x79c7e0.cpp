#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: CreateCannonBall__15cR301CannonGameUs
// Address: 0x79c7e0 - 0x79c978
void CreateCannonBall__15cR301CannonGameUs_0x79c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateCannonBall__15cR301CannonGameUs_0x79c7e0");
#endif

    switch (ctx->pc) {
        case 0x79c840u: goto label_79c840;
        case 0x79c858u: goto label_79c858;
        case 0x79c894u: goto label_79c894;
        case 0x79c8c4u: goto label_79c8c4;
        case 0x79c8e0u: goto label_79c8e0;
        case 0x79c918u: goto label_79c918;
        case 0x79c928u: goto label_79c928;
        default: break;
    }

    ctx->pc = 0x79c7e0u;

    // 0x79c7e0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x79c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x79c7e4: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x79c7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x79c7e8: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x79c7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x79c7ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x79c7ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c7f0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x79c7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x79c7f4: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x79c7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x79c7f8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x79c7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x79c7fc: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x79c7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x79c800: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x79c800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x79c804: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x79c804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x79c808: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x79c808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x79c80c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x79C80Cu;
    {
        const bool branch_taken_0x79c80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C80Cu;
        // 0x79c810: 0x30b6ffff  andi        $s6, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c80c) {
            ctx->pc = 0x79C948u;
            goto label_79c948;
        }
    }
    ctx->pc = 0x79C814u;
    // 0x79c814: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x79c814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x79c818: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x79C818u;
    {
        const bool branch_taken_0x79c818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C818u;
        // 0x79c81c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c818) {
            ctx->pc = 0x79C94Cu;
            goto label_79c94c;
        }
    }
    ctx->pc = 0x79C820u;
    // 0x79c820: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x79c820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x79c824: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x79C824u;
    {
        const bool branch_taken_0x79c824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C824u;
        // 0x79c828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c824) {
            ctx->pc = 0x79C94Cu;
            goto label_79c94c;
        }
    }
    ctx->pc = 0x79C82Cu;
    // 0x79c82c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x79c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x79c830: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x79C830u;
    {
        const bool branch_taken_0x79c830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C830u;
        // 0x79c834: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c830) {
            ctx->pc = 0x79C920u;
            goto label_79c920;
        }
    }
    ctx->pc = 0x79C838u;
    // 0x79c838: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x79C838u;
    {
        const bool branch_taken_0x79c838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C838u;
        // 0x79c83c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c838) {
            ctx->pc = 0x79C94Cu;
            goto label_79c94c;
        }
    }
    ctx->pc = 0x79C840u;
label_79c840:
    // 0x79c840: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x79c840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79c844: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79c844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79c848: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79c848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c84c: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79c84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79c850: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x79C850u;
    SET_GPR_U32(ctx, 31, 0x79C858u);
    ctx->pc = 0x79C854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C850u;
    // 0x79c854: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79C850u, 0x79C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C858u;
label_79c858:
    // 0x79c858: 0x169080  sll         $s2, $s6, 2
    ctx->pc = 0x79c858u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x79c85c: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x79c85cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x79c860: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x79c860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79c864: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x79c864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79c868: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x79c868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79c86c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79c86cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c870: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x79c870u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79c874: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79c874u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79c878: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79c878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79c87c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x79c87cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79c880: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79c880u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79c884: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79c884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79c888: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x79c888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x79c88c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x79C88Cu;
    SET_GPR_U32(ctx, 31, 0x79C894u);
    ctx->pc = 0x79C890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C88Cu;
    // 0x79c890: 0xc7ad0018  lwc1        $f13, 0x18($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x79C88Cu, 0x79C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C894u;
label_79c894:
    // 0x79c894: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79c894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79c898: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79c898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79c89c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x79c89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x79c8a0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x79c8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x79c8a4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x79c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x79c8a8: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x79c8a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x79c8ac: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x79c8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79c8b0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x79c8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79c8b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79c8b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79c8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c8bc: 0xc051dca  jal         func_147728
    ctx->pc = 0x79C8BCu;
    SET_GPR_U32(ctx, 31, 0x79C8C4u);
    ctx->pc = 0x79C8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C8BCu;
    // 0x79c8c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x79C8BCu, 0x79C8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C8C4u;
label_79c8c4:
    // 0x79c8c4: 0x163100  sll         $a2, $s6, 4
    ctx->pc = 0x79c8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x79c8c8: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x79c8c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x79c8cc: 0x24c600b0  addiu       $a2, $a2, 0xB0
    ctx->pc = 0x79c8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
    // 0x79c8d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79c8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c8d4: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x79c8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x79c8d8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x79C8D8u;
    SET_GPR_U32(ctx, 31, 0x79C8E0u);
    ctx->pc = 0x79C8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C8D8u;
    // 0x79c8dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x79C8D8u, 0x79C8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C8E0u;
label_79c8e0:
    // 0x79c8e0: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x79c8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79c8e4: 0x2b08018  mult        $s0, $s5, $s0
    ctx->pc = 0x79c8e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x79c8e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x79c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79c8ec: 0xc68d00f0  lwc1        $f13, 0xF0($s4)
    ctx->pc = 0x79c8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x79c8f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x79c8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c8f4: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79c8f8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x79c8f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c8fc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x79c8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x79c900: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79c900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79c904: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x79c904u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c908: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x79c908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x79c90c: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x79c90cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x79c910: 0xc1e6c46  jal         func_79B118
    ctx->pc = 0x79C910u;
    SET_GPR_U32(ctx, 31, 0x79C918u);
    ctx->pc = 0x79C914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C910u;
    // 0x79c914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B118u, 0x79C910u, 0x79C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C918u;
label_79c918:
    // 0x79c918: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79C918u;
    {
        const bool branch_taken_0x79c918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C918u;
        // 0x79c91c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c918) {
            ctx->pc = 0x79C94Cu;
            goto label_79c94c;
        }
    }
    ctx->pc = 0x79C920u;
label_79c920:
    // 0x79c920: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x79c920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x79c924: 0x0  nop
    ctx->pc = 0x79c924u;
    // NOP
label_79c928:
    // 0x79c928: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x79c928u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79c92c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79c92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79c930: 0x1040ffc3  beqz        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x79C930u;
    {
        const bool branch_taken_0x79c930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c930) {
            ctx->pc = 0x79C840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c840;
        }
    }
    ctx->pc = 0x79C938u;
    // 0x79c938: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x79c938u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x79c93c: 0x2aa20005  slti        $v0, $s5, 0x5
    ctx->pc = 0x79c93cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x79c940: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79C940u;
    {
        const bool branch_taken_0x79c940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C940u;
        // 0x79c944: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c940) {
            ctx->pc = 0x79C928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c928;
        }
    }
    ctx->pc = 0x79C948u;
label_79c948:
    // 0x79c948: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79c948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79c94c:
    // 0x79c94c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x79c94cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79c950: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x79c950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79c954: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x79c954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79c958: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x79c958u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79c95c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x79c95cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79c960: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x79c960u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79c964: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x79c964u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79c968: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x79c968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79c96c: 0x3e00008  jr          $ra
    ctx->pc = 0x79C96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C96Cu;
        // 0x79c970: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C974u;
    // 0x79c974: 0x0  nop
    ctx->pc = 0x79c974u;
    // NOP
    ctx->pc = 0x79c978u;
}
} // namespace gh_r301
