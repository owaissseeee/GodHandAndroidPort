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

// Function: cCoreSave_addReelItem
// Address: 0x1fae40 - 0x1fae60
void cCoreSave_addReelItem_0x1fae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_addReelItem_0x1fae40");
#endif

    ctx->pc = 0x1fae40u;

    // 0x1fae40: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fae40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fae44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAE44u;
    {
        const bool branch_taken_0x1fae44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE44u;
        // 0x1fae48: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae44) {
            ctx->pc = 0x1FAE58u;
            goto label_1fae58;
        }
    }
    ctx->pc = 0x1FAE4Cu;
    // 0x1fae4c: 0x90820156  lbu         $v0, 0x156($a0)
    ctx->pc = 0x1fae4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 342)));
    // 0x1fae50: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1fae50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fae54: 0xa0820156  sb          $v0, 0x156($a0)
    ctx->pc = 0x1fae54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 342), (uint8_t)GPR_U32(ctx, 2));
label_1fae58:
    // 0x1fae58: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAE60u;
}
