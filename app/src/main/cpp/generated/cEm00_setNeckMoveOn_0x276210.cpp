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

// Function: cEm00_setNeckMoveOn
// Address: 0x276210 - 0x276228
void cEm00_setNeckMoveOn_0x276210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_setNeckMoveOn_0x276210");
#endif

    ctx->pc = 0x276210u;

    // 0x276210: 0x8c8316d4  lw          $v1, 0x16D4($a0)
    ctx->pc = 0x276210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5844)));
    // 0x276214: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x276214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x276218: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x276218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27621c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27621cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x276220: 0x3e00008  jr          $ra
    ctx->pc = 0x276220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276220u;
        // 0x276224: 0xac8316d4  sw          $v1, 0x16D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276228u;
}
