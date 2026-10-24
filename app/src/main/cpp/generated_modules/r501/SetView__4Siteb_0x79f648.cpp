#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: SetView__4Siteb
// Address: 0x79f648 - 0x79f680
void SetView__4Siteb_0x79f648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetView__4Siteb_0x79f648");
#endif

    ctx->pc = 0x79f648u;

    // 0x79f648: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79F648u;
    {
        const bool branch_taken_0x79f648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F648u;
        // 0x79f64c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f648) {
            ctx->pc = 0x79F668u;
            goto label_79f668;
        }
    }
    ctx->pc = 0x79F650u;
    // 0x79f650: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x79f650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x79f654: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79f654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79f658: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79f658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x79f65c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79f65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79f660: 0x3e00008  jr          $ra
    ctx->pc = 0x79F660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F660u;
        // 0x79f664: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79F660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79F668u;
label_79f668:
    // 0x79f668: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x79f668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x79f66c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x79f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x79f670: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79f670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79f674: 0x3e00008  jr          $ra
    ctx->pc = 0x79F674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F674u;
        // 0x79f678: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79F674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79F67Cu;
    // 0x79f67c: 0x0  nop
    ctx->pc = 0x79f67cu;
    // NOP
    ctx->pc = 0x79f680u;
}
} // namespace gh_r501
