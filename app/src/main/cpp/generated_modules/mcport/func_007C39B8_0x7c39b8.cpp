#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007C39B8
// Address: 0x7c39b8 - 0x7c39e0
void func_007C39B8_0x7c39b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007C39B8_0x7c39b8");
#endif

    ctx->pc = 0x7c39b8u;

    // 0x7c39b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x7c39b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x7c39bc: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C39BCu;
    {
        const bool branch_taken_0x7c39bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c39bc) {
            ctx->pc = 0x7C39D8u;
            goto label_7c39d8;
        }
    }
    ctx->pc = 0x7C39C4u;
    // 0x7c39c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C39C4u;
    {
        const bool branch_taken_0x7c39c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C39C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C39C4u;
        // 0x7c39c8: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c39c4) {
            ctx->pc = 0x7C39D8u;
            goto label_7c39d8;
        }
    }
    ctx->pc = 0x7C39CCu;
    // 0x7c39cc: 0x24431740  addiu       $v1, $v0, 0x1740
    ctx->pc = 0x7c39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c39d0: 0xac401740  sw          $zero, 0x1740($v0)
    ctx->pc = 0x7c39d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5952), GPR_U32(ctx, 0));
    // 0x7c39d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x7c39d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_7c39d8:
    // 0x7c39d8: 0x3e00008  jr          $ra
    ctx->pc = 0x7C39D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C39D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C39E0u;
}
} // namespace gh_mcport
