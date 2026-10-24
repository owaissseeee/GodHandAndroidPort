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

// Function: func_003B0450
// Address: 0x3b0450 - 0x3b0468
void func_003B0450_0x3b0450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B0450_0x3b0450");
#endif

    ctx->pc = 0x3b0450u;

    // 0x3b0450: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x3b0450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3b0454: 0xfca00048  sd          $zero, 0x48($a1)
    ctx->pc = 0x3b0454u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 0));
    // 0x3b0458: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3b0458u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3b045c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B045Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B045Cu;
        // 0x3b0460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B045Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0464u;
    // 0x3b0464: 0x0  nop
    ctx->pc = 0x3b0464u;
    // NOP
    ctx->pc = 0x3b0468u;
}
