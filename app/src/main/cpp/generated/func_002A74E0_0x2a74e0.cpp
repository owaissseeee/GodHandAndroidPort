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

// Function: func_002A74E0
// Address: 0x2a74e0 - 0x2a7ca0
void func_002A74E0_0x2a74e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A74E0_0x2a74e0");
#endif

    switch (ctx->pc) {
        case 0x2a75fcu: goto label_2a75fc;
        case 0x2a7620u: goto label_2a7620;
        case 0x2a7738u: goto label_2a7738;
        case 0x2a7748u: goto label_2a7748;
        case 0x2a7770u: goto label_2a7770;
        case 0x2a77f8u: goto label_2a77f8;
        case 0x2a7914u: goto label_2a7914;
        case 0x2a79a0u: goto label_2a79a0;
        case 0x2a79dcu: goto label_2a79dc;
        case 0x2a7ac0u: goto label_2a7ac0;
        case 0x2a7b60u: goto label_2a7b60;
        case 0x2a7ba4u: goto label_2a7ba4;
        case 0x2a7c40u: goto label_2a7c40;
        default: break;
    }

    ctx->pc = 0x2a74e0u;

    // 0x2a74e0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2a74e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2a74e4: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x2a74e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x2a74e8: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x2a74e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x2a74ec: 0x24c7ac90  addiu       $a3, $a2, -0x5370
    ctx->pc = 0x2a74ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945936));
    // 0x2a74f0: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x2a74f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x2a74f4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2a74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a74f8: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x2a74f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x2a74fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a74fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7500: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x2a7500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x2a7504: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2a7504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a7508: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x2a7508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x2a750c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a750cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7510: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x2a7510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x2a7514: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x2a7514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x2a7518: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x2a7518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x2a751c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2a751cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x2a7520: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a7520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2a7524: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x2a7524u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2a7528: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a752c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a752cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a7530: 0xc4e001ac  lwc1        $f0, 0x1AC($a3)
    ctx->pc = 0x2a7530u;
    { uint32_t bits = FAST_READ32(0x5CAE3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7534: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2a7534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2a7538: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2a7538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2a753c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2a753cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2a7540: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2a7540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2a7544: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2a7544u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a7548: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2a7548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a754c: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2a754cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7550: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2a7550u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7554: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2a7554u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2a7558: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2a7558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a755c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2a755cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a7560: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2a7560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a7564: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2a7564u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7568: 0x26020520  addiu       $v0, $s0, 0x520
    ctx->pc = 0x2a7568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x2a756c: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x2a756cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a7570: 0x10550007  beq         $v0, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7570u;
    {
        const bool branch_taken_0x2a7570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2A7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7570u;
        // 0x2a7574: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7570) {
            ctx->pc = 0x2A7590u;
            goto label_2a7590;
        }
    }
    ctx->pc = 0x2A7578u;
    // 0x2a7578: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2a7578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a757c: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2a757cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7580: 0xe6000520  swc1        $f0, 0x520($s0)
    ctx->pc = 0x2a7580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1312), bits); }
    // 0x2a7584: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a7584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a7588: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2a7588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a758c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a758cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2a7590:
    // 0x2a7590: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x2a7590u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2a7594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a7594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7598: 0xa2020530  sb          $v0, 0x530($s0)
    ctx->pc = 0x2a7598u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1328), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a759c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2a759cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a75a0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2a75a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2a75a4: 0xc4e001ac  lwc1        $f0, 0x1AC($a3)
    ctx->pc = 0x2a75a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a75a8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2a75a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2a75ac: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2a75acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2a75b0: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x2a75b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x2a75b4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2a75b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a75b8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2a75b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a75bc: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2a75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a75c0: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2a75c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a75c4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2a75c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a75c8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2a75c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2a75cc: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2a75ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a75d0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2a75d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a75d4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2a75d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a75d8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2a75d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2a75dc: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x2a75dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a75e0: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x2a75e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2a75e4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2a75e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2a75e8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2a75e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a75ec: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2a75ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a75f0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2a75f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a75f4: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2A75F4u;
    SET_GPR_U32(ctx, 31, 0x2A75FCu);
    ctx->pc = 0x2A75F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A75F4u;
    // 0x2a75f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2A75F4u, 0x2A75FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A75FCu;
label_2a75fc:
    // 0x2a75fc: 0x0  nop
    ctx->pc = 0x2a75fcu;
    // NOP
    // 0x2a7600: 0x0  nop
    ctx->pc = 0x2a7600u;
    // NOP
    // 0x2a7604: 0x46000504  c1          0x504
    ctx->pc = 0x2a7604u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2a7608: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x2a7608u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a760c: 0x0  nop
    ctx->pc = 0x2a760cu;
    // NOP
    // 0x2a7610: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7610u;
    {
        const bool branch_taken_0x2a7610 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7610) {
            ctx->pc = 0x2A7624u;
            goto label_2a7624;
        }
    }
    ctx->pc = 0x2A7618u;
    // 0x2a7618: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x2A7618u;
    SET_GPR_U32(ctx, 31, 0x2A7620u);
    ctx->pc = 0x2A761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7618u;
    // 0x2a761c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x2A7618u, 0x2A7620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7620u;
