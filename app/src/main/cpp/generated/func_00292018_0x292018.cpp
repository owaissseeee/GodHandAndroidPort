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

// Function: func_00292018
// Address: 0x292018 - 0x292030
void func_00292018_0x292018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00292018_0x292018");
#endif

    ctx->pc = 0x292018u;

    // 0x292018: 0x8c820510  lw          $v0, 0x510($a0)
    ctx->pc = 0x292018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1296)));
    // 0x29201c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x29201cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x292020: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x292020u;
    {
        const bool branch_taken_0x292020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292020) {
            ctx->pc = 0x292024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292020u;
            // 0x292024: 0xac850510  sw          $a1, 0x510($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 1296), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292028u;
            goto label_292028;
        }
    }
    ctx->pc = 0x292028u;
label_292028:
    // 0x292028: 0x3e00008  jr          $ra
    ctx->pc = 0x292028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292030u;
}
