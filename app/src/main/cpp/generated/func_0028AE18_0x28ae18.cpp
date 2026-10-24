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

// Function: func_0028AE18
// Address: 0x28ae18 - 0x28b0a0
void func_0028AE18_0x28ae18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028AE18_0x28ae18");
#endif

    switch (ctx->pc) {
        case 0x28aef0u: goto label_28aef0;
        case 0x28af08u: goto label_28af08;
        case 0x28af48u: goto label_28af48;
        case 0x28b058u: goto label_28b058;
        default: break;
    }

    ctx->pc = 0x28ae18u;

    // 0x28ae18: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x28ae18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x28ae1c: 0x240202a7  addiu       $v0, $zero, 0x2A7
    ctx->pc = 0x28ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
    // 0x28ae20: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x28ae20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x28ae24: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x28ae24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x28ae28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28ae28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ae2c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x28ae2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x28ae30: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x28ae30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x28ae34: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x28ae34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x28ae38: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x28ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x28ae3c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x28ae3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x28ae40: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x28ae40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x28ae44: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x28ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x28ae48: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28AE48u;
    {
        const bool branch_taken_0x28ae48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE48u;
        // 0x28ae4c: 0x240202ab  addiu       $v0, $zero, 0x2AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae48) {
            ctx->pc = 0x28AE58u;
            goto label_28ae58;
        }
    }
    ctx->pc = 0x28AE50u;
    // 0x28ae50: 0x14620089  bne         $v1, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x28AE50u;
    {
        const bool branch_taken_0x28ae50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE50u;
        // 0x28ae54: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae50) {
            ctx->pc = 0x28B078u;
            goto label_28b078;
        }
    }
    ctx->pc = 0x28AE58u;
label_28ae58:
    // 0x28ae58: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x28ae58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x28ae5c: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x28ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x28ae60: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28ae60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28ae64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28AE64u;
    {
        const bool branch_taken_0x28ae64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE64u;
        // 0x28ae68: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae64) {
            ctx->pc = 0x28AE78u;
            goto label_28ae78;
        }
    }
    ctx->pc = 0x28AE6Cu;
    // 0x28ae6c: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x28ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x28ae70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28AE70u;
    {
        const bool branch_taken_0x28ae70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE70u;
        // 0x28ae74: 0x8c530074  lw          $s3, 0x74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae70) {
            ctx->pc = 0x28AE7Cu;
            goto label_28ae7c;
        }
    }
    ctx->pc = 0x28AE78u;
label_28ae78:
    // 0x28ae78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28ae78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ae7c:
    // 0x28ae7c: 0x1260007e  beqz        $s3, . + 4 + (0x7E << 2)
    ctx->pc = 0x28AE7Cu;
    {
        const bool branch_taken_0x28ae7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE7Cu;
        // 0x28ae80: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae7c) {
            ctx->pc = 0x28B078u;
            goto label_28b078;
        }
    }
    ctx->pc = 0x28AE84u;
    // 0x28ae84: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x28ae84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28ae88: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x28ae88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x28ae8c: 0x26420490  addiu       $v0, $s2, 0x490
    ctx->pc = 0x28ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x28ae90: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x28ae90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28ae94: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x28ae94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28ae98: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x28ae98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ae9c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x28ae9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x28aea0: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x28aea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28aea4: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x28aea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28aea8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x28aea8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28aeac: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x28aeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28aeb0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x28aeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28aeb4: 0x265515e0  addiu       $s5, $s2, 0x15E0
    ctx->pc = 0x28aeb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 5600));
    // 0x28aeb8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x28aeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28aebc: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x28aebcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28aec0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x28aec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x28aec4: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x28aec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x28aec8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x28aec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x28aecc: 0xda4415e0  lqc2        $vf4, 0x15E0($s2)
    ctx->pc = 0x28aeccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 5600)));
    // 0x28aed0: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x28aed0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28aed4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x28aed4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x28aed8: 0xfa4415e0  sqc2        $vf4, 0x15E0($s2)
    ctx->pc = 0x28aed8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 5600), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28aedc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x28aedcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28aee0: 0x26760080  addiu       $s6, $s3, 0x80
    ctx->pc = 0x28aee0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x28aee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28aee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aee8: 0xc051d5a  jal         func_147568
    ctx->pc = 0x28AEE8u;
    SET_GPR_U32(ctx, 31, 0x28AEF0u);
    ctx->pc = 0x28AEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AEE8u;
    // 0x28aeec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147568u, 0x28AEE8u, 0x28AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AEF0u;
