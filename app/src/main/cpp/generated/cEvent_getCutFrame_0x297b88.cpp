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

// Function: cEvent_getCutFrame
// Address: 0x297b88 - 0x297b98
void cEvent_getCutFrame_0x297b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_getCutFrame_0x297b88");
#endif

    ctx->pc = 0x297b88u;

    // 0x297b88: 0x3c020000  lui         $v0, 0x0
    ctx->pc = 0x297b88u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297B88u) & 0xFFFFu)) << 16));
    // 0x297b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x297B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B8Cu;
        // 0x297b90: 0xc4400014  lwc1        $f0, 0x14($v0) (Delay Slot)
        /* runtime-relocated */ { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297B90u) & 0xFFFFu)))); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297B94u;
    // 0x297b94: 0x0  nop
    ctx->pc = 0x297b94u;
    // NOP
    ctx->pc = 0x297b98u;
}