label_2a7620:
    // 0x2a7620: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2a7620u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2a7624:
    // 0x2a7624: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2a7624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2a7628: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a7628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a762c: 0x0  nop
    ctx->pc = 0x2a762cu;
    // NOP
    // 0x2a7630: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a7630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7634: 0x0  nop
    ctx->pc = 0x2a7634u;
    // NOP
    // 0x2a7638: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2A7638u;
    {
        const bool branch_taken_0x2a7638 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7638u;
        // 0x2a763c: 0x24160010  addiu       $s6, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7638) {
            ctx->pc = 0x2A766Cu;
            goto label_2a766c;
        }
    }
    ctx->pc = 0x2A7640u;
    // 0x2a7640: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2a7640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2a7644: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2a7644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2a7648: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a7648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a764c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2a764cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a7650: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a7650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a7654: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a7654u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a7658: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2a7658u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2a765c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2a765cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a7660: 0x28430040  slti        $v1, $v0, 0x40
    ctx->pc = 0x2a7660u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2a7664: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2a7664u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7668: 0x83b00a  movz        $s6, $a0, $v1
    ctx->pc = 0x2a7668u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 4));
label_2a766c:
    // 0x2a766c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2a766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2a7670: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2a7670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7674: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a7674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7678: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a7678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a767c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2a767cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2a7680: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2a7680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2a7684: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a7684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a7688: 0x0  nop
    ctx->pc = 0x2a7688u;
    // NOP
    // 0x2a768c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a768cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7690: 0x0  nop
    ctx->pc = 0x2a7690u;
    // NOP
    // 0x2a7694: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7694u;
    {
        const bool branch_taken_0x2a7694 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7694u;
        // 0x2a7698: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7694) {
            ctx->pc = 0x2A76B4u;
            goto label_2a76b4;
        }
    }
    ctx->pc = 0x2A769Cu;
    // 0x2a769c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2a769cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a76a0: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x2a76a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a76a4: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2a76a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a76a8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x2a76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2a76ac: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2a76acu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a76b0: 0x2b103  sra         $s6, $v0, 4
    ctx->pc = 0x2a76b0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 4));
label_2a76b4:
    // 0x2a76b4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2a76b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2a76b8: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x2a76b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x2a76bc: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x2a76bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747A50u));
    // 0x2a76c0: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A76C0u;
    {
        const bool branch_taken_0x2a76c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A76C0u;
        // 0x2a76c4: 0x24020700  addiu       $v0, $zero, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a76c0) {
            ctx->pc = 0x2A76E8u;
            goto label_2a76e8;
        }
    }
    ctx->pc = 0x2A76C8u;
    // 0x2a76c8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2a76c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a76cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2a76ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a76d0: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x2a76d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a76d4: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2a76d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a76d8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x2a76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2a76dc: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2a76dcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a76e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A76E0u;
    {
        const bool branch_taken_0x2a76e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A76E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A76E0u;
        // 0x2a76e4: 0x2b103  sra         $s6, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a76e0) {
            ctx->pc = 0x2A76FCu;
            goto label_2a76fc;
        }
    }
    ctx->pc = 0x2A76E8u;
label_2a76e8:
    // 0x2a76e8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A76E8u;
    {
        const bool branch_taken_0x2a76e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A76ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A76E8u;
        // 0x2a76ec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a76e8) {
            ctx->pc = 0x2A7700u;
            goto label_2a7700;
        }
    }
    ctx->pc = 0x2A76F0u;
    // 0x2a76f0: 0x1617c2  srl         $v0, $s6, 31
    ctx->pc = 0x2a76f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
    // 0x2a76f4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2a76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2a76f8: 0x2b043  sra         $s6, $v0, 1
    ctx->pc = 0x2a76f8u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 1));
label_2a76fc:
    // 0x2a76fc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2a76fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a7700:
    // 0x2a7700: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a7700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a7704: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2a7704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2a7708: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a7708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a770c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a770cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a7710: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2a7710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a7714: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2a7714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2a7718: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a771c: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x2a771cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x2a7720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a7720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7724: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2a7724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a7728: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x2a7728u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2a772c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a772cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7730: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2A7730u;
    SET_GPR_U32(ctx, 31, 0x2A7738u);
    ctx->pc = 0x2A7734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7730u;
    // 0x2a7734: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2A7730u, 0x2A7738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7738u;
label_2a7738:
    // 0x2a7738: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7738u;
    {
        const bool branch_taken_0x2a7738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7738u;
        // 0x2a773c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7738) {
            ctx->pc = 0x2A7758u;
            goto label_2a7758;
        }
    }
    ctx->pc = 0x2A7740u;
    // 0x2a7740: 0xc0a9f34  jal         func_2A7CD0
    ctx->pc = 0x2A7740u;
    SET_GPR_U32(ctx, 31, 0x2A7748u);
    ctx->pc = 0x2A7744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7740u;
    // 0x2a7744: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7CD0u, 0x2A7740u, 0x2A7748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7748u;
label_2a7748:
    // 0x2a7748: 0x2652ac90  addiu       $s2, $s2, -0x5370
    ctx->pc = 0x2a7748u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945936));
    // 0x2a774c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2a774cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7750: 0x16e00004  bnez        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7750u;
    {
        const bool branch_taken_0x2a7750 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7750u;
        // 0x2a7754: 0x2653018c  addiu       $s3, $s2, 0x18C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 396));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7750) {
            ctx->pc = 0x2A7764u;
            goto label_2a7764;
        }
    }
    ctx->pc = 0x2A7758u;
label_2a7758:
    // 0x2a7758: 0xa2110530  sb          $s1, 0x530($s0)
    ctx->pc = 0x2a7758u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1328), (uint8_t)GPR_U32(ctx, 17));
    // 0x2a775c: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x2A775Cu;
    {
        const bool branch_taken_0x2a775c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A775Cu;
        // 0x2a7760: 0xe6140510  swc1        $f20, 0x510($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a775c) {
            ctx->pc = 0x2A7C6Cu;
            goto label_2a7c6c;
        }
    }
    ctx->pc = 0x2A7764u;
