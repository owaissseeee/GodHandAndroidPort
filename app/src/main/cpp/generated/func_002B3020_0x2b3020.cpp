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

// Function: func_002B3020
// Address: 0x2b3020 - 0x2b3038
void func_002B3020_0x2b3020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B3020_0x2b3020");
#endif

    ctx->pc = 0x2b3020u;

    // 0x2b3020: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2b3020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2b3024: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b3024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3028: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2b3028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2b302c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B302Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B302Cu;
        // 0x2b3030: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B302Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3034u;
    // 0x2b3034: 0x0  nop
    ctx->pc = 0x2b3034u;
    // NOP
    ctx->pc = 0x2b3038u;
}
