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

// Function: Cmp_a1_Eq_0x37B0
// Address: 0x34db50 - 0x34db60
void Cmp_a1_Eq_0x37B0_0x34db50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmp_a1_Eq_0x37B0_0x34db50");
#endif

    ctx->pc = 0x34db50u;

    // 0x34db50: 0x38a237b0  xori        $v0, $a1, 0x37B0
    ctx->pc = 0x34db50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)14256);
    // 0x34db54: 0x3e00008  jr          $ra
    ctx->pc = 0x34DB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DB54u;
        // 0x34db58: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DB5Cu;
    // 0x34db5c: 0x0  nop
    ctx->pc = 0x34db5cu;
    // NOP
    ctx->pc = 0x34db60u;
}
