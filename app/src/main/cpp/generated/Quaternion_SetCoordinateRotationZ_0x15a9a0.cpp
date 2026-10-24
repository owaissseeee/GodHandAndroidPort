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

// Function: Quaternion_SetCoordinateRotationZ
// Address: 0x15a9a0 - 0x15aba0
void Quaternion_SetCoordinateRotationZ_0x15a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Quaternion_SetCoordinateRotationZ_0x15a9a0");
#endif

    switch (ctx->pc) {
        case 0x15aa2cu: goto label_15aa2c;
        case 0x15aad4u: goto label_15aad4;
        case 0x15ab30u: goto label_15ab30;
        case 0x15ab84u: goto label_15ab84;
        default: break;
    }

    ctx->pc = 0x15a9a0u;

    // 0x15a9a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x15a9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x15a9a4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x15a9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x15a9a8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x15a9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x15a9ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15a9acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a9b0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15a9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x15a9b4: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x15a9b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x15a9b8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x15a9b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x15a9bc: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x15a9bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15a9c0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x15a9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15a9c4: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x15a9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a9c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a9cc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x15a9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a9d0: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x15a9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15a9d4: 0x46020982  mul.s       $f6, $f1, $f2
    ctx->pc = 0x15a9d4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15a9d8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x15a9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a9dc: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x15a9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15a9e0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x15a9e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x15a9e4: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x15a9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15a9e8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x15a9e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x15a9ec: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x15a9ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x15a9f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15a9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15a9f4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15a9f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15a9f8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x15a9f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x15a9fc: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x15a9fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x15aa00: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x15aa00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x15aa04: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x15aa04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x15aa08: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x15aa08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x15aa0c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x15aa0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x15aa10: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x15aa10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x15aa14: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x15aa14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x15aa18: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x15aa18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x15aa1c: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x15aa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15aa20: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x15aa20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x15aa24: 0xc04078a  jal         func_101E28
    ctx->pc = 0x15AA24u;
    SET_GPR_U32(ctx, 31, 0x15AA2Cu);
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x15AA24u, 0x15AA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AA2Cu;
label_15aa2c:
    // 0x15aa2c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x15aa2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15aa30: 0x0  nop
    ctx->pc = 0x15aa30u;
    // NOP
    // 0x15aa34: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x15AA34u;
    {
        const bool branch_taken_0x15aa34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA34u;
        // 0x15aa38: 0xc7a30020  lwc1        $f3, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa34) {
            ctx->pc = 0x15AA70u;
            goto label_15aa70;
        }
    }
    ctx->pc = 0x15AA3Cu;
    // 0x15aa3c: 0x0  nop
    ctx->pc = 0x15aa3cu;
    // NOP
    // 0x15aa40: 0x0  nop
    ctx->pc = 0x15aa40u;
    // NOP
    // 0x15aa44: 0x4600a083  div.s       $f2, $f20, $f0
    ctx->pc = 0x15aa44u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x15aa48: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x15aa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15aa4c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x15aa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15aa50: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x15aa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15aa54: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15aa54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15aa58: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15aa58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15aa5c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x15aa5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x15aa60: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x15aa60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x15aa64: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x15aa64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15aa68: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x15aa68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15aa6c: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x15aa6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_15aa70:
    // 0x15aa70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15aa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15aa74: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x15aa74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15aa78: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x15aa78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15aa7c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x15aa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15aa80: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x15aa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15aa84: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x15aa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15aa88: 0xc7a70018  lwc1        $f7, 0x18($sp)
    ctx->pc = 0x15aa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15aa8c: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x15aa8cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15aa90: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x15aa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15aa94: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x15aa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15aa98: 0x46071902  mul.s       $f4, $f3, $f7
    ctx->pc = 0x15aa98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x15aa9c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x15aa9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15aaa0: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x15aaa0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x15aaa4: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x15aaa4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x15aaa8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x15aaa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x15aaac: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x15aaacu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x15aab0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x15aab0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x15aab4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x15aab4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x15aab8: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x15aab8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15aabc: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x15aabcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15aac0: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x15aac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15aac4: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x15aac4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x15aac8: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x15aac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15aacc: 0xc04078a  jal         func_101E28
    ctx->pc = 0x15AACCu;
    SET_GPR_U32(ctx, 31, 0x15AAD4u);
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x15AACCu, 0x15AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AAD4u;
label_15aad4:
    // 0x15aad4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x15aad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15aad8: 0x0  nop
    ctx->pc = 0x15aad8u;
    // NOP
    // 0x15aadc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x15AADCu;
    {
        const bool branch_taken_0x15aadc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AADCu;
        // 0x15aae0: 0xc7a30030  lwc1        $f3, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aadc) {
            ctx->pc = 0x15AB18u;
            goto label_15ab18;
        }
    }
    ctx->pc = 0x15AAE4u;
    // 0x15aae4: 0x0  nop
    ctx->pc = 0x15aae4u;
    // NOP
    // 0x15aae8: 0x0  nop
    ctx->pc = 0x15aae8u;
    // NOP
    // 0x15aaec: 0x4600a083  div.s       $f2, $f20, $f0
    ctx->pc = 0x15aaecu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x15aaf0: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x15aaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15aaf4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x15aaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15aaf8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x15aaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15aafc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x15aafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x15ab00: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15ab00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15ab04: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x15ab04u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x15ab08: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x15ab08u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x15ab0c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x15ab0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x15ab10: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x15ab10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x15ab14: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x15ab14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_15ab18:
    // 0x15ab18: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x15ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15ab1c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15ab1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ab20: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15ab20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15ab24: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x15ab24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ab28: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x15AB28u;
    SET_GPR_U32(ctx, 31, 0x15AB30u);
    ctx->pc = 0x15AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB28u;
    // 0x15ab2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x15AB28u, 0x15AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB30u;
label_15ab30:
    // 0x15ab30: 0xc7a80010  lwc1        $f8, 0x10($sp)
    ctx->pc = 0x15ab30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x15ab34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ab34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab38: 0xc7a70014  lwc1        $f7, 0x14($sp)
    ctx->pc = 0x15ab38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15ab3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ab3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab40: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15ab40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ab44: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x15ab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ab48: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x15ab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ab4c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x15ab4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15ab50: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x15ab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15ab54: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x15ab54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15ab58: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x15ab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15ab5c: 0xe7a80050  swc1        $f8, 0x50($sp)
    ctx->pc = 0x15ab5cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15ab60: 0xe7a70054  swc1        $f7, 0x54($sp)
    ctx->pc = 0x15ab60u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15ab64: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x15ab64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15ab68: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x15ab68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15ab6c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x15ab6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x15ab70: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x15ab70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15ab74: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x15ab74u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x15ab78: 0xe7a50074  swc1        $f5, 0x74($sp)
    ctx->pc = 0x15ab78u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x15ab7c: 0xc056864  jal         func_15A190
    ctx->pc = 0x15AB7Cu;
    SET_GPR_U32(ctx, 31, 0x15AB84u);
    ctx->pc = 0x15AB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB7Cu;
    // 0x15ab80: 0xe7a60078  swc1        $f6, 0x78($sp) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A190u, 0x15AB7Cu, 0x15AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB84u;
label_15ab84:
    // 0x15ab84: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x15ab84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15ab88: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x15ab88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15ab8c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15ab8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15ab90: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x15ab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15ab94: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x15ab94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15ab98: 0x3e00008  jr          $ra
    ctx->pc = 0x15AB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB98u;
        // 0x15ab9c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ABA0u;
}
