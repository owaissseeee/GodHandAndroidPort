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

// Function: Tramp_func_001BFB80_00171000
// Address: 0x171000 - 0x171020
void Tramp_func_001BFB80_00171000_0x171000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001BFB80_00171000_0x171000");
#endif

    switch (ctx->pc) {
        case 0x171010u: goto label_171010;
        default: break;
    }

    ctx->pc = 0x171000u;

    // 0x171000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171008: 0xc06f5ac  jal         func_1BD6B0
    ctx->pc = 0x171008u;
    SET_GPR_U32(ctx, 31, 0x171010u);
    ctx->pc = 0x1BD6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD6B0u, 0x171008u, 0x171010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171010u;
label_171010:
    // 0x171010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171014: 0x3e00008  jr          $ra
    ctx->pc = 0x171014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171014u;
        // 0x171018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17101Cu;
    // 0x17101c: 0x0  nop
    ctx->pc = 0x17101cu;
    // NOP
    ctx->pc = 0x171020u;
}
