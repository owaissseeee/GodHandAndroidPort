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

// Function: Obj34D8_SetFields_0_4
// Address: 0x34deb8 - 0x34dec8
void Obj34D8_SetFields_0_4_0x34deb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj34D8_SetFields_0_4_0x34deb8");
#endif

    ctx->pc = 0x34deb8u;

    // 0x34deb8: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x34deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x34debc: 0x3e00008  jr          $ra
    ctx->pc = 0x34DEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DEBCu;
        // 0x34dec0: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DEC4u;
    // 0x34dec4: 0x0  nop
    ctx->pc = 0x34dec4u;
    // NOP
    ctx->pc = 0x34dec8u;
}