label_2a7764:
    // 0x2a7764: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a7764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7768: 0xc0a9f34  jal         func_2A7CD0
    ctx->pc = 0x2A7768u;
    SET_GPR_U32(ctx, 31, 0x2A7770u);
    ctx->pc = 0x2A776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7768u;
    // 0x2a776c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7CD0u, 0x2A7768u, 0x2A7770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7770u;
label_2a7770:
    // 0x2a7770: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a7770u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7774: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7774u;
    {
        const bool branch_taken_0x2a7774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7774u;
        // 0x2a7778: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7774) {
            ctx->pc = 0x2A7798u;
            goto label_2a7798;
        }
    }
    ctx->pc = 0x2A777Cu;
    // 0x2a777c: 0x8e42019c  lw          $v0, 0x19C($s2)
    ctx->pc = 0x2a777cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
    // 0x2a7780: 0x5c400002  bgtzl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A7780u;
    {
        const bool branch_taken_0x2a7780 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x2a7780) {
            ctx->pc = 0x2A7784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7780u;
            // 0x2a7784: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A778Cu;
            goto label_2a778c;
        }
    }
    ctx->pc = 0x2A7788u;
    // 0x2a7788: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a7788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a778c:
    // 0x2a778c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2a778cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a7790: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2a7790u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x2a7794: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x2a7794u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2a7798:
    // 0x2a7798: 0x1060008d  beqz        $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x2A7798u;
    {
        const bool branch_taken_0x2a7798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7798u;
        // 0x2a779c: 0x26110520  addiu       $s1, $s0, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7798) {
            ctx->pc = 0x2A79D0u;
            goto label_2a79d0;
        }
    }
    ctx->pc = 0x2A77A0u;
    // 0x2a77a0: 0x52230008  beql        $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A77A0u;
    {
        const bool branch_taken_0x2a77a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a77a0) {
            ctx->pc = 0x2A77A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A77A0u;
            // 0x2a77a4: 0xe6140510  swc1        $f20, 0x510($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1296), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A77C4u;
            goto label_2a77c4;
        }
    }
    ctx->pc = 0x2A77A8u;
    // 0x2a77a8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a77a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a77ac: 0xe6000520  swc1        $f0, 0x520($s0)
    ctx->pc = 0x2a77acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1312), bits); }
    // 0x2a77b0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2a77b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a77b4: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2a77b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2a77b8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a77b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a77bc: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2a77bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2a77c0: 0xe6140510  swc1        $f20, 0x510($s0)
    ctx->pc = 0x2a77c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1296), bits); }
label_2a77c4:
    // 0x2a77c4: 0xa2000530  sb          $zero, 0x530($s0)
    ctx->pc = 0x2a77c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1328), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a77c8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2a77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2a77cc: 0x5c400002  bgtzl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A77CCu;
    {
        const bool branch_taken_0x2a77cc = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x2a77cc) {
            ctx->pc = 0x2A77D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A77CCu;
            // 0x2a77d0: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A77D8u;
            goto label_2a77d8;
        }
    }
    ctx->pc = 0x2A77D4u;
    // 0x2a77d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a77d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a77d8:
    // 0x2a77d8: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x2a77d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2a77dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a77dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a77e0: 0x2a143  sra         $s4, $v0, 5
    ctx->pc = 0x2a77e0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 5));
    // 0x2a77e4: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2a77e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a77e8: 0x260504d0  addiu       $a1, $s0, 0x4D0
    ctx->pc = 0x2a77e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1232));
    // 0x2a77ec: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2a77ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a77f0: 0xc0c6fa2  jal         func_31BE88
    ctx->pc = 0x2A77F0u;
    SET_GPR_U32(ctx, 31, 0x2A77F8u);
    ctx->pc = 0x2A77F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A77F0u;
    // 0x2a77f4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BE88u, 0x2A77F0u, 0x2A77F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A77F8u;
label_2a77f8:
    // 0x2a77f8: 0x8e0404d0  lw          $a0, 0x4D0($s0)
    ctx->pc = 0x2a77f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1232)));
    // 0x2a77fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a77fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7800: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7800u;
    {
        const bool branch_taken_0x2a7800 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2A7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7800u;
        // 0x2a7804: 0xe6000510  swc1        $f0, 0x510($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7800) {
            ctx->pc = 0x2A7810u;
            goto label_2a7810;
        }
    }
    ctx->pc = 0x2A7808u;
    // 0x2a7808: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2a7808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2a780c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2a780cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2a7810:
    // 0x2a7810: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7814: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7814u;
    {
        const bool branch_taken_0x2a7814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7814u;
        // 0x2a7818: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7814) {
            ctx->pc = 0x2A7828u;
            goto label_2a7828;
        }
    }
    ctx->pc = 0x2A781Cu;
    // 0x2a781c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x2a781cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2a7820: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2a7820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2a7824: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a7824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a7828:
    // 0x2a7828: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7828u;
    {
        const bool branch_taken_0x2a7828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7828) {
            ctx->pc = 0x2A783Cu;
            goto label_2a783c;
        }
    }
    ctx->pc = 0x2A7830u;
    // 0x2a7830: 0x8e0204d0  lw          $v0, 0x4D0($s0)
    ctx->pc = 0x2a7830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1232)));
    // 0x2a7834: 0x1454000b  bne         $v0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x2A7834u;
    {
        const bool branch_taken_0x2a7834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2a7834) {
            ctx->pc = 0x2A7864u;
            goto label_2a7864;
        }
    }
    ctx->pc = 0x2A783Cu;
