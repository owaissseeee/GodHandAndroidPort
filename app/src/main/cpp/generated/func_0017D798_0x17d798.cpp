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

// Function: func_0017D798
// Address: 0x17d798 - 0x17db40
void func_0017D798_0x17d798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017D798_0x17d798");
#endif

    switch (ctx->pc) {
        case 0x17d7bcu: goto label_17d7bc;
        case 0x17d7ccu: goto label_17d7cc;
        case 0x17d938u: goto label_17d938;
        case 0x17d95cu: goto label_17d95c;
        case 0x17d9a8u: goto label_17d9a8;
        case 0x17d9ccu: goto label_17d9cc;
        case 0x17d9fcu: goto label_17d9fc;
        case 0x17dac0u: goto label_17dac0;
        case 0x17daecu: goto label_17daec;
        default: break;
    }

    ctx->pc = 0x17d798u;

    // 0x17d798: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x17d798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x17d79c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x17d79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x17d7a0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x17d7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x17d7a4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x17d7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x17d7a8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x17d7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x17d7ac: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x17d7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x17d7b0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17d7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17d7b4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x17D7B4u;
    SET_GPR_U32(ctx, 31, 0x17D7BCu);
    ctx->pc = 0x17D7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D7B4u;
    // 0x17d7b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x17D7B4u, 0x17D7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D7BCu;
label_17d7bc:
    // 0x17d7bc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x17d7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x17d7c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17d7c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7c4: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x17D7C4u;
    SET_GPR_U32(ctx, 31, 0x17D7CCu);
    ctx->pc = 0x17D7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D7C4u;
    // 0x17d7c8: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x17D7C4u, 0x17D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D7CCu;
label_17d7cc:
    // 0x17d7cc: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x17d7ccu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x17d7d0: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x17d7d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x17d7d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17d7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17d7d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17d7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d7dc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x17d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x17d7e0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x17d7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17d7e4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x17d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x17d7e8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D7E8u;
    {
        const bool branch_taken_0x17d7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7E8u;
        // 0x17d7ec: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7e8) {
            ctx->pc = 0x17D804u;
            goto label_17d804;
        }
    }
    ctx->pc = 0x17D7F0u;
    // 0x17d7f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d7f4: 0x50620044  beql        $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x17D7F4u;
    {
        const bool branch_taken_0x17d7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17d7f4) {
            ctx->pc = 0x17D7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D7F4u;
            // 0x17d7f8: 0xc6200604  lwc1        $f0, 0x604($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D908u;
            goto label_17d908;
        }
    }
    ctx->pc = 0x17D7FCu;
    // 0x17d7fc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x17D7FCu;
    {
        const bool branch_taken_0x17d7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d7fc) {
            ctx->pc = 0x17D930u;
            goto label_17d930;
        }
    }
    ctx->pc = 0x17D804u;
