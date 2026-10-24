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

// Function: func_0031FA68
// Address: 0x31fa68 - 0x31fa88
void func_0031FA68_0x31fa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FA68_0x31fa68");
#endif

    ctx->pc = 0x31fa68u;

    // 0x31fa68: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FA68u;
    {
        const bool branch_taken_0x31fa68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA68u;
        // 0x31fa6c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa68) {
            ctx->pc = 0x31FA7Cu;
            goto label_31fa7c;
        }
    }
    ctx->pc = 0x31FA70u;
    // 0x31fa70: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31fa74: 0x24421188  addiu       $v0, $v0, 0x1188
    ctx->pc = 0x31fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4488));
    // 0x31fa78: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x31fa78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_31fa7c:
    // 0x31fa7c: 0x3e00008  jr          $ra
    ctx->pc = 0x31FA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FA84u;
    // 0x31fa84: 0x0  nop
    ctx->pc = 0x31fa84u;
    // NOP
    ctx->pc = 0x31fa88u;
}