label_2a783c:
    // 0x2a783c: 0x12350006  beq         $s1, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A783Cu;
    {
        const bool branch_taken_0x2a783c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x2A7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A783Cu;
        // 0x2a7840: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a783c) {
            ctx->pc = 0x2A7858u;
            goto label_2a7858;
        }
    }
    ctx->pc = 0x2A7844u;
    // 0x2a7844: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2a7844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7848: 0xe6000520  swc1        $f0, 0x520($s0)
    ctx->pc = 0x2a7848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1312), bits); }
    // 0x2a784c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2a784cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2a7850: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x2a7850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7854: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2a7854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2a7858:
    // 0x2a7858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a7858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a785c: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x2A785Cu;
    {
        const bool branch_taken_0x2a785c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A785Cu;
        // 0x2a7860: 0xa2020530  sb          $v0, 0x530($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1328), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a785c) {
            ctx->pc = 0x2A7C6Cu;
            goto label_2a7c6c;
        }
    }
    ctx->pc = 0x2A7864u;
label_2a7864:
    // 0x2a7864: 0x52230008  beql        $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7864u;
    {
        const bool branch_taken_0x2a7864 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a7864) {
            ctx->pc = 0x2A7868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7864u;
            // 0x2a7868: 0x8e0204d0  lw          $v0, 0x4D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7888u;
            goto label_2a7888;
        }
    }
    ctx->pc = 0x2A786Cu;
    // 0x2a786c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7870: 0xe6000520  swc1        $f0, 0x520($s0)
    ctx->pc = 0x2a7870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1312), bits); }
    // 0x2a7874: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2a7874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7878: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2a7878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2a787c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a787cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7880: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2a7880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2a7884: 0x8e0204d0  lw          $v0, 0x4D0($s0)
    ctx->pc = 0x2a7884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1232)));
label_2a7888:
    // 0x2a7888: 0x105400f8  beq         $v0, $s4, . + 4 + (0xF8 << 2)
    ctx->pc = 0x2A7888u;
    {
        const bool branch_taken_0x2a7888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2A788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7888u;
        // 0x2a788c: 0xa2000530  sb          $zero, 0x530($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1328), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7888) {
            ctx->pc = 0x2A7C6Cu;
            goto label_2a7c6c;
        }
    }
    ctx->pc = 0x2A7890u;
    // 0x2a7890: 0x8e0204d4  lw          $v0, 0x4D4($s0)
    ctx->pc = 0x2a7890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
    // 0x2a7894: 0x10540021  beq         $v0, $s4, . + 4 + (0x21 << 2)
    ctx->pc = 0x2A7894u;
    {
        const bool branch_taken_0x2a7894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2A7898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7894u;
        // 0x2a7898: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7894) {
            ctx->pc = 0x2A791Cu;
            goto label_2a791c;
        }
    }
    ctx->pc = 0x2A789Cu;
    // 0x2a789c: 0x8e0404d8  lw          $a0, 0x4D8($s0)
    ctx->pc = 0x2a789cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1240)));
    // 0x2a78a0: 0x5082001f  beql        $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2A78A0u;
    {
        const bool branch_taken_0x2a78a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a78a0) {
            ctx->pc = 0x2A78A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A78A0u;
            // 0x2a78a4: 0x8e0204d0  lw          $v0, 0x4D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7920u;
            goto label_2a7920;
        }
    }
    ctx->pc = 0x2A78A8u;
    // 0x2a78a8: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A78A8u;
    {
        const bool branch_taken_0x2a78a8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2A78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A78A8u;
        // 0x2a78ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a78a8) {
            ctx->pc = 0x2A78B8u;
            goto label_2a78b8;
        }
    }
    ctx->pc = 0x2A78B0u;
    // 0x2a78b0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2a78b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2a78b4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2a78b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2a78b8:
    // 0x2a78b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a78b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a78bc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A78BCu;
    {
        const bool branch_taken_0x2a78bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a78bc) {
            ctx->pc = 0x2A78C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A78BCu;
            // 0x2a78c0: 0x8e63000c  lw          $v1, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A78CCu;
            goto label_2a78cc;
        }
    }
    ctx->pc = 0x2A78C4u;
    // 0x2a78c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A78C4u;
    {
        const bool branch_taken_0x2a78c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A78C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A78C4u;
        // 0x2a78c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a78c4) {
            ctx->pc = 0x2A78D4u;
            goto label_2a78d4;
        }
    }
    ctx->pc = 0x2A78CCu;
label_2a78cc:
    // 0x2a78cc: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2a78ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2a78d0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2a78d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a78d4:
    // 0x2a78d4: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A78D4u;
    {
        const bool branch_taken_0x2a78d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A78D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A78D4u;
        // 0x2a78d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a78d4) {
            ctx->pc = 0x2A791Cu;
            goto label_2a791c;
        }
    }
    ctx->pc = 0x2A78DCu;
    // 0x2a78dc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a78dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a78e0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2a78e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2a78e4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a78e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78e8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2a78e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2a78ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a78ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78f0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a78f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a78f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a78f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78f8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2a78f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2a78fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a78fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7900: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2a7900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a7904: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x2a7904u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2a7908: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7908u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a790c: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2A790Cu;
    SET_GPR_U32(ctx, 31, 0x2A7914u);
    ctx->pc = 0x2A7910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A790Cu;
    // 0x2a7910: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2A790Cu, 0x2A7914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7914u;
