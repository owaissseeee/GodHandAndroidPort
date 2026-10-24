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

// Function: Obj35D0_SetFields_0_4_8_C_D1B0
// Address: 0x35d1b0 - 0x35d1c8
void Obj35D0_SetFields_0_4_8_C_D1B0_0x35d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj35D0_SetFields_0_4_8_C_D1B0_0x35d1b0");
#endif

    ctx->pc = 0x35d1b0u;

    // 0x35d1b0: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x35d1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x35d1b4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x35d1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x35d1b8: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x35d1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x35d1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x35D1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D1BCu;
        // 0x35d1c0: 0xac870008  sw          $a3, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D1C4u;
    // 0x35d1c4: 0x0  nop
    ctx->pc = 0x35d1c4u;
    // NOP
    ctx->pc = 0x35d1c8u;
}
