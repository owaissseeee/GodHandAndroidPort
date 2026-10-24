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

// Function: CustomIDWork_SetLocalPosX
// Address: 0x2d6630 - 0x2d6658
void CustomIDWork_SetLocalPosX_0x2d6630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetLocalPosX_0x2d6630");
#endif

    ctx->pc = 0x2d6630u;

    // 0x2d6630: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d6630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6634: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D6634u;
    {
        const bool branch_taken_0x2d6634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6634) {
            ctx->pc = 0x2D6650u;
            goto label_2d6650;
        }
    }
    ctx->pc = 0x2D663Cu;
    // 0x2d663c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d663cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6640: 0x0  nop
    ctx->pc = 0x2d6640u;
    // NOP
    // 0x2d6644: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d6644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d6648: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2d6648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2d664c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2d664cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_2d6650:
    // 0x2d6650: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6658u;
}
