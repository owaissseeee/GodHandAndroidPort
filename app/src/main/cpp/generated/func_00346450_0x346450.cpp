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

// Function: func_00346450
// Address: 0x346450 - 0x346478
void func_00346450_0x346450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346450_0x346450");
#endif

    ctx->pc = 0x346450u;

    // 0x346450: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x346450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x346454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x346454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346458: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x346458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34645c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x34645cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x346460: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x346460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x346464: 0xacc2e078  sw          $v0, -0x1F88($a2)
    ctx->pc = 0x346464u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EE078u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE078u, _value); } while (0);
    // 0x346468: 0xac60e07c  sw          $zero, -0x1F84($v1)
    ctx->pc = 0x346468u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EE07Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE07Cu, _value); } while (0);
    // 0x34646c: 0xac80e080  sw          $zero, -0x1F80($a0)
    ctx->pc = 0x34646cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EE080u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE080u, _value); } while (0);
    // 0x346470: 0x3e00008  jr          $ra
    ctx->pc = 0x346470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346470u;
        // 0x346474: 0xaca0e084  sw          $zero, -0x1F7C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294959236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346478u;
}
