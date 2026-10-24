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

// Function: MtxGetScaleVec
// Address: 0x148160 - 0x148200
void MtxGetScaleVec_0x148160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MtxGetScaleVec_0x148160");
#endif

    switch (ctx->pc) {
        case 0x1481f4u: goto label_1481f4;
        default: break;
    }

    ctx->pc = 0x148160u;

    // 0x148160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x148160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x148164: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x148164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x148168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14816c: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x14816cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x148170: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x148170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148174: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x148174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148178: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x148178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x14817c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x14817cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x148180: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x148180u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x148184: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x148184u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x148188: 0x0  nop
    ctx->pc = 0x148188u;
    // NOP
    // 0x14818c: 0x0  nop
    ctx->pc = 0x14818cu;
    // NOP
    // 0x148190: 0x460c0304  c1          0xC0304
    ctx->pc = 0x148190u;
    ctx->f[12] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x148194: 0xc4ad0010  lwc1        $f13, 0x10($a1)
    ctx->pc = 0x148194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x148198: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x148198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14819c: 0x460d6b42  mul.s       $f13, $f13, $f13
    ctx->pc = 0x14819cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1481a0: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1481a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1481a4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1481a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1481a8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1481a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1481ac: 0x46016b40  add.s       $f13, $f13, $f1
    ctx->pc = 0x1481acu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x1481b0: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x1481b0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1481b4: 0x0  nop
    ctx->pc = 0x1481b4u;
    // NOP
    // 0x1481b8: 0x0  nop
    ctx->pc = 0x1481b8u;
    // NOP
    // 0x1481bc: 0x460d0344  c1          0xD0344
    ctx->pc = 0x1481bcu;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x1481c0: 0xc4ae0020  lwc1        $f14, 0x20($a1)
    ctx->pc = 0x1481c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1481c4: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x1481c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1481c8: 0x460e7382  mul.s       $f14, $f14, $f14
    ctx->pc = 0x1481c8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x1481cc: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x1481ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1481d0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1481d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1481d4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1481d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1481d8: 0x46017380  add.s       $f14, $f14, $f1
    ctx->pc = 0x1481d8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[1]);
    // 0x1481dc: 0x46007380  add.s       $f14, $f14, $f0
    ctx->pc = 0x1481dcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x1481e0: 0x0  nop
    ctx->pc = 0x1481e0u;
    // NOP
    // 0x1481e4: 0x0  nop
    ctx->pc = 0x1481e4u;
    // NOP
    // 0x1481e8: 0x460e0384  c1          0xE0384
    ctx->pc = 0x1481e8u;
    ctx->f[14] = ps2FpuSqrt(ctx->fcr31, ctx->f[14]);
    // 0x1481ec: 0xc0541c4  jal         func_150710
    ctx->pc = 0x1481ECu;
    SET_GPR_U32(ctx, 31, 0x1481F4u);
    ctx->pc = 0x150710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150710u, 0x1481ECu, 0x1481F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1481F4u;
label_1481f4:
    // 0x1481f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1481f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1481f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1481F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1481FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1481F8u;
        // 0x1481fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1481F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148200u;
}
