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

// Function: Obj35C0_CopyPair_158_C4F8
// Address: 0x35c4f8 - 0x35c510
void Obj35C0_CopyPair_158_C4F8_0x35c4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj35C0_CopyPair_158_C4F8_0x35c4f8");
#endif

    ctx->pc = 0x35c4f8u;

    // 0x35c4f8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x35c4f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35c4fc: 0xfc820158  sd          $v0, 0x158($a0)
    ctx->pc = 0x35c4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 344), GPR_U64(ctx, 2));
    // 0x35c500: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x35c500u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x35c504: 0x3e00008  jr          $ra
    ctx->pc = 0x35C504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C504u;
        // 0x35c508: 0xfc830160  sd          $v1, 0x160($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 352), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C50Cu;
    // 0x35c50c: 0x0  nop
    ctx->pc = 0x35c50cu;
    // NOP
    ctx->pc = 0x35c510u;
}
