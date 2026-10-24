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

// Function: cEmManage_getNextNo
// Address: 0x2930a8 - 0x2930b8
void cEmManage_getNextNo_0x2930a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_getNextNo_0x2930a8");
#endif

    ctx->pc = 0x2930a8u;

    // 0x2930a8: 0x8c82055c  lw          $v0, 0x55C($a0)
    ctx->pc = 0x2930a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1372)));
    // 0x2930ac: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2930acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2930b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2930B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2930B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930B0u;
        // 0x2930b4: 0xac83055c  sw          $v1, 0x55C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2930B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2930B8u;
}
