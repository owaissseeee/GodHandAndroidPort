#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: Move__5cR505
// Address: 0x799478 - 0x799840
void Move__5cR505_0x799478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Move__5cR505_0x799478");
#endif

    switch (ctx->pc) {
        case 0x7994b0u: goto label_7994b0;
        case 0x799550u: goto label_799550;
        case 0x7996ccu: goto label_7996cc;
        case 0x7996e8u: goto label_7996e8;
        case 0x7996fcu: goto label_7996fc;
        case 0x799760u: goto label_799760;
        case 0x7997f8u: goto label_7997f8;
        default: break;
    }

    ctx->pc = 0x799478u;

    // 0x799478: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x79947c: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x79947cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x799480: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x799480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x799484: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x799484u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799488: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x799488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x79948c: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x79948cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x799490: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x799490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x799494: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x799494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x799498: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x799498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x79949c: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x79949cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x7994a0: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x7994a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x7994a4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x7994a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x7994a8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x7994A8u;
    SET_GPR_U32(ctx, 31, 0x7994B0u);
    ctx->pc = 0x7994ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994A8u;
    // 0x7994ac: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7994A8u, 0x7994B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B0u;
label_7994b0:
    // 0x7994b0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x7994b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994b4: 0x12e000d6  beqz        $s7, . + 4 + (0xD6 << 2)
    ctx->pc = 0x7994B4u;
    {
        const bool branch_taken_0x7994b4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B4u;
        // 0x7994b8: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994b4) {
            ctx->pc = 0x799810u;
            goto label_799810;
        }
    }
    ctx->pc = 0x7994BCu;
    // 0x7994bc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x7994c0: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x7994C0u;
    {
        const bool branch_taken_0x7994c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994C0u;
        // 0x7994c4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994c0) {
            ctx->pc = 0x799810u;
            goto label_799810;
        }
    }
    ctx->pc = 0x7994C8u;
    // 0x7994c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7994cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7994ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x7994d0: 0x2442d8b0  addiu       $v0, $v0, -0x2750
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957232));
    // 0x7994d4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x7994d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x7994d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x7994d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x7994dc: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x7994dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x7994e0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x7994e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x7994e4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x7994e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x7994e8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7994e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7994ec: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x7994ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7994f0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x7994f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x7994f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7994f8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x7994f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7994fc: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x7994fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x799500: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x799500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x799504: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x799504u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x799508: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x799508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79950c: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x79950cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x799510: 0x460720c2  mul.s       $f3, $f4, $f7
    ctx->pc = 0x799510u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x799514: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x799514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x799518: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x799518u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x79951c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x79951cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x799520: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x799520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x799524: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x799524u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x799528: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x799528u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x79952c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x79952cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x799530: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x799530u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x799534: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x799534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x799538: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x799538u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x79953c: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x79953cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x799540: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x799540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x799544: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x799544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799548: 0xc1e6fca  jal         func_79BF28
    ctx->pc = 0x799548u;
    SET_GPR_U32(ctx, 31, 0x799550u);
    ctx->pc = 0x79BF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BF28u, 0x799548u, 0x799550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799550u;
