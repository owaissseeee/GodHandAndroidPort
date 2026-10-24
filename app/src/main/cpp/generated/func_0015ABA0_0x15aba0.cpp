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

// Function: func_0015ABA0
// Address: 0x15aba0 - 0x15ada0
void func_0015ABA0_0x15aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015ABA0_0x15aba0");
#endif

    switch (ctx->pc) {
        case 0x15ac2cu: goto label_15ac2c;
        case 0x15acd4u: goto label_15acd4;
        case 0x15ad30u: goto label_15ad30;
        case 0x15ad84u: goto label_15ad84;
        default: break;
    }

    ctx->pc = 0x15aba0u;

    // 0x15aba0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x15aba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x15aba4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x15aba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x15aba8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x15aba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x15abac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15abacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15abb0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15abb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x15abb4: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x15abb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x15abb8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x15abb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x15abbc: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x15abbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15abc0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x15abc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15abc4: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x15abc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15abc8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15abcc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x15abccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15abd0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x15abd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15abd4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x15abd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15abd8: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x15abd8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x15abdc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x15abdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15abe0: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x15abe0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x15abe4: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x15abe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15abe8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x15abe8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15abec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x15abecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15abf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15abf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15abf4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15abf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15abf8: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x15abf8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x15abfc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x15abfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x15ac00: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x15ac00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x15ac04: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x15ac04u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x15ac08: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x15ac08u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x15ac0c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x15ac0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x15ac10: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x15ac10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x15ac14: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x15ac14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x15ac18: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x15ac18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x15ac1c: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x15ac1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15ac20: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x15ac20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x15ac24: 0xc04078a  jal         func_101E28
    ctx->pc = 0x15AC24u;
    SET_GPR_U32(ctx, 31, 0x15AC2Cu);
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x15AC24u, 0x15AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AC2Cu;
label_15ac2c:
    // 0x15ac2c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x15ac2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ac30: 0x0  nop
    ctx->pc = 0x15ac30u;
    // NOP
    // 0x15ac34: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x15AC34u;
    {
        const bool branch_taken_0x15ac34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC34u;
        // 0x15ac38: 0xc7a30020  lwc1        $f3, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac34) {
            ctx->pc = 0x15AC70u;
            goto label_15ac70;
        }
    }
    ctx->pc = 0x15AC3Cu;
    // 0x15ac3c: 0x0  nop
    ctx->pc = 0x15ac3cu;
    // NOP
    // 0x15ac40: 0x0  nop
    ctx->pc = 0x15ac40u;
    // NOP
    // 0x15ac44: 0x4600a083  div.s       $f2, $f20, $f0
    ctx->pc = 0x15ac44u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x15ac48: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x15ac48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15ac4c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x15ac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ac50: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x15ac50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ac54: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15ac54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15ac58: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15ac58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15ac5c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x15ac5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x15ac60: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x15ac60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x15ac64: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x15ac64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15ac68: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x15ac68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15ac6c: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x15ac6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_15ac70:
    // 0x15ac70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15ac74: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x15ac74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15ac78: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x15ac78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15ac7c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x15ac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ac80: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x15ac80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ac84: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x15ac84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15ac88: 0xc7a70008  lwc1        $f7, 0x8($sp)
    ctx->pc = 0x15ac88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15ac8c: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x15ac8cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15ac90: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15ac90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ac94: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x15ac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15ac98: 0x46071902  mul.s       $f4, $f3, $f7
    ctx->pc = 0x15ac98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x15ac9c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x15ac9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15aca0: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x15aca0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x15aca4: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x15aca4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x15aca8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x15aca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x15acac: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x15acacu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x15acb0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x15acb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x15acb4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x15acb4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x15acb8: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x15acb8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15acbc: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x15acbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15acc0: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x15acc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15acc4: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x15acc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x15acc8: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x15acc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15accc: 0xc04078a  jal         func_101E28
    ctx->pc = 0x15ACCCu;
    SET_GPR_U32(ctx, 31, 0x15ACD4u);
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x15ACCCu, 0x15ACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ACD4u;
label_15acd4:
    // 0x15acd4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x15acd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15acd8: 0x0  nop
    ctx->pc = 0x15acd8u;
    // NOP
    // 0x15acdc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x15ACDCu;
    {
        const bool branch_taken_0x15acdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACDCu;
        // 0x15ace0: 0xc7a30030  lwc1        $f3, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acdc) {
            ctx->pc = 0x15AD18u;
            goto label_15ad18;
        }
    }
    ctx->pc = 0x15ACE4u;
    // 0x15ace4: 0x0  nop
    ctx->pc = 0x15ace4u;
    // NOP
    // 0x15ace8: 0x0  nop
    ctx->pc = 0x15ace8u;
    // NOP
    // 0x15acec: 0x4600a083  div.s       $f2, $f20, $f0
    ctx->pc = 0x15acecu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x15acf0: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x15acf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15acf4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x15acf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15acf8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x15acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15acfc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x15acfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x15ad00: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15ad00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15ad04: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x15ad04u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x15ad08: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x15ad08u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x15ad0c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x15ad0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x15ad10: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x15ad10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x15ad14: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x15ad14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_15ad18:
    // 0x15ad18: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x15ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15ad1c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15ad1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ad20: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15ad20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15ad24: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x15ad24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ad28: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x15AD28u;
    SET_GPR_U32(ctx, 31, 0x15AD30u);
    ctx->pc = 0x15AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD28u;
    // 0x15ad2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x15AD28u, 0x15AD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD30u;
label_15ad30:
    // 0x15ad30: 0xc7a80020  lwc1        $f8, 0x20($sp)
    ctx->pc = 0x15ad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x15ad34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ad34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad38: 0xc7a70024  lwc1        $f7, 0x24($sp)
    ctx->pc = 0x15ad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15ad3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ad3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad40: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x15ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ad44: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x15ad44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ad48: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x15ad48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ad4c: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x15ad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15ad50: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x15ad50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15ad54: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x15ad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15ad58: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x15ad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15ad5c: 0xe7a80050  swc1        $f8, 0x50($sp)
    ctx->pc = 0x15ad5cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15ad60: 0xe7a70054  swc1        $f7, 0x54($sp)
    ctx->pc = 0x15ad60u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15ad64: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x15ad64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15ad68: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x15ad68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15ad6c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x15ad6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x15ad70: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x15ad70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15ad74: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x15ad74u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x15ad78: 0xe7a50074  swc1        $f5, 0x74($sp)
    ctx->pc = 0x15ad78u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x15ad7c: 0xc056864  jal         func_15A190
    ctx->pc = 0x15AD7Cu;
    SET_GPR_U32(ctx, 31, 0x15AD84u);
    ctx->pc = 0x15AD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD7Cu;
    // 0x15ad80: 0xe7a60078  swc1        $f6, 0x78($sp) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A190u, 0x15AD7Cu, 0x15AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD84u;
label_15ad84:
    // 0x15ad84: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x15ad84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15ad88: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x15ad88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15ad8c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15ad8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15ad90: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x15ad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15ad94: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x15ad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15ad98: 0x3e00008  jr          $ra
    ctx->pc = 0x15AD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD98u;
        // 0x15ad9c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ADA0u;
}
