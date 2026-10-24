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

// Function: func_001A0320
// Address: 0x1a0320 - 0x1a0340
void func_001A0320_0x1a0320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A0320_0x1a0320");
#endif

    switch (ctx->pc) {
        case 0x1a0330u: goto label_1a0330;
        default: break;
    }

    ctx->pc = 0x1a0320u;

    // 0x1a0320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0328: 0xc070a74  jal         func_1C29D0
    ctx->pc = 0x1A0328u;
    SET_GPR_U32(ctx, 31, 0x1A0330u);
    ctx->pc = 0x1C29D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C29D0u, 0x1A0328u, 0x1A0330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0330u;
label_1a0330:
    // 0x1a0330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0334: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0334u;
        // 0x1a0338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A033Cu;
    // 0x1a033c: 0x0  nop
    ctx->pc = 0x1a033cu;
    // NOP
    ctx->pc = 0x1a0340u;
}