label_2a7914:
    // 0x2a7914: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2A7914u;
    {
        const bool branch_taken_0x2a7914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7914) {
            ctx->pc = 0x2A79A8u;
            goto label_2a79a8;
        }
    }
    ctx->pc = 0x2A791Cu;
label_2a791c:
    // 0x2a791c: 0x8e0204d0  lw          $v0, 0x4D0($s0)
    ctx->pc = 0x2a791cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1232)));
label_2a7920:
    // 0x2a7920: 0x105400d2  beq         $v0, $s4, . + 4 + (0xD2 << 2)
    ctx->pc = 0x2A7920u;
    {
        const bool branch_taken_0x2a7920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2A7924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7920u;
        // 0x2a7924: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7920) {
            ctx->pc = 0x2A7C6Cu;
            goto label_2a7c6c;
        }
    }
    ctx->pc = 0x2A7928u;
    // 0x2a7928: 0x8e0604d4  lw          $a2, 0x4D4($s0)
    ctx->pc = 0x2a7928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
    // 0x2a792c: 0x50c200d0  beql        $a2, $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x2A792Cu;
    {
        const bool branch_taken_0x2a792c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a792c) {
            ctx->pc = 0x2A7930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A792Cu;
            // 0x2a7930: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7C70u;
            goto label_2a7c70;
        }
    }
    ctx->pc = 0x2A7934u;
    // 0x2a7934: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7934u;
    {
        const bool branch_taken_0x2a7934 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2A7938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7934u;
        // 0x2a7938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7934) {
            ctx->pc = 0x2A7944u;
            goto label_2a7944;
        }
    }
    ctx->pc = 0x2A793Cu;
    // 0x2a793c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2a793cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2a7940: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2a7940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2a7944:
    // 0x2a7944: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7948: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7948u;
    {
        const bool branch_taken_0x2a7948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7948) {
            ctx->pc = 0x2A794Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7948u;
            // 0x2a794c: 0x8e63000c  lw          $v1, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7958u;
            goto label_2a7958;
        }
    }
    ctx->pc = 0x2A7950u;
    // 0x2a7950: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7950u;
    {
        const bool branch_taken_0x2a7950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7950u;
        // 0x2a7954: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7950) {
            ctx->pc = 0x2A7960u;
            goto label_2a7960;
        }
    }
    ctx->pc = 0x2A7958u;
label_2a7958:
    // 0x2a7958: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x2a7958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2a795c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2a795cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a7960:
    // 0x2a7960: 0x124000c2  beqz        $s2, . + 4 + (0xC2 << 2)
    ctx->pc = 0x2A7960u;
    {
        const bool branch_taken_0x2a7960 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7960u;
        // 0x2a7964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7960) {
            ctx->pc = 0x2A7C6Cu;
            goto label_2a7c6c;
        }
    }
    ctx->pc = 0x2A7968u;
    // 0x2a7968: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a7968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a796c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2a796cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2a7970: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a7970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7974: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a7974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a7978: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a797c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2a797cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2a7980: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a7980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7984: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a7984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a7988: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2a7988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a798c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2a798cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2a7990: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x2a7990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2a7994: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7994u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7998: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2A7998u;
    SET_GPR_U32(ctx, 31, 0x2A79A0u);
    ctx->pc = 0x2A799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7998u;
    // 0x2a799c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2A7998u, 0x2A79A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A79A0u;
label_2a79a0:
    // 0x2a79a0: 0x544000b3  bnel        $v0, $zero, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2A79A0u;
    {
        const bool branch_taken_0x2a79a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a79a0) {
            ctx->pc = 0x2A79A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A79A0u;
            // 0x2a79a4: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7C70u;
            goto label_2a7c70;
        }
    }
    ctx->pc = 0x2A79A8u;
label_2a79a8:
    // 0x2a79a8: 0x523200b0  beql        $s1, $s2, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2A79A8u;
    {
        const bool branch_taken_0x2a79a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        if (branch_taken_0x2a79a8) {
            ctx->pc = 0x2A79ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A79A8u;
            // 0x2a79ac: 0xa2000530  sb          $zero, 0x530($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1328), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7C6Cu;
            goto label_2a7c6c;
        }
    }
    ctx->pc = 0x2A79B0u;
    // 0x2a79b0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2a79b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a79b4: 0xe6000520  swc1        $f0, 0x520($s0)
    ctx->pc = 0x2a79b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1312), bits); }
    // 0x2a79b8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2a79b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a79bc: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2a79bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2a79c0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2a79c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a79c4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2a79c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2a79c8: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x2A79C8u;
    {
        const bool branch_taken_0x2a79c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A79CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A79C8u;
        // 0x2a79cc: 0xa2000530  sb          $zero, 0x530($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1328), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a79c8) {
            ctx->pc = 0x2A7C6Cu;
            goto label_2a7c6c;
        }
    }
    ctx->pc = 0x2A79D0u;
label_2a79d0:
    // 0x2a79d0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a79d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a79d4: 0xc0aa00e  jal         func_2A8038
    ctx->pc = 0x2A79D4u;
    SET_GPR_U32(ctx, 31, 0x2A79DCu);
    ctx->pc = 0x2A79D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A79D4u;
    // 0x2a79d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8038u, 0x2A79D4u, 0x2A79DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A79DCu;
