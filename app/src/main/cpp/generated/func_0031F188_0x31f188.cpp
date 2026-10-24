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

// Function: func_0031F188
// Address: 0x31f188 - 0x31f1a8
void func_0031F188_0x31f188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031F188_0x31f188");
#endif

    ctx->pc = 0x31f188u;

    // 0x31f188: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31f188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31f18c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31f18cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31f190: 0x24420fc0  addiu       $v0, $v0, 0xFC0
    ctx->pc = 0x31f190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4032));
    // 0x31f194: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x31f194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x31f198: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x31f198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x31f19c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31f19cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x31F1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F1A0u;
        // 0x31f1a4: 0xac87000c  sw          $a3, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F1A8u;
}
