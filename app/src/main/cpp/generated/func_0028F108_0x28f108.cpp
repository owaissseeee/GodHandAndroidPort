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

// Function: func_0028F108
// Address: 0x28f108 - 0x28f5b0
void func_0028F108_0x28f108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028F108_0x28f108");
#endif

    switch (ctx->pc) {
        case 0x28f13cu: goto label_28f13c;
        case 0x28f184u: goto label_28f184;
        case 0x28f1d4u: goto label_28f1d4;
        case 0x28f1e4u: goto label_28f1e4;
        case 0x28f314u: goto label_28f314;
        case 0x28f324u: goto label_28f324;
        case 0x28f334u: goto label_28f334;
        case 0x28f578u: goto label_28f578;
        case 0x28f580u: goto label_28f580;
        default: break;
    }

    ctx->pc = 0x28f108u;

    // 0x28f108: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x28f108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x28f10c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x28f10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x28f110: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x28f110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x28f114: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28f114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f118: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x28f118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x28f11c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28f11cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f120: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x28f120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x28f124: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x28f124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x28f128: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28f128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28f12c: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x28f12cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x28f130: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x28f130u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x28f134: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x28F134u;
    SET_GPR_U32(ctx, 31, 0x28F13Cu);
    ctx->pc = 0x28F138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F134u;
    // 0x28f138: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x28F134u, 0x28F13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F13Cu;
label_28f13c:
    // 0x28f13c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28f13cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f140: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x28f140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x28f144: 0x8c62aff0  lw          $v0, -0x5010($v1)
    ctx->pc = 0x28f144u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x28f148: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x28f148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28f14c: 0x24430210  addiu       $v1, $v0, 0x210
    ctx->pc = 0x28f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x28f150: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x28f150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x28f154: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x28f154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28f158: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x28f158u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f15c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x28f15cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f160: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x28f160u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x28f164: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x28f164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f168: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x28f168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28f16c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x28f16cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f170: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x28f170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f174: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28f174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28f178: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28f178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28f17c: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x28F17Cu;
    SET_GPR_U32(ctx, 31, 0x28F184u);
    ctx->pc = 0x28F180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F17Cu;
    // 0x28f180: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x28F17Cu, 0x28F184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F184u;
label_28f184:
    // 0x28f184: 0xc60200b8  lwc1        $f2, 0xB8($s0)
    ctx->pc = 0x28f184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f188: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x28f188u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28f18c: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x28f18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f190: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x28f190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28f194: 0xc60000b4  lwc1        $f0, 0xB4($s0)
    ctx->pc = 0x28f194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f198: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x28f198u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28f19c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x28f19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x28f1a0: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x28f1a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x28f1a4: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x28f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x28f1a8: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x28f1a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x28f1ac: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x28f1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28f1b0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x28f1b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f1b4: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x28f1b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28f1b8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x28f1b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x28f1bc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x28f1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f1c0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x28f1c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f1c4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x28f1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f1c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28f1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f1cc: 0xc07df7e  jal         func_1F7DF8
    ctx->pc = 0x28F1CCu;
    SET_GPR_U32(ctx, 31, 0x28F1D4u);
    ctx->pc = 0x28F1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F1CCu;
    // 0x28f1d0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF8u, 0x28F1CCu, 0x28F1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F1D4u;
label_28f1d4:
    // 0x28f1d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28f1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f1d8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x28f1d8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x28f1dc: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x28F1DCu;
    SET_GPR_U32(ctx, 31, 0x28F1E4u);
    ctx->pc = 0x28F1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F1DCu;
    // 0x28f1e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x28F1DCu, 0x28F1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F1E4u;
