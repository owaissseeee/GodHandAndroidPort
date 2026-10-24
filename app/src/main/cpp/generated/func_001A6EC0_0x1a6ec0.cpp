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

// Function: func_001A6EC0
// Address: 0x1a6ec0 - 0x1a6ee0
void func_001A6EC0_0x1a6ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A6EC0_0x1a6ec0");
#endif

    switch (ctx->pc) {
        case 0x1a6ed0u: goto label_1a6ed0;
        default: break;
    }

    ctx->pc = 0x1a6ec0u;

    // 0x1a6ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6ec8: 0xc069bc0  jal         func_1A6F00
    ctx->pc = 0x1A6EC8u;
    SET_GPR_U32(ctx, 31, 0x1A6ED0u);
    ctx->pc = 0x1A6F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6F00u, 0x1A6EC8u, 0x1A6ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6ED0u;
label_1a6ed0:
    // 0x1a6ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6ED4u;
        // 0x1a6ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6EDCu;
    // 0x1a6edc: 0x0  nop
    ctx->pc = 0x1a6edcu;
    // NOP
    ctx->pc = 0x1a6ee0u;
}
