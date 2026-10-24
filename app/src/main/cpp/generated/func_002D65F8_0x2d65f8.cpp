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

// Function: func_002D65F8
// Address: 0x2d65f8 - 0x2d6630
void func_002D65F8_0x2d65f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D65F8_0x2d65f8");
#endif

    ctx->pc = 0x2d65f8u;

    // 0x2d65f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d65fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D65FCu;
    {
        const bool branch_taken_0x2d65fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d65fc) {
            ctx->pc = 0x2D6620u;
            goto label_2d6620;
        }
    }
    ctx->pc = 0x2D6604u;
    // 0x2d6604: 0xe44c0070  swc1        $f12, 0x70($v0)
    ctx->pc = 0x2d6604u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2d6608: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d6608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d660c: 0xe44d0074  swc1        $f13, 0x74($v0)
    ctx->pc = 0x2d660cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2d6610: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d6610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6614: 0xe46e0078  swc1        $f14, 0x78($v1)
    ctx->pc = 0x2d6614u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x2d6618: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d6618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d661c: 0xe44f007c  swc1        $f15, 0x7C($v0)
    ctx->pc = 0x2d661cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
label_2d6620:
    // 0x2d6620: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6628u;
    // 0x2d6628: 0x0  nop
    ctx->pc = 0x2d6628u;
    // NOP
    // 0x2d662c: 0x0  nop
    ctx->pc = 0x2d662cu;
    // NOP
    ctx->pc = 0x2d6630u;
}