label_799550:
    // 0x799550: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x799550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x799554: 0x0  nop
    ctx->pc = 0x799554u;
    // NOP
    // 0x799558: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x799558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79955c: 0x0  nop
    ctx->pc = 0x79955cu;
    // NOP
    // 0x799560: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x799560u;
    {
        const bool branch_taken_0x799560 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799560u;
        // 0x799564: 0xc7a30010  lwc1        $f3, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799560) {
            ctx->pc = 0x79959Cu;
            goto label_79959c;
        }
    }
    ctx->pc = 0x799568u;
    // 0x799568: 0x0  nop
    ctx->pc = 0x799568u;
    // NOP
    // 0x79956c: 0x0  nop
    ctx->pc = 0x79956cu;
    // NOP
    // 0x799570: 0x4600a083  div.s       $f2, $f20, $f0
    ctx->pc = 0x799570u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x799574: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x799574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x799578: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x799578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79957c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x79957cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799580: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x799580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x799584: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x799584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x799588: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x799588u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x79958c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x79958cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x799590: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x799590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x799594: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x799594u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x799598: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x799598u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_79959c:
    // 0x79959c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x79959cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x7995a0: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x7995a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7995a4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x7995a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7995a8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x7995a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7995ac: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x7995acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x7995b0: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x7995b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x7995b4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x7995b8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x7995b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7995bc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x7995c0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x7995c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x7995c4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x7995c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x7995c8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x7995c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x7995cc: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x7995d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7995d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7995d4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x7995d8: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x7995d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x7995dc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x7995dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7995e0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x7995e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7995e4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x7995e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x7995e8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x7995e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x7995ec: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x7995ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x7995f0: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x7995f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x7995f4: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x7995f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x7995f8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x7995f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7995fc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x7995fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799600: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x799600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x799604: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x799604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x799608: 0xe4d4000c  swc1        $f20, 0xC($a2)
    ctx->pc = 0x799608u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x79960c: 0x8ee200f0  lw          $v0, 0xF0($s7)
    ctx->pc = 0x79960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 240)));
    // 0x799610: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x799610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799614: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x799614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799618: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x799618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x79961c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x79961cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x799620: 0xe7a50048  swc1        $f5, 0x48($sp)
    ctx->pc = 0x799620u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x799624: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x799624u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x799628: 0xe7a50058  swc1        $f5, 0x58($sp)
    ctx->pc = 0x799628u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x79962c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x79962cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799630: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x799630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799634: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x799634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x799638: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x799638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x79963c: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x79963cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x799640: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x799640u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799644: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x799644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799648: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x799648u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79964c: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x79964cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x799650: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x799650u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x799654: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x799654u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x799658: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x799658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79965c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x79965cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799660: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x799660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799664: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x799668: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x799668u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79966c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x79966cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799670: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x799670u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x799674: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x799674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799678: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x799678u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x79967c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x79967cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799680: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x799680u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799684: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x799684u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799688: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x799688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79968c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x79968cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799690: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x799690u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799694: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x799694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799698: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x799698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x79969c: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x79969cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7996a0: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x7996a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x7996a4: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x7996a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7996a8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x7996a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x7996ac: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x7996acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7996b0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7996b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7996b4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x7996b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7996b8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x7996b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x7996bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x7996c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996c4: 0xc055a46  jal         func_156918
    ctx->pc = 0x7996C4u;
    SET_GPR_U32(ctx, 31, 0x7996CCu);
    ctx->pc = 0x7996C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C4u;
    // 0x7996c8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156918u, 0x7996C4u, 0x7996CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996CCu;
label_7996cc:
    // 0x7996cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7996ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996d0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7996d4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7996d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7996d8: 0x24a5c148  addiu       $a1, $a1, -0x3EB8
    ctx->pc = 0x7996d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951240));
    // 0x7996dc: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7996e0: 0xc1e6fbc  jal         func_79BEF0
    ctx->pc = 0x7996E0u;
    SET_GPR_U32(ctx, 31, 0x7996E8u);
    ctx->pc = 0x7996E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E0u;
    // 0x7996e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEF0u, 0x7996E0u, 0x7996E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996E8u;
label_7996e8:
    // 0x7996e8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7996e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7996ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7996ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996f0: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x7996f4: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7996F4u;
    SET_GPR_U32(ctx, 31, 0x7996FCu);
    ctx->pc = 0x7996F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996F4u;
    // 0x7996f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7996F4u, 0x7996FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996FCu;
