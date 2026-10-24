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

// Function: Obj0000_Get_D_003EEA70_LT_2_360C40
// Address: 0x360c40 - 0x360c58
void Obj0000_Get_D_003EEA70_LT_2_360C40_0x360c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_D_003EEA70_LT_2_360C40_0x360c40");
#endif

    ctx->pc = 0x360c40u;

    // 0x360c40: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x360c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x360c44: 0xdc62ea70  ld          $v0, -0x1590($v1)
    ctx->pc = 0x360c44u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3EEA70u));
    // 0x360c48: 0x3e00008  jr          $ra
    ctx->pc = 0x360C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360C48u;
        // 0x360c4c: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360C50u;
    // 0x360c50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x360c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x360c54: 0x0  nop
    ctx->pc = 0x360c54u;
    // NOP
    ctx->pc = 0x360c58u;
}