label_17d804:
    // 0x17d804: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x17d804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17d808: 0x26230640  addiu       $v1, $s1, 0x640
    ctx->pc = 0x17d808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x17d80c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17d80cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d810: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17d810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17d814: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17d814u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d818: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x17d818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x17d81c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x17d81cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x17d820: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x17d820u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17d824: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17d824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17d828: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17d828u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d82c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x17d82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17d830: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x17d830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17d834: 0x13a30006  beq         $sp, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D834u;
    {
        const bool branch_taken_0x17d834 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 3));
        ctx->pc = 0x17D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D834u;
        // 0x17d838: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d834) {
            ctx->pc = 0x17D850u;
            goto label_17d850;
        }
    }
    ctx->pc = 0x17D83Cu;
    // 0x17d83c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x17d83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d840: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x17d840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17d844: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17d844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17d848: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x17d848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17d84c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x17d84cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17d850:
    // 0x17d850: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x17d850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x17d854: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17d854u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d858: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x17d858u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d85c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17d85cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17d860: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17d860u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17d864: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x17d864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x17d868: 0xc6200620  lwc1        $f0, 0x620($s1)
    ctx->pc = 0x17d868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d86c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x17d86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d870: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17d870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d874: 0x0  nop
    ctx->pc = 0x17d874u;
    // NOP
    // 0x17d878: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x17D878u;
    {
        const bool branch_taken_0x17d878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17d878) {
            ctx->pc = 0x17D87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D878u;
            // 0x17d87c: 0xc6200640  lwc1        $f0, 0x640($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D898u;
            goto label_17d898;
        }
    }
    ctx->pc = 0x17D880u;
    // 0x17d880: 0xc6200630  lwc1        $f0, 0x630($s1)
    ctx->pc = 0x17d880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d884: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17d884u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d888: 0x0  nop
    ctx->pc = 0x17d888u;
    // NOP
    // 0x17d88c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x17D88Cu;
    {
        const bool branch_taken_0x17d88c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17d88c) {
            ctx->pc = 0x17D890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D88Cu;
            // 0x17d890: 0xc6200604  lwc1        $f0, 0x604($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D8B0u;
            goto label_17d8b0;
        }
    }
    ctx->pc = 0x17D894u;
    // 0x17d894: 0xc6200640  lwc1        $f0, 0x640($s1)
    ctx->pc = 0x17d894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17d898:
    // 0x17d898: 0xc6210648  lwc1        $f1, 0x648($s1)
    ctx->pc = 0x17d898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d89c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17d89cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17d8a0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x17d8a0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x17d8a4: 0xe6200640  swc1        $f0, 0x640($s1)
    ctx->pc = 0x17d8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1600), bits); }
    // 0x17d8a8: 0xe6210648  swc1        $f1, 0x648($s1)
    ctx->pc = 0x17d8a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1608), bits); }
    // 0x17d8ac: 0xc6200604  lwc1        $f0, 0x604($s1)
    ctx->pc = 0x17d8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17d8b0:
    // 0x17d8b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17d8b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d8b4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x17d8b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x17d8b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17d8b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d8bc: 0x0  nop
    ctx->pc = 0x17d8bcu;
    // NOP
    // 0x17d8c0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x17D8C0u;
    {
        const bool branch_taken_0x17d8c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8C0u;
        // 0x17d8c4: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8c0) {
            ctx->pc = 0x17D930u;
            goto label_17d930;
        }
    }
    ctx->pc = 0x17D8C8u;
    // 0x17d8c8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x17d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x17d8cc: 0xc6220640  lwc1        $f2, 0x640($s1)
    ctx->pc = 0x17d8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17d8d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17d8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d8d4: 0xc6210610  lwc1        $f1, 0x610($s1)
    ctx->pc = 0x17d8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d8d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x17d8d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x17d8dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17d8dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17d8e0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x17d8e0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x17d8e4: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x17d8e4u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x17d8e8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x17d8e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d8ec: 0x0  nop
    ctx->pc = 0x17d8ecu;
    // NOP
    // 0x17d8f0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x17D8F0u;
    {
        const bool branch_taken_0x17d8f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8F0u;
        // 0x17d8f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8f0) {
            ctx->pc = 0x17D930u;
            goto label_17d930;
        }
    }
    ctx->pc = 0x17D8F8u;
    // 0x17d8f8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x17d8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x17d8fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17d8fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d900: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17D900u;
    {
        const bool branch_taken_0x17d900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D900u;
        // 0x17d904: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d900) {
            ctx->pc = 0x17D92Cu;
            goto label_17d92c;
        }
    }
    ctx->pc = 0x17D908u;
label_17d908:
    // 0x17d908: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x17d908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d90c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x17d90cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x17d910: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17d910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d914: 0x0  nop
    ctx->pc = 0x17d914u;
    // NOP
    // 0x17d918: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x17D918u;
    {
        const bool branch_taken_0x17d918 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17D91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D918u;
        // 0x17d91c: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d918) {
            ctx->pc = 0x17D930u;
            goto label_17d930;
        }
    }
    ctx->pc = 0x17D920u;
    // 0x17d920: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x17d920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x17d924: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17d924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d928: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x17d928u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_17d92c:
    // 0x17d92c: 0xe6200604  swc1        $f0, 0x604($s1)
    ctx->pc = 0x17d92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
label_17d930:
    // 0x17d930: 0xc04b3bc  jal         func_12CEF0
    ctx->pc = 0x17D930u;
    SET_GPR_U32(ctx, 31, 0x17D938u);
    ctx->pc = 0x17D934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D930u;
    // 0x17d934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEF0u, 0x17D930u, 0x17D938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D938u;
label_17d938:
    // 0x17d938: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D938u;
    {
        const bool branch_taken_0x17d938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d938) {
            ctx->pc = 0x17D93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D938u;
            // 0x17d93c: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D948u;
            goto label_17d948;
        }
    }
    ctx->pc = 0x17D940u;
    // 0x17d940: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x17D940u;
    {
        const bool branch_taken_0x17d940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D940u;
        // 0x17d944: 0xa2200650  sb          $zero, 0x650($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1616), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d940) {
            ctx->pc = 0x17DA9Cu;
            goto label_17da9c;
        }
    }
    ctx->pc = 0x17D948u;
