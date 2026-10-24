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

// Function: Tramp_func_001BFB80_001834F0
// Address: 0x1834f0 - 0x183510
void Tramp_func_001BFB80_001834F0_0x1834f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001BFB80_001834F0_0x1834f0");
#endif

    switch (ctx->pc) {
        case 0x183500u: goto label_183500;
        default: break;
    }

    ctx->pc = 0x1834f0u;

    // 0x1834f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1834f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1834f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1834f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1834f8: 0xc06fee0  jal         func_1BFB80
    ctx->pc = 0x1834F8u;
    SET_GPR_U32(ctx, 31, 0x183500u);
    ctx->pc = 0x1BFB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB80u, 0x1834F8u, 0x183500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183500u;
label_183500:
    // 0x183500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183504: 0x3e00008  jr          $ra
    ctx->pc = 0x183504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183504u;
        // 0x183508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18350Cu;
    // 0x18350c: 0x0  nop
    ctx->pc = 0x18350cu;
    // NOP
    ctx->pc = 0x183510u;
}