label_28f1e4:
    // 0x28f1e4: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x28f1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f1e8: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x28f1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28f1ec: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x28f1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f1f0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x28f1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f1f4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x28f1f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x28f1f8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x28f1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f1fc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x28f1fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x28f200: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x28f200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f204: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x28f204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x28f208: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28f208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x28f20c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x28f20cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28f210: 0x8e630660  lw          $v1, 0x660($s3)
    ctx->pc = 0x28f210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1632)));
    // 0x28f214: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x28f214u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x28f218: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x28f218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x28f21c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28f21cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28f220: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x28f220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x28f224: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x28f224u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28f228: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x28f228u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28f22c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x28f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x28f230: 0xe6450004  swc1        $f5, 0x4($s2)
    ctx->pc = 0x28f230u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x28f234: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x28f234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x28f238: 0x46011540  add.s       $f21, $f2, $f1
    ctx->pc = 0x28f238u;
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x28f23c: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28F23Cu;
    {
        const bool branch_taken_0x28f23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x28F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F23Cu;
        // 0x28f240: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f23c) {
            ctx->pc = 0x28F25Cu;
            goto label_28f25c;
        }
    }
    ctx->pc = 0x28F244u;
    // 0x28f244: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x28f244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f248: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x28f248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x28f24c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x28f24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f250: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x28f250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28f254: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x28f254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f258: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28f258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28f25c:
    // 0x28f25c: 0x9662062c  lhu         $v0, 0x62C($s3)
    ctx->pc = 0x28f25cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1580)));
    // 0x28f260: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x28f260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x28f264: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x28F264u;
    {
        const bool branch_taken_0x28f264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f264) {
            ctx->pc = 0x28F268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F264u;
            // 0x28f268: 0xc6610630  lwc1        $f1, 0x630($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F2ACu;
            goto label_28f2ac;
        }
    }
    ctx->pc = 0x28F26Cu;
    // 0x28f26c: 0xc6610644  lwc1        $f1, 0x644($s3)
    ctx->pc = 0x28f26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f270: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x28f270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x28f274: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x28f274u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x28f278: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f27c: 0x0  nop
    ctx->pc = 0x28f27cu;
    // NOP
    // 0x28f280: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28f280u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f284: 0x0  nop
    ctx->pc = 0x28f284u;
    // NOP
    // 0x28f288: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x28F288u;
    {
        const bool branch_taken_0x28f288 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f288) {
            ctx->pc = 0x28F28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F288u;
            // 0x28f28c: 0xae600644  sw          $zero, 0x644($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 1604), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F2A8u;
            goto label_28f2a8;
        }
    }
    ctx->pc = 0x28F290u;
    // 0x28f290: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x28f290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x28f294: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28f294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28f298: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f29c: 0x0  nop
    ctx->pc = 0x28f29cu;
    // NOP
    // 0x28f2a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28f2a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28f2a4: 0xe6600644  swc1        $f0, 0x644($s3)
    ctx->pc = 0x28f2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1604), bits); }
label_28f2a8:
    // 0x28f2a8: 0xc6610630  lwc1        $f1, 0x630($s3)
    ctx->pc = 0x28f2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28f2ac:
    // 0x28f2ac: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x28f2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x28f2b0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x28f2b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x28f2b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f2b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f2b8: 0x0  nop
    ctx->pc = 0x28f2b8u;
    // NOP
    // 0x28f2bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28f2bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f2c0: 0x0  nop
    ctx->pc = 0x28f2c0u;
    // NOP
    // 0x28f2c4: 0x450200af  bc1fl       . + 4 + (0xAF << 2)
    ctx->pc = 0x28F2C4u;
    {
        const bool branch_taken_0x28f2c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f2c4) {
            ctx->pc = 0x28F2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F2C4u;
            // 0x28f2c8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F584u;
            goto label_28f584;
        }
    }
    ctx->pc = 0x28F2CCu;
    // 0x28f2cc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x28f2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x28f2d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f2d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f2d4: 0x0  nop
    ctx->pc = 0x28f2d4u;
    // NOP
    // 0x28f2d8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x28f2d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f2dc: 0x0  nop
    ctx->pc = 0x28f2dcu;
    // NOP
    // 0x28f2e0: 0x450200a8  bc1fl       . + 4 + (0xA8 << 2)
    ctx->pc = 0x28F2E0u;
    {
        const bool branch_taken_0x28f2e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f2e0) {
            ctx->pc = 0x28F2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F2E0u;
            // 0x28f2e4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F584u;
            goto label_28f584;
        }
    }
    ctx->pc = 0x28F2E8u;
    // 0x28f2e8: 0x3c01bf33  lui         $at, 0xBF33
    ctx->pc = 0x28f2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48947 << 16));
    // 0x28f2ec: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x28f2ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x28f2f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28f2f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28f2f4: 0x0  nop
    ctx->pc = 0x28f2f4u;
    // NOP
    // 0x28f2f8: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x28f2f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f2fc: 0x0  nop
    ctx->pc = 0x28f2fcu;
    // NOP
    // 0x28f300: 0x450200a0  bc1fl       . + 4 + (0xA0 << 2)
    ctx->pc = 0x28F300u;
    {
        const bool branch_taken_0x28f300 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f300) {
            ctx->pc = 0x28F304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F300u;
            // 0x28f304: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F584u;
            goto label_28f584;
        }
    }
    ctx->pc = 0x28F308u;
    // 0x28f308: 0x8e640660  lw          $a0, 0x660($s3)
    ctx->pc = 0x28f308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1632)));
    // 0x28f30c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x28F30Cu;
    SET_GPR_U32(ctx, 31, 0x28F314u);
    ctx->pc = 0x28F310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F30Cu;
    // 0x28f310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x28F30Cu, 0x28F314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F314u;