label_17d948:
    // 0x17d948: 0x3c014073  lui         $at, 0x4073
    ctx->pc = 0x17d948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16499 << 16));
    // 0x17d94c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x17d94cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x17d950: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17d950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17d954: 0xc05f816  jal         func_17E058
    ctx->pc = 0x17D954u;
    SET_GPR_U32(ctx, 31, 0x17D95Cu);
    ctx->pc = 0x17D958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D954u;
    // 0x17d958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E058u, 0x17D954u, 0x17D95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D95Cu;
label_17d95c:
    // 0x17d95c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x17D95Cu;
    {
        const bool branch_taken_0x17d95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d95c) {
            ctx->pc = 0x17D960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D95Cu;
            // 0x17d960: 0x92220650  lbu         $v0, 0x650($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D9ACu;
            goto label_17d9ac;
        }
    }
    ctx->pc = 0x17D964u;
    // 0x17d964: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x17d964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x17d968: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17d968u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d96c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x17d96cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d970: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17d970u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17d974: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17d974u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17d978: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x17d978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x17d97c: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x17d97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x17d980: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17D980u;
    {
        const bool branch_taken_0x17d980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D980u;
        // 0x17d984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d980) {
            ctx->pc = 0x17D9A0u;
            goto label_17d9a0;
        }
    }
    ctx->pc = 0x17D988u;
    // 0x17d988: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17d988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d98c: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x17d98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x17d990: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x17d990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d994: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x17d994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x17d998: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17d998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d99c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x17d99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_17d9a0:
    // 0x17d9a0: 0xc04b37c  jal         func_12CDF0
    ctx->pc = 0x17D9A0u;
    SET_GPR_U32(ctx, 31, 0x17D9A8u);
    ctx->pc = 0x17D9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D9A0u;
    // 0x17d9a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CDF0u, 0x17D9A0u, 0x17D9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D9A8u;
label_17d9a8:
    // 0x17d9a8: 0x92220650  lbu         $v0, 0x650($s1)
    ctx->pc = 0x17d9a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1616)));
label_17d9ac:
    // 0x17d9ac: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x17D9ACu;
    {
        const bool branch_taken_0x17d9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9ACu;
        // 0x17d9b0: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d9ac) {
            ctx->pc = 0x17DAA0u;
            goto label_17daa0;
        }
    }
    ctx->pc = 0x17D9B4u;
    // 0x17d9b4: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x17d9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x17d9b8: 0x3c0140a9  lui         $at, 0x40A9
    ctx->pc = 0x17d9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16553 << 16));
    // 0x17d9bc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x17d9bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x17d9c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17d9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17d9c4: 0xc05f816  jal         func_17E058
    ctx->pc = 0x17D9C4u;
    SET_GPR_U32(ctx, 31, 0x17D9CCu);
    ctx->pc = 0x17D9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D9C4u;
    // 0x17d9c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E058u, 0x17D9C4u, 0x17D9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D9CCu;
label_17d9cc:
    // 0x17d9cc: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x17D9CCu;
    {
        const bool branch_taken_0x17d9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9CCu;
        // 0x17d9d0: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d9cc) {
            ctx->pc = 0x17DA94u;
            goto label_17da94;
        }
    }
    ctx->pc = 0x17D9D4u;
    // 0x17d9d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17d9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17d9d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17d9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d9dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d9e0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x17d9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x17d9e4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x17d9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x17d9e8: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x17d9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x17d9ec: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x17d9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x17d9f0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x17d9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d9f4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x17D9F4u;
    SET_GPR_U32(ctx, 31, 0x17D9FCu);
    ctx->pc = 0x17D9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D9F4u;
    // 0x17d9f8: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x17D9F4u, 0x17D9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D9FCu;
label_17d9fc:
    // 0x17d9fc: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x17d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x17da00: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17da00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17da04: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x17da04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x17da08: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x17da08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17da0c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17da0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17da10: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x17da10u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17da14: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17da14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17da18: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x17da18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17da1c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17da1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17da20: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x17da20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17da24: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17da24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17da28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x17da28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x17da2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17da2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17da30: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x17da30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17da34: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x17da34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17da38: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x17da38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17da3c: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x17da3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17da40: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x17da40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x17da44: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x17da44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x17da48: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x17da48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17da4c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x17da4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17da50: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17da50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17da54: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x17da54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17da58: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x17da58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x17da5c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17da5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17da60: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x17da60u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17da64: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17da64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17da68: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17da68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17da6c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x17da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x17da70: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x17da70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x17da74: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17DA74u;
    {
        const bool branch_taken_0x17da74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17da74) {
            ctx->pc = 0x17DA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DA74u;
            // 0x17da78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DA98u;
            goto label_17da98;
        }
    }
    ctx->pc = 0x17DA7Cu;
    // 0x17da7c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17da7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17da80: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x17da80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x17da84: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x17da84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17da88: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x17da88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x17da8c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17da8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17da90: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x17da90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_17da94:
    // 0x17da94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17da94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17da98:
    // 0x17da98: 0xa2220650  sb          $v0, 0x650($s1)
    ctx->pc = 0x17da98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1616), (uint8_t)GPR_U32(ctx, 2));
