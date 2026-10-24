#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r603_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r603
{
// Function: __main
// Address: 0x79a050 - 0x79a070
void ps2___main_0x79a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79a050");
#endif

    ctx->pc = 0x79a050u;

    // 0x79a050: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a054: 0x8c62a304  lw          $v0, -0x5CFC($v1)
    ctx->pc = 0x79a054u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79A304u));
    // 0x79a058: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A058u;
    {
        const bool branch_taken_0x79a058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A058u;
        // 0x79a05c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a058) {
            ctx->pc = 0x79A068u;
            goto label_79a068;
        }
    }
    ctx->pc = 0x79A060u;
    // 0x79a060: 0x81e67e8  j           func_799FA0
    ctx->pc = 0x79A060u;
    ctx->pc = 0x79A064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A060u;
    // 0x79a064: 0xac62a304  sw          $v0, -0x5CFC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943492), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799FA0u, 0x79A060u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79A068u;
label_79a068:
    // 0x79a068: 0x3e00008  jr          $ra
    ctx->pc = 0x79A068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A070u;
}
} // namespace gh_r603
