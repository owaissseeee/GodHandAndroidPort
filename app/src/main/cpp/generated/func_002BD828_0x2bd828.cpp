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

// Function: func_002BD828
// Address: 0x2bd828 - 0x2bda10
void func_002BD828_0x2bd828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BD828_0x2bd828");
#endif

    switch (ctx->pc) {
        case 0x2bd8b8u: goto label_2bd8b8;
        case 0x2bd8ecu: goto label_2bd8ec;
        case 0x2bd95cu: goto label_2bd95c;
        case 0x2bd98cu: goto label_2bd98c;
        case 0x2bd9d8u: goto label_2bd9d8;
        default: break;
    }

    ctx->pc = 0x2bd828u;

    // 0x2bd828: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2bd828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x2bd82c: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x2bd82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x2bd830: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x2bd830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x2bd834: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bd834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd838: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x2bd838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x2bd83c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2bd83cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd840: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x2bd840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x2bd844: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2bd844u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd848: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x2bd848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x2bd84c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2bd84cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd850: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x2bd850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x2bd854: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2bd854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2bd858: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x2bd858u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x2bd85c: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x2bd85cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2bd860: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2bd860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bd864: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2bd864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bd868: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2bd868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bd86c: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x2bd86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bd870: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2bd870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd874: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2bd874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2bd878: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bd878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bd87c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2bd87cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2bd880: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x2bd880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bd884: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd888: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2bd888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2bd88c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2bd88cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2bd890: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2bd890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x2bd894: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x2bd894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x2bd898: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2bd898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2bd89c: 0xe455000c  swc1        $f21, 0xC($v0)
    ctx->pc = 0x2bd89cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2bd8a0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2bd8a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd8a4: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2bd8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd8a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd8ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bd8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd8b0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BD8B0u;
    SET_GPR_U32(ctx, 31, 0x2BD8B8u);
    ctx->pc = 0x2BD8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD8B0u;
    // 0x2bd8b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BD8B0u, 0x2BD8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD8B8u;
label_2bd8b8:
    // 0x2bd8b8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bd8b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bd8bc: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x2bd8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd8c0: 0x27b100d0  addiu       $s1, $sp, 0xD0
    ctx->pc = 0x2bd8c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2bd8c4: 0x13b10006  beq         $sp, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD8C4u;
    {
        const bool branch_taken_0x2bd8c4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 17));
        ctx->pc = 0x2BD8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8C4u;
        // 0x2bd8c8: 0xc7a000d0  lwc1        $f0, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd8c4) {
            ctx->pc = 0x2BD8E0u;
            goto label_2bd8e0;
        }
    }
    ctx->pc = 0x2BD8CCu;
    // 0x2bd8cc: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2bd8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd8d0: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x2bd8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd8d4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2bd8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bd8d8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2bd8d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bd8dc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2bd8dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2bd8e0:
    // 0x2bd8e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bd8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd8e4: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2BD8E4u;
    SET_GPR_U32(ctx, 31, 0x2BD8ECu);
    ctx->pc = 0x2BD8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD8E4u;
    // 0x2bd8e8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2BD8E4u, 0x2BD8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD8ECu;
label_2bd8ec:
    // 0x2bd8ec: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2bd8ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bd8f0: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2bd8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd8f4: 0xdba400e0  lqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2bd8f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bd8f8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x2bd8f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2bd8fc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2bd8fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2bd900: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2bd900u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bd904: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2bd904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd908: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bd908u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bd90c: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x2bd90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd910: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x2bd910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd914: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x2bd914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2bd918: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x2bd918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bd91c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2bd91cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2bd920: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2bd920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd924: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x2bd924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd928: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x2bd928u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bd92c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2bd92cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2bd930: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2bd930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2bd934: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2bd934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2bd938: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x2bd938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x2bd93c: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x2bd93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x2bd940: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x2bd940u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2bd944: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2bd944u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bd948: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x2bd948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd950: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bd950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd954: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BD954u;
    SET_GPR_U32(ctx, 31, 0x2BD95Cu);
    ctx->pc = 0x2BD958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD954u;
    // 0x2bd958: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BD954u, 0x2BD95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD95Cu;
label_2bd95c:
    // 0x2bd95c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bd95cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bd960: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2bd960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd964: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x2bd964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd968: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x2bd968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bd96c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x2bd96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd970: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bd970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd974: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x2bd974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd978: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bd978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bd97c: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x2bd97cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bd980: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2bd980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2bd984: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2BD984u;
    SET_GPR_U32(ctx, 31, 0x2BD98Cu);
    ctx->pc = 0x2BD988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD984u;
    // 0x2bd988: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2BD984u, 0x2BD98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD98Cu;
label_2bd98c:
    // 0x2bd98c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2bd98cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2bd990: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x2bd990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd994: 0xdba400f0  lqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x2bd994u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bd998: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x2bd998u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2bd99c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2bd99cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2bd9a0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2bd9a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bd9a4: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x2bd9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd9a8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bd9a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bd9ac: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2bd9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd9b0: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x2bd9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd9b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bd9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd9b8: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x2bd9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd9bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bd9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd9c0: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x2bd9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd9c4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2bd9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2bd9c8: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x2bd9c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2bd9cc: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x2bd9ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2bd9d0: 0xc04daa2  jal         func_136A88
    ctx->pc = 0x2BD9D0u;
    SET_GPR_U32(ctx, 31, 0x2BD9D8u);
    ctx->pc = 0x2BD9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD9D0u;
    // 0x2bd9d4: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A88u, 0x2BD9D0u, 0x2BD9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD9D8u;
label_2bd9d8:
    // 0x2bd9d8: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x2bd9d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2bd9dc: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x2bd9dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2bd9e0: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x2bd9e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2bd9e4: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x2bd9e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2bd9e8: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x2bd9e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2bd9ec: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x2bd9ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2bd9f0: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x2bd9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bd9f4: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x2bd9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bd9f8: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x2bd9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bd9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9FCu;
        // 0x2bda00: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDA04u;
    // 0x2bda04: 0x0  nop
    ctx->pc = 0x2bda04u;
    // NOP
    // 0x2bda08: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2bda08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bda0c: 0x0  nop
    ctx->pc = 0x2bda0cu;
    // NOP
    ctx->pc = 0x2bda10u;
}
