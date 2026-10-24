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

// Function: cHeatSys_GetHeatRatio
// Address: 0x2a9c98 - 0x2a9cc8
void cHeatSys_GetHeatRatio_0x2a9c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cHeatSys_GetHeatRatio_0x2a9c98");
#endif

    ctx->pc = 0x2a9c98u;

    // 0x2a9c98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a9c98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9c9c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2a9c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9ca0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a9ca0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9ca4: 0x0  nop
    ctx->pc = 0x2a9ca4u;
    // NOP
    // 0x2a9ca8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9CA8u;
    {
        const bool branch_taken_0x2a9ca8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a9ca8) {
            ctx->pc = 0x2A9CBCu;
            goto label_2a9cbc;
        }
    }
    ctx->pc = 0x2A9CB0u;
    // 0x2a9cb0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2a9cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9cb4: 0x0  nop
    ctx->pc = 0x2a9cb4u;
    // NOP
    // 0x2a9cb8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2a9cb8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_2a9cbc:
    // 0x2a9cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9CC4u;
    // 0x2a9cc4: 0x0  nop
    ctx->pc = 0x2a9cc4u;
    // NOP
    ctx->pc = 0x2a9cc8u;
}
