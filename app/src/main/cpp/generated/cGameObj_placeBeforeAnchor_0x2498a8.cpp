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

// Function: cGameObj_placeBeforeAnchor
// Address: 0x2498a8 - 0x249960
void cGameObj_placeBeforeAnchor_0x2498a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_placeBeforeAnchor_0x2498a8");
#endif

    switch (ctx->pc) {
        case 0x2498e4u: goto label_2498e4;
        case 0x2498f4u: goto label_2498f4;
        case 0x249918u: goto label_249918;
        default: break;
    }

    ctx->pc = 0x2498a8u;

    // 0x2498a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2498a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2498ac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2498acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2498b0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2498b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2498b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2498b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2498b8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2498b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2498bc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2498bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2498c0: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2498c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2498c4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2498c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2498c8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2498c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2498cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2498ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2498d0: 0x0  nop
    ctx->pc = 0x2498d0u;
    // NOP
    // 0x2498d4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2498d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2498d8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2498d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2498dc: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2498DCu;
    SET_GPR_U32(ctx, 31, 0x2498E4u);
    ctx->pc = 0x2498E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2498DCu;
    // 0x2498e0: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2498DCu, 0x2498E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2498E4u;
label_2498e4:
    // 0x2498e4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2498e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2498e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2498e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2498ec: 0xc051e62  jal         func_147988
    ctx->pc = 0x2498ECu;
    SET_GPR_U32(ctx, 31, 0x2498F4u);
    ctx->pc = 0x2498F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2498ECu;
    // 0x2498f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x2498ECu, 0x2498F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2498F4u;
label_2498f4:
    // 0x2498f4: 0x3c0141d0  lui         $at, 0x41D0
    ctx->pc = 0x2498f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16848 << 16));
    // 0x2498f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2498f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2498fc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2498fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x249900: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x249900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x249904: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x249904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249908: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x249908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24990c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24990cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249910: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x249910u;
    SET_GPR_U32(ctx, 31, 0x249918u);
    ctx->pc = 0x249914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249910u;
    // 0x249914: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x249910u, 0x249918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249918u;
label_249918:
    // 0x249918: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x249918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x24991c: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x24991cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
    // 0x249920: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x249920u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x249924: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x249924u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x5850B0u));
    // 0x249928: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x249928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24992c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x24992cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x249930: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x249930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x249934: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x249934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249938: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x249938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24993c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x24993cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x249940: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x249940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x249944: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x249944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x249948: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x249948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24994c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x24994cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x249950: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x249950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x249954: 0x3e00008  jr          $ra
    ctx->pc = 0x249954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249954u;
        // 0x249958: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24995Cu;
    // 0x24995c: 0x0  nop
    ctx->pc = 0x24995cu;
    // NOP
    ctx->pc = 0x249960u;
}
