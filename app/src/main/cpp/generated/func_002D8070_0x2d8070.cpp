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

// Function: func_002D8070
// Address: 0x2d8070 - 0x2d81a0
void func_002D8070_0x2d8070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D8070_0x2d8070");
#endif

    ctx->pc = 0x2d8070u;

    // 0x2d8070: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2d8070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8074: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d8074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d8078: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2d8078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2d807c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d807cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8080: 0xc4416158  lwc1        $f1, 0x6158($v0)
    ctx->pc = 0x2d8080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8084: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d8084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d8088: 0x0  nop
    ctx->pc = 0x2d8088u;
    // NOP
    // 0x2d808c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D808Cu;
    {
        const bool branch_taken_0x2d808c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D8090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D808Cu;
        // 0x2d8090: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d808c) {
            ctx->pc = 0x2D809Cu;
            goto label_2d809c;
        }
    }
    ctx->pc = 0x2D8094u;
    // 0x2d8094: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d8094u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d8098: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x2d8098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_2d809c:
    // 0x2d809c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d809cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d80a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d80a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d80a4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2d80a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2d80a8: 0xc441615c  lwc1        $f1, 0x615C($v0)
    ctx->pc = 0x2d80a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d80ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d80acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d80b0: 0x0  nop
    ctx->pc = 0x2d80b0u;
    // NOP
    // 0x2d80b4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D80B4u;
    {
        const bool branch_taken_0x2d80b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D80B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D80B4u;
        // 0x2d80b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d80b4) {
            ctx->pc = 0x2D80C4u;
            goto label_2d80c4;
        }
    }
    ctx->pc = 0x2D80BCu;
    // 0x2d80bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d80bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d80c0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d80c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2d80c4:
    // 0x2d80c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d80c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d80c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d80cc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2d80ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2d80d0: 0xc4416160  lwc1        $f1, 0x6160($v0)
    ctx->pc = 0x2d80d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d80d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d80d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d80d8: 0x0  nop
    ctx->pc = 0x2d80d8u;
    // NOP
    // 0x2d80dc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D80DCu;
    {
        const bool branch_taken_0x2d80dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D80E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D80DCu;
        // 0x2d80e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d80dc) {
            ctx->pc = 0x2D80ECu;
            goto label_2d80ec;
        }
    }
    ctx->pc = 0x2D80E4u;
    // 0x2d80e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d80e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d80e8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d80e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2d80ec:
    // 0x2d80ec: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x2d80ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2d80f0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2d80f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2d80f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d80f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d80f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2d80f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2d80fc: 0x4263a  dsrl        $a0, $a0, 24
    ctx->pc = 0x2d80fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 24);
    // 0x2d8100: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2d8100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2d8104: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2d8104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2d8108: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x2d8108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x2d810c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2d810cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d8110: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d8110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d8114: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2D8114u;
    {
        const bool branch_taken_0x2d8114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8114u;
        // 0x2d8118: 0xfcc20000  sd          $v0, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8114) {
            ctx->pc = 0x2D8158u;
            goto label_2d8158;
        }
    }
    ctx->pc = 0x2D811Cu;
    // 0x2d811c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d811cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d8120: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d8120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d8124: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d8124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d8128: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2d8128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2d812c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2d812cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2d8130: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d8130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d8134: 0xc4406150  lwc1        $f0, 0x6150($v0)
    ctx->pc = 0x2d8134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8138: 0xc4416154  lwc1        $f1, 0x6154($v0)
    ctx->pc = 0x2d8138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d813c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d813cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d8140: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d8140u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2d8144: 0x46016043  div.s       $f1, $f12, $f1
    ctx->pc = 0x2d8144u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[1]);
    // 0x2d8148: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d8148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d814c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d814cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d8150: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8150u;
    {
        const bool branch_taken_0x2d8150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8150u;
        // 0x2d8154: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8150) {
            ctx->pc = 0x2D8160u;
            goto label_2d8160;
        }
    }
    ctx->pc = 0x2D8158u;
label_2d8158:
    // 0x2d8158: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2d8158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2d815c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d815cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d8160:
    // 0x2d8160: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d8160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d8164: 0x0  nop
    ctx->pc = 0x2d8164u;
    // NOP
    // 0x2d8168: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d8168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d816c: 0x0  nop
    ctx->pc = 0x2d816cu;
    // NOP
    // 0x2d8170: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D8170u;
    {
        const bool branch_taken_0x2d8170 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d8170) {
            ctx->pc = 0x2D8174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8170u;
            // 0x2d8174: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8178u;
            goto label_2d8178;
        }
    }
    ctx->pc = 0x2D8178u;
label_2d8178:
    // 0x2d8178: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2d8178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2d817c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d817cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d8180: 0x0  nop
    ctx->pc = 0x2d8180u;
    // NOP
    // 0x2d8184: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d8184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d8188: 0x0  nop
    ctx->pc = 0x2d8188u;
    // NOP
    // 0x2d818c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D818Cu;
    {
        const bool branch_taken_0x2d818c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d818c) {
            ctx->pc = 0x2D8190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D818Cu;
            // 0x2d8190: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8194u;
            goto label_2d8194;
        }
    }
    ctx->pc = 0x2D8194u;
label_2d8194:
    // 0x2d8194: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8194u;
        // 0x2d8198: 0xe4a0001c  swc1        $f0, 0x1C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D819Cu;
    // 0x2d819c: 0x0  nop
    ctx->pc = 0x2d819cu;
    // NOP
    ctx->pc = 0x2d81a0u;
}
