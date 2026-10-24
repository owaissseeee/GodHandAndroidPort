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

// Function: func_0028F5B0
// Address: 0x28f5b0 - 0x28fb08
void func_0028F5B0_0x28f5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028F5B0_0x28f5b0");
#endif

    switch (ctx->pc) {
        case 0x28f5e0u: goto label_28f5e0;
        case 0x28f620u: goto label_28f620;
        case 0x28f678u: goto label_28f678;
        case 0x28f688u: goto label_28f688;
        case 0x28f744u: goto label_28f744;
        case 0x28f754u: goto label_28f754;
        case 0x28f764u: goto label_28f764;
        case 0x28f774u: goto label_28f774;
        case 0x28fad4u: goto label_28fad4;
        case 0x28fadcu: goto label_28fadc;
        default: break;
    }

    ctx->pc = 0x28f5b0u;

    // 0x28f5b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x28f5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x28f5b4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x28f5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x28f5b8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x28f5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x28f5bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28f5bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f5c0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x28f5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x28f5c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28f5c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f5c8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x28f5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x28f5cc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28f5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28f5d0: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x28f5d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x28f5d4: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x28f5d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x28f5d8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x28F5D8u;
    SET_GPR_U32(ctx, 31, 0x28F5E0u);
    ctx->pc = 0x28F5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F5D8u;
    // 0x28f5dc: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x28F5D8u, 0x28F5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F5E0u;
label_28f5e0:
    // 0x28f5e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28f5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f5e4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x28f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x28f5e8: 0x8c62aff0  lw          $v0, -0x5010($v1)
    ctx->pc = 0x28f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x28f5ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x28f5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28f5f0: 0x24430210  addiu       $v1, $v0, 0x210
    ctx->pc = 0x28f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x28f5f4: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x28f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x28f5f8: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x28f5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28f5fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x28f5fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f600: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x28f600u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f604: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x28f604u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x28f608: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x28f608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f60c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x28f60cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28f610: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x28f610u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f614: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x28f614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f618: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x28F618u;
    SET_GPR_U32(ctx, 31, 0x28F620u);
    ctx->pc = 0x28F61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F618u;
    // 0x28f61c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x28F618u, 0x28F620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F620u;
label_28f620:
    // 0x28f620: 0xc60300b8  lwc1        $f3, 0xB8($s0)
    ctx->pc = 0x28f620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f624: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x28f624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28f628: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x28f628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f62c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28f62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28f630: 0xc60000b4  lwc1        $f0, 0xB4($s0)
    ctx->pc = 0x28f630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f634: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28f634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28f638: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28f638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28f63c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x28f63cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28f640: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x28f640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x28f644: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x28f644u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x28f648: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x28f648u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x28f64c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x28f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x28f650: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x28f650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28f654: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x28f654u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f658: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x28f658u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f65c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x28f65cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x28f660: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x28f660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f664: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x28f664u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28f668: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x28f668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28f66c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x28f66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f670: 0xc07df7e  jal         func_1F7DF8
    ctx->pc = 0x28F670u;
    SET_GPR_U32(ctx, 31, 0x28F678u);
    ctx->pc = 0x28F674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F670u;
    // 0x28f674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF8u, 0x28F670u, 0x28F678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F678u;
label_28f678:
    // 0x28f678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28f678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f67c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x28f67cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x28f680: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x28F680u;
    SET_GPR_U32(ctx, 31, 0x28F688u);
    ctx->pc = 0x28F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F680u;
    // 0x28f684: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x28F680u, 0x28F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F688u;
