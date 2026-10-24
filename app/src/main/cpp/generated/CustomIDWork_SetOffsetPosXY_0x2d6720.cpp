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

// Function: CustomIDWork_SetOffsetPosXY
// Address: 0x2d6720 - 0x2d6768
void CustomIDWork_SetOffsetPosXY_0x2d6720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetOffsetPosXY_0x2d6720");
#endif

    ctx->pc = 0x2d6720u;

    // 0x2d6720: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d6720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6724: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D6724u;
    {
        const bool branch_taken_0x2d6724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6724) {
            ctx->pc = 0x2D6754u;
            goto label_2d6754;
        }
    }
    ctx->pc = 0x2D672Cu;
    // 0x2d672c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d672cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6730: 0x0  nop
    ctx->pc = 0x2d6730u;
    // NOP
    // 0x2d6734: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d6734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d6738: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2d6738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2d673c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2d673cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6740: 0x0  nop
    ctx->pc = 0x2d6740u;
    // NOP
    // 0x2d6744: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d6744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d6748: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2d6748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2d674c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d6750: 0xe4410034  swc1        $f1, 0x34($v0)
    ctx->pc = 0x2d6750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_2d6754:
    // 0x2d6754: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D675Cu;
    // 0x2d675c: 0x0  nop
    ctx->pc = 0x2d675cu;
    // NOP
    // 0x2d6760: 0x0  nop
    ctx->pc = 0x2d6760u;
    // NOP
    // 0x2d6764: 0x0  nop
    ctx->pc = 0x2d6764u;
    // NOP
    ctx->pc = 0x2d6768u;
}