label_28aef0:
    // 0x28aef0: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x28aef0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28aef4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x28aef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28aef8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28aef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aefc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28aefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28af00: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x28AF00u;
    SET_GPR_U32(ctx, 31, 0x28AF08u);
    ctx->pc = 0x28AF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF00u;
    // 0x28af04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x28AF00u, 0x28AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF08u;
label_28af08:
    // 0x28af08: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x28af08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28af0c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x28af0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28af10: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x28af10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28af14: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x28af14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28af18: 0x46000342  mul.s       $f13, $f0, $f0
    ctx->pc = 0x28af18u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28af1c: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x28af1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28af20: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x28af20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28af24: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x28af24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x28af28: 0xe7ac0054  swc1        $f12, 0x54($sp)
    ctx->pc = 0x28af28u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x28af2c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x28af2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x28af30: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x28af30u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x28af34: 0x0  nop
    ctx->pc = 0x28af34u;
    // NOP
    // 0x28af38: 0x0  nop
    ctx->pc = 0x28af38u;
    // NOP
    // 0x28af3c: 0x460d0344  c1          0xD0344
    ctx->pc = 0x28af3cu;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x28af40: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x28AF40u;
    SET_GPR_U32(ctx, 31, 0x28AF48u);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x28AF40u, 0x28AF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF48u;
label_28af48:
    // 0x28af48: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x28af48u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x28af4c: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x28af4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x28af50: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x28af50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x28af54: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28af54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28af58: 0x0  nop
    ctx->pc = 0x28af58u;
    // NOP
    // 0x28af5c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x28af5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28af60: 0x0  nop
    ctx->pc = 0x28af60u;
    // NOP
    // 0x28af64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28AF64u;
    {
        const bool branch_taken_0x28af64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28af64) {
            ctx->pc = 0x28AF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AF64u;
            // 0x28af68: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AF6Cu;
            goto label_28af6c;
        }
    }
    ctx->pc = 0x28AF6Cu;
label_28af6c:
    // 0x28af6c: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x28af6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
    // 0x28af70: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x28af70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x28af74: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x28af74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28af78: 0x0  nop
    ctx->pc = 0x28af78u;
    // NOP
    // 0x28af7c: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x28af7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28af80: 0x0  nop
    ctx->pc = 0x28af80u;
    // NOP
    // 0x28af84: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28AF84u;
    {
        const bool branch_taken_0x28af84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28af84) {
            ctx->pc = 0x28AF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AF84u;
            // 0x28af88: 0x46002086  mov.s       $f2, $f4 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AF8Cu;
            goto label_28af8c;
        }
    }
    ctx->pc = 0x28AF8Cu;
label_28af8c:
    // 0x28af8c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28af8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28af90: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x28af90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x28af94: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x28af94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28af98: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x28af98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x28af9c: 0xc6600100  lwc1        $f0, 0x100($s3)
    ctx->pc = 0x28af9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28afa0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x28afa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28afa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28afa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28afa8: 0xe6600100  swc1        $f0, 0x100($s3)
    ctx->pc = 0x28afa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
    // 0x28afac: 0xc64115f0  lwc1        $f1, 0x15F0($s2)
    ctx->pc = 0x28afacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28afb0: 0xc64205a8  lwc1        $f2, 0x5A8($s2)
    ctx->pc = 0x28afb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28afb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x28afb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28afb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28afb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28afbc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x28afbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28afc0: 0x0  nop
    ctx->pc = 0x28afc0u;
    // NOP
    // 0x28afc4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x28AFC4u;
    {
        const bool branch_taken_0x28afc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFC4u;
        // 0x28afc8: 0xe6600100  swc1        $f0, 0x100($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28afc4) {
            ctx->pc = 0x28AFD4u;
            goto label_28afd4;
        }
    }
    ctx->pc = 0x28AFCCu;
    // 0x28afcc: 0xe6630100  swc1        $f3, 0x100($s3)
    ctx->pc = 0x28afccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
    // 0x28afd0: 0xae4015f0  sw          $zero, 0x15F0($s2)
    ctx->pc = 0x28afd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5616), GPR_U32(ctx, 0));
