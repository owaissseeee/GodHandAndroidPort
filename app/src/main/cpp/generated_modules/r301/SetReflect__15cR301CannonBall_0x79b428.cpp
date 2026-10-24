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
// Function: SetReflect__15cR301CannonBall
// Address: 0x79b428 - 0x79b5b8
void SetReflect__15cR301CannonBall_0x79b428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetReflect__15cR301CannonBall_0x79b428");
#endif

    switch (ctx->pc) {
        case 0x79b4acu: goto label_79b4ac;
        case 0x79b4f4u: goto label_79b4f4;
        case 0x79b508u: goto label_79b508;
        case 0x79b510u: goto label_79b510;
        case 0x79b588u: goto label_79b588;
        default: break;
    }

    ctx->pc = 0x79b428u;

    // 0x79b428: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x79b428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x79b42c: 0x3c01c0c0  lui         $at, 0xC0C0
    ctx->pc = 0x79b42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49344 << 16));
    // 0x79b430: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b434: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x79b434u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x79b438: 0x3c014098  lui         $at, 0x4098
    ctx->pc = 0x79b438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16536 << 16));
    // 0x79b43c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x79b43cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x79b440: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b444: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79b448: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79b44c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x79b44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x79b450: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x79b450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79b454: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x79b454u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b458: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x79b458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79b45c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x79b45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x79b460: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x79b460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x79b464: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x79b464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x79b468: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x79b468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x79b46c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x79b46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x79b470: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x79b470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x79b474: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x79b474u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x79b478: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x79b478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x79b47c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x79b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79b480: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x79b480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79b484: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79b484u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b488: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x79b488u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b48c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79b48cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79b490: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79b490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b494: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x79b494u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b498: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x79b498u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79b49c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79b49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b4a0: 0xc7ad0018  lwc1        $f13, 0x18($sp)
    ctx->pc = 0x79b4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x79b4a4: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x79B4A4u;
    SET_GPR_U32(ctx, 31, 0x79B4ACu);
    ctx->pc = 0x79B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4A4u;
    // 0x79b4a8: 0xc7ac0010  lwc1        $f12, 0x10($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x79B4A4u, 0x79B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4ACu;
label_79b4ac:
    // 0x79b4ac: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x79b4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x79b4b0: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x79b4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79b4b4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x79b4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x79b4b8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x79b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x79b4bc: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x79b4bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x79b4c0: 0x3c014015  lui         $at, 0x4015
    ctx->pc = 0x79b4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16405 << 16));
    // 0x79b4c4: 0x34215555  ori         $at, $at, 0x5555
    ctx->pc = 0x79b4c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21845);
    // 0x79b4c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b4c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b4cc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x79b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x79b4d0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x79b4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x79b4d4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x79b4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x79b4d8: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x79b4d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x79b4dc: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x79b4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79b4e0: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x79b4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79b4e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79b4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4ec: 0xc051dca  jal         func_147728
    ctx->pc = 0x79B4ECu;
    SET_GPR_U32(ctx, 31, 0x79B4F4u);
    ctx->pc = 0x79B4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4ECu;
    // 0x79b4f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x79B4ECu, 0x79B4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4F4u;
label_79b4f4:
    // 0x79b4f4: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x79b4f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79b4f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79b4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79b4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b500: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x79B500u;
    SET_GPR_U32(ctx, 31, 0x79B508u);
    ctx->pc = 0x79B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B500u;
    // 0x79b504: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x79B500u, 0x79B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B508u;
label_79b508:
    // 0x79b508: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x79B508u;
    SET_GPR_U32(ctx, 31, 0x79B510u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x79B508u, 0x79B510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B510u;
label_79b510:
    // 0x79b510: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x79b510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79b514: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x79b514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x79b518: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79b518u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x79b51c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79b51cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79b520: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x79b520u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x79b524: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x79b524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x79b528: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b52c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x79b52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x79b530: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b534: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x79B534u;
    {
        const bool branch_taken_0x79b534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b534) {
            ctx->pc = 0x79B538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B534u;
            // 0x79b538: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B53Cu;
            goto label_79b53c;
        }
    }
    ctx->pc = 0x79B53Cu;
label_79b53c:
    // 0x79b53c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x79b53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x79b540: 0x2010  mfhi        $a0
    ctx->pc = 0x79b540u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x79b544: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x79b544u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b548: 0x0  nop
    ctx->pc = 0x79b548u;
    // NOP
    // 0x79b54c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79b54cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79b550: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x79b550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x79b554: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79b554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79b558: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x79b558u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x79b55c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x79b55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x79b560: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x79b560u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79b564: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x79b564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b568: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x79b568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x79b56c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x79b56cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x79b570: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x79b570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b574: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x79b574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x79b578: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x79b578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x79b57c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b57cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79b580: 0xc06ce44  jal         func_1B3910
    ctx->pc = 0x79B580u;
    SET_GPR_U32(ctx, 31, 0x79B588u);
    ctx->pc = 0x79B584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B580u;
    // 0x79b584: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3910u, 0x79B580u, 0x79B588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B588u;
label_79b588:
    // 0x79b588: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x79b588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x79b58c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x79b58cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x79b590: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x79b590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x79b594: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x79b594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79b598: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x79b598u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x79b59c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x79b59cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79b5a0: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x79b5a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79b5a4: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x79b5a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79b5a8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x79b5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79b5ac: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x79b5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79b5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x79B5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5B0u;
        // 0x79b5b4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B5B8u;
}
} // namespace gh_r301
