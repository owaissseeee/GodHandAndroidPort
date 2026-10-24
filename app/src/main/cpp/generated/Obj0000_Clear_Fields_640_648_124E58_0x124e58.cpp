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

// Function: Obj0000_Clear_Fields_640_648_124E58
// Address: 0x124e58 - 0x124e68
void Obj0000_Clear_Fields_640_648_124E58_0x124e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Clear_Fields_640_648_124E58_0x124e58");
#endif

    ctx->pc = 0x124e58u;

    // 0x124e58: 0xa0800648  sb          $zero, 0x648($a0)
    ctx->pc = 0x124e58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1608), (uint8_t)GPR_U32(ctx, 0));
    // 0x124e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x124E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E5Cu;
        // 0x124e60: 0xac800640  sw          $zero, 0x640($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124E64u;
    // 0x124e64: 0x0  nop
    ctx->pc = 0x124e64u;
    // NOP
    ctx->pc = 0x124e68u;
}
