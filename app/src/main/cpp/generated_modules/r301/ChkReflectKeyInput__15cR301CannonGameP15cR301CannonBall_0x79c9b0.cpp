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
// Function: ChkReflectKeyInput__15cR301CannonGameP15cR301CannonBall
// Address: 0x79c9b0 - 0x79cbf0
void ChkReflectKeyInput__15cR301CannonGameP15cR301CannonBall_0x79c9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChkReflectKeyInput__15cR301CannonGameP15cR301CannonBall_0x79c9b0");
#endif

    switch (ctx->pc) {
        case 0x79c9ccu: goto label_79c9cc;
        case 0x79ca98u: goto label_79ca98;
        default: break;
    }

    ctx->pc = 0x79c9b0u;

    // 0x79c9b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79c9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79c9b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79c9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79c9b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x79c9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c9bc: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x79C9BCu;
    {
        const bool branch_taken_0x79c9bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C9BCu;
        // 0x79c9c0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c9bc) {
            ctx->pc = 0x79CAB8u;
            goto label_79cab8;
        }
    }
    ctx->pc = 0x79C9C4u;
    // 0x79c9c4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79C9C4u;
    SET_GPR_U32(ctx, 31, 0x79C9CCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79C9C4u, 0x79C9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C9CCu;
label_79c9cc:
    // 0x79c9cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x79c9ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c9d0: 0x10600083  beqz        $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x79C9D0u;
    {
        const bool branch_taken_0x79c9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C9D0u;
        // 0x79c9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c9d0) {
            ctx->pc = 0x79CBE0u;
            goto label_79cbe0;
        }
    }
    ctx->pc = 0x79C9D8u;
    // 0x79c9d8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x79c9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79c9dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79c9e0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x79C9E0u;
    {
        const bool branch_taken_0x79c9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c9e0) {
            ctx->pc = 0x79C9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C9E0u;
            // 0x79c9e4: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79CA10u;
            goto label_79ca10;
        }
    }
    ctx->pc = 0x79C9E8u;
    // 0x79c9e8: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79c9ec: 0x53a20016  beql        $sp, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x79C9ECu;
    {
        const bool branch_taken_0x79c9ec = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x79c9ec) {
            ctx->pc = 0x79C9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C9ECu;
            // 0x79c9f0: 0x8c6300f0  lw          $v1, 0xF0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79CA48u;
            goto label_79ca48;
        }
    }
    ctx->pc = 0x79C9F4u;
    // 0x79c9f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x79c9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79c9f8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x79c9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79c9fc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x79c9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79ca00: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x79ca00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79ca04: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79ca04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ca08: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x79CA08u;
    {
        const bool branch_taken_0x79ca08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CA08u;
        // 0x79ca0c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ca08) {
            ctx->pc = 0x79CA44u;
            goto label_79ca44;
        }
    }
    ctx->pc = 0x79CA10u;
label_79ca10:
    // 0x79ca10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79ca10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79ca14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79ca14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79ca18: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x79ca18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x79ca1c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x79ca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x79ca20: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x79ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x79ca24: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79CA24u;
    {
        const bool branch_taken_0x79ca24 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x79CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CA24u;
        // 0x79ca28: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ca24) {
            ctx->pc = 0x79CA44u;
            goto label_79ca44;
        }
    }
    ctx->pc = 0x79CA2Cu;
    // 0x79ca2c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x79ca2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ca30: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x79ca30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79ca34: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x79ca34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79ca38: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x79ca38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79ca3c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x79ca3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79ca40: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x79ca40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_79ca44:
    // 0x79ca44: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x79ca44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_79ca48:
    // 0x79ca48: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x79ca48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79ca4c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79ca4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ca50: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x79ca50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79ca54: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79ca54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79ca58: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79ca58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79ca5c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x79ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79ca60: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79ca60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79ca64: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79ca64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79ca68: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x79ca68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79ca6c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x79ca6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ca70: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x79ca70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x79ca74: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x79ca74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x79ca78: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x79ca78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x79ca7c: 0x460c0084  c1          0xC0084
    ctx->pc = 0x79ca7cu;
    ctx->f[2] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x79ca80: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x79ca80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79ca84: 0x0  nop
    ctx->pc = 0x79ca84u;
    // NOP
    // 0x79ca88: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x79CA88u;
    {
        const bool branch_taken_0x79ca88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79ca88) {
            ctx->pc = 0x79CA9Cu;
            goto label_79ca9c;
        }
    }
    ctx->pc = 0x79CA90u;
    // 0x79ca90: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x79CA90u;
    SET_GPR_U32(ctx, 31, 0x79CA98u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x79CA90u, 0x79CA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CA98u;
label_79ca98:
    // 0x79ca98: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x79ca98u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_79ca9c:
    // 0x79ca9c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x79ca9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x79caa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79caa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79caa4: 0x0  nop
    ctx->pc = 0x79caa4u;
    // NOP
    // 0x79caa8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x79caa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79caac: 0x0  nop
    ctx->pc = 0x79caacu;
    // NOP
    // 0x79cab0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x79CAB0u;
    {
        const bool branch_taken_0x79cab0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x79cab0) {
            ctx->pc = 0x79CAC0u;
            goto label_79cac0;
        }
    }
    ctx->pc = 0x79CAB8u;