label_28f688:
    // 0x28f688: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x28f688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f68c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x28f68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f690: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x28f690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f694: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x28f694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28f698: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x28f698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x28f69c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x28f69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f6a0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x28f6a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28f6a4: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x28f6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f6a8: 0x9642062c  lhu         $v0, 0x62C($s2)
    ctx->pc = 0x28f6a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1580)));
    // 0x28f6ac: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28f6acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28f6b0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x28f6b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x28f6b4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x28f6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x28f6b8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28F6B8u;
    {
        const bool branch_taken_0x28f6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6B8u;
        // 0x28f6bc: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6b8) {
            ctx->pc = 0x28F6FCu;
            goto label_28f6fc;
        }
    }
    ctx->pc = 0x28F6C0u;
    // 0x28f6c0: 0xc6410644  lwc1        $f1, 0x644($s2)
    ctx->pc = 0x28f6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f6c4: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x28f6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x28f6c8: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x28f6c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x28f6cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f6d0: 0x0  nop
    ctx->pc = 0x28f6d0u;
    // NOP
    // 0x28f6d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28f6d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f6d8: 0x0  nop
    ctx->pc = 0x28f6d8u;
    // NOP
    // 0x28f6dc: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x28F6DCu;
    {
        const bool branch_taken_0x28f6dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f6dc) {
            ctx->pc = 0x28F6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F6DCu;
            // 0x28f6e0: 0xae400644  sw          $zero, 0x644($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1604), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F6FCu;
            goto label_28f6fc;
        }
    }
    ctx->pc = 0x28F6E4u;
    // 0x28f6e4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x28f6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x28f6e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28f6e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28f6ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f6ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f6f0: 0x0  nop
    ctx->pc = 0x28f6f0u;
    // NOP
    // 0x28f6f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28f6f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28f6f8: 0xe6400644  swc1        $f0, 0x644($s2)
    ctx->pc = 0x28f6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1604), bits); }
label_28f6fc:
    // 0x28f6fc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x28f6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x28f700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f704: 0x0  nop
    ctx->pc = 0x28f704u;
    // NOP
    // 0x28f708: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x28f708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f70c: 0x0  nop
    ctx->pc = 0x28f70cu;
    // NOP
    // 0x28f710: 0x450200f3  bc1fl       . + 4 + (0xF3 << 2)
    ctx->pc = 0x28F710u;
    {
        const bool branch_taken_0x28f710 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f710) {
            ctx->pc = 0x28F714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F710u;
            // 0x28f714: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FAE0u;
            goto label_28fae0;
        }
    }
    ctx->pc = 0x28F718u;
    // 0x28f718: 0x3c01bf33  lui         $at, 0xBF33
    ctx->pc = 0x28f718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48947 << 16));
    // 0x28f71c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x28f71cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x28f720: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x28f720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x28f724: 0x0  nop
    ctx->pc = 0x28f724u;
    // NOP
    // 0x28f728: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x28f728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f72c: 0x0  nop
    ctx->pc = 0x28f72cu;
    // NOP
    // 0x28f730: 0x450200eb  bc1fl       . + 4 + (0xEB << 2)
    ctx->pc = 0x28F730u;
    {
        const bool branch_taken_0x28f730 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f730) {
            ctx->pc = 0x28F734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F730u;
            // 0x28f734: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FAE0u;
            goto label_28fae0;
        }
    }
    ctx->pc = 0x28F738u;
    // 0x28f738: 0x8e440660  lw          $a0, 0x660($s2)
    ctx->pc = 0x28f738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1632)));
    // 0x28f73c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x28F73Cu;
    SET_GPR_U32(ctx, 31, 0x28F744u);
    ctx->pc = 0x28F740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F73Cu;
    // 0x28f740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x28F73Cu, 0x28F744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F744u;
label_28f744:
    // 0x28f744: 0x8e440660  lw          $a0, 0x660($s2)
    ctx->pc = 0x28f744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1632)));
    // 0x28f748: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28f748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f74c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x28F74Cu;
    SET_GPR_U32(ctx, 31, 0x28F754u);
    ctx->pc = 0x28F750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F74Cu;
    // 0x28f750: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x28F74Cu, 0x28F754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F754u;
label_28f754:
    // 0x28f754: 0x8e440660  lw          $a0, 0x660($s2)
    ctx->pc = 0x28f754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1632)));
    // 0x28f758: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28f758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28f75c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x28F75Cu;
    SET_GPR_U32(ctx, 31, 0x28F764u);
    ctx->pc = 0x28F760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F75Cu;
    // 0x28f760: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x28F75Cu, 0x28F764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F764u;
