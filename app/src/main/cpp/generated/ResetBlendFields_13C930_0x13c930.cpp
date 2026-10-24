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

// Function: ResetBlendFields_13C930
// Address: 0x13c930 - 0x13c950
void ResetBlendFields_13C930_0x13c930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetBlendFields_13C930_0x13c930");
#endif

    ctx->pc = 0x13c930u;

    // 0x13c930: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13c930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13c934: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13c934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c938: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x13c938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x13c93c: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x13c93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x13c940: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x13c940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x13c944: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x13c944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x13c948: 0x3e00008  jr          $ra
    ctx->pc = 0x13C948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C948u;
        // 0x13c94c: 0xac8000a0  sw          $zero, 0xA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C950u;
}