label_17da9c:
    // 0x17da9c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x17da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
label_17daa0:
    // 0x17daa0: 0x8c434c58  lw          $v1, 0x4C58($v0)
    ctx->pc = 0x17daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19544)));
    // 0x17daa4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x17daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17daa8: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x17daa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17daac: 0x1204001c  beq         $s0, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x17DAACu;
    {
        const bool branch_taken_0x17daac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x17DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAACu;
        // 0x17dab0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17daac) {
            ctx->pc = 0x17DB20u;
            goto label_17db20;
        }
    }
    ctx->pc = 0x17DAB4u;
    // 0x17dab4: 0x24130421  addiu       $s3, $zero, 0x421
    ctx->pc = 0x17dab4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1057));
    // 0x17dab8: 0x24120100  addiu       $s2, $zero, 0x100
    ctx->pc = 0x17dab8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x17dabc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x17dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17dac0:
    // 0x17dac0: 0x946202fe  lhu         $v0, 0x2FE($v1)
    ctx->pc = 0x17dac0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
    // 0x17dac4: 0x50530012  beql        $v0, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x17DAC4u;
    {
        const bool branch_taken_0x17dac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x17dac4) {
            ctx->pc = 0x17DAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DAC4u;
            // 0x17dac8: 0x8e834c58  lw          $v1, 0x4C58($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 19544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DB10u;
            goto label_17db10;
        }
    }
    ctx->pc = 0x17DACCu;
    // 0x17dacc: 0x50520010  beql        $v0, $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x17DACCu;
    {
        const bool branch_taken_0x17dacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x17dacc) {
            ctx->pc = 0x17DAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DACCu;
            // 0x17dad0: 0x8e834c58  lw          $v1, 0x4C58($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 19544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DB10u;
            goto label_17db10;
        }
    }
    ctx->pc = 0x17DAD4u;
    // 0x17dad4: 0x8c6500f0  lw          $a1, 0xF0($v1)
    ctx->pc = 0x17dad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x17dad8: 0x3c014073  lui         $at, 0x4073
    ctx->pc = 0x17dad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16499 << 16));
    // 0x17dadc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x17dadcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x17dae0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17dae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17dae4: 0xc05f816  jal         func_17E058
    ctx->pc = 0x17DAE4u;
    SET_GPR_U32(ctx, 31, 0x17DAECu);
    ctx->pc = 0x17DAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DAE4u;
    // 0x17dae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E058u, 0x17DAE4u, 0x17DAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DAECu;
label_17daec:
    // 0x17daec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17DAECu;
    {
        const bool branch_taken_0x17daec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAECu;
        // 0x17daf0: 0x8e834c58  lw          $v1, 0x4C58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 19544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17daec) {
            ctx->pc = 0x17DB10u;
            goto label_17db10;
        }
    }
    ctx->pc = 0x17DAF4u;
    // 0x17daf4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x17daf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17daf8: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x17daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x17dafc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17dafcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17db00: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x17db00u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17db04: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x17db04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x17db08: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17db08u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17db0c: 0x8e834c58  lw          $v1, 0x4C58($s4)
    ctx->pc = 0x17db0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 19544)));
label_17db10:
    // 0x17db10: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17db10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17db14: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x17db14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17db18: 0x5602ffe9  bnel        $s0, $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x17DB18u;
    {
        const bool branch_taken_0x17db18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x17db18) {
            ctx->pc = 0x17DB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DB18u;
            // 0x17db1c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dac0;
        }
    }
    ctx->pc = 0x17DB20u;
label_17db20:
    // 0x17db20: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x17db20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17db24: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x17db24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17db28: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x17db28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17db2c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x17db2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17db30: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x17db30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17db34: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17db34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17db38: 0x3e00008  jr          $ra
    ctx->pc = 0x17DB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB38u;
        // 0x17db3c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DB40u;
}
