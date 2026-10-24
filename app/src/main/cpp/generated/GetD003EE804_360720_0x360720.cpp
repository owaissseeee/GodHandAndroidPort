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

// Function: GetD003EE804_360720
// Address: 0x360720 - 0x360740
void GetD003EE804_360720_0x360720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetD003EE804_360720_0x360720");
#endif

    ctx->pc = 0x360720u;

    // 0x360720: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x360720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x360724: 0x3e00008  jr          $ra
    ctx->pc = 0x360724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360724u;
        // 0x360728: 0x8c62e804  lw          $v0, -0x17FC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961156)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36072Cu;
    // 0x36072c: 0x0  nop
    ctx->pc = 0x36072cu;
    // NOP
    // 0x360730: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x360730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x360734: 0x0  nop
    ctx->pc = 0x360734u;
    // NOP
    // 0x360738: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x360738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x36073c: 0x0  nop
    ctx->pc = 0x36073cu;
    // NOP
    ctx->pc = 0x360740u;
}
