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

// Function: Tramp_func_001BFB80_00170970
// Address: 0x170970 - 0x170990
void Tramp_func_001BFB80_00170970_0x170970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001BFB80_00170970_0x170970");
#endif

    switch (ctx->pc) {
        case 0x170980u: goto label_170980;
        default: break;
    }

    ctx->pc = 0x170970u;

    // 0x170970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170978: 0xc06fee0  jal         func_1BFB80
    ctx->pc = 0x170978u;
    SET_GPR_U32(ctx, 31, 0x170980u);
    ctx->pc = 0x1BFB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB80u, 0x170978u, 0x170980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170980u;
label_170980:
    // 0x170980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170984: 0x3e00008  jr          $ra
    ctx->pc = 0x170984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170984u;
        // 0x170988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17098Cu;
    // 0x17098c: 0x0  nop
    ctx->pc = 0x17098cu;
    // NOP
    ctx->pc = 0x170990u;
}
