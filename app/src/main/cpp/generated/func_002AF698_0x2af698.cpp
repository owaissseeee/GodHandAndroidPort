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

// Function: func_002AF698
// Address: 0x2af698 - 0x2af6a8
void func_002AF698_0x2af698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AF698_0x2af698");
#endif

    ctx->pc = 0x2af698u;

    // 0x2af698: 0xe48d0048  swc1        $f13, 0x48($a0)
    ctx->pc = 0x2af698u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2af69c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF69Cu;
        // 0x2af6a0: 0xe48c0044  swc1        $f12, 0x44($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF6A4u;
    // 0x2af6a4: 0x0  nop
    ctx->pc = 0x2af6a4u;
    // NOP
    ctx->pc = 0x2af6a8u;
}