label_28f764:
    // 0x28f764: 0x8e440660  lw          $a0, 0x660($s2)
    ctx->pc = 0x28f764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1632)));
    // 0x28f768: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x28f768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28f76c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x28F76Cu;
    SET_GPR_U32(ctx, 31, 0x28F774u);
    ctx->pc = 0x28F770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F76Cu;
    // 0x28f770: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x28F76Cu, 0x28F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F774u;
label_28f774:
    // 0x28f774: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x28f774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f778: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x28f778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x28f77c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28f77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28f780: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f784: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x28f784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x28f788: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x28f788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x28f78c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x28f78cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x28f790: 0xe4610040  swc1        $f1, 0x40($v1)
    ctx->pc = 0x28f790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x28f794: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x28f794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x28f798: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28f798u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f79c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f7a0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x28f7a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f7a4: 0x0  nop
    ctx->pc = 0x28f7a4u;
    // NOP
    // 0x28f7a8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x28F7A8u;
    {
        const bool branch_taken_0x28f7a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7A8u;
        // 0x28f7ac: 0xe4410044  swc1        $f1, 0x44($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7a8) {
            ctx->pc = 0x28F808u;
            goto label_28f808;
        }
    }
    ctx->pc = 0x28F7B0u;
    // 0x28f7b0: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x28f7b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f7b4: 0x0  nop
    ctx->pc = 0x28f7b4u;
    // NOP
    // 0x28f7b8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x28F7B8u;
    {
        const bool branch_taken_0x28f7b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7B8u;
        // 0x28f7bc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7b8) {
            ctx->pc = 0x28F808u;
            goto label_28f808;
        }
    }
    ctx->pc = 0x28F7C0u;
    // 0x28f7c0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x28f7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x28f7c4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x28f7c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x28f7c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28f7c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28f7cc: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x28f7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x28f7d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f7d4: 0x4602a000  add.s       $f0, $f20, $f2
    ctx->pc = 0x28f7d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x28f7d8: 0xc6430644  lwc1        $f3, 0x644($s2)
    ctx->pc = 0x28f7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f7dc: 0x0  nop
    ctx->pc = 0x28f7dcu;
    // NOP
    // 0x28f7e0: 0x0  nop
    ctx->pc = 0x28f7e0u;
    // NOP
    // 0x28f7e4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x28f7e4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x28f7e8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28f7e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28f7ec: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x28f7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x28f7f0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x28f7f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x28f7f4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28f7f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28f7f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x28f7f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x28f7fc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x28f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x28f800: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x28F800u;
    {
        const bool branch_taken_0x28f800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F800u;
        // 0x28f804: 0x462025  or          $a0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f800) {
            ctx->pc = 0x28F88Cu;
            goto label_28f88c;
        }
    }
    ctx->pc = 0x28F808u;
label_28f808:
    // 0x28f808: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x28f808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x28f80c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f80cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f810: 0x0  nop
    ctx->pc = 0x28f810u;
    // NOP
    // 0x28f814: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x28f814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f818: 0x0  nop
    ctx->pc = 0x28f818u;
    // NOP
    // 0x28f81c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x28F81Cu;
    {
        const bool branch_taken_0x28f81c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F81Cu;
        // 0x28f820: 0x3c0300ff  lui         $v1, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f81c) {
            ctx->pc = 0x28F864u;
            goto label_28f864;
        }
    }
    ctx->pc = 0x28F824u;
    // 0x28f824: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x28f824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x28f828: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f82c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x28f82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x28f830: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28f830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28f834: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x28f834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x28f838: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x28f838u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x28f83c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x28f83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x28f840: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f844: 0xc6420644  lwc1        $f2, 0x644($s2)
    ctx->pc = 0x28f844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f848: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x28f848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x28f84c: 0x0  nop
    ctx->pc = 0x28f84cu;
    // NOP
    // 0x28f850: 0x0  nop
    ctx->pc = 0x28f850u;
    // NOP
    // 0x28f854: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x28f854u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x28f858: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28f858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28f85c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F85Cu;
    {
        const bool branch_taken_0x28f85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F85Cu;
        // 0x28f860: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f85c) {
            ctx->pc = 0x28F87Cu;
            goto label_28f87c;
        }
    }
    ctx->pc = 0x28F864u;
