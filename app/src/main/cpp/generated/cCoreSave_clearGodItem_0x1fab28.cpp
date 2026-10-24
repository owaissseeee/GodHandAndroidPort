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

// Function: cCoreSave_clearGodItem
// Address: 0x1fab28 - 0x1fab50
void cCoreSave_clearGodItem_0x1fab28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_clearGodItem_0x1fab28");
#endif

    switch (ctx->pc) {
        case 0x1fab30u: goto label_1fab30;
        default: break;
    }

    ctx->pc = 0x1fab28u;

    // 0x1fab28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fab28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fab2c: 0x0  nop
    ctx->pc = 0x1fab2cu;
    // NOP
label_1fab30:
    // 0x1fab30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fab30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fab34: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fab38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fab38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fab3c: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x1fab3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1fab40: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FAB40u;
    {
        const bool branch_taken_0x1fab40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB40u;
        // 0x1fab44: 0xa04000a8  sb          $zero, 0xA8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab40) {
            ctx->pc = 0x1FAB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fab30;
        }
    }
    ctx->pc = 0x1FAB48u;
    // 0x1fab48: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAB50u;
}
