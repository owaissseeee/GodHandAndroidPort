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

// Function: func_002B3038
// Address: 0x2b3038 - 0x2b3050
void func_002B3038_0x2b3038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B3038_0x2b3038");
#endif

    ctx->pc = 0x2b3038u;

    // 0x2b3038: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2b3038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2b303c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b303cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3040: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2b3040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2b3044: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3044u;
        // 0x2b3048: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B304Cu;
    // 0x2b304c: 0x0  nop
    ctx->pc = 0x2b304cu;
    // NOP
    ctx->pc = 0x2b3050u;
}