label_79cab8:
    // 0x79cab8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x79CAB8u;
    {
        const bool branch_taken_0x79cab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CAB8u;
        // 0x79cabc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cab8) {
            ctx->pc = 0x79CBE0u;
            goto label_79cbe0;
        }
    }
    ctx->pc = 0x79CAC0u;
label_79cac0:
    // 0x79cac0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x79cac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x79cac4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79cac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79cac8: 0x0  nop
    ctx->pc = 0x79cac8u;
    // NOP
    // 0x79cacc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x79caccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79cad0: 0x0  nop
    ctx->pc = 0x79cad0u;
    // NOP
    // 0x79cad4: 0x45010042  bc1t        . + 4 + (0x42 << 2)
    ctx->pc = 0x79CAD4u;
    {
        const bool branch_taken_0x79cad4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CAD4u;
        // 0x79cad8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cad4) {
            ctx->pc = 0x79CBE0u;
            goto label_79cbe0;
        }
    }
    ctx->pc = 0x79CADCu;
    // 0x79cadc: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x79cadcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x79cae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79cae4: 0x10a20018  beq         $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x79CAE4u;
    {
        const bool branch_taken_0x79cae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x79CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CAE4u;
        // 0x79cae8: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cae4) {
            ctx->pc = 0x79CB48u;
            goto label_79cb48;
        }
    }
    ctx->pc = 0x79CAECu;
    // 0x79caec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79CAECu;
    {
        const bool branch_taken_0x79caec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CAECu;
        // 0x79caf0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79caec) {
            ctx->pc = 0x79CB04u;
            goto label_79cb04;
        }
    }
    ctx->pc = 0x79CAF4u;
    // 0x79caf4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x79CAF4u;
    {
        const bool branch_taken_0x79caf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CAF4u;
        // 0x79caf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79caf4) {
            ctx->pc = 0x79CB1Cu;
            goto label_79cb1c;
        }
    }
    ctx->pc = 0x79CAFCu;
    // 0x79cafc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x79CAFCu;
    {
        const bool branch_taken_0x79cafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CAFCu;
        // 0x79cb00: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cafc) {
            ctx->pc = 0x79CBE4u;
            goto label_79cbe4;
        }
    }
    ctx->pc = 0x79CB04u;
label_79cb04:
    // 0x79cb04: 0x10a2001b  beq         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x79CB04u;
    {
        const bool branch_taken_0x79cb04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x79CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB04u;
        // 0x79cb08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cb04) {
            ctx->pc = 0x79CB74u;
            goto label_79cb74;
        }
    }
    ctx->pc = 0x79CB0Cu;
    // 0x79cb0c: 0x10a20027  beq         $a1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x79CB0Cu;
    {
        const bool branch_taken_0x79cb0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x79CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB0Cu;
        // 0x79cb10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cb0c) {
            ctx->pc = 0x79CBACu;
            goto label_79cbac;
        }
    }
    ctx->pc = 0x79CB14u;
    // 0x79cb14: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x79CB14u;
    {
        const bool branch_taken_0x79cb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB14u;
        // 0x79cb18: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cb14) {
            ctx->pc = 0x79CBE4u;
            goto label_79cbe4;
        }
    }
    ctx->pc = 0x79CB1Cu;
