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

// Function: func_00303A20
// Address: 0x303a20 - 0x303a30
void func_00303A20_0x303a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00303A20_0x303a20");
#endif

    ctx->pc = 0x303a20u;

    // 0x303a20: 0x94830210  lhu         $v1, 0x210($a0)
    ctx->pc = 0x303a20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x303a24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303a28: 0x3e00008  jr          $ra
    ctx->pc = 0x303A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A28u;
        // 0x303a2c: 0xa4830224  sh          $v1, 0x224($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 548), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303A30u;
}