label_28f314:
    // 0x28f314: 0x8e640660  lw          $a0, 0x660($s3)
    ctx->pc = 0x28f314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1632)));
    // 0x28f318: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28f318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f31c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x28F31Cu;
    SET_GPR_U32(ctx, 31, 0x28F324u);
    ctx->pc = 0x28F320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F31Cu;
    // 0x28f320: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x28F31Cu, 0x28F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F324u;
label_28f324:
    // 0x28f324: 0x8e640660  lw          $a0, 0x660($s3)
    ctx->pc = 0x28f324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1632)));
    // 0x28f328: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28f328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28f32c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x28F32Cu;
    SET_GPR_U32(ctx, 31, 0x28F334u);
    ctx->pc = 0x28F330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F32Cu;
    // 0x28f330: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x28F32Cu, 0x28F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F334u;
label_28f334:
    // 0x28f334: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x28f334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f338: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x28f338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x28f33c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28f33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28f340: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f344: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x28f344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x28f348: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x28f348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x28f34c: 0xe4610040  swc1        $f1, 0x40($v1)
    ctx->pc = 0x28f34cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x28f350: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28f350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f354: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28f354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f358: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x28f358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f35c: 0x0  nop
    ctx->pc = 0x28f35cu;
    // NOP
    // 0x28f360: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x28F360u;
    {
        const bool branch_taken_0x28f360 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F360u;
        // 0x28f364: 0xe4410044  swc1        $f1, 0x44($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f360) {
            ctx->pc = 0x28F3C0u;
            goto label_28f3c0;
        }
    }
    ctx->pc = 0x28F368u;
    // 0x28f368: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x28f368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f36c: 0x0  nop
    ctx->pc = 0x28f36cu;
    // NOP
    // 0x28f370: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x28F370u;
    {
        const bool branch_taken_0x28f370 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F370u;
        // 0x28f374: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f370) {
            ctx->pc = 0x28F3C0u;
            goto label_28f3c0;
        }
    }
    ctx->pc = 0x28F378u;
    // 0x28f378: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x28f378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x28f37c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x28f37cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x28f380: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28f380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28f384: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x28f384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x28f388: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f38c: 0x4602a800  add.s       $f0, $f21, $f2
    ctx->pc = 0x28f38cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x28f390: 0xc6630644  lwc1        $f3, 0x644($s3)
    ctx->pc = 0x28f390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f394: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28f394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f398: 0x0  nop
    ctx->pc = 0x28f398u;
    // NOP
    // 0x28f39c: 0x0  nop
    ctx->pc = 0x28f39cu;
    // NOP
    // 0x28f3a0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x28f3a0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x28f3a4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28f3a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28f3a8: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x28f3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x28f3ac: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x28f3acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x28f3b0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28f3b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28f3b4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x28f3b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x28f3b8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x28F3B8u;
    {
        const bool branch_taken_0x28f3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F3B8u;
        // 0x28f3bc: 0x34638080  ori         $v1, $v1, 0x8080 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3b8) {
            ctx->pc = 0x28F43Cu;
            goto label_28f43c;
        }
    }
    ctx->pc = 0x28F3C0u;
