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

// Function: Obj35C0_CopyPair_148_C4E0
// Address: 0x35c4e0 - 0x35c4f8
void Obj35C0_CopyPair_148_C4E0_0x35c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj35C0_CopyPair_148_C4E0_0x35c4e0");
#endif

    ctx->pc = 0x35c4e0u;

    // 0x35c4e0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x35c4e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35c4e4: 0xfc820148  sd          $v0, 0x148($a0)
    ctx->pc = 0x35c4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 328), GPR_U64(ctx, 2));
    // 0x35c4e8: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x35c4e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x35c4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x35C4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C4ECu;
        // 0x35c4f0: 0xfc830150  sd          $v1, 0x150($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 336), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C4F4u;
    // 0x35c4f4: 0x0  nop
    ctx->pc = 0x35c4f4u;
    // NOP
    ctx->pc = 0x35c4f8u;
}