label_28afd4:
    // 0x28afd4: 0xc6600100  lwc1        $f0, 0x100($s3)
    ctx->pc = 0x28afd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28afd8: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x28afd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28afdc: 0x0  nop
    ctx->pc = 0x28afdcu;
    // NOP
    // 0x28afe0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x28AFE0u;
    {
        const bool branch_taken_0x28afe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28afe0) {
            ctx->pc = 0x28AFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AFE0u;
            // 0x28afe4: 0xc64305a8  lwc1        $f3, 0x5A8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AFF4u;
            goto label_28aff4;
        }
    }
    ctx->pc = 0x28AFE8u;
    // 0x28afe8: 0xe6640100  swc1        $f4, 0x100($s3)
    ctx->pc = 0x28afe8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
    // 0x28afec: 0xae4015f0  sw          $zero, 0x15F0($s2)
    ctx->pc = 0x28afecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5616), GPR_U32(ctx, 0));
    // 0x28aff0: 0xc64305a8  lwc1        $f3, 0x5A8($s2)
    ctx->pc = 0x28aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28aff4:
    // 0x28aff4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x28aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x28aff8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x28aff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x28affc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28affcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28b000: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28b000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28b004: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x28b004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b008: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28b008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28b00c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28b00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b010: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28b010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b014: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x28b014u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x28b018: 0xc64115f0  lwc1        $f1, 0x15F0($s2)
    ctx->pc = 0x28b018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28b01c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28b01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b020: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28b020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x28b024: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28b024u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28b028: 0xe64115f0  swc1        $f1, 0x15F0($s2)
    ctx->pc = 0x28b028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5616), bits); }
    // 0x28b02c: 0xc6600100  lwc1        $f0, 0x100($s3)
    ctx->pc = 0x28b02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b030: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x28b030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x28b034: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x28b034u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x28b038: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x28b038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x28b03c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x28b03cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x28b040: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28b040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28b044: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28b044u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28b048: 0xe64115f0  swc1        $f1, 0x15F0($s2)
    ctx->pc = 0x28b048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5616), bits); }
    // 0x28b04c: 0xc4400488  lwc1        $f0, 0x488($v0)
    ctx->pc = 0x28b04cu;
    { uint32_t bits = FAST_READ32(0x3C0488u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b050: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x28B050u;
    SET_GPR_U32(ctx, 31, 0x28B058u);
    ctx->pc = 0x28B054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B050u;
    // 0x28b054: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x28B050u, 0x28B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B058u;
label_28b058:
    // 0x28b058: 0x12b40006  beq         $s5, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x28B058u;
    {
        const bool branch_taken_0x28b058 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 20));
        ctx->pc = 0x28B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B058u;
        // 0x28b05c: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b058) {
            ctx->pc = 0x28B074u;
            goto label_28b074;
        }
    }
    ctx->pc = 0x28B060u;
    // 0x28b060: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x28b060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28b064: 0xe64015e0  swc1        $f0, 0x15E0($s2)
    ctx->pc = 0x28b064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5600), bits); }
    // 0x28b068: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x28b068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x28b06c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x28b06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b070: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x28b070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_28b074:
    // 0x28b074: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x28b074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_28b078:
    // 0x28b078: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x28b078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28b07c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x28b07cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28b080: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x28b080u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28b084: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x28b084u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28b088: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x28b088u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28b08c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x28b08cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28b090: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x28b090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28b094: 0x3e00008  jr          $ra
    ctx->pc = 0x28B094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B094u;
        // 0x28b098: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B09Cu;
    // 0x28b09c: 0x0  nop
    ctx->pc = 0x28b09cu;
    // NOP
    ctx->pc = 0x28b0a0u;
}
