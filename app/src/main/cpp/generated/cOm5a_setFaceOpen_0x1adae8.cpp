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

// Function: cOm5a_setFaceOpen
// Address: 0x1adae8 - 0x1adaf8
void cOm5a_setFaceOpen_0x1adae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm5a_setFaceOpen_0x1adae8");
#endif

    ctx->pc = 0x1adae8u;

    // 0x1adae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1adae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1adaec: 0xac800604  sw          $zero, 0x604($a0)
    ctx->pc = 0x1adaecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1540), GPR_U32(ctx, 0));
    // 0x1adaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAF0u;
        // 0x1adaf4: 0xac820608  sw          $v0, 0x608($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADAF8u;
}
