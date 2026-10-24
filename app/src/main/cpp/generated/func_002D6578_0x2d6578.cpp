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

// Function: func_002D6578
// Address: 0x2d6578 - 0x2d65a0
void func_002D6578_0x2d6578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D6578_0x2d6578");
#endif

    ctx->pc = 0x2d6578u;

    // 0x2d6578: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d6578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d657c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D657Cu;
    {
        const bool branch_taken_0x2d657c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d657c) {
            ctx->pc = 0x2D6594u;
            goto label_2d6594;
        }
    }
    ctx->pc = 0x2D6584u;
    // 0x2d6584: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d6584u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6588: 0x0  nop
    ctx->pc = 0x2d6588u;
    // NOP
    // 0x2d658c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d658cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d6590: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2d6590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
label_2d6594:
    // 0x2d6594: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D659Cu;
    // 0x2d659c: 0x0  nop
    ctx->pc = 0x2d659cu;
    // NOP
    ctx->pc = 0x2d65a0u;
}
