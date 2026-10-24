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

// Function: func_002D81A0
// Address: 0x2d81a0 - 0x2d82a0
void func_002D81A0_0x2d81a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D81A0_0x2d81a0");
#endif

    ctx->pc = 0x2d81a0u;

    // 0x2d81a0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2d81a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d81a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d81a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d81a8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2d81a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2d81ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d81acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d81b0: 0xc4416158  lwc1        $f1, 0x6158($v0)
    ctx->pc = 0x2d81b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d81b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d81b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d81b8: 0x0  nop
    ctx->pc = 0x2d81b8u;
    // NOP
    // 0x2d81bc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D81BCu;
    {
        const bool branch_taken_0x2d81bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D81C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81BCu;
        // 0x2d81c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d81bc) {
            ctx->pc = 0x2D81CCu;
            goto label_2d81cc;
        }
    }
    ctx->pc = 0x2D81C4u;
    // 0x2d81c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d81c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d81c8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x2d81c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_2d81cc:
    // 0x2d81cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d81ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d81d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d81d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d81d4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2d81d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2d81d8: 0xc441615c  lwc1        $f1, 0x615C($v0)
    ctx->pc = 0x2d81d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d81dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d81dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d81e0: 0x0  nop
    ctx->pc = 0x2d81e0u;
    // NOP
    // 0x2d81e4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D81E4u;
    {
        const bool branch_taken_0x2d81e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D81E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D81E4u;
        // 0x2d81e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d81e4) {
            ctx->pc = 0x2D81F4u;
            goto label_2d81f4;
        }
    }
    ctx->pc = 0x2D81ECu;
    // 0x2d81ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d81ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d81f0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d81f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2d81f4:
    // 0x2d81f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d81f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d81f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d81fc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2d81fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2d8200: 0xc4416160  lwc1        $f1, 0x6160($v0)
    ctx->pc = 0x2d8200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8204: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d8204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d8208: 0x0  nop
    ctx->pc = 0x2d8208u;
    // NOP
    // 0x2d820c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D820Cu;
    {
        const bool branch_taken_0x2d820c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D8210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D820Cu;
        // 0x2d8210: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d820c) {
            ctx->pc = 0x2D821Cu;
            goto label_2d821c;
        }
    }
    ctx->pc = 0x2D8214u;
    // 0x2d8214: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d8214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d8218: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d8218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2d821c:
    // 0x2d821c: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x2d821cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2d8220: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2d8220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2d8224: 0x31e3a  dsrl        $v1, $v1, 24
    ctx->pc = 0x2d8224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 24);
    // 0x2d8228: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2d8228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2d822c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2d822cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2d8230: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d8230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d8234: 0x4243a  dsrl        $a0, $a0, 16
    ctx->pc = 0x2d8234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 16);
    // 0x2d8238: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d8238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d823c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2d823cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2d8240: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2d8240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2d8244: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2d8244u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2d8248: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d8248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d824c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2d824cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d8250: 0xc4606150  lwc1        $f0, 0x6150($v1)
    ctx->pc = 0x2d8250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8254: 0xc4616154  lwc1        $f1, 0x6154($v1)
    ctx->pc = 0x2d8254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8258: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2d8258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2d825c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d825cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d8260: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d8260u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d8264: 0x3c01c37f  lui         $at, 0xC37F
    ctx->pc = 0x2d8264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50047 << 16));
    // 0x2d8268: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d8268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d826c: 0x0  nop
    ctx->pc = 0x2d826cu;
    // NOP
    // 0x2d8270: 0x0  nop
    ctx->pc = 0x2d8270u;
    // NOP
    // 0x2d8274: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d8274u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2d8278: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2d8278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2d827c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2d827cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2d8280: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x2d8280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x2d8284: 0xc4616150  lwc1        $f1, 0x6150($v1)
    ctx->pc = 0x2d8284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8288: 0xc4606154  lwc1        $f0, 0x6154($v1)
    ctx->pc = 0x2d8288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d828c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d828cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d8290: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2d8290u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
    // 0x2d8294: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8294u;
        // 0x2d8298: 0xe4a2001c  swc1        $f2, 0x1C($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D829Cu;
    // 0x2d829c: 0x0  nop
    ctx->pc = 0x2d829cu;
    // NOP
    ctx->pc = 0x2d82a0u;
}
