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

// Function: cScrSpriteDraw_drawTexCentered
// Address: 0x2c6550 - 0x2c6590
void cScrSpriteDraw_drawTexCentered_0x2c6550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScrSpriteDraw_drawTexCentered_0x2c6550");
#endif

    switch (ctx->pc) {
        case 0x2c6584u: goto label_2c6584;
        default: break;
    }

    ctx->pc = 0x2c6550u;

    // 0x2c6550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c6550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c6554: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c6554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c6558: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c6558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c655c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c6560: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2c6560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6564: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x2c6564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6568: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x2c6568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x2c656c: 0x46017842  mul.s       $f1, $f15, $f1
    ctx->pc = 0x2c656cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x2c6570: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c6570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c6574: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c6574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c6578: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2c6578u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2c657c: 0xc0b16f6  jal         func_2C5BD8
    ctx->pc = 0x2C657Cu;
    SET_GPR_U32(ctx, 31, 0x2C6584u);
    ctx->pc = 0x2C6580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C657Cu;
    // 0x2c6580: 0x46016b41  sub.s       $f13, $f13, $f1 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5BD8u, 0x2C657Cu, 0x2C6584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6584u;
label_2c6584:
    // 0x2c6584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c6584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6588: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6588u;
        // 0x2c658c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6590u;
}