label_7996fc:
    // 0x7996fc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7996FCu;
    {
        const bool branch_taken_0x7996fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996FCu;
        // 0x799700: 0x27b00090  addiu       $s0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996fc) {
            ctx->pc = 0x799778u;
            goto label_799778;
        }
    }
    ctx->pc = 0x799704u;
    // 0x799704: 0x620001c  bltz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x799704u;
    {
        const bool branch_taken_0x799704 = (GPR_S64(ctx, 17) < 0);
        if (branch_taken_0x799704) {
            ctx->pc = 0x799778u;
            goto label_799778;
        }
    }
    ctx->pc = 0x79970Cu;
    // 0x79970c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x79970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799710: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x799710u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x799714: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x799714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799718: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x799718u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79971c: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x79971cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x799720: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x799720u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x799724: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x799724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799728: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x799728u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x79972c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x79972cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799730: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x799730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799734: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x799734u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x799738: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x799738u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x79973c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79973cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x799740: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x799740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799744: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x799744u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799748: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x799748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79974c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x79974cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799750: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x799750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x799754: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x799754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799758: 0xc055c5e  jal         func_157178
    ctx->pc = 0x799758u;
    SET_GPR_U32(ctx, 31, 0x799760u);
    ctx->pc = 0x79975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799758u;
    // 0x79975c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157178u, 0x799758u, 0x799760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799760u;
label_799760:
    // 0x799760: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x799760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799764: 0x8ee200f0  lw          $v0, 0xF0($s7)
    ctx->pc = 0x799764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 240)));
    // 0x799768: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x799768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79976c: 0x8ee300f0  lw          $v1, 0xF0($s7)
    ctx->pc = 0x79976cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 240)));
    // 0x799770: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x799770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799774: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x799774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_799778:
    // 0x799778: 0x3c0142ab  lui         $at, 0x42AB
    ctx->pc = 0x799778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17067 << 16));
    // 0x79977c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79977cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x799780: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799784: 0x3c014321  lui         $at, 0x4321
    ctx->pc = 0x799784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17185 << 16));
    // 0x799788: 0x3421b333  ori         $at, $at, 0xB333
    ctx->pc = 0x799788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45875);
    // 0x79978c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79978cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799790: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799794: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799798: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x799798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x79979c: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x79979cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x7997a0: 0xe642000c  swc1        $f2, 0xC($s2)
    ctx->pc = 0x7997a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x7997a4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x7997a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x7997a8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x7997a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x7997ac: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x7997acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7997b0: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x7997b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7997b4: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x7997b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x7997b8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x7997b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x7997bc: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x7997bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7997c0: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x7997c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x7997c4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x7997c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7997c8: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x7997c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7997cc: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x7997ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x7997d0: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x7997d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x7997d4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x7997d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x7997d8: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x7997d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7997dc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x7997dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7997e0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x7997e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7997e4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x7997e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x7997ec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x7997ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997f0: 0xc055a46  jal         func_156918
    ctx->pc = 0x7997F0u;
    SET_GPR_U32(ctx, 31, 0x7997F8u);
    ctx->pc = 0x7997F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997F0u;
    // 0x7997f4: 0x8c4600f0  lw          $a2, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156918u, 0x7997F0u, 0x7997F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997F8u;
label_7997f8:
    // 0x7997f8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7997F8u;
    {
        const bool branch_taken_0x7997f8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7997FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997F8u;
        // 0x7997fc: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997f8) {
            ctx->pc = 0x799810u;
            goto label_799810;
        }
    }
    ctx->pc = 0x799800u;
    // 0x799800: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x799800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x799804: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x799804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799808: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79980c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x79980cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_799810:
    // 0x799810: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x799810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x799814: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x799814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x799818: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x799818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x79981c: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x79981cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x799820: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x799820u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x799824: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x799824u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x799828: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x799828u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79982c: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x79982cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799830: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x799830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799834: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x799834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799838: 0x3e00008  jr          $ra
    ctx->pc = 0x799838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799838u;
        // 0x79983c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799840u;
}
} // namespace gh_r505
