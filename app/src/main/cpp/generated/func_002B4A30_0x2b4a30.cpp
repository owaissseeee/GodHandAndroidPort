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

// Function: func_002B4A30
// Address: 0x2b4a30 - 0x2b4a50
void func_002B4A30_0x2b4a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B4A30_0x2b4a30");
#endif

    switch (ctx->pc) {
        case 0x2b4a40u: goto label_2b4a40;
        default: break;
    }

    ctx->pc = 0x2b4a30u;

    // 0x2b4a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4a38: 0xc0d1584  jal         func_345610
    ctx->pc = 0x2B4A38u;
    SET_GPR_U32(ctx, 31, 0x2B4A40u);
    ctx->pc = 0x345610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345610u, 0x2B4A38u, 0x2B4A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4A40u;
label_2b4a40:
    // 0x2b4a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4a44: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A44u;
        // 0x2b4a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4A4Cu;
    // 0x2b4a4c: 0x0  nop
    ctx->pc = 0x2b4a4cu;
    // NOP
    ctx->pc = 0x2b4a50u;
}
