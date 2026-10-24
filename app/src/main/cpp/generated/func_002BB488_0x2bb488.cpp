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

// Function: func_002BB488
// Address: 0x2bb488 - 0x2bb670
void func_002BB488_0x2bb488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BB488_0x2bb488");
#endif

    switch (ctx->pc) {
        case 0x2bb4e4u: goto label_2bb4e4;
        case 0x2bb504u: goto label_2bb504;
        case 0x2bb564u: goto label_2bb564;
        case 0x2bb624u: goto label_2bb624;
        default: break;
    }

    ctx->pc = 0x2bb488u;

    // 0x2bb488: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2bb488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2bb48c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2bb48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2bb490: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2bb490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2bb494: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bb494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb498: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x2bb498u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2bb49c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2bb49cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb4a0: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2bb4a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2bb4a4: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2bb4a4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2bb4a8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2bb4a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2bb4ac: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2bb4acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2bb4b0: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x2bb4b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x2bb4b4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2bb4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2bb4b8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2bb4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2bb4bc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2bb4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2bb4c0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2bb4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2bb4c4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2bb4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb4c8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2bb4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb4cc: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2bb4ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb4d0: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2bb4d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bb4d4: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2bb4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb4d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb4dc: 0xc051f18  jal         func_147C60
    ctx->pc = 0x2BB4DCu;
    SET_GPR_U32(ctx, 31, 0x2BB4E4u);
    ctx->pc = 0x2BB4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB4DCu;
    // 0x2bb4e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x2BB4DCu, 0x2BB4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB4E4u;
label_2bb4e4:
    // 0x2bb4e4: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x2bb4e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bb4e8: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x2bb4e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bb4ec: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2bb4ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bb4f0: 0xfa240020  sqc2        $vf4, 0x20($s1)
    ctx->pc = 0x2bb4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb4f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bb4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb4f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bb4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb4fc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BB4FCu;
    SET_GPR_U32(ctx, 31, 0x2BB504u);
    ctx->pc = 0x2BB500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB4FCu;
    // 0x2bb500: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BB4FCu, 0x2BB504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB504u;
label_2bb504:
    // 0x2bb504: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bb504u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bb508: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2bb508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb50c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2bb50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb510: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2bb510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb514: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2bb514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb518: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2bb518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bb51c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2bb51cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bb520: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2bb520u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2bb524: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2bb524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb528: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2bb528u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bb52c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2bb52cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb530: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bb530u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb534: 0xfa240020  sqc2        $vf4, 0x20($s1)
    ctx->pc = 0x2bb534u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb538: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bb538u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bb53c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2bb53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb540: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2bb540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb544: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2bb544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb548: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2bb548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb54c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2bb54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bb550: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2bb550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2bb554: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2bb554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2bb558: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2bb558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb55c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2BB55Cu;
    SET_GPR_U32(ctx, 31, 0x2BB564u);
    ctx->pc = 0x2BB560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB55Cu;
    // 0x2bb560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2BB55Cu, 0x2BB564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB564u;
label_2bb564:
    // 0x2bb564: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2bb564u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2bb568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bb568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb56c: 0x0  nop
    ctx->pc = 0x2bb56cu;
    // NOP
    // 0x2bb570: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2bb570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb574: 0x0  nop
    ctx->pc = 0x2bb574u;
    // NOP
    // 0x2bb578: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2BB578u;
    {
        const bool branch_taken_0x2bb578 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BB57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB578u;
        // 0x2bb57c: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb578) {
            ctx->pc = 0x2BB5BCu;
            goto label_2bb5bc;
        }
    }
    ctx->pc = 0x2BB580u;
    // 0x2bb580: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bb580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bb584: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bb584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bb588: 0x0  nop
    ctx->pc = 0x2bb588u;
    // NOP
    // 0x2bb58c: 0x0  nop
    ctx->pc = 0x2bb58cu;
    // NOP
    // 0x2bb590: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x2bb590u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x2bb594: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bb594u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bb598: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2bb598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bb59c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2bb59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb5a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bb5a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bb5a4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2bb5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2bb5a8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2bb5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb5ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bb5acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bb5b0: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2bb5b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bb5b4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2bb5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb5b8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2bb5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2bb5bc:
    // 0x2bb5bc: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bb5bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bb5c0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2bb5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb5c4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2bb5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb5c8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2bb5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb5cc: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2bb5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb5d0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2bb5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bb5d4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2bb5d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2bb5d8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2bb5d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2bb5dc: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2bb5dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb5e0: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x2bb5e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2bb5e4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2bb5e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2bb5e8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2bb5e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb5ec: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2bb5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb5f0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2bb5f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb5f4: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2bb5f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bb5f8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bb5f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb5fc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2bb5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb600: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bb600u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb604: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2bb604u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bb608: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bb608u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bb60c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bb60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb610: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bb610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb614: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2bb614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb618: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bb618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb61c: 0xc0559b0  jal         func_1566C0
    ctx->pc = 0x2BB61Cu;
    SET_GPR_U32(ctx, 31, 0x2BB624u);
    ctx->pc = 0x2BB620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB61Cu;
    // 0x2bb620: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1566C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566C0u, 0x2BB61Cu, 0x2BB624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB624u;
label_2bb624:
    // 0x2bb624: 0x4615b040  add.s       $f1, $f22, $f21
    ctx->pc = 0x2bb624u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x2bb628: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bb628u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb62c: 0x0  nop
    ctx->pc = 0x2bb62cu;
    // NOP
    // 0x2bb630: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BB630u;
    {
        const bool branch_taken_0x2bb630 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB630u;
        // 0x2bb634: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb630) {
            ctx->pc = 0x2BB63Cu;
            goto label_2bb63c;
        }
    }
    ctx->pc = 0x2BB638u;
    // 0x2bb638: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bb638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb63c:
    // 0x2bb63c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2bb63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bb640: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2bb640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bb644: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2bb644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bb648: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2bb648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bb64c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2bb64cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bb650: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bb650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bb654: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x2bb654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2bb658: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2bb658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bb65c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2bb65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bb660: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB660u;
        // 0x2bb664: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB668u;
    // 0x2bb668: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2bb668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2bb66c: 0x0  nop
    ctx->pc = 0x2bb66cu;
    // NOP
    ctx->pc = 0x2bb670u;
}
