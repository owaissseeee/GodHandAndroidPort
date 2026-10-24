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

// Function: GetPointCalcPointLine
// Address: 0x157178 - 0x157220
void GetPointCalcPointLine_0x157178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPointCalcPointLine_0x157178");
#endif

    ctx->pc = 0x157178u;

    // 0x157178: 0xc4880000  lwc1        $f8, 0x0($a0)
    ctx->pc = 0x157178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x15717c: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x15717cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x157180: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x157180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157184: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x157184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x157188: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x157188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15718c: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x15718cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x157190: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x157190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157194: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x157194u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x157198: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x157198u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x15719c: 0xc4870008  lwc1        $f7, 0x8($a0)
    ctx->pc = 0x15719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1571a0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1571a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1571a4: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x1571a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1571a8: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x1571a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1571ac: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x1571acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1571b0: 0x46073181  sub.s       $f6, $f6, $f7
    ctx->pc = 0x1571b0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x1571b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1571b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1571b8: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1571b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1571bc: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1571bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1571c0: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x1571c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1571c4: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x1571c4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x1571c8: 0x460529c2  mul.s       $f7, $f5, $f5
    ctx->pc = 0x1571c8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1571cc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1571ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1571d0: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x1571d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x1571d4: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x1571d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x1571d8: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x1571d8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x1571dc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1571dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1571e0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1571e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1571e4: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x1571e4u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[4]);
    // 0x1571e8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1571e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1571ec: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x1571ecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1571f0: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x1571f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x1571f4: 0x46014200  add.s       $f8, $f8, $f1
    ctx->pc = 0x1571f4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x1571f8: 0xe4e80000  swc1        $f8, 0x0($a3)
    ctx->pc = 0x1571f8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1571fc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1571fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157200: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x157200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x157204: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x157204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x157208: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x157208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15720c: 0xe4e9000c  swc1        $f9, 0xC($a3)
    ctx->pc = 0x15720cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x157210: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x157210u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x157214: 0x3e00008  jr          $ra
    ctx->pc = 0x157214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157214u;
        // 0x157218: 0xe4e10008  swc1        $f1, 0x8($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15721Cu;
    // 0x15721c: 0x0  nop
    ctx->pc = 0x15721cu;
    // NOP
    ctx->pc = 0x157220u;
}
