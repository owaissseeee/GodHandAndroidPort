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

// Function: Tramp_func_001B79B0_001A5B08
// Address: 0x1a5b08 - 0x1a5b28
void Tramp_func_001B79B0_001A5B08_0x1a5b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001B79B0_001A5B08_0x1a5b08");
#endif

    switch (ctx->pc) {
        case 0x1a5b18u: goto label_1a5b18;
        default: break;
    }

    ctx->pc = 0x1a5b08u;

    // 0x1a5b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a5b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a5b0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5b10: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x1A5B10u;
    SET_GPR_U32(ctx, 31, 0x1A5B18u);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x1A5B10u, 0x1A5B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5B18u;
label_1a5b18:
    // 0x1a5b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B1Cu;
        // 0x1a5b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5B24u;
    // 0x1a5b24: 0x0  nop
    ctx->pc = 0x1a5b24u;
    // NOP
    ctx->pc = 0x1a5b28u;
}
