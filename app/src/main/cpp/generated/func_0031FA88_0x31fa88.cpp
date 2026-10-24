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

// Function: func_0031FA88
// Address: 0x31fa88 - 0x31faa8
void func_0031FA88_0x31fa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FA88_0x31fa88");
#endif

    ctx->pc = 0x31fa88u;

    // 0x31fa88: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FA88u;
    {
        const bool branch_taken_0x31fa88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA88u;
        // 0x31fa8c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa88) {
            ctx->pc = 0x31FA9Cu;
            goto label_31fa9c;
        }
    }
    ctx->pc = 0x31FA90u;
    // 0x31fa90: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31fa94: 0x24421178  addiu       $v0, $v0, 0x1178
    ctx->pc = 0x31fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4472));
    // 0x31fa98: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x31fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_31fa9c:
    // 0x31fa9c: 0x3e00008  jr          $ra
    ctx->pc = 0x31FA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FAA4u;
    // 0x31faa4: 0x0  nop
    ctx->pc = 0x31faa4u;
    // NOP
    ctx->pc = 0x31faa8u;
}