label_2a79dc:
    // 0x2a79dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a79dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a79e0: 0x522000a3  beql        $s1, $zero, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2A79E0u;
    {
        const bool branch_taken_0x2a79e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a79e0) {
            ctx->pc = 0x2A79E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A79E0u;
            // 0x2a79e4: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7C70u;
            goto label_2a7c70;
        }
    }
    ctx->pc = 0x2A79E8u;
    // 0x2a79e8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2a79e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2a79ec: 0x5c400002  bgtzl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A79ECu;
    {
        const bool branch_taken_0x2a79ec = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x2a79ec) {
            ctx->pc = 0x2A79F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A79ECu;
            // 0x2a79f0: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A79F8u;
            goto label_2a79f8;
        }
    }
    ctx->pc = 0x2A79F4u;
    // 0x2a79f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a79f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a79f8:
    // 0x2a79f8: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x2a79f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x2a79fc: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x2a79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a7a00: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x2a7a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x2a7a04: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a7a04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a7a08: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2a7a08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2a7a0c: 0xa60205a4  sh          $v0, 0x5A4($s0)
    ctx->pc = 0x2a7a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1444), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a7a10: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x2a7a10u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a7a14: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x2a7a14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2a7a18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7A18u;
    {
        const bool branch_taken_0x2a7a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A18u;
        // 0x2a7a1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7a18) {
            ctx->pc = 0x2A7A2Cu;
            goto label_2a7a2c;
        }
    }
    ctx->pc = 0x2A7A20u;
    // 0x2a7a20: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2a7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2a7a24: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2a7a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a7a28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a7a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7a2c:
    // 0x2a7a2c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2a7a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a7a30: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7A30u;
    {
        const bool branch_taken_0x2a7a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7a30) {
            ctx->pc = 0x2A7A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7A30u;
            // 0x2a7a34: 0x8e63000c  lw          $v1, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7A40u;
            goto label_2a7a40;
        }
    }
    ctx->pc = 0x2A7A38u;
    // 0x2a7a38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7A38u;
    {
        const bool branch_taken_0x2a7a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A38u;
        // 0x2a7a3c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7a38) {
            ctx->pc = 0x2A7A48u;
            goto label_2a7a48;
        }
    }
    ctx->pc = 0x2A7A40u;
label_2a7a40:
    // 0x2a7a40: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2a7a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2a7a44: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x2a7a44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a7a48:
    // 0x2a7a48: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x2a7a48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2a7a4c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x2a7a4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2a7a50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7A50u;
    {
        const bool branch_taken_0x2a7a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A50u;
        // 0x2a7a54: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7a50) {
            ctx->pc = 0x2A7A64u;
            goto label_2a7a64;
        }
    }
    ctx->pc = 0x2A7A58u;
    // 0x2a7a58: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2a7a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2a7a5c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2a7a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a7a60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a7a60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7a64:
    // 0x2a7a64: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2a7a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a7a68: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7A68u;
    {
        const bool branch_taken_0x2a7a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7a68) {
            ctx->pc = 0x2A7A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7A68u;
            // 0x2a7a6c: 0x8e63000c  lw          $v1, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7A78u;
            goto label_2a7a78;
        }
    }
    ctx->pc = 0x2A7A70u;
    // 0x2a7a70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7A70u;
    {
        const bool branch_taken_0x2a7a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A70u;
        // 0x2a7a74: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7a70) {
            ctx->pc = 0x2A7A80u;
            goto label_2a7a80;
        }
    }
    ctx->pc = 0x2A7A78u;
label_2a7a78:
    // 0x2a7a78: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2a7a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2a7a7c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2a7a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a7a80:
    // 0x2a7a80: 0x5280007b  beql        $s4, $zero, . + 4 + (0x7B << 2)
    ctx->pc = 0x2A7A80u;
    {
        const bool branch_taken_0x2a7a80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7a80) {
            ctx->pc = 0x2A7A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7A80u;
            // 0x2a7a84: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7C70u;
            goto label_2a7c70;
        }
    }
    ctx->pc = 0x2A7A88u;
    // 0x2a7a88: 0x12400078  beqz        $s2, . + 4 + (0x78 << 2)
    ctx->pc = 0x2A7A88u;
    {
        const bool branch_taken_0x2a7a88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A88u;
        // 0x2a7a8c: 0x260504d0  addiu       $a1, $s0, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7a88) {
            ctx->pc = 0x2A7C6Cu;
            goto label_2a7c6c;
        }
    }
    ctx->pc = 0x2A7A90u;
    // 0x2a7a90: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2a7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2a7a94: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7A94u;
    {
        const bool branch_taken_0x2a7a94 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2A7A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A94u;
        // 0x2a7a98: 0x96270000  lhu         $a3, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7a94) {
            ctx->pc = 0x2A7AA4u;
            goto label_2a7aa4;
        }
    }
    ctx->pc = 0x2A7A9Cu;
    // 0x2a7a9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A7A9Cu;
    {
        const bool branch_taken_0x2a7a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A9Cu;
        // 0x2a7aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7a9c) {
            ctx->pc = 0x2A7AA8u;
            goto label_2a7aa8;
        }
    }
    ctx->pc = 0x2A7AA4u;
label_2a7aa4:
    // 0x2a7aa4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2a7aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2a7aa8:
    // 0x2a7aa8: 0x2e24023  subu        $t0, $s7, $v0
    ctx->pc = 0x2a7aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2a7aac: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2a7aacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ab0: 0x84143  sra         $t0, $t0, 5
    ctx->pc = 0x2a7ab0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 5));
    // 0x2a7ab4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a7ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ab8: 0xc0c6fa2  jal         func_31BE88
    ctx->pc = 0x2A7AB8u;
    SET_GPR_U32(ctx, 31, 0x2A7AC0u);
    ctx->pc = 0x2A7ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7AB8u;
    // 0x2a7abc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BE88u, 0x2A7AB8u, 0x2A7AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7AC0u;
