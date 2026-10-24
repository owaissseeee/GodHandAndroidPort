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

// Function: Obj0000_Set_Fields_166C_1664_1674_167C_Short_1682_10A420
// Address: 0x10a420 - 0x10a438
void Obj0000_Set_Fields_166C_1664_1674_167C_Short_1682_10A420_0x10a420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Fields_166C_1664_1674_167C_Short_1682_10A420_0x10a420");
#endif

    ctx->pc = 0x10a420u;

    // 0x10a420: 0xa4891682  sh          $t1, 0x1682($a0)
    ctx->pc = 0x10a420u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5762), (uint16_t)GPR_U32(ctx, 9));
    // 0x10a424: 0xac85166c  sw          $a1, 0x166C($a0)
    ctx->pc = 0x10a424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5740), GPR_U32(ctx, 5));
    // 0x10a428: 0xac861664  sw          $a2, 0x1664($a0)
    ctx->pc = 0x10a428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5732), GPR_U32(ctx, 6));
    // 0x10a42c: 0xac871674  sw          $a3, 0x1674($a0)
    ctx->pc = 0x10a42cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5748), GPR_U32(ctx, 7));
    // 0x10a430: 0x3e00008  jr          $ra
    ctx->pc = 0x10A430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A430u;
        // 0x10a434: 0xac88167c  sw          $t0, 0x167C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5756), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A438u;
}
