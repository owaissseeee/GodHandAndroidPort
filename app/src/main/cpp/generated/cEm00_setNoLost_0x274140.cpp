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

// Function: cEm00_setNoLost
// Address: 0x274140 - 0x274150
void cEm00_setNoLost_0x274140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_setNoLost_0x274140");
#endif

    ctx->pc = 0x274140u;

    // 0x274140: 0x8c8216d4  lw          $v0, 0x16D4($a0)
    ctx->pc = 0x274140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5844)));
    // 0x274144: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x274144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x274148: 0x3e00008  jr          $ra
    ctx->pc = 0x274148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274148u;
        // 0x27414c: 0xac8216d4  sw          $v0, 0x16D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274150u;
}
