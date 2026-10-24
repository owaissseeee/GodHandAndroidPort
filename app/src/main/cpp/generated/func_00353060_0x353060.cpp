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

// Function: func_00353060
// Address: 0x353060 - 0x353098
void func_00353060_0x353060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00353060_0x353060");
#endif

    ctx->pc = 0x353060u;

    // 0x353060: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x353060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x353064: 0x8cc80010  lw          $t0, 0x10($a2)
    ctx->pc = 0x353064u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x353068: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x353068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x35306c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x35306cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x353070: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x353070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x353074: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x353074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x353078: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x353078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x35307c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x35307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x353080: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x353080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x353084: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x353084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x353088: 0xac880014  sw          $t0, 0x14($a0)
    ctx->pc = 0x353088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 8));
    // 0x35308c: 0x3e00008  jr          $ra
    ctx->pc = 0x35308Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35308Cu;
        // 0x353090: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35308Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353094u;
    // 0x353094: 0x0  nop
    ctx->pc = 0x353094u;
    // NOP
    ctx->pc = 0x353098u;
}
