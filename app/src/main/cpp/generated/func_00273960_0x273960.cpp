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

// Function: func_00273960
// Address: 0x273960 - 0x273c38
void func_00273960_0x273960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00273960_0x273960");
#endif

    switch (ctx->pc) {
        case 0x2739a0u: goto label_2739a0;
        case 0x2739b4u: goto label_2739b4;
        case 0x2739d4u: goto label_2739d4;
        case 0x2739dcu: goto label_2739dc;
        case 0x273a10u: goto label_273a10;
        case 0x273a18u: goto label_273a18;
        case 0x273a70u: goto label_273a70;
        case 0x273a90u: goto label_273a90;
        case 0x273a98u: goto label_273a98;
        case 0x273ac8u: goto label_273ac8;
        case 0x273ad0u: goto label_273ad0;
        case 0x273b1cu: goto label_273b1c;
        case 0x273b3cu: goto label_273b3c;
        case 0x273b44u: goto label_273b44;
        case 0x273b7cu: goto label_273b7c;
        case 0x273b84u: goto label_273b84;
        case 0x273bd0u: goto label_273bd0;
        case 0x273c04u: goto label_273c04;
        default: break;
    }

    ctx->pc = 0x273960u;

    // 0x273960: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x273960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x273964: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x273964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x273968: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x273968u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x27396c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27396cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273970: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x273970u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x273974: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x273974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x273978: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x273978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x27397c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x27397cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x273980: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x273980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x273984: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x273984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x273988: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x273988u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x27398c: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x27398cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x273990: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x273990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x273994: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x273994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x273998: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x273998u;
    SET_GPR_U32(ctx, 31, 0x2739A0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x273998u, 0x2739A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2739A0u;
label_2739a0:
    // 0x2739a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2739a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2739a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2739a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2739a8: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x2739a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2739ac: 0xc051e62  jal         func_147988
    ctx->pc = 0x2739ACu;
    SET_GPR_U32(ctx, 31, 0x2739B4u);
    ctx->pc = 0x2739B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2739ACu;
    // 0x2739b0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x2739ACu, 0x2739B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2739B4u;
label_2739b4:
    // 0x2739b4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x2739b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2739b8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2739b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2739bc: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2739bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x2739c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2739c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2739c4: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x2739c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2739c8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2739c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2739cc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2739CCu;
    SET_GPR_U32(ctx, 31, 0x2739D4u);
    ctx->pc = 0x2739D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2739CCu;
    // 0x2739d0: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2739CCu, 0x2739D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2739D4u;
label_2739d4:
    // 0x2739d4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2739D4u;
    SET_GPR_U32(ctx, 31, 0x2739DCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2739D4u, 0x2739DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2739DCu;
label_2739dc:
    // 0x2739dc: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x2739dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2739e0: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2739e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2739e4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2739e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2739e8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2739e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2739ec: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2739ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2739f0: 0x4614b540  add.s       $f21, $f22, $f20
    ctx->pc = 0x2739f0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x2739f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2739f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2739f8: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2739f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2739fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2739fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273a00: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x273a00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x273a04: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x273a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273a08: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x273A08u;
    SET_GPR_U32(ctx, 31, 0x273A10u);
    ctx->pc = 0x273A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273A08u;
    // 0x273a0c: 0xe7b50088  swc1        $f21, 0x88($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x273A08u, 0x273A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A10u;
label_273a10:
    // 0x273a10: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x273A10u;
    SET_GPR_U32(ctx, 31, 0x273A18u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x273A10u, 0x273A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A18u;
label_273a18:
    // 0x273a18: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x273a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x273a1c: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x273a1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x273a20: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x273a20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273a24: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x273a24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x273a28: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x273a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x273a2c: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x273a2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x273a30: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x273a30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x273a34: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x273a34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273a38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x273a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x273a3c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x273a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x273a40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x273a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273a44: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x273a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x273a48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x273a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273a4c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x273a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x273a50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273a54: 0xafb40020  sw          $s4, 0x20($sp)
    ctx->pc = 0x273a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    // 0x273a58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x273a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273a5c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x273a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x273a60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x273a60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273a64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x273a64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273a68: 0xc04c784  jal         func_131E10
    ctx->pc = 0x273A68u;
    SET_GPR_U32(ctx, 31, 0x273A70u);
    ctx->pc = 0x273A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273A68u;
    // 0x273a6c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x273A68u, 0x273A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A70u;
label_273a70:
    // 0x273a70: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x273A70u;
    {
        const bool branch_taken_0x273a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A70u;
        // 0x273a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a70) {
            ctx->pc = 0x273BD8u;
            goto label_273bd8;
        }
    }
    ctx->pc = 0x273A78u;
    // 0x273a78: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x273a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x273a7c: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x273a7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x273a80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x273a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273a84: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x273a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x273a88: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x273A88u;
    SET_GPR_U32(ctx, 31, 0x273A90u);
    ctx->pc = 0x273A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273A88u;
    // 0x273a8c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x273A88u, 0x273A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A90u;
label_273a90:
    // 0x273a90: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x273A90u;
    SET_GPR_U32(ctx, 31, 0x273A98u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x273A90u, 0x273A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A98u;
label_273a98:
    // 0x273a98: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x273a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x273a9c: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x273a9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x273aa0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x273aa0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273aa4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x273aa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x273aa8: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x273aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x273aac: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x273aacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x273ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ab4: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x273ab4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x273ab8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x273ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273abc: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x273abcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x273ac0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x273AC0u;
    SET_GPR_U32(ctx, 31, 0x273AC8u);
    ctx->pc = 0x273AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273AC0u;
    // 0x273ac4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x273AC0u, 0x273AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273AC8u;
label_273ac8:
    // 0x273ac8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x273AC8u;
    SET_GPR_U32(ctx, 31, 0x273AD0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x273AC8u, 0x273AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273AD0u;
label_273ad0:
    // 0x273ad0: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x273ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x273ad4: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x273ad4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x273ad8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x273ad8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273adc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x273adcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x273ae0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x273ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x273ae4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x273ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x273ae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x273ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273aec: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x273aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x273af0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x273af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273af4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x273af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x273af8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273afc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x273afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x273b00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x273b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b04: 0xafb40020  sw          $s4, 0x20($sp)
    ctx->pc = 0x273b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    // 0x273b08: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x273b08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x273b0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x273b0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x273b10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b14: 0xc04c784  jal         func_131E10
    ctx->pc = 0x273B14u;
    SET_GPR_U32(ctx, 31, 0x273B1Cu);
    ctx->pc = 0x273B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B14u;
    // 0x273b18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x273B14u, 0x273B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B1Cu;
label_273b1c:
    // 0x273b1c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x273B1Cu;
    {
        const bool branch_taken_0x273b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B1Cu;
        // 0x273b20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b1c) {
            ctx->pc = 0x273BD8u;
            goto label_273bd8;
        }
    }
    ctx->pc = 0x273B24u;
    // 0x273b24: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x273b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x273b28: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x273b28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x273b2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x273b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b30: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x273b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x273b34: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x273B34u;
    SET_GPR_U32(ctx, 31, 0x273B3Cu);
    ctx->pc = 0x273B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B34u;
    // 0x273b38: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x273B34u, 0x273B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B3Cu;
label_273b3c:
    // 0x273b3c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x273B3Cu;
    SET_GPR_U32(ctx, 31, 0x273B44u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x273B3Cu, 0x273B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B44u;
label_273b44:
    // 0x273b44: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x273b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x273b48: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x273b48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x273b4c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x273b4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273b50: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x273b50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x273b54: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x273b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x273b58: 0x4600b007  neg.s       $f0, $f22
    ctx->pc = 0x273b58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
    // 0x273b5c: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x273b5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x273b60: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x273b60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x273b64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x273b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x273b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b70: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x273b70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x273b74: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x273B74u;
    SET_GPR_U32(ctx, 31, 0x273B7Cu);
    ctx->pc = 0x273B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B74u;
    // 0x273b78: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x273B74u, 0x273B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B7Cu;
label_273b7c:
    // 0x273b7c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x273B7Cu;
    SET_GPR_U32(ctx, 31, 0x273B84u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x273B7Cu, 0x273B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B84u;
label_273b84:
    // 0x273b84: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x273b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x273b88: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x273b88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x273b8c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x273b8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273b90: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x273b90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x273b94: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x273b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x273b98: 0xafb40020  sw          $s4, 0x20($sp)
    ctx->pc = 0x273b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    // 0x273b9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x273b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ba0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x273ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x273ba4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x273ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ba8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x273ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x273bac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273bb0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x273bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x273bb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x273bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273bb8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x273bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x273bbc: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x273bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x273bc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x273bc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273bc4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x273bc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273bc8: 0xc04c784  jal         func_131E10
    ctx->pc = 0x273BC8u;
    SET_GPR_U32(ctx, 31, 0x273BD0u);
    ctx->pc = 0x273BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273BC8u;
    // 0x273bcc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x273BC8u, 0x273BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273BD0u;
label_273bd0:
    // 0x273bd0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x273BD0u;
    {
        const bool branch_taken_0x273bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BD0u;
        // 0x273bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bd0) {
            ctx->pc = 0x273C08u;
            goto label_273c08;
        }
    }
    ctx->pc = 0x273BD8u;
label_273bd8:
    // 0x273bd8: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x273bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x273bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x273bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273be0: 0xae0016e0  sw          $zero, 0x16E0($s0)
    ctx->pc = 0x273be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5856), GPR_U32(ctx, 0));
    // 0x273be4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x273be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273be8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x273be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x273bec: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x273becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x273bf0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x273bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x273bf4: 0xae0216d4  sw          $v0, 0x16D4($s0)
    ctx->pc = 0x273bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
    // 0x273bf8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x273bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x273bfc: 0xc09ba62  jal         func_26E988
    ctx->pc = 0x273BFCu;
    SET_GPR_U32(ctx, 31, 0x273C04u);
    ctx->pc = 0x273C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273BFCu;
    // 0x273c00: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E988u, 0x273BFCu, 0x273C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273C04u;
label_273c04:
    // 0x273c04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273c08:
    // 0x273c08: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x273c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x273c0c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x273c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x273c10: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x273c10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x273c14: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x273c14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x273c18: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x273c18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x273c1c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x273c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x273c20: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x273c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x273c24: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x273c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x273c28: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x273c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x273c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x273C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C2Cu;
        // 0x273c30: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273C34u;
    // 0x273c34: 0x0  nop
    ctx->pc = 0x273c34u;
    // NOP
    ctx->pc = 0x273c38u;
}
