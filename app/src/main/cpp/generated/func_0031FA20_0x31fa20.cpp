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

// Function: func_0031FA20
// Address: 0x31fa20 - 0x31fa40
void func_0031FA20_0x31fa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FA20_0x31fa20");
#endif

    ctx->pc = 0x31fa20u;

    // 0x31fa20: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31FA20u;
    {
        const bool branch_taken_0x31fa20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA20u;
        // 0x31fa24: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa20) {
            ctx->pc = 0x31FA38u;
            goto label_31fa38;
        }
    }
    ctx->pc = 0x31FA28u;
    // 0x31fa28: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x31fa28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x31fa2c: 0x244211b8  addiu       $v0, $v0, 0x11B8
    ctx->pc = 0x31fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4536));
    // 0x31fa30: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31fa34: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x31fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_31fa38:
    // 0x31fa38: 0x3e00008  jr          $ra
    ctx->pc = 0x31FA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FA40u;
}
