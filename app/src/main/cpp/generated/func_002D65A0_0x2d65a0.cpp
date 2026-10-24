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

// Function: func_002D65A0
// Address: 0x2d65a0 - 0x2d65d0
void func_002D65A0_0x2d65a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D65A0_0x2d65a0");
#endif

    ctx->pc = 0x2d65a0u;

    // 0x2d65a0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d65a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d65a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D65A4u;
    {
        const bool branch_taken_0x2d65a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d65a4) {
            ctx->pc = 0x2D65BCu;
            goto label_2d65bc;
        }
    }
    ctx->pc = 0x2D65ACu;
    // 0x2d65ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d65acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d65b0: 0x0  nop
    ctx->pc = 0x2d65b0u;
    // NOP
    // 0x2d65b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d65b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d65b8: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x2d65b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
label_2d65bc:
    // 0x2d65bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D65BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D65BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D65C4u;
    // 0x2d65c4: 0x0  nop
    ctx->pc = 0x2d65c4u;
    // NOP
    // 0x2d65c8: 0x0  nop
    ctx->pc = 0x2d65c8u;
    // NOP
    // 0x2d65cc: 0x0  nop
    ctx->pc = 0x2d65ccu;
    // NOP
    ctx->pc = 0x2d65d0u;
}
