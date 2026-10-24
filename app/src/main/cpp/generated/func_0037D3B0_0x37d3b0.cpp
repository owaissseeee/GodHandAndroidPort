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

// Function: func_0037D3B0
// Address: 0x37d3b0 - 0x37d3c8
void func_0037D3B0_0x37d3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D3B0_0x37d3b0");
#endif

    ctx->pc = 0x37d3b0u;

    // 0x37d3b0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x37d3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x37d3b4: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x37d3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x37d3b8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x37d3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x37d3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x37D3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D3BCu;
        // 0x37d3c0: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D3C4u;
    // 0x37d3c4: 0x0  nop
    ctx->pc = 0x37d3c4u;
    // NOP
    ctx->pc = 0x37d3c8u;
}