label_2a7ac0:
    // 0x2a7ac0: 0xe6000510  swc1        $f0, 0x510($s0)
    ctx->pc = 0x2a7ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1296), bits); }
    // 0x2a7ac4: 0x8e0304d4  lw          $v1, 0x4D4($s0)
    ctx->pc = 0x2a7ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
    // 0x2a7ac8: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x2a7ac8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2a7acc: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A7ACCu;
    {
        const bool branch_taken_0x2a7acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A7AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7ACCu;
        // 0x2a7ad0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7acc) {
            ctx->pc = 0x2A7B50u;
            goto label_2a7b50;
        }
    }
    ctx->pc = 0x2A7AD4u;
    // 0x2a7ad4: 0x6a0204db  ldl         $v0, 0x4DB($s0)
    ctx->pc = 0x2a7ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a7ad8: 0x6e0204d4  ldr         $v0, 0x4D4($s0)
    ctx->pc = 0x2a7ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a7adc: 0x6a0304e3  ldl         $v1, 0x4E3($s0)
    ctx->pc = 0x2a7adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1251); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a7ae0: 0x6e0304dc  ldr         $v1, 0x4DC($s0)
    ctx->pc = 0x2a7ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1244); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a7ae4: 0x6a0404eb  ldl         $a0, 0x4EB($s0)
    ctx->pc = 0x2a7ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1259); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a7ae8: 0x6e0404e4  ldr         $a0, 0x4E4($s0)
    ctx->pc = 0x2a7ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1252); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a7aec: 0x6a0504f3  ldl         $a1, 0x4F3($s0)
    ctx->pc = 0x2a7aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1267); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2a7af0: 0x6e0504ec  ldr         $a1, 0x4EC($s0)
    ctx->pc = 0x2a7af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2a7af4: 0xb20204d7  sdl         $v0, 0x4D7($s0)
    ctx->pc = 0x2a7af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7af8: 0xb60204d0  sdr         $v0, 0x4D0($s0)
    ctx->pc = 0x2a7af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7afc: 0xb20304df  sdl         $v1, 0x4DF($s0)
    ctx->pc = 0x2a7afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7b00: 0xb60304d8  sdr         $v1, 0x4D8($s0)
    ctx->pc = 0x2a7b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7b04: 0xb20404e7  sdl         $a0, 0x4E7($s0)
    ctx->pc = 0x2a7b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7b08: 0xb60404e0  sdr         $a0, 0x4E0($s0)
    ctx->pc = 0x2a7b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7b0c: 0xb20504ef  sdl         $a1, 0x4EF($s0)
    ctx->pc = 0x2a7b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7b10: 0xb60504e8  sdr         $a1, 0x4E8($s0)
    ctx->pc = 0x2a7b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7b14: 0x6a0204fb  ldl         $v0, 0x4FB($s0)
    ctx->pc = 0x2a7b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a7b18: 0x6e0204f4  ldr         $v0, 0x4F4($s0)
    ctx->pc = 0x2a7b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a7b1c: 0x6a030503  ldl         $v1, 0x503($s0)
    ctx->pc = 0x2a7b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1283); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a7b20: 0x6e0304fc  ldr         $v1, 0x4FC($s0)
    ctx->pc = 0x2a7b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1276); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a7b24: 0x6a04050b  ldl         $a0, 0x50B($s0)
    ctx->pc = 0x2a7b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a7b28: 0x6e040504  ldr         $a0, 0x504($s0)
    ctx->pc = 0x2a7b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a7b2c: 0x8e05050c  lw          $a1, 0x50C($s0)
    ctx->pc = 0x2a7b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1292)));
    // 0x2a7b30: 0xb20204f7  sdl         $v0, 0x4F7($s0)
    ctx->pc = 0x2a7b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7b34: 0xb60204f0  sdr         $v0, 0x4F0($s0)
    ctx->pc = 0x2a7b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7b38: 0xb20304ff  sdl         $v1, 0x4FF($s0)
    ctx->pc = 0x2a7b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7b3c: 0xb60304f8  sdr         $v1, 0x4F8($s0)
    ctx->pc = 0x2a7b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7b40: 0xb2040507  sdl         $a0, 0x507($s0)
    ctx->pc = 0x2a7b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7b44: 0xb6040500  sdr         $a0, 0x500($s0)
    ctx->pc = 0x2a7b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7b48: 0xae050508  sw          $a1, 0x508($s0)
    ctx->pc = 0x2a7b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1288), GPR_U32(ctx, 5));
    // 0x2a7b4c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a7b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a7b50:
    // 0x2a7b50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a7b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a7b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b58: 0xc055a68  jal         func_1569A0
    ctx->pc = 0x2A7B58u;
    SET_GPR_U32(ctx, 31, 0x2A7B60u);
    ctx->pc = 0x2A7B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7B58u;
    // 0x2a7b5c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1569A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569A0u, 0x2A7B58u, 0x2A7B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7B60u;
