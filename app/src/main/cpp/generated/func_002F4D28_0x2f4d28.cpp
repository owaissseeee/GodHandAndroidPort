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

// Function: func_002F4D28
// Address: 0x2f4d28 - 0x2f4d48
void func_002F4D28_0x2f4d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F4D28_0x2f4d28");
#endif

    switch (ctx->pc) {
        case 0x2f4d38u: goto label_2f4d38;
        default: break;
    }

    ctx->pc = 0x2f4d28u;

    // 0x2f4d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f4d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f4d2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f4d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f4d30: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2F4D30u;
    SET_GPR_U32(ctx, 31, 0x2F4D38u);
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2F4D30u, 0x2F4D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D38u;
label_2f4d38:
    // 0x2f4d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f4d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D3Cu;
        // 0x2f4d40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4D44u;
    // 0x2f4d44: 0x0  nop
    ctx->pc = 0x2f4d44u;
    // NOP
    ctx->pc = 0x2f4d48u;
}