label_28f3c0:
    // 0x28f3c0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x28f3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x28f3c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f3c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f3c8: 0x0  nop
    ctx->pc = 0x28f3c8u;
    // NOP
    // 0x28f3cc: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x28f3ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f3d0: 0x0  nop
    ctx->pc = 0x28f3d0u;
    // NOP
    // 0x28f3d4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x28F3D4u;
    {
        const bool branch_taken_0x28f3d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F3D4u;
        // 0x28f3d8: 0x3c0300ff  lui         $v1, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3d4) {
            ctx->pc = 0x28F41Cu;
            goto label_28f41c;
        }
    }
    ctx->pc = 0x28F3DCu;
    // 0x28f3dc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x28f3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x28f3e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f3e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f3e4: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x28f3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x28f3e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28f3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28f3ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x28f3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x28f3f0: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x28f3f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x28f3f4: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x28f3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x28f3f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f3f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f3fc: 0xc6620644  lwc1        $f2, 0x644($s3)
    ctx->pc = 0x28f3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f400: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x28f400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x28f404: 0x0  nop
    ctx->pc = 0x28f404u;
    // NOP
    // 0x28f408: 0x0  nop
    ctx->pc = 0x28f408u;
    // NOP
    // 0x28f40c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x28f40cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x28f410: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28f410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28f414: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F414u;
    {
        const bool branch_taken_0x28f414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F414u;
        // 0x28f418: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f414) {
            ctx->pc = 0x28F434u;
            goto label_28f434;
        }
    }
    ctx->pc = 0x28F41Cu;
label_28f41c:
    // 0x28f41c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x28f41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x28f420: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f424: 0xc6600644  lwc1        $f0, 0x644($s3)
    ctx->pc = 0x28f424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f428: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x28f428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x28f42c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x28f42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x28f430: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28f430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28f434:
    // 0x28f434: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28f434u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28f438: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x28f438u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_28f43c:
    // 0x28f43c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x28f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x28f440: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x28f440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28f444: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x28f444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f448: 0x24050209  addiu       $a1, $zero, 0x209
    ctx->pc = 0x28f448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    // 0x28f44c: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x28f44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x28f450: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x28f450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x28f454: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28f454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28f458: 0xac64004c  sw          $a0, 0x4C($v1)
    ctx->pc = 0x28f458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 4));
    // 0x28f45c: 0x8662054a  lh          $v0, 0x54A($s3)
    ctx->pc = 0x28f45cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1354)));
    // 0x28f460: 0x86630548  lh          $v1, 0x548($s3)
    ctx->pc = 0x28f460u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1352)));
    // 0x28f464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f468: 0x0  nop
    ctx->pc = 0x28f468u;
    // NOP
    // 0x28f46c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f46cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f470: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x28f470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28f474: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28f474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f478: 0x0  nop
    ctx->pc = 0x28f478u;
    // NOP
    // 0x28f47c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28f47cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28f480: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x28f480u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x28f484: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x28f484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x28f488: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x28f488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28f48c: 0xc6620630  lwc1        $f2, 0x630($s3)
    ctx->pc = 0x28f48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f490: 0xe4420040  swc1        $f2, 0x40($v0)
    ctx->pc = 0x28f490u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x28f494: 0xc6610630  lwc1        $f1, 0x630($s3)
    ctx->pc = 0x28f494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f498: 0x866402ac  lh          $a0, 0x2AC($s3)
    ctx->pc = 0x28f498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 684)));
    // 0x28f49c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28f49cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28f4a0: 0x8e630660  lw          $v1, 0x660($s3)
    ctx->pc = 0x28f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1632)));
    // 0x28f4a4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28f4a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28f4a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28f4a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28f4ac: 0xe6610630  swc1        $f1, 0x630($s3)
    ctx->pc = 0x28f4acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1584), bits); }
    // 0x28f4b0: 0xa4640044  sh          $a0, 0x44($v1)
    ctx->pc = 0x28f4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x28f4b4: 0x8e620564  lw          $v0, 0x564($s3)
    ctx->pc = 0x28f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x28f4b8: 0x14450009  bne         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x28F4B8u;
    {
        const bool branch_taken_0x28f4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x28F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4B8u;
        // 0x28f4bc: 0x8e620660  lw          $v0, 0x660($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4b8) {
            ctx->pc = 0x28F4E0u;
            goto label_28f4e0;
        }
    }
    ctx->pc = 0x28F4C0u;
    // 0x28f4c0: 0x3c013bed  lui         $at, 0x3BED
    ctx->pc = 0x28f4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15341 << 16));
    // 0x28f4c4: 0x342172ca  ori         $at, $at, 0x72CA
    ctx->pc = 0x28f4c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29386);
    // 0x28f4c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f4c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f4cc: 0x3c01beb3  lui         $at, 0xBEB3
    ctx->pc = 0x28f4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48819 << 16));
    // 0x28f4d0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x28f4d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x28f4d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28f4d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28f4d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28F4D8u;
    {
        const bool branch_taken_0x28f4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4D8u;
        // 0x28f4dc: 0xe4400040  swc1        $f0, 0x40($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4d8) {
            ctx->pc = 0x28F4FCu;
            goto label_28f4fc;
        }
    }
    ctx->pc = 0x28F4E0u;