label_2a7b60:
    // 0x2a7b60: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2a7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a7b64: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x2a7b64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7b68: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2a7b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a7b6c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2a7b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a7b70: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2a7b70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a7b74: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2a7b74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a7b78: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2a7b78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2a7b7c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2a7b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a7b80: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2a7b80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7b84: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2a7b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2a7b88: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a7b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a7b8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a7b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b90: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a7b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b94: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2a7b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b98: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a7b98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7b9c: 0xc055afa  jal         func_156BE8
    ctx->pc = 0x2A7B9Cu;
    SET_GPR_U32(ctx, 31, 0x2A7BA4u);
    ctx->pc = 0x2A7BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7B9Cu;
    // 0x2a7ba0: 0x26110520  addiu       $s1, $s0, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156BE8u, 0x2A7B9Cu, 0x2A7BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7BA4u;
label_2a7ba4:
    // 0x2a7ba4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a7ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a7ba8: 0x12240006  beq         $s1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A7BA8u;
    {
        const bool branch_taken_0x2a7ba8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x2A7BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BA8u;
        // 0x2a7bac: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ba8) {
            ctx->pc = 0x2A7BC4u;
            goto label_2a7bc4;
        }
    }
    ctx->pc = 0x2A7BB0u;
    // 0x2a7bb0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2a7bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7bb4: 0xe6000520  swc1        $f0, 0x520($s0)
    ctx->pc = 0x2a7bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1312), bits); }
    // 0x2a7bb8: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2a7bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2a7bbc: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2a7bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7bc0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2a7bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2a7bc4:
    // 0x2a7bc4: 0x8e0604d0  lw          $a2, 0x4D0($s0)
    ctx->pc = 0x2a7bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1232)));
    // 0x2a7bc8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a7bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a7bcc: 0x10c20027  beq         $a2, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2A7BCCu;
    {
        const bool branch_taken_0x2a7bcc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A7BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BCCu;
        // 0x2a7bd0: 0xa2000530  sb          $zero, 0x530($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1328), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7bcc) {
            ctx->pc = 0x2A7C6Cu;
            goto label_2a7c6c;
        }
    }
    ctx->pc = 0x2A7BD4u;
    // 0x2a7bd4: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7BD4u;
    {
        const bool branch_taken_0x2a7bd4 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2A7BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BD4u;
        // 0x2a7bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7bd4) {
            ctx->pc = 0x2A7BE4u;
            goto label_2a7be4;
        }
    }
    ctx->pc = 0x2A7BDCu;
    // 0x2a7bdc: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2a7bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2a7be0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2a7be0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2a7be4:
    // 0x2a7be4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7be8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7BE8u;
    {
        const bool branch_taken_0x2a7be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7be8) {
            ctx->pc = 0x2A7BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7BE8u;
            // 0x2a7bec: 0x8e63000c  lw          $v1, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7BF8u;
            goto label_2a7bf8;
        }
    }
    ctx->pc = 0x2A7BF0u;
    // 0x2a7bf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7BF0u;
    {
        const bool branch_taken_0x2a7bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BF0u;
        // 0x2a7bf4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7bf0) {
            ctx->pc = 0x2A7C00u;
            goto label_2a7c00;
        }
    }
    ctx->pc = 0x2A7BF8u;
label_2a7bf8:
    // 0x2a7bf8: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x2a7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2a7bfc: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2a7bfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a7c00:
    // 0x2a7c00: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A7C00u;
    {
        const bool branch_taken_0x2a7c00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C00u;
        // 0x2a7c04: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7c00) {
            ctx->pc = 0x2A7C6Cu;
            goto label_2a7c6c;
        }
    }
    ctx->pc = 0x2A7C08u;
    // 0x2a7c08: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a7c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c0c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a7c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a7c10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a7c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c14: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2a7c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2a7c18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c1c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a7c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a7c20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a7c20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c24: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2a7c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2a7c28: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2a7c28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a7c2c: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x2a7c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x2a7c30: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x2a7c30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2a7c34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7c34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c38: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2A7C38u;
    SET_GPR_U32(ctx, 31, 0x2A7C40u);
    ctx->pc = 0x2A7C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7C38u;
    // 0x2a7c3c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2A7C38u, 0x2A7C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C40u;
label_2a7c40:
    // 0x2a7c40: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2A7C40u;
    {
        const bool branch_taken_0x2a7c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7c40) {
            ctx->pc = 0x2A7C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7C40u;
            // 0x2a7c44: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7C70u;
            goto label_2a7c70;
        }
    }
    ctx->pc = 0x2A7C48u;
    // 0x2a7c48: 0x52320008  beql        $s1, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7C48u;
    {
        const bool branch_taken_0x2a7c48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        if (branch_taken_0x2a7c48) {
            ctx->pc = 0x2A7C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7C48u;
            // 0x2a7c4c: 0xa2130530  sb          $s3, 0x530($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1328), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7C6Cu;
            goto label_2a7c6c;
        }
    }
    ctx->pc = 0x2A7C50u;
    // 0x2a7c50: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2a7c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7c54: 0xe6000520  swc1        $f0, 0x520($s0)
    ctx->pc = 0x2a7c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1312), bits); }
    // 0x2a7c58: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2a7c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7c5c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2a7c5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2a7c60: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2a7c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7c64: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2a7c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2a7c68: 0xa2130530  sb          $s3, 0x530($s0)
    ctx->pc = 0x2a7c68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1328), (uint8_t)GPR_U32(ctx, 19));
label_2a7c6c:
    // 0x2a7c6c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2a7c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2a7c70:
    // 0x2a7c70: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2a7c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a7c74: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2a7c74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a7c78: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2a7c78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a7c7c: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x2a7c7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a7c80: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x2a7c80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a7c84: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x2a7c84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a7c88: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x2a7c88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a7c8c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2a7c8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a7c90: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a7c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a7c94: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2a7c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a7c98: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C98u;
        // 0x2a7c9c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7CA0u;
}
