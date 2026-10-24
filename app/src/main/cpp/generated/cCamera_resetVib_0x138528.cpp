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

// Function: cCamera_resetVib
// Address: 0x138528 - 0x138558
void cCamera_resetVib_0x138528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCamera_resetVib_0x138528");
#endif

    ctx->pc = 0x138528u;

    // 0x138528: 0xa0800264  sb          $zero, 0x264($a0)
    ctx->pc = 0x138528u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 612), (uint8_t)GPR_U32(ctx, 0));
    // 0x13852c: 0xac800274  sw          $zero, 0x274($a0)
    ctx->pc = 0x13852cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 0));
    // 0x138530: 0xac800268  sw          $zero, 0x268($a0)
    ctx->pc = 0x138530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 616), GPR_U32(ctx, 0));
    // 0x138534: 0xac800270  sw          $zero, 0x270($a0)
    ctx->pc = 0x138534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 0));
    // 0x138538: 0xac80026c  sw          $zero, 0x26C($a0)
    ctx->pc = 0x138538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 620), GPR_U32(ctx, 0));
    // 0x13853c: 0xa0800278  sb          $zero, 0x278($a0)
    ctx->pc = 0x13853cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 632), (uint8_t)GPR_U32(ctx, 0));
    // 0x138540: 0xac800260  sw          $zero, 0x260($a0)
    ctx->pc = 0x138540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 0));
    // 0x138544: 0xac800254  sw          $zero, 0x254($a0)
    ctx->pc = 0x138544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 0));
    // 0x138548: 0xac80025c  sw          $zero, 0x25C($a0)
    ctx->pc = 0x138548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 604), GPR_U32(ctx, 0));
    // 0x13854c: 0x3e00008  jr          $ra
    ctx->pc = 0x13854Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13854Cu;
        // 0x138550: 0xac800258  sw          $zero, 0x258($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13854Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138554u;
    // 0x138554: 0x0  nop
    ctx->pc = 0x138554u;
    // NOP
    ctx->pc = 0x138558u;
}
