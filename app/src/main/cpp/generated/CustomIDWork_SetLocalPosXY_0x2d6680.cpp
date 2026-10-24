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

// Function: CustomIDWork_SetLocalPosXY
// Address: 0x2d6680 - 0x2d66d0
void CustomIDWork_SetLocalPosXY_0x2d6680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetLocalPosXY_0x2d6680");
#endif

    ctx->pc = 0x2d6680u;

    // 0x2d6680: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d6680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6684: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D6684u;
    {
        const bool branch_taken_0x2d6684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6684) {
            ctx->pc = 0x2D66B4u;
            goto label_2d66b4;
        }
    }
    ctx->pc = 0x2D668Cu;
    // 0x2d668c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d668cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6690: 0x0  nop
    ctx->pc = 0x2d6690u;
    // NOP
    // 0x2d6694: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d6694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d6698: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2d6698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2d669c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2d669cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d66a0: 0x0  nop
    ctx->pc = 0x2d66a0u;
    // NOP
    // 0x2d66a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d66a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d66a8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2d66a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2d66ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d66acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d66b0: 0xe441003c  swc1        $f1, 0x3C($v0)
    ctx->pc = 0x2d66b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_2d66b4:
    // 0x2d66b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D66B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D66B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D66BCu;
    // 0x2d66bc: 0x0  nop
    ctx->pc = 0x2d66bcu;
    // NOP
    // 0x2d66c0: 0x0  nop
    ctx->pc = 0x2d66c0u;
    // NOP
    // 0x2d66c4: 0x0  nop
    ctx->pc = 0x2d66c4u;
    // NOP
    // 0x2d66c8: 0x0  nop
    ctx->pc = 0x2d66c8u;
    // NOP
    // 0x2d66cc: 0x0  nop
    ctx->pc = 0x2d66ccu;
    // NOP
    ctx->pc = 0x2d66d0u;
}
