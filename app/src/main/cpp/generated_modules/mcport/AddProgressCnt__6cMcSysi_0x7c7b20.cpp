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
// Function: AddProgressCnt__6cMcSysi
// Address: 0x7c7b20 - 0x7c7b50
void AddProgressCnt__6cMcSysi_0x7c7b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddProgressCnt__6cMcSysi_0x7c7b20");
#endif

    ctx->pc = 0x7c7b20u;

    // 0x7c7b20: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x7c7b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x7c7b24: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C7B24u;
    {
        const bool branch_taken_0x7c7b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7B24u;
        // 0x7c7b28: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7b24) {
            ctx->pc = 0x7C7B44u;
            goto label_7c7b44;
        }
    }
    ctx->pc = 0x7C7B2Cu;
    // 0x7c7b2c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x7c7b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x7c7b30: 0x24630098  addiu       $v1, $v1, 0x98
    ctx->pc = 0x7c7b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
    // 0x7c7b34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x7c7b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x7c7b38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c7b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c7b3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c7b40: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x7c7b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_7c7b44:
    // 0x7c7b44: 0x3e00008  jr          $ra
    ctx->pc = 0x7C7B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C7B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C7B4Cu;
    // 0x7c7b4c: 0x0  nop
    ctx->pc = 0x7c7b4cu;
    // NOP
    ctx->pc = 0x7c7b50u;
}
} // namespace gh_mcport
