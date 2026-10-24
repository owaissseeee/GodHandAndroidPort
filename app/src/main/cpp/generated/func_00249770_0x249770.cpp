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

// Function: func_00249770
// Address: 0x249770 - 0x2498a8
void func_00249770_0x249770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00249770_0x249770");
#endif

    switch (ctx->pc) {
        case 0x2497e0u: goto label_2497e0;
        case 0x2497e8u: goto label_2497e8;
        case 0x2497f8u: goto label_2497f8;
        case 0x24981cu: goto label_24981c;
        case 0x249858u: goto label_249858;
        case 0x249878u: goto label_249878;
        case 0x24988cu: goto label_24988c;
        default: break;
    }

    ctx->pc = 0x249770u;

    // 0x249770: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x249770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x249774: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x249774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x249778: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x249778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x24977c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24977cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249780: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x249780u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x249784: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x249784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x249788: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x249788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x24978c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x24978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x249790: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x249790u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x249794: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x249794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x249798: 0x263150b0  addiu       $s1, $s1, 0x50B0
    ctx->pc = 0x249798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20656));
    // 0x24979c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x24979cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2497a0: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2497a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2497a4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2497a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2497a8: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2497a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x5850B0u));
    // 0x2497ac: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2497acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2497b0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2497b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2497b4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2497b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2497b8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2497b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2497bc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2497bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2497c0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2497c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2497c4: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x2497c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2497c8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2497c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2497cc: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x2497ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x2497d0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2497d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2497d4: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2497d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2497d8: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2497D8u;
    SET_GPR_U32(ctx, 31, 0x2497E0u);
    ctx->pc = 0x2497DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2497D8u;
    // 0x2497dc: 0xe7a10048  swc1        $f1, 0x48($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2497D8u, 0x2497E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2497E0u;
label_2497e0:
    // 0x2497e0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2497E0u;
    SET_GPR_U32(ctx, 31, 0x2497E8u);
    ctx->pc = 0x2497E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2497E0u;
    // 0x2497e4: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2497E0u, 0x2497E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2497E8u;
label_2497e8:
    // 0x2497e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2497e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2497ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2497ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2497f0: 0xc051e62  jal         func_147988
    ctx->pc = 0x2497F0u;
    SET_GPR_U32(ctx, 31, 0x2497F8u);
    ctx->pc = 0x2497F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2497F0u;
    // 0x2497f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x2497F0u, 0x2497F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2497F8u;
label_2497f8:
    // 0x2497f8: 0x3c0141d0  lui         $at, 0x41D0
    ctx->pc = 0x2497f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16848 << 16));
    // 0x2497fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2497fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249800: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x249800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x249804: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x249804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249808: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x249808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x24980c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24980cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249810: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x249810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x249814: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x249814u;
    SET_GPR_U32(ctx, 31, 0x24981Cu);
    ctx->pc = 0x249818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249814u;
    // 0x249818: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x249814u, 0x24981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24981Cu;
label_24981c:
    // 0x24981c: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x24981cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x249820: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x249820u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x249824: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x249824u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x249828: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x249828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24982c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x24982cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249830: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x249830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x249834: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x249834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x249838: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x249838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24983c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24983cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x249840: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x249840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x249844: 0x460ca300  add.s       $f12, $f20, $f12
    ctx->pc = 0x249844u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    // 0x249848: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x249848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x24984c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x24984cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249850: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x249850u;
    SET_GPR_U32(ctx, 31, 0x249858u);
    ctx->pc = 0x249854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249850u;
    // 0x249854: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x249850u, 0x249858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249858u;
label_249858:
    // 0x249858: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x249858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24985c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x24985cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x249860: 0x3c013c49  lui         $at, 0x3C49
    ctx->pc = 0x249860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15433 << 16));
    // 0x249864: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x249864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x249868: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x249868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x24986c: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x24986cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x249870: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x249870u;
    SET_GPR_U32(ctx, 31, 0x249878u);
    ctx->pc = 0x249874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249870u;
    // 0x249874: 0x460e0b82  mul.s       $f14, $f1, $f14 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x249870u, 0x249878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249878u;
label_249878:
    // 0x249878: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x249878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24987c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24987cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x249880: 0xe6010104  swc1        $f1, 0x104($s0)
    ctx->pc = 0x249880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x249884: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x249884u;
    SET_GPR_U32(ctx, 31, 0x24988Cu);
    ctx->pc = 0x249888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249884u;
    // 0x249888: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x249884u, 0x24988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24988Cu;
label_24988c:
    // 0x24988c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x24988cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x249890: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x249890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x249894: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x249894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x249898: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x249898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24989c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x24989cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2498a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2498A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2498A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498A0u;
        // 0x2498a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2498A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2498A8u;
}
