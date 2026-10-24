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

// Function: func_002D65D0
// Address: 0x2d65d0 - 0x2d65f8
void func_002D65D0_0x2d65d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D65D0_0x2d65d0");
#endif

    ctx->pc = 0x2d65d0u;

    // 0x2d65d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d65d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D65D4u;
    {
        const bool branch_taken_0x2d65d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d65d4) {
            ctx->pc = 0x2D65ECu;
            goto label_2d65ec;
        }
    }
    ctx->pc = 0x2D65DCu;
    // 0x2d65dc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D65DCu;
    {
        const bool branch_taken_0x2d65dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d65dc) {
            ctx->pc = 0x2D65ECu;
            goto label_2d65ec;
        }
    }
    ctx->pc = 0x2D65E4u;
    // 0x2d65e4: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x2d65e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d65e8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2d65e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2d65ec:
    // 0x2d65ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D65ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D65ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D65F4u;
    // 0x2d65f4: 0x0  nop
    ctx->pc = 0x2d65f4u;
    // NOP
    ctx->pc = 0x2d65f8u;
}