label_28f864:
    // 0x28f864: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x28f864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x28f868: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f86c: 0xc6400644  lwc1        $f0, 0x644($s2)
    ctx->pc = 0x28f86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f870: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x28f870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x28f874: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x28f874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x28f878: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28f878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28f87c:
    // 0x28f87c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28f87cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28f880: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x28f880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x28f884: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x28f884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x28f888: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x28f888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28f88c:
    // 0x28f88c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f890: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x28f890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x28f894: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x28f894u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x28f898: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28f898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28f89c: 0xac44004c  sw          $a0, 0x4C($v0)
    ctx->pc = 0x28f89cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
    // 0x28f8a0: 0x8643054a  lh          $v1, 0x54A($s2)
    ctx->pc = 0x28f8a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x28f8a4: 0xc641063c  lwc1        $f1, 0x63C($s2)
    ctx->pc = 0x28f8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f8a8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x28f8a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28f8ac: 0x0  nop
    ctx->pc = 0x28f8acu;
    // NOP
    // 0x28f8b0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x28f8b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28f8b4: 0x86420548  lh          $v0, 0x548($s2)
    ctx->pc = 0x28f8b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1352)));
    // 0x28f8b8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x28f8b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28f8bc: 0xc6400634  lwc1        $f0, 0x634($s2)
    ctx->pc = 0x28f8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f8c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28f8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f8c4: 0x0  nop
    ctx->pc = 0x28f8c4u;
    // NOP
    // 0x28f8c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28f8c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28f8cc: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x28f8ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f8d0: 0x0  nop
    ctx->pc = 0x28f8d0u;
    // NOP
    // 0x28f8d4: 0x0  nop
    ctx->pc = 0x28f8d4u;
    // NOP
    // 0x28f8d8: 0x46011903  div.s       $f4, $f3, $f1
    ctx->pc = 0x28f8d8u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[1]);
    // 0x28f8dc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x28F8DCu;
    {
        const bool branch_taken_0x28f8dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F8DCu;
        // 0x28f8e0: 0xe642063c  swc1        $f2, 0x63C($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1596), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f8dc) {
            ctx->pc = 0x28F900u;
            goto label_28f900;
        }
    }
    ctx->pc = 0x28F8E4u;
    // 0x28f8e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28f8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28f8e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f8e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f8ec: 0xc6410630  lwc1        $f1, 0x630($s2)
    ctx->pc = 0x28f8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f8f0: 0xe640063c  swc1        $f0, 0x63C($s2)
    ctx->pc = 0x28f8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1596), bits); }
    // 0x28f8f4: 0xe6410638  swc1        $f1, 0x638($s2)
    ctx->pc = 0x28f8f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1592), bits); }
    // 0x28f8f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28F8F8u;
    {
        const bool branch_taken_0x28f8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F8F8u;
        // 0x28f8fc: 0xe6430634  swc1        $f3, 0x634($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f8f8) {
            ctx->pc = 0x28F928u;
            goto label_28f928;
        }
    }
    ctx->pc = 0x28F900u;
label_28f900:
    // 0x28f900: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x28f900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x28f904: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x28f904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x28f908: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f90c: 0x0  nop
    ctx->pc = 0x28f90cu;
    // NOP
    // 0x28f910: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x28f910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f914: 0x0  nop
    ctx->pc = 0x28f914u;
    // NOP
    // 0x28f918: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x28F918u;
    {
        const bool branch_taken_0x28f918 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F918u;
        // 0x28f91c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f918) {
            ctx->pc = 0x28F92Cu;
            goto label_28f92c;
        }
    }
    ctx->pc = 0x28F920u;
    // 0x28f920: 0xe6430634  swc1        $f3, 0x634($s2)
    ctx->pc = 0x28f920u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1588), bits); }
    // 0x28f924: 0xae40063c  sw          $zero, 0x63C($s2)
    ctx->pc = 0x28f924u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1596), GPR_U32(ctx, 0));
