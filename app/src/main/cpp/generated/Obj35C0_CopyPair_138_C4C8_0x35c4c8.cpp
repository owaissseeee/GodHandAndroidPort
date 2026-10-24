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

// Function: Obj35C0_CopyPair_138_C4C8
// Address: 0x35c4c8 - 0x35c4e0
void Obj35C0_CopyPair_138_C4C8_0x35c4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj35C0_CopyPair_138_C4C8_0x35c4c8");
#endif

    ctx->pc = 0x35c4c8u;

    // 0x35c4c8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x35c4c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35c4cc: 0xfc820138  sd          $v0, 0x138($a0)
    ctx->pc = 0x35c4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 312), GPR_U64(ctx, 2));
    // 0x35c4d0: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x35c4d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x35c4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x35C4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C4D4u;
        // 0x35c4d8: 0xfc830140  sd          $v1, 0x140($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 320), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C4DCu;
    // 0x35c4dc: 0x0  nop
    ctx->pc = 0x35c4dcu;
    // NOP
    ctx->pc = 0x35c4e0u;
}
