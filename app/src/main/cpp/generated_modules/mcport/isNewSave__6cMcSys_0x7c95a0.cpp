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
// Function: isNewSave__6cMcSys
// Address: 0x7c95a0 - 0x7c95d0
void isNewSave__6cMcSys_0x7c95a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isNewSave__6cMcSys_0x7c95a0");
#endif

    ctx->pc = 0x7c95a0u;

    // 0x7c95a0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x7c95a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x7c95a4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x7c95a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x7c95a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c95a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c95ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C95ACu;
    {
        const bool branch_taken_0x7c95ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C95B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C95ACu;
        // 0x7c95b0: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c95ac) {
            ctx->pc = 0x7C95C4u;
            goto label_7c95c4;
        }
    }
    ctx->pc = 0x7C95B4u;
    // 0x7c95b4: 0x8c621770  lw          $v0, 0x1770($v1)
    ctx->pc = 0x7c95b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6000)));
    // 0x7c95b8: 0x28420096  slti        $v0, $v0, 0x96
    ctx->pc = 0x7c95b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x7c95bc: 0x3e00008  jr          $ra
    ctx->pc = 0x7C95BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C95BCu;
        // 0x7c95c0: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C95BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C95C4u;
label_7c95c4:
    // 0x7c95c4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C95C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C95C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C95C4u;
        // 0x7c95c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C95C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C95CCu;
    // 0x7c95cc: 0x0  nop
    ctx->pc = 0x7c95ccu;
    // NOP
    ctx->pc = 0x7c95d0u;
}
} // namespace gh_mcport
