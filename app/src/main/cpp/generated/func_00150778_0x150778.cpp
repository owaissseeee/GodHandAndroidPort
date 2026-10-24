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

// Function: func_00150778
// Address: 0x150778 - 0x1507b8
void func_00150778_0x150778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00150778_0x150778");
#endif

    ctx->pc = 0x150778u;

    // 0x150778: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x150778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15077c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x15077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150780: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x150780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x150784: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x150784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x150788: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x150788u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15078c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x15078cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x150790: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x150790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150794: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x150794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150798: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x150798u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15079c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x15079cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1507a0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1507a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1507a4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1507a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1507a8: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1507a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1507ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1507acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1507b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1507B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1507B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507B0u;
        // 0x1507b4: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1507B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1507B8u;
}
