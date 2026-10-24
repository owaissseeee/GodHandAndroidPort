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

// Function: func_00156AC0
// Address: 0x156ac0 - 0x156be8
void func_00156AC0_0x156ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00156AC0_0x156ac0");
#endif

    switch (ctx->pc) {
        case 0x156af4u: goto label_156af4;
        case 0x156b04u: goto label_156b04;
        default: break;
    }

    ctx->pc = 0x156ac0u;

    // 0x156ac0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x156ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x156ac4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x156ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ac8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x156ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x156acc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x156accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x156ad0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x156ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ad4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x156ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ad8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x156ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x156adc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x156adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x156ae0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x156ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ae4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x156ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ae8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x156ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156aec: 0xc055a68  jal         func_1569A0
    ctx->pc = 0x156AECu;
    SET_GPR_U32(ctx, 31, 0x156AF4u);
    ctx->pc = 0x156AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156AECu;
    // 0x156af0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1569A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569A0u, 0x156AECu, 0x156AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156AF4u;
label_156af4:
    // 0x156af4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x156af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x156af8: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x156af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x156afc: 0xc04078a  jal         func_101E28
    ctx->pc = 0x156AFCu;
    SET_GPR_U32(ctx, 31, 0x156B04u);
    ctx->pc = 0x156B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156AFCu;
    // 0x156b00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x156AFCu, 0x156B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B04u;
label_156b04:
    // 0x156b04: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x156b04u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x156b08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x156b08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156b0c: 0x0  nop
    ctx->pc = 0x156b0cu;
    // NOP
    // 0x156b10: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x156b10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156b14: 0x0  nop
    ctx->pc = 0x156b14u;
    // NOP
    // 0x156b18: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x156B18u;
    {
        const bool branch_taken_0x156b18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x156B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B18u;
        // 0x156b1c: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b18) {
            ctx->pc = 0x156B5Cu;
            goto label_156b5c;
        }
    }
    ctx->pc = 0x156B20u;
    // 0x156b20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x156b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x156b24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x156b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156b28: 0x0  nop
    ctx->pc = 0x156b28u;
    // NOP
    // 0x156b2c: 0x0  nop
    ctx->pc = 0x156b2cu;
    // NOP
    // 0x156b30: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x156b30u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x156b34: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x156b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x156b38: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x156b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156b3c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x156b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156b40: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x156b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x156b44: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x156b44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x156b48: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x156b48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x156b4c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x156b4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x156b50: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x156b50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x156b54: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x156b54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x156b58: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x156b58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_156b5c:
    // 0x156b5c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x156b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x156b60: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x156b60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156b64: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x156b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156b68: 0x13b00006  beq         $sp, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x156B68u;
    {
        const bool branch_taken_0x156b68 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 16));
        ctx->pc = 0x156B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B68u;
        // 0x156b6c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b68) {
            ctx->pc = 0x156B84u;
            goto label_156b84;
        }
    }
    ctx->pc = 0x156B70u;
    // 0x156b70: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x156b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156b74: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x156b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156b78: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x156b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x156b7c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x156b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x156b80: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x156b80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_156b84:
    // 0x156b84: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x156b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x156b88: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x156b88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x156b8c: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x156b8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x156b90: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x156b90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x156b94: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x156b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156b98: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x156b98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156b9c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x156b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156ba0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x156ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156ba4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x156ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156ba8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x156ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x156bac: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x156bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x156bb0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x156bb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x156bb4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x156bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156bb8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x156bb8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x156bbc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x156bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156bc0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x156bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x156bc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x156bc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x156bc8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x156bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x156bcc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x156bccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x156bd0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x156bd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x156bd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x156bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156bd8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x156bd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x156bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x156BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156BDCu;
        // 0x156be0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156BE4u;
    // 0x156be4: 0x0  nop
    ctx->pc = 0x156be4u;
    // NOP
    ctx->pc = 0x156be8u;
}
