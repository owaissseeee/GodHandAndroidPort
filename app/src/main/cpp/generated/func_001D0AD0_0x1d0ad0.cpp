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

// Function: func_001D0AD0
// Address: 0x1d0ad0 - 0x1d0ae0
void func_001D0AD0_0x1d0ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D0AD0_0x1d0ad0");
#endif

    ctx->pc = 0x1d0ad0u;

    // 0x1d0ad0: 0x3c0143e1  lui         $at, 0x43E1
    ctx->pc = 0x1d0ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17377 << 16));
    // 0x1d0ad4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d0ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AD8u;
        // 0x1d0adc: 0xe480066c  swc1        $f0, 0x66C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1644), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0AE0u;
}