label_28f4e0:
    // 0x28f4e0: 0x3c013bed  lui         $at, 0x3BED
    ctx->pc = 0x28f4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15341 << 16));
    // 0x28f4e4: 0x342172ca  ori         $at, $at, 0x72CA
    ctx->pc = 0x28f4e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29386);
    // 0x28f4e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f4ec: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x28f4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x28f4f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28f4f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x28f4f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28f4f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28f4f8: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x28f4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_28f4fc:
    // 0x28f4fc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x28f4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x28f500: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28f500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28f504: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f508: 0x8e630660  lw          $v1, 0x660($s3)
    ctx->pc = 0x28f508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1632)));
    // 0x28f50c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28f50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28f510: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f514: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x28f514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28f518: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x28f518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x28f51c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x28f51cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x28f520: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x28f520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x28f524: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28F524u;
    {
        const bool branch_taken_0x28f524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x28F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F524u;
        // 0x28f528: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f524) {
            ctx->pc = 0x28F544u;
            goto label_28f544;
        }
    }
    ctx->pc = 0x28F52Cu;
    // 0x28f52c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x28f52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f530: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x28f530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x28f534: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x28f534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f538: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x28f538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28f53c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x28f53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f540: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28f540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28f544:
    // 0x28f544: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x28f544u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28f548: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x28f548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f54c: 0x8e630660  lw          $v1, 0x660($s3)
    ctx->pc = 0x28f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1632)));
    // 0x28f550: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x28f550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x28f554: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28F554u;
    {
        const bool branch_taken_0x28f554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x28F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F554u;
        // 0x28f558: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f554) {
            ctx->pc = 0x28F570u;
            goto label_28f570;
        }
    }
    ctx->pc = 0x28F55Cu;
    // 0x28f55c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x28f55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x28f560: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x28f560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f564: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x28f564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28f568: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x28f568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f56c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28f56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28f570:
    // 0x28f570: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x28F570u;
    SET_GPR_U32(ctx, 31, 0x28F578u);
    ctx->pc = 0x28F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F570u;
    // 0x28f574: 0x8e640660  lw          $a0, 0x660($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x28F570u, 0x28F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F578u;
label_28f578:
    // 0x28f578: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x28F578u;
    SET_GPR_U32(ctx, 31, 0x28F580u);
    ctx->pc = 0x28F57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F578u;
    // 0x28f57c: 0x8e640660  lw          $a0, 0x660($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x28F578u, 0x28F580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F580u;
label_28f580:
    // 0x28f580: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x28f580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_28f584:
    // 0x28f584: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x28f584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28f588: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x28f588u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28f58c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x28f58cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28f590: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x28f590u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28f594: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28f594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28f598: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x28f598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x28f59c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x28f59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28f5a0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x28f5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28f5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x28F5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5A4u;
        // 0x28f5a8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F5ACu;
    // 0x28f5ac: 0x0  nop
    ctx->pc = 0x28f5acu;
    // NOP
    ctx->pc = 0x28f5b0u;
}
