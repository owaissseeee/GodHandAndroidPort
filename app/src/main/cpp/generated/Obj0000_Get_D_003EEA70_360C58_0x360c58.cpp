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

// Function: Obj0000_Get_D_003EEA70_360C58
// Address: 0x360c58 - 0x360c80
void Obj0000_Get_D_003EEA70_360C58_0x360c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_D_003EEA70_360C58_0x360c58");
#endif

    ctx->pc = 0x360c58u;

    // 0x360c58: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x360c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x360c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x360C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360C5Cu;
        // 0x360c60: 0xdc62ea70  ld          $v0, -0x1590($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294961776)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360C64u;
    // 0x360c64: 0x0  nop
    ctx->pc = 0x360c64u;
    // NOP
    // 0x360c68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x360c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x360c6c: 0x0  nop
    ctx->pc = 0x360c6cu;
    // NOP
    // 0x360c70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x360c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x360c74: 0x0  nop
    ctx->pc = 0x360c74u;
    // NOP
    // 0x360c78: 0x0  nop
    ctx->pc = 0x360c78u;
    // NOP
    // 0x360c7c: 0x0  nop
    ctx->pc = 0x360c7cu;
    // NOP
    ctx->pc = 0x360c80u;
}