label_28f928:
    // 0x28f928: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x28f928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_28f92c:
    // 0x28f92c: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x28f92cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x28f930: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x28f930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x28f934: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28f934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28f938: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x28f938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x28f93c: 0xe4440040  swc1        $f4, 0x40($v0)
    ctx->pc = 0x28f93cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x28f940: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x28f940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x28f944: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x28f944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x28f948: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x28f948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x28f94c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28f94cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28f950: 0x24050209  addiu       $a1, $zero, 0x209
    ctx->pc = 0x28f950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    // 0x28f954: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x28f954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28f958: 0xe4440040  swc1        $f4, 0x40($v0)
    ctx->pc = 0x28f958u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x28f95c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x28f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x28f960: 0xc6410638  lwc1        $f1, 0x638($s2)
    ctx->pc = 0x28f960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f964: 0xe4610040  swc1        $f1, 0x40($v1)
    ctx->pc = 0x28f964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x28f968: 0xc640063c  lwc1        $f0, 0x63C($s2)
    ctx->pc = 0x28f968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f96c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x28f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28f970: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28f970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x28f974: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28f974u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28f978: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x28f978u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x28f97c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x28f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x28f980: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x28f980u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x28f984: 0xac66004c  sw          $a2, 0x4C($v1)
    ctx->pc = 0x28f984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 6));
    // 0x28f988: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x28f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x28f98c: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x28f98cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x28f990: 0xc6410630  lwc1        $f1, 0x630($s2)
    ctx->pc = 0x28f990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f994: 0x864302ac  lh          $v1, 0x2AC($s2)
    ctx->pc = 0x28f994u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 684)));
    // 0x28f998: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x28f998u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x28f99c: 0x8e420660  lw          $v0, 0x660($s2)
    ctx->pc = 0x28f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1632)));
    // 0x28f9a0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28f9a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28f9a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28f9a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28f9a8: 0xe6410630  swc1        $f1, 0x630($s2)
    ctx->pc = 0x28f9a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1584), bits); }
    // 0x28f9ac: 0xa4430044  sh          $v1, 0x44($v0)
    ctx->pc = 0x28f9acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 3));
    // 0x28f9b0: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x28f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x28f9b4: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x28F9B4u;
    {
        const bool branch_taken_0x28f9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x28F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9B4u;
        // 0x28f9b8: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9b4) {
            ctx->pc = 0x28F9F0u;
            goto label_28f9f0;
        }
    }
    ctx->pc = 0x28F9BCu;
    // 0x28f9bc: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x28F9BCu;
    {
        const bool branch_taken_0x28f9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9BCu;
        // 0x28f9c0: 0x8e420660  lw          $v0, 0x660($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9bc) {
            ctx->pc = 0x28FA3Cu;
            goto label_28fa3c;
        }
    }
    ctx->pc = 0x28F9C4u;
    // 0x28f9c4: 0x3c013c1e  lui         $at, 0x3C1E
    ctx->pc = 0x28f9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15390 << 16));
    // 0x28f9c8: 0x3421da4b  ori         $at, $at, 0xDA4B
    ctx->pc = 0x28f9c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55883);
    // 0x28f9cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f9d0: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x28f9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x28f9d4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28f9d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x28f9d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28f9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28f9dc: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x28f9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x28f9e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28f9e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28f9e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f9e8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x28F9E8u;
    {
        const bool branch_taken_0x28f9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9E8u;
        // 0x28f9ec: 0xe4400040  swc1        $f0, 0x40($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9e8) {
            ctx->pc = 0x28FA64u;
            goto label_28fa64;
        }
    }
    ctx->pc = 0x28F9F0u;
