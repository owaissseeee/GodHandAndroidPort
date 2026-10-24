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

// Function: ColiseumBattle_UpdateCountdown
// Address: 0x1efd70 - 0x1efe70
void ColiseumBattle_UpdateCountdown_0x1efd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_UpdateCountdown_0x1efd70");
#endif

    switch (ctx->pc) {
        case 0x1efd94u: goto label_1efd94;
        case 0x1efe50u: goto label_1efe50;
        default: break;
    }

    ctx->pc = 0x1efd70u;

    // 0x1efd70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1efd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1efd74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1efd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1efd78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1efd78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efd7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1efd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1efd80: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1efd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1efd84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1efd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1efd88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1efd88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efd8c: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1EFD8Cu;
    SET_GPR_U32(ctx, 31, 0x1EFD94u);
    ctx->pc = 0x1EFD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD8Cu;
    // 0x1efd90: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1EFD8Cu, 0x1EFD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD94u;
label_1efd94:
    // 0x1efd94: 0xc6010b98  lwc1        $f1, 0xB98($s0)
    ctx->pc = 0x1efd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efd98: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1efd98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1efd9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1efd9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1efda0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1efda0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efda4: 0x0  nop
    ctx->pc = 0x1efda4u;
    // NOP
    // 0x1efda8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFDA8u;
    {
        const bool branch_taken_0x1efda8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EFDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDA8u;
        // 0x1efdac: 0xe6010b98  swc1        $f1, 0xB98($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2968), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efda8) {
            ctx->pc = 0x1EFDB4u;
            goto label_1efdb4;
        }
    }
    ctx->pc = 0x1EFDB0u;
    // 0x1efdb0: 0xe6020b98  swc1        $f2, 0xB98($s0)
    ctx->pc = 0x1efdb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2968), bits); }
label_1efdb4:
    // 0x1efdb4: 0xc6020b98  lwc1        $f2, 0xB98($s0)
    ctx->pc = 0x1efdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efdb8: 0x24020708  addiu       $v0, $zero, 0x708
    ctx->pc = 0x1efdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x1efdbc: 0x3c0144e1  lui         $at, 0x44E1
    ctx->pc = 0x1efdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17633 << 16));
    // 0x1efdc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1efdc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efdc4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1efdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1efdc8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1efdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1efdcc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1efdccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1efdd0: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1efdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1efdd4: 0x0  nop
    ctx->pc = 0x1efdd4u;
    // NOP
    // 0x1efdd8: 0x0  nop
    ctx->pc = 0x1efdd8u;
    // NOP
    // 0x1efddc: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1efddcu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
    // 0x1efde0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1efde0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1efde4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1efde4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1efde8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1efde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efdec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1efdecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1efdf0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1efdf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1efdf4: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x1efdf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1efdf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efdf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efdfc: 0x0  nop
    ctx->pc = 0x1efdfcu;
    // NOP
    // 0x1efe00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1efe00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1efe04: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1efe04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1efe08: 0x0  nop
    ctx->pc = 0x1efe08u;
    // NOP
    // 0x1efe0c: 0x0  nop
    ctx->pc = 0x1efe0cu;
    // NOP
    // 0x1efe10: 0x46031043  div.s       $f1, $f2, $f3
    ctx->pc = 0x1efe10u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x1efe14: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1efe14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1efe18: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1efe18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1efe1c: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x1efe1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1efe20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efe20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efe24: 0x0  nop
    ctx->pc = 0x1efe24u;
    // NOP
    // 0x1efe28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1efe28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1efe2c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1efe2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1efe30: 0x0  nop
    ctx->pc = 0x1efe30u;
    // NOP
    // 0x1efe34: 0x0  nop
    ctx->pc = 0x1efe34u;
    // NOP
    // 0x1efe38: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x1efe38u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x1efe3c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1efe3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1efe40: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1efe40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1efe44: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1efe44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1efe48: 0xc07cae0  jal         func_1F2B80
    ctx->pc = 0x1EFE48u;
    SET_GPR_U32(ctx, 31, 0x1EFE50u);
    ctx->pc = 0x1EFE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFE48u;
    // 0x1efe4c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2B80u, 0x1EFE48u, 0x1EFE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFE50u;
label_1efe50:
    // 0x1efe50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1efe50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1efe54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1efe54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efe58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1efe58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efe5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE5Cu;
        // 0x1efe60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFE64u;
    // 0x1efe64: 0x0  nop
    ctx->pc = 0x1efe64u;
    // NOP
    // 0x1efe68: 0xac850b9c  sw          $a1, 0xB9C($a0)
    ctx->pc = 0x1efe68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2972), GPR_U32(ctx, 5));
    // 0x1efe6c: 0x0  nop
    ctx->pc = 0x1efe6cu;
    // NOP
    ctx->pc = 0x1efe70u;
}
