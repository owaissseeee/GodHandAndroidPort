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

// Function: ColiseumBattle_SetCountdown
// Address: 0x1efd50 - 0x1efd70
void ColiseumBattle_SetCountdown_0x1efd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_SetCountdown_0x1efd50");
#endif

    ctx->pc = 0x1efd50u;

    // 0x1efd50: 0x8c820b6c  lw          $v0, 0xB6C($a0)
    ctx->pc = 0x1efd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2924)));
    // 0x1efd54: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1efd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1efd58: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1efd58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1efd5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efd5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efd60: 0x0  nop
    ctx->pc = 0x1efd60u;
    // NOP
    // 0x1efd64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1efd64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1efd68: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD68u;
        // 0x1efd6c: 0xe4800b98  swc1        $f0, 0xB98($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2968), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFD70u;
}
