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

// Function: CustomIDWork_SetOffsetPosY
// Address: 0x2d66f8 - 0x2d6720
void CustomIDWork_SetOffsetPosY_0x2d66f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetOffsetPosY_0x2d66f8");
#endif

    ctx->pc = 0x2d66f8u;

    // 0x2d66f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d66f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d66fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D66FCu;
    {
        const bool branch_taken_0x2d66fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d66fc) {
            ctx->pc = 0x2D6718u;
            goto label_2d6718;
        }
    }
    ctx->pc = 0x2D6704u;
    // 0x2d6704: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d6704u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6708: 0x0  nop
    ctx->pc = 0x2d6708u;
    // NOP
    // 0x2d670c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d670cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d6710: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2d6710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2d6714: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x2d6714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_2d6718:
    // 0x2d6718: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6720u;
}