label_79cb1c:
    // 0x79cb1c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79cb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79cb20: 0x3402e000  ori         $v0, $zero, 0xE000
    ctx->pc = 0x79cb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x79cb24: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x79cb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x79cb28: 0xdc637640  ld          $v1, 0x7640($v1)
    ctx->pc = 0x79cb28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 30272)));
    // 0x79cb2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79cb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79cb30: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x79CB30u;
    {
        const bool branch_taken_0x79cb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB30u;
        // 0x79cb34: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cb30) {
            ctx->pc = 0x79CBE0u;
            goto label_79cbe0;
        }
    }
    ctx->pc = 0x79CB38u;
    // 0x79cb38: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x79cb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79cb3c: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x79cb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x79cb40: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x79CB40u;
    {
        const bool branch_taken_0x79cb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB40u;
        // 0x79cb44: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cb40) {
            ctx->pc = 0x79CB9Cu;
            goto label_79cb9c;
        }
    }
    ctx->pc = 0x79CB48u;
label_79cb48:
    // 0x79cb48: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79cb4c: 0x3402d000  ori         $v0, $zero, 0xD000
    ctx->pc = 0x79cb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53248);
    // 0x79cb50: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x79cb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x79cb54: 0xdc637640  ld          $v1, 0x7640($v1)
    ctx->pc = 0x79cb54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 30272)));
    // 0x79cb58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79cb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79cb5c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x79CB5Cu;
    {
        const bool branch_taken_0x79cb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB5Cu;
        // 0x79cb60: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cb5c) {
            ctx->pc = 0x79CBE0u;
            goto label_79cbe0;
        }
    }
    ctx->pc = 0x79CB64u;
    // 0x79cb64: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x79cb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79cb68: 0x214b8  dsll        $v0, $v0, 18
    ctx->pc = 0x79cb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 18);
    // 0x79cb6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x79CB6Cu;
    {
        const bool branch_taken_0x79cb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB6Cu;
        // 0x79cb70: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cb6c) {
            ctx->pc = 0x79CB9Cu;
            goto label_79cb9c;
        }
    }
    ctx->pc = 0x79CB74u;
label_79cb74:
    // 0x79cb74: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79cb78: 0x3402e000  ori         $v0, $zero, 0xE000
    ctx->pc = 0x79cb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x79cb7c: 0x214f8  dsll        $v0, $v0, 19
    ctx->pc = 0x79cb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x79cb80: 0xdc637640  ld          $v1, 0x7640($v1)
    ctx->pc = 0x79cb80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 30272)));
    // 0x79cb84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79cb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79cb88: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x79CB88u;
    {
        const bool branch_taken_0x79cb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB88u;
        // 0x79cb8c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cb88) {
            ctx->pc = 0x79CBE0u;
            goto label_79cbe0;
        }
    }
    ctx->pc = 0x79CB90u;
    // 0x79cb90: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x79cb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79cb94: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x79cb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x79cb98: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79cb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79cb9c:
    // 0x79cb9c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x79CB9Cu;
    {
        const bool branch_taken_0x79cb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB9Cu;
        // 0x79cba0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cb9c) {
            ctx->pc = 0x79CBDCu;
            goto label_79cbdc;
        }
    }
    ctx->pc = 0x79CBA4u;
    // 0x79cba4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x79CBA4u;
    {
        const bool branch_taken_0x79cba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CBA4u;
        // 0x79cba8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cba4) {
            ctx->pc = 0x79CBE4u;
            goto label_79cbe4;
        }
    }
    ctx->pc = 0x79CBACu;
label_79cbac:
    // 0x79cbac: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79cbb0: 0x3402b000  ori         $v0, $zero, 0xB000
    ctx->pc = 0x79cbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45056);
    // 0x79cbb4: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x79cbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x79cbb8: 0xdc647640  ld          $a0, 0x7640($v1)
    ctx->pc = 0x79cbb8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 30272)));
    // 0x79cbbc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x79cbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x79cbc0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79CBC0u;
    {
        const bool branch_taken_0x79cbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CBC0u;
        // 0x79cbc4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cbc0) {
            ctx->pc = 0x79CBE0u;
            goto label_79cbe0;
        }
    }
    ctx->pc = 0x79CBC8u;
    // 0x79cbc8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x79cbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79cbcc: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x79cbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x79cbd0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x79cbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x79cbd4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x79CBD4u;
    {
        const bool branch_taken_0x79cbd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CBD4u;
        // 0x79cbd8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cbd4) {
            ctx->pc = 0x79CBE0u;
            goto label_79cbe0;
        }
    }
    ctx->pc = 0x79CBDCu;
label_79cbdc:
    // 0x79cbdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79cbe0:
    // 0x79cbe0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79cbe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79cbe4:
    // 0x79cbe4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79cbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79cbe8: 0x3e00008  jr          $ra
    ctx->pc = 0x79CBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CBE8u;
        // 0x79cbec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CBE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CBF0u;
}
} // namespace gh_r301