label_28f9f0:
    // 0x28f9f0: 0x8e420660  lw          $v0, 0x660($s2)
    ctx->pc = 0x28f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1632)));
    // 0x28f9f4: 0x3c013c6d  lui         $at, 0x3C6D
    ctx->pc = 0x28f9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15469 << 16));
    // 0x28f9f8: 0x342172ca  ori         $at, $at, 0x72CA
    ctx->pc = 0x28f9f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29386);
    // 0x28f9fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fa00: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x28fa00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x28fa04: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28fa04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x28fa08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28fa08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28fa0c: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x28fa0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x28fa10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28fa10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28fa14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28fa14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fa18: 0x8e430660  lw          $v1, 0x660($s2)
    ctx->pc = 0x28fa18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1632)));
    // 0x28fa1c: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x28fa1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x28fa20: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x28fa20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x28fa24: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x28fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x28fa28: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x28fa28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28fa2c: 0x1050001c  beq         $v0, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28FA2Cu;
    {
        const bool branch_taken_0x28fa2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x28FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA2Cu;
        // 0x28fa30: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa2c) {
            ctx->pc = 0x28FAA0u;
            goto label_28faa0;
        }
    }
    ctx->pc = 0x28FA34u;
    // 0x28fa34: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x28FA34u;
    {
        const bool branch_taken_0x28fa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA34u;
        // 0x28fa38: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa34) {
            ctx->pc = 0x28FA8Cu;
            goto label_28fa8c;
        }
    }
    ctx->pc = 0x28FA3Cu;
label_28fa3c:
    // 0x28fa3c: 0x3c013c6d  lui         $at, 0x3C6D
    ctx->pc = 0x28fa3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15469 << 16));
    // 0x28fa40: 0x342172ca  ori         $at, $at, 0x72CA
    ctx->pc = 0x28fa40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29386);
    // 0x28fa44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28fa44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fa48: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x28fa48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x28fa4c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28fa4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x28fa50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28fa50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28fa54: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x28fa54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x28fa58: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x28fa58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x28fa5c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28fa5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28fa60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28fa60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28fa64:
    // 0x28fa64: 0x8e430660  lw          $v1, 0x660($s2)
    ctx->pc = 0x28fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1632)));
    // 0x28fa68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28fa68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28fa6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28fa6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fa70: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x28fa70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28fa74: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x28fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x28fa78: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x28fa78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x28fa7c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x28fa7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x28fa80: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28FA80u;
    {
        const bool branch_taken_0x28fa80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x28FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA80u;
        // 0x28fa84: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa80) {
            ctx->pc = 0x28FAA0u;
            goto label_28faa0;
        }
    }
    ctx->pc = 0x28FA88u;
    // 0x28fa88: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x28fa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28fa8c:
    // 0x28fa8c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x28fa8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x28fa90: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x28fa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fa94: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x28fa94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28fa98: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x28fa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fa9c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28fa9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28faa0:
    // 0x28faa0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x28faa0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28faa4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x28faa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28faa8: 0x8e430660  lw          $v1, 0x660($s2)
    ctx->pc = 0x28faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1632)));
    // 0x28faac: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x28faacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x28fab0: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28FAB0u;
    {
        const bool branch_taken_0x28fab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x28FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FAB0u;
        // 0x28fab4: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fab0) {
            ctx->pc = 0x28FACCu;
            goto label_28facc;
        }
    }
    ctx->pc = 0x28FAB8u;
    // 0x28fab8: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x28fab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x28fabc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x28fabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fac0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x28fac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28fac4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x28fac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fac8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28fac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28facc:
    // 0x28facc: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x28FACCu;
    SET_GPR_U32(ctx, 31, 0x28FAD4u);
    ctx->pc = 0x28FAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FACCu;
    // 0x28fad0: 0x8e440660  lw          $a0, 0x660($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x28FACCu, 0x28FAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FAD4u;
label_28fad4:
    // 0x28fad4: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x28FAD4u;
    SET_GPR_U32(ctx, 31, 0x28FADCu);
    ctx->pc = 0x28FAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FAD4u;
    // 0x28fad8: 0x8e440660  lw          $a0, 0x660($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x28FAD4u, 0x28FADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FADCu;
label_28fadc:
    // 0x28fadc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x28fadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28fae0:
    // 0x28fae0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x28fae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fae4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x28fae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28fae8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x28fae8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28faec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28faecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28faf0: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x28faf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x28faf4: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x28faf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28faf8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x28faf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28fafc: 0x3e00008  jr          $ra
    ctx->pc = 0x28FAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FAFCu;
        // 0x28fb00: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FB04u;
    // 0x28fb04: 0x0  nop
    ctx->pc = 0x28fb04u;
    // NOP
    ctx->pc = 0x28fb08u;
}
