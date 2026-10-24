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

// Function: func_002B2AE8
// Address: 0x2b2ae8 - 0x2b2b08
void func_002B2AE8_0x2b2ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B2AE8_0x2b2ae8");
#endif

    ctx->pc = 0x2b2ae8u;

    // 0x2b2ae8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b2ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2aec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2af0: 0xa08300a4  sb          $v1, 0xA4($a0)
    ctx->pc = 0x2b2af0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 164), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b2af4: 0xa080003c  sb          $zero, 0x3C($a0)
    ctx->pc = 0x2b2af4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2af8: 0xa0830070  sb          $v1, 0x70($a0)
    ctx->pc = 0x2b2af8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b2afc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AFCu;
        // 0x2b2b00: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2B04u;
    // 0x2b2b04: 0x0  nop
    ctx->pc = 0x2b2b04u;
    // NOP
    ctx->pc = 0x2b2b08u;
}
