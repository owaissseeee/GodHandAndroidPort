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

// Function: cCoreSave_getGodItem
// Address: 0x1fac58 - 0x1fac68
void cCoreSave_getGodItem_0x1fac58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getGodItem_0x1fac58");
#endif

    ctx->pc = 0x1fac58u;

    // 0x1fac58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fac58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fac5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC5Cu;
        // 0x1fac60: 0x906200a8  lbu         $v0, 0xA8($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAC64u;
    // 0x1fac64: 0x0  nop
    ctx->pc = 0x1fac64u;
    // NOP
    ctx->pc = 0x1fac68u;
}
