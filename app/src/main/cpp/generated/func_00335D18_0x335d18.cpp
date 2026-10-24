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

// Function: func_00335D18
// Address: 0x335d18 - 0x335d40
void func_00335D18_0x335d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335D18_0x335d18");
#endif

    ctx->pc = 0x335d18u;

    // 0x335d18: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x335D18u;
    {
        const bool branch_taken_0x335d18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x335D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D18u;
        // 0x335d1c: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d18) {
            ctx->pc = 0x335D30u;
            goto label_335d30;
        }
    }
    ctx->pc = 0x335D20u;
    // 0x335d20: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x335d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x335d24: 0xac40a4d0  sw          $zero, -0x5B30($v0)
    ctx->pc = 0x335d24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943952), GPR_U32(ctx, 0));
    // 0x335d28: 0x3e00008  jr          $ra
    ctx->pc = 0x335D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D28u;
        // 0x335d2c: 0xac60a4d4  sw          $zero, -0x5B2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943956), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335D30u;
label_335d30:
    // 0x335d30: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x335d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x335d34: 0xac44a4d0  sw          $a0, -0x5B30($v0)
    ctx->pc = 0x335d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943952), GPR_U32(ctx, 4));
    // 0x335d38: 0x3e00008  jr          $ra
    ctx->pc = 0x335D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D38u;
        // 0x335d3c: 0xac65a4d4  sw          $a1, -0x5B2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943956), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335D40u;
}
