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

// Function: func_00356E80
// Address: 0x356e80 - 0x356e98
void func_00356E80_0x356e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00356E80_0x356e80");
#endif

    ctx->pc = 0x356e80u;

    // 0x356e80: 0x8c831fc0  lw          $v1, 0x1FC0($a0)
    ctx->pc = 0x356e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x356e84: 0x24631128  addiu       $v1, $v1, 0x1128
    ctx->pc = 0x356e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4392));
    // 0x356e88: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x356e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x356e8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x356e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x356e90: 0x3e00008  jr          $ra
    ctx->pc = 0x356E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356E90u;
        // 0x356e94: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356E98u;
}
