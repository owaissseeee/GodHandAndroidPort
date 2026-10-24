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

// Function: CustomIDWork_ResetScaleAnim
// Address: 0x2d6a30 - 0x2d6a60
void CustomIDWork_ResetScaleAnim_0x2d6a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_ResetScaleAnim_0x2d6a30");
#endif

    ctx->pc = 0x2d6a30u;

    // 0x2d6a30: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d6a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6a34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D6A34u;
    {
        const bool branch_taken_0x2d6a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6a34) {
            ctx->pc = 0x2D6A54u;
            goto label_2d6a54;
        }
    }
    ctx->pc = 0x2D6A3Cu;
    // 0x2d6a3c: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x2d6a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6a40: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x2d6a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x2d6a44: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2d6a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2d6a48: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x2d6a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6a4c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d6a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6a50: 0xe4410044  swc1        $f1, 0x44($v0)
    ctx->pc = 0x2d6a50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_2d6a54:
    // 0x2d6a54: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6A5Cu;
    // 0x2d6a5c: 0x0  nop
    ctx->pc = 0x2d6a5cu;
    // NOP
    ctx->pc = 0x2d6a60u;
}
