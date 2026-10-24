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

// Function: func_002495E0
// Address: 0x2495e0 - 0x249770
void func_002495E0_0x2495e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002495E0_0x2495e0");
#endif

    switch (ctx->pc) {
        case 0x249678u: goto label_249678;
        case 0x249680u: goto label_249680;
        case 0x249690u: goto label_249690;
        case 0x2496b4u: goto label_2496b4;
        case 0x249714u: goto label_249714;
        case 0x249734u: goto label_249734;
        case 0x249748u: goto label_249748;
        default: break;
    }

    ctx->pc = 0x2495e0u;

    // 0x2495e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2495e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2495e4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2495e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2495e8: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x2495e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2495ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2495ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2495f0: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2495f0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2495f4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2495f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2495f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2495f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2495fc: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2495fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x249600: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x249600u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x249604: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x249604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x249608: 0xc61405a8  lwc1        $f20, 0x5A8($s0)
    ctx->pc = 0x249608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24960c: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x24960cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x249610: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x249610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x249614: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x249614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x249618: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x249618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24961c: 0x263150b0  addiu       $s1, $s1, 0x50B0
    ctx->pc = 0x24961cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20656));
    // 0x249620: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x249620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x249624: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x249624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x249628: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x249628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24962c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x24962cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x249630: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x249630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x249634: 0x4614ad01  sub.s       $f20, $f21, $f20
    ctx->pc = 0x249634u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x249638: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x249638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24963c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x24963cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x249640: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x249640u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x5850B0u));
    // 0x249644: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x249644u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x249648: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x249648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24964c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x24964cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x249650: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x249650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x249654: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x249654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249658: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x249658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24965c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x24965cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x249660: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x249660u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x249664: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x249664u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x249668: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x249668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24966c: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x24966cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x249670: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x249670u;
    SET_GPR_U32(ctx, 31, 0x249678u);
    ctx->pc = 0x249674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249670u;
    // 0x249674: 0xe7a10048  swc1        $f1, 0x48($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x249670u, 0x249678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249678u;
label_249678:
    // 0x249678: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x249678u;
    SET_GPR_U32(ctx, 31, 0x249680u);
    ctx->pc = 0x24967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249678u;
    // 0x24967c: 0x46160300  add.s       $f12, $f0, $f22 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x249678u, 0x249680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249680u;
label_249680:
    // 0x249680: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x249680u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x249684: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x249684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249688: 0xc051e62  jal         func_147988
    ctx->pc = 0x249688u;
    SET_GPR_U32(ctx, 31, 0x249690u);
    ctx->pc = 0x24968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249688u;
    // 0x24968c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x249688u, 0x249690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249690u;
label_249690:
    // 0x249690: 0x3c0141d0  lui         $at, 0x41D0
    ctx->pc = 0x249690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16848 << 16));
    // 0x249694: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x249694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249698: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x249698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24969c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24969cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2496a0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2496a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2496a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2496a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2496a8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2496a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2496ac: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2496ACu;
    SET_GPR_U32(ctx, 31, 0x2496B4u);
    ctx->pc = 0x2496B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2496ACu;
    // 0x2496b0: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2496ACu, 0x2496B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2496B4u;
label_2496b4:
    // 0x2496b4: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2496b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2496b8: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2496b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2496bc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2496bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2496c0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2496c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2496c4: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x2496c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2496c8: 0x4614ad41  sub.s       $f21, $f21, $f20
    ctx->pc = 0x2496c8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x2496cc: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2496ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2496d0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2496d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2496d4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2496d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2496d8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2496d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2496dc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2496dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2496e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2496e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2496e4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2496e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2496e8: 0x460cb300  add.s       $f12, $f22, $f12
    ctx->pc = 0x2496e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[12]);
    // 0x2496ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2496ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2496f0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2496f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2496f4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2496f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2496f8: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2496f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2496fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2496fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249700: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x249700u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x249704: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x249704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x249708: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x249708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24970c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x24970Cu;
    SET_GPR_U32(ctx, 31, 0x249714u);
    ctx->pc = 0x249710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24970Cu;
    // 0x249710: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x24970Cu, 0x249714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249714u;
label_249714:
    // 0x249714: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x249714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249718: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x249718u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x24971c: 0x3c013c49  lui         $at, 0x3C49
    ctx->pc = 0x24971cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15433 << 16));
    // 0x249720: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x249720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x249724: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x249724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x249728: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x249728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24972c: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x24972Cu;
    SET_GPR_U32(ctx, 31, 0x249734u);
    ctx->pc = 0x249730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24972Cu;
    // 0x249730: 0x460e0b82  mul.s       $f14, $f1, $f14 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x24972Cu, 0x249734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249734u;
label_249734:
    // 0x249734: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x249734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249738: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x249738u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24973c: 0xe6010104  swc1        $f1, 0x104($s0)
    ctx->pc = 0x24973cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x249740: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x249740u;
    SET_GPR_U32(ctx, 31, 0x249748u);
    ctx->pc = 0x249744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249740u;
    // 0x249744: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x249740u, 0x249748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249748u;
label_249748:
    // 0x249748: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x249748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x24974c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x24974cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x249750: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x249750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x249754: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x249754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x249758: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x249758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24975c: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x24975cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x249760: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x249760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x249764: 0x3e00008  jr          $ra
    ctx->pc = 0x249764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249764u;
        // 0x249768: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24976Cu;
    // 0x24976c: 0x0  nop
    ctx->pc = 0x24976cu;
    // NOP
    ctx->pc = 0x249770u;
}
