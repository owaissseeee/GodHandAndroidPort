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

// Function: Obj0000_Set_D_003D1410_And_D_003D1414_32AB58
// Address: 0x32ab58 - 0x32ab70
void Obj0000_Set_D_003D1410_And_D_003D1414_32AB58_0x32ab58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_003D1410_And_D_003D1414_32AB58_0x32ab58");
#endif

    ctx->pc = 0x32ab58u;

    // 0x32ab58: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x32ab5c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x32ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x32ab60: 0xac441410  sw          $a0, 0x1410($v0)
    ctx->pc = 0x32ab60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3D1410u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D1410u, _value); } while (0);
    // 0x32ab64: 0x3e00008  jr          $ra
    ctx->pc = 0x32AB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB64u;
        // 0x32ab68: 0xac641414  sw          $a0, 0x1414($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5140), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AB6Cu;
    // 0x32ab6c: 0x0  nop
    ctx->pc = 0x32ab6cu;
    // NOP
    ctx->pc = 0x32ab70u;
}
